/* Decompiled from asm/unk_02014DA0.s */
#include "global.h"

void sub_02014DA0(void) {
    // mov r1, #0
    // ldr r2, _02014DB0 ; =_021D10A8
    // add r0, r1, #0
    // add r1, r1, #1
    // stmia r2!, {r0}
    // cmp r1, #0x10
    // blt _02014DA6
    // bx lr
    // _02014DB0: .word _021D10A8
    // TODO: decompile
}



void sub_02014DB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r1, [sp, #8]
    // ldr r1, _02014EA8 ; =_021D10A8
    // add r7, r0, #0
    // add r6, r2, #0
    // str r3, [sp, #0xc]
    // mov r5, #0
    // ldr r0, [r1]
    // cmp r0, #0
    // beq _02014DD2
    // add r5, r5, #1
    // add r1, r1, #4
    // cmp r5, #0x10
    // blt _02014DC4
    // cmp r5, #0x10
    // blt _02014DDC
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x2c]
    // mov r1, #0xdc
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02014DEC
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xdc
    // bl memset
    // add r2, r4, #0
    // ldr r0, [sp, #8]
    // str r7, [r4, #0x18]
    // ldr r3, _02014EAC ; =_020F6090
    // str r0, [r4, #0x1c]
    // ldmia r3!, {r0, r1}
    // add r2, #0x34
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r3, _02014EB0 ; =_020F6078
    // str r0, [r2]
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x40
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r3, _02014EB4 ; =_020F6084
    // str r0, [r2]
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x4c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #0
    // str r0, [r2]
    // ldr r2, [sp, #0xc]
    // add r0, r6, #0
    // bl memset
    // ldr r0, [sp, #0xc]
    // str r6, [r4, #0xc]
    // str r6, [r4, #0x10]
    // add r0, r6, r0
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // add r0, #0xda
    // strb r5, [r0]
    // ldr r0, _02014EA8 ; =_021D10A8
    // lsl r5, r5, #2
    // str r4, [r0, r5]
    // ldr r0, [sp, #0x28]
    // cmp r0, #1
    // bne _02014E80
    // ldr r0, [sp, #0x2c]
    // bl Camera_New
    // str r0, [r4, #0x20]
    // mov r3, #0
    // str r3, [r4, #0x24]
    // str r3, [r4, #0x28]
    // mov r0, #2
    // str r3, [r4, #0x2c]
    // lsl r0, r0, #0xc
    // strh r0, [r4, #0x30]
    // str r3, [sp]
    // ldr r0, [r4, #0x20]
    // ldr r1, _02014EAC ; =_020F6090
    // str r0, [sp, #4]
    // ldrh r2, [r4, #0x30]
    // ldr r0, _02014EB4 ; =_020F6084
    // bl Camera_Init_FromTargetAndPos
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xdb
    // strb r1, [r0]
    // ldr r0, [r4, #0x20]
    // bl Camera_SetStaticPtr
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0x3f
    // str r0, [sp, #4]
    // ldr r0, _02014EB8 ; =_020F609C
    // mov r1, #0x14
    // ldr r0, [r0, r5]
    // mov r2, #0xc8
    // mov r3, #5
    // bl SPL_Init
    // str r0, [r4]
    // ldr r1, _02014EB0 ; =_020F6078
    // add r0, r4, #0
    // bl sub_020154E4
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02014EA8: .word _021D10A8
    // _02014EAC: .word _020F6090
    // _02014EB0: .word _020F6078
    // _02014EB4: .word _020F6084
    // _02014EB8: .word _020F609C
    // TODO: decompile
}



