/* Decompiled from asm/overlay_80_022340E8.s */
#include "global.h"

void BattleArcadeData_Alloc(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r7, r1, #0
    // add r4, r0, #0
    // str r2, [sp, #4]
    // ldr r1, _02234370 ; =0x00000A88
    // mov r0, #0xb
    // str r3, [sp, #8]
    // bl Heap_Alloc
    // ldr r1, _02234374 ; =ov80_0223DD4C
    // ldr r2, _02234370 ; =0x00000A88
    // str r0, [r1]
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r5, [r0]
    // add r0, r4, #0
    // bl sub_02030E88
    // str r0, [r5, #8]
    // ldr r1, _02234374 ; =ov80_0223DD4C
    // str r4, [r5, #4]
    // mov r0, #0xb
    // str r0, [r5]
    // ldr r5, [r1]
    // bl SaveArray_Party_Alloc
    // str r0, [r5, #0x70]
    // mov r0, #0xb
    // bl SaveArray_Party_Alloc
    // str r0, [r5, #0x74]
    // mov r0, #0x2a
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // mov r0, #0x20
    // strb r0, [r5, #0x13]
    // add r0, r4, #0
    // ldr r6, [r5, #8]
    // bl sub_02030FA0
    // add r4, r0, #0
    // cmp r7, #0
    // bne _022341EC
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // mov r1, #0
    // ldr r2, [r0]
    // ldr r0, [sp, #4]
    // strb r0, [r2, #0x10]
    // strb r1, [r2, #0x11]
    // mov r0, #3
    // strb r0, [r2, #0x1c]
    // add r0, r6, #0
    // strb r1, [r2, #0x12]
    // bl sub_02030E7C
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r0, [r0]
    // ldrb r2, [r0, #0x10]
    // cmp r2, #3
    // bne _02234174
    // ldr r0, [r0, #4]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_GetVar4052
    // b _02234180
    // mov r3, #0
    // add r0, r4, #0
    // mov r1, #8
    // str r3, [sp]
    // bl sub_02030FE4
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bne _022341B8
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r5, [r0]
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C2C0
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C2C0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // strh r0, [r5, #0x18]
    // b _022341C0
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // mov r1, #0
    // ldr r0, [r0]
    // strh r1, [r0, #0x18]
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // mov r1, #7
    // ldr r4, [r0]
    // ldrh r0, [r4, #0x18]
    // bl _s32_div_f
    // strh r0, [r4, #0x1a]
    // mov r0, #0
    // str r0, [r4, #0x24]
    // add r1, r4, #0
    // ldr r0, [sp, #8]
    // add r1, #0x2c
    // strb r0, [r1]
    // add r0, r4, #0
    // add r1, sp, #0x20
    // ldrh r2, [r1, #0x10]
    // add r0, #0x2d
    // add r4, #0x2e
    // strb r2, [r0]
    // ldrh r0, [r1, #0x14]
    // strb r0, [r4]
    // b _02234294
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r1, [sp]
    // bl sub_02030F34
    // ldr r1, _02234374 ; =ov80_0223DD4C
    // mov r2, #0
    // ldr r1, [r1]
    // add r3, r2, #0
    // strb r0, [r1, #0x10]
    // add r0, r6, #0
    // mov r1, #2
    // str r2, [sp]
    // bl sub_02030F34
    // ldr r1, _02234374 ; =ov80_0223DD4C
    // mov r2, #0
    // ldr r4, [r1]
    // mov r1, #3
    // strb r0, [r4, #0x11]
    // str r2, [sp]
    // add r0, r6, #0
    // add r3, r2, #0
    // bl sub_02030F34
    // strb r0, [r4, #0x1c]
    // mov r2, #0
    // str r2, [sp]
    // add r0, r6, #0
    // mov r1, #1
    // add r3, r2, #0
    // bl sub_02030F34
    // strb r0, [r4, #0x12]
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r5, [r0]
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl sub_0205C2C0
    // str r0, [sp, #0x10]
    // ldrb r0, [r4, #0x10]
    // bl sub_0205C2C0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r1, [sp, #0x10]
    // add r0, r7, #0
    // bl FrontierSave_GetStat
    // strh r0, [r5, #0x18]
    // ldrh r0, [r5, #0x18]
    // mov r1, #7
    // bl _s32_div_f
    // mov r4, #0
    // strh r0, [r5, #0x1a]
    // add r7, r4, #0
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // lsl r2, r4, #0x18
    // ldr r5, [r0]
    // add r0, r6, #0
    // mov r1, #6
    // lsr r2, r2, #0x18
    // add r3, r7, #0
    // str r7, [sp]
    // bl sub_02030F34
    // add r1, r5, r4
    // add r1, #0x2c
    // strb r0, [r1]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #3
    // blo _02234270
    // ldr r6, _02234374 ; =ov80_0223DD4C
    // ldr r7, _02234378 ; =0x00000412
    // mov r5, #0
    // ldr r4, [r6]
    // ldr r0, [r4, #4]
    // bl SaveArray_Party_Get
    // add r1, r4, r5
    // add r1, #0x2c
    // ldrb r1, [r1]
    // bl Party_GetMonByIndex
    // ldr r4, [r6]
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // lsl r1, r5, #1
    // add r1, r4, r1
    // strh r0, [r1, r7]
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #3
    // blo _0223429A
    // ldr r0, [r4, #4]
    // bl SaveArray_Party_Get
    // str r0, [sp, #0xc]
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // mov r1, #0
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl BattleArcade_GetMonCount
    // add r7, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _0223434E
    // ldr r6, _02234374 ; =ov80_0223DD4C
    // ldr r1, [r6]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r5
    // add r1, #0x2c
    // ldrb r1, [r1]
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0, #0x70]
    // bl Party_AddMon
    // ldr r0, [r6]
    // add r1, r5, #0
    // ldr r0, [r0, #0x70]
    // bl Party_GetMonByIndex
    // mov r1, #0
    // str r1, [sp, #0x18]
    // add r4, r0, #0
    // mov r1, #6
    // add r2, sp, #0x18
    // bl SetMonData
    // add r0, r4, #0
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0x32
    // bls _02234344
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x32
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r1, #8
    // add r2, sp, #0x14
    // bl SetMonData
    // add r0, r4, #0
    // bl CalcMonLevelAndStats
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, r7
    // blt _022342E4
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r0, [r0]
    // ldrb r0, [r0, #0x10]
    // bl BattleArcade_MultiplayerCheck
    // cmp r0, #1
    // bne _02234366
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl ov80_0222A840
    // ldr r0, _02234374 ; =ov80_0223DD4C
    // ldr r0, [r0]
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02234370: .word 0x00000A88
    // _02234374: .word ov80_0223DD4C
    // _02234378: .word 0x00000412
    // TODO: decompile
}



