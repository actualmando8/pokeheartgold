/* Decompiled from asm/unk_02096C88.s */
#include "global.h"

void sub_02096C88(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #0x58
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02096C9E
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x58
    // bl memset
    // ldr r1, _02096CC4 ; =0x00001BD0
    // add r0, r6, #0
    // str r5, [r4]
    // bl Heap_Alloc
    // str r0, [r4, #0x4c]
    // ldr r1, _02096CC4 ; =0x00001BD0
    // add r0, r6, #0
    // bl Heap_Alloc
    // str r0, [r4, #0x50]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02096CC4: .word 0x00001BD0
    // TODO: decompile
}




void sub_02096CC8(void) {
}




void sub_02096CE0(void) {
    // ldr r3, _02096CEC ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _02096CF0 ; =_0210884C
    // mov r1, #0x87
    // bx r3
    // nop
    // _02096CEC: .word sub_0203410C
    // _02096CF0: .word _0210884C
    // TODO: decompile
}




void sub_02096CF4(void) {
}




void sub_02096D14(void) {
    // str r2, [sp]
    GF_AssertFail();
    GF_AssertFail((r6 + 4));
    // ldr r1, [sp]
    *((u32*)(r7 + 4)) = r5;
    memcpy(((r7 + 4) + 4), r6);
    sub_02037030(0x82, r4, 0x18);
}




void sub_02096D4C(void) {
}




void sub_02096D60(void) {
}




void sub_02096D80(void) {
    // ldrsh r2, [r3, r0]
    // lsl r0, r1
    // orr r2, r0
    // add r0, #0x46
    // strh r2, [r0]
    sub_02097018(r3, r0);
    memcpy(r4, (0x59 << 4));
}




void sub_02096DA8(void) {
    // ldrb r0, [r2]
    *((u32*)(r3 + 0x28)) = r0;
}




void sub_02096DB4(void) {
}




void sub_02096DBC(void) {
    sub_0203769C();
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x24)) = 1;
    ov85_021E9C84(*((u32*)(*((u32*)r4) + 0x38)), 0x1f, ((r5 << 0x18) >> 0x18));
}




void sub_02096DE4(void) {
    // ldr r0, [r3]
    // ldr r3, _02096DF0 ; =ov85_021E9C84
    // ldr r0, [r0, #0x38]
    // mov r1, #2
    // mov r2, #0
    // bx r3
    // _02096DF0: .word ov85_021E9C84
    // TODO: decompile
}




void sub_02096DF4(void) {
    sub_0203769C();
    // ldrb r1, [r5]
    // add r0, sp, #0
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = *((u8*)(r5 + 1));
    *((u8*)(r0 + 2)) = *((u8*)(r5 + 2));
    *((u8*)(r0 + 3)) = *((u8*)(r5 + 3));
    // strb r6, [r0]
    *((u8*)(r0 + 1)) = *((u32*)(r4 + 0x2c));
    sub_02037454(*((u8*)(r5 + 2)), *((u32*)(r4 + 0x2c)));
    sub_02096FFC(*((u32*)(r4 + 0x2c)));
    sub_02033250(*((u32*)(r4 + 0x2c)));
    MATH_CountPopulation();
    // add r0, sp, #0
    *((u8*)(r0 + 3)) = 0;
    // lsl r0, r6
    // orr r0, r2
    *((u32*)(r4 + 0x30)) = 1;
    // add r0, sp, #0
    *((u8*)(1 + 3)) = 1;
    sub_02037454(1, 1, *((u32*)(r4 + 0x30)));
    sub_02038C1C();
    // add r2, sp, #0
    sub_02096D4C(r4, 2, 4);
    // ldrb r6, [r5]
    sub_0203769C(*((u8*)(r5 + 2)));
    ov85_021E9C84(*((u32*)(*((u32*)r4) + 0x38)), 8, r6);
    *((u16*)(r4 + 0x38)) = *((u8*)(r5 + 1));
    // ldrb r2, [r5]
    ov85_021E9C84(*((u32*)(*((u32*)r4) + 0x38)), 7);
    // ldrb r2, [r5]
    ov85_021E9C84(*((u32*)(*((u32*)r4) + 0x38)), 0x13);
}




