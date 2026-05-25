/* Decompiled from asm/overlay_27.s */
#include "global.h"

void ov27_02259F80(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r2, #0
    // add r6, r0, #0
    // str r1, [sp, #0x10]
    // ldr r2, _0225A170 ; =0x00018D00
    // mov r0, #3
    // mov r1, #8
    // bl Heap_Create
    // mov r0, #0
    // bl GXS_SetGraphicsMode
    // mov r0, #0x80
    // bl GX_SetBankForSubBG
    // mov r0, #1
    // lsl r0, r0, #8
    // bl GX_SetBankForSubOBJ
    // ldr r2, _0225A174 ; =0x04001000
    // ldr r0, _0225A178 ; =0xFFCFFFEF
    // ldr r1, [r2]
    // mov r3, #0
    // and r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // str r0, [r2]
    // ldr r2, _0225A17C ; =ov27_0225D000
    // add r0, r6, #0
    // mov r1, #4
    // bl InitBgFromTemplate
    // ldr r2, _0225A180 ; =ov27_0225D01C
    // add r0, r6, #0
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r1, #0x15
    // ldr r0, _0225A184 ; =ov27_0225A320
    // lsl r1, r1, #6
    // mov r2, #0xa
    // mov r3, #8
    // bl CreateSysTaskAndEnvironment
    // add r7, r0, #0
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r7, [r4, #8]
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [sp, #0x10]
    // str r6, [r4, #4]
    // str r0, [r4, #0xc]
    // add r0, r5, #0
    // str r5, [r4, #0x10]
    // bl ov27_0225BD50
    // ldr r3, _0225A188 ; =0x0000051C
    // add r2, r0, #0
    // ldr r1, [r4, r3]
    // mov r0, #0x1e
    // bic r1, r0
    // lsl r0, r2, #0x1c
    // lsr r0, r0, #0x1b
    // orr r0, r1
    // str r0, [r4, r3]
    // ldr r1, [r4, r3]
    // mov r0, #0x20
    // bic r1, r0
    // str r1, [r4, r3]
    // mov r3, #0x3f
    // lsl r3, r3, #4
    // add r0, r4, r3
    // str r0, [sp]
    // add r2, r3, #0
    // sub r2, #0x20
    // sub r3, #0x10
    // ldr r1, [r4]
    // add r0, r6, #0
    // add r2, r4, r2
    // add r3, r4, r3
    // bl ov27_0225AC00
    // mov r0, #4
    // mov r1, #8
    // bl FontID_Alloc
    // mov r0, #8
    // bl MessageFormat_New
    // ldr r1, _0225A18C ; =0x000004AC
    // mov r2, #0xc4
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #8
    // bl NewMsgDataFromNarc
    // ldr r1, _0225A190 ; =0x000004A8
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225C10C
    // add r1, r5, #0
    // add r1, #0xd3
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov27_0225C1AC
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // bl ov27_0225C1EC
    // add r0, r4, #0
    // bl ov27_0225AD0C
    // add r0, r4, #0
    // bl ov27_0225B010
    // ldr r1, [r4, #0x10]
    // add r0, r4, #0
    // add r1, #0xd2
    // ldrb r1, [r1]
    // lsl r1, r1, #0x1a
    // lsr r1, r1, #0x1a
    // bl ov27_0225BB6C
    // mov r3, #0
    // str r3, [sp]
    // mov r2, #0x3d
    // ldr r0, _0225A194 ; =0x000F0100
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // lsl r2, r2, #4
    // add r0, r4, r2
    // str r3, [sp, #0xc]
    // add r2, #0xe4
    // ldr r2, [r4, r2]
    // mov r1, #4
    // bl AddTextPrinterParameterizedWithColor
    // mov r1, #0
    // mov r2, #0x3e
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225A194 ; =0x000F0100
    // lsl r2, r2, #4
    // str r0, [sp, #8]
    // add r0, r4, r2
    // str r1, [sp, #0xc]
    // add r2, #0xe4
    // ldr r2, [r4, r2]
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ov27_0225BCE8
    // add r0, r4, #0
    // bl ov27_0225BC84
    // add r0, r4, #0
    // mov r1, #1
    // bl ov27_0225A690
    // add r0, r4, #0
    // bl ov27_0225C0E0
    // mov r0, #0x52
    // lsl r0, r0, #4
    // add r0, r4, r0
    // add r1, r4, #0
    // bl ov27_0225BDDC
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl MenuInputStateMgr_GetState
    // cmp r0, #0
    // bne _0225A102
    // add r0, r5, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x80
    // add r5, #0xd2
    // bic r1, r0
    // strb r1, [r5]
    // b _0225A11A
    // add r0, r5, #0
    // bl FieldSystem_TaskIsRunning
    // cmp r0, #0
    // bne _0225A11A
    // add r0, r5, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x80
    // add r5, #0xd2
    // orr r0, r1
    // strb r0, [r5]
    // add r0, r4, #0
    // bl ov27_0225A714
    // cmp r0, #0
    // bne _0225A12A
    // add sp, #0x14
    // add r0, r7, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl ov27_0225A7FC
    // ldr r0, [r4, #0x18]
    // bl SpriteList_RenderAndAnimateSprites
    // ldr r2, _0225A174 ; =0x04001000
    // ldr r0, _0225A198 ; =0xFFFF1FFF
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r0, #1
    // add r1, r0, #0
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
    // add r0, r7, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225A170: .word 0x00018D00
    // _0225A174: .word 0x04001000
    // _0225A178: .word 0xFFCFFFEF
    // _0225A17C: .word ov27_0225D000
    // _0225A180: .word ov27_0225D01C
    // _0225A184: .word ov27_0225A320
    // _0225A188: .word 0x0000051C
    // _0225A18C: .word 0x000004AC
    // _0225A190: .word 0x000004A8
    // _0225A194: .word 0x000F0100
    // _0225A198: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov27_0225A19C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // add r0, r1, #0
    // str r1, [sp, #4]
    // bl SysTask_GetData
    // add r6, r0, #0
    // ldr r1, _0225A2B0 ; =FS_OVERLAY_ID(ds_protect)
    // mov r0, #0
    // bl FS_LoadOverlay
    // ldr r0, _0225A2B4 ; =ov27_0225C238
    // bl DSProt_DetectFlashcart
    // cmp r0, #0
    // beq _0225A1C8
    // mov r1, #0xfa
    // mov r0, #3
    // lsl r1, r1, #2
    // bl Heap_AllocAtEnd
    // mov r0, #0x52
    // lsl r0, r0, #4
    // add r0, r6, r0
    // bl ov27_0225BEB0
    // ldr r0, _0225A2B8 ; =0x000004A8
    // ldr r0, [r6, r0]
    // bl DestroyMsgData
    // ldr r0, _0225A2BC ; =0x000004AC
    // ldr r0, [r6, r0]
    // bl MessageFormat_Delete
    // mov r7, #0x55
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // bl sub_0200AEB0
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0xb
    // blt _0225A1EA
    // mov r7, #0x56
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // bl sub_0200B0A8
    // add r5, r5, #1
    // add r4, #0x10
    // cmp r5, #0xb
    // blt _0225A200
    // mov r7, #0x51
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // bl Destroy2DGfxResObjMan
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #4
    // blt _0225A216
    // ldr r0, _0225A2C0 ; =ov27_0225C248
    // bl DSProt_DetectNotEmulator
    // cmp r0, #0
    // bne _0225A238
    // mov r1, #0xfa
    // mov r0, #3
    // lsl r1, r1, #2
    // bl Heap_AllocAtEnd
    // ldr r0, [r6, #0x18]
    // bl SpriteList_Delete
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // mov r5, #0
    // add r4, r6, r0
    // add r0, r4, #0
    // bl RemoveWindow
    // add r5, r5, #1
    // add r4, #0x10
    // cmp r5, #8
    // blt _0225A246
    // mov r0, #0x3e
    // lsl r0, r0, #4
    // add r0, r6, r0
    // bl RemoveWindow
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // add r0, r6, r0
    // bl RemoveWindow
    // add r0, r6, #0
    // bl ov27_0225BC34
    // mov r0, #4
    // bl FontID_Release
    // ldr r0, [sp, #4]
    // bl DestroySysTaskAndEnvironment
    // ldr r0, [sp]
    // mov r1, #5
    // bl FreeBgTilemapBuffer
    // ldr r0, [sp]
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // mov r0, #8
    // bl Heap_Destroy
    // ldr r0, _0225A2C4 ; =ov27_0225C24C
    // bl DSProt_DetectNotDummy
    // cmp r0, #0
    // bne _0225A2A4
    // mov r1, #0xfa
    // mov r0, #3
    // lsl r1, r1, #2
    // bl Heap_AllocAtEnd
    // ldr r1, _0225A2B0 ; =FS_OVERLAY_ID(ds_protect)
    // mov r0, #0
    // bl FS_UnloadOverlay
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A2B0: .word FS_OVERLAY_ID(ds_protect)
    // _0225A2B4: .word ov27_0225C238
    // _0225A2B8: .word 0x000004A8
    // _0225A2BC: .word 0x000004AC
    // _0225A2C0: .word ov27_0225C248
    // _0225A2C4: .word ov27_0225C24C
    // TODO: decompile
}



u8 ov27_0225A2C8(void) {
}



void ov27_0225A2CC(void) {
    // push {r4, lr}
    // bl SysTask_GetData
    // add r4, r0, #0
    // bne _0225A2DA
    // bl GF_AssertFail
    // ldr r1, _0225A2E8 ; =0x0000051C
    // mov r0, #0x20
    // ldr r2, [r4, r1]
    // orr r0, r2
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _0225A2E8: .word 0x0000051C
    // TODO: decompile
}



void ov27_0225A2EC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl SysTask_GetData
    // add r4, r0, #0
    // bne _0225A2FC
    // bl GF_AssertFail
    // cmp r5, #1
    // beq _0225A308
    // cmp r5, #2
    // beq _0225A308
    // bl GF_AssertFail
    // ldr r1, _0225A31C ; =0x0000051C
    // mov r0, #0xc0
    // ldr r2, [r4, r1]
    // bic r2, r0
    // lsl r0, r5, #0x1e
    // lsr r0, r0, #0x18
    // orr r0, r2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // nop
    // _0225A31C: .word 0x0000051C
    // TODO: decompile
}



void ov27_0225A320(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x10]
    // bl ov27_0225A89C
    // add r4, r0, #0
    // ldr r0, [r5, #0x10]
    // bl FieldSystem_IsPlayerMovementAllowed
    // add r6, r0, #0
    // ldr r0, [r5, #0x10]
    // add r0, #0xd2
    // ldrb r0, [r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // beq _0225A366
    // cmp r6, #0
    // beq _0225A35E
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0225A35E
    // ldr r2, [r5, #0x10]
    // add r0, r2, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x80
    // add r2, #0xd2
    // bic r1, r0
    // strb r1, [r2]
    // b _0225A36E
    // ldr r0, _0225A45C ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // b _0225A36E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov27_0225A8E8
    // ldr r0, _0225A460 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1f
    // beq _0225A38A
    // ldr r0, [r5, #0x14]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // bl Sprite_TryChangeAnimSeq
    // ldr r0, _0225A460 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1e
    // cmp r0, #1
    // bne _0225A3AE
    // mov r0, #0xeb
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #2
    // bl Sprite_SetAnimCtrlSeq
    // ldr r1, _0225A460 ; =0x0000051C
    // mov r0, #0xc0
    // ldr r2, [r5, r1]
    // bic r2, r0
    // str r2, [r5, r1]
    // b _0225A3C8
    // cmp r0, #2
    // bne _0225A3C8
    // mov r0, #0x3b
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #2
    // bl Sprite_SetAnimCtrlSeq
    // ldr r1, _0225A460 ; =0x0000051C
    // mov r0, #0xc0
    // ldr r2, [r5, r1]
    // bic r2, r0
    // str r2, [r5, r1]
    // ldr r0, [r5, #0x10]
    // bl FieldSystem_TaskIsRunning
    // cmp r0, #0
    // beq _0225A3DA
    // add r0, r5, #0
    // bl ov27_0225A7FC
    // b _0225A412
    // ldr r0, [r5, #0x10]
    // add r0, #0xd2
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1a
    // cmp r0, #2
    // bne _0225A3FE
    // add r0, r5, #0
    // bl ov27_0225A86C
    // ldr r2, [r5, #0x10]
    // add r0, r2, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x3f
    // add r2, #0xd2
    // bic r1, r0
    // strb r1, [r2]
    // cmp r6, #0
    // beq _0225A408
    // add r0, r5, #0
    // bl ov27_0225A66C
    // cmp r4, #0
    // bne _0225A412
    // add r0, r5, #0
    // bl ov27_0225B4D8
    // ldr r0, _0225A464 ; =ov27_0225CECC
    // bl TouchscreenHitbox_FindRectAtTouchHeld
    // add r6, r0, #0
    // ldr r0, _0225A464 ; =ov27_0225CECC
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov27_0225A530
    // ldr r0, _0225A460 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _0225A44A
    // add r0, r5, #0
    // bl ov27_0225A4D0
    // cmp r0, #0
    // beq _0225A44A
    // cmp r4, #0
    // bne _0225A44A
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov27_0225A48C
    // mov r0, #0x52
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl ov27_0225BDFC
    // ldr r0, [r5, #0x18]
    // bl SpriteList_RenderAndAnimateSprites
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A45C: .word 0x04001050
    // _0225A460: .word 0x0000051C
    // _0225A464: .word ov27_0225CECC
    // TODO: decompile
}



