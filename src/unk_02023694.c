/* Decompiled from asm/unk_02023694.s */
#include "global.h"

void sub_02023694(void) {
    // mov r2, #0
    // strb r2, [r0]
    // strb r2, [r0, #1]
    // str r2, [r0, #4]
    // add r1, r0, #0
    // str r2, [r0, #8]
    // add r1, #0xd0
    // str r2, [r1]
    // add r1, r0, #0
    // add r1, #0xd4
    // str r2, [r1]
    // add r1, r0, #0
    // add r1, #0xd8
    // str r2, [r1]
    // add r1, r0, #0
    // add r1, #0xdc
    // str r2, [r1]
    // strb r2, [r0, #3]
    // bx lr
    // TODO: decompile
}


void sub_020236BC(void) {
    // mov r3, #0
    // str r3, [r0, #0x28]
    // add r1, r0, #0
    // str r3, [r0, #0x2c]
    // add r1, #0x84
    // str r3, [r1]
    // add r1, r0, #0
    // add r1, #0x88
    // str r3, [r1]
    // add r1, r0, #0
    // add r1, #0x8c
    // str r3, [r1]
    // add r1, r0, #0
    // add r1, #0x90
    // add r2, r0, #0
    // str r3, [r1]
    // add r2, #0xa0
    // mov r1, #0x10
    // strb r3, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _020236E0
    // add r2, r0, #0
    // mov r1, #0
    // add r2, #0x94
    // str r1, [r2]
    // add r2, r0, #0
    // add r2, #0x98
    // str r1, [r2]
    // add r2, r0, #0
    // add r2, #0x9c
    // str r1, [r2]
    // add r2, r0, #0
    // add r2, #0xb0
    // str r1, [r2]
    // str r1, [r0]
    // str r1, [r0, #4]
    // mov r2, #1
    // str r1, [r0, #8]
    // lsl r2, r2, #0xc
    // str r2, [r0, #0xc]
    // str r2, [r0, #0x10]
    // str r2, [r0, #0x14]
    // add r2, r0, #0
    // str r1, [r0, #0x18]
    // add r2, #0xb6
    // strh r1, [r2]
    // add r2, r0, #0
    // add r2, #0xb4
    // strb r1, [r2]
    // add r2, r0, #0
    // add r2, #0xbc
    // str r1, [r2]
    // add r2, r0, #0
    // add r2, #0xc0
    // str r1, [r2]
    // add r2, r0, #0
    // add r2, #0x24
    // strb r1, [r2]
    // str r1, [r0, #0x20]
    // bx lr
    // TODO: decompile
}


void sub_02023738(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02023774 ; =_021D2208
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0202374A
    // bl GF_AssertFail
    // mov r1, #0xe0
    // add r0, r4, #0
    // mul r1, r6
    // bl Heap_Alloc
    // ldr r7, _02023774 ; =_021D2208
    // mov r4, #0
    // str r0, [r7]
    // str r6, [r7, #4]
    // cmp r6, #0
    // ble _02023772
    // add r5, r4, #0
    // ldr r0, [r7]
    // add r0, r0, r5
    // bl sub_02023694
    // add r4, r4, #1
    // add r5, #0xe0
    // cmp r4, r6
    // blt _02023762
    // pop {r3, r4, r5, r6, r7, pc}
    // _02023774: .word _021D2208
    // TODO: decompile
}


void sub_02023778(void) {
    // push {r4, r5, r6, lr}
    // ldr r6, _020237AC ; =_021D2208
    // mov r4, #0
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // ble _02023798
    // add r5, r4, #0
    // ldr r0, [r6]
    // add r0, r0, r5
    // bl sub_02023874
    // ldr r0, [r6, #4]
    // add r4, r4, #1
    // add r5, #0xe0
    // cmp r4, r0
    // blt _02023786
    // ldr r0, _020237AC ; =_021D2208
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _020237AC ; =_021D2208
    // mov r1, #0
    // str r1, [r0]
    // str r1, [r0, #4]
    // pop {r4, r5, r6, pc}
    // nop
    // _020237AC: .word _021D2208
    // TODO: decompile
}