void BattleArcadeData_Init(void) {
    // push {r3, lr}
    // cmp r1, #0
    // bne _02234388
    // bl ov80_02234390
    // pop {r3, pc}
    // bl ov80_02234424
    // pop {r3, pc}
    // TODO: decompile
}



void ov80_02234390(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // bl ov80_02238498
    // add r1, r0, #0
    // add r2, r5, #0
    // ldrb r0, [r5, #0x10]
    // add r2, #0x78
    // mov r3, #0xe
    // bl ov80_022380A0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // ldrb r4, [r5, #0x11]
    // bl BattleArcade_GetOpponentMonCount
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl BattleArcade_MultiplayerCheck
    // mov r3, #0x33
    // lsl r3, r3, #4
    // add r1, r5, r3
    // str r1, [sp]
    // add r1, r3, #0
    // sub r1, #0x14
    // add r1, r5, r1
    // str r1, [sp, #4]
    // add r1, r3, #0
    // sub r1, #0x10
    // add r1, r5, r1
    // add r2, r4, #7
    // str r1, [sp, #8]
    // lsl r0, r0, #0x18
    // lsl r1, r4, #1
    // lsl r2, r2, #1
    // lsr r0, r0, #0x18
    // add r1, r5, r1
    // add r2, r5, r2
    // str r0, [sp, #0xc]
    // add r1, #0x78
    // add r2, #0x78
    // sub r3, #0x1c
    // ldrh r1, [r1]
    // ldrh r2, [r2]
    // add r0, r6, #0
    // add r3, r5, r3
    // bl ov80_0222A6B8
    // add r0, r5, #0
    // bl ov80_02238498
    // ldr r3, _0223441C ; =ov80_0223BE98
    // mov r2, #0
    // ldrb r1, [r3]
    // cmp r0, r1
    // blt _02234410
    // ldr r0, _02234420 ; =ov80_0223BE98 + 1
    // lsl r1, r2, #1
    // ldrb r0, [r0, r1]
    // add sp, #0x10
    // strb r0, [r5, #0x1c]
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #3
    // blo _022343FE
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0223441C: .word ov80_0223BE98
    // _02234420: .word ov80_0223BE98 + 1
    // TODO: decompile
}



