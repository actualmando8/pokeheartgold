/* Decompiled from asm/unk_0202FBCC.s */
#include "global.h"

void sub_0202FBCC(void) {
    // ldr r0, _0202FBD0 ; =0x00001D50
    // bx lr
    // _0202FBD0: .word 0x00001D50
    // TODO: decompile
}


void sub_0202FBD4(void) {
    MIi_CpuClear32(0, 0);
}


void sub_0202FBF0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0202FC20 ; =_021D2AF8
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r6, r2, #0
    // cmp r0, #0
    // beq _0202FC0A
    // bl Heap_Free
    // ldr r0, _0202FC20 ; =_021D2AF8
    // mov r1, #0
    // str r1, [r0]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0
    // bl sub_0202711C
    // ldr r1, _0202FC20 ; =_021D2AF8
    // str r0, [r1]
    // bl sub_0202FBD4
    // pop {r4, r5, r6, pc}
    // _0202FC20: .word _021D2AF8
    // TODO: decompile
}


void sub_0202FC24(void) {
    // push {r3, lr}
    // ldr r0, _0202FC44 ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0202FC32
    // bl GF_AssertFail
    // ldr r0, _0202FC44 ; =_021D2AF8
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _0202FC44 ; =_021D2AF8
    // mov r1, #0
    // str r1, [r0]
    // pop {r3, pc}
    // nop
    // _0202FC44: .word _021D2AF8
    // TODO: decompile
}


void sub_0202FC48(void) {
    // ldr r0, _0202FC58 ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0202FC54
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0202FC58: .word _021D2AF8
    // TODO: decompile
}


void sub_0202FC5C(void) {
    GF_AssertFail();
}


void sub_0202FC74(void) {
    GF_AssertFail();
}


void sub_0202FC90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0202FD1C ; =_021D2AF8
    // add r7, r1, #0
    // ldr r0, [r0]
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r0, #0
    // beq _0202FCAC
    // bl Heap_Free
    // ldr r0, _0202FD1C ; =_021D2AF8
    // mov r1, #0
    // str r1, [r0]
    // ldr r3, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r4, #0
    // bl sub_0202711C
    // ldr r1, _0202FD1C ; =_021D2AF8
    // str r0, [r1]
    // ldr r1, [r4]
    // cmp r1, #1
    // beq _0202FCCA
    // mov r0, #3
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _0202FD20 ; =0x00001C64
    // add r0, #0xe8
    // ldrh r2, [r0, r1]
    // ldr r3, _0202FD24 ; =0x0000FFFF
    // eor r3, r2
    // lsl r3, r3, #0x10
    // add r2, r2, r3
    // bl sub_02030258
    // ldr r1, _0202FD1C ; =_021D2AF8
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl sub_02030154
    // cmp r0, #1
    // bne _0202FCF2
    // mov r0, #0
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _0202FD1C ; =_021D2AF8
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl sub_0203018C
    // cmp r0, #0
    // bne _0202FD08
    // mov r0, #2
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r6, #0
    // beq _0202FD14
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_020304F0
    // mov r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0202FD1C: .word _021D2AF8
    // _0202FD20: .word 0x00001C64
    // _0202FD24: .word 0x0000FFFF
    // TODO: decompile
}


void sub_0202FD28(void) {
    // push {r4, r5, r6, lr}
    // add r5, r2, #0
    // add r6, r0, #0
    // bl sub_0202711C
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #1
    // beq _0202FD46
    // mov r1, #3
    // str r1, [r5]
    // bl Heap_Free
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r1, _0202FD9C ; =0x00001C64
    // add r0, #0xe8
    // ldrh r2, [r0, r1]
    // ldr r3, _0202FDA0 ; =0x0000FFFF
    // eor r3, r2
    // lsl r3, r3, #0x10
    // add r2, r2, r3
    // bl sub_02030258
    // add r0, r6, #0
    // add r1, r4, #0
    // bl sub_02030154
    // cmp r0, #1
    // bne _0202FD72
    // mov r0, #0
    // str r0, [r5]
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r6, #0
    // add r1, r4, #0
    // bl sub_0203018C
    // cmp r0, #0
    // bne _0202FD8C
    // mov r0, #2
    // str r0, [r5]
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // str r0, [r5]
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // nop
    // _0202FD9C: .word 0x00001C64
    // _0202FDA0: .word 0x0000FFFF
    // TODO: decompile
}


