/* Decompiled from asm/unk_02069660.s */
#include "global.h"

void sub_02069660(void) {
    // mov r2, #0x14
    // mov r1, #0
    // strb r1, [r0]
    // add r0, r0, #1
    // sub r2, r2, #1
    // bne _02069664
    // bx lr
    // TODO: decompile
}


void sub_02069670(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl sub_02069660
    // str r4, [r5, #4]
    // mov r0, #0
    // str r0, [r5]
    // add r0, r4, #0
    // bl NNS_G3dGetMdlSet
    // str r0, [r5, #8]
    // cmp r0, #0
    // beq _020696B6
    // add r2, r0, #0
    // add r2, #8
    // beq _020696AA
    // ldrb r1, [r0, #9]
    // cmp r6, r1
    // bhs _020696AA
    // ldrh r3, [r0, #0xe]
    // add r1, r2, r3
    // ldrh r2, [r2, r3]
    // add r1, r1, #4
    // add r3, r2, #0
    // mul r3, r6
    // add r1, r1, r3
    // b _020696AC
    // mov r1, #0
    // cmp r1, #0
    // beq _020696B6
    // ldr r1, [r1]
    // add r0, r0, r1
    // b _020696B8
    // mov r0, #0
    // str r0, [r5, #0xc]
    // add r0, r4, #0
    // bl NNS_G3dGetTex
    // str r0, [r5, #0x10]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020696C4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [sp, #0x14]
    // add r4, r1, #0
    // add r1, r3, #0
    // str r0, [sp]
    // add r0, r2, #0
    // ldr r3, [sp, #0x10]
    // mov r2, #0
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, r4, #0
    // bl sub_02069670
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020696E8(void) {
    GF3dRender_AllocAndLoadTexResources(*((u32*)(r0 + 0x10)));
    NNS_G3dBindMdlSet(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x10)));
}


void sub_02069700(void) {
    sub_020696E8(r1);
    SysTask_Destroy(r4);
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
    Heap_Free();
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
    sub_02069744();
    sub_02069734(r4);
    sub_02069660(r4);
}