void ov80_02234424(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x18c
    // add r5, r0, #0
    // bl ov80_022344D4
    // mov r4, #0
    // add r6, r5, #0
    // add r7, r4, #0
    // str r7, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #5
    // lsr r2, r2, #0x18
    // add r3, r7, #0
    // bl sub_02030F34
    // add r1, r6, #0
    // add r1, #0x78
    // add r4, r4, #1
    // add r6, r6, #2
    // strh r0, [r1]
    // cmp r4, #0xe
    // blt _02234434
    // mov r6, #0
    // add r4, sp, #0x30
    // add r7, r5, #0
    // mov r0, #0
    // str r0, [sp]
    // lsl r2, r6, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #7
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030F34
    // strh r0, [r4]
    // ldrh r1, [r4]
    // mov r0, #0xc5
    // lsl r0, r0, #2
    // strh r1, [r7, r0]
    // add r6, r6, #1
    // add r4, r4, #2
    // add r7, r7, #2
    // cmp r6, #4
    // blt _02234458
    // add r0, sp, #0x18
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // mov r0, #0xb
    // str r0, [sp, #8]
    // mov r0, #0xcd
    // str r0, [sp, #0xc]
    // add r0, sp, #0x3c
    // add r1, sp, #0x30
    // add r2, sp, #0x10
    // mov r3, #0
    // bl ov80_0222A52C
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // mov r7, #0
    // add r4, sp, #0x3c
    // add r0, r5, #0
    // bl ov80_02238370
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov80_0222A140
    // ldr r1, [r5, #0x74]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl ov80_022383A8
    // add r7, r7, #1
    // add r4, #0x38
    // cmp r7, #4
    // blt _022344A6
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #0x18c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_022344D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x70]
    // bl Party_GetCount
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // mov r4, #0
    // cmp r7, #0
    // ble _0223451A
    // ldr r0, [r5, #0x70]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #4
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030F34
    // add r1, sp, #4
    // strh r0, [r1]
    // add r0, r6, #0
    // mov r1, #6
    // add r2, sp, #4
    // bl SetMonData
    // add r4, r4, #1
    // cmp r4, r7
    // blt _022344EA
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void BattleArcadeData_Free(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // beq _0223454A
    // ldr r0, [r4, #0x70]
    // cmp r0, #0
    // beq _02234530
    // bl Heap_Free
    // ldr r0, [r4, #0x74]
    // cmp r0, #0
    // beq _0223453A
    // bl Heap_Free
    // ldr r2, _0223454C ; =0x00000A88
    // add r0, r4, #0
    // mov r1, #0
    // bl MI_CpuFill8
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // _0223454C: .word 0x00000A88
    // TODO: decompile
}



void ov80_02234550(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r7, _02234570 ; =0x00000418
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r4, #0
    // lsl r1, r4, #0x18
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // bl ov80_02234574
    // strh r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #6
    // blt _0223455A
    // pop {r3, r4, r5, r6, r7, pc}
    // _02234570: .word 0x00000418
    // TODO: decompile
}



void ov80_02234574(void) {
}



void ov80_02234588(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // add r4, r1, #0
    // bl sub_02030FA0
    // str r0, [sp, #4]
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // bl BattleArcade_GetOpponentMonCount
    // ldrb r1, [r5, #0x10]
    // add r0, sp, #8
    // strb r1, [r0, #8]
    // mov r1, #0
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_02030EB4
    // ldr r0, [r5, #8]
    // mov r1, #1
    // bl sub_02030EA0
    // mov r2, #0
    // ldrb r1, [r5, #0x11]
    // add r0, sp, #8
    // add r3, r2, #0
    // strb r1, [r0, #8]
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r1, #2
    // bl sub_02030EB4
    // mov r2, #0
    // ldrb r1, [r5, #0x1c]
    // add r0, sp, #8
    // add r3, r2, #0
    // strb r1, [r0, #8]
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r1, #3
    // bl sub_02030EB4
    // mov r2, #0
    // ldrb r1, [r5, #0x12]
    // add r0, sp, #8
    // add r3, r2, #0
    // strb r1, [r0, #8]
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // mov r1, #1
    // bl sub_02030EB4
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C2C0
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C2C0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldrh r3, [r5, #0x18]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl sub_02031108
    // cmp r4, #2
    // beq _0223468E
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C2E8
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C2E8
    // bl sub_0205C268
    // add r2, r0, #0
    // ldrh r3, [r5, #0x18]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_0203126C
    // add r0, r5, #0
    // add r0, #0x2f
    // ldrb r1, [r0]
    // add r0, sp, #8
    // mov r3, #0
    // strb r1, [r0, #8]
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldrb r2, [r5, #0x10]
    // ldr r0, [sp, #4]
    // mov r1, #8
    // bl sub_02030FB0
    // ldrb r0, [r5, #0x10]
    // cmp r0, #3
    // bne _0223468E
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // mov r0, #0x6e
    // bl sub_0205C268
    // add r3, r5, #0
    // add r3, #0x2f
    // add r2, r0, #0
    // ldrb r3, [r3]
    // add r0, r4, #0
    // mov r1, #0x6e
    // bl sub_02031108
    // mov r4, #0
    // add r6, sp, #8
    // add r7, sp, #8
    // lsl r0, r4, #1
    // add r0, r5, r0
    // add r0, #0x78
    // ldrh r0, [r0]
    // lsl r2, r4, #0x18
    // mov r1, #5
    // strh r0, [r7]
    // str r6, [sp]
    // ldr r0, [r5, #8]
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030EB4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0xe
    // blo _02234694
    // mov r4, #0
    // add r6, sp, #0x10
    // add r7, sp, #8
    // add r0, r5, r4
    // add r0, #0x2c
    // ldrb r0, [r0]
    // lsl r2, r4, #0x18
    // mov r1, #6
    // strb r0, [r7, #8]
    // str r6, [sp]
    // ldr r0, [r5, #8]
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030EB4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #3
    // blo _022346BE
    // ldr r0, [r5, #0x70]
    // bl Party_GetCount
    // add r6, r0, #0
    // ldr r4, _02234760 ; =0x00000000
    // beq _0223471C
    // add r7, sp, #8
    // ldr r0, [r5, #0x70]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r1, sp, #8
    // strh r0, [r1]
    // str r7, [sp]
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #8]
    // mov r1, #4
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030EB4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, r6
    // blo _022346EE
    // ldr r0, [r5, #0x74]
    // bl Party_GetCount
    // add r6, r0, #0
    // ldr r4, _02234760 ; =0x00000000
    // beq _0223475A
    // add r7, sp, #8
    // ldr r0, [r5, #0x74]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // lsl r0, r4, #1
    // add r1, r5, r0
    // mov r0, #0xc5
    // lsl r0, r0, #2
    // ldrh r1, [r1, r0]
    // add r0, sp, #8
    // lsl r2, r4, #0x18
    // strh r1, [r0]
    // str r7, [sp]
    // ldr r0, [r5, #8]
    // mov r1, #7
    // lsr r2, r2, #0x18
    // mov r3, #0
    // bl sub_02030EB4
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, r6
    // blo _0223472A
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02234760: .word 0x00000000
    // TODO: decompile
}



void ov80_02234764(void) {
    *((u8*)(r0 + 0x11)) = (*((u8*)(r0 + 0x11)) + 1);
}



void ov80_02234770(void) {
    // ldrb r0, [r0, #0x11]
    // bx lr
    // TODO: decompile
}



void ov80_02234774(void) {
    // push {r4, lr}
    // sub sp, #0x30
    // add r4, r0, #0
    // bl ov80_022347A8
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x17
    // add r1, r4, r1
    // add r1, #0x78
    // ldrh r1, [r1]
    // add r0, sp, #0
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_02229F04
    // bl Heap_Free
    // add r0, sp, #0
    // ldrh r0, [r0, #4]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl ov80_0222A30C
    // add sp, #0x30
    // pop {r4, pc}
    // TODO: decompile
}



void ov80_022347A8(void) {
    // ldrb r2, [r0, #0x11]
    // mov r0, #7
    // mul r0, r1
    // add r0, r2, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}



void ov80_022347B8(void) {
}



void ov80_022347C4(void) {
    // add r1, r0, #0
    // mov r2, #1
    // add r1, #0x2f
    // strb r2, [r1]
    // ldrh r1, [r0, #0x1a]
    // cmp r1, #8
    // bhs _022347D6
    // add r1, r1, #1
    // strh r1, [r0, #0x1a]
    // ldr r3, _022347E0 ; =ov80_02234588
    // mov r1, #0
    // strb r1, [r0, #0x11]
    // bx r3
    // nop
    // _022347E0: .word ov80_02234588
    // TODO: decompile
}



void BattleArcade_SetPartyBeforeBattle(void) {
}



void BattleArcade_SetPartyAfterBattle(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // ldrb r4, [r5, #0x11]
    // bl BattleArcade_GetOpponentMonCount
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl BattleArcade_MultiplayerCheck
    // mov r3, #0x33
    // lsl r3, r3, #4
    // add r1, r5, r3
    // str r1, [sp]
    // add r1, r3, #0
    // sub r1, #0x14
    // add r1, r5, r1
    // str r1, [sp, #4]
    // add r1, r3, #0
    // sub r1, #0x10
    // add r1, r5, r1
    // add r2, r4, #7
    // str r1, [sp, #8]
    // lsl r0, r0, #0x18
    // lsl r1, r4, #1
    // lsl r2, r2, #1
    // lsr r0, r0, #0x18
    // add r1, r5, r1
    // add r2, r5, r2
    // str r0, [sp, #0xc]
    // add r1, #0x78
    // add r2, #0x78
    // sub r3, #0x1c
    // ldrh r1, [r1]
    // ldrh r2, [r2]
    // add r0, r6, #0
    // add r3, r5, r3
    // bl ov80_0222A6B8
    // add r0, r5, #0
    // bl ov80_022383C0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void BattleArcade_GetWonBattlePoints(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldrb r0, [r6, #0x10]
    // mov r4, #0
    // add r7, r1, #0
    // str r2, [sp]
    // add r1, r4, #0
    // add r5, r3, #0
    // bl BattleArcade_GetMonCount
    // add r3, r0, #0
    // ldr r2, [sp]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov80_02234894
    // ldr r2, _0223488C ; =ov80_0223BE9E
    // add r4, r4, r0
    // mov r1, #0
    // ldrb r0, [r2]
    // cmp r5, r0
    // bge _0223487E
    // ldr r0, _02234890 ; =ov80_0223BE9F
    // lsl r1, r1, #1
    // ldrb r0, [r0, r1]
    // add r4, r4, r0
    // b _02234886
    // add r1, r1, #1
    // add r2, r2, #2
    // cmp r1, #5
    // blt _0223486E
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223488C: .word ov80_0223BE9E
    // _02234890: .word ov80_0223BE9F
    // TODO: decompile
}



void ov80_02234894(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r3, [sp, #0xc]
    // str r0, [sp]
    // mov r4, #0
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // add r5, r4, #0
    // add r6, r4, #0
    // cmp r0, #0
    // ble _022348F2
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xac
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022348EA
    // add r0, r7, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _022348D6
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r7, #0
    // mov r1, #0xa0
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022348EA
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [sp, #0xc]
    // add r6, r6, #1
    // cmp r6, r0
    // blt _022348AC
    // ldr r0, [sp]
    // ldrb r0, [r0, #0x10]
    // bl BattleArcade_MultiplayerCheck
    // cmp r0, #1
    // bne _0223494C
    // ldr r0, [sp, #0xc]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223494C
    // ldr r0, [sp, #8]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xac
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02234944
    // add r0, r7, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02234930
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r7, #0
    // mov r1, #0xa0
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02234944
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [sp, #0xc]
    // add r6, r6, #1
    // cmp r6, r0
    // blt _02234906
    // ldr r0, _02234960 ; =ov80_0223BE90
    // ldrb r1, [r0, r5]
    // mov r0, #0
    // add r1, r0, r1
    // ldr r0, _02234964 ; =ov80_0223BE88
    // ldrb r0, [r0, r4]
    // add r0, r1, r0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02234960: .word ov80_0223BE90
    // _02234964: .word ov80_0223BE88
    // TODO: decompile
}



void ov80_02234968(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldrb r0, [r5, #0x13]
    // add r4, r1, #0
    // cmp r0, #0x20
    // beq _02234A1E
    // mov r0, #0xb7
    // mov r1, #0x65
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r1, #0x65
    // str r1, [sp, #0xc]
    // ldrb r2, [r5, #0x13]
    // mov r1, #6
    // add r6, r0, #0
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _02234A2C ; =ov80_0223BF5A
    // ldr r2, [r4]
    // ldrh r1, [r1, r3]
    // mov r3, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x65
    // str r0, [sp, #0xc]
    // ldrb r2, [r5, #0x13]
    // mov r1, #6
    // add r0, r6, #0
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _02234A30 ; =ov80_0223BF5C
    // ldr r2, [r4]
    // ldrh r1, [r1, r3]
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldrb r2, [r5, #0x13]
    // mov r1, #6
    // add r0, r6, #0
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _02234A34 ; =ov80_0223BF5E
    // add r2, sp, #0x10
    // ldrh r1, [r1, r3]
    // mov r3, #0x65
    // bl GfGfxLoader_GetPlttDataFromOpenNarc
    // ldr r1, [sp, #0x10]
    // add r5, r0, #0
    // ldr r0, [r1, #0xc]
    // ldr r1, [r1, #8]
    // bl DC_FlushRange
    // bl GX_BeginLoadBGExtPltt
    // ldr r0, [sp, #0x10]
    // mov r1, #1
    // lsl r1, r1, #0xe
    // ldr r0, [r0, #0xc]
    // lsr r2, r1, #1
    // bl GX_LoadBGExtPltt
    // bl GX_EndLoadBGExtPltt
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r6, #0
    // bl NARC_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02234A2C: .word ov80_0223BF5A
    // _02234A30: .word ov80_0223BF5C
    // _02234A34: .word ov80_0223BF5E
    // TODO: decompile
}



void ov80_02234A38(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // mov r0, #0xb7
    // mov r1, #0x65
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r1, #0x65
    // str r1, [sp, #0xc]
    // ldr r2, [r5]
    // mov r1, #0x39
    // mov r3, #3
    // add r4, r0, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [r5]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void ov80_02234A74(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp, #4]
    // ldrb r0, [r0, #0x10]
    // str r1, [sp, #8]
    // mov r1, #1
    // add r4, r2, #0
    // bl BattleArcade_GetMonCount
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // mov r1, #1
    // ldrb r0, [r0, #0x10]
    // bl BattleArcade_GetOpponentMonCount
    // str r0, [sp, #0xc]
    // cmp r4, #0
    // bne _02234AD8
    // mov r4, #0
    // cmp r7, #0
    // ble _02234B18
    // ldr r5, _02234B1C ; =ov80_0223BEB8
    // ldr r6, [sp, #4]
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // ldr r0, [r0, #0x70]
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // mov r3, #0
    // add r2, r4, #0
    // str r0, [sp]
    // ldrsh r3, [r5, r3]
    // ldr r0, [sp, #8]
    // bl ov80_0222F29C
    // str r0, [r6, #0x30]
    // ldr r0, [r0]
    // mov r1, #0
    // bl Sprite_SetAnimActiveFlag
    // add r4, r4, #1
    // add r5, r5, #4
    // add r6, r6, #4
    // cmp r4, r7
    // blt _02234AA2
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r6, #0
    // cmp r0, #0
    // ble _02234B18
    // ldr r4, _02234B20 ; =ov80_0223BEC8
    // ldr r5, [sp, #4]
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // ldr r0, [r0, #0x74]
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // mov r3, #0
    // add r2, r7, #0
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // ldr r0, [sp, #8]
    // bl ov80_0222F29C
    // str r0, [r5, #0x40]
    // ldr r0, [r0]
    // mov r1, #0
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, [sp, #0xc]
    // add r6, r6, #1
    // add r4, r4, #4
    // add r7, r7, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02234AE2
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02234B1C: .word ov80_0223BEB8
    // _02234B20: .word ov80_0223BEC8
    // TODO: decompile
}



void ov80_02234B24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // add r7, r1, #0
    // mov r1, #1
    // add r6, r2, #0
    // bl BattleArcade_GetMonCount
    // add r4, r0, #0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // bl BattleArcade_GetOpponentMonCount
    // str r0, [sp]
    // cmp r6, #0
    // bne _02234B5E
    // mov r6, #0
    // cmp r4, #0
    // ble _02234B7A
    // ldr r1, [r5, #0x30]
    // add r0, r7, #0
    // add r2, r6, #0
    // bl ov80_0222F324
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r4
    // blt _02234B4A
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r6, #0
    // cmp r0, #0
    // ble _02234B7A
    // ldr r1, [r5, #0x40]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl ov80_0222F324
    // ldr r0, [sp]
    // add r6, r6, #1
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02234B64
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_02234B7C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // add r6, r2, #0
    // add r4, r3, #0
    // bl BattleArcade_GetMonCount
    // cmp r4, r0
    // bge _02234BB2
    // cmp r6, #1
    // bne _02234BA4
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x30]
    // mov r1, #1
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r4, r5, r6, pc}
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x30]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov80_02234BB4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // add r6, r2, #0
    // add r4, r3, #0
    // bl BattleArcade_GetOpponentMonCount
    // cmp r4, r0
    // bge _02234BEA
    // cmp r6, #1
    // bne _02234BDC
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x40]
    // mov r1, #1
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r4, r5, r6, pc}
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x40]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov80_02234BEC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // ldrb r0, [r7, #0x10]
    // str r1, [sp]
    // mov r1, #1
    // add r4, r2, #0
    // bl BattleArcade_GetMonCount
    // str r0, [sp, #8]
    // ldrb r0, [r7, #0x10]
    // mov r1, #1
    // bl BattleArcade_GetOpponentMonCount
    // str r0, [sp, #4]
    // cmp r4, #0
    // bne _02234C5C
    // ldr r0, [sp, #8]
    // mov r6, #0
    // cmp r0, #0
    // ble _02234CA4
    // ldr r4, _02234CA8 ; =ov80_0223BEB8
    // add r5, r7, #0
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [sp]
    // add r1, #8
    // add r2, r2, #4
    // bl ov80_0222F3FC
    // str r0, [r5, #0x50]
    // ldr r0, [r7, #0x70]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02234C4C
    // ldr r0, [r5, #0x50]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, [sp, #8]
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02234C1A
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r6, #0
    // cmp r0, #0
    // ble _02234CA4
    // ldr r4, _02234CAC ; =ov80_0223BEC8
    // add r5, r7, #0
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [sp]
    // add r1, #8
    // add r2, r2, #4
    // bl ov80_0222F3FC
    // str r0, [r5, #0x60]
    // ldr r0, [r7, #0x74]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02234C98
    // ldr r0, [r5, #0x60]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02234C66
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02234CA8: .word ov80_0223BEB8
    // _02234CAC: .word ov80_0223BEC8
    // TODO: decompile
}



void ov80_02234CB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // add r4, r1, #0
    // mov r1, #1
    // add r6, r2, #0
    // bl BattleArcade_GetMonCount
    // str r0, [sp]
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // bl BattleArcade_GetOpponentMonCount
    // add r7, r0, #0
    // cmp r6, #0
    // bne _02234CEC
    // ldr r0, [sp]
    // mov r6, #0
    // cmp r0, #0
    // ble _02234D02
    // ldr r1, [r5, #0x50]
    // add r0, r4, #0
    // bl ov80_0222F440
    // ldr r0, [sp]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02234CD8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r6, #0
    // cmp r7, #0
    // ble _02234D02
    // ldr r1, [r5, #0x60]
    // add r0, r4, #0
    // bl ov80_0222F440
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r7
    // blt _02234CF2
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_02234D04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // add r6, r2, #0
    // add r4, r3, #0
    // bl BattleArcade_GetMonCount
    // add r7, r0, #0
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // bl BattleArcade_GetOpponentMonCount
    // cmp r6, #0
    // bne _02234D72
    // cmp r4, r7
    // bge _02234DC0
    // ldr r0, [r5, #0x70]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r1, sp, #8
    // ldrh r1, [r1, #0x10]
    // cmp r1, #1
    // bne _02234D62
    // cmp r0, #0
    // bne _02234D52
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x50]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x50]
    // mov r1, #1
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x50]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, r0
    // bge _02234DC0
    // ldr r0, [r5, #0x74]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r1, sp, #8
    // ldrh r1, [r1, #0x10]
    // cmp r1, #1
    // bne _02234DB2
    // cmp r0, #0
    // bne _02234DA2
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x60]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x60]
    // mov r1, #1
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x60]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_02234DC4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // cmp r1, #0
    // bne _02234DD6
    // mov r5, #0x1e
    // mov r6, #0xa2
    // lsl r5, r5, #4
    // b _02234DDC
    // mov r6, #0xa1
    // add r5, r6, #0
    // add r5, #0x7f
    // mov r1, #2
    // mov r0, #0x65
    // lsl r1, r1, #0xc
    // bl Heap_Alloc
    // mov r2, #2
    // mov r1, #0
    // lsl r2, r2, #0xc
    // add r4, r0, #0
    // bl memset
    // mov r0, #0xb7
    // mov r1, #0x65
    // bl NARC_New
    // add r1, r6, #0
    // add r2, sp, #8
    // mov r3, #0x65
    // str r0, [sp, #4]
    // bl GfGfxLoader_GetPlttDataFromOpenNarc
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // mov r2, #1
    // ldr r0, [r0, #0xc]
    // add r1, r4, #0
    // lsl r2, r2, #0xc
    // add r3, r7, #0
    // bl BlendPalette
    // mov r1, #2
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl DC_FlushRange
    // bl GX_BeginLoadBGExtPltt
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // add r2, r5, #0
    // bl GX_LoadBGExtPltt
    // bl GX_EndLoadBGExtPltt
    // ldr r0, [sp, #4]
    // bl NARC_Delete
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_02234E50(void) {
    // push {r3, lr}
    // cmp r1, #5
    // bhi _02234E94
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02234E62: ; jump table
    // bl ov80_0222BA7C
    // pop {r3, pc}
    // bl ov80_0222BAE0
    // pop {r3, pc}
    // bl ov80_0222BB54
    // pop {r3, pc}
    // add r1, r2, #0
    // bl ov80_0222BC48
    // pop {r3, pc}
    // add r1, r2, #0
    // bl ov80_0222BC94
    // pop {r3, pc}
    // bl ov80_0222BCE0
    // pop {r3, pc}
    // TODO: decompile
}