void sub_02014EBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_020154B8
    // add r0, r5, #0
    // add r0, #0xd8
    // ldrb r1, [r0]
    // mov r0, #1
    // tst r0, r1
    // beq _02014EDA
    // add r0, r5, #0
    // add r0, #0x58
    // bl NNS_GfdSetFrmTexVramState
    // b _02014EFA
    // mov r0, #2
    // tst r0, r1
    // beq _02014EFA
    // mov r6, #0
    // add r4, r5, #0
    // add r7, r6, #0
    // ldr r0, [r4, #0x58]
    // cmp r0, #0
    // beq _02014EF2
    // bl NNS_GfdFreeLnkTexVram
    // str r7, [r4, #0x58]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #0x10
    // blt _02014EE6
    // add r0, r5, #0
    // add r0, #0xd8
    // ldrb r1, [r0]
    // mov r0, #4
    // tst r0, r1
    // beq _02014F10
    // add r0, r5, #0
    // add r0, #0x98
    // bl NNS_GfdSetFrmPlttVramState
    // b _02014F38
    // mov r0, #8
    // tst r0, r1
    // beq _02014F38
    // mov r6, #0
    // add r4, r5, #0
    // add r7, r6, #0
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02014F30
    // bl NNS_GfdFreeLnkPlttVram
    // add r0, r4, #0
    // add r0, #0x98
    // str r7, [r0]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #0x10
    // blt _02014F1C
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xd8
    // strb r1, [r0]
    // str r1, [r5, #8]
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _02014F50
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r5, #4]
    // ldr r2, _02014F80 ; =_021D10A8
    // mov r1, #0
    // ldr r0, [r2]
    // cmp r0, r5
    // bne _02014F64
    // ldr r0, _02014F80 ; =_021D10A8
    // mov r2, #0
    // lsl r1, r1, #2
    // str r2, [r0, r1]
    // b _02014F6C
    // add r1, r1, #1
    // add r2, r2, #4
    // cmp r1, #0x10
    // blt _02014F54
    // ldr r0, [r5, #0x20]
    // cmp r0, #0
    // beq _02014F76
    // bl Camera_Delete
    // add r0, r5, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02014F80: .word _021D10A8
    // TODO: decompile
}



void sub_02014F84(void) {
}



void sub_02014FA4(void) {
    // push {r4, lr}
    // ldr r1, _02014FCC ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #8]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02014FBC
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02014FC8
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02014FCC: .word _021D10A0
    // TODO: decompile
}



void sub_02014FD0(void) {
    // push {r4, lr}
    // ldr r1, _02014FF8 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0xc]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02014FE8
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02014FF4
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02014FF8: .word _021D10A0
    // TODO: decompile
}



void sub_02014FFC(void) {
    // push {r4, lr}
    // ldr r1, _02015024 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x10]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02015014
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02015020
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015024: .word _021D10A0
    // TODO: decompile
}



void sub_02015028(void) {
    // push {r4, lr}
    // ldr r1, _02015050 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x14]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02015040
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _0201504C
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015050: .word _021D10A0
    // TODO: decompile
}



void sub_02015054(void) {
    // push {r4, lr}
    // ldr r1, _0201507C ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x18]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _0201506C
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02015078
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _0201507C: .word _021D10A0
    // TODO: decompile
}



void sub_02015080(void) {
    // push {r4, lr}
    // ldr r1, _020150A8 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x1c]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02015098
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _020150A4
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _020150A8: .word _021D10A0
    // TODO: decompile
}



void sub_020150AC(void) {
    // push {r4, lr}
    // ldr r1, _020150D4 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x20]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _020150C4
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _020150D0
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _020150D4: .word _021D10A0
    // TODO: decompile
}



void sub_020150D8(void) {
    // push {r4, lr}
    // ldr r1, _02015100 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x24]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _020150F0
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _020150FC
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015100: .word _021D10A0
    // TODO: decompile
}



void sub_02015104(void) {
    // push {r4, lr}
    // ldr r1, _0201512C ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x28]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _0201511C
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02015128
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _0201512C: .word _021D10A0
    // TODO: decompile
}



void sub_02015130(void) {
    // push {r4, lr}
    // ldr r1, _02015158 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x2c]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02015148
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02015154
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015158: .word _021D10A0
    // TODO: decompile
}



void sub_0201515C(void) {
    // push {r4, lr}
    // ldr r1, _02015184 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x30]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02015174
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02015180
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015184: .word _021D10A0
    // TODO: decompile
}



void sub_02015188(void) {
    // push {r4, lr}
    // ldr r1, _020151B0 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x34]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _020151A0
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _020151AC
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _020151B0: .word _021D10A0
    // TODO: decompile
}



