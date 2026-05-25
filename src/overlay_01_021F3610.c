/* Decompiled from asm/overlay_01_021F3610.s */
#include "global.h"

void ov01_021F3610(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #7
    // lsl r0, r0, #8
    // mov r4, #0
    // str r1, [r6, r0]
    // add r7, r4, #0
    // mov r0, #0x38
    // mul r0, r4
    // add r5, r6, r0
    // add r0, r5, #0
    // bl ov01_021F3668
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // str r7, [r5, #0x10]
    // cmp r4, #0x20
    // blo _021F361E
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F3638(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r1, _021F365C ; =0x00000704
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r2, _021F365C ; =0x00000704
    // mov r0, #0
    // add r1, r4, #0
    // bl MIi_CpuClearFast
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021F3610
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021F365C: .word 0x00000704
    // TODO: decompile
}


void ov01_021F3660(void) {
    Heap_Free();
}


void ov01_021F3668(void) {
    // push {r3, r4, r5}
    // sub sp, #0xc
    // add r3, r0, #0
    // add r2, sp, #0
    // mov r0, #0
    // str r0, [r2]
    // str r0, [r2, #4]
    // str r0, [r2, #8]
    // str r0, [r3]
    // str r0, [r3, #4]
    // str r0, [r3, #8]
    // add r4, r3, #0
    // add r5, r2, #0
    // str r0, [r3, #0xc]
    // ldmia r5!, {r0, r1}
    // add r4, #0x14
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // add r5, r2, #0
    // str r0, [r4]
    // add r4, r3, #0
    // ldmia r5!, {r0, r1}
    // add r4, #0x20
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // add r3, #0x2c
    // str r0, [r4]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r3]
    // add sp, #0xc
    // pop {r3, r4, r5}
    // bx lr
    // TODO: decompile
}


void ov01_021F36AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // add r6, r0, #0
    // add r7, r4, #0
    // mov r0, #0x38
    // mul r0, r4
    // add r5, r6, r0
    // add r0, r5, #0
    // bl ov01_021F3668
    // mov r0, #7
    // lsl r0, r0, #8
    // ldr r0, [r6, r0]
    // ldr r1, [r5, #0x10]
    // bl ov01_0220411C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // str r7, [r5, #0x10]
    // cmp r4, #0x20
    // blo _021F36B4
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F36DC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0x20
    // blt _021F36EC
    // bl GF_AssertFail
    // add r3, sp, #0
    // mov r1, #0
    // str r1, [r3]
    // str r1, [r3, #4]
    // mov r0, #0x38
    // add r7, r5, #0
    // mul r7, r0
    // str r1, [r3, #8]
    // add r2, r4, r7
    // str r1, [r4, r7]
    // str r1, [r2, #4]
    // str r1, [r2, #8]
    // add r5, r2, #0
    // add r6, r3, #0
    // str r1, [r2, #0xc]
    // ldmia r6!, {r0, r1}
    // add r5, #0x14
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // add r6, r3, #0
    // str r0, [r5]
    // add r5, r2, #0
    // ldmia r6!, {r0, r1}
    // add r5, #0x20
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // add r2, #0x2c
    // str r0, [r5]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r5, r4, #0
    // str r0, [r2]
    // mov r0, #0x38
    // add r5, #0x10
    // lsl r0, r0, #5
    // ldr r0, [r4, r0]
    // ldr r1, [r5, r7]
    // bl ov01_0220411C
    // mov r0, #0
    // str r0, [r5, r7]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F3744(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0
    // add r4, r1, #0
    // add r7, r2, #0
    // str r0, [sp, #4]
    // cmp r4, #0
    // beq _021F3774
    // mov r0, #4
    // bl Heap_AllocAtEnd
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl NARC_ReadFile
    // add r0, r4, #0
    // mov r1, #0x30
    // bl _u32_div_f
    // str r0, [sp]
    // b _021F3776
    // str r0, [sp]
    // ldr r5, [sp, #4]
    // mov r6, #0
    // add r4, r7, #0
    // ldr r0, [sp]
    // cmp r6, r0
    // bhs _021F37E0
    // ldr r0, [r5]
    // add r2, r4, #0
    // str r0, [r4]
    // mov r0, #1
    // str r0, [r4, #4]
    // mov r0, #0
    // add r3, r5, #4
    // str r0, [r4, #0xc]
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r3, r5, #0
    // str r0, [r2]
    // add r3, #0x10
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r3, r5, #0
    // str r0, [r2]
    // add r3, #0x1c
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #7
    // lsl r0, r0, #8
    // ldr r0, [r7, r0]
    // ldr r1, [r4]
    // bl ov01_02204154
    // cmp r0, #0
    // bne _021F37D0
    // mov r0, #0
    // str r0, [r4]
    // mov r0, #7
    // lsl r0, r0, #8
    // ldr r0, [r7, r0]
    // ldr r1, [r4]
    // bl ov01_022040F8
    // str r0, [r4, #0x10]
    // b _021F381C
    // mov r1, #0
    // add r0, sp, #8
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // add r0, r1, #0
    // str r0, [r4]
    // str r0, [r4, #4]
    // add r2, r4, #0
    // add r3, sp, #8
    // str r0, [r4, #0xc]
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r3, sp, #8
    // str r0, [r2]
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r3, sp, #8
    // str r0, [r2]
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r6, r6, #1
    // add r4, #0x38
    // add r5, #0x30
    // cmp r6, #0x20
    // blt _021F377C
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _021F3830
    // bl Heap_Free
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F3834(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // ldr r0, [sp, #0x48]
    // add r4, r3, #0
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // str r1, [sp]
    // str r0, [sp, #0x4c]
    // ldrb r0, [r4, #1]
    // str r0, [sp, #0x10]
    // cmp r0, #0x1e
    // bls _021F3854
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r3, _021F3A34 ; =ov01_02206A84
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // add r2, sp, #0x24
    // mov r0, #0
    // str r0, [r2]
    // str r0, [r2, #4]
    // ldr r3, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [r2, #8]
    // cmp r3, r1
    // blo _021F38AC
    // ldr r1, [sp, #8]
    // add r5, r2, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // add r3, r1, #0
    // str r0, [r1, #0xc]
    // ldmia r5!, {r0, r1}
    // add r3, #0x14
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // ldr r3, [sp, #8]
    // ldmia r2!, {r0, r1}
    // add r3, #0x20
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // ldr r2, [sp, #8]
    // str r0, [r3]
    // add r3, sp, #0x18
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // b _021F3A1C
    // ldrb r1, [r4, #2]
    // ldr r2, [sp, #0x4c]
    // add r0, sp, #0x14
    // bl GetSafariObjectConfig
    // add r1, sp, #0x14
    // ldrb r2, [r1]
    // ldr r0, [sp, #8]
    // str r2, [r0]
    // ldrb r0, [r1, #1]
    // ldrb r5, [r4, #4]
    // lsl r1, r0, #0x1c
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1d
    // str r0, [sp, #4]
    // lsr r6, r1, #0x1d
    // ldr r1, [sp, #4]
    // mov r0, #2
    // sub r1, r0, r1
    // lsl r2, r1, #3
    // ldrb r1, [r4, #5]
    // add r0, #0xfe
    // lsl r1, r1, #4
    // add r1, r2, r1
    // ldrb r2, [r4, #3]
    // lsl r1, r1, #0x10
    // asr r7, r1, #0x10
    // lsl r1, r6, #3
    // lsl r2, r2, #4
    // add r1, r1, r2
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // sub r0, r1, r0
    // cmp r0, #0
    // ble _021F3904
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021F3912
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #8]
    // cmp r5, #0
    // str r0, [r1, #0x14]
    // ble _021F3930
    // lsl r0, r5, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021F393E
    // lsl r0, r5, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #8]
    // str r0, [r1, #0x18]
    // mov r0, #1
    // lsl r0, r0, #8
    // sub r0, r7, r0
    // cmp r0, #0
    // ble _021F3962
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021F3970
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #8]
    // add r3, sp, #0x24
    // add r2, r1, #0
    // str r0, [r1, #0x1c]
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r3, sp, #0x18
    // str r0, [r2]
    // ldr r2, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #1
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // str r1, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #0xc]
    // ldrb r7, [r4, #5]
    // ldr r0, [sp, #4]
    // sub r0, r7, r0
    // cmp r7, r0
    // ble _021F39EE
    // lsl r0, r7, #5
    // mov ip, r0
    // ldr r0, _021F3A38 ; =0x00008023
    // add r3, sp, #0x14
    // ldrb r1, [r4, #3]
    // add r2, r1, r6
    // cmp r1, r2
    // bge _021F39D8
    // mov r2, ip
    // lsl r5, r2, #1
    // ldr r2, [sp, #0x48]
    // add r5, r2, r5
    // lsl r2, r1, #1
    // add r2, r5, r2
    // strh r0, [r2]
    // ldrb r5, [r3, #1]
    // add r1, r1, #1
    // add r2, r2, #2
    // lsl r5, r5, #0x1c
    // lsr r6, r5, #0x1d
    // ldrb r5, [r4, #3]
    // add r5, r6, r5
    // cmp r1, r5
    // blt _021F39C4
    // mov r1, ip
    // ldrb r2, [r3, #1]
    // sub r1, #0x20
    // mov ip, r1
    // lsl r2, r2, #0x19
    // ldrb r1, [r4, #5]
    // lsr r2, r2, #0x1d
    // sub r7, r7, #1
    // sub r1, r1, r2
    // cmp r7, r1
    // bgt _021F39B0
    // mov r1, #7
    // ldr r0, [sp]
    // lsl r1, r1, #8
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #8]
    // ldr r1, [r1]
    // bl ov01_02204154
    // cmp r0, #0
    // bne _021F3A08
    // ldr r0, [sp, #8]
    // mov r1, #0
    // str r1, [r0]
    // mov r1, #7
    // ldr r0, [sp]
    // lsl r1, r1, #8
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #8]
    // ldr r1, [r1]
    // bl ov01_022040F8
    // ldr r1, [sp, #8]
    // str r0, [r1, #0x10]
    // ldr r0, [sp, #8]
    // add r4, r4, #4
    // add r0, #0x38
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #0x20
    // bge _021F3A30
    // b _021F3868
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F3A34: .word ov01_02206A84
    // _021F3A38: .word 0x00008023
    // TODO: decompile
}


void ov01_021F3A3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // ldr r4, _021F3AFC ; =ov01_02206A90
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // add r6, r0, #0
    // str r1, [sp, #8]
    // add r3, sp, #0x18
    // mov r2, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F3A4E
    // ldr r0, [r4]
    // ldr r5, [sp, #0x60]
    // str r0, [r3]
    // mov r7, #0
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _021F3AEE
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // bne _021F3AEE
    // add r4, r5, #0
    // add r4, #0x14
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0x3c
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // ldr r1, [sp, #0x3c]
    // ldr r0, [r6]
    // add r3, r5, #0
    // add r0, r1, r0
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x44]
    // ldr r0, [r6, #8]
    // add r3, #0x2c
    // add r0, r1, r0
    // str r0, [sp, #0x44]
    // ldr r0, [r5, #0x10]
    // add r1, r2, #0
    // ldr r0, [r0, #0x54]
    // add r2, sp, #0x18
    // bl sub_0201F990
    // cmp r0, #0
    // beq _021F3AEE
    // ldr r0, [sp, #8]
    // bl ov01_021FB9F4
    // add r4, r0, #0
    // ldr r0, [sp, #0xc]
    // cmp r0, #1
    // bne _021F3AB8
    // ldr r1, [r5, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r1, [r1, #0x54]
    // ldr r2, _021F3B00 ; =0x00000F33
    // bl ov01_021EA9B0
    // ldr r0, [r5]
    // add r1, r4, #0
    // add r2, sp, #0x14
    // bl ov01_021EA7F8
    // add r0, sp, #0x14
    // ldrh r0, [r0]
    // add r1, sp, #0x3c
    // cmp r0, #0
    // bne _021F3ADA
    // add r3, r5, #0
    // ldr r0, [r5, #0x10]
    // add r2, sp, #0x18
    // add r3, #0x2c
    // bl GF3dRender_DrawModel
    // b _021F3AEE
    // str r4, [sp]
    // ldr r0, [r5]
    // add r3, r5, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x10]
    // add r2, sp, #0x18
    // ldr r0, [r0, #0x54]
    // add r3, #0x2c
    // bl ov01_021F3B84
    // add r7, r7, #1
    // add r5, #0x38
    // cmp r7, #0x20
    // blt _021F3A5E
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3AFC: .word ov01_02206A90
    // _021F3B00: .word 0x00000F33
    // TODO: decompile
}


