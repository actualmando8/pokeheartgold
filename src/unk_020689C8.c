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
    // add r4, sp, #8
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #4]
    sub_02068A08(r0, r4);
}




void sub_02068B48(void) {
}




void sub_02068B80(void) {
    // add r5, #0xc8
}




void sub_02068BAC(void) {
    // add r5, #0xc8
}




SysTask * sub_02068BDC(void) {
    SysTask_CreateOnMainQueue(sub_02068BFC, r0, r1, r0);
    GF_AssertFail();
}




void sub_02068BFC(void) {
}




void sub_02068C08(void) {
    // strb r0, [r2]
}




void sub_02068C2C(void) {
}




void sub_02068C38(void) {
    // mul r5, r2
}




void sub_02068C5C(void) {
    // bx r3
    // nop
    // _02068C68: .word Heap_FreeExplicit
}




void sub_02068C6C(void) {
    memset(0, 0xc8);
    sub_02068CF4(r4, sub_02068DC8);
    sub_02068D48(r4, sub_02068DD4);
    sub_02068D10(r4, sub_02068DCC);
    sub_02068D2C(r4, sub_02068DD0);
    sub_02068D64(r4, sub_02068DD8);
    sub_02068D6C(r4, sub_02068DDC);
}




void sub_02068CC4(void) {
}




void sub_02068CC8(void) {
}




BOOL sub_02068CCC(void) {
    // tst r1, r0
}




void sub_02068CD8(void) {
    // str r1, [r0]
}




void sub_02068CE4(void) {
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
}




void sub_02068D94(void) {
}




void sub_02068D98(void) {
}




void sub_02068D9C(void) {
}




void sub_02068DA0(void) {
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
}




void sub_02068DD0(void) {
}




void sub_02068DD4(void) {
}




void sub_02068DD8(void) {
}




void sub_02068DDC(void) {
}



