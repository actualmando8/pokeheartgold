/* Decompiled from asm/unk_02066EDC.s */
#include "global.h"

void sub_02066EDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r0, r2, #0
    // mov r1, #0x44
    // bl Heap_AllocAtEnd
    // ldr r7, [r6, #0xc]
    // mov r1, #0
    // mov r2, #0x44
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r7, #0
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #0xc]
    // add r0, r7, #0
    // bl SaveArray_Party_Get
    // str r0, [r4]
    // add r0, r7, #0
    // bl Save_Bag_Get
    // str r0, [r4, #4]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0x25
    // strb r2, [r0]
    // add r0, r4, #0
    // ldrb r1, [r5, #8]
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x36
    // ldrb r1, [r0]
    // mov r0, #0xf
    // ldrb r3, [r5, #0xa]
    // bic r1, r0
    // mov r0, #0xf
    // and r3, r0
    // orr r3, r1
    // add r1, r4, #0
    // add r1, #0x36
    // strb r3, [r1]
    // add r1, r4, #0
    // add r1, #0x36
    // add r0, #0xfd
    // ldrb r1, [r1]
    // mov r3, #0xf0
    // add r0, r6, r0
    // bic r1, r3
    // ldrb r3, [r5, #0xb]
    // lsl r3, r3, #0x1c
    // lsr r3, r3, #0x18
    // orr r3, r1
    // add r1, r4, #0
    // add r1, #0x36
    // strb r3, [r1]
    // add r1, r4, #0
    // ldrb r3, [r5, #0xc]
    // add r1, #0x37
    // strb r3, [r1]
    // add r1, r4, #0
    // ldrb r3, [r5, #0xd]
    // add r1, #0x26
    // strb r3, [r1]
    // str r0, [r4, #0x20]
    // add r0, r5, r2
    // ldrb r1, [r0, #0xe]
    // add r0, r4, r2
    // add r0, #0x30
    // strb r1, [r0]
    // add r0, r2, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #6
    // blo _02066F64
    // ldr r1, _02066F8C ; =gOverlayTemplate_PartyMenu
    // add r0, r6, #0
    // add r2, r4, #0
    // bl FieldSystem_LaunchApplication
    // ldr r0, [r5, #0x14]
    // str r4, [r0]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02066F8C: .word gOverlayTemplate_PartyMenu
    // TODO: decompile
}


