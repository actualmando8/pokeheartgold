/* Decompiled from asm/unk_0203A3B0.s */
#include "global.h"

void sub_0203A3B0(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r2, #0
    // add r6, r3, #0
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x1c]
    // add r3, r4, #0
    // bl sub_0203A4D4
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r2, r4, #0
    // bl sub_0203A59C
    // add r0, r4, #0
    // mov r1, #0x24
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // ldr r0, _0203A428 ; =sub_0203A42C
    // add r1, r4, #0
    // mov r2, #5
    // bl SysTask_CreateOnVWaitQueue
    // str r0, [r4, #0x18]
    // ldr r2, [sp, #0x1c]
    // strh r5, [r4, #0xc]
    // asr r1, r2, #4
    // lsr r1, r1, #0x1b
    // add r1, r2, r1
    // asr r2, r1, #5
    // add r1, r4, #0
    // strh r6, [r4, #0xe]
    // mov r0, #0
    // str r0, [r4]
    // add r1, #0x20
    // strb r2, [r1]
    // add r1, r4, #0
    // ldr r2, [sp, #0x18]
    // add r1, #0x21
    // strb r2, [r1]
    // add r1, r4, #0
    // add r1, #0x22
    // strb r0, [r1]
    // mov r1, #3
    // str r1, [r4, #4]
    // ldr r1, [sp, #0x14]
    // str r1, [r4, #0x14]
    // ldr r1, [sp, #0x10]
    // str r0, [r4, #8]
    // strb r1, [r4, #0x10]
    // strb r0, [r4, #0x12]
    // strb r0, [r4, #0x11]
    // mov r0, #7
    // lsl r0, r0, #0x18
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _0203A428: .word sub_0203A42C
    // TODO: decompile
}


void sub_0203A42C(void) {
    sub_0203A700();
}


void sub_0203A438(void) {
    // cmp r1, #4
    // bge _0203A442
    // str r1, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #8]
    // bx lr
    // TODO: decompile
}


void sub_0203A444(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // bl SysTask_Destroy
    // mov r0, #7
    // ldr r2, _0203A470 ; =0x40000200
    // lsl r0, r0, #0x18
    // str r2, [r0]
    // mov r1, #0
    // strh r1, [r0, #4]
    // ldrb r0, [r4, #0x12]
    // cmp r0, #0
    // beq _0203A466
    // ldr r0, _0203A474 ; =0x07000400
    // str r2, [r0]
    // strh r1, [r0, #4]
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // nop
    // _0203A470: .word 0x40000200
    // _0203A474: .word 0x07000400
    // TODO: decompile
}


void sub_0203A478(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // mov r2, #7
    // ldrb r1, [r5, #0x10]
    // mov r0, #2
    // lsl r2, r2, #6
    // add r3, r6, #0
    // bl sub_0203A4D4
    // ldrb r1, [r5, #0x10]
    // mov r0, #2
    // add r2, r6, #0
    // bl sub_0203A59C
    // cmp r4, #0
    // beq _0203A4A0
    // mov r0, #1
    // b _0203A4A2
    // mov r0, #2
    // strb r0, [r5, #0x11]
    // mov r0, #1
    // strb r0, [r5, #0x12]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_0203A4AC(void) {
    // push {r3, lr}
    // mov r1, #0x96
    // lsl r1, r1, #2
    // bl Heap_AllocAtEnd
    // str r0, [sp]
    // ldr r0, _0203A4D0 ; =_0210F930
    // add r1, sp, #0
    // bl sub_0201A3F8
    // mov r1, #0x96
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // bl DC_FlushRange
    // ldr r0, [sp]
    // pop {r3, pc}
    // nop
    // _0203A4D0: .word _0210F930
    // TODO: decompile
}


void sub_0203A4D4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x96
    // add r5, r0, #0
    // add r0, r3, #0
    // lsl r1, r1, #2
    // add r4, r2, #0
    // bl Heap_AllocAtEnd
    // str r0, [sp, #4]
    // cmp r0, #0
    // beq _0203A52A
    // ldr r0, _0203A530 ; =_0210F930
    // add r1, sp, #4
    // bl sub_0201A3F8
    // mov r1, #0x96
    // ldr r0, [sp, #4]
    // lsl r1, r1, #2
    // bl DC_FlushRange
    // ldr r0, [sp, #4]
    // add r1, sp, #0
    // bl NNS_G2dGetUnpackedPaletteData
    // cmp r5, #1
    // bne _0203A518
    // ldr r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r0, #0xc]
    // mov r2, #0x20
    // bl GX_LoadOBJPltt
    // b _0203A524
    // ldr r0, [sp]
    // add r1, r4, #0
    // ldr r0, [r0, #0xc]
    // mov r2, #0x20
    // bl GXS_LoadOBJPltt
    // ldr r0, [sp, #4]
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0203A530: .word _0210F930
    // TODO: decompile
}


