/* Decompiled from asm/unk_02069660.s */
#include "global.h"

void sub_02069660(void) {
    // strb r1, [r0]
}




void sub_02069670(void) {
    // str r0, [r5]
    // add r2, #8
    // add r1, r2, r3
    // add r1, r1, r3
    // add r0, r0, r1
}




void sub_020696C4(void) {
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r3, [sp, #0x10]
}




void sub_020696E8(void) {
}




void sub_02069700(void) {
}




void sub_02069714(void) {
    SysTask_CreateOnVBlankQueue(sub_02069700, r0, 0x0000FFFF);
    GF_AssertFail();
}




void sub_02069734(void) {
}




void sub_02069744(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    NNS_G3dTexReleaseTexKey(*((u32*)(r0 + 0x10)));
    // ldr r0, [sp, #4]
    // blx r1
    // ldr r0, [sp]
    // blx r1
    NNS_G3dPlttReleasePlttKey(*((u32*)(r4 + 0x10)), *((u32*)NNS_GfdDefaultFuncFreeTexVram));
    // blx r1
    *((u32*)(r4 + 0x10)) = 0;
}




void sub_02069784(void) {
}



