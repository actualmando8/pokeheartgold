/* Decompiled from asm/overlay_73.s */
#include "global.h"

void ov73_021E5900(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r7, r0, #0
    // cmp r1, #0
    // beq _021E5916
    // cmp r1, #1
    // bne _021E5914
    // b _021E5A80
    // b _021E5A8E
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _021E5A94 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _021E5A98 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r2, #0x41
    // mov r0, #3
    // mov r1, #0x32
    // lsl r2, r2, #0xc
    // bl Heap_Create
    // mov r0, #0x54
    // mov r1, #0x32
    // bl NARC_New
    // add r6, r0, #0
    // ldr r1, _021E5A9C ; =0x00004A8C
    // add r0, r7, #0
    // mov r2, #0x32
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _021E5A9C ; =0x00004A8C
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x32
    // bl BgConfig_Alloc
    // str r0, [r4]
    // add r0, r7, #0
    // bl OverlayManager_GetArgs
    // str r0, [r4, #8]
    // ldr r1, [r0]
    // ldr r0, _021E5AA0 ; =0x00004A0C
    // str r1, [r4, r0]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #0x10]
    // bl MenuInputStateMgr_GetState
    // mov r1, #0xc5
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x32
    // bl MessageFormat_New
    // str r0, [r4, #0x24]
    // ldr r2, _021E5AA4 ; =0x000001A6
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x32
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x28]
    // mov r0, #4
    // mov r1, #0x32
    // bl FontID_Alloc
    // mov r0, #4
    // mov r1, #8
    // bl SetKeyRepeatTimers
    // bl ov73_021E5D00
    // ldr r0, [r4]
    // bl ov73_021E5D20
    // mov r0, #0
    // bl SetMasterBrightnessNeutral
    // mov r0, #1
    // bl SetMasterBrightnessNeutral
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x32
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #0x11
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov73_021E5F38
    // bl sub_020210BC
    // mov r0, #2
    // bl sub_02021148
    // ldr r0, _021E5AA8 ; =ov73_021E5CD8
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov73_021E5E0C
    // bl ov73_021E6060
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov73_021E6090
    // add r0, r4, #0
    // bl ov73_021E6184
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov73_021E629C
    // add r0, r4, #0
    // bl ov73_021E7230
    // mov r1, #0
    // mov r0, #0x34
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // ldr r2, _021E5AAC ; =0x04000304
    // ldr r0, _021E5AB0 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // add r0, r4, #0
    // bl sub_0208FB64
    // bl sub_0203893C
    // mov r0, #3
    // bl sub_02038C1C
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E5A54
    // mov r0, #2
    // bl sub_0205A904
    // bl sub_0203A880
    // ldr r0, _021E5AA0 ; =0x00004A0C
    // mov r1, #0xe2
    // lsl r1, r1, #2
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // bl ov73_021EA374
    // ldr r0, _021E5AB4 ; =ov73_021E5C74
    // add r1, r4, #0
    // mov r2, #5
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r4, #0x20]
    // add r0, r6, #0
    // bl NARC_Delete
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _021E5A8E
    // bl OverlayManager_GetData
    // mov r0, #0
    // str r0, [r5]
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021E5A94: .word 0xFFFFE0FF
    // _021E5A98: .word 0x04001000
    // _021E5A9C: .word 0x00004A8C
    // _021E5AA0: .word 0x00004A0C
    // _021E5AA4: .word 0x000001A6
    // _021E5AA8: .word ov73_021E5CD8
    // _021E5AAC: .word 0x04000304
    // _021E5AB0: .word 0xFFFF7FFF
    // _021E5AB4: .word ov73_021E5C74
    // TODO: decompile
}



void ov73_021E5AB8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E5ADE
    // ldr r0, _021E5B9C ; =0x00004A24
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _021E5ADE
    // bl sub_02033250
    // ldr r1, _021E5B9C ; =0x00004A24
    // ldr r2, [r4, r1]
    // and r0, r2
    // str r0, [r4, r1]
    // ldr r1, [r5]
    // cmp r1, #3
    // bhi _021E5B92
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E5AF0: ; jump table
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E5B92
    // mov r0, #1
    // str r0, [r5]
    // bl sub_0203769C
    // cmp r0, #0
    // beq _021E5B92
    // bl ov73_021E746C
    // cmp r0, #2
    // ble _021E5B92
    // mov r1, #0
    // mov r0, #0x72
    // add r2, r1, #0
    // bl sub_02037030
    // b _021E5B92
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // lsl r2, r0, #2
    // ldr r0, _021E5BA0 ; =_021EA7C0
    // ldr r2, [r0, r2]
    // cmp r2, #0
    // beq _021E5B36
    // add r0, r4, #0
    // blx r2
    // str r0, [r5]
    // ldr r0, _021E5BA4 ; =0x00004A14
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _021E5B4E
    // mov r0, #0xa6
    // lsl r0, r0, #2
    // ldr r2, _021E5BA8 ; =0x00010300
    // add r0, r4, r0
    // mov r1, #0
    // add r3, r4, #0
    // bl ov73_021E735C
    // add r0, r4, #0
    // bl ov73_021E762C
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E5B92
    // add r0, r4, #0
    // mov r1, #1
    // bl ov73_021E7870
    // ldr r1, [r5]
    // cmp r1, #1
    // bne _021E5B92
    // str r0, [r5]
    // b _021E5B92
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // lsl r2, r0, #2
    // ldr r0, _021E5BA0 ; =_021EA7C0
    // ldr r2, [r0, r2]
    // cmp r2, #0
    // beq _021E5B92
    // add r0, r4, #0
    // blx r2
    // str r0, [r5]
    // b _021E5B92
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E5B92
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x50]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021E5B9C: .word 0x00004A24
    // _021E5BA0: .word _021EA7C0
    // _021E5BA4: .word 0x00004A14
    // _021E5BA8: .word 0x00010300
    // TODO: decompile
}



void ov73_021E5BAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // bl OverlayManager_GetData
    // add r6, r0, #0
    // ldr r0, [r6, #0x20]
    // bl SysTask_Destroy
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // mov r0, #0x1b
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // bl sub_0200B0A8
    // mov r7, #0x5f
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // bl Destroy2DGfxResObjMan
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _021E5BD8
    // ldr r0, [r6, #0x50]
    // bl SpriteList_Delete
    // bl OamManager_Free
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // add r0, r6, #0
    // bl ov73_021E6400
    // add r0, r6, #0
    // bl ov73_021E6048
    // ldr r0, [r6]
    // bl ov73_021E5F0C
    // mov r0, #2
    // bl sub_02038C1C
    // bl sub_02037FF0
    // ldr r0, [r6, #8]
    // ldr r0, [r0, #4]
    // bl sub_0205AD24
    // bl sub_02021238
    // mov r0, #4
    // bl FontID_Release
    // ldr r0, [r6, #0x28]
    // bl DestroyMsgData
    // ldr r0, [r6, #0x24]
    // bl MessageFormat_Delete
    // ldr r0, [r6, #8]
    // mov r1, #0xc5
    // lsl r1, r1, #2
    // ldr r0, [r0, #0x10]
    // ldr r1, [r6, r1]
    // bl MenuInputStateMgr_SetState
    // add r0, r6, #0
    // bl ov73_021E5ED4
    // ldr r0, [sp]
    // bl OverlayManager_FreeData
    // ldr r2, _021E5C70 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #0
    // bl sub_0205A904
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x32
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E5C70: .word 0x04000304
    // TODO: decompile
}



void ov73_021E5C74(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0xc
    // cmp r0, #0
    // beq _021E5CCE
    // ldr r0, [r1, #4]
    // ldr r3, [r1, #8]
    // lsl r2, r0, #1
    // ldr r0, _021E5CD0 ; =ov73_021EA52A
    // ldrb r0, [r0, r2]
    // cmp r3, r0
    // ble _021E5CBE
    // mov r0, #0
    // str r0, [r1, #8]
    // ldr r2, [r1, #4]
    // add r2, r2, #1
    // str r2, [r1, #4]
    // lsl r3, r2, #1
    // ldr r2, _021E5CD4 ; =ov73_021EA52B
    // ldrb r2, [r2, r3]
    // cmp r2, #0xff
    // bne _021E5CA4
    // str r0, [r1, #4]
    // ldr r0, [r1, #0x10]
    // ldr r1, [r1, #4]
    // ldr r0, [r0, #0xc]
    // lsl r2, r1, #1
    // ldr r1, _021E5CD4 ; =ov73_021EA52B
    // ldrb r1, [r1, r2]
    // mov r2, #0x20
    // lsl r1, r1, #5
    // add r0, r0, r1
    // mov r1, #0
    // bl GX_LoadOBJPltt
    // b _021E5CC4
    // ldr r0, [r4, #0x14]
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // mov r0, #0xde
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov73_021E72F4
    // pop {r4, pc}
    // _021E5CD0: .word ov73_021EA52A
    // _021E5CD4: .word ov73_021EA52B
    // TODO: decompile
}



void ov73_021E5CD8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r0, [r4]
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _021E5CF8 ; =0x027E0000
    // ldr r1, _021E5CFC ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _021E5CF8: .word 0x027E0000
    // _021E5CFC: .word 0x00003FF8
    // TODO: decompile
}



void ov73_021E5D00(void) {
}



void ov73_021E5D20(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x80
    // ldr r5, _021E5DF8 ; =ov73_021EA540
    // add r3, sp, #0x70
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _021E5DFC ; =ov73_021EA5B0
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E5E00 ; =ov73_021EA5CC
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E5E04 ; =ov73_021EA578
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E5E08 ; =ov73_021EA594
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x32
    // bl BG_ClearCharDataRange
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x32
    // bl BG_ClearCharDataRange
    // add sp, #0x80
    // pop {r3, r4, r5, pc}
    // nop
    // _021E5DF8: .word ov73_021EA540
    // _021E5DFC: .word ov73_021EA5B0
    // _021E5E00: .word ov73_021EA5CC
    // _021E5E04: .word ov73_021EA578
    // _021E5E08: .word ov73_021EA594
    // TODO: decompile
}



void ov73_021E5E0C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r7, #0
    // add r6, r0, #0
    // add r4, r0, #0
    // add r5, r0, #0
    // mov r0, #8
    // mov r1, #0x32
    // bl String_New
    // str r0, [r6, #0x2c]
    // mov r0, #0xce
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _021E5EC8 ; =0x00004A3C
    // add r7, r7, #1
    // str r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [r5, r0]
    // ldr r0, _021E5ECC ; =0x00004A44
    // add r4, #8
    // str r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [r5, r0]
    // mov r0, #0x36
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // add r6, r6, #4
    // add r5, #0x10
    // cmp r7, #5
    // blt _021E5E1C
    // mov r0, #0xb4
    // mov r1, #0x32
    // bl String_New
    // ldr r1, [sp]
    // str r0, [r1, #0x44]
    // mov r0, #0x28
    // mov r1, #0x32
    // bl String_New
    // ldr r1, [sp]
    // mov r2, #0
    // str r0, [r1, #0x48]
    // mov r1, #0xc6
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // str r2, [r0, r1]
    // ldr r2, [sp]
    // ldr r0, [r0, #0x28]
    // ldr r2, [r2, #0x48]
    // mov r1, #0x11
    // bl ReadMsgDataIntoString
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // bl ov73_021E7740
    // mov r0, #0x32
    // bl sub_0205B4A4
    // mov r2, #0xdf
    // ldr r1, [sp]
    // lsl r2, r2, #2
    // str r0, [r1, r2]
    // ldr r2, [sp]
    // ldr r0, [sp]
    // mov r1, #0
    // str r1, [r0, #0xc]
    // str r1, [r0, #0x14]
    // str r1, [r0, #0x10]
    // ldr r0, [sp, #4]
    // mov r1, #7
    // add r2, #0x1c
    // mov r3, #0x32
    // bl GfGfxLoader_GetPlttDataFromOpenNarc
    // ldr r1, [sp]
    // ldr r2, _021E5ED0 ; =0x00004A18
    // str r0, [r1, #0x18]
    // mov r0, #0
    // str r0, [r1, r2]
    // add r3, r2, #4
    // mov r4, #2
    // str r4, [r1, r3]
    // sub r2, r2, #3
    // strb r0, [r1, r2]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E5EC8: .word 0x00004A3C
    // _021E5ECC: .word 0x00004A44
    // _021E5ED0: .word 0x00004A18
    // TODO: decompile
}



void ov73_021E5ED4(void) {
    ov73_021E77E8();
    Heap_Free(*((u32*)(r6 + 0x18)));
    // ldr r0, [r6, r0]
    Heap_Free((0xdf << 2));
    String_Delete(*((u32*)(r6 + 0x2c)));
    String_Delete(*((u32*)(r6 + 0x48)));
    String_Delete(*((u32*)(r6 + 0x44)));
}



void ov73_021E5F0C(void) {
}



void ov73_021E5F38(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r1, 0, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 4, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 5, r6, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 6, r6, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 1, r6, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 2, r6, 1);
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 3, 1, (0xc3 << 2));
    // str r0, [r5, r1]
    LoadFontPal1(0, (6 << 6), 0x32);
    LoadFontPal0(0, (0x1a << 4), 0x32);
    LoadFontPal1(4, (6 << 6), 0x32);
    LoadFontPal0(4, (0x1a << 4), 0x32);
    Options_GetFrame(*((u32*)(*((u32*)(r5 + 8)) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r6, 0, 1, 0xb);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r6, 0, 0x1f, 0xa);
}



void ov73_021E6048(void) {
}



void ov73_021E6060(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _021E608C ; =ov73_021EA550
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl ObjCharTransfer_Init
    // mov r0, #0x14
    // mov r1, #0x32
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _021E608C: .word ov73_021EA550
    // TODO: decompile
}



void ov73_021E6090(void) {
    // str r1, [sp, #0x14]
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    // add r1, #0x54
    G2dRenderer_Init(0x1e, r6, 0x32);
    *((u32*)(r6 + 0x50)) = r0;
    // add r0, #0x54
    G2dRenderer_SetSubSurfaceCoords(r6, 0, (1 << 0x14));
    Create2DGfxResObjMan(3, 0, 0x32);
    // str r0, [r5, r7]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0x14]
    AddCharResObjFromOpenNarc((0x5f << 2), 8, 1);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x2c
    // str r0, [sp, #0xc]
    // ldr r0, [r6, r1]
    // ldr r1, [sp, #0x14]
    AddPlttResObjFromOpenNarc(0x32, (0x6b << 2), 7, 0);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    // ldr r1, [sp, #0x14]
    AddCellOrAnimResObjFromOpenNarc(0x32, (0x1b << 4), 9, 1);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    // ldr r1, [sp, #0x14]
    AddCellOrAnimResObjFromOpenNarc(0x32, (0x6d << 2), 0xa, 1);
    // str r0, [r6, r1]
    // sub r1, #0xc
    // ldr r0, [r6, r1]
    sub_0200ACF0((0x6e << 2));
    // ldr r0, [r6, r0]
    sub_0200AF94((0x1b << 4));
}



void ov73_021E6184(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // mov r1, #2
    // add r5, r0, #0
    // str r1, [sp]
    // sub r0, r1, #3
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r3, #0x5f
    // str r0, [sp, #0xc]
    // mov r2, #1
    // lsl r3, r3, #2
    // str r2, [sp, #0x10]
    // ldr r2, [r5, r3]
    // str r2, [sp, #0x14]
    // add r2, r3, #4
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x18]
    // add r2, r3, #0
    // add r2, #8
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x1c]
    // add r2, r3, #0
    // add r2, #0xc
    // ldr r2, [r5, r2]
    // add r3, #0x88
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r5, r3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r5, #0x50]
    // mov r1, #0
    // str r0, [sp, #0x2c]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r0, r5, r0
    // str r0, [sp, #0x30]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // strh r1, [r0, #0x20]
    // mov r0, #1
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // mov r0, #0x32
    // str r0, [sp, #0x58]
    // mov r0, #0x15
    // lsl r0, r0, #0xe
    // str r0, [sp, #0x34]
    // mov r0, #0x1a
    // lsl r0, r0, #0xe
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    // bl Sprite_CreateAffine
    // mov r1, #0x8a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0x64
    // bl Sprite_SetDrawPriority
    // mov r7, #0x8b
    // ldr r4, _021E6298 ; =ov73_021EA560
    // mov r6, #0
    // lsl r7, r7, #2
    // ldrh r0, [r4, #4]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x34]
    // ldrh r0, [r4, #6]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    // bl Sprite_CreateAffine
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // sub r1, r6, #1
    // lsl r1, r1, #1
    // ldr r0, [r5, r0]
    // add r1, #0x1b
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, r7]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #5
    // blt _021E6232
    // mov r0, #6
    // lsl r0, r0, #0xe
    // str r0, [sp, #0x34]
    // mov r0, #0x1a
    // lsl r0, r0, #0x10
    // str r0, [sp, #0x38]
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E6298: .word ov73_021EA560
    // TODO: decompile
}



void ov73_021E629C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xc
    // str r0, [sp, #0xc]
    // mov r0, #0x5b
    // mov r1, #0xaa
    // str r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // mov r0, #0xaa
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #9
    // str r0, [sp, #0xc]
    // mov r0, #0xc7
    // mov r1, #0xae
    // str r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #0x10
    // bl AddWindowParameterized
    // mov r0, #0xae
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #9
    // str r0, [sp, #0xc]
    // ldr r0, _021E63B4 ; =0x00000133
    // mov r1, #0xb2
    // str r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #0x18
    // bl AddWindowParameterized
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #0x1a
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #9
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #0xb6
    // lsl r1, r1, #2
    // ldr r0, [r4]
    // add r1, r4, r1
    // mov r2, #4
    // mov r3, #3
    // bl AddWindowParameterized
    // mov r0, #0xb6
    // lsl r0, r0, #2
    // ldr r1, [r4, #0x48]
    // add r0, r4, r0
    // mov r2, #0
    // bl ov73_021E63BC
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0xb
    // str r0, [sp, #8]
    // mov r0, #9
    // str r0, [sp, #0xc]
    // mov r0, #0x35
    // mov r1, #0xa6
    // str r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r4]
    // add r1, r4, r1
    // mov r2, #4
    // mov r3, #8
    // bl AddWindowParameterized
    // mov r0, #0xa6
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xa6
    // lsl r0, r0, #2
    // ldr r2, _021E63B8 ; =0x00010300
    // add r0, r4, r0
    // mov r1, #0
    // add r3, r4, #0
    // bl ov73_021E735C
    // mov r0, #0x32
    // bl YesNoPrompt_Create
    // mov r1, #0xba
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _021E63B4: .word 0x00000133
    // _021E63B8: .word 0x00010300
    // TODO: decompile
}