void sub_0202FDA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r3, #0
    // add r6, r1, #0
    // ldrh r1, [r4]
    // add r5, r0, #0
    // add r7, r2, #0
    // cmp r1, #0
    // beq _0202FDBA
    // cmp r1, #1
    // beq _0202FDF2
    // b _0202FE10
    // mov r0, #8
    // bl sub_0201A728
    // mov r0, #0xb
    // bl sub_0201A748
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl sub_02027134
    // add r6, r0, #0
    // cmp r6, #2
    // bne _0202FDE8
    // add r0, r5, #0
    // mov r1, #2
    // bl Save_PrepareForAsyncWrite
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #8
    // bl sub_0201A738
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl Save_WriteFileAsync
    // add r5, r0, #0
    // sub r0, r5, #2
    // cmp r0, #1
    // bhi _0202FE0C
    // mov r0, #0
    // strh r0, [r4]
    // bl sub_0201A774
    // mov r0, #8
    // bl sub_0201A738
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0202FE14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r6, [sp, #0x18]
    // mov ip, r1
    // add r1, r2, #0
    // ldrh r2, [r6]
    // add r7, r0, #0
    // cmp r2, #0
    // beq _0202FE2A
    // cmp r2, #1
    // beq _0202FE90
    // b _0202FE9E
    // ldr r2, _0202FEA4 ; =_021D2AF8
    // ldr r4, [r2]
    // cmp r4, #0
    // bne _0202FE36
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // add r5, r4, #0
    // add r4, #0xe8
    // add r5, #0x84
    // str r1, [sp]
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, ip
    // bl sub_0202FF08
    // add r0, r5, #0
    // ldr r1, _0202FEA8 ; =0x0000E281
    // add r0, #0x48
    // strh r1, [r0]
    // add r0, r7, #0
    // add r1, r5, #0
    // mov r2, #0x58
    // bl SaveArray_CalcCRC16
    // add r5, #0x60
    // strh r0, [r5]
    // ldr r0, _0202FEA8 ; =0x0000E281
    // ldr r2, _0202FEAC ; =0x00001C62
    // add r1, r4, #0
    // strh r0, [r4, r2]
    // add r0, r7, #0
    // add r2, r2, #2
    // bl SaveArray_CalcCRC16
    // ldr r1, _0202FEB0 ; =0x00001C64
    // ldr r3, _0202FEB4 ; =0x0000FFFF
    // strh r0, [r4, r1]
    // ldrh r2, [r4, r1]
    // add r0, r4, #0
    // eor r3, r2
    // lsl r3, r3, #0x10
    // add r2, r2, r3
    // bl sub_02030250
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // strh r1, [r0]
    // ldrh r0, [r6]
    // add r0, r0, #1
    // strh r0, [r6]
    // b _0202FE9E
    // ldr r1, _0202FEA4 ; =_021D2AF8
    // add r2, r3, #0
    // ldr r1, [r1]
    // ldr r3, [sp, #0x1c]
    // bl sub_0202FDA4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0202FEA4: .word _021D2AF8
    // _0202FEA8: .word 0x0000E281
    // _0202FEAC: .word 0x00001C62
    // _0202FEB0: .word 0x00001C64
    // _0202FEB4: .word 0x0000FFFF
    // TODO: decompile
}


void sub_0202FEB8(void) {
    // cmp r0, #0x1a
    // bgt _0202FEE6
    // bge _0202FEF2
    // add r3, r0, #0
    // sub r3, #0xe
    // cmp r3, #9
    // bhi _0202FEFC
    // add r3, r3, r3
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _0202FED2: ; jump table
    // cmp r0, #0x1d
    // bgt _0202FEEE
    // beq _0202FEF2
    // b _0202FEFC
    // cmp r0, #0x20
    // bne _0202FEFC
    // mov r0, #4
    // str r0, [r1]
    // mov r0, #3
    // str r0, [r2]
    // bx lr
    // mov r0, #2
    // str r0, [r1]
    // mov r0, #6
    // str r0, [r2]
    // bx lr
    // TODO: decompile
}


