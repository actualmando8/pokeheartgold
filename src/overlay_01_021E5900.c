/* Decompiled from asm/overlay_01_021E5900.s */
#include "global.h"

void ov01_021E5900(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 8)));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    sub_0205F1A0(*((u32*)(r4 + 0x3c)));
    ov01_021FA1D0();
    sub_02023910();
}


void ov01_021E5924(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // mov r1, #0
    // ldr r5, _021E5B9C ; =0x00DCE6A1
    // str r1, [sp, #4]
    // bl OverlayManager_GetArgs
    // ldr r1, [r6]
    // add r4, r0, #0
    // cmp r1, #3
    // bls _021E593E
    // b _021E5B8E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E594A: ; jump table
    // ldr r1, _021E5BA0 ; =FS_OVERLAY_ID(ds_protect)
    // mov r0, #0
    // bl FS_LoadOverlay
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // ldr r0, _021E5BA4 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, _021E5BA8 ; =0x04001050
    // strh r1, [r0]
    // ldr r0, _021E5BAC ; =ov01_021E66A8
    // bl DSProt_DetectDummy
    // ldr r1, _021E5BB0 ; =0x000004CF
    // mul r1, r0
    // mov r0, #0
    // add r5, r5, r1
    // bl sub_0200FBDC
    // mov r0, #1
    // bl sub_0200FBDC
    // add r0, r4, #0
    // bl ov01_021E6364
    // ldr r0, _021E5BB4 ; =ov01_021E66D8
    // bl DSProt_DetectNotEmulator
    // cmp r0, #0
    // bne _021E599C
    // mov r1, #1
    // b _021E599E
    // mov r1, #0
    // mov r0, #0x6b
    // mul r0, r1
    // add r5, r5, r0
    // add r0, r4, #0
    // bl sub_02053018
    // mov r0, #0x47
    // mov r1, #8
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x74]
    // ldr r0, [r0]
    // lsl r0, r0, #8
    // lsr r0, r0, #0x1c
    // beq _021E59F0
    // ldr r0, _021E5BB8 ; =FS_OVERLAY_ID(OVY_2)
    // mov r1, #2
    // bl HandleLoadOverlay
    // add r0, r4, #0
    // bl ov01_021E5EB8
    // cmp r0, #0
    // beq _021E59D4
    // cmp r0, #1
    // beq _021E59DE
    // b _021E59E8
    // ldr r0, _021E5BBC ; =FS_OVERLAY_ID(OVY_4)
    // mov r1, #2
    // bl HandleLoadOverlay
    // b _021E59F0
    // ldr r0, _021E5BC0 ; =FS_OVERLAY_ID(OVY_3)
    // mov r1, #2
    // bl HandleLoadOverlay
    // b _021E59F0
    // ldr r0, _021E5BC0 ; =FS_OVERLAY_ID(OVY_3)
    // mov r1, #2
    // bl HandleLoadOverlay
    // ldr r0, _021E5BC4 ; =ov01_021E66B8
    // bl DSProt_DetectFlashcart
    // ldr r2, [r4, #0x74]
    // add r7, r0, #0
    // ldr r1, _021E5BC8 ; =0x000003A1
    // ldr r2, [r2, #4]
    // mul r7, r1
    // mov r0, #3
    // mov r1, #4
    // bl Heap_Create
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021E5A12
    // bl GF_AssertFail
    // ldr r1, _021E5BA0 ; =FS_OVERLAY_ID(ds_protect)
    // mov r0, #0
    // bl FS_UnloadOverlay
    // mov r0, #4
    // mov r1, #0x28
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x28
    // str r0, [r4, #4]
    // bl MI_CpuFill8
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #8
    // bl Field3dObjectTaskManager_Create
    // ldr r1, [r4, #4]
    // str r0, [r1, #4]
    // ldr r1, _021E5BCC ; =0x00000D69
    // add r0, r5, r7
    // bl _u32_div_f
    // cmp r1, #0
    // beq _021E5A50
    // ldr r0, _021E5BD0 ; =sub_0203E348
    // mov r1, #0
    // mov r2, #0x7b
    // bl SysTask_CreateOnMainQueue
    // bl ov01_021E6028
    // mov r0, #0x80
    // mov r1, #4
    // bl GF_CreateVramTransferManager
    // mov r0, #4
    // add r1, r0, #0
    // bl sub_02023738
    // mov r0, #4
    // bl GF3dRender_InitSimpleManager
    // bl ov01_021E61E0
    // bl ov01_021E6178
    // bl GfGfx_SwapDisplay
    // mov r0, #4
    // bl BgConfig_Alloc
    // str r0, [r4, #8]
    // bl ov01_021E6058
    // mov r0, #0
    // mov r1, #1
    // bl sub_0205B4EC
    // add r0, r4, #0
    // mov r1, #4
    // bl TryStartMapScriptByType
    // ldr r1, _021E5BD4 ; =0x00001079
    // add r0, r5, r7
    // bl _u32_div_f
    // cmp r1, #0
    // beq _021E5AA8
    // ldr r0, _021E5BD0 ; =sub_0203E348
    // ldr r2, _021E5BD8 ; =0x00000315
    // mov r1, #0
    // bl SysTask_CreateOnMainQueue
    // mov r0, #4
    // bl ov02_0224F864
    // mov r1, #0x12
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // b _021E5B8E
    // bl ov01_021E63B8
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r4, #0
    // str r0, [sp]
    // add r3, r4, #0
    // add r1, #0xc0
    // add r3, #0xcc
    // ldr r0, [r4, #0x34]
    // ldr r1, [r1]
    // ldr r2, [r4, #0x54]
    // ldr r3, [r3]
    // bl ov01_021FBA3C
    // add r1, r4, #0
    // add r1, #0xc0
    // ldr r1, [r1]
    // mov r0, #4
    // bl ov01_021F3638
    // add r1, r4, #0
    // add r1, #0x9c
    // str r0, [r1]
    // add r0, r4, #0
    // bl ov01_021E6460
    // add r0, r4, #0
    // bl ov01_021E64A4
    // add r0, r4, #0
    // bl ov01_021E6580
    // ldr r0, [r4, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetWeatherType
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0xc]
    // bl ov01_021EB260
    // ldr r1, [r4, #0x20]
    // add r0, r4, #0
    // ldr r1, [r1]
    // bl FieldBGM_PlayEffectiveForMapHeader
    // cmp r0, #0
    // bne _021E5B2A
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r1, [r0]
    // mov r0, #1
    // mvn r0, r0
    // cmp r1, r0
    // bne _021E5B32
    // add r0, r4, #0
    // mov r1, #0
    // bl ov01_021E7F00
    // add r0, r4, #0
    // mov r1, #3
    // bl TryStartMapScriptByType
    // mov r0, #4
    // bl ov01_021FB4C0
    // ldr r1, [r4, #4]
    // str r0, [r1, #0x1c]
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x1c]
    // bl ov01_021FB4F4
    // ldr r1, [r4, #4]
    // mov r0, #4
    // ldr r1, [r1, #0x1c]
    // bl ov01_021FB5D4
    // ldr r1, [r4, #4]
    // str r0, [r1, #0x20]
    // b _021E5B8E
    // bl ov01_021EAF18
    // b _021E5B8E
    // bl ov01_021EAF34
    // cmp r0, #0
    // beq _021E5B70
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [r4, #0x6c]
    // bl ov01_021E662C
    // cmp r0, #0
    // bne _021E5B8E
    // mov r2, #0xfa
    // ldr r0, _021E5BDC ; =sub_02096594
    // mov r1, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // ldr r0, _021E5BDC ; =sub_02096594
    // ldr r2, _021E5BE0 ; =0x00000578
    // mov r1, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // ldr r0, [sp, #4]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E5B9C: .word 0x00DCE6A1
    // _021E5BA0: .word FS_OVERLAY_ID(ds_protect)
    // _021E5BA4: .word 0x04000050
    // _021E5BA8: .word 0x04001050
    // _021E5BAC: .word ov01_021E66A8
    // _021E5BB0: .word 0x000004CF
    // _021E5BB4: .word ov01_021E66D8
    // _021E5BB8: .word FS_OVERLAY_ID(OVY_2)
    // _021E5BBC: .word FS_OVERLAY_ID(OVY_4)
    // _021E5BC0: .word FS_OVERLAY_ID(OVY_3)
    // _021E5BC4: .word ov01_021E66B8
    // _021E5BC8: .word 0x000003A1
    // _021E5BCC: .word 0x00000D69
    // _021E5BD0: .word sub_0203E348
    // _021E5BD4: .word 0x00001079
    // _021E5BD8: .word 0x00000315
    // _021E5BDC: .word sub_02096594
    // _021E5BE0: .word 0x00000578
    // TODO: decompile
}