void sub_0203A534(void) {
    // push {r0, r1, r2, r3}
    // push {r3, lr}
    // cmp r0, #0
    // ldr r0, _0203A58C ; =0x00300010
    // beq _0203A550
    // cmp r1, r0
    // bne _0203A546
    // bl GF_AssertFail
    // ldr r0, _0203A590 ; =_0210F940
    // add r1, sp, #0x14
    // bl sub_0201A3F8
    // b _0203A578
    // cmp r1, r0
    // add r1, sp, #0x14
    // beq _0203A568
    // ldr r0, _0203A594 ; =_0210F954
    // bl sub_0201A3F8
    // mov r1, #0x96
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // bl DC_FlushRange
    // b _0203A578
    // ldr r0, _0203A598 ; =_0210F964
    // bl sub_0201A3F8
    // mov r1, #0x13
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #6
    // bl DC_FlushRange
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0
    // bl NNS_G2dGetUnpackedBGCharacterData
    // ldr r0, [sp]
    // pop {r3}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // nop
    // _0203A58C: .word 0x00300010
    // _0203A590: .word _0210F940
    // _0203A594: .word _0210F954
    // _0203A598: .word _0210F964
    // TODO: decompile
}


void sub_0203A59C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // add r5, r2, #0
    // str r1, [sp]
    // cmp r7, #1
    // bne _0203A5BC
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // ldr r0, _0203A6E8 ; =0x00300010
    // add r4, r1, #0
    // and r4, r0
    // bl GX_GetBankForOBJ
    // b _0203A5CA
    // ldr r0, _0203A6EC ; =0x04001000
    // ldr r1, [r0]
    // ldr r0, _0203A6E8 ; =0x00300010
    // add r4, r1, #0
    // and r4, r0
    // bl GX_GetBankForSubOBJ
    // add r6, r0, #0
    // ldr r0, _0203A6E8 ; =0x00300010
    // cmp r4, r0
    // bne _0203A5E0
    // mov r1, #0x13
    // add r0, r5, #0
    // lsl r1, r1, #6
    // bl Heap_AllocAtEnd
    // str r0, [sp, #4]
    // b _0203A5EC
    // mov r1, #0x96
    // add r0, r5, #0
    // lsl r1, r1, #2
    // bl Heap_AllocAtEnd
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _0203A6E2
    // ldr r0, [sp]
    // ldr r3, [sp, #4]
    // add r1, r4, #0
    // add r2, r5, #0
    // bl sub_0203A534
    // add r5, r0, #0
    // ldr r0, _0203A6F0 ; =0x00100010
    // cmp r4, r0
    // bgt _0203A60E
    // bge _0203A634
    // cmp r4, #0x10
    // beq _0203A620
    // b _0203A66E
    // ldr r0, _0203A6F4 ; =0x00200010
    // cmp r4, r0
    // bgt _0203A618
    // beq _0203A64E
    // b _0203A66E
    // ldr r0, _0203A6E8 ; =0x00300010
    // cmp r4, r0
    // beq _0203A668
    // b _0203A66E
    // cmp r6, #0x40
    // beq _0203A628
    // cmp r6, #0x20
    // bne _0203A62E
    // mov r6, #0x3e
    // lsl r6, r6, #8
    // b _0203A672
    // mov r6, #0x7e
    // lsl r6, r6, #8
    // b _0203A672
    // cmp r6, #0x40
    // beq _0203A642
    // cmp r6, #0x20
    // beq _0203A642
    // lsr r0, r0, #0xc
    // cmp r6, r0
    // bne _0203A648
    // mov r6, #0x3e
    // lsl r6, r6, #8
    // b _0203A672
    // mov r6, #0xfe
    // lsl r6, r6, #8
    // b _0203A672
    // cmp r6, #0x30
    // beq _0203A656
    // cmp r6, #0x50
    // bne _0203A65A
    // ldr r6, _0203A6F8 ; =0x00013E00
    // b _0203A672
    // cmp r6, #0x10
    // bne _0203A664
    // mov r6, #0xfe
    // lsl r6, r6, #8
    // b _0203A672
    // ldr r6, _0203A6FC ; =0x0001FE00
    // b _0203A672
    // mov r6, #0xff
    // lsl r6, r6, #0xa
    // b _0203A672
    // mov r6, #0xfe
    // lsl r6, r6, #8
    // cmp r7, #1
    // ldr r0, _0203A6E8 ; =0x00300010
    // bne _0203A6AA
    // cmp r4, r0
    // ldr r0, [r5, #0x14]
    // beq _0203A694
    // mov r1, #2
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // mov r2, #2
    // ldr r0, [r5, #0x14]
    // add r1, r6, #0
    // lsl r2, r2, #8
    // bl GX_LoadOBJ
    // b _0203A6DC
    // mov r1, #1
    // lsl r1, r1, #0xa
    // bl DC_FlushRange
    // mov r2, #1
    // ldr r0, [r5, #0x14]
    // add r1, r6, #0
    // lsl r2, r2, #0xa
    // bl GX_LoadOBJ
    // b _0203A6DC
    // cmp r4, r0
    // ldr r0, [r5, #0x14]
    // beq _0203A6C6
    // mov r1, #2
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // mov r2, #2
    // ldr r0, [r5, #0x14]
    // add r1, r6, #0
    // lsl r2, r2, #8
    // bl GXS_LoadOBJ
    // b _0203A6DC
    // mov r1, #1
    // lsl r1, r1, #0xa
    // bl DC_FlushRange
    // mov r1, #0xf
    // mov r2, #1
    // ldr r0, [r5, #0x14]
    // lsl r1, r1, #0xa
    // lsl r2, r2, #0xa
    // bl GXS_LoadOBJ
    // ldr r0, [sp, #4]
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0203A6E8: .word 0x00300010
    // _0203A6EC: .word 0x04001000
    // _0203A6F0: .word 0x00100010
    // _0203A6F4: .word 0x00200010
    // _0203A6F8: .word 0x00013E00
    // _0203A6FC: .word 0x0001FE00
    // TODO: decompile
}