void sub_02066F90(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // beq _02066FA2
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // ldr r4, [r0]
    // add r0, r4, #0
    // add r0, #0x26
    // ldrb r0, [r0]
    // cmp r0, #6
    // beq _02066FBC
    // cmp r0, #7
    // bne _02066FC4
    // mov r0, #0
    // str r0, [r5]
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // str r0, [r5]
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r5, #0
    // add r0, #0x30
    // add r1, #0xe
    // mov r2, #6
    // bl MI_CpuCopy8
    // add r0, r4, #0
    // add r0, #0x26
    // ldrb r0, [r0]
    // strb r0, [r5, #0xd]
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // str r1, [r0]
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02066FEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r6, r0, #0
    // ldr r5, [r7, #0xc]
    // add r0, r2, #0
    // mov r1, #0x3c
    // bl Heap_AllocAtEnd
    // mov r1, #0
    // mov r2, #0x3c
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r5, #0
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl SaveArray_Party_Get
    // str r0, [r4]
    // add r0, r5, #0
    // bl SaveArray_IsNatDexEnabled
    // str r0, [r4, #0x1c]
    // add r0, r5, #0
    // bl sub_02088288
    // str r0, [r4, #0x2c]
    // mov r0, #1
    // strb r0, [r4, #0x11]
    // ldrb r0, [r6, #0xd]
    // strb r0, [r4, #0x14]
    // ldr r0, [r4]
    // bl Party_GetCount
    // strb r0, [r4, #0x13]
    // mov r0, #0
    // strh r0, [r4, #0x18]
    // ldrb r0, [r6, #9]
    // strb r0, [r4, #0x12]
    // add r0, r5, #0
    // bl Save_SpecialRibbons_Get
    // str r0, [r4, #0x20]
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r7, r0
    // str r0, [r4, #0x30]
    // add r0, r5, #0
    // bl sub_0208828C
    // str r0, [r4, #0x34]
    // ldr r1, _02067080 ; =_020FE4B0
    // add r0, r4, #0
    // bl sub_02089D40
    // add r0, r5, #0
    // bl Save_PlayerData_GetProfile
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_0208AD34
    // ldr r1, _02067084 ; =gOverlayTemplate_PokemonSummary
    // add r0, r7, #0
    // add r2, r4, #0
    // bl FieldSystem_LaunchApplication
    // ldr r0, [r6, #0x14]
    // str r4, [r0]
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02067080: .word _020FE4B0
    // _02067084: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}


void sub_02067088(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // beq _0206709A
    // mov r0, #3
    // pop {r4, pc}
    // ldr r0, [r4, #0x14]
    // ldr r0, [r0]
    // ldrb r1, [r0, #0x14]
    // strb r1, [r4, #0xd]
    // bl Heap_Free
    // ldr r1, [r4, #0x14]
    // mov r0, #0
    // str r0, [r1]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020670B0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4, #4]
    // cmp r1, #4
    // bhi _02067112
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _020670D4: ; jump table
    // add r1, r5, #0
    // mov r2, #0xb
    // bl sub_02066EDC
    // str r0, [r4, #4]
    // b _02067112
    // add r1, r5, #0
    // bl sub_02066F90
    // str r0, [r4, #4]
    // b _02067112
    // add r1, r5, #0
    // mov r2, #0xb
    // bl sub_02066FEC
    // str r0, [r4, #4]
    // b _02067112
    // add r1, r5, #0
    // bl sub_02067088
    // str r0, [r4, #4]
    // b _02067112
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02067118(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl TaskManager_GetFieldSystem
    // str r0, [sp]
    // mov r0, #0xb
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x18
    // bl MI_CpuFill8
    // strb r6, [r4, #8]
    // strb r7, [r4, #9]
    // add r0, sp, #8
    // ldrb r1, [r0, #0x10]
    // add r2, r4, #0
    // strb r1, [r4, #0xa]
    // ldrb r1, [r0, #0x14]
    // strb r1, [r4, #0xb]
    // ldrb r1, [r0, #0x18]
    // strb r1, [r4, #0xc]
    // ldrb r0, [r0, #0x1c]
    // ldr r1, _02067160 ; =sub_020670B0
    // strb r0, [r4, #0xd]
    // ldr r0, [sp]
    // str r5, [r4, #0x14]
    // ldr r0, [r0, #0x10]
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02067160: .word sub_020670B0
    // TODO: decompile
}


void sub_02067164(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // ldr r0, [r5, #0xc]
    // bl sub_0203A05C
    // cmp r0, #0
    // beq _02067184
    // ldrh r1, [r4, #0x12]
    // ldrh r2, [r4, #0x14]
    // add r0, r5, #0
    // bl NintendoWifiConnection_LaunchApp
    // str r0, [r4, #8]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // str r0, [r4]
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_0206718C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // beq _0206719E
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #0x20]
    // str r0, [r4]
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // mov r0, #2
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020671B0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // beq _020671D2
    // cmp r1, #1
    // beq _020671DC
    // cmp r1, #2
    // beq _020671E6
    // b _020671FC
    // add r1, r5, #0
    // bl sub_02067164
    // str r0, [r4, #4]
    // b _020671FC
    // add r1, r5, #0
    // bl sub_0206718C
    // str r0, [r4, #4]
    // b _020671FC
    // ldrh r1, [r4, #0x10]
    // add r0, r5, #0
    // bl GetVarPointer
    // ldr r1, [r4]
    // strh r1, [r0]
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02067200(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl TaskManager_GetFieldSystem
    // str r0, [sp]
    // mov r0, #0xb
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x18
    // bl MI_CpuFill8
    // strh r5, [r4, #0x12]
    // strh r7, [r4, #0x14]
    // ldr r0, [sp]
    // strh r6, [r4, #0x10]
    // ldr r0, [r0, #0x10]
    // ldr r1, _02067234 ; =sub_020671B0
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // _02067234: .word sub_020671B0
    // TODO: decompile
}


void sub_02067238(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r5, r0, #0
    // bl sub_0203769C
    // mov r1, #1
    // sub r0, r1, r0
    // bl sub_02037C44
    // add r7, r0, #0
    // bne _0206725E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r1, [r5, #2]
    // add r0, r6, #0
    // bl GetVarPointer
    // add r4, r0, #0
    // ldrh r0, [r5]
    // cmp r0, #0
    // beq _02067278
    // cmp r0, #1
    // beq _02067284
    // cmp r0, #2
    // beq _02067290
    // b _0206729A
    // add r0, r6, #0
    // add r1, r7, #0
    // bl sub_0204B610
    // strh r0, [r4]
    // b _0206729A
    // add r0, r6, #0
    // add r1, r7, #0
    // bl sub_0204B66C
    // strh r0, [r4]
    // b _0206729A
    // add r0, r6, #0
    // add r1, r7, #0
    // bl sub_0204B690
    // strh r0, [r4]
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020672A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r2, #0
    // bl TaskManager_GetFieldSystem
    // add r7, r0, #0
    // mov r0, #0xb
    // mov r1, #4
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #4
    // bl MI_CpuFill8
    // strh r5, [r4]
    // strh r6, [r4, #2]
    // ldr r0, [r7, #0x10]
    // ldr r1, _020672D4 ; =sub_02067238
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020672D4: .word sub_02067238
    // TODO: decompile
}


void sub_020672D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // bl Save_Frontier_GetStatic
    // mov r1, #0
    // mov r2, #0xff
    // bl FrontierSave_GetStat
    // str r0, [sp]
    // cmp r0, #0x14
    // bhs _020672F2
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl Save_FrontierData_Get
    // mov r1, #0xd
    // mov r2, #0
    // add r4, r0, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r7, r0, #0x18
    // add r0, r4, #0
    // add r2, r1, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0
    // bl sub_0202D5DC
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0
    // bl sub_0202D5DC
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0
    // bl sub_0202D5DC
    // cmp r7, #0
    // beq _02067350
    // cmp r6, #0
    // beq _02067350
    // cmp r5, #0
    // beq _02067350
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r7, #0
    // bne _02067362
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #1
    // bl sub_0202D5DC
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // cmp r0, #0x32
    // bhs _0206736C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r6, #0
    // bne _0206737E
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl sub_0202D5DC
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0x64
    // blo _02067386
    // cmp r5, #0
    // beq _0206738A
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl sub_0202D5DC
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02067398(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl Save_Frontier_GetStatic
    // mov r1, #0
    // mov r2, #0xff
    // bl FrontierSave_GetStat
    // str r0, [sp, #8]
    // cmp r0, #0x14
    // bhs _020673B6
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl Save_FrontierData_Get
    // mov r1, #0xd
    // mov r2, #0
    // add r7, r0, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r6, r0, #0x18
    // add r0, r7, #0
    // add r2, r1, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r7, #0
    // mov r1, #1
    // mov r2, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // add r0, r7, #0
    // mov r1, #0xe
    // mov r2, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, r7, #0
    // mov r1, #2
    // mov r2, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // add r0, r7, #0
    // mov r1, #3
    // mov r2, #0
    // bl sub_0202D5DC
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r6, #0
    // beq _02067426
    // cmp r4, #0
    // beq _02067426
    // cmp r5, #0
    // beq _02067426
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r6, #0
    // bne _0206743C
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02067436
    // add sp, #0xc
    // mov r0, #4
    // pop {r4, r5, r6, r7, pc}
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // cmp r0, #0x32
    // bhs _02067448
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r4, #0
    // bne _0206745E
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _02067458
    // add sp, #0xc
    // mov r0, #5
    // pop {r4, r5, r6, r7, pc}
    // add sp, #0xc
    // mov r0, #2
    // pop {r4, r5, r6, r7, pc}
    // cmp r0, #0x64
    // bhs _02067468
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r5, #0
    // beq _02067472
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r1, #0
    // beq _0206747C
    // add sp, #0xc
    // mov r0, #6
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #3
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02067484(void) {
    // add r0, #0xa0
    // ldr r0, [r0]
    // ldr r2, [r1]
    // ldrh r3, [r0, #0x24]
    // add r2, r3, r2
    // strh r2, [r0, #0x24]
    // ldrh r3, [r0, #0x28]
    // ldr r2, [r1, #4]
    // add r2, r3, r2
    // strh r2, [r0, #0x28]
    // ldrh r2, [r0, #0x26]
    // ldr r1, [r1, #8]
    // add r1, r2, r1
    // strh r1, [r0, #0x26]
    // bx lr
    // TODO: decompile
}


void sub_020674A4(void) {
    // ldr r1, _020674AC ; =0x02E90EDD
    // mul r1, r0
    // add r0, r1, #1
    // bx lr
    // _020674AC: .word 0x02E90EDD
    // TODO: decompile
}


void sub_020674B0(void) {
    // ldr r1, _020674B8 ; =0x5D588B65
    // mul r1, r0
    // add r0, r1, #1
    // bx lr
    // _020674B8: .word 0x5D588B65
    // TODO: decompile
}


void sub_020674BC(void) {
    Save_FriendGroup_Get();
    sub_0202C7DC();
    sub_020674B0();
    Save_FrontierData_Get(r5);
    sub_0202D638(r4);
}


void sub_020674E0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // bl Save_FrontierData_Get
    // add r6, r0, #0
    // bl sub_0202D63C
    // bl sub_020674B0
    // add r4, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl sub_0202D638
    // add r0, r4, #0
    // bl sub_020674A4
    // str r0, [sp]
    // add r0, r5, #0
    // bl sub_0202D908
    // mov r1, #0xa
    // add r2, sp, #0
    // bl sub_0202D308
    // ldr r0, [sp]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void sub_0206751C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r0, #0
    // bl Save_FrontierData_Get
    // add r4, r0, #0
    // add r0, r6, #0
    // bl sub_0202D908
    // add r5, r0, #0
    // add r0, r4, #0
    // bl sub_0202D63C
    // bl sub_020674A4
    // mov r1, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl sub_0202D284
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // mov r2, #0
    // bl sub_0202D57C
    // mov r1, #0x18
    // add r5, r0, #0
    // mul r5, r1
    // mov r4, #0
    // cmp r5, #0
    // ble _0206756E
    // ldr r0, [sp]
    // bl sub_020674A4
    // add r4, r4, #1
    // str r0, [sp]
    // cmp r4, r5
    // blt _02067562
    // add r0, r6, #0
    // bl sub_0202D908
    // mov r1, #0xa
    // add r2, sp, #0
    // bl sub_0202D308
    // ldr r0, [sp]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void FieldSystem_MapIsBattleTowerMultiPartnerSelectRoom(void) {
    // ldr r0, [r0, #0x20]
    // ldr r1, [r0]
    // ldr r0, _02067598 ; =MAP_BATTLE_TOWER_PARTNER_ROOM
    // cmp r1, r0
    // bne _02067592
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02067598: .word MAP_BATTLE_TOWER_PARTNER_ROOM
    // TODO: decompile
}


void sub_0206759C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r1, [sp]
    // cmp r1, #0
    // ble _02067606
    // bl Save_TrainerCard_Get
    // bl TrainerCard_GetBadgeShininessArr
    // add r4, r0, #0
    // add r0, r5, #0
    // bl Save_PlayerData_GetProfile
    // add r7, r0, #0
    // ldr r0, [sp]
    // mov r1, #0xa
    // add r6, r0, #0
    // mov r5, #0
    // mul r6, r1
    // add r0, r7, #0
    // add r1, r5, #0
    // bl PlayerProfile_TestBadgeFlag
    // cmp r0, #0
    // beq _020675FC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetShininessOfBadgeI
    // add r1, r0, #0
    // cmp r1, #0
    // ble _020675E4
    // cmp r1, #0xc8
    // bge _020675E4
    // sub r1, r1, r6
    // b _020675EE
    // cmp r1, #0xc8
    // blt _020675EC
    // bl GF_AssertFail
    // mov r1, #0
    // cmp r1, #0
    // bge _020675F4
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r4, #0
    // bl SetShininessOfBadgeI
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #8
    // blo _020675C2
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}