void ov01_021E5BE4(void) {
    // push {r4, lr}
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // bl ov01_021E5ED4
    // cmp r0, #0
    // beq _021E5C04
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov01_021F6830
    // add r0, r4, #0
    // bl ov01_021E5F04
    // add r1, r4, #0
    // add r1, #0xbc
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_021E5FC0
    // ldr r0, [r4, #0x6c]
    // cmp r0, #0
    // beq _021E5C1E
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021E5C24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // ldr r5, _021E5E7C ; =0x002AAACF
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // ldr r0, [r4, #0x2c]
    // bl ov01_021F50F0
    // ldr r0, [r6]
    // cmp r0, #0
    // beq _021E5C4A
    // cmp r0, #1
    // bne _021E5C42
    // b _021E5D82
    // cmp r0, #2
    // bne _021E5C48
    // b _021E5E12
    // b _021E5E76
    // ldr r1, _021E5E80 ; =FS_OVERLAY_ID(ds_protect)
    // mov r0, #0
    // bl FS_LoadOverlay
    // add r0, r4, #0
    // bl sub_02064910
    // ldr r0, _021E5E84 ; =ov01_021E66C8
    // bl DSProt_DetectDummy
    // ldr r1, _021E5E88 ; =0x0000023B
    // mul r1, r0
    // ldr r0, [r4, #0x2c]
    // add r5, r5, r1
    // bl ov01_021F6304
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetXCoord
    // ldr r1, [r4, #0x20]
    // str r0, [r1, #8]
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetZCoord
    // ldr r1, [r4, #0x20]
    // str r0, [r1, #0xc]
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // ldr r1, [r4, #0x20]
    // str r0, [r1, #0x10]
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // bl ov01_021FB418
    // ldr r0, [r4, #0x54]
    // cmp r0, #0
    // bne _021E5C9C
    // bl GF_AssertFail
    // ldr r0, [r4, #0x2c]
    // bl ov01_021F61F8
    // ldr r0, _021E5E8C ; =ov01_021E66DC
    // bl DSProt_DetectNotFlashcart
    // cmp r0, #0
    // bne _021E5CB0
    // mov r1, #1
    // b _021E5CB2
    // mov r1, #0
    // ldr r0, _021E5E90 ; =0x0000018D
    // mul r0, r1
    // add r5, r5, r0
    // ldr r0, [r4, #0x54]
    // bl ov01_021E8A28
    // ldr r0, [r4, #0x54]
    // bl ov01_021E8AEC
    // add r0, r4, #0
    // add r0, #0x58
    // bl ov01_021E8DD4
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov01_02204764
    // add r0, r4, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // bl ov01_02204634
    // add r0, r4, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl ov01_02204278
    // ldr r0, _021E5E94 ; =ov01_021E66E0
    // bl DSProt_DetectNotEmulator
    // cmp r0, #0
    // bne _021E5CF8
    // mov r1, #1
    // b _021E5CFA
    // mov r1, #0
    // mov r0, #0x8b
    // add r7, r1, #0
    // mul r7, r0
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x10]
    // bl ov01_021EB1BC
    // ldr r1, _021E5E80 ; =FS_OVERLAY_ID(ds_protect)
    // mov r0, #0
    // bl FS_UnloadOverlay
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x10]
    // bl ov01_021EB1DC
    // ldr r0, [r4, #4]
    // mov r1, #0
    // str r1, [r0, #0x10]
    // ldr r1, _021E5E98 ; =0x000008AD
    // add r0, r5, r7
    // bl _u32_div_f
    // cmp r1, #0
    // beq _021E5D34
    // ldr r0, _021E5E9C ; =sub_0203E348
    // ldr r2, _021E5EA0 ; =0x00001EA5
    // mov r1, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [r4, #0x3c]
    // bl sub_0205E4C8
    // ldr r0, [r4, #0x3c]
    // bl ov01_021F9250
    // ldr r0, [r4, #0x3c]
    // bl sub_0205F55C
    // ldr r0, [r4, #0x44]
    // bl ov01_021F13F4
    // add r0, r4, #0
    // bl ov01_02205424
    // ldr r0, [r4, #0x38]
    // bl ov01_021E66A0
    // mov r0, #0
    // str r0, [r4, #0x38]
    // ldr r1, _021E5EA4 ; =0x000004EB
    // add r0, r5, r7
    // bl _u32_div_f
    // cmp r1, #0
    // beq _021E5D72
    // ldr r0, _021E5E9C ; =sub_0203E348
    // ldr r2, _021E5EA8 ; =0x000004DD
    // mov r1, #0
    // bl SysTask_CreateOnMainQueue
    // add r4, #0x9c
    // ldr r0, [r4]
    // bl ov01_021F3660
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _021E5E76
    // ldr r0, [r4, #0x2c]
    // bl ov01_021F62CC
    // cmp r0, #1
    // bne _021E5E76
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // bl ov01_02204084
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov01_021FB944
    // ldr r0, [r4, #0x2c]
    // bl ov01_021F62B0
    // add r0, r4, #0
    // bl ov01_021EAC30
    // add r0, r4, #0
    // add r0, #0x50
    // bl ov01_021EA284
    // ldr r0, [r4, #0x68]
    // bl ov01_021F3D50
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #8]
    // bl FieldDrawMapNameInfo_Destroy
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0xc]
    // bl ov01_021EB234
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl ov01_021FB610
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x1c]
    // bl ov01_021FB4D4
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x18]
    // bl sub_020556A8
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov01_021EA840
    // add r0, r4, #0
    // add r0, #0x48
    // bl ov01_021EA8FC
    // bl ov01_021E619C
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov02_0224F8F4
    // ldr r0, [r4, #8]
    // bl ov01_021E6138
    // add r0, r4, #0
    // bl ov01_021EAF54
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _021E5E76
    // add r0, r4, #0
    // bl ov01_021EAF70
    // cmp r0, #0
    // beq _021E5E76
    // bl ov01_021E6214
    // bl sub_02023778
    // bl GF_DestroyVramTransferManager
    // bl GF3dRender_DeleteSimpleManager
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #4]
    // bl Field3dObjectTaskManager_Delete
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4, #4]
    // mov r0, #4
    // bl Heap_Destroy
    // ldr r0, [r4, #0x74]
    // ldr r0, [r0]
    // lsl r0, r0, #8
    // lsr r0, r0, #0x1c
    // beq _021E5E6E
    // ldr r0, _021E5EAC ; =FS_OVERLAY_ID(OVY_2)
    // bl UnloadOverlayByID
    // ldr r0, _021E5EB0 ; =FS_OVERLAY_ID(OVY_4)
    // bl UnloadOverlayByID
    // ldr r0, _021E5EB4 ; =FS_OVERLAY_ID(OVY_3)
    // bl UnloadOverlayByID
    // bl sub_02005D00
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E5E7C: .word 0x002AAACF
    // _021E5E80: .word FS_OVERLAY_ID(ds_protect)
    // _021E5E84: .word ov01_021E66C8
    // _021E5E88: .word 0x0000023B
    // _021E5E8C: .word ov01_021E66DC
    // _021E5E90: .word 0x0000018D
    // _021E5E94: .word ov01_021E66E0
    // _021E5E98: .word 0x000008AD
    // _021E5E9C: .word sub_0203E348
    // _021E5EA0: .word 0x00001EA5
    // _021E5EA4: .word 0x000004EB
    // _021E5EA8: .word 0x000004DD
    // _021E5EAC: .word FS_OVERLAY_ID(OVY_2)
    // _021E5EB0: .word FS_OVERLAY_ID(OVY_4)
    // _021E5EB4: .word FS_OVERLAY_ID(OVY_3)
    // TODO: decompile
}


