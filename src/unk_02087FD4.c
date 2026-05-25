/* Decompiled from asm/unk_02087FD4.s */
#include "global.h"

void sub_02087FD4(void) {
    GF_AssertFail(0x24);
}


void sub_02087FF8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bne _0208800C
    // bl sub_02087E1C
    // cmp r0, #0
    // bne _0208800C
    // ldr r0, _02088028 ; =_0210357C
    // pop {r3, r4, r5, pc}
    // cmp r4, #3
    // bne _0208801E
    // add r0, r5, #0
    // bl sub_02087E1C
    // cmp r0, #0
    // bne _0208801E
    // ldr r0, _0208802C ; =_02102DC0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_02087FD4
    // pop {r3, r4, r5, pc}
    // nop
    // _02088028: .word _0210357C
    // _0208802C: .word _02102DC0
    // TODO: decompile
}


void sub_02088030(void) {
    // push {r3, r4}
    // ldr r1, _02088058 ; =0x00000818
    // mov r3, #0
    // ldr r4, [r0, r1]
    // mov r1, #0x6e
    // lsl r1, r1, #4
    // str r3, [r0, r1]
    // ldr r2, [r4]
    // cmp r2, #0
    // beq _0208804A
    // ldr r2, [r0, r1]
    // add r2, r2, #1
    // str r2, [r0, r1]
    // add r3, r3, #1
    // add r4, #0x24
    // cmp r3, #5
    // blt _0208803E
    // pop {r3, r4}
    // bx lr
    // nop
    // _02088058: .word 0x00000818
    // TODO: decompile
}

