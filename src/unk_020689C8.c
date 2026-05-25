/* Decompiled from asm/unk_020689C8.s */
#include "global.h"

void sub_020689C8(void) {
    sub_02068C08();
    sub_02068C38(r5, r6);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 8)) = r5;
}


void sub_020689E8(void) {
    sub_02068C5C();
    sub_02068C2C(r4);
}


void sub_020689F8(void) {
    sub_02068B80();
    sub_020689E8(r4);
}


void sub_02068A08(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r0, [sp]
    // add r7, r1, #0
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // mov r4, #0
    // bl sub_02068CC4
    // add r6, r0, #0
    // ldr r0, [sp]
    // bl sub_02068CC8
    // add r5, r0, #0
    // add r0, r5, #0
    // bl sub_02068CCC
    // cmp r0, #0
    // beq _02068A36
    // add r4, r4, #1
    // add r5, #0xc8
    // cmp r4, r6
    // blt _02068A24
    // cmp r4, r6
    // blt _02068A40
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl sub_02068CD8
    // ldr r1, [sp, #8]
    // add r0, r5, #0
    // bl sub_02068D8C
    // ldr r1, [sp, #0x30]
    // add r0, r5, #0
    // bl sub_02068D94
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl sub_02068DA4
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02068A6E
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // bl sub_02068DA8
    // b _02068A7E
    // add r1, sp, #0xc
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // add r0, r5, #0
    // bl sub_02068DA8
    // ldr r1, [r7]
    // add r0, r5, #0
    // bl sub_02068D78
    // ldr r1, [r7, #4]
    // add r0, r5, #0
    // bl sub_02068CF4
    // ldr r1, [r7, #8]
    // add r0, r5, #0
    // bl sub_02068D48
    // ldr r1, [r7, #0xc]
    // add r0, r5, #0
    // bl sub_02068D10
    // ldr r1, [r7, #0x10]
    // add r0, r5, #0
    // bl sub_02068D2C
    // ldr r1, [r7, #0x14]
    // add r0, r5, #0
    // bl sub_02068D64
    // ldr r1, [r7, #0x18]
    // add r0, r5, #0
    // bl sub_02068D6C
    // ldr r1, [sp, #0x34]
    // add r0, r5, #0
    // bl sub_02068BDC
    // add r4, r0, #0
    // bne _02068ACE
    // add r0, r5, #0
    // bl sub_02068C6C
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02068D9C
    // add r0, r5, #0
    // bl sub_02068CFC
    // cmp r0, #0
    // bne _02068AF2
    // add r0, r4, #0
    // bl SysTask_Destroy
    // add r0, r5, #0
    // bl sub_02068C6C
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // mov r1, #2
    // bl sub_02068CE4
    // ldr r0, [sp]
    // ldr r0, [r0, #4]
    // add r1, r0, #1
    // ldr r0, [sp]
    // str r1, [r0, #4]
    // add r0, r5, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // bne _02068B52
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl sub_02068CCC
    // cmp r0, #0
    // beq _02068B7E
    // add r0, r4, #0
    // bl sub_02068D50
    // ldr r1, [r4, #0x14]
    // ldr r0, [r1, #4]
    // sub r0, r0, #1
    // str r0, [r1, #4]
    // add r0, r4, #0
    // bl sub_02068DA0
    // cmp r0, #0
    // beq _02068B78
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl sub_02068C6C
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02068B80(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_02068CC4
    // add r4, r0, #0
    // add r0, r5, #0
    // bl sub_02068CC8
    // add r5, r0, #0
    // add r0, r5, #0
    // bl sub_02068CCC
    // cmp r0, #1
    // bne _02068BA2
    // add r0, r5, #0
    // bl sub_02068B48
    // add r5, #0xc8
    // sub r4, r4, #1
    // bne _02068B92
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02068BAC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_02068CC4
    // add r4, r0, #0
    // add r0, r5, #0
    // bl sub_02068CC8
    // add r5, r0, #0
    // mov r6, #3
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02068CEC
    // cmp r0, #3
    // bne _02068BD2
    // add r0, r5, #0
    // bl sub_02068D34
    // add r5, #0xc8
    // sub r4, r4, #1
    // bne _02068BC0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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
    sub_02068D18();
}


void sub_02068C08(void) {
    // push {r4, lr}
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02068C18
    // bl GF_AssertFail
    // add r2, r4, #0
    // mov r1, #0x10
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02068C1E
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02068C2C(void) {
    Heap_FreeExplicit();
}


void sub_02068C38(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0xc8
    // add r5, r1, #0
    // mul r5, r2
    // add r1, r5, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02068C4E
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r5, #0
    // bl memset
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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


void sub_02068CCC(void) {
    // ldr r1, [r0]
    // mov r0, #1
    // tst r1, r0
    // bne _02068CD6
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02068CD8(void) {
    // ldr r2, [r0]
    // mov r1, #1
    // orr r1, r2
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068CE4(void) {
    // ldr r2, [r0]
    // orr r1, r2
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068CEC(void) {
    // ldr r0, [r0]
    // and r0, r1
    // bx lr
    // TODO: decompile
}


void sub_02068CF4(void) {
    // add r0, #0xb0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068CFC(void) {
    sub_02068D74();
}


void sub_02068D10(void) {
    // add r0, #0xb4
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068D18(void) {
    sub_02068D74();
}


void sub_02068D2C(void) {
    // add r0, #0xb8
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068D34(void) {
    sub_02068D74();
}


void sub_02068D48(void) {
    // add r0, #0xbc
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068D50(void) {
    sub_02068D74();
}


void sub_02068D64(void) {
    // add r0, #0xc0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068D6C(void) {
    // add r0, #0xc4
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02068D74(void) {
    // add r0, #0x30
    // bx lr
    // TODO: decompile
}


void sub_02068D78(void) {
    sub_02068D74();
    memset(0, r4);
}


void sub_02068D8C(void) {
    ((u32*)r0)[4] = r1;
}


void sub_02068D90(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}


void sub_02068D94(void) {
    ((u32*)r0)[0xc] = r1;
}


void sub_02068D98(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}


void sub_02068D9C(void) {
    ((u32*)r0)[0x10] = r1;
}


void sub_02068DA0(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}


void sub_02068DA4(void) {
    ((u32*)r0)[0x14] = r1;
}


void sub_02068DA8(void) {
    // add r3, r1, #0
    // add r2, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // bx lr
    // TODO: decompile
}


void sub_02068DB8(void) {
    // add r2, r0, #0
    // add r2, #0x24
    // add r3, r1, #0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r3]
    // bx lr
    // TODO: decompile
}


u8 sub_02068DC8(void) {
    return 1;
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