void ov27_0225A468(void) {
    // ldr r0, [r5, r0]
    // sub r1, r1, r2
    Sprite_SetAnimCtrlSeq((0xf1 << 2), 0xb, (r1 << 2));
    // ldr r0, [r5, r0]
    Sprite_SetAnimCtrlSeq((0xef << 2), (r4 + 3));
}



void ov27_0225A48C(void) {
    FieldSystem_GetPlayerAvatar(*((u32*)(r0 + 0x10)));
    PlayerAvatar_CheckRunningShoesLock();
    // eor r4, r1
    ov27_0225A468(r5, r0);
    PlayerAvatar_SetRunningShoesLock(r6, r4);
}



void ov27_0225A4B8(void) {
}



void ov27_0225A4D0(void) {
    ov27_0225BDC8();
    PlayerAvatar_GetState(*((u32*)(*((u32*)(r5 + 0x10)) + 0x40)));
    // add r0, #0xd2
    // ldrb r0, [r0]
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xef << 2), 1);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xf1 << 2), 1);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xef << 2), 0);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xf1 << 2), 0);
}



void ov27_0225A530(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // bl Sprite_GetAnimationNumber
    // add r6, r0, #0
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // bl Sprite_GetDrawFlag
    // cmp r0, #0
    // beq _0225A58C
    // cmp r4, #1
    // bne _0225A570
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0225A570
    // ldr r0, _0225A590 ; =gSystem
    // mov r1, #1
    // str r1, [r0, #0x5c]
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // pop {r4, r5, r6, pc}
    // cmp r4, #1
    // bne _0225A580
    // cmp r6, #6
    // bne _0225A580
    // ldr r0, _0225A590 ; =gSystem
    // mov r1, #1
    // str r1, [r0, #0x5c]
    // pop {r4, r5, r6, pc}
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r1, #5
    // bl Sprite_SetAnimCtrlSeq
    // pop {r4, r5, r6, pc}
    // nop
    // _0225A590: .word gSystem
    // TODO: decompile
}



void ov27_0225A594(void) {
    ov27_0225BD44(*((u32*)(r0 + 0x10)));
    FieldSystem_IsPlayerMovementAllowed(r4);
    FieldSystem_GetPlayerAvatar(r4);
    PlayerAvatar_GetMapObject();
    sub_0205F330();
    MapObject_GetSpriteID(r7);
    // sub r0, #0xbc
    // ldr r0, [r5, r0]
    ov01_021E7F54(r4);
    // add r1, sp, #0
    FieldSystem_GetFacingObject(r4);
    // ldr r0, [sp]
    MapObject_GetScriptID();
    ov01_021F6BD0();
    // ldr r0, [sp]
    MapObject_GetSpriteID();
    ov01_021F6BB0();
}



void ov27_0225A61C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // add r4, r1, #0
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r6, _0225A664 ; =ov27_0225D108
    // mov r3, #0
    // ldrb r4, [r6, r4]
    // str r3, [sp]
    // mov r2, #0x3d
    // lsl r4, r4, #2
    // ldr r0, _0225A668 ; =0x000F0100
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // lsl r2, r2, #4
    // add r0, r5, r2
    // str r3, [sp, #0xc]
    // add r4, r5, r4
    // add r2, #0xe0
    // ldr r2, [r4, r2]
    // mov r1, #4
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0225A664: .word ov27_0225D108
    // _0225A668: .word 0x000F0100
    // TODO: decompile
}



void ov27_0225A66C(void) {
    ov27_0225A594();
    // ldr r0, [r5, r0]
    ov27_0225A61C(r5, r0);
    // str r4, [r5, r0]
}



void ov27_0225A690(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #0
    // beq _0225A6C0
    // ldr r2, _0225A710 ; =0x0000051C
    // mov r1, #1
    // ldr r3, [r4, r2]
    // bic r3, r1
    // mov r1, #1
    // orr r1, r3
    // str r1, [r4, r2]
    // bl ov27_0225A4D0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov27_0225A9C0
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // ldr r1, _0225A710 ; =0x0000051C
    // mov r0, #1
    // ldr r2, [r4, r1]
    // bic r2, r0
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // str r2, [r4, r1]
    // add r0, r4, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowToVram
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0xef
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0xf1
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl ov27_0225A9C0
    // pop {r4, pc}
    // nop
    // _0225A710: .word 0x0000051C
    // TODO: decompile
}



void ov27_0225A714(void) {
    GF_AssertFail(*((u32*)(r0 + 0xc)));
    // add r0, #0xd2
    // ldrb r0, [r0]
    // add r0, r4, r0
    MenuInputStateMgr_GetState((0x43 << 2));
    ov27_0225A8E8(r5, 1);
    // add r0, #0xd2
    // ldrb r1, [r0]
    // add r4, #0xd2
    // bic r1, r0
    // strb r1, [r4]
    // add r0, r4, r0
    MenuInputStateMgr_GetState((0x43 << 2));
    // strh r0, [r6]
    // add r0, #0xd2
    // ldrb r1, [r0]
    // bic r1, r0
    // add r0, #0xd2
    // strb r1, [r0]
    // add r0, #0xd2
    // ldrb r1, [r0]
    // add r4, #0xd2
    // orr r0, r1
    // strb r0, [r4]
    ov27_0225B398(r5, *((u32*)(r5 + 0x14)));
    // add r0, #0xd2
    // ldrb r1, [r0]
    // add r4, #0xd2
    // bic r1, r0
    // orr r0, r1
    // strb r0, [r4]
}



void ov27_0225A7B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // bl sub_0203DF8C
    // cmp r0, #1
    // bne _0225A7C4
    // add r0, r4, #0
    // bl ov27_0225A66C
    // ldr r0, _0225A7D8 ; =0x0000051C
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // bne _0225A7D4
    // add r0, r4, #0
    // bl ov27_0225AAD4
    // pop {r4, pc}
    // nop
    // _0225A7D8: .word 0x0000051C
    // TODO: decompile
}



void ov27_0225A7DC(void) {
    GF_AssertFail(*((u32*)(r0 + 0x14)));
    ov27_0225B398(r4, *((u32*)(r4 + 0x14)));
    ov27_0225A690(r4, 0);
}



void ov27_0225A7FC(void) {
    // add r2, #0xd2
    // ldrb r2, [r2]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225A81C: ; jump table
    ov27_0225A7B0(*((u32*)(r0 + 0x10)), (*((u16*)(((*((u32*)(r0 + 0x10)) << 0x1a) >> 0x1a) + 6)) << 0x10));
    ov27_0225A7DC();
    // add r0, #0xd2
    // ldrb r1, [r0]
    // add r2, #0xd2
    // bic r1, r0
    // orr r0, r1
    // strb r0, [r2]
    IsPaletteFadeFinished(*((u32*)(r1 + 0x6c)), *((u32*)(r4 + 0x10)));
    ov27_0225B4D8(r4);
    ov27_0225B404(r4);
    GF_AssertFail();
}



void ov27_0225A86C(void) {
    ov27_0225A594();
    ov27_0225A61C(r4, r0);
    // mvn r1, r1
    ov27_0225B398(r4, 0);
    // add r0, r4, r0
    CopyWindowToVram((0x3d << 4));
    ov27_0225A690(r4, 1);
}



void ov27_0225A89C(void) {
    IsPaletteFadeFinished();
    // add r0, #0xd2
    // ldrb r0, [r0]
    FieldSystem_IsPlayerMovementAllowed(r4);
    ov27_0225BD44(r4);
    MapSceneScriptCheck(r4);
    sub_02058AA0();
}



void ov27_0225A8E8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // cmp r1, #0
    // beq _0225A9AE
    // ldr r1, _0225A9B8 ; =0x0000051C
    // ldr r1, [r4, r1]
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1c
    // cmp r1, #5
    // bne _0225A912
    // ldr r1, [r4, #0x10]
    // add r1, #0xd2
    // ldrb r1, [r1]
    // lsl r1, r1, #0x1a
    // lsr r1, r1, #0x1a
    // bne _0225A912
    // mov r1, #0
    // mvn r1, r1
    // bl ov27_0225B398
    // mov r0, #0xef
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetOamMode
    // mov r0, #0xf1
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetOamMode
    // mov r0, #0xeb
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetOamMode
    // mov r0, #0xed
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetOamMode
    // mov r0, #0x3b
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetOamMode
    // mov r0, #0xee
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetOamMode
    // ldr r0, [r4, #0x10]
    // add r0, #0xd2
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1a
    // beq _0225A974
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r1, [r4, #0x14]
    // add r0, r4, r0
    // bl ov27_0225B4AC
    // b _0225A982
    // mov r0, #0x39
    // lsl r0, r0, #4
    // mov r1, #0
    // add r0, r4, r0
    // mvn r1, r1
    // bl ov27_0225B4AC
    // ldr r0, _0225A9B8 ; =0x0000051C
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // cmp r0, #2
    // bne _0225A99A
    // mov r0, #0xea
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetOamMode
    // mov r0, #9
    // str r0, [sp]
    // ldr r0, _0225A9BC ; =0x04001050
    // mov r1, #0
    // mov r2, #0x23
    // mov r3, #6
    // bl G2x_SetBlendAlpha_
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _0225A9BC ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // add sp, #4
    // pop {r3, r4, pc}
    // _0225A9B8: .word 0x0000051C
    // _0225A9BC: .word 0x04001050
    // TODO: decompile
}



