/* Decompiled from asm/overlay_02_02245B80.s */
#include "global.h"

void ov02_02245B80(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // bl ov02_02245B9C
    // add r2, r0, #0
    // ldr r1, _02245B98 ; =ov02_02245BC8
    // add r0, r4, #0
    // bl TaskManager_Call
    // pop {r4, pc}
    // _02245B98: .word ov02_02245BC8
    // TODO: decompile
}


void ov02_02245B9C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0xd0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02245BB4
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // mov r2, #0xd0
    // bl MI_CpuFill8
    // str r5, [r4, #4]
    // mov r0, #4
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_02245BC8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrh r1, [r4, #8]
    // cmp r1, #4
    // bls _02245BDA
    // b _02245D06
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02245BE6: ; jump table
    // bl ov02_02245D18
    // mov r1, #0
    // add r0, r4, #0
    // strh r1, [r4, #0xa]
    // add r0, #0xcc
    // str r1, [r0]
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _02245D06
    // add r0, #0xcc
    // ldr r0, [r0]
    // cmp r0, #0xff
    // beq _02245C68
    // cmp r0, #0
    // beq _02245C26
    // cmp r0, #0x1e
    // beq _02245C26
    // cmp r0, #0x32
    // beq _02245C26
    // cmp r0, #0x3c
    // beq _02245C26
    // cmp r0, #0x46
    // beq _02245C26
    // cmp r0, #0x50
    // bne _02245C5A
    // ldr r0, _02245D0C ; =SEQ_SE_DP_FW411
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // cmp r0, #0x32
    // bne _02245C3C
    // ldr r0, _02245D10 ; =SEQ_SE_DP_F207
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // cmp r0, #0x3c
    // blt _02245C5A
    // mov r1, #0xa
    // bl _s32_div_f
    // add r1, r0, #0
    // sub r1, r1, #5
    // lsl r1, r1, #0x16
    // ldr r0, _02245D0C ; =SEQ_SE_DP_FW411
    // asr r1, r1, #0x10
    // bl PlaySE_SetPitch
    // add r0, r4, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xcc
    // str r1, [r0]
    // add r0, r4, #0
    // bl ov02_02245DE0
    // ldrh r1, [r4, #0xa]
    // add r0, r1, #1
    // strh r0, [r4, #0xa]
    // cmp r1, #0x5a
    // blo _02245D06
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r3, _02245D14 ; =0x00007FFF
    // mov r0, #3
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _02245D06
    // bl ov02_02245DE0
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02245D06
    // mov r0, #0
    // strh r0, [r4, #0xa]
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _02245D06
    // ldrh r2, [r4, #0xa]
    // add r1, r2, #1
    // strh r1, [r4, #0xa]
    // cmp r2, #0x3c
    // blo _02245D06
    // bl ov02_02245DB0
    // ldr r0, [r4, #4]
    // add r0, #0x50
    // bl ov01_021EA284
    // ldr r0, [r4, #4]
    // mov r1, #4
    // ldr r0, [r0, #0x48]
    // bl ov01_021EA220
    // ldr r1, [r4, #4]
    // ldr r3, _02245D14 ; =0x00007FFF
    // str r0, [r1, #0x50]
    // mov r0, #0x12
    // mov r1, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [r4]
    // add r2, r1, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // bl BeginNormalPaletteFade
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // b _02245D06
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02245D06
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02245D0C: .word SEQ_SE_DP_FW411
    // _02245D10: .word SEQ_SE_DP_F207
    // _02245D14: .word 0x00007FFF
    // TODO: decompile
}


