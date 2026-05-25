/* Decompiled from asm/unk_020773AC.s */
#include "global.h"

void sub_020773AC(void) {
    // push {r3, lr}
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _020773CC ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _020773D0 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // pop {r3, pc}
    // _020773CC: .word 0xFFFFE0FF
    // _020773D0: .word 0x04001000
    // TODO: decompile
}



void sub_020773D4(void) {
    // push {r3, lr}
    // mov r0, #7
    // str r0, [sp]
    // ldr r0, _020773F8 ; =0x04000050
    // mov r1, #0
    // mov r2, #0xe
    // mov r3, #0xb
    // bl G2x_SetBlendAlpha_
    // mov r0, #8
    // str r0, [sp]
    // ldr r0, _020773FC ; =0x04001050
    // mov r1, #0
    // mov r2, #0xe
    // mov r3, #7
    // bl G2x_SetBlendAlpha_
    // pop {r3, pc}
    // _020773F8: .word 0x04000050
    // _020773FC: .word 0x04001050
    // TODO: decompile
}



void sub_02077400(void) {
}



void sub_0207741C(void) {
    // push {r3, lr}
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02077488 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // add r0, #0x58
    // ldrh r2, [r0]
    // ldr r1, _0207748C ; =0xFFFFCFFD
    // and r2, r1
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _02077490 ; =0x0000CFFB
    // and r3, r2
    // strh r3, [r0]
    // ldrh r3, [r0]
    // sub r2, #0x1c
    // and r3, r1
    // mov r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl G3X_SetFog
    // mov r0, #0
    // ldr r2, _02077494 ; =0x00007FFF
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _02077498 ; =0xBFFF0000
    // ldr r0, _0207749C ; =0x04000580
    // str r1, [r0]
    // pop {r3, pc}
    // _02077488: .word 0x04000008
    // _0207748C: .word 0xFFFFCFFD
    // _02077490: .word 0x0000CFFB
    // _02077494: .word 0x00007FFF
    // _02077498: .word 0xBFFF0000
    // _0207749C: .word 0x04000580
    // TODO: decompile
}



void sub_020774A0(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _020774D8 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r0, #2
    // mov r1, #0
    // ldr r3, [r3]
    // lsl r0, r0, #0xe
    // add r2, r1, #0
    // blx r3
    // ldr r3, _020774DC ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r1, #0
    // add r4, r0, #0
    // ldr r3, [r3]
    // mov r0, #0xa0
    // add r2, r1, #0
    // blx r3
    // add r5, r0, #0
    // cmp r4, #0
    // bne _020774C8
    // bl GF_AssertFail
    // cmp r5, #0
    // bne _020774D0
    // bl GF_AssertFail
    // bl sub_02014DA0
    // pop {r3, r4, r5, pc}
    // nop
    // _020774D8: .word NNS_GfdDefaultFuncAllocTexVram
    // _020774DC: .word NNS_GfdDefaultFuncAllocPlttVram
    // TODO: decompile
}



void sub_020774E0(void) {
    Thunk_G3X_Reset();
    sub_0201543C();
    Thunk_G3X_Reset();
    NNS_G2dSetupSoftwareSpriteCamera();
    sub_02015460();
    RequestSwap3DBuffers(1, 0);
}



void sub_02077504(void) {
}



void sub_02077520(void) {
}



void sub_0207753C(void) {
    // push {r4, lr}
    // sub sp, #8
    // mov r1, #0x12
    // lsl r1, r1, #0xa
    // add r4, r0, #0
    // bl Heap_Alloc
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r3, #0x12
    // ldr r0, _0207757C ; =sub_02077504
    // ldr r1, _02077580 ; =sub_02077520
    // lsl r3, r3, #0xa
    // str r4, [sp, #4]
    // bl sub_02014DB4
    // add r4, r0, #0
    // bl sub_02015524
    // add r2, r0, #0
    // beq _02077574
    // mov r0, #1
    // mov r1, #0xe1
    // lsl r0, r0, #0xc
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // add r0, r4, #0
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0207757C: .word sub_02077504
    // _02077580: .word sub_02077520
    // TODO: decompile
}



void sub_02077584(void) {
}



void sub_020775AC(void) {
}



void sub_020775C4(void) {
    // add r1, sp, #0
    // str r2, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // str r2, [sp]
    // str r2, [sp, #8]
    // str r1, [sp, #4]
    // add r1, r2, r1
    *((u32*)(r0 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r0 + 0x20))) + 4));
    // ldr r2, [sp, #4]
    // add r1, r2, r1
    *((u32*)(r0 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r0 + 0x20))) + 8));
    // ldr r2, [sp, #8]
    // add r1, r2, r1
    *((u32*)(r0 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r0 + 0x20))) + 0xc));
}



void * sub_02077604(void) {
    Heap_Alloc(*((u32*)r0), 0x10);
    GF_AssertFail();
    // str r0, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(r5 + 4));
    sub_02077584(*((u32*)r4), 0x77, *((u32*)(r5 + 4)));
    *((u32*)(r4 + 0xc)) = r0;
    sub_02015528(1);
}



void sub_02077634(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // ldr r2, _0207764C ; =sub_020775C4
    // add r3, r4, #0
    // bl sub_02015494
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl sub_02015528
    // pop {r4, pc}
    // _0207764C: .word sub_020775C4
    // TODO: decompile
}



void sub_02077650(void) {
}



void sub_02077664(void) {
}


