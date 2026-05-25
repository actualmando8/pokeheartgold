/* Decompiled from asm/unk_0202E41C.s */
#include "global.h"

void sub_0202E41C(void) {
    // ldr r0, _0202E420 ; =0x00000BC8
    // bx lr
    // _0202E420: .word 0x00000BC8
    // TODO: decompile
}


void sub_0202E424(void) {
    // push {r3, lr}
    // ldr r2, _0202E438 ; =0x00000BC8
    // add r1, r0, #0
    // mov r0, #0
    // bl MIi_CpuClearFast
    // mov r0, #0x17
    // bl SaveSubstruct_UpdateCRC
    // pop {r3, pc}
    // _0202E438: .word 0x00000BC8
    // TODO: decompile
}


void sub_0202E43C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // mov r0, #0
    // add r1, #0xc
    // mov r2, #0xc0
    // bl MIi_CpuClearFast
    // add r1, r4, #0
    // mov r0, #0
    // add r1, #0xcc
    // mov r2, #0xc0
    // bl MIi_CpuClearFast
    // mov r1, #0x63
    // lsl r1, r1, #2
    // mov r0, #0
    // add r1, r4, r1
    // mov r2, #0xc0
    // bl MIi_CpuClearFast
    // add r0, r4, #0
    // bl sub_0202E474
    // mov r0, #0x17
    // bl SaveSubstruct_UpdateCRC
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0202E474(void) {
    sub_0202E48C(0);
    sub_0202E498(r4);
    SaveSubstruct_UpdateCRC(0x17);
}


void sub_0202E48C(void) {
    SaveSubstruct_UpdateCRC();
}


void sub_0202E498(void) {
    // mov r2, #0
    // add r1, r2, #0
    // strb r1, [r0, r2]
    // add r2, r2, #1
    // cmp r2, #4
    // blt _0202E49C
    // ldr r3, _0202E4AC ; =SaveSubstruct_UpdateCRC
    // mov r0, #0x17
    // bx r3
    // nop
    // _0202E4AC: .word SaveSubstruct_UpdateCRC
    // TODO: decompile
}