void ov73_021E63BC(void) {
    FontID_String_GetWidth(1, 0);
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r4, [sp, #4]
    // sub r4, r3, r6
    // str r0, [sp, #8]
    // add r3, r4, r3
    // str r0, [sp, #0xc]
    // asr r3, r3, #1
    AddTextPrinterParameterizedWithColor(r5, 1, r7, (r4 >> 0x1f));
}



void ov73_021E6400(void) {
    // ldr r0, [r4, r0]
    YesNoPrompt_Destroy((0xba << 2));
    // add r0, r4, r0
    RemoveWindow((0xa6 << 2));
    // add r0, r4, r0
    RemoveWindow((0xb6 << 2));
    // add r0, r4, r0
    RemoveWindow((0xaa << 2));
    // add r0, r4, r0
    RemoveWindow((0xae << 2));
    // add r0, r4, r0
    RemoveWindow((0xb2 << 2));
}



void ov73_021E6444(void) {
    sub_020398D4(0, 1);
    sub_0203769C();
    sub_02037454();
    ov73_021E756C(r5, 2, 0);
    ov73_021E756C(r5, 8, 0);
    ov73_021E670C(r5, 3);
}



void ov73_021E6484(void) {
    ov73_021E6508();
    sub_0203769C();
    ov73_021E7340();
    ov73_021E7468(r5);
    ov73_021E7468(r5);
}



void ov73_021E64B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xc5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _021E64DE
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _021E64CA
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _021E6504 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _021E64FE
    // mov r0, #0xc5
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, _021E6504 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _021E64EA
    // mov r0, #0
    // pop {r4, pc}
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _021E64FE
    // mov r0, #0xc5
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _021E6504: .word gSystem
    // TODO: decompile
}



void ov73_021E6508(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r4, #0
    // bl ov73_021E64B0
    // ldr r0, _021E66C8 ; =ov73_021EA534
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // add r6, r0, #0
    // ldr r1, _021E66CC ; =0x0000FFD5
    // add r0, sp, #4
    // strh r1, [r0, #4]
    // sub r0, r4, #1
    // cmp r6, r0
    // beq _021E6544
    // add r0, sp, #8
    // str r0, [sp]
    // ldr r3, _021E66D0 ; =gSystem + 0x40
    // ldr r0, [r5]
    // ldrh r2, [r3, #0x20]
    // ldrh r3, [r3, #0x22]
    // mov r1, #1
    // bl DoesPixelAtScreenXYMatchPtrVal
    // cmp r0, #0
    // beq _021E6544
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, _021E66D4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // bne _021E6552
    // cmp r4, #1
    // bne _021E65BE
    // bl sub_0203769C
    // cmp r0, #0
    // beq _021E655C
    // b _021E669C
    // bl ov73_021E746C
    // ldr r1, _021E66D8 ; =0x00004A1C
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // bne _021E65B6
    // add r1, #8
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // bne _021E65B6
    // mov r1, #1
    // add r0, sp, #4
    // strb r1, [r0, #2]
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0
    // bl ov73_021E756C
    // add r0, r5, #0
    // mov r1, #0x16
    // bl ov73_021E670C
    // add r1, sp, #4
    // mov r0, #0x75
    // add r1, #2
    // mov r2, #1
    // bl sub_02037030
    // add r0, r5, #0
    // mov r1, #0
    // bl ov73_021E781C
    // ldr r0, _021E66DC ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov73_021E71E4
    // ldr r0, [r5]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // b _021E669C
    // ldr r0, _021E66E0 ; =0x000005F2
    // bl PlaySE
    // b _021E669C
    // mov r0, #2
    // tst r0, r1
    // bne _021E65C8
    // cmp r4, #2
    // bne _021E6670
    // bl sub_0203769C
    // cmp r0, #0
    // beq _021E660C
    // ldr r1, _021E66E4 ; =0x00004A10
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // bne _021E65F4
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #0
    // bl ov73_021E756C
    // add r0, r5, #0
    // mov r1, #4
    // bl ov73_021E670C
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // b _021E669C
    // add r0, r1, #0
    // add r0, #0x28
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bge _021E669C
    // mov r0, #2
    // add r1, #0x28
    // str r0, [r5, r1]
    // ldr r0, _021E66E0 ; =0x000005F2
    // bl PlaySE
    // b _021E669C
    // bl sub_02037454
    // ldr r1, _021E66D8 ; =0x00004A1C
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // bne _021E6668
    // add r1, #8
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // bne _021E6668
    // mov r1, #1
    // add r0, sp, #4
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #0
    // bl ov73_021E756C
    // add r0, r5, #0
    // mov r1, #4
    // bl ov73_021E670C
    // add r1, sp, #4
    // mov r0, #0x75
    // add r1, #1
    // mov r2, #1
    // bl sub_02037030
    // add r0, r5, #0
    // mov r1, #0
    // bl ov73_021E781C
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov73_021E71E4
    // ldr r0, [r5]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // b _021E669C
    // ldr r0, _021E66E0 ; =0x000005F2
    // bl PlaySE
    // b _021E669C
    // ldr r0, _021E66E8 ; =0x00004A20
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _021E669C
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E669C
    // bl sub_02037454
    // ldr r1, _021E66D8 ; =0x00004A1C
    // ldr r1, [r5, r1]
    // cmp r1, r0
    // bne _021E669C
    // mov r1, #0
    // add r0, sp, #4
    // strb r1, [r0]
    // mov r0, #0x75
    // add r1, sp, #4
    // mov r2, #1
    // bl sub_02037030
    // ldr r0, _021E66EC ; =0x00004A38
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // blt _021E66A8
    // sub r1, r1, #1
    // str r1, [r5, r0]
    // ldr r0, _021E66EC ; =0x00004A38
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _021E66C2
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov73_021E71E4
    // ldr r0, [r5]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021E66C8: .word ov73_021EA534
    // _021E66CC: .word 0x0000FFD5
    // _021E66D0: .word gSystem + 0x40
    // _021E66D4: .word gSystem
    // _021E66D8: .word 0x00004A1C
    // _021E66DC: .word 0x000005DC
    // _021E66E0: .word 0x000005F2
    // _021E66E4: .word 0x00004A10
    // _021E66E8: .word 0x00004A20
    // _021E66EC: .word 0x00004A38
    // TODO: decompile
}



void ov73_021E66F0(void) {
    // bx lr
    // TODO: decompile
}



void ov73_021E66F4(void) {
}



void ov73_021E670C(void) {
    // str r3, [r0, r2]
    // str r1, [r0, r2]
}



void ov73_021E671C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x4c]
    // add r4, r1, #0
    // bl ov73_021E75FC
    // cmp r0, #0
    // beq _021E6768
    // mov r1, #0xc7
    // lsl r1, r1, #2
    // ldr r2, [r5, r1]
    // sub r0, r1, #4
    // str r2, [r5, r0]
    // ldr r0, [r5, r1]
    // cmp r0, #3
    // bne _021E6768
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E674E
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov73_021E71E4
    // mov r1, #0
    // ldr r0, _021E6774 ; =0x00004A38
    // mvn r1, r1
    // str r1, [r5, r0]
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov73_021E71E4
    // ldr r0, [r5]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6774: .word 0x00004A38
    // TODO: decompile
}



void ov73_021E6778(void) {
    sub_0203769C();
    // str r0, [sp]
    // add r1, sp, #0
    sub_02037030(0x75, 1);
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 3);
}



void ov73_021E67A8(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // ldr r0, [r4]
    // mov r3, #0xc5
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x1f
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r1, #0x19
    // add r0, sp, #0
    // strb r1, [r0, #0x10]
    // mov r1, #6
    // strb r1, [r0, #0x11]
    // ldrb r1, [r0, #0x12]
    // mov r2, #0xf
    // lsl r3, r3, #2
    // bic r1, r2
    // ldr r2, [r4, r3]
    // sub r3, #0x2c
    // lsl r2, r2, #0x18
    // lsr r5, r2, #0x18
    // mov r2, #0xf
    // and r2, r5
    // orr r1, r2
    // strb r1, [r0, #0x12]
    // ldrb r2, [r0, #0x12]
    // mov r1, #0xf0
    // bic r2, r1
    // strb r2, [r0, #0x12]
    // ldr r0, [r4, r3]
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // ldr r0, _021E682C ; =0x00004A15
    // mov r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E6814
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #2
    // bl ov73_021E71E4
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #2
    // bl ov73_021E71E4
    // ldr r0, [r4]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _021E682C: .word 0x00004A15
    // TODO: decompile
}



void ov73_021E6830(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E6888 ; =0x00004A15
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _021E6886
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_IsInTouchMode
    // mov r1, #0xc5
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // sub r1, #0x2c
    // ldr r0, [r4, r1]
    // bl YesNoPrompt_Reset
    // ldr r0, _021E6888 ; =0x00004A15
    // mov r1, #0
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E686C
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov73_021E71E4
    // mov r1, #0
    // ldr r0, _021E688C ; =0x00004A38
    // mvn r1, r1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov73_021E71E4
    // ldr r0, [r4]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // pop {r4, pc}
    // _021E6888: .word 0x00004A15
    // _021E688C: .word 0x00004A38
    // TODO: decompile
}



void ov73_021E6890(void) {
    ov73_021E67A8();
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 5);
}



void ov73_021E68AC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r1, #0
    // bl sub_0203769C
    // cmp r0, #0
    // beq _021E68E0
    // ldr r0, _021E69BC ; =0x00004A10
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021E6904
    // ldr r0, _021E69C0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0xc3
    // tst r0, r1
    // beq _021E68D4
    // ldr r0, _021E69C4 ; =0x000005F2
    // bl PlaySE
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add sp, #8
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _021E69C8 ; =0x00004A24
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021E6904
    // ldr r0, _021E69C0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0xc3
    // tst r0, r1
    // beq _021E68F8
    // ldr r0, _021E69C4 ; =0x000005F2
    // bl PlaySE
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add sp, #8
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // bl ov73_021E746C
    // add r4, r0, #0
    // bl sub_02037454
    // cmp r4, r0
    // beq _021E691E
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add sp, #8
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #0
    // beq _021E69B0
    // cmp r0, #2
    // bne _021E6958
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E694E
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x75
    // add r1, sp, #4
    // mov r2, #1
    // bl sub_02037030
    // add r0, r5, #0
    // mov r1, #1
    // bl ov73_021E781C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov73_021E670C
    // b _021E69AA
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E6974
    // add r0, r5, #0
    // mov r1, #0xb
    // bl ov73_021E670C
    // add r0, r5, #0
    // mov r1, #0xe
    // mov r2, #0
    // bl ov73_021E756C
    // b _021E69AA
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #4
    // bl MI_CpuFill8
    // mov r1, #0
    // add r0, sp, #0
    // strb r1, [r0, #2]
    // bl sub_0203769C
    // add r1, sp, #0
    // strb r0, [r1]
    // ldr r0, _021E69CC ; =0x00004A28
    // mov r1, #1
    // strb r1, [r5, r0]
    // mov r1, #0
    // add r0, #0xa
    // strh r1, [r5, r0]
    // mov r0, #0xc6
    // mov r1, #6
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // mov r0, #0x70
    // add r1, sp, #0
    // mov r2, #4
    // bl sub_02037030
    // add r0, r5, #0
    // bl ov73_021E6830
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r6, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _021E69BC: .word 0x00004A10
    // _021E69C0: .word gSystem
    // _021E69C4: .word 0x000005F2
    // _021E69C8: .word 0x00004A24
    // _021E69CC: .word 0x00004A28
    // TODO: decompile
}



void ov73_021E69D0(void) {
}



void ov73_021E69E8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02037454
    // ldr r1, _021E6A68 ; =0x00004A30
    // ldrh r1, [r5, r1]
    // cmp r1, r0
    // bne _021E6A06
    // bl ov73_021E746C
    // ldr r1, _021E6A68 ; =0x00004A30
    // ldrh r2, [r5, r1]
    // cmp r2, r0
    // beq _021E6A1E
    // ldr r0, _021E6A6C ; =0x00004A32
    // mov r1, #0
    // strh r1, [r5, r0]
    // mov r0, #0xc6
    // mov r1, #8
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // add r0, r1, #2
    // ldrsh r0, [r5, r0]
    // add r2, r0, #1
    // add r0, r1, #2
    // strh r2, [r5, r0]
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x1e
    // ble _021E6A5E
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #4
    // bl MI_CpuFill8
    // mov r1, #1
    // add r0, sp, #0
    // strb r1, [r0, #2]
    // bl sub_0203769C
    // add r1, sp, #0
    // strb r0, [r1]
    // mov r0, #0x70
    // add r1, sp, #0
    // mov r2, #4
    // bl sub_02037030
    // ldr r0, _021E6A6C ; =0x00004A32
    // mov r1, #0
    // strh r1, [r5, r0]
    // mov r0, #0xc6
    // mov r1, #9
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021E6A68: .word 0x00004A30
    // _021E6A6C: .word 0x00004A32
    // TODO: decompile
}



void ov73_021E6A70(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _021E6A8C ; =0x00004A28
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #0
    // strb r1, [r5, r2]
    // bl ov73_021E670C
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6A8C: .word 0x00004A28
    // TODO: decompile
}



void ov73_021E6A90(void) {
    ov73_021E67A8();
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 0x17);
}



void ov73_021E6AAC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov73_021E746C
    // ldr r1, _021E6B5C ; =0x00004A1C
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // bne _021E6AC8
    // add r1, #8
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // beq _021E6AE4
    // ldr r0, _021E6B60 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0xc3
    // tst r0, r1
    // beq _021E6AD8
    // ldr r0, _021E6B64 ; =0x000005F2
    // bl PlaySE
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add sp, #4
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // add r6, r0, #0
    // beq _021E6B4E
    // add r0, r5, #0
    // bl ov73_021E6830
    // cmp r6, #2
    // bne _021E6B1C
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x75
    // add r1, sp, #0
    // mov r2, #1
    // bl sub_02037030
    // add r0, r5, #0
    // mov r1, #1
    // bl ov73_021E781C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov73_021E670C
    // b _021E6B4E
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #2
    // bl ov73_021E71E4
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #2
    // bl ov73_021E71E4
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E6B4A
    // mov r0, #0xc6
    // mov r1, #0x18
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // bl ov73_021E746C
    // ldr r1, _021E6B68 ; =0x00004A2A
    // strb r0, [r5, r1]
    // b _021E6B4E
    // bl GF_AssertFail
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021E6B5C: .word 0x00004A1C
    // _021E6B60: .word gSystem
    // _021E6B64: .word 0x000005F2
    // _021E6B68: .word 0x00004A2A
    // TODO: decompile
}



void ov73_021E6B6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021E6B94 ; =0x00004A2B
    // add r4, r1, #0
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _021E6B8E
    // mov r1, #0
    // mov r0, #0x73
    // add r2, r1, #0
    // bl sub_02037030
    // cmp r0, #1
    // bne _021E6B8E
    // ldr r0, _021E6B94 ; =0x00004A2B
    // mov r1, #1
    // strb r1, [r5, r0]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6B94: .word 0x00004A2B
    // TODO: decompile
}



void ov73_021E6B98(void) {
    ReadMsgDataIntoString(*((u32*)(r0 + 0x28)), 0x12, *((u32*)(r0 + 0x48)));
    // add r0, r4, r0
    ov73_021E63BC((0xb6 << 2), *((u32*)(r4 + 0x48)), 0);
    // ldr r0, [r4, r0]
    Sprite_SetAnimCtrlSeq((0x8a << 2), 0x25);
    *((u32*)(r4 + 0xc)) = 1;
}



void ov73_021E6BC8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E6BDA
    // bl sub_02037454
    // bl sub_02037454
    // ldr r1, _021E6BF4 ; =0x00004A08
    // ldr r1, [r5, r1]
    // cmp r1, r0
    // bne _021E6BEE
    // mov r0, #0xc6
    // mov r1, #0x1a
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6BF4: .word 0x00004A08
    // TODO: decompile
}



void ov73_021E6BF8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021E6C18 ; =0x00004A0C
    // add r4, r1, #0
    // ldr r1, _021E6C1C ; =0x00000F48
    // ldr r0, [r5, r0]
    // add r1, r5, r1
    // bl ov73_021EA3D0
    // mov r0, #0xc6
    // mov r1, #0x1b
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6C18: .word 0x00004A0C
    // _021E6C1C: .word 0x00000F48
    // TODO: decompile
}



void ov73_021E6C20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _021E6C4C ; =gSystem + 0x60
    // mov r1, #1
    // strb r1, [r0, #0xc]
    // ldr r0, [r5, #8]
    // mov r1, #0x13
    // ldr r0, [r0, #0xc]
    // bl GameStats_AddScore
    // mov r0, #0xdd
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl sub_02039EAC
    // mov r0, #0xc6
    // mov r1, #0x1c
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021E6C4C: .word gSystem + 0x60
    // TODO: decompile
}