void ov01_021E5EB8(void) {
    // push {r3, lr}
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // bl Save_Gymmick_GetType
    // cmp r0, #0
    // bne _021E5ECE
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021E5ED4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetXCoord
    // add r4, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetZCoord
    // ldr r2, [r5, #0x20]
    // ldr r1, [r2, #8]
    // cmp r4, r1
    // bne _021E5EF4
    // ldr r1, [r2, #0xc]
    // cmp r0, r1
    // beq _021E5EFE
    // str r4, [r2, #8]
    // ldr r1, [r5, #0x20]
    // str r0, [r1, #0xc]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021E5F04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetXCoord
    // asr r1, r0, #4
    // lsr r1, r1, #0x1b
    // add r1, r0, r1
    // ldr r0, [r5, #0x40]
    // asr r4, r1, #5
    // bl PlayerAvatar_GetZCoord
    // asr r1, r0, #4
    // lsr r1, r1, #0x1b
    // add r1, r0, r1
    // asr r2, r1, #5
    // ldr r0, [r5, #0x30]
    // add r1, r4, #0
    // bl MapMatrix_GetMapHeader
    // add r4, r0, #0
    // ldr r0, [r5, #0x20]
    // ldr r6, [r0]
    // cmp r4, r6
    // bne _021E5F3E
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0xc]
    // bl Save_LocalFieldData_Get
    // add r7, r0, #0
    // ldr r0, [r5, #0x20]
    // add r1, r4, #0
    // str r4, [r0]
    // add r0, r5, #0
    // bl Field_InitMapEvents
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02053038
    // add r0, r5, #0
    // bl Field_GetNumObjectEvents
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl Field_GetObjectEvents
    // str r0, [sp]
    // ldr r0, [r5, #0x3c]
    // ldr r3, [sp, #4]
    // add r1, r6, #0
    // add r2, r4, #0
    // bl sub_0205E104
    // ldr r1, [r5, #0x20]
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl FieldBGM_GetEffective
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #1
    // bl FieldBGM_TryFadeOut
    // add r0, r5, #0
    // bl Field_InitMapObjectsFromZoneEventData
    // add r0, r7, #0
    // bl LocalFieldData_GetWeatherType
    // add r1, r0, #0
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0xc]
    // bl FieldWeatherUpdate_UsedFlash
    // add r0, r6, #0
    // bl MapHeader_GetMapSec
    // add r6, r0, #0
    // add r0, r4, #0
    // bl MapHeader_GetMapSec
    // cmp r6, r0
    // beq _021E5FB8
    // add r0, r5, #0
    // bl FieldSystem_DrawMapNameAnimation
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E5FC0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl FieldSystem_TaskIsRunning
    // cmp r0, #0
    // bne _021E5FD4
    // add r0, r5, #0
    // bl FieldSystem_StartBugContestTimer
    // ldr r0, [r5, #0x50]
    // bl ov01_021EA2A4
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ov01_022047DC
    // ldr r0, [r5, #0x28]
    // bl ov01_021EAD8C
    // add r0, r5, #0
    // bl ov01_021F3D98
    // mov r0, #1
    // tst r0, r4
    // beq _021E5FFE
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x10]
    // bl ov01_021EB114
    // mov r0, #8
    // tst r0, r4
    // beq _021E600E
    // add r0, r5, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl ov01_02204350
    // mov r0, #2
    // tst r0, r4
    // beq _021E601A
    // ldr r0, [r5, #0x2c]
    // bl ov01_021F50F0
    // mov r0, #4
    // tst r0, r4
    // beq _021E6026
    // add r0, r5, #0
    // bl ov01_021E6220
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021E6028(void) {
    GfGfx_SetBanks(5);
}