void sub_0202FF08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r3, [sp, #8]
    // add r7, r1, #0
    // str r2, [sp, #4]
    // ldr r3, _02030148 ; =_020F68C8
    // str r0, [sp]
    // add r2, sp, #0x1c
    // mov r1, #8
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0202FF1A
    // ldr r1, _0203014C ; =_020F68C4
    // add r0, sp, #0x18
    // ldrb r2, [r1]
    // strb r2, [r0]
    // ldrb r2, [r1, #1]
    // strb r2, [r0, #1]
    // ldrb r2, [r1, #2]
    // ldrb r1, [r1, #3]
    // strb r2, [r0, #2]
    // strb r1, [r0, #3]
    // add r0, r7, #0
    // mov r1, #0
    // mov r2, #0x64
    // bl MI_CpuFill8
    // ldr r0, [sp, #8]
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    // bl sub_0202FEB8
    // ldr r0, [sp, #4]
    // mov r2, #0
    // ldr r3, [r0]
    // mov r0, #4
    // tst r0, r3
    // beq _0202FF74
    // mov r1, #0x80
    // add r0, r3, #0
    // tst r0, r1
    // beq _0202FF6C
    // ldr r0, [sp, #4]
    // add r1, #0xc4
    // ldrh r0, [r0, r1]
    // lsl r4, r0, #1
    // b _0202FF76
    // ldr r0, [sp, #4]
    // add r1, #0xc4
    // ldrh r4, [r0, r1]
    // b _0202FF76
    // add r4, r2, #0
    // ldr r5, [sp, #0x28]
    // mov r0, #0
    // mov ip, r0
    // cmp r5, #0
    // ble _0203004E
    // add r0, sp, #0x18
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // lsl r1, r4, #2
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // mov r0, #1
    // and r0, r4
    // add r3, r7, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // mov r1, #8
    // ldr r0, [r0]
    // add r6, r0, #0
    // and r6, r1
    // beq _0202FFD6
    // mov r4, #0x80
    // add r1, r0, #0
    // tst r1, r4
    // bne _0202FFD6
    // mov r6, #0
    // cmp r5, #0
    // ble _0202FFF6
    // ldr r1, [sp, #0x10]
    // add r4, #0xb4
    // ldr r1, [r1, r4]
    // ldr r0, [sp, #4]
    // lsl r1, r1, #0x1f
    // lsr r4, r1, #0x1d
    // add r1, sp, #0x1c
    // add r4, r1, r4
    // mov r1, ip
    // ldrb r1, [r1, r4]
    // mov r4, #0x4d
    // lsl r4, r4, #2
    // ldr r4, [r0, r4]
    // cmp r4, r1
    // beq _0202FFF6
    // add r6, r6, #1
    // add r0, r0, #4
    // cmp r6, r5
    // blt _0202FFC2
    // b _0202FFF6
    // cmp r6, #0
    // beq _0202FFE6
    // mov r1, #0x80
    // tst r0, r1
    // beq _0202FFE6
    // ldr r0, [sp, #0x14]
    // ldrb r6, [r0]
    // b _0202FFF6
    // ldr r0, [sp, #0xc]
    // mov r6, ip
    // cmp r0, #0
    // beq _0202FFF6
    // mov r0, ip
    // mov r1, #1
    // add r6, r0, #0
    // eor r6, r1
    // ldr r0, [sp, #0x24]
    // mov r5, #0
    // cmp r0, #0
    // ble _0203003C
    // ldr r1, _02030150 ; =0x00001154
    // ldr r0, [sp, #4]
    // add r1, r0, r1
    // mov r0, #0xa9
    // lsl r0, r0, #2
    // mul r0, r6
    // add r4, r1, r0
    // ldr r0, [r4, #0x2c]
    // lsl r0, r0, #1
    // lsr r0, r0, #0x1f
    // bne _0203002E
    // ldrh r0, [r4, #4]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // bne _0203002E
    // ldrh r0, [r4, #6]
    // strh r0, [r3]
    // add r0, r4, #0
    // add r0, #0x30
    // ldrb r0, [r0]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x1b
    // add r0, r7, r2
    // strb r1, [r0, #0x18]
    // ldr r0, [sp, #0x24]
    // add r5, r5, #1
    // add r3, r3, #2
    // add r2, r2, #1
    // add r4, #0x70
    // cmp r5, r0
    // blt _0203000C
    // ldr r0, [sp, #0x14]
    // ldr r5, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // mov r0, ip
    // add r0, r0, #1
    // mov ip, r0
    // cmp r0, r5
    // blt _0202FF94
    // ldr r0, [sp, #8]
    // cmp r0, #0xd
    // bhi _02030124
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02030060: ; jump table
    // ldr r0, [sp]
    // mov r1, #0
    // bl sub_020291E8
    // add r3, r7, #0
    // add r3, #0x28
    // mov r2, #0x10
    // ldrh r1, [r0]
    // add r0, r0, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _0203008A
    // b _0203013A
    // ldr r0, [sp]
    // mov r1, #1
    // bl sub_020291E8
    // add r3, r7, #0
    // add r3, #0x28
    // mov r2, #0x10
    // ldrh r1, [r0]
    // add r0, r0, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _020300A6
    // b _0203013A
    // ldr r0, [sp]
    // mov r1, #2
    // bl sub_020291E8
    // add r3, r7, #0
    // add r3, #0x28
    // mov r2, #0x10
    // ldrh r1, [r0]
    // add r0, r0, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _020300C2
    // b _0203013A
    // ldr r0, [sp]
    // mov r1, #3
    // bl sub_020291E8
    // add r3, r7, #0
    // add r3, #0x28
    // mov r2, #0x10
    // ldrh r1, [r0]
    // add r0, r0, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _020300DE
    // b _0203013A
    // ldr r0, [sp]
    // mov r1, #4
    // bl sub_020291E8
    // add r3, r7, #0
    // add r3, #0x28
    // mov r2, #0x10
    // ldrh r1, [r0]
    // add r0, r0, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _020300FA
    // b _0203013A
    // ldr r0, [sp]
    // mov r1, #5
    // bl sub_020291E8
    // add r3, r7, #0
    // add r3, #0x28
    // mov r2, #0x10
    // ldrh r1, [r0]
    // add r0, r0, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _02030116
    // b _0203013A
    // bl sub_0202925C
    // add r3, r7, #0
    // add r3, #0x28
    // mov r2, #0x10
    // ldrh r1, [r0]
    // add r0, r0, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _0203012E
    // ldr r0, [sp, #0x40]
    // strh r0, [r7, #0x24]
    // ldr r0, [sp, #8]
    // add r7, #0x26
    // strb r0, [r7]
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _02030148: .word _020F68C8
    // _0203014C: .word _020F68C4
    // _02030150: .word 0x00001154
    // TODO: decompile
}


