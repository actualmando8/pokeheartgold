/* Decompiled from asm/overlay_04.s */
#include "global.h"

void ov04_02253E20(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #4
    // bl Save_Gymmick_AssertMagic_GetData
    // add r3, sp, #0x18
    // ldr r6, _02253ECC ; =_02257328
    // add r4, r0, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #0x6f
    // str r0, [r3]
    // ldr r0, [r5, #0x54]
    // mov r3, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl ov01_021F3C0C
    // mov r3, #3
    // mov r0, #2
    // str r3, [sp]
    // lsl r0, r0, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // mov r1, #0xe
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r2, #0x13
    // bl ov01_021FB3E4
    // ldr r0, [r4]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // beq _02253E80
    // cmp r0, #1
    // beq _02253E86
    // b _02253E8C
    // mov r4, #2
    // lsl r4, r4, #0x10
    // b _02253E94
    // mov r4, #0x1f
    // lsl r4, r4, #0x10
    // b _02253E94
    // bl GF_AssertFail
    // mov r4, #2
    // lsl r4, r4, #0x10
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // mov r1, #0x6f
    // bl ov01_021F3B4C
    // add r6, r0, #0
    // add r0, sp, #0xc
    // add r1, r6, #0
    // bl ov01_021F3B0C
    // add r0, r6, #0
    // add r1, sp, #0xc
    // str r4, [sp, #0x10]
    // bl ov01_021F3B1C
    // add r5, #0x98
    // ldr r2, [r5]
    // mov r0, #0
    // add r1, r4, #0
    // bl ov01_021FB4A0
    // ldr r0, _02253ED0 ; =ov04_02257334
    // bl G3X_SetEdgeColorTable
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02253ECC: .word _02257328
    // _02253ED0: .word ov04_02257334
    // TODO: decompile
}



void ov04_02253ED4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0xb
    // mov r1, #8
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4]
    // add r0, r5, #0
    // str r5, [r4, #4]
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #4
    // bl Save_Gymmick_AssertMagic_GetData
    // add r6, r0, #0
    // ldr r0, [r5, #0x40]
    // add r1, sp, #0
    // bl PlayerAvatar_CopyPositionVector
    // mov r0, #2
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // ldr r0, [r5, #0x10]
    // bne _02253F20
    // ldr r1, _02253F30 ; =ov04_02253F38
    // add r2, r4, #0
    // bl TaskManager_Call
    // mov r0, #1
    // add sp, #0xc
    // str r0, [r6]
    // pop {r3, r4, r5, r6, pc}
    // ldr r1, _02253F34 ; =ov04_02253F94
    // add r2, r4, #0
    // bl TaskManager_Call
    // mov r0, #0
    // str r0, [r6]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _02253F30: .word ov04_02253F38
    // _02253F34: .word ov04_02253F94
    // TODO: decompile
}



void ov04_02253F38(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _02253F5A
    // cmp r1, #1
    // beq _02253F6C
    // cmp r1, #5
    // beq _02253F7E
    // b _02253F86
    // ldr r0, [r5, #0x10]
    // ldr r1, _02253F8C ; =ov01_02205A60
    // mov r2, #0
    // bl TaskManager_Call
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02253F86
    // ldr r0, _02253F90 ; =ov04_02253FF0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02253F86
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02253F8C: .word ov01_02205A60
    // _02253F90: .word ov04_02253FF0
    // TODO: decompile
}



void ov04_02253F94(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _02253FB6
    // cmp r1, #1
    // beq _02253FC8
    // cmp r1, #5
    // beq _02253FDA
    // b _02253FE2
    // ldr r0, [r5, #0x10]
    // ldr r1, _02253FE8 ; =ov01_02205A60
    // mov r2, #0
    // bl TaskManager_Call
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02253FE2
    // ldr r0, _02253FEC ; =ov04_022540C0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02253FE2
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02253FE8: .word ov01_02205A60
    // _02253FEC: .word ov04_022540C0
    // TODO: decompile
}



void ov04_02253FF0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r4, [r5, #4]
    // cmp r0, #2
    // beq _0225400C
    // cmp r0, #3
    // beq _02254026
    // cmp r0, #4
    // beq _0225408C
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x40]
    // mov r1, #0
    // bl PlayerAvatar_ToggleAutomaticHeightUpdating
    // mov r0, #SEQ_SE_DP_ELEBETA>>4
    // lsl r0, r0, #4
    // bl PlaySE
    // ldr r0, [r5]
    // add sp, #0x18
    // add r0, r0, #1
    // str r0, [r5]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // mov r1, #0x6f
    // bl ov01_021F3B4C
    // add r6, r0, #0
    // add r0, sp, #0xc
    // add r1, r6, #0
    // bl ov01_021F3B0C
    // mov r0, #1
    // ldr r1, [sp, #0x10]
    // lsl r0, r0, #0x10
    // add r1, r1, r0
    // mov r0, #0x1f
    // lsl r0, r0, #0x10
    // str r1, [sp, #0x10]
    // cmp r1, r0
    // blt _02254060
    // str r0, [sp, #0x10]
    // mov r0, #0x61
    // lsl r0, r0, #4
    // mov r1, #0
    // bl StopSE
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4, #0x40]
    // add r1, sp, #0
    // bl PlayerAvatar_CopyPositionVector
    // mov r0, #1
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0x10
    // add r1, r1, r0
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_SetMapObjectYPosition
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov01_02205A34
    // add r0, r6, #0
    // add r1, sp, #0xc
    // bl ov01_021F3B1C
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // add r2, r4, #0
    // add r2, #0x98
    // mov r1, #0x1f
    // ldr r2, [r2]
    // mov r0, #0
    // lsl r1, r1, #0x10
    // bl ov01_021FB4A0
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate
    // ldr r0, _022540BC ; =SEQ_SE_DP_KI_GASYAN
    // bl PlaySE
    // add r0, r6, #0
    // bl SysTask_Destroy
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _022540BC: .word SEQ_SE_DP_KI_GASYAN
    // TODO: decompile
}



void ov04_022540C0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r4, [r5, #4]
    // cmp r0, #2
    // beq _022540DC
    // cmp r0, #3
    // beq _022540F6
    // cmp r0, #4
    // beq _0225415C
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x40]
    // mov r1, #0
    // bl PlayerAvatar_ToggleAutomaticHeightUpdating
    // mov r0, #SEQ_SE_DP_ELEBETA>>4
    // lsl r0, r0, #4
    // bl PlaySE
    // ldr r0, [r5]
    // add sp, #0x18
    // add r0, r0, #1
    // str r0, [r5]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // mov r1, #0x6f
    // bl ov01_021F3B4C
    // add r6, r0, #0
    // add r0, sp, #0xc
    // add r1, r6, #0
    // bl ov01_021F3B0C
    // mov r0, #1
    // ldr r1, [sp, #0x10]
    // lsl r0, r0, #0x10
    // sub r2, r1, r0
    // lsl r1, r0, #1
    // str r2, [sp, #0x10]
    // cmp r2, r1
    // bgt _02254130
    // lsl r0, r0, #1
    // str r0, [sp, #0x10]
    // mov r0, #0x61
    // lsl r0, r0, #4
    // mov r1, #0
    // bl StopSE
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4, #0x40]
    // add r1, sp, #0
    // bl PlayerAvatar_CopyPositionVector
    // mov r0, #1
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0x10
    // sub r1, r1, r0
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_SetMapObjectYPosition
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov01_02205A34
    // add r0, r6, #0
    // add r1, sp, #0xc
    // bl ov01_021F3B1C
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // add r2, r4, #0
    // add r2, #0x98
    // mov r1, #2
    // ldr r2, [r2]
    // mov r0, #0
    // lsl r1, r1, #0x10
    // bl ov01_021FB4A0
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate
    // ldr r0, _0225418C ; =SEQ_SE_DP_KI_GASYAN
    // bl PlaySE
    // add r0, r6, #0
    // bl SysTask_Destroy
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _0225418C: .word SEQ_SE_DP_KI_GASYAN
    // TODO: decompile
}



void ov04_02254190(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #5
    // bl Save_Gymmick_AssertMagic_GetData
    // add r7, r0, #0
    // mov r0, #4
    // mov r1, #0x54
    // bl Heap_Alloc
    // ldr r1, [r4, #4]
    // mov r2, #0x54
    // str r0, [r1, #0x24]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // bl MI_CpuFill8
    // ldr r0, [r4, #4]
    // mov r6, #0
    // ldr r5, [r0, #0x24]
    // mov r1, #0
    // add r0, sp, #4
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // ldrb r0, [r7, r6]
    // ldr r1, _02254400 ; =ov04_022575D4
    // mov r3, #0
    // lsl r2, r0, #2
    // ldr r0, _02254400 ; =ov04_022575D4
    // ldrh r1, [r1, r2]
    // add r0, r0, r2
    // ldrh r0, [r0, #2]
    // lsl r2, r1, #0x10
    // mov r1, #2
    // lsl r1, r1, #0xe
    // lsl r0, r0, #0x10
    // str r2, [sp, #4]
    // add r1, r2, r1
    // str r1, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x54]
    // mov r1, #0x76
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // add r2, sp, #4
    // bl ov01_021F3C0C
    // str r0, [r5, #4]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _022541C4
    // ldr r0, [r7, #4]
    // cmp r0, #3
    // bls _02254212
    // b _022543F6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225421E: ; jump table
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x73
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x73
    // mov r2, #1
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x74
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x74
    // mov r2, #1
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x7a
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x7a
    // mov r2, #1
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x75
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x75
    // mov r2, #1
    // bl ov01_021E8970
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x73
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x73
    // mov r2, #1
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x74
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x74
    // add r2, r1, #0
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x7a
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x7a
    // mov r2, #1
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x75
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x75
    // add r2, r1, #0
    // bl ov01_021E8970
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x73
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x73
    // add r2, r1, #0
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x74
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x74
    // mov r2, #1
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x7a
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x7a
    // add r2, r1, #0
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x75
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x75
    // mov r2, #1
    // bl ov01_021E8970
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x73
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x73
    // add r2, r1, #0
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x74
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x74
    // add r2, r1, #0
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x7a
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x7a
    // add r2, r1, #0
    // bl ov01_021E8970
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x75
    // bl Field3dObjectList_GetRenderObjectByID
    // add r3, r0, #0
    // ldr r0, [r4, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0x75
    // add r2, r1, #0
    // bl ov01_021E8970
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02254400: .word ov04_022575D4
    // TODO: decompile
}



void FlipAzaleaGymSwitch(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r6, r1, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #5
    // bl Save_Gymmick_AssertMagic_GetData
    // add r4, r0, #0
    // ldr r0, _02254560 ; =SEQ_SE_DP_KI_GASYAN
    // bl PlaySE
    // cmp r6, #0
    // bne _022544B6
    // ldr r2, [r4, #4]
    // mov r1, #1
    // add r0, r2, #0
    // and r0, r1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r2, #0
    // eor r0, r1
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x74
    // bl Field3dObjectList_GetRenderObjectByID
    // add r7, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x75
    // bl Field3dObjectList_GetRenderObjectByID
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x54]
    // add r1, r7, #0
    // mov r2, #0x74
    // add r3, r6, #0
    // bl ov01_021E8A8C
    // ldr r0, [r5, #0x54]
    // ldr r1, [sp, #4]
    // mov r2, #0x75
    // add r3, r6, #0
    // bl ov01_021E8A8C
    // ldr r0, [r4, #4]
    // mov r2, #1
    // and r0, r2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // ldr r0, [r5, #0x54]
    // beq _02254498
    // str r0, [sp]
    // mov r0, #0x74
    // add r1, r2, #0
    // add r3, r7, #0
    // bl ov01_021E8970
    // ldr r0, [r5, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // ldr r3, [sp, #4]
    // mov r0, #0x75
    // add r2, r1, #0
    // bl ov01_021E8970
    // b _02254550
    // str r0, [sp]
    // mov r0, #0x74
    // mov r1, #0
    // add r3, r7, #0
    // bl ov01_021E8970
    // ldr r0, [r5, #0x54]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // mov r0, #0x75
    // mov r1, #0
    // mov r2, #1
    // bl ov01_021E8970
    // b _02254550
    // cmp r6, #1
    // bne _0225454C
    // ldr r1, [r4, #4]
    // mov r0, #1
    // asr r2, r1, #1
    // and r0, r2
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // mov r0, #2
    // eor r0, r1
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x73
    // bl Field3dObjectList_GetRenderObjectByID
    // add r7, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x7a
    // bl Field3dObjectList_GetRenderObjectByID
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x54]
    // add r1, r7, #0
    // mov r2, #0x73
    // add r3, r6, #0
    // bl ov01_021E8A8C
    // ldr r0, [r5, #0x54]
    // ldr r1, [sp, #8]
    // mov r2, #0x7a
    // add r3, r6, #0
    // bl ov01_021E8A8C
    // ldr r0, [r4, #4]
    // mov r2, #1
    // asr r0, r0, #1
    // and r0, r2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // ldr r0, [r5, #0x54]
    // beq _0225452E
    // str r0, [sp]
    // mov r0, #0x73
    // add r1, r2, #0
    // add r3, r7, #0
    // bl ov01_021E8970
    // ldr r0, [r5, #0x54]
    // mov r1, #1
    // str r0, [sp]
    // ldr r3, [sp, #8]
    // mov r0, #0x7a
    // add r2, r1, #0
    // bl ov01_021E8970
    // b _02254550
    // str r0, [sp]
    // mov r0, #0x73
    // mov r1, #0
    // add r3, r7, #0
    // bl ov01_021E8970
    // ldr r0, [r5, #0x54]
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // mov r0, #0x7a
    // mov r1, #0
    // mov r2, #1
    // bl ov01_021E8970
    // b _02254550
    // bl GF_AssertFail
    // ldr r0, [r5, #0x10]
    // ldr r1, _02254564 ; =ov04_02254CA4
    // mov r2, #0
    // bl TaskManager_Call
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02254560: .word SEQ_SE_DP_KI_GASYAN
    // _02254564: .word ov04_02254CA4
    // TODO: decompile
}