void sub_02096ED0(void) {
    // ldrb r2, [r2]
    ov85_021E9D9C(*((u32*)(*((u32*)r3) + 0x38)), 1);
    sub_0203769C();
    *((u32*)(r4 + 0x34)) = 0;
}




void sub_02096EF0(void) {
    sub_0203769C();
    ov85_021E9C84(*((u32*)(*((u32*)r4) + 0x38)), 0xd, 0);
}




void sub_02096F0C(void) {
    sub_0203769C();
    // add r0, sp, #0
    // strb r5, [r0]
    // add r2, sp, #0
    sub_02096D4C(r4, 0, 1);
}




void sub_02096F2C(void) {
    // add r0, #0x40
    // ldrh r1, [r0]
    // ldrh r0, [r2]
    // add r3, #0x40
    // orr r0, r1
    // strh r0, [r3]
}




void sub_02096F3C(void) {
    // add r1, #0x42
    // ldrh r2, [r1]
    // lsl r1, r0
    // orr r0, r1
    // add r3, #0x42
    // strh r0, [r3]
}




void sub_02096F50(void) {
    // ldr r0, [r3]
    // ldr r3, _02096F5C ; =ov85_021E8680
    // ldr r0, [r0, #0x34]
    // add r1, r2, #0
    // bx r3
    // nop
    // _02096F5C: .word ov85_021E8680
    // TODO: decompile
}




void sub_02096F60(void) {
    // ldr r0, [r3]
    // ldr r3, _02096F6C ; =ov85_021E86AC
    // ldr r0, [r0, #0x34]
    // ldr r1, [r2]
    // bx r3
    // nop
    // _02096F6C: .word ov85_021E86AC
    // TODO: decompile
}




void sub_02096F70(void) {
    // ldr r0, [r3]
    // ldr r3, _02096F7C ; =ov85_021E85C4
    // ldr r0, [r0, #0x34]
    // ldrb r1, [r2]
    // bx r3
    // nop
    // _02096F7C: .word ov85_021E85C4
    // TODO: decompile
}




void sub_02096F80(void) {
    sub_0203769C();
    ov85_021E85CC(*((u32*)(*((u32*)r5) + 0x34)), r4);
}




void sub_02096F9C(void) {
    // add r1, r0, #0
    // ldr r0, [r3]
    // ldr r3, _02096FA8 ; =ov85_021E8740
    // ldr r0, [r0, #0x34]
    // ldr r2, [r2]
    // bx r3
    // _02096FA8: .word ov85_021E8740
    // TODO: decompile
}




void sub_02096FAC(void) {
    // ldr r0, [r3]
    // ldr r3, _02096FB8 ; =ov85_021E8748
    // ldr r0, [r0, #0x34]
    // add r1, r2, #0
    // bx r3
    // nop
    // _02096FB8: .word ov85_021E8748
    // TODO: decompile
}




void sub_02096FBC(void) {
    // add r1, #0x48
    // ldrh r2, [r1]
    // lsl r1, r0
    // orr r0, r1
    // add r3, #0x48
    // strh r0, [r3]
}




void sub_02096FD0(void) {
    // add r1, #0x4a
    // ldrh r2, [r1]
    // lsl r1, r0
    // orr r0, r1
    // add r3, #0x4a
    // strh r0, [r3]
}




u8 sub_02096FE4(void) {
}




void sub_02096FE8(void) {
}




void sub_02096FF0(void) {
    // mul r1, r0
    // add r0, r2, r1
}




void sub_02096FFC(void) {
}




void sub_02097018(void) {
    // mul r0, r1
    // add r0, r2, r0
}



