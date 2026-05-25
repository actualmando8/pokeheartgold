/* Decompiled from asm/unk_02018000.s */
#include "global.h"

void sub_02018030(void) {
    // str r4, [sp]
    // str r0, [r5]
}




void sub_0201804C(void) {
}




void sub_02018068(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    NNS_G3dTexReleaseTexKey(*((u32*)(r0 + 0xc)));
    // ldr r0, [sp, #4]
    // blx r1
    // ldr r0, [sp]
    // blx r1
    NNS_G3dPlttReleasePlttKey(*((u32*)(r4 + 0xc)), *((u32*)NNS_GfdDefaultFuncFreeTexVram));
    // blx r1
    Heap_Free(*((u32*)r4), *((u32*)NNS_GfdDefaultFuncFreePlttVram));
    // strb r0, [r4]
}




void sub_020180BC(void) {
    // ldr r3, [sp, #0x18]
    // str r6, [sp]
    // ldr r3, [sp, #0x1c]
}




void sub_020180E8(void) {
}




void sub_020180F8(void) {
    // strb r0, [r4]
}




void sub_02018124(void) {
    // add r0, r0, r1
    // add r3, #0xc
    // add r0, r0, r1
    // bpl _02018154
    // add r0, r0, r2
    // str r0, [r3]
    // str r1, [r0]
}




u32 sub_0201815C(void) {
    // add r1, r3, r1
    // add r1, r3, r1
    // bmi _02018186
    // str r1, [r0]
}




void sub_02018198(void) {
    // str r1, [r0]
}




void sub_020181A0(void) {
}




void sub_020181A4(void) {
}




void sub_020181B0(void) {
}




void sub_020181D4(void) {
}




void sub_020181E0(void) {
}




void sub_020181EC(void) {
    // add r0, sp, #0x24
    MTX_Identity33_(*((u32*)(r0 + 0x6c)));
    // add r0, #0x70
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotX33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // add r0, #0x74
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotZ33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // add r0, #0x72
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotY33_(*((u16*)r4), ((*((u16*)r4) << 1) << 1), (((*((u16*)r4) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // add r4, #0x60
    // add r1, #0x54
    // add r2, sp, #0x24
    GF3dRender_DrawModel(r4, r4, r4);
}




void sub_02018288(void) {
}




void sub_020182A0(void) {
}




void sub_020182A4(void) {
}




void sub_020182A8(void) {
}




void sub_020182B0(void) {
    // str r4, [r1]
    // str r1, [r2]
    // str r0, [r3]
}




void sub_020182C4(void) {
}




void sub_020182CC(void) {
    // str r4, [r1]
    // str r1, [r2]
    // str r0, [r3]
}




void sub_020182E0(void) {
    // add r0, r0, r2
    // add r0, #0x70
    // strh r1, [r0]
}




s16 sub_020182EC(void) {
    // add r0, r0, r1
    // add r0, #0x70
}




void sub_020182F8(void) {
}




void sub_02018324(void) {
    GF_AssertFail(*((u32*)r0));
    NNS_G3dGetMdlSet(*((u32*)r4));
    *((u32*)(r4 + 4)) = r0;
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    *((u32*)(r4 + 8)) = 0;
    NNS_G3dGetTex(*((u32*)r4), *((u32*)0), r0);
    *((u32*)(r4 + 0xc)) = r0;
    SysTask_CreateOnVWaitQueue(sub_0201804C, r4, (1 << 0xa));
}