void ov01_021E6048(void) {
    ov01_021E6058();
}


void ov01_021E6050(void) {
    ov01_021E6138();
}


void ov01_021E6058(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x68
    // ldr r5, _021E6128 ; =ov01_022062EC
    // add r3, sp, #0x58
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _021E612C ; =ov01_02206318
    // add r3, sp, #0x3c
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
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #4
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6130 ; =ov01_022062FC
    // add r3, sp, #0x20
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #4
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E6134 ; =ov01_02206334
    // add r3, sp, #4
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #4
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r1, #2
    // bl DC_FlushRange
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #2
    // bl GX_LoadBGPltt
    // add sp, #0x68
    // pop {r3, r4, r5, pc}
    // _021E6128: .word ov01_022062EC
    // _021E612C: .word ov01_02206318
    // _021E6130: .word ov01_022062FC
    // _021E6134: .word ov01_02206334
    // TODO: decompile
}


void ov01_021E6138(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 3);
}


void ov01_021E6178(void) {
    // push {lr}
    // sub sp, #0x14
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7c
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x1f
    // str r3, [sp, #0xc]
    // mov r2, #4
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // add sp, #0x14
    // pop {pc}
    // TODO: decompile
}


void ov01_021E619C(void) {
    OamManager_Free();
}


void ov01_021E61A4(void) {
    // push {r4, lr}
    // mov r1, #0
    // add r4, r0, #0
    // add r2, r1, #0
    // bl ov01_021EAB44
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov01_021EAB58
    // add r0, r4, #0
    // mov r1, #0x1f
    // mov r2, #0
    // bl ov01_021EAB6C
    // mov r1, #2
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // mov r2, #1
    // mov r3, #0
    // bl ov01_021EAB80
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0x16
    // bl ov01_021EA910
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021E61E0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _021E6210 ; =ov01_022062DC
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0x10
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // mov r0, #0x14
    // mov r1, #4
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _021E6210: .word ov01_022062DC
    // TODO: decompile
}


