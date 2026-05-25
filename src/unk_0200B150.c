/* Decompiled from asm/unk_0200B150.s */
#include "global.h"

void OamManager_Create(void) {
    // sub r4, r0, r4
    // sub r1, r1, r4
    // sub r2, r4, r2
    // sub r3, r3, r2
    // ldr r2, [sp, #0x20]
    // str r2, [sp]
    // ldr r2, [sp, #0x24]
    // str r2, [sp, #4]
    // ldr r2, [sp, #0x28]
    // str r2, [sp, #8]
    // ldr r2, [sp, #0x2c]
    // str r2, [sp, #0xc]
    // ldr r2, [sp, #0x30]
    // str r2, [sp, #0x10]
    sub_0200B194(4, r2);
}



void sub_0200B194(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _0200B220 ; =_021D0EB0
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r0, #0
    // beq _0200B1AC
    // bl GF_AssertFail
    // ldr r0, [sp, #0x30]
    // mov r1, #0x3c
    // bl Heap_Alloc
    // ldr r1, _0200B220 ; =_021D0EB0
    // cmp r0, #0
    // str r0, [r1]
    // bne _0200B1C0
    // bl GF_AssertFail
    // ldr r1, _0200B220 ; =_021D0EB0
    // lsl r3, r6, #0x10
    // ldr r2, [sp, #0x30]
    // ldr r0, [r1]
    // lsr r3, r3, #0x10
    // str r2, [r0, #0x38]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [r1]
    // lsl r1, r5, #0x10
    // lsl r2, r4, #0x10
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // bl NNS_G2dGetNewOamManagerInstance
    // cmp r0, #0
    // bne _0200B1EC
    // bl GF_AssertFail
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x20]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0200B220 ; =_021D0EB0
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // ldr r0, [r0]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x10
    // add r0, #0x1c
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x10
    // bl NNS_G2dGetNewOamManagerInstance
    // cmp r0, #0
    // bne _0200B21C
    // bl GF_AssertFail
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0200B220: .word _021D0EB0
    // TODO: decompile
}



void OamManager_ApplyAndResetBuffers(void) {
    // push {r3, lr}
    // ldr r0, _0200B240 ; =_021D0EB0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0200B23C
    // bl NNS_G2dApplyAndResetOamManagerBuffer
    // ldr r0, _0200B240 ; =_021D0EB0
    // ldr r0, [r0]
    // add r0, #0x1c
    // bl NNS_G2dApplyAndResetOamManagerBuffer
    // pop {r3, pc}
    // nop
    // _0200B240: .word _021D0EB0
    // TODO: decompile
}



void OamManager_Free(void) {
    // push {r3, lr}
    // ldr r0, _0200B278 ; =_021D0EB0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0200B252
    // bl GF_AssertFail
    // ldr r0, _0200B278 ; =_021D0EB0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x38]
    // bl thunk_ClearMainOAM
    // ldr r0, _0200B278 ; =_021D0EB0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x38]
    // bl thunk_ClearSubOAM
    // ldr r0, _0200B278 ; =_021D0EB0
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _0200B278 ; =_021D0EB0
    // mov r1, #0
    // str r1, [r0]
    // pop {r3, pc}
    // nop
    // _0200B278: .word _021D0EB0
    // TODO: decompile
}



void sub_0200B27C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // ldr r0, _0200B2C8 ; =_021D0EB0
    // add r7, r1, #0
    // ldr r0, [r0]
    // add r5, r2, #0
    // add r4, r3, #0
    // cmp r0, #0
    // bne _0200B294
    // bl GF_AssertFail
    // cmp r5, #1
    // bne _0200B2B0
    // ldr r0, _0200B2CC ; =sub_02025C98
    // ldr r2, _0200B2D0 ; =sub_0200B2F0
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r3, _0200B2D4 ; =sub_0200B334
    // add r0, r6, #0
    // add r1, r7, #0
    // str r4, [sp, #8]
    // bl sub_02025C54
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _0200B2CC ; =sub_02025C98
    // ldr r2, _0200B2D8 ; =sub_0200B310
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r3, _0200B2DC ; =sub_0200B358
    // add r0, r6, #0
    // add r1, r7, #0
    // str r4, [sp, #8]
    // bl sub_02025C54
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0200B2C8: .word _021D0EB0
    // _0200B2CC: .word sub_02025C98
    // _0200B2D0: .word sub_0200B2F0
    // _0200B2D4: .word sub_0200B334
    // _0200B2D8: .word sub_0200B310
    // _0200B2DC: .word sub_0200B358
    // TODO: decompile
}



void thunk_ClearMainOAM(void) {
}



void thunk_ClearSubOAM(void) {
}



void sub_0200B2F0(void) {
    // push {r4, lr}
    // add r3, r0, #0
    // ldr r0, _0200B30C ; =_021D0EB0
    // add r2, r1, #0
    // ldr r0, [r0]
    // add r1, r3, #0
    // bl NNS_G2dEntryOamManagerOamWithAffineIdx
    // add r4, r0, #0
    // bne _0200B308
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _0200B30C: .word _021D0EB0
    // TODO: decompile
}



void sub_0200B310(void) {
    // push {r4, lr}
    // add r3, r0, #0
    // ldr r0, _0200B330 ; =_021D0EB0
    // add r2, r1, #0
    // ldr r0, [r0]
    // add r1, r3, #0
    // add r0, #0x1c
    // bl NNS_G2dEntryOamManagerOamWithAffineIdx
    // add r4, r0, #0
    // bne _0200B32A
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _0200B330: .word _021D0EB0
    // TODO: decompile
}



void sub_0200B334(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // ldr r0, _0200B350 ; =_021D0EB0
    // ldr r0, [r0]
    // bl NNS_G2dEntryOamManagerAffine
    // add r4, r0, #0
    // ldr r0, _0200B354 ; =0x0000FFFE
    // cmp r4, r0
    // bne _0200B34C
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _0200B350: .word _021D0EB0
    // _0200B354: .word 0x0000FFFE
    // TODO: decompile
}



void sub_0200B358(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // ldr r0, _0200B378 ; =_021D0EB0
    // ldr r0, [r0]
    // add r0, #0x1c
    // bl NNS_G2dEntryOamManagerAffine
    // add r4, r0, #0
    // ldr r0, _0200B37C ; =0x0000FFFE
    // cmp r4, r0
    // bne _0200B372
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _0200B378: .word _021D0EB0
    // _0200B37C: .word 0x0000FFFE
    // TODO: decompile
}