void ov73_021E6C50(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E6C62
    // bl sub_02037454
    // ldr r0, [r5, #8]
    // mov r2, #0xdd
    // lsl r2, r2, #2
    // ldr r0, [r0]
    // mov r1, #2
    // add r2, r5, r2
    // bl sub_02039EB4
    // cmp r0, #0
    // beq _021E6CAE
    // ldr r0, _021E6CB4 ; =0x00000657
    // mov r1, #8
    // bl StopSE
    // add r0, r5, #0
    // mov r1, #0xd
    // mov r2, #0
    // bl ov73_021E756C
    // add r0, r5, #0
    // mov r1, #0x1d
    // bl ov73_021E670C
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetAnimCtrlSeq
    // mov r1, #0
    // mov r0, #0xc9
    // str r1, [r5, #0xc]
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r0, _021E6CB8 ; =gSystem + 0x60
    // strb r1, [r0, #0xc]
    // ldr r0, _021E6CBC ; =0x00004A14
    // strb r1, [r5, r0]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6CB4: .word 0x00000657
    // _021E6CB8: .word gSystem + 0x60
    // _021E6CBC: .word 0x00004A14
    // TODO: decompile
}



void ov73_021E6CC0(void) {
    // ldr r4, [r0, r2]
    // str r3, [r0, r2]
    // sub r2, #0xc
    // str r3, [r0, r2]
}



void ov73_021E6CDC(void) {
}



void ov73_021E6CFC(void) {
    // ldr r1, [r5, r0]
    // str r1, [r5, r0]
    // ldr r0, [r5, r0]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x10, 0x10, 0);
    ov73_021E66F0(r5);
}



void ov73_021E6D38(void) {
    ov73_021E67A8();
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 0xc);
}



void ov73_021E6D54(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov73_021E746C
    // ldr r1, _021E6DEC ; =0x00004A1C
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // bne _021E6D6E
    // add r1, #8
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // beq _021E6D88
    // ldr r0, _021E6DF0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0xc3
    // tst r0, r1
    // beq _021E6D7E
    // ldr r0, _021E6DF4 ; =0x000005F2
    // bl PlaySE
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #0
    // beq _021E6DE0
    // cmp r0, #2
    // bne _021E6DB8
    // mov r1, #0
    // mov r0, #0xc6
    // str r1, [sp]
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // mov r0, #0x75
    // add r1, sp, #0
    // mov r2, #1
    // bl sub_02037030
    // add r0, r5, #0
    // mov r1, #1
    // bl ov73_021E781C
    // b _021E6DDA
    // mov r0, #0xc6
    // mov r1, #0xd
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // mov r1, #0
    // mov r0, #0x71
    // add r2, r1, #0
    // bl sub_02037030
    // mov r0, #0
    // bl sub_02034818
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferPlayersName
    // add r0, r5, #0
    // bl ov73_021E6830
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6DEC: .word 0x00004A1C
    // _021E6DF0: .word gSystem
    // _021E6DF4: .word 0x000005F2
    // TODO: decompile
}



void ov73_021E6DF8(void) {
    sub_0203769C();
    ov73_021E756C(r5, 5, 0);
    sub_02034818(0);
    BufferPlayersName(*((u32*)(r5 + 0x24)), 0, r0);
    ov73_021E756C(r5, 0x10, 0);
    ov73_021E670C(r5, 0xe);
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 0);
}



void ov73_021E6E48(void) {
    // ldr r2, [r0, r1]
    // str r2, [r0, r1]
    // ldr r2, [r0, r1]
    // sub r1, #0xc
    // str r2, [r0, r1]
    ov73_021E66F0((0xc9 << 2), 0xf);
}



void ov73_021E6E6C(void) {
    sub_02037AC0(0xc9);
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 0x10);
}



void ov73_021E6E8C(void) {
    sub_02037B38(0xc9);
    sub_020398D4(0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x10, 0x10, 0);
    ov73_021E66F0(r4);
}



void ov73_021E6ECC(void) {
    ov73_021E75FC(*((u32*)(r0 + 0x4c)));
    ov73_021E756C(r5, 9, 0);
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 0x12);
}



void ov73_021E6EF8(void) {
    ov73_021E75FC(*((u32*)(r0 + 0x4c)));
    // str r1, [r5, r0]
    ov73_021E66F0(r5, 0xa);
}



void ov73_021E6F1C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E6F34
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #2
    // bl ov73_021E71E4
    // mov r1, #0
    // ldr r0, _021E6FA4 ; =0x00004A38
    // mvn r1, r1
    // str r1, [r5, r0]
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #2
    // bl ov73_021E71E4
    // ldr r0, [r5]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [r5, #0x4c]
    // cmp r0, #0xff
    // beq _021E6F66
    // bl ov73_021E75FC
    // cmp r0, #0
    // bne _021E6F66
    // ldr r0, [r5, #0x4c]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl RemoveTextPrinter
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r2, #1
    // bl ov73_021E756C
    // mov r0, #0xc6
    // mov r1, #0x14
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E6F88
    // add r0, r5, #0
    // mov r1, #0
    // bl ov73_021E781C
    // bl sub_02037454
    // ldr r1, _021E6FA8 ; =0x00004A2C
    // str r0, [r5, r1]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // add r1, #8
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6FA4: .word 0x00004A38
    // _021E6FA8: .word 0x00004A2C
    // TODO: decompile
}



void ov73_021E6FAC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021E6FE4 ; =0x00004A2C
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021E6FCA
    // bl sub_02037454
    // ldr r1, _021E6FE4 ; =0x00004A2C
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021E6FCA
    // mov r0, #0
    // str r0, [r5, r1]
    // mov r0, #0xc6
    // mov r1, #0x15
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // mov r1, #0
    // add r0, #0xc
    // str r1, [r5, r0]
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6FE4: .word 0x00004A2C
    // TODO: decompile
}



void ov73_021E6FE8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021E7054 ; =0x00004A2C
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021E7006
    // bl sub_02037454
    // ldr r1, _021E7054 ; =0x00004A2C
    // ldr r2, [r5, r1]
    // cmp r2, r0
    // beq _021E7006
    // mov r0, #0
    // str r0, [r5, r1]
    // ldr r0, _021E7058 ; =0x00004A34
    // ldr r1, [r5, r0]
    // sub r1, r1, #1
    // str r1, [r5, r0]
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bge _021E701A
    // mov r1, #0
    // sub r0, #8
    // str r1, [r5, r0]
    // mov r1, #0xc9
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r0, r0, #1
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // cmp r0, #0x3c
    // ble _021E7048
    // ldr r0, _021E7054 ; =0x00004A2C
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _021E7048
    // mov r0, #0
    // sub r1, #0xc
    // str r0, [r5, r1]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E7048
    // add r0, r5, #0
    // mov r1, #1
    // bl ov73_021E781C
    // add r0, r5, #0
    // bl ov73_021E66F0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E7054: .word 0x00004A2C
    // _021E7058: .word 0x00004A34
    // TODO: decompile
}



void ov73_021E705C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #0xd
    // bgt _021E707E
    // bge _021E7092
    // cmp r4, #8
    // bgt _021E7110
    // cmp r4, #2
    // blt _021E7110
    // beq _021E708C
    // cmp r4, #7
    // beq _021E710A
    // cmp r4, #8
    // beq _021E710A
    // pop {r4, r5, r6, pc}
    // cmp r4, #0x13
    // bgt _021E7086
    // beq _021E70D0
    // pop {r4, r5, r6, pc}
    // cmp r4, #0x19
    // beq _021E7098
    // pop {r4, r5, r6, pc}
    // bl ov73_021E761C
    // b _021E710A
    // bl ov73_021E6830
    // b _021E710A
    // ldr r0, [r5, #0x4c]
    // bl ov73_021E75FC
    // cmp r0, #0
    // bne _021E70AC
    // ldr r0, [r5, #0x4c]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl RemoveTextPrinter
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #2
    // bl ov73_021E71E4
    // ldr r0, [r5]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r5, #0
    // mov r1, #0xc
    // mov r2, #0
    // bl ov73_021E756C
    // add r0, r5, #0
    // bl ov73_021E6830
    // b _021E710A
    // ldr r0, _021E7114 ; =0x00004A28
    // ldrb r0, [r5, r0]
    // cmp r0, #1
    // beq _021E7110
    // add r0, r6, #0
    // bl sub_02034818
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferPlayersName
    // bl sub_0203769C
    // cmp r6, r0
    // beq _021E7110
    // add r0, r5, #0
    // bl ov73_021E6830
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E710A
    // ldr r1, _021E7118 ; =0x00004A24
    // ldr r0, _021E711C ; =0x0000FFFF
    // ldr r2, [r5, r1]
    // eor r0, r6
    // and r0, r2
    // str r0, [r5, r1]
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _021E7114: .word 0x00004A28
    // _021E7118: .word 0x00004A24
    // _021E711C: .word 0x0000FFFF
    // TODO: decompile
}



void ov73_021E7120(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // add r6, r2, #0
    // cmp r0, #3
    // bne _021E71C0
    // cmp r4, #1
    // beq _021E713E
    // cmp r4, #0x13
    // beq _021E7182
    // b _021E71B8
    // add r0, r6, #0
    // bl sub_02034818
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferPlayersName
    // add r0, r5, #0
    // mov r1, #1
    // bl ov73_021E781C
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // bl sub_02037454
    // ldr r1, _021E71D8 ; =0x00004A1C
    // str r0, [r5, r1]
    // mov r0, #0
    // add r1, #8
    // str r0, [r5, r1]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E71D2
    // mov r2, #1
    // mov r0, #0x75
    // add r1, sp, #0
    // str r2, [sp]
    // bl sub_02037030
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // add r0, r6, #0
    // bl sub_02034818
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl BufferPlayersName
    // bl sub_0203769C
    // cmp r6, r0
    // beq _021E71D2
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E71AE
    // ldr r1, _021E71DC ; =0x00004A24
    // ldr r0, _021E71E0 ; =0x0000FFFF
    // ldr r2, [r5, r1]
    // eor r0, r6
    // and r0, r2
    // str r0, [r5, r1]
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // add sp, #4
    // str r4, [r5, r0]
    // pop {r3, r4, r5, r6, pc}
    // bl GF_AssertFail
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // cmp r4, #1
    // bne _021E71D2
    // ldr r0, _021E71DC ; =0x00004A24
    // mov r1, #0
    // str r1, [r5, r0]
    // bl sub_02037454
    // ldr r1, _021E71D8 ; =0x00004A1C
    // str r0, [r5, r1]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021E71D8: .word 0x00004A1C
    // _021E71DC: .word 0x00004A24
    // _021E71E0: .word 0x0000FFFF
    // TODO: decompile
}



void ov73_021E71E4(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r3, r1, #0
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // ldr r1, [r0, r1]
    // mov r4, #8
    // str r4, [sp]
    // mov r4, #4
    // str r4, [sp, #4]
    // add r4, r1, #0
    // add r4, #0xc
    // str r4, [sp, #8]
    // mov r4, #0
    // lsl r2, r2, #0x1a
    // str r4, [sp, #0xc]
    // lsr r2, r2, #0x18
    // str r2, [sp, #0x10]
    // ldrh r2, [r1]
    // lsl r2, r2, #0x15
    // lsr r2, r2, #0x18
    // str r2, [sp, #0x14]
    // ldrh r1, [r1, #2]
    // ldr r2, _021E722C ; =_021EA51C
    // lsl r1, r1, #0x15
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x18]
    // ldrb r2, [r2, r3]
    // ldr r0, [r0]
    // mov r1, #1
    // mov r3, #0x14
    // bl CopyToBgTilemapRect
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // nop
    // _021E722C: .word _021EA51C
    // TODO: decompile
}



void ov73_021E7230(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E7286
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov73_021E71E4
    // ldr r0, [r4, #0x28]
    // mov r1, #0x15
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #4
    // add r1, r5, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x40
    // sub r3, r1, r0
    // mov r1, #0
    // str r1, [sp]
    // lsr r6, r3, #0x1f
    // add r6, r3, r6
    // ldr r0, _021E72EC ; =0x00040100
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xae
    // lsl r0, r0, #2
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // mov r1, #4
    // add r2, r5, #0
    // asr r3, r6, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // mov r1, #0
    // ldr r0, _021E72F0 ; =0x00004A38
    // mvn r1, r1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov73_021E71E4
    // ldr r0, [r4, #0x28]
    // mov r1, #0x16
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #4
    // add r1, r5, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x40
    // sub r3, r1, r0
    // mov r1, #0
    // str r1, [sp]
    // lsr r6, r3, #0x1f
    // add r6, r3, r6
    // ldr r0, _021E72EC ; =0x00040100
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // mov r1, #4
    // add r2, r5, #0
    // asr r3, r6, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [r4]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [r4]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021E72EC: .word 0x00040100
    // _021E72F0: .word 0x00004A38
    // TODO: decompile
}



void ov73_021E72F4(void) {
    // ldrh r1, [r0]
    // add r1, #0xa
    // strh r1, [r0]
    // ldrh r2, [r0]
    // strh r1, [r0]
    // ldrh r0, [r0]
    GF_SinDeg(0);
    // mul r2, r1
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r0, r0, #0xc
    // add r0, #0xf
    // orr r2, r0
    // add r0, sp, #0
    // strh r2, [r0]
    // add r0, sp, #0
    GX_LoadOBJPltt(0x1d, 0xa, 2);
    // add r0, sp, #0
    GX_LoadOBJPltt(0x2a, 2);
}



void ov73_021E7340(void) {
}



void ov73_021E735C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // str r3, [sp, #0x14]
    // add r6, r0, #0
    // str r2, [sp, #0x10]
    // bl sub_0203769C
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // bl ov73_021E7490
    // cmp r0, #0
    // bne _021E737C
    // add sp, #0x28
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r7, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // add r4, r7, #0
    // mov r5, #1
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // cmp r0, #0
    // beq _021E7448
    // bl PlayerProfile_GetTrainerID_VisibleHalf
    // str r0, [sp, #0x24]
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // ldr r1, [r4, #0x2c]
    // bl PlayerName_FlatToString
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x24]
    // ldr r0, [r0, #0x24]
    // mov r1, #0
    // mov r3, #5
    // bl BufferIntegerAsString
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // ldr r0, [r0, #0x24]
    // ldr r1, [r1, #0x28]
    // mov r2, #1
    // mov r3, #0x32
    // bl ReadMsgData_ExpandPlaceholders
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // cmp r1, r0
    // str r5, [sp]
    // bne _021E7410
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021E7464 ; =0x00020300
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x2c]
    // add r0, r6, #0
    // mov r3, #5
    // bl AddTextPrinterParameterizedWithColor
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021E7464 ; =0x00020300
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #0x46
    // bl AddTextPrinterParameterizedWithColor
    // b _021E7442
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x2c]
    // add r0, r6, #0
    // mov r3, #5
    // bl AddTextPrinterParameterizedWithColor
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #0x46
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // add r7, #8
    // add r0, r0, #1
    // add r4, r4, #4
    // add r5, #0x12
    // str r0, [sp, #0x20]
    // cmp r0, #5
    // blt _021E738E
    // add r0, r6, #0
    // bl CopyWindowToVram
    // mov r0, #1
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E7464: .word 0x00020300
    // TODO: decompile
}



void ov73_021E7468(void) {
    // bx lr
    // TODO: decompile
}



void ov73_021E746C(void) {
}



void ov73_021E7488(void) {
}



void ov73_021E7490(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r4, #0
    // str r4, [sp]
    // add r6, r7, #0
    // add r5, r7, #0
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // add r0, r0, #4
    // str r1, [r6, r0]
    // add r0, r4, #0
    // bl sub_02034818
    // mov r1, #0xce
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // ldr r0, _021E7560 ; =0x00004A3C
    // ldr r2, _021E7564 ; =0x00004A44
    // ldr r1, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // str r1, [r5, r2]
    // add r1, r2, #4
    // str r0, [r5, r1]
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _021E74DA
    // bl PlayerProfile_GetTrainerID
    // ldr r1, _021E7560 ; =0x00004A3C
    // str r0, [r5, r1]
    // mov r1, #1
    // ldr r0, _021E7568 ; =0x00004A40
    // b _021E74E4
    // add r0, r2, #0
    // mov r1, #0
    // sub r0, #8
    // str r1, [r5, r0]
    // sub r0, r2, #4
    // add r4, r4, #1
    // str r1, [r5, r0]
    // add r6, #8
    // add r5, #0x10
    // cmp r4, #5
    // blt _021E749C
    // mov r4, #0
    // add r2, r7, #0
    // add r3, r7, #0
    // mov r0, #0xce
    // mov r1, #0xcf
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldr r0, [r7, r0]
    // ldr r1, [r7, r1]
    // cmp r1, r0
    // beq _021E7520
    // mov r1, #1
    // str r1, [sp]
    // cmp r0, #0
    // bne _021E7518
    // mov r0, #0x36
    // mov r1, #3
    // lsl r0, r0, #4
    // str r1, [r2, r0]
    // b _021E7550
    // mov r0, #0x36
    // lsl r0, r0, #4
    // str r1, [r2, r0]
    // b _021E7550
    // ldr r0, _021E7560 ; =0x00004A3C
    // ldr r5, _021E7564 ; =0x00004A44
    // ldr r1, [r3, r0]
    // ldr r6, [r3, r5]
    // add r0, r0, #4
    // add r5, r5, #4
    // ldr r0, [r3, r0]
    // ldr r5, [r3, r5]
    // eor r1, r6
    // eor r5, r0
    // orr r1, r5
    // beq _021E7550
    // mov r1, #1
    // str r1, [sp]
    // cmp r0, #0
    // bne _021E754A
    // mov r0, #0x36
    // mov r1, #3
    // lsl r0, r0, #4
    // str r1, [r2, r0]
    // b _021E7550
    // mov r0, #0x36
    // lsl r0, r0, #4
    // str r1, [r2, r0]
    // add r4, r4, #1
    // add r7, #8
    // add r2, r2, #4
    // add r3, #0x10
    // cmp r4, #5
    // blt _021E74F6
    // ldr r0, [sp]
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E7560: .word 0x00004A3C
    // _021E7564: .word 0x00004A44
    // _021E7568: .word 0x00004A40
    // TODO: decompile
}