void ov01_021E6214(void) {
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}


void ov01_021E6220(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x88
    // add r4, r0, #0
    // bl Thunk_G3X_Reset
    // bl Camera_PushLookAtToNNSGlb
    // ldr r0, [r4, #0x2c]
    // ldr r1, [r4, #0x48]
    // bl ov01_021F61A8
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // ldr r1, [r4, #0x34]
    // bl ov01_021F3C9C
    // ldr r1, [r4, #0x24]
    // add r0, sp, #0
    // bl Camera_GetAngle
    // add r2, sp, #0
    // ldrh r2, [r2]
    // mov r0, #0x47
    // lsl r0, r0, #2
    // neg r2, r2
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // asr r2, r2, #4
    // lsl r2, r2, #1
    // add r2, r2, #1
    // lsl r3, r2, #1
    // ldr r2, _021E630C ; =FX_SinCosTable_
    // ldr r0, [r4, r0]
    // ldrsh r2, [r2, r3]
    // lsl r0, r0, #0xc
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r2, r2, #0xc
    // ldr r6, _021E6310 ; =NNS_G3dGlb + 0x8
    // orr r2, r0
    // add r5, sp, #0x48
    // mov r3, #8
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // sub r3, r3, #1
    // bne _021E6286
    // add r6, sp, #0x48
    // add r5, sp, #8
    // mov r3, #8
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // sub r3, r3, #1
    // bne _021E6294
    // ldr r0, [sp, #0x30]
    // asr r3, r2, #0x1f
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r3, #2
    // mov r5, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r5
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // ldr r2, [sp, #0x40]
    // orr r1, r0
    // add r0, r2, r1
    // str r0, [sp, #0x40]
    // ldr r1, _021E6310 ; =NNS_G3dGlb + 0x8
    // add r0, sp, #8
    // mov r2, #0x40
    // bl MIi_CpuCopyFast
    // ldr r1, _021E6314 ; =NNS_G3dGlb + 0x80
    // mov r0, #0x50
    // ldr r2, [r1, #0x7c]
    // bic r2, r0
    // str r2, [r1, #0x7c]
    // bl NNS_G3dGlbFlushP
    // ldr r0, [r4, #0x44]
    // bl ov01_021F13EC
    // bl sub_020237B0
    // ldr r1, _021E6310 ; =NNS_G3dGlb + 0x8
    // add r0, sp, #0x48
    // mov r2, #0x40
    // bl MIi_CpuCopyFast
    // ldr r1, _021E6314 ; =NNS_G3dGlb + 0x80
    // mov r0, #0x50
    // ldr r2, [r1, #0x7c]
    // bic r2, r0
    // str r2, [r1, #0x7c]
    // bl NNS_G3dGlbFlushP
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #4]
    // bl Field3dObjectTaskManager_RunDrawTasks
    // ldr r1, _021E6318 ; =gG3dDepthBufferingMode
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl RequestSwap3DBuffers
    // add sp, #0x88
    // pop {r4, r5, r6, pc}
    // _021E630C: .word FX_SinCosTable_
    // _021E6310: .word NNS_G3dGlb + 0x8
    // _021E6314: .word NNS_G3dGlb + 0x80
    // _021E6318: .word gG3dDepthBufferingMode
    // TODO: decompile
}