void sub_020237B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r6, _020237E8 ; =_021D2208
    // mov r4, #0
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // ble _020237E4
    // add r5, r4, #0
    // mov r7, #2
    // ldr r0, [r6]
    // add r0, r0, r5
    // ldrb r1, [r0, #1]
    // cmp r1, #1
    // bne _020237CE
    // bl sub_02023950
    // ldr r0, [r6]
    // add r1, r0, r5
    // ldrb r0, [r1, #3]
    // cmp r0, #1
    // bne _020237DA
    // strb r7, [r1, #3]
    // ldr r0, [r6, #4]
    // add r4, r4, #1
    // add r5, #0xe0
    // cmp r4, r0
    // blt _020237C0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020237E8: .word _021D2208
    // TODO: decompile
}


void sub_020237EC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0202391C
    // add r4, r0, #0
    // bne _02023800
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // ldr r2, [r5]
    // mov r1, #0xc4
    // ldr r0, [r5, #4]
    // mul r1, r2
    // bl Heap_Alloc
    // str r0, [r4, #4]
    // ldr r0, [r5]
    // str r0, [r4, #8]
    // add r0, r4, #0
    // add r0, #0xc
    // bl sub_020236BC
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0xc
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xcc
    // str r1, [r0]
    // ldr r1, [r5]
    // ldr r0, [r5, #4]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r1, r4, #0
    // add r1, #0xd0
    // str r0, [r1]
    // add r0, r4, #0
    // bl sub_02024248
    // ldr r0, [r5, #4]
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r1, r4, #0
    // add r1, #0xd8
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // ldr r1, [r5, #4]
    // mov r2, #4
    // bl HeapExp_FndInitAllocator
    // ldr r0, [r5]
    // ldr r1, [r5, #4]
    // bl sub_0202068C
    // add r1, r4, #0
    // add r1, #0xdc
    // str r0, [r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02023874(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _02023882
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, pc}
    // ldrb r1, [r4]
    // cmp r1, #0
    // beq _020238B6
    // bl sub_020238BC
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // add r0, r4, #0
    // add r0, #0xd0
    // ldr r0, [r0]
    // bl Heap_Free
    // add r0, r4, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // bl Heap_Free
    // add r0, r4, #0
    // add r0, #0xdc
    // ldr r0, [r0]
    // bl sub_020206C8
    // add r0, r4, #0
    // bl sub_02023694
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020238BC(void) {
    // push {r3, r4, r5, lr}
    // cmp r0, #0
    // bne _020238CC
    // bne _020238C8
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r0]
    // cmp r1, #0
    // beq _020238F2
    // add r1, r0, #0
    // add r1, #0xc8
    // add r4, r0, #0
    // ldr r1, [r1]
    // add r4, #0xc
    // cmp r1, r4
    // beq _020238F2
    // add r0, r1, #0
    // add r0, #0xbc
    // ldr r5, [r0]
    // add r0, r1, #0
    // bl sub_02023DA4
    // add r1, r5, #0
    // cmp r5, r4
    // bne _020238E0
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020238F8(void) {
    GF_AssertFail(0, 1);
}


void sub_02023910(void) {
    // ldrb r1, [r0, #3]
    // cmp r1, #2
    // bne _0202391A
    // mov r1, #0
    // strb r1, [r0, #3]
    // bx lr
    // TODO: decompile
}


void sub_0202391C(void) {
    // push {r3, r4}
    // ldr r0, _0202394C ; =_021D2208
    // mov r1, #0
    // ldr r3, [r0, #4]
    // cmp r3, #0
    // ble _02023944
    // ldr r4, [r0]
    // add r2, r4, #0
    // ldrb r0, [r2]
    // cmp r0, #0
    // bne _0202393C
    // mov r0, #0xe0
    // mul r0, r1
    // add r0, r4, r0
    // pop {r3, r4}
    // bx lr
    // add r1, r1, #1
    // add r2, #0xe0
    // cmp r1, r3
    // blt _0202392C
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // nop
    // _0202394C: .word _021D2208
    // TODO: decompile
}