void ov73_021E756C(void) {
    String_New(0xb4, 0x32);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x28)), r7, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x44)), r4);
    String_Delete(r4);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xaa << 2), 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2((0xaa << 2), 0, 1, 0xb);
    ov73_021E7818(r5);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized((0xaa << 2), 1, *((u32*)(r5 + 0x44)), 0);
    *((u32*)(r5 + 0x4c)) = r0;
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized((0xaa << 2), 1, *((u32*)(r5 + 0x44)), 0);
    *((u32*)(r5 + 0x4c)) = 0xff;
}



void ov73_021E75FC(void) {
}



void ov73_021E761C(void) {
    // mov r1, #0xaa
    // lsl r1, r1, #2
    // add r0, r0, r1
    // ldr r3, _021E7628 ; =ClearFrameAndWindow2
    // mov r1, #0
    // bx r3
    // _021E7628: .word ClearFrameAndWindow2
    // TODO: decompile
}



void ov73_021E762C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // mov r0, #0xc1
    // lsl r0, r0, #2
    // mov r4, #0
    // add r0, r5, r0
    // str r4, [sp, #8]
    // add r6, r5, #0
    // mov r7, #0x1c
    // str r0, [sp, #0x18]
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #3
    // bhi _021E771A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7664: ; jump table
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // bne _021E767A
    // bl GF_AssertFail
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl PlayerProfile_GetTrainerGender
    // str r0, [sp, #0xc]
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl PlayerProfile_GetAvatar
    // str r0, [sp, #0x10]
    // bl sub_0203769C
    // cmp r4, r0
    // bne _021E76AC
    // mov r0, #0x8b
    // ldr r1, [sp, #0xc]
    // lsl r0, r0, #2
    // lsl r1, r1, #1
    // ldr r0, [r5, r0]
    // add r1, #0x26
    // bl Sprite_SetAnimCtrlSeq
    // b _021E76C8
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // add r2, r4, #0
    // bl ov73_021E77A4
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #4]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x36
    // mov r1, #2
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #8]
    // b _021E771A
    // bl sub_0203769C
    // cmp r4, r0
    // bne _021E7706
    // mov r0, #0xce
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl PlayerProfile_GetTrainerGender
    // add r1, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // lsl r1, r1, #1
    // ldr r0, [r5, r0]
    // add r1, #0x27
    // bl Sprite_SetAnimCtrlSeq
    // b _021E7712
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x36
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // ldr r0, [sp, #4]
    // add r4, r4, #1
    // add r0, r0, #2
    // add r5, r5, #4
    // add r6, #8
    // add r7, r7, #2
    // str r0, [sp, #4]
    // cmp r4, #5
    // blt _021E764E
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _021E7738
    // ldr r0, _021E773C ; =0x0000064E
    // bl PlaySE
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _021E773C: .word 0x0000064E
    // TODO: decompile
}



void ov73_021E7740(void) {
    // add r2, r5, r2
    GfGfxLoader_GetPlttData(0x64, 9, (0xc1 << 2), 0x32);
    // str r0, [r5, r2]
    // add r2, #0xc
    // add r2, r5, r2
    GfGfxLoader_GetPlttDataFromOpenNarc(r4, 0xb, (0xbf << 2), 0x32);
    // str r0, [r5, r3]
    // sub r3, #0xc
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetCharData(0x64, 0x2b, 1, (3 << 8));
    // str r0, [r5, r3]
    // add r3, #0xc
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetCharDataFromOpenNarc(r4, 0xc, 1, (0xbb << 2));
    // str r0, [r5, r1]
}



void ov73_021E77A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // ldr r0, [sp, #0x18]
    // add r1, r3, #0
    // add r5, r2, #0
    // bl SpriteToUnionRoomAvatarIdx
    // add r4, r0, #0
    // ldr r0, [r6, #4]
    // mov r2, #6
    // ldr r6, [r0, #0xc]
    // ldr r0, [r7, #4]
    // lsl r2, r2, #8
    // ldr r1, [r0, #0x14]
    // add r0, r4, #0
    // mul r0, r2
    // add r0, r1, r0
    // ldr r1, _021E77E4 ; =ov73_021EA520
    // lsl r3, r5, #1
    // ldrh r1, [r1, r3]
    // bl GX_LoadOBJ
    // lsl r0, r4, #5
    // add r1, r5, #7
    // add r0, r6, r0
    // lsl r1, r1, #5
    // mov r2, #0x20
    // bl GX_LoadOBJPltt
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E77E4: .word ov73_021EA520
    // TODO: decompile
}



void ov73_021E77E8(void) {
    // ldr r0, [r4, r0]
    Heap_Free((0xbf << 2));
    // ldr r0, [r4, r0]
    Heap_Free((3 << 8));
    // ldr r0, [r4, r0]
    Heap_Free((0xbb << 2));
    // ldr r0, [r4, r0]
    Heap_Free((0x2f << 4));
}



u8 ov73_021E7818(void) {
}



void ov73_021E781C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _021E7868
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _021E783A
    // mov r0, #1
    // bl sub_02038C1C
    // b _021E784A
    // bl sub_02037454
    // add r0, r4, r0
    // cmp r0, #5
    // ble _021E7846
    // mov r0, #5
    // bl sub_02038C1C
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // ldr r0, _021E786C ; =0x00004A29
    // bne _021E785A
    // mov r1, #2
    // strb r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // cmp r4, #0
    // bne _021E7864
    // mov r1, #1
    // strb r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // strb r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _021E786C: .word 0x00004A29
    // TODO: decompile
}



void ov73_021E7870(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r0, #0
    // add r6, r1, #0
    // bl ov73_021E746C
    // add r5, r0, #0
    // ldr r0, _021E7950 ; =0x00004A1C
    // ldr r1, [r4, r0]
    // cmp r5, r1
    // ble _021E789A
    // mov r2, #1
    // add r0, sp, #0
    // strb r2, [r0]
    // mov r0, #0x75
    // add r1, sp, #0
    // bl sub_02037030
    // mov r1, #1
    // ldr r0, _021E7954 ; =0x00004A20
    // b _021E789E
    // mov r1, #0
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _021E7958 ; =0x00004A18
    // ldr r0, [r4, r0]
    // cmp r5, r0
    // bne _021E78AE
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // cmp r5, #5
    // bhi _021E7942
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E78BE: ; jump table
    // bl sub_02037454
    // cmp r0, #1
    // bgt _021E78DA
    // bl sub_02033250
    // cmp r0, #1
    // bls _021E78E0
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0xc6
    // mov r1, #0x11
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r4, #0
    // sub r1, #0x12
    // bl ov73_021E781C
    // add r0, r4, #0
    // bl ov73_021E6830
    // add sp, #4
    // mov r0, #2
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #2
    // bl sub_0205A904
    // ldr r0, _021E7958 ; =0x00004A18
    // ldr r1, [r4, r0]
    // cmp r5, r1
    // bge _021E7942
    // add r0, #0x11
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // beq _021E7918
    // cmp r0, #1
    // beq _021E7922
    // b _021E792A
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov73_021E781C
    // b _021E792A
    // add r0, r4, #0
    // mov r1, #0
    // bl ov73_021E781C
    // bl sub_02037454
    // ldr r1, _021E7950 ; =0x00004A1C
    // str r0, [r4, r1]
    // b _021E7942
    // mov r0, #9
    // bl sub_0205A904
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov73_021E781C
    // bl ov73_021E746C
    // ldr r1, _021E7958 ; =0x00004A18
    // str r0, [r4, r1]
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021E7950: .word 0x00004A1C
    // _021E7954: .word 0x00004A20
    // _021E7958: .word 0x00004A18
    // TODO: decompile
}



u8 ov73_021E795C(void) {
}



void ov73_021E7960(void) {
    // add r0, #0x2c
}



void ov73_021E7964(void) {
    // mov ip, r1
    // add r6, #0xdc
    // sub r4, #0x2c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r6, #0x2c
    // str r0, [r3]
    // add r7, #0x58
    // mov r2, ip
    // ldmia r2!, {r0, r1}
    // mov ip, r2
    // stmia r7!, {r0, r1}
    // mov r0, ip
    // str r0, [r7]
}



void ov73_021E79A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // cmp r5, #2
    // blt _021E79B6
    // cmp r5, #5
    // ble _021E79BA
    // bl GF_AssertFail
    // add r2, r5, #1
    // cmp r2, #5
    // bgt _021E79E2
    // mov r0, #0x2c
    // mul r0, r2
    // add r3, r4, r0
    // add r6, r3, #0
    // add r7, r3, #0
    // sub r6, #0x2c
    // mov r5, #5
    // ldmia r7!, {r0, r1}
    // stmia r6!, {r0, r1}
    // sub r5, r5, #1
    // bne _021E79CE
    // ldr r0, [r7]
    // add r2, r2, #1
    // add r3, #0x2c
    // str r0, [r6]
    // cmp r2, #5
    // ble _021E79C6
    // ldr r0, _021E79F0 ; =0x0000FFFF
    // add r1, r4, #0
    // add r4, #0xdc
    // add r1, #0xdc
    // strh r0, [r4]
    // strh r0, [r1, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E79F0: .word 0x0000FFFF
    // TODO: decompile
}



void ov73_021E79F4(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    sub_0202C8C4(*((u32*)0));
    sub_0202C8E4(r6, r5);
    // mul r2, r7
    // add r1, r5, r2
    sub_0202C8E4(r6, (0 + 2), (0 + 2));
    ov73_021E79A8(r5, (r4 + 2));
    ov73_021E7964(r5, r6);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r1, [sp, #0xc]
}



void ov73_021E7A74(void) {
}



void ov73_021E7A7C(void) {
}



void ov73_021E7A84(void) {
}



void ov73_021E7A8C(void) {
    // push {r4, r5}
    // ldr r4, _021E7ABC ; =ov73_021EA664
    // lsl r5, r0, #2
    // ldr r0, [r4, r5]
    // mov r2, #0
    // ldrb r3, [r0]
    // cmp r3, #0xff
    // beq _021E7AB4
    // add r4, r0, #0
    // ldrb r3, [r0]
    // cmp r1, r3
    // bne _021E7AAA
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // add r2, r2, #1
    // ldrb r3, [r4, r2]
    // add r0, r0, #1
    // cmp r3, #0xff
    // bne _021E7A9E
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _021E7ABC: .word ov73_021EA664
    // TODO: decompile
}



void ov73_021E7AC0(void) {
    // str r3, [sp]
    Save_PlayerData_GetProfile();
    // str r0, [sp, #4]
    // ldr r0, [sp]
    MIi_CpuClearFast(0, r5, 0x48);
    PlayerProfile_GetTrainerID(r4);
    // str r0, [r5]
    PlayerProfile_GetTrainerGender(r4);
    *((u8*)(r5 + 4)) = r0;
    // mov r0, #GAME_VERSION
    *((u8*)(r5 + 5)) = r0;
    *((u8*)(r5 + 6)) = 2;
    PlayerProfile_GetNamePtr(r4);
    // add r0, #8
    CopyU16StringArrayN(r5, r0, 8);
    // add r3, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    *((u8*)(r5 + 0x19)) = 0;
    *((u8*)(r5 + 0x18)) = 0;
    // ldr r0, [sp, #4]
    // add r7, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r5, #0x48
}



void ov73_021E7B3C(void) {
    Heap_AllocAtEnd(r1, r2);
    sub_020270C4(r5);
    ov73_021E7A74(r5);
    GF_AssertFail();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, r6, r2
    ov73_021E7AC0(r5, r7, (0x63 << 2), 4);
}



void ov73_021E7B84(void) {
    Heap_AllocAtEnd(r1, r2);
    sub_020270C4(r5);
    ov73_021E7A7C(r5);
    GF_AssertFail();
    // add r6, #0xc
    // str r0, [sp]
    // str r3, [sp, #4]
    ov73_021E7AC0(r5, r7, r6, 4);
}



void ov73_021E7BC8(void) {
    Heap_AllocAtEnd(r1, r2);
    sub_020270C4(r5);
    ov73_021E7A84(r5);
    GF_AssertFail();
    // str r0, [sp]
    // add r6, #0xcc
    // str r0, [sp, #4]
    ov73_021E7AC0(r5, r7, r6, 4);
}



void ov73_021E7C0C(void) {
    Heap_AllocAtEnd(r1, r2);
    sub_020270C4(r5);
    ov73_021E7A74(r5);
    GF_AssertFail();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, r6, r2
    ov73_021E7AC0(r5, r7, (0x63 << 2), 4);
}



void ov73_021E7C50(void) {
    Heap_AllocAtEnd(r1, r2);
    sub_020270C4(r5);
    ov73_021E7A7C(r5);
    GF_AssertFail();
    // str r0, [sp]
    // add r6, #0xc
    // str r0, [sp, #4]
    ov73_021E7AC0(r5, r7, r6, 4);
}



void ov73_021E7C94(void) {
    Heap_AllocAtEnd(r1, r2);
    sub_020270C4(r5);
    ov73_021E7A84(r5);
    GF_AssertFail();
    // str r0, [sp]
    // add r6, #0xcc
    // str r0, [sp, #4]
    ov73_021E7AC0(r5, r7, r6, 4);
}



void ov73_021E7CD8(void) {
    ov73_021E7A8C(r3, *((u8*)(r2 + 0x18)));
    // mvn r0, r0
    // mul r0, r1
    // add r3, r5, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, #0x48
    // mul r0, r2
    // add r3, r5, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, #0x48
}



void ov73_021E7D54(void) {
    sub_02034818();
    PlayerProfile_GetVersion(0);
}



void ov73_021E7D74(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #4]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x1c
    // str r3, [sp, #8]
    // ldr r5, [sp, #0x40]
    MI_CpuFill8(0, 0x10);
    // str r5, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x10]
    _s32_div_f((0 + 1), r7);
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r0, sp, #0x1c
    // ldrb r0, [r0, r4]
    // add r0, sp, #0x1c
    // strb r1, [r0, r4]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0x44]
    ov73_021E7D54(r1, r5);
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r3, [r3, r2]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #4]
    // add r2, r3, r2
    // ldr r3, [sp, #0x48]
    ov73_021E7CD8(r0);
    // ldr r0, [sp, #0x10]
    // add r0, #0x48
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    SaveSubstruct_UpdateCRC(0x17);
}



void ov73_021E7E24(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // ldr r1, [sp, #0x18]
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r4, r2, #0
    // mov r1, #0
    // str r1, [sp, #8]
    // ldr r1, _021E7E48 ; =0x0000090C
    // add r2, r5, #0
    // add r0, r0, r1
    // mov r1, #8
    // add r3, r4, #0
    // bl ov73_021E7D74
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _021E7E48: .word 0x0000090C
    // TODO: decompile
}



void ov73_021E7E4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _021E7E62
    // cmp r0, #1
    // bne _021E7E60
    // b _021E7F62
    // b _021E7F78
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _021E7F80 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _021E7F84 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r2, #5
    // mov r0, #3
    // mov r1, #0x96
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // ldr r1, _021E7F88 ; =0x000012CC
    // add r0, r6, #0
    // mov r2, #0x96
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _021E7F88 ; =0x000012CC
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x96
    // bl BgConfig_Alloc
    // str r0, [r4, #4]
    // ldr r0, _021E7F8C ; =_021EA940
    // add r2, sp, #0
    // ldr r3, _021E7F90 ; =ov73_021EA68C
    // str r4, [r0]
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r7, #0
    // bl SetBothScreensModesAndDisable
    // mov r0, #0xb
    // mov r1, #0x20
    // mov r2, #0x96
    // bl MessageFormat_New_Custom
    // mov r1, #0xbd
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r2, _021E7F94 ; =0x0000031F
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x96
    // bl NewMsgDataFromNarc
    // ldr r1, _021E7F98 ; =0x00000BD4
    // ldr r2, _021E7F9C ; =0x0000030A
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x96
    // bl NewMsgDataFromNarc
    // ldr r1, _021E7FA0 ; =0x00000BD8
    // mov r2, #0x32
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // lsl r2, r2, #4
    // mov r3, #0x96
    // bl NewMsgDataFromNarc
    // ldr r1, _021E7FA4 ; =0x00000BDC
    // str r0, [r4, r1]
    // mov r0, #4
    // mov r1, #8
    // bl SetKeyRepeatTimers
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov73_021E8148
    // add r0, r4, #0
    // bl ov73_021E8454
    // mov r1, #0
    // mov r0, #0x34
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // ldr r1, _021E7FA8 ; =0x00020020
    // mov r0, #0x96
    // bl Heap_Alloc
    // str r0, [r4, #0x24]
    // add r0, #0x1f
    // mov r1, #0x1f
    // bic r0, r1
    // mov r1, #2
    // lsl r1, r1, #0x10
    // mov r2, #0
    // bl NNS_FndCreateExpHeapEx
    // str r0, [r4, #0x28]
    // ldr r1, _021E7FAC ; =0x0000047D
    // mov r0, #0xb
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // ldr r2, _021E7FB0 ; =0x04000304
    // ldr r0, _021E7FB4 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // mov r0, #1
    // str r0, [r5]
    // b _021E7F78
    // bl LoadDwcOverlay
    // bl LoadOVY38
    // bl sub_02034D8C
    // mov r0, #0
    // str r0, [r5]
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E7F80: .word 0xFFFFE0FF
    // _021E7F84: .word 0x04001000
    // _021E7F88: .word 0x000012CC
    // _021E7F8C: .word _021EA940
    // _021E7F90: .word ov73_021EA68C
    // _021E7F94: .word 0x0000031F
    // _021E7F98: .word 0x00000BD4
    // _021E7F9C: .word 0x0000030A
    // _021E7FA0: .word 0x00000BD8
    // _021E7FA4: .word 0x00000BDC
    // _021E7FA8: .word 0x00020020
    // _021E7FAC: .word 0x0000047D
    // _021E7FB0: .word 0x04000304
    // _021E7FB4: .word 0xFFFF7FFF
    // TODO: decompile
}