void sub_02030154(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r1, #0
    // add r4, #0xe8
    // add r5, #0x84
    // bl Save_CheckExtraChunksExist
    // cmp r0, #0
    // bne _0203016A
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, _02030184 ; =0x00001C62
    // ldrh r1, [r4, r0]
    // ldr r0, _02030188 ; =0x0000E281
    // cmp r1, r0
    // bne _0203017C
    // add r5, #0x48
    // ldrh r1, [r5]
    // cmp r1, r0
    // beq _02030180
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02030184: .word 0x00001C62
    // _02030188: .word 0x0000E281
    // TODO: decompile
}


void sub_0203018C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r1, #0
    // ldr r1, _0203023C ; =0x00001C62
    // add r4, #0xe8
    // ldrh r1, [r4, r1]
    // ldr r2, _02030240 ; =0x0000E281
    // add r6, r0, #0
    // add r5, #0x84
    // cmp r1, r2
    // bne _020301AC
    // add r1, r5, #0
    // add r1, #0x48
    // ldrh r1, [r1]
    // cmp r1, r2
    // beq _020301B0
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r5, #0
    // mov r2, #0x58
    // bl SaveArray_CalcCRC16
    // add r5, #0x60
    // ldrh r1, [r5]
    // cmp r0, r1
    // beq _020301C4
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _02030244 ; =0x00001C64
    // add r0, r6, #0
    // add r1, r4, #0
    // bl SaveArray_CalcCRC16
    // ldr r1, _02030244 ; =0x00001C64
    // ldrh r1, [r4, r1]
    // cmp r0, r1
    // beq _020301DA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mov ip, r0
    // ldr r0, _02030248 ; =0x00001154
    // add r0, r4, r0
    // str r0, [sp]
    // ldr r0, _0203024C ; =0x000001D3
    // add r7, r0, #0
    // add r6, r0, #0
    // add r7, #0x45
    // add r6, #0x1c
    // ldr r4, [sp]
    // mov r2, #0
    // ldrh r1, [r4, #6]
    // cmp r1, r6
    // bls _020301FC
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r1, [r4, #8]
    // cmp r1, r7
    // bls _02030206
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r3, #0
    // add r5, r4, #0
    // ldrh r1, [r5, #0x1c]
    // cmp r1, r0
    // bls _02030214
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r3, r3, #1
    // add r5, r5, #2
    // cmp r3, #4
    // blt _0203020A
    // add r2, r2, #1
    // add r4, #0x70
    // cmp r2, #6
    // blt _020301F2
    // mov r1, #0xa9
    // ldr r2, [sp]
    // lsl r1, r1, #2
    // add r1, r2, r1
    // str r1, [sp]
    // mov r1, ip
    // add r1, r1, #1
    // mov ip, r1
    // cmp r1, #4
    // blt _020301EE
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _0203023C: .word 0x00001C62
    // _02030240: .word 0x0000E281
    // _02030244: .word 0x00001C64
    // _02030248: .word 0x00001154
    // _0203024C: .word 0x000001D3
    // TODO: decompile
}


void sub_02030250(void) {
    _MonEncryptSegment();
}


void sub_02030258(void) {
    _MonDecryptSegment();
}


void sub_02030260(void) {
    // ldr r3, _02030278 ; =_021D2AF8
    // ldr r3, [r3]
    // cmp r3, #0
    // beq _02030274
    // lsl r0, r0, #0xa
    // add r0, r3, r0
    // add r1, r0, r1
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // strb r2, [r1, r0]
    // bx lr
    // nop
    // _02030278: .word _021D2AF8
    // TODO: decompile
}


void sub_0203027C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _020302A0 ; =_021D2AF8
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0203028E
    // bl GF_AssertFail
    // ldr r0, _020302A0 ; =_021D2AF8
    // ldr r1, [r0]
    // lsl r0, r5, #0xa
    // add r0, r1, r0
    // add r1, r0, r4
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldrb r0, [r1, r0]
    // pop {r3, r4, r5, pc}
    // _020302A0: .word _021D2AF8
    // TODO: decompile
}


