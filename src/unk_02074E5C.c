/* Decompiled from asm/unk_02074E5C.s */
#include "global.h"

void sub_02074E5C(void) {
    BattleSystem_GetBattleSpecial();
    // tst r0, r1
    Heap_Alloc(5, 8);
    Heap_Alloc(5, 8);
    sub_0203410C(_020FFE30, 0xc, r5);
    // str r5, [r4]
    *((u8*)(r4 + 4)) = 0;
    // str r5, [r6]
    *((u8*)(r6 + 4)) = 0;
    ov12_0223BBFC(r5, (r4 + 4));
    ov12_0223BC08(r5, (r6 + 4));
    SysTask_CreateOnMainQueue(sub_02075434, r4, 0);
    SysTask_CreateOnMainQueue(sub_020754C0, r6, 0);
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
    // add r0, r1, r0
    // add r1, #0x28
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
    // add r0, r3, r0
    // add r1, #0x98
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
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // mov ip, r0
    // add r0, sp, #0x10
    // add r2, r1, r0
    // mov r1, ip
    // strh r3, [r1]
    // strh r1, [r4]
    // ldr r1, [sp, #4]
    // strb r1, [r6]
    // ldr r1, [sp, #8]
    // add r1, sp, #0x10
    // strb r2, [r5, r1]
    // strh r1, [r4]
    // strb r2, [r5, r1]
    // strh r1, [r4]
}




void sub_02075028(void) {
    // str r3, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r2, r1, r5
    // strh r1, [r0]
    // strh r0, [r4]
    // strb r2, [r7, r1]
    // strh r1, [r4]
}




void sub_02075074(void) {
    // add r1, sp, #0xc
}




void sub_020750B4(void) {
    // add r3, r2, r1
    // str r5, [r3, r2]
    // add r1, r3, r1
    sub_0203049C(*((u32*)((r0 << 2) + (0x5f << 2))), (0x5f << 2), *((u32*)r3));
    // strb r1, [r4, r0]
}




void sub_020750E0(void) {
    // add r4, #0x20
    // add r0, #0xf8
}




void sub_02075108(void) {
    // add r4, #0x20
}




void sub_0207513C(void) {
    // strb r1, [r3, r0]
}




void sub_0207514C(void) {
    // add r4, #0x20
    // add r3, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void sub_02075178(void) {
    // add r4, #0x20
}




void sub_020751A8(void) {
    // strb r1, [r3, r0]
}




void sub_020751B8(void) {
    // add r4, #0x20
}




void sub_020751DC(void) {
    // add r4, #0x20
}




void sub_02075210(void) {
    // strb r1, [r3, r0]
}




void sub_02075220(void) {
    // add r1, #0x10
    // add r0, #0x20
}




void sub_02075248(void) {
    // add r4, #0x20
}




void sub_0207527C(void) {
    // tst r0, r1
    // add r0, r4, r0
    // add r0, #0xf8
    // add r2, #0x20
}




void sub_020752D8(void) {
    // add r4, #0x20
}




void sub_0207530C(void) {
    // strb r1, [r3, r0]
}




void sub_0207531C(void) {
    // add r3, r1, r0
    // add r3, #0x28
    // add r5, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
}




void sub_02075350(void) {
    // add r5, #0x20
    // add r5, #0x20
}




void sub_02075398(void) {
    // strb r1, [r3, r0]
}




void sub_020753A8(void) {
    // add r0, r1, r0
    // add r5, #0x20
}




void sub_020753D4(void) {
    // add r5, #0x20
    // add r5, #0x20
}




void sub_02075424(void) {
    // strb r1, [r3, r0]
}




void sub_02075434(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // strh r0, [r4]
    // strh r0, [r7]
    // add r1, r6, r1
    // add r0, r0, r5
    // strh r0, [r4]
    // ldr r0, [sp]
}




void sub_020754C0(void) {
    // str r0, [sp]
    // strh r1, [r4]
    // strh r1, [r0]
    // add r1, r6, r1
    // add r0, r0, r1
    // strh r0, [r4]
    // ldr r0, [sp]
}




void sub_02075534(void) {
}




void sub_02075554(void) {
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
    sub_0203769C();
    SavePalPad_Merge(*((u32*)(*((u32*)r4) + (0x52 << 2))), r6, 1, 5);
    // strb r1, [r4, r0]
}




u8 sub_020755E4(void) {
}