void sub_020151B4(void) {
    // push {r4, lr}
    // ldr r1, _020151DC ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x38]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _020151CC
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _020151D8
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _020151DC: .word _021D10A0
    // TODO: decompile
}



void sub_020151E0(void) {
    // push {r4, lr}
    // ldr r1, _02015208 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x3c]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _020151F8
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02015204
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015208: .word _021D10A0
    // TODO: decompile
}



void sub_0201520C(void) {
    // push {r4, lr}
    // ldr r1, _02015234 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x40]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02015224
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _02015230
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015234: .word _021D10A0
    // TODO: decompile
}



void sub_02015238(void) {
    // push {r4, lr}
    // ldr r1, _02015260 ; =_021D10A0
    // mov r2, #3
    // ldr r1, [r1, #0x44]
    // ldr r4, [r1, #0x10]
    // add r0, r4, r0
    // add r3, r0, #0
    // and r3, r2
    // beq _02015250
    // mov r2, #4
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1, #0x10]
    // ldr r1, [r1, #0x14]
    // cmp r0, r1
    // blo _0201525C
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // _02015260: .word _021D10A0
    // TODO: decompile
}



void sub_02015264(void) {
}



void sub_0201526C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r1, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // cmp r0, #0
    // bne _02015280
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _0201528A
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0xd8
    // strb r4, [r0]
    // mov r0, #1
    // tst r0, r4
    // beq _020152A0
    // add r0, r5, #0
    // add r0, #0x58
    // bl NNS_GfdGetFrmTexVramState
    // b _020152B6
    // mov r0, #2
    // tst r0, r4
    // beq _020152B6
    // mov r1, #0
    // add r2, r5, #0
    // add r0, r1, #0
    // add r1, r1, #1
    // str r0, [r2, #0x58]
    // add r2, r2, #4
    // cmp r1, #0x10
    // blt _020152AC
    // mov r0, #4
    // tst r0, r4
    // beq _020152C6
    // add r0, r5, #0
    // add r0, #0x98
    // bl NNS_GfdGetFrmPlttVramState
    // b _020152E0
    // mov r0, #8
    // tst r0, r4
    // beq _020152E0
    // mov r2, #0
    // add r3, r5, #0
    // add r1, r2, #0
    // add r0, r3, #0
    // add r0, #0x98
    // add r2, r2, #1
    // add r3, r3, #4
    // str r1, [r0]
    // cmp r2, #0x10
    // blt _020152D2
    // str r6, [r5, #4]
    // cmp r7, #1
    // bne _020152EE
    // add r0, r5, #0
    // bl sub_02015300
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _020152FC ; =sub_02015340
    // add r1, r5, #0
    // mov r2, #5
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020152FC: .word sub_02015340
    // TODO: decompile
}



void sub_02015300(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // bl SPL_Load
    // ldr r0, _0201533C ; =_021D10A0
    // str r4, [r0]
    // ldr r1, [r4, #0x18]
    // ldr r0, [r4]
    // cmp r1, #0
    // bne _0201531E
    // bl SPL_LoadTexByVRAMManager
    // b _02015322
    // bl SPL_LoadTexByCallbackFunction
    // ldr r1, [r4, #0x1c]
    // ldr r0, [r4]
    // cmp r1, #0
    // bne _02015330
    // bl SPL_LoadTexPlttByVRAMManager
    // b _02015334
    // bl SPL_LoadTexPlttByCallbackFunction
    // ldr r0, _0201533C ; =_021D10A0
    // mov r1, #0
    // str r1, [r0]
    // pop {r4, pc}
    // _0201533C: .word _021D10A0
    // TODO: decompile
}



void sub_02015340(void) {
}



void sub_02015354(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _0201535E
    // bl GF_AssertFail
    // ldr r0, _02015390 ; =_021D10A0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0201536A
    // bl GF_AssertFail
    // ldr r0, _02015390 ; =_021D10A0
    // mov r1, #0
    // ldr r3, [r0]
    // add r2, r3, #0
    // ldr r0, [r2, #0x58]
    // cmp r0, #0
    // bne _02015380
    // lsl r0, r1, #2
    // add r0, r3, r0
    // str r4, [r0, #0x58]
    // pop {r4, pc}
    // add r1, r1, #1
    // add r2, r2, #4
    // cmp r1, #0x10
    // blt _02015372
    // bl GF_AssertFail
    // pop {r4, pc}
    // nop
    // _02015390: .word _021D10A0
    // TODO: decompile
}