void sub_0203A700(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x11]
    // cmp r0, #1
    // beq _0203A710
    // cmp r0, #2
    // beq _0203A726
    // b _0203A73C
    // ldr r0, _0203A850 ; =0x04000304
    // ldrh r1, [r0]
    // lsr r0, r0, #0xb
    // and r0, r1
    // asr r0, r0, #0xf
    // cmp r0, #1
    // bne _0203A722
    // mov r7, #1
    // b _0203A742
    // mov r7, #2
    // b _0203A742
    // ldr r0, _0203A850 ; =0x04000304
    // ldrh r1, [r0]
    // lsr r0, r0, #0xb
    // and r0, r1
    // asr r0, r0, #0xf
    // cmp r0, #1
    // bne _0203A738
    // mov r7, #2
    // b _0203A742
    // mov r7, #1
    // b _0203A742
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r7, [r0]
    // ldr r4, [r5, #4]
    // cmp r7, #1
    // bne _0203A75A
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // ldr r0, _0203A854 ; =0x00300010
    // add r6, r1, #0
    // and r6, r0
    // bl GX_GetBankForOBJ
    // b _0203A768
    // ldr r0, _0203A858 ; =0x04001000
    // ldr r1, [r0]
    // ldr r0, _0203A854 ; =0x00300010
    // add r6, r1, #0
    // and r6, r0
    // bl GX_GetBankForSubOBJ
    // ldr r1, _0203A85C ; =0x00100010
    // cmp r6, r1
    // bgt _0203A776
    // bge _0203A7A4
    // cmp r6, #0x10
    // beq _0203A788
    // b _0203A7F4
    // ldr r1, _0203A860 ; =0x00200010
    // cmp r6, r1
    // bgt _0203A780
    // beq _0203A7BC
    // b _0203A7F4
    // ldr r1, _0203A854 ; =0x00300010
    // cmp r6, r1
    // beq _0203A7E0
    // b _0203A7F4
    // cmp r0, #0x40
    // beq _0203A790
    // cmp r0, #0x20
    // bne _0203A79A
    // mov r0, #0x1f
    // lsl r1, r4, #2
    // lsl r0, r0, #4
    // add r3, r1, r0
    // b _0203A7FC
    // mov r0, #0x3f
    // lsl r1, r4, #2
    // lsl r0, r0, #4
    // add r3, r1, r0
    // b _0203A7FC
    // cmp r0, #0x40
    // beq _0203A7B2
    // cmp r0, #0x20
    // beq _0203A7B2
    // lsr r1, r1, #0xc
    // cmp r0, r1
    // bne _0203A7F4
    // mov r0, #0x7e
    // lsl r1, r4, #1
    // lsl r0, r0, #2
    // add r3, r1, r0
    // b _0203A7FC
    // cmp r0, #0x30
    // beq _0203A7C4
    // cmp r0, #0x50
    // bne _0203A7CC
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // add r3, r4, r0
    // b _0203A7FC
    // cmp r0, #0x10
    // bne _0203A7D8
    // mov r0, #0x7f
    // lsl r0, r0, #2
    // add r3, r4, r0
    // b _0203A7FC
    // mov r0, #0xff
    // lsl r0, r0, #2
    // add r3, r4, r0
    // b _0203A7FC
    // cmp r0, #3
    // bne _0203A7EC
    // mov r0, #0xff
    // lsl r0, r0, #2
    // add r3, r4, r0
    // b _0203A7FC
    // mov r0, #0x7f
    // lsl r0, r0, #2
    // add r3, r4, r0
    // b _0203A7FC
    // mov r0, #0xfe
    // lsl r1, r4, #1
    // lsl r0, r0, #2
    // add r3, r1, r0
    // cmp r7, #1
    // bne _0203A806
    // mov r4, #7
    // lsl r4, r4, #0x18
    // b _0203A808
    // ldr r4, _0203A864 ; =0x07000400
    // add r0, r5, #0
    // add r0, #0x20
    // ldrb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x22
    // ldrb r1, [r0]
    // ldrh r6, [r5, #0xe]
    // ldrh r0, [r5, #0xc]
    // lsl r1, r1, #0xa
    // lsl r6, r6, #0x18
    // lsr r6, r6, #0x18
    // orr r6, r1
    // mov r1, #1
    // lsl r0, r0, #0x17
    // lsl r1, r1, #0x1e
    // lsr r0, r0, #7
    // orr r1, r6
    // orr r0, r1
    // str r0, [r4]
    // lsl r0, r2, #0xc
    // orr r0, r3
    // strh r0, [r4, #4]
    // ldr r0, [r5, #0x1c]
    // cmp r4, r0
    // beq _0203A84E
    // add r1, r5, #0
    // add r1, #0x22
    // ldrb r1, [r1]
    // lsl r2, r1, #0xa
    // ldr r1, _0203A868 ; =0x40000200
    // orr r1, r2
    // str r1, [r0]
    // mov r1, #0
    // strh r1, [r0, #4]
    // str r4, [r5, #0x1c]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0203A850: .word 0x04000304
    // _0203A854: .word 0x00300010
    // _0203A858: .word 0x04001000
    // _0203A85C: .word 0x00100010
    // _0203A860: .word 0x00200010
    // _0203A864: .word 0x07000400
    // _0203A868: .word 0x40000200
    // TODO: decompile
}