void BeginAzaleaGymSpinarakRide(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, [r6, #4]
    // add r5, r1, #0
    // ldr r4, [r0, #0x24]
    // mov r0, #0xb
    // mov r1, #8
    // bl Heap_AllocAtEnd
    // add r7, r0, #0
    // mov r1, #0
    // str r1, [r7]
    // str r6, [r7, #4]
    // strb r5, [r4, #0x18]
    // str r1, [r4, #0x30]
    // strb r1, [r4, #0x14]
    // mov r0, #1
    // strb r0, [r4, #0x16]
    // add r0, r6, #0
    // str r1, [r4, #0x1c]
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #5
    // bl Save_Gymmick_AssertMagic_GetData
    // add r2, r0, #0
    // ldr r0, [r2, #4]
    // mov r1, #0
    // strb r0, [r4, #0x15]
    // ldrb r0, [r2, r1]
    // cmp r5, r0
    // bne _022545B0
    // strb r1, [r4, #0x17]
    // b _022545B6
    // add r1, r1, #1
    // cmp r1, #4
    // blt _022545A6
    // cmp r1, #4
    // bne _022545C0
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0xb
    // bhi _02254600
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022545D0: ; jump table
    // mov r1, #1
    // ldr r0, _02254634 ; =ov04_022575A4
    // lsl r2, r5, #2
    // strb r1, [r4, #0x19]
    // ldr r0, [r0, r2]
    // ldrb r2, [r4, #0x15]
    // lsl r2, r2, #3
    // ldrh r0, [r0, r2]
    // sub r0, r0, #1
    // strb r0, [r4, #0x1a]
    // strb r1, [r4, #0x1b]
    // b _02254608
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // strb r0, [r4, #0x1a]
    // strb r0, [r4, #0x1b]
    // ldr r0, _02254634 ; =ov04_022575A4
    // lsl r1, r5, #2
    // ldr r1, [r0, r1]
    // ldrb r0, [r4, #0x15]
    // lsl r0, r0, #3
    // add r0, r1, r0
    // ldr r2, [r0, #4]
    // ldrb r0, [r4, #0x1a]
    // lsl r1, r0, #2
    // add r0, r2, r1
    // ldrh r1, [r2, r1]
    // add r2, r7, #0
    // lsl r1, r1, #0x10
    // str r1, [r4, #0x2c]
    // ldrh r0, [r0, #2]
    // ldr r1, _02254638 ; =ov04_0225463C
    // lsl r0, r0, #0x10
    // str r0, [r4, #0x34]
    // ldr r0, [r6, #0x10]
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // _02254634: .word ov04_022575A4
    // _02254638: .word ov04_0225463C
    // TODO: decompile
}



void ov04_0225463C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _0225465E
    // cmp r1, #1
    // beq _02254670
    // cmp r1, #0xa
    // beq _02254682
    // b _0225468A
    // ldr r0, [r5, #0x10]
    // ldr r1, _02254690 ; =ov01_02205A60
    // mov r2, #0
    // bl TaskManager_Call
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225468A
    // ldr r0, _02254694 ; =ov04_02254724
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225468A
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02254690: .word ov01_02205A60
    // _02254694: .word ov04_02254724
    // TODO: decompile
}



