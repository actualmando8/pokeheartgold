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
    FieldSystem_ApplicationIsRunning(r1);
    // add r0, #0x26
    // ldrb r0, [r0]
    // str r0, [r5]
    // str r0, [r5]
    // add r0, #0x30
    // add r1, #0xe
    MI_CpuCopy8(*((u32*)*((u32*)(r5 + 0x14))), r5, 6);
    // add r0, #0x26
    // ldrb r0, [r0]
    *((u8*)(r5 + 0xd)) = r4;
    Heap_Free(r4);
    // str r1, [r0]
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
    FieldSystem_ApplicationIsRunning(r1);
    *((u8*)(r4 + 0xd)) = *((u8*)(*((u32*)*((u32*)(r4 + 0x14))) + 0x14));
    Heap_Free(*((u32*)*((u32*)(r4 + 0x14))), *((u8*)(*((u32*)*((u32*)(r4 + 0x14))) + 0x14)));
    // str r0, [r1]
}



void sub_020670B0(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _020670D4: ; jump table
    sub_02066EDC(r5, 0xb);
    *((u32*)(r4 + 4)) = r0;
    sub_02066F90(r5);
    *((u32*)(r4 + 4)) = r0;
    sub_02066FEC(r5, 0xb);
    *((u32*)(r4 + 4)) = r0;
    sub_02067088(r5);
    *((u32*)(r4 + 4)) = r0;
    Heap_Free();
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
    sub_0203A05C(*((u32*)(r1 + 0xc)));
    NintendoWifiConnection_LaunchApp(r5, *((u16*)(r4 + 0x12)), *((u16*)(r4 + 0x14)));
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r4]
}



void sub_0206718C(void) {
    FieldSystem_ApplicationIsRunning(r1);
    // str r0, [r4]
    Heap_Free(*((u32*)(r4 + 8)));
}



void sub_020671B0(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    sub_02067164(r5);
    *((u32*)(r4 + 4)) = r0;
    sub_0206718C(r5);
    *((u32*)(r4 + 4)) = r0;
    GetVarPointer(r5, *((u16*)(r4 + 0x10)));
    // strh r1, [r0]
    Heap_Free(r4, *((u32*)r4));
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
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    sub_0203769C();
    // sub r0, r1, r0
    sub_02037C44(1);
    GetVarPointer(r6, *((u16*)(r5 + 2)));
    // ldrh r0, [r5]
    sub_0204B610(r6, r7);
    // strh r0, [r4]
    sub_0204B66C(r6, r7);
    // strh r0, [r4]
    sub_0204B690(r6, r7);
    // strh r0, [r4]
    Heap_Free(r5);
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



u32 sub_020672D8(void) {
    Save_Frontier_GetStatic();
    FrontierSave_GetStat(0, 0xff);
    // str r0, [sp]
    Save_FrontierData_Get(r4);
    sub_0202D5DC(0xd, 0);
    sub_0202D5DC(r4, 0, 0);
    sub_0202D5DC(r4, 1, 0);
    sub_0202D5DC(r4, 0xe, 0);
    sub_0202D5DC(r4, 2, 0);
    sub_0202D5DC(r4, 3, 0);
    sub_0202D5DC(r4, 0xd, 1);
    // ldr r0, [sp]
    sub_0202D5DC(r4, 0, 1);
    sub_0202D5DC(r4, 1, 1);
}



u32 sub_02067398(void) {
    Save_Frontier_GetStatic();
    FrontierSave_GetStat(0, 0xff);
    // str r0, [sp, #8]
    Save_FrontierData_Get(r4);
    sub_0202D5DC(0xd, 0);
    sub_0202D5DC(r7, 0, 0);
    sub_0202D5DC(r7, 1, 0);
    sub_0202D5DC(r7, 0xe, 0);
    // str r0, [sp, #4]
    sub_0202D5DC(r7, 2, 0);
    // str r0, [sp]
    sub_0202D5DC(r7, 3, 0);
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}



void sub_02067484(void) {
    // add r0, #0xa0
    // add r2, r3, r2
    *((u16*)(*((u32*)r0) + 0x24)) = *((u32*)r1);
    // add r2, r3, r2
    *((u16*)(*((u32*)r0) + 0x28)) = *((u32*)(r1 + 4));
    // add r1, r2, r1
    *((u16*)(*((u32*)r0) + 0x26)) = *((u32*)(r1 + 8));
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
}



u32 sub_020674E0(void) {
    Save_FrontierData_Get();
    sub_0202D63C();
    sub_020674B0();
    sub_0202D638(r6, r0);
    sub_020674A4(r4);
    // str r0, [sp]
    sub_0202D908(r5);
    // add r2, sp, #0
    sub_0202D308(0xa);
    // ldr r0, [sp]
}



u32 sub_0206751C(void) {
    Save_FrontierData_Get();
    sub_0202D908(r6);
    sub_0202D63C(r4);
    sub_020674A4();
    // str r0, [sp]
    sub_0202D284(r5, 0, 0);
    sub_0202D57C(r4, ((r0 << 0x10) >> 0x10), 0);
    // mul r5, r1
    // ldr r0, [sp]
    sub_020674A4(0x18);
    // str r0, [sp]
    sub_0202D908(r6);
    // add r2, sp, #0
    sub_0202D308(0xa);
    // ldr r0, [sp]
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
    // str r1, [sp]
    Save_TrainerCard_Get();
    TrainerCard_GetBadgeShininessArr();
    Save_PlayerData_GetProfile(r5);
    // ldr r0, [sp]
    // mul r6, r1
    PlayerProfile_TestBadgeFlag(r0, 0);
    GetShininessOfBadgeI(r5, r4);
    // sub r1, r1, r6
    GF_AssertFail(r0);
    SetShininessOfBadgeI(r5, 0, r4);
}


