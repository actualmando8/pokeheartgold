/* Decompiled from asm/frontier_system.s */
#include "global.h"

void FrontierSystem_Create(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #0xbc
    // add r6, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0xbc
    // bl MI_CpuFill8
    // str r7, [r4]
    // add r0, r4, #0
    // add r1, r4, #0
    // str r5, [r4, #0x34]
    // add r0, #0x52
    // strh r6, [r0]
    // add r0, r4, #0
    // add r0, #0x40
    // add r1, #0x3c
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov80_0222AA40
    // mov r0, #8
    // mov r1, #0x40
    // add r2, r5, #0
    // bl MessageFormat_New_Custom
    // str r0, [r4, #0x44]
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r1, r5, #0
    // bl String_New
    // str r0, [r4, #0x48]
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r1, r5, #0
    // bl String_New
    // lsl r1, r6, #0x10
    // mov r2, #0
    // str r0, [r4, #0x4c]
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // add r3, r2, #0
    // bl FrontierSystem_deadstripped_0222AA3C
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void FrontierSystem_Main(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x51
    // str r0, [sp]
    // ldrsb r0, [r0, r1]
    // cmp r0, #0
    // bne _0222A8C8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // add r0, #0x38
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0222A90C
    // ldr r5, [sp]
    // mov r7, #0
    // add r6, r5, #0
    // add r6, #0x51
    // ldr r4, [r5, #4]
    // cmp r4, #0
    // beq _0222A8FC
    // add r0, r4, #0
    // bl FrontierScriptContext_Run
    // cmp r0, #0
    // bne _0222A8FC
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl ov80_0222AA0C
    // mov r0, #0
    // str r0, [r5, #4]
    // ldrsb r0, [r6, r0]
    // sub r0, r0, #1
    // strb r0, [r6]
    // add r7, r7, #1
    // add r5, r5, #4
    // cmp r7, #8
    // blt _0222A8DA
    // ldr r0, [sp]
    // ldr r0, [r0]
    // bl ov80_02239C54
    // ldr r0, [sp]
    // mov r1, #0x51
    // ldrsb r0, [r0, r1]
    // cmp r0, #0
    // bne _0222A91A
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov80_0222A920(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x51
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // beq _0222A930
    // bl GF_AssertFail
    // ldr r0, [r4, #0x44]
    // bl MessageFormat_Delete
    // ldr r0, [r4, #0x48]
    // bl String_Delete
    // ldr r0, [r4, #0x4c]
    // bl String_Delete
    // ldr r0, [r4, #0x40]
    // bl Heap_Free
    // ldr r0, [r4, #0x3c]
    // bl DestroyMsgData
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void FrontierSystem_AddTask(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // add r6, r1, #0
    // mov r1, #0x90
    // add r7, r2, #0
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x90
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r2, _0222A9D0 ; =ov80_0223B9CC
    // ldr r1, _0222A9D4 ; =gFrontierCommandTable
    // ldr r2, [r2]
    // add r0, r4, #0
    // bl FrontierScriptContext_Init
    // ldr r0, _0222A9D8 ; =0x0000FFFF
    // str r5, [r4]
    // cmp r6, r0
    // beq _0222A990
    // add r0, r5, #0
    // add r0, #0x52
    // ldrh r0, [r0]
    // cmp r0, r6
    // bne _0222A9A2
    // add r0, r4, #0
    // ldr r1, [r5, #0x40]
    // add r0, #0x84
    // str r1, [r0]
    // add r0, r4, #0
    // ldr r1, [r5, #0x3c]
    // add r0, #0x80
    // str r1, [r0]
    // b _0222A9B2
    // add r0, r4, #0
    // add r1, r4, #0
    // ldr r3, [r5, #0x34]
    // add r0, #0x84
    // add r1, #0x80
    // add r2, r6, #0
    // bl ov80_0222AA40
    // add r1, r4, #0
    // add r1, #0x84
    // ldr r1, [r1]
    // add r0, r4, #0
    // bl FrontierScriptContext_Start
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov80_0222AB14
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov80_0222A9DC
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222A9D0: .word ov80_0223B9CC
    // _0222A9D4: .word gFrontierCommandTable
    // _0222A9D8: .word 0x0000FFFF
    // TODO: decompile
}


void ov80_0222A9DC(void) {
    // push {r4, lr}
    // mov r3, #0
    // add r4, r0, #0
    // ldr r2, [r4, #4]
    // cmp r2, #0
    // bne _0222A9FC
    // lsl r2, r3, #2
    // add r2, r0, r2
    // str r1, [r2, #4]
    // mov r1, #0x51
    // ldrsb r1, [r0, r1]
    // add r0, #0x51
    // add r1, r1, #1
    // strb r1, [r0]
    // mov r0, #1
    // pop {r4, pc}
    // add r3, r3, #1
    // add r4, r4, #4
    // cmp r3, #8
    // blt _0222A9E2
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov80_0222AA0C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // ldr r1, [r5, #0x3c]
    // cmp r0, r1
    // beq _0222AA22
    // bl DestroyMsgData
    // add r0, r4, #0
    // add r0, #0x84
    // ldr r0, [r0]
    // ldr r1, [r5, #0x40]
    // cmp r0, r1
    // beq _0222AA32
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void FrontierSystem_deadstripped_0222AA3C(void) {
    // bx lr
    // TODO: decompile
}


void ov80_0222AA40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r2, #0
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, r6, #0
    // mov r1, #1
    // add r7, r3, #0
    // bl ov80_0222ACA0
    // str r0, [sp]
    // add r0, r6, #0
    // mov r1, #2
    // bl ov80_0222ACA0
    // add r6, r0, #0
    // ldr r1, [sp]
    // mov r0, #0xb6
    // add r2, r7, #0
    // bl AllocAndReadWholeNarcMemberByIdPair
    // str r0, [r5]
    // mov r0, #1
    // mov r1, #0x1b
    // add r2, r6, #0
    // add r3, r7, #0
    // bl NewMsgDataFromNarc
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov80_0222AA7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r0, #0x52
    // ldrh r0, [r0]
    // add r6, r1, #0
    // mov r1, #2
    // add r7, r2, #0
    // bl ov80_0222ACA0
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #2
    // bl ov80_0222ACA0
    // add r2, r0, #0
    // cmp r4, r2
    // beq _0222AAD4
    // mov r0, #1
    // mov r1, #0x1b
    // add r3, r7, #0
    // bl NewMsgDataFromNarc
    // add r4, r0, #0
    // mov r1, #0
    // add r2, r5, #0
    // ldr r0, [r2, #4]
    // cmp r0, #0
    // beq _0222AAC4
    // add r3, r0, #0
    // add r3, #0x80
    // ldr r6, [r3]
    // ldr r3, [r5, #0x3c]
    // cmp r6, r3
    // bne _0222AAC4
    // add r0, #0x80
    // str r4, [r0]
    // add r1, r1, #1
    // add r2, r2, #4
    // cmp r1, #8
    // blt _0222AAAE
    // ldr r0, [r5, #0x3c]
    // bl DestroyMsgData
    // str r4, [r5, #0x3c]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov80_0222AAD8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r4, #0x24
    // add r3, r0, #0
    // mov r2, #8
    // ldrh r1, [r4]
    // add r4, r4, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _0222AAEA
    // pop {r4, pc}
    // TODO: decompile
}


void ov80_0222AAF8(void) {
    Heap_Free(8);
}


void ov80_0222AB14(void) {
    FrontierScriptContext_ReadWord();
}


void ov80_0222AB2C(void) {
    // add r0, #0x24
    // lsl r1, r1, #1
    // add r0, r0, r1
    // bx lr
    // TODO: decompile
}


void FrontierSystem_GetFrontierMap(void) {
    sub_0209680C();
}

