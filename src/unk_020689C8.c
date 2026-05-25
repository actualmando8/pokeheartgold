/* Decompiled from asm/unk_020689C8.s */
#include "global.h"

void sub_020689C8(void) {
}



void sub_020689E8(void) {
}



void sub_020689F8(void) {
}



void * sub_02068A08(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    sub_02068CC4();
    // ldr r0, [sp]
    sub_02068CC8();
    sub_02068CCC(r0);
    // add r5, #0xc8
    sub_02068CD8(r5);
    // ldr r1, [sp, #8]
    sub_02068D8C(r5);
    // ldr r1, [sp, #0x30]
    sub_02068D94(r5);
    // ldr r1, [sp]
    sub_02068DA4(r5);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    sub_02068DA8(r5);
    // add r1, sp, #0xc
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    sub_02068DA8(r5);
    sub_02068D78(r5, *((u32*)r7));
    sub_02068CF4(r5, *((u32*)(r7 + 4)));
    sub_02068D48(r5, *((u32*)(r7 + 8)));
    sub_02068D10(r5, *((u32*)(r7 + 0xc)));
    sub_02068D2C(r5, *((u32*)(r7 + 0x10)));
    sub_02068D64(r5, *((u32*)(r7 + 0x14)));
    sub_02068D6C(r5, *((u32*)(r7 + 0x18)));
    // ldr r1, [sp, #0x34]
    sub_02068BDC(r5);
    sub_02068C6C(r5);
    sub_02068D9C(r5, r4);
    sub_02068CFC(r5);
    SysTask_Destroy(r4);
    sub_02068C6C(r5);
    sub_02068CE4(r5, 2);
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(r0 + 4)) + 4)) = (*((u32*)(r0 + 4)) + 1);
}



void sub_02068B0C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // add r6, r0, #0
    // add r4, sp, #8
    // ldmia r5!, {r0, r1}
    // add r7, r4, #0
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r7, #0
    // str r0, [r4]
    // ldr r0, _02068B40 ; =sub_02068DD8
    // str r0, [sp, #0x1c]
    // ldr r0, _02068B44 ; =sub_02068DDC
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // bl sub_02068A08
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02068B40: .word sub_02068DD8
    // _02068B44: .word sub_02068DDC
    // TODO: decompile
}



void sub_02068B48(void) {
    GF_AssertFail();
    sub_02068CCC(r4);
    sub_02068D50(r4);
    *((u32*)(*((u32*)(r4 + 0x14)) + 4)) = (*((u32*)(*((u32*)(r4 + 0x14)) + 4)) - 1);
    sub_02068DA0(r4, *((u32*)(r4 + 0x14)));
    SysTask_Destroy();
    sub_02068C6C(r4);
}



void sub_02068B80(void) {
    sub_02068CC4();
    sub_02068CC8(r5);
    sub_02068CCC(r0);
    sub_02068B48(r5);
    // add r5, #0xc8
}



void sub_02068BAC(void) {
    sub_02068CC4();
    sub_02068CC8(r5);
    sub_02068CEC(r0, 3);
    sub_02068D34(r5);
    // add r5, #0xc8
}



void sub_02068BDC(void) {
    // push {r4, lr}
    // add r3, r0, #0
    // add r2, r1, #0
    // ldr r0, _02068BF8 ; =sub_02068BFC
    // add r1, r3, #0
    // bl SysTask_CreateOnMainQueue
    // add r4, r0, #0
    // bne _02068BF2
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _02068BF8: .word sub_02068BFC
    // TODO: decompile
}



void sub_02068BFC(void) {
}



void sub_02068C08(void) {
    Heap_Alloc(0x10);
    GF_AssertFail();
    // strb r0, [r2]
}



void sub_02068C2C(void) {
}



void sub_02068C38(void) {
    // mul r5, r2
    Heap_Alloc(r1, 0xc8);
    GF_AssertFail();
    memset(r4, 0, r5);
}



void sub_02068C5C(void) {
    // ldr r3, _02068C68 ; =Heap_FreeExplicit
    // add r1, r0, #0
    // ldr r0, [r1, #8]
    // ldr r1, [r1, #0xc]
    // bx r3
    // nop
    // _02068C68: .word Heap_FreeExplicit
    // TODO: decompile
}



void sub_02068C6C(void) {
    // push {r4, lr}
    // mov r1, #0
    // mov r2, #0xc8
    // add r4, r0, #0
    // bl memset
    // ldr r1, _02068CAC ; =sub_02068DC8
    // add r0, r4, #0
    // bl sub_02068CF4
    // ldr r1, _02068CB0 ; =sub_02068DD4
    // add r0, r4, #0
    // bl sub_02068D48
    // ldr r1, _02068CB4 ; =sub_02068DCC
    // add r0, r4, #0
    // bl sub_02068D10
    // ldr r1, _02068CB8 ; =sub_02068DD0
    // add r0, r4, #0
    // bl sub_02068D2C
    // ldr r1, _02068CBC ; =sub_02068DD8
    // add r0, r4, #0
    // bl sub_02068D64
    // ldr r1, _02068CC0 ; =sub_02068DDC
    // add r0, r4, #0
    // bl sub_02068D6C
    // pop {r4, pc}
    // nop
    // _02068CAC: .word sub_02068DC8
    // _02068CB0: .word sub_02068DD4
    // _02068CB4: .word sub_02068DCC
    // _02068CB8: .word sub_02068DD0
    // _02068CBC: .word sub_02068DD8
    // _02068CC0: .word sub_02068DDC
    // TODO: decompile
}



void sub_02068CC4(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}



void sub_02068CC8(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}



BOOL sub_02068CCC(void) {
    // tst r1, r0
}



void sub_02068CD8(void) {
    // orr r1, r2
    // str r1, [r0]
}



void sub_02068CE4(void) {
    // orr r1, r2
    // str r1, [r0]
}



u32 sub_02068CEC(void) {
    // and r0, r1
}



void sub_02068CF4(void) {
    // add r0, #0xb0
    // str r1, [r0]
}



void sub_02068CFC(void) {
}



void sub_02068D10(void) {
    // add r0, #0xb4
    // str r1, [r0]
}



void sub_02068D18(void) {
}



void sub_02068D2C(void) {
    // add r0, #0xb8
    // str r1, [r0]
}



void sub_02068D34(void) {
}



void sub_02068D48(void) {
    // add r0, #0xbc
    // str r1, [r0]
}



void sub_02068D50(void) {
}



void sub_02068D64(void) {
    // add r0, #0xc0
    // str r1, [r0]
}



void sub_02068D6C(void) {
    // add r0, #0xc4
    // str r1, [r0]
}



void sub_02068D74(void) {
    // add r0, #0x30
}



void sub_02068D78(void) {
}



void sub_02068D8C(void) {
}



void sub_02068D90(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}



void sub_02068D94(void) {
}



void sub_02068D98(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}



void sub_02068D9C(void) {
}



void sub_02068DA0(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}



void sub_02068DA4(void) {
}



void sub_02068DA8(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}



void sub_02068DB8(void) {
    // add r2, #0x24
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}



u8 sub_02068DC8(void) {
}



void sub_02068DCC(void) {
    // bx lr
    // TODO: decompile
}



void sub_02068DD0(void) {
    // bx lr
    // TODO: decompile
}



void sub_02068DD4(void) {
    // bx lr
    // TODO: decompile
}



void sub_02068DD8(void) {
    // bx lr
    // TODO: decompile
}



void sub_02068DDC(void) {
    // bx lr
    // TODO: decompile
}