void sub_02023950(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // bne _0202395C
    // bl GF_AssertFail
    // add r0, sp, #0
    // bl MTX_Identity33_
    // add r0, r5, #0
    // add r0, #0xc8
    // ldr r4, [r0]
    // add r5, #0xc
    // cmp r4, r5
    // beq _020239CC
    // add r6, sp, #0
    // add r0, r4, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _020239C4
    // ldr r2, [r4, #0x20]
    // cmp r2, #0
    // beq _02023986
    // ldr r1, [r4, #0x1c]
    // add r0, r4, #0
    // blx r2
    // add r0, r4, #0
    // bl sub_020243FC
    // add r0, r4, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #3
    // bne _0202399E
    // add r0, r4, #0
    // bl sub_02023FEC
    // b _020239A8
    // cmp r0, #2
    // bne _020239A8
    // add r0, r4, #0
    // bl sub_02023FC0
    // ldr r2, [r4, #0x18]
    // cmp r2, #0
    // bne _020239B0
    // add r2, r6, #0
    // add r0, r4, #0
    // add r3, r4, #0
    // add r0, #0x30
    // add r1, r4, #0
    // add r3, #0xc
    // bl GF3dRender_DrawModel
    // add r0, r4, #0
    // bl sub_0202441C
    // add r4, #0xbc
    // ldr r4, [r4]
    // cmp r4, r5
    // bne _02023970
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020239D0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r6, [r5, #0x28]
    // add r4, r1, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_02023C04
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023C20
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl sub_02023C9C
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02023A06
    // add r6, #0xc
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_020242E4
    // add r0, r5, #0
    // mov r1, #2
    // add r0, #0xb4
    // strb r1, [r0]
    // ldr r0, [r4, #8]
    // mov r1, #0
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // add r0, #0xb6
    // strh r1, [r0]
    // add r5, #0xb8
    // str r1, [r5]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02023A20(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r6, [r5, #0x28]
    // add r4, r1, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_02023C04
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _02023A4A
    // add r0, r5, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    // bl sub_02023B70
    // add r0, r5, #0
    // ldr r1, [r4, #0x1c]
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r5, #0
    // ldr r1, [r4, #0x20]
    // add r0, #0x98
    // str r1, [r0]
    // add r0, r5, #0
    // ldr r1, [r4, #0x24]
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023CF0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023D24
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02023A86
    // add r6, #0xc
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_020242E4
    // add r0, r5, #0
    // mov r1, #3
    // add r0, #0xb4
    // strb r1, [r0]
    // ldr r0, [r4, #8]
    // mov r1, #0
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // add r0, #0xb6
    // strh r1, [r0]
    // add r5, #0xb8
    // str r1, [r5]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02023AA0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl NNS_G3dTexGetRequiredSize
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl NNS_G3dTex4x4GetRequiredSize
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl NNS_G3dPlttGetRequiredSize
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _02023ADE
    // ldr r3, _02023B30 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #0
    // ldr r3, [r3]
    // add r2, r1, #0
    // blx r3
    // str r0, [r4]
    // cmp r0, #0
    // bne _02023AE2
    // bl GF_AssertFail
    // b _02023AE2
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02023AFE
    // ldr r3, _02023B30 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #1
    // ldr r3, [r3]
    // mov r2, #0
    // blx r3
    // str r0, [r6]
    // cmp r0, #0
    // bne _02023B02
    // bl GF_AssertFail
    // b _02023B02
    // mov r0, #0
    // str r0, [r6]
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _02023B26
    // ldr r3, _02023B34 ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r1, #2
    // ldrh r2, [r5, #0x20]
    // lsl r1, r1, #0xe
    // ldr r3, [r3]
    // and r1, r2
    // mov r2, #0
    // blx r3
    // str r0, [r7]
    // cmp r0, #0
    // bne _02023B2A
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [r7]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02023B30: .word NNS_GfdDefaultFuncAllocTexVram
    // _02023B34: .word NNS_GfdDefaultFuncAllocPlttVram
    // TODO: decompile
}


void sub_02023B38(void) {
    NNS_G3dTexReleaseTexKey();
    NNS_G3dPlttReleasePlttKey(r5);
}


void sub_02023B4C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r2]
    // ldr r2, [r3]
    // add r5, r0, #0
    // bl NNS_G3dTexSetTexKey
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl NNS_G3dPlttSetPlttKey
    // add r0, r4, #0
    // add r1, r5, #0
    // bl NNS_G3dBindMdlSet
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02023B70(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, [r0]
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r0, #0
    // beq _02023B82
    // ldr r1, _02023B9C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02023B8E
    // ldr r1, _02023B9C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r1, [r1]
    // blx r1
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02023B9A
    // ldr r1, _02023BA0 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r1, [r1]
    // blx r1
    // pop {r3, r4, r5, pc}
    // _02023B9C: .word NNS_GfdDefaultFuncFreeTexVram
    // _02023BA0: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}


void sub_02023BA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r5, r1, #0
    // cmp r4, #0
    // beq _02023BB4
    // cmp r5, #0
    // bne _02023BBA
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl NNS_G3dTexGetRequiredSize
    // str r0, [sp]
    // add r0, r4, #0
    // bl NNS_G3dTex4x4GetRequiredSize
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl NNS_G3dPlttGetRequiredSize
    // add r4, r0, #0
    // add r0, r5, #0
    // bl NNS_G3dTexGetRequiredSize
    // add r6, r0, #0
    // add r0, r5, #0
    // bl NNS_G3dTex4x4GetRequiredSize
    // add r7, r0, #0
    // add r0, r5, #0
    // bl NNS_G3dPlttGetRequiredSize
    // ldr r1, [sp]
    // cmp r1, r6
    // bne _02023BF6
    // ldr r1, [sp, #4]
    // cmp r1, r7
    // bne _02023BF6
    // cmp r4, r0
    // beq _02023BFC
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02023C04(void) {
    sub_02020738(0);
}


void sub_02023C20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x8c
    // ldr r4, [r0]
    // add r0, r1, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // add r1, #0x88
    // add r2, #0x8c
    // bl sub_02024328
    // add r1, r5, #0
    // add r1, #0x84
    // str r0, [r1]
    // add r1, r5, #0
    // add r1, #0x88
    // add r0, r5, #0
    // ldr r1, [r1]
    // add r0, #0x30
    // bl NNS_G3dRenderObjInit
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #3
    // beq _02023C62
    // add r1, r5, #0
    // add r1, #0x8c
    // ldr r1, [r1]
    // add r0, r4, #0
    // bl sub_02023BA4
    // b _02023C64
    // mov r0, #0
    // cmp r0, #0
    // bne _02023C98
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _02023C82
    // add r0, r5, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    // bl sub_02023B70
    // add r0, r5, #0
    // add r0, #0x8c
    // add r1, r5, #0
    // add r2, r5, #0
    // add r5, #0x9c
    // ldr r0, [r0]
    // add r1, #0x94
    // add r2, #0x98
    // add r3, r5, #0
    // bl sub_02023AA0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02023C9C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r2, #0
    // add r6, r0, #0
    // add r5, r1, #0
    // add r0, r4, #0
    // bl sub_02024374
    // add r1, r5, #0
    // add r1, #0x90
    // add r3, r5, #0
    // add r3, #0xa0
    // str r0, [r1]
    // add r4, #0xc
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // add r1, r2, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // add r2, r5, #0
    // add r3, r5, #0
    // str r0, [sp, #4]
    // add r6, #0xdc
    // add r2, #0x90
    // add r3, #0x94
    // ldr r0, [r6]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // bl sub_020206E0
    // add r5, #0xb0
    // str r0, [r5]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02023CF0(void) {
    sub_02024328(r1, r0, r0);
    NNS_G3dRenderObjInit(r5, r5);
    sub_02024374(r4);
}