void ov73_021E7FB8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // bl OverlayManager_GetData
    // add r5, r0, #0
    // bl ov00_021ECB40
    // bl ov72_022378DC
    // bl ov00_021ECB40
    // ldr r1, [r4]
    // cmp r1, #5
    // bhi _021E8060
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7FE0: ; jump table
    // bl sub_02034DB8
    // cmp r0, #0
    // beq _021E8060
    // ldr r1, [r5, #0x28]
    // ldr r0, _021E8070 ; =_021EA940
    // str r1, [r0, #4]
    // ldr r0, _021E8074 ; =ov73_021E83F4
    // ldr r1, _021E8078 ; =ov73_021E841C
    // bl ov00_021EC294
    // mov r0, #1
    // str r0, [r4]
    // b _021E8060
    // ldr r3, [r5, #0x10]
    // mov r2, #0xc
    // add r6, r3, #0
    // mul r6, r2
    // ldr r2, _021E807C ; =ov73_021EA83C
    // add r0, r5, #0
    // ldr r2, [r2, r6]
    // blx r2
    // str r0, [r4]
    // b _021E8060
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E8060
    // mov r0, #3
    // str r0, [r4]
    // b _021E8060
    // ldr r3, [r5, #0x10]
    // mov r2, #0xc
    // add r6, r3, #0
    // mul r6, r2
    // ldr r2, _021E8080 ; =ov73_021EA840
    // add r0, r5, #0
    // ldr r2, [r2, r6]
    // blx r2
    // str r0, [r4]
    // b _021E8060
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E8060
    // ldr r3, [r5, #0x10]
    // mov r2, #0xc
    // add r6, r3, #0
    // mul r6, r2
    // ldr r2, _021E8084 ; =ov73_021EA844
    // ldr r1, [r4]
    // ldr r2, [r2, r6]
    // add r0, r5, #0
    // blx r2
    // str r0, [r4]
    // b _021E8060
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _021E8088 ; =0x00000BF8
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021E806C
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _021E8070: .word _021EA940
    // _021E8074: .word ov73_021E83F4
    // _021E8078: .word ov73_021E841C
    // _021E807C: .word ov73_021EA83C
    // _021E8080: .word ov73_021EA840
    // _021E8084: .word ov73_021EA844
    // _021E8088: .word 0x00000BF8
    // TODO: decompile
}



void ov73_021E808C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, [r4, #0x24]
    // bl Heap_Free
    // bl UnloadOVY38
    // bl UnloadDwcOverlay
    // add r0, r4, #0
    // bl ov73_021E847C
    // ldr r0, _021E80F4 ; =0x00000BDC
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _021E80F8 ; =0x00000BD8
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _021E80FC ; =0x00000BD4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // mov r0, #0xbd
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl MessageFormat_Delete
    // add r0, r4, #0
    // bl ov73_021E8164
    // bl sub_02034DE0
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x96
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021E80F4: .word 0x00000BDC
    // _021E80F8: .word 0x00000BD8
    // _021E80FC: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E8100(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl GF_RunVramTransferTasks
    // ldr r0, [r4, #4]
    // bl DoScheduledBgGpuUpdates
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _021E8120 ; =0x027E0000
    // ldr r1, _021E8124 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _021E8120: .word 0x027E0000
    // _021E8124: .word 0x00003FF8
    // TODO: decompile
}



void ov73_021E8128(void) {
}



void ov73_021E8148(void) {
}



void ov73_021E8164(void) {
    // bx lr
    // TODO: decompile
}



void ov73_021E8168(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _021E8194 ; =ov73_021EA69C
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl ObjCharTransfer_Init
    // mov r0, #0x14
    // mov r1, #0x96
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _021E8194: .word ov73_021EA69C
    // TODO: decompile
}



void ov73_021E8198(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // mov r0, #0x64
    // mov r1, #0x96
    // bl NARC_New
    // str r0, [sp, #0x14]
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7e
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r2, #0x96
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // ldr r1, _021E8290 ; =0x00000BFC
    // mov r0, #0xa
    // add r1, r6, r1
    // mov r2, #0x96
    // bl G2dRenderer_Init
    // ldr r1, _021E8294 ; =0x00000BF8
    // mov r2, #1
    // str r0, [r6, r1]
    // add r0, r1, #4
    // add r0, r6, r0
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // ldr r7, _021E8298 ; =0x00000D24
    // mov r4, #0
    // add r5, r6, #0
    // mov r0, #2
    // add r1, r4, #0
    // mov r2, #0x96
    // bl Create2DGfxResObjMan
    // str r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _021E81E8
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #1
    // str r3, [sp, #4]
    // mov r0, #0x96
    // str r0, [sp, #8]
    // ldr r0, _021E8298 ; =0x00000D24
    // ldr r1, [sp, #0x14]
    // ldr r0, [r6, r0]
    // mov r2, #0x2e
    // bl AddCharResObjFromOpenNarc
    // ldr r1, _021E829C ; =0x00000D34
    // mov r3, #0
    // str r0, [r6, r1]
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x96
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [r6, r1]
    // ldr r1, [sp, #0x14]
    // mov r2, #0xa
    // bl AddPlttResObjFromOpenNarc
    // ldr r1, _021E82A0 ; =0x00000D38
    // mov r2, #0x2f
    // str r0, [r6, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x96
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    // ldr r1, [sp, #0x14]
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _021E82A4 ; =0x00000D3C
    // mov r2, #0x30
    // str r0, [r6, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x96
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    // ldr r1, [sp, #0x14]
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x35
    // lsl r1, r1, #6
    // str r0, [r6, r1]
    // sub r1, #0xc
    // ldr r0, [r6, r1]
    // bl sub_0200ACF0
    // ldr r0, _021E82A0 ; =0x00000D38
    // ldr r0, [r6, r0]
    // bl sub_0200AF94
    // ldr r0, [sp, #0x14]
    // bl NARC_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E8290: .word 0x00000BFC
    // _021E8294: .word 0x00000BF8
    // _021E8298: .word 0x00000D24
    // _021E829C: .word 0x00000D34
    // _021E82A0: .word 0x00000D38
    // _021E82A4: .word 0x00000D3C
    // TODO: decompile
}



void ov73_021E82A8(void) {
    // push {r3, r4}
    // ldr r4, _021E82D0 ; =0x00000BF8
    // ldr r1, [r1, r4]
    // str r1, [r0]
    // str r2, [r0, #4]
    // mov r2, #0
    // mov r1, #1
    // str r2, [r0, #0x10]
    // lsl r1, r1, #0xc
    // str r1, [r0, #0x14]
    // str r1, [r0, #0x18]
    // str r1, [r0, #0x1c]
    // strh r2, [r0, #0x20]
    // mov r1, #1
    // str r1, [r0, #0x24]
    // str r3, [r0, #0x28]
    // mov r1, #0x96
    // str r1, [r0, #0x2c]
    // pop {r3, r4}
    // bx lr
    // _021E82D0: .word 0x00000BF8
    // TODO: decompile
}



void ov73_021E82D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // mov r1, #0
    // add r5, r0, #0
    // str r1, [sp]
    // sub r0, r1, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, _021E8384 ; =0x00000D24
    // str r1, [sp, #0x10]
    // ldr r0, [r5, r2]
    // add r3, r1, #0
    // str r0, [sp, #0x14]
    // add r0, r2, #4
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x18]
    // add r0, r2, #0
    // add r0, #8
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x1c]
    // add r0, r2, #0
    // add r0, #0xc
    // ldr r0, [r5, r0]
    // add r2, #0x40
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r5, r2
    // add r2, r1, #0
    // str r1, [sp, #0x28]
    // bl CreateSpriteResourcesHeader
    // ldr r2, _021E8388 ; =0x00000D64
    // add r0, sp, #0x2c
    // add r1, r5, #0
    // add r2, r5, r2
    // mov r3, #1
    // bl ov73_021E82A8
    // mov r7, #0xdd
    // ldr r4, _021E838C ; =ov73_021EA684
    // mov r6, #0
    // lsl r7, r7, #4
    // ldrh r0, [r4]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x34]
    // ldrh r0, [r4, #2]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    // bl Sprite_CreateAffine
    // mov r1, #0xdd
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0xdd
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r5, r7]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #2
    // blt _021E832A
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // bl sub_0203A880
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E8384: .word 0x00000D24
    // _021E8388: .word 0x00000D64
    // _021E838C: .word ov73_021EA684
    // TODO: decompile
}



void ov73_021E8390(void) {
    YesNoPrompt_Create(0x96);
    // str r2, [sp, #0xc]
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r6, [sp, #8]
    // add r3, sp, #0
    *((u8*)(r3 + 0x10)) = 0x17;
    *((u8*)(r3 + 0x11)) = r4;
    // bic r4, r2
    *((u8*)(r3 + 0x12)) = *((u8*)(r3 + 0x12));
    // bic r4, r2
    *((u8*)(r3 + 0x12)) = *((u8*)(r3 + 0x12));
    *((u8*)(r3 + 0x13)) = 0;
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(0, 0xf0);
}



void ov73_021E83D4(void) {
    YesNoPrompt_HandleInput();
    YesNoPrompt_Destroy(r5);
}



void ov73_021E83EC(void) {
}



void ov73_021E83F4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl OS_DisableInterrupts
    // add r6, r0, #0
    // ldr r0, _021E8418 ; =_021EA940
    // add r1, r5, #0
    // ldr r0, [r0, #4]
    // add r2, r4, #0
    // bl NNS_FndAllocFromExpHeapEx
    // add r4, r0, #0
    // add r0, r6, #0
    // bl OS_RestoreInterrupts
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _021E8418: .word _021EA940
    // TODO: decompile
}



void ov73_021E841C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // beq _021E8438
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // ldr r0, _021E843C ; =_021EA940
    // add r1, r5, #0
    // ldr r0, [r0, #4]
    // bl NNS_FndFreeToExpHeap
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // pop {r3, r4, r5, pc}
    // nop
    // _021E843C: .word _021EA940
    // TODO: decompile
}



void ov73_021E8440(void) {
}



void ov73_021E844C(void) {
}



void ov73_021E8454(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov73_021E8128
    // bl ov73_021E8168
    // add r0, r4, #0
    // bl ov73_021E8198
    // add r0, r4, #0
    // bl ov73_021E82D4
    // ldr r0, _021E8478 ; =ov73_021E8100
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // pop {r4, pc}
    // nop
    // _021E8478: .word ov73_021E8100
    // TODO: decompile
}



void ov73_021E847C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _021E84C0 ; =0x00000D34
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // ldr r0, _021E84C4 ; =0x00000D38
    // ldr r0, [r6, r0]
    // bl sub_0200B0A8
    // ldr r7, _021E84C8 ; =0x00000D24
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, r7]
    // bl Destroy2DGfxResObjMan
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _021E8496
    // ldr r0, _021E84CC ; =0x00000BF8
    // ldr r0, [r6, r0]
    // bl SpriteList_Delete
    // ldr r0, _021E84CC ; =0x00000BF8
    // mov r1, #0
    // str r1, [r6, r0]
    // bl OamManager_Free
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E84C0: .word 0x00000D34
    // _021E84C4: .word 0x00000D38
    // _021E84C8: .word 0x00000D24
    // _021E84CC: .word 0x00000BF8
    // TODO: decompile
}



void ov73_021E84D0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov73_021E8B64
    // mov r0, #8
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x96
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #4]
    // bl ov73_021E8628
    // add r0, r4, #0
    // bl ov73_021E8730
    // add r0, r4, #0
    // bl ov73_021E8A08
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r4]
    // ldr r0, [r0, #0xc]
    // bl sub_02039418
    // add r0, r4, #0
    // bl ov73_021EA12C
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0]
    // bl sub_0202D488
    // add r1, r4, #0
    // add r1, #0x90
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r0, _021E85A0 ; =0x00000F0C
    // mov r1, #0
    // str r1, [r4, r0]
    // bl ov00_021EC5B4
    // cmp r0, #0
    // bne _021E8594
    // ldr r0, [r4]
    // ldr r0, [r0, #0x24]
    // cmp r0, #0
    // beq _021E858E
    // ldr r0, _021E85A4 ; =0x00000F0F
    // ldr r1, _021E85A8 ; =0x00000BD8
    // str r0, [sp]
    // mov r2, #1
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // add r3, r2, #0
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #2
    // bl ov73_021E83EC
    // add r0, r4, #0
    // bl ov73_021EA15C
    // b _021E8598
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // b _021E8598
    // mov r0, #0x33
    // str r0, [r4, #0x1c]
    // mov r0, #2
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021E85A0: .word 0x00000F0C
    // _021E85A4: .word 0x00000F0F
    // _021E85A8: .word 0x00000BD8
    // TODO: decompile
}



void ov73_021E85AC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov73_021E8440
    // bl sub_0203A930
    // ldr r4, [r5, #0x1c]
    // ldr r1, _021E85D8 ; =ov73_021EA848
    // lsl r2, r4, #2
    // ldr r1, [r1, r2]
    // add r0, r5, #0
    // blx r1
    // ldr r1, [r5, #0x1c]
    // cmp r4, r1
    // beq _021E85D6
    // mov r1, #0xf9
    // mov r2, #0
    // lsl r1, r1, #4
    // strh r2, [r5, r1]
    // add r1, r1, #2
    // strh r2, [r5, r1]
    // pop {r3, r4, r5, pc}
    // _021E85D8: .word ov73_021EA848
    // TODO: decompile
}



void ov73_021E85DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E8620 ; =0x00000F98
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _021E85F6
    // bl SysTask_Destroy
    // ldr r0, _021E8620 ; =0x00000F98
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov73_021E8BBC
    // add r0, r4, #0
    // bl ov73_021E8B20
    // ldr r0, [r4, #4]
    // bl ov73_021E870C
    // ldr r0, _021E8624 ; =0x00000F9C
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x14]
    // str r0, [r4, #0x10]
    // cmp r0, #0
    // bne _021E861A
    // mov r0, #5
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _021E8620: .word 0x00000F98
    // _021E8624: .word 0x00000F9C
    // TODO: decompile
}



void ov73_021E8628(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x70
    // ldr r5, _021E86FC ; =ov73_021EA70C
    // add r4, r0, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E8700 ; =ov73_021EA6F0
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r5, _021E8704 ; =ov73_021EA728
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E8708 ; =ov73_021EA6D4
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x96
    // bl BG_ClearCharDataRange
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x96
    // bl BG_ClearCharDataRange
    // add sp, #0x70
    // pop {r3, r4, r5, pc}
    // nop
    // _021E86FC: .word ov73_021EA70C
    // _021E8700: .word ov73_021EA6F0
    // _021E8704: .word ov73_021EA728
    // _021E8708: .word ov73_021EA6D4
    // TODO: decompile
}



void ov73_021E870C(void) {
}



void ov73_021E8730(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // str r0, [sp, #0x10]
    // ldr r4, [r0, #4]
    // mov r0, #0x58
    // mov r1, #0x96
    // bl NARC_New
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0x96
    // str r1, [sp, #4]
    // mov r1, #3
    // add r3, r2, #0
    // str r0, [sp, #0x2c]
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x96
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // mov r1, #3
    // mov r2, #4
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x96
    // bl LoadFontPal1
    // mov r1, #0x1a
    // mov r0, #4
    // lsl r1, r1, #4
    // mov r2, #0x96
    // bl LoadFontPal1
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0]
    // ldr r0, [r0, #0x10]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x96
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xe
    // bl LoadUserFrameGfx2
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x96
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x1f
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x96
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #2
    // add r2, r4, #0
    // mov r3, #1
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r1, #0
    // mov r0, #6
    // str r1, [sp]
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x96
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #6
    // add r2, r4, #0
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x96
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #0xb
    // add r2, r4, #0
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r1, #0
    // mov r0, #6
    // str r1, [sp]
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x96
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #0xc
    // add r2, r4, #0
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // add r1, r0, #0
    // bl BG_SetMaskColor
    // mov r0, #4
    // mov r1, #0
    // bl BG_SetMaskColor
    // mov r2, #0x33
    // ldr r1, _021E894C ; =0x00000F98
    // ldr r0, [sp, #0x10]
    // lsl r2, r2, #4
    // add r0, r0, r1
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r0, [sp, #0x2c]
    // mov r1, #5
    // add r2, sp, #0x38
    // mov r3, #0x96
    // bl GfGfxLoader_GetPlttDataFromOpenNarc
    // add r4, r0, #0
    // ldr r0, [sp, #0x38]
    // mov r2, #0xfa
    // ldr r1, [sp, #0x10]
    // lsl r2, r2, #4
    // add r1, r1, r2
    // ldr r0, [r0, #0xc]
    // mov r2, #0x80
    // bl MIi_CpuCopy16
    // ldr r0, [sp, #0x38]
    // ldr r2, _021E8950 ; =0x00001020
    // ldr r1, [sp, #0x10]
    // ldr r0, [r0, #0xc]
    // add r1, r1, r2
    // mov r2, #0x80
    // bl MIi_CpuCopy16
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, _021E8950 ; =0x00001020
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // sub r1, #0x80
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // lsl r1, r0, #5
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    // cmp r0, #0x15
    // blt _021E889E
    // bl GF_AssertFail
    // ldr r0, [sp, #0x30]
    // mov r7, #1
    // add r4, r0, #2
    // ldr r0, [sp, #0x18]
    // add r6, r0, #2
    // ldr r0, [sp, #0x14]
    // add r5, r0, #2
    // ldr r0, [sp, #0x20]
    // asr r0, r0, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x34]
    // mov r0, #0xfa
    // lsl r0, r0, #4
    // ldrh r0, [r4, r0]
    // ldr r3, [sp, #0x34]
    // add r1, r6, #0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r2, #1
    // bl BlendPalette
    // add r7, r7, #1
    // add r4, r4, #2
    // add r6, r6, #2
    // add r5, r5, #2
    // cmp r7, #0x10
    // blt _021E88B6
    // ldr r0, [sp, #0x18]
    // add r0, #0x20
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // cmp r0, #1
    // beq _021E8902
    // mov r0, #3
    // ldr r1, [sp, #0x20]
    // lsl r0, r0, #8
    // add r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [sp, #0x20]
    // cmp r1, r0
    // blt _021E8894
    // str r0, [sp, #0x20]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _021E8894
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #3
    // blt _021E8882
    // ldr r1, _021E8950 ; =0x00001020
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // mov r1, #0x2a
    // lsl r1, r1, #4
    // bl DC_FlushRange
    // ldr r1, _021E8954 ; =0x00000F9C
    // ldr r0, [sp, #0x10]
    // mov r2, #1
    // str r2, [r0, r1]
    // ldr r2, _021E8958 ; =0x000012C4
    // mov r3, #0
    // str r3, [r0, r2]
    // sub r2, r1, #4
    // ldr r1, [sp, #0x10]
    // ldr r0, _021E895C ; =ov73_021E8960
    // add r1, r1, r2
    // mov r2, #0x14
    // bl SysTask_CreateOnVBlankQueue
    // ldr r2, _021E894C ; =0x00000F98
    // ldr r1, [sp, #0x10]
    // str r0, [r1, r2]
    // ldr r0, [sp, #0x2c]
    // bl NARC_Delete
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _021E894C: .word 0x00000F98
    // _021E8950: .word 0x00001020
    // _021E8954: .word 0x00000F9C
    // _021E8958: .word 0x000012C4
    // _021E895C: .word ov73_021E8960
    // TODO: decompile
}



