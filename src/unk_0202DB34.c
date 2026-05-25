/* Decompiled from asm/unk_0202DB34.s */
#include "global.h"

void sub_0202DB34(void) {
    SaveArray_Get();
}


u8 sub_0202DB40(void) {
    return 0xf8;
}


void sub_0202DB44(void) {
    // ldr r3, _0202DB50 ; =MIi_CpuClearFast
    // add r1, r0, #0
    // mov r0, #0
    // mov r2, #0xf8
    // bx r3
    // nop
    // _0202DB50: .word MIi_CpuClearFast
    // TODO: decompile
}


void sub_0202DB54(void) {
    // add r0, #0xec
    // ldrh r0, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202DB5C(void) {
    // add r0, #0xec
    // strh r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202DB64(void) {
    MIi_CpuCopyFast();
}


void sub_0202DB70(void) {
    // ldr r3, _0202DB7C ; =MIi_CpuCopyFast
    // add r2, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // mov r2, #0xec
    // bx r3
    // _0202DB7C: .word MIi_CpuCopyFast
    // TODO: decompile
}


void sub_0202DB80(void) {
    // add r0, #0xf0
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202DB88(void) {
    // add r0, #0xf0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202DB90(void) {
    // add r0, #0xf4
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202DB98(void) {
    // add r0, #0xf4
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202DBA0(void) {
    // add r0, #0xee
    // ldrh r0, [r0]
    // bx lr
    // TODO: decompile
}