void sub_020302A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldr r0, _0203048C ; =_021D2AF8
    // ldr r1, [r0]
    // cmp r1, #0
    // bne _020302B4
    // b _02030488
    // ldr r0, [sp]
    // add r7, r1, #0
    // ldr r0, [r0]
    // add r1, #0xe8
    // str r0, [r1]
    // ldr r0, [sp]
    // add r7, #0xe8
    // ldr r0, [r0, #0x14]
    // ldr r1, [sp]
    // str r0, [r7, #4]
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r2, [r1, r0]
    // add r1, r7, #0
    // add r1, #0xe8
    // str r2, [r1]
    // ldr r1, [sp]
    // add r2, r0, #4
    // ldr r2, [r1, r2]
    // add r1, r7, #0
    // add r1, #0xec
    // str r2, [r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #8
    // ldr r2, [r1, r2]
    // add r1, r7, #0
    // add r1, #0xf0
    // str r2, [r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0xc
    // ldr r2, [r1, r2]
    // add r1, r7, #0
    // add r1, #0xf4
    // str r2, [r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x10
    // ldr r2, [r1, r2]
    // add r1, r7, #0
    // add r1, #0xf8
    // str r2, [r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x14
    // ldr r2, [r1, r2]
    // add r1, r7, #0
    // add r1, #0xfc
    // str r2, [r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x18
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x4c
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x1c
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x48
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x24
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x44
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x28
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x40
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x2c
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x3c
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x40
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x28
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x44
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x24
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x48
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x20
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x50
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #0x1c
    // str r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x64
    // ldrh r2, [r1, r2]
    // add r1, r0, #0
    // sub r1, #8
    // strh r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x67
    // ldrb r2, [r1, r2]
    // sub r1, r0, #6
    // ldr r4, [sp]
    // strh r2, [r7, r1]
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x68
    // ldr r1, [r1, r2]
    // sub r0, r0, #4
    // str r1, [r7, r0]
    // add r0, r4, #0
    // mov r3, #0
    // add r5, r7, #0
    // str r0, [sp, #8]
    // str r7, [sp, #4]
    // ldr r0, [r4, #0x18]
    // ldr r2, [sp, #8]
    // ldr r6, [sp, #4]
    // str r0, [r5, #8]
    // mov r0, #6
    // add r2, #0x28
    // add r6, #0x18
    // mov ip, r0
    // ldmia r2!, {r0, r1}
    // stmia r6!, {r0, r1}
    // mov r0, ip
    // sub r0, r0, #1
    // mov ip, r0
    // bne _020303D8
    // ldr r0, [r2]
    // mov r1, #0x5f
    // lsl r1, r1, #2
    // str r0, [r6]
    // ldr r0, [r4, r1]
    // cmp r0, #0
    // bne _020303FA
    // mov r0, #5
    // sub r1, #0x68
    // lsl r0, r0, #6
    // b _020303FC
    // sub r1, #0x68
    // str r0, [r5, r1]
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r2, [r4, r0]
    // add r1, r0, #0
    // sub r1, #0x6c
    // str r2, [r5, r1]
    // ldr r1, [sp]
    // add r4, r4, #4
    // add r2, r1, r3
    // add r1, r0, #0
    // add r1, #0x1c
    // ldrb r2, [r2, r1]
    // add r1, r7, r3
    // sub r0, #0x54
    // strb r2, [r1, r0]
    // ldr r0, [sp, #8]
    // add r3, r3, #1
    // add r0, #0x34
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r5, r5, #4
    // add r0, #0x34
    // str r0, [sp, #4]
    // cmp r3, #4
    // blt _020303C8
    // ldr r0, _02030490 ; =0x00001150
    // ldr r4, [sp]
    // add r0, r7, r0
    // str r0, [sp, #0xc]
    // ldr r0, _02030494 ; =0x00001BE0
    // mov r5, #0
    // add r6, r7, r0
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0xc]
    // bl sub_020306DC
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // add r1, r6, #0
    // bl PlayerProfile_Copy
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02006EFC
    // mov r1, #0x53
    // add r2, r7, r5
    // lsl r1, r1, #2
    // strb r0, [r2, r1]
    // mov r0, #0xa9
    // ldr r1, [sp, #0xc]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // add r5, r5, #1
    // str r0, [sp, #0xc]
    // add r4, r4, #4
    // add r6, #0x20
    // cmp r5, #4
    // blt _0203043E
    // mov r1, #0x13
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // ldr r0, [r0, r1]
    // ldr r1, _02030498 ; =0x00001C60
    // add r1, r7, r1
    // bl Options_Copy
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0203048C: .word _021D2AF8
    // _02030490: .word 0x00001150
    // _02030494: .word 0x00001BE0
    // _02030498: .word 0x00001C60
    // TODO: decompile
}