void ov27_0225A9C0(void) {
    ov27_0225BDAC();
    Save_Bag_Get(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    Bag_GetRegisteredItem1();
    Bag_GetRegisteredItem2(r4);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xeb << 2), r6);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xed << 2), r6);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x3b << 4), r4);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xee << 2), r4);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xeb << 2), 0);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xed << 2), 0);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x3b << 4), 0);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0xee << 2), 0);
}



void ov27_0225AA60(void) {
    // ldrb r2, [r0, r3]
    // add r4, r4, r2
}



void ov27_0225AA7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r7, _0225AACC ; =0x00000514
    // mov r4, #0
    // add r5, r6, #0
    // mov r0, #0x39
    // add r1, r6, r4
    // lsl r0, r0, #4
    // ldrb r1, [r1, r7]
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #7
    // blt _0225AA86
    // ldr r0, _0225AAD0 ; =0x0000050C
    // mov r1, #1
    // strb r1, [r6, r0]
    // add r0, r6, #0
    // bl ov27_0225BDC8
    // cmp r0, #0
    // bne _0225AACA
    // mov r0, #0xef
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0xf1
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, _0225AAD0 ; =0x0000050C
    // mov r1, #0
    // strb r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225AACC: .word 0x00000514
    // _0225AAD0: .word 0x0000050C
    // TODO: decompile
}



void ov27_0225AAD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _0225ABF4 ; =0x00000514
    // mov r1, #7
    // add r0, r5, r0
    // bl ov27_0225AA60
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // add r0, r5, r0
    // ldr r4, _0225ABF8 ; =ov27_0225CF10
    // mov r6, #0
    // add r7, r5, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x10]
    // add r1, r6, #0
    // bl FieldSystem_ShouldDrawStartMenuIcon
    // cmp r0, #1
    // bne _0225AB62
    // ldr r0, _0225ABF4 ; =0x00000514
    // add r1, r5, r6
    // ldrb r0, [r1, r0]
    // str r1, [sp]
    // cmp r0, #0
    // bne _0225AB62
    // ldrh r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldrh r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldrh r1, [r4, #2]
    // bl Sprite_SetAnimCtrlSeq
    // ldrb r0, [r4, #4]
    // lsl r1, r0, #4
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // bl CopyWindowToVram
    // ldr r1, [sp]
    // ldr r0, _0225ABF4 ; =0x00000514
    // mov r2, #1
    // strb r2, [r1, r0]
    // add r1, r2, #0
    // sub r0, #0xa4
    // strb r1, [r7, r0]
    // ldr r0, [r5, #0x10]
    // add r1, r0, #0
    // add r1, #0xd2
    // ldrb r2, [r1]
    // mov r1, #0x80
    // add r0, #0xd2
    // orr r1, r2
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // add r6, r6, #1
    // add r4, r4, #6
    // add r7, #8
    // cmp r6, #7
    // blt _0225AAF6
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _0225AB8E
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bne _0225AB8E
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x3e
    // lsl r0, r0, #4
    // add r0, r5, r0
    // bl CopyWindowToVram
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // cmp r1, r0
    // beq _0225ABB2
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // add r0, #0xd3
    // strb r1, [r0]
    // ldr r1, [r5, #0x10]
    // add r0, r5, #0
    // add r1, #0xd3
    // ldrb r1, [r1]
    // bl ov27_0225C1AC
    // str r0, [r5, #0x14]
    // add r0, r5, #0
    // bl ov27_0225C1EC
    // add r0, r5, #0
    // bl ov27_0225BDC8
    // cmp r0, #1
    // bne _0225ABEE
    // ldr r0, _0225ABFC ; =0x0000050C
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _0225ABEE
    // mov r0, #0xef
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0xf1
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0xef
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0xa
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0225ABFC ; =0x0000050C
    // mov r1, #1
    // strb r1, [r5, r0]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225ABF4: .word 0x00000514
    // _0225ABF8: .word ov27_0225CF10
    // _0225ABFC: .word 0x0000050C
    // TODO: decompile
}



void ov27_0225AC00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r0, [sp, #0x14]
    // add r4, r1, #0
    // mov r0, #0xc
    // mul r4, r0
    // mov r0, #0
    // str r0, [sp]
    // ldr r1, _0225ACFC ; =ov27_0225CEF0
    // str r0, [sp, #4]
    // mov r0, #1
    // add r5, r2, #0
    // str r0, [sp, #8]
    // mov r0, #8
    // add r6, r3, #0
    // str r0, [sp, #0xc]
    // ldr r1, [r1, r4]
    // ldr r2, [sp, #0x14]
    // mov r0, #0xe
    // mov r3, #4
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // ldr r1, _0225AD00 ; =ov27_0225CEF4
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r1, [r1, r4]
    // ldr r2, [sp, #0x14]
    // mov r0, #0xe
    // mov r3, #4
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #2
    // ldr r1, _0225AD04 ; =ov27_0225CEEC
    // lsl r0, r0, #8
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // ldr r1, [r1, r4]
    // mov r0, #0xe
    // mov r2, #4
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0x14
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // mov r0, #0xd2
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // mov r2, #5
    // mov r3, #0x18
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // mov r0, #0xe2
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r1, r6, #0
    // mov r2, #5
    // mov r3, #9
    // bl AddWindowParameterized
    // add r0, r6, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r4, _0225AD08 ; =ov27_0225D074
    // ldr r5, [sp, #0x30]
    // mov r7, #0
    // mov r6, #0xf6
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r3, [r4]
    // ldr r0, [sp, #0x14]
    // lsl r3, r3, #0x18
    // mov r2, #5
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r7, r7, #1
    // add r6, #0x12
    // add r4, #8
    // add r5, #0x10
    // cmp r7, #8
    // blt _0225ACB8
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225ACFC: .word ov27_0225CEF0
    // _0225AD00: .word ov27_0225CEF4
    // _0225AD04: .word ov27_0225CEEC
    // _0225AD08: .word ov27_0225D074
    // TODO: decompile
}



void ov27_0225AD0C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r1, r5, #0
    // mov r0, #0x10
    // add r1, #0x1c
    // mov r2, #8
    // bl G2dRenderer_Init
    // str r0, [r5, #0x18]
    // add r0, r5, #0
    // mov r2, #1
    // add r0, #0x1c
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r7, #0x51
    // mov r6, #0
    // add r4, r5, #0
    // lsl r7, r7, #2
    // mov r0, #0xb
    // add r1, r6, #0
    // mov r2, #8
    // bl Create2DGfxResObjMan
    // str r0, [r4, r7]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #4
    // blt _0225AD36
    // mov r0, #0x55
    // lsl r0, r0, #2
    // mov r4, #0
    // add r6, r5, r0
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0xc]
    // bl Save_PlayerData_GetProfile
    // bl PlayerProfile_GetTrainerGender
    // add r7, r0, #0
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0xc]
    // bl Save_Bag_Get
    // add r1, r4, #0
    // add r1, #0x64
    // str r1, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _0225AE84 ; =0x0000051C
    // mov r1, #0x51
    // ldr r0, [r5, r0]
    // lsl r1, r1, #2
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x10]
    // add r1, r5, r1
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov27_0225AEA8
    // add r4, r4, #1
    // add r6, #0x10
    // cmp r4, #0xb
    // blt _0225AD52
    // mov r1, #0x64
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #8
    // add r1, #0xe8
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // mov r1, #0xe
    // mov r2, #0x10
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x57
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r1, #0x64
    // str r1, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #8
    // add r1, #0xec
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // mov r1, #0xe
    // mov r2, #0x11
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x16
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r1, #0x65
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #8
    // add r1, #0xe7
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // mov r1, #0xe
    // mov r2, #0x44
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x5b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r1, #0x65
    // str r1, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #8
    // add r1, #0xeb
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // mov r1, #0xe
    // mov r2, #0x45
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x17
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r1, #0x66
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #8
    // add r1, #0xe6
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // mov r1, #0xe
    // mov r2, #0x36
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x5f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r1, #0x66
    // str r1, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #8
    // add r1, #0xea
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // mov r1, #0xe
    // mov r2, #0x37
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #6
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #0xe
    // add r1, r0, #0
    // add r2, sp, #0x10
    // mov r3, #8
    // bl GfGfxLoader_GetPlttData
    // add r4, r0, #0
    // ldr r0, [sp, #0x10]
    // mov r1, #0x40
    // ldr r0, [r0, #0xc]
    // bl DC_FlushRange
    // ldr r0, [sp, #0x10]
    // ldr r1, _0225AE88 ; =0x000004CC
    // ldr r0, [r0, #0xc]
    // add r1, r5, r1
    // mov r2, #0x40
    // bl MIi_CpuCopyFast
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0225AE84: .word 0x0000051C
    // _0225AE88: .word 0x000004CC
    // TODO: decompile
}



void ov27_0225AE8C(void) {
    // cmp r0, #1
    // bne _0225AE94
    // mov r0, #5
    // bx lr
    // cmp r0, #3
    // bne _0225AE9E
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // bx lr
    // ldr r0, _0225AEA4 ; =0x000001F3
    // bx lr
    // nop
    // _0225AEA4: .word 0x000001F3
    // TODO: decompile
}



