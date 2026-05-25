/* Decompiled from asm/unk_0202068C.s */
#include "global.h"

FaceIconContext * sub_0202068C(void) {
    Heap_Alloc(r1, 8);
    // mul r1, r5
    Heap_Alloc(r6, 0x14);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = r5;
    // add r0, r0, r5
    sub_02020770(*((u32*)r4));
    // add r5, #0x14
}



void sub_020206C8(void) {
}




void * sub_020206E0(void) {
    // mov ip, r1
    // mul r0, r2
    // add r4, r5, r0
    // add r3, #0x14
    // mov r0, ip
    // str r0, [r4]
    *((u32*)(0 + 4)) = r2;
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    *((u32*)(0 + 8)) = r3;
    *((u32*)(0 + 0xc)) = 0;
    *((u8*)(0 + 0x10)) = 0xff;
    *((u8*)(0 + 0x11)) = 0xff;
    sub_02020780(0, ((*((u32*)*((u32*)r0)) << 4) >> 0x10), (0 + 1), *((u32*)r0));
}



void sub_02020738(void) {
}




void sub_02020740(void) {
    // add r0, r0, r4
    // add r4, #0x14
}




void sub_02020764(void) {
}




void sub_02020770(void) {
}




void sub_02020780(void) {
    // add r2, sp, #0
    // strb r0, [r2]
    // add r1, sp, #0
    // add r1, #2
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #2
}




void sub_020207C8(void) {
    sub_02020820();
    // and r3, r6
    GF_CreateNewVramTransferTask(0, ((*((u32*)(r5 + 8)) << 0x10) >> 0xd), r0, ((*((u32*)(r5 + 8)) >> 0x10) << 4));
    *((u8*)(r5 + 0x10)) = *((u8*)r4);
}




void sub_020207F4(void) {
    sub_0202082C();
    // and r3, r6
    GF_CreateNewVramTransferTask(1, ((*((u32*)(r5 + 0xc)) << 0x10) >> 0xd), r0, ((*((u32*)(r5 + 0xc)) >> 0x10) << 3));
    *((u8*)(r5 + 0x11)) = *((u8*)(r4 + 1));
}




void sub_02020820(void) {
}




void sub_0202082C(void) {
}




void sub_02020838(void) {
    // add r2, #0x3c
    // add r3, #0x3d
    // add r3, #0x42
    // add r3, r2, r4
    // add r3, r3, r1
    // add r2, r0, r1
    // add r0, r1, r0
    // add r0, r2, r0
}




void sub_02020888(void) {
    // add r4, r0, r2
    // add r3, r4, r2
    // add r2, r3, r1
    // add r1, r0, r1
    // add r0, r1, r0
}




s32 sub_020208CC(void) {
    // add r0, r1, r0
}




void * sub_020208DC(void) {
    // add r0, sp, #0
    sub_02020B3C();
    // add r0, #0x3c
    // add r1, sp, #0
    NNS_G3dGetResDataByName(r4);
    sub_020208CC(r4, 0);
}



void * sub_02020910(void) {
    // add r2, #0x3c
    // add r3, #0x3d
    // ldrb r3, [r3]
    // add r3, #0x42
    // ldrh r4, [r3]
    // add r3, r2, r4
    // ldrh r2, [r2, r4]
    // mul r1, r2
    // add r1, r3, r1
    sub_020208CC(0, 0, r0, (r0 + 4));
}



u32 sub_0202094C(void) {
    // and r1, r0
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02020968: ; jump table
    // and r2, r3
    // and r0, r3
}




u32 sub_020209AC(void) {
    // add r2, #0x3c
    // add r3, #0x3d
    // add r3, #0x42
    // add r3, r2, r4
    // add r1, r3, r1
}




u32 sub_020209E0(void) {
    // add r0, sp, #0
    // add r0, #0x3c
    // add r1, sp, #0
}



