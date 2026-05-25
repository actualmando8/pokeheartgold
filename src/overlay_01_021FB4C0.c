/* Decompiled from asm/overlay_01_021FB4C0.s */
#include "global.h"

void ov01_021FB4C0(void) {
    Heap_Alloc(0x1c);
    ov01_021FB55C();
}


void ov01_021FB4D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // beq _021FB4F0
    // ldr r1, [r4]
    // cmp r1, #1
    // bne _021FB4E4
    // bl ov01_021FB514
    // add r0, r4, #0
    // bl ov01_021FB55C
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FB4F4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021FB510 ; =ov01_021FB594
    // add r1, r4, #0
    // bl Main_SetHBlankIntrCB
    // cmp r0, #1
    // beq _021FB508
    // bl GF_AssertFail
    // mov r0, #1
    // str r0, [r4]
    // pop {r4, pc}
    // nop
    // _021FB510: .word ov01_021FB594
    // TODO: decompile
}


void ov01_021FB514(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetHBlankIntrCB
    // cmp r0, #1
    // beq _021FB528
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FB530(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r2, #0
    // bl ov01_021FB5B4
    // add r4, r0, #0
    // bne _021FB542
    // bl GF_AssertFail
    // cmp r4, #0
    // beq _021FB54E
    // str r6, [r4, #4]
    // str r5, [r4, #8]
    // mov r0, #1
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FB554(void) {
    ov01_021FB584();
}


void ov01_021FB55C(void) {
    // push {r3, r4, r5, lr}
    // add r3, r0, #0
    // mov r2, #0x1c
    // mov r1, #0
    // strb r1, [r3]
    // add r3, r3, #1
    // sub r2, r2, #1
    // bne _021FB564
    // mov r4, #0
    // str r4, [r0]
    // add r5, r0, #4
    // add r0, r5, #0
    // bl ov01_021FB584
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, #2
    // blt _021FB572
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FB584(void) {
    // mov r2, #0
    // ldr r1, _021FB590 ; =ov01_021FB5B0
    // str r2, [r0]
    // str r1, [r0, #8]
    // str r2, [r0, #4]
    // bx lr
    // _021FB590: .word ov01_021FB5B0
    // TODO: decompile
}


void ov01_021FB594(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r6, #0
    // add r4, r5, #4
    // ldr r1, [r5, #8]
    // ldr r2, [r5, #0xc]
    // add r0, r4, #0
    // blx r2
    // add r6, r6, #1
    // add r5, #0xc
    // add r4, #0xc
    // cmp r6, #2
    // blt _021FB59C
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FB5B0(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021FB5B4(void) {
    // mov r2, #0
    // add r3, r0, #0
    // ldr r1, [r3, #4]
    // cmp r1, #0
    // bne _021FB5C8
    // add r1, r0, #4
    // mov r0, #0xc
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // add r2, r2, #1
    // add r3, #0xc
    // cmp r2, #2
    // blt _021FB5B8
    // mov r0, #0
    // bx lr
    // TODO: decompile
}

