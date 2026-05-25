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
}




void sub_0200B194(void) {
    GF_AssertFail(*((u32*)_021D0EB0));
    // ldr r0, [sp, #0x30]
    Heap_Alloc(0x3c);
    // str r0, [r1]
    GF_AssertFail(_021D0EB0);
    // ldr r2, [sp, #0x30]
    *((u32*)(*((u32*)_021D0EB0) + 0x38)) = r2;
    // str r0, [sp]
    // str r0, [sp, #4]
    NNS_G2dGetNewOamManagerInstance(*((u32*)_021D0EB0), ((r5 << 0x10) >> 0x10), ((r4 << 0x10) >> 0x10), ((r6 << 0x10) >> 0x10));
    GF_AssertFail();
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // add r0, #0x1c
    NNS_G2dGetNewOamManagerInstance(*((u32*)_021D0EB0), ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10), ((r3 << 0x10) >> 0x10));
    GF_AssertFail();
}




void OamManager_ApplyAndResetBuffers(void) {
    NNS_G2dApplyAndResetOamManagerBuffer(*((u32*)_021D0EB0));
    // add r0, #0x1c
    NNS_G2dApplyAndResetOamManagerBuffer(*((u32*)_021D0EB0));
}




void OamManager_Free(void) {
    GF_AssertFail(*((u32*)_021D0EB0));
    thunk_ClearMainOAM(*((u32*)(*((u32*)_021D0EB0) + 0x38)));
    thunk_ClearSubOAM(*((u32*)(*((u32*)_021D0EB0) + 0x38)));
    Heap_Free(*((u32*)_021D0EB0));
    // str r1, [r0]
}




void sub_0200B27C(void) {
    GF_AssertFail(*((u32*)_021D0EB0));
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r4, [sp, #8]
    sub_02025C54(r6, r7, sub_0200B2F0, sub_0200B334);
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r4, [sp, #8]
    sub_02025C54(r6, r7, sub_0200B310, sub_0200B358);
}




void thunk_ClearMainOAM(void) {
}




void thunk_ClearSubOAM(void) {
}




void * sub_0200B2F0(void) {
    NNS_G2dEntryOamManagerOamWithAffineIdx(*((u32*)_021D0EB0), r0, r1, r0);
    GF_AssertFail();
}




void * sub_0200B310(void) {
    // add r0, #0x1c
    NNS_G2dEntryOamManagerOamWithAffineIdx(*((u32*)_021D0EB0), r0, r1, r0);
    GF_AssertFail();
}




void * sub_0200B334(void) {
    NNS_G2dEntryOamManagerAffine(*((u32*)_021D0EB0), r0);
    GF_AssertFail(0x0000FFFE);
}




void * sub_0200B358(void) {
    // add r0, #0x1c
    NNS_G2dEntryOamManagerAffine(*((u32*)_021D0EB0), r0);
    GF_AssertFail(0x0000FFFE);
}



