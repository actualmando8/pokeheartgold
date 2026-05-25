/* Decompiled from asm/unk_02015DD8.s */
#include "global.h"

void sub_02015DDC(void) {
    Heap_Alloc(*((u32*)(r0 + 0xc)), 0x18);
    GF_AssertFail();
    sub_0201605C(*((u32*)r5), *((u32*)(r5 + 0xc)));
    // str r0, [r4]
    *((u32*)(r4 + 4)) = *((u32*)r5);
    sub_0201608C(*((u32*)(r5 + 4)), *((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 0xc)) = *((u32*)(r5 + 4));
    sub_020160BC(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x14)) = *((u32*)(r5 + 8));
}



void sub_02015E20(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)r4));
    GF_AssertFail(*((u32*)(r4 + 8)));
    GF_AssertFail(*((u32*)(r4 + 0x10)));
    Heap_Free(*((u32*)r4));
    Heap_Free(*((u32*)(r4 + 8)));
    Heap_Free(*((u32*)(r4 + 0x10)));
    Heap_Free(r4);
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
    sub_02016118(*((u32*)r0));
    GF_AssertFail();
    GF_AssertFail(*((u32*)(*((u32*)(r5 + 4)) + 8)));
    sub_02016170(*((u32*)(r5 + 4)));
    // str r0, [r4]
    GF_AssertFail();
    sub_02016198(*((u32*)(r5 + 4)), *((u32*)r4), (r4 + 4));
}



void sub_02015EDC(void) {
}



void sub_02015EF4(void) {
    // ldr r0, [r1, r4]
    // add r0, r1, r4
    sub_02015EDC(*((u32*)(r0 + 0xc)), *((u32*)(r0 + 8)));
    // add r4, #0x28
}



void sub_02015F1C(void) {
    sub_02016144(*((u32*)r0));
    GF_AssertFail();
    sub_02016184(*((u32*)(r5 + 8)));
    // str r0, [r4]
    GF_AssertFail();
    sub_020161A8(*((u32*)(r5 + 4)), *((u32*)r4), (r4 + 4));
}



void sub_02015F4C(void) {
}



void sub_02015F64(void) {
    // ldr r0, [r1, r4]
    // add r0, r1, r4
    sub_02015F4C(*((u32*)(r0 + 0x14)), *((u32*)(r0 + 0x10)));
    // add r4, #0x18
}



void sub_02015F8C(void) {
    sub_020160EC(*((u32*)r0));
    GF_AssertFail();
    sub_0201630C(r4, r5);
    *((u32*)(r4 + 0x1c)) = 1;
    *((u32*)(r4 + 0x20)) = 1;
}



void sub_02015FB0(void) {
}



void sub_02015FC4(void) {
}



void sub_02015FCC(void) {
    // ldrh r0, [r0]
    // orr r0, r1
}



void sub_02015FD8(void) {
}



void sub_02015FE0(void) {
}



void sub_02015FE8(void) {
    // orr r0, r1
}



void sub_02015FF4(void) {
}



void sub_02015FF8(void) {
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}



void sub_02015FFC(void) {
    // add r0, #0x3e
    // strb r1, [r0]
}



void sub_02016004(void) {
}



void sub_02016008(void) {
}



void sub_0201600C(void) {
}



void sub_02016010(void) {
}



void sub_02016014(void) {
    *((u32*)(r0 + 0x34)) = r2;
    *((u32*)(r0 + 0x38)) = r2;
}



void sub_02016020(void) {
}



void sub_02016024(void) {
}



void sub_02016044(void) {
}



void sub_02016050(void) {
}



void sub_0201605C(void) {
    Heap_Alloc(r1, (r0 << 6));
    GF_AssertFail();
    sub_02016024(r7);
    // add r5, #0x40
}



void sub_0201608C(void) {
    // mul r1, r6
    Heap_Alloc(r1, 0x28);
    GF_AssertFail();
    sub_02016044(r7);
    // add r5, #0x28
}



void sub_020160BC(void) {
    // mul r1, r6
    Heap_Alloc(r1, 0x18);
    GF_AssertFail();
    sub_02016050(r7);
    // add r5, #0x18
}



void sub_020160EC(void) {
    // add r0, r3, r0
    // add r2, #0x40
}



void sub_02016118(void) {
    // mul r0, r1
    // add r0, r3, r0
    // add r2, #0x28
}



void sub_02016144(void) {
    // mul r0, r1
    // add r0, r3, r0
    // add r2, #0x18
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
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    sub_02015FC4(r0, 0xc, 0xe);
    // add r1, r6, r1
    // add r2, r4, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    sub_02015FD8(r7, ((r6 >> 0x1f) << 0xf), ((r4 >> 0x1f) << 0xf));
    *((u32*)(r7 + 0xc)) = (1 << 0xc);
    *((u32*)(r7 + 0x10)) = (1 << 0xc);
    sub_02015FE0(r7, r6, r4);
    sub_02015FF4(r7, *((u32*)(r5 + 0x18)));
    sub_02015FFC(r7, ((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18));
    // add r1, #0x10
    sub_02016004(r7, *((u32*)(r5 + 4)));
    NNS_G2dGetImageLocation((*((u32*)(r5 + 4)) + 4), 0);
    sub_02016008(r7, r0);
    NNS_G2dGetImagePaletteLocation((*((u32*)(r5 + 8)) + 4), 0);
    sub_0201600C(r7, r0);
    sub_02016010(r7, *((u16*)(r5 + 0x1c)));
    sub_02016014(r7, 0, 0);
    sub_02016014(r7, 1, 0);
    sub_02016020(r7, *((u16*)(r5 + 0x10)));
}