void ov04_02254698(void) {
    // ldrh r4, [r2]
    // ldrh r0, [r1]
    // sub r0, r4, r0
    // str r0, [sp]
    // sub r0, r2, r0
    // str r0, [sp, #8]
    // add r2, sp, #0
    // str r0, [sp, #4]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}



void ov04_022546C8(void) {
    // str r2, [r1]
    *((u32*)(r1 + 4)) = 1;
    *((u32*)(r1 + 4)) = 0;
}



void ov04_022546E8(void) {
    // add r1, r1, r2
}



void ov04_02254710(void) {
}



void ov04_02254724(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x98
    // add r6, r1, #0
    // ldr r5, [r6, #4]
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #4]
    // ldr r4, [r0, #0x24]
    // ldr r0, [r6]
    // cmp r0, #9
    // bhi _02254828
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02254744: ; jump table
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // ldr r0, [r5, #0x40]
    // beq _0225479C
    // bl PlayerAvatar_GetMapObject
    // add r7, r0, #0
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // str r0, [sp, #0x28]
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // beq _0225478A
    // add r0, r7, #0
    // mov r1, #0xd
    // bl MapObject_SetHeldMovement
    // ldr r0, [sp, #0x28]
    // mov r1, #0xd
    // bl MapObject_SetHeldMovement
    // b _022547B4
    // add r0, r7, #0
    // mov r1, #0xc
    // bl MapObject_SetHeldMovement
    // ldr r0, [sp, #0x28]
    // mov r1, #0xc
    // bl MapObject_SetHeldMovement
    // b _022547B4
    // bl PlayerAvatar_GetMapObject
    // ldrb r1, [r4, #0x19]
    // cmp r1, #0
    // beq _022547AE
    // mov r1, #0xd
    // bl MapObject_SetHeldMovement
    // b _022547B4
    // mov r1, #0xc
    // bl MapObject_SetHeldMovement
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r7, r0, #0
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _022547FE
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // add r5, r0, #0
    // add r0, r7, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _02254828
    // add r0, r5, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _02254828
    // add r0, r7, #0
    // mov r1, #0x49
    // bl MapObject_SetHeldMovement
    // mov r0, #0
    // str r0, [r4, #0x50]
    // ldr r0, [r6]
    // add sp, #0x98
    // add r0, r0, #1
    // str r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _02254828
    // add r0, r7, #0
    // mov r1, #0x49
    // bl MapObject_SetHeldMovement
    // mov r0, #0
    // str r0, [r4, #0x50]
    // ldr r0, [r6]
    // add sp, #0x98
    // add r0, r0, #1
    // str r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r4, #0x50]
    // add r0, r1, #1
    // str r0, [r4, #0x50]
    // cmp r1, #4
    // bge _0225482A
    // b _02254C9E
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r1, [r4, #0x17]
    // ldr r0, [r0]
    // bl ov01_021F3B44
    // add r4, r0, #0
    // ldr r0, [r5, #0x34]
    // bl ov01_021FB9E0
    // add r7, r0, #0
    // add r0, r4, #0
    // bl ov01_021F3B38
    // str r0, [sp, #0x2c]
    // add r0, r4, #0
    // bl ov01_021F3B3C
    // ldr r1, [sp, #0x2c]
    // mov r2, #1
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r2, [sp, #0xc]
    // mov r0, #0xff
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x54]
    // ldr r1, [r5, #0x58]
    // mov r3, #0x76
    // bl ov01_021E8DE8
    // ldr r0, [r5, #0x58]
    // mov r1, #1
    // mov r2, #0
    // bl ov01_021E8E70
    // ldr r0, _02254B9C ; =SEQ_SE_GS_ITOMARU_ROBO
    // bl PlaySE
    // ldr r0, [r6]
    // add sp, #0x98
    // add r0, r0, #1
    // str r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #0x18]
    // str r0, [sp, #0x24]
    // ldrb r0, [r4, #0x16]
    // ldrb r7, [r4, #0x15]
    // cmp r0, #0
    // beq _02254962
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // beq _022548B0
    // ldr r0, [sp, #0x24]
    // lsl r1, r0, #2
    // ldr r0, _02254BA0 ; =ov04_022575A4
    // ldr r1, [r0, r1]
    // lsl r0, r7, #3
    // add r0, r1, r0
    // ldr r2, [r0, #4]
    // ldrb r0, [r4, #0x1a]
    // lsl r1, r0, #2
    // add r1, r2, r1
    // sub r0, r0, #1
    // b _022548C6
    // ldr r0, [sp, #0x24]
    // lsl r1, r0, #2
    // ldr r0, _02254BA0 ; =ov04_022575A4
    // ldr r1, [r0, r1]
    // lsl r0, r7, #3
    // add r0, r1, r0
    // ldr r2, [r0, #4]
    // ldrb r0, [r4, #0x1a]
    // lsl r1, r0, #2
    // add r1, r2, r1
    // add r0, r0, #1
    // lsl r0, r0, #2
    // add r0, r2, r0
    // str r0, [r4, #0x28]
    // ldr r2, [r4, #0x28]
    // add r0, sp, #0x38
    // bl ov04_02254698
    // add r3, sp, #0x38
    // add r2, r4, #0
    // add r2, #0x38
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x30]
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r4, #0
    // str r0, [r2]
    // ldr r0, [sp, #0x30]
    // add r1, #0x20
    // bl ov04_022546C8
    // add r0, r4, #0
    // add r0, #0x38
    // add r1, r0, #0
    // bl VEC_Normalize
    // ldr r2, _02254BA4 ; =ov04_02257350
    // add r3, sp, #0x8c
    // ldmia r2!, {r0, r1}
    // mov ip, r3
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // mov r1, ip
    // str r0, [r3]
    // add r0, r4, #0
    // add r0, #0x38
    // bl VEC_DotProduct
    // str r0, [sp, #0x34]
    // add r1, r4, #0
    // add r1, #0x38
    // add r2, sp, #0x80
    // mov r0, #0
    // str r0, [r2]
    // str r0, [r2, #4]
    // str r0, [r2, #8]
    // mov r0, #2
    // lsl r0, r0, #0xc
    // add r3, r1, #0
    // bl VEC_MultAdd
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // bne _0225494A
    // ldr r1, [sp, #0x34]
    // cmp r1, #0
    // beq _0225494A
    // mov r2, #1
    // lsl r2, r2, #0xc
    // cmp r1, r2
    // beq _0225494A
    // mov r0, #1
    // str r0, [r4, #0x1c]
    // ldr r0, [r5, #0x2c]
    // bl ov01_021F6304
    // b _0225495E
    // cmp r0, #1
    // bne _0225495E
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetPositionVector
    // ldr r1, [r5, #0x2c]
    // bl ov01_021F62E8
    // mov r0, #0
    // strb r0, [r4, #0x16]
    // ldr r3, [r4, #0x28]
    // ldr r0, [r4, #0x20]
    // ldrh r3, [r3]
    // ldr r1, [r4, #0x2c]
    // ldr r2, [r4, #0x38]
    // bl ov04_022546E8
    // ldr r3, [r4, #0x28]
    // str r0, [sp, #0x20]
    // ldrh r3, [r3, #2]
    // ldr r0, [r4, #0x24]
    // ldr r1, [r4, #0x34]
    // ldr r2, [r4, #0x40]
    // bl ov04_022546E8
    // ldr r1, [sp, #0x20]
    // cmp r1, #2
    // bne _0225498A
    // mov r1, #0
    // str r1, [r4, #0x38]
    // cmp r0, #2
    // bne _02254992
    // mov r1, #0
    // str r1, [r4, #0x40]
    // ldr r1, [sp, #0x20]
    // cmp r1, #0
    // beq _02254A14
    // cmp r0, #0
    // beq _02254A14
    // ldr r0, [r4, #0x28]
    // lsl r7, r7, #3
    // ldrh r0, [r0]
    // lsl r0, r0, #0x10
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #0x28]
    // ldrh r0, [r0, #2]
    // lsl r0, r0, #0x10
    // str r0, [r4, #0x34]
    // ldrb r0, [r4, #0x14]
    // add r0, r0, #1
    // strb r0, [r4, #0x14]
    // ldr r0, [sp, #0x24]
    // lsl r1, r0, #2
    // ldr r0, _02254BA0 ; =ov04_022575A4
    // ldr r0, [r0, r1]
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // ldrb r0, [r4, #0x14]
    // ldrh r1, [r1, r7]
    // sub r1, r1, #1
    // cmp r0, r1
    // blt _022549FE
    // add r0, r5, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #5
    // bl Save_Gymmick_AssertMagic_GetData
    // ldr r1, [sp, #0x1c]
    // add r1, r1, r7
    // ldrh r2, [r1, #2]
    // ldrb r1, [r4, #0x17]
    // strb r2, [r0, r1]
    // ldr r0, [r5, #0x54]
    // ldr r1, [r5, #0x58]
    // mov r2, #1
    // bl ov01_021E8ED0
    // ldr r0, _02254B9C ; =SEQ_SE_GS_ITOMARU_ROBO
    // mov r1, #1
    // bl StopSE
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _02254A22
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // ldrb r0, [r4, #0x1a]
    // beq _02254A0A
    // sub r0, r0, #1
    // b _02254A0C
    // add r0, r0, #1
    // strb r0, [r4, #0x1a]
    // mov r0, #1
    // strb r0, [r4, #0x16]
    // b _02254A22
    // add r0, r4, #0
    // add r0, #0x2c
    // add r1, r4, #0
    // add r1, #0x38
    // add r2, r0, #0
    // bl VEC_Add
    // ldrb r1, [r4, #0x17]
    // add r0, r5, #0
    // add r0, #0x9c
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldr r1, [r1, #4]
    // ldr r0, [r0]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_021F3B44
    // add r3, r4, #0
    // add r2, sp, #0x74
    // add r3, #0x2c
    // add r6, r0, #0
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #2
    // ldr r1, [sp, #0x74]
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x74]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov01_021F3B1C
    // ldr r3, _02254BA8 ; =ov04_02257344
    // add r2, sp, #0x5c
    // add r6, r4, #0
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r6, #0x2c
    // str r0, [r2]
    // add r3, sp, #0x68
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // add r1, r7, #0
    // str r0, [r3]
    // add r0, r2, #0
    // bl VEC_Add
    // mov r0, #0x1b
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #0x70]
    // lsl r0, r0, #0x10
    // add r0, r1, r0
    // str r0, [sp, #0x70]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r1, sp, #0x68
    // bl MapObject_SetPositionVector
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // bne _02254AA6
    // b _02254C9E
    // mov r0, #0x1b
    // ldrsb r1, [r4, r0]
    // mov r0, #1
    // add r3, sp, #0x50
    // sub r0, r0, r1
    // lsl r0, r0, #0x18
    // add r4, #0x2c
    // asr r6, r0, #0x18
    // ldmia r4!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // add r1, r7, #0
    // str r0, [r3]
    // add r0, r2, #0
    // bl VEC_Add
    // ldr r1, [sp, #0x58]
    // lsl r0, r6, #0x10
    // add r0, r1, r0
    // str r0, [sp, #0x58]
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // add r1, sp, #0x50
    // bl MapObject_SetPositionVector
    // add sp, #0x98
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // ldr r1, [r4, #0x28]
    // add r7, r0, #0
    // ldrh r1, [r1]
    // bl MapObject_SetCurrentX
    // add r0, r7, #0
    // mov r1, #0
    // bl MapObject_SetCurrentY
    // ldr r1, [r4, #0x28]
    // mov r2, #0x1b
    // ldrh r1, [r1, #2]
    // ldrsb r2, [r4, r2]
    // add r0, r7, #0
    // add r1, r1, r2
    // bl MapObject_SetCurrentZ
    // add r0, r7, #0
    // bl sub_02060F78
    // add r0, r7, #0
    // mov r1, #0x4a
    // bl MapObject_SetHeldMovement
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _02254B52
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // ldr r1, [r4, #0x28]
    // add r7, r0, #0
    // ldrh r1, [r1]
    // bl MapObject_SetCurrentX
    // add r0, r7, #0
    // mov r1, #0
    // bl MapObject_SetCurrentY
    // ldr r1, [r4, #0x28]
    // add r0, r7, #0
    // ldrh r3, [r1, #2]
    // mov r1, #0x1b
    // ldrsb r2, [r4, r1]
    // mov r1, #1
    // sub r1, r1, r2
    // add r1, r3, r1
    // bl MapObject_SetCurrentZ
    // add r0, r7, #0
    // bl sub_02060F78
    // mov r0, #0
    // str r0, [r4, #0x44]
    // str r0, [r4, #0x48]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // cmp r0, #1
    // bne _02254B68
    // mov r0, #1
    // lsl r0, r0, #0xc
    // b _02254B6A
    // ldr r0, _02254BAC ; =0xFFFFF000
    // str r0, [r4, #0x4c]
    // ldr r0, [r6]
    // add sp, #0x98
    // add r0, r0, #1
    // str r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0x44
    // mov r1, #0
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // ldr r2, [r4, #0x4c]
    // str r2, [sp, #0x4c]
    // ldr r3, [r4, #0x48]
    // add r2, r3, #1
    // str r2, [r4, #0x48]
    // cmp r3, #0
    // bne _02254BB0
    // ldr r1, [r5, #0x24]
    // bl Camera_OffsetLookAtPosAndTarget
    // ldr r0, [r4, #0x44]
    // add r0, r0, #1
    // str r0, [r4, #0x44]
    // b _02254BC0
    // _02254B9C: .word SEQ_SE_GS_ITOMARU_ROBO
    // _02254BA0: .word ov04_022575A4
    // _02254BA4: .word ov04_02257350
    // _02254BA8: .word ov04_02257344
    // _02254BAC: .word 0xFFFFF000
    // ldr r0, [r4, #0x48]
    // cmp r0, #1
    // ble _02254BC0
    // str r1, [r4, #0x48]
    // ldr r2, [r4, #0x4c]
    // sub r0, r1, #1
    // mul r0, r2
    // str r0, [r4, #0x4c]
    // ldr r0, [r4, #0x44]
    // cmp r0, #4
    // blt _02254C9E
    // mov r0, #0
    // str r0, [r4, #0x50]
    // ldr r0, [r6]
    // add sp, #0x98
    // add r0, r0, #1
    // str r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r4, #0x50]
    // add r0, r1, #1
    // str r0, [r4, #0x50]
    // cmp r1, #8
    // blt _02254C9E
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r7, r0, #0
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _02254C22
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // add r5, r0, #0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // beq _02254C10
    // add r0, r7, #0
    // mov r1, #0xd
    // bl MapObject_SetHeldMovement
    // add r0, r5, #0
    // mov r1, #0xd
    // bl MapObject_SetHeldMovement
    // b _02254C3A
    // add r0, r7, #0
    // mov r1, #0xc
    // bl MapObject_SetHeldMovement
    // add r0, r5, #0
    // mov r1, #0xc
    // bl MapObject_SetHeldMovement
    // b _02254C3A
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // beq _02254C32
    // add r0, r7, #0
    // mov r1, #0xd
    // bl MapObject_SetHeldMovement
    // b _02254C3A
    // add r0, r7, #0
    // mov r1, #0xc
    // bl MapObject_SetHeldMovement
    // ldr r0, [r6]
    // add sp, #0x98
    // add r0, r0, #1
    // str r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r7, r0, #0
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _02254C88
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // add r4, r0, #0
    // add r0, r7, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _02254C9E
    // add r0, r4, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _02254C9E
    // add r0, r4, #0
    // bl MapObject_ClearHeldMovement
    // ldr r0, [sp, #0x18]
    // bl SysTask_Destroy
    // ldr r0, [r6]
    // add sp, #0x98
    // add r0, r0, #1
    // str r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _02254C9E
    // ldr r0, [sp, #0x18]
    // bl SysTask_Destroy
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // add sp, #0x98
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov04_02254CA4(void) {
}



void ov04_02254CBC(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(1);
    Heap_Alloc(4, 0x1c);
    *((u32*)(*((u32*)(r5 + 4)) + 0x24)) = r0;
    MI_CpuFill8(*((u32*)(*((u32*)(r5 + 4)) + 0x24)), 0, 0x1c);
    // add r0, #0x1c
    // str r1, [r5, r0]
    // str r0, [sp]
    // str r3, [sp, #4]
    ov01_021EA864(*((u32*)(r5 + 0x4c)), (0 - 1), 1, 0);
    // mvn r1, r1
    ov01_021EA89C(*((u32*)(r5 + 0x4c)), 0, 0, 0x1f);
    // add r2, sp, #0x14
    // strb r0, [r2]
    // add r1, sp, #0x14
    ov01_021EA8C4(*((u32*)(r5 + 0x4c)), (0 + 1), (r2 + 1));
    ov04_02254F44(r5);
    MapObjectManager_GetFirstActiveObjectByID(*((u32*)(r5 + 0x3c)), (0 + 2));
    // add r1, sp, #8
    MapObject_CopyPositionVector();
    // str r0, [sp]
    // add r0, #0x9c
    // add r2, sp, #8
    ov01_021F3C0C(*((u32*)r5), 0x80, 0);
    // str r0, [r4]
    // ldrb r0, [r7, r6]
    // add r0, #0x9c
    ov01_021F3B44(*((u32*)r5), ((*((u32*)r4) << 0x18) >> 0x18));
    ov01_021F3B2C(1);
}



void ov04_02254D84(void) {
}



void ov04_02254D98(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r1, [r6, #4]
    // ldr r5, [r1, #0x24]
    // mov r1, #0x1e
    // bl FieldSysGetAttrAddr
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl ov04_MortyGymTrainerObjectToCandleIdx
    // cmp r0, #4
    // bne _02254DB8
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // str r0, [r5, #0x10]
    // ldr r0, [r4]
    // add r1, r6, #0
    // str r0, [r5, #0x18]
    // ldr r0, _02254DCC ; =ov04_02254E20
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #0x14]
    // pop {r4, r5, r6, pc}
    // _02254DCC: .word ov04_02254E20
    // TODO: decompile
}



void ov04_02254DD0(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _02254DDC ; =sub_0200E390
    // ldr r0, [r0, #0x24]
    // ldr r0, [r0, #0x14]
    // bx r3
    // nop
    // _02254DDC: .word SysTask_Destroy
    // TODO: decompile
}



void ov04_02254DE0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r2, [r5, #4]
    // ldr r4, [r2, #0x24]
    // bl FieldSysGetAttrAddr
    // add r6, r0, #0
    // ldr r0, [r6]
    // bl ov04_MortyGymTrainerObjectToCandleIdx
    // str r0, [r4, #0x10]
    // ldr r0, [r6]
    // mov r1, #0x10
    // str r0, [r4, #0x18]
    // mov r0, #0xb
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // mov r1, #0
    // str r1, [r2]
    // mov r0, #1
    // str r0, [r2, #4]
    // str r1, [r2, #8]
    // str r5, [r2, #0xc]
    // ldr r0, [r5, #0x10]
    // ldr r1, _02254E1C ; =ov04_02254E50
    // bl TaskManager_Call
    // pop {r4, r5, r6, pc}
    // nop
    // _02254E1C: .word ov04_02254E50
    // TODO: decompile
}



void ov04_02254E20(void) {
    // add r1, sp, #0
    MapObject_CopyPositionVector(*((u32*)(*((u32*)(*((u32*)(r1 + 4)) + 0x24)) + 0x18)));
    // add r5, #0x9c
    // ldr r1, [r4, r1]
    ov01_021F3B44(*((u32*)r5), (((*((u32*)(r4 + 0x10)) << 2) << 0x18) >> 0x18));
    // add r1, sp, #0
    ov01_021F3B1C();
}



void ov04_02254E50(void) {
    // push {r4, r5, r6, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // ldr r0, [r1, #4]
    // ldr r5, [r0, #0x24]
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02254E6E
    // cmp r0, #1
    // beq _02254E86
    // cmp r0, #2
    // beq _02254EFE
    // b _02254F18
    // ldr r1, [r4, #8]
    // add r0, r1, #1
    // str r0, [r4, #8]
    // cmp r1, #0x1e
    // blt _02254F18
    // ldr r0, _02254F1C ; =SEQ_SE_GS_ROUSOKU_KIERU
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02254F18
    // add r1, #0x9c
    // ldr r0, [r1]
    // ldr r1, [r5, #0x10]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_021F3B44
    // ldr r1, [r4, #4]
    // add r6, r0, #0
    // cmp r1, #4
    // blt _02254ECC
    // mov r1, #1
    // bl ov01_021F3B2C
    // ldr r0, [r4, #0xc]
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #1
    // bl Save_Gymmick_AssertMagic_GetData
    // ldr r1, [r5, #0x10]
    // mov r2, #1
    // strb r2, [r0, r1]
    // ldr r0, [r5, #0x18]
    // mov r1, #0xfa
    // bl ov01_021FA930
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02254ED0
    // add r0, r1, #1
    // str r0, [r4, #4]
    // add r0, r6, #0
    // bl ov01_021F3B04
    // add r5, r0, #0
    // mov r0, #1
    // ldr r1, [r4, #4]
    // lsl r0, r0, #0xc
    // bl _s32_div_f
    // str r0, [r5]
    // mov r0, #1
    // ldr r1, [r4, #4]
    // lsl r0, r0, #0xc
    // bl _s32_div_f
    // str r0, [r5, #4]
    // mov r0, #1
    // ldr r1, [r4, #4]
    // lsl r0, r0, #0xc
    // bl _s32_div_f
    // str r0, [r5, #8]
    // b _02254F18
    // ldr r0, [r5, #0x18]
    // bl ov01_021FA2D4
    // cmp r0, #0
    // bne _02254F18
    // ldr r0, [r4, #0xc]
    // bl ov04_02254F44
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _02254F1C: .word SEQ_SE_GS_ROUSOKU_KIERU
    // TODO: decompile
}



void ov04_MortyGymTrainerObjectToCandleIdx(void) {
    // push {r3, lr}
    // bl MapObject_GetID
    // ldr r2, _02254F40 ; =sMortyGymTrainerObjectIds
    // mov r3, #0
    // lsl r1, r3, #2
    // ldr r1, [r2, r1]
    // cmp r0, r1
    // beq _02254F3C
    // add r1, r3, #1
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // cmp r3, #4
    // blo _02254F2A
    // add r0, r3, #0
    // pop {r3, pc}
    // _02254F40: .word sMortyGymTrainerObjectIds
    // TODO: decompile
}



void ov04_02254F44(void) {
    MapObjectManager_GetObjectCount(*((u32*)(r0 + 0x3c)));
    MapObjectManager_GetObjects(*((u32*)(r4 + 0x3c)));
    // str r0, [sp]
    // add r7, sp, #0
    // ldr r0, [sp]
    MapObject_CheckActive();
    // ldr r0, [sp]
    ov01_021F72DC();
    sub_02023F90();
    NNS_G3dMdlSetMdlFogEnableFlagAll(r6);
    MapObjectArray_NextObject2(r7);
}



void ov04_02254F8C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // ldr r3, _02255070 ; =ov04_0225762C
    // str r0, [sp, #4]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x38
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [sp, #4]
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #6
    // bl Save_Gymmick_AssertMagic_GetData
    // str r0, [sp, #0x10]
    // ldr r1, _02255074 ; =0x00000754
    // mov r0, #4
    // bl Heap_Alloc
    // ldr r1, [sp, #4]
    // ldr r2, _02255074 ; =0x00000754
    // ldr r1, [r1, #4]
    // str r0, [r1, #0x24]
    // ldr r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [r0, #4]
    // ldr r0, [r0, #0x24]
    // bl MI_CpuFill8
    // ldr r0, [sp, #4]
    // ldr r2, _02255078 ; =ov04_02257620
    // ldr r0, [r0, #4]
    // add r3, sp, #0x14
    // ldr r6, [r0, #0x24]
    // ldr r0, [sp, #4]
    // ldr r4, [sp, #0x10]
    // str r0, [r6]
    // add r0, sp, #0x38
    // str r0, [sp, #0xc]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // mov r5, #0
    // add r7, r6, #4
    // str r0, [r3]
    // add r3, sp, #0x14
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x2c
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #0
    // str r0, [r2]
    // add r0, sp, #0x20
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // ldr r0, [sp, #0x10]
    // mov r2, ip
    // add r0, r0, r5
    // str r0, [sp, #8]
    // ldrb r0, [r0, #0xc]
    // add r3, sp, #0x20
    // lsl r0, r0, #0xe
    // neg r0, r0
    // str r0, [sp, #0x24]
    // ldrh r0, [r4]
    // lsl r1, r0, #0x10
    // mov r0, #2
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x2c]
    // ldrh r0, [r4, #6]
    // lsl r1, r0, #0x10
    // mov r0, #2
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r0, #0x54]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl ov01_021F3C0C
    // strb r0, [r6, #0xb]
    // str r7, [sp]
    // ldr r1, [sp, #8]
    // lsl r0, r5, #0x18
    // ldrb r1, [r1, #0xc]
    // ldrh r2, [r4]
    // ldrh r3, [r4, #6]
    // lsr r0, r0, #0x18
    // bl ov04_02255140
    // ldr r0, [sp, #0xc]
    // add r5, r5, #1
    // add r0, r0, #4
    // str r0, [sp, #0xc]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r4, r4, #2
    // add r6, r6, r0
    // add r7, r7, r0
    // cmp r5, #3
    // blt _02254FEC
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // _02255070: .word ov04_0225762C
    // _02255074: .word 0x00000754
    // _02255078: .word ov04_02257620
    // TODO: decompile
}



void ov04_0225507C(void) {
}



void ov04_02255090(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_GetType();
    PlayerAvatar_GetXCoord(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    ov04_02255708(r4, ((r6 << 0x10) >> 0x10), ((r0 << 0x10) >> 0x10));
}



BOOL ov04_022550D4(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // mov ip, r0
    // ldr r0, [sp]
    // ldr r5, [r1, r4]
    // ldr r5, [r1, r6]
    // ldr r0, [sp, #0x18]
    // str r1, [r0]
    // add r1, #8
    // add r7, r7, r0
    // mov r0, ip
    // mov ip, r0
    // ldr r0, [sp]
    GetMetatileBehavior(((0x27 << 4) + 1), r1, r1);
    sub_0205BAC4();
    // ldr r1, [sp, #0x18]
    // str r0, [r1]
}



void ov04_02255140(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #4]
    // str r1, [sp, #0x38]
    *((u32*)(r1 + 8)) = r2;
    // ldr r2, [sp, #8]
    *((u32*)(r1 + 0xc)) = r2;
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #0x38]
    *((u32*)(r1 + 0x10)) = (r1 + 1);
    // ldr r2, [sp, #8]
    *((u32*)(r1 + 0x14)) = (r1 + 1);
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #0x38]
    *((u32*)(r1 + 0x18)) = (r1 - 1);
    // ldr r2, [sp, #8]
    *((u32*)(r1 + 0x1c)) = (r1 + 1);
    // ldr r2, [sp, #4]
    *((u32*)(r1 + 0x20)) = (r1 + 1);
    // ldr r2, [sp, #8]
    *((u32*)(r1 + 0x24)) = (r1 + 1);
    // str r0, [r1]
    *((u8*)(r1 + 4)) = 5;
    *((u8*)(r1 + 5)) = 7;
    // ldr r1, [sp, #4]
    // ldr r4, [sp, #0x38]
    // str r1, [sp, #0x1c]
    // ldr r1, [sp, #8]
    // str r1, [sp, #0x20]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #8]
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // add r1, r2, r0
    *((u32*)(r4 + 0x28)) = (r1 + 3);
    *((u32*)(r4 + 0x2c)) = r1;
    // add r4, #8
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // add r0, r1, r4
    *((u32*)((r1 + 3) + 0x68)) = ((0 + 1) - 3);
    *((u32*)((r1 + 3) + 0x6c)) = (0 + 1);
    // add r3, #8
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xa8
    // str r1, [r4]
    // add r4, #0xac
    // str r0, [r4]
    // add r4, #0xa8
    // add r5, r4, r3
    // add r4, #0xa8
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xd0
    // str r1, [r4]
    // add r4, #0xd4
    // str r0, [r4]
    // add r4, #0xd0
    // add r5, r4, r3
    // add r4, #0xd0
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r6, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r4, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // sub r2, r0, r6
    // ldr r0, [sp, #0x10]
    // str r2, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    // add r5, r0, r1
    // add r0, #0xf8
    // str r2, [r0]
    // add r0, #0xfc
    // str r4, [r0]
    // add r0, #0xfc
    // sub r1, r0, r3
    // add r0, #0xfc
    // add r5, #8
    // str r1, [r0]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // ldr r3, [sp, #0x38]
    // str r2, [r3, r5]
    // str r1, [r3, r5]
    // ldr r5, [r3, r6]
    // add r5, r5, r4
    // str r5, [r3, r0]
    // ldr r5, [sp, #0x38]
    // add r3, #8
    // ldr r0, [sp, #0x38]
    // str r1, [r0]
    *((u8*)((0x6f << 2) + 4)) = 4;
    *((u8*)((0x6f << 2) + 5)) = 8;
    // ldr r0, [sp, #4]
    // ldr r4, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // add r0, r1, r3
    *((u32*)((0 + 1) + 0x28)) = ((0x6f << 2) + 2);
    *((u32*)((0 + 1) + 0x2c)) = (0x6f << 2);
    // add r4, #8
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // add r0, r1, r4
    *((u32*)((0 + 1) + 0x68)) = ((0x6f << 2) - 3);
    *((u32*)((0 + 1) + 0x6c)) = (0x6f << 2);
    // add r3, #8
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xa8
    // str r1, [r4]
    // add r4, #0xac
    // str r0, [r4]
    // add r4, #0xa8
    // add r5, r4, r3
    // add r4, #0xa8
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xd0
    // str r1, [r4]
    // add r4, #0xd4
    // str r0, [r4]
    // add r4, #0xd0
    // add r5, r4, r3
    // add r4, #0xd0
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r4, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // sub r2, r0, r6
    // ldr r0, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    // add r5, r0, r1
    // add r0, #0xf8
    // str r2, [r0]
    // add r0, #0xfc
    // str r4, [r0]
    // add r0, #0xfc
    // sub r1, r0, r3
    // add r0, #0xfc
    // add r5, #8
    // str r1, [r0]
    // ldr r0, [sp, #0x18]
    // add r0, #8
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // ldr r3, [sp, #0x38]
    // str r2, [r3, r5]
    // str r1, [r3, r5]
    // ldr r5, [r3, r6]
    // add r5, r5, r4
    // str r5, [r3, r0]
    // ldr r5, [sp, #0x38]
    // add r3, #8
    // ldr r0, [sp, #8]
    // str r7, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // mov ip, r1
    // ldr r3, [sp, #0x38]
    // add r5, r3, r5
    // add r3, r7, r0
    // str r3, [r5, r6]
    // str r2, [r5, r4]
    // add r5, #8
    // mov r0, ip
    // mov ip, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #0x38]
    // ldr r3, [sp, #0x38]
    *((u8*)(((0 + 1) + 1) + 6)) = (0 + 3);
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    ov04_022554FC(((0 + 1) + 1), (0 + 3), (((0x6f << 2) - 1) + 1), *((u8*)(*((u8*)(((0x6e << 2) + 4) + 4)) + 4)));
}



void ov04_02255480(void) {
    // ldr r5, [sp, #8]
    // sub r4, r4, r1
    // sub r3, r3, r2
    // neg r0, r3
    // str r0, [r5]
    *((u32*)(r5 + 4)) = *((u32*)r3);
    // neg r0, r4
    // str r0, [r5]
    // neg r0, r3
    *((u32*)(r5 + 4)) = r0;
    // str r3, [r5]
    // neg r0, r4
    *((u32*)(r5 + 4)) = r0;
    // add r0, r0, r1
    // str r0, [r5]
    // add r0, r0, r2
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 4));
}



void ov04_022554C4(void) {
    // add r3, r3, r0
    // str r3, [r2]
    // add r2, #8
}



void ov04_022554E0(void) {
    // add r3, r3, r0
    *((u32*)(r2 + 4)) = *((u32*)(r2 + 4));
    // add r2, #8
}



void ov04_022554FC(void) {
    // str r3, [sp, #4]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // ldr r3, [sp, #4]
    // add r3, #0x10
    // str r3, [sp]
    ov04_02255480(r0, r1, r2);
    // ldr r3, [sp, #4]
    // add r3, #0x18
    // str r3, [sp]
    ov04_02255480(r5, r4, r6);
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x24]
    // ldr r7, [sp, #4]
    // add r7, #0x28
    // str r7, [sp, #0x28]
    // ldr r3, [sp, #0x28]
    // str r7, [sp]
    ov04_02255480(r5, r4, r6);
    // ldr r0, [sp, #0x28]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x48]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #0x48]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r7, [sp, #4]
    // add r7, #0x68
    // str r7, [sp, #0x2c]
    // ldr r3, [sp, #0x2c]
    // str r7, [sp]
    ov04_02255480(r5, r4, r6);
    // ldr r0, [sp, #0x2c]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // ldr r7, [sp, #4]
    // add r7, #0xa8
    // str r7, [sp, #0x30]
    // ldr r3, [sp, #0x30]
    // str r7, [sp]
    ov04_02255480(r5, r4, r6);
    // ldr r0, [sp, #0x30]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // ldr r7, [sp, #4]
    // add r7, #0xd0
    // str r7, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    // str r7, [sp]
    ov04_02255480(r5, r4, r6);
    // ldr r0, [sp, #0x34]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // ldr r7, [sp, #4]
    // add r7, #0xf8
    // str r7, [sp, #0x38]
    // ldr r3, [sp, #0x38]
    // str r7, [sp]
    ov04_02255480(r5, r4, r6);
    // ldr r0, [sp, #0x38]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // add r7, r0, r1
    // str r7, [sp, #0x3c]
    // ldr r3, [sp, #0x3c]
    // str r7, [sp]
    ov04_02255480(r5, r4, r6);
    // ldr r0, [sp, #0x3c]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r7, r0, r1
    // str r7, [sp, #0x40]
    // ldr r3, [sp, #0x40]
    // str r7, [sp]
    ov04_02255480(r5, r4, r6);
    // ldr r0, [sp, #0x40]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
}



