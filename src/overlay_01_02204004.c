/* Decompiled from asm/overlay_01_02204004.s */
#include "global.h"

void ov01_02204004(void) {
    // str r3, [sp]
    // ldr r0, [sp]
    // str r0, [r4]
    // strb r1, [r0, r2]
    // add r1, r0, r2
    // add r2, #0x5c
    // str r1, [r0, r3]
}




void ov01_02204084(void) {
}




void ov01_022040A4(void) {
}




void ov01_022040C0(void) {
    // str r1, [r2, r0]
}




void Field3dObjectList_GetRenderObjectByID(void) {
    // ldrb r2, [r2, r1]
    // ldr r0, [r1, r0]
}




void ov01_022040E4(void) {
}




void ov01_022040F8(void) {
}




void ov01_0220411C(void) {
}




void ov01_02204144(void) {
    // ldrb r0, [r0, r1]
}




void ov01_02204154(void) {
    // ldr r0, [r2, r0]
}




void ov01_02204168(void) {
    // add r2, #8
    // add r1, r2, r1
    // add r2, r0, r1
}




void ov01_022041C4(void) {
}




void ov01_022041D8(void) {
    // str r0, [sp]
    // add r0, r0, r5
    // add r0, r0, r5
    // str r2, [r0, r5]
    // add r1, r0, r5
    // add r5, #0x20
    // str r1, [r0, r6]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r4, [r0]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov01_02204278(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r6, r0, r5
    // add r5, #0x20
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
}




void ov01_022042FC(void) {
}




void ov01_0220431C(void) {
    // str r0, [r4]
    // str r4, [r1, r0]
}




void ov01_0220434C(void) {
    // ldrh r0, [r0, #0x22]
    // bx lr
    // TODO: decompile
}




void ov01_02204350(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r4, r0, r5
    // mvn r0, r0
    // add r5, #0x20
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
}




void ov01_022043D8(void) {
    // add r2, r2, r6
    // add r6, #0x20
}




void ov01_02204424(void) {
    // str r0, [sp]
    // add r0, r0, r5
    // add r5, #0x20
    // ldr r0, [sp]
}




void ov01_02204470(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r3, [sp, #0x18]
}




void ov01_022044B0(void) {
    // blx r6
}




void ov01_022044C4(void) {
}




void ov01_022044C8(void) {
}




void ov01_022044E0(void) {
    // str r1, [r0]
    // sub r0, r1, r0
    // str r0, [r2]
}




void ov01_02204500(void) {
}




void ov01_0220450C(void) {
}




void ov01_02204518(void) {
}




void ov01_02204554(void) {
    // ldr r0, [r0, #8]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}




void ov01_0220455C(void) {
}




void ov01_02204560(void) {
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0
    // bne _0220456A
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov01_02204570(void) {
    // sub r0, r1, r0
    // str r0, [r2]
    // str r1, [r0]
}




void ov01_02204590(void) {
}




void ov01_02204594(void) {
    // add r1, r2, r1
    // str r1, [r3]
    // str r0, [r2]
    // sub r1, r2, r1
    // str r1, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
}




void ov01_022045DC(void) {
    // sub r0, r1, r0
}




void ov01_0220460C(void) {
    Heap_Alloc(4, 8);
    ov01_022041D8(r5, 4, 1);
    // str r0, [r4]
    ov01_022044C4(ov01_022046A4);
}




void ov01_02204634(void) {
}




void ov01_0220463C(void) {
    // mvn r1, r1
}




void ov01_02204678(void) {
    // ldr r3, _02204684 ; =ov01_0220450C
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2, #4]
    // bx r3
    // nop
    // _02204684: .word ov01_0220450C
    // TODO: decompile
}




void ov01_02204688(void) {
    // ldr r3, _02204694 ; =ov01_02204518
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2, #4]
    // bx r3
    // nop
    // _02204694: .word ov01_02204518
    // TODO: decompile
}




void ov01_02204698(void) {
}




void ov01_022046A4(void) {
}




void ov01_022046C8(void) {
    // add r0, #0x1c
}




void ov01_022046D4(void) {
}




void ov01_022046E8(void) {
    *((u32*)(r0 + 0xc)) = *((u32*)_02110A0C);
    // add r1, #0x1a
    *((u8*)(r0 + 0x19)) = *((u8*)(r1 + 9));
    MIi_CpuClear16(0, r0, (*((u8*)(r1 + 9)) << 1));
    *((u16*)(r5 + 0x1a)) = (0 | (1 << 8));
}




void ov01_02204728(void) {
    // str r3, [r0]
    *((u32*)(r0 + 8)) = r1;
    *((u32*)(r0 + 0x10)) = 0;
    *((u8*)(r0 + 0x18)) = 0x7f;
    *((u32*)(r0 + 4)) = (1 << 0xc);
    *((u32*)(r0 + 0x14)) = 0;
}




void ov01_02204744(void) {
}




void ov01_02204764(void) {
}




void ov01_0220476C(void) {
    // add r0, r5, r0
    // add r1, #8
    // add r2, r1, r0
    // str r3, [r1, r0]
    // add r1, r2, r1
}




void ov01_022047DC(void) {
    GF_RTC_GetTimeOfDay();
    // str r7, [r5]
    // add r4, #8
    // str r0, [sp]
    // ldr r1, [sp]
    // add r1, r1, r4
    ov01_02204518(*((u32*)(r5 + 0x18)), *((u32*)((*((u8*)(ov01_022095EC + r1)) << 2) + 8)), ov01_022095EC);
    // add r1, r1, r4
    ov01_0220450C(*((u32*)(r4 + 0x18)), *((u32*)((*((u8*)(ov01_022095EC + r7)) << 2) + 8)));
    // add r5, #0x1c
    // add r4, #0x1c
}




void ov01_02204834(void) {
    // ldr r1, [r0]
    // ldr r0, _0220483C ; =ov01_022095EC
    // ldrb r0, [r0, r1]
    // bx lr
    // _0220483C: .word ov01_022095EC
    // TODO: decompile
}



