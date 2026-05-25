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
    Heap_Free(*((u32*)(r0 + 0x4c)));
    Heap_Free(*((u32*)(r4 + 0x50)));
    Heap_Free(r4);
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
    sub_02038C1C(2);
    sub_02037FF0();
    sub_0205AD24(*((u32*)(r0 + 0x20)));
    sub_0205A904(0);
}


void sub_02096D14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // add r6, r3, #0
    // str r2, [sp]
    // cmp r5, #0x12
    // blo _02096D26
    // bl GF_AssertFail
    // add r0, r6, #4
    // cmp r0, #0x18
    // bls _02096D30
    // bl GF_AssertFail
    // add r4, r7, #4
    // ldr r1, [sp]
    // add r0, r4, #4
    // add r2, r6, #0
    // str r5, [r7, #4]
    // bl memcpy
    // mov r0, #0x82
    // add r1, r4, #0
    // mov r2, #0x18
    // bl sub_02037030
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02096D4C(void) {
    sub_02096D14();
}


void sub_02096D60(void) {
    GF_AssertFail();
}


void sub_02096D80(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // mov r0, #0x46
    // add r4, r2, #0
    // ldrsh r2, [r3, r0]
    // mov r0, #1
    // lsl r0, r1
    // orr r2, r0
    // add r0, r3, #0
    // add r0, #0x46
    // strh r2, [r0]
    // add r0, r3, #0
    // bl sub_02097018
    // mov r2, #0x59
    // add r1, r4, #0
    // lsl r2, r2, #4
    // bl memcpy
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02096DA8(void) {
    // cmp r0, #0
    // bne _02096DB0
    // ldrb r0, [r2]
    // str r0, [r3, #0x28]
    // bx lr
    // TODO: decompile
}


void sub_02096DB4(void) {
    // ldr r0, [r3, #0x20]
    // add r0, r0, #1
    // str r0, [r3, #0x20]
    // bx lr
    // TODO: decompile
}


void sub_02096DBC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r3, #0
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02096DE0
    // mov r0, #0
    // str r0, [r4, #0x20]
    // mov r0, #1
    // str r0, [r4, #0x24]
    // ldr r0, [r4]
    // lsl r2, r5, #0x18
    // ldr r0, [r0, #0x38]
    // mov r1, #0x1f
    // lsr r2, r2, #0x18
    // bl ov85_021E9C84
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r0, #0
    // add r5, r2, #0
    // add r4, r3, #0
    // cmp r6, #0
    // beq _02096E7E
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02096ECC
    // ldrb r1, [r5]
    // add r0, sp, #0
    // strb r1, [r0]
    // ldrb r1, [r5, #1]
    // strb r1, [r0, #1]
    // ldrb r1, [r5, #2]
    // strb r1, [r0, #2]
    // ldrb r1, [r5, #3]
    // strb r1, [r0, #3]
    // strb r6, [r0]
    // ldr r1, [r4, #0x2c]
    // strb r1, [r0, #1]
    // ldrb r0, [r5, #2]
    // cmp r0, #0
    // beq _02096E2C
    // cmp r0, #1
    // b _02096E6E
    // bl sub_02037454
    // ldr r1, [r4, #0x2c]
    // cmp r1, r0
    // bne _02096E4E
    // bl sub_02096FFC
    // ldr r1, [r4, #0x2c]
    // cmp r1, r0
    // bne _02096E4E
    // bl sub_02033250
    // bl MATH_CountPopulation
    // ldr r1, [r4, #0x2c]
    // cmp r1, r0
    // beq _02096E56
    // mov r1, #0
    // add r0, sp, #0
    // strb r1, [r0, #3]
    // b _02096E6E
    // mov r1, #1
    // add r0, r1, #0
    // ldr r2, [r4, #0x30]
    // lsl r0, r6
    // orr r0, r2
    // str r0, [r4, #0x30]
    // add r0, sp, #0
    // strb r1, [r0, #3]
    // bl sub_02037454
    // bl sub_02038C1C
    // add r0, r4, #0
    // mov r1, #2
    // add r2, sp, #0
    // mov r3, #4
    // bl sub_02096D4C
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldrb r0, [r5, #2]
    // cmp r0, #0
    // beq _02096E8C
    // cmp r0, #1
    // beq _02096EC0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldrb r6, [r5]
    // bl sub_0203769C
    // cmp r6, r0
    // bne _02096ECC
    // ldrb r0, [r5, #3]
    // cmp r0, #0
    // bne _02096EAC
    // ldr r0, [r4]
    // mov r1, #8
    // ldr r0, [r0, #0x38]
    // add r2, r6, #0
    // bl ov85_021E9C84
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldrb r0, [r5, #1]
    // mov r1, #7
    // strh r0, [r4, #0x38]
    // ldr r0, [r4]
    // ldrb r2, [r5]
    // ldr r0, [r0, #0x38]
    // bl ov85_021E9C84
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4]
    // ldrb r2, [r5]
    // ldr r0, [r0, #0x38]
    // mov r1, #0x13
    // bl ov85_021E9C84
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02096ED0(void) {
    // push {r4, lr}
    // add r4, r3, #0
    // ldr r0, [r4]
    // ldrb r2, [r2]
    // ldr r0, [r0, #0x38]
    // mov r1, #1
    // bl ov85_021E9D9C
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02096EEC
    // mov r0, #0
    // str r0, [r4, #0x34]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02096EF0(void) {
    // push {r4, lr}
    // add r4, r3, #0
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02096F08
    // ldr r0, [r4]
    // mov r1, #0xd
    // ldr r0, [r0, #0x38]
    // mov r2, #0
    // bl ov85_021E9C84
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02096F0C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r3, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02096F2A
    // add r0, sp, #0
    // strb r5, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r2, sp, #0
    // mov r3, #1
    // bl sub_02096D4C
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02096F2C(void) {
    // add r0, r3, #0
    // add r0, #0x40
    // ldrh r1, [r0]
    // ldrh r0, [r2]
    // add r3, #0x40
    // orr r0, r1
    // strh r0, [r3]
    // bx lr
    // TODO: decompile
}


void sub_02096F3C(void) {
    // add r1, r3, #0
    // add r1, #0x42
    // ldrh r2, [r1]
    // mov r1, #1
    // lsl r1, r0
    // add r0, r2, #0
    // orr r0, r1
    // add r3, #0x42
    // strh r0, [r3]
    // bx lr
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // add r5, r3, #0
    // bl sub_0203769C
    // cmp r0, #0
    // beq _02096F98
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0, #0x34]
    // bl ov85_021E85CC
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // add r1, r3, #0
    // add r1, #0x48
    // ldrh r2, [r1]
    // mov r1, #1
    // lsl r1, r0
    // add r0, r2, #0
    // orr r0, r1
    // add r3, #0x48
    // strh r0, [r3]
    // bx lr
    // TODO: decompile
}


void sub_02096FD0(void) {
    // add r1, r3, #0
    // add r1, #0x4a
    // ldrh r2, [r1]
    // mov r1, #1
    // lsl r1, r0
    // add r0, r2, #0
    // orr r0, r1
    // add r3, #0x4a
    // strh r0, [r3]
    // bx lr
    // TODO: decompile
}


u8 sub_02096FE4(void) {
    return 0x18;
}


void sub_02096FE8(void) {
    r0 = r0 << 4;
}


void sub_02096FF0(void) {
    // ldr r2, [r1, #0x4c]
    // mov r1, #0x59
    // lsl r1, r1, #4
    // mul r1, r0
    // add r0, r2, r1
    // bx lr
    // TODO: decompile
}


void sub_02096FFC(void) {
    sub_02034818(0);
}


void sub_02097018(void) {
    // ldr r2, [r0, #0x50]
    // mov r0, #0x59
    // lsl r0, r0, #4
    // mul r0, r1
    // add r0, r2, r0
    // bx lr
    // TODO: decompile
}