void ov80_02234E98(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // cmp r6, #9
    // bhs _02234EAE
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // ldr r4, [r5, #0x74]
    // bl BattleArcade_GetOpponentMonCount
    // b _02234EB8
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // ldr r4, [r5, #0x70]
    // bl BattleArcade_GetMonCount
    // ldr r3, _02234EC8 ; =ov80_0223DCB8
    // add r1, r4, #0
    // lsl r4, r6, #2
    // add r2, r0, #0
    // ldr r3, [r3, r4]
    // add r0, r5, #0
    // blx r3
    // pop {r4, r5, r6, pc}
    // _02234EC8: .word ov80_0223DCB8
    // TODO: decompile
}



void ov80_02234ECC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r2, #0
    // mov r5, #0
    // str r1, [sp]
    // cmp r7, #0
    // ble _02234F1C
    // ldr r0, [sp]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa4
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // add r4, r0, #0
    // bl _dfltu
    // add r2, r0, #0
    // add r3, r1, #0
    // ldr r0, _02234F20 ; =0x33333333
    // ldr r1, _02234F24 ; =0x3FF33333
    // bl _dmul
    // bl _dfixu
    // str r0, [sp, #4]
    // sub r0, r0, r4
    // str r0, [sp, #4]
    // sub r0, r4, r0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0xa3
    // add r2, sp, #4
    // bl SetMonData
    // add r5, r5, #1
    // cmp r5, r7
    // blt _02234EDA
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02234F20: .word 0x33333333
    // _02234F24: .word 0x3FF33333
    // TODO: decompile
}



