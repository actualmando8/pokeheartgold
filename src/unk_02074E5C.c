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
    return 4;
}


void sub_02074EDC(void) {
    PlayerProfile_sizeof();
}


void sub_02074EE4(void) {
    PartyCore_sizeof();
}


void sub_02074EEC(void) {
    r0 = r0 << 2;
}


u8 sub_02074EF4(void) {
    return 0x34;
}


void sub_02074EF8(void) {
    // ldr r3, [r1]
    // mov r1, #0x80
    // ldr r2, [r3]
    // tst r1, r2
    // beq _02074F0C
    // lsl r0, r0, #3
    // add r0, r3, r0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bx lr
    // lsl r0, r0, #2
    // add r0, r3, r0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02074F18(void) {
    // ldr r1, [r1]
    // mov r2, #0x80
    // ldr r3, [r1]
    // tst r2, r3
    // beq _02074F2E
    // lsl r2, r0, #1
    // mov r0, #0x34
    // add r1, #0x28
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // mov r2, #0x34
    // add r1, #0x28
    // mul r2, r0
    // add r0, r1, r2
    // bx lr
    // TODO: decompile
}


void sub_02074F38(void) {
    // ldr r3, [r1]
    // mov r1, #0x80
    // ldr r2, [r3]
    // tst r1, r2
    // beq _02074F4A
    // lsl r0, r0, #3
    // add r0, r3, r0
    // ldr r0, [r0, #4]
    // bx lr
    // lsl r0, r0, #2
    // add r0, r3, r0
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}


void sub_02074F54(void) {
    // ldr r3, [r1]
    // mov r1, #0x80
    // ldr r2, [r3]
    // tst r2, r1
    // beq _02074F68
    // lsl r0, r0, #3
    // add r0, r3, r0
    // add r1, #0x98
    // ldr r0, [r0, r1]
    // bx lr
    // lsl r0, r0, #2
    // add r0, r3, r0
    // add r1, #0x98
    // ldr r0, [r0, r1]
    // bx lr
    // TODO: decompile
}


void sub_02074F74(void) {
    // ldr r0, [r1]
    // add r0, #0x5c
    // bx lr
    // TODO: decompile
}


void sub_02074F7C(void) {
    // ldr r0, [r1]
    // add r0, #0xc4
    // bx lr
    // TODO: decompile
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
    // lsl r0, r0, #2
    // add r0, r1, r0
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}