void ov04_022556AC(void) {
    // mul r5, r6
    // add r5, r0, r5
    // strb r4, [r3]
    // strb r4, [r3]
    // strb r4, [r3]
}



void ov04_02255708(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r3, sp, #0
    // add r5, r0, #0
    // bl ov04_022556AC
    // add r6, r0, #0
    // bne _0225571E
    // add sp, #4
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0xb
    // mov r1, #0x74
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // ldr r0, [r5]
    // add r2, r4, #0
    // str r0, [r4, #0x70]
    // mov r1, #0
    // add r2, #0x4c
    // str r1, [r4]
    // add r0, sp, #0
    // ldrb r3, [r0]
    // cmp r6, #1
    // strb r3, [r2]
    // str r6, [r4, #0x50]
    // beq _0225574A
    // cmp r6, #2
    // beq _02255762
    // cmp r6, #3
    // beq _022557AA
    // b _022557F2
    // mov r0, #8
    // str r0, [r4]
    // ldr r0, _022557F8 ; =SEQ_SE_GS_GONDORA_IDOU
    // bl PlaySE
    // ldr r0, [r5]
    // ldr r1, _022557FC ; =ov04_02255AC4
    // add r2, r4, #0
    // bl FieldSystem_CreateTask
    // mov r1, #1
    // b _022557F2
    // add r2, r4, #0
    // str r1, [r4]
    // add r2, #0x4d
    // strb r1, [r2]
    // ldrb r2, [r0]
    // mov r3, #0x27
    // lsl r3, r3, #4
    // add r6, r2, #0
    // mul r6, r3
    // add r2, r5, r6
    // ldrb r6, [r2, #8]
    // add r2, r4, #0
    // add r2, #0x4e
    // strb r6, [r2]
    // ldrb r0, [r0]
    // add r2, r0, #0
    // mul r2, r3
    // add r0, r5, r2
    // ldrb r0, [r0, #0xa]
    // bl ov04_022558B4
    // add r1, r4, #0
    // add r1, #0x58
    // str r0, [r4, #0x54]
    // bl ov04_022558D0
    // ldr r0, _022557F8 ; =SEQ_SE_GS_GONDORA_IDOU
    // bl PlaySE
    // ldr r0, [r5]
    // ldr r1, _02255800 ; =ov04_022559C8
    // add r2, r4, #0
    // bl FieldSystem_CreateTask
    // mov r1, #1
    // b _022557F2
    // add r2, r4, #0
    // str r1, [r4]
    // add r2, #0x4d
    // strb r1, [r2]
    // ldrb r1, [r0]
    // mov r2, #0x27
    // lsl r2, r2, #4
    // add r3, r1, #0
    // mul r3, r2
    // add r1, r5, r3
    // ldrb r3, [r1, #8]
    // add r1, r4, #0
    // add r1, #0x4e
    // strb r3, [r1]
    // ldrb r0, [r0]
    // add r1, r0, #0
    // mul r1, r2
    // add r0, r5, r1
    // ldrb r0, [r0, #0xa]
    // mov r1, #1
    // bl ov04_022558B4
    // add r1, r4, #0
    // add r1, #0x58
    // str r0, [r4, #0x54]
    // bl ov04_022558D0
    // ldr r0, _022557F8 ; =SEQ_SE_GS_GONDORA_IDOU
    // bl PlaySE
    // ldr r0, [r5]
    // ldr r1, _02255800 ; =ov04_022559C8
    // add r2, r4, #0
    // bl FieldSystem_CreateTask
    // mov r1, #1
    // add r0, r1, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _022557F8: .word SEQ_SE_GS_GONDORA_IDOU
    // _022557FC: .word ov04_02255AC4
    // _02255800: .word ov04_022559C8
    // TODO: decompile
}



void ov04_02255804(void) {
    *((u32*)(r1 + 4)) = *((u32*)(r0 + 0x28));
    *((u32*)(r1 + 8)) = *((u32*)(r0 + 0x2c));
    // add r5, #8
    // add r1, #8
    *((u32*)(r1 + 4)) = *((u32*)(r0 + 0x68));
    *((u32*)(r1 + 8)) = *((u32*)(r0 + 0x6c));
    // add r4, #8
    // add r1, #8
}



void ov04_02255858(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02255870: ; jump table
    ov04_022554C4(1, ((r0 << 0x18) >> 0x18), (r1 + 4), r0);
    ov04_022554E0(1, ((r3 << 0x18) >> 0x18), (r2 + 4));
    // mvn r0, r0
    ov04_022554C4(0, ((r3 << 0x18) >> 0x18), (r2 + 4));
    // mvn r0, r0
    ov04_022554E0(0, ((r3 << 0x18) >> 0x18), (r2 + 4));
}



