/* Decompiled from asm/unk_02066EDC.s */
#include "global.h"

void sub_02066EDC(void) {
    Heap_AllocAtEnd(r2, 0x44);
    MI_CpuFill8(0, 0x44);
    Save_PlayerData_GetOptionsAddr(r7);
    *((u32*)(r4 + 0xc)) = r0;
    SaveArray_Party_Get(r7);
    // str r0, [r4]
    Save_Bag_Get(r7);
    *((u32*)(r4 + 4)) = r0;
    // add r0, #0x25
    // strb r2, [r0]
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0x36
    // and r3, r0
    // add r1, #0x36
    // strb r3, [r1]
    // add r1, #0x36
    // add r0, #0xfd
    // add r0, r6, r0
    // add r1, #0x36
    // strb r3, [r1]
    // add r1, #0x37
    // strb r3, [r1]
    // add r1, #0x26
    // strb r3, [r1]
    *((u32*)(r4 + 0x20)) = 0xf;
    // add r0, r5, r2
    // add r0, r4, r2
    // add r0, #0x30
    // strb r1, [r0]
    FieldSystem_LaunchApplication(r6, gOverlayTemplate_PartyMenu, r4, *((u8*)(r5 + 0xd)));
    // str r4, [r0]
}




void sub_02066F90(void) {
    // add r0, #0x26
    // str r0, [r5]
    // str r0, [r5]
    // add r0, #0x30
    // add r1, #0xe
    // add r0, #0x26
    // str r1, [r0]
}




void sub_02066FEC(void) {
    Heap_AllocAtEnd(r2, 0x3c);
    MI_CpuFill8(0, 0x3c);
    Save_PlayerData_GetOptionsAddr(r5);
    *((u32*)(r4 + 4)) = r0;
    SaveArray_Party_Get(r5);
    // str r0, [r4]
    SaveArray_IsNatDexEnabled(r5);
    *((u32*)(r4 + 0x1c)) = r0;
    sub_02088288(r5);
    *((u32*)(r4 + 0x2c)) = r0;
    *((u8*)(r4 + 0x11)) = 1;
    *((u8*)(r4 + 0x14)) = *((u8*)(r6 + 0xd));
    Party_GetCount(*((u32*)r4));
    *((u8*)(r4 + 0x13)) = r0;
    *((u16*)(r4 + 0x18)) = 0;
    *((u8*)(r4 + 0x12)) = *((u8*)(r6 + 9));
    Save_SpecialRibbons_Get(r5);
    *((u32*)(r4 + 0x20)) = r0;
    // add r0, r7, r0
    *((u32*)(r4 + 0x30)) = (0x43 << 2);
    sub_0208828C(r5);
    *((u32*)(r4 + 0x34)) = r0;
    sub_02089D40(r4, _020FE4B0);
    Save_PlayerData_GetProfile(r5);
    sub_0208AD34(r4, r0);
    FieldSystem_LaunchApplication(r7, gOverlayTemplate_PokemonSummary, r4);
    // str r4, [r0]
}




void sub_02067088(void) {
    // str r0, [r1]
}




void sub_020670B0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _020670D4: ; jump table
}




void sub_02067118(void) {
    TaskManager_GetFieldSystem();
    // str r0, [sp]
    Heap_Alloc(0xb, 0x18);
    MI_CpuFill8(0, 0x18);
    *((u8*)(r4 + 8)) = r6;
    *((u8*)(r4 + 9)) = r7;
    // add r0, sp, #8
    *((u8*)(r4 + 0xa)) = *((u8*)(r0 + 0x10));
    *((u8*)(r4 + 0xb)) = *((u8*)(r0 + 0x14));
    *((u8*)(r4 + 0xc)) = *((u8*)(r0 + 0x18));
    *((u8*)(r4 + 0xd)) = *((u8*)(r0 + 0x1c));
    // ldr r0, [sp]
    *((u32*)(r4 + 0x14)) = r5;
    TaskManager_Call(*((u32*)(*((u8*)(r0 + 0x1c)) + 0x10)), sub_020670B0, r4);
}




void sub_02067164(void) {
    // str r0, [r4]
}




void sub_0206718C(void) {
    // str r0, [r4]
}




void sub_020671B0(void) {
    // strh r1, [r0]
}




void sub_02067200(void) {
    TaskManager_GetFieldSystem();
    // str r0, [sp]
    Heap_Alloc(0xb, 0x18);
    MI_CpuFill8(0, 0x18);
    *((u16*)(r4 + 0x12)) = r5;
    *((u16*)(r4 + 0x14)) = r7;
    // ldr r0, [sp]
    *((u16*)(r4 + 0x10)) = r6;
    TaskManager_Call(*((u32*)(r0 + 0x10)), sub_020671B0, r4);
}




void sub_02067238(void) {
    // sub r0, r1, r0
    // strh r0, [r4]
    // strh r0, [r4]
    // strh r0, [r4]
}




void sub_020672A4(void) {
    TaskManager_GetFieldSystem();
    Heap_Alloc(0xb, 4);
    MI_CpuFill8(0, 4);
    // strh r5, [r4]
    *((u16*)(r4 + 2)) = r6;
    TaskManager_Call(*((u32*)(r7 + 0x10)), sub_02067238, r4);
}




u32 sub_020672D8(void) {
    // str r0, [sp]
    // ldr r0, [sp]
}




u32 sub_02067398(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}




void sub_02067484(void) {
    // add r0, #0xa0
    // add r2, r3, r2
    // add r2, r3, r2
    // add r1, r2, r1
}




void sub_020674A4(void) {
    // mul r1, r0
    // _020674AC: .word 0x02E90EDD
}




void sub_020674B0(void) {
    // mul r1, r0
    // _020674B8: .word 0x5D588B65
}




void sub_020674BC(void) {
}




u32 sub_020674E0(void) {
    // str r0, [sp]
    // add r2, sp, #0
    // ldr r0, [sp]
}




u32 sub_0206751C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp]
    // add r2, sp, #0
    // ldr r0, [sp]
}




void FieldSystem_MapIsBattleTowerMultiPartnerSelectRoom(void) {
    // bne _02067592
    // nop
    // _02067598: .word MAP_BATTLE_TOWER_PARTNER_ROOM
}




void sub_0206759C(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // sub r1, r1, r6
}