void ov01_021E631C(void) {
    // cmp r1, #1
    // bne _021E6330
    // add r1, r0, #0
    // add r1, #0xbc
    // ldr r2, [r1]
    // mov r1, #4
    // orr r1, r2
    // add r0, #0xbc
    // str r1, [r0]
    // bx lr
    // add r1, r0, #0
    // add r1, #0xbc
    // ldr r2, [r1]
    // mov r1, #4
    // bic r2, r1
    // add r0, #0xbc
    // str r2, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021E6340(void) {
    // cmp r1, #1
    // bne _021E6354
    // add r1, r0, #0
    // add r1, #0xbc
    // ldr r2, [r1]
    // mov r1, #1
    // orr r1, r2
    // add r0, #0xbc
    // str r1, [r0]
    // bx lr
    // add r1, r0, #0
    // add r1, #0xbc
    // ldr r2, [r1]
    // mov r1, #1
    // bic r2, r1
    // add r0, #0xbc
    // str r2, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021E6364(void) {
    // mov r1, #0xf
    // add r0, #0xbc
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021E636C(void) {
    // push {lr}
    // sub sp, #0xc
    // cmp r0, #1
    // bne _021E638E
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // add sp, #0xc
    // pop {pc}
    // cmp r0, #0
    // bne _021E63AE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // add sp, #0xc
    // pop {pc}
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {pc}
    // TODO: decompile
}


void ov01_021E63B8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _021E6454 ; =gG3dDepthBufferingMode
    // ldr r0, [r0]
    // lsl r1, r0, #1
    // ldr r0, _021E6458 ; =0x04000540
    // str r1, [r0]
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_GetAreaDataBank
    // bl ov01_021FB888
    // str r0, [r5, #0x34]
    // bl ov01_021FB934
    // add r3, r0, #0
    // ldr r1, _021E645C ; =0x00000226
    // mov r0, #4
    // mov r2, #0x80
    // bl ov01_02204004
    // add r1, r5, #0
    // add r1, #0xc0
    // str r0, [r1]
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_GetMoveModelBank
    // add r4, r0, #0
    // ldr r0, [r5, #0x38]
    // cmp r0, #0
    // beq _021E6406
    // bl GF_AssertFail
    // mov r0, #4
    // add r1, r4, #0
    // bl ov01_021E6644
    // str r0, [r5, #0x38]
    // mov r0, #4
    // bl ov01_022041C4
    // add r1, r5, #0
    // add r1, #0xc8
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl ov01_0220460C
    // add r1, r5, #0
    // add r1, #0xcc
    // str r0, [r1]
    // mov r0, #4
    // bl ov01_02204744
    // mov r1, #0x41
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r5, #0x34]
    // bl ov01_021FB904
    // add r1, r5, #0
    // add r1, #0xc8
    // ldr r1, [r1]
    // bl ov01_021E87E4
    // str r0, [r5, #0x54]
    // bl ov01_021E8DB4
    // str r0, [r5, #0x58]
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6454: .word gG3dDepthBufferingMode
    // _021E6458: .word 0x04000540
    // _021E645C: .word 0x00000226
    // TODO: decompile
}