void ov27_0225AEA8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // mov ip, r0
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #0x10]
    // lsl r1, r0, #3
    // ldr r0, _0225B004 ; =ov27_0225CFC8
    // add r5, r3, #0
    // add r0, r0, r1
    // ldrb r1, [r5, r0]
    // mov r0, #1
    // mov r6, #0xe ; NARC_a_0_1_4
    // add r4, r2, #0
    // mov r2, #0x12
    // ldr r7, [sp, #0x40]
    // str r6, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // cmp r1, #0xd
    // beq _0225AF22
    // cmp r1, #2
    // bne _0225AEDE
    // ldr r0, [sp, #0x3c]
    // cmp r0, #1
    // bne _0225AEDE
    // mov r2, #0x1b
    // b _0225AF22
    // ldr r0, _0225B008 ; =ov27_0225CF94
    // lsl r1, r1, #2
    // ldrh r2, [r0, r1]
    // ldr r0, _0225B00C ; =0x0000FFFF
    // cmp r2, r0
    // bne _0225AF22
    // mov r0, ip
    // bl FieldSystem_BugContest_Get
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // bne _0225AEFA
    // bl GF_AssertFail
    // ldr r0, [sp, #0x14]
    // ldrb r0, [r0, #0x17]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _0225AF20
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // mov r0, #3
    // mov r6, #0x14 ; NARC_poketool_icongra_poke_icon
    // str r0, [sp, #0x18]
    // bl sub_02074490
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0, #0x10]
    // bl Pokemon_GetIconNaix
    // add r2, r0, #0
    // b _0225AF22
    // mov r2, #0x12
    // cmp r5, #7
    // bne _0225AF4A
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // mov r6, #0x12 ; NARC_itemtool_itemdata_item_icon
    // bl Bag_GetRegisteredItem1
    // mov r1, #2
    // bl GetItemIndexMapping
    // str r0, [sp, #0x20]
    // add r0, r7, #0
    // bl Bag_GetRegisteredItem1
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r2, r0, #0
    // b _0225AFAC
    // cmp r5, #8
    // bne _0225AF72
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // mov r6, #0x12 ; NARC_itemtool_itemdata_item_icon
    // bl Bag_GetRegisteredItem2
    // mov r1, #2
    // bl GetItemIndexMapping
    // str r0, [sp, #0x20]
    // add r0, r7, #0
    // bl Bag_GetRegisteredItem2
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r2, r0, #0
    // b _0225AFAC
    // cmp r5, #9
    // bne _0225AF82
    // mov r0, #7
    // str r0, [sp, #0x20]
    // mov r0, #4
    // mov r2, #0x46
    // str r0, [sp, #0x18]
    // b _0225AFAC
    // cmp r5, #0xa
    // bne _0225AFAC
    // ldr r0, [sp, #0x44]
    // bl ov27_0225AE8C
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #2
    // mov r6, #0x12 ; NARC_itemtool_itemdata_item_icon
    // bl GetItemIndexMapping
    // str r0, [sp, #0x20]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r2, r0, #0
    // ldr r0, [sp, #0x38]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r1, r6, #0
    // ldr r0, [r0]
    // bl AddCharResObjFromNarc
    // str r0, [r4]
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // mov r3, #0
    // ldr r0, [r0, #4]
    // bl AddPlttResObjFromNarc
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // bl sub_0200ADA4
    // ldr r0, [r4]
    // bl sub_0200A740
    // ldr r0, [r4, #4]
    // bl sub_0200B00C
    // ldr r0, [r4, #4]
    // bl sub_0200A740
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225B004: .word ov27_0225CFC8
    // _0225B008: .word ov27_0225CF94
    // _0225B00C: .word 0x0000FFFF
    // TODO: decompile
}



void ov27_0225B010(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // add r5, r0, #0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r4, _0225B350 ; =ov27_0225CF3C
    // mov r7, #0
    // add r6, r5, r0
    // ldr r3, [r4]
    // mov r0, #0
    // str r3, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // str r0, [sp, #0x14]
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, #0x64
    // str r0, [sp, #0x18]
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // str r0, [sp, #0x1c]
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r6, #0
    // bl CreateSpriteResourcesHeader
    // add r7, r7, #1
    // add r4, r4, #4
    // add r6, #0x24
    // cmp r7, #0xb
    // blt _0225B020
    // ldr r0, [r5, #0x18]
    // add r1, sp, #0x3c
    // str r0, [sp, #0x3c]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r7, r5, r0
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x4c]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x2c]
    // str r7, [sp, #0x40]
    // strh r0, [r1, #0x20]
    // mov r0, #1
    // str r0, [sp, #0x60]
    // mov r0, #2
    // str r0, [sp, #0x64]
    // mov r0, #8
    // ldr r6, _0225B354 ; =ov27_0225D038
    // str r0, [sp, #0x68]
    // add r4, r5, #0
    // ldrh r0, [r6]
    // str r7, [sp, #0x40]
    // cmp r0, #0
    // beq _0225B0BA
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0225B0C8
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x44]
    // ldrh r0, [r6, #2]
    // cmp r0, #0
    // beq _0225B0E6
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0225B0F4
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // mov r1, #1
    // lsl r1, r1, #0x14
    // add r0, r0, r1
    // str r0, [sp, #0x48]
    // add r0, sp, #0x3c
    // bl Sprite_CreateAffine
    // mov r1, #0x39
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetPriority
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAffineOverwriteMode
    // ldr r0, [sp, #0x2c]
    // add r7, #0x24
    // add r0, r0, #1
    // add r6, r6, #4
    // add r4, r4, #4
    // str r0, [sp, #0x2c]
    // cmp r0, #9
    // blt _0225B0A0
    // mov r0, #9
    // str r0, [sp, #0x30]
    // mov r0, #0xd2
    // lsl r0, r0, #2
    // add r4, r5, #0
    // mov r7, #0x3f
    // add r0, r5, r0
    // ldr r6, _0225B358 ; =ov27_0225D05C
    // add r4, #0x24
    // lsl r7, r7, #0x18
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // ldrh r0, [r6]
    // cmp r0, #0
    // beq _0225B16E
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fadd
    // b _0225B17A
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r7, #0
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x44]
    // ldrh r0, [r6, #2]
    // cmp r0, #0
    // beq _0225B196
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fadd
    // b _0225B1A2
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r7, #0
    // bl _fsub
    // bl _ffix
    // mov r1, #1
    // lsl r1, r1, #0x14
    // add r0, r0, r1
    // str r0, [sp, #0x48]
    // add r0, sp, #0x3c
    // bl Sprite_CreateAffine
    // mov r1, #0x39
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl Sprite_SetPriority
    // ldr r0, [sp, #0x30]
    // add r6, r6, #4
    // add r0, r0, #1
    // add r4, r4, #4
    // str r0, [sp, #0x30]
    // cmp r0, #0xf
    // blt _0225B154
    // ldr r0, _0225B35C ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1c
    // sub r0, r1, #1
    // cmp r0, #2
    // bhi _0225B27E
    // cmp r1, #1
    // bne _0225B1F6
    // mov r0, #0x90
    // str r0, [sp, #0x34]
    // b _0225B200
    // sub r0, r1, #2
    // cmp r0, #1
    // bhi _0225B200
    // mov r0, #0x68
    // str r0, [sp, #0x34]
    // mov r0, #0xdb
    // lsl r0, r0, #2
    // add r0, r5, r0
    // str r0, [sp, #0x40]
    // mov r0, #0x19
    // lsl r0, r0, #0xe
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // bl _ffix
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x34]
    // cmp r0, #0
    // ble _0225B238
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0225B246
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // mov r1, #1
    // lsl r1, r1, #0x14
    // add r0, r0, r1
    // str r0, [sp, #0x48]
    // add r0, sp, #0x3c
    // bl Sprite_CreateAffine
    // mov r1, #0xf3
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetPriority
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0225B35C ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // cmp r0, #2
    // bne _0225B2D2
    // ldr r0, [r5, #0x10]
    // bl FieldSystem_BugContest_Get
    // add r4, r0, #0
    // bne _0225B298
    // bl GF_AssertFail
    // ldrb r0, [r4, #0x17]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _0225B2E2
    // mov r0, #0xea
    // lsl r0, r0, #2
    // mov r3, #1
    // ldr r0, [r5, r0]
    // mov r1, #0x68
    // mov r2, #0x88
    // lsl r3, r3, #0x14
    // bl Sprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4, #0x10]
    // bl Pokemon_GetIconPalette
    // add r1, r0, #0
    // mov r0, #0xea
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Sprite_SetPalOffsetRespectVramOffset
    // mov r0, #0xea
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // b _0225B2E2
    // cmp r0, #3
    // bne _0225B2E2
    // mov r0, #0xea
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0xed
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xee
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #8
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xef
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // mov r1, #5
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0xc
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0xf1
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetPriority
    // add r0, r5, #0
    // bl ov27_0225A4B8
    // add r0, r5, #0
    // mov r1, #1
    // bl ov27_0225A9C0
    // add r0, r5, #0
    // bl ov27_0225AA7C
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0225B350: .word ov27_0225CF3C
    // _0225B354: .word ov27_0225D038
    // _0225B358: .word ov27_0225D05C
    // _0225B35C: .word 0x0000051C
    // TODO: decompile
}



void ov27_0225B360(void) {
    // push {r3, r4, r5, r6}
    // mov r5, #0xc
    // mul r5, r0
    // ldr r6, _0225B394 ; =ov27_0225D0B4
    // lsl r0, r1, #1
    // mov r4, #0
    // add r5, r6, r5
    // add r0, r1, r0
    // mvn r4, r4
    // mov r3, #0
    // add r5, r5, r0
    // ldrb r1, [r5]
    // lsl r0, r1, #3
    // ldrb r0, [r2, r0]
    // cmp r0, #0
    // beq _0225B384
    // add r4, r1, #0
    // b _0225B38C
    // add r3, r3, #1
    // add r5, r5, #1
    // cmp r3, #3
    // blt _0225B376
    // add r0, r4, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // nop
    // _0225B394: .word ov27_0225D0B4
    // TODO: decompile
}



void ov27_0225B398(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // str r1, [sp]
    // cmp r1, #7
    // blt _0225B3A6
    // bl GF_AssertFail
    // ldr r0, _0225B3F0 ; =0x000004CC
    // mov r4, #0
    // add r5, r4, #0
    // add r7, r6, r0
    // ldr r0, _0225B3F4 ; =0x0000051C
    // ldr r0, [r6, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // lsl r1, r0, #3
    // ldr r0, _0225B3F8 ; =ov27_0225CFC8
    // add r0, r0, r1
    // ldrb r1, [r4, r0]
    // ldr r0, _0225B3FC ; =ov27_0225CF94
    // lsl r2, r1, #2
    // ldrh r0, [r0, r2]
    // mov r2, #0
    // cmp r1, #0xd
    // beq _0225B3E4
    // ldr r1, _0225B400 ; =0x0000FFFF
    // cmp r0, r1
    // beq _0225B3E4
    // ldr r0, [sp]
    // cmp r4, r0
    // bne _0225B3D8
    // mov r2, #0x10
    // lsl r0, r2, #1
    // add r0, r7, r0
    // add r1, r5, #0
    // mov r2, #0x20
    // bl GXS_LoadOBJPltt
    // add r4, r4, #1
    // add r5, #0x20
    // cmp r4, #7
    // blt _0225B3AE
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225B3F0: .word 0x000004CC
    // _0225B3F4: .word 0x0000051C
    // _0225B3F8: .word ov27_0225CFC8
    // _0225B3FC: .word ov27_0225CF94
    // _0225B400: .word 0x0000FFFF
    // TODO: decompile
}