void sub_0203049C(void) {
    // ldr r2, _020304B0 ; =_021D2AF8
    // ldr r2, [r2]
    // cmp r2, #0
    // beq _020304AE
    // lsl r0, r0, #2
    // add r2, r2, r0
    // mov r0, #0x7f
    // lsl r0, r0, #2
    // str r1, [r2, r0]
    // bx lr
    // _020304B0: .word _021D2AF8
    // TODO: decompile
}


void sub_020304B4(void) {
    // push {r3, r4}
    // ldr r0, _020304EC ; =_021D2AF8
    // ldr r4, [r0]
    // cmp r4, #0
    // bne _020304C4
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r1, r0, #0
    // mov r3, #0
    // add r4, #0xe8
    // add r1, #0x2c
    // ldr r2, [r4, r0]
    // cmp r2, r1
    // bls _020304DC
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r4, r4, #4
    // cmp r3, #4
    // blt _020304D0
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // nop
    // _020304EC: .word _021D2AF8
    // TODO: decompile
}


void sub_020304F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // ldr r0, _020306C8 ; =_021D2AF8
    // str r1, [sp]
    // ldr r1, [r0]
    // add r0, r1, #0
    // str r0, [sp, #0x14]
    // add r0, #0xe8
    // add r1, #0xe8
    // str r0, [sp, #0x14]
    // ldr r0, [r1]
    // str r0, [r6]
    // ldr r0, [sp, #0x14]
    // add r0, #0xe8
    // ldr r1, [r0]
    // mov r0, #0x53
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // ldr r1, [sp, #0x14]
    // add r1, #0xec
    // ldr r2, [r1]
    // add r1, r0, #4
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xf0
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #8
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xf4
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #0xc
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xf8
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #0x10
    // str r2, [r6, r1]
    // ldr r1, [sp, #0x14]
    // add r1, #0xfc
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #0x14
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x4c
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x18
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x48
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x1c
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x44
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x24
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x40
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x28
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x28
    // ldr r2, [r1, r2]
    // mov r1, #0x10
    // orr r2, r1
    // add r1, r0, #0
    // add r1, #0x40
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x24
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x44
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x20
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x48
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #0x1c
    // ldr r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x50
    // str r2, [r6, r1]
    // add r2, r0, #0
    // ldr r1, [sp, #0x14]
    // sub r2, #8
    // ldrh r2, [r1, r2]
    // add r1, r0, #0
    // add r1, #0x64
    // strh r2, [r6, r1]
    // mov r1, #0
    // str r1, [r6, #0x14]
    // add r0, #0x2c
    // str r1, [r6, r0]
    // ldr r0, [sp]
    // bl Save_Pokedex_Get
    // mov r1, #0x11
    // lsl r1, r1, #4
    // ldr r1, [r6, r1]
    // bl Pokedex_Copy
    // ldr r5, [sp, #0x14]
    // ldr r1, _020306CC ; =0x00001150
    // add r0, r5, #0
    // str r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r1, _020306D0 ; =0x00001BE0
    // add r0, r5, #0
    // add r0, r0, r1
    // mov r7, #0
    // add r4, r6, #0
    // str r6, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // ldr r3, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // str r0, [r4, #0x18]
    // mov r0, #6
    // add r3, #0x18
    // add r2, #0x28
    // mov ip, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, ip
    // sub r0, r0, #1
    // mov ip, r0
    // bne _02030614
    // ldr r0, [r3]
    // mov r1, #0x45
    // lsl r1, r1, #2
    // str r0, [r2]
    // add r0, r1, #0
    // ldr r2, [r5, r1]
    // add r0, #0x68
    // str r2, [r4, r0]
    // add r0, r1, #0
    // add r0, #0x20
    // ldr r0, [r5, r0]
    // add r1, #0x8c
    // str r0, [r4, r1]
    // ldr r0, [sp, #8]
    // ldr r1, [r4, #4]
    // bl sub_02030724
    // add r1, r4, #0
    // add r1, #0xf8
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // bl PlayerProfile_Copy
    // ldr r0, [sp, #0x14]
    // add r5, r5, #4
    // add r1, r0, r7
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldrb r2, [r1, r0]
    // add r1, r6, r7
    // add r0, #0x70
    // strb r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // mov r1, #0xa9
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // lsl r1, r1, #2
    // add r0, #0x34
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r4, r4, #4
    // add r0, #0x20
    // str r0, [sp, #4]
    // cmp r7, #4
    // blt _02030604
    // ldr r0, [sp]
    // bl Save_PlayerData_GetOptionsAddr
    // mov r1, #0x13
    // lsl r1, r1, #4
    // ldr r1, [r6, r1]
    // bl Options_Copy
    // mov r5, #0x13
    // lsl r5, r5, #4
    // ldr r1, [r6, r5]
    // ldr r4, _020306D4 ; =0x00001C60
    // ldr r2, [sp, #0x14]
    // ldrh r0, [r1]
    // ldrh r2, [r2, r4]
    // ldr r3, _020306D8 ; =0xFFFF83FF
    // lsl r2, r2, #0x11
    // lsr r2, r2, #0x1b
    // lsl r2, r2, #0x1b
    // and r0, r3
    // lsr r2, r2, #0x11
    // orr r0, r2
    // strh r0, [r1]
    // ldr r2, [r6, r5]
    // ldrh r0, [r2]
    // lsl r1, r0, #0x11
    // lsr r1, r1, #0x1b
    // cmp r1, #0x14
    // blo _020306C2
    // and r0, r3
    // strh r0, [r2]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020306C8: .word _021D2AF8
    // _020306CC: .word 0x00001150
    // _020306D0: .word 0x00001BE0
    // _020306D4: .word 0x00001C60
    // _020306D8: .word 0xFFFF83FF
    // TODO: decompile
}


