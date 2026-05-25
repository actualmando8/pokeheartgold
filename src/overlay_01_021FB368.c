/* Decompiled from asm/overlay_01_021FB368.s */
#include "global.h"

void ov01_021FB368(void) {
    // push {r4, r5}
    // ldr r3, [r2, #0x14]
    // cmp r3, #0
    // bne _021FB376
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // ldr r5, [r2]
    // ldr r3, [r2, #8]
    // ldr r4, [r2, #4]
    // ldr r2, [r2, #0xc]
    // add r3, r5, r3
    // add r2, r4, r2
    // sub r3, r3, #1
    // sub r2, r2, #1
    // cmp r5, r0
    // bgt _021FB39C
    // cmp r0, r3
    // bgt _021FB39C
    // cmp r4, r1
    // bgt _021FB39C
    // cmp r1, r2
    // bgt _021FB39C
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov01_021FB3A4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #8
    // bl Heap_Alloc
    // mov r1, #0x18
    // add r4, r0, #0
    // add r0, r6, #0
    // mul r1, r5
    // bl Heap_Alloc
    // str r0, [r4, #4]
    // mov r6, #0
    // str r5, [r4]
    // cmp r5, #0
    // bls _021FB3E0
    // add r0, r6, #0
    // mov r1, #0x18
    // add r2, r6, #0
    // ldr r3, [r4, #4]
    // mul r2, r1
    // add r2, r3, r2
    // str r0, [r2, #0x14]
    // add r2, r6, #1
    // lsl r2, r2, #0x18
    // lsr r6, r2, #0x18
    // cmp r6, r5
    // blo _021FB3CC
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FB3E4(void) {
    // push {r4, r5}
    // ldr r5, [sp, #0x10]
    // mov r4, #0x18
    // mul r4, r0
    // ldr r0, [r5, #4]
    // str r1, [r0, r4]
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #8]
    // add r0, r0, r4
    // str r2, [r0, #4]
    // ldr r0, [r5, #4]
    // add r0, r0, r4
    // str r3, [r0, #8]
    // ldr r0, [r5, #4]
    // add r0, r0, r4
    // str r1, [r0, #0xc]
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #0xc]
    // add r0, r0, r4
    // str r1, [r0, #0x10]
    // ldr r0, [r5, #4]
    // mov r1, #1
    // add r0, r0, r4
    // str r1, [r0, #0x14]
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov01_021FB418(void) {
    Heap_Free(*((u32*)(r0 + 4)));
    Heap_Free(r4);
}


void ov01_021FB42C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // str r3, [sp]
    // cmp r3, #0
    // bne _021FB43E
    // bl GF_AssertFail
    // ldr r0, [r5]
    // mov r4, #0
    // cmp r0, #0
    // ble _021FB46E
    // mov r3, #0x18
    // ldr r2, [r5, #4]
    // mul r3, r4
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, r2, r3
    // bl ov01_021FB368
    // cmp r0, #0
    // beq _021FB462
    // ldr r0, [sp]
    // strb r4, [r0]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [r5]
    // cmp r4, r0
    // blt _021FB446
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FB474(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r5, r0
    // blt _021FB484
    // bl GF_AssertFail
    // mov r0, #0x18
    // add r6, r5, #0
    // mul r6, r0
    // ldr r0, [r4, #4]
    // add r0, r0, r6
    // ldr r0, [r0, #0x14]
    // cmp r0, #0
    // bne _021FB498
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // add r0, r0, r6
    // ldr r0, [r0, #0x10]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FB4A0(void) {
    GF_AssertFail(0x18);
}