void ov27_0225B404(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0225B4A8 ; =gSystem
    // add r5, r0, #0
    // ldr r1, [r1, #0x48]
    // mov r4, #0
    // mov r2, #0x40
    // mvn r4, r4
    // ldr r0, [r5, #0x14]
    // tst r2, r1
    // beq _0225B41C
    // mov r4, #0
    // b _0225B438
    // mov r2, #0x80
    // tst r2, r1
    // beq _0225B426
    // mov r4, #1
    // b _0225B438
    // mov r2, #0x20
    // tst r2, r1
    // beq _0225B430
    // mov r4, #2
    // b _0225B438
    // mov r2, #0x10
    // tst r1, r2
    // beq _0225B438
    // mov r4, #3
    // cmp r4, #0
    // blt _0225B448
    // mov r2, #0x47
    // lsl r2, r2, #4
    // add r1, r4, #0
    // add r2, r5, r2
    // bl ov27_0225B360
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225B4A6
    // ldr r1, [r5, #0x14]
    // cmp r1, r0
    // beq _0225B4A6
    // str r0, [r5, #0x14]
    // mov r0, #0x5e
    // lsl r0, r0, #4
    // bl PlaySE
    // cmp r4, #1
    // bhi _0225B478
    // ldr r0, [r5, #0x14]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // b _0225B490
    // sub r0, r4, #2
    // cmp r0, #1
    // bhi _0225B490
    // ldr r0, [r5, #0x14]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // ldr r1, [r5, #0x14]
    // add r0, r5, #0
    // bl ov27_0225B398
    // ldr r1, [r5, #0x14]
    // add r0, r5, #0
    // bl ov27_0225C170
    // ldr r1, [r5, #0x10]
    // add r1, #0xd3
    // strb r0, [r1]
    // pop {r3, r4, r5, pc}
    // _0225B4A8: .word gSystem
    // TODO: decompile
}



void ov27_0225B4AC(void) {
    Sprite_SetOamMode(*((u32*)r0), 1);
    Sprite_SetOamMode(0);
}



void ov27_0225B4D8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetUnk14
    // cmp r0, #0
    // bne _0225B4F2
    // ldr r0, _0225B624 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #0xf0
    // tst r0, r1
    // beq _0225B4F6
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _0225B628 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // cmp r0, #5
    // bne _0225B53E
    // bl sub_0203769C
    // add r4, r0, #0
    // bl sub_02058740
    // cmp r0, #0
    // beq _0225B53A
    // bl sub_02058258
    // cmp r0, #0
    // beq _0225B53A
    // bl sub_02056EE0
    // cmp r0, #0
    // beq _0225B53A
    // bl sub_02057A0C
    // cmp r0, #0
    // beq _0225B53A
    // add r0, r4, #0
    // bl sub_02057F18
    // cmp r0, #0
    // bne _0225B53A
    // bl sub_02037958
    // cmp r0, #0
    // beq _0225B53E
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _0225B54A
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _0225B628 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0225B55A
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _0225B62C ; =ov27_0225CF68
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // add r4, r0, #0
    // cmp r4, #0
    // ble _0225B57E
    // cmp r4, #8
    // bge _0225B57E
    // sub r0, r4, #1
    // lsl r0, r0, #3
    // add r1, r5, r0
    // mov r0, #0x47
    // lsl r0, r0, #4
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _0225B57E
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0xc]
    // bl Save_Bag_Get
    // add r6, r0, #0
    // add r0, r4, #0
    // sub r0, #8
    // cmp r0, #1
    // bhi _0225B5AC
    // ldr r0, _0225B628 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bne _0225B59E
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl ov27_0225BDAC
    // cmp r0, #0
    // bne _0225B5AC
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r4, #8
    // bne _0225B5BE
    // add r0, r6, #0
    // bl Bag_GetRegisteredItem1
    // cmp r0, #0
    // bne _0225B5D0
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r4, #9
    // bne _0225B5D0
    // add r0, r6, #0
    // bl Bag_GetRegisteredItem2
    // cmp r0, #0
    // bne _0225B5D0
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _0225B620
    // cmp r4, #0
    // bne _0225B5E4
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // strh r1, [r0]
    // b _0225B61C
    // sub r1, r4, #1
    // lsl r0, r1, #2
    // add r2, r5, r0
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // cmp r0, #0
    // beq _0225B61C
    // cmp r4, #8
    // bge _0225B60E
    // str r1, [r5, #0x14]
    // add r0, r5, #0
    // bl ov27_0225C170
    // ldr r1, [r5, #0x10]
    // add r1, #0xd3
    // strb r0, [r1]
    // ldr r1, [r5, #0x14]
    // add r0, r5, #0
    // bl ov27_0225B398
    // add r0, r5, #0
    // sub r1, r4, #1
    // bl ov27_0225C170
    // add r1, r0, #2
    // ldr r0, [r5, #0xc]
    // strh r1, [r0]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _0225B624: .word gSystem
    // _0225B628: .word 0x0000051C
    // _0225B62C: .word ov27_0225CF68
    // TODO: decompile
}



void ov27_0225B630(void) {
    // str r1, [sp, #0x10]
    GetWindowX();
    GetWindowY(r7);
    GetWindowWidth(r7);
    // str r0, [sp, #0x14]
    GetWindowHeight(r7);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0xa9, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0xaa, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0xab, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0xac, ((r5 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    // add r7, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0xad, ((r7 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0x64, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0x65, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0x66, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0x68, ((r7 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0x84, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0x85, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0x86, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0x88, ((r7 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // add r4, r4, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0xa4, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0xa5, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 0xa6, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0xa7, ((r5 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0xa8, ((r7 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0, ((r5 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    // add r7, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0, ((r7 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0, ((r7 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0, ((r7 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // add r4, r4, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 4, 7, (((r5 - 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0, ((r5 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r6, 5, 0, ((r7 << 0x18) >> 0x18));
    GF_AssertFail();
    ScheduleBgTilemapBufferTransfer(r6, 4);
    ScheduleBgTilemapBufferTransfer(r6, 5);
}



void ov27_0225BB38(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r1, #0
    // ldr r1, _0225BB68 ; =ov27_0225CEC4
    // lsl r2, r2, #2
    // ldr r4, [r1, r2]
    // add r5, r0, #0
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x18
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r4, [sp, #8]
    // add r0, r5, #0
    // add r2, r6, #0
    // mov r3, #3
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0225BB68: .word ov27_0225CEC4
    // TODO: decompile
}



void ov27_0225BB6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // ldr r0, [r0, #0xc]
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // ldr r0, _0225BC10 ; =0x000004AC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferPlayersName
    // ldr r7, _0225BC14 ; =ov27_0225CFC8
    // mov r4, #0
    // add r6, r5, #0
    // ldr r0, _0225BC18 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // lsl r0, r0, #3
    // add r0, r7, r0
    // ldrb r2, [r4, r0]
    // cmp r2, #0xd
    // beq _0225BBBA
    // lsl r3, r2, #2
    // ldr r2, _0225BC1C ; =ov27_0225CF94
    // ldr r0, _0225BC10 ; =0x000004AC
    // add r2, r2, r3
    // ldrh r2, [r2, #2]
    // ldr r1, _0225BC20 ; =0x000004A8
    // ldr r0, [r5, r0]
    // lsl r2, r2, #0x11
    // ldr r1, [r5, r1]
    // lsr r2, r2, #0x11
    // mov r3, #8
    // bl ReadMsgData_ExpandPlaceholders
    // ldr r1, _0225BC24 ; =0x00000474
    // str r0, [r6, r1]
    // add r4, r4, #1
    // add r6, #8
    // cmp r4, #7
    // blt _0225BB8A
    // ldr r4, _0225BC28 ; =ov27_0225CED8
    // mov r7, #0
    // add r6, r5, #0
    // ldr r0, _0225BC20 ; =0x000004A8
    // ldr r1, [r4]
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // mov r1, #0x4b
    // lsl r1, r1, #4
    // str r0, [r6, r1]
    // add r7, r7, #1
    // add r4, r4, #4
    // add r6, r6, #4
    // cmp r7, #5
    // blt _0225BBC8
    // sub r1, r1, #4
    // ldr r0, [r5, r1]
    // sub r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0xc
    // mov r3, #8
    // bl ReadMsgData_ExpandPlaceholders
    // ldr r1, _0225BC2C ; =0x000004C4
    // mov r2, #0xd
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x18
    // sub r1, #0x1c
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // mov r3, #8
    // bl ReadMsgData_ExpandPlaceholders
    // ldr r1, _0225BC30 ; =0x000004C8
    // str r0, [r5, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225BC10: .word 0x000004AC
    // _0225BC14: .word ov27_0225CFC8
    // _0225BC18: .word 0x0000051C
    // _0225BC1C: .word ov27_0225CF94
    // _0225BC20: .word 0x000004A8
    // _0225BC24: .word 0x00000474
    // _0225BC28: .word ov27_0225CED8
    // _0225BC2C: .word 0x000004C4
    // _0225BC30: .word 0x000004C8
    // TODO: decompile
}



void ov27_0225BC34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0225BC78 ; =0x000004C8
    // ldr r0, [r5, r0]
    // bl String_Delete
    // ldr r0, _0225BC7C ; =0x000004C4
    // ldr r0, [r5, r0]
    // bl String_Delete
    // mov r7, #0x4b
    // mov r6, #0
    // add r4, r5, #0
    // lsl r7, r7, #4
    // ldr r0, [r4, r7]
    // bl String_Delete
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #5
    // blt _0225BC50
    // ldr r6, _0225BC80 ; =0x00000474
    // mov r4, #0
    // ldr r0, [r5, r6]
    // cmp r0, #0
    // beq _0225BC6C
    // bl String_Delete
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #7
    // blt _0225BC62
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225BC78: .word 0x000004C8
    // _0225BC7C: .word 0x000004C4
    // _0225BC80: .word 0x00000474
    // TODO: decompile
}



void ov27_0225BC84(void) {
    // str r0, [sp]
    // add r5, sp, #4
    // ldr r0, [sp]
    FieldSystem_ShouldDrawStartMenuIcon(*((u32*)(r0 + 0x10)), 0);
    // stmia r5!, {r0}
    // ldr r0, [sp]
    // add r4, sp, #4
    // add r5, r0, r1
    CopyWindowToVram(r5, (0x3f << 4));
    // add r5, #0x10
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    Sprite_SetDrawFlag(1);
    // ldr r0, [sp]
    // add r0, r0, r1
    CopyWindowToVram((0x3e << 4));
}



void ov27_0225BCE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // mov r6, #0
    // add r4, r5, r0
    // ldr r0, _0225BD3C ; =0x00000474
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // beq _0225BD2C
    // mov r0, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x48
    // sub r3, r1, r0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225BD40 ; =0x000E0200
    // lsr r7, r3, #0x1f
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, _0225BD3C ; =0x00000474
    // add r7, r3, r7
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // mov r1, #0
    // asr r3, r7, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r6, r6, #1
    // add r5, #8
    // add r4, #0x10
    // cmp r6, #7
    // blt _0225BCF6
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225BD3C: .word 0x00000474
    // _0225BD40: .word 0x000E0200
    // TODO: decompile
}



void ov27_0225BD44(void) {
    // add r0, #0xd2
    // ldrb r0, [r0]
}



void ov27_0225BD50(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    FieldSystem_MapIsBattleTowerMultiPartnerSelectRoom(r4);
    Save_VarsFlags_CheckSafariSysFlag(r5);
    Save_VarsFlags_CheckBugContestFlag(r5);
    Save_VarsFlags_CheckPalParkSysFlag(r5);
}



void ov27_0225BDAC(void) {
    // ldr r1, _0225BDC4 ; =0x0000051C
    // ldr r0, [r0, r1]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // sub r0, r0, #2
    // cmp r0, #4
    // bls _0225BDBE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0225BDC4: .word 0x0000051C
    // TODO: decompile
}