void ov80_02234F28(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r2, [sp, #8]
    // str r0, [sp]
    // mov r5, #0
    // ldr r0, [sp, #8]
    // str r1, [sp, #4]
    // str r5, [sp, #0xc]
    // cmp r0, #0
    // ble _02234F98
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r4, r0, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // cmp r6, #3
    // beq _02234F7A
    // cmp r7, #3
    // beq _02234F7A
    // cmp r6, #8
    // beq _02234F7A
    // cmp r7, #8
    // beq _02234F7A
    // cmp r0, #0x11
    // bne _02234F82
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // b _02234F90
    // mov r0, #8
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r1, #0xa0
    // add r2, sp, #0x10
    // bl SetMonData
    // ldr r0, [sp, #8]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02234F3C
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // cmp r1, r0
    // blt _02234FA6
    // ldr r0, [sp]
    // mov r1, #1
    // strb r1, [r0, #0x1f]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_02234FAC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r2, [sp, #8]
    // str r0, [sp]
    // mov r6, #0
    // ldr r0, [sp, #8]
    // add r5, r6, #0
    // str r1, [sp, #4]
    // cmp r0, #0
    // ble _02235012
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r4, r0, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // add r0, r4, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // cmp r7, #4
    // beq _02234FF8
    // ldr r1, [sp, #0xc]
    // cmp r1, #4
    // beq _02234FF8
    // cmp r0, #7
    // bne _02234FFC
    // add r6, r6, #1
    // b _0223500A
    // mov r0, #0x40
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r1, #0xa0
    // add r2, sp, #0x10
    // bl SetMonData
    // ldr r0, [sp, #8]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02234FC0
    // ldr r0, [sp, #8]
    // cmp r6, r0
    // blt _0223501E
    // ldr r0, [sp]
    // mov r1, #1
    // strb r1, [r0, #0x1f]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_02235024(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r2, [sp, #8]
    // str r0, [sp]
    // mov r6, #0
    // ldr r0, [sp, #8]
    // add r5, r6, #0
    // str r1, [sp, #4]
    // cmp r0, #0
    // ble _0223508A
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r4, r0, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // add r0, r4, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // cmp r7, #0xa
    // beq _02235070
    // ldr r1, [sp, #0xc]
    // cmp r1, #0xa
    // beq _02235070
    // cmp r0, #0x29
    // bne _02235074
    // add r6, r6, #1
    // b _02235082
    // mov r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r1, #0xa0
    // add r2, sp, #0x10
    // bl SetMonData
    // ldr r0, [sp, #8]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02235038
    // ldr r0, [sp, #8]
    // cmp r6, r0
    // blt _02235096
    // ldr r0, [sp]
    // mov r1, #1
    // strb r1, [r0, #0x1f]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_0223509C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldrh r0, [r0, #0x20]
    // add r5, r2, #0
    // str r1, [sp, #4]
    // add r1, r5, #0
    // mov r6, #0
    // bl _s32_div_f
    // lsl r0, r1, #0x18
    // lsr r4, r0, #0x18
    // add r7, r6, #0
    // cmp r5, #0
    // ble _0223510A
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa
    // mov r2, #0
    // str r0, [sp, #8]
    // bl GetMonData
    // cmp r0, #0xf
    // beq _022350D4
    // cmp r0, #0x48
    // bne _022350E4
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r6, r6, #1
    // cmp r4, r5
    // blo _02235104
    // mov r4, #0
    // b _02235104
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // mov r1, #0xa0
    // add r2, sp, #0xc
    // bl SetMonData
    // b _0223510A
    // add r7, r7, #1
    // cmp r7, r5
    // blt _022350BA
    // cmp r6, r5
    // blt _02235114
    // ldr r0, [sp]
    // mov r1, #1
    // strb r1, [r0, #0x1f]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_02235118(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r0, [sp]
    // ldrh r0, [r0, #0x20]
    // add r6, r2, #0
    // str r1, [sp, #4]
    // add r1, r6, #0
    // mov r7, #0
    // bl _s32_div_f
    // lsl r0, r1, #0x18
    // lsr r5, r0, #0x18
    // add r0, r7, #0
    // str r0, [sp, #8]
    // cmp r6, #0
    // ble _0223519C
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r4, r0, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0xc]
    // cmp r1, #0xf
    // beq _02235172
    // ldr r1, [sp, #0x10]
    // cmp r1, #0xf
    // beq _02235172
    // cmp r0, #0x28
    // bne _02235182
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // add r7, r7, #1
    // cmp r5, r6
    // blo _02235192
    // mov r5, #0
    // b _02235192
    // mov r0, #0x20
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r1, #0xa0
    // add r2, sp, #0x14
    // bl SetMonData
    // b _0223519C
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, r6
    // blt _02235138
    // cmp r7, r6
    // blt _022351A6
    // ldr r0, [sp]
    // mov r1, #1
    // strb r1, [r0, #0x1f]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_022351AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // add r5, r2, #0
    // bl ov80_02238498
    // cmp r0, #3
    // bhs _022351C4
    // ldr r0, _02235204 ; =ov80_0223DCA0
    // mov r1, #8
    // ldr r4, [r0]
    // b _022351D6
    // cmp r0, #6
    // bhs _022351D0
    // ldr r0, _02235204 ; =ov80_0223DCA0
    // mov r1, #0x14
    // ldr r4, [r0, #4]
    // b _022351D6
    // ldr r0, _02235204 ; =ov80_0223DCA0
    // mov r1, #0xa
    // ldr r4, [r0, #8]
    // ldrh r0, [r7, #0x20]
    // bl _s32_div_f
    // lsl r0, r1, #1
    // ldrh r1, [r4, r0]
    // add r0, sp, #0
    // mov r4, #0
    // strh r1, [r0]
    // cmp r5, #0
    // ble _02235202
    // mov r7, #6
    // add r0, r6, #0
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // add r1, r7, #0
    // add r2, sp, #0
    // bl SetMonData
    // add r4, r4, #1
    // cmp r4, r5
    // blt _022351EC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02235204: .word ov80_0223DCA0
    // TODO: decompile
}