void ov04_022558B4(void) {
    // add r0, r1, r0
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}



void ov04_022558D0(void) {
    // mov r2, #0
    // str r2, [r1]
    // str r2, [r1, #4]
    // str r2, [r1, #8]
    // cmp r0, #3
    // bhi _0225590A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022558E8: ; jump table
    // mov r0, #2
    // lsl r0, r0, #0xe
    // str r0, [r1]
    // bx lr
    // mov r0, #2
    // lsl r0, r0, #0xe
    // str r0, [r1, #8]
    // bx lr
    // ldr r0, _0225590C ; =0xFFFF8000
    // str r0, [r1]
    // bx lr
    // ldr r0, _0225590C ; =0xFFFF8000
    // str r0, [r1, #8]
    // bx lr
    // _0225590C: .word 0xFFFF8000
    // TODO: decompile
}



void ov04_02255910(void) {
    // str r0, [sp]
    sub_020548C0(r0, *((u32*)r2), *((u32*)(r2 + 4)));
    // str r0, [sp]
    GetMetatileBehavior(r5, *((u32*)r4), *((u32*)(r4 + 4)));
    sub_0205BAC4();
    // str r0, [sp]
    // add r4, #8
    // ldr r0, [sp]
}



void ov04_02255960(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    sub_020548C0(r0, *((u32*)r2), *((u32*)(r2 + 4)));
    GetMetatileBehavior(r6, *((u32*)r5), *((u32*)(r5 + 4)));
    sub_0205BAC4();
    // ldr r0, [sp]
    // ldrb r0, [r0, r4]
    // str r0, [sp, #4]
    // add r5, #8
    // ldr r0, [sp, #4]
}



void ov04_022559C8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r6, #4]
    // ldr r5, [r0, #0x24]
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _022559F0
    // cmp r0, #3
    // beq _02255A16
    // cmp r0, #7
    // beq _02255AA2
    // b _02255AB6
    // add r0, r4, #0
    // add r0, #0x4c
    // ldrb r1, [r0]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // mul r0, r1
    // add r2, r5, #4
    // add r0, r2, r0
    // add r1, r4, #0
    // bl ov04_02255804
    // ldr r0, _02255ABC ; =ov04_02255D88
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // mov r0, #1
    // str r0, [r4]
    // b _02255AB6
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r0, r6, #0
    // add r1, r5, r1
    // add r0, #0x9c
    // ldrb r1, [r1, #0xb]
    // ldr r0, [r0]
    // bl ov01_021F3B44
    // add r1, r0, #0
    // add r0, sp, #8
    // bl ov01_021F3B0C
    // ldr r1, [sp, #8]
    // asr r0, r1, #0xf
    // lsr r0, r0, #0x10
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #4]
    // asr r0, r1, #0xf
    // lsr r0, r0, #0x10
    // add r0, r1, r0
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // asr r7, r0, #0x10
    // add r0, r5, #4
    // mul r1, r2
    // add r5, r0, r1
    // add r0, r6, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #6
    // bl Save_Gymmick_AssertMagic_GetData
    // ldr r1, [sp, #4]
    // lsl r1, r1, #0x10
    // lsr r2, r1, #0x10
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r1, [r1]
    // lsl r1, r1, #1
    // strh r2, [r0, r1]
    // lsl r1, r7, #0x10
    // lsr r3, r1, #0x10
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r1, [r1]
    // lsl r1, r1, #1
    // add r0, r0, r1
    // strh r3, [r0, #6]
    // add r0, r4, #0
    // str r5, [sp]
    // add r0, #0x4c
    // ldrb r0, [r0]
    // ldrb r1, [r5, #6]
    // bl ov04_02255140
    // mov r0, #7
    // str r0, [r4]
    // b _02255AB6
    // ldr r0, _02255AC0 ; =SEQ_SE_GS_GONDORA_IDOU
    // mov r1, #0
    // bl StopSE
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02255ABC: .word ov04_02255D88
    // _02255AC0: .word SEQ_SE_GS_GONDORA_IDOU
    // TODO: decompile
}



void ov04_02255AC4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r5, #4]
    // ldr r6, [r0, #0x24]
    // ldr r0, [r4]
    // sub r0, #8
    // cmp r0, #4
    // bhi _02255BA4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02255AEE: ; jump table
    // add r0, r4, #0
    // add r0, #0x4c
    // ldrb r3, [r0]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // add r1, r3, #0
    // mul r1, r0
    // add r0, r4, #0
    // add r2, r6, #4
    // add r1, r2, r1
    // mov r3, #0
    // add r0, #0x4f
    // strb r3, [r0]
    // add r0, r5, #0
    // add r2, sp, #0
    // bl ov04_02255CBC
    // cmp r0, #2
    // bne _02255B24
    // mov r0, #9
    // str r0, [r4]
    // b _02255CB0
    // cmp r0, #1
    // bne _02255B5E
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r1, r6, r1
    // add r5, #0x9c
    // ldrb r1, [r1, #0xb]
    // ldr r0, [r5]
    // bl ov01_021F3B44
    // bl ov01_021F3B08
    // add r1, sp, #0
    // ldrh r1, [r1]
    // str r1, [r4, #0x68]
    // ldr r0, [r0, #4]
    // str r0, [r4, #0x6c]
    // mov r0, #0
    // str r0, [r4, #0x64]
    // mov r0, #0xa
    // str r0, [r4]
    // ldr r0, _02255CB4 ; =SEQ_SE_GS_GONDORA_KABEHIT
    // bl PlaySE
    // b _02255CB0
    // mov r0, #0xc
    // str r0, [r4]
    // b _02255CB0
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r0, r5, #0
    // add r1, r6, r1
    // add r0, #0x9c
    // ldrb r1, [r1, #0xb]
    // ldr r0, [r0]
    // bl ov01_021F3B44
    // bl ov01_021F3B08
    // mov r1, #1
    // ldr r2, [r0, #4]
    // lsl r1, r1, #0xa
    // sub r1, r2, r1
    // str r1, [r0, #4]
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // cmp r0, #0x10
    // bhs _02255BA6
    // b _02255CB0
    // add r0, r4, #0
    // add r0, #0x4c
    // ldrb r1, [r0]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // mul r0, r1
    // add r2, r6, #4
    // add r7, r2, r0
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r5, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #6
    // bl Save_Gymmick_AssertMagic_GetData
    // add r3, r0, #0
    // mov ip, r0
    // add r0, r4, #0
    // add r0, #0x4c
    // ldrb r2, [r0]
    // add r3, #0xc
    // ldrb r0, [r3, r2]
    // add r0, r0, #1
    // lsr r1, r0, #0x1f
    // lsl r6, r0, #0x1e
    // sub r6, r6, r1
    // mov r0, #0x1e
    // ror r6, r0
    // add r0, r1, r6
    // strb r0, [r3, r2]
    // add r0, r4, #0
    // add r0, #0x4c
    // ldrb r1, [r0]
    // mov r0, ip
    // add r0, r0, r1
    // ldrb r0, [r0, #0xc]
    // strb r0, [r7, #6]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r6, r0, #0
    // bl MapObject_GetXCoord
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetZCoord
    // add r2, r0, #0
    // lsl r1, r5, #0x10
    // lsl r2, r2, #0x10
    // mov r0, #1
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // add r3, r7, #0
    // bl ov04_022554FC
    // mov r0, #0xc
    // str r0, [r4]
    // b _02255CB0
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r1, r6, r1
    // add r5, #0x9c
    // ldrb r1, [r1, #0xb]
    // ldr r0, [r5]
    // bl ov01_021F3B44
    // bl ov01_021F3B08
    // mov r1, #1
    // ldr r2, [r0, #4]
    // lsl r1, r1, #0xa
    // sub r2, r2, r1
    // str r2, [r0, #4]
    // ldr r2, [r4, #0x64]
    // add r1, r2, r1
    // str r1, [r4, #0x64]
    // ldr r2, [r4, #0x68]
    // cmp r1, r2
    // blt _02255CB0
    // ldr r1, [r4, #0x6c]
    // sub r1, r1, r2
    // str r1, [r0, #4]
    // mov r0, #0xb
    // str r0, [r4]
    // b _02255CB0
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r1, r6, r1
    // add r5, #0x9c
    // ldrb r1, [r1, #0xb]
    // ldr r0, [r5]
    // bl ov01_021F3B44
    // bl ov01_021F3B08
    // mov r1, #1
    // ldr r2, [r0, #4]
    // lsl r1, r1, #0xa
    // add r2, r2, r1
    // str r2, [r0, #4]
    // ldr r2, [r4, #0x64]
    // sub r1, r2, r1
    // str r1, [r4, #0x64]
    // cmp r1, #0
    // bgt _02255CB0
    // ldr r1, [r4, #0x6c]
    // str r1, [r0, #4]
    // mov r0, #0xc
    // str r0, [r4]
    // b _02255CB0
    // ldr r0, _02255CB8 ; =SEQ_SE_GS_GONDORA_IDOU
    // mov r1, #0
    // bl StopSE
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02255CB4: .word SEQ_SE_GS_GONDORA_KABEHIT
    // _02255CB8: .word SEQ_SE_GS_GONDORA_IDOU
    // TODO: decompile
}



void ov04_02255CBC(void) {
    // add r2, #0xa8
    ov04_02255910(*((u8*)(r1 + 4)), r1);
    // add r2, #0xd0
    ov04_02255910(r5, *((u8*)(r4 + 4)), r4);
    // add r2, #0x68
    ov04_02255910(r5, *((u8*)(r4 + 5)), r4);
    // add r2, #0x28
    ov04_02255910(r5, r7, r4);
    ov04_02255D34(r5, r4);
    // strh r0, [r6]
}



void ov04_02255D34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // bne _02255D48
    // mov r1, #0xe
    // ldr r3, _02255D78 ; =ov04_02257638
    // ldr r4, _02255D7C ; =ov04_02257618
    // b _02255D4E
    // ldr r3, _02255D80 ; =ov04_02257648
    // ldr r4, _02255D84 ; =ov04_02257614
    // mov r1, #0x18
    // ldrb r0, [r5, #4]
    // add r2, r5, #0
    // add r2, #0xf8
    // str r0, [sp]
    // add r0, r7, #0
    // bl ov04_02255960
    // mov r2, #0x6e
    // lsl r2, r2, #2
    // add r6, r0, #0
    // ldr r1, [sp]
    // add r0, r7, #0
    // add r2, r5, r2
    // add r3, r4, #0
    // bl ov04_02255960
    // cmp r6, r0
    // bhi _02255D74
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02255D78: .word ov04_02257638
    // _02255D7C: .word ov04_02257618
    // _02255D80: .word ov04_02257648
    // _02255D84: .word ov04_02257614
    // TODO: decompile
}



void ov04_02255D88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r4, r1, #0
    // ldr r6, [r4, #0x70]
    // add r7, r0, #0
    // ldr r1, [r6, #4]
    // ldr r5, [r1, #0x24]
    // ldr r1, [r4]
    // cmp r1, #6
    // bhi _02255E5C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02255DA8: ; jump table
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r1, r5, r1
    // ldrb r1, [r1, #9]
    // add r0, r6, #0
    // add r2, r4, #4
    // bl ov04_02255910
    // cmp r0, #0xff
    // bne _02255DE2
    // mov r0, #2
    // add sp, #0x40
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #4
    // add sp, #0x40
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r0, r6, #0
    // add r1, r5, r1
    // add r0, #0x9c
    // ldrb r1, [r1, #0xb]
    // ldr r0, [r0]
    // bl ov01_021F3B44
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, sp, #0x34
    // bl ov01_021F3B0C
    // add r0, sp, #0x34
    // add r1, r4, #0
    // add r1, #0x58
    // add r2, r0, #0
    // bl VEC_Add
    // ldr r0, [sp]
    // add r1, sp, #0x34
    // bl ov01_021F3B1C
    // ldr r0, [r6, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r1, sp, #0x28
    // add r6, r0, #0
    // bl MapObject_CopyPositionVector
    // add r0, sp, #0x28
    // add r1, r4, #0
    // add r1, #0x58
    // add r2, r0, #0
    // bl VEC_Add
    // add r0, r6, #0
    // add r1, sp, #0x28
    // bl MapObject_SetPositionVector
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // cmp r0, #2
    // bhs _02255E5E
    // b _02255FB8
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4c
    // ldrb r1, [r0]
    // mov r0, #0x27
    // lsl r0, r0, #4
    // mul r0, r1
    // add r0, r5, r0
    // ldrb r0, [r0, #9]
    // add r1, r4, #0
    // bl ov04_02255858
    // add r0, r4, #0
    // add r0, #0x4d
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4d
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4d
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // cmp r1, r0
    // blo _02255ED6
    // add r0, r6, #0
    // add r1, sp, #0x1c
    // bl MapObject_CopyPositionVector
    // ldr r2, [sp, #0x1c]
    // add r0, r6, #0
    // asr r1, r2, #0xf
    // lsr r1, r1, #0x10
    // add r1, r2, r1
    // asr r1, r1, #0x10
    // bl MapObject_SetCurrentX
    // ldr r2, [sp, #0x24]
    // add r0, r6, #0
    // asr r1, r2, #0xf
    // lsr r1, r1, #0x10
    // add r1, r2, r1
    // asr r1, r1, #0x10
    // bl MapObject_SetCurrentZ
    // add r0, r6, #0
    // bl sub_02060F78
    // add r0, r7, #0
    // bl SysTask_Destroy
    // mov r0, #3
    // add sp, #0x40
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x40
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02255FBC ; =SEQ_SE_GS_GONDORA_KABEHIT
    // bl PlaySE
    // mov r0, #5
    // add sp, #0x40
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // add r1, #0x4d
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _02255F02
    // bl SysTask_Destroy
    // mov r0, #7
    // add sp, #0x40
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r4, #0x58]
    // mov r0, #0
    // mvn r0, r0
    // add r2, r1, #0
    // mul r2, r0
    // str r2, [r4, #0x58]
    // ldr r1, [r4, #0x60]
    // add sp, #0x40
    // mul r0, r1
    // str r0, [r4, #0x60]
    // mov r0, #6
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrb r2, [r1]
    // mov r1, #0x27
    // lsl r1, r1, #4
    // mul r1, r2
    // add r0, r6, #0
    // add r1, r5, r1
    // add r0, #0x9c
    // ldrb r1, [r1, #0xb]
    // ldr r0, [r0]
    // bl ov01_021F3B44
    // add r5, r0, #0
    // add r0, sp, #0x10
    // add r1, r5, #0
    // bl ov01_021F3B0C
    // add r0, sp, #0x10
    // add r1, r4, #0
    // add r1, #0x58
    // add r2, r0, #0
    // bl VEC_Add
    // add r0, r5, #0
    // add r1, sp, #0x10
    // bl ov01_021F3B1C
    // ldr r0, [r6, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r1, sp, #4
    // add r5, r0, #0
    // bl MapObject_CopyPositionVector
    // add r0, sp, #4
    // add r1, r4, #0
    // add r1, #0x58
    // add r2, r0, #0
    // bl VEC_Add
    // add r0, r5, #0
    // add r1, sp, #4
    // bl MapObject_SetPositionVector
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // cmp r0, #2
    // blo _02255FB8
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4d
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4d
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4d
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02255FB8
    // add r0, r7, #0
    // bl SysTask_Destroy
    // mov r0, #7
    // str r0, [r4]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _02255FBC: .word SEQ_SE_GS_GONDORA_KABEHIT
    // TODO: decompile
}