void ov73_021E8960(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021E89FE
    // ldr r1, _021E8A00 ; =0x0000032B
    // mov r0, #1
    // ldrb r2, [r4, r1]
    // eor r2, r0
    // strb r2, [r4, r1]
    // ldrb r2, [r4, r1]
    // tst r0, r2
    // bne _021E89FE
    // add r0, r1, #1
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bhi _021E8996
    // sub r0, r1, #3
    // ldrsh r0, [r4, r0]
    // add r2, r4, #0
    // add r2, #0x88
    // lsl r0, r0, #5
    // add r0, r2, r0
    // mov r1, #0
    // mov r2, #0x20
    // bl GX_LoadBGPltt
    // mov r0, #0xcb
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _021E89A4
    // cmp r0, #2
    // bne _021E89BA
    // mov r0, #0xca
    // lsl r0, r0, #2
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // add r1, #0x88
    // lsl r0, r0, #5
    // add r0, r1, r0
    // mov r1, #0
    // mov r2, #0x20
    // bl GXS_LoadBGPltt
    // ldr r0, _021E8A04 ; =0x0000032A
    // ldrsb r1, [r4, r0]
    // cmp r1, #0
    // bne _021E89E2
    // sub r1, r0, #2
    // ldrsh r1, [r4, r1]
    // add r2, r1, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // cmp r1, #0x15
    // blt _021E89FE
    // mov r2, #0x13
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsb r2, [r4, r0]
    // mov r1, #1
    // eor r1, r2
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // sub r1, r0, #2
    // ldrsh r1, [r4, r1]
    // sub r2, r1, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // cmp r1, #0
    // bge _021E89FE
    // mov r2, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsb r1, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // _021E8A00: .word 0x0000032B
    // _021E8A04: .word 0x0000032A
    // TODO: decompile
}



void ov73_021E8A08(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // mov r3, #4
    // add r4, r0, #0
    // str r3, [sp]
    // mov r0, #0x17
    // str r0, [sp, #4]
    // mov r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0xa4
    // ldr r1, _021E8B04 ; =0x00000E18
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // bl AddWindowParameterized
    // ldr r0, _021E8B04 ; =0x00000E18
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x94
    // ldr r1, _021E8B08 ; =0x00000DF8
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #0x1a
    // bl AddWindowParameterized
    // ldr r0, _021E8B08 ; =0x00000DF8
    // mov r1, #0xf
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x9c
    // ldr r1, _021E8B0C ; =0x00000DE8
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #0x1a
    // bl AddWindowParameterized
    // ldr r0, _021E8B0C ; =0x00000DE8
    // mov r1, #0xf
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r1, _021E8B10 ; =0x00000E08
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #4
    // bl AddWindowParameterized
    // ldr r0, _021E8B10 ; =0x00000E08
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r3, #1
    // ldr r0, _021E8B14 ; =0x000F0E00
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021E8B18 ; =0x00000BE4
    // ldr r0, _021E8B10 ; =0x00000E08
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #0
    // bl ov73_021EA088
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // ldr r1, _021E8B1C ; =0x00000DD8
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, _021E8B1C ; =0x00000DD8
    // mov r1, #0xf
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _021E8B04: .word 0x00000E18
    // _021E8B08: .word 0x00000DF8
    // _021E8B0C: .word 0x00000DE8
    // _021E8B10: .word 0x00000E08
    // _021E8B14: .word 0x000F0E00
    // _021E8B18: .word 0x00000BE4
    // _021E8B1C: .word 0x00000DD8
    // TODO: decompile
}



void ov73_021E8B20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E8B50 ; =0x00000DD8
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _021E8B54 ; =0x00000E08
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _021E8B58 ; =0x00000DE8
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _021E8B5C ; =0x00000DF8
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _021E8B60 ; =0x00000E18
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _021E8B50: .word 0x00000DD8
    // _021E8B54: .word 0x00000E08
    // _021E8B58: .word 0x00000DE8
    // _021E8B5C: .word 0x00000DF8
    // _021E8B60: .word 0x00000E18
    // TODO: decompile
}



void ov73_021E8B64(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb4
    // mov r1, #0x96
    // bl String_New
    // mov r1, #0xbe
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #4
    // mov r1, #0x96
    // bl String_New
    // ldr r1, _021E8BB0 ; =0x00000BE8
    // str r0, [r4, r1]
    // mov r0, #3
    // mov r1, #0x96
    // bl String_New
    // ldr r1, _021E8BB4 ; =0x00000BEC
    // str r0, [r4, r1]
    // sub r1, #0x18
    // ldr r0, [r4, r1]
    // mov r1, #0xa
    // bl NewString_ReadMsgData
    // ldr r1, _021E8BB8 ; =0x00000BE4
    // str r0, [r4, r1]
    // mov r0, #1
    // lsl r0, r0, #8
    // mov r1, #0x96
    // bl String_New
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _021E8BB0: .word 0x00000BE8
    // _021E8BB4: .word 0x00000BEC
    // _021E8BB8: .word 0x00000BE4
    // TODO: decompile
}



void ov73_021E8BBC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xbf
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _021E8BF0 ; =0x00000BE4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _021E8BF4 ; =0x00000BEC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _021E8BF8 ; =0x00000BE8
    // ldr r0, [r4, r0]
    // bl String_Delete
    // mov r0, #0xbe
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // nop
    // _021E8BF0: .word 0x00000BE4
    // _021E8BF4: .word 0x00000BEC
    // _021E8BF8: .word 0x00000BE8
    // TODO: decompile
}



void ov73_021E8BFC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E8C24 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E8C28 ; =0x00000BDC
    // mov r2, #0x11
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x30
    // mov r2, #1
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E8C24: .word 0x00000F0F
    // _021E8C28: .word 0x00000BDC
    // TODO: decompile
}



void ov73_021E8C2C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _021E8C80 ; =0x000012C8
    // ldr r0, [r4, r0]
    // bl ov73_021E83D4
    // cmp r0, #0
    // beq _021E8C78
    // cmp r0, #2
    // bne _021E8C56
    // bl sub_0203946C
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov73_021E844C
    // mov r0, #0x2e
    // str r0, [r4, #0x1c]
    // b _021E8C78
    // ldr r0, _021E8C84 ; =0x00000F0F
    // ldr r1, _021E8C88 ; =0x00000BD8
    // str r0, [sp]
    // mov r2, #1
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // add r3, r2, #0
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #2
    // bl ov73_021E83EC
    // add r0, r4, #0
    // bl ov73_021EA15C
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E8C80: .word 0x000012C8
    // _021E8C84: .word 0x00000F0F
    // _021E8C88: .word 0x00000BD8
    // TODO: decompile
}



void ov73_021E8C8C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E8CB4 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E8CB8 ; =0x00000BD8
    // mov r2, #0xc
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x30
    // mov r2, #0x34
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E8CB4: .word 0x00000F0F
    // _021E8CB8: .word 0x00000BD8
    // TODO: decompile
}



void ov73_021E8CBC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E8D08 ; =0x000012C8
    // ldr r0, [r4, r0]
    // bl ov73_021E83D4
    // cmp r0, #0
    // beq _021E8D04
    // cmp r0, #2
    // bne _021E8CE4
    // bl ov00_021EC5B4
    // cmp r0, #0
    // bne _021E8CDE
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // b _021E8D04
    // mov r0, #0x29
    // str r0, [r4, #0x1c]
    // b _021E8D04
    // bl ov00_021EC5B4
    // cmp r0, #0
    // bne _021E8CFA
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov73_021E844C
    // mov r0, #0x2e
    // b _021E8CFC
    // mov r0, #0x29
    // str r0, [r4, #0x1c]
    // ldr r0, [r4]
    // mov r1, #1
    // str r1, [r0, #0x20]
    // mov r0, #3
    // pop {r4, pc}
    // _021E8D08: .word 0x000012C8
    // TODO: decompile
}



void ov73_021E8D0C(void) {
}



void ov73_021E8D2C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x44
    // add r4, r0, #0
    // bl ov00_021EC60C
    // bl ov00_021EC5B4
    // cmp r0, #0
    // beq _021E8DAC
    // bl ov00_021EC724
    // cmp r0, #8
    // bhi _021E8D8A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8D52: ; jump table
    // add r0, sp, #4
    // bl ov00_021EC0FC
    // mov r1, #0xf1
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r2, [sp, #4]
    // add r0, r1, #4
    // str r2, [r4, r0]
    // bl ov00_021EC210
    // bl ov00_021EC8D8
    // add r0, r4, #0
    // bl ov73_021EA180
    // mov r0, #0x37
    // str r0, [r4, #0x1c]
    // b _021E8DAC
    // add r0, sp, #0
    // bl ov00_021EC0FC
    // add r0, r4, #0
    // bl ov73_021EA180
    // mov r1, #0x35
    // str r1, [r4, #0x1c]
    // ldr r0, _021E8DB4 ; =0x00000F1C
    // sub r1, #0x37
    // str r1, [r4, r0]
    // b _021E8DAC
    // add r0, sp, #8
    // bl ov00_021EC9E0
    // mov r0, #4
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // add sp, #0x44
    // pop {r3, r4, pc}
    // nop
    // _021E8DB4: .word 0x00000F1C
    // TODO: decompile
}



void ov73_021E8DB8(void) {
}



void ov73_021E8DC8(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl ov00_021ECDC8
    // cmp r0, #5
    // bhi _021E8E6E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8DE2: ; jump table
    // mov r0, #6
    // str r0, [r4, #0x1c]
    // b _021E8E6E
    // add r0, r4, #0
    // bl ov73_021EA180
    // add r0, sp, #4
    // add r1, sp, #0
    // bl ov00_021EC11C
    // mov r1, #0xf1
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r2, [sp, #4]
    // add r0, r1, #4
    // str r2, [r4, r0]
    // bl ov00_021EC210
    // bl ov00_021EC8D8
    // mov r0, #0x37
    // str r0, [r4, #0x1c]
    // ldr r1, [sp]
    // cmp r1, #7
    // bhi _021E8E5C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8E2C: ; jump table
    // str r0, [r4, #0x1c]
    // b _021E8E5C
    // bl ov00_021FA0D8
    // mov r0, #0x37
    // str r0, [r4, #0x1c]
    // b _021E8E5C
    // str r0, [r4, #0x1c]
    // b _021E8E5C
    // bl ov00_021ED9B4
    // mov r0, #0x37
    // str r0, [r4, #0x1c]
    // b _021E8E5C
    // bl sub_020399EC
    // ldr r1, [sp, #4]
    // ldr r0, _021E8E74 ; =0xFFFFB1E0
    // cmp r1, r0
    // bge _021E8E6E
    // ldr r0, _021E8E78 ; =0xFFFF8AD1
    // cmp r1, r0
    // blt _021E8E6E
    // mov r0, #0x37
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // _021E8E74: .word 0xFFFFB1E0
    // _021E8E78: .word 0xFFFF8AD1
    // TODO: decompile
}



void ov73_021E8E7C(void) {
    Save_SysInfo_GetDwcProfileId(*((u32*)(*((u32*)r0) + 8)));
    Save_SysInfo_SetDwcProfileId(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0x1c)));
    Save_SysInfo_GetDwcProfileId(*((u32*)(*((u32*)r5) + 8)));
    DWC_CreateFriendKey(*((u32*)(*((u32*)r5) + 0x14)));
    ov72_022378C0(r4, r0, r1, r0);
    *((u32*)(r5 + 0x1c)) = 7;
}



void ov73_021E8EBC(void) {
}



void ov73_021E8ED8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov72_02237B54
    // cmp r0, #0
    // beq _021E8F90
    // bl ov72_02237B74
    // ldr r1, _021E8FAC ; =0x00000F94
    // mov r2, #0
    // str r2, [r4, r1]
    // add r2, r0, #7
    // cmp r2, #9
    // bhi _021E8F84
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E8F00: ; jump table
    // add r0, r4, #0
    // bl ov73_021EA180
    // ldr r0, [r4]
    // ldr r0, [r0, #0x18]
    // cmp r0, #0
    // beq _021E8F2C
    // cmp r0, #1
    // beq _021E8F38
    // cmp r0, #2
    // beq _021E8F3E
    // b _021E8FA6
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0xd
    // bl ov73_021E83EC
    // b _021E8FA6
    // mov r0, #0x19
    // str r0, [r4, #0x1c]
    // b _021E8FA6
    // mov r0, #0x1d
    // str r0, [r4, #0x1c]
    // b _021E8FA6
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E8FA6
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E8FA6
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E8FA6
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E8FA6
    // add r0, r4, #0
    // bl ov73_021EA180
    // bl sub_020399EC
    // b _021E8FA6
    // ldr r0, _021E8FAC ; =0x00000F94
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _021E8FA6
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E8FAC: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E8FB0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r1, _021E8FDC ; =0x00000F24
    // ldr r0, [r0, #0xc]
    // add r1, r4, r1
    // bl sub_0203189C
    // ldr r1, _021E8FDC ; =0x00000F24
    // add r0, r4, r1
    // add r1, #0x64
    // add r1, r4, r1
    // bl ov72_02237CF4
    // mov r0, #0xa
    // str r0, [r4, #0x1c]
    // ldr r0, _021E8FE0 ; =0x00000F94
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E8FDC: .word 0x00000F24
    // _021E8FE0: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E8FE4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov72_02237B54
    // cmp r0, #0
    // bne _021E8FF2
    // b _021E90FA
    // bl ov72_02237B74
    // add r5, r0, #0
    // ldr r0, _021E9114 ; =0x00000F94
    // mov r1, #0
    // str r1, [r4, r0]
    // add r1, r5, #7
    // cmp r1, #9
    // bhi _021E90EE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E9010: ; jump table
    // add r0, r4, #0
    // bl ov73_021EA180
    // ldr r0, _021E9118 ; =0x00000F88
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _021E903C
    // cmp r1, #1
    // beq _021E9092
    // cmp r1, #2
    // beq _021E9092
    // b _021E90A2
    // add r1, r0, #4
    // ldr r1, [r4, r1]
    // cmp r1, #3
    // bhi _021E9110
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E9050: ; jump table
    // ldr r0, [r4]
    // ldr r0, [r0, #0x18]
    // cmp r0, #0
    // beq _021E906A
    // cmp r0, #1
    // beq _021E9076
    // cmp r0, #2
    // beq _021E907C
    // b _021E9110
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0xd
    // bl ov73_021E83EC
    // b _021E9110
    // mov r0, #0x19
    // str r0, [r4, #0x1c]
    // b _021E9110
    // mov r0, #0x1d
    // str r0, [r4, #0x1c]
    // b _021E9110
    // sub r0, #0x6c
    // str r5, [r4, r0]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9110
    // ldr r0, _021E911C ; =0x00000F1C
    // str r5, [r4, r0]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9110
    // add r0, r4, #0
    // bl ov73_021EA180
    // bl sub_020399EC
    // b _021E9110
    // sub r0, #0x78
    // str r5, [r4, r0]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9110
    // sub r0, #0x78
    // str r5, [r4, r0]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9110
    // sub r0, #0x78
    // str r5, [r4, r0]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9110
    // sub r0, #0x78
    // str r5, [r4, r0]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9110
    // add r0, r4, #0
    // bl ov73_021EA180
    // bl sub_020399EC
    // b _021E9110
    // ldr r0, _021E9114 ; =0x00000F94
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _021E9110
    // bl sub_020399EC
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _021E9114: .word 0x00000F94
    // _021E9118: .word 0x00000F88
    // _021E911C: .word 0x00000F1C
    // TODO: decompile
}



void ov73_021E9120(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // bl ov72_02237B80
    // mov r0, #0xc
    // str r0, [r4, #0x1c]
    // ldr r0, _021E9140 ; =0x00000F94
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov73_021EA15C
    // mov r0, #3
    // pop {r4, pc}
    // _021E9140: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E9144(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov72_02237B54
    // cmp r0, #0
    // beq _021E91D6
    // bl ov72_02237B74
    // ldr r1, _021E91F0 ; =0x00000F94
    // mov r2, #0
    // str r2, [r4, r1]
    // add r2, r0, #7
    // cmp r2, #6
    // bhi _021E91C0
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E916C: ; jump table
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // b _021E91CE
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // b _021E91CE
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // b _021E91CE
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // b _021E91CE
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // b _021E91CE
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // bl sub_020399EC
    // b _021E91CE
    // cmp r0, #0
    // ble _021E91CE
    // add r1, r4, #0
    // add r1, #0x98
    // str r0, [r1]
    // ldr r0, [r4, #0x20]
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E91EC
    // ldr r0, _021E91F0 ; =0x00000F94
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _021E91EC
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // _021E91F0: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E91F4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E921C ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9220 ; =0x00000BD4
    // mov r2, #0
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0xe
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E921C: .word 0x00000F0F
    // _021E9220: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9224(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E9264 ; =0x00000DF8
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0x1f
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // ldr r1, _021E9268 ; =0x00000BE8
    // add r2, r4, #0
    // ldr r0, _021E9264 ; =0x00000DF8
    // add r2, #0x9c
    // ldr r1, [r4, r1]
    // ldr r2, [r2]
    // add r0, r4, r0
    // mov r3, #3
    // bl ov73_021EA0F0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov73_021EA134
    // ldr r0, _021E9264 ; =0x00000DF8
    // add r0, r4, r0
    // bl CopyWindowToVram
    // mov r0, #0xf
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // pop {r4, pc}
    // _021E9264: .word 0x00000DF8
    // _021E9268: .word 0x00000BE8
    // TODO: decompile
}