void sub_020306DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r2, #0xa9
    // add r7, r0, #0
    // add r0, r6, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl MI_CpuFill8
    // add r0, r7, #0
    // bl Party_GetMaxCount
    // strh r0, [r6]
    // add r0, r7, #0
    // bl Party_GetCount
    // strh r0, [r6, #2]
    // ldrh r0, [r6, #2]
    // mov r4, #0
    // cmp r0, #0
    // ble _02030720
    // add r5, r6, #4
    // add r0, r7, #0
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // add r1, r5, #0
    // bl sub_02072A98
    // ldrh r0, [r6, #2]
    // add r4, r4, #1
    // add r5, #0x70
    // cmp r4, r0
    // blt _02030708
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02030724(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // str r1, [sp]
    // mov r1, #0
    // add r0, sp, #4
    // strb r1, [r0]
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r4, r0, #0
    // ldrh r1, [r7]
    // ldr r0, [sp]
    // bl Party_InitWithMaxSize
    // ldrh r0, [r7, #2]
    // mov r6, #0
    // cmp r0, #0
    // ble _02030770
    // add r5, r7, #4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02072D64
    // add r0, r4, #0
    // mov r1, #0xa2
    // add r2, sp, #4
    // bl SetMonData
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl Party_AddMon
    // ldrh r0, [r7, #2]
    // add r6, r6, #1
    // add r5, #0x70
    // cmp r6, r0
    // blt _0203074C
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0203077C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _020307A8 ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0203078C
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0x64
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, _020307A8 ; =_021D2AF8
    // add r1, r4, #0
    // ldr r0, [r0]
    // mov r2, #0x64
    // add r0, #0x84
    // bl MIi_CpuCopy32
    // add r0, r4, #0
    // pop {r4, pc}
    // _020307A8: .word _021D2AF8
    // TODO: decompile
}


void sub_020307AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _020307D8 ; =_021D2AF8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _020307BC
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0x80
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, _020307D8 ; =_021D2AF8
    // add r1, r4, #0
    // ldr r0, [r0]
    // mov r2, #0x80
    // add r0, r0, #4
    // bl MIi_CpuCopy32
    // add r0, r4, #0
    // pop {r4, pc}
    // _020307D8: .word _021D2AF8
    // TODO: decompile
}


void sub_020307DC(void) {
    GF_AssertFail();
}


void sub_020307F8(void) {
    GF_AssertFail();
}


void sub_02030814(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0203087C ; =_021D2AF8
    // add r6, r1, #0
    // ldr r0, [r0]
    // add r7, r2, #0
    // add r4, r3, #0
    // cmp r0, #0
    // bne _0203082A
    // bl GF_AssertFail
    // ldr r1, _0203087C ; =_021D2AF8
    // add r0, r6, #0
    // ldr r1, [r1]
    // mov r2, #0x64
    // add r1, #0x84
    // bl MI_CpuCopy8
    // ldr r1, _0203087C ; =_021D2AF8
    // ldr r2, _02030880 ; =0x00001C68
    // ldr r1, [r1]
    // add r0, r7, #0
    // add r1, #0xe8
    // bl MI_CpuCopy8
    // ldr r1, _0203087C ; =_021D2AF8
    // add r0, r5, #0
    // ldr r1, [r1]
    // mov r2, #0x80
    // add r1, r1, #4
    // bl MI_CpuCopy8
    // ldr r0, _0203087C ; =_021D2AF8
    // ldr r1, _02030884 ; =0x00001D4C
    // ldr r0, [r0]
    // ldr r2, _02030888 ; =0x0000FFFF
    // ldrh r3, [r0, r1]
    // add r0, #0xe8
    // sub r1, #0xe8
    // eor r2, r3
    // lsl r2, r2, #0x10
    // add r2, r3, r2
    // bl sub_02030258
    // cmp r4, #0
    // beq _02030878
    // ldr r1, [sp, #0x18]
    // add r0, r4, #0
    // bl sub_020304F0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0203087C: .word _021D2AF8
    // _02030880: .word 0x00001C68
    // _02030884: .word 0x00001D4C
    // _02030888: .word 0x0000FFFF
    // TODO: decompile
}