void sub_02015394(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _0201539E
    // bl GF_AssertFail
    // ldr r0, _020153D4 ; =_021D10A0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _020153AA
    // bl GF_AssertFail
    // ldr r0, _020153D4 ; =_021D10A0
    // mov r1, #0
    // ldr r3, [r0]
    // add r2, r3, #0
    // add r0, r2, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _020153C6
    // lsl r0, r1, #2
    // add r0, r3, r0
    // add r0, #0x98
    // str r4, [r0]
    // pop {r4, pc}
    // add r1, r1, #1
    // add r2, r2, #4
    // cmp r1, #0x10
    // blt _020153B2
    // bl GF_AssertFail
    // pop {r4, pc}
    // _020153D4: .word _021D10A0
    // TODO: decompile
}



void sub_020153D8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x20]
    // cmp r1, #0
    // beq _020153F4
    // add r0, #0xdb
    // ldrb r0, [r0]
    // bl Camera_ApplyPerspectiveType
    // ldr r0, [r4, #0x20]
    // bl Camera_SetStaticPtr
    // bl Camera_PushLookAtToNNSGlb
    // bl NNS_G3dGlbFlushP
    // ldr r0, [r4]
    // ldr r1, _02015410 ; =NNS_G3dGlb + 0x4C
    // bl SPL_Draw
    // ldr r0, [r4, #0x20]
    // cmp r0, #0
    // beq _0201540A
    // bl Camera_UnsetStaticPtr
    // bl NNS_G3dGlbFlushP
    // pop {r4, pc}
    // _02015410: .word NNS_G3dGlb + 0x4C
    // TODO: decompile
}



void sub_02015414(void) {
}



void sub_02015420(void) {
    // mov r0, #0
    // ldr r3, _02015438 ; =_021D10A8
    // add r2, r0, #0
    // ldr r1, [r3]
    // cmp r1, #0
    // beq _0201542E
    // add r0, r0, #1
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #0x10
    // blt _02015426
    // bx lr
    // _02015438: .word _021D10A8
    // TODO: decompile
}



void sub_0201543C(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #0
    // ldr r5, _0201545C ; =_021D10A8
    // add r6, r4, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02015450
    // bl sub_020153D8
    // add r4, r4, #1
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #0x10
    // blt _02015444
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _0201545C: .word _021D10A8
    // TODO: decompile
}



void sub_02015460(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #0
    // ldr r5, _02015480 ; =_021D10A8
    // add r6, r4, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02015474
    // bl sub_02015414
    // add r4, r4, #1
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #0x10
    // blt _02015468
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02015480: .word _021D10A8
    // TODO: decompile
}



void sub_02015484(void) {
}



void sub_02015494(void) {
}



void sub_020154B0(void) {
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}



void sub_020154B8(void) {
}



void sub_020154C4(void) {
}



void sub_020154D0(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}



void sub_020154D4(void) {
    // add r2, #0x40
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}



void sub_020154E4(void) {
}



void sub_02015504(void) {
    // ldr r0, _0201550C ; =_021D10A0
    // ldr r0, [r0, #4]
    // bx lr
    // nop
    // _0201550C: .word _021D10A0
    // TODO: decompile
}



void sub_02015510(void) {
    // ldr r2, _02015520 ; =_020F6078
    // add r3, r0, #0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r3]
    // bx lr
    // nop
    // _02015520: .word _020F6078
    // TODO: decompile
}



void sub_02015524(void) {
    // ldr r0, [r0, #0x20]
    // bx lr
    // TODO: decompile
}



void sub_02015528(void) {
    // add r0, #0xdb
    // strb r1, [r0]
}



void sub_02015530(void) {
    // add r0, #0xdb
    // ldrb r0, [r0]
}