void sub_0203A86C(void) {
    sub_0203A700();
}


void sub_0203A880(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r4, #0
    // bl sub_02039998
    // cmp r0, #0
    // beq _0203A890
    // mov r4, #1
    // mov r0, #7
    // lsl r0, r0, #6
    // str r0, [sp]
    // mov r0, #0xf0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl sub_0203A8CC
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_0203A8A8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r4, #0
    // bl sub_02039998
    // cmp r0, #0
    // beq _0203A8B8
    // mov r4, #1
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // str r0, [sp]
    // mov r0, #0xf0
    // mov r1, #0
    // add r2, r4, #0
    // add r3, r5, #0
    // bl sub_0203A8CC
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_0203A8CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // add r4, r3, #0
    // bl sub_02034DCC
    // cmp r0, #0
    // beq _0203A908
    // ldr r0, _0203A90C ; =_021D4154
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0203A8EC
    // bl sub_0203A914
    // ldr r0, _0203A910 ; =_0210F91C
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0
    // mov r1, #0x59
    // add r2, r6, #0
    // add r3, r7, #0
    // bl sub_0203A3B0
    // ldr r1, _0203A90C ; =_021D4154
    // str r0, [r1]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0203A90C: .word _021D4154
    // _0203A910: .word _0210F91C
    // TODO: decompile
}


void sub_0203A914(void) {
    sub_0203A444(0);
}


void sub_0203A930(void) {
    sub_0203A438();
}


void sub_0203A948(void) {
    sub_0203A478();
}


void sub_0203A964(void) {
    // push {r3, lr}
    // bl sub_02037474
    // cmp r0, #0
    // beq _0203A984
    // bl sub_02037454
    // cmp r0, #1
    // bgt _0203A97E
    // bl sub_02039998
    // cmp r0, #0
    // beq _0203A990
    // bl sub_0203A880
    // pop {r3, pc}
    // bl sub_02039998
    // cmp r0, #0
    // beq _0203A990
    // bl sub_0203A880
    // pop {r3, pc}
    // TODO: decompile
}


void sub_0203A994(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02037474
    // cmp r0, #0
    // beq _0203A9B8
    // bl sub_02037454
    // cmp r0, #1
    // bgt _0203A9B0
    // bl sub_02039998
    // cmp r0, #0
    // beq _0203A9C6
    // add r0, r4, #0
    // bl sub_0203A8A8
    // pop {r4, pc}
    // bl sub_02039998
    // cmp r0, #0
    // beq _0203A9C6
    // add r0, r4, #0
    // bl sub_0203A8A8
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0203A9C8(void) {
    // ldr r0, _0203A9D8 ; =_021D4154
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _0203A9D6
    // mov r0, #1
    // add r1, #0x22
    // strb r0, [r1]
    // bx lr
    // _0203A9D8: .word _021D4154
    // TODO: decompile
}