void ov80_02235208(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // add r5, r2, #0
    // bl ov80_02238498
    // cmp r0, #3
    // bhs _02235220
    // ldr r0, _02235260 ; =ov80_0223DCA0
    // mov r1, #0xb
    // ldr r4, [r0, #0xc]
    // b _02235232
    // cmp r0, #6
    // bhs _0223522C
    // ldr r0, _02235260 ; =ov80_0223DCA0
    // mov r1, #0xd
    // ldr r4, [r0, #0x10]
    // b _02235232
    // ldr r0, _02235260 ; =ov80_0223DCA0
    // mov r1, #0xb
    // ldr r4, [r0, #0x14]
    // ldrh r0, [r7, #0x20]
    // bl _s32_div_f
    // lsl r0, r1, #1
    // ldrh r1, [r4, r0]
    // add r0, sp, #0
    // mov r4, #0
    // strh r1, [r0]
    // cmp r5, #0
    // ble _0223525E
    // mov r7, #6
    // add r0, r6, #0
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // add r1, r7, #0
    // add r2, sp, #0
    // bl SetMonData
    // add r4, r4, #1
    // cmp r4, r5
    // blt _02235248
    // pop {r3, r4, r5, r6, r7, pc}
    // _02235260: .word ov80_0223DCA0
    // TODO: decompile
}