void ov01_021F3B04(void) {
    // add r0, #0x2c
    // bx lr
    // TODO: decompile
}


void ov01_021F3B08(void) {
    // add r0, #0x20
    // bx lr
    // TODO: decompile
}


void ov01_021F3B0C(void) {
    // add r2, r1, #0
    // add r2, #0x14
    // add r3, r0, #0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r3]
    // bx lr
    // TODO: decompile
}


void ov01_021F3B1C(void) {
    // add r3, r1, #0
    // add r2, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // bx lr
    // TODO: decompile
}


void ov01_021F3B2C(void) {
    ((u32*)r0)[8] = r1;
}


void ov01_021F3B30(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}


void ov01_021F3B34(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021F3B38(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}


void ov01_021F3B3C(void) {
    // ldr r0, [r0, #0x10]
    // ldr r0, [r0, #0x54]
    // bx lr
    // TODO: decompile
}


void ov01_021F3B44(void) {
    // mov r2, #0x38
    // mul r2, r1
    // add r0, r0, r2
    // bx lr
    // TODO: decompile
}


void ov01_021F3B4C(void) {
    // mov r3, #0
    // ldr r2, [r0]
    // cmp r2, r1
    // beq _021F3B5E
    // add r3, r3, #1
    // add r0, #0x38
    // cmp r3, #0x20
    // blt _021F3B4E
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F3B60(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #0x20
    // blt _021F3B6E
    // bl GF_AssertFail
    // mov r0, #0x38
    // mul r0, r4
    // add r4, r5, r0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _021F3B7E
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F3B84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r0, r1, #0
    // add r4, r2, #0
    // add r5, r3, #0
    // bl NNS_G3dGlbSetBaseTrans
    // ldr r1, _021F3C04 ; =NNS_G3dGlb + 0xBC
    // add r0, r4, #0
    // bl MI_Copy36B
    // ldr r1, _021F3C08 ; =NNS_G3dGlb + 0x80
    // mov r0, #0xa4
    // ldr r2, [r1, #0x7c]
    // bic r2, r0
    // add r0, r5, #0
    // str r2, [r1, #0x7c]
    // bl NNS_G3dGlbSetBaseScale
    // bl NNS_G3dGlbFlushP
    // add r2, sp, #0
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // add r2, #2
    // add r3, sp, #0
    // bl ov01_021EA804
    // add r0, sp, #0
    // ldrh r0, [r0]
    // ldr r1, [sp, #0x18]
    // bl ov01_021EA81C
    // add r6, r0, #0
    // add r0, sp, #0
    // ldrh r0, [r0, #2]
    // mov r5, #0xff
    // mov r4, #0
    // cmp r0, #0
    // ble _021F3C00
    // lsl r0, r4, #2
    // add r2, r6, r0
    // ldrh r0, [r6, r0]
    // cmp r5, r0
    // beq _021F3BE6
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // mov r3, #1
    // b _021F3BE8
    // mov r3, #0
    // ldrh r2, [r2, #2]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl NNS_G3dDraw1Mat1Shp
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, sp, #0
    // ldrh r0, [r0, #2]
    // cmp r4, r0
    // blt _021F3BD4
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3C04: .word NNS_G3dGlb + 0xBC
    // _021F3C08: .word NNS_G3dGlb + 0x80
    // TODO: decompile
}


void ov01_021F3C0C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r4, _021F3C98 ; =ov01_02206A78
    // add r7, r2, #0
    // add r6, r0, #0
    // mov ip, r1
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // mov r4, #0
    // str r0, [r3]
    // mov r0, #0x38
    // add r1, r4, #0
    // mul r1, r0
    // add r5, r6, r1
    // ldr r1, [r5, #4]
    // cmp r1, #0
    // bne _021F3C84
    // mov r0, #1
    // str r0, [r5, #4]
    // add r3, r5, #0
    // add r3, #0x14
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r7]
    // cmp r2, #0
    // str r0, [r3]
    // beq _021F3C5A
    // mov r0, #1
    // str r0, [r5, #0xc]
    // add r3, r5, #0
    // ldmia r2!, {r0, r1}
    // add r3, #0x20
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r3]
    // b _021F3C5E
    // mov r0, #0
    // str r0, [r5, #0xc]
    // add r2, sp, #0
    // add r3, r5, #0
    // ldmia r2!, {r0, r1}
    // add r3, #0x2c
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // mov r1, ip
    // str r0, [r3]
    // mov r0, ip
    // str r0, [r5]
    // mov r0, #7
    // lsl r0, r0, #8
    // ldr r0, [r6, r0]
    // bl ov01_022040F8
    // str r0, [r5, #0x10]
    // add sp, #0xc
    // add r0, r4, #0
    // pop {r4, r5, r6, r7, pc}
    // add r1, r4, #1
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x18
    // cmp r4, #0x20
    // blo _021F3C28
    // bl GF_AssertFail
    // mov r0, #0x20
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021F3C98: .word ov01_02206A78
    // TODO: decompile
}