void ov73_021E926C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // ldr r2, _021E9368 ; =gSystem
    // mov r1, #0x40
    // ldr r3, [r2, #0x4c]
    // add r4, r0, #0
    // tst r1, r3
    // beq _021E92BA
    // add r0, #0x9c
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // cmp r1, r0
    // ble _021E92A0
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r0, _021E936C ; =0x00000DF8
    // ldr r1, _021E9370 ; =0x00000BE8
    // add r0, r4, r0
    // ldr r1, [r4, r1]
    // add r4, #0x9c
    // ldr r2, [r4]
    // mov r3, #3
    // bl ov73_021EA0F0
    // ldr r0, _021E9374 ; =0x000005DC
    // bl PlaySE
    // b _021E9360
    // mov r1, #0x80
    // tst r1, r3
    // beq _021E92FC
    // add r0, #0x9c
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // cmp r0, #1
    // bge _021E92E2
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r0, _021E936C ; =0x00000DF8
    // ldr r1, _021E9370 ; =0x00000BE8
    // add r0, r4, r0
    // ldr r1, [r4, r1]
    // add r4, #0x9c
    // ldr r2, [r4]
    // mov r3, #3
    // bl ov73_021EA0F0
    // ldr r0, _021E9374 ; =0x000005DC
    // bl PlaySE
    // b _021E9360
    // ldr r2, [r2, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _021E9348
    // add r0, sp, #0
    // add r1, sp, #0x10
    // bl ov00_021ECB94
    // add r1, r4, #0
    // add r2, r4, #0
    // add r1, #0x94
    // add r2, #0x9c
    // ldr r0, [r4]
    // ldr r1, [r1]
    // ldr r2, [r2]
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x18
    // ldr r0, [r0, #4]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // add r3, sp, #0
    // bl sub_0202D720
    // cmp r0, #0
    // beq _021E9332
    // mov r0, #0x14
    // b _021E9334
    // mov r0, #0x10
    // mov r1, #0
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov73_021EA134
    // ldr r0, _021E9374 ; =0x000005DC
    // bl PlaySE
    // b _021E9360
    // mov r1, #2
    // tst r1, r2
    // beq _021E9360
    // mov r1, #0
    // add r2, r1, #0
    // bl ov73_021EA134
    // mov r0, #0x15
    // str r0, [r4, #0x1c]
    // ldr r0, _021E9374 ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // nop
    // _021E9368: .word gSystem
    // _021E936C: .word 0x00000DF8
    // _021E9370: .word 0x00000BE8
    // _021E9374: .word 0x000005DC
    // TODO: decompile
}



void ov73_021E9378(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // add r2, r4, #0
    // lsl r0, r0, #4
    // add r2, #0x9c
    // ldr r0, [r4, r0]
    // ldr r2, [r2]
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r3, #2
    // mov r0, #0xbd
    // add r2, r4, #0
    // str r3, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // lsl r0, r0, #4
    // add r2, #0x94
    // ldr r0, [r4, r0]
    // ldr r2, [r2]
    // bl BufferIntegerAsString
    // ldr r0, _021E93E0 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // ldr r1, _021E93E4 ; =0x00000BD4
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r3, r2, #0
    // bl ov73_021E9F34
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x11
    // bl ov73_021E83EC
    // add r4, #0xa0
    // ldr r2, _021E93E8 ; =0x00000A38
    // mov r0, #0
    // add r1, r4, #0
    // bl MIi_CpuClearFast
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // _021E93E0: .word 0x00000F0F
    // _021E93E4: .word 0x00000BD4
    // _021E93E8: .word 0x00000A38
    // TODO: decompile
}



void ov73_021E93EC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9414 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9418 ; =0x00000BD4
    // mov r2, #2
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9F34
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0xd
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9414: .word 0x00000F0F
    // _021E9418: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E941C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, #0x90
    // add r1, #0x9c
    // add r2, r4, #0
    // ldr r0, [r0]
    // ldr r1, [r1]
    // add r2, #0xa0
    // bl ov72_02237BD0
    // add r0, r4, #0
    // bl ov73_021EA15C
    // mov r0, #0x12
    // str r0, [r4, #0x1c]
    // ldr r0, _021E9448 ; =0x00000F94
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E9448: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E944C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // bl ov72_02237B54
    // cmp r0, #0
    // beq _021E953A
    // bl ov72_02237B74
    // ldr r1, _021E9558 ; =0x00000F94
    // mov r2, #0
    // str r2, [r4, r1]
    // add r2, r0, #7
    // cmp r2, #7
    // bhi _021E9550
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9476: ; jump table
    // add r2, r4, #0
    // add r3, r4, #0
    // add r2, #0x90
    // add r3, #0x9c
    // ldr r0, [r4]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r1, r4, #0
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #4]
    // add r1, #0xa0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl sub_0202D7C0
    // add r0, r4, #0
    // mov r1, #0x27
    // mov r2, #0x13
    // bl ov73_021E83EC
    // add r0, sp, #0
    // add r1, sp, #0x10
    // bl ov00_021ECB94
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x94
    // add r4, #0x9c
    // ldr r1, [r1]
    // ldr r2, [r4]
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x18
    // ldr r0, [r0, #4]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // add r3, sp, #0
    // bl sub_0202D678
    // b _021E9550
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9550
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9550
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0xb
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9550
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9550
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9550
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // bl sub_020399EC
    // b _021E9550
    // ldr r0, _021E9558 ; =0x00000F94
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _021E9550
    // bl sub_020399EC
    // mov r0, #3
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // nop
    // _021E9558: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E955C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9590 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9594 ; =0x00000BD4
    // mov r2, #3
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x2d
    // bl ov73_021E83EC
    // add r0, r4, #0
    // bl ov73_021EA180
    // ldr r0, [r4]
    // mov r1, #0
    // str r1, [r0, #0x20]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9590: .word 0x00000F0F
    // _021E9594: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9598(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E95C4 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E95C8 ; =0x00000BD4
    // mov r2, #7
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x1a
    // bl ov73_021E83EC
    // add r0, r4, #0
    // bl ov73_021EA15C
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _021E95C4: .word 0x00000F0F
    // _021E95C8: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E95CC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl sub_0202D568
    // add r4, r0, #0
    // ldr r0, [r5]
    // add r1, sp, #0
    // ldr r0, [r0, #4]
    // bl sub_0202D7F0
    // ldr r0, [r5]
    // ldr r2, _021E9610 ; =0x00000AD8
    // ldr r0, [r0, #0xc]
    // mov r1, #1
    // add r2, r5, r2
    // bl sub_02069528
    // add r1, sp, #0
    // ldrb r0, [r1]
    // ldr r3, _021E9610 ; =0x00000AD8
    // ldrb r1, [r1, #1]
    // add r2, r4, #0
    // add r3, r5, r3
    // bl ov72_02237C30
    // mov r0, #0x1b
    // str r0, [r5, #0x1c]
    // ldr r0, _021E9614 ; =0x00000F94
    // mov r1, #0
    // str r1, [r5, r0]
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _021E9610: .word 0x00000AD8
    // _021E9614: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E9618(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov72_02237B54
    // cmp r0, #0
    // beq _021E96CC
    // bl ov72_02237B74
    // ldr r1, _021E96E8 ; =0x00000F94
    // mov r2, #0
    // str r2, [r4, r1]
    // add r2, r0, #7
    // cmp r2, #7
    // bhi _021E96E2
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9640: ; jump table
    // ldr r0, [r4]
    // mov r1, #5
    // ldr r0, [r0]
    // mov r2, #2
    // bl sub_0202D5DC
    // add r0, r4, #0
    // mov r1, #0x27
    // mov r2, #0x1c
    // bl ov73_021E83EC
    // b _021E96E2
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E96E2
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E96E2
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E96E2
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E96E2
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E96E2
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // bl sub_020399EC
    // b _021E96E2
    // ldr r0, _021E96E8 ; =0x00000F94
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _021E96E2
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E96E8: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E96EC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9720 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9724 ; =0x00000BD4
    // mov r2, #8
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x2d
    // bl ov73_021E83EC
    // add r0, r4, #0
    // bl ov73_021EA180
    // ldr r0, [r4]
    // mov r1, #0
    // str r1, [r0, #0x20]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9720: .word 0x00000F0F
    // _021E9724: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9728(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9750 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9754 ; =0x00000BD4
    // mov r2, #5
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x1e
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9750: .word 0x00000F0F
    // _021E9754: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9758(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #1
    // add r0, #0x94
    // str r1, [r0]
    // ldr r0, _021E97A0 ; =0x00000DE8
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0x1f
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // ldr r1, _021E97A4 ; =0x00000BEC
    // add r2, r4, #0
    // ldr r0, _021E97A0 ; =0x00000DE8
    // add r2, #0x94
    // ldr r1, [r4, r1]
    // ldr r2, [r2]
    // add r0, r4, r0
    // mov r3, #2
    // bl ov73_021EA0F0
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov73_021EA134
    // ldr r0, _021E97A0 ; =0x00000DE8
    // add r0, r4, r0
    // bl CopyWindowToVram
    // mov r0, #0x1f
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E97A0: .word 0x00000DE8
    // _021E97A4: .word 0x00000BEC
    // TODO: decompile
}



void ov73_021E97A8(void) {
    // push {r4, lr}
    // ldr r2, _021E986C ; =gSystem
    // mov r1, #0x40
    // ldr r3, [r2, #0x4c]
    // add r4, r0, #0
    // tst r1, r3
    // beq _021E97EE
    // add r0, #0x94
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // cmp r0, #0xa
    // ble _021E97D4
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x94
    // str r1, [r0]
    // ldr r0, _021E9870 ; =0x00000DE8
    // ldr r1, _021E9874 ; =0x00000BEC
    // add r0, r4, r0
    // ldr r1, [r4, r1]
    // add r4, #0x94
    // ldr r2, [r4]
    // mov r3, #2
    // bl ov73_021EA0F0
    // ldr r0, _021E9878 ; =0x000005DC
    // bl PlaySE
    // b _021E9866
    // mov r1, #0x80
    // tst r1, r3
    // beq _021E982C
    // add r0, #0x94
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // cmp r0, #1
    // bge _021E9812
    // add r0, r4, #0
    // mov r1, #0xa
    // add r0, #0x94
    // str r1, [r0]
    // ldr r0, _021E9870 ; =0x00000DE8
    // ldr r1, _021E9874 ; =0x00000BEC
    // add r0, r4, r0
    // ldr r1, [r4, r1]
    // add r4, #0x94
    // ldr r2, [r4]
    // mov r3, #2
    // bl ov73_021EA0F0
    // ldr r0, _021E9878 ; =0x000005DC
    // bl PlaySE
    // b _021E9866
    // ldr r2, [r2, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _021E984E
    // mov r1, #0
    // add r2, r1, #0
    // bl ov73_021EA134
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0x20
    // bl ov73_021E83EC
    // ldr r0, _021E9878 ; =0x000005DC
    // bl PlaySE
    // b _021E9866
    // mov r1, #2
    // tst r1, r2
    // beq _021E9866
    // mov r1, #0
    // add r2, r1, #0
    // bl ov73_021EA134
    // mov r0, #0x17
    // str r0, [r4, #0x1c]
    // ldr r0, _021E9878 ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E986C: .word gSystem
    // _021E9870: .word 0x00000DE8
    // _021E9874: .word 0x00000BEC
    // _021E9878: .word 0x000005DC
    // TODO: decompile
}



void ov73_021E987C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E98A4 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E98A8 ; =0x00000BD4
    // mov r2, #6
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x21
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E98A4: .word 0x00000F0F
    // _021E98A8: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E98AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #1
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r0, _021E98F4 ; =0x00000DF8
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #0x1f
    // mov r3, #0xe
    // bl DrawFrameAndWindow1
    // ldr r1, _021E98F8 ; =0x00000BE8
    // add r2, r4, #0
    // ldr r0, _021E98F4 ; =0x00000DF8
    // add r2, #0x9c
    // ldr r1, [r4, r1]
    // ldr r2, [r2]
    // add r0, r4, r0
    // mov r3, #3
    // bl ov73_021EA0F0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov73_021EA134
    // ldr r0, _021E98F4 ; =0x00000DF8
    // add r0, r4, r0
    // bl CopyWindowToVram
    // mov r0, #0x22
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E98F4: .word 0x00000DF8
    // _021E98F8: .word 0x00000BE8
    // TODO: decompile
}



void ov73_021E98FC(void) {
    // push {r4, lr}
    // ldr r2, _021E99C4 ; =gSystem
    // mov r1, #0x40
    // ldr r3, [r2, #0x4c]
    // add r4, r0, #0
    // tst r1, r3
    // beq _021E994A
    // add r0, #0x9c
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // add r0, r0, #1
    // cmp r1, r0
    // bne _021E9930
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r0, _021E99C8 ; =0x00000DF8
    // ldr r1, _021E99CC ; =0x00000BE8
    // add r0, r4, r0
    // ldr r1, [r4, r1]
    // add r4, #0x9c
    // ldr r2, [r4]
    // mov r3, #3
    // bl ov73_021EA0F0
    // ldr r0, _021E99D0 ; =0x000005DC
    // bl PlaySE
    // b _021E99C0
    // mov r1, #0x80
    // tst r1, r3
    // beq _021E998C
    // add r0, #0x9c
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // cmp r0, #1
    // bge _021E9972
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r0, _021E99C8 ; =0x00000DF8
    // ldr r1, _021E99CC ; =0x00000BE8
    // add r0, r4, r0
    // ldr r1, [r4, r1]
    // add r4, #0x9c
    // ldr r2, [r4]
    // mov r3, #3
    // bl ov73_021EA0F0
    // ldr r0, _021E99D0 ; =0x000005DC
    // bl PlaySE
    // b _021E99C0
    // ldr r2, [r2, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _021E99A8
    // mov r1, #0
    // add r2, r1, #0
    // bl ov73_021EA134
    // mov r0, #0x23
    // str r0, [r4, #0x1c]
    // ldr r0, _021E99D0 ; =0x000005DC
    // bl PlaySE
    // b _021E99C0
    // mov r1, #2
    // tst r1, r2
    // beq _021E99C0
    // mov r1, #0
    // add r2, r1, #0
    // bl ov73_021EA134
    // mov r0, #0x1d
    // str r0, [r4, #0x1c]
    // ldr r0, _021E99D0 ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // pop {r4, pc}
    // _021E99C4: .word gSystem
    // _021E99C8: .word 0x00000DF8
    // _021E99CC: .word 0x00000BE8
    // _021E99D0: .word 0x000005DC
    // TODO: decompile
}



void ov73_021E99D4(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // add r2, r4, #0
    // lsl r0, r0, #4
    // add r2, #0x9c
    // ldr r0, [r4, r0]
    // ldr r2, [r2]
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r3, #2
    // mov r0, #0xbd
    // add r2, r4, #0
    // str r3, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // lsl r0, r0, #4
    // add r2, #0x94
    // ldr r0, [r4, r0]
    // ldr r2, [r2]
    // bl BufferIntegerAsString
    // ldr r0, _021E9A34 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // ldr r1, _021E9A38 ; =0x00000BD4
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r3, r2, #0
    // bl ov73_021E9F34
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x24
    // bl ov73_021E83EC
    // mov r0, #0x24
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // _021E9A34: .word 0x00000F0F
    // _021E9A38: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9A3C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, #0x94
    // add r1, #0x9c
    // add r2, r4, #0
    // ldr r0, [r0]
    // ldr r1, [r1]
    // add r2, #0xa0
    // bl ov72_02237BD0
    // mov r0, #0x25
    // str r0, [r4, #0x1c]
    // ldr r0, _021E9A68 ; =0x00000F94
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov73_021EA15C
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E9A68: .word 0x00000F94
    // TODO: decompile
}



void ov73_021E9A6C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov72_02237B54
    // cmp r0, #0
    // beq _021E9B34
    // bl ov72_02237B74
    // ldr r1, _021E9B50 ; =0x00000F94
    // mov r2, #0
    // str r2, [r4, r1]
    // add r2, r0, #7
    // cmp r2, #7
    // bhi _021E9B4A
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9A94: ; jump table
    // add r2, r4, #0
    // add r3, r4, #0
    // add r2, #0x94
    // add r3, #0x9c
    // ldr r0, [r4]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // ldr r1, _021E9B54 ; =0x000006DC
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #4]
    // add r1, r4, r1
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl sub_0202D8A4
    // add r0, r4, #0
    // mov r1, #0x27
    // mov r2, #0x26
    // bl ov73_021E83EC
    // b _021E9B4A
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9B4A
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9B4A
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0xb
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9B4A
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9B4A
    // mov r2, #0xb
    // str r2, [r4, #0x1c]
    // sub r1, #0x78
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov73_021EA180
    // b _021E9B4A
    // sub r1, #0x78
    // str r0, [r4, r1]
    // mov r0, #0x35
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov73_021EA180
    // bl sub_020399EC
    // b _021E9B4A
    // ldr r0, _021E9B50 ; =0x00000F94
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _021E9B4A
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E9B50: .word 0x00000F94
    // _021E9B54: .word 0x000006DC
    // TODO: decompile
}



void ov73_021E9B58(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9B8C ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9B90 ; =0x00000BD4
    // mov r2, #3
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x2d
    // bl ov73_021E83EC
    // add r0, r4, #0
    // bl ov73_021EA180
    // ldr r0, [r4]
    // mov r1, #0
    // str r1, [r0, #0x20]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9B8C: .word 0x00000F0F
    // _021E9B90: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9B94(void) {
}