void ov02_02245D18(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r1, [r4]
    // add r0, #0xbc
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r4, #0
    // ldr r3, [r4]
    // add r0, #0xc
    // mov r1, #0xae
    // mov r2, #0
    // bl Field3dModel_LoadFromFilesystem
    // ldr r0, [r4]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0xbc
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x1c
    // add r1, #0xc
    // mov r2, #0xae
    // mov r3, #1
    // bl Field3dModelAnimation_LoadFromFilesystem
    // ldr r0, [r4]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0xbc
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x30
    // add r1, #0xc
    // mov r2, #0xae
    // mov r3, #2
    // bl Field3dModelAnimation_LoadFromFilesystem
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x44
    // add r1, #0xc
    // bl Field3dObject_InitFromModel
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x44
    // add r1, #0x1c
    // bl Field3dObject_AddAnimation
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x44
    // add r1, #0x30
    // bl Field3dObject_AddAnimation
    // add r0, r4, #0
    // mov r1, #0x22
    // mov r3, #0xa
    // add r0, #0x44
    // lsl r1, r1, #0xe
    // mov r2, #0
    // lsl r3, r3, #0x10
    // bl Field3dObject_SetPosEx
    // add r4, #0x44
    // add r0, r4, #0
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_02245DB0(void) {
    Field3dObject_SetActiveFlag(0);
    Field3dModelAnimation_Unload(r4, r4);
    Field3dModelAnimation_Unload(r4, r4);
    Field3dModel_Unload(r4);
}


void ov02_02245DE0(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // add r0, #0x1c
    // lsl r1, r1, #0xc
    // bl Field3dModelAnimation_FrameAdvanceAndLoop
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x30
    // lsl r1, r1, #0xc
    // bl Field3dModelAnimation_FrameAdvanceAndLoop
    // add r4, #0x44
    // add r0, r4, #0
    // bl Field3dObject_Draw
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_02245E04(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #0xa4
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0xa4
    // bl MI_CpuFill8
    // add r0, r4, #0
    // add r0, #0xa0
    // str r6, [r0]
    // add r0, r4, #0
    // add r0, #0x8c
    // add r1, r6, #0
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // ldrh r1, [r5]
    // ldrb r2, [r5, #2]
    // add r0, r4, #0
    // add r3, r6, #0
    // bl Field3dModel_LoadFromFilesystem
    // add r0, r4, #0
    // add r0, #0x10
    // add r1, r4, #0
    // bl Field3dObject_InitFromModel
    // ldrh r1, [r5]
    // ldrb r3, [r5, #3]
    // ldr r2, [r5, #4]
    // add r0, r4, #0
    // bl ov02_02245ED8
    // add r0, r4, #0
    // add r0, #0x10
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x9e
    // strh r1, [r0]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02245E68(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r0, #0x10
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // mov r6, #0
    // cmp r0, #0
    // ble _02245EB8
    // add r0, r5, #0
    // add r7, r5, #0
    // str r0, [sp]
    // add r0, #0x8c
    // add r4, r6, #0
    // add r7, #0x10
    // str r0, [sp]
    // add r1, r5, #0
    // add r1, #0x88
    // ldr r1, [r1]
    // add r0, r7, #0
    // add r1, r1, r4
    // bl Field3dObject_RemoveAnimation
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // ldr r1, [sp]
    // add r0, r0, r4
    // bl Field3dModelAnimation_Unload
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // add r6, r6, #1
    // add r4, #0x14
    // cmp r6, r0
    // blt _02245E8E
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x9c
    // strb r1, [r0]
    // add r0, r5, #0
    // bl Field3dModel_Unload
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl Heap_Free
    // add r0, r5, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02245ED8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // str r3, [sp, #0xc]
    // add r0, #0x9c
    // ldrb r0, [r0]
    // add r7, r2, #0
    // str r1, [sp, #8]
    // cmp r0, #0
    // beq _02245F38
    // mov r6, #0
    // cmp r0, #0
    // ble _02245F2E
    // add r0, r5, #0
    // str r0, [sp, #0x10]
    // add r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // str r0, [sp, #0x14]
    // add r0, #0x8c
    // add r4, r6, #0
    // str r0, [sp, #0x14]
    // add r1, r5, #0
    // add r1, #0x88
    // ldr r1, [r1]
    // ldr r0, [sp, #0x10]
    // add r1, r1, r4
    // bl Field3dObject_RemoveAnimation
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // ldr r1, [sp, #0x14]
    // add r0, r0, r4
    // bl Field3dModelAnimation_Unload
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // add r6, r6, #1
    // add r4, #0x14
    // cmp r6, r0
    // blt _02245F04
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl Heap_Free
    // add r1, r5, #0
    // ldr r0, [sp, #0xc]
    // add r1, #0x9c
    // strb r0, [r1]
    // add r1, r5, #0
    // add r1, #0x9c
    // add r0, r5, #0
    // ldrb r2, [r1]
    // add r0, #0xa0
    // mov r1, #0x14
    // ldr r0, [r0]
    // mul r1, r2
    // bl Heap_Alloc
    // add r1, r5, #0
    // add r1, #0x88
    // str r0, [r1]
    // add r2, r5, #0
    // add r2, #0x9c
    // add r0, r5, #0
    // ldrb r3, [r2]
    // add r0, #0x88
    // mov r2, #0x14
    // ldr r0, [r0]
    // mov r1, #0
    // mul r2, r3
    // bl MI_CpuFill8
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // mov r6, #0
    // cmp r0, #0
    // ble _02245FCA
    // add r0, r5, #0
    // str r0, [sp, #0x18]
    // add r0, #0x8c
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // str r0, [sp, #0x1c]
    // add r0, #0x10
    // add r4, r6, #0
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // ldrh r3, [r7]
    // add r0, r0, r4
    // bl Field3dModelAnimation_LoadFromFilesystem
    // add r1, r5, #0
    // add r1, #0x88
    // ldr r1, [r1]
    // ldr r0, [sp, #0x1c]
    // add r1, r1, r4
    // bl Field3dObject_AddAnimation
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // add r6, r6, #1
    // add r7, r7, #2
    // add r4, #0x14
    // cmp r6, r0
    // blt _02245F8E
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02245FD0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // mov r7, #0
    // add r6, r7, #0
    // cmp r0, #0
    // ble _0224602E
    // add r4, r7, #0
    // add r0, r5, #0
    // add r0, #0x9e
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _02245FFE
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224600C
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // add r0, r0, r4
    // bl Field3dModelAnimation_FrameAdvanceAndCheck
    // add r7, r7, r0
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // add r6, r6, #1
    // add r4, #0x14
    // cmp r6, r0
    // blt _02245FE2
    // add r0, r5, #0
    // add r0, #0x10
    // bl Field3dObject_Draw
    // add r5, #0x9c
    // ldrb r0, [r5]
    // cmp r7, r0
    // bne _02246042
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02246048(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // mov r4, #0
    // cmp r0, #0
    // ble _022460A2
    // mov r7, #0x3f
    // add r6, r4, #0
    // lsl r7, r7, #0x18
    // add r0, r5, #0
    // add r0, #0x9e
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _02246076
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fadd
    // b _02246082
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r7, #0
    // bl _fsub
    // bl _ffix
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // add r0, r0, r6
    // bl Field3dModelAnimation_FrameAdvanceAndLoop
    // add r0, r5, #0
    // add r0, #0x9c
    // ldrb r0, [r0]
    // add r4, r4, #1
    // add r6, #0x14
    // cmp r4, r0
    // blt _0224605C
    // add r5, #0x10
    // add r0, r5, #0
    // bl Field3dObject_Draw
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_022460AC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r1, r4, #0
    // bl ov02_022460CC
    // add r2, r0, #0
    // ldr r1, _022460C8 ; =ov02_022460FC
    // add r0, r5, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // _022460C8: .word ov02_022460FC
    // TODO: decompile
}


void ov02_022460CC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #4
    // mov r1, #0x14
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _022460E6
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // str r5, [r4, #4]
    // strh r6, [r4, #0x10]
    // mov r0, #4
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_022460FC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrh r0, [r4, #0xc]
    // cmp r0, #0
    // beq _02246116
    // cmp r0, #1
    // beq _02246158
    // cmp r0, #2
    // beq _0224616A
    // b _0224617C
    // ldrh r1, [r4, #0x10]
    // mov r0, #0xc
    // ldr r2, _02246184 ; =ov02_02253264
    // mul r0, r1
    // ldr r1, [r4]
    // add r0, r2, r0
    // bl ov02_02245E04
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // add r1, sp, #0
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_CopyPositionVector
    // ldr r0, [r4, #8]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, #0x10
    // bl Field3dObject_SetPosEx
    // ldrh r1, [r4, #0x10]
    // mov r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, _02246188 ; =ov02_02253264 + 8
    // ldrh r0, [r0, r2]
    // bl PlaySE
    // ldrh r0, [r4, #0xc]
    // add r0, r0, #1
    // strh r0, [r4, #0xc]
    // b _0224617C
    // ldr r0, [r4, #8]
    // bl ov02_02245FD0
    // cmp r0, #0
    // beq _0224617C
    // ldrh r0, [r4, #0xc]
    // add r0, r0, #1
    // strh r0, [r4, #0xc]
    // b _0224617C
    // ldr r0, [r4, #8]
    // bl ov02_02245E68
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02246184: .word ov02_02253264
    // _02246188: .word ov02_02253264 + 8
    // TODO: decompile
}


void ShowLegendaryWing(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r1, r4, #0
    // bl ov02_022461AC
    // add r2, r0, #0
    // ldr r1, _022461A8 ; =ov02_022461DC
    // add r0, r5, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // _022461A8: .word ov02_022461DC
    // TODO: decompile
}


void ov02_022461AC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #4
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _022461C6
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r1, #0
    // mov r2, #0x18
    // bl MI_CpuFill8
    // str r5, [r4, #4]
    // strb r6, [r4, #0x10]
    // mov r0, #4
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_022461DC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrh r0, [r4, #0x12]
    // cmp r0, #4
    // bhi _022462C0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022461FA: ; jump table
    // ldrb r0, [r4, #0x10]
    // ldr r1, _022462C8 ; =ov02_02253254
    // lsl r0, r0, #3
    // add r0, r1, r0
    // ldr r1, [r4]
    // bl ov02_02245E04
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // add r1, sp, #0
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_CopyPositionVector
    // ldr r0, [r4, #8]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, #0x10
    // bl Field3dObject_SetPosEx
    // ldr r0, _022462CC ; =SEQ_SE_GS_STOPPERKAIJO
    // bl PlaySE
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // b _022462C0
    // ldr r0, [r4, #8]
    // bl ov02_02245FD0
    // cmp r0, #0
    // beq _022462C0
    // ldrb r2, [r4, #0x10]
    // ldr r0, [r4, #8]
    // mov r1, #0xae
    // lsl r3, r2, #3
    // ldr r2, _022462D0 ; =ov02_02253D80
    // ldr r2, [r2, r3]
    // mov r3, #3
    // bl ov02_02245ED8
    // ldr r0, _022462D4 ; =ov02_022462DC
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // mov r2, #0
    // str r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl QueueScript
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // b _022462C0
    // ldr r0, [r4, #0xc]
    // bl SysTask_Destroy
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // ldr r0, [r4, #8]
    // bl ov02_02245FD0
    // cmp r0, #0
    // beq _022462C0
    // ldrb r2, [r4, #0x10]
    // ldr r0, [r4, #8]
    // mov r1, #0xae
    // lsl r3, r2, #3
    // ldr r2, _022462D8 ; =ov02_02253D84
    // ldr r2, [r2, r3]
    // mov r3, #3
    // bl ov02_02245ED8
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // ldr r0, [r4, #8]
    // bl ov02_02245FD0
    // cmp r0, #0
    // beq _022462C0
    // ldr r0, [r4, #8]
    // bl ov02_02245E68
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _022462C8: .word ov02_02253254
    // _022462CC: .word SEQ_SE_GS_STOPPERKAIJO
    // _022462D0: .word ov02_02253D80
    // _022462D4: .word ov02_022462DC
    // _022462D8: .word ov02_02253D84
    // TODO: decompile
}


void ov02_022462DC(void) {
    ov02_02246048();
}


void ov02_022462E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // bl ov02_02246304
    // add r2, r0, #0
    // ldr r1, _02246300 ; =ov02_02246330
    // add r0, r4, #0
    // bl TaskManager_Call
    // pop {r4, pc}
    // _02246300: .word ov02_02246330
    // TODO: decompile
}


void ov02_02246304(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _0224631C
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // mov r2, #0x10
    // bl MI_CpuFill8
    // str r5, [r4, #4]
    // mov r0, #4
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_02246330(void) {
    // push {r4, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0
    // beq _02246348
    // cmp r1, #1
    // beq _0224635A
    // cmp r1, #2
    // beq _02246374
    // b _0224638E
    // bl ov02_02246398
    // ldr r0, _02246394 ; =SEQ_SE_GS_AJITO_SIREN
    // bl PlaySE
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0224638E
    // bl ov02_02246490
    // cmp r0, #0
    // beq _0224638E
    // ldrb r1, [r4, #0xc]
    // add r0, r1, #1
    // strb r0, [r4, #0xc]
    // cmp r1, #1
    // blo _0224638E
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0224638E
    // ldr r0, _02246394 ; =SEQ_SE_GS_AJITO_SIREN
    // bl IsSEPlaying
    // cmp r0, #0
    // bne _0224638E
    // add r0, r4, #0
    // bl ov02_02246444
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02246394: .word SEQ_SE_GS_AJITO_SIREN
    // TODO: decompile
}


void ov02_02246398(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // strb r0, [r5, #0xd]
    // ldrb r3, [r5, #0xd]
    // mov r0, #0x1f
    // mov r1, #2
    // sub r0, r0, r3
    // str r0, [sp]
    // ldr r0, _02246440 ; =0x04000050
    // mov r2, #5
    // bl G2x_SetBlendAlpha_
    // ldr r1, [r5]
    // mov r0, #0xae
    // bl NARC_New
    // mov r1, #0x20
    // str r1, [sp]
    // ldr r1, [r5]
    // mov r2, #0
    // str r1, [sp, #4]
    // mov r1, #0xc
    // add r3, r2, #0
    // add r4, r0, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x40
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #0xd
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #4]
    // add r0, r4, #0
    // ldr r2, [r2, #8]
    // mov r3, #1
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #0xe
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #4]
    // add r0, r4, #0
    // ldr r2, [r2, #8]
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r5, #4]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // bl GetBgPriority
    // strb r0, [r5, #0xe]
    // ldr r0, [r5, #4]
    // mov r1, #1
    // ldr r0, [r0, #8]
    // bl GetBgPriority
    // strb r0, [r5, #0xf]
    // mov r0, #0
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02246440: .word 0x04000050
    // TODO: decompile
}


void ov02_02246444(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldrb r1, [r4, #0xe]
    // mov r0, #0
    // bl SetBgPriority
    // ldrb r1, [r4, #0xf]
    // mov r0, #1
    // bl SetBgPriority
    // ldr r0, [r4, #4]
    // mov r1, #1
    // ldr r0, [r0, #8]
    // bl BgClearTilemapBufferAndCommit
    // ldr r3, [r4]
    // mov r0, #1
    // mov r1, #0x40
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // mov r1, #0
    // ldr r0, _0224648C ; =0x04000050
    // add r2, r1, #0
    // mov r3, #0x1f
    // str r1, [sp]
    // bl G2x_SetBlendAlpha_
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0224648C: .word 0x04000050
    // TODO: decompile
}


void ov02_02246490(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // beq _022464A2
    // cmp r0, #1
    // beq _022464B2
    // b _022464F4
    // mov r0, #0
    // strb r0, [r4, #0xb]
    // strb r0, [r4, #0xa]
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #9]
    // add r0, r0, #1
    // strb r0, [r4, #9]
    // b _02246502
    // ldrb r1, [r4, #0xb]
    // add r0, r1, #1
    // strb r0, [r4, #0xb]
    // cmp r1, #0
    // bne _02246502
    // ldrb r3, [r4, #0xd]
    // mov r0, #0x1f
    // mov r1, #2
    // sub r0, r0, r3
    // str r0, [sp]
    // ldr r0, _02246508 ; =0x04000050
    // mov r2, #5
    // bl G2x_SetBlendAlpha_
    // ldrb r1, [r4, #0xa]
    // add r0, r1, #1
    // strb r0, [r4, #0xa]
    // cmp r1, #0xc
    // ldrb r0, [r4, #0xd]
    // bhs _022464DE
    // add r0, r0, #1
    // b _022464E0
    // sub r0, r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #0
    // strb r0, [r4, #0xb]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0x18
    // bls _02246502
    // ldrb r0, [r4, #9]
    // add r0, r0, #1
    // strb r0, [r4, #9]
    // b _02246502
    // mov r0, #0
    // strb r0, [r4, #0xa]
    // strb r0, [r4, #0xb]
    // strb r0, [r4, #9]
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // _02246508: .word 0x04000050
    // TODO: decompile
}


void ov02_0224650C(void) {
    Heap_Alloc(r1, 0x38);
    MI_CpuFill8(0, 0x38);
    *((u32*)(r4 + 4)) = r5;
    Camera_New(r6);
    *((u32*)(r4 + 0x18)) = r0;
}


void ov02_02246534(void) {
    Camera_Delete(*((u32*)(r0 + 0x18)));
    Heap_Free(r4);
}


void ov02_02246548(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r1, #0
    // ble _02246568
    // lsl r0, r1, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02246576
    // lsl r0, r1, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // strh r0, [r5, #8]
    // cmp r4, #0
    // ble _02246592
    // lsl r0, r4, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _022465A0
    // lsl r0, r4, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // strh r0, [r5, #0xa]
    // strh r6, [r5, #0xe]
    // add r0, sp, #0x10
    // ldrh r0, [r0, #0x10]
    // strh r0, [r5, #0x12]
    // mov r0, #0
    // strh r0, [r5, #0x10]
    // ldrh r0, [r5, #0x12]
    // cmp r0, #0
    // beq _022465CA
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _022465D8
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r1, r0, #0
    // mov r0, #0x5a
    // lsl r0, r0, #0xe
    // bl FX_Div
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #0x18]
    // ldr r0, [r0, #0x24]
    // bl Camera_Copy
    // ldr r1, [r5, #0x18]
    // add r0, sp, #0
    // bl Camera_GetLookAtCamTarget
    // add r4, sp, #0
    // add r3, r5, #0
    // add r3, #0x20
    // ldmia r4!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // add r4, r2, #0
    // str r0, [r3]
    // add r3, r5, #0
    // ldmia r4!, {r0, r1}
    // add r3, #0x2c
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // ldr r1, [r5, #0x18]
    // add r0, r2, #0
    // bl Camera_SetFixedTarget
    // ldr r0, [r5, #0x18]
    // bl Camera_SetStaticPtr
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224662C(void) {
    // mov r1, #0
    // strh r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // ldr r3, _02246638 ; =sub_0202313C
    // ldr r0, [r0, #0x24]
    // bx r3
    // _02246638: .word Camera_SetStaticPtr
    // TODO: decompile
}


void ov02_0224663C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrh r2, [r5, #0x10]
    // add r0, #0x10
    // add r1, r2, #1
    // strh r1, [r5, #0x10]
    // cmp r2, #0
    // ldrh r2, [r5, #0x10]
    // beq _02246666
    // ldrh r1, [r0]
    // add r1, r1, #1
    // strh r1, [r0]
    // lsl r0, r2, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224667A
    // ldrh r1, [r0]
    // add r1, r1, #1
    // strh r1, [r0]
    // lsl r0, r2, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r2, r0, #0
    // ldr r0, [r5, #0x14]
    // asr r3, r2, #0x1f
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // bl GF_SinDegFX32
    // mov r2, #8
    // ldrsh r2, [r5, r2]
    // add r4, r0, #0
    // asr r6, r4, #0x1f
    // add r1, r6, #0
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r0, #0
    // mov r0, #2
    // add r3, r1, #0
    // mov r7, #0
    // lsl r0, r0, #0xa
    // add r0, r2, r0
    // adc r3, r7
    // ldr r1, [r5, #0x2c]
    // lsl r2, r3, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r2
    // add r0, r1, r0
    // str r0, [r5, #0x20]
    // mov r2, #0xa
    // ldrsh r2, [r5, r2]
    // add r0, r4, #0
    // add r1, r6, #0
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // mov r4, #2
    // add r3, r7, #0
    // lsl r4, r4, #0xa
    // add r4, r0, r4
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r4, #0xc
    // ldr r2, [r5, #0x30]
    // orr r1, r0
    // add r0, r2, r1
    // str r0, [r5, #0x24]
    // ldrh r1, [r5, #0x10]
    // ldrh r0, [r5, #0x12]
    // cmp r1, r0
    // bhs _022466F8
    // add r0, r3, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x2c]
    // str r0, [r5, #0x20]
    // ldr r0, [r5, #0x30]
    // str r0, [r5, #0x24]
    // strh r3, [r5, #0x10]
    // ldrh r0, [r5, #0xe]
    // sub r0, r0, #1
    // strh r0, [r5, #0xe]
    // ldrh r0, [r5, #0xe]
    // cmp r0, #0
    // bne _02246710
    // mov r3, #1
    // add r0, r3, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02246714(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl TaskManager_GetFieldSystem
    // add r1, sp, #8
    // ldrh r1, [r1, #0x10]
    // add r2, r6, #0
    // add r3, r7, #0
    // str r1, [sp]
    // add r1, r4, #0
    // bl ov02_02246744
    // add r2, r0, #0
    // ldr r1, _02246740 ; =ov02_02246798
    // add r0, r5, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02246740: .word ov02_02246798
    // TODO: decompile
}


void ov02_02246744(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #4
    // mov r1, #0xc
    // add r7, r2, #0
    // str r3, [sp, #4]
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02246766
    // bl GF_AssertFail
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // mov r2, #0xc
    // bl MI_CpuFill8
    // str r5, [r4, #4]
    // mov r1, #4
    // str r1, [r4]
    // ldr r0, [r4, #4]
    // bl ov02_0224650C
    // str r0, [r4, #8]
    // add r0, sp, #0x10
    // ldrh r0, [r0, #0x10]
    // lsl r1, r6, #0x10
    // lsl r2, r7, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // ldr r3, [sp, #4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov02_02246548
    // add r0, r4, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02246798(void) {
    // push {r4, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // bl ov02_0224663C
    // cmp r0, #0
    // bne _022467AE
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #8]
    // bl ov02_0224662C
    // ldr r0, [r4, #8]
    // bl ov02_02246534
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void OpenAlphHiddenRoom(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // lsl r1, r5, #0x18
    // lsr r1, r1, #0x18
    // bl ov02_022467E8
    // add r2, r0, #0
    // ldr r1, _022467E4 ; =ov02_02246818
    // add r0, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // nop
    // _022467E4: .word ov02_02246818
    // TODO: decompile
}


void ov02_022467E8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #4
    // mov r1, #0x1c
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02246802
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r1, #0
    // mov r2, #0x1c
    // bl MI_CpuFill8
    // str r5, [r4, #4]
    // strb r6, [r4, #0x19]
    // mov r0, #4
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02246818(void) {
    // push {r4, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrb r1, [r4, #0x18]
    // cmp r1, #0
    // beq _0224682C
    // cmp r1, #1
    // beq _0224683E
    // b _02246862
    // bl ov02_0224686C
    // ldr r0, _02246868 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _02246862
    // bl ov02_022469A0
    // cmp r0, #0
    // beq _02246862
    // ldr r0, _02246868 ; =0x000005DC
    // bl PlaySE
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // add r0, r4, #0
    // bl ov02_02246964
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02246868: .word 0x000005DC
    // TODO: decompile
}


void ov02_0224686C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0xae
    // bl NARC_New
    // mov r1, #0x20
    // str r1, [sp]
    // ldr r1, [r5]
    // mov r2, #0
    // str r1, [sp, #4]
    // mov r1, #0xf
    // add r3, r2, #0
    // add r4, r0, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #0x10
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #4]
    // add r0, r4, #0
    // ldr r2, [r2, #8]
    // mov r3, #1
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #0x11
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #4]
    // add r0, r4, #0
    // ldr r2, [r2, #8]
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r5, #4]
    // mov r1, #1
    // ldr r0, [r0, #8]
    // bl GetBgPriority
    // strb r0, [r5, #0x1a]
    // mov r0, #1
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl NARC_Delete
    // ldr r0, [r5, #4]
    // add r1, r5, #0
    // ldr r0, [r0, #8]
    // ldr r2, _0224695C ; =ov02_0225324C
    // add r1, #8
    // bl AddWindow
    // add r0, r5, #0
    // add r0, #8
    // mov r1, #9
    // bl FillWindowPixelBuffer
    // ldr r3, [r5]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xc6
    // bl NewMsgDataFromNarc
    // ldrb r1, [r5, #0x19]
    // add r4, r0, #0
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #3
    // add r1, r7, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r6, r0, #0x18
    // mov r3, #0x70
    // sub r6, r3, r6
    // lsr r3, r6, #0x1f
    // add r3, r6, r3
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02246960 ; =0x000F0E09
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // str r1, [sp, #0xc]
    // add r0, #8
    // mov r1, #3
    // asr r3, r3, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r5, #8
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl DestroyMsgData
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224695C: .word ov02_0225324C
    // _02246960: .word 0x000F0E09
    // TODO: decompile
}


void ov02_02246964(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldrb r1, [r4, #0x1a]
    // mov r0, #1
    // bl SetBgPriority
    // add r0, r4, #0
    // add r0, #8
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r4, #0
    // add r0, #8
    // bl RemoveWindow
    // ldr r0, [r4, #4]
    // mov r1, #1
    // ldr r0, [r0, #8]
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #1
    // ldr r3, [r4]
    // lsl r1, r0, #0xc
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_022469A0(void) {
    // ldr r0, _022469B0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r1, r0
    // bne _022469AC
    // mov r0, #0
    // bx lr
    // nop
    // _022469B0: .word gSystem
    // TODO: decompile
}


void ov02_022469B4(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r6, r2, #0
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov02_022469D8
    // add r2, r0, #0
    // ldr r1, _022469D4 ; =ov02_02246A34
    // add r0, r5, #0
    // bl TaskManager_Call
    // pop {r4, r5, r6, pc}
    // _022469D4: .word ov02_02246A34
    // TODO: decompile
}


void ov02_022469D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #4
    // mov r1, #0x1c
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _022469F8
    // bl GF_AssertFail
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // mov r2, #0x1c
    // bl MI_CpuFill8
    // str r5, [r4, #8]
    // str r6, [r4, #0x10]
    // str r7, [r4, #0x14]
    // mov r0, #4
    // str r0, [r4]
    // bl AllocMonZeroed
    // str r0, [r4, #0xc]
    // bl ZeroMonData
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x95
    // mov r2, #0x64
    // mov r3, #0x20
    // bl CreateMon
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02246A34(void) {
    // push {r4, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _02246A48
    // cmp r0, #1
    // beq _02246A5E
    // b _02246A7E
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // ldr r2, [r4, #0x10]
    // ldr r3, [r4, #0x14]
    // bl ov02_022494C4
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02246A7E
    // ldr r0, [r4, #0x18]
    // bl ov02_0224953C
    // cmp r0, #0
    // beq _02246A7E
    // ldr r0, [r4, #0x18]
    // bl ov02_02249548
    // ldr r0, [r4, #0xc]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}

