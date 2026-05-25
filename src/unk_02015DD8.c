/* Decompiled from asm/unk_02015DD8.s */
#include "global.h"

void sub_02015DDC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02015DF0
    // bl GF_AssertFail
    // ldr r0, [r5]
    // ldr r1, [r5, #0xc]
    // bl sub_0201605C
    // str r0, [r4]
    // ldr r0, [r5]
    // str r0, [r4, #4]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #0xc]
    // bl sub_0201608C
    // str r0, [r4, #8]
    // ldr r0, [r5, #4]
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0xc]
    // bl sub_020160BC
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #8]
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02015E20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _02015E2A
    // bl GF_AssertFail
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _02015E34
    // bl GF_AssertFail
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _02015E3E
    // bl GF_AssertFail
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bne _02015E48
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl Heap_Free
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // ldr r0, [r4, #0x10]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02015E64(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _02015E98 ; =0x04000444
    // mov r6, #0
    // str r6, [r0]
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // ble _02015E8E
    // add r4, r6, #0
    // ldr r0, [r5]
    // add r0, r0, r4
    // ldr r1, [r0, #0x20]
    // cmp r1, #0
    // beq _02015E84
    // bl sub_020161CC
    // ldr r0, [r5, #4]
    // add r6, r6, #1
    // add r4, #0x40
    // cmp r6, r0
    // blt _02015E76
    // ldr r0, _02015E9C ; =0x04000448
    // mov r1, #1
    // str r1, [r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _02015E98: .word 0x04000444
    // _02015E9C: .word 0x04000448
    // TODO: decompile
}


void sub_02015EA0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl sub_02016118
    // add r4, r0, #0
    // bne _02015EB2
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _02015EBE
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // bl sub_02016170
    // str r0, [r4]
    // cmp r0, #0
    // bne _02015ECE
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // ldr r1, [r4]
    // add r2, r4, #4
    // bl sub_02016198
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02015EDC(void) {
    sub_02016044();
}


void sub_02015EF4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // cmp r0, #0
    // ble _02015F1A
    // add r4, r6, #0
    // ldr r1, [r5, #8]
    // ldr r0, [r1, r4]
    // cmp r0, #0
    // beq _02015F10
    // add r0, r1, r4
    // bl sub_02015EDC
    // ldr r0, [r5, #0xc]
    // add r6, r6, #1
    // add r4, #0x28
    // cmp r6, r0
    // blt _02015F02
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02015F1C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl sub_02016144
    // add r4, r0, #0
    // bne _02015F2E
    // bl GF_AssertFail
    // ldr r0, [r5, #8]
    // bl sub_02016184
    // str r0, [r4]
    // cmp r0, #0
    // bne _02015F3E
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // ldr r1, [r4]
    // add r2, r4, #4
    // bl sub_020161A8
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02015F4C(void) {
    sub_02016050();
}


void sub_02015F64(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x14]
    // mov r6, #0
    // cmp r0, #0
    // ble _02015F8A
    // add r4, r6, #0
    // ldr r1, [r5, #0x10]
    // ldr r0, [r1, r4]
    // cmp r0, #0
    // beq _02015F80
    // add r0, r1, r4
    // bl sub_02015F4C
    // ldr r0, [r5, #0x14]
    // add r6, r6, #1
    // add r4, #0x18
    // cmp r6, r0
    // blt _02015F72
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02015F8C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl sub_020160EC
    // add r4, r0, #0
    // bne _02015F9E
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_0201630C
    // mov r0, #1
    // str r0, [r4, #0x1c]
    // str r0, [r4, #0x20]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02015FB0(void) {
    GF_AssertFail();
}


void sub_02015FC4(void) {
    *(u16*)r0 = r1;
    ((u16*)r0)[2] = r2;
}


void sub_02015FCC(void) {
    // ldrh r1, [r0, #2]
    // ldrh r0, [r0]
    // lsl r1, r1, #0x10
    // orr r0, r1
    // bx lr
    // TODO: decompile
}


void sub_02015FD8(void) {
    ((u16*)r0)[4] = r1;
    ((u16*)r0)[6] = r2;
}


void sub_02015FE0(void) {
    ((u16*)r0)[8] = r1;
    ((u16*)r0)[0xa] = r2;
}


void sub_02015FE8(void) {
    // ldrh r1, [r0, #0xa]
    // ldrh r0, [r0, #8]
    // lsl r1, r1, #0x10
    // orr r0, r1
    // bx lr
    // TODO: decompile
}


