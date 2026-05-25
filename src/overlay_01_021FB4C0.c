/* Decompiled from asm/overlay_01_021FB4C0.s */
#include "global.h"

void ov01_021FB4C0(void) {
}




void ov01_021FB4D4(void) {
}




void ov01_021FB4F4(void) {
    Main_SetHBlankIntrCB(ov01_021FB594, r0);
    GF_AssertFail();
    // str r0, [r4]
}




void ov01_021FB514(void) {
    // str r0, [r4]
}




void ov01_021FB530(void) {
    // str r0, [r4]
}




void ov01_021FB554(void) {
}




void ov01_021FB55C(void) {
    // strb r1, [r3]
    // str r4, [r0]
    // add r5, #0xc
}




void ov01_021FB584(void) {
    // str r2, [r0]
    *((u32*)(r0 + 8)) = ov01_021FB5B0;
    *((u32*)(r0 + 4)) = 0;
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
    // add r0, r1, r0
    // add r3, #0xc
}