void ov04_02255FC0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #2
    // bl Save_Gymmick_AssertMagic_GetData
    // add r4, r0, #0
    // mov r0, #4
    // add r1, r0, #0
    // bl Heap_Alloc
    // ldr r1, [r5, #4]
    // mov r2, #4
    // str r0, [r1, #0x24]
    // ldr r0, [r5, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // bl MI_CpuFill8
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x24]
    // str r5, [r0]
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _0225603E
    // add r0, r5, #0
    // bl ov04_02256278
    // add r7, r0, #0
    // ldr r4, _02256040 ; =0x00000000
    // beq _02256026
    // ldr r2, [r5, #0x54]
    // mov r0, #0xae
    // add r1, r4, #0
    // bl ov01_021E8B04
    // add r6, r0, #0
    // mov r1, #1
    // bl ov01_021E8B60
    // add r0, r6, #0
    // bl ov01_021E8B78
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, r7
    // blo _02256004
    // ldr r2, [r5, #0x54]
    // mov r0, #0xaf
    // mov r1, #0
    // bl ov01_021E8B04
    // add r4, r0, #0
    // mov r1, #1
    // bl ov01_021E8B60
    // add r0, r4, #0
    // bl ov01_021E8B78
    // pop {r3, r4, r5, r6, r7, pc}
    // _02256040: .word 0x00000000
    // TODO: decompile
}



void ov04_02256044(void) {
}



int ov04_02256058(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_GetType();
    Save_Gymmick_AssertMagic_GetData(r4, 2);
    ov04_0225609C(*((u32*)(*((u32*)(r5 + 4)) + 0x24)), *((u32*)(*((u32*)(r5 + 4)) + 0x24)));
}



void ov04_0225609C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #2
    // bl Save_Gymmick_AssertMagic_GetData
    // add r4, r0, #0
    // mov r0, #0xb
    // mov r1, #0xc
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [r2]
    // mov r0, #1
    // str r0, [r4]
    // ldr r0, [r5]
    // ldr r1, _022560D0 ; =ov04_022560D4
    // ldr r0, [r0, #0x10]
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // _022560D0: .word ov04_022560D4
    // TODO: decompile
}



void ov04_022560D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x58
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r6, #0x40]
    // bl PlayerAvatar_GetMapObject
    // ldr r0, [r4]
    // cmp r0, #6
    // bls _022560F6
    // b _0225626C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02256102: ; jump table
    // ldr r1, [r6, #0x24]
    // add r0, sp, #0xc
    // bl Camera_GetAngle
    // add r0, sp, #4
    // ldrh r1, [r0, #8]
    // strh r1, [r0, #0x18]
    // ldrh r1, [r0, #0xa]
    // strh r1, [r0, #0x1a]
    // ldrh r1, [r0, #0xc]
    // strh r1, [r0, #0x1c]
    // ldrh r1, [r0, #0xe]
    // strh r1, [r0, #0x1e]
    // ldrh r1, [r0, #0x18]
    // add r0, sp, #0x44
    // strh r1, [r0]
    // ldr r0, [r6, #0x24]
    // bl Camera_GetPerspectiveAngle
    // add r1, sp, #0x44
    // ldr r3, _02256274 ; =ov04_02257660
    // strh r0, [r1, #2]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x48
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r6, #0x24]
    // bl Camera_GetDistance
    // str r0, [sp, #0x54]
    // ldr r1, [r6, #0x24]
    // mov r0, #4
    // bl CreateCameraTranslationWrapper
    // str r0, [r4, #8]
    // add r1, sp, #0x44
    // mov r2, #0x18
    // bl SetCameraTranslationPath
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225626C
    // ldr r0, [r4, #8]
    // bl IsCameraTranslationFinished
    // cmp r0, #0
    // beq _0225626C
    // ldr r0, [r4, #8]
    // bl DeleteCameraTranslationWrapper
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225626C
    // add r0, r6, #0
    // bl ov04_02256278
    // mov r5, #0
    // str r0, [sp]
    // cmp r0, #0
    // ble _022561AE
    // ldr r2, [r6, #0x54]
    // mov r0, #0xae
    // add r1, r5, #0
    // bl ov01_021E8B04
    // add r7, r0, #0
    // mov r1, #1
    // bl ov01_021E8B84
    // add r0, r7, #0
    // bl ov01_021E8B6C
    // ldr r0, [sp]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0225618E
    // ldr r2, [r6, #0x54]
    // mov r0, #0xaf
    // mov r1, #0
    // bl ov01_021E8B04
    // add r5, r0, #0
    // mov r1, #1
    // bl ov01_021E8B84
    // add r0, r5, #0
    // bl ov01_021E8B6C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225626C
    // ldr r2, [r6, #0x54]
    // mov r0, #0xaf
    // mov r1, #0
    // bl ov01_021E8B04
    // bl ov01_021E8B90
    // cmp r0, #0
    // beq _0225626C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225626C
    // add r1, sp, #0x24
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r1, [r6, #0x24]
    // add r0, sp, #4
    // bl Camera_GetAngle
    // add r0, sp, #4
    // ldrh r1, [r0]
    // strh r1, [r0, #0x10]
    // ldrh r1, [r0, #2]
    // strh r1, [r0, #0x12]
    // ldrh r1, [r0, #4]
    // strh r1, [r0, #0x14]
    // ldrh r1, [r0, #6]
    // strh r1, [r0, #0x16]
    // ldrh r1, [r0, #0x10]
    // strh r1, [r0, #0x2c]
    // ldr r0, [r6, #0x24]
    // bl Camera_GetPerspectiveAngle
    // add r1, sp, #4
    // add r3, sp, #0x24
    // strh r0, [r1, #0x2e]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r6, #0x24]
    // bl Camera_GetDistance
    // str r0, [sp, #0x40]
    // ldr r1, [r6, #0x24]
    // mov r0, #4
    // bl CreateCameraTranslationWrapper
    // str r0, [r4, #8]
    // add r1, sp, #0x30
    // mov r2, #0x18
    // bl SetCameraTranslationPath
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225626C
    // ldr r0, [r4, #8]
    // bl IsCameraTranslationFinished
    // cmp r0, #0
    // beq _0225626C
    // ldr r0, [r4, #8]
    // bl DeleteCameraTranslationWrapper
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0225626C
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x58
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02256274: .word ov04_02257660
    // TODO: decompile
}



void ov04_02256278(void) {
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r0), 0xad);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0xae);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0xaf);
    // str r0, [sp, #4]
    ov01_021E8BAC(*((u32*)(r4 + 0x54)), 0xad);
    ov01_021E8A8C(*((u32*)(r4 + 0x54)), r6, 0xad, 0);
    ov01_021E8BAC(*((u32*)(r4 + 0x54)), 0xae);
    // str r0, [sp]
    ov01_021E8970(0xae, 0, 1, r6);
    // ldr r3, [sp, #4]
    // str r0, [sp]
    ov01_021E8970(0xaf, 0, 1);
}



void ov04_02256304(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #3
    // bl Save_Gymmick_AssertMagic_GetData
    // str r0, [sp]
    // mov r0, #4
    // add r1, r0, #0
    // bl Heap_Alloc
    // ldr r1, [r5, #4]
    // mov r2, #4
    // str r0, [r1, #0x24]
    // ldr r0, [r5, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // bl MI_CpuFill8
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x24]
    // str r5, [r0]
    // ldr r0, [sp]
    // ldrb r0, [r0, #2]
    // cmp r0, #0
    // beq _02256370
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0xc7
    // bl Field3dObjectList_GetRenderObjectByID
    // add r7, r0, #0
    // ldr r0, [r5, #0x54]
    // mov r1, #0xc7
    // bl ov01_021E8BAC
    // add r6, r0, #0
    // ldr r4, _022563AC ; =0x00000000
    // beq _02256370
    // ldr r0, [r5, #0x54]
    // add r1, r7, #0
    // mov r2, #0xc7
    // add r3, r4, #0
    // bl ov01_021E8A8C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, r6
    // blo _0225635A
    // ldr r0, [sp]
    // ldrb r0, [r0, #3]
    // cmp r0, #0
    // beq _022563AA
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0xc8
    // bl Field3dObjectList_GetRenderObjectByID
    // add r7, r0, #0
    // ldr r0, [r5, #0x54]
    // mov r1, #0xc8
    // bl ov01_021E8BAC
    // add r6, r0, #0
    // ldr r4, _022563AC ; =0x00000000
    // beq _022563AA
    // ldr r0, [r5, #0x54]
    // add r1, r7, #0
    // mov r2, #0xc8
    // add r3, r4, #0
    // bl ov01_021E8A8C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, r6
    // blo _02256394
    // pop {r3, r4, r5, r6, r7, pc}
    // _022563AC: .word 0x00000000
    // TODO: decompile
}



void ov04_022563B0(void) {
}



BOOL ov04_022563C4(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(3);
    // ldrb r0, [r0]
}



void ov04_0225640C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // str r2, [sp]
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #3
    // bl Save_Gymmick_AssertMagic_GetData
    // add r6, r0, #0
    // mov r0, #0xb
    // mov r1, #0x18
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // cmp r7, #0
    // beq _02256438
    // cmp r7, #1
    // beq _0225646A
    // b _02256494
    // mov r0, #0xc7
    // str r0, [r4, #0x10]
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _02256456
    // mov r0, #2
    // strb r0, [r4, #0x16]
    // ldr r0, [r5, #0x10]
    // ldr r1, _0225649C ; =ov04_022564A0
    // add r2, r4, #0
    // bl TaskManager_Call
    // mov r0, #0
    // strb r0, [r6, #2]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // strb r0, [r4, #0x16]
    // ldr r0, [r5, #0x10]
    // ldr r1, _0225649C ; =ov04_022564A0
    // add r2, r4, #0
    // bl TaskManager_Call
    // mov r0, #1
    // strb r0, [r6, #2]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xc8
    // str r0, [r4, #0x10]
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _02256480
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // strb r0, [r4, #0x16]
    // ldr r0, [r5, #0x10]
    // ldr r1, _0225649C ; =ov04_022564A0
    // add r2, r4, #0
    // bl TaskManager_Call
    // mov r0, #1
    // strb r0, [r6, #3]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225649C: .word ov04_022564A0
    // TODO: decompile
}



void ov04_022564A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r5, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // add r0, r5, #0
    // bl TaskManager_GetStatePtr
    // str r0, [sp, #0xc]
    // ldr r0, [r0]
    // cmp r0, #6
    // bls _022564C4
    // b _02256642
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022564D0: ; jump table
    // ldr r0, [r4, #0x10]
    // cmp r0, #0xc7
    // ldr r0, [r6, #0x3c]
    // bne _02256502
    // mov r1, #3
    // bl MapObjectManager_GetFirstActiveObjectByID
    // str r0, [r4, #4]
    // ldr r0, [r6, #0x3c]
    // mov r1, #4
    // bl MapObjectManager_GetFirstActiveObjectByID
    // str r0, [r4, #8]
    // ldr r0, [r6, #0x3c]
    // mov r1, #5
    // bl MapObjectManager_GetFirstActiveObjectByID
    // b _0225651C
    // mov r1, #0
    // bl MapObjectManager_GetFirstActiveObjectByID
    // str r0, [r4, #4]
    // ldr r0, [r6, #0x3c]
    // mov r1, #1
    // bl MapObjectManager_GetFirstActiveObjectByID
    // str r0, [r4, #8]
    // ldr r0, [r6, #0x3c]
    // mov r1, #2
    // bl MapObjectManager_GetFirstActiveObjectByID
    // str r0, [r4, #0xc]
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // ldrb r1, [r4, #0x16]
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // b _02256642
    // ldr r0, [r4, #4]
    // mov r1, #0x16
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4, #8]
    // mov r1, #0x16
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4, #0xc]
    // mov r1, #0x17
    // bl MapObject_SetHeldMovement
    // ldr r0, [sp, #0xc]
    // mov r1, #3
    // str r1, [r0]
    // b _02256642
    // ldr r0, [r4, #4]
    // mov r1, #0x17
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4, #8]
    // mov r1, #0x17
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4, #0xc]
    // mov r1, #0x16
    // bl MapObject_SetHeldMovement
    // ldr r0, [sp, #0xc]
    // mov r1, #3
    // str r1, [r0]
    // b _02256642
    // mov r5, #0
    // lsl r0, r5, #2
    // add r0, r4, r0
    // ldr r0, [r0, #4]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _02256584
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #3
    // blo _0225656C
    // cmp r5, #3
    // bne _02256642
    // ldrh r0, [r4, #0x14]
    // add r0, r0, #1
    // strh r0, [r4, #0x14]
    // ldrh r0, [r4, #0x14]
    // cmp r0, #2
    // blo _022565AA
    // ldrb r0, [r4, #0x16]
    // cmp r0, #1
    // bne _022565A2
    // ldr r0, [sp, #0xc]
    // mov r1, #4
    // str r1, [r0]
    // b _02256642
    // ldr r0, [sp, #0xc]
    // mov r1, #5
    // str r1, [r0]
    // b _02256642
    // ldrb r1, [r4, #0x16]
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // b _02256642
    // add r0, r6, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r1, [r4, #0x10]
    // bl Field3dObjectList_GetRenderObjectByID
    // str r0, [sp, #8]
    // ldr r0, [r6, #0x54]
    // ldr r1, [r4, #0x10]
    // bl ov01_021E8BAC
    // add r7, r0, #0
    // ldr r5, _02256648 ; =0x00000000
    // beq _022565E4
    // ldr r0, [r6, #0x54]
    // ldr r1, [sp, #8]
    // ldr r2, [r4, #0x10]
    // add r3, r5, #0
    // bl ov01_021E8A8C
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, r7
    // blo _022565CE
    // ldr r0, _0225664C ; =SEQ_SE_DP_UG_020
    // bl PlaySE
    // ldr r0, [sp, #0xc]
    // mov r1, #6
    // str r1, [r0]
    // b _02256642
    // add r0, r6, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r1, [r4, #0x10]
    // bl Field3dObjectList_GetRenderObjectByID
    // str r0, [sp, #4]
    // ldr r0, [r6, #0x54]
    // ldr r1, [r4, #0x10]
    // bl ov01_021E8BAC
    // add r7, r0, #0
    // ldr r5, _02256648 ; =0x00000000
    // beq _02256628
    // ldr r0, [r6, #0x54]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // ldr r0, [r4, #0x10]
    // add r1, r5, #0
    // mov r2, #0
    // bl ov01_021E8970
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, r7
    // blo _0225660E
    // ldr r0, _0225664C ; =SEQ_SE_DP_UG_020
    // bl PlaySE
    // ldr r0, [sp, #0xc]
    // mov r1, #6
    // str r1, [r0]
    // b _02256642
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02256648: .word 0x00000000
    // _0225664C: .word SEQ_SE_DP_UG_020
    // TODO: decompile
}