void sub_02015FF4(void) {
    ((u32*)r0)[0x14] = r1;
}


void sub_02015FF8(void) {
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}


void sub_02015FFC(void) {
    // add r0, #0x3e
    // strb r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02016004(void) {
    ((u32*)r0)[0x24] = r1;
}


void sub_02016008(void) {
    ((u32*)r0)[0x28] = r1;
}


void sub_0201600C(void) {
    ((u32*)r0)[0x2c] = r1;
}


void sub_02016010(void) {
    ((u32*)r0)[0x30] = r1;
}


void sub_02016014(void) {
    // cmp r1, #0
    // bne _0201601C
    // str r2, [r0, #0x34]
    // bx lr
    // str r2, [r0, #0x38]
    // bx lr
    // TODO: decompile
}


void sub_02016020(void) {
    ((u32*)r0)[0x18] = r1;
}


void sub_02016024(void) {
    memset(0, 0x1f, 0x40);
}


void sub_02016044(void) {
    NNS_G2dInitImageProxy();
}


void sub_02016050(void) {
    NNS_G2dInitImagePaletteProxy();
}


void sub_0201605C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r0, r1, #0
    // lsl r1, r6, #6
    // bl Heap_Alloc
    // add r7, r0, #0
    // bne _02016070
    // bl GF_AssertFail
    // mov r4, #0
    // cmp r6, #0
    // ble _02016086
    // add r5, r7, #0
    // add r0, r5, #0
    // bl sub_02016024
    // add r4, r4, #1
    // add r5, #0x40
    // cmp r4, r6
    // blt _02016078
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0201608C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r0, r1, #0
    // mov r1, #0x28
    // mul r1, r6
    // bl Heap_Alloc
    // add r7, r0, #0
    // bne _020160A2
    // bl GF_AssertFail
    // mov r4, #0
    // cmp r6, #0
    // ble _020160B8
    // add r5, r7, #0
    // add r0, r5, #0
    // bl sub_02016044
    // add r4, r4, #1
    // add r5, #0x28
    // cmp r4, r6
    // blt _020160AA
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020160BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r0, r1, #0
    // mov r1, #0x18
    // mul r1, r6
    // bl Heap_Alloc
    // add r7, r0, #0
    // bne _020160D2
    // bl GF_AssertFail
    // mov r4, #0
    // cmp r6, #0
    // ble _020160E8
    // add r5, r7, #0
    // add r0, r5, #0
    // bl sub_02016050
    // add r4, r4, #1
    // add r5, #0x18
    // cmp r4, r6
    // blt _020160DA
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020160EC(void) {
    // push {r3, r4}
    // ldr r4, [r0, #4]
    // mov r1, #0
    // cmp r4, #0
    // ble _02016110
    // ldr r3, [r0]
    // add r2, r3, #0
    // ldr r0, [r2, #0x1c]
    // cmp r0, #0
    // bne _02016108
    // lsl r0, r1, #6
    // add r0, r3, r0
    // pop {r3, r4}
    // bx lr
    // add r1, r1, #1
    // add r2, #0x40
    // cmp r1, r4
    // blt _020160FA
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02016118(void) {
    // push {r3, r4}
    // ldr r4, [r0, #4]
    // mov r1, #0
    // cmp r4, #0
    // ble _0201613E
    // ldr r3, [r0, #8]
    // add r2, r3, #0
    // ldr r0, [r2]
    // cmp r0, #0
    // bne _02016136
    // mov r0, #0x28
    // mul r0, r1
    // add r0, r3, r0
    // pop {r3, r4}
    // bx lr
    // add r1, r1, #1
    // add r2, #0x28
    // cmp r1, r4
    // blt _02016126
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02016144(void) {
    // push {r3, r4}
    // ldr r4, [r0, #4]
    // mov r1, #0
    // cmp r4, #0
    // ble _0201616A
    // ldr r3, [r0, #0x10]
    // add r2, r3, #0
    // ldr r0, [r2]
    // cmp r0, #0
    // bne _02016162
    // mov r0, #0x18
    // mul r0, r1
    // add r0, r3, r0
    // pop {r3, r4}
    // bx lr
    // add r1, r1, #1
    // add r2, #0x18
    // cmp r1, r4
    // blt _02016152
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02016170(void) {
    // push {r3, lr}
    // ldr r3, _02016180 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #0
    // ldr r0, [r0, #0x10]
    // ldr r3, [r3]
    // add r2, r1, #0
    // blx r3
    // pop {r3, pc}
    // _02016180: .word NNS_GfdDefaultFuncAllocTexVram
    // TODO: decompile
}


void sub_02016184(void) {
    // push {r3, lr}
    // ldr r3, _02016194 ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r1, #0
    // ldr r3, [r3]
    // lsl r0, r0, #5
    // add r2, r1, #0
    // blx r3
    // pop {r3, pc}
    // _02016194: .word NNS_GfdDefaultFuncAllocPlttVram
    // TODO: decompile
}


void sub_02016198(void) {
    NNS_G2dLoadImage2DMapping();
}


void sub_020161A8(void) {
    // push {r3, r4, r5, lr}
    // add r3, r2, #0
    // ldr r2, _020161C8 ; =0xFFFF0000
    // add r5, r0, #0
    // and r2, r1
    // lsr r2, r2, #0x10
    // lsl r1, r1, #0x10
    // ldr r4, [r5, #8]
    // lsl r2, r2, #3
    // str r2, [r5, #8]
    // lsr r1, r1, #0xd
    // mov r2, #0
    // bl NNS_G2dLoadPalette
    // str r4, [r5, #8]
    // pop {r3, r4, r5, pc}
    // _020161C8: .word 0xFFFF0000
    // TODO: decompile
}


void sub_020161CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r7, _020162EC ; =0x04000444
    // mov r6, #0
    // add r5, r0, #0
    // str r6, [r7]
    // ldrh r1, [r5, #0x3c]
    // ldr r0, _020162F0 ; =0x7FFF8000
    // orr r0, r1
    // str r0, [r7, #0x7c]
    // add r0, r7, #0
    // ldr r1, _020162F4 ; =0x00004210
    // add r0, #0x80
    // str r1, [r0]
    // ldr r3, [r5, #0x24]
    // ldr r4, [r3, #8]
    // ldr r2, [r3, #0x10]
    // ldr r1, [r3, #4]
    // ldr r0, [r3]
    // lsl r3, r2, #0x1d
    // lsl r2, r1, #0x17
    // lsl r1, r0, #0x14
    // ldr r0, [r5, #0x28]
    // lsl r4, r4, #0x1a
    // lsr r0, r0, #3
    // orr r4, r0
    // mov r0, #1
    // lsl r0, r0, #0x1e
    // orr r0, r4
    // orr r0, r1
    // orr r0, r2
    // orr r0, r3
    // str r0, [r7, #0x64]
    // ldr r0, [r5, #0x24]
    // ldr r0, [r0, #8]
    // cmp r0, #2
    // bne _02016218
    // mov r6, #1
    // ldr r0, [r5, #0x30]
    // ldr r1, [r5, #0x2c]
    // lsl r0, r0, #5
    // add r1, r1, r0
    // mov r0, #4
    // sub r0, r0, r6
    // lsr r1, r0
    // ldr r2, _020162F8 ; =0x040004AC
    // add r0, r5, #0
    // str r1, [r2]
    // add r0, #0x3e
    // ldrb r0, [r0]
    // sub r2, #8
    // lsl r1, r0, #0x10
    // mov r0, #0xc0
    // orr r0, r1
    // str r0, [r2]
    // ldr r0, [r5, #0x34]
    // cmp r0, #0
    // beq _0201624A
    // mov r0, #8
    // ldrsh r0, [r5, r0]
    // mov r7, #0
    // str r0, [sp, #0x14]
    // b _02016252
    // mov r0, #8
    // ldrsh r7, [r5, r0]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x38]
    // cmp r0, #0
    // beq _02016260
    // mov r0, #0xa
    // ldrsh r6, [r5, r0]
    // mov r4, #0
    // b _02016266
    // mov r0, #0xa
    // ldrsh r4, [r5, r0]
    // mov r6, #0
    // ldr r0, [r5, #0x14]
    // mov r1, #6
    // lsl r2, r0, #0xc
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r1]
    // mov r3, #4
    // ldrsh r3, [r5, r3]
    // add r0, r0, r1
    // lsl r1, r0, #0xc
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // add r0, r0, r3
    // ldr r3, _020162FC ; =0x04000470
    // lsl r0, r0, #0xc
    // str r0, [r3]
    // str r1, [r3]
    // str r2, [r3]
    // ldr r0, [r5, #0x18]
    // ldr r1, _02016300 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r0, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r0, [r1, r0]
    // ldrsh r1, [r1, r2]
    // bl G3_RotZ
    // ldr r2, [r5, #0x10]
    // ldr r0, [r5, #0xc]
    // ldr r1, _02016304 ; =0x0400046C
    // mov r3, #8
    // str r0, [r1]
    // str r2, [r1]
    // lsr r0, r1, #0xe
    // str r0, [r1]
    // mov r2, #4
    // mov r0, #6
    // ldrsh r2, [r5, r2]
    // ldrsh r0, [r5, r0]
    // neg r2, r2
    // neg r0, r0
    // lsl r2, r2, #0xc
    // lsl r0, r0, #0xc
    // str r2, [r1, #4]
    // str r0, [r1, #4]
    // mov r0, #0
    // str r0, [r1, #4]
    // mov r1, #0xa
    // ldrsh r1, [r5, r1]
    // add r2, r0, #0
    // str r1, [sp]
    // ldr r1, [sp, #0x14]
    // str r1, [sp, #4]
    // str r6, [sp, #8]
    // str r7, [sp, #0xc]
    // str r4, [sp, #0x10]
    // ldrsh r3, [r5, r3]
    // add r1, r0, #0
    // bl NNS_G2dDrawSpriteFast
    // ldr r0, _02016308 ; =0x04000448
    // mov r1, #1
    // str r1, [r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _020162EC: .word 0x04000444
    // _020162F0: .word 0x7FFF8000
    // _020162F4: .word 0x00004210
    // _020162F8: .word 0x040004AC
    // _020162FC: .word 0x04000470
    // _02016300: .word FX_SinCosTable_
    // _02016304: .word 0x0400046C
    // _02016308: .word 0x04000448
    // TODO: decompile
}


void sub_0201630C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // ldr r1, [r5, #4]
    // add r7, r0, #0
    // ldr r2, [r1, #0x10]
    // mov r6, #8
    // mov r0, #0
    // cmp r2, #0
    // ble _0201632A
    // ldr r2, [r5, #4]
    // add r0, r0, #1
    // ldr r2, [r2, #0x10]
    // lsl r6, r6, #1
    // cmp r0, r2
    // blt _0201631E
    // ldr r1, [r1, #0x14]
    // mov r4, #8
    // mov r0, #0
    // cmp r1, #0
    // ble _02016340
    // ldr r1, [r5, #4]
    // add r0, r0, #1
    // ldr r1, [r1, #0x14]
    // lsl r4, r4, #1
    // cmp r0, r1
    // blt _02016334
    // mov r1, #0xc
    // mov r2, #0xe
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // add r0, r7, #0
    // bl sub_02015FC4
    // lsr r1, r6, #0x1f
    // lsr r2, r4, #0x1f
    // add r1, r6, r1
    // add r2, r4, r2
    // lsl r1, r1, #0xf
    // lsl r2, r2, #0xf
    // add r0, r7, #0
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl sub_02015FD8
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r7, #0xc]
    // str r0, [r7, #0x10]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl sub_02015FE0
    // ldr r1, [r5, #0x18]
    // add r0, r7, #0
    // bl sub_02015FF4
    // ldr r1, [r5, #0x14]
    // add r0, r7, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_02015FFC
    // ldr r1, [r5, #4]
    // add r0, r7, #0
    // add r1, #0x10
    // bl sub_02016004
    // ldr r0, [r5, #4]
    // mov r1, #0
    // add r0, r0, #4
    // bl NNS_G2dGetImageLocation
    // add r1, r0, #0
    // add r0, r7, #0
    // bl sub_02016008
    // ldr r0, [r5, #8]
    // mov r1, #0
    // add r0, r0, #4
    // bl NNS_G2dGetImagePaletteLocation
    // add r1, r0, #0
    // add r0, r7, #0
    // bl sub_0201600C
    // ldrh r1, [r5, #0x1c]
    // add r0, r7, #0
    // bl sub_02016010
    // mov r1, #0
    // add r0, r7, #0
    // add r2, r1, #0
    // bl sub_02016014
    // add r0, r7, #0
    // mov r1, #1
    // mov r2, #0
    // bl sub_02016014
    // ldrh r1, [r5, #0x10]
    // add r0, r7, #0
    // bl sub_02016020
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}