void ov27_0225BDC8(void) {
}



void ov27_0225BDDC(void) {
    FieldSystem_GetGearPhoneRingManager(*((u32*)(r1 + 0x10)));
    *((u32*)(r5 + 4)) = r0;
    // ldr r0, [r4, r0]
    *((u32*)(r5 + 8)) = (0xe7 << 2);
    // str r0, [r5]
    *((u32*)(r5 + 0x1c)) = 0;
}



void ov27_0225BDFC(void) {
    GearPhoneRingManager_IsRinging(*((u32*)(r0 + 4)));
    GetPhoneBookEntryName(*((u32*)(r5 + 4)), 8);
    FontID_String_GetWidth(0, r0, 0);
    // asr r1, r0, #2
    // add r1, r0, r1
    // asr r0, r1, #3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xc
    AddWindowParameterized(*((u32*)r5), r5, 5, 0xb);
    // add r0, #0xc
    ov27_0225B630(r5, 1);
    // add r0, #0xc
    ov27_0225BB38(r5, r4, 1);
    String_Delete(r4);
    Sprite_TryChangeAnimSeq(*((u32*)(r5 + 8)), 5);
    *((u32*)(r5 + 0x1c)) = 1;
    Sprite_TryChangeAnimSeq(*((u32*)(r5 + 8)), 5);
    Sprite_TryChangeAnimSeq(0);
    ov27_0225BEB0(r5);
    *((u32*)(r5 + 0x1c)) = 0;
}



void ov27_0225BEB0(void) {
    // add r0, #0xc
    ov27_0225B630(r0, 2);
    // add r0, #0xc
    ClearWindowTilemapAndCopyToVram(r4);
    // add r4, #0xc
    RemoveWindow(r4);
}



void ov27_0225BED8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // ldr r5, [sp, #0x44]
    // add r4, r0, #0
    // str r3, [sp]
    // add r0, sp, #0x28
    // add r7, r1, #0
    // ldrb r1, [r0, #0x10]
    // add r6, r2, #0
    // mov r2, #5
    // str r1, [sp, #4]
    // ldrb r0, [r0, #0x14]
    // add r1, sp, #0x14
    // add r3, r6, #0
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x40]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // bl AddWindowParameterized
    // add r0, sp, #0x14
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _0225BF7C ; =0x000004AC
    // add r2, r7, #0
    // ldr r0, [r4, r1]
    // sub r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #8
    // bl ReadMsgData_ExpandPlaceholders
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _0225BF48
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r1, sp, #0x28
    // ldrb r1, [r1, #0x10]
    // lsl r1, r1, #3
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // lsl r0, r0, #0xf
    // asr r5, r0, #0x10
    // add r1, sp, #0x28
    // mov r0, #0x20
    // ldrsh r0, [r1, r0]
    // mov r1, #0
    // add r2, r4, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225BF80 ; =0x000E0200
    // add r3, r5, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, sp, #0x14
    // bl CopyWindowToVram
    // add r0, sp, #0x14
    // bl RemoveWindow
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0225BF7C: .word 0x000004AC
    // _0225BF80: .word 0x000E0200
    // TODO: decompile
}



void ov27_0225BF84(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // mov r1, #0
    // add r5, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0225BFC4 ; =0x000004AC
    // add r6, r2, #0
    // add r2, r3, #0
    // ldr r0, [r5, r0]
    // mov r3, #2
    // bl BufferIntegerAsString
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _0225BFC8 ; =0x00000186
    // mov r1, #0x1f
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r2, r4, #0
    // add r3, r6, #0
    // bl ov27_0225BED8
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0225BFC4: .word 0x000004AC
    // _0225BFC8: .word 0x00000186
    // TODO: decompile
}



void ov27_0225BFCC(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, [r1, #0x10]
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0
    // add r2, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0225C014 ; =0x000004AC
    // mov r3, #3
    // ldr r0, [r4, r0]
    // bl BufferIntegerAsString
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _0225C018 ; =0x00000192
    // mov r1, #0x21
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r2, #0xc
    // mov r3, #0x15
    // bl ov27_0225BED8
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _0225C014: .word 0x000004AC
    // _0225C018: .word 0x00000192
    // TODO: decompile
}



void ov27_0225C01C(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    ov27_0225BED8(0x20, 0xb, 0x15);
}



void ov27_0225C044(void) {
}



void ov27_0225C06C(void) {
    FieldSystem_GetParkBallCount(*((u32*)(r0 + 0x10)));
    ov27_0225BF84(r4, 0xe, 0xe, ((r0 << 0x10) >> 0x10));
}



void ov27_0225C088(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // bl FieldSystem_BugContest_Get
    // add r4, r0, #0
    // bne _0225C09A
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl BugContest_GetSportBallsAddr
    // add r3, r0, #0
    // mov r1, #0xe
    // ldrh r3, [r3]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov27_0225BF84
    // ldrb r0, [r4, #0x17]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _0225C0BE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov27_0225BFCC
    // ldrb r1, [r4, #0x17]
    // mov r0, #0xea
    // lsl r0, r0, #2
    // lsl r1, r1, #0x1f
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x1f
    // bl Sprite_SetDrawFlag
    // ldr r0, _0225C0DC ; =0x0000051A
    // mov r1, #0
    // strb r1, [r5, r0]
    // sub r0, #0x7a
    // strb r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _0225C0DC: .word 0x0000051A
    // TODO: decompile
}



void ov27_0225C0E0(void) {
    // push {r3, lr}
    // ldr r1, _0225C108 ; =0x0000051C
    // ldr r1, [r0, r1]
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1c
    // cmp r1, #1
    // bne _0225C0F4
    // bl ov27_0225C044
    // pop {r3, pc}
    // cmp r1, #2
    // bne _0225C0FE
    // bl ov27_0225C088
    // pop {r3, pc}
    // cmp r1, #3
    // bne _0225C106
    // bl ov27_0225C06C
    // pop {r3, pc}
    // _0225C108: .word 0x0000051C
    // TODO: decompile
}



void ov27_0225C10C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r7, _0225C160 ; =ov27_0225CFC8
    // mov r4, #0
    // add r6, r5, #0
    // ldr r0, _0225C164 ; =0x0000051C
    // ldr r0, [r5, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1c
    // lsl r0, r0, #3
    // add r0, r7, r0
    // ldrb r1, [r4, r0]
    // cmp r1, #0xd
    // beq _0225C14C
    // cmp r1, #7
    // bge _0225C13A
    // ldr r0, [r5, #0x10]
    // bl FieldSystem_ShouldDrawStartMenuIcon
    // ldr r1, _0225C168 ; =0x00000514
    // add r2, r5, r4
    // strb r0, [r2, r1]
    // b _0225C14C
    // ldr r0, _0225C16C ; =ov27_0225CF94
    // lsl r1, r1, #2
    // add r0, r0, r1
    // ldrh r0, [r0, #2]
    // add r1, r5, r4
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x1f
    // ldr r0, _0225C168 ; =0x00000514
    // strb r2, [r1, r0]
    // ldr r0, _0225C168 ; =0x00000514
    // add r1, r5, r4
    // ldrb r1, [r1, r0]
    // sub r0, #0xa4
    // add r4, r4, #1
    // strb r1, [r6, r0]
    // add r6, #8
    // cmp r4, #7
    // blt _0225C116
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225C160: .word ov27_0225CFC8
    // _0225C164: .word 0x0000051C
    // _0225C168: .word 0x00000514
    // _0225C16C: .word ov27_0225CF94
    // TODO: decompile
}



void ov27_0225C170(void) {
    // mvn r4, r4
    // ldrb r2, [r0, r1]
    // add r0, #8
    // mvn r0, r0
    GF_AssertFail(0, (0x47 << 4), (r1 - 7), (r1 + 1));
}



void ov27_0225C1AC(void) {
    // mvn r5, r5
    // ldrb r3, [r7, r2]
    // add r7, #8
    // mvn r1, r1
    // add r0, #0xd3
    // strb r5, [r0]
}



void ov27_0225C1EC(void) {
    GF_AssertFail(*((u32*)(r0 + 0x10)));
    // add r1, r4, r0
    // ldrb r0, [r1, r0]
    // ldrb r1, [r3, r0]
    // add r0, #0xd3
    // strb r2, [r0]
    // add r1, #0xd3
    // ldrb r1, [r1]
    ov27_0225C1AC(r4, *((u32*)(r4 + 0x10)), 0, r4);
    *((u32*)(r4 + 0x14)) = r0;
    // add r3, #8
}



void ov27_0225C238(void) {
    // ldr r3, _0225C244 ; =Heap_AllocAtEnd
    // mov r1, #0xfa
    // mov r0, #3
    // lsl r1, r1, #2
    // bx r3
    // nop
    // _0225C244: .word Heap_AllocAtEnd
    // TODO: decompile
}



void ov27_0225C248(void) {
    // bx lr
    // TODO: decompile
}



void ov27_0225C24C(void) {
    // bx lr
    // TODO: decompile
}