void ov01_021E6460(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // add r2, r4, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x64]
    // add r2, #0xc0
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x30]
    // ldr r1, [r4, #0x34]
    // ldr r2, [r2]
    // ldr r3, [r4, #0x54]
    // bl ov01_021F6020
    // str r0, [r4, #0x2c]
    // mov r0, #8
    // mov r1, #4
    // bl ov01_021FB3A4
    // add r1, r4, #0
    // add r1, #0x98
    // str r0, [r1]
    // ldr r2, [r4, #0x20]
    // ldr r0, [r4, #0x2c]
    // ldr r1, [r2, #8]
    // ldr r2, [r2, #0xc]
    // bl ov01_021F6118
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021E64A4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // mov r1, #0x17
    // mov r2, #4
    // add r5, r0, #0
    // bl ov01_021F1348
    // mov r1, #0x50
    // str r0, [r5, #0x44]
    // bl ov01_021F1384
    // mov r2, #0x20
    // str r2, [sp]
    // mov r0, #5
    // str r2, [sp, #4]
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // lsl r0, r2, #6
    // str r0, [sp, #0xc]
    // lsl r0, r2, #0xb
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x44]
    // mov r1, #4
    // add r3, r2, #0
    // bl ov01_021F1390
    // add r0, r5, #0
    // mov r1, #4
    // bl sub_02055680
    // ldr r1, [r5, #4]
    // str r0, [r1, #0x18]
    // ldr r0, [r5, #0x70]
    // cmp r0, #2
    // bne _021E64F2
    // ldr r0, [r5, #0x3c]
    // mov r1, #0
    // bl sub_0205F5F8
    // ldr r0, [r5, #0x44]
    // ldr r1, _021E657C ; =ov01_02208BFC
    // bl ov01_021F13D0
    // ldr r0, [r5, #0x70]
    // mov r4, #0xa
    // cmp r0, #2
    // bne _021E6504
    // mov r4, #5
    // ldr r0, [r5, #0x38]
    // bl ov01_021E669C
    // add r6, r0, #0
    // ldr r0, [r5, #0x38]
    // bl ov01_021E6698
    // str r4, [sp]
    // add r3, r0, #0
    // ldr r0, [r5, #0x3c]
    // mov r1, #0x20
    // add r2, r6, #3
    // bl ov01_021F91F8
    // ldr r0, [r5, #0x3c]
    // bl ov01_022057DC
    // ldr r0, [r5, #0x44]
    // bl ov01_021FD3F8
    // ldr r0, [r5, #0x40]
    // bl sub_0205C46C
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // cmp r0, #0
    // ldr r0, [r5, #0x3c]
    // beq _021E6544
    // bl sub_0205E580
    // b _021E654E
    // bl sub_0205E520
    // add r0, r5, #0
    // bl ov01_022059AC
    // bl sub_02057FA4
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // cmp r0, #0
    // ldr r0, [r5, #0x3c]
    // beq _021E6566
    // mov r1, #2
    // bl MapObjectManager_ClearFlagsBits
    // b _021E656A
    // bl sub_0205F568
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetPositionVector
    // ldr r1, [r5, #0x2c]
    // bl ov01_021F62E8
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021E657C: .word ov01_02208BFC
    // TODO: decompile
}


