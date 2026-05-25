/* Decompiled from asm/unk_02074E5C.s */
#include "global.h"

void sub_02074E5C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x10
    // tst r0, r1
    // bne _02074EB6
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r6, r0, #0
    // ldr r0, _02074EB8 ; =_020FFE30
    // mov r1, #0xc
    // add r2, r5, #0
    // bl sub_0203410C
    // str r5, [r4]
    // mov r0, #0
    // strb r0, [r4, #4]
    // str r5, [r6]
    // strb r0, [r6, #4]
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov12_0223BBFC
    // add r0, r5, #0
    // add r1, r6, #4
    // bl ov12_0223BC08
    // ldr r0, _02074EBC ; =sub_02075434
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, _02074EC0 ; =sub_020754C0
    // add r1, r6, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // _02074EB8: .word _020FFE30
    // _02074EBC: .word sub_02075434
    // _02074EC0: .word sub_020754C0
    // TODO: decompile
}



void sub_02074EC4(void) {
    // ldr r3, _02074ED0 ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _02074ED4 ; =_020FFE30
    // mov r1, #0xc
    // bx r3
    // nop
    // _02074ED0: .word sub_0203410C
    // _02074ED4: .word _020FFE30
    // TODO: decompile
}



u8 sub_02074ED8(void) {
}



void sub_02074EDC(void) {
}



void sub_02074EE4(void) {
}



void sub_02074EEC(void) {
}



u8 sub_02074EF4(void) {
}



void sub_02074EF8(void) {
    // tst r1, r2
    // add r0, r3, r0
    // add r0, #0xf8
    // add r0, r3, r0
    // add r0, #0xf8
}



void sub_02074F18(void) {
    // tst r2, r3
    // add r1, #0x28
    // mul r0, r2
    // add r0, r1, r0
    // add r1, #0x28
    // mul r2, r0
    // add r0, r1, r2
}



void sub_02074F38(void) {
    // tst r1, r2
    // add r0, r3, r0
    // add r0, r3, r0
}



void sub_02074F54(void) {
    // tst r2, r1
    // add r0, r3, r0
    // add r1, #0x98
    // ldr r0, [r0, r1]
    // add r0, r3, r0
    // add r1, #0x98
    // ldr r0, [r0, r1]
}



void sub_02074F74(void) {
    // add r0, #0x5c
}



void sub_02074F7C(void) {
    // add r0, #0xc4
}



void sub_02074F84(void) {
    // ldr r0, [r1]
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}



void sub_02074F8C(void) {
    // ldr r0, [r1]
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}



void sub_02074F94(void) {
    // add r0, r1, r0
}



void sub_02074F9C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    Heap_Alloc(5, 4);
    // ldr r0, [sp]
    BattleSystem_GetSendBufferPtr();
    // ldr r0, [sp]
    ov12_0223A960();
    // ldr r0, [sp]
    ov12_0223A96C();
    // mov ip, r0
    // add r0, sp, #0x10
    // ldrh r3, [r4]
    // add r2, r1, r0
    // mov r1, ip
    // strh r3, [r1]
    // strh r1, [r4]
    // ldr r1, [sp, #4]
    // strb r1, [r6]
    // ldr r1, [sp, #8]
    *((u8*)(r6 + 1)) = 0;
    // add r1, sp, #0x10
    *((u16*)(r6 + 2)) = *((u8*)(0 + 0x10));
    // ldrb r2, [r6, r3]
    // ldrh r1, [r4]
    // strb r2, [r5, r1]
    // ldrh r1, [r4]
    // strh r1, [r4]
    // ldrb r2, [r7, r3]
    // ldrh r1, [r4]
    // strb r2, [r5, r1]
    // ldrh r1, [r4]
    // strh r1, [r4]
    Heap_Free(r6, ((*((u8*)(0 + 0x10)) + 1) + 1), (0 + 1));
}



void sub_02075028(void) {
    // str r3, [sp]
    BattleSystem_GetRecvBufferPtr(r3);
    // ldr r0, [sp]
    ov12_0223A984();
    // ldr r0, [sp]
    ov12_0223A990();
    // ldrh r1, [r4]
    // add r2, r1, r5
    // strh r1, [r0]
    // strh r0, [r4]
    // ldrb r2, [r6, r0]
    // ldrh r1, [r4]
    // strb r2, [r7, r1]
    // ldrh r1, [r4]
    // strh r1, [r4]
}



void sub_02075074(void) {
    sub_02037190();
    sub_02037B38(0x33, (0x42 << 2));
    // add r1, sp, #0xc
    sub_02037030(0x18, 4);
}



