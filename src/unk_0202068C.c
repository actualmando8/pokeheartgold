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
    sub_02020770(*((u32*)r0));
    // add r4, #0x14
}



void sub_02020764(void) {
}



void sub_02020770(void) {
}



void sub_02020780(void) {
    sub_02026DE0(*((u32*)r0));
    // add r2, sp, #0
    // strb r0, [r2]
    *((u8*)(r2 + 1)) = (r0 >> 8);
    // ldrb r0, [r2]
    // add r1, sp, #0
    // add r1, #2
    *((u8*)(r2 + 2)) = (r0 >> 8);
    *((u8*)(r2 + 3)) = *((u8*)(r2 + 1));
    sub_020207C8(r4, *((u8*)(r4 + 0x10)));
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #2
    sub_020207F4(r4, *((u8*)(r4 + 0x11)));
}



void sub_020207C8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02020820
    // ldr r3, [r5, #8]
    // add r2, r0, #0
    // lsl r1, r3, #0x10
    // ldr r6, _020207F0 ; =0x7FFF0000
    // mov r0, #0
    // and r3, r6
    // lsr r3, r3, #0x10
    // lsr r1, r1, #0xd
    // lsl r3, r3, #4
    // bl GF_CreateNewVramTransferTask
    // ldrb r0, [r4]
    // strb r0, [r5, #0x10]
    // pop {r4, r5, r6, pc}
    // nop
    // _020207F0: .word 0x7FFF0000
    // TODO: decompile
}



void sub_020207F4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_0202082C
    // ldr r3, [r5, #0xc]
    // add r2, r0, #0
    // lsl r1, r3, #0x10
    // ldr r6, _0202081C ; =0xFFFF0000
    // mov r0, #1
    // and r3, r6
    // lsr r3, r3, #0x10
    // lsr r1, r1, #0xd
    // lsl r3, r3, #3
    // bl GF_CreateNewVramTransferTask
    // ldrb r0, [r4, #1]
    // strb r0, [r5, #0x11]
    // pop {r4, r5, r6, pc}
    // nop
    // _0202081C: .word 0xFFFF0000
    // TODO: decompile
}



void sub_02020820(void) {
}



void sub_0202082C(void) {
}



void sub_02020838(void) {
    // add r2, #0x3c
    // add r3, #0x3d
    // ldrb r3, [r3]
    // add r3, #0x42
    // ldrh r4, [r3]
    // add r3, r2, r4
    // ldrh r2, [r2, r4]
    // mul r1, r2
    // add r3, r3, r1
    // add r2, r0, r1
    // add r0, r1, r0
    // add r0, r2, r0
}



void sub_02020888(void) {
    // add r4, r0, r2
    // add r3, r4, r2
    // ldrh r2, [r4, r2]
    // mul r1, r2
    // add r2, r3, r1
    // add r1, r0, r1
    // ldrh r0, [r2]
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
    // mul r0, r2
    _u32_div_f(((0 >> 0x17) << 4), 1, ((0 >> 0x14) << 4), ((7 << 0x14) << 3));
}



u32 sub_020209AC(void) {
    // add r2, #0x3c
    // add r3, #0x3d
    // ldrb r3, [r3]
    // add r3, #0x42
    // ldrh r4, [r3]
    // add r3, r2, r4
    // ldrh r2, [r2, r4]
    // mul r1, r2
    // add r1, r3, r1
    sub_0202094C(0, r0, (r0 + 4));
}



u32 sub_020209E0(void) {
    // add r0, sp, #0
    sub_02020B3C();
    // add r0, #0x3c
    // add r1, sp, #0
    NNS_G3dGetResDataByName(r4);
    sub_0202094C(r4, 0);
}