void ov04_02256650(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #7
    // bl Save_Gymmick_AssertMagic_GetData
    // ldr r1, _02256698 ; =0x00001DD8
    // mov r0, #4
    // bl Heap_Alloc
    // ldr r1, [r4, #4]
    // ldr r2, _02256698 ; =0x00001DD8
    // str r0, [r1, #0x24]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // bl MI_CpuFill8
    // ldr r0, [r4, #4]
    // mov r1, #4
    // ldr r4, [r0, #0x24]
    // add r0, r4, #0
    // bl ov04_02256758
    // mov r2, #0
    // ldr r0, _0225669C ; =0x00001DB6
    // sub r1, r2, #1
    // add r2, r2, #1
    // strh r1, [r4, r0]
    // add r4, #0xc
    // cmp r2, #3
    // blt _0225668C
    // pop {r4, pc}
    // _02256698: .word 0x00001DD8
    // _0225669C: .word 0x00001DB6
    // TODO: decompile
}



void ov04_022566A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // ldr r0, [r0, #4]
    // ldr r5, [r0, #0x24]
    // add r0, r5, #0
    // bl ov04_0225686C
    // ldr r6, _022566E4 ; =0x00001DB4
    // mov r4, #0
    // mov r7, #0xc
    // add r0, r4, #0
    // mul r0, r7
    // add r1, r5, r0
    // ldrh r0, [r1, r6]
    // cmp r0, #0
    // beq _022566C8
    // ldr r0, _022566E8 ; =0x00001DBC
    // ldr r0, [r1, r0]
    // bl SysTask_Destroy
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #3
    // blo _022566B4
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [sp]
    // mov r1, #0
    // ldr r0, [r0, #4]
    // str r1, [r0, #0x24]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022566E4: .word 0x00001DB4
    // _022566E8: .word 0x00001DBC
    // TODO: decompile
}



void ov04_022566EC(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, [r6, #4]
    // ldr r5, [r0, #0x24]
    // add r0, r1, #0
    // add r1, r2, #0
    // bl ov04_022568F0
    // add r4, r0, #0
    // bpl _0225670A
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    // lsl r0, r0, #8
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // ldr r0, _0225672C ; =0x00001DB4
    // add r1, r4, #0
    // add r0, r5, r0
    // bl ov04_02256920
    // cmp r0, #0
    // bne _0225672A
    // lsl r2, r4, #0x18
    // add r0, r5, #0
    // add r1, r6, #0
    // lsr r2, r2, #0x18
    // bl ov04_02256950
    // ldr r0, _02256730 ; =SEQ_SE_GS_TOUMEINAKABEHIT
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // _0225672C: .word 0x00001DB4
    // _02256730: .word SEQ_SE_GS_TOUMEINAKABEHIT
    // TODO: decompile
}



void ov04_02256734(void) {
    ov04_02256A54((*((u32*)(r1 + 4)) + 4), 4);
    ov04_02256B3C(r5);
    // add r4, #0x54
    Field3dObject_Draw(r4);
}



void ov04_02256758(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    HeapExp_FndInitAllocator(0x20);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // mul r4, r1
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // add r0, #0xd4
    // str r1, [r0]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // add r1, #0x10
    // str r0, [sp, #0x10]
    // add r0, r1, r0
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0xc]
    Field3dModel_LoadFromFilesystem((0 << 4), 0xf8);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // add r0, #0xd8
    // add r0, r0, r4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x24]
    // add r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    // mul r2, r0
    // ldr r0, [sp, #0x18]
    // add r0, r0, r2
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r1, [r0, r2]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // mul r6, r3
    // ldr r3, [sp, #0x14]
    // mul r0, r5
    // ldr r2, [sp, #0x24]
    // ldr r1, [sp, #0x10]
    // add r0, r4, r0
    // add r1, r2, r1
    // add r3, r6, r3
    Field3dModelAnimation_LoadFromFilesystem(0x14, 0, 0xf8, (0 + 1));
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // ldr r1, [sp, #0x10]
    // add r0, #0x54
    // add r1, r2, r1
    Field3dObject_InitFromModel(((r5 + 1) << 0x18));
    // ldr r0, [sp, #0x20]
    // add r7, #0x54
    // mul r6, r0
    // add r1, r4, r6
    Field3dObject_AddAnimation(r0);
    // add r0, r4, r6
    Field3dModelAnimation_FrameSet(0);
    // add r0, sp, #0x28
    // str r1, [r0]
    *((u32*)(((r5 + 1) << 0x18) + 4)) = 0;
    *((u32*)(((r5 + 1) << 0x18) + 8)) = 0;
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    // ldr r3, [sp, #0x30]
    // add r0, #0x54
    Field3dObject_SetPosEx(((r5 + 1) << 0x18), 0);
    // ldr r0, [sp, #0x20]
    // add r0, #0x54
    // str r0, [sp, #0x20]
    Field3dObject_SetActiveFlag(0);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}



void ov04_0225686C(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x10
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0xd8
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    Field3dModel_Unload(r0, (r0 << 4));
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // mul r2, r0
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // mul r2, r0
    // ldr r0, [sp]
    // add r0, r0, r2
    // mul r0, r7
    // add r0, r4, r0
    Field3dModelAnimation_Unload(0, r6, r1);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}



void ov04_022568F0(void) {
    // push {r3, r4}
    // ldr r4, _0225691C ; =ov04_0225766C
    // mov r3, #0
    // ldr r2, [r4]
    // cmp r0, r2
    // bne _02256908
    // ldr r2, [r4, #4]
    // cmp r1, r2
    // bne _02256908
    // add r0, r3, #0
    // pop {r3, r4}
    // bx lr
    // add r2, r3, #1
    // lsl r2, r2, #0x10
    // asr r3, r2, #0x10
    // add r4, #0x14
    // cmp r3, #0x3c
    // blt _022568F6
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4}
    // bx lr
    // _0225691C: .word ov04_0225766C
    // TODO: decompile
}



void ov04_02256920(void) {
    // mul r5, r4
    // add r6, r0, r5
    // ldrh r5, [r0, r5]
    // ldrsh r5, [r6, r3]
}



void ov04_02256950(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r7, r2, #0
    // add r2, r6, #0
    // add r2, #0xd0
    // str r1, [sp]
    // ldr r1, _02256A38 ; =0x00001DB4
    // ldr r3, [r2]
    // mov r2, #0xc
    // add r1, r6, r1
    // mul r2, r3
    // add r5, r1, r2
    // ldrh r1, [r1, r2]
    // cmp r1, #0
    // beq _02256978
    // bl GF_AssertFail
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r7, #0
    // bl ov04_02256AC4
    // mov r0, #1
    // strh r0, [r5]
    // mov r0, #0x14
    // add r4, r7, #0
    // mul r4, r0
    // ldr r1, _02256A3C ; =ov04_02257674
    // add r0, r6, #0
    // ldrh r1, [r1, r4]
    // add r0, #0xd4
    // strh r7, [r5, #2]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // mov r1, #0x9a
    // lsl r1, r1, #2
    // mul r1, r2
    // add r0, r0, r1
    // bl ov04_02256A90
    // str r0, [r5, #4]
    // ldr r0, _02256A40 ; =ov04_02256734
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #8]
    // ldr r0, [r5, #4]
    // mov r1, #1
    // add r0, #0x54
    // bl Field3dObject_SetActiveFlag
    // add r1, sp, #4
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, [sp]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r1, sp, #4
    // bl MapObject_CopyPositionVector
    // ldr r0, _02256A44 ; =ov04_0225766C
    // ldr r2, _02256A48 ; =ov04_02257677
    // ldr r0, [r0, r4]
    // ldrsb r2, [r2, r4]
    // lsl r1, r0, #4
    // ldr r0, _02256A4C ; =ov04_02257676
    // add r1, #8
    // ldrsb r0, [r0, r4]
    // lsl r2, r2, #4
    // lsl r0, r0, #4
    // add r0, r1, r0
    // lsl r1, r0, #0xc
    // ldr r0, _02256A50 ; =ov04_02257670
    // str r1, [sp, #4]
    // ldr r0, [r0, r4]
    // lsl r0, r0, #4
    // add r0, #8
    // add r0, r0, r2
    // lsl r3, r0, #0xc
    // str r3, [sp, #0xc]
    // ldr r0, [r5, #4]
    // ldr r2, [sp, #8]
    // add r0, #0x54
    // bl Field3dObject_SetPosEx
    // mov r4, #0
    // mov r7, #0x14
    // ldr r0, [r5, #4]
    // add r1, r0, #4
    // add r0, r4, #0
    // mul r0, r7
    // add r0, r1, r0
    // mov r1, #0
    // bl Field3dModelAnimation_FrameSet
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _02256A08
    // add r0, r6, #0
    // add r0, #0xd0
    // ldr r0, [r0]
    // mov r1, #3
    // add r0, r0, #1
    // bl _s32_div_f
    // add r6, #0xd0
    // str r1, [r6]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02256A38: .word 0x00001DB4
    // _02256A3C: .word ov04_02257674
    // _02256A40: .word ov04_02256734
    // _02256A44: .word ov04_0225766C
    // _02256A48: .word ov04_02257677
    // _02256A4C: .word ov04_02257676
    // _02256A50: .word ov04_02257670
    // TODO: decompile
}



void ov04_02256A54(void) {
    // mul r0, r4
    // add r0, r7, r0
    Field3dModelAnimation_FrameAdvanceAndCheck(0x14, (1 << 0xc));
}



void ov04_02256A90(void) {
    // mul r0, r1
    // add r0, r5, r0
    GF_AssertFail(*((u32*)(0xcc + 4)), *((u32*)r0));
    // mul r6, r0
    // str r0, [r4, r6]
    _s32_div_f((*((u32*)r5) + 1), 3);
    // str r1, [r5]
    // add r0, r4, r6
}



void ov04_02256AC4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x14
    // ldr r2, _02256B30 ; =ov04_0225766C
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp]
    // ldr r0, _02256B34 ; =0x00001DB4
    // ldr r5, _02256B34 ; =0x00001DB4
    // add r0, r4, r0
    // str r0, [sp, #8]
    // mov r7, #0xc
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // mov r1, #0xc
    // ldrsb r1, [r0, r1]
    // cmp r1, #0
    // blt _02256B2C
    // mov r1, #0xc
    // ldrsb r6, [r0, r1]
    // mov r2, #0
    // add r1, r2, #0
    // mul r1, r7
    // add r0, r4, r1
    // ldrh r3, [r0, r5]
    // cmp r3, #0
    // beq _02256B14
    // ldr r3, _02256B38 ; =0x00001DB6
    // ldrsh r0, [r0, r3]
    // cmp r0, r6
    // bne _02256B14
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // bl ov04_02256B3C
    // b _02256B1E
    // add r0, r2, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #3
    // blo _02256AF6
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // cmp r0, #6
    // blo _02256AE2
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02256B30: .word ov04_0225766C
    // _02256B34: .word 0x00001DB4
    // _02256B38: .word 0x00001DB6
    // TODO: decompile
}



void ov04_02256B3C(void) {
    // add r0, #0x54
    Field3dObject_SetActiveFlag(*((u32*)(r0 + 4)), 0);
    // str r1, [r0]
    // strh r1, [r4]
    *((u16*)(r4 + 2)) = (0 - 1);
    *((u32*)(r4 + 4)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 8)), 0);
    *((u32*)(r4 + 8)) = 0;
}



void ov04_02256B64(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #8
    // bl Save_Gymmick_AssertMagic_GetData
    // ldr r1, _02256B9C ; =0x00000708
    // mov r0, #4
    // bl Heap_Alloc
    // ldr r1, [r4, #4]
    // ldr r2, _02256B9C ; =0x00000708
    // str r0, [r1, #0x24]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // bl MI_CpuFill8
    // ldr r0, [r4, #4]
    // mov r1, #4
    // ldr r0, [r0, #0x24]
    // bl ov04_02256C20
    // pop {r4, pc}
    // nop
    // _02256B9C: .word 0x00000708
    // TODO: decompile
}