void sub_020750B4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r3, #0
    // ldr r5, [r2]
    // ldr r2, [r4]
    // lsl r1, r0, #2
    // add r3, r2, r1
    // mov r2, #0x5f
    // lsl r2, r2, #2
    // str r5, [r3, r2]
    // ldr r3, [r4]
    // add r1, r3, r1
    // ldr r1, [r1, r2]
    // bl sub_0203049C
    // ldr r0, _020750DC ; =0x00001020
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _020750DC: .word 0x00001020
    // TODO: decompile
}



void sub_020750E0(void) {
    sub_02037190();
    // add r4, #0x20
    // add r0, #0xf8
    PlayerProfile_Copy(*((u32*)*((u32*)r4)), r4);
}



void sub_02075108(void) {
    sub_02037190();
    sub_02037B38(0x34, (0x42 << 2));
    PlayerProfile_sizeof(0);
    // add r4, #0x20
    sub_02036FD8(0x19, r4, r0);
}



void sub_0207513C(void) {
    // ldr r0, _02075148 ; =0x00001020
    // ldrb r1, [r3, r0]
    // add r1, r1, #1
    // strb r1, [r3, r0]
    // bx lr
    // nop
    // _02075148: .word 0x00001020
    // TODO: decompile
}



void sub_0207514C(void) {
    sub_02037190();
    // add r4, #0x20
    // add r3, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}



void sub_02075178(void) {
    sub_02037190();
    sub_02037B38(0x35, (0x42 << 2));
    // add r4, #0x20
    sub_02036FD8(0x1a, r4, 0x34);
}



void sub_020751A8(void) {
    // ldr r0, _020751B4 ; =0x00001020
    // ldrb r1, [r3, r0]
    // add r1, r1, #1
    // strb r1, [r3, r0]
    // bx lr
    // nop
    // _020751B4: .word 0x00001020
    // TODO: decompile
}



void sub_020751B8(void) {
    sub_02037190();
    // add r4, #0x20
    Party_Copy(*((u32*)(*((u32*)r4) + 4)), r4);
}



void sub_020751DC(void) {
    sub_02037190();
    sub_02037B38(0x36, (0x42 << 2));
    PartyCore_sizeof(0);
    // add r4, #0x20
    sub_02036FD8(0x1b, r4, r0);
}



void sub_02075210(void) {
    // ldr r0, _0207521C ; =0x00001020
    // ldrb r1, [r3, r0]
    // add r1, r1, #1
    // strb r1, [r3, r0]
    // bx lr
    // nop
    // _0207521C: .word 0x00001020
    // TODO: decompile
}



void sub_02075220(void) {
    sub_02037190();
    // add r1, #0x10
    // ldr r1, [r2, r1]
    // add r0, #0x20
    Chatot_Copy(r4, (0x42 << 2), *((u32*)r4));
}



void sub_02075248(void) {
    sub_02037190();
    sub_02037B38(0x37, (0x42 << 2));
    // add r4, #0x20
    sub_02036FD8(0x1c, r4, (0xfa << 2));
}



void sub_0207527C(void) {
    sub_02037190();
    // tst r0, r1
    sub_0203769C(0x80, *((u32*)*((u32*)r5)));
    sub_0203769C((r0 << 3));
    // add r0, r4, r0
    // add r0, #0xf8
    // ldr r1, [r4, r1]
    // add r2, #0x20
    sub_02075554(*((u32*)(r0 << 2)), (0x52 << 2), r5);
    Heap_Alloc(5, 0x88);
    *((u32*)(r5 + 0x10)) = r0;
}



void sub_020752D8(void) {
    sub_02037190();
    sub_02037B38(0x38, (0x42 << 2));
    // add r4, #0x20
    sub_02036FD8(0x21, r4, (0xfa << 2));
}



void sub_0207530C(void) {
    // ldr r0, _02075318 ; =0x00001020
    // ldrb r1, [r3, r0]
    // add r1, r1, #1
    // strb r1, [r3, r0]
    // bx lr
    // nop
    // _02075318: .word 0x00001020
    // TODO: decompile
}



void sub_0207531C(void) {
    sub_02037190();
    // mul r0, r4
    // add r3, r1, r0
    // add r3, #0x28
    // add r5, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
}



void sub_02075350(void) {
    sub_02037190();
    sub_02037B38(((r6 << 0x18) >> 0x18), (0x42 << 2));
    // add r5, #0x20
    sub_02036FD8(0x1d, r5, 0x34);
    // add r5, #0x20
    sub_02036FD8(0x1e, r5, 0x34);
}



void sub_02075398(void) {
    // ldr r0, _020753A4 ; =0x00001020
    // ldrb r1, [r3, r0]
    // add r1, r1, #1
    // strb r1, [r3, r0]
    // bx lr
    // nop
    // _020753A4: .word 0x00001020
    // TODO: decompile
}



void sub_020753A8(void) {
    sub_02037190();
    // add r0, r1, r0
    // add r5, #0x20
    Party_Copy(*((u32*)((r4 << 2) + 4)), r5);
}



void sub_020753D4(void) {
    sub_02037190();
    sub_02037B38(((r6 << 0x18) >> 0x18), (0x42 << 2));
    PartyCore_sizeof(0);
    // add r5, #0x20
    sub_02036FD8(0x1f, r5, r0);
    PartyCore_sizeof();
    // add r5, #0x20
    sub_02036FD8(0x20, r5, r0);
}



void sub_02075424(void) {
    // ldr r0, _02075430 ; =0x00001020
    // ldrb r1, [r3, r0]
    // add r1, r1, #1
    // strb r1, [r3, r0]
    // bx lr
    // nop
    // _02075430: .word 0x00001020
    // TODO: decompile
}



void sub_02075434(void) {
    // str r0, [sp]
    BattleSystem_GetSendBufferPtr(*((u32*)r1));
    ov12_0223A954(*((u32*)r5));
    ov12_0223A960(*((u32*)r5));
    // str r0, [sp, #4]
    ov12_0223A96C(*((u32*)r5));
    sub_02037190(*((u8*)(r5 + 4)));
    // ldr r0, [sp, #4]
    // ldrh r1, [r4]
    // ldrh r0, [r0]
    // ldrh r0, [r7]
    // strh r0, [r4]
    // strh r0, [r7]
    // ldrh r1, [r4]
    // ldrb r2, [r6, r0]
    // ldrb r0, [r6, r0]
    // add r1, r6, r1
    // orr r0, r2
    sub_02037030(0x17, (0x42 << 2), ((((0x42 << 2) + 3) << 8) + 4));
    // ldrh r0, [r4]
    // add r0, r0, r5
    // strh r0, [r4]
    Heap_Free(r5);
    // ldr r0, [sp]
    SysTask_Destroy();
}



void sub_020754C0(void) {
    // str r0, [sp]
    BattleSystem_GetRecvBufferPtr(*((u32*)r1));
    ov12_0223A978(*((u32*)r5));
    ov12_0223A984(*((u32*)r5));
    ov12_0223A990(*((u32*)r5));
    // ldrh r1, [r4]
    // ldrh r2, [r7]
    // ldrh r2, [r0]
    // strh r1, [r4]
    // strh r1, [r0]
    // ldrh r1, [r4]
    // add r1, r6, r1
    ov12_02264334(*((u32*)r5), 0);
    // ldrh r0, [r4]
    // ldrb r2, [r6, r1]
    // ldrb r1, [r6, r1]
    // orr r1, r2
    // add r0, r0, r1
    // strh r0, [r4]
    Heap_Free(r5, (((r0 + 3) << 8) + 4));
    // ldr r0, [sp]
    SysTask_Destroy();
}



void sub_02075534(void) {
}



void sub_02075554(void) {
    PlayerProfile_GetNamePtr();
    CopyU16StringArray(r4, r0);
    PlayerProfile_GetTrainerID(r6);
    *((u32*)(r4 + 0x10)) = r0;
    PlayerProfile_GetLanguage(r6);
    *((u8*)(r4 + 0x14)) = r0;
    PlayerProfile_GetVersion(r6);
    *((u8*)(r4 + 0x15)) = r0;
    PlayerProfile_GetTrainerGender(r6);
    *((u8*)(r4 + 0x16)) = r0;
    *((u32*)(r4 + 0x18)) = *((u32*)(r5 + 0x10));
    // add r2, r4, r0
    // add r2, #0x58
    // strb r3, [r2]
    // add r2, r4, r0
    // add r2, #0x68
    // strb r3, [r2]
    // add r2, r4, r0
    // add r2, #0x78
    // add r5, #0x88
    // strb r3, [r2]
}



void sub_020755B4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r2, #0
    // add r4, r3, #0
    // bl sub_0203769C
    // cmp r5, r0
    // beq _020755D6
    // mov r0, #0x52
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, r6, #0
    // mov r2, #1
    // mov r3, #5
    // bl SavePalPad_Merge
    // ldr r0, _020755E0 ; =0x00001020
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _020755E0: .word 0x00001020
    // TODO: decompile
}



u8 sub_020755E4(void) {
}