void sub_02023D24(void) {
    // push {r3, r4}
    // add r4, r0, #0
    // add r2, r4, #0
    // add r3, r1, #0
    // add r3, #0xc
    // add r2, #0xa0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0
    // add r4, #0xb0
    // str r0, [r4]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02023D44(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r6, [r5]
    // cmp r6, #0
    // bne _02023D52
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r6, #0
    // bl sub_02024280
    // add r4, r0, #0
    // bne _02023D60
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r3, r5, #0
    // str r6, [r4, #0x28]
    // add r3, #8
    // ldmia r3!, {r0, r1}
    // add r2, r4, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r3, r5, #0
    // str r0, [r2]
    // add r3, #0x14
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xc
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #0
    // str r0, [r2]
    // add r0, r4, #0
    // add r0, #0xb6
    // strh r1, [r0]
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xb4
    // strb r1, [r0]
    // ldr r1, [r5, #4]
    // add r0, r4, #0
    // bl sub_02024380
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02023DA4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bne _02023DAE
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02023DBC
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // ldr r4, [r5, #0x28]
    // cmp r0, #0
    // bne _02023DCC
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl sub_02024308
    // add r0, r5, #0
    // add r0, #0xb4
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _02023DEC
    // add r0, r5, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // add r0, #0x94
    // add r1, #0x98
    // add r2, #0x9c
    // bl sub_02023B70
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02023C04
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_020242AC
    // mov r0, #1
    // strb r0, [r4, #3]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02023E04(void) {
    // push {r3, r4}
    // add r4, r0, #0
    // str r1, [r4]
    // str r2, [r4, #4]
    // str r3, [r4, #8]
    // ldr r3, [sp, #8]
    // add r2, r4, #0
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0xc]
    // str r0, [r4, #0x1c]
    // ldr r0, [sp, #0x10]
    // str r0, [r4, #0x20]
    // ldr r0, [sp, #0x14]
    // str r0, [r4, #0x24]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02023E2C(void) {
    // push {r3, r4}
    // add r4, r0, #0
    // str r1, [r4]
    // str r2, [r4, #4]
    // str r3, [r4, #8]
    // ldr r3, [sp, #8]
    // add r2, r4, #0
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // str r0, [r4, #0x20]
    // str r0, [r4, #0x24]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02023E50(void) {
    GF_AssertFail();
}


