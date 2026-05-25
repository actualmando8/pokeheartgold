/* Decompiled from asm/overlay_01_021FB4C0.s */
#include "global.h"

void ov01_021FB4C0(void) {
}



void ov01_021FB4D4(void) {
    ov01_021FB514(*((u32*)r0));
    ov01_021FB55C(r4);
    Heap_Free(r4);
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
    Main_SetHBlankIntrCB(0, 0);
    GF_AssertFail();
    // str r0, [r4]
}



void ov01_021FB530(void) {
    ov01_021FB5B4();
    GF_AssertFail();
    *((u32*)(r4 + 4)) = r6;
    *((u32*)(r4 + 8)) = r5;
    // str r0, [r4]
}



void ov01_021FB554(void) {
}



void ov01_021FB55C(void) {
    // strb r1, [r3]
    // str r4, [r0]
    ov01_021FB584((r0 + 4), 0, (0x1c - 1), (r0 + 1));
    // add r5, #0xc
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
    // blx r2
    // add r5, #0xc
    // add r4, #0xc
}



void ov01_021FB5B0(void) {
    // bx lr
    // TODO: decompile
}



void ov01_021FB5B4(void) {
    // mul r0, r2
    // add r0, r1, r0
    // add r3, #0xc
}