void ov01_021F3C9C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // ldr r4, _021F3D34 ; =ov01_02206AB4
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x14
    // mov r2, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F3CAA
    // ldr r0, [r4]
    // mov r4, #0
    // str r0, [r3]
    // add r7, sp, #0x14
    // mov r0, #0x38
    // add r1, r4, #0
    // mul r1, r0
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _021F3D24
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // bne _021F3D24
    // ldr r0, [sp, #0xc]
    // bl ov01_021FB9F4
    // add r6, r0, #0
    // ldr r0, [r5]
    // add r1, r6, #0
    // add r2, sp, #0x10
    // bl ov01_021EA7F8
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _021F3CF2
    // add r1, r5, #0
    // add r0, r7, #0
    // add r1, #0x20
    // bl sub_02020D2C
    // add r0, sp, #0x10
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _021F3D0C
    // add r1, r5, #0
    // ldr r0, [r5, #0x10]
    // add r5, #0x2c
    // add r1, #0x14
    // add r2, r7, #0
    // add r3, r5, #0
    // bl GF3dRender_DrawModel
    // b _021F3D24
    // str r6, [sp]
    // ldr r0, [r5]
    // add r1, r5, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x10]
    // add r5, #0x2c
    // ldr r0, [r0, #0x54]
    // add r1, #0x14
    // add r2, r7, #0
    // add r3, r5, #0
    // bl ov01_021F3B84
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #0x20
    // blo _021F3CBA
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3D34: .word ov01_02206AB4
    // TODO: decompile
}

