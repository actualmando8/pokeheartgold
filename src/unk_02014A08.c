/* Decompiled from asm/unk_02014A08.s */
#include "global.h"

void sub_02014A08(void) {
    Heap_Alloc(0xc);
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 9)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
    *((u8*)(r0 + 0xb)) = 0;
    *((u8*)(r0 + 9)) = 1;
    *((u32*)(r0 + 4)) = r4;
}


void sub_02014A38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _02014A42
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02014A4C(void) {
    GF_AssertFail();
}


void sub_02014A60(void) {
    GF_AssertFail(1);
}


void sub_02014A78(void) {
    GF_AssertFail();
}


void sub_02014A8C(void) {
    // cmp r0, #0
    // beq _02014A9E
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // beq _02014A9E
    // ldrb r2, [r0, #8]
    // mov r1, #1
    // eor r1, r2
    // strb r1, [r0, #8]
    // bx lr
    // TODO: decompile
}


void sub_02014AA0(void) {
    MI_StopDma(0);
    MI_WaitDma(0);
}


void sub_02014AB0(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r3, #1
    // bne _02014ACA
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // add r3, r4, #0
    // bl MI_HBlankDmaCopy32
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // add r3, r4, #0
    // bl MI_HBlankDmaCopy16
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02014AD8(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _02014B04 ; =0x0000079C
    // add r5, r0, #0
    // bl Heap_Alloc
    // ldr r2, _02014B04 ; =0x0000079C
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r2, #3
    // lsl r2, r2, #8
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r4, r2
    // bl sub_02014A08
    // mov r1, #6
    // lsl r1, r1, #8
    // str r0, [r4, r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02014B04: .word 0x0000079C
    // TODO: decompile
}


void sub_02014B08(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r5, #0
    // bne _02014B1A
    // bl GF_AssertFail
    // ldr r0, _02014B88 ; =0x00000604
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02014B26
    // bl GF_AssertFail
    // ldr r0, _02014B8C ; =0x0000078C
    // mov r2, #0
    // strb r4, [r5, r0]
    // add r1, r0, #1
    // strb r6, [r5, r1]
    // add r1, r0, #0
    // add r1, #0xc
    // strh r2, [r5, r1]
    // add r2, sp, #8
    // mov r1, #0x14
    // ldrsh r2, [r2, r1]
    // add r1, r0, #0
    // add r1, #0xe
    // strh r2, [r5, r1]
    // add r1, r0, #4
    // ldr r2, [sp, #0x20]
    // add r0, #8
    // str r2, [r5, r1]
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x18]
    // str r1, [r5, r0]
    // ldr r0, _02014B90 ; =0x0000060C
    // mov r1, #0xc0
    // add r0, r5, r0
    // add r2, r7, #0
    // bl sub_02014C60
    // ldr r0, _02014B94 ; =sub_02014CBC
    // ldr r2, [sp, #0x28]
    // add r1, r5, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _02014B88 ; =0x00000604
    // mov r2, #3
    // str r0, [r5, r1]
    // ldr r0, _02014B98 ; =0x00000794
    // add r1, r5, #0
    // ldr r0, [r5, r0]
    // lsl r2, r2, #8
    // bl MIi_CpuClear32
    // ldr r0, _02014B98 ; =0x00000794
    // mov r2, #3
    // lsl r2, r2, #8
    // ldr r0, [r5, r0]
    // add r1, r5, r2
    // bl MIi_CpuClear32
    // pop {r3, r4, r5, r6, r7, pc}
    // _02014B88: .word 0x00000604
    // _02014B8C: .word 0x0000078C
    // _02014B90: .word 0x0000060C
    // _02014B94: .word sub_02014CBC
    // _02014B98: .word 0x00000794
    // TODO: decompile
}


void sub_02014B9C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _02014BA6
    // bl GF_AssertFail
    // ldr r0, _02014BD0 ; =0x00000604
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02014BCC
    // bl SysTask_Destroy
    // ldr r0, _02014BD0 ; =0x00000604
    // mov r1, #0
    // str r1, [r4, r0]
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02014A4C
    // ldr r1, _02014BD4 ; =0x00000794
    // mov r2, #3
    // ldr r1, [r4, r1]
    // lsl r2, r2, #8
    // bl memset
    // pop {r4, pc}
    // nop
    // _02014BD0: .word 0x00000604
    // _02014BD4: .word 0x00000794
    // TODO: decompile
}


void sub_02014BD8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02014B9C
    // bl sub_02014D68
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // bl sub_02014A38
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02014BF8(void) {
    // mov r1, #6
    // lsl r1, r1, #8
    // ldr r3, _02014C04 ; =sub_02014A4C
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02014C04: .word sub_02014A4C
    // TODO: decompile
}