void ov27_0225C250(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r7, r1, #0
    // mov r0, #3
    // str r2, [sp]
    // mov r1, #8
    // lsl r2, r0, #0xf
    // str r3, [sp, #4]
    // bl Heap_Create
    // mov r0, #0
    // bl GXS_SetGraphicsMode
    // mov r0, #0x80
    // bl GX_SetBankForSubBG
    // mov r0, #1
    // lsl r0, r0, #8
    // bl GX_SetBankForSubOBJ
    // ldr r2, _0225C37C ; =0x04001000
    // ldr r0, _0225C380 ; =0xFFCFFFEF
    // ldr r1, [r2]
    // mov r3, #0
    // and r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // str r0, [r2]
    // ldr r2, _0225C384 ; =ov27_0225D370
    // add r0, r5, #0
    // mov r1, #4
    // bl InitBgFromTemplate
    // ldr r2, _0225C388 ; =ov27_0225D38C
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r2, _0225C38C ; =ov27_0225D3A8
    // add r0, r5, #0
    // mov r1, #6
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r0, #0
    // bl BG_ClearCharDataRange
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #4
    // bl BG_ClearCharDataRange
    // mov r0, #6
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #4
    // bl BG_ClearCharDataRange
    // add r0, r5, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // mov r1, #0xe9
    // ldr r0, _0225C390 ; =ov27_0225C434
    // lsl r1, r1, #2
    // mov r2, #0xa
    // mov r3, #8
    // bl CreateSysTaskAndEnvironment
    // add r6, r0, #0
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r6, [r4, #0x1c]
    // mov r0, #0
    // str r0, [r4, #0x14]
    // str r5, [r4, #0x18]
    // ldr r1, [sp]
    // str r7, [r4, #0x20]
    // str r1, [r4, #0x24]
    // str r0, [r4, #0x48]
    // ldr r1, [sp, #4]
    // str r0, [r4]
    // str r1, [r4, #4]
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r1, r1, #4
    // str r0, [r4, r1]
    // str r0, [r4, #0x34]
    // str r0, [r4, #0x44]
    // mov r0, #4
    // mov r1, #8
    // bl FontID_Alloc
    // ldr r1, [r4, #0x24]
    // add r0, r4, #0
    // add r1, #0xd2
    // ldrb r1, [r1]
    // lsl r1, r1, #0x1a
    // lsr r1, r1, #0x1a
    // bl ov27_0225C914
    // add r0, r4, #0
    // bl ov27_0225C4AC
    // add r0, r4, #0
    // bl ov27_0225C72C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov27_0225C80C
    // ldr r2, _0225C37C ; =0x04001000
    // ldr r0, _0225C394 ; =0xFFFF1FFF
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // add r0, r6, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225C37C: .word 0x04001000
    // _0225C380: .word 0xFFCFFFEF
    // _0225C384: .word ov27_0225D370
    // _0225C388: .word ov27_0225D38C
    // _0225C38C: .word ov27_0225D3A8
    // _0225C390: .word ov27_0225C434
    // _0225C394: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov27_0225C398(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    SysTask_GetData(r1);
    // ldr r0, [r7, r0]
    sub_0200AEB0((0xd5 << 2));
    // ldr r0, [r7, r0]
    sub_0200B0A8((0xd6 << 2));
    // ldr r0, [r5, r6]
    Destroy2DGfxResObjMan();
    // ldr r0, [r7, r0]
    SpriteList_Delete((0x86 << 2));
    TextFlags_SetCanTouchSpeedUpPrint(0);
    ov27_0225C930(r7);
    FontID_Release(4);
    // ldr r0, [sp, #4]
    DestroySysTaskAndEnvironment();
    // ldr r0, [sp]
    FreeBgTilemapBuffer(6);
    // ldr r0, [sp]
    FreeBgTilemapBuffer(5);
    // ldr r0, [sp]
    FreeBgTilemapBuffer(4);
    Heap_Destroy(8);
}



u8 ov27_0225C418(void) {
}



void ov27_0225C41C(void) {
}



void ov27_0225C434(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x24]
    // bl FieldSystem_TaskIsRunning
    // cmp r0, #0
    // bne _0225C46C
    // ldr r0, [r4, #0x24]
    // add r1, r0, #0
    // add r1, #0xd2
    // ldrb r1, [r1]
    // lsl r1, r1, #0x1a
    // lsr r1, r1, #0x1a
    // cmp r1, #2
    // bne _0225C464
    // add r1, r0, #0
    // add r1, #0xd2
    // ldrb r2, [r1]
    // mov r1, #0x3f
    // add r0, #0xd2
    // bic r2, r1
    // mov r1, #3
    // orr r1, r2
    // strb r1, [r0]
    // ldr r0, _0225C4A4 ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // b _0225C496
    // ldr r1, [r4]
    // add r0, r4, #0
    // lsl r2, r1, #2
    // ldr r1, _0225C4A8 ; =ov27_0225D4D4
    // ldr r1, [r1, r2]
    // blx r1
    // cmp r0, #1
    // bne _0225C496
    // ldr r2, [r4, #0x24]
    // add r0, r2, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x3f
    // add r2, #0xd2
    // bic r1, r0
    // strb r1, [r2]
    // mov r1, #0
    // ldr r0, [r4, #0x24]
    // add r2, r1, #0
    // bl ov01_021F6A9C
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SpriteList_RenderAndAnimateSprites
    // pop {r4, pc}
    // nop
    // _0225C4A4: .word 0x04001050
    // _0225C4A8: .word ov27_0225D4D4
    // TODO: decompile
}



void ov27_0225C4AC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0xef
    // mov r1, #8
    // bl NARC_New
    // mov r1, #0
    // ldr r2, _0225C53C ; =0x04001050
    // add r3, r1, #0
    // strh r1, [r2]
    // mov r2, #0xa0
    // str r2, [sp]
    // mov r2, #8
    // str r2, [sp, #4]
    // mov r2, #4
    // add r4, r0, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0x18]
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #6
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0x18]
    // add r0, r4, #0
    // mov r1, #9
    // mov r3, #6
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #8
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #9
    // mov r2, #0
    // add r3, sp, #0x10
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // ldr r3, [sp, #0x10]
    // add r6, r0, #0
    // add r2, r3, #0
    // ldr r0, [r5, #0x18]
    // ldr r3, [r3, #8]
    // mov r1, #6
    // add r2, #0xc
    // bl BG_LoadScreenTilemapData
    // ldr r0, [r5, #0x18]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0225C53C: .word 0x04001050
    // TODO: decompile
}



void ov27_0225C540(void) {
    NARC_New(0xef, 8);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(1, *((u32*)(r5 + 0x18)), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0xa, *((u32*)(r5 + 0x18)), 4);
    NARC_Delete(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x28
    AddWindowParameterized(*((u32*)(r5 + 0x18)), r5, 5, 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x38
    AddWindowParameterized(*((u32*)(r5 + 0x18)), r5, 5, 0xc);
    // add r0, #0x28
    ov27_0225C8D0(r5, *((u32*)(r5 + 0x4c)), 0x2e);
    // add r0, #0x38
    ov27_0225C8D0(r5, *((u32*)(r5 + 0x4c)), 0x2f);
}



void ov27_0225C5E4(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x18)), 5);
    // add r0, #0x28
    RemoveWindow(r4);
    // add r4, #0x38
    RemoveWindow(r4);
}



void ov27_0225C618(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp, #0x10]
    // ldr r0, [r0, #0xc]
    // bl ov01_021EEF58
    // add r7, r0, #0
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, #0xc]
    // bl ov01_021EEF60
    // add r6, r0, #0
    // mov r0, #0xef
    // mov r1, #8
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #8
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // mov r1, #1
    // ldr r2, [r2, #0x18]
    // mov r3, #4
    // add r4, r0, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, r4, #0
    // ldr r2, [r2, #0x18]
    // add r1, r6, #0
    // mov r3, #4
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // mov r0, #0
    // str r0, [sp, #0x14]
    // cmp r6, #0
    // ble _0225C6A6
    // add r4, r0, #0
    // ldr r5, [sp, #0x10]
    // sub r0, r6, #2
    // lsl r0, r0, #2
    // add r5, #0x54
    // str r0, [sp, #0x18]
    // ldr r3, _0225C6F0 ; =ov27_0225D4B8
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r2, [r3, r2]
    // ldr r0, [r0, #0x18]
    // add r1, r5, #0
    // add r2, r2, r4
    // bl AddWindow
    // ldr r0, [sp, #0x14]
    // add r4, #8
    // add r0, r0, #1
    // add r5, #0x10
    // str r0, [sp, #0x14]
    // cmp r0, r6
    // blt _0225C686
    // mov r5, #0
    // cmp r6, #0
    // ble _0225C6E4
    // ldr r4, [sp, #0x10]
    // add r4, #0x54
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225C6F4 ; =0x00020100
    // mov r1, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r7]
    // add r0, r4, #0
    // mov r3, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add r5, r5, #1
    // add r4, #0x10
    // add r7, #8
    // cmp r5, r6
    // blt _0225C6B0
    // mov r1, #0x85
    // ldr r0, [sp, #0x10]
    // lsl r1, r1, #2
    // str r6, [r0, r1]
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0225C6F0: .word ov27_0225D4B8
    // _0225C6F4: .word 0x00020100
    // TODO: decompile
}



void ov27_0225C6F8(void) {
    ov01_021EEF60(*((u32*)(r0 + 0xc)));
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x18)), 4);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x18)), 5);
    // add r5, #0x54
    RemoveWindow(r5);
    // add r5, #0x10
}



void ov27_0225C72C(void) {
    // add r1, r6, r1
    G2dRenderer_Init(0x15, (0x87 << 2), 8);
    // str r0, [r6, r1]
    // add r0, r6, r0
    G2dRenderer_SetSubSurfaceCoords(((0x86 << 2) + 4), 0, (1 << 0x14));
    Create2DGfxResObjMan(0xa, 0, 8);
    // str r0, [r5, r7]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r6, r0]
    AddCharResObjFromNarc((0xd1 << 2), 0xef, 0xc, 0);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [r6, r1]
    AddPlttResObjFromNarc(8, 0xef, 0xb, 0);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    AddCellOrAnimResObjFromNarc(8, 0xef, 0xd, 0);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r6, r1]
    AddCellOrAnimResObjFromNarc(8, 0xef, 0xe, 0);
    // str r0, [r6, r1]
    // sub r1, #0xc
    // ldr r0, [r6, r1]
    sub_0200ADA4((0x36 << 4));
    // ldr r0, [r6, r0]
    sub_0200B00C((0xd6 << 2));
}



void ov27_0225C80C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x5c
    // add r4, r1, #0
    // mov r1, #0xa
    // add r5, r0, #0
    // add r0, r1, #0
    // str r1, [sp]
    // sub r0, #0xb
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r2, #0
    // str r2, [sp, #0xc]
    // mov r0, #0xd1
    // str r2, [sp, #0x10]
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // str r3, [sp, #0x14]
    // add r3, r0, #4
    // ldr r3, [r5, r3]
    // str r3, [sp, #0x18]
    // add r3, r0, #0
    // add r3, #8
    // ldr r3, [r5, r3]
    // str r3, [sp, #0x1c]
    // add r3, r0, #0
    // add r3, #0xc
    // ldr r3, [r5, r3]
    // add r0, #0x20
    // str r3, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, r5, r0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl CreateSpriteResourcesHeader
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, _0225C8C8 ; =ov27_0225D118
    // lsl r2, r4, #2
    // ldrh r1, [r1, r2]
    // str r0, [sp, #0x2c]
    // mov r0, #0xd9
    // lsl r1, r1, #0xc
    // str r1, [sp, #0x34]
    // ldr r1, _0225C8CC ; =ov27_0225D11A
    // lsl r0, r0, #2
    // ldrh r2, [r1, r2]
    // mov r1, #1
    // lsl r1, r1, #8
    // add r2, r2, r1
    // lsl r1, r1, #4
    // add r0, r5, r0
    // str r0, [sp, #0x30]
    // mov r0, #0
    // lsl r2, r2, #0xc
    // str r0, [sp, #0x3c]
    // str r2, [sp, #0x38]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // add r1, sp, #0x2c
    // strh r0, [r1, #0x20]
    // mov r0, #1
    // str r0, [sp, #0x50]
    // mov r0, #2
    // str r0, [sp, #0x54]
    // mov r0, #8
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    // bl Sprite_CreateAffine
    // mov r1, #0xe2
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #0x5c
    // pop {r4, r5, pc}
    // _0225C8C8: .word ov27_0225D118
    // _0225C8CC: .word ov27_0225D11A
    // TODO: decompile
}



void ov27_0225C8D0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0225C910 ; =0x00020100
    // mov r1, #4
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r2, r4, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0225C910: .word 0x00020100
    // TODO: decompile
}



void ov27_0225C914(void) {
}



void ov27_0225C930(void) {
}



void ov27_0225C944(void) {
}



void ov27_0225C94C(void) {
    // str r2, [r4, r1]
    ov27_0225C540((0xe5 << 2), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xe2 << 2), 1);
    // ldr r1, [r4, r1]
    ov27_0225CCE0(r4, (0xe5 << 2));
    // ldr r0, [r4, r0]
    Sprite_SetAnimCtrlSeq((0xe2 << 2), 1);
    // str r0, [r4]
}



