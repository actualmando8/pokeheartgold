/* Decompiled from asm/unk_02069660.s */
#include "global.h"

void sub_02069660(void) {
    // strb r1, [r0]
}



void sub_02069670(void) {
    sub_02069660();
    *((u32*)(r5 + 4)) = r4;
    // str r0, [r5]
    NNS_G3dGetMdlSet(r4);
    *((u32*)(r5 + 8)) = r0;
    // add r2, #8
    // add r1, r2, r3
    // ldrh r2, [r2, r3]
    // mul r3, r6
    // add r1, r1, r3
    // add r0, r0, r1
    *((u32*)(r5 + 0xc)) = 0;
    NNS_G3dGetTex(r4, *((u32*)0), r0, r0);
    *((u32*)(r5 + 0x10)) = r0;
}



void sub_020696C4(void) {
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r3, [sp, #0x10]
    GfGfxLoader_LoadFromOpenNarc(r2, r3, 0);
    sub_02069670(r5, r0, r4);
}



void sub_020696E8(void) {
}



void sub_02069700(void) {
}



void sub_02069714(void) {
    // push {r3, lr}
    // add r1, r0, #0
    // ldr r0, _0206972C ; =sub_02069700
    // ldr r2, _02069730 ; =0x0000FFFF
    // bl SysTask_CreateOnVBlankQueue
    // cmp r0, #0
    // bne _02069728
    // bl GF_AssertFail
    // pop {r3, pc}
    // nop
    // _0206972C: .word sub_02069700
    // _02069730: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02069734(void) {
}



void sub_02069744(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _02069778
    // add r1, sp, #4
    // add r2, sp, #0
    // bl NNS_G3dTexReleaseTexKey
    // ldr r1, _0206977C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, _0206977C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp]
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4, #0x10]
    // bl NNS_G3dPlttReleasePlttKey
    // ldr r1, _02069780 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r1, [r1]
    // blx r1
    // mov r0, #0
    // str r0, [r4, #0x10]
    // add sp, #8
    // pop {r4, pc}
    // _0206977C: .word NNS_GfdDefaultFuncFreeTexVram
    // _02069780: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}



void sub_02069784(void) {
}