void sub_02014C08(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // beq _02014C36
    // ldr r0, _02014C38 ; =0x00000604
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _02014C36
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02014A8C
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // bl sub_02014A4C
    // add r1, r0, #0
    // ldr r0, _02014C3C ; =0x00000794
    // mov r2, #3
    // ldr r0, [r4, r0]
    // lsl r2, r2, #8
    // bl MIi_CpuClear32
    // pop {r4, pc}
    // _02014C38: .word 0x00000604
    // _02014C3C: .word 0x00000794
    // TODO: decompile
}


void sub_02014C40(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // beq _02014C58
    // ldr r0, _02014C5C ; =0x00000604
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02014C58
    // bl sub_02014D68
    // add r0, r4, #0
    // bl sub_02014D70
    // pop {r4, pc}
    // nop
    // _02014C5C: .word 0x00000604
    // TODO: decompile
}


void sub_02014C60(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r4, #0
    // add r7, r1, #0
    // add r5, r0, #0
    // add r6, r4, #0
    // str r2, [sp]
    // cmp r7, #0
    // bls _02014CAE
    // asr r0, r3, #0x1f
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // asr r0, r4, #4
    // lsl r1, r0, #2
    // ldr r0, _02014CB4 ; =FX_SinCosTable_
    // ldr r2, [sp, #4]
    // ldrsh r0, [r0, r1]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // ldr r2, _02014CB8 ; =0x00000000
    // adc r1, r2
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // asr r0, r0, #0xc
    // strh r0, [r5]
    // ldr r0, [sp]
    // add r6, r6, #1
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // add r5, r5, #2
    // cmp r6, r7
    // blo _02014C78
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02014CB4: .word FX_SinCosTable_
    // _02014CB8: .word 0x00000000
    // TODO: decompile
}


void sub_02014CBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r0, #6
    // add r6, r1, #0
    // lsl r0, r0, #8
    // ldr r0, [r6, r0]
    // bl sub_02014A4C
    // add r5, r0, #0
    // ldr r0, _02014D58 ; =0x00000798
    // mov r1, #0x64
    // ldrsh r0, [r6, r0]
    // bl _s32_div_f
    // lsl r0, r0, #0x18
    // lsr r3, r0, #0x18
    // ldr r0, _02014D5C ; =0x0000078C
    // ldrb r4, [r6, r0]
    // add r0, r0, #1
    // ldrb r0, [r6, r0]
    // cmp r4, r0
    // bgt _02014D24
    // lsl r0, r4, #2
    // add r5, r5, r0
    // ldr r2, [r5]
    // lsl r0, r2, #0x10
    // asr r7, r0, #0x10
    // lsl r0, r3, #1
    // add r1, r6, r0
    // ldr r0, _02014D60 ; =0x0000060C
    // ldrsh r0, [r1, r0]
    // add r0, r7, r0
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // lsr r0, r2, #0x10
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsl r0, r0, #0x10
    // lsr r1, r1, #0x10
    // orr r0, r1
    // stmia r5!, {r0}
    // add r0, r3, #1
    // mov r1, #0xc0
    // bl _s32_div_f
    // lsl r0, r1, #0x18
    // lsr r3, r0, #0x18
    // ldr r0, _02014D64 ; =0x0000078D
    // add r4, r4, #1
    // ldrb r0, [r6, r0]
    // cmp r4, r0
    // ble _02014CEA
    // ldr r1, _02014D58 ; =0x00000798
    // add r0, r1, #2
    // ldrsh r2, [r6, r1]
    // ldrsh r0, [r6, r0]
    // add r4, r6, r1
    // add r0, r2, r0
    // strh r0, [r4]
    // ldrsh r0, [r6, r1]
    // mov r1, #0x4b
    // lsl r1, r1, #8
    // cmp r0, r1
    // blt _02014D48
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // bl _s32_div_f
    // strh r1, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // bge _02014D54
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02014D58: .word 0x00000798
    // _02014D5C: .word 0x0000078C
    // _02014D60: .word 0x0000060C
    // _02014D64: .word 0x0000078D
    // TODO: decompile
}


void sub_02014D68(void) {
    sub_02014AA0();
}


void sub_02014D70(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bne _02014D7A
    // bl GF_AssertFail
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // bl sub_02014A60
    // mov r1, #3
    // lsl r1, r1, #8
    // add r5, r0, #0
    // bl DC_FlushRange
    // mov r1, #0x79
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #4
    // mov r3, #1
    // bl sub_02014AB0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}