void ov27_0225C988(void) {
}



void ov27_0225C994(void) {
    // ldr r0, [r4, r0]
    Sprite_IsAnimated((0xe2 << 2));
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xe2 << 2), 0);
    ov27_0225C5E4(r4);
    // ldr r1, [r4, r0]
    // strh r1, [r0]
    // str r0, [r4]
}



void ov27_0225C9CC(void) {
}



void ov27_0225C9E4(void) {
    *((u32*)(r0 + 0x10)) = (*((u32*)(r0 + 0x10)) + 1);
}



void ov27_0225C9F8(void) {
    // ldr r0, _0225CA0C ; =gSystem + 0x40
    // ldrh r0, [r0, #0x26]
    // cmp r0, #0
    // beq _0225CA06
    // ldr r0, _0225CA10 ; =gSystem
    // mov r1, #1
    // str r1, [r0, #0x5c]
    // mov r0, #0
    // bx lr
    // nop
    // _0225CA0C: .word gSystem + 0x40
    // _0225CA10: .word gSystem
    // TODO: decompile
}



void ov27_0225CA14(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #8
    // str r1, [r4]
    // mov r1, #0xe5
    // mov r2, #0
    // lsl r1, r1, #2
    // str r2, [r4, r1]
    // bl ov27_0225C618
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r1, #0x85
    // mov r2, #0xe5
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov27_0225CD18
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // cmp r2, #0
    // beq _0225CA5A
    // add r0, r1, #4
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // blx r2
    // ldr r1, _0225CA64 ; =0x0000EEEE
    // ldr r0, [r4, #4]
    // strh r1, [r0]
    // mov r0, #0
    // pop {r4, pc}
    // _0225CA64: .word 0x0000EEEE
    // TODO: decompile
}



void ov27_0225CA68(void) {
    // push {r3, r4}
    // sub r1, r1, #2
    // lsl r4, r1, #2
    // ldr r1, _0225CA94 ; =ov27_0225D480
    // ldr r3, [r0]
    // ldr r4, [r1, r4]
    // lsl r1, r3, #2
    // add r1, r4, r1
    // ldrsb r2, [r2, r1]
    // mov r1, #0
    // mvn r1, r1
    // cmp r2, r1
    // beq _0225CA86
    // cmp r3, r2
    // bne _0225CA8C
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // str r2, [r0]
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // _0225CA94: .word ov27_0225D480
    // TODO: decompile
}



void ov27_0225CA98(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // sub r0, r0, #2
    // lsl r1, r0, #2
    // ldr r0, _0225CC84 ; =ov27_0225D49C
    // ldr r0, [r0, r1]
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225CAF6
    // mov r2, #0xe5
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // mov r1, #0x85
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov27_0225CD18
    // ldr r0, _0225CC88 ; =0x000005DC
    // bl PlaySE
    // mov r0, #9
    // mov r1, #0x85
    // str r0, [r4]
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CD74
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // cmp r2, #0
    // beq _0225CB60
    // add r0, r1, #4
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // blx r2
    // b _0225CC80
    // ldr r0, _0225CC8C ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x48]
    // tst r1, r0
    // beq _0225CB44
    // mov r1, #0x85
    // mov r0, #0xe5
    // lsl r1, r1, #2
    // lsl r0, r0, #2
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #0
    // bl ov27_0225CA68
    // cmp r0, #0
    // beq _0225CB60
    // mov r1, #0x85
    // mov r2, #0xe5
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov27_0225CD18
    // ldr r0, _0225CC88 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // cmp r2, #0
    // beq _0225CB60
    // add r0, r1, #4
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // blx r2
    // b _0225CC80
    // mov r1, #0x80
    // tst r1, r0
    // beq _0225CB90
    // mov r1, #0x85
    // mov r0, #0xe5
    // lsl r1, r1, #2
    // lsl r0, r0, #2
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #1
    // bl ov27_0225CA68
    // cmp r0, #0
    // bne _0225CB62
    // b _0225CC80
    // mov r1, #0x85
    // mov r2, #0xe5
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov27_0225CD18
    // ldr r0, _0225CC88 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // cmp r2, #0
    // beq _0225CC80
    // add r0, r1, #4
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // blx r2
    // b _0225CC80
    // mov r1, #0x20
    // tst r1, r0
    // beq _0225CBDA
    // mov r1, #0x85
    // mov r0, #0xe5
    // lsl r1, r1, #2
    // lsl r0, r0, #2
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #2
    // bl ov27_0225CA68
    // cmp r0, #0
    // beq _0225CC80
    // mov r1, #0x85
    // mov r2, #0xe5
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov27_0225CD18
    // ldr r0, _0225CC88 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // cmp r2, #0
    // beq _0225CC80
    // add r0, r1, #4
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // blx r2
    // b _0225CC80
    // mov r1, #0x10
    // tst r1, r0
    // beq _0225CC24
    // mov r1, #0x85
    // mov r0, #0xe5
    // lsl r1, r1, #2
    // lsl r0, r0, #2
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #3
    // bl ov27_0225CA68
    // cmp r0, #0
    // beq _0225CC80
    // mov r1, #0x85
    // mov r2, #0xe5
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov27_0225CD18
    // ldr r0, _0225CC88 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // cmp r2, #0
    // beq _0225CC80
    // add r0, r1, #4
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // blx r2
    // b _0225CC80
    // mov r1, #1
    // tst r1, r0
    // beq _0225CC42
    // mov r1, #0x85
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CD74
    // mov r0, #9
    // str r0, [r4]
    // ldr r0, _0225CC88 ; =0x000005DC
    // bl PlaySE
    // b _0225CC80
    // mov r1, #2
    // tst r0, r1
    // beq _0225CC80
    // ldr r0, [r4, #0xc]
    // bl ov01_021EF00C
    // cmp r0, #0
    // beq _0225CC80
    // mov r1, #0x85
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // mov r2, #0xe5
    // sub r0, r0, #1
    // lsl r2, r2, #2
    // str r0, [r4, r2]
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // bl ov27_0225CD18
    // mov r1, #0x85
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CD74
    // mov r0, #9
    // str r0, [r4]
    // ldr r0, _0225CC88 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0
    // pop {r4, pc}
    // _0225CC84: .word ov27_0225D49C
    // _0225CC88: .word 0x000005DC
    // _0225CC8C: .word gSystem
    // TODO: decompile
}



void ov27_0225CC90(void) {
    // ldr r0, [r4, r0]
    Sprite_IsAnimated((0xe2 << 2));
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xe2 << 2), 0);
    ov27_0225C6F8(r4);
    // str r0, [r4]
}



void ov27_0225CCBC(void) {
    ov01_021EEF58(*((u32*)(r0 + 0xc)));
    // ldr r1, [r4, r1]
    // add r0, r0, r1
    // strh r1, [r0]
    // str r0, [r4]
}



void ov27_0225CCE0(void) {
    // push {lr}
    // sub sp, #0xc
    // lsl r2, r1, #2
    // ldr r1, _0225CD10 ; =ov27_0225D118
    // ldrh r1, [r1, r2]
    // lsl r1, r1, #0xc
    // str r1, [sp]
    // ldr r1, _0225CD14 ; =ov27_0225D11A
    // ldrh r2, [r1, r2]
    // mov r1, #1
    // lsl r1, r1, #8
    // add r1, r2, r1
    // lsl r1, r1, #0xc
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0xe2
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // add sp, #0xc
    // pop {pc}
    // _0225CD10: .word ov27_0225D118
    // _0225CD14: .word ov27_0225D11A
    // TODO: decompile
}



void ov27_0225CD18(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // lsl r0, r2, #1
    // sub r3, r1, #2
    // add r2, r2, r0
    // add r1, r3, #0
    // mov r0, #0x18
    // mul r1, r0
    // ldr r3, _0225CD68 ; =ov27_0225D3C4
    // add r0, #0xe8
    // add r3, r3, r1
    // ldrb r3, [r2, r3]
    // lsl r3, r3, #0xc
    // str r3, [sp]
    // ldr r3, _0225CD6C ; =ov27_0225D3C5
    // add r3, r3, r1
    // ldrb r3, [r2, r3]
    // add r0, r3, r0
    // lsl r0, r0, #0xc
    // ldr r3, _0225CD70 ; =ov27_0225D3C6
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0xe2
    // add r1, r3, r1
    // lsl r0, r0, #2
    // ldrb r1, [r2, r1]
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0225CD68: .word ov27_0225D3C4
    // _0225CD6C: .word ov27_0225D3C5
    // _0225CD70: .word ov27_0225D3C6
    // TODO: decompile
}



void ov27_0225CD74(void) {
    // mov r2, #0xe2
    // lsl r2, r2, #2
    // ldr r0, [r0, r2]
    // sub r2, r1, #2
    // mov r1, #0x18
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _0225CD8C ; =ov27_0225D3C6
    // ldrb r1, [r1, r3]
    // ldr r3, _0225CD90 ; =sub_020248F0
    // add r1, r1, #2
    // bx r3
    // _0225CD8C: .word ov27_0225D3C6
    // _0225CD90: .word Sprite_SetAnimCtrlSeq
    // TODO: decompile
}



void ov27_0225CD94(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0225CEA0 ; =ov27_0225D120
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225CDFE
    // cmp r0, #0
    // bne _0225CDD2
    // mov r1, #0xe5
    // mov r0, #0
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CCE0
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0225CEA4 ; =0x000005DC
    // bl PlaySE
    // mov r0, #5
    // str r0, [r4]
    // b _0225CE9C
    // cmp r0, #1
    // bne _0225CE9C
    // mov r1, #0xe5
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CCE0
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0225CEA4 ; =0x000005DC
    // bl PlaySE
    // mov r0, #5
    // str r0, [r4]
    // b _0225CE9C
    // ldr r0, _0225CEA8 ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x48]
    // tst r1, r0
    // beq _0225CE2A
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0225CE18
    // ldr r0, _0225CEA4 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0xe5
    // mov r0, #0
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CCE0
    // b _0225CE9C
    // mov r1, #0x80
    // tst r1, r0
    // beq _0225CE52
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0225CE40
    // ldr r0, _0225CEA4 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0xe5
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CCE0
    // b _0225CE9C
    // mov r2, #1
    // add r1, r0, #0
    // tst r1, r2
    // beq _0225CE72
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #5
    // str r0, [r4]
    // ldr r0, _0225CEA4 ; =0x000005DC
    // bl PlaySE
    // b _0225CE9C
    // mov r1, #2
    // tst r0, r1
    // beq _0225CE9C
    // mov r1, #0xe5
    // lsl r1, r1, #2
    // str r2, [r4, r1]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov27_0225CCE0
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0225CEA4 ; =0x000005DC
    // bl PlaySE
    // mov r0, #5
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // _0225CEA0: .word ov27_0225D120
    // _0225CEA4: .word 0x000005DC
    // _0225CEA8: .word gSystem
    // TODO: decompile
}



void ov27_0225CEAC(void) {
}


