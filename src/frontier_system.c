/* Decompiled from asm/frontier_system.s */
#include "global.h"

void * FrontierSystem_Create(void) {
    Heap_Alloc(r1, 0xbc);
    MI_CpuFill8(0, 0xbc);
    // str r7, [r4]
    *((u32*)(r4 + 0x34)) = r5;
    // add r0, #0x52
    // strh r6, [r0]
    // add r0, #0x40
    // add r1, #0x3c
    ov80_0222AA40(r4, r4, r6, r5);
    MessageFormat_New_Custom(8, 0x40, r5);
    *((u32*)(r4 + 0x44)) = r0;
    String_New((1 << 0xa), r5);
    *((u32*)(r4 + 0x48)) = r0;
    String_New((1 << 0xa), r5);
    *((u32*)(r4 + 0x4c)) = r0;
    FrontierSystem_deadstripped_0222AA3C(r4, ((r6 << 0x10) >> 0x10), 0, 0);
}



u8 FrontierSystem_Main(void) {
    // str r0, [sp]
    // ldrsb r0, [r0, r1]
    // ldr r0, [sp]
    // add r0, #0x38
    // ldrb r0, [r0]
    // ldr r5, [sp]
    // add r6, #0x51
    FrontierScriptContext_Run(*((u32*)(r5 + 4)), 0x51);
    // ldr r0, [sp]
    ov80_0222AA0C(r4);
    *((u32*)(r5 + 4)) = 0;
    // ldrsb r0, [r6, r0]
    // strb r0, [r6]
    // ldr r0, [sp]
    ov80_02239C54(*((u32*)(0 - 1)));
    // ldr r0, [sp]
    // ldrsb r0, [r0, r1]
}



void ov80_0222A920(void) {
    // ldrsb r0, [r4, r0]
    GF_AssertFail(0x51);
    MessageFormat_Delete(*((u32*)(r4 + 0x44)));
    String_Delete(*((u32*)(r4 + 0x48)));
    String_Delete(*((u32*)(r4 + 0x4c)));
    Heap_Free(*((u32*)(r4 + 0x40)));
    DestroyMsgData(*((u32*)(r4 + 0x3c)));
    Heap_Free(r4);
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



u8 ov80_0222A9DC(void) {
    // add r2, r0, r2
    *((u32*)((0 << 2) + 4)) = r1;
    // ldrsb r1, [r0, r1]
    // add r0, #0x51
    // strb r1, [r0]
    GF_AssertFail(1, (0x51 + 1), (0 << 2), (0 + 1));
}



void ov80_0222AA0C(void) {
    // add r0, #0x80
    DestroyMsgData(*((u32*)r1), *((u32*)(r0 + 0x3c)));
    // add r0, #0x84
    Heap_Free(*((u32*)r4), *((u32*)(r5 + 0x40)));
    Heap_Free(r4);
}



void FrontierSystem_deadstripped_0222AA3C(void) {
    // bx lr
    // TODO: decompile
}



void ov80_0222AA40(void) {
    ov80_0222ACA0(r2, 1);
    // str r0, [sp]
    ov80_0222ACA0(r6, 2);
    // ldr r1, [sp]
    AllocAndReadWholeNarcMemberByIdPair(0xb6, r7);
    // str r0, [r5]
    NewMsgDataFromNarc(1, 0x1b, r6, r7);
    // str r0, [r4]
}



void ov80_0222AA7C(void) {
    // add r0, #0x52
    // ldrh r0, [r0]
    ov80_0222ACA0(2);
    ov80_0222ACA0(r6, 2);
    NewMsgDataFromNarc(1, 0x1b, r0, r7);
    // add r3, #0x80
    // add r0, #0x80
    // str r4, [r0]
    DestroyMsgData(*((u32*)(r5 + 0x3c)), (0 + 1), (r5 + 4), *((u32*)(r5 + 0x3c)));
    *((u32*)(r5 + 0x3c)) = r4;
}



void * ov80_0222AAD8(void) {
    Heap_Alloc(r1, 0x10);
    // add r4, #0x24
    // ldrh r1, [r4]
    // strh r1, [r3]
}



void ov80_0222AAF8(void) {
}



void ov80_0222AB14(void) {
}



void * ov80_0222AB2C(void) {
    // add r0, #0x24
    // add r0, r0, r1
}



void FrontierSystem_GetFrontierMap(void) {
}