void sub_02074F9C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r0, #5
    // mov r1, #4
    // str r2, [sp, #8]
    // add r7, r3, #0
    // bl Heap_Alloc
    // add r6, r0, #0
    // ldr r0, [sp]
    // bl BattleSystem_GetSendBufferPtr
    // add r5, r0, #0
    // ldr r0, [sp]
    // bl ov12_0223A960
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl ov12_0223A96C
    // mov ip, r0
    // add r0, sp, #0x10
    // ldrh r3, [r4]
    // ldrb r0, [r0, #0x10]
    // add r1, r3, #5
    // add r2, r1, r0
    // mov r1, #1
    // lsl r1, r1, #0xc
    // cmp r2, r1
    // bls _02074FE4
    // mov r1, ip
    // strh r3, [r1]
    // mov r1, #0
    // strh r1, [r4]
    // ldr r1, [sp, #4]
    // mov r3, #0
    // strb r1, [r6]
    // ldr r1, [sp, #8]
    // strb r1, [r6, #1]
    // add r1, sp, #0x10
    // ldrb r1, [r1, #0x10]
    // strh r1, [r6, #2]
    // ldrb r2, [r6, r3]
    // ldrh r1, [r4]
    // add r3, r3, #1
    // strb r2, [r5, r1]
    // ldrh r1, [r4]
    // add r1, r1, #1
    // strh r1, [r4]
    // cmp r3, #4
    // blo _02074FF4
    // mov r3, #0
    // cmp r0, #0
    // ble _0207501E
    // ldrb r2, [r7, r3]
    // ldrh r1, [r4]
    // add r3, r3, #1
    // strb r2, [r5, r1]
    // ldrh r1, [r4]
    // add r1, r1, #1
    // strh r1, [r4]
    // cmp r3, r0
    // blt _0207500C
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02075028(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r3, [sp]
    // add r0, r3, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl BattleSystem_GetRecvBufferPtr
    // add r7, r0, #0
    // ldr r0, [sp]
    // bl ov12_0223A984
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl ov12_0223A990
    // ldrh r1, [r4]
    // add r2, r1, r5
    // add r3, r2, #1
    // mov r2, #1
    // lsl r2, r2, #0xc
    // cmp r3, r2
    // ble _0207505A
    // strh r1, [r0]
    // mov r0, #0
    // strh r0, [r4]
    // mov r0, #0
    // cmp r5, #0
    // ble _02075072
    // ldrb r2, [r6, r0]
    // ldrh r1, [r4]
    // add r0, r0, #1
    // strb r2, [r7, r1]
    // ldrh r1, [r4]
    // add r1, r1, #1
    // strh r1, [r4]
    // cmp r0, r5
    // blt _02075060
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02075074(void) {
    // push {r0, r1, r2, r3}
    // push {r3, lr}
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _0207508E
    // mov r0, #0
    // pop {r3}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // mov r0, #0x33
    // bl sub_02037B38
    // cmp r0, #0
    // bne _020750A2
    // mov r0, #0
    // pop {r3}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // mov r0, #0x18
    // add r1, sp, #0xc
    // mov r2, #4
    // bl sub_02037030
    // pop {r3}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _020750F4
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4]
    // add r4, #0x20
    // add r0, #0xf8
    // ldr r0, [r0]
    // add r1, r4, #0
    // bl PlayerProfile_Copy
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02075108(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _0207511C
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0x34
    // bl sub_02037B38
    // cmp r0, #0
    // bne _0207512A
    // mov r0, #0
    // pop {r4, pc}
    // bl PlayerProfile_sizeof
    // add r4, #0x20
    // add r2, r0, #0
    // mov r0, #0x19
    // add r1, r4, #0
    // bl sub_02036FD8
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _02075160
    // mov r0, #0
    // pop {r4, pc}
    // ldr r3, [r4]
    // add r4, #0x20
    // add r3, #0x28
    // mov r2, #6
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r2, r2, #1
    // bne _02075168
    // ldr r0, [r3]
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02075178(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _0207518C
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0x35
    // bl sub_02037B38
    // cmp r0, #0
    // bne _0207519A
    // mov r0, #0
    // pop {r4, pc}
    // add r4, #0x20
    // mov r0, #0x1a
    // add r1, r4, #0
    // mov r2, #0x34
    // bl sub_02036FD8
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _020751CC
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4]
    // add r4, #0x20
    // ldr r0, [r0, #4]
    // add r1, r4, #0
    // bl Party_Copy
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020751DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _020751F0
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0x36
    // bl sub_02037B38
    // cmp r0, #0
    // bne _020751FE
    // mov r0, #0
    // pop {r4, pc}
    // bl PartyCore_sizeof
    // add r4, #0x20
    // add r2, r0, #0
    // mov r0, #0x1b
    // add r1, r4, #0
    // bl sub_02036FD8
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _02075234
    // mov r0, #0
    // pop {r4, pc}
    // ldr r2, [r4]
    // add r1, #0x10
    // add r0, r4, #0
    // ldr r1, [r2, r1]
    // add r0, #0x20
    // bl Chatot_Copy
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02075248(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _0207525C
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0x37
    // bl sub_02037B38
    // cmp r0, #0
    // bne _0207526A
    // mov r0, #0
    // pop {r4, pc}
    // add r4, #0x20
    // mov r2, #0xfa
    // mov r0, #0x1c
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl sub_02036FD8
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0207527C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _02075290
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r4, [r5]
    // mov r0, #0x80
    // ldr r1, [r4]
    // tst r0, r1
    // beq _020752A2
    // bl sub_0203769C
    // lsl r0, r0, #3
    // b _020752A8
    // bl sub_0203769C
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0x52
    // add r0, #0xf8
    // lsl r1, r1, #2
    // add r2, r5, #0
    // ldr r0, [r0]
    // ldr r1, [r4, r1]
    // add r2, #0x20
    // bl sub_02075554
    // mov r4, #0
    // mov r6, #5
    // mov r7, #0x88
    // add r0, r6, #0
    // add r1, r7, #0
    // bl Heap_Alloc
    // str r0, [r5, #0x10]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _020752C2
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020752D8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _020752EC
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0x38
    // bl sub_02037B38
    // cmp r0, #0
    // bne _020752FA
    // mov r0, #0
    // pop {r4, pc}
    // add r4, #0x20
    // mov r2, #0xfa
    // mov r0, #0x21
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl sub_02036FD8
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _02075332
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r1, [r5]
    // mov r0, #0x34
    // mul r0, r4
    // add r3, r1, r0
    // add r3, #0x28
    // add r5, #0x20
    // mov r2, #6
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // sub r2, r2, #1
    // bne _02075340
    // ldr r0, [r3]
    // str r0, [r5]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02075350(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _02075368
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // bl sub_02037B38
    // cmp r0, #0
    // bne _02075378
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // cmp r4, #1
    // bne _0207538A
    // add r5, #0x20
    // mov r0, #0x1d
    // add r1, r5, #0
    // mov r2, #0x34
    // bl sub_02036FD8
    // pop {r4, r5, r6, pc}
    // add r5, #0x20
    // mov r0, #0x1e
    // add r1, r5, #0
    // mov r2, #0x34
    // bl sub_02036FD8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _020753BE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r1, [r5]
    // lsl r0, r4, #2
    // add r0, r1, r0
    // add r5, #0x20
    // ldr r0, [r0, #4]
    // add r1, r5, #0
    // bl Party_Copy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020753D4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // beq _020753EC
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // bl sub_02037B38
    // cmp r0, #0
    // bne _020753FC
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // cmp r4, #1
    // bne _02075412
    // bl PartyCore_sizeof
    // add r5, #0x20
    // add r2, r0, #0
    // mov r0, #0x1f
    // add r1, r5, #0
    // bl sub_02036FD8
    // pop {r4, r5, r6, pc}
    // bl PartyCore_sizeof
    // add r5, #0x20
    // add r2, r0, #0
    // mov r0, #0x20
    // add r1, r5, #0
    // bl sub_02036FD8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // bl BattleSystem_GetSendBufferPtr
    // add r6, r0, #0
    // ldr r0, [r5]
    // bl ov12_0223A954
    // add r4, r0, #0
    // ldr r0, [r5]
    // bl ov12_0223A960
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // bl ov12_0223A96C
    // add r7, r0, #0
    // ldrb r0, [r5, #4]
    // cmp r0, #0
    // beq _02075466
    // cmp r0, #0xff
    // b _020754B0
    // bl sub_02037190
    // mov r1, #0x42
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _020754BC
    // ldr r0, [sp, #4]
    // ldrh r1, [r4]
    // ldrh r0, [r0]
    // cmp r1, r0
    // beq _020754BC
    // ldrh r0, [r7]
    // cmp r1, r0
    // bne _02075488
    // mov r0, #0
    // strh r0, [r4]
    // strh r0, [r7]
    // ldrh r1, [r4]
    // add r0, r1, #2
    // ldrb r2, [r6, r0]
    // add r0, r1, #3
    // ldrb r0, [r6, r0]
    // add r1, r6, r1
    // lsl r0, r0, #8
    // orr r0, r2
    // add r5, r0, #4
    // mov r0, #0x17
    // add r2, r5, #0
    // bl sub_02037030
    // cmp r0, #1
    // bne _020754BC
    // ldrh r0, [r4]
    // add sp, #8
    // add r0, r0, r5
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [sp]
    // bl SysTask_Destroy
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020754C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // bl BattleSystem_GetRecvBufferPtr
    // add r6, r0, #0
    // ldr r0, [r5]
    // bl ov12_0223A978
    // add r4, r0, #0
    // ldr r0, [r5]
    // bl ov12_0223A984
    // add r7, r0, #0
    // ldr r0, [r5]
    // bl ov12_0223A990
    // ldrb r1, [r5, #4]
    // cmp r1, #0
    // beq _020754EE
    // cmp r1, #0xff
    // b _02075526
    // ldrh r1, [r4]
    // ldrh r2, [r7]
    // cmp r1, r2
    // beq _02075532
    // ldrh r2, [r0]
    // cmp r1, r2
    // bne _02075502
    // mov r1, #0
    // strh r1, [r4]
    // strh r1, [r0]
    // ldrh r1, [r4]
    // ldr r0, [r5]
    // add r1, r6, r1
    // bl ov12_02264334
    // cmp r0, #1
    // bne _02075532
    // ldrh r0, [r4]
    // add r1, r0, #2
    // ldrb r2, [r6, r1]
    // add r1, r0, #3
    // ldrb r1, [r6, r1]
    // lsl r1, r1, #8
    // orr r1, r2
    // add r1, r1, #4
    // add r0, r0, r1
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [sp]
    // bl SysTask_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02075534(void) {
    ov12_0223BC14(r3, 0xff);
    ov12_0223BC20(r4, 0xff);
    ov12_0223BC2C(r4, 1);
}


void sub_02075554(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r6, r0, #0
    // add r5, r1, #0
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // add r0, r4, #0
    // bl CopyU16StringArray
    // add r0, r6, #0
    // bl PlayerProfile_GetTrainerID
    // str r0, [r4, #0x10]
    // add r0, r6, #0
    // bl PlayerProfile_GetLanguage
    // strb r0, [r4, #0x14]
    // add r0, r6, #0
    // bl PlayerProfile_GetVersion
    // strb r0, [r4, #0x15]
    // add r0, r6, #0
    // bl PlayerProfile_GetTrainerGender
    // strb r0, [r4, #0x16]
    // mov r0, #0
    // add r1, r4, #0
    // ldr r2, [r5, #0x10]
    // str r2, [r1, #0x18]
    // ldrb r3, [r5, #0x15]
    // add r2, r4, r0
    // add r2, #0x58
    // strb r3, [r2]
    // add r2, r4, r0
    // ldrb r3, [r5, #0x14]
    // add r2, #0x68
    // add r1, r1, #4
    // strb r3, [r2]
    // add r2, r4, r0
    // ldrb r3, [r5, #0x16]
    // add r2, #0x78
    // add r0, r0, #1
    // add r5, #0x88
    // strb r3, [r2]
    // cmp r0, #0x10
    // blt _0207558C
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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
    return 0x88;
}