void sub_02015538(void) {
    // add r2, #0x50
    // ldrh r2, [r2]
    // strh r2, [r1]
    // add r2, #0x52
    // ldrh r2, [r2]
    // add r0, #0x54
    *((u16*)(r1 + 2)) = r0;
    // ldrh r0, [r0]
    *((u16*)(r1 + 4)) = r0;
}



void sub_02015550(void) {
    // push {r4, r5, r6, r7}
    // ldr r0, [r0, #0x20]
    // add r4, r1, #0
    // ldrh r2, [r0, #0x1c]
    // cmp r2, #0
    // bne _02015562
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // mov r1, #0
    // cmp r2, #0
    // ble _020155EC
    // ldr r3, [r0, #0x18]
    // ldr r7, _020155F4 ; =spl_calc_random
    // ldr r0, _020155F8 ; =spl_calc_gravity
    // cmp r3, #0
    // beq _020155E4
    // cmp r4, #5
    // bhi _020155DE
    // add r5, r4, r4
    // add r5, pc
    // ldrh r5, [r5, #6]
    // lsl r5, r5, #0x10
    // asr r5, r5, #0x10
    // add pc, r5
    // _02015582: ; jump table
    // ldr r5, [r3]
    // cmp r5, r0
    // bne _020155E4
    // ldr r0, [r3, #4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // ldr r5, [r3]
    // cmp r5, r7
    // bne _020155E4
    // ldr r0, [r3, #4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // ldr r6, [r3]
    // ldr r5, _020155FC ; =spl_calc_magnet
    // cmp r6, r5
    // bne _020155E4
    // ldr r0, [r3, #4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // ldr r6, [r3]
    // ldr r5, _02015600 ; =spl_calc_spin
    // cmp r6, r5
    // bne _020155E4
    // ldr r0, [r3, #4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // ldr r6, [r3]
    // ldr r5, _02015604 ; =spl_calc_scfield
    // cmp r6, r5
    // bne _020155E4
    // ldr r0, [r3, #4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // ldr r6, [r3]
    // ldr r5, _02015608 ; =spl_calc_convergence
    // cmp r6, r5
    // bne _020155E4
    // ldr r0, [r3, #4]
    // pop {r4, r5, r6, r7}
    // bx lr
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // add r1, r1, #1
    // add r3, #8
    // cmp r1, r2
    // blt _0201556E
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _020155F4: .word spl_calc_random
    // _020155F8: .word spl_calc_gravity
    // _020155FC: .word spl_calc_magnet
    // _02015600: .word spl_calc_spin
    // _02015604: .word spl_calc_scfield
    // _02015608: .word spl_calc_convergence
    // TODO: decompile
}



void sub_0201560C(void) {
}



void sub_02015628(void) {
}



void sub_02015640(void) {
    sub_02015550(2);
    // add r2, sp, #0
    // str r0, [r2]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}



void sub_02015674(void) {
}



void sub_0201568C(void) {
}



void sub_020156A8(void) {
}



void sub_020156BC(void) {
}



void sub_020156D8(void) {
}



void sub_020156EC(void) {
}



void sub_02015708(void) {
}



void sub_02015720(void) {
    sub_02015550(5);
    // add r2, sp, #0
    // str r0, [r2]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}



void sub_02015754(void) {
}



void sub_0201576C(void) {
}



void ListMenuCursorNew(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #8
    // add r5, r0, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // beq _020157AA
    // ldr r0, _020157B0 ; =0x0001020F
    // add r1, r5, #0
    // str r0, [r4]
    // mov r0, #4
    // bl String_New
    // ldr r1, _020157B4 ; =_020F60DC
    // str r0, [r4, #4]
    // bl CopyU16ArrayToString
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _020157B0: .word 0x0001020F
    // _020157B4: .word _020F60DC
    // TODO: decompile
}



void DestroyListMenuCursorObj(void) {
    GF_AssertFail();
    String_Delete(*((u32*)(r4 + 4)));
    Heap_Free(r4);
}



void ListMenuCursorSetColor(void) {
}



void ListMenuUpdateCursorObj(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r1, 0, *((u32*)(r0 + 4)), r2);
    CopyWindowPixelsToVram_TextMode(r5);
}