void ov80_02235264(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r2, #0
    // mov r4, #0
    // str r1, [sp]
    // cmp r7, #0
    // ble _022352B8
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa1
    // mov r2, #0
    // add r5, r0, #0
    // bl GetMonData
    // add r6, r0, #3
    // cmp r6, #0x64
    // bls _02235290
    // bl GF_AssertFail
    // mov r6, #0x64
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r1, r6, #0
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #8
    // add r2, sp, #4
    // bl SetMonData
    // add r0, r5, #0
    // bl CalcMonLevelAndStats
    // add r4, r4, #1
    // cmp r4, r7
    // blt _02235272
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov80_022352BC(void) {
    // ldr r1, _022352C4 ; =0x000003E9
    // str r1, [r0, #0x14]
    // bx lr
    // nop
    // _022352C4: .word 0x000003E9
    // TODO: decompile
}



void ov80_022352C8(void) {
}



void ov80_022352D0(void) {
}



void ov80_022352D8(void) {
}



void ov80_022352E0(void) {
}



void ov80_022352E8(void) {
    // ldr r1, _022352F0 ; =0x000003EA
    // str r1, [r0, #0x14]
    // bx lr
    // nop
    // _022352F0: .word 0x000003EA
    // TODO: decompile
}



void ov80_022352F4(void) {
    // ldrb r1, [r0, #0x1c]
    // cmp r1, #7
    // bhs _022352FE
    // add r1, r1, #1
    // strb r1, [r0, #0x1c]
    // bx lr
    // TODO: decompile
}



void ov80_02235300(void) {
    // ldrb r1, [r0, #0x1c]
    // cmp r1, #0
    // beq _0223530A
    // sub r1, r1, #1
    // strb r1, [r0, #0x1c]
    // bx lr
    // TODO: decompile
}



void ov80_0223530C(void) {
}



void ov80_02235314(void) {
    // bx lr
    // TODO: decompile
}



void ov80_02235318(void) {
    // bx lr
    // TODO: decompile
}



void ov80_0223531C(void) {
    // bx lr
    // TODO: decompile
}



void ov80_02235320(void) {
    // bx lr
    // TODO: decompile
}



void ov80_02235324(void) {
    // ldrb r3, [r0, #0x10]
    // ldrh r2, [r0, #0x1a]
    // cmp r3, #1
    // bhi _0223533A
    // cmp r2, #8
    // blo _02235334
    // mov r1, #6
    // b _02235346
    // ldr r1, _0223535C ; =ov80_0223C01C
    // ldrb r1, [r1, r2]
    // b _02235346
    // cmp r2, #8
    // blo _02235342
    // mov r1, #0x11
    // b _02235346
    // ldr r1, _02235360 ; =ov80_0223C028
    // ldrb r1, [r1, r2]
    // cmp r3, #0
    // bne _02235356
    // ldrh r0, [r0, #0x18]
    // cmp r0, #0x15
    // beq _02235354
    // cmp r0, #0x31
    // bne _02235356
    // mov r1, #0x14
    // add r0, r1, #0
    // bx lr
    // nop
    // _0223535C: .word ov80_0223C01C
    // _02235360: .word ov80_0223C028
    // TODO: decompile
}



void ov80_02235364(void) {
}