void sub_0203088C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r2, #0
    // cmp r1, #5
    // bhi _0203090C
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020308A2: ; jump table
    // cmp r5, #0xc
    // blt _020308B6
    // bl GF_AssertFail
    // lsl r0, r5, #1
    // ldrh r0, [r4, r0]
    // ldr r1, _02030918 ; =0x000001ED
    // cmp r0, r1
    // bls _020308C6
    // mov r0, #0
    // add r1, r0, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // pop {r3, r4, r5, pc}
    // cmp r5, #0xc
    // blt _020308D2
    // bl GF_AssertFail
    // add r0, r4, r5
    // ldrb r0, [r0, #0x18]
    // mov r1, #0
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4, #0x24]
    // ldr r0, _0203091C ; =0x0000270F
    // cmp r1, r0
    // bls _020308E6
    // mov r1, #0
    // pop {r3, r4, r5, pc}
    // add r0, r1, #0
    // mov r1, #0
    // pop {r3, r4, r5, pc}
    // add r4, #0x26
    // ldrb r0, [r4]
    // cmp r0, #0x21
    // blo _020308FA
    // mov r0, #0
    // add r1, r0, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x58]
    // ldr r1, [r4, #0x5c]
    // pop {r3, r4, r5, pc}
    // add r4, #0x27
    // ldrb r0, [r4]
    // mov r1, #0
    // pop {r3, r4, r5, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // add r1, r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02030918: .word 0x000001ED
    // _0203091C: .word 0x0000270F
    // TODO: decompile
}


void sub_02030920(void) {
    Heap_Alloc(0x64);
    MI_CpuFill8(0, 0x64);
}


void sub_02030938(void) {
    Heap_Free();
}


void sub_02030940(void) {
    MI_CpuFill8();
}


void sub_0203094C(void) {
    Save_Frontier_GetStatic();
}


void sub_0203095C(void) {
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1f
    // bx lr
    // TODO: decompile
}


void sub_02030964(void) {
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1f
    // ldrb r3, [r0]
    // mov r2, #0x10
    // lsr r1, r1, #0x1b
    // bic r3, r2
    // orr r1, r3
    // strb r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02030978(void) {
    // push {r3, r4}
    // cmp r1, #9
    // bhi _02030A1E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0203098A: ; jump table
    // ldrb r4, [r0]
    // ldrb r2, [r3]
    // mov r1, #1
    // bic r4, r1
    // mov r1, #1
    // and r1, r2
    // orr r1, r4
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // ldrb r2, [r0]
    // mov r1, #0xe
    // bic r2, r1
    // ldrb r1, [r3]
    // lsl r1, r1, #0x1d
    // lsr r1, r1, #0x1c
    // orr r1, r2
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // ldrb r1, [r3]
    // strb r1, [r0, #1]
    // pop {r3, r4}
    // bx lr
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #4]
    // pop {r3, r4}
    // bx lr
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #0x20]
    // pop {r3, r4}
    // bx lr
    // ldrb r1, [r3]
    // add r0, r0, r2
    // add r0, #0x28
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // lsl r1, r2, #2
    // ldr r3, [r3]
    // add r0, r0, r1
    // str r3, [r0, #0x2c]
    // pop {r3, r4}
    // bx lr
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #0x3c]
    // pop {r3, r4}
    // bx lr
    // ldrb r1, [r3]
    // add r0, r0, r2
    // add r0, #0x44
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // lsl r1, r2, #2
    // ldr r3, [r3]
    // add r0, r0, r1
    // str r3, [r0, #0x48]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02030A24(void) {
    // cmp r1, #9
    // bhi _02030A94
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030A34: ; jump table
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1d
    // bx lr
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bx lr
    // ldrb r0, [r0, #1]
    // bx lr
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #4]
    // bx lr
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #0x20]
    // bx lr
    // add r0, r0, r2
    // add r0, #0x28
    // ldrb r0, [r0]
    // bx lr
    // lsl r1, r2, #2
    // add r0, r0, r1
    // ldr r0, [r0, #0x2c]
    // bx lr
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #0x3c]
    // bx lr
    // add r0, r0, r2
    // add r0, #0x44
    // ldrb r0, [r0]
    // bx lr
    // lsl r1, r2, #2
    // add r0, r0, r1
    // ldr r0, [r0, #0x48]
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}