void ov04_02256BA0(void) {
    // str r0, [sp]
    ov04_02256D00(*((u32*)(*((u32*)(r0 + 4)) + 0x24)));
    // sub r6, #0x50
    // mul r0, r6
    // add r1, r5, r0
    // ldr r0, [r1, r7]
    SysTask_Destroy(*((u32*)(r1 + 0x54)));
    Heap_Free(r5);
    // ldr r0, [sp]
    *((u32*)(*((u32*)(r0 + 4)) + 0x24)) = 0;
}



void ov04_02256BE4(void) {
    // add r0, #0x54
    // mul r6, r1
    // ldr r1, [r0, r6]
    // add r0, r0, r6
    ov04_02256D68(*((u32*)(*((u32*)(r0 + 4)) + 0x24)), r0, r1, r0);
    _s32_div_f((*((u32*)(r4 + 0x50)) + 1), 3);
    *((u32*)(r4 + 0x50)) = r1;
    GF_AssertFail();
}



void ov04_02256C20(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // mov r2, #0x20
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // bl HeapExp_FndInitAllocator
    // ldr r4, [sp, #8]
    // ldr r6, _02256CFC ; =0x00000101
    // mov r5, #0
    // add r4, #0x10
    // lsl r0, r5, #4
    // ldr r3, [sp, #0xc]
    // add r0, r4, r0
    // add r1, r6, #0
    // add r2, r5, #4
    // bl Field3dModel_LoadFromFilesystem
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #4
    // blo _02256C36
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // mov r4, #0
    // add r2, r0, #0
    // str r4, [r0, #0x50]
    // mov r1, #0x8f
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // add r2, #0x54
    // mul r1, r0
    // add r7, r2, r1
    // str r4, [r2, r1]
    // str r4, [r7, #4]
    // add r6, r7, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0x8c
    // mul r1, r0
    // ldr r0, [sp, #8]
    // add r6, #0x1c
    // str r0, [sp, #0x1c]
    // add r0, #0x10
    // str r1, [sp, #0x18]
    // add r7, #8
    // str r0, [sp, #0x1c]
    // lsl r0, r4, #4
    // str r0, [sp, #0x10]
    // mov r0, #0x8c
    // add r5, r4, #0
    // mul r5, r0
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r1, r2, r1
    // str r0, [sp, #4]
    // ldr r2, _02256CFC ; =0x00000101
    // add r0, r7, r5
    // add r3, r4, #0
    // bl Field3dModelAnimation_LoadFromFilesystem
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // add r0, r6, r5
    // add r1, r2, r1
    // bl Field3dObject_InitFromModel
    // add r0, r6, r5
    // add r1, r7, r5
    // bl Field3dObject_AddAnimation
    // add r0, r7, r5
    // mov r1, #0
    // bl Field3dModelAnimation_FrameSet
    // mov r1, #0
    // add r0, sp, #0x20
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // add r0, r6, r0
    // bl Field3dObject_SetPosEx
    // add r0, r6, r5
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _02256C80
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x14]
    // cmp r0, #3
    // blo _02256C52
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02256CFC: .word 0x00000101
    // TODO: decompile
}



void ov04_02256D00(void) {
    // add r5, #0x10
    // add r0, r5, r0
    Field3dModel_Unload((0 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x54
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // mul r2, r0
    // ldr r0, [sp, #4]
    // add r4, r0, r2
    // add r4, #8
    // mul r0, r7
    // add r0, r4, r0
    Field3dModelAnimation_Unload(0, r6, r1);
    // ldr r0, [sp]
    // str r0, [sp]
}



void ov04_02256D68(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r5, #1
    // sub r2, #0x40
    // add r7, r1, #0
    // str r5, [r4]
    // cmp r2, #3
    // bhi _02256D9A
    // add r0, r2, r2
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02256D86: ; jump table
    // mov r5, #2
    // b _02256DA2
    // mov r5, #0
    // b _02256DA2
    // mov r5, #3
    // b _02256DA2
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _02256DF8 ; =ov04_02256DFC
    // add r1, r4, #0
    // mov r2, #0
    // str r5, [r4, #4]
    // bl SysTask_CreateOnMainQueue
    // mov r1, #0x8e
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r6, r5, #0
    // mov r0, #0x8c
    // add r5, r4, #0
    // mul r6, r0
    // add r5, #0x1c
    // add r0, r5, r6
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // add r1, sp, #0
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, [r7, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, r5, r6
    // bl Field3dObject_SetPosEx
    // add r4, #8
    // add r0, r4, r6
    // mov r1, #0
    // bl Field3dModelAnimation_FrameSet
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02256DF8: .word ov04_02256DFC
    // TODO: decompile
}



void ov04_02256DFC(void) {
    // mul r4, r0
    // add r0, #8
    // add r0, r0, r4
    ov04_02256E48(r1, ((*((u32*)(r1 + 4)) << 0x18) >> 0x18));
    // add r0, #0x1c
    // add r0, r0, r4
    Field3dObject_SetActiveFlag(r5, 0);
    // str r0, [r5]
    // ldr r0, [r5, r0]
    SysTask_Destroy((0x8e << 2));
    // str r1, [r5, r0]
    // add r5, #0x1c
    // add r0, r5, r4
    Field3dObject_Draw((0x8e << 2), 0);
}



void ov04_02256E48(void) {
}



void ov04_02256E60(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #9
    // bl Save_Gymmick_AssertMagic_GetData
    // mov r1, #0x8e
    // mov r0, #4
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // ldr r1, [r5, #4]
    // mov r2, #0x8e
    // str r0, [r1, #0x24]
    // ldr r0, [r5, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // lsl r2, r2, #2
    // bl MI_CpuFill8
    // ldr r0, [r5, #4]
    // ldr r4, [r0, #0x24]
    // add r0, r4, #0
    // str r5, [r4]
    // bl ov04_02256F50
    // ldr r0, _02256EAC ; =ov04_02257148
    // add r1, r4, #0
    // mov r2, #1
    // bl SysTask_CreateOnMainQueue
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // _02256EAC: .word ov04_02257148
    // TODO: decompile
}



void ov04_02256EB0(void) {
    // ldr r0, [r4, r0]
    SysTask_Destroy((0x8d << 2));
    ov04_022570EC(r4);
    Heap_Free(r4);
    *((u32*)(*((u32*)(r5 + 4)) + 0x24)) = 0;
}



void ov04_02256ED8(void) {
    // add r4, #0x4c
    // mul r0, r6
    // add r0, r4, r0
    Field3dObject_SetActiveFlag(0, 0);
}



void ov04_02256F00(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // add r6, r1, #0
    // ldr r4, [r0, #0x24]
    // cmp r6, #3
    // bls _02256F14
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x4c
    // bl Field3dObject_GetActiveFlag
    // cmp r0, #0
    // bne _02256F24
    // bl GF_AssertFail
    // add r0, r5, #0
    // bl FieldSystem_GetSaveData
    // bl Save_GetGymmickPtr
    // mov r1, #9
    // bl Save_Gymmick_AssertMagic_GetData
    // str r6, [r0]
    // mov r0, #0x23
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, [r5, #0x10]
    // ldr r1, _02256F4C ; =ov04_02257308
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r4, r5, r6, pc}
    // nop
    // _02256F4C: .word ov04_02257308
    // TODO: decompile
}



void ov04_02256F50(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // ldr r3, _022570E0 ; =ov04_02257B28
    // str r0, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x54
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r3, _022570E4 ; =ov04_02257B1C
    // add r2, sp, #0x48
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #4
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // mov r2, #0x20
    // add r0, r0, #4
    // bl HeapExp_FndInitAllocator
    // ldr r4, [sp, #8]
    // mov r5, #0
    // add r4, #0x14
    // add r6, sp, #0x48
    // mov r7, #0xb4
    // add r0, r5, #0
    // lsl r2, r5, #2
    // mul r0, r7
    // ldr r2, [r6, r2]
    // add r0, r4, r0
    // mov r1, #0xae
    // mov r3, #4
    // bl Field3dModel_LoadFromFilesystem
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #3
    // blo _02256F88
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x14]
    // add r0, #0x14
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // add r0, #0x24
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // mov r5, #0
    // lsl r1, r0, #3
    // add r0, sp, #0x54
    // add r6, r0, r1
    // ldr r1, [sp, #0x10]
    // mov r0, #0xb4
    // add r7, r1, #0
    // mul r7, r0
    // ldr r0, [sp, #0x18]
    // add r4, r0, r7
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // mov r0, #0x14
    // lsl r3, r5, #2
    // mul r0, r5
    // ldr r3, [r6, r3]
    // add r0, r4, r0
    // add r1, r1, r7
    // mov r2, #0xae
    // bl Field3dModelAnimation_LoadFromFilesystem
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #2
    // blo _02256FD4
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // cmp r0, #3
    // blo _02256FBE
    // ldr r4, [sp, #8]
    // ldr r6, [sp, #8]
    // mov r5, #0
    // add r4, #0x4c
    // add r6, #0x14
    // mov r7, #0xb4
    // add r1, r5, #0
    // mul r1, r7
    // add r0, r4, r1
    // add r1, r6, r1
    // bl Field3dObject_InitFromModel
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #3
    // blo _02257014
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r7, [sp, #8]
    // str r0, [sp, #0x20]
    // add r0, #0x24
    // str r0, [sp, #0x20]
    // add r7, #0x4c
    // ldr r1, [sp, #0xc]
    // mov r0, #0xb4
    // add r6, r1, #0
    // mul r6, r0
    // ldr r0, [sp, #0x20]
    // mov r5, #0
    // add r4, r0, r6
    // mov r1, #0x14
    // mul r1, r5
    // add r0, r7, r6
    // add r1, r4, r1
    // bl Field3dObject_AddAnimation
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #2
    // blo _02257048
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // cmp r0, #3
    // blo _0225703A
    // ldr r6, [sp, #8]
    // ldr r7, [sp, #8]
    // mov r5, #0
    // add r6, #0x4c
    // add r7, #0x24
    // mov r0, #0xb4
    // add r4, r5, #0
    // mul r4, r0
    // add r0, r6, r4
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // add r0, r7, r4
    // mov r1, #2
    // mov r2, #0
    // bl ov04_022572E0
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #3
    // blo _02257076
    // ldr r4, _022570E8 ; =ov04_02257B40
    // add r3, sp, #0x24
    // mov r2, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0225709E
    // ldr r0, [r4]
    // mov r5, #0
    // str r0, [r3]
    // ldr r0, [sp, #8]
    // add r4, sp, #0x24
    // add r0, #0x4c
    // str r0, [sp, #8]
    // mov r7, #0xc
    // mov r6, #0xb4
    // add r1, r5, #0
    // mul r1, r7
    // add r2, r5, #0
    // add r3, r4, r1
    // ldr r0, [sp, #8]
    // mul r2, r6
    // add r0, r0, r2
    // ldr r2, [r3, #4]
    // ldr r1, [r4, r1]
    // ldr r3, [r3, #8]
    // bl Field3dObject_SetPosEx
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #3
    // blo _022570B8
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022570E0: .word ov04_02257B28
    // _022570E4: .word ov04_02257B1C
    // _022570E8: .word ov04_02257B40
    // TODO: decompile
}



void ov04_022570EC(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0x24
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    // mul r0, r1
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // add r5, r1, r0
    // mul r0, r7
    // add r0, r5, r0
    Field3dModelAnimation_Unload(0, (r0 + 4));
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r1, r0
    Field3dModel_Unload(((r4 + 1) << 0x18));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}



void ov04_02257148(void) {
    // add r1, sp, #4
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    *((u8*)(r1 + 2)) = 0;
    FieldSystem_GetSaveData(*((u32*)r1));
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(9);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225717A: ; jump table
    // add r0, sp, #4
    // strb r1, [r0]
    // add r0, sp, #4
    *((u8*)((*((u16*)(*((u32*)r0) + 6)) << 0x10) + 1)) = 1;
    // add r0, sp, #4
    *((u8*)((*((u16*)(*((u32*)r0) + 6)) << 0x10) + 2)) = 1;
    GF_AssertFail((*((u16*)(*((u32*)r0) + 6)) << 0x10), 1);
    // add r4, #0x14
    // add r6, sp, #4
    // mul r0, r5
    // ldrb r2, [r6, r5]
    // add r0, r4, r0
    ov04_02257240(0xb4, 2);
    // str r0, [sp]
    // add r4, #0x4c
    // mul r0, r6
    // add r0, r4, r0
    Field3dObject_Draw(0);
    // ldr r0, [sp]
    // str r1, [r7, r0]
    // add r6, sp, #8
    // add r7, #0x14
    // mul r0, r5
    // add r0, r7, r0
    // add r0, #0x10
    ov01_021FBF28(0xb4, 0);
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [r6, r4]
    // ldr r0, [r6, r4]
    _s32_div_f(0x1e);
    // str r1, [r6, r4]
    // ldr r4, [sp, #0xc]
    // ldr r0, [sp, #8]
    GF_AssertFail(((r5 + 1) << 0x18));
    // ldr r5, [sp, #0x10]
    GF_AssertFail();
    // ldr r0, [sp, #8]
    GF_AssertFail();
}



void ov04_02257240(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r2, [sp, #8]
    // add r0, #0xb0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r4, [sp]
    // add r4, #0x10
    // mul r7, r0
    // add r0, r4, r7
    ov01_021FBF28(0x14);
    // add r1, r0, r1
    // ldr r0, [sp, #0xc]
    GF_AssertFail((1 << 0xc));
    // add r0, r4, r7
    Field3dModelAnimation_FrameAdvanceAndLoop((1 << 0xc));
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r1, #0xb0
    // str r0, [r1]
    // ldr r0, [sp]
    // add r0, #0xb0
    // add r0, r4, r7
    Field3dModelAnimation_FrameSet(*((u32*)r0), 0);
    // ldr r0, [sp, #4]
}



void ov04_022572E0(void) {
    // mul r0, r4
    // add r0, r6, r0
    Field3dModelAnimation_FrameSet(0x14, r2);
}



void ov04_02257308(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    // ldr r0, [r0, r1]
}