void ov01_021E6580(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // bl GfGfx_BothDispOn
    // bl ov01_021EA8E0
    // str r0, [r4, #0x48]
    // bl ov01_021E61A4
    // bl ov01_021EA824
    // str r0, [r4, #0x4c]
    // ldr r0, [r4, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetCameraType
    // add r5, r0, #0
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetPositionVector
    // add r1, r4, #0
    // add r2, r5, #0
    // mov r3, #1
    // bl ov01_021EABA8
    // ldr r0, [r4, #0x34]
    // bl ov01_021FBA14
    // add r5, r0, #0
    // cmp r5, #3
    // bne _021E65D8
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // bl CheckFlag96A
    // cmp r0, #0
    // beq _021E65D8
    // mov r5, #4
    // ldr r0, [r4, #0x48]
    // add r1, r5, #0
    // bl ov01_021EA220
    // str r0, [r4, #0x50]
    // add r0, r4, #0
    // bl ov01_021EB1F4
    // ldr r1, [r4, #4]
    // str r0, [r1, #0xc]
    // ldr r0, [r4, #8]
    // bl FieldDrawMapNameInfo_Create
    // ldr r1, [r4, #4]
    // str r0, [r1, #8]
    // mov r0, #4
    // bl ov01_021F3D38
    // str r0, [r4, #0x68]
    // bl ov01_021EAFD4
    // ldr r1, [r4, #4]
    // str r0, [r1, #0x10]
    // ldr r0, [r4, #0x34]
    // bl ov01_021FB9CC
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x10]
    // bl ov01_021EB00C
    // add r0, r4, #0
    // bl sub_020648EC
    // ldr r0, _021E6628 ; =ov01_021E5900
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6628: .word ov01_021E5900
    // TODO: decompile
}


void ov01_021E662C(void) {
    // push {r3, lr}
    // bl CARD_SpiWaitGetStatus
    // bl CARD_SpiWaitGetStatus
    // cmp r0, #0xaa
    // bne _021E663E
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021E6644(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // mov r1, #0x64
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0x5c
    // add r1, r6, #0
    // add r2, r5, #0
    // bl AllocAtEndAndReadWholeNarcMemberByIdPair
    // ldr r1, _021E6694 ; =0x0000FFFF
    // mov r2, #0
    // add r3, r4, #0
    // add r2, r2, #1
    // str r1, [r3, #4]
    // add r3, r3, #4
    // cmp r2, #0x18
    // blt _021E6662
    // ldr r5, _021E6694 ; =0x0000FFFF
    // mov r3, #0
    // add r1, r0, #0
    // add r2, r4, #0
    // ldrh r6, [r1]
    // str r6, [r2, #4]
    // ldrh r6, [r1]
    // cmp r6, r5
    // beq _021E6688
    // add r3, r3, #1
    // add r1, r1, #2
    // add r2, r2, #4
    // cmp r3, #0x18
    // blt _021E6674
    // strh r3, [r4]
    // bl Heap_Free
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _021E6694: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021E6698(void) {
    // add r0, r0, #4
    // bx lr
    // TODO: decompile
}


void ov01_021E669C(void) {
    // ldrh r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021E66A0(void) {
    Heap_Free();
}


void ov01_021E66A8(void) {
    // ldr r3, _021E66B4 ; =Heap_AllocAtEnd
    // mov r1, #0xfa
    // mov r0, #3
    // lsl r1, r1, #2
    // bx r3
    // nop
    // _021E66B4: .word Heap_AllocAtEnd
    // TODO: decompile
}


void ov01_021E66B8(void) {
    // ldr r3, _021E66C4 ; =Heap_AllocAtEnd
    // mov r1, #0xfa
    // mov r0, #3
    // lsl r1, r1, #2
    // bx r3
    // nop
    // _021E66C4: .word Heap_AllocAtEnd
    // TODO: decompile
}


void ov01_021E66C8(void) {
    // ldr r3, _021E66D4 ; =Heap_AllocAtEnd
    // mov r1, #0xfa
    // mov r0, #3
    // lsl r1, r1, #2
    // bx r3
    // nop
    // _021E66D4: .word Heap_AllocAtEnd
    // TODO: decompile
}


void ov01_021E66D8(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021E66DC(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021E66E0(void) {
    // bx lr
    // TODO: decompile
}