void sub_02023E68(void) {
    GF_AssertFail();
}


void sub_02023E78(void) {
    GF_AssertFail();
}


void sub_02023E94(void) {
    GF_AssertFail();
}


void sub_02023EA4(void) {
    GF_AssertFail();
}


void sub_02023EB8(void) {
    GF_AssertFail();
}


void sub_02023EC8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0
    // bne _02023ED6
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02024380
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02023EE0(void) {
    GF_AssertFail();
}


void sub_02023EF4(void) {
    GF_AssertFail();
}


void sub_02023F04(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0
    // bne _02023F12
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_020243A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02023F1C(void) {
    GF_AssertFail();
}


void sub_02023F30(void) {
    GF_AssertFail();
}


void sub_02023F40(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0
    // bne _02023F4E
    // bl GF_AssertFail
    // add r1, r5, #0
    // add r1, #0xb6
    // ldrh r1, [r1]
    // add r0, r5, #0
    // bl sub_02024394
    // add r1, r5, #0
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // add r5, #0xb8
    // add r0, r0, r4
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02023F70(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _02023F7A
    // bl GF_AssertFail
    // add r1, r4, #0
    // add r1, #0xb6
    // ldrh r1, [r1]
    // add r0, r4, #0
    // bl sub_02024394
    // add r4, #0xb8
    // ldr r1, [r4]
    // sub r0, r1, r0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02023F90(void) {
    GF_AssertFail();
}


void sub_02023FA0(void) {
    GF_AssertFail();
}


void sub_02023FB0(void) {
    GF_AssertFail();
}


void sub_02023FC0(void) {
    sub_02020764();
}


void sub_02023FDC(void) {
    // add r0, #0x88
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02023FE4(void) {
    ((u32*)r0)[0x1c] = r2;
    ((u32*)r0)[0x20] = r1;
}


void sub_02023FEC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0xb8
    // ldr r1, [r1]
    // add r0, #0xa0
    // lsl r1, r1, #4
    // lsr r1, r1, #0x10
    // bl sub_02026DE0
    // add r2, sp, #0
    // strb r0, [r2]
    // lsr r0, r0, #8
    // strb r0, [r2, #1]
    // ldrb r0, [r2]
    // add r1, r4, #0
    // add r1, #0x90
    // strb r0, [r2, #2]
    // ldrb r0, [r2, #1]
    // strb r0, [r2, #3]
    // add r0, r4, #0
    // add r0, #0x88
    // ldrb r2, [r2, #2]
    // ldr r0, [r0]
    // ldr r1, [r1]
    // bl sub_0202403C
    // add r0, r4, #0
    // add r2, sp, #0
    // add r0, #0x88
    // add r4, #0x90
    // ldrb r2, [r2, #3]
    // ldr r0, [r0]
    // ldr r1, [r4]
    // bl sub_02024140
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_0202403C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // cmp r0, #0
    // beq _0202404C
    // ldr r3, [r0, #8]
    // cmp r3, #0
    // beq _0202404C
    // add r6, r0, r3
    // b _0202404E
    // mov r6, #0
    // ldrh r0, [r6]
    // add r4, r6, r0
    // cmp r1, #0
    // beq _0202407C
    // add r0, r1, #0
    // add r0, #0x3c
    // beq _02024078
    // add r3, r1, #0
    // add r3, #0x3d
    // ldrb r3, [r3]
    // cmp r2, r3
    // bhs _02024078
    // add r1, #0x42
    // ldrh r1, [r1]
    // add r3, r0, r1
    // ldrh r0, [r0, r1]
    // add r3, r3, #4
    // add r1, r0, #0
    // mul r1, r2
    // add r0, r3, r1
    // b _0202407E
    // mov r0, #0
    // b _0202407E
    // mov r0, #0
    // ldr r0, [r0]
    // mov r5, #0
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // ble _020240C0
    // cmp r4, #0
    // beq _020240A6
    // ldrb r0, [r4, #1]
    // cmp r5, r0
    // bhs _020240A6
    // ldrh r0, [r4, #6]
    // add r1, r4, r0
    // ldrh r0, [r4, r0]
    // add r2, r1, #4
    // add r1, r0, #0
    // mul r1, r5
    // add r1, r2, r1
    // b _020240A8
    // mov r1, #0
    // ldrb r2, [r1, #3]
    // mov r0, #1
    // tst r0, r2
    // beq _020240B8
    // add r0, r6, #0
    // add r2, r7, #0
    // bl sub_020240C4
    // ldrb r0, [r4, #1]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0202408C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020240C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // ldrh r0, [r0]
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, r1, #0
    // ldrb r0, [r0, #2]
    // mov r6, #0
    // cmp r0, #0
    // ble _02024136
    // add r7, r5, #4
    // ldr r0, [sp, #8]
    // cmp r5, #0
    // ldrb r0, [r0, r6]
    // beq _0202410E
    // cmp r7, #0
    // beq _02024102
    // ldrb r1, [r5, #5]
    // cmp r0, r1
    // bhs _02024102
    // ldrh r1, [r5, #0xa]
    // add r2, r7, r1
    // ldrh r1, [r7, r1]
    // add r2, r2, #4
    // mul r0, r1
    // add r0, r2, r0
    // b _02024104
    // mov r0, #0
    // cmp r0, #0
    // beq _0202410E
    // ldr r0, [r0]
    // add r4, r5, r0
    // b _02024110
    // mov r4, #0
    // ldr r0, [r4, #0x14]
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // ldr r0, _0202413C ; =0x0000FFFF
    // cmp r1, r0
    // bls _02024124
    // bl GF_AssertFail
    // ldr r1, [r4, #0x14]
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r1, r0
    // str r0, [r4, #0x14]
    // ldr r0, [sp]
    // ldrb r0, [r0, #2]
    // cmp r6, r0
    // blt _020240E2
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0202413C: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02024140(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // cmp r0, #0
    // beq _02024150
    // ldr r3, [r0, #8]
    // cmp r3, #0
    // beq _02024150
    // add r6, r0, r3
    // b _02024152
    // mov r6, #0
    // ldrh r0, [r6, #2]
    // add r4, r6, r0
    // cmp r1, #0
    // beq _0202417E
    // ldrh r0, [r1, #0x34]
    // cmp r0, #0
    // beq _0202417E
    // add r0, r1, r0
    // beq _0202417A
    // ldrb r1, [r0, #1]
    // cmp r2, r1
    // bhs _0202417A
    // ldrh r1, [r0, #6]
    // add r3, r0, r1
    // ldrh r0, [r0, r1]
    // add r3, r3, #4
    // add r1, r0, #0
    // mul r1, r2
    // add r0, r3, r1
    // b _02024180
    // mov r0, #0
    // b _02024180
    // mov r0, #0
    // ldrh r1, [r0, #2]
    // ldrh r7, [r0]
    // mov r0, #1
    // tst r0, r1
    // bne _0202418C
    // lsr r7, r7, #1
    // ldrb r0, [r4, #1]
    // mov r5, #0
    // cmp r0, #0
    // bls _020241C8
    // cmp r4, #0
    // beq _020241AE
    // ldrb r0, [r4, #1]
    // cmp r5, r0
    // bhs _020241AE
    // ldrh r0, [r4, #6]
    // add r1, r4, r0
    // ldrh r0, [r4, r0]
    // add r2, r1, #4
    // add r1, r0, #0
    // mul r1, r5
    // add r1, r2, r1
    // b _020241B0
    // mov r1, #0
    // ldrb r2, [r1, #3]
    // mov r0, #1
    // tst r0, r2
    // beq _020241C0
    // add r0, r6, #0
    // add r2, r7, #0
    // bl sub_020241CC
    // ldrb r0, [r4, #1]
    // add r5, r5, #1
    // cmp r5, r0
    // blo _02024194
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020241CC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // ldrh r0, [r0]
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, r1, #0
    // ldrb r0, [r0, #2]
    // mov r6, #0
    // cmp r0, #0
    // bls _0202423E
    // add r7, r5, #4
    // ldr r0, [sp, #8]
    // cmp r5, #0
    // ldrb r0, [r0, r6]
    // beq _02024216
    // cmp r7, #0
    // beq _0202420A
    // ldrb r1, [r5, #5]
    // cmp r0, r1
    // bhs _0202420A
    // ldrh r1, [r5, #0xa]
    // add r2, r7, r1
    // ldrh r1, [r7, r1]
    // add r2, r2, #4
    // mul r0, r1
    // add r0, r2, r0
    // b _0202420C
    // mov r0, #0
    // cmp r0, #0
    // beq _02024216
    // ldr r0, [r0]
    // add r4, r5, r0
    // b _02024218
    // mov r4, #0
    // ldrh r1, [r4, #0x1c]
    // ldr r0, _02024244 ; =0x00001FFF
    // and r1, r0
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // ldr r0, _02024244 ; =0x00001FFF
    // cmp r1, r0
    // bls _0202422C
    // bl GF_AssertFail
    // ldrh r1, [r4, #0x1c]
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // add r0, r1, r0
    // strh r0, [r4, #0x1c]
    // ldr r0, [sp]
    // ldrb r0, [r0, #2]
    // cmp r6, r0
    // blo _020241EA
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02024244: .word 0x00001FFF
    // TODO: decompile
}


void sub_02024248(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // mov r7, #0
    // cmp r0, #0
    // ble _02024278
    // add r4, r7, #0
    // add r6, r7, #0
    // ldr r0, [r5, #4]
    // add r0, r0, r4
    // bl sub_020236BC
    // ldr r0, [r5, #4]
    // add r7, r7, #1
    // add r1, r0, r4
    // add r0, r5, #0
    // add r0, #0xd0
    // ldr r0, [r0]
    // add r4, #0xc4
    // str r1, [r0, r6]
    // ldr r0, [r5, #8]
    // add r6, r6, #4
    // cmp r7, r0
    // blt _02024258
    // mov r0, #0
    // add r5, #0xd4
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02024280(void) {
    // add r1, r0, #0
    // add r1, #0xd4
    // ldr r3, [r1]
    // ldr r1, [r0, #8]
    // cmp r3, r1
    // blt _02024290
    // mov r0, #0
    // bx lr
    // add r1, r0, #0
    // add r1, #0xd0
    // ldr r2, [r1]
    // lsl r1, r3, #2
    // ldr r2, [r2, r1]
    // add r1, r0, #0
    // add r1, #0xd4
    // ldr r1, [r1]
    // add r0, #0xd4
    // add r1, r1, #1
    // str r1, [r0]
    // add r0, r2, #0
    // bx lr
    // TODO: decompile
}


void sub_020242AC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // add r4, r1, #0
    // cmp r0, #0
    // bgt _020242BE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_020236BC
    // add r0, r5, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, r5, #0
    // add r0, #0xd0
    // add r5, #0xd4
    // ldr r1, [r0]
    // ldr r0, [r5]
    // lsl r0, r0, #2
    // str r4, [r1, r0]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020242E4(void) {
    // add r2, r0, #0
    // add r2, #0xc0
    // ldr r3, [r2]
    // add r2, r1, #0
    // add r2, #0xc0
    // str r3, [r2]
    // add r2, r0, #0
    // add r2, #0xc0
    // ldr r2, [r2]
    // add r2, #0xbc
    // str r1, [r2]
    // add r2, r1, #0
    // add r2, #0xbc
    // str r0, [r2]
    // add r0, #0xc0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02024308(void) {
    // add r1, r0, #0
    // add r1, #0xbc
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #0xc0
    // ldr r1, [r1]
    // add r1, #0xbc
    // str r2, [r1]
    // add r1, r0, #0
    // add r0, #0xbc
    // add r1, #0xc0
    // ldr r0, [r0]
    // ldr r1, [r1]
    // add r0, #0xc0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02024328(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r1, #0
    // add r5, r2, #0
    // bl sub_0202443C
    // add r7, r0, #0
    // bl NNS_G3dGetMdlSet
    // add r4, r0, #0
    // beq _0202435E
    // add r1, r4, #0
    // add r1, #8
    // beq _02024352
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // bls _02024352
    // ldrh r0, [r4, #0xe]
    // add r0, r1, r0
    // add r0, r0, #4
    // b _02024354
    // mov r0, #0
    // cmp r0, #0
    // beq _0202435E
    // ldr r0, [r0]
    // add r0, r4, r0
    // b _02024360
    // mov r0, #0
    // str r0, [r6]
    // cmp r5, #0
    // beq _0202436E
    // add r0, r7, #0
    // bl NNS_G3dGetTex
    // str r0, [r5]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02024374(void) {
    sub_0202443C();
}


void sub_02024380(void) {
    // push {r3, lr}
    // ldr r2, [r1, #0x1c]
    // cmp r2, #0
    // bne _0202438E
    // bl sub_020239D0
    // pop {r3, pc}
    // bl sub_02023A20
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02024394(void) {
    sub_02024454();
}


void sub_020243A4(void) {
    sub_02024454(*((u32*)(r0 + 0x2c)), r0);
    sub_020243C4(r5, r4);
}


void sub_020243C4(void) {
    // push {r3, r4, r5, r6}
    // ldr r4, [r0]
    // ldr r6, [r1]
    // lsl r4, r4, #0xc
    // mov r3, #0
    // cmp r4, r6
    // bgt _020243DA
    // ldr r5, [r0, #4]
    // lsl r5, r5, #0xc
    // cmp r5, r6
    // bge _020243DE
    // str r4, [r1]
    // b _020243F6
    // add r2, r6, r2
    // cmp r5, r2
    // bge _020243F4
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _020243EE
    // str r4, [r1]
    // b _020243F6
    // mov r3, #1
    // str r5, [r1]
    // b _020243F6
    // str r2, [r1]
    // add r0, r3, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}


void sub_020243FC(void) {
    // push {r3, lr}
    // add r3, r0, #0
    // add r0, #0x9c
    // str r0, [sp]
    // add r0, r3, #0
    // add r1, r3, #0
    // add r2, r3, #0
    // add r0, #0x8c
    // add r1, #0x84
    // ldr r0, [r0]
    // ldr r1, [r1]
    // add r2, #0x94
    // add r3, #0x98
    // bl sub_02023B4C
    // pop {r3, pc}
    // TODO: decompile
}


void sub_0202441C(void) {
    NNS_G3dReleaseMdlSet();
    sub_02023B38();
}


void sub_0202443C(void) {
    // cmp r1, #0
    // beq _02024446
    // cmp r1, #1
    // beq _0202444A
    // b _0202444E
    // ldr r0, [r0]
    // bx lr
    // ldr r0, [r0, #4]
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02024454(void) {
    // mov r2, #0xc
    // mul r2, r1
    // add r0, r0, r2
    // bx lr
    // TODO: decompile
}

