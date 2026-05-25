/* Decompiled from asm/unk_02018000.s */
#include "global.h"

void sub_02018030(void) {
    // str r4, [sp]
    GfGfxLoader_LoadFromOpenNarc(r1, r2, 0);
    // str r0, [r5]
    sub_02018324(r5);
}



void sub_0201804C(void) {
}



void sub_02018068(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _02018098
    // add r1, sp, #4
    // add r2, sp, #0
    // bl NNS_G3dTexReleaseTexKey
    // ldr r1, _020180B4 ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, _020180B4 ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [sp]
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4, #0xc]
    // bl NNS_G3dPlttReleasePlttKey
    // ldr r1, _020180B8 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _020180A2
    // bl Heap_Free
    // mov r1, #0x10
    // mov r0, #0
    // strb r0, [r4]
    // add r4, r4, #1
    // sub r1, r1, #1
    // bne _020180A6
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _020180B4: .word NNS_GfdDefaultFuncFreeTexVram
    // _020180B8: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}



void sub_020180BC(void) {
    // ldr r3, [sp, #0x18]
    // str r6, [sp]
    GfGfxLoader_LoadFromOpenNarc(r2, r3, 0);
    // ldr r3, [sp, #0x1c]
    sub_020182F8(r5, r4, r0);
    *((u32*)(r5 + 0x10)) = r6;
}



void sub_020180E8(void) {
}



void sub_020180F8(void) {
    NNS_G3dFreeAnmObj(r1, *((u32*)(r0 + 8)));
    Heap_Free(*((u32*)r4));
    // strb r0, [r4]
}



void sub_02018124(void) {
    // add r0, r0, r1
    _s32_div_f(*((u32*)(r0 + 0xc)), (*((u16*)(*((u32*)(*((u32*)(r0 + 8)) + 8)) + 4)) << 0xc), (*((u16*)(*((u32*)(*((u32*)(r0 + 8)) + 8)) + 4)) << 0xc));
    *((u32*)(r4 + 0xc)) = r1;
    // add r3, #0xc
    // add r0, r0, r1
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
    // bpl _02018154
    // add r0, r0, r2
    // str r0, [r3]
    // str r1, [r0]
}



u32 sub_0201815C(void) {
    // add r1, r3, r1
    *((u32*)(r0 + 0xc)) = r1;
    *((u32*)(r0 + 0xc)) = (*((u16*)(*((u32*)(*((u32*)(r0 + 8)) + 8)) + 4)) << 0xc);
    // add r1, r3, r1
    // bmi _02018186
    *((u32*)(r0 + 0xc)) = r1;
    *((u32*)(r0 + 0xc)) = 1;
    // str r1, [r0]
}



void sub_02018198(void) {
    *((u32*)(r0 + 0xc)) = r1;
    // str r1, [r0]
}



void sub_020181A0(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}



void sub_020181A4(void) {
    // ldr r0, [r0, #8]
    // ldr r0, [r0, #8]
    // ldrh r0, [r0, #4]
    // lsl r0, r0, #0xc
    // bx lr
    // TODO: decompile
}



void sub_020181B0(void) {
    memset(0, 0x78);
    NNS_G3dRenderObjInit(r4, *((u32*)(r5 + 8)));
    *((u32*)(r4 + 0x6c)) = 1;
    *((u32*)(r4 + 0x60)) = (1 << 0xc);
    *((u32*)(r4 + 0x64)) = (1 << 0xc);
    *((u32*)(r4 + 0x68)) = (1 << 0xc);
}



void sub_020181D4(void) {
}



void sub_020181E0(void) {
}



void sub_020181EC(void) {
    // push {r4, lr}
    // sub sp, #0x48
    // add r4, r0, #0
    // ldr r0, [r4, #0x6c]
    // cmp r0, #0
    // beq _02018280
    // add r0, sp, #0x24
    // bl MTX_Identity33_
    // add r0, r4, #0
    // add r0, #0x70
    // ldrh r0, [r0]
    // ldr r3, _02018284 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotX33_
    // add r1, sp, #0x24
    // add r0, sp, #0
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x74
    // ldrh r0, [r0]
    // ldr r3, _02018284 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotZ33_
    // add r1, sp, #0x24
    // add r0, sp, #0
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r0, r4, #0
    // add r0, #0x72
    // ldrh r0, [r0]
    // ldr r3, _02018284 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r1, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    // bl MTX_RotY33_
    // add r1, sp, #0x24
    // add r0, sp, #0
    // add r2, r1, #0
    // bl MTX_Concat33
    // add r1, r4, #0
    // add r0, r4, #0
    // add r4, #0x60
    // add r1, #0x54
    // add r2, sp, #0x24
    // add r3, r4, #0
    // bl GF3dRender_DrawModel
    // add sp, #0x48
    // pop {r4, pc}
    // _02018284: .word FX_SinCosTable_
    // TODO: decompile
}



void sub_02018288(void) {
}



void sub_020182A0(void) {
}



void sub_020182A4(void) {
    // ldr r0, [r0, #0x6c]
    // bx lr
    // TODO: decompile
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
    // ldrh r0, [r0]
}



void sub_020182F8(void) {
}



void sub_02018324(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _02018332
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl NNS_G3dGetMdlSet
    // str r0, [r4, #4]
    // cmp r0, #0
    // beq _0201835E
    // add r2, r0, #0
    // add r2, #8
    // beq _02018352
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _02018352
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _02018354
    // mov r1, #0
    // cmp r1, #0
    // beq _0201835E
    // ldr r1, [r1]
    // add r0, r0, r1
    // b _02018360
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // bl NNS_G3dGetTex
    // str r0, [r4, #0xc]
    // cmp r0, #0
    // beq _0201837A
    // mov r2, #1
    // ldr r0, _0201837C ; =sub_0201804C
    // add r1, r4, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // pop {r4, pc}
    // _0201837C: .word sub_0201804C
    // TODO: decompile
}


