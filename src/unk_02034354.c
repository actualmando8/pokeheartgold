/* Decompiled from asm/unk_02034354.s */
#include "global.h"

void sub_02034354(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    Save_PlayerData_GetProfile();
    // str r0, [sp, #8]
    Heap_Alloc(0xf, (0xea << 2));
    // str r0, [r1]
    MI_CpuFill8(0, (0xea << 2));
    // add r0, #0x2c
    // add r2, r0, r4
    // add r1, r1, r5
    // str r2, [r1, r0]
    sub_020346E8(0, *((u32*)_021D4130));
    // add r4, #0x68
    // strb r0, [r3, r1]
    // strb r0, [r4, r3]
    // sub r1, #0x58
    // strb r0, [r4, r3]
    // ldr r0, [sp]
    *((u32*)(*((u32*)_021D4130) + 8)) = 0;
    // ldr r0, [sp, #4]
    *((u32*)(*((u32*)_021D4130) + 4)) = 0;
    // ldr r0, [sp, #8]
    PlayerProfile_Copy(0, *((u32*)(*((u32*)_021D4130) + (0xe9 << 2))), *((u32*)_021D4130), *((u32*)_021D4130));
}




void sub_020343E4(void) {
    // add r2, r2, r5
    // str r3, [r2, r0]
    Heap_Free(*((u32*)_021D4130), _021D4130, *((u32*)_021D4130), 0);
    // str r1, [r0]
}




void sub_02034420(void) {
    // ldr r0, _02034430 ; =_021D4130
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0203442C
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02034430: .word _021D4130
    // TODO: decompile
}




void sub_02034434(void) {
    sub_0203769C();
    Save_FriendGroup_Get(*((u32*)(*((u32*)_021D4130) + 8)));
    // str r0, [sp]
    sub_0202C6F4(*((u32*)(*((u32*)_021D4130) + 8)));
    Save_WiFiHistory_Get(*((u32*)(*((u32*)_021D4130) + 8)));
    Save_PlayerData_GetProfile(*((u32*)(*((u32*)_021D4130) + 8)), *((u32*)_021D4130));
    // add r2, r2, r1
    PlayerProfile_Copy(*((u32*)(*((u32*)_021D4130) + (0xd3 << 2))), *((u32*)_021D4130));
    // add r0, #0x68
    // add r0, r0, r5
    OS_GetMacAddress(*((u32*)_021D4130));
    // ldr r0, [sp]
    sub_0202C7E0(1, 0);
    // add r1, #0x58
    // add r1, r1, r5
    MI_CpuCopy8(*((u32*)_021D4130), 0x10);
    WifiHistory_GetPlayerCountry(r6);
    // add r1, r1, r5
    // add r1, #0x6f
    // strb r0, [r1]
    WiFiHistory_GetPlayerRegion(r6, *((u32*)_021D4130));
    // add r1, r1, r5
    // add r1, #0x70
    // strb r0, [r1]
    // add r0, r0, r5
    // add r0, #0x71
    // strb r1, [r0]
    sub_0202C08C(r7, 0, _021D4130);
    // add r1, #0x4c
    // add r1, r1, r5
    DWC_CreateExchangeToken(*((u32*)_021D4130));
    // add r0, #0xc
    // add r0, r0, r5
    MI_CpuFill8(*((u32*)_021D4130), 0, 0x20);
    // add r1, #0xc
    // add r1, r1, r5
    LinkBattleRuleset_Copy(*((u32*)(*((u32*)_021D4130) + 4)), *((u32*)_021D4130));
    // add r1, #0xc
    // add r1, r1, r5
    sub_02037030(3, *((u32*)_021D4130), 0x68);
}




u8 sub_02034520(void) {
}




void sub_02034524(void) {
    // strb r1, [r2, r0]
}




void sub_0203453C(void) {
    sub_020373B4(((r0 << 0x10) >> 0x10), *((u32*)_021D4130));
    // add r1, #0x62
    // add r5, #0xc
    // add r1, r5, r3
    MI_CpuCopy8(r4, *((u8*)r4), 0x68, (*((u8*)r4) * 0x68));
    // add r4, #0x62
    // strb r3, [r2, r0]
    // sub r0, #0x5a
    // add r1, r2, r1
    PlayerProfile_IsNameEmpty(*((u32*)((*((u8*)(*((u32*)_021D4130) + 0x000003A6)) << 2) + 0x000003A6)), (*((u8*)(*((u32*)_021D4130) + 0x000003A6)) << 2), *((u32*)_021D4130), *((u8*)r4));
    // add r1, #0xa
    // add r4, r3, r0
    // strb r1, [r4, r3]
    // add r0, #0xa
    sub_0203769C((0xe7 << 2), *((u32*)_021D4130), _021D4130, *((u8*)(*((u32*)_021D4130) + (0xe7 << 2))));
    // add r1, r0, r4
    // strb r2, [r1, r0]
}




void sub_020345D0(void) {
    // add r1, #0xc
    // add r1, r1, r4
    MI_CpuCopy8(r2, *((u32*)_021D4130), 0x68, 0x68);
    // add r0, #0x68
    // add r0, r0, r4
    sub_020357C4(*((u32*)_021D4130), r5);
    // add r1, r0, r5
    // strb r2, [r1, r0]
    sub_0203769C((0xe7 << 2), 1);
    // add r1, r0, r5
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
}