void ov73_021E9B9C(void) {
}



void ov73_021E9BB4(void) {
    Save_WriteFileAsync(*((u32*)(*((u32*)r0) + 0xc)));
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x20));
    ov73_021EA180(r4);
}



void ov73_021E9BD4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9BFC ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9C00 ; =0x00000BD4
    // mov r2, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x30
    // mov r2, #0x16
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9BFC: .word 0x00000F0F
    // _021E9C00: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9C04(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E9C2C ; =0x000012C8
    // ldr r0, [r4, r0]
    // bl ov73_021E83D4
    // cmp r0, #0
    // beq _021E9C28
    // cmp r0, #2
    // bne _021E9C1E
    // mov r0, #0xd
    // str r0, [r4, #0x1c]
    // b _021E9C28
    // mov r0, #0x29
    // str r0, [r4, #0x1c]
    // ldr r0, [r4]
    // mov r1, #1
    // str r1, [r0, #0x20]
    // mov r0, #3
    // pop {r4, pc}
    // _021E9C2C: .word 0x000012C8
    // TODO: decompile
}



void ov73_021E9C30(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9C58 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9C5C ; =0x00000BD4
    // mov r2, #9
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x30
    // mov r2, #0x18
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9C58: .word 0x00000F0F
    // _021E9C5C: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9C60(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E9C88 ; =0x000012C8
    // ldr r0, [r4, r0]
    // bl ov73_021E83D4
    // cmp r0, #0
    // beq _021E9C84
    // cmp r0, #2
    // bne _021E9C7A
    // mov r0, #0x1d
    // str r0, [r4, #0x1c]
    // b _021E9C84
    // mov r0, #0x29
    // str r0, [r4, #0x1c]
    // ldr r0, [r4]
    // mov r1, #1
    // str r1, [r0, #0x20]
    // mov r0, #3
    // pop {r4, pc}
    // _021E9C88: .word 0x000012C8
    // TODO: decompile
}



void ov73_021E9C8C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9CB4 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9CB8 ; =0x00000BDC
    // mov r2, #0x1a
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x2f
    // mov r2, #0x2a
    // bl ov73_021E83EC
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9CB4: .word 0x00000F0F
    // _021E9CB8: .word 0x00000BDC
    // TODO: decompile
}



u32 ov73_021E9CBC(void) {
}



void ov73_021E9CD8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021E9D08 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _021E9D0C ; =0x00000BDC
    // mov r2, #0x1b
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r4, #0
    // mov r1, #0x31
    // mov r2, #0x2e
    // bl ov73_021E83EC
    // mov r0, #0xf2
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9D08: .word 0x00000F0F
    // _021E9D0C: .word 0x00000BDC
    // TODO: decompile
}



u8 ov73_021E9D10(void) {
}



void ov73_021E9D14(void) {
    sub_0203A914();
    sub_0203946C();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0;
}



void ov73_021E9D44(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E9D68 ; =0x000012C8
    // ldr r0, [r4, r0]
    // bl ov73_021E83D4
    // cmp r0, #0
    // beq _021E9D62
    // cmp r0, #2
    // bne _021E9D5E
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // b _021E9D62
    // mov r0, #0x29
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E9D68: .word 0x000012C8
    // TODO: decompile
}



void ov73_021E9D6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021E9DD4 ; =0x00000F1C
    // mov r4, #0
    // ldr r0, [r5, r0]
    // add r0, r0, #7
    // cmp r0, #9
    // bhi _021E9DAE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9D88: ; jump table
    // mov r4, #0xd
    // b _021E9DAE
    // mov r4, #0xb
    // b _021E9DAE
    // mov r4, #0xc
    // b _021E9DAE
    // mov r4, #0xe
    // b _021E9DAE
    // mov r4, #0xf
    // add r0, r5, #0
    // bl ov73_021EA180
    // ldr r0, _021E9DD8 ; =0x00000F0F
    // ldr r1, _021E9DDC ; =0x00000BD4
    // str r0, [sp]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl ov73_021E9FF8
    // add r0, r5, #0
    // mov r1, #0x2f
    // mov r2, #0x36
    // bl ov73_021E83EC
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _021E9DD4: .word 0x00000F1C
    // _021E9DD8: .word 0x00000F0F
    // _021E9DDC: .word 0x00000BD4
    // TODO: decompile
}



void ov73_021E9DE0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r1, #0xf9
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldrsh r2, [r4, r1]
    // cmp r2, #3
    // bhi _021E9E7C
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E9DFC: ; jump table
    // sub r1, #0x81
    // str r1, [sp]
    // ldr r1, _021E9EA0 ; =0x00000BD4
    // mov r2, #0x10
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // mov r0, #0xf9
    // lsl r0, r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _021E9E98
    // ldr r0, _021E9EA4 ; =0x00000BF4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021E9E98
    // bl sub_0203946C
    // bl ov00_021EC8D8
    // mov r0, #0xf9
    // lsl r0, r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _021E9E98
    // sub r1, #0x81
    // str r1, [sp]
    // ldr r1, _021E9EA0 ; =0x00000BD4
    // mov r2, #0x11
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov73_021E9FF8
    // mov r0, #0xf9
    // lsl r0, r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _021E9E98
    // ldr r0, _021E9EA4 ; =0x00000BF4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021E9E98
    // mov r0, #0xf9
    // lsl r0, r0, #4
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _021E9E98
    // ldr r0, _021E9EA8 ; =0x00000F92
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x1e
    // ble _021E9E98
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov73_021E844C
    // mov r0, #0x2e
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021E9EA0: .word 0x00000BD4
    // _021E9EA4: .word 0x00000BF4
    // _021E9EA8: .word 0x00000F92
    // TODO: decompile
}



void ov73_021E9EAC(void) {
}



void ov73_021E9ECC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E9EFC ; =0x00000BF4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021E9EF8
    // mov r0, #0xf2
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0x1e
    // ble _021E9EEE
    // ldr r0, [r4, #0x20]
    // str r0, [r4, #0x1c]
    // mov r0, #0xf2
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // _021E9EFC: .word 0x00000BF4
    // TODO: decompile
}



void ov73_021E9F00(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E9F2C ; =0x00000BF4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _021E9F28
    // mov r2, #0x91
    // ldr r0, [r4, #4]
    // mov r1, #0xa
    // lsl r2, r2, #2
    // bl ov73_021E8390
    // ldr r1, _021E9F30 ; =0x000012C8
    // str r0, [r4, r1]
    // ldr r0, [r4, #0x20]
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // pop {r4, pc}
    // _021E9F2C: .word 0x00000BF4
    // _021E9F30: .word 0x000012C8
    // TODO: decompile
}



void ov73_021E9F34(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // add r4, r3, #0
    // bl NewString_ReadMsgData
    // mov r1, #0xbd
    // add r6, r0, #0
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // add r1, #0x10
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // ldr r0, _021E9F94 ; =0x00000DD8
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021E9F94 ; =0x00000DD8
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // mov r2, #0xbe
    // ldr r0, _021E9F94 ; =0x00000DD8
    // str r3, [sp, #8]
    // lsl r2, r2, #4
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _021E9F98 ; =0x00000BF4
    // str r0, [r5, r1]
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _021E9F94: .word 0x00000DD8
    // _021E9F98: .word 0x00000BF4
    // TODO: decompile
}



void ov73_021E9F9C(void) {
    // push {r4, lr}
    // ldr r1, _021E9FC4 ; =0x00000F14
    // add r4, r0, #0
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // neg r0, r0
    // bl ov73_021E6A70
    // ldr r2, _021E9FC4 ; =0x00000F14
    // add r1, r0, #0
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // neg r2, r2
    // bl ov73_021EA218
    // mov r0, #0x38
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // pop {r4, pc}
    // _021E9FC4: .word 0x00000F14
    // TODO: decompile
}



void ov73_021E9FC8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E9FF0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // bne _021E9FDC
    // mov r0, #2
    // tst r0, r1
    // beq _021E9FEA
    // ldr r0, _021E9FF4 ; =0x00000E18
    // mov r1, #0
    // add r0, r4, r0
    // bl sub_0200E5D4
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _021E9FF0: .word gSystem
    // _021E9FF4: .word 0x00000E18
    // TODO: decompile
}



void ov73_021E9FF8(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // mov r2, #0xbe
    // lsl r2, r2, #4
    // ldr r2, [r5, r2]
    // add r4, r3, #0
    // bl ReadMsgDataIntoString
    // ldr r0, _021EA048 ; =0x00000DD8
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EA048 ; =0x00000DD8
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // mov r2, #0xbe
    // ldr r0, _021EA048 ; =0x00000DD8
    // str r3, [sp, #8]
    // lsl r2, r2, #4
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _021EA04C ; =0x00000BF4
    // str r0, [r5, r1]
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _021EA048: .word 0x00000DD8
    // _021EA04C: .word 0x00000BF4
    // TODO: decompile
}



void ov73_021EA050(void) {
    // ldr r0, [sp, #0xc]
    FontID_String_GetWidth(0);
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r0, [sp, #0xc]
    FontID_String_GetWidth(((*((u8*)(r4 + 7)) << 3) >> 0x1f), (*((u8*)(r4 + 7)) << 3), 0);
    // sub r2, r1, r0
}



void ov73_021EA088(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    ov73_021EA050(1);
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, r6, r0);
}



void ov73_021EA0BC(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    ov73_021EA050(0);
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
}



void ov73_021EA0F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r1, #0
    // mov r1, #0xf
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // mov r3, #2
    // bl String16_FormatInteger
    // mov r3, #1
    // ldr r0, _021EA128 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov73_021EA0BC
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EA128: .word 0x00010200
    // TODO: decompile
}



void ov73_021EA12C(void) {
}



void ov73_021EA134(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r1, #1
    // bhi _021EA154
    // mov r0, #0xdd
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, _021EA158 ; =0x00000DD4
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // nop
    // _021EA158: .word 0x00000DD4
    // TODO: decompile
}



void ov73_021EA15C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021EA178 ; =0x00000F0C
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _021EA176
    // ldr r0, _021EA17C ; =0x00000DD8
    // mov r1, #1
    // add r0, r4, r0
    // bl WaitingIcon_New
    // ldr r1, _021EA178 ; =0x00000F0C
    // str r0, [r4, r1]
    // pop {r4, pc}
    // _021EA178: .word 0x00000F0C
    // _021EA17C: .word 0x00000DD8
    // TODO: decompile
}



void ov73_021EA180(void) {
}



void ov73_021EA19C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #1
    // add r6, r1, #0
    // lsl r0, r0, #8
    // mov r1, #0x96
    // bl String_New
    // add r4, r0, #0
    // ldr r0, _021EA20C ; =0x00000BDC
    // add r1, r6, #0
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // bl ReadMsgDataIntoString
    // mov r1, #0xbd
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // add r1, #0x20
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // ldr r0, _021EA210 ; =0x00000E18
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EA210 ; =0x00000E18
    // mov r1, #1
    // add r0, r5, r0
    // mov r2, #0x1f
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // mov r2, #0xbf
    // ldr r0, _021EA210 ; =0x00000E18
    // str r3, [sp, #8]
    // lsl r2, r2, #4
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _021EA214 ; =0x00000BF4
    // str r0, [r5, r1]
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021EA20C: .word 0x00000BDC
    // _021EA210: .word 0x00000E18
    // _021EA214: .word 0x00000BF4
    // TODO: decompile
}



void ov73_021EA218(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0
    // add r4, r1, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _021EA22A
    // mov r4, #0xb
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xbd
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // mov r3, #5
    // bl BufferIntegerAsString
    // ldr r0, _021EA258 ; =0x00000DD8
    // mov r1, #1
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov73_021EA19C
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021EA258: .word 0x00000DD8
    // TODO: decompile
}



void ov73_021EA25C(void) {
}



void ov73_021EA268(void) {
}



void ov73_021EA290(void) {
}



void ov73_021EA2A8(void) {
}



void ov73_021EA2B4(void) {
}



void ov73_021EA2E0(void) {
    Save_FashionData_Get(*((u32*)(r0 + 4)));
    sub_0202BF80(((*((u32*)(r4 + 8)) << 0x18) >> 0x18), *((u32*)(r4 + 0xc)), r0, *((u32*)(r4 + 0x10)));
}



void ov73_021EA2FC(void) {
    sub_020270C4(*((u32*)(r0 + 4)));
    // str r1, [sp]
    ov73_021E7E24(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
}



void ov73_021EA31C(void) {
}



void ov73_021EA324(void) {
    Save_Rankings_Get(*((u32*)(r0 + 4)));
    // str r0, [sp]
    Save_UpdateRankingsFromMixing(*((u32*)(r4 + 4)), *((u32*)(r4 + 0xc)), ((*((u32*)(r4 + 8)) << 0x18) >> 0x18), *((u32*)(r4 + 0x10)));
}



void ov73_021EA348(void) {
}



void ov73_021EA370(void) {
    // bx lr
    // TODO: decompile
}



void ov73_021EA374(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // mov r0, #0
    // ldr r6, _021EA3C8 ; =0x00000BB8
    // ldr r5, _021EA3CC ; =ov73_021EA744
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [r5]
    // blx r1
    // add r4, r0, #0
    // ldr r0, [sp]
    // ldr r3, [r5, #4]
    // mov r1, #0x32
    // add r2, r4, #0
    // blx r3
    // add r7, r0, #0
    // cmp r6, r4
    // bhi _021EA3A0
    // bl GF_AssertFail
    // ldr r1, [sp, #4]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl MIi_CpuCopyFast
    // add r0, r7, #0
    // bl Heap_Free
    // ldr r0, [sp, #4]
    // sub r6, r6, r4
    // add r0, r0, r4
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r5, #0xc
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #0xa
    // blt _021EA384
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021EA3C8: .word 0x00000BB8
    // _021EA3CC: .word ov73_021EA744
    // TODO: decompile
}



void ov73_021EA3D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x68
    // str r0, [sp]
    // ldr r0, _021EA514 ; =0x00000BB8
    // str r1, [sp, #4]
    // str r0, [sp, #0x14]
    // mov r0, #0x32
    // str r0, [sp, #0x50]
    // ldr r0, [sp]
    // mov r7, #0
    // str r0, [sp, #0x54]
    // bl sub_0203769C
    // add r5, r7, #0
    // str r0, [sp, #0x5c]
    // mov r0, #5
    // str r0, [sp, #0x58]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x60]
    // add r0, sp, #0x28
    // ldr r4, _021EA518 ; =ov73_021EA744
    // str r0, [sp, #0x64]
    // str r5, [sp, #0x1c]
    // str r5, [sp, #0x20]
    // str r5, [sp, #0x24]
    // ldr r0, [sp]
    // ldr r1, [r4]
    // blx r1
    // ldr r1, [sp, #0x1c]
    // add r5, r5, #1
    // add r0, r1, r0
    // add r4, #0xc
    // str r0, [sp, #0x1c]
    // cmp r5, #2
    // blt _021EA402
    // ldr r4, _021EA518 ; =ov73_021EA744
    // mov r5, #0
    // ldr r0, [sp]
    // ldr r1, [r4]
    // blx r1
    // ldr r1, [sp, #0x20]
    // add r5, r5, #1
    // add r0, r1, r0
    // add r4, #0xc
    // str r0, [sp, #0x20]
    // cmp r5, #3
    // blt _021EA41A
    // ldr r4, _021EA518 ; =ov73_021EA744
    // mov r5, #0
    // ldr r0, [sp]
    // ldr r1, [r4]
    // blx r1
    // ldr r1, [sp, #0x24]
    // add r5, r5, #1
    // add r0, r1, r0
    // add r4, #0xc
    // str r0, [sp, #0x24]
    // cmp r5, #4
    // blt _021EA432
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, _021EA518 ; =ov73_021EA744
    // str r0, [sp, #0x10]
    // add r0, sp, #0x1c
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // cmp r1, r0
    // bhi _021EA466
    // bl GF_AssertFail
    // mov r6, #0
    // ldr r4, [sp, #4]
    // add r5, r6, #0
    // add r0, r6, #0
    // bl sub_02034818
    // cmp r0, #0
    // beq _021EA47E
    // ldr r0, [sp, #0x60]
    // add r1, r4, r7
    // str r1, [r0, r5]
    // b _021EA484
    // ldr r1, [sp, #0x60]
    // mov r0, #0
    // str r0, [r1, r5]
    // mov r0, #0x2f
    // lsl r0, r0, #6
    // add r6, r6, #1
    // add r4, r4, r0
    // add r5, r5, #4
    // cmp r6, #5
    // blt _021EA46C
    // ldr r0, [sp, #8]
    // cmp r0, #7
    // beq _021EA4A0
    // cmp r0, #8
    // beq _021EA4A0
    // cmp r0, #9
    // bne _021EA4D2
    // mov r6, #0
    // ldr r4, [sp, #4]
    // add r5, r6, #0
    // add r0, r6, #0
    // bl sub_02034818
    // cmp r0, #0
    // beq _021EA4BE
    // ldr r0, [sp, #0xc]
    // sub r0, #0x1c
    // ldr r0, [r0]
    // add r1, r4, r0
    // ldr r0, [sp, #0x64]
    // str r1, [r0, r5]
    // b _021EA4C4
    // ldr r1, [sp, #0x64]
    // mov r0, #0
    // str r0, [r1, r5]
    // mov r0, #0x2f
    // lsl r0, r0, #6
    // add r6, r6, #1
    // add r4, r4, r0
    // add r5, r5, #4
    // cmp r6, #5
    // blt _021EA4A6
    // ldr r0, [sp, #0x10]
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // beq _021EA4DE
    // add r0, sp, #0x50
    // blx r1
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r7, r7, r0
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #0xa
    // blo _021EA452
    // ldr r0, [sp]
    // bl sub_020270C4
    // add r4, r0, #0
    // bl sub_0202E43C
    // add r0, r4, #0
    // bl sub_0202E474
    // add sp, #0x68
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EA514: .word 0x00000BB8
    // _021EA518: .word ov73_021EA744
    // TODO: decompile
}