void sub_02034638(void) {
    sub_0203769C(0, *((u32*)_021D4130));
    sub_02037824(5);
    // add r1, r2, r4
    // add r0, r2, r5
    // add r0, #0x6e
    // strb r4, [r0]
    PlayerProfile_sizeof(_021D4130, *((u32*)_021D4130));
    // add r1, r6, r7
    // add r6, #0x2c
    // add r1, r6, r5
    MI_CpuCopy8(*((u32*)(r1 + (0xd3 << 2))), r0);
    // add r1, #0xc
    // add r1, r1, r5
    sub_0203753C(4, *((u32*)_021D4130), 0x68);
    // add r5, #0x68
    sub_0203753C(5, 0, 0);
    // strb r2, [r1, r0]
}




void sub_020346D4(void) {
    // ldr r0, _020346E0 ; =_021D4130
    // ldr r1, [r0]
    // ldr r0, _020346E4 ; =0x000003A5
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _020346E0: .word _021D4130
    // _020346E4: .word 0x000003A5
    // TODO: decompile
}




void sub_020346E8(void) {
    // add r1, r1, r0
    PlayerProfile_Init(*((u32*)(*((u32*)_021D4130) + (0xd3 << 2))), *((u32*)_021D4130));
    // add r1, r0, r4
    // strb r2, [r1, r0]
}




int sub_02034714(void) {
    // add r1, r1, r0
}




int sub_02034730(void) {
    // add r1, r1, r0
}




int sub_02034750(void) {
    // add r1, r1, r0
}




void sub_0203476C(void) {
    // add r1, r1, r0
    // strb r2, [r1, r0]
}




void sub_02034780(void) {
    // ldr r1, _0203479C ; =_021D4130
    // mov r0, #0
    // ldr r3, [r1]
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // ldrb r2, [r3, r1]
    // cmp r2, #1
    // beq _0203479A
    // add r0, r0, #1
    // add r3, r3, #1
    // cmp r0, #8
    // blt _0203478A
    // mov r0, #0xff
    // bx lr
    // _0203479C: .word _021D4130
    // TODO: decompile
}




void sub_020347A0(void) {
    // push {r3, r4}
    // ldr r1, _020347C8 ; =_021D4130
    // mov r0, #0
    // ldr r4, [r1]
    // mov r1, #0xe7
    // add r3, r0, #0
    // lsl r1, r1, #2
    // ldrb r2, [r4, r1]
    // cmp r2, #2
    // beq _020347B8
    // cmp r2, #3
    // bne _020347BA
    // add r0, r0, #1
    // add r3, r3, #1
    // add r4, r4, #1
    // cmp r3, #8
    // blt _020347AE
    // pop {r3, r4}
    // bx lr
    // nop
    // _020347C8: .word _021D4130
    // TODO: decompile
}




void sub_020347CC(void) {
    sub_02037454(*((u32*)_021D4130));
    sub_020373B4(((r5 << 0x10) >> 0x10));
    // add r0, r0, r4
    sub_020346E8(r4);
}




PlayerProfile * sub_02034818(void) {
    // add r2, r3, r0
    // add r1, r3, r0
}




void sub_0203484C(void) {
    // add r2, r3, r0
    // add r3, #0x4c
    // add r0, r3, r1
}




void sub_02034870(void) {
    // add r1, r0, #0
    // ldr r0, _0203487C ; =_021D4130
    // ldr r3, _02034880 ; =sub_0203A378
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // bx r3
    // _0203487C: .word _021D4130
    // _02034880: .word sub_0203A378
    // TODO: decompile
}




void sub_02034884(void) {
    // add r2, r3, r0
    // add r3, #0x58
    // add r0, r3, r1
}




void sub_020348A8(void) {
    // add r2, r3, r0
    // add r0, r3, r1
    // add r0, #0x6f
}




void sub_020348CC(void) {
    // add r2, r3, r0
    // add r0, r3, r1
    // add r0, #0x70
}




void sub_020348F0(void) {
    sub_020373B4(((0 << 0x10) >> 0x10));
    // add r1, r0, r4
    sub_020373B4((((r4 + 1) << 0x10) >> 0x10));
    // add r2, r0, r4
    // add r2, r0, r5
    // add r3, #0x74
    // add r5, #0x68
}




void sub_02034960(void) {
    sub_0203769C(*((u32*)_021D4130));
    sub_020378AC();
    // and r0, r1
    // str r0, [sp]
    sub_02037454(1);
    sub_020373B4(((r4 << 0x10) >> 0x10));
    // add r2, r0, r4
    sub_020378AC(r4, *((u8*)(r2 + (0xe7 << 2))));
    // and r1, r0
    // ldr r0, [sp]
    // add r0, r0, r5
    // add r2, r1, r6
    // strh r2, [r0, r1]
    sub_020378AC(r4, (0xdb << 2));
    // and r1, r0
    // ldr r0, [sp]
    // add r0, r0, r5
    // add r2, r1, r6
    // strh r2, [r0, r1]
    // add r0, r0, r5
    // add r2, r1, r6
    // strh r2, [r0, r1]
    sub_02037454(*((u32*)_021D4130), (0x37 << 4));
}




void sub_02034A20(void) {
    sub_0202C6F4();
    // str r0, [sp, #4]
    sub_02037454();
    sub_0203484C(r4);
    // add r2, sp, #8
    sub_0203A084(r7, r0);
    // ldr r0, [sp, #8]
    GF_AssertFail();
    // add r6, r0, r5
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    sub_0202C4F0(*((u16*)(r6 + (0x37 << 4))), *((u16*)(r6 + (0xdb << 2))), *((u16*)(r6 + 0x0000036E)));
    sub_02037454();
    // add r7, r7, r1
    // strh r0, [r7, r3]
    // add r7, r7, r1
    // strh r0, [r7, r4]
    // add r7, r7, r1
    // strh r0, [r7, r5]
}




void sub_02034AC0(void) {
    // mvn r0, r0
}




void sub_02034AEC(void) {
}




void sub_02034B00(void) {
    // str r0, [r1]
}



