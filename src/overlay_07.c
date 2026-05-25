/* Decompiled from asm/overlay_07.s */
#include "global.h"

void ov07_0221BE20(void) {
    // add r1, r0, #0
    // add r1, #0x8d
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _0221BE32
    // ldr r1, _0221BE40 ; =ov07_0221BE44
    // add r0, #0xbc
    // str r1, [r0]
    // bx lr
    // add r1, r0, #0
    // add r1, #0x8d
    // ldrb r1, [r1]
    // add r0, #0x8d
    // sub r1, r1, #1
    // strb r1, [r0]
    // bx lr
    // _0221BE40: .word ov07_0221BE44
    // TODO: decompile
}



void ov07_0221BE44(void) {
    ov07_0221F8B0(*((u32*)*((u32*)(r0 + 0x18))));
    // blx r1
    // add r0, #0x8d
    // ldrb r0, [r0]
}



void ov07_0221BE68(void) {
    // add r0, #0x8e
    // ldrh r0, [r0]
    // add r1, #0x8e
    // strh r0, [r1]
    // add r0, #0x90
    // ldrh r0, [r0]
    // add r1, #0x90
    // strh r0, [r1]
    GF_AssertFail((r1 + 1));
    // ldr r2, [sp, #0x10]
    SysTask_CreateOnMainQueue(r5, r4);
}



void ov07_0221BEA4(void) {
    // add r0, #0x8e
    // ldrh r0, [r0]
    // add r1, #0x8e
    // strh r0, [r1]
    // add r0, #0x90
    // ldrh r0, [r0]
    // add r1, #0x90
    // strh r0, [r1]
    GF_AssertFail((r1 - 1));
    SysTask_Destroy(r4);
}



void ov07_0221BEDC(void) {
    Heap_Alloc((0x72 << 2));
    GF_AssertFail();
    memset(0, 0, (0x72 << 2));
    // str r5, [r4]
    *((u32*)(r4 + 8)) = 0;
    Heap_Alloc(*((u32*)r4), (0x47 << 2));
    // add r1, #0xc0
    // str r0, [r1]
    NARC_New(7, r5);
    // str r0, [r4, r1]
    NARC_New(8, r5);
    // str r0, [r4, r1]
    NARC_New(0x16, r5);
    // str r0, [r4, r1]
    NARC_New(0x17, r5);
    // str r0, [r4, r1]
    NARC_New(0x18, r5);
    // str r0, [r4, r1]
    NARC_New(0x19, r5);
    // str r0, [r4, r2]
    // add r0, #0xc0
    GF_AssertFail(*((u32*)r4), (0x71 << 2));
    // sub r2, #0xa8
    memset(0, 0);
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    // add r0, #0xcc
    // str r3, [r0]
    // str r1, [r2, r0]
    // str r1, [r4, r0]
    *((u32*)(r4 + 0xc)) = 1;
}



void ov07_0221BFC0(void) {
}



void ov07_0221BFD0(void) {
}



void ov07_0221BFE0(void) {
    ov07_0221C3DC();
    // ldr r0, [r5, r6]
    NARC_Delete(0);
    // add r0, #0xc0
    Heap_Free(*((u32*)r7));
    Heap_Free(r7);
}



void ov07_0221C01C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // add r4, r0, #0
    // add r5, r1, #0
    // str r2, [sp]
    // str r3, [sp, #4]
    // bl ov07_0221C69C
    // add r0, r4, #0
    // bl ov07_0221C3DC
    // cmp r0, #0
    // bne _0221C03C
    // add sp, #0x6c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r3, #0
    // mov r2, #1
    // add r1, r3, #0
    // add r0, r4, r3
    // add r0, #0x6c
    // strb r2, [r0]
    // add r0, r4, r3
    // add r0, #0x7c
    // add r3, r3, #1
    // strb r1, [r0]
    // cmp r3, #0x10
    // blt _0221C042
    // add r3, r4, #0
    // mov r0, #0
    // add r2, r3, #0
    // add r2, #0x94
    // add r1, r1, #1
    // add r3, r3, #4
    // str r0, [r2]
    // cmp r1, #0xa
    // blt _0221C058
    // add r3, r4, #0
    // mov r2, #0
    // str r2, [r3, #0x30]
    // add r1, r3, #0
    // str r2, [r3, #0x28]
    // add r1, #0x2c
    // strb r2, [r1]
    // add r1, r3, #0
    // add r1, #0x2d
    // add r0, r0, #1
    // add r3, #0xc
    // strb r2, [r1]
    // cmp r0, #3
    // blt _0221C06A
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrb r1, [r5]
    // ldr r0, [r0]
    // mov r3, #1
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrb r1, [r5, #1]
    // ldr r0, [r0]
    // strb r1, [r0, #1]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrh r1, [r5, #2]
    // ldr r0, [r0]
    // strh r1, [r0, #2]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r5, #4]
    // ldr r0, [r0]
    // str r1, [r0, #4]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrh r1, [r5, #8]
    // ldr r0, [r0]
    // strh r1, [r0, #8]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrh r1, [r5, #0xc]
    // ldr r0, [r0]
    // strh r1, [r0, #0xa]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r5, #0x10]
    // ldr r0, [r0]
    // str r1, [r0, #0xc]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrh r1, [r5, #0xa]
    // ldr r0, [r0]
    // strh r1, [r0, #0x10]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r5, #0x54]
    // ldr r0, [r0]
    // strh r1, [r0, #0x12]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrh r1, [r5, #0x14]
    // ldr r0, [r0]
    // strh r1, [r0, #0x14]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldrh r1, [r5, #0x16]
    // ldr r0, [r0]
    // strh r1, [r0, #0x16]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r2, [r0]
    // mov r0, #0x46
    // lsl r0, r0, #2
    // ldr r1, [r2, r0]
    // bic r1, r3
    // ldrh r3, [r5, #0xe]
    // lsl r3, r3, #0x1e
    // lsr r6, r3, #0x1f
    // mov r3, #1
    // and r3, r6
    // orr r1, r3
    // str r1, [r2, r0]
    // add r1, r4, #0
    // add r1, #0xc0
    // ldr r2, [r1]
    // mov r3, #2
    // ldr r1, [r2, r0]
    // bic r1, r3
    // ldrh r3, [r5, #0xe]
    // lsl r3, r3, #0x1d
    // lsr r3, r3, #0x1f
    // lsl r3, r3, #0x1f
    // lsr r3, r3, #0x1e
    // orr r1, r3
    // str r1, [r2, r0]
    // add r1, r4, #0
    // add r1, #0xc0
    // ldr r2, [r1]
    // mov r3, #4
    // ldr r1, [r2, r0]
    // bic r1, r3
    // ldrh r3, [r5, #0xe]
    // lsl r3, r3, #0x1c
    // lsr r3, r3, #0x1f
    // lsl r3, r3, #0x1f
    // lsr r3, r3, #0x1d
    // orr r1, r3
    // str r1, [r2, r0]
    // ldr r0, [sp, #4]
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, #0xac
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0221C15C
    // bl GF_AssertFail
    // ldr r0, [sp, #4]
    // mov r2, #0
    // ldr r1, [r0, #4]
    // add r0, r4, #0
    // add r0, #0xc4
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // add r7, r2, #0
    // ldr r1, [r0, #8]
    // add r0, r4, #0
    // add r0, #0xc8
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r1, [r0, #0x30]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, #0xd4
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // add r1, r2, #0
    // add r3, r0, #0
    // mov ip, r3
    // add r5, r4, #0
    // add r5, #0xc0
    // ldr r5, [r5]
    // ldr r3, [r0, #0xc]
    // add r5, r5, r1
    // add r5, #0xb0
    // str r3, [r5]
    // ldr r3, [sp, #4]
    // add r5, r4, #0
    // add r5, #0xc0
    // add r6, r3, r2
    // ldr r5, [r5]
    // ldrb r3, [r6, #0x1c]
    // add r5, r5, r2
    // add r5, #0xc0
    // strb r3, [r5]
    // add r5, r4, #0
    // add r5, #0xc0
    // ldr r5, [r5]
    // ldr r3, [r0, #0x20]
    // add r5, r5, r1
    // add r5, #0xc4
    // str r3, [r5]
    // add r5, r4, #0
    // add r5, #0xc0
    // mov r3, ip
    // ldr r5, [r5]
    // ldrh r3, [r3, #0x34]
    // add r5, r5, r7
    // add r5, #0xd8
    // strh r3, [r5]
    // add r5, r4, #0
    // add r3, r6, #0
    // add r5, #0xc0
    // add r3, #0x3c
    // ldr r5, [r5]
    // ldrb r3, [r3]
    // add r5, r5, r2
    // add r5, #0xe0
    // strb r3, [r5]
    // add r3, r6, #0
    // add r5, r4, #0
    // add r5, #0xc0
    // add r3, #0x40
    // ldr r5, [r5]
    // ldrb r3, [r3]
    // add r5, r5, r2
    // add r5, #0xe4
    // strb r3, [r5]
    // add r5, r4, #0
    // add r5, #0xc0
    // add r6, #0x44
    // ldr r5, [r5]
    // ldrb r3, [r6]
    // add r5, r5, r2
    // add r5, #0xe8
    // strb r3, [r5]
    // add r5, r4, #0
    // add r5, #0xc0
    // ldr r5, [r5]
    // ldr r3, [r0, #0x48]
    // add r5, r5, r1
    // add r5, #0xec
    // str r3, [r5]
    // add r5, r4, #0
    // add r5, #0xc0
    // ldr r5, [r5]
    // ldr r3, [r0, #0x58]
    // add r5, r5, r1
    // add r5, #0xfc
    // str r3, [r5]
    // mov r3, ip
    // add r3, r3, #2
    // add r2, r2, #1
    // add r0, r0, #4
    // add r1, r1, #4
    // add r7, r7, #2
    // mov ip, r3
    // cmp r2, #4
    // blt _0221C18A
    // ldr r5, [sp, #4]
    // mov r2, #0x19
    // lsl r2, r2, #4
    // add r5, #0x6c
    // add r3, r4, r2
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #4]
    // add r0, #0x84
    // ldr r3, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // add r0, r2, #0
    // sub r0, #0x84
    // str r3, [r1, r0]
    // ldr r0, [sp, #4]
    // add r0, #0x8c
    // ldr r3, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // add r0, r2, #0
    // sub r0, #0x7c
    // str r3, [r1, r0]
    // ldr r0, [sp, #4]
    // add r0, #0x88
    // ldr r3, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // add r0, r2, #0
    // sub r0, #0x80
    // str r3, [r1, r0]
    // ldr r0, [sp]
    // sub r2, #0x6e
    // cmp r0, r2
    // bne _0221C2AA
    // ldr r5, _0221C37C ; =ov07_02234C64
    // add r3, sp, #8
    // mov r2, #0xc
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0221C284
    // ldr r0, [r5]
    // str r0, [r3]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldrh r0, [r0, #0x12]
    // cmp r0, #0x18
    // blo _0221C2A2
    // mov r0, #0xa1
    // str r0, [sp]
    // b _0221C2AA
    // lsl r1, r0, #2
    // add r0, sp, #8
    // ldr r0, [r0, r1]
    // str r0, [sp]
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _0221C2B6
    // ldr r1, _0221C380 ; =0x000001D3
    // cmp r0, r1
    // ble _0221C2BA
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #0x68]
    // str r0, [r4, #4]
    // ldr r1, [sp]
    // ldr r2, [r4]
    // bl AllocAndReadWholeNarcMemberByIdPair
    // str r0, [r4, #0x14]
    // cmp r0, #0
    // bne _0221C2DA
    // bne _0221C2D4
    // bl GF_AssertFail
    // add sp, #0x6c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #0
    // bl GetBgPriority
    // mov r1, #0x6b
    // lsl r1, r1, #2
    // strb r0, [r4, r1]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #1
    // bl GetBgPriority
    // ldr r1, _0221C384 ; =0x000001AD
    // strb r0, [r4, r1]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #2
    // bl GetBgPriority
    // ldr r1, _0221C388 ; =0x000001AE
    // strb r0, [r4, r1]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #3
    // bl GetBgPriority
    // ldr r1, _0221C38C ; =0x000001AF
    // mov r2, #0
    // strb r0, [r4, r1]
    // add r1, r4, #0
    // add r5, r2, #0
    // add r0, r1, #0
    // add r0, #0xdc
    // add r2, r2, #1
    // add r1, r1, #4
    // str r5, [r0]
    // cmp r2, #0xa
    // blt _0221C324
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r1, r0, #0
    // add r2, r4, #0
    // mov r3, #0
    // add r1, #0x14
    // str r3, [r2, r0]
    // str r3, [r2, r1]
    // add r5, r5, #1
    // add r2, r2, #4
    // cmp r5, #5
    // blt _0221C33E
    // mov r0, #6
    // add r1, r4, #0
    // mov r2, #0
    // lsl r0, r0, #6
    // add r3, r3, #1
    // str r2, [r1, r0]
    // add r1, r1, #4
    // cmp r3, #4
    // blt _0221C352
    // add r0, r4, #0
    // ldr r1, _0221C390 ; =ov07_0221BE44
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x8d
    // mov r1, #0xff
    // strb r2, [r0]
    // add r0, r1, #0
    // add r0, #0xa9
    // str r1, [r4, r0]
    // mov r0, #1
    // str r0, [r4, #0x10]
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221C37C: .word ov07_02234C64
    // _0221C380: .word 0x000001D3
    // _0221C384: .word 0x000001AD
    // _0221C388: .word 0x000001AE
    // _0221C38C: .word 0x000001AF
    // _0221C390: .word ov07_0221BE44
    // TODO: decompile
}



void ov07_0221C394(void) {
}



void ov07_0221C3B0(void) {
    // ldr r0, [r0, #0x10]
    // cmp r0, #1
    // bne _0221C3BA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov07_0221C3C0(void) {
    GF_AssertFail(*((u32*)(r0 + 0x14)));
    Heap_Free(0);
}



void ov07_0221C3DC(void) {
    // cmp r0, #0
    // bne _0221C3E4
    // mov r0, #0
    // bx lr
    // ldr r0, [r0, #0xc]
    // cmp r0, #1
    // bne _0221C3EE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov07_0221C3F4(void) {
}



void ov07_0221C410(void) {
}



void ov07_0221C42C(void) {
}



void ov07_0221C448(void) {
    // add r3, r0, #0
    // add r2, r1, #0
    // add r1, r3, #0
    // ldr r3, _0221C454 ; =ov07_0221BEA4
    // mov r0, #1
    // bx r3
    // _0221C454: .word ov07_0221BEA4
    // TODO: decompile
}



void ov07_0221C458(void) {
    // add r3, r0, #0
    // add r2, r1, #0
    // add r1, r3, #0
    // ldr r3, _0221C464 ; =ov07_0221BEA4
    // mov r0, #2
    // bx r3
    // _0221C464: .word ov07_0221BEA4
    // TODO: decompile
}



void ov07_0221C468(void) {
    // add r0, #0xc0
}



void ov07_0221C470(void) {
    // add r0, #0xc0
}



void ov07_0221C478(void) {
    // add r0, #0xc0
    // add r0, r1, r0
}



void ov07_0221C488(void) {
    // add r0, #0xc0
    // add r0, r2, r0
}



void ov07_0221C494(void) {
    // add r0, #0xc0
    // add r0, r2, r0
}



void ov07_0221C4A0(void) {
    // add r0, #0xc4
}



void ov07_0221C4A8(void) {
}



void ov07_0221C4C0(void) {
    GF_AssertFail();
    GF_AssertFail();
    // add r5, #0xdc
    // ldr r0, [r5, r4]
    GF_AssertFail();
    // ldr r0, [r5, r4]
}



void ov07_0221C4E8(void) {
    GF_AssertFail();
    GF_AssertFail();
    // add r5, r5, r0
    // ldr r0, [r5, r4]
    GF_AssertFail((0x4f << 2));
    // ldr r0, [r5, r4]
}



void ov07_0221C514(void) {
}



void ov07_0221C528(void) {
    // add r0, #0xcc
}



void ov07_0221C530(void) {
    // add r0, #0xc0
    // add r0, #0xac
}



void ov07_0221C53C(void) {
    Heap_Alloc(*((u32*)r0), 0x3c);
    GF_AssertFail();
    memset(0, 0, 0x3c);
    // add r0, #0x90
    // ldrh r0, [r0]
    // add r5, #0x90
    // strh r0, [r5]
}



void ov07_0221C56C(void) {
    // ldr r3, _0221C578 ; =SysTask_CreateOnMainQueue
    // str r0, [r1, #0x38]
    // ldr r0, _0221C57C ; =ov07_0221C584
    // ldr r2, _0221C580 ; =0x0000044C
    // bx r3
    // nop
    // _0221C578: .word SysTask_CreateOnMainQueue
    // _0221C57C: .word ov07_0221C584
    // _0221C580: .word 0x0000044C
    // TODO: decompile
}



void ov07_0221C584(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrb r1, [r4]
    // add r5, r0, #0
    // add r0, r4, #0
    // lsl r2, r1, #2
    // ldr r1, _0221C5C0 ; =ov07_02234C08
    // ldr r1, [r1, r2]
    // blx r1
    // cmp r0, #0
    // bne _0221C5BE
    // ldr r0, [r4, #0x38]
    // add r1, r0, #0
    // add r1, #0x90
    // ldrh r1, [r1]
    // cmp r1, #0
    // beq _0221C5B2
    // add r1, r0, #0
    // add r1, #0x90
    // ldrh r1, [r1]
    // add r0, #0x90
    // sub r1, r1, #1
    // strh r1, [r0]
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // _0221C5C0: .word ov07_02234C08
    // TODO: decompile
}



u8 ov07_0221C5C4(void) {
}



void ov07_0221C5C8(void) {
    *((u8*)(r0 + 4)) = (*((u8*)(r0 + 4)) + 1);
    *((u8*)(r0 + 4)) = 0;
    // add r1, r2, r1
    *((u32*)(r0 + 0x14)) = *((u32*)(r0 + 0x10));
    sub_020061EC(*((u32*)(r0 + 0x14)), *((u32*)(r0 + 0x14)), *((u32*)(r0 + 0xc)));
    IsSEPlaying(*((u16*)(r5 + 0x1a)));
}



void ov07_0221C624(void) {
}



void ov07_0221C62C(void) {
}



void ov07_0221C634(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r1, [r5, #4]
    // add r0, r1, #1
    // strb r0, [r5, #4]
    // ldrb r0, [r5, #3]
    // cmp r1, r0
    // bhs _0221C648
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // strb r0, [r5, #4]
    // ldrb r0, [r5, #0x18]
    // mov r4, #1
    // sub r0, r0, #1
    // strb r0, [r5, #0x18]
    // ldrh r0, [r5, #0x1a]
    // bl PlaySE
    // ldrh r0, [r5, #0x1a]
    // ldr r1, _0221C670 ; =0x0000FFFF
    // ldr r2, [r5, #0x14]
    // bl sub_020061B4
    // ldrb r0, [r5, #0x18]
    // cmp r0, #0
    // bne _0221C66C
    // mov r4, #0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _0221C670: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221C674(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r2, [r4, #3]
    // mov r0, #1
    // sub r1, r2, #1
    // strb r1, [r4, #3]
    // cmp r2, #0
    // bne _0221C696
    // ldrh r0, [r4, #0x1a]
    // bl PlaySE
    // ldrh r0, [r4, #0x1a]
    // ldr r1, _0221C698 ; =0x0000FFFF
    // ldr r2, [r4, #0x14]
    // bl sub_020061B4
    // mov r0, #0
    // pop {r4, pc}
    // _0221C698: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221C69C(void) {
}



void ov07_0221C6B4(void) {
    // push {r3, r4}
    // add r2, r0, #0
    // mov r1, #1
    // add r2, #0x8d
    // strb r1, [r2]
    // ldr r3, _0221C6E8 ; =gSystem
    // lsl r2, r1, #9
    // ldr r4, [r3, #0x44]
    // tst r2, r4
    // beq _0221C6E4
    // add r2, r1, #0
    // add r2, #0xff
    // tst r2, r4
    // beq _0221C6E4
    // ldr r2, [r3, #0x48]
    // lsl r1, r1, #0xa
    // tst r1, r2
    // beq _0221C6E4
    // ldr r1, [r0, #0x18]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // mov r1, #0
    // add r0, #0x8d
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // _0221C6E8: .word gSystem
    // TODO: decompile
}



void ov07_0221C6EC(void) {
    // ldr r1, [r0, #0x18]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // ldr r2, [r1]
    // add r1, r0, #0
    // add r1, #0x8d
    // strb r2, [r1]
    // ldr r1, [r0, #0x18]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // ldr r1, _0221C708 ; =ov07_0221BE20
    // add r0, #0xbc
    // str r1, [r0]
    // bx lr
    // _0221C708: .word ov07_0221BE20
    // TODO: decompile
}



void ov07_0221C70C(void) {
    // add r1, #0x8e
    // ldrh r1, [r1]
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r0, #0x8d
    // strb r1, [r0]
    // add r0, #0x8d
    // strb r1, [r0]
}



void ov07_0221C72C(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // add r0, r0, r1
    // add r0, #0x94
    // str r2, [r0]
}



void ov07_0221C74C(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r1, #0x94
    // str r2, [r1]
}



void ov07_0221C768(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221C778: ; jump table
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
}



void ov07_0221C7B8(void) {
    // str r2, [sp]
    // mov ip, r0
    // add r2, #0xc0
    // add r2, r2, r6
    // add r2, #0xb0
    *((u32*)(r1 + 8)) = *((u32*)*((u32*)r0));
    // add r2, #0xc0
    // add r2, r2, r6
    // add r2, #0xc4
    *((u32*)(r1 + 0x18)) = *((u32*)*((u32*)r0));
    // add r2, #0xc0
    // mov r2, ip
    // add r2, r4, r2
    // add r2, #0xd8
    // ldrh r2, [r2]
    *((u16*)(r1 + 0x28)) = r0;
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xe0
    // ldrb r4, [r2]
    // add r2, r1, r0
    // add r2, #0x30
    // strb r4, [r2]
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xe4
    // ldrb r4, [r2]
    // add r2, r1, r0
    // add r2, #0x34
    // strb r4, [r2]
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xe8
    // ldrb r4, [r2]
    // add r2, r1, r0
    // add r2, #0x38
    // strb r4, [r2]
    // add r2, #0xc0
    // add r2, r2, r6
    // add r2, #0xec
    *((u32*)(r1 + 0x3c)) = *((u32*)*((u32*)r0));
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xc0
    // ldrb r4, [r2]
    // add r2, r1, r0
    // add r2, #0x4c
    // strb r4, [r2]
    // mov r2, ip
    // mov ip, r2
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C86E: ; jump table
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = *((u16*)(*((u32*)r0) + 0x16));
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = *((u16*)(*((u32*)r0) + 0x14));
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = *((u16*)(*((u32*)r0) + 0x14));
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = *((u16*)(*((u32*)r0) + 0x14));
    GF_AssertFail(*((u16*)(*((u32*)r0) + 0x14)), (*((u32*)r0) + 2), r0);
}



void ov07_0221C8CC(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r1, sp, #0
    ov07_0221C7B8(((*((u32*)(r0 + 0x18)) + 4) + 4), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    // add r0, sp, #0
    ov07_02234A20(*((u32*)r5));
    ov07_0223475C(*((u32*)r5));
    ov07_0223474C(*((u32*)r5));
}



void ov07_0221C910(void) {
}



void ov07_0221C934(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // mul r1, r2
    // add r1, r0, r1
    *((u32*)(0xc + 0x30)) = 1;
    // add r2, #0x2c
    // strb r3, [r2]
    // add r2, #0x2d
    // strb r3, [r2]
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(0xc + 0x28)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r3, #0xc
}



void ov07_0221C974(void) {
    // add r3, #0x18
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // mul r4, r1
    // add r2, #0x2c
    // ldrb r1, [r2, r4]
    // strb r1, [r2, r4]
    // ldrb r3, [r2, r4]
    // add r2, r0, r4
    // add r1, #0x2d
    // ldrb r1, [r1]
    *((u32*)(r0 + 0x30)) = 0;
    *((u32*)(0 + 0x18)) = *((u32*)(r0 + 0x28));
    // sub r3, #0xc
    // bpl _0221C982
}



void ov07_0221C9C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _0221CBAC ; =0x0000017E
    // add r5, r0, #0
    // ldrb r0, [r5, r1]
    // mov r6, #0
    // cmp r0, #1
    // bhs _0221C9DE
    // add r0, r5, #0
    // mov r2, #1
    // add r0, #0x8d
    // strb r2, [r0]
    // ldrb r0, [r5, r1]
    // add r0, r0, #1
    // strb r0, [r5, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r7, r6, #0
    // add r4, r6, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, r0, r4
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0
    // beq _0221C9F6
    // bl sub_020154B0
    // add r6, r6, r0
    // add r7, r7, #1
    // add r4, r4, #4
    // cmp r7, #0x10
    // blt _0221C9E2
    // cmp r6, #0
    // bne _0221CA16
    // add r0, r5, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _0221CA16
    // add r0, r5, #0
    // add r0, #0x90
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0221CA26
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0x8d
    // strb r1, [r0]
    // ldr r0, _0221CBB0 ; =0x0000017D
    // mov r1, #0
    // strb r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_IsAnySEPlaying
    // cmp r0, #0
    // beq _0221CA50
    // ldr r0, _0221CBB0 ; =0x0000017D
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // ldrb r1, [r5, r0]
    // cmp r1, #0x5a
    // bls _0221CA48
    // mov r1, #0
    // strb r1, [r5, r0]
    // add r0, r5, #0
    // add r0, #0x8d
    // strb r1, [r0]
    // b _0221CA50
    // mov r0, #1
    // add r5, #0x8d
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0221CBB0 ; =0x0000017D
    // mov r1, #0
    // strb r1, [r5, r0]
    // add r0, r0, #1
    // strb r1, [r5, r0]
    // add r0, r5, #0
    // add r2, r1, #0
    // add r1, r1, #1
    // str r2, [r0, #0x1c]
    // add r0, r0, #4
    // cmp r1, #3
    // blt _0221CA5E
    // add r1, r5, #0
    // mov r4, #0
    // add r0, r1, #0
    // str r4, [r1, #0x28]
    // add r0, #0x2c
    // strb r4, [r0]
    // add r0, r1, #0
    // add r0, #0x2d
    // strb r4, [r0]
    // str r4, [r1, #0x30]
    // add r2, r2, #1
    // add r1, #0xc
    // cmp r2, #3
    // blt _0221CA6C
    // add r7, r5, #0
    // mov r6, #0
    // add r0, r7, #0
    // add r0, #0xcc
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _0221CAA0
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, #0xac
    // ldr r0, [r0]
    // bl SpriteSystem_FreeResourcesAndManager
    // add r0, r7, #0
    // add r0, #0xcc
    // add r4, r4, #1
    // add r7, r7, #4
    // str r6, [r0]
    // cmp r4, #4
    // blt _0221CA88
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221D55C
    // add r6, r6, #1
    // cmp r6, #5
    // blt _0221CAAE
    // mov r6, #0
    // add r4, r6, #0
    // add r7, r6, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, r0, r4
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0
    // beq _0221CADE
    // bl ov07_0221FF2C
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, r0, r4
    // str r7, [r0, #0x1c]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #0x10
    // blt _0221CAC2
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r5, r0
    // mov r1, #5
    // bl ov07_0221DD14
    // bl BattleSystem_SetDefaultBlend
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221FAEC
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // lsl r0, r4, #0x18
    // mov r1, #1
    // lsr r0, r0, #0x18
    // lsl r1, r1, #0xe
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // add r0, r5, #0
    // bl ov07_0221C4A0
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221FAEC
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // mov r1, #0x6b
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // mov r0, #0
    // bl SetBgPriority
    // ldr r1, _0221CBB4 ; =0x000001AD
    // mov r0, #1
    // ldrb r1, [r5, r1]
    // bl SetBgPriority
    // ldr r1, _0221CBB8 ; =0x000001AE
    // mov r0, #2
    // ldrb r1, [r5, r1]
    // bl SetBgPriority
    // ldr r1, _0221CBBC ; =0x000001AF
    // mov r0, #3
    // ldrb r1, [r5, r1]
    // bl SetBgPriority
    // add r0, r5, #0
    // add r0, #0xc4
    // mov r2, #0
    // ldr r0, [r0]
    // mov r1, #2
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add r0, r5, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #2
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, r5, #0
    // add r0, #0xc4
    // mov r2, #0
    // ldr r0, [r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // add r0, r5, #0
    // add r0, #0xc4
    // mov r1, #3
    // ldr r0, [r0]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // mov r0, #0
    // str r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221CBAC: .word 0x0000017E
    // _0221CBB0: .word 0x0000017D
    // _0221CBB4: .word 0x000001AD
    // _0221CBB8: .word 0x000001AE
    // _0221CBBC: .word 0x000001AF
    // TODO: decompile
}



void ov07_0221CBC0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // str r0, [sp]
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    *((u32*)(r0 + 0x18)) = ((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4);
    // add r0, #0xc0
    *((u32*)(*((u32*)r0) + 0x18)) = *((u32*)(*((u32*)(r0 + 0x18)) + 4));
    // add r0, r5, r4
    // add r0, #0x7c
    // ldrb r0, [r0]
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #4
    sub_020154D4(*((u32*)(*((u32*)r0) + 0x1c)), ((*((u32*)(r0 + 0x18)) + 4) + 4));
    // ldr r1, [sp, #8]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [sp, #8]
    // add r0, #0xc0
    // add r1, sp, #4
    // add r0, r0, r6
    sub_020154E4(*((u32*)(*((u32*)r5) + 0x1c)));
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // ldrb r1, [r1]
    sub_02015528(*((u32*)(*((u32*)r5) + 0x1c)));
    // add r0, #0xc0
    // ldr r1, [sp]
    // add r0, r0, r6
    ov07_0221FF18(*((u32*)(*((u32*)r5) + 0x1c)), r7, r5);
    // add r5, #0xc0
    *((u32*)(*((u32*)r5) + 0x5c)) = r0;
}



void ov07_0221CC54(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    *((u32*)(r0 + 0x18)) = ((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4);
    // str r0, [sp, #4]
    // str r0, [sp]
    *((u32*)(r0 + 0x18)) = (((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4) + 4);
    // add r0, #0xc0
    *((u32*)(*((u32*)r0) + 0x18)) = *((u32*)(*((u32*)(r0 + 0x18)) + 4));
    // add r0, r5, r4
    // add r0, #0x7c
    // ldrb r0, [r0]
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #8
    sub_020154D4(*((u32*)(*((u32*)r0) + 0x1c)), ((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4));
    // ldr r1, [sp, #0xc]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [sp, #0xc]
    // add r0, #0xc0
    // add r1, sp, #8
    // add r0, r0, r6
    sub_020154E4(*((u32*)(*((u32*)r5) + 0x1c)));
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // ldrb r1, [r1]
    sub_02015528(*((u32*)(*((u32*)r5) + 0x1c)));
    // add r0, #0xc0
    // ldr r1, [sp, #4]
    // add r0, r0, r6
    // ldr r2, [sp]
    ov07_0221FF18(*((u32*)(*((u32*)r5) + 0x1c)), r5);
    // add r5, #0xc0
    // add r1, r2, r1
    *((u32*)((r7 << 2) + 0x5c)) = r0;
}



void ov07_0221CCF4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x90
    // ldr r5, _0221CD48 ; =ov07_02234CC8
    // add r4, r0, #0
    // add r3, sp, #0
    // mov r2, #0x12
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0221CD00
    // add r0, r4, #0
    // bl ov07_0221C468
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov07_0221C470
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov07_02231924
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov07_02231924
    // mov r1, #0x18
    // add r3, r5, #0
    // mul r3, r1
    // add r2, sp, #0
    // lsl r1, r0, #2
    // add r0, r2, r3
    // ldr r4, [r1, r0]
    // cmp r4, #0xff
    // bne _0221CD40
    // bl GF_AssertFail
    // sub r0, r4, #1
    // add sp, #0x90
    // pop {r4, r5, r6, pc}
    // nop
    // _0221CD48: .word ov07_02234CC8
    // TODO: decompile
}



void ov07_0221CD4C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x90
    // ldr r5, _0221CDA0 ; =ov07_02234D58
    // add r4, r0, #0
    // add r3, sp, #0
    // mov r2, #0x12
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0221CD58
    // add r0, r4, #0
    // bl ov07_0221C468
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov07_0221C470
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov07_02231924
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov07_02231924
    // mov r1, #0x18
    // add r3, r5, #0
    // mul r3, r1
    // add r2, sp, #0
    // lsl r1, r0, #2
    // add r0, r2, r3
    // ldr r4, [r1, r0]
    // cmp r4, #0xff
    // bne _0221CD98
    // bl GF_AssertFail
    // add r0, r4, #0
    // add sp, #0x90
    // pop {r4, r5, r6, pc}
    // nop
    // _0221CDA0: .word ov07_02234D58
    // TODO: decompile
}



void ov07_0221CDA4(void) {
    // add r0, #0x18
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r2, sp, #0x10
    // str r3, [r2]
    // str r3, [r0]
    // str r1, [sp]
    // str r1, [r0]
    // add r0, #0xc0
    *((u32*)(*((u32*)r0) + 0x18)) = *((u32*)(*((u32*)(r0 + 0x18)) + 4));
    // add r0, r5, r4
    // add r0, #0x7c
    // ldrb r0, [r0]
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #4
    sub_020154D4(*((u32*)(*((u32*)r0) + 0x1c)), (*((u32*)r0) + 4), (r2 + 4), (*((u32*)r0) + 4));
    // ldr r1, [sp, #8]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [sp, #8]
    // add r0, #0xc0
    // add r1, sp, #4
    // add r0, r0, r6
    sub_020154E4(*((u32*)(*((u32*)r5) + 0x1c)));
    ov07_0221CCF4(r5);
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // ldrb r1, [r1]
    sub_02015528(*((u32*)(*((u32*)r5) + 0x1c)));
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #0x10
    // ldr r1, [r1, r2]
    // ldr r2, [sp]
    ov07_0221FF18(*((u32*)(*((u32*)r5) + 0x1c)), (r7 << 2), r5);
    // add r5, #0xc0
    *((u32*)(*((u32*)r5) + 0x5c)) = r0;
}



void ov07_0221CE5C(void) {
    // add r0, #0x18
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r2, sp, #0x10
    // str r3, [r2]
    // str r3, [r0]
    // str r1, [sp]
    // str r1, [r0]
    // add r0, #0xc0
    *((u32*)(*((u32*)r0) + 0x18)) = *((u32*)(*((u32*)(r0 + 0x18)) + 4));
    // add r0, r5, r4
    // add r0, #0x7c
    // ldrb r0, [r0]
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #4
    sub_020154D4(*((u32*)(*((u32*)r0) + 0x1c)), (*((u32*)r0) + 4), (r2 + 4), (*((u32*)r0) + 4));
    // ldr r1, [sp, #8]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [sp, #8]
    // add r0, #0xc0
    // add r1, sp, #4
    // add r0, r0, r6
    sub_020154E4(*((u32*)(*((u32*)r5) + 0x1c)));
    ov07_0221CD4C(r5);
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // ldrb r1, [r1]
    sub_02015528(*((u32*)(*((u32*)r5) + 0x1c)));
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #0x10
    // ldr r1, [r1, r2]
    // ldr r2, [sp]
    ov07_0221FF18(*((u32*)(*((u32*)r5) + 0x1c)), (r7 << 2), r5);
    // add r5, #0xc0
    *((u32*)(*((u32*)r5) + 0x5c)) = r0;
}



void ov07_0221CF14(void) {
    // add r0, #0xc0
    // add r0, r0, r4
    sub_020154B0(*((u32*)(*((u32*)r0) + 0x1c)));
    // add r6, r6, r0
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // add r5, #0x8d
    // strb r0, [r5]
    // add r5, #0x8d
    // strb r0, [r5]
}



void ov07_0221CF54(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // lsl r4, r1, #2
    // add r0, r0, r4
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0
    // beq _0221CF78
    // bl GF_AssertFail
    // ldr r0, [r5, #0x18]
    // mov r2, #0
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r5]
    // bl ov07_0221FE88
    // add r1, r5, #0
    // add r1, #0xc0
    // ldr r1, [r1]
    // add r1, r1, r4
    // str r0, [r1, #0x1c]
    // add r0, r5, #0
    // mov r1, #2
    // add r0, #0x8d
    // strb r1, [r0]
    // ldr r0, _0221CFA4 ; =ov07_0221BE20
    // add r5, #0xbc
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // nop
    // _0221CFA4: .word ov07_0221BE20
    // TODO: decompile
}



void ov07_0221CFA8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // lsl r4, r1, #2
    // add r0, r0, r4
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0
    // beq _0221CFCE
    // bl GF_AssertFail
    // ldr r0, [r5, #0x18]
    // mov r1, #0x60
    // ldr r2, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r5]
    // mov r3, #0
    // bl ov07_0221FEB0
    // add r1, r5, #0
    // add r1, #0xc0
    // ldr r1, [r1]
    // add r1, r1, r4
    // str r0, [r1, #0x1c]
    // add r0, r5, #0
    // mov r1, #2
    // add r0, #0x8d
    // strb r1, [r0]
    // ldr r0, _0221CFFC ; =ov07_0221BE20
    // add r5, #0xbc
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // nop
    // _0221CFFC: .word ov07_0221BE20
    // TODO: decompile
}



void ov07_0221D000(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r0, #0xc0
    // add r0, r0, r4
    ov07_0221FF2C(*((u32*)(*((u32*)r0) + 0x1c)), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    // add r5, #0xc0
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 0x1c)) = 0;
}



void ov07_0221D02C(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r1, r0, r1
    *((u32*)((0 << 2) + 0x1c)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r1, r2, r1
    *((u32*)(r0 + 0x18)) = (*((u32*)*((u32*)(r0 + 0x18))) << 2);
}



void ov07_0221D05C(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r3, #8
    // add r3, #0x1c
    // ldr r1, [r3, r2]
    *((u32*)(r0 + 0x18)) = *((u32*)(r0 + 0x1c));
    // str r0, [r3, r2]
    // bpl _0221D068
}



void ov07_0221D088(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // add r2, r0, r2
    // add r2, #0x94
    // add r1, #0x18
    *((u32*)(r0 + 0x18)) = *((u32*)*((u32*)(r0 + 0x18)));
    // str r0, [r1]
}



void ov07_0221D0C0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r0, #0xc0
    ov07_0221F8C4(*((u32*)r0));
    *((u32*)(r4 + 0x18)) = *((u32*)*((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0x18)) = (*((u32*)*((u32*)(r4 + 0x18))) + 4);
}



void ov07_0221D0E8(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    ov07_02223038(*((u32*)(*((u32*)(r0 + 0x18)) + 4)), ((*((u32*)(r0 + 0x18)) + 4) + 4));
    // add r2, #0x18
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 4);
    // add r0, #0x94
    // str r1, [r0]
    // str r0, [r2]
    // add r2, r4, r0
    // add r0, #0x94
    // str r1, [r0]
    // blx r7
}



void ov07_0221D148(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r2, #0xc0
    // add r1, #0x18
    // tst r2, r3
    // str r2, [r1]
    // add r1, r2, r1
    *((u32*)(r0 + 0x18)) = (*((u32*)*((u32*)(r0 + 0x18))) << 2);
}



void ov07_0221D174(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r1, #0xc0
    ov07_0223192C(*((u16*)(*((u32*)r0) + 0x14)), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    // add r1, #0xc0
    ov07_0223192C(*((u16*)(*((u32*)r4) + 0x16)));
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 4);
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = (*((u32*)*((u32*)(r4 + 0x18))) << 2);
}



void ov07_0221D1B8(void) {
    // push {r4, r5}
    // sub sp, #0x10
    // ldr r5, _0221D210 ; =ov07_02234B98
    // add r2, sp, #0
    // add r4, r0, #0
    // add r3, r2, #0
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [r4, #0x18]
    // add r0, r4, #0
    // add r1, r1, #4
    // str r1, [r4, #0x18]
    // add r1, r4, #0
    // add r1, #0xc0
    // ldr r1, [r1]
    // add r0, #0x18
    // ldr r1, [r1, #0xc]
    // cmp r1, #0
    // beq _0221D1FE
    // ldr r2, [r0]
    // add r2, r2, #4
    // str r2, [r0]
    // mov r2, #0
    // ldr r5, [r3]
    // tst r5, r1
    // bne _0221D1FE
    // ldr r5, [r0]
    // add r2, r2, #1
    // add r5, r5, #4
    // add r3, r3, #4
    // str r5, [r0]
    // cmp r2, #4
    // blo _0221D1EA
    // ldr r1, [r4, #0x18]
    // ldr r0, [r1]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // str r0, [r4, #0x18]
    // add sp, #0x10
    // pop {r4, r5}
    // bx lr
    // nop
    // _0221D210: .word ov07_02234B98
    // TODO: decompile
}



void ov07_0221D214(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    ov07_0221BFC0((*((u32*)(r0 + 0x18)) + 4));
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = (*((u32*)*((u32*)(r4 + 0x18))) << 2);
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 4);
}



void ov07_0221D23C(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r2, #0xc0
    // ldr r2, [r3, r2]
    // add r1, #0x18
    // asr r2, r2, #0x1f
    // add r0, r2, r0
    // str r0, [r1]
    // str r0, [r1]
}



void ov07_0221D270(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r1, #0xc0
    ov07_0223192C(*((u16*)(*((u32*)r0) + 0x14)));
    // add r1, #0xc0
    ov07_0223192C(r5, *((u16*)(*((u32*)r5) + 0x16)));
    // add r0, r1, r0
    *((u32*)(r5 + 0x18)) = (*((u32*)*((u32*)(r5 + 0x18))) << 2);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
}



void ov07_0221D2B0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r2, #0xc0
    // add r1, #0x18
    // add r0, r2, r0
    // str r0, [r1]
    // str r0, [r1]
}



void ov07_0221D2E4(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r1, r2, r1
    *((u32*)(r0 + 0x18)) = (*((u32*)(*((u32*)(r0 + 0x18)) + 4)) << 2);
}



void ov07_0221D2F4(void) {
    // str r1, [sp]
    StartBrightnessTransition(((((*((u32*)(r0 + 4)) << 0x18) >> 0x18) << 0x18) >> 0x18), 0x10, 0, 0x3c);
    // str r1, [sp]
    StartBrightnessTransition(((((*((u32*)(r0 + 4)) << 0x18) >> 0x18) << 0x18) >> 0x18), 0, 0x10, 0x3c);
}



void ov07_0221D330(void) {
    DoAllScreenBrightnessTransitionStep();
    IsBrightnessTransitionActive(1);
    Heap_Free(r4);
    SysTask_Destroy(r5);
    ov07_0221C69C();
    ov07_0221D2F4(r4, 0);
    // orr r0, r1
    *((u32*)(r4 + 4)) = (1 << 8);
}



void ov07_0221D374(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #8
    // bl MI_CpuFill8
    // str r5, [r4]
    // ldr r0, [r5, #0x18]
    // mov r1, #0xff
    // add r2, r0, #4
    // str r2, [r5, #0x18]
    // ldr r0, [r4, #4]
    // bic r0, r1
    // ldr r1, [r2]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // orr r0, r1
    // str r0, [r4, #4]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // bl ScreenBrightnessData_InitAll
    // add r0, r4, #0
    // mov r1, #1
    // bl ov07_0221D2F4
    // ldr r0, _0221D3C4 ; =ov07_0221D330
    // ldr r2, _0221D3C8 ; =0x00001001
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // _0221D3C4: .word ov07_0221D330
    // _0221D3C8: .word 0x00001001
    // TODO: decompile
}



void ov07_0221D3CC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221D3E0: ; jump table
    // add r4, #0xc0
    // add r4, #0xc0
    // add r4, #0xc0
    ov07_0223197C(*((u32*)r0), *((u16*)(*((u32*)r0) + 0x14)));
    // add r4, #0xc0
    ov07_0223197C(*((u16*)(*((u32*)r4) + 0x16)));
    ov07_0221FA04(r4, 0);
    ov07_0221FA04(r4, 0);
    ov07_0221FA04(r4, 0);
    ov07_0221FA04(r4, 0);
}



void ov07_0221D4B0(void) {
    *((u8*)(r1 + 4)) = (*((u8*)(r1 + 4)) + 1);
    *((u8*)(r1 + 4)) = 0;
    Pokepic_GetAttr(*((u32*)(r1 + 8)), 0);
    // asr r6, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r5 + 8)), 1);
    // asr r4, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r5 + 8)), 0x29);
    // sub r0, r4, r0
    // asr r2, r0, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r5), r6);
}



void ov07_0221D4FC(void) {
    *((u8*)(r1 + 4)) = (*((u8*)(r1 + 4)) + 1);
    *((u8*)(r1 + 4)) = 0;
    Pokepic_GetAttr(*((u32*)(r1 + 8)), 0);
    // asr r6, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r5 + 8)), 1);
    // asr r4, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r5 + 8)), 0x29);
    // sub r0, r4, r0
    // asr r4, r0, #0x10
    // sub r6, #0x28
    // neg r3, r6
    BgSetPosTextAndCommit(*((u32*)r5), 2, 0);
    // sub r4, #0x28
    // neg r3, r4
    BgSetPosTextAndCommit(*((u32*)r5), 2, 3);
}



void ov07_0221D55C(void) {
    // ldr r0, [r4, r0]
    SysTask_Destroy(*((u32*)((0x5e << 2) + 0xc)));
    // ldr r0, [r4, r0]
    Heap_Free((0x5e << 2));
    // str r1, [r4, r0]
    // add r4, r4, r0
    // ldr r0, [r4, r5]
    SysTask_Destroy(*((u32*)((0x59 << 2) + 0xc)), 0);
    // ldr r0, [r4, r5]
    Heap_Free();
    // str r0, [r4, r5]
}



void ov07_0221D5A8(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221D5AC(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221D5B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r1, [r5, #0x18]
    // add r2, r1, #4
    // str r2, [r5, #0x18]
    // ldr r1, [r2]
    // add r2, r2, #4
    // str r2, [r5, #0x18]
    // ldr r4, [r2]
    // add r2, r2, #4
    // str r2, [r5, #0x18]
    // bl ov07_0221D3CC
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // lsl r0, r6, #2
    // add r0, r1, r0
    // add r0, #0xb0
    // ldr r1, [r0]
    // ldr r0, [r1, #4]
    // ldr r7, [r1]
    // str r0, [sp, #0x14]
    // ldr r0, [r1, #8]
    // str r0, [sp, #0x10]
    // mov r0, #2
    // bl BgGetCharPtr
    // mov r2, #0x19
    // mov r1, #0
    // lsl r2, r2, #8
    // bl MI_CpuFill8
    // mov r0, #2
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0xc4
    // mov r3, #0x32
    // ldr r0, [r0]
    // mov r1, #2
    // add r2, r7, #0
    // lsl r3, r3, #6
    // bl BG_LoadCharTilesData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x80
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r3, [r5]
    // bl PaletteData_LoadNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #0x1b
    // add r2, r5, #0
    // str r0, [sp, #0xc]
    // lsl r1, r1, #4
    // add r2, #0xc4
    // ldr r0, [r5, r1]
    // ldr r2, [r2]
    // sub r1, #0xa4
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // cmp r4, #1
    // bne _0221D696
    // ldr r0, [r5]
    // mov r1, #0x10
    // bl Heap_Alloc
    // mov r1, #0x5e
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // str r2, [r0]
    // add r0, r5, #0
    // bl ov07_0221FA48
    // mov r1, #0x5e
    // lsl r1, r1, #2
    // ldr r2, [r5, r1]
    // str r0, [r2, #8]
    // ldr r0, [r5, r1]
    // mov r2, #0
    // strb r2, [r0, #4]
    // ldr r0, [r5, r1]
    // strb r2, [r0, #5]
    // ldr r0, _0221D710 ; =ov07_0221D4FC
    // ldr r1, [r5, r1]
    // ldr r2, _0221D714 ; =0x00001001
    // bl SysTask_CreateOnMainQueue
    // mov r1, #0x5e
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // str r0, [r1, #0xc]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // mov r1, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // add r0, r5, #0
    // add r0, #0xc4
    // sub r7, #0x28
    // ldr r0, [r0]
    // mov r1, #2
    // mov r2, #0
    // neg r3, r7
    // bl BgSetPosTextAndCommit
    // add r0, r5, #0
    // add r0, #0xc4
    // sub r4, #0x28
    // ldr r0, [r0]
    // mov r1, #2
    // mov r2, #3
    // neg r3, r4
    // bl BgSetPosTextAndCommit
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // add r0, r5, #0
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // mov r0, #2
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D710: .word ov07_0221D4FC
    // _0221D714: .word 0x00001001
    // TODO: decompile
}



void ov07_0221D718(void) {
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    BgGetCharPtr(2);
    MI_CpuFill8(0, (0x19 << 8));
    ov07_0221D55C(r4, 4);
}



void ov07_0221D740(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // ldr r3, _0221D7B4 ; =ov07_02234BF0
    // add r2, sp, #0
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x18]
    // add r0, r0, #4
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, #0xac
    // ldr r0, [r0]
    // bl SpriteManager_New
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r1, [r4, r1]
    // add r0, #0xac
    // ldr r0, [r0]
    // mov r2, #5
    // bl SpriteSystem_InitSprites
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r0, #0xac
    // ldr r0, [r0]
    // bl SpriteSystem_GetRenderer
    // mov r2, #0x11
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl G2dRenderer_SetSubSurfaceCoords
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x4e
    // add r0, #0xac
    // lsl r1, r1, #2
    // ldr r0, [r0]
    // ldr r1, [r4, r1]
    // add r2, sp, #0
    // bl SpriteSystem_InitManagerWithCapacities
    // add sp, #0x18
    // pop {r4, pc}
    // _0221D7B4: .word ov07_02234BF0
    // TODO: decompile
}



void ov07_0221D7B8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, [r5, #0x18]
    // ldr r1, _0221D870 ; =0x00004E21
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r2, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r4, r2, r1
    // ldrh r3, [r0, #0x14]
    // lsr r2, r1, #2
    // add r0, #0xac
    // mul r2, r3
    // add r4, r4, r2
    // mov r2, #0
    // str r2, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // mov r2, #0x6d
    // str r4, [sp, #8]
    // lsr r1, r1, #6
    // lsl r2, r2, #2
    // ldr r0, [r0]
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0x6d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r5, #0
    // str r0, [sp]
    // mov r3, #0x4b
    // str r3, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // str r4, [sp, #0x14]
    // add r2, #0xc0
    // ldr r2, [r2]
    // add r0, #0xc8
    // add r2, #0xac
    // add r3, #0xed
    // ldr r0, [r0]
    // ldr r2, [r2]
    // ldr r3, [r5, r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r2, #0x4e
    // str r4, [sp, #4]
    // add r0, #0xc0
    // ldr r0, [r0]
    // lsl r2, r2, #2
    // add r0, #0xac
    // ldr r1, [r5, r2]
    // add r2, #0x7c
    // ldr r0, [r0]
    // ldr r2, [r5, r2]
    // mov r3, #0x4d
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r2, #0x4e
    // str r4, [sp, #4]
    // add r0, #0xc0
    // ldr r0, [r0]
    // lsl r2, r2, #2
    // add r0, #0xac
    // ldr r1, [r5, r2]
    // add r2, #0x7c
    // ldr r0, [r0]
    // ldr r2, [r5, r2]
    // mov r3, #0x4e
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _0221D870: .word 0x00004E21
    // TODO: decompile
}



void ov07_0221D874(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x70
    // add r4, r0, #0
    // ldr r1, [r4, #0x18]
    // ldr r6, _0221DA68 ; =0x00004E21
    // add r2, r1, #4
    // str r2, [r4, #0x18]
    // ldr r1, [r2]
    // add r2, r2, #4
    // str r2, [r4, #0x18]
    // mov ip, r1
    // ldr r1, [r2]
    // add r2, r2, #4
    // str r2, [r4, #0x18]
    // str r1, [sp, #0x10]
    // ldr r1, [r2]
    // add r2, r2, #4
    // str r2, [r4, #0x18]
    // str r1, [sp, #0xc]
    // ldr r1, [r2]
    // add r2, r2, #4
    // str r2, [r4, #0x18]
    // add r2, r4, #0
    // add r2, #0xc0
    // ldr r2, [r2]
    // add r1, r1, r6
    // ldrh r3, [r2, #0x14]
    // lsr r2, r6, #2
    // mul r2, r3
    // add r2, r1, r2
    // str r2, [sp, #0x58]
    // add r2, r4, #0
    // add r2, #0xc0
    // ldr r2, [r2]
    // ldrh r3, [r2, #0x14]
    // lsr r2, r6, #2
    // mul r2, r3
    // add r2, r1, r2
    // str r2, [sp, #0x5c]
    // add r2, r4, #0
    // add r2, #0xc0
    // ldr r2, [r2]
    // ldrh r3, [r2, #0x14]
    // lsr r2, r6, #2
    // mul r2, r3
    // add r2, r1, r2
    // str r2, [sp, #0x60]
    // add r2, r4, #0
    // add r2, #0xc0
    // ldr r2, [r2]
    // lsr r3, r6, #2
    // ldrh r2, [r2, #0x14]
    // mul r3, r2
    // add r1, r1, r3
    // str r1, [sp, #0x64]
    // mov r1, #0
    // str r1, [sp, #0x68]
    // str r1, [sp, #0x6c]
    // mov r1, ip
    // bl ov07_0221D3CC
    // str r0, [sp, #0x1c]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // ldr r0, [sp, #0x1c]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // add r0, #0xb0
    // ldr r1, [r0]
    // ldr r0, [r1, #4]
    // str r0, [sp, #0x18]
    // ldr r0, [r1, #8]
    // str r0, [sp, #0x14]
    // ldr r0, [r1]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, r4, #0
    // bl ov07_0221FA48
    // add r6, r0, #0
    // beq _0221D93C
    // mov r1, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // add r0, r6, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // add r0, r6, #0
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // add r0, sp, #0x24
    // strh r7, [r0]
    // strh r5, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // strh r1, [r0, #6]
    // mov r0, #0x64
    // str r0, [sp, #0x2c]
    // mov r0, #1
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x50]
    // str r1, [sp, #0x54]
    // add r2, sp, #0x58
    // add r3, sp, #0x24
    // ldr r0, [r2]
    // add r1, r1, #1
    // str r0, [r3, #0x14]
    // add r2, r2, #4
    // add r3, r3, #4
    // cmp r1, #6
    // blt _0221D95A
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // mov r1, #0x4e
    // add r0, #0xac
    // lsl r1, r1, #2
    // ldr r0, [r0]
    // ldr r1, [r4, r1]
    // add r2, sp, #0x24
    // bl SpriteSystem_NewSprite
    // add r7, r0, #0
    // cmp r6, #0
    // bne _0221D98C
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _0221D9A0
    // add r0, r6, #0
    // mov r1, #6
    // bl Pokepic_GetAttr
    // cmp r0, #1
    // bne _0221D9A0
    // add r0, r7, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, [sp, #0x1c]
    // add r0, r4, #0
    // bl ov07_0221FA48
    // cmp r0, #0
    // beq _0221D9C2
    // ldr r0, [r7]
    // bl Sprite_GetImageProxy
    // add r1, r0, #0
    // mov r3, #0x32
    // ldr r1, [r1, #4]
    // ldr r2, [sp, #0x20]
    // mov r0, #0x13
    // lsl r3, r3, #6
    // bl GF_CreateNewVramTransferTask
    // ldr r1, [sp, #0x1c]
    // add r0, r4, #0
    // bl ov07_0221FA48
    // cmp r0, #0
    // beq _0221D9F8
    // ldr r0, [r7]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // mov r1, #2
    // str r1, [sp]
    // mov r1, #0x20
    // lsl r0, r0, #0x14
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // ldr r3, [r4]
    // bl PaletteData_LoadNarc
    // ldr r0, [sp, #0xc]
    // lsl r5, r0, #2
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r6, r4, r0
    // ldr r0, [r6, r5]
    // cmp r0, #0
    // beq _0221DA0C
    // bl GF_AssertFail
    // mov r0, #0x15
    // str r7, [r6, r5]
    // mov r2, #1
    // add r1, r4, r5
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // cmp r0, #1
    // bne _0221DA62
    // ldr r1, [sp, #0x1c]
    // add r0, r4, #0
    // bl ov07_0221FA48
    // cmp r0, #0
    // beq _0221DA62
    // mov r0, #0x59
    // lsl r0, r0, #2
    // add r6, r4, r0
    // ldr r0, [r4]
    // mov r1, #0x10
    // bl Heap_Alloc
    // str r0, [r6, r5]
    // ldr r0, [r6, r5]
    // ldr r1, [sp, #0x1c]
    // str r7, [r0]
    // add r0, r4, #0
    // bl ov07_0221FA48
    // ldr r1, [r6, r5]
    // ldr r2, _0221DA6C ; =0x00001001
    // str r0, [r1, #8]
    // ldr r0, [r6, r5]
    // mov r1, #0
    // strb r1, [r0, #4]
    // ldr r0, [r6, r5]
    // strb r1, [r0, #5]
    // ldr r0, _0221DA70 ; =ov07_0221D4B0
    // ldr r1, [r6, r5]
    // bl SysTask_CreateOnMainQueue
    // ldr r1, [r6, r5]
    // str r0, [r1, #0xc]
    // add sp, #0x70
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DA68: .word 0x00004E21
    // _0221DA6C: .word 0x00001001
    // _0221DA70: .word ov07_0221D4B0
    // TODO: decompile
}



void ov07_0221DA74(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // ldr r1, [r4, r0]
    // add r0, #0xc0
    // add r0, #0xac
    SpriteSystem_FreeResourcesAndManager(*((u32*)*((u32*)r0)));
    // str r1, [r4, r0]
}



void ov07_0221DAA0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r6, r5, r0
    // ldr r0, [r6, r4]
    Sprite_DeleteAndFreeResources((0x4f << 2), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    // add r1, r5, r4
    // str r2, [r1, r0]
    // str r2, [r6, r4]
}



void ov07_0221DAD0(void) {
    SysTask_Destroy(*((u32*)(r1 + 0xc)));
    // ldr r0, [r2, r0]
    SpriteSystem_DrawSprites(*((u32*)(r1 + 4)), *((u32*)r1));
}



void ov07_0221DAF4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r5, #0x18]
    // add r6, r5, #0
    // add r1, r0, #4
    // str r1, [r5, #0x18]
    // ldr r0, [r1]
    // add r6, #0x54
    // str r0, [sp]
    // add r0, r1, #4
    // str r0, [r5, #0x18]
    // ldr r2, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // add r0, r5, #0
    // lsl r4, r2, #4
    // str r0, [sp, #8]
    // add r0, #0x4c
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // str r5, [r0, r4]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // add r2, r5, r4
    // str r3, [r2, #0x50]
    // add r1, r5, r1
    // add r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // str r0, [r6, r4]
    // mov r0, #1
    // str r0, [r2, #0x58]
    // ldr r0, [r6, r4]
    // bl ManagedSprite_SetDrawFlag
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // beq _0221DB50
    // b _0221DC9E
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_02231924
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_02231924
    // add r7, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov07_0221D3CC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0221FA48
    // cmp r0, #0
    // beq _0221DB8C
    // mov r1, #6
    // bl Pokepic_GetAttr
    // b _0221DB8E
    // mov r0, #0
    // cmp r0, #1
    // ldr r0, [r6, r4]
    // bne _0221DB9C
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _0221DBA2
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp]
    // cmp r0, #3
    // bhi _0221DC90
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DBB4: ; jump table
    // ldr r0, [sp, #4]
    // sub r0, r0, #3
    // cmp r0, #1
    // bhi _0221DBCE
    // ldr r0, [r6, r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // add r5, #0x54
    // ldr r0, [r5, r4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, r4]
    // mov r1, #0xff
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // ldr r0, [sp, #4]
    // cmp r0, #5
    // beq _0221DBEC
    // cmp r0, #2
    // bne _0221DBF6
    // ldr r0, [r6, r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // add r5, #0x54
    // ldr r0, [r5, r4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, r4]
    // mov r1, #0xff
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // cmp r7, #5
    // bhi _0221DC90
    // add r0, r7, r7
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DC1A: ; jump table
    // ldr r0, [r6, r4]
    // mov r1, #0xff
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // ldr r0, [r6, r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // ldr r0, [r6, r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // ldr r0, [r6, r4]
    // mov r1, #0xff
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // cmp r7, #5
    // bhi _0221DC90
    // add r0, r7, r7
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DC5E: ; jump table
    // ldr r0, [r6, r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // ldr r0, [r6, r4]
    // mov r1, #0xff
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // ldr r0, [r6, r4]
    // mov r1, #0xff
    // bl ManagedSprite_SetDrawPriority
    // b _0221DC90
    // ldr r0, [r6, r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawPriority
    // ldr r1, [sp, #8]
    // mov r2, #1
    // ldr r0, _0221DCA4 ; =ov07_0221DAD0
    // add r1, r1, r4
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221DCA4: .word ov07_0221DAD0
    // TODO: decompile
}



void ov07_0221DCA8(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r0, r0, r1
    *((u32*)(r0 + 0x58)) = 0;
}



void ov07_0221DCC0(void) {
    // ldr r1, [r0, #0x18]
    // ldr r3, _0221DCD0 ; =ov07_0221D55C
    // add r2, r1, #4
    // str r2, [r0, #0x18]
    // ldr r1, [r2]
    // add r2, r2, #4
    // str r2, [r0, #0x18]
    // bx r3
    // _0221DCD0: .word ov07_0221D55C
    // TODO: decompile
}



void ov07_0221DCD4(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // add r0, r0, r3
    // add r0, #0x6c
    // strb r2, [r0]
}



void ov07_0221DCF0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // add r0, r0, r3
    // add r0, #0x7c
    // strb r2, [r0]
}



void ov07_0221DD0C(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221DD10(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221DD14(void) {
    *((u32*)(*((u32*)r0) + 0x18)) = 1;
}



void ov07_0221DD38(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // mov r4, #0
    // lsl r0, r4, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0221DD54
    // ldr r0, [r0, #0x1c]
    // cmp r6, r0
    // bne _0221DD54
    // bl GF_AssertFail
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _0221DD42
    // mov r2, #0
    // lsl r1, r2, #2
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // bne _0221DD70
    // str r7, [r5, r1]
    // ldr r0, [r5, r1]
    // str r6, [r0, #0x1c]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r2, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #4
    // blo _0221DD60
    // ldr r0, _0221DD88 ; =_02237840
    // cmp r0, #0
    // beq _0221DD84
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DD88: .word _02237840
    // TODO: decompile
}



void ov07_0221DD8C(void) {
    // ldr r3, [r0, r2]
}



void ov07_0221DDB0(void) {
    // add r1, #0xc0
    ov07_0223192C(r1, *((u16*)(*((u32*)r1) + 0x14)));
    // add r4, #0xc0
    ov07_0223192C(r4, *((u16*)(*((u32*)r4) + 0x16)));
    // add r1, r5, r1
}



void ov07_0221DE04(void) {
    // str r3, [sp, #0x10]
    ov07_0221FB7C(r3, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    GfGfxLoader_LoadCharData(7, r0, *((u32*)r5), r4);
    // ldr r0, [sp, #0x10]
    ov07_0221FB7C(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    PaletteData_LoadNarc(*((u32*)r5), 7, r0, *((u32*)r5));
    // add r0, #0xc4
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((r4 << 0x18) >> 0x18));
    ov07_0221BFC0(r5);
    ov07_0221DDB0(r7, r5, 7);
    // ldr r0, [sp, #0x10]
    ov07_0221FB7C(3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r5, #0xc4
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(7, r0, *((u32*)r5), r4);
}



void ov07_0221DEB0(void) {
    // and r0, r1
}



void ov07_0221DEC0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r3, _0221DF14 ; =ov07_02234BA8
    // add r2, sp, #0
    // add r5, r0, #0
    // add r4, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r7, _0221DF18 ; =ov07_02234C40
    // mov r6, #0
    // ldr r0, [r5, #0x18]
    // ldr r1, [r4]
    // bl ov07_0221DEB0
    // cmp r0, #0
    // beq _0221DF06
    // ldr r0, [r4]
    // mov r1, #0
    // lsr r2, r0, #0x10
    // cmp r2, #2
    // blt _0221DEFE
    // lsr r0, r2, #0x1f
    // add r0, r2, r0
    // asr r2, r0, #1
    // add r1, r1, #1
    // cmp r2, #2
    // bge _0221DEF2
    // lsl r1, r1, #2
    // ldr r1, [r7, r1]
    // add r0, r5, #0
    // blx r1
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #6
    // blo _0221DEDC
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DF14: .word ov07_02234BA8
    // _0221DF18: .word ov07_02234C40
    // TODO: decompile
}



void ov07_0221DF1C(void) {
    Heap_Alloc(*((u32*)r0), 0x4c);
    GF_AssertFail();
    memset(0, 0, 0x4c);
    // str r0, [r4]
    *((u8*)(r4 + 5)) = 0;
    *((u8*)(r4 + 0xf)) = 0;
    *((u8*)(r4 + 0xe)) = 0;
    *((u32*)(r4 + 0x48)) = r5;
    *((u8*)(r4 + 9)) = 0;
    *((u8*)(r4 + 0xa)) = 0x1f;
    *((u8*)(r4 + 0xb)) = 0x1d;
    *((u8*)(r4 + 0xc)) = 2;
    ov07_0221C4A8(r5, 5);
    *((u8*)(r4 + 9)) = 0;
    *((u8*)(r4 + 0xa)) = 0x1f;
    *((u8*)(r4 + 0xb)) = 0xf;
    *((u8*)(r4 + 0xc)) = 7;
    ov07_0221C4A8(r5, 5);
    *((u8*)(r4 + 9)) = 7;
    *((u8*)(r4 + 0xa)) = 0xf;
    *((u8*)(r4 + 0xb)) = 0x1d;
    *((u8*)(r4 + 0xc)) = 2;
    // add r0, #0x94
    *((u32*)(r4 + 0x1c)) = *((u32*)r5);
    // strb r1, [r5, r0]
}



void ov07_0221DFB4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldrb r0, [r5, #5]
    // cmp r0, #0
    // beq _0221DFC8
    // cmp r0, #1
    // beq _0221E006
    // cmp r0, #2
    // beq _0221E058
    // b _0221E0A2
    // ldr r0, [r5, #0x48]
    // mov r1, #2
    // bl ov07_0221EB98
    // ldr r0, [r5, #0x48]
    // mov r1, #2
    // bl ov07_0221FB04
    // add r4, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r1, #1
    // bl ov07_0221FB04
    // lsl r1, r4, #0x18
    // mov r0, #3
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // lsl r1, r4, #0x18
    // mov r0, #2
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // ldrb r0, [r5, #5]
    // add r0, r0, #1
    // strb r0, [r5, #5]
    // b _0221E0A6
    // ldr r0, [r5, #0x48]
    // mov r1, #3
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r2, #2
    // add r3, r1, #0
    // bl SetBgControlParam
    // ldr r0, [r5, #0x48]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // beq _0221E030
    // ldr r0, [r5, #0x48]
    // mov r2, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl SetBgControlParam
    // ldr r1, [r5, #0x48]
    // ldr r3, [r5, #0x10]
    // add r0, r5, #0
    // mov r2, #3
    // bl ov07_0221DE04
    // ldrb r0, [r5, #9]
    // mov r1, #4
    // mov r2, #8
    // str r0, [sp]
    // ldrb r3, [r5, #0xa]
    // ldr r0, _0221E0AC ; =0x04000050
    // bl G2x_SetBlendAlpha_
    // add r0, r5, #0
    // bl ov07_0221DEC0
    // ldrb r0, [r5, #5]
    // add r0, r0, #1
    // strb r0, [r5, #5]
    // ldrb r1, [r5, #9]
    // ldrb r0, [r5, #0xb]
    // mov r2, #0
    // cmp r1, r0
    // bhs _0221E068
    // add r0, r1, #2
    // strb r0, [r5, #9]
    // b _0221E06A
    // add r2, r2, #1
    // ldrb r1, [r5, #0xa]
    // ldrb r0, [r5, #0xc]
    // cmp r1, r0
    // bls _0221E078
    // sub r0, r1, #2
    // strb r0, [r5, #0xa]
    // b _0221E07A
    // add r2, r2, #1
    // cmp r2, #2
    // bne _0221E08C
    // ldrb r0, [r5, #0xb]
    // strb r0, [r5, #9]
    // ldrb r0, [r5, #0xc]
    // strb r0, [r5, #0xa]
    // ldrb r0, [r5, #5]
    // add r0, r0, #1
    // strb r0, [r5, #5]
    // ldrb r0, [r5, #9]
    // ldrb r1, [r5, #0xa]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0221E0B0 ; =0x04000052
    // strh r1, [r0]
    // ldrb r0, [r5, #5]
    // cmp r0, #2
    // beq _0221E0A6
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0221E0AC: .word 0x04000050
    // _0221E0B0: .word 0x04000052
    // TODO: decompile
}



void ov07_0221E0B4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // ldrb r0, [r4, #5]
    // cmp r0, #4
    // bls _0221E0C2
    // b _0221E26C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E0CE: ; jump table
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldr r0, [r4, #0x48]
    // mov r1, #2
    // bl ov07_0221FB04
    // add r5, r0, #0
    // ldr r0, [r4, #0x48]
    // mov r1, #1
    // bl ov07_0221FB04
    // lsl r1, r5, #0x18
    // add r6, r0, #0
    // mov r0, #3
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // lsl r1, r6, #0x18
    // mov r0, #2
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldrb r0, [r4, #0xa]
    // mov r1, #4
    // mov r2, #8
    // str r0, [sp]
    // ldrb r3, [r4, #9]
    // ldr r0, _0221E278 ; =0x04000050
    // bl G2x_SetBlendAlpha_
    // add r0, r4, #0
    // bl ov07_0221DEC0
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldrb r1, [r4, #9]
    // ldrb r0, [r4, #0xb]
    // mov r2, #0
    // cmp r1, r0
    // bhs _0221E13A
    // add r0, r1, #2
    // strb r0, [r4, #9]
    // b _0221E13C
    // add r2, r2, #1
    // ldrb r1, [r4, #0xa]
    // ldrb r0, [r4, #0xc]
    // cmp r1, r0
    // bls _0221E14A
    // sub r0, r1, #2
    // strb r0, [r4, #0xa]
    // b _0221E14C
    // add r2, r2, #1
    // cmp r2, #2
    // bne _0221E162
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #2
    // strb r0, [r4, #9]
    // ldrb r0, [r4, #0xc]
    // sub r0, r0, #2
    // strb r0, [r4, #0xa]
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldrb r0, [r4, #0xa]
    // ldrb r1, [r4, #9]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0221E27C ; =0x04000052
    // strh r1, [r0]
    // b _0221E272
    // add r0, r4, #0
    // bl ov07_0221E664
    // ldr r0, [r4, #0x48]
    // mov r2, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // add r0, #0xc4
    // ldr r0, [r0]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r2, #2
    // mov r3, #4
    // bl SetBgControlParam
    // ldr r0, [r4, #0x48]
    // bl ov07_0221BFC0
    // cmp r0, #0
    // bne _0221E1D0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r2, #0
    // mov r3, #1
    // bl SetBgControlParam
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ov07_0221FB30
    // ldr r0, [r4, #0x48]
    // bl ov07_0221FB58
    // b _0221E224
    // ldr r2, [r4, #0x48]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [r2]
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r2, r1]
    // add r1, r1, #4
    // ldr r1, [r2, r1]
    // add r2, #0xc4
    // ldr r2, [r2]
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r2, #0x69
    // lsl r2, r2, #2
    // add r1, r2, #0
    // ldr r3, [r4, #0x48]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r3, r2]
    // sub r1, #0x14
    // lsl r0, r0, #5
    // str r0, [sp, #4]
    // sub r0, r2, #4
    // ldr r0, [r3, r0]
    // sub r2, #0xc
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r3, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, [r3]
    // bl PaletteData_LoadNarc
    // ldr r2, [r4, #0x48]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [r2]
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r2, r1]
    // add r1, #0xc
    // ldr r1, [r2, r1]
    // add r2, #0xc4
    // ldr r2, [r2]
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // b _0221E272
    // bl BattleSystem_SetDefaultBlend
    // mov r0, #2
    // mov r1, #0
    // bl ToggleBgLayer
    // ldr r0, [r4, #0x48]
    // mov r1, #2
    // bl ov07_0221EC7C
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // b _0221E272
    // add sp, #0x10
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0221E278: .word 0x04000050
    // _0221E27C: .word 0x04000052
    // TODO: decompile
}



void ov07_0221E280(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldrb r0, [r4, #5]
    // cmp r0, #0
    // beq _0221E292
    // cmp r0, #1
    // beq _0221E316
    // b _0221E39A
    // ldrb r0, [r4, #0xd]
    // ldr r2, [r4, #0x48]
    // cmp r0, #0
    // bne _0221E2D4
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r3, #0x6a
    // str r1, [sp, #8]
    // add r0, r2, #0
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // mov r3, #0xe
    // add r0, #0xc8
    // lsl r2, r2, #0x10
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // mov r1, #1
    // lsr r2, r2, #0x10
    // bl PaletteData_ForceBeginPaletteFade
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [r4, #0x48]
    // mov r2, #2
    // add r0, #0xc8
    // ldr r0, [r0]
    // lsl r2, r2, #8
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // b _0221E310
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _0221E3B4 ; =0x0000FFFF
    // mov r3, #0x6a
    // str r0, [sp, #8]
    // add r0, r2, #0
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // mov r3, #0xe
    // add r0, #0xc8
    // lsl r2, r2, #0x10
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // mov r1, #1
    // lsr r2, r2, #0x10
    // bl PaletteData_ForceBeginPaletteFade
    // ldr r0, _0221E3B4 ; =0x0000FFFF
    // mov r2, #2
    // str r0, [sp]
    // ldr r0, [r4, #0x48]
    // mov r1, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // lsl r2, r2, #8
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldr r0, [r4, #0x48]
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0221E3AE
    // ldr r0, [r4, #0x48]
    // mov r2, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl SetBgControlParam
    // ldr r1, [r4, #0x48]
    // ldr r3, [r4, #0x10]
    // add r0, r4, #0
    // mov r2, #3
    // bl ov07_0221DE04
    // ldrb r0, [r4, #0xd]
    // cmp r0, #0
    // bne _0221E364
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x48]
    // mov r3, #0xe
    // add r0, #0xc8
    // mov r1, #1
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // lsl r2, r1, #9
    // bl PaletteData_ForceBeginPaletteFade
    // b _0221E382
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0221E3B4 ; =0x0000FFFF
    // mov r3, #0xe
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x48]
    // mov r1, #1
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // lsl r2, r1, #9
    // bl PaletteData_ForceBeginPaletteFade
    // add r0, r4, #0
    // bl ov07_0221DEC0
    // mov r0, #0x5f
    // ldr r1, [r4, #0x48]
    // mov r2, #2
    // lsl r0, r0, #2
    // strb r2, [r1, r0]
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // b _0221E3AE
    // ldr r0, [r4, #0x48]
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0221E3AE
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0221E3B4: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221E3B8(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // ldrb r0, [r4, #5]
    // cmp r0, #3
    // bls _0221E3C6
    // b _0221E5B0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E3D2: ; jump table
    // add r0, r4, #0
    // bl ov07_0221DEC0
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #0
    // bne _0221E426
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r4, #0x48]
    // mov r3, #0xf
    // add r0, #0xc8
    // mov r1, #1
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // lsl r2, r1, #9
    // bl PaletteData_ForceBeginPaletteFade
    // ldr r3, [r4, #0x48]
    // mov r1, #0
    // mov r2, #0x6a
    // add r0, r3, #0
    // str r1, [sp]
    // lsl r2, r2, #2
    // ldr r2, [r3, r2]
    // add r0, #0xc8
    // lsl r2, r2, #0x10
    // ldr r0, [r0]
    // lsr r2, r2, #0x10
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // b _0221E462
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _0221E5DC ; =0x0000FFFF
    // mov r3, #0xf
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x48]
    // mov r1, #1
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // lsl r2, r1, #9
    // bl PaletteData_ForceBeginPaletteFade
    // mov r2, #0x6a
    // ldr r3, [r4, #0x48]
    // ldr r0, _0221E5DC ; =0x0000FFFF
    // lsl r2, r2, #2
    // str r0, [sp]
    // add r0, r3, #0
    // ldr r2, [r3, r2]
    // add r0, #0xc8
    // lsl r2, r2, #0x10
    // ldr r0, [r0]
    // mov r1, #0
    // lsr r2, r2, #0x10
    // mov r3, #0x10
    // bl PaletteData_BlendPalettes
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldr r0, [r4, #0x48]
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0221E478
    // b _0221E5D4
    // add r0, r4, #0
    // bl ov07_0221E664
    // mov r0, #3
    // mov r1, #0
    // bl ToggleBgLayer
    // ldr r0, [r4, #0x48]
    // bl ov07_0221BFC0
    // cmp r0, #0
    // bne _0221E4B0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r2, #0
    // mov r3, #1
    // bl SetBgControlParam
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ov07_0221FB30
    // ldr r0, [r4, #0x48]
    // bl ov07_0221FB58
    // b _0221E504
    // ldr r2, [r4, #0x48]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [r2]
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r2, r1]
    // add r1, r1, #4
    // ldr r1, [r2, r1]
    // add r2, #0xc4
    // ldr r2, [r2]
    // mov r3, #3
    // bl GfGfxLoader_LoadCharData
    // mov r2, #0x69
    // lsl r2, r2, #2
    // add r1, r2, #0
    // ldr r3, [r4, #0x48]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r3, r2]
    // sub r1, #0x14
    // lsl r0, r0, #5
    // str r0, [sp, #4]
    // sub r0, r2, #4
    // ldr r0, [r3, r0]
    // sub r2, #0xc
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r3, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, [r3]
    // bl PaletteData_LoadNarc
    // ldr r2, [r4, #0x48]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [r2]
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r2, r1]
    // add r1, #0xc
    // ldr r1, [r2, r1]
    // add r2, #0xc4
    // ldr r2, [r2]
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #3
    // mov r1, #1
    // bl ToggleBgLayer
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldr r0, [r4, #0x48]
    // mov r2, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // add r0, #0xc4
    // ldr r0, [r0]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // ldrb r0, [r4, #0xd]
    // ldr r2, [r4, #0x48]
    // cmp r0, #0
    // bne _0221E584
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r3, #0x6a
    // str r0, [sp, #8]
    // add r0, r2, #0
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // mov r3, #0xf
    // add r0, #0xc8
    // lsl r2, r2, #0x10
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // mov r1, #1
    // lsr r2, r2, #0x10
    // bl PaletteData_ForceBeginPaletteFade
    // b _0221E5AA
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0221E5DC ; =0x0000FFFF
    // mov r3, #0x6a
    // str r0, [sp, #8]
    // add r0, r2, #0
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // mov r3, #0xf
    // add r0, #0xc8
    // lsl r2, r2, #0x10
    // ldrsb r3, [r4, r3]
    // ldr r0, [r0]
    // mov r1, #1
    // lsr r2, r2, #0x10
    // bl PaletteData_ForceBeginPaletteFade
    // ldrb r0, [r4, #5]
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // ldr r0, [r4, #0x48]
    // add r0, #0xc8
    // ldr r0, [r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0221E5D4
    // mov r0, #0x5f
    // ldr r1, [r4, #0x48]
    // mov r2, #2
    // lsl r0, r0, #2
    // strb r2, [r1, r0]
    // ldrb r0, [r4, #5]
    // add sp, #0x10
    // add r0, r0, #1
    // strb r0, [r4, #5]
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _0221E5DC: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221E5E0(void) {
}



u32 ov07_0221E5EC(void) {
}



void ov07_0221E600(void) {
    Heap_Free(r1);
    SysTask_Destroy(r5);
    // ldrsh r2, [r4, r3]
    // ldrsh r0, [r4, r1]
    // add r0, r2, r0
    *((u16*)(r4 + 4)) = r0;
    // ldrsh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    *((u16*)(r4 + 6)) = 0xa;
    // ldrsh r0, [r4, r1]
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)r4), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18), 0, 4);
    // ldrsh r0, [r4, r0]
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)r4), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18), 3, 6);
}



void ov07_0221E664(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r4 + 0x48)));
    // add r0, #0x44
    // ldrh r1, [r0]
    // add r0, r1, r0
    ov07_0221DD14((6 << 6), 1);
    // add r0, r1, r0
    ov07_0221DD14((6 << 6), 2);
    // add r0, r1, r0
    ov07_0221DD14((6 << 6), 3);
}



void ov07_0221E6C8(void) {
    // ldr r0, [r0, r1]
}



u8 ov07_0221E6D0(void) {
}



void ov07_0221E6D4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r1, #0x28
    // ldr r0, [r0]
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, [r5, #0x48]
    // mov r2, #6
    // add r0, #0xc4
    // ldr r0, [r0]
    // str r0, [r4]
    // ldr r0, [r5, #0x48]
    // add r0, #0x9c
    // ldr r0, [r0]
    // strh r0, [r4, #4]
    // ldr r0, [r5, #0x48]
    // add r0, #0xa0
    // ldr r0, [r0]
    // strh r0, [r4, #6]
    // ldr r0, [r5, #0x48]
    // add r0, #0x94
    // ldr r0, [r0]
    // strh r0, [r4, #8]
    // ldr r0, [r5, #0x48]
    // add r0, #0x98
    // ldr r0, [r0]
    // strh r0, [r4, #0xa]
    // mov r0, #3
    // str r0, [r4, #0xc]
    // str r0, [r4, #0x10]
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov07_0221DDB0
    // cmp r0, #1
    // bne _0221E748
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // sub r0, #9
    // mul r0, r1
    // strh r0, [r4, #8]
    // mov r0, #0xa
    // ldrsh r1, [r4, r0]
    // sub r0, #0xb
    // mul r0, r1
    // strh r0, [r4, #0xa]
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // sub r0, r0, #5
    // mul r0, r1
    // strh r0, [r4, #4]
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // sub r0, r0, #7
    // mul r0, r1
    // strh r0, [r4, #6]
    // mov r2, #1
    // str r2, [r4, #0x14]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // mov r0, #6
    // ldr r1, [r5, #0x48]
    // lsl r0, r0, #6
    // add r0, r1, r0
    // add r1, r4, #0
    // bl ov07_0221DD38
    // add r0, r5, #0
    // add r0, #0x44
    // ldrh r1, [r0]
    // mov r0, #1
    // add r5, #0x44
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strh r0, [r5]
    // ldr r0, _0221E780 ; =ov07_0221E600
    // ldr r2, _0221E784 ; =0x00001001
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0221E780: .word ov07_0221E600
    // _0221E784: .word 0x00001001
    // TODO: decompile
}



void ov07_0221E788(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // ldr r4, [r0, #0x48]
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r1, #0x28
    // bl Heap_Alloc
    // add r6, r0, #0
    // ldr r0, [r4]
    // mov r1, #0xc4
    // bl Heap_Alloc
    // str r0, [r6, #0x20]
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r4, r0
    // add r1, r6, #0
    // mov r2, #2
    // bl ov07_0221DD38
    // ldr r0, [sp]
    // mov r1, #2
    // add r0, #0x44
    // ldrh r0, [r0]
    // add r2, r0, #0
    // ldr r0, [sp]
    // orr r2, r1
    // add r0, #0x44
    // strh r2, [r0]
    // mov r0, #0
    // str r0, [r6, #0x18]
    // add r0, r4, #0
    // bl ov07_0221FAF8
    // bl ov07_02222D90
    // add r5, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl ov07_02222D88
    // add r1, r0, #0
    // ldr r2, [r4]
    // add r0, r5, #0
    // bl ov07_02222BE4
    // mov r4, #0
    // ldr r1, [r6, #0x20]
    // ldr r7, _0221E860 ; =ov07_02234C20
    // add r1, #0xc0
    // str r0, [r1]
    // str r4, [sp, #4]
    // add r5, r4, #0
    // ldr r0, [r6, #0x20]
    // strh r4, [r0, r5]
    // ldr r0, [r6, #0x20]
    // add r1, r0, r5
    // ldrsh r0, [r0, r5]
    // add r0, #8
    // strh r0, [r1, #2]
    // mov r0, #0
    // ldrsh r1, [r7, r0]
    // ldr r0, [r6, #0x20]
    // add r0, r0, r5
    // strh r1, [r0, #4]
    // ldr r0, [r6, #0x20]
    // add r1, r0, r5
    // mov r0, #0
    // strh r0, [r1, #6]
    // add r1, r0, #0
    // bl ov07_02222D88
    // ldr r1, [r6, #0x20]
    // mov r2, #6
    // add r1, r1, r5
    // str r0, [r1, #8]
    // ldr r0, [sp]
    // add r1, r0, #0
    // ldr r1, [r1, #0x48]
    // bl ov07_0221DDB0
    // cmp r0, #1
    // bne _0221E83E
    // ldr r0, [r6, #0x20]
    // mov r1, #4
    // add r0, r0, r5
    // ldrsh r2, [r0, r1]
    // sub r1, r1, #5
    // mul r1, r2
    // strh r1, [r0, #4]
    // ldr r0, [sp, #4]
    // add r4, #8
    // add r0, r0, #1
    // add r5, #0xc
    // add r7, r7, #2
    // str r0, [sp, #4]
    // cmp r0, #0x10
    // blt _0221E7F4
    // mov r2, #1
    // ldr r0, _0221E864 ; =ov07_0221E87C
    // add r1, r6, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnMainQueue
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221E860: .word ov07_02234C20
    // _0221E864: .word ov07_0221E87C
    // TODO: decompile
}



void ov07_0221E868(void) {
    // add r1, #0x44
    // ldrh r2, [r1]
    // add r0, #0x44
    // orr r1, r2
    // strh r1, [r0]
}



void ov07_0221E87C(void) {
    // add r4, #0xc0
    ov07_02222C60(*((u32*)*((u32*)(r1 + 0x20))));
    Heap_Free(*((u32*)(r5 + 0x20)));
    Heap_Free(r5);
    SysTask_Destroy(r6);
    // add r0, #0xc0
    ov07_02222C84(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r4 + 6)) = 4;
    // ldrsh r6, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp]
    // add r5, r0, r1
    // asr r1, r1, #0x10
    // asr r1, r1, #0x10
    // ldrsh r2, [r4, r2]
    // asr r0, r0, #0x10
    // add r0, r0, r2
    ov07_02222D88((((*((u32*)(r4 + 8)) << 0x10) << 0x10) >> 0x10), (((*((u32*)(r4 + 8)) << 0x10) << 0x10) >> 0x10), 6);
    // stmia r5!, {r0}
    // ldrsh r0, [r4, r7]
    // ldr r0, [sp, #4]
    // add r4, #0xc
    // str r0, [sp, #4]
}



void ov07_0221E914(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r1, #0
    // add r5, r0, #0
    // ldr r0, [r6, #0x18]
    // ldr r4, [r6, #0x24]
    // cmp r0, #1
    // bne _0221E93A
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // ldr r1, _0221E9CC ; =0x0000018B
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // beq _0221E94A
    // cmp r0, #1
    // beq _0221E958
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // mov r2, #0xff
    // add r0, r2, #0
    // add r0, #0x8b
    // strb r2, [r4, r0]
    // ldrb r0, [r4, r1]
    // add r0, r0, #1
    // strb r0, [r4, r1]
    // mov r2, #0x63
    // lsl r2, r2, #2
    // ldrb r1, [r4, r2]
    // sub r0, r2, #2
    // ldrb r0, [r4, r0]
    // lsl r3, r1, #1
    // add r3, r4, r3
    // add r3, #0x88
    // ldrh r3, [r3]
    // sub r3, r3, #2
    // cmp r0, r3
    // bge _0221E97E
    // sub r0, r2, #2
    // ldrb r0, [r4, r0]
    // add sp, #0x10
    // add r1, r0, #1
    // sub r0, r2, #2
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r2, #0x90
    // str r2, [sp, #8]
    // add r0, r4, r1
    // ldrb r0, [r0, #8]
    // add r2, #0xf9
    // mov r1, #9
    // lsl r0, r0, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // ldrb r2, [r4, r2]
    // ldr r0, [r4, #4]
    // ldr r3, [r4]
    // bl PaletteData_LoadFromNarc
    // ldr r1, _0221E9D0 ; =0x0000018A
    // mov r0, #0
    // strb r0, [r4, r1]
    // add r2, r1, #2
    // ldrb r3, [r4, r2]
    // sub r2, r1, #2
    // ldrb r2, [r4, r2]
    // sub r2, r2, #1
    // cmp r3, r2
    // blt _0221E9BE
    // add r1, r1, #2
    // add sp, #0x10
    // strb r0, [r4, r1]
    // pop {r4, r5, r6, pc}
    // add r0, r1, #2
    // ldrb r0, [r4, r0]
    // add r2, r0, #1
    // add r0, r1, #2
    // strb r2, [r4, r0]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0221E9CC: .word 0x0000018B
    // _0221E9D0: .word 0x0000018A
    // TODO: decompile
}



void ov07_0221E9D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r6, [r5, #0x48]
    // mov r1, #0x28
    // ldr r0, [r6]
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x28
    // add r4, r0, #0
    // bl MI_CpuFill8
    // mov r1, #0x19
    // ldr r0, [r6]
    // lsl r1, r1, #4
    // bl Heap_Alloc
    // mov r2, #0x19
    // mov r1, #0
    // lsl r2, r2, #4
    // str r0, [r4, #0x24]
    // bl MI_CpuFill8
    // add r0, r5, #0
    // add r0, #0x44
    // ldrh r1, [r0]
    // mov r0, #4
    // mov r2, #3
    // orr r1, r0
    // add r0, r5, #0
    // add r0, #0x44
    // strh r1, [r0]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r1, [r6]
    // ldr r0, [r4, #0x24]
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0xc8
    // ldr r1, [r0]
    // ldr r0, [r4, #0x24]
    // str r1, [r0, #4]
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r6, r0
    // add r1, r4, #0
    // bl ov07_0221DD38
    // ldr r0, [r5, #0x10]
    // cmp r0, #0x34
    // bhi _0221EA8E
    // bhs _0221EAB0
    // cmp r0, #0x1d
    // bhi _0221EA88
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EA4C: ; jump table
    // cmp r0, #0x2c
    // beq _0221EADC
    // b _0221EAE0
    // cmp r0, #0x39
    // bhi _0221EA9A
    // bhs _0221EAC4
    // cmp r0, #0x35
    // beq _0221EAAC
    // b _0221EAE0
    // cmp r0, #0x3a
    // beq _0221EAB8
    // b _0221EAE0
    // mov r5, #0
    // b _0221EAEC
    // mov r5, #2
    // b _0221EAEC
    // mov r5, #4
    // b _0221EAEC
    // mov r5, #6
    // b _0221EAEC
    // mov r5, #8
    // b _0221EAEC
    // mov r5, #0xa
    // b _0221EAEC
    // mov r5, #0xc
    // b _0221EAEC
    // mov r5, #0xe
    // b _0221EAEC
    // mov r5, #0x10
    // b _0221EAEC
    // mov r5, #0x1a
    // b _0221EAEC
    // mov r5, #0x1c
    // b _0221EAEC
    // mov r5, #0x14
    // b _0221EAEC
    // mov r5, #0x12
    // b _0221EAEC
    // mov r5, #0x16
    // b _0221EAEC
    // mov r5, #0x18
    // b _0221EAEC
    // mov r5, #0x1e
    // b _0221EAEC
    // ldr r0, _0221EB70 ; =ov07_02237870
    // cmp r0, #0
    // beq _0221EAEA
    // bl GF_AssertFail
    // mov r5, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r3, [r6]
    // mov r0, #9
    // add r1, r5, #0
    // mov r2, #0
    // bl GfGfxLoader_LoadFromNarc
    // add r7, r0, #0
    // bne _0221EB04
    // bl GF_AssertFail
    // ldr r1, [r4, #0x24]
    // ldr r0, _0221EB74 ; =0x00000189
    // add r2, r5, #1
    // strb r2, [r1, r0]
    // ldrb r3, [r7]
    // mov r1, #0
    // add r0, r7, #0
    // cmp r3, #0xff
    // beq _0221EB2A
    // ldr r2, [r4, #0x24]
    // add r0, r0, #1
    // add r2, r2, r1
    // strb r3, [r2, #8]
    // add r1, r1, #1
    // lsl r1, r1, #0x10
    // ldrb r3, [r0]
    // lsr r1, r1, #0x10
    // cmp r3, #0xff
    // bne _0221EB16
    // mov r0, #0x62
    // ldr r2, [r4, #0x24]
    // lsl r0, r0, #2
    // strb r1, [r2, r0]
    // add r0, r7, #0
    // add r0, #0x80
    // ldrh r5, [r0]
    // add r3, r7, #0
    // ldr r0, _0221EB78 ; =0x0000FF98
    // mov r6, #0
    // add r3, #0x80
    // cmp r5, r0
    // beq _0221EB5C
    // ldr r2, [r4, #0x24]
    // lsl r1, r6, #1
    // add r1, r2, r1
    // add r1, #0x88
    // strh r5, [r1]
    // add r3, r3, #2
    // add r1, r6, #1
    // lsl r1, r1, #0x10
    // ldrh r5, [r3]
    // lsr r6, r1, #0x10
    // cmp r5, r0
    // bne _0221EB44
    // add r0, r7, #0
    // bl Heap_Free
    // ldr r0, _0221EB7C ; =ov07_0221E914
    // ldr r2, _0221EB80 ; =0x00001001
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221EB70: .word ov07_02237870
    // _0221EB74: .word 0x00000189
    // _0221EB78: .word 0x0000FF98
    // _0221EB7C: .word ov07_0221E914
    // _0221EB80: .word 0x00001001
    // TODO: decompile
}



void ov07_0221EB84(void) {
    // add r1, #0x44
    // ldrh r2, [r1]
    // add r0, #0x44
    // orr r1, r2
    // strh r1, [r0]
}



void ov07_0221EB98(void) {
}



void ov07_0221EBA4(void) {
    ov07_0221FB04(2);
    SetBgPriority(((r4 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ToggleBgLayer(((r4 << 0x18) >> 0x18), 0);
    ov07_0221BFC0(r5);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)r5), ((r4 << 0x18) >> 0x18), 2, 4);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)r5), ((r4 << 0x18) >> 0x18), 0, ((r6 << 0x18) >> 0x18));
    // add r0, #0xc4
    SetBgControlParam(*((u32*)r5), ((r4 << 0x18) >> 0x18), 2, 4);
    // add r0, #0xc4
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((r4 << 0x18) >> 0x18));
    ov07_0221BFC0(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r2, #0xc4
    // ldr r1, [r5, r1]
    GfGfxLoader_LoadCharData(*((u32*)r5), ((0x19 << 4) + 4), *((u32*)r5), r4);
    ov07_0221FB30(r5, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, #0xc
    // ldr r1, [r5, r1]
    // add r5, #0xc4
    GfGfxLoader_LoadScrnData(*((u32*)r5), (0x19 << 4), *((u32*)r5), r4);
}



void ov07_0221EC7C(void) {
    ov07_0221FB04(1);
    SetBgPriority(((r4 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ov07_0221BFC0(r5);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)r5), ((r4 << 0x18) >> 0x18), 2, 3);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)r5), ((r4 << 0x18) >> 0x18), 0, 0);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)r5), ((r4 << 0x18) >> 0x18), 2, 3);
    // add r5, #0xc4
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((r4 << 0x18) >> 0x18));
}



void ov07_0221ECE8(void) {
    // add r1, #0x44
    // ldrh r2, [r1]
    // add r0, #0x44
    // bic r2, r1
    // orr r1, r2
    // strh r1, [r0]
}



void ov07_0221ED00(void) {
}



void ov07_0221ED14(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4, #0x14]
    // add r5, r0, #0
    // lsl r3, r2, #2
    // ldr r2, _0221ED40 ; =ov07_02234BC0
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #0
    // bne _0221ED3E
    // mov r0, #0x5f
    // ldr r1, [r4, #0x48]
    // mov r2, #0
    // lsl r0, r0, #2
    // strb r2, [r1, r0]
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // _0221ED40: .word ov07_02234BC0
    // TODO: decompile
}



void ov07_0221ED44(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov07_0221DF1C
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strb r0, [r4, #0xd]
    // ldr r0, [r5, #0x18]
    // ldr r2, _0221ED88 ; =0x0000044C
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x14]
    // ldr r0, _0221ED8C ; =0xFFFF0000
    // and r0, r1
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x18]
    // ldr r0, _0221ED90 ; =ov07_0221ED14
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // _0221ED88: .word 0x0000044C
    // _0221ED8C: .word 0xFFFF0000
    // _0221ED90: .word ov07_0221ED14
    // TODO: decompile
}



void ov07_0221ED94(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov07_0221DF1C
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strb r0, [r4, #0xd]
    // ldr r0, [r5, #0x18]
    // ldr r2, _0221EE64 ; =0xFFFF0000
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x18]
    // add r1, r0, #4
    // str r1, [r5, #0x18]
    // ldr r0, [r1]
    // add r1, r1, #4
    // str r1, [r5, #0x18]
    // lsl r1, r0, #0x10
    // lsr r1, r1, #0x10
    // and r0, r2
    // str r1, [r4, #0x14]
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x18]
    // ldr r0, [r5, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // add r0, r1, #0
    // and r0, r2
    // lsr r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsl r0, r0, #0x10
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // cmp r1, #6
    // bhi _0221EE4C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EDF2: ; jump table
    // mov r1, #0xe
    // ldrsb r1, [r4, r1]
    // add r0, r1, r0
    // strb r0, [r4, #0xe]
    // b _0221EE56
    // mov r1, #0xe
    // ldrsb r1, [r4, r1]
    // sub r0, r1, r0
    // strb r0, [r4, #0xe]
    // b _0221EE56
    // mov r1, #0xf
    // ldrsb r1, [r4, r1]
    // add r0, r1, r0
    // strb r0, [r4, #0xf]
    // b _0221EE56
    // mov r1, #0xf
    // ldrsb r1, [r4, r1]
    // sub r0, r1, r0
    // strb r0, [r4, #0xf]
    // b _0221EE56
    // mov r1, #0xe
    // ldrsb r1, [r4, r1]
    // add r1, r1, r0
    // strb r1, [r4, #0xe]
    // mov r1, #0xf
    // ldrsb r1, [r4, r1]
    // add r0, r1, r0
    // strb r0, [r4, #0xf]
    // b _0221EE56
    // mov r1, #0xe
    // ldrsb r1, [r4, r1]
    // sub r1, r1, r0
    // strb r1, [r4, #0xe]
    // mov r1, #0xf
    // ldrsb r1, [r4, r1]
    // sub r0, r1, r0
    // strb r0, [r4, #0xf]
    // b _0221EE56
    // ldr r0, _0221EE68 ; =ov07_0223789C
    // cmp r0, #0
    // beq _0221EE56
    // bl GF_AssertFail
    // ldr r0, _0221EE6C ; =ov07_0221ED14
    // ldr r2, _0221EE70 ; =0x0000044C
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // nop
    // _0221EE64: .word 0xFFFF0000
    // _0221EE68: .word ov07_0223789C
    // _0221EE6C: .word ov07_0221ED14
    // _0221EE70: .word 0x0000044C
    // TODO: decompile
}



void ov07_0221EE74(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // asr r4, r1, #0x10
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // add r0, r0, r1
    ov07_0221DD8C(1, ((*((u32*)(r0 + 0x18)) + 4) + 4));
    // add r1, r5, r5
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EEA8: ; jump table
    *((u16*)(r0 + 8)) = r4;
    *((u16*)(r0 + 0xa)) = r4;
    *((u16*)(r0 + 4)) = r4;
    *((u16*)(r0 + 4)) = r4;
}



void ov07_0221EEC0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov07_0221DF1C
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strb r0, [r4, #0xd]
    // ldr r0, [r5, #0x18]
    // ldr r2, _0221EF08 ; =0x0000044C
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x18]
    // add r1, r0, #4
    // str r1, [r5, #0x18]
    // ldr r0, [r1]
    // add r1, r1, #4
    // str r1, [r5, #0x18]
    // lsl r1, r0, #0x10
    // lsr r1, r1, #0x10
    // add r1, r1, #3
    // str r1, [r4, #0x14]
    // ldr r1, _0221EF0C ; =0xFFFF0000
    // and r0, r1
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x18]
    // ldr r0, _0221EF10 ; =ov07_0221ED14
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // nop
    // _0221EF08: .word 0x0000044C
    // _0221EF0C: .word 0xFFFF0000
    // _0221EF10: .word ov07_0221ED14
    // TODO: decompile
}



void ov07_0221EF14(void) {
    // ldrb r1, [r0, r1]
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r0, #0x8d
    // strb r1, [r0]
    // add r0, #0x8d
    // strb r1, [r0]
}



void ov07_0221EF34(void) {
    // ldrb r1, [r0, r1]
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r0, #0x8d
    // strb r1, [r0]
    // add r0, #0x8d
    // strb r1, [r0]
}



void ov07_0221EF54(void) {
    ov07_0221DF1C();
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r5 + 0x18)) = ((*((u32*)(r5 + 0x18)) + 4) + 4);
    ToggleBgLayer(3, 0);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)r5), 3, 0, 0);
    ov07_0221FB7C(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    GfGfxLoader_LoadCharData(7, r0, *((u32*)r5), 3);
    ov07_0221FB7C(r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    PaletteData_LoadNarc(*((u32*)r5), 7, r0, *((u32*)r5));
    // add r0, #0xc4
    BgClearTilemapBufferAndCommit(*((u32*)r5), 3);
    ov07_0221DDB0(r7, r5, 7);
    ov07_0221FB7C(r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r5, #0xc4
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(7, r0, *((u32*)r5), 3);
    ToggleBgLayer(3, 1);
    Heap_Free(r7);
}



void ov07_0221F024(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl ov07_0221DF1C
    // add r4, r0, #0
    // ldr r0, [r5, #0x18]
    // add r1, r0, #4
    // str r1, [r5, #0x18]
    // ldr r0, [r1]
    // str r0, [sp]
    // add r0, r1, #4
    // str r0, [r5, #0x18]
    // ldr r7, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r6, [r0]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // add r0, r5, #0
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _0221F056
    // str r6, [r4, #0x10]
    // b _0221F06E
    // add r0, r5, #0
    // add r5, #0xc0
    // ldr r1, [r5]
    // ldrh r1, [r1, #0x16]
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _0221F06A
    // str r7, [r4, #0x10]
    // b _0221F06E
    // ldr r0, [sp]
    // str r0, [r4, #0x10]
    // ldr r0, _0221F07C ; =ov07_0221ED14
    // ldr r2, _0221F080 ; =0x0000044C
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221F07C: .word ov07_0221ED14
    // _0221F080: .word 0x0000044C
    // TODO: decompile
}



void ov07_0221F084(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F088(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F08C(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F090(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F094(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F098(void) {
    // ldr r1, [r0, #0x18]
    // ldr r3, _0221F0AC ; =PlaySE
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // ldr r2, [r1]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // lsl r0, r2, #0x10
    // lsr r0, r0, #0x10
    // bx r3
    // _0221F0AC: .word PlaySE
    // TODO: decompile
}



void ov07_0221F0B0(void) {
    // ldr r1, [r0, #0x18]
    // ldr r3, _0221F0C8 ; =StopSE
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // ldr r2, [r1]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // lsl r0, r2, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #0
    // bx r3
    // nop
    // _0221F0C8: .word StopSE
    // TODO: decompile
}



void ov07_0221F0CC(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, [r0, #0x18]
    // add r2, r1, #4
    // str r2, [r0, #0x18]
    // ldr r1, [r2]
    // lsl r1, r1, #0x10
    // lsr r4, r1, #0x10
    // add r1, r2, #4
    // str r1, [r0, #0x18]
    // ldr r2, [r1]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // lsl r1, r2, #0x18
    // asr r1, r1, #0x18
    // bl ov07_0221F8C8
    // add r5, r0, #0
    // add r0, r4, #0
    // bl PlaySE
    // ldr r1, _0221F100 ; =0x0000FFFF
    // add r0, r4, #0
    // add r2, r5, #0
    // bl sub_020061B4
    // pop {r3, r4, r5, pc}
    // _0221F100: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221F104(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // asr r1, r1, #0x18
    ov07_0221F8C8((*((u32*)(*((u32*)(r0 + 0x18)) + 4)) << 0x18), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    sub_020061EC();
}



void ov07_0221F120(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov07_0221C53C
    // mov r1, #0
    // mov r2, #0x3c
    // add r4, r0, #0
    // bl memset
    // mov r0, #1
    // strb r0, [r4]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // strh r0, [r4, #0x1a]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // str r0, [r4, #8]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // strb r0, [r4, #3]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r1, [r4, #8]
    // add r0, r5, #0
    // lsl r1, r1, #0x18
    // asr r1, r1, #0x18
    // bl ov07_0221F8C8
    // str r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r0, r5, #0
    // lsl r1, r1, #0x18
    // asr r1, r1, #0x18
    // bl ov07_0221F8C8
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // ldr r2, [r4, #0x10]
    // lsl r0, r0, #0x18
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x18
    // asr r0, r0, #0x18
    // asr r1, r1, #0x18
    // asr r2, r2, #0x18
    // bl ov07_0221F980
    // str r0, [r4, #0x10]
    // ldrh r0, [r4, #0x1a]
    // bl PlaySE
    // ldrh r0, [r4, #0x1a]
    // ldr r1, _0221F1BC ; =0x0000FFFF
    // ldr r2, [r4, #8]
    // bl sub_020061B4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_0221C56C
    // pop {r3, r4, r5, pc}
    // _0221F1BC: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221F1C0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov07_0221C53C
    // mov r1, #0
    // mov r2, #0x3c
    // add r4, r0, #0
    // bl memset
    // mov r0, #2
    // strb r0, [r4]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // strh r0, [r4, #0x1a]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // str r0, [r4, #8]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // strb r0, [r4, #3]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldrh r0, [r4, #0x1a]
    // bl PlaySE
    // ldrh r0, [r4, #0x1a]
    // ldr r1, _0221F234 ; =0x0000FFFF
    // ldr r2, [r4, #8]
    // bl sub_020061B4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_0221C56C
    // pop {r3, r4, r5, pc}
    // _0221F234: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221F238(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov07_0221C53C
    // mov r1, #0
    // mov r2, #0x3c
    // add r4, r0, #0
    // bl memset
    // mov r0, #1
    // strb r0, [r4]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // strh r0, [r4, #0x1a]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // str r0, [r4, #8]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r0, [r0]
    // strb r0, [r4, #3]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #4
    // str r0, [r5, #0x18]
    // ldr r1, [r4, #8]
    // add r0, r5, #0
    // lsl r1, r1, #0x18
    // asr r1, r1, #0x18
    // bl ov07_0221F8C8
    // str r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r0, r5, #0
    // lsl r1, r1, #0x18
    // asr r1, r1, #0x18
    // bl ov07_0221F8C8
    // str r0, [r4, #0xc]
    // ldr r1, [r4, #0x10]
    // add r0, r5, #0
    // lsl r1, r1, #0x18
    // asr r1, r1, #0x18
    // bl ov07_0221F8C8
    // str r0, [r4, #0x10]
    // ldrh r0, [r4, #0x1a]
    // bl PlaySE
    // ldrh r0, [r4, #0x1a]
    // ldr r1, _0221F2D8 ; =0x0000FFFF
    // ldr r2, [r4, #8]
    // bl sub_020061B4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_0221C56C
    // pop {r3, r4, r5, pc}
    // nop
    // _0221F2D8: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0221F2DC(void) {
    ov07_0221C53C();
    memset(0, 0x3c);
    // strb r0, [r4]
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u16*)(r4 + 0x1a)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 0x14)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u8*)(r4 + 3)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u8*)(r4 + 0x18)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u8*)(r4 + 4)) = *((u8*)(r4 + 3));
    // asr r1, r1, #0x18
    ov07_0221F8C8(r5, (*((u32*)(r4 + 0x14)) << 0x18));
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C56C(r5, r4);
}



void ov07_0221F340(void) {
    ov07_0221C53C();
    memset(0, 0x3c);
    // strb r0, [r4]
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u16*)(r4 + 0x1a)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 0x14)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u8*)(r4 + 3)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r1, r1, #0x18
    ov07_0221F8C8(r5, (*((u32*)(r4 + 0x14)) << 0x18));
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C56C(r5, r4);
}



void ov07_0221F398(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F39C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x90
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0221F3B8
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x8d
    // strb r1, [r0]
    // ldr r0, _0221F3F0 ; =0x0000017D
    // mov r1, #0
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // bl GF_IsAnySEPlaying
    // cmp r0, #0
    // beq _0221F3DC
    // ldr r0, _0221F3F0 ; =0x0000017D
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // ldrb r1, [r4, r0]
    // cmp r1, #0x5a
    // bls _0221F3D4
    // mov r1, #0
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // mov r0, #1
    // add r4, #0x8d
    // strb r0, [r4]
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x8d
    // strb r1, [r0]
    // ldr r0, _0221F3F0 ; =0x0000017D
    // strb r1, [r4, r0]
    // ldr r0, [r4, #0x18]
    // add r0, r0, #4
    // str r0, [r4, #0x18]
    // pop {r4, pc}
    // _0221F3F0: .word 0x0000017D
    // TODO: decompile
}



void ov07_0221F3F4(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x18]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // ldr r3, [r1]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // ldr r2, [r1]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // lsl r0, r2, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // lsl r3, r3, #0x10
    // ldr r0, _0221F420 ; =0x04001050
    // mov r1, #1
    // mov r2, #2
    // lsr r3, r3, #0x10
    // bl G2x_SetBlendAlpha_
    // pop {r3, pc}
    // nop
    // _0221F420: .word 0x04001050
    // TODO: decompile
}



void ov07_0221F424(void) {
}



void ov07_0221F42C(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F430(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r6, #0xcc
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // ldr r0, [r6, r4]
    GF_AssertFail((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    // add r0, #0xc0
    // add r0, #0xac
    SpriteManager_New(*((u32*)*((u32*)r5)));
    // str r0, [r6, r4]
    // ldr r0, [r6, r4]
    GF_AssertFail();
    // add r0, #0xc0
    // ldr r1, [r6, r4]
    // add r0, #0xac
    SpriteSystem_InitSprites(*((u32*)*((u32*)r5)), r7);
    // add r0, #0xc0
    // add r0, #0xac
    SpriteSystem_GetRenderer(*((u32*)*((u32*)r5)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x11 << 0x10));
    // add r2, sp, #0
    // add r0, #0x18
    // str r3, [r2]
    // str r3, [r0]
    // add r5, #0xc0
    // ldr r1, [r6, r4]
    // add r0, #0xac
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(*((u32*)*((u32*)r5)), (0 + 1), (r2 + 4), (*((u32*)r5) + 4));
}



void ov07_0221F4CC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r2, r0, #0
    // ldr r0, [r2, #0x18]
    // mov r4, #0x6e
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // ldr r3, [r0]
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221F510 ; =0x00001388
    // lsl r1, r1, #2
    // add r0, r3, r0
    // str r0, [sp, #8]
    // add r0, r2, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r1, r2, r1
    // add r0, #0xac
    // add r1, #0xcc
    // lsl r4, r4, #2
    // ldr r0, [r0]
    // ldr r1, [r1]
    // ldr r2, [r2, r4]
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0221F510: .word 0x00001388
    // TODO: decompile
}



void ov07_0221F514(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // add r0, r0, #4
    // str r0, [r4, #0x18]
    // ldr r3, [r0]
    // add r0, r0, #4
    // str r0, [r4, #0x18]
    // ldr r1, [r0]
    // add r2, r0, #4
    // str r2, [r4, #0x18]
    // ldr r0, [r2]
    // add r2, r2, #4
    // str r2, [r4, #0x18]
    // mov r2, #0x6f
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // lsl r3, r3, #2
    // str r2, [sp]
    // str r1, [sp, #4]
    // mov r2, #0
    // str r2, [sp, #8]
    // mov r2, #1
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _0221F570 ; =0x00001388
    // add r2, r4, #0
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r2, #0xc0
    // ldr r2, [r2]
    // add r0, r4, #0
    // add r3, r4, r3
    // add r0, #0xc8
    // add r2, #0xac
    // add r3, #0xcc
    // ldr r0, [r0]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _0221F570: .word 0x00001388
    // TODO: decompile
}



void ov07_0221F574(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r2, r0, #0
    // ldr r0, [r2, #0x18]
    // mov r4, #7
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // ldr r3, [r0]
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _0221F5B8 ; =0x00001388
    // lsl r1, r1, #2
    // add r0, r3, r0
    // str r0, [sp, #4]
    // add r0, r2, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r1, r2, r1
    // add r0, #0xac
    // add r1, #0xcc
    // lsl r4, r4, #6
    // ldr r0, [r0]
    // ldr r1, [r1]
    // ldr r2, [r2, r4]
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0221F5B8: .word 0x00001388
    // TODO: decompile
}



void ov07_0221F5BC(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r2, r0, #0
    // ldr r0, [r2, #0x18]
    // mov r4, #0x71
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // ldr r1, [r0]
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // ldr r3, [r0]
    // add r0, r0, #4
    // str r0, [r2, #0x18]
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _0221F600 ; =0x00001388
    // lsl r1, r1, #2
    // add r0, r3, r0
    // str r0, [sp, #4]
    // add r0, r2, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r1, r2, r1
    // add r0, #0xac
    // add r1, #0xcc
    // lsl r4, r4, #2
    // ldr r0, [r0]
    // ldr r1, [r1]
    // ldr r2, [r2, r4]
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0221F600: .word 0x00001388
    // TODO: decompile
}



void ov07_0221F604(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r4, r0, #0
    // ldr r1, [r4, #0x18]
    // add r1, r1, #4
    // str r1, [r4, #0x18]
    // ldr r5, [r1]
    // add r2, r1, #4
    // str r2, [r4, #0x18]
    // ldr r1, [r2]
    // str r1, [sp]
    // add r1, r2, #4
    // str r1, [r4, #0x18]
    // bl ov07_0221C470
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r1, sp, #0xc
    // strh r0, [r1]
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov07_02221F80
    // add r2, sp, #0xc
    // strh r0, [r2, #2]
    // mov r1, #0
    // strh r1, [r2, #4]
    // strh r1, [r2, #6]
    // mov r0, #0x64
    // str r0, [sp, #0x14]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x38]
    // add r0, r4, #0
    // ldr r3, _0221F70C ; =0x00001388
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x3c]
    // add r2, sp, #0xc
    // add r0, #0x18
    // ldr r6, [r4, #0x18]
    // add r1, r1, #1
    // ldr r6, [r6]
    // add r6, r6, r3
    // str r6, [r2, #0x14]
    // ldr r6, [r0]
    // add r2, r2, #4
    // add r6, r6, #4
    // str r6, [r0]
    // cmp r1, #6
    // blt _0221F65C
    // mov r0, #0x41
    // lsl r0, r0, #2
    // add r3, sp, #0xc
    // add r2, r4, r0
    // mov r6, #6
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _0221F67C
    // ldr r0, [r3]
    // lsl r7, r5, #2
    // str r0, [r2]
    // add r0, r4, #0
    // str r0, [sp, #8]
    // add r0, #0xcc
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // ldr r1, [sp, #8]
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, [r1, r7]
    // add r2, sp, #0xc
    // bl SpriteSystem_NewSprite
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x18]
    // add r2, r4, #0
    // ldr r3, [r0]
    // add r0, r0, #4
    // add r2, #0x18
    // mov r6, #0
    // str r0, [r4, #0x18]
    // cmp r3, #0
    // ble _0221F6D4
    // add r5, r4, #0
    // ldr r0, [r4, #0x18]
    // add r6, r6, #1
    // ldr r1, [r0]
    // add r0, r5, #0
    // add r0, #0x94
    // str r1, [r0]
    // ldr r0, [r2]
    // add r5, r5, #4
    // add r0, r0, #4
    // str r0, [r2]
    // cmp r6, r3
    // blt _0221F6BC
    // cmp r6, #0xa
    // bge _0221F6EC
    // lsl r0, r6, #2
    // add r2, r4, r0
    // mov r1, #0
    // add r0, r2, #0
    // add r0, #0x94
    // add r6, r6, #1
    // add r2, r2, #4
    // str r1, [r0]
    // cmp r6, #0xa
    // blt _0221F6DE
    // ldr r0, [sp]
    // bl ov07_0222304C
    // add r5, r0, #0
    // add r0, r4, #0
    // add r4, #0xc0
    // ldr r1, [r4]
    // ldr r2, [sp, #8]
    // add r1, #0xac
    // ldr r1, [r1]
    // ldr r2, [r2, r7]
    // ldr r3, [sp, #4]
    // blx r5
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221F70C: .word 0x00001388
    // TODO: decompile
}



void ov07_0221F710(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r1, [r5, #0x18]
    // add r1, r1, #4
    // str r1, [r5, #0x18]
    // ldr r4, [r1]
    // add r1, r1, #4
    // str r1, [r5, #0x18]
    // ldr r7, [r1]
    // add r1, r1, #4
    // str r1, [r5, #0x18]
    // bl ov07_0221C470
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r1, sp, #0
    // strh r0, [r1]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov07_02221F80
    // add r2, sp, #0
    // strh r0, [r2, #2]
    // mov r1, #0
    // strh r1, [r2, #4]
    // strh r1, [r2, #6]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x2c]
    // add r0, r5, #0
    // ldr r3, _0221F7C0 ; =0x00001388
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x30]
    // add r2, sp, #0
    // add r0, #0x18
    // ldr r6, [r5, #0x18]
    // add r1, r1, #1
    // ldr r6, [r6]
    // add r6, r6, r3
    // str r6, [r2, #0x14]
    // ldr r6, [r0]
    // add r2, r2, #4
    // add r6, r6, #4
    // str r6, [r0]
    // cmp r1, #6
    // blt _0221F766
    // mov r0, #0x41
    // lsl r0, r0, #2
    // add r6, sp, #0
    // add r3, r5, r0
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0221F786
    // ldr r0, [r6]
    // lsl r1, r4, #2
    // str r0, [r3]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r1, r5, r1
    // add r0, #0xac
    // add r1, #0xcc
    // ldr r0, [r0]
    // ldr r1, [r1]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // add r5, #0xdc
    // lsl r4, r7, #2
    // add r6, r0, #0
    // ldr r0, [r5, r4]
    // cmp r0, #0
    // beq _0221F7BA
    // bl GF_AssertFail
    // str r6, [r5, r4]
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _0221F7C0: .word 0x00001388
    // TODO: decompile
}



void ov07_0221F7C4(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r5, #0xcc
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // ldr r1, [r5, r4]
    // add r0, #0xc0
    // add r0, #0xac
    SpriteSystem_FreeResourcesAndManager(*((u32*)*((u32*)r0)), ((*((u32*)(r0 + 0x18)) + 4) + 4), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    // str r0, [r5, r4]
}



void ov07_0221F7F0(void) {
    // ldr r1, [r0, #0x18]
    // add r1, r1, #4
    // str r1, [r0, #0x18]
    // ldr r3, [r1]
    // add r2, r1, #4
    // str r2, [r0, #0x18]
    // ldr r1, [r2]
    // add r2, r2, #4
    // str r2, [r0, #0x18]
    // lsl r2, r3, #2
    // add r2, r0, r2
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // ldr r3, _0221F810 ; =ManagedSprite_SetDrawFlag
    // ldr r0, [r2, r0]
    // bx r3
    // _0221F810: .word ManagedSprite_SetDrawFlag
    // TODO: decompile
}



void ov07_0221F814(void) {
}



void ov07_0221F81C(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // asr r1, r1, #0x10
    // asr r1, r1, #0x18
    ov07_0221F8C8(((*((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)) << 0x10) << 0x18));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r5 + 0x18)) = ((*((u32*)(r5 + 0x18)) + 4) + 4);
    // add r2, #0xc0
    // str r0, [sp]
    // add r2, r6, r2
    // add r3, r6, r3
    // str r1, [sp, #4]
    // ldr r1, [r6, r0]
    // add r2, #0xd8
    // asr r1, r1, #0x1f
    // str r1, [sp, #8]
    // add r3, #0xe8
    // str r1, [sp, #0xc]
    // sub r0, #0xc
    // ldrh r2, [r2]
    // ldrb r3, [r3]
    // ldr r0, [r6, r0]
    sub_02071FDC((0x46 << 2), r4, (*((u16*)(*((u32*)r5) + 0x14)) << 1), *((u16*)(*((u32*)r5) + 0x14)));
}



void ov07_0221F880(void) {
    IsCryFinished();
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 4);
    *((u32*)(r4 + 0x18)) = ((*((u32*)(r4 + 0x18)) + 4) + 4);
    // add r4, #0x8d
    // strb r1, [r4]
    sub_02006300(*((u32*)(*((u32*)(r4 + 0x18)) + 4)), 0);
    // add r4, #0x8d
    // strb r0, [r4]
}



void ov07_0221F8AC(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221F8B0(void) {
    // cmp r0, #0x58
    // bls _0221F8B8
    // mov r0, #0
    // bx lr
    // lsl r1, r0, #2
    // ldr r0, _0221F8C0 ; =ov07_02234DE8
    // ldr r0, [r0, r1]
    // bx lr
    // _0221F8C0: .word ov07_02234DE8
    // TODO: decompile
}



void ov07_0221F8C4(void) {
    // ldrb r0, [r0, #1]
    // bx lr
    // TODO: decompile
}



void ov07_0221F8C8(void) {
    ov07_0221C468();
    ov07_0221C470(r5);
    ov07_0223192C(r5, r7);
    ov07_0223192C(r5, r6);
    ov07_0223192C(r5, r7);
    ov07_0223192C(r5, r6);
    ov07_0223192C(r5, r7);
    ov07_0223192C(r5, r6);
    // mvn r0, r0
    // mul r4, r0
    ov07_0223192C(r5, r7);
    ov07_0223192C(r5, r6);
    // mvn r0, r0
    // mul r4, r0
    ov07_0223192C(r5, r7);
    ov07_0223192C(r5, r6);
    // mvn r0, r0
    // mul r4, r0
    ov07_0221BFC0(r5);
    // mvn r0, r0
    // mul r4, r0
    // asr r0, r0, #0x18
}



void ov07_0221F980(void) {
    abs(r2);
    // asr r0, r0, #0x18
    abs(r2);
    // neg r0, r0
    // asr r0, r0, #0x18
}



void ov07_0221F9A8(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r3, #0x18
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    GF_AssertFail(r0);
    // str r5, [r1]
    // str r5, [r3]
}



void ov07_0221F9E8(void) {
    // add r3, r1, r0
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}



void ov07_0221FA04(void) {
    // add r0, #0xc0
    // add r0, r0, r1
    // add r0, #0xc0
    // ldrb r0, [r0]
}



void ov07_0221FA10(void) {
    // add r0, #0xc0
    // add r0, r0, r1
    // add r0, #0xe0
    // ldrb r0, [r0]
}



void ov07_0221FA1C(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xd8
    // ldrh r0, [r0]
}



void ov07_0221FA2C(void) {
    // add r0, #0xc0
    // add r0, r0, r1
    // add r0, #0xe8
    // ldrb r0, [r0]
}



void ov07_0221FA38(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xec
}



void ov07_0221FA48(void) {
    // add r0, #0xc0
    // add r0, r0, r4
    // add r0, #0xc4
    Pokepic_IsActive(0);
    // add r5, #0xc0
    // add r0, r0, r4
    // add r0, #0xc4
}



void ov07_0221FA78(void) {
    // add r0, #0xc8
}



void ov07_0221FA80(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xb0
}



void ov07_0221FA90(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xb0
}



void ov07_0221FAA0(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xb0
}



void ov07_0221FAB0(void) {
    // add r0, #0xc0
    // add r0, #0xd4
    // tst r0, r1
}



void ov07_0221FAC8(void) {
    // add r0, #0xc0
    // ldr r2, [r0]
    // lsl r0, r1, #2
    // add r0, r2, r0
    // add r0, #0xfc
    // ldr r1, [r0]
    // ldr r0, _0221FAE4 ; =0x200400C0
    // tst r0, r1
    // beq _0221FADE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0221FAE4: .word 0x200400C0
    // TODO: decompile
}



u8 ov07_0221FAE8(void) {
}



void ov07_0221FAEC(void) {
    // ldr r0, _0221FAF4 ; =ov07_02234B8C
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // bx lr
    // _0221FAF4: .word ov07_02234B8C
    // TODO: decompile
}



void ov07_0221FAF8(void) {
    // ldr r0, _0221FB00 ; =_02234B80
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // bx lr
    // _0221FB00: .word _02234B80
    // TODO: decompile
}



void ov07_0221FB04(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221FB16: ; jump table
    ov07_0221FAE8(3, (*((u16*)(r1 + 6)) << 0x10));
}



void ov07_0221FB30(void) {
    // str r0, [sp]
    // add r2, #0xc0
    // add r0, #0xc4
    // ldr r2, [r3, r2]
    BG_LoadCharTilesData(*((u32*)r0), ((r1 << 0x18) >> 0x18), (0x11 << 4), (1 << 0x10));
}



void ov07_0221FB58(void) {
    // str r2, [sp]
    // add r1, #0xc0
    // add r0, #0xc8
    // sub r2, #0xec
    // ldr r1, [r1, r2]
    PaletteData_LoadPalette(*((u32*)r0), *((u32*)r0), 0, 0);
}



u8 ov07_0221FB78(void) {
}



void ov07_0221FB7C(void) {
    // mov r2, #0x14
    // mul r2, r0
    // ldr r0, _0221FB8C ; =ov07_02234F48
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // bx lr
    // nop
    // _0221FB8C: .word ov07_02234F48
    // TODO: decompile
}



void ov07_0221FB90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x98
    // ldr r3, _0221FDF0 ; =ov07_02234BD8
    // add r5, r2, #0
    // add r2, sp, #0x80
    // add r7, r0, #0
    // str r1, [sp, #0x18]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x18]
    // mov r1, #0x58
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, [sp, #0x18]
    // str r0, [r4]
    // str r5, [r4, #4]
    // add r0, r7, #0
    // bl BattleSystem_GetSpriteSystem
    // str r0, [r4, #8]
    // add r0, r7, #0
    // bl BattleSystem_GetSpriteManager
    // str r0, [r4, #0xc]
    // add r0, r7, #0
    // bl BattleSystem_GetPaletteData
    // str r0, [r4, #0x10]
    // mov r6, #0
    // add r5, r4, #0
    // mov r0, #0
    // str r0, [r5, #0x24]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov12_0223BB88
    // str r0, [r5, #0x34]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _0221FBD6
    // add r1, r4, #0
    // add r0, r7, #0
    // add r1, #0x44
    // bl ov12_0223C1C4
    // add r1, r4, #0
    // add r0, r7, #0
    // add r1, #0x48
    // bl ov12_0223C1F4
    // ldr r1, [sp, #0x18]
    // mov r0, #8
    // bl NARC_New
    // add r6, r0, #0
    // mov r7, #0
    // str r4, [sp, #0x1c]
    // ldr r0, [r4, #4]
    // cmp r7, r0
    // beq _0221FC18
    // cmp r0, #0xff
    // bne _0221FC82
    // ldr r1, [sp, #0x1c]
    // ldr r1, [r1, #0x48]
    // cmp r1, #0
    // beq _0221FC82
    // ldr r1, _0221FDF4 ; =0x0000D903
    // mov r3, #0x4c
    // add r2, r7, r1
    // ldr r1, _0221FDF8 ; =0x00001388
    // mul r1, r0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // add r5, r2, r1
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r2, r6, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // str r6, [sp]
    // mov r0, #0x4b
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    // ldr r0, [r4, #0x10]
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0xc]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r2, r6, #0
    // mov r3, #0x4d
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r2, r6, #0
    // mov r3, #0x4e
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // ldr r0, [sp, #0x1c]
    // add r7, r7, #1
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // cmp r7, #4
    // blt _0221FC0E
    // add r0, r6, #0
    // bl NARC_Delete
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // add r7, r4, #0
    // ldr r1, [r4, #4]
    // ldr r0, [sp, #0x2c]
    // cmp r0, r1
    // beq _0221FCA8
    // cmp r1, #0xff
    // beq _0221FCA8
    // b _0221FDDC
    // ldr r2, _0221FDF4 ; =0x0000D903
    // ldr r0, [sp, #0x2c]
    // add r3, r1, #0
    // add r0, r0, r2
    // ldr r2, _0221FDF8 ; =0x00001388
    // mul r3, r2
    // add r1, r0, r3
    // str r1, [r7, #0x14]
    // ldr r1, [r4, #4]
    // add r3, r1, #0
    // mul r3, r2
    // add r1, r0, r3
    // str r1, [sp, #0x68]
    // ldr r1, [r4, #4]
    // add r3, r1, #0
    // mul r3, r2
    // add r1, r0, r3
    // str r1, [sp, #0x6c]
    // ldr r1, [r4, #4]
    // add r3, r1, #0
    // mul r3, r2
    // add r1, r0, r3
    // str r1, [sp, #0x70]
    // ldr r1, [r4, #4]
    // mul r2, r1
    // mov r1, #0
    // add r0, r0, r2
    // str r0, [sp, #0x74]
    // str r1, [sp, #0x78]
    // str r1, [sp, #0x7c]
    // ldr r2, [r7, #0x34]
    // ldr r5, [r7, #0x48]
    // ldr r0, [r2, #4]
    // cmp r5, #0
    // str r0, [sp, #0x28]
    // ldr r0, [r2, #8]
    // str r0, [sp, #0x24]
    // ldr r0, [r2]
    // str r0, [sp, #0x20]
    // beq _0221FDDC
    // add r0, r5, #0
    // bl Pokepic_GetAttr
    // str r0, [sp, #0x30]
    // add r0, r5, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // add r0, r5, #0
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r2, r6, r0
    // ldr r0, [sp, #0x30]
    // add r1, sp, #0x34
    // strh r0, [r1]
    // strh r2, [r1, #2]
    // mov r0, #0
    // strh r0, [r1, #4]
    // strh r0, [r1, #6]
    // ldr r1, [sp, #0x2c]
    // add r3, sp, #0x34
    // add r1, r4, r1
    // add r1, #0x44
    // ldrb r1, [r1]
    // lsl r2, r1, #2
    // add r1, sp, #0x80
    // ldr r1, [r1, r2]
    // str r0, [sp, #0x40]
    // str r1, [sp, #0x3c]
    // mov r1, #1
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x60]
    // str r0, [sp, #0x64]
    // add r2, sp, #0x68
    // ldr r1, [r2]
    // add r0, r0, #1
    // str r1, [r3, #0x14]
    // add r2, r2, #4
    // add r3, r3, #4
    // cmp r0, #6
    // blt _0221FD42
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r2, sp, #0x34
    // bl SpriteSystem_NewSprite
    // add r6, r0, #0
    // bl ManagedSprite_TickFrame
    // str r6, [r7, #0x24]
    // cmp r5, #0
    // bne _0221FD70
    // add r0, r6, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _0221FD98
    // add r0, r5, #0
    // bl Pokepic_IsActive
    // cmp r0, #0
    // bne _0221FD84
    // add r0, r6, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _0221FD98
    // add r0, r5, #0
    // mov r1, #6
    // bl Pokepic_GetAttr
    // cmp r0, #1
    // bne _0221FD98
    // add r0, r6, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // cmp r5, #0
    // beq _0221FDB2
    // ldr r0, [r6]
    // bl Sprite_GetImageProxy
    // add r1, r0, #0
    // mov r3, #0x32
    // ldr r1, [r1, #4]
    // ldr r2, [sp, #0x20]
    // mov r0, #0x13
    // lsl r3, r3, #6
    // bl GF_CreateNewVramTransferTask
    // cmp r5, #0
    // beq _0221FDDC
    // ldr r0, [r6]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // mov r1, #2
    // str r1, [sp]
    // mov r1, #0x20
    // lsl r0, r0, #0x14
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x10]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x24]
    // ldr r3, [r4]
    // bl PaletteData_LoadNarc
    // ldr r0, [sp, #0x2c]
    // add r7, r7, #4
    // add r0, r0, #1
    // str r0, [sp, #0x2c]
    // cmp r0, #4
    // bge _0221FDEA
    // b _0221FC9A
    // add r0, r4, #0
    // add sp, #0x98
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221FDF0: .word ov07_02234BD8
    // _0221FDF4: .word 0x0000D903
    // _0221FDF8: .word 0x00001388
    // TODO: decompile
}



void ov07_0221FDFC(void) {
}



void ov07_0221FE08(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0xc)), *((u32*)(r0 + 0x14)));
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0xc)), *((u32*)(r4 + 0x14)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x24)));
    Heap_Free(r5);
}



void ov07_0221FE3C(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0xc)), *((u32*)(r0 + 0x14)));
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0xc)), *((u32*)(r4 + 0x14)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x24)));
    Heap_Free(r5);
}



void ov07_0221FE70(void) {
}



void ov07_0221FE84(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221FE88(void) {
}



void ov07_0221FEB0(void) {
    // str r3, [sp]
    ov06_0221BA40();
    sub_02015264(r6, r7, r5);
    // ldr r3, [sp]
    sub_0201526C(r4, r0, 0xa);
}



void ov07_0221FEDC(void) {
}



void ov07_0221FEE4(void) {
    // str r3, [sp]
    ov06_0221BA88(r1);
    ov07_0221FEDC(r6, r7, r5);
    // ldr r3, [sp]
    sub_0201526C(r4, r0, 0xa);
}



void ov07_0221FF18(void) {
}



void ov07_0221FF2C(void) {
}



void ov07_0221FF34(void) {
    ov07_02231924();
    ov07_02231924(r6, r7);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221FF5A: ; jump table
}



void ov07_0221FF74(void) {
    // bx lr
    // TODO: decompile
}



void ov07_0221FF78(void) {
    sub_02015504();
    ov07_0221C468();
    ov07_0221C470(r4);
    ov07_0221C478(r4);
    ov07_0223192C(r4, 1);
    // add r2, sp, #0x28
    ov07_02231B90(r4, 1);
    ov07_02231924(r4, 1);
    // str r0, [sp]
    ov07_022319E0();
    // str r0, [sp, #4]
    sub_02015530(r6);
    ov07_0221BFC0(r4);
    // ldr r0, [sp, #4]
    // add r1, sp, #0x28
    ov07_02231AD0(r0, r7);
    // ldr r0, [sp]
    // add r1, sp, #0x1c
    ov07_02231AD0(r4, r7);
    // ldr r1, [sp, #0x28]
    // add r0, r1, r0
    *((u32*)(r5 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 4));
    // ldr r1, [sp, #0x2c]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    // ldr r1, [sp, #0x30]
    // add r0, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
    // add r1, sp, #0x10
    ov07_02231DE8(1);
    sub_02015524(r6);
    // add r0, sp, #8
    Camera_GetAngle(r0);
    // add r0, sp, #8
    Camera_SetAnglePos(r4);
}



void ov07_02220030(void) {
    sub_02015504();
    ov07_0221C470();
    ov07_0221C478(r4);
    // add r2, sp, #0xc
    ov07_02231B90(r4, 0);
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    *((u32*)(r5 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 4));
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
    // add r1, sp, #0
    ov07_02231DE8(r6);
    // add r1, sp, #0
    sub_020154E4(r7);
}



void ov07_0222008C(void) {
    sub_02015504();
    ov07_0221C470();
    // add r2, sp, #0
    ov07_02231B90(r5, r0);
    // ldr r1, [sp]
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 4));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r4 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 8));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r4 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 0xc));
}



void ov07_022200D0(void) {
    sub_02015504();
    ov07_0221C468();
    // add r2, sp, #0
    ov07_02231B90(r5, r0);
    // ldr r1, [sp]
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 4));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r4 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 8));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r4 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 0xc));
}



void ov07_02220114(void) {
    sub_02015504();
    ov07_0221C468();
    ov07_0221C470(r4);
    // add r2, sp, #0
    ov07_02231B90(r4, r6);
    // ldr r1, [sp]
    // add r0, r1, r0
    *((u32*)(r5 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 4));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
}



void ov07_02220160(void) {
    sub_02015504();
    ov07_0221C478();
    sub_02015530();
    ov07_0221C468(r6);
    ov07_0223192C(r6, r0);
    ov07_0221BFC0(r6);
    // add r1, sp, #0
    ov07_02231AD0(r4, r0, r7);
    // ldr r1, [sp]
    // add r0, r1, r0
    *((u32*)(r5 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 4));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
}



void ov07_022201C8(void) {
    sub_02015504();
    ov07_0221C478();
    sub_02015530();
    ov07_0221C470(r6);
    ov07_0223192C(r6, r0);
    ov07_0221BFC0(r6);
    // add r1, sp, #0
    ov07_02231AD0(r4, r0, r7);
    // ldr r1, [sp]
    // add r0, r1, r0
    *((u32*)(r5 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 4));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
}



void ov07_02220230(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x9c
    // add r5, r0, #0
    // add r1, sp, #0
    // mov r0, #0
    // strh r0, [r1]
    // strh r0, [r1, #2]
    // strh r0, [r1, #4]
    // strh r0, [r1, #6]
    // strh r0, [r1, #8]
    // strh r0, [r1, #0xa]
    // ldr r3, _022202D0 ; =ov07_02235440
    // add r2, sp, #0x54
    // mov r1, #0x24
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _0222024C
    // ldr r3, _022202D4 ; =ov07_02235488
    // add r2, sp, #0xc
    // mov r1, #0x24
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _0222025E
    // bl sub_02015504
    // add r4, r0, #0
    // bl ov07_0221C468
    // add r6, r0, #0
    // add r0, r4, #0
    // bl ov07_0221C470
    // add r7, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov07_02231924
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov07_02231924
    // lsl r2, r0, #1
    // mov r0, #0xc
    // add r1, r6, #0
    // mul r1, r0
    // add r0, sp, #0x54
    // add r0, r0, r1
    // ldrsh r4, [r2, r0]
    // mov r3, #0xac
    // add r0, r4, #0
    // ldr r4, [r5, #0x20]
    // mul r0, r3
    // ldr r4, [r4]
    // ldr r4, [r4, #4]
    // add r0, r0, r4
    // str r0, [r5, #0x28]
    // add r0, sp, #0xc
    // add r0, r0, r1
    // ldrsh r0, [r2, r0]
    // add r1, r0, #0
    // ldr r0, [r5, #0x20]
    // mul r1, r3
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // add r0, r1, r0
    // str r0, [r5, #0x2c]
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // ldr r0, [r0, #0xc]
    // str r0, [r5, #0x30]
    // add sp, #0x9c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022202D0: .word ov07_02235440
    // _022202D4: .word ov07_02235488
    // TODO: decompile
}



void ov07_022202D8(void) {
    // add r3, #8
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022202EE: ; jump table
    // mul r1, r0
    // str r1, [r2]
    // mul r1, r0
    *((u32*)(r2 + 4)) = r1;
    // mul r1, r0
    // str r1, [r3]
    // mul r3, r1
    // str r3, [r2]
    // mul r1, r0
    *((u32*)(r2 + 4)) = r1;
    // mul r4, r1
    // str r4, [r2]
    // mul r1, r0
    // str r1, [r3]
    // mul r4, r1
    *((u32*)(r2 + 4)) = *((u32*)(r2 + 4));
    // mul r1, r0
    // str r1, [r3]
    // mul r4, r1
    // str r4, [r2]
    // mul r4, r1
    *((u32*)(r2 + 4)) = *((u32*)(r2 + 4));
    // mul r1, r0
    // str r1, [r3]
}



void ov07_0222036C(void) {
    // add r7, sp, #0x10
    // str r2, [r7]
    // ldr r3, [sp, #0x30]
    *((u32*)(r7 + 4)) = 0;
    // ldr r4, [sp, #0x38]
    *((u32*)(r7 + 8)) = 0;
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02220394: ; jump table
    sub_02015720(r1, r7, 0, (*((u16*)(r3 + 6)) << 0x10));
    // add r1, sp, #0x20
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp, #0x10]
    // mul r2, r0
    // ldr r1, [sp, #0x14]
    // str r2, [sp, #0x10]
    // mul r2, r0
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x14]
    // mul r0, r1
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x10]
    // add r1, sp, #0x20
    // ldrsb r1, [r1, r0]
    // mul r0, r1
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    ov07_02231B90((0x32 << 6), r7);
    ov07_02231B90(r6, r7);
    // add r1, sp, #0
    // str r2, [r1]
    *((u32*)(r1 + 4)) = r2;
    *((u32*)(r1 + 8)) = r2;
    *((u32*)(r1 + 0xc)) = r2;
    ov07_0221F9A8(4);
    // ldr r0, [sp]
    // add r2, sp, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldrsb r1, [r2, r1]
    // ldr r0, [sp, #0xc]
    ov07_022202D8(0x14, r7);
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x10
    sub_02015708(r5);
}



void ov07_0222043C(void) {
    // add r7, sp, #0x10
    // str r2, [r7]
    // ldr r3, [sp, #0x30]
    *((u32*)(r7 + 4)) = 0;
    // ldr r4, [sp, #0x38]
    *((u32*)(r7 + 8)) = 0;
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02220464: ; jump table
    sub_02015640(r1, r7, 0, (*((u16*)(r3 + 6)) << 0x10));
    // add r1, sp, #0x20
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp, #0x10]
    // mul r2, r0
    // ldr r1, [sp, #0x14]
    // str r2, [sp, #0x10]
    // mul r2, r0
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x14]
    // mul r0, r1
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x10]
    // add r1, sp, #0x20
    // ldrsb r1, [r1, r0]
    // mul r0, r1
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    ov07_02231B90((0x32 << 6), r7);
    ov07_02231B90(r6, r7);
    // add r1, sp, #0
    // str r2, [r1]
    *((u32*)(r1 + 4)) = r2;
    *((u32*)(r1 + 8)) = r2;
    *((u32*)(r1 + 0xc)) = r2;
    ov07_0221F9A8(4);
    // ldr r0, [sp]
    // add r2, sp, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldrsb r1, [r2, r1]
    // ldr r0, [sp, #0xc]
    ov07_022202D8(0x14, r7);
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x10
    sub_02015628(r5);
}



void ov07_0222050C(void) {
    // str r3, [sp, #0xc]
    ov07_0221C478();
    ov07_02231924(r6, r7);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    ov07_02231924(r6);
    // add r1, sp, #0x7c
    ov07_0221F9A8(r6, 3);
    // add r1, sp, #0x70
    ov07_0221F9A8(r6, 3);
    // add r1, sp, #0x58
    ov07_0221F9A8(r6, 3);
    // add r1, sp, #0x64
    ov07_0221F9A8(r6, 3);
    // add r1, sp, #0x40
    ov07_0221F9A8(r6, 3);
    // add r1, sp, #0x34
    ov07_0221F9A8(r6, 3);
    // add r1, sp, #0x4c
    ov07_0221F9A8(r6, 3);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02220588: ; jump table
    // ldr r1, [sp, #0x7c]
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x80]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x84]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x7c]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x80]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x84]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // add r0, sp, #0x14
    // ldr r1, [sp, #0x70]
    // strh r1, [r0]
    // ldr r1, [sp, #0x74]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x78]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r1, [sp, #0x58]
    // strh r1, [r0]
    // ldr r1, [sp, #0x5c]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x60]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r1, [sp, #0x64]
    // strh r1, [r0]
    // ldr r1, [sp, #0x68]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x6c]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x70]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x74]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x78]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x64]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x68]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x6c]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x40]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x44]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x48]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // add r0, sp, #0x14
    // ldr r1, [sp, #0x40]
    // strh r1, [r0]
    // ldr r1, [sp, #0x44]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x48]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r1, [sp, #0x34]
    // strh r1, [r0]
    // ldr r1, [sp, #0x38]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x3c]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r1, [sp, #0x4c]
    // strh r1, [r0]
    // ldr r1, [sp, #0x50]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x54]
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x4c]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x50]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x54]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x58]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x5c]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x60]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x34]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x38]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x3c]
    // neg r1, r1
    *((u16*)((*((u16*)(r0 + 6)) << 0x10) + 4)) = r1;
    // ldr r2, [sp, #0xc]
    ov07_0221FF34(r6, r7);
    // add r1, sp, #0x28
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    ov07_0221F9A8(r6, 3);
    // add r2, sp, #0x1c
    ov07_02231B90(r6, r7);
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // add r3, sp, #0x1c
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x88
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r1
    *((u32*)(r4 + 0x28)) = *((u32*)r3);
    // ldr r0, [sp, #0x20]
    // add r0, r0, r1
    *((u32*)(r4 + 0x2c)) = *((u32*)r3);
    // ldr r0, [sp, #0x24]
    // add r0, r0, r1
    *((u32*)(r4 + 0x30)) = *((u32*)r3);
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // str r2, [sp, #0x88]
    // str r1, [sp, #0x8c]
    // str r0, [sp, #0x90]
    // ldr r1, [sp, #0x88]
    // ldr r1, [sp, #0x8c]
    // mul r0, r5
    // mul r2, r5
    // ldr r1, [sp, #0x24]
    // str r2, [sp, #0x8c]
    // mul r2, r5
    // str r0, [sp, #0x88]
    // str r2, [sp, #0x90]
    // add r0, r0, r1
    *((u32*)(r4 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 0xc));
    // ldr r0, [sp, #0x8c]
    // add r0, r0, r1
    *((u32*)(r4 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 0xc));
    // ldr r0, [sp, #0x90]
    // add r0, r0, r1
    *((u32*)(r4 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 0xc));
    // ldr r0, [sp, #0xa8]
    // ldr r0, [sp, #0xac]
    // ldr r3, [sp, #0xc]
    // str r0, [sp]
    // str r5, [sp, #4]
    // add r0, sp, #0x88
    // str r0, [sp, #8]
    ov07_0222036C(r6, r4, r7);
    // ldr r0, [sp, #0xac]
    // ldr r3, [sp, #0xc]
    // str r0, [sp]
    // str r5, [sp, #4]
    // add r0, sp, #0x88
    // str r0, [sp, #8]
    ov07_0222043C(r6, r4, r7);
    // add r1, sp, #0x14
    // ldrh r2, [r1]
    // add r0, #0x50
    // strh r2, [r0]
    // add r0, #0x52
    // add r4, #0x54
    // strh r2, [r0]
    // strh r0, [r4]
}



void ov07_022207D0(void) {
    sub_02015504();
    ov07_0221C468();
    // str r0, [sp, #8]
    ov07_0221C470(r6);
    // str r5, [sp]
    // ldr r2, [sp, #8]
    // str r4, [sp, #4]
    ov07_0222050C(r6, r7, r0);
}



void ov07_02220800(void) {
}



void ov07_0222080C(void) {
}



void ov07_02220818(void) {
}



void ov07_02220824(void) {
}



void ov07_02220830(void) {
}



void ov07_0222083C(void) {
}



void ov07_02220848(void) {
}



void ov07_02220854(void) {
}



void ov07_02220860(void) {
}



void ov07_0222086C(void) {
}



void ov07_02220878(void) {
}



void ov07_02220884(void) {
    sub_02015504();
    ov07_0221C468();
    ov07_0221C470(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov07_0222050C(r4, r5, r0, r6);
}



void ov07_022208B4(void) {
    ov07_02220978(*((u32*)(r1 + 0x14)));
    ov07_02220CAC(r5, r4);
    ov07_0222150C(r5, r4);
    ov07_02221540(r5, r4);
    ov07_02221550(r5, r4);
}



void ov07_022208F8(void) {
    ov07_0221C478(*((u32*)r1));
    sub_02015530();
    ov07_0221C470(r4);
    ov07_0223192C(r4, r0);
    ov07_0221BFC0(r4);
    ov07_02231AD0(r5, r6, r0, r7);
}



void ov07_02220938(void) {
    ov07_0221C478(*((u32*)r1));
    sub_02015530();
    ov07_0221C468(r4);
    ov07_0223192C(r4, r0);
    ov07_0221BFC0(r4);
    ov07_02231AD0(r5, r6, r0, r7);
}



void ov07_02220978(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xbc
    // add r4, r1, #0
    // ldr r2, [r4, #0x14]
    // add r5, r0, #0
    // cmp r2, #0x64
    // bgt _022209E0
    // blt _0222098A
    // b _02220B54
    // cmp r2, #0x22
    // bhi _022209E6
    // add r3, r2, r2
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _0222099A: ; jump table
    // cmp r2, #0x65
    // bne _022209E6
    // b _02220B6A
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231B90
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231B90
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231BC0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231BC0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231BF0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231BF0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231C20
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231C20
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231C50
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231C50
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231C80
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231C80
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231CB0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231CB0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231CE0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231CE0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231D10
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231D10
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231D40
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231D40
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231DA0
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231DA0
    // b _02220C5E
    // ldr r0, [r4]
    // add r1, sp, #0xa0
    // mov r2, #4
    // bl ov07_0221F9A8
    // add r0, r4, #0
    // bl ov07_02221664
    // strb r0, [r4, #8]
    // ldr r0, [sp, #0xa4]
    // str r0, [sp, #0xb0]
    // ldr r0, [sp, #0xa8]
    // str r0, [sp, #0xb4]
    // ldr r0, [sp, #0xac]
    // str r0, [sp, #0xb8]
    // ldr r0, [sp, #0xa0]
    // cmp r0, #1
    // bne _02220B18
    // mov r0, #1
    // strb r0, [r4, #8]
    // mov r0, #8
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp, #0xb0]
    // mul r1, r2
    // str r1, [sp, #0xb0]
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #0xb4]
    // mul r0, r1
    // str r0, [sp, #0xb4]
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231B90
    // add r0, r4, #0
    // add r1, sp, #0xb0
    // bl ov07_02221734
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231B90
    // add r0, r4, #0
    // add r1, sp, #0xb0
    // bl ov07_02221734
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231B90
    // ldr r1, [r4, #0x24]
    // add r0, r4, #0
    // add r2, sp, #0xb0
    // bl ov07_022216A8
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // add r2, sp, #0xb0
    // bl ov07_02231B90
    // ldr r1, [r4, #0x28]
    // add r0, r4, #0
    // add r2, sp, #0xb0
    // bl ov07_022216A8
    // b _02220C5E
    // add r2, sp, #0xb0
    // bl ov07_02220938
    // add r0, r4, #0
    // add r1, sp, #0xb0
    // bl ov07_02221734
    // b _02220C5E
    // add r2, sp, #0xb0
    // bl ov07_022208F8
    // add r0, r4, #0
    // add r1, sp, #0xb0
    // bl ov07_02221734
    // b _02220C5E
    // ldr r0, _02220C94 ; =0x00002CE0
    // str r0, [sp, #0xb0]
    // mov r0, #0
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // b _02220C5E
    // ldr r0, _02220C98 ; =0xFFFFEC78
    // str r0, [sp, #0xb0]
    // ldr r0, _02220C9C ; =0xFFFFE890
    // str r0, [sp, #0xb4]
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // b _02220C5E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // add r2, sp, #0xb0
    // bl ov07_02231B90
    // b _02220C5E
    // ldr r6, _02220CA0 ; =ov07_022354E0
    // add r3, sp, #0x70
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02220BCC
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // bl ov07_02231924
    // lsl r1, r0, #3
    // add r0, sp, #0x70
    // ldr r0, [r0, r1]
    // str r0, [sp, #0xb0]
    // add r0, sp, #0x74
    // ldr r0, [r0, r1]
    // str r0, [sp, #0xb4]
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // b _02220C5E
    // ldr r6, _02220CA4 ; =ov07_02235578
    // add r3, sp, #0x38
    // mov r2, #7
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02220BF6
    // ldr r0, [r4]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220C0C
    // mov r0, #6
    // b _02220C14
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // bl ov07_02231924
    // lsl r1, r0, #3
    // add r0, sp, #0x38
    // ldr r0, [r0, r1]
    // str r0, [sp, #0xb0]
    // add r0, sp, #0x3c
    // ldr r0, [r0, r1]
    // str r0, [sp, #0xb4]
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // b _02220C5E
    // ldr r6, _02220CA8 ; =ov07_02235540
    // add r3, sp, #0
    // mov r2, #7
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02220C2E
    // ldr r0, [r4]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220C44
    // mov r0, #6
    // b _02220C4C
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // bl ov07_02231924
    // lsl r1, r0, #3
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // str r0, [sp, #0xb0]
    // add r0, sp, #4
    // ldr r0, [r0, r1]
    // str r0, [sp, #0xb4]
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // add r2, sp, #0xb0
    // ldmia r2!, {r0, r1}
    // add r4, #0x2c
    // stmia r4!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r4]
    // ldr r0, [r5, #0x20]
    // ldr r1, [sp, #0xb0]
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // add r0, r1, r0
    // str r0, [r5, #0x28]
    // ldr r0, [r5, #0x20]
    // ldr r1, [sp, #0xb4]
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // add r0, r1, r0
    // str r0, [r5, #0x2c]
    // ldr r0, [r5, #0x20]
    // ldr r1, [sp, #0xb8]
    // ldr r0, [r0]
    // ldr r0, [r0, #0xc]
    // add r0, r1, r0
    // str r0, [r5, #0x30]
    // add sp, #0xbc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02220C94: .word 0x00002CE0
    // _02220C98: .word 0xFFFFEC78
    // _02220C9C: .word 0xFFFFE890
    // _02220CA0: .word ov07_022354E0
    // _02220CA4: .word ov07_02235578
    // _02220CA8: .word ov07_02235540
    // TODO: decompile
}



void ov07_02220CAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x148
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [r1]
    // ldr r1, [r1, #0x24]
    // bl ov07_02231924
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x28]
    // bl ov07_02231924
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #0x18]
    // cmp r0, #0x1a
    // bls _02220CD6
    // b _022214D0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02220CE2: ; jump table
    // mov r1, #0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // strh r1, [r0, #2]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220D5E
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #0x10]
    // cmp r0, #2
    // add r0, sp, #0x20
    // bne _02220D4C
    // ldr r1, _02221080 ; =0xFFFFF2F8
    // strh r1, [r0]
    // mov r1, #0x73
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // mov r1, #0x92
    // lsl r1, r1, #4
    // strh r1, [r0]
    // ldr r1, _02221084 ; =0xFFFFFA60
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _02221088 ; =ov07_02235CE0
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _0222108C ; =ov07_02235CE4
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _02221090 ; =ov07_02235CE8
    // add r0, r3, r0
    // ldr r1, [r1, r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220DC8
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _02221088 ; =ov07_02235CE0
    // add r2, r2, r0
    // ldr r2, [r1, r2]
    // neg r3, r2
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _0222108C ; =ov07_02235CE4
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _02221090 ; =ov07_02235CE8
    // add r0, r3, r0
    // ldr r1, [r1, r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x24]
    // bl ov07_0223192C
    // add r4, r0, #0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x28]
    // bl ov07_0223192C
    // cmp r4, r0
    // bne _02220E14
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _02221088 ; =ov07_02235CE0
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _0222108C ; =ov07_02235CE4
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _02221090 ; =ov07_02235CE8
    // add r0, r3, r0
    // ldr r1, [r1, r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x24]
    // bl ov07_0223192C
    // cmp r0, #3
    // add r0, sp, #0x20
    // bne _02220E38
    // mov r1, #0x3b
    // lsl r1, r1, #6
    // strh r1, [r0]
    // mov r1, #0x21
    // lsl r1, r1, #6
    // strh r1, [r0, #2]
    // ldr r1, _02221094 ; =0x000005FC
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, _02221098 ; =0xFFFFEF7C
    // strh r1, [r0]
    // ldr r1, _0222109C ; =0xFFFFF558
    // strh r1, [r0, #2]
    // ldr r1, _02221094 ; =0x000005FC
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220E82
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _02221088 ; =ov07_02235CE0
    // add r2, r2, r0
    // ldr r2, [r1, r2]
    // neg r3, r2
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _0222108C ; =ov07_02235CE4
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _02221090 ; =ov07_02235CE8
    // add r0, r3, r0
    // ldr r1, [r1, r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x24]
    // bl ov07_0223192C
    // add r4, r0, #0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x28]
    // bl ov07_0223192C
    // cmp r4, r0
    // bne _02220ECE
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _02221088 ; =ov07_02235CE0
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _0222108C ; =ov07_02235CE4
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _02221090 ; =ov07_02235CE8
    // add r0, r3, r0
    // ldr r1, [r1, r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x24]
    // bl ov07_0223192C
    // cmp r0, #3
    // add r0, sp, #0x20
    // bne _02220EF2
    // mov r1, #0x3b
    // lsl r1, r1, #6
    // strh r1, [r0]
    // mov r1, #0x21
    // lsl r1, r1, #6
    // strh r1, [r0, #2]
    // ldr r1, _02221094 ; =0x000005FC
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, _02221098 ; =0xFFFFEF7C
    // strh r1, [r0]
    // ldr r1, _0222109C ; =0xFFFFF558
    // strh r1, [r0, #2]
    // ldr r1, _02221094 ; =0x000005FC
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220F3A
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #0x10]
    // cmp r0, #2
    // add r0, sp, #0x20
    // bne _02220F28
    // ldr r1, _022210A0 ; =0xFFFFF6E0
    // strh r1, [r0]
    // mov r1, #0x5a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // mov r1, #0x92
    // lsl r1, r1, #4
    // strh r1, [r0]
    // ldr r1, _02221084 ; =0xFFFFFA60
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _022210A4 ; =ov07_02235620
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _022210A8 ; =ov07_02235624
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _022210AC ; =ov07_02235628
    // add r0, r3, r0
    // ldr r1, [r1, r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220F88
    // ldr r1, _022210A0 ; =0xFFFFF6E0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x5a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _022210B0 ; =ov07_022357D0
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _022210A8 ; =ov07_02235624
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _022210AC ; =ov07_02235628
    // add r0, r3, r0
    // ldr r1, [r1, r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02220FD6
    // ldr r1, _022210B4 ; =0xFFFFF488
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x5a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _022210B8 ; =ov07_02235B30
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _022210BC ; =ov07_02235B34
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _022210C0 ; =ov07_02235B38
    // add r0, r3, r0
    // ldr r0, [r1, r0]
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _0222101E
    // ldr r1, _022210A0 ; =0xFFFFF6E0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x5a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _022210C4 ; =ov07_02235E90
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _022210C8 ; =ov07_02235E94
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _022210CC ; =ov07_02235E98
    // add r0, r3, r0
    // ldr r0, [r1, r0]
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02221066
    // ldr r1, _022210A0 ; =0xFFFFF6E0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x5a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _022210D0 ; =ov07_02235980
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _022210D4 ; =ov07_02235984
    // b _022210D8
    // _02221080: .word 0xFFFFF2F8
    // _02221084: .word 0xFFFFFA60
    // _02221088: .word ov07_02235CE0
    // _0222108C: .word ov07_02235CE4
    // _02221090: .word ov07_02235CE8
    // _02221094: .word 0x000005FC
    // _02221098: .word 0xFFFFEF7C
    // _0222109C: .word 0xFFFFF558
    // _022210A0: .word 0xFFFFF6E0
    // _022210A4: .word ov07_02235620
    // _022210A8: .word ov07_02235624
    // _022210AC: .word ov07_02235628
    // _022210B0: .word ov07_022357D0
    // _022210B4: .word 0xFFFFF488
    // _022210B8: .word ov07_02235B30
    // _022210BC: .word ov07_02235B34
    // _022210C0: .word ov07_02235B38
    // _022210C4: .word ov07_02235E90
    // _022210C8: .word ov07_02235E94
    // _022210CC: .word ov07_02235E98
    // _022210D0: .word ov07_02235980
    // _022210D4: .word ov07_02235984
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _022213F8 ; =ov07_02235988
    // add r0, r3, r0
    // ldr r0, [r1, r0]
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02221108
    // ldr r1, _022213FC ; =0xFFFFF6E0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x5a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _02221400 ; =ov07_02236040
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _02221404 ; =ov07_02236044
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _02221408 ; =ov07_02236048
    // add r0, r3, r0
    // ldr r0, [r1, r0]
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02221150
    // ldr r1, _0222140C ; =0xFFFFEF10
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x5a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x2e
    // lsl r1, r1, #4
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r2, [sp, #0x18]
    // mov r0, #0x48
    // mul r0, r2
    // ldr r2, _02221410 ; =ov07_022361F0
    // add r2, r2, r0
    // ldr r3, [r1, r2]
    // add r2, sp, #0x20
    // strh r3, [r2]
    // ldr r3, _02221414 ; =ov07_022361F4
    // add r3, r3, r0
    // ldr r3, [r1, r3]
    // strh r3, [r2, #2]
    // ldr r3, _02221418 ; =ov07_022361F8
    // add r0, r3, r0
    // ldr r0, [r1, r0]
    // strh r0, [r2, #4]
    // b _022214D0
    // ldr r4, _0222141C ; =ov07_022355B0
    // add r3, sp, #0xd8
    // mov r2, #0xe
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0222117E
    // ldr r3, _02221420 ; =ov07_022354D0
    // add r2, sp, #0x58
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0xc8
    // mov r0, #0
    // str r1, [sp, #0xc]
    // add r1, sp, #0xb8
    // mov ip, r0
    // str r1, [sp, #0x1c]
    // add r0, sp, #0xd8
    // add r7, sp, #0xa8
    // add r6, sp, #0x98
    // add r5, sp, #0x88
    // add r1, sp, #0x78
    // add r2, sp, #0x68
    // ldr r4, [r0]
    // ldr r3, [sp, #0xc]
    // str r4, [r3]
    // ldr r4, [r0, #0x10]
    // ldr r3, [sp, #0x1c]
    // str r4, [r3]
    // ldr r3, [r0, #0x20]
    // stmia r7!, {r3}
    // ldr r3, [r0, #0x30]
    // stmia r6!, {r3}
    // ldr r3, [r0, #0x40]
    // stmia r5!, {r3}
    // ldr r3, [r0, #0x50]
    // stmia r1!, {r3}
    // ldr r3, [r0, #0x60]
    // add r0, r0, #4
    // stmia r2!, {r3}
    // ldr r3, [sp, #0xc]
    // add r3, r3, #4
    // str r3, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    // add r3, r3, #4
    // str r3, [sp, #0x1c]
    // mov r3, ip
    // add r3, r3, #1
    // mov ip, r3
    // cmp r3, #4
    // blt _022211AA
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02221226
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x58
    // str r0, [sp, #0x10]
    // add r7, sp, #0xc8
    // add r6, sp, #0xb8
    // add r0, sp, #0xa8
    // add r1, sp, #0x98
    // add r2, sp, #0x88
    // add r3, sp, #0x78
    // add r4, sp, #0x68
    // ldr r5, [sp, #0x10]
    // ldr r5, [r5]
    // stmia r7!, {r5}
    // stmia r6!, {r5}
    // stmia r0!, {r5}
    // stmia r1!, {r5}
    // stmia r2!, {r5}
    // stmia r3!, {r5}
    // stmia r4!, {r5}
    // ldr r5, [sp, #0x10]
    // add r5, r5, #4
    // str r5, [sp, #0x10]
    // ldr r5, [sp, #8]
    // add r5, r5, #1
    // str r5, [sp, #8]
    // cmp r5, #4
    // blt _02221204
    // ldr r0, [sp, #0x18]
    // cmp r0, #5
    // bhi _02221244
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221238: ; jump table
    // ldr r1, [sp, #0xc8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xcc]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xd0]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0xd4]
    // cmp r0, #1
    // bne _0222126A
    // ldr r1, [sp, #0xc8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xcc]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xd0]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0xc8]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xcc]
    // neg r1, r1
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xd0]
    // neg r1, r1
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // cmp r0, #3
    // bne _02221296
    // ldr r1, [sp, #0xb8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xbc]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xc0]
    // strh r1, [r0, #4]
    // b _022214D0
    // cmp r0, #5
    // add r0, sp, #0x20
    // bne _022212AA
    // ldr r1, [sp, #0x98]
    // strh r1, [r0]
    // ldr r1, [sp, #0x9c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xa0]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, [sp, #0xa8]
    // strh r1, [r0]
    // ldr r1, [sp, #0xac]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xb0]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // cmp r0, #2
    // bne _022212EA
    // ldr r0, [sp, #0xc4]
    // cmp r0, #1
    // bne _022212D4
    // ldr r1, [sp, #0xb8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xbc]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xc0]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0xb8]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xbc]
    // neg r1, r1
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xc0]
    // neg r1, r1
    // strh r1, [r0, #4]
    // b _022214D0
    // cmp r0, #5
    // bne _0222131A
    // ldr r0, [sp, #0xb4]
    // cmp r0, #1
    // bne _0222130A
    // ldr r0, [sp, #0x88]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    // neg r1, r1
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x90]
    // neg r1, r1
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, [sp, #0x88]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x90]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x84]
    // cmp r0, #1
    // bne _02221330
    // ldr r1, [sp, #0x78]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x7c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x80]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x78]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x7c]
    // neg r1, r1
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x80]
    // neg r1, r1
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // cmp r0, #3
    // bne _0222135C
    // ldr r1, [sp, #0x78]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x7c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x80]
    // strh r1, [r0, #4]
    // b _022214D0
    // cmp r0, #5
    // add r0, sp, #0x20
    // bne _02221370
    // ldr r1, [sp, #0x68]
    // strh r1, [r0]
    // ldr r1, [sp, #0x6c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x70]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, [sp, #0x88]
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x90]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x14]
    // cmp r0, #3
    // bne _022213B0
    // ldr r0, [sp, #0xc4]
    // cmp r0, #1
    // bne _0222139A
    // ldr r1, [sp, #0x88]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x90]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x88]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    // neg r1, r1
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x90]
    // neg r1, r1
    // strh r1, [r0, #4]
    // b _022214D0
    // cmp r0, #2
    // bne _022213E0
    // ldr r0, [sp, #0xc4]
    // cmp r0, #1
    // bne _022213CA
    // ldr r1, [sp, #0x98]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x9c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xa0]
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0x98]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x9c]
    // neg r1, r1
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0xa0]
    // neg r1, r1
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #0xc4]
    // cmp r0, #1
    // bne _02221424
    // ldr r1, [sp, #0x68]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x6c]
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x70]
    // strh r1, [r0, #4]
    // b _022214D0
    // nop
    // _022213F8: .word ov07_02235988
    // _022213FC: .word 0xFFFFF6E0
    // _02221400: .word ov07_02236040
    // _02221404: .word ov07_02236044
    // _02221408: .word ov07_02236048
    // _0222140C: .word 0xFFFFEF10
    // _02221410: .word ov07_022361F0
    // _02221414: .word ov07_022361F4
    // _02221418: .word ov07_022361F8
    // _0222141C: .word ov07_022355B0
    // _02221420: .word ov07_022354D0
    // ldr r0, [sp, #0x68]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x6c]
    // neg r1, r1
    // strh r1, [r0, #2]
    // ldr r1, [sp, #0x70]
    // neg r1, r1
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, _022214F0 ; =0xFFFFFCE0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x4b
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0x7d
    // lsl r1, r1, #2
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, _022214F4 ; =0xFFFFF2AE
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, _022214F8 ; =0xFFFFF5AC
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, _022214FC ; =0xFFFFF290
    // add r0, sp, #0x20
    // strh r1, [r0]
    // mov r1, #0x7a
    // lsl r1, r1, #4
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x24]
    // bl ov07_0223192C
    // cmp r0, #3
    // add r0, sp, #0x20
    // bne _02221494
    // mov r1, #0x3b
    // lsl r1, r1, #6
    // strh r1, [r0]
    // mov r1, #0x21
    // lsl r1, r1, #6
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r1, _02221500 ; =0xFFFFE890
    // strh r1, [r0]
    // ldr r1, _02221504 ; =0xFFFFF768
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // b _022214D0
    // ldr r4, _02221508 ; =ov07_02235510
    // add r3, sp, #0x28
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _022214A8
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [r0]
    // ldr r1, [r1, #0x24]
    // bl ov07_02231924
    // lsl r2, r0, #3
    // add r0, sp, #0x28
    // ldr r1, [r0, r2]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // add r1, sp, #0x2c
    // ldr r1, [r1, r2]
    // strh r1, [r0, #2]
    // mov r1, #0
    // strh r1, [r0, #4]
    // add r1, sp, #0x20
    // ldr r0, [sp]
    // ldrh r2, [r1]
    // add r0, #0x50
    // strh r2, [r0]
    // ldr r0, [sp]
    // ldrh r2, [r1, #2]
    // add r0, #0x52
    // strh r2, [r0]
    // ldr r0, [sp]
    // ldrh r1, [r1, #4]
    // add r0, #0x54
    // str r0, [sp]
    // strh r1, [r0]
    // add sp, #0x148
    // pop {r3, r4, r5, r6, r7, pc}
    // _022214F0: .word 0xFFFFFCE0
    // _022214F4: .word 0xFFFFF2AE
    // _022214F8: .word 0xFFFFF5AC
    // _022214FC: .word 0xFFFFF290
    // _02221500: .word 0xFFFFE890
    // _02221504: .word 0xFFFFF768
    // _02221508: .word ov07_02235510
    // TODO: decompile
}



void ov07_0222150C(void) {
    ov07_02221CB4();
    ov07_02221C8C(0);
    // and r1, r0
    ov07_02221C74(r4, r7, r5);
}



void ov07_02221540(void) {
    // add r3, r0, #0
    // add r2, r1, #0
    // add r1, r3, #0
    // ldr r3, _0222154C ; =ov07_02221EEC
    // ldr r0, [r2, #0x20]
    // bx r3
    // _0222154C: .word ov07_02221EEC
    // TODO: decompile
}



void ov07_02221550(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r4, #0x24]
    // bl ov07_02231924
    // ldr r0, [r4]
    // ldr r1, [r4, #0x28]
    // bl ov07_02231924
    // ldr r1, [r4, #0xc]
    // cmp r1, #3
    // bhi _02221598
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221578: ; jump table
    // cmp r0, #0
    // bne _0222158A
    // mov r5, #1
    // lsl r5, r5, #8
    // b _02221598
    // ldr r5, _022215AC ; =0xFFFFEC00
    // b _02221598
    // cmp r0, #0
    // bne _02221596
    // mov r5, #0
    // b _02221598
    // ldr r5, _022215B0 ; =0xFFFFEB00
    // ldr r0, [r4, #4]
    // bl sub_02015530
    // ldr r0, [r6, #0x20]
    // ldr r0, [r0]
    // ldr r0, [r0, #0xc]
    // add r0, r5, r0
    // str r0, [r6, #0x30]
    // pop {r4, r5, r6, pc}
    // nop
    // _022215AC: .word 0xFFFFEC00
    // _022215B0: .word 0xFFFFEB00
    // TODO: decompile
}



void ov07_022215B4(void) {
    sub_02015504();
    ov07_0221BFD0();
    Heap_Alloc(0x38);
    // str r5, [r4]
    ov07_0221C478(r5);
    *((u32*)(r4 + 4)) = r0;
    // add r1, #0xc
    ov07_0221F9A8(*((u32*)r4), r4, 6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022215F2: ; jump table
    ov07_0221C468(*((u32*)r4));
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C470(*((u32*)r4));
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C470(*((u32*)r4));
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C468(*((u32*)r4));
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C468(*((u32*)r4));
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C470(*((u32*)r4));
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C470(*((u32*)r4));
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C468(*((u32*)r4));
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C468(*((u32*)r4));
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C470(*((u32*)r4));
    *((u32*)(r4 + 0x28)) = r0;
    ov07_022208B4(r6, r4);
    Heap_Free(r4);
}



void ov07_02221664(void) {
    ov07_02231924(*((u32*)r0), *((u32*)(r0 + 0x24)));
    ov07_02231924(*((u32*)r6), *((u32*)(r6 + 0x28)));
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222168C: ; jump table
}



void ov07_022216A8(void) {
    // add r0, sp, #0x20
    // str r4, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    ov07_02231924(*((u32*)r0), r1);
    // add r1, sp, #0x10
    ov07_0221F9A8(*((u32*)r5), 4);
    // add r1, sp, #0
    ov07_0221F9A8(4);
    ov07_02221664(r5);
    *((u8*)(r5 + 8)) = r0;
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    *((u8*)(r5 + 8)) = 1;
    // ldrsb r0, [r5, r1]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x24]
    // mul r0, r2
    // str r0, [sp, #0x20]
    // ldrsb r2, [r5, r1]
    // mul r2, r3
    // str r2, [sp, #0x24]
    // ldrsb r1, [r5, r1]
    // ldr r2, [sp, #0x28]
    // mul r1, r2
    // str r1, [sp, #0x28]
    // add r0, r1, r0
    // str r0, [r7]
    // ldr r0, [sp, #0x24]
    // add r0, r1, r0
    *((u32*)(r7 + 4)) = 1;
    // ldr r0, [sp, #0x28]
    // add r0, r1, r0
    *((u32*)(r7 + 8)) = 1;
}



void ov07_02221734(void) {
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r1, sp, #0xc
    ov07_0221F9A8(*((u32*)r0), 4);
    ov07_02221664(r5);
    *((u8*)(r5 + 8)) = r0;
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    *((u8*)(r5 + 8)) = 1;
    // ldrsb r0, [r5, r1]
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // mul r0, r2
    // str r0, [sp]
    // ldrsb r2, [r5, r1]
    // mul r2, r3
    // str r2, [sp, #4]
    // ldrsb r1, [r5, r1]
    // ldr r2, [sp, #8]
    // mul r1, r2
    // str r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r4 + 4)) = 1;
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = 1;
}



void ov07_022217A4(void) {
}



u8 ov07_022217B0(void) {
}



void ov07_022217B4(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    // add r1, sp, #8
    ov07_022217A4(r1);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #0xc]
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #8]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022217F6: ; jump table
    // add r1, sp, #0
    sub_0201560C(r5, (*((u16*)(r1 + 6)) << 0x10));
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // mul r0, r3
    // strh r0, [r2]
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // mul r0, r3
    *((u16*)(r2 + 2)) = 2;
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // mul r0, r3
    *((u16*)(r2 + 4)) = 4;
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0
    // strh r0, [r2]
    // ldr r0, [sp, #0x14]
    *((u16*)(r2 + 2)) = 4;
    // ldr r0, [sp, #0x18]
    *((u16*)(r2 + 4)) = 4;
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // mul r0, r3
    // strh r0, [r2]
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // mul r0, r3
    *((u16*)(r2 + 2)) = 2;
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // add r1, sp, #0
    // mul r0, r3
    *((u16*)(r2 + 4)) = 4;
    sub_0201560C(r5, 8);
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    *((u16*)(r1 + 2)) = *((u32*)(r4 + 0x30));
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    *((u16*)(r1 + 4)) = *((u32*)(r4 + 0x34));
    // add r1, sp, #0
    sub_0201560C(r5);
}



u8 ov07_02221898(void) {
}



u8 ov07_0222189C(void) {
}



void ov07_022218A0(void) {
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r1, sp, #0xc
    ov07_022217A4(r1);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #0x10]
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #0xc]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022218E2: ; jump table
    // add r1, sp, #0
    sub_02015640(r5, (*((u16*)(r1 + 6)) << 0x10));
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp]
    // mul r1, r2
    // str r1, [sp]
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp, #4]
    // mul r1, r2
    // str r1, [sp, #4]
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #8]
    // mul r0, r1
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldrsb r6, [r4, r3]
    // mul r6, r2
    // str r6, [sp]
    // ldrsb r2, [r4, r3]
    // mul r2, r1
    // str r2, [sp, #4]
    // ldrsb r1, [r4, r3]
    // mul r1, r0
    // str r1, [sp, #8]
    // add r2, sp, #0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x24)), 8);
    // add r2, sp, #0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    sub_02015628(r5);
}



void ov07_02221968(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    ov07_022217A4(r1, 0);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #8]
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #4]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022219A6: ; jump table
    // add r1, sp, #0
    sub_0201568C(r5, (*((u16*)(r1 + 6)) << 0x10));
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // mul r0, r2
    // strh r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // mul r0, r2
    // strh r0, [r1]
    // add r1, sp, #0
    sub_02015674(r5);
}



void ov07_022219EC(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    ov07_022217A4(r1, 0);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #8]
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #4]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221A2A: ; jump table
    // add r1, sp, #0
    sub_020156BC(r5, (*((u16*)(r1 + 6)) << 0x10));
    // add r1, sp, #0
    // ldrh r2, [r1]
    // ldrsb r0, [r4, r0]
    // mul r0, r2
    // strh r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrh r2, [r1]
    // ldrsb r0, [r4, r0]
    // mul r0, r2
    // strh r0, [r1]
    // add r1, sp, #0
    sub_020156A8(r5);
}



void ov07_02221A6C(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    ov07_022217A4(r1, 0);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #8]
    *((u8*)(r4 + 8)) = 1;
    // ldr r1, [sp, #4]
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221AAA: ; jump table
    // add r1, sp, #0
    sub_020156EC(r5);
    // ldr r1, [sp, #0xc]
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #0
    sub_020156D8(r5);
}



u8 ov07_02221AD4(void) {
}



u8 ov07_02221AD8(void) {
}



u8 ov07_02221ADC(void) {
}



u8 ov07_02221AE0(void) {
}



void ov07_02221AE4(void) {
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r1, sp, #0xc
    ov07_022217A4(r1);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #0x10]
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #0xc]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221B26: ; jump table
    // add r1, sp, #0
    sub_02015720(r7, (*((u16*)(r1 + 6)) << 0x10));
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp]
    // mul r1, r2
    // str r1, [sp]
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp, #4]
    // mul r1, r2
    // str r1, [sp, #4]
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #8]
    // mul r0, r1
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldrsb r5, [r4, r3]
    // mul r5, r2
    // str r5, [sp]
    // ldrsb r2, [r4, r3]
    // mul r2, r1
    // str r2, [sp, #4]
    // ldrsb r1, [r4, r3]
    // mul r1, r0
    // str r1, [sp, #8]
    // add r2, sp, #0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x28)), 8);
    // ldr r1, [sp]
    // ldr r5, [sp, #0x14]
    // ldr r6, [sp, #0x18]
    // mul r0, r5
    _s32_div_f(r1, r6);
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // mul r0, r5
    _s32_div_f(r1, r6);
    // ldr r1, [sp, #8]
    // str r0, [sp, #4]
    // mul r0, r5
    _s32_div_f(r1, r6);
    // str r0, [sp, #8]
    // add r2, sp, #0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    sub_02015708(r7);
}



void ov07_02221BF0(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    ov07_022217A4(r1, 0);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #8]
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #4]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221C2E: ; jump table
    // add r1, sp, #0
    sub_0201576C(r5, (*((u16*)(r1 + 6)) << 0x10));
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // mul r0, r2
    // strh r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // mul r0, r2
    // strh r0, [r1]
    // add r1, sp, #0
    sub_02015754(r5);
}



void ov07_02221C74(void) {
    // push {r3, lr}
    // add r3, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // ldr r2, _02221C88 ; =ov07_022363A0
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // blx r2
    // pop {r3, pc}
    // nop
    // _02221C88: .word ov07_022363A0
    // TODO: decompile
}



void ov07_02221C8C(void) {
    // push {r3, r4, r5}
    // sub sp, #0x3c
    // ldr r4, _02221CB0 ; =ov07_022363D8
    // add r5, r0, #0
    // add r3, sp, #0
    // mov r2, #7
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02221C98
    // ldr r0, [r4]
    // lsl r1, r5, #2
    // str r0, [r3]
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // add sp, #0x3c
    // pop {r3, r4, r5}
    // bx lr
    // _02221CB0: .word ov07_022363D8
    // TODO: decompile
}



void ov07_02221CB4(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #0
    // ldr r6, _02221CDC ; =0x0000FEFE
    // add r5, r4, #0
    // add r0, r4, #0
    // bl ov07_02221C8C
    // add r4, r4, #1
    // cmp r0, r6
    // beq _02221CCE
    // add r5, r5, #1
    // cmp r5, #0xff
    // blt _02221CBC
    // cmp r5, #0xff
    // blt _02221CD6
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02221CDC: .word 0x0000FEFE
    // TODO: decompile
}



void ov07_02221CE0(void) {
}



u32 ov07_02221CEC(void) {
}



void ov07_02221D10(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldr r1, _02221D48 ; =ov07_02236414
    // add r0, sp, #0
    // ldrh r2, [r1, #0x20]
    // strh r2, [r0]
    // ldrh r2, [r1, #0x22]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x24]
    // ldrh r1, [r1, #0x26]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldr r0, [r4, #4]
    // bl sub_02015524
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl sub_02015528
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02221D48: .word ov07_02236414
    // TODO: decompile
}



void ov07_02221D4C(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    // add r1, sp, #8
    ov07_02221CE0(r1);
    // ldr r1, [sp, #0xc]
    // add r0, sp, #0
    // strh r1, [r0]
    // ldr r1, [sp, #0x10]
    *((u16*)(r0 + 2)) = r1;
    // ldr r1, [sp, #0x14]
    *((u16*)(r0 + 4)) = r1;
    sub_02015524(*((u32*)(r4 + 4)));
    // add r0, sp, #0
    Camera_SetAnglePos(r0);
}



void ov07_02221D88(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldr r1, _02221DC0 ; =ov07_02236414
    // add r0, sp, #0
    // ldrh r2, [r1, #0x18]
    // strh r2, [r0]
    // ldrh r2, [r1, #0x1a]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x1c]
    // ldrh r1, [r1, #0x1e]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldr r0, [r4, #4]
    // bl sub_02015524
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl sub_02015528
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02221DC0: .word ov07_02236414
    // TODO: decompile
}



void ov07_02221DC4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // ldr r1, _02221E20 ; =ov07_02236414
    // add r0, sp, #0
    // ldrh r2, [r1, #0x10]
    // strh r2, [r0, #8]
    // ldrh r2, [r1, #0x12]
    // strh r2, [r0, #0xa]
    // ldrh r2, [r1, #0x14]
    // strh r2, [r0, #0xc]
    // ldrh r2, [r1, #0x16]
    // strh r2, [r0, #0xe]
    // ldrh r2, [r1, #0x28]
    // strh r2, [r0]
    // ldrh r2, [r1, #0x2a]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x2c]
    // strh r2, [r0, #4]
    // ldrh r1, [r1, #0x2e]
    // strh r1, [r0, #6]
    // ldr r0, [r4, #4]
    // bl sub_02015524
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl sub_02015528
    // ldr r0, [r4]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02221E12
    // add r0, sp, #8
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // b _02221E1A
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02221E20: .word ov07_02236414
    // TODO: decompile
}



void ov07_02221E24(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldr r1, _02221E5C ; =ov07_02236414
    // add r0, sp, #0
    // ldrh r2, [r1]
    // strh r2, [r0]
    // ldrh r2, [r1, #2]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #4]
    // ldrh r1, [r1, #6]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldr r0, [r4, #4]
    // bl sub_02015524
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl sub_02015528
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02221E5C: .word ov07_02236414
    // TODO: decompile
}



void ov07_02221E60(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldr r1, _02221E98 ; =ov07_02236414
    // add r0, sp, #0
    // ldrh r2, [r1, #8]
    // strh r2, [r0]
    // ldrh r2, [r1, #0xa]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0xc]
    // ldrh r1, [r1, #0xe]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldr r0, [r4, #4]
    // bl sub_02015524
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl sub_02015528
    // add r0, sp, #0
    // add r1, r5, #0
    // bl Camera_SetAnglePos
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02221E98: .word ov07_02236414
    // TODO: decompile
}



u32 ov07_02221E9C(void) {
}



u32 ov07_02221EC4(void) {
}



void ov07_02221EEC(void) {
    // push {r3, lr}
    // add r3, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // ldr r2, _02221F00 ; =ov07_02236444
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // blx r2
    // pop {r3, pc}
    // nop
    // _02221F00: .word ov07_02236444
    // TODO: decompile
}



void ov07_02221F04(void) {
    // push {r3, r4, r5, r6}
    // cmp r2, #0
    // beq _02221F1A
    // mov r4, #0x18
    // add r6, r0, #0
    // mul r6, r4
    // ldr r4, _02221F30 ; =ov07_02236468
    // lsl r5, r1, #2
    // add r4, r4, r6
    // ldrsh r4, [r5, r4]
    // strh r4, [r2]
    // cmp r3, #0
    // beq _02221F2C
    // mov r2, #0x18
    // mul r2, r0
    // ldr r0, _02221F34 ; =ov07_0223646A
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
    // strh r0, [r3]
    // pop {r3, r4, r5, r6}
    // bx lr
    // _02221F30: .word ov07_02236468
    // _02221F34: .word ov07_0223646A
    // TODO: decompile
}



void ov07_02221F38(void) {
    ov07_0221BFC0();
    ov07_02221F04(0, (r5 + 2), r4, r6);
    ov07_0221FAB0(r7);
    ov07_02221F04(1, (r5 - 2), r4, r6);
    ov07_02221F04(0, r5, r4, r6);
}



void ov07_02221F80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r2, #0
    // bl ov07_02231924
    // add r4, r0, #0
    // add r0, r7, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _02221F9A
    // mov r5, #1
    // b _02221F9C
    // mov r5, #0
    // add r0, r7, #0
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02221FA8
    // add r4, r4, #2
    // cmp r6, #3
    // bhi _02221FE0
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221FB8: ; jump table
    // mov r0, #0x18
    // add r2, r5, #0
    // mul r2, r0
    // ldr r0, _02221FE8 ; =ov07_02236468
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x18
    // add r2, r5, #0
    // mul r2, r0
    // ldr r0, _02221FEC ; =ov07_0223646A
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221FE8: .word ov07_02236468
    // _02221FEC: .word ov07_0223646A
    // TODO: decompile
}



void ov07_02221FF0(void) {
    Sprite_GetPaletteProxy(*((u32*)r0));
    ObjPlttTransfer_GetPaletteVramOffset(1);
}



void ov07_02222004(void) {
    ov07_0223192C();
    ov07_0221BFC0(r6);
}



void ov07_0222202C(void) {
}



void ov07_02222040(void) {
}



void ov07_0222204C(void) {
    // sub r0, r1, r0
    FX_Div(r2);
    // add r1, sp, #0
    // str r0, [sp]
    FX_Modf();
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // neg r0, r0
    // str r0, [sp]
    // asr r0, r0, #0xc
}



void ov07_0222207C(void) {
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(r1, (0 << 0x10), (2 << 0x10));
}



void ov07_0222209C(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    ov07_02222644();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ManagedSprite_SetAffineScale(r4);
}



void ov07_022220B8(void) {
    // ldrsh r3, [r5, r1]
    // add r2, r2, r3
    Pokepic_SetAttr(r1, 0);
    // ldrsh r2, [r5, r2]
    // add r2, r6, r2
    Pokepic_SetAttr(r4, 1, 2);
}



void ov07_022220DC(void) {
    // ldrsh r2, [r5, r2]
    Pokepic_SetAttr(r1, 0xc, 0);
    // ldrsh r2, [r5, r2]
    Pokepic_SetAttr(r4, 0xd, 2);
}



void ov07_022220FC(void) {
    // ldr r3, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    *((u32*)(r0 + 4)) = r3;
    *((u32*)(r0 + 8)) = r1;
    *((u32*)(r0 + 0xc)) = r0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r0 + 0x10)) = r3;
    *((u32*)(r0 + 0x14)) = r0;
    // sub r0, r2, r1
    _s32_div_f(r3);
    *((u32*)(r5 + 0x18)) = r0;
    // add r0, sp, #0
    // ldr r1, [sp, #0x1c]
    // sub r0, r0, r4
    _s32_div_f(*((u16*)(r0 + 0x10)));
    *((u32*)(r5 + 0x1c)) = r0;
}



void ov07_0222212C(void) {
    // str r3, [sp]
    GF_AssertFail();
    // add r0, sp, #8
    // neg r1, r1
    *((u16*)(r0 + 0x1c)) = *((u16*)(r0 + 0x1c));
    // add r1, sp, #8
    // ldrsh r6, [r1, r0]
    ov07_0222204C((r4 << 0xc), (r7 << 0xc), (r6 << 0xc));
    *((u32*)(r5 + 4)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r5 + 8)) = r4;
    *((u32*)(r5 + 0xc)) = r0;
    // ldr r0, [sp]
    *((u32*)(r5 + 0x10)) = r0;
    // ldr r0, [sp, #0x20]
    *((u32*)(r5 + 0x14)) = r0;
    *((u32*)(r5 + 0x18)) = r6;
    // add r0, sp, #8
    // ldr r0, [sp]
    // sub r0, r1, r0
    _s32_div_f(*((u32*)(r5 + 4)));
    *((u32*)(r5 + 0x1c)) = r0;
}



void ov07_02222180(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _0222218A
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _0222220E
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0x18]
    // add r0, r1, r0
    // str r0, [r4, #8]
    // ldr r1, [r4, #0x10]
    // ldr r0, [r4, #0x1c]
    // add r0, r1, r0
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x10]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // ldr r2, [r4, #0xc]
    // asr r0, r0, #4
    // lsl r1, r0, #2
    // ldr r0, _02222214 ; =FX_SinCosTable_
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // asr r0, r1, #0xc
    // strh r0, [r4]
    // ldr r0, [r4, #0x10]
    // ldr r2, [r4, #0x14]
    // asr r0, r0, #4
    // lsl r0, r0, #1
    // add r0, r0, #1
    // lsl r1, r0, #1
    // ldr r0, _02222214 ; =FX_SinCosTable_
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // asr r0, r1, #0xc
    // strh r0, [r4, #2]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02222214: .word FX_SinCosTable_
    // TODO: decompile
}



void ov07_02222218(void) {
    ov07_02222180();
    ov07_0222207C(r5, r7, r4, r6);
}



void ov07_02222240(void) {
    ov07_02222180();
    ov07_022220B8(r5, r7, r4, r6);
}



void ov07_02222268(void) {
    // str r2, [sp]
    GF_AssertFail();
    // strh r4, [r5]
    *((u16*)(r5 + 2)) = r6;
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    *((u32*)(r5 + 4)) = *((u16*)(r0 + 0x14));
    // ldr r1, [sp]
    ov07_02222040((r4 << 0xc), (r1 << 0xc), *((u16*)(r0 + 0x14)));
    *((u32*)(r5 + 8)) = r0;
    // add r2, sp, #0x10
    // ldrsh r1, [r2, r1]
    ov07_02222040((r6 << 0xc), (0x10 << 0xc), r7);
    *((u32*)(r5 + 0xc)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)(r5 + 0x10)) = r0;
    *((u32*)(r5 + 0x14)) = r4;
}



void ov07_022222B4(void) {
    GF_AssertFail();
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 8));
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0xc));
    // asr r0, r0, #0xc
    // strh r0, [r4]
    // asr r0, r0, #0xc
    *((u16*)(r4 + 2)) = *((u32*)(r4 + 0x14));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
}



void ov07_022222F0(void) {
    ov07_022222B4();
    ov07_0222207C(r5, r4, 0, 0);
}



void ov07_02222314(void) {
    ov07_022222B4();
    ov07_022220B8(r5, r4, 0, 0);
}



void ov07_02222338(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // add r4, sp, #0x10
    // mov r1, #0x14
    // ldrsh r1, [r4, r1]
    // str r1, [sp]
    // ldrh r1, [r4, #0x18]
    // str r1, [sp, #4]
    // add r1, r2, #0
    // add r2, r3, #0
    // mov r3, #0x10
    // ldrsh r3, [r4, r3]
    // bl ov07_02222268
    // mov r1, #0
    // strh r1, [r5]
    // ldr r0, _0222237C ; =0x0000BFFF
    // strh r1, [r5, #2]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // ldrh r0, [r0, #0x18]
    // ldr r3, _02222380 ; =0x00003FFF
    // add r2, r1, #0
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl ov07_022220FC
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0222237C: .word 0x0000BFFF
    // _02222380: .word 0x00003FFF
    // TODO: decompile
}



void ov07_02222384(void) {
    GF_AssertFail();
    GF_AssertFail();
    ov07_022222B4(r5);
    ov07_02222180(r4);
    // ldrsh r3, [r5, r2]
    // ldrsh r1, [r4, r2]
    // add r1, r3, r1
    // strh r1, [r5]
    // ldrsh r3, [r5, r1]
    // ldrsh r1, [r4, r1]
    // add r1, r3, r1
    *((u16*)(r5 + 2)) = 2;
}



void ov07_022223CC(void) {
    ov07_02222384();
    ov07_0222207C(r5, r4, 0, 0);
}



void ov07_022223F0(void) {
    GF_AssertFail();
    // str r6, [r5]
    *((u32*)(r5 + 4)) = r4;
    ov07_02222040((r6 << 0xc), (r7 << 0xc), r4);
    // asr r0, r0, #0xc
    *((u32*)(r5 + 8)) = r0;
}



void ov07_02222418(void) {
    GF_AssertFail();
    // str r6, [r5]
    *((u32*)(r5 + 4)) = r4;
    ov07_02222040((r6 << 0xc), (r7 << 0xc), r4);
    *((u32*)(r5 + 8)) = r0;
    *((u32*)(r5 + 0xc)) = r6;
}



void ov07_02222440(void) {
    GF_AssertFail();
    // add r0, r1, r0
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
}



void ov07_02222468(void) {
    GF_AssertFail();
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 8));
    // asr r0, r0, #0xc
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
}



void ov07_02222494(void) {
}



void ov07_022224AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bne _022224B6
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _022224FE
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // ldr r2, [r4, #0xc]
    // asr r0, r0, #4
    // lsl r0, r0, #1
    // add r0, r0, #1
    // lsl r1, r0, #1
    // ldr r0, _02222504 ; =FX_SinCosTable_
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // asr r0, r1, #0xc
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02222504: .word FX_SinCosTable_
    // TODO: decompile
}



void ov07_02222508(void) {
    GF_AssertFail();
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 4)) = r0;
    _s32_div_f((r5 << 8), r6);
    _s32_div_f((r7 << 8), r6);
    // ldr r2, [sp, #0x18]
    ov07_02222040((r5 << 0xc), (r0 << 0xc));
    *((u32*)(r4 + 8)) = r0;
    // asr r0, r0, #0x10
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = (r5 << 0x10);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x10)) = (0 << 0xc);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x14)) = (2 << 0xc);
}



void ov07_02222558(void) {
    GF_AssertFail();
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 8));
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 8));
    // asr r0, r0, #0xc
    // strh r0, [r4]
    // asr r0, r0, #0xc
    *((u16*)(r4 + 2)) = *((u32*)(r4 + 0x14));
}



void ov07_02222590(void) {
    // str r3, [sp]
    GF_AssertFail();
    // ldr r0, [sp, #0x20]
    // add r1, sp, #8
    *((u32*)(r5 + 4)) = r0;
    // ldrsh r4, [r1, r0]
    _s32_div_f((r6 << 8), r4);
    _s32_div_f((r7 << 8), r4);
    // ldr r2, [sp, #0x20]
    ov07_02222040((r6 << 0xc), (r0 << 0xc));
    *((u32*)(r5 + 8)) = r0;
    // ldr r0, [sp]
    _s32_div_f((r0 << 8), r4);
    // add r1, sp, #8
    // ldrsh r0, [r1, r0]
    _s32_div_f((0x10 << 8), r4);
    // ldr r2, [sp, #0x20]
    ov07_02222040((r7 << 0xc), (r0 << 0xc));
    *((u32*)(r5 + 0xc)) = r0;
    // strh r6, [r5]
    *((u16*)(r5 + 2)) = r7;
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x10)) = (0 << 0xc);
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x14)) = (2 << 0xc);
}



void ov07_0222260C(void) {
    GF_AssertFail();
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 8));
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0xc));
    // asr r0, r0, #0xc
    // strh r0, [r4]
    // asr r0, r0, #0xc
    *((u16*)(r4 + 2)) = *((u32*)(r4 + 0x14));
}



void ov07_02222644(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // add r4, r1, #0
    // add r6, r2, #0
    // bl _fflt
    // ldr r1, _02222670 ; =0x43800000
    // bl _fdiv
    // str r0, [r4]
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // bl _fflt
    // ldr r1, _02222670 ; =0x43800000
    // bl _fdiv
    // str r0, [r6]
    // pop {r4, r5, r6, pc}
    // nop
    // _02222670: .word 0x43800000
    // TODO: decompile
}



void ov07_02222674(void) {
    // sub r0, r0, r1
    // asr r1, r4, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul((0x50 << 0xc), (r1 << 1));
    // add r0, r0, r2
    // adc r1, r3
    // orr r0, r1
    FX_Div((r0 >> 0xc), ((2 << 0xa) << 9), (2 << 0xa), 0);
    // sub r0, r4, r0
    // add r1, sp, #0
    FX_Modf();
    // add r0, r0, r1
    // ldr r1, [sp]
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // add r0, r1, r0
    // asr r0, r0, #0x10
}



void ov07_022226C4(void) {
    ov07_02222674(r1, r2, r3);
    // ldr r0, [sp, #0x10]
    // mvn r0, r0
    // mul r0, r2
    // asr r2, r0, #0x10
    // sub r0, r4, r6
    // asr r4, r0, #0x10
    // add r2, r4, r2
    Pokepic_SetAttr(r5, 1, r0);
}



void ov07_022226FC(void) {
    ov07_02222674(r1, r2, r3);
    // ldr r0, [sp, #0x18]
    // mvn r0, r0
    // mul r0, r4
    // asr r4, r0, #0x10
    // sub r0, r5, r7
    // asr r5, r0, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(r6);
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // add r2, r5, r4
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(r6, 2, (r2 << 0x10));
}



void ov07_02222748(void) {
    ov07_02222558();
    ov07_0222209C(r5, r4);
}



void ov07_02222768(void) {
    ov07_02222558();
    ov07_022220DC(r5, r4);
}



void ov07_02222788(void) {
    ov07_0222260C();
    ov07_022220DC(r5, r4);
}



void ov07_022227A8(void) {
    GF_AssertFail();
    *((u32*)(r5 + 4)) = r7;
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 8)) = r7;
    *((u32*)(r5 + 0xc)) = r0;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = r6;
    *((u32*)(r5 + 0x18)) = r4;
    // neg r0, r6
    *((u32*)(r5 + 0x1c)) = r0;
    // neg r0, r4
    *((u32*)(r5 + 0x20)) = r0;
    // strh r1, [r5]
    *((u16*)(r5 + 2)) = 0;
}



void ov07_022227D8(void) {
    GF_AssertFail();
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 4)) = 0;
    // ldrsh r0, [r4, r2]
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 8));
    // strh r2, [r4]
    // neg r0, r1
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x20)) = 2;
    // neg r0, r1
    *((u16*)(r4 + 2)) = 0;
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) + 1);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 1);
}



void ov07_0222283C(void) {
    ov07_022227D8();
    ov07_022220B8(r5, r7, r4, r6);
}



void ov07_02222864(void) {
    // str r1, [sp]
    // strh r3, [r7]
    // add r0, sp, #8
    // ldrsh r1, [r0, r1]
    *((u16*)(r0 + 2)) = 0x10;
    // add r1, #0x94
    // str r2, [r1]
    // add r1, #0xa8
    // strh r2, [r1]
    // add r1, #0xaa
    // strh r6, [r1]
    // add r2, #0xac
    // mov ip, r1
    // strb r1, [r2]
    // add r1, #0xad
    // strb r6, [r1]
    // add r0, #0xae
    // strb r1, [r0]
    // mov r0, ip
    // ldr r4, [sp]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // mov r0, ip
    // add r5, #0x24
    // ldr r1, [sp, #0x28]
    // add r0, #0x98
    // str r1, [r0]
    // ldr r1, [sp, #0x2c]
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r1, [sp, #0x30]
    // add r0, #0xa0
    // str r1, [r0]
    // ldr r1, [sp, #0x34]
    // add r0, #0xa4
    // str r1, [r0]
    // add r0, #0xac
    // ldrb r0, [r0]
    // add r0, #0x98
    ManagedSprite_SetDrawFlag(*((u32*)r0), 0, (4 - 1), (r0 + 4));
    // add r0, #0xac
    // ldrb r0, [r0]
}



void ov07_02222914(void) {
    // add r2, sp, #0x10
    // stmia r2!, {r1}
    // add r0, #0xa8
    // ldrh r2, [r0]
    // add r0, #0xaa
    // ldrh r0, [r0]
    // add r0, #0xad
    // ldrb r0, [r0]
    // add r0, r5, r0
    // add r0, #0x98
    ManagedSprite_SetDrawFlag(*((u32*)(r0 << 2)), 1);
    // add r0, #0xad
    // ldrb r0, [r0]
    // add r0, #0xad
    // strb r1, [r0]
    // add r0, #0xaa
    // strh r1, [r0]
    // add r0, #0xad
    // ldrb r1, [r0]
    // add r0, #0xac
    // ldrb r0, [r0]
    // add r0, #0xaa
    // ldrh r0, [r0]
    // add r0, #0xaa
    // strh r1, [r0]
    // str r0, [sp]
    // add r0, #0xad
    // ldrb r0, [r0]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r1, #0x94
    // blx r1
    // ldr r1, [sp, #4]
    // str r0, [r1]
    // add r0, #0xae
    // ldrb r0, [r0]
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r6, r2]
    // add r0, #0x98
    // add r1, r1, r2
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r6, r2]
    // add r2, r3, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r5), (0 << 0x10), (6 << 0x10));
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov07_02222644(r7);
    // add r0, #0x98
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    ManagedSprite_SetAffineScale(*((u32*)r4));
    // add r0, #0x98
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    // ldr r0, [sp, #4]
    // add r7, #0x24
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r6, #0x24
    // str r0, [sp]
    // add r0, #0xad
    // ldrb r1, [r0]
    // ldr r0, [sp]
    // add r5, #0xac
    // ldrb r2, [r5]
    // add r1, sp, #0x10
}



void ov07_02222A44(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // ldr r3, _02222A74 ; =0x0000FFFF
    // add r4, r1, #0
    // mov r1, #2
    // str r3, [sp]
    // lsl r1, r1, #0x10
    // str r1, [sp, #4]
    // ldr r1, _02222A78 ; =0xFFFF8000
    // add r5, r0, #0
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // mov r1, #0
    // add r2, r3, #0
    // add r3, r1, #0
    // bl ov07_022220FC
    // ldr r0, [r5, #4]
    // add r1, r0, #0
    // mul r1, r4
    // str r1, [r5, #4]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02222A74: .word 0x0000FFFF
    // _02222A78: .word 0xFFFF8000
    // TODO: decompile
}



void ov07_02222A7C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov07_022222B4
    // cmp r0, #0
    // bne _02222A98
    // mov r0, #1
    // str r0, [r4, #0x24]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // cmp r1, #0
    // bge _02222AA2
    // strh r0, [r4]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _02222AAE
    // mov r0, #0
    // strh r0, [r4, #2]
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02222AC0 ; =0x04000052
    // strh r1, [r0]
    // pop {r3, r4, r5, pc}
    // _02222AC0: .word 0x04000052
    // TODO: decompile
}



void ov07_02222AC4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r6, sp, #8
    // mov r5, #0x10
    // ldrsh r5, [r6, r5]
    // add r4, r0, #0
    // str r5, [sp]
    // ldr r5, [sp, #0x1c]
    // lsl r5, r5, #0x10
    // lsr r5, r5, #0x10
    // str r5, [sp, #4]
    // bl ov07_02222268
    // mov r2, #0
    // ldr r0, _02222AF0 ; =ov07_02222A7C
    // add r1, r4, #0
    // str r2, [r4, #0x24]
    // bl SysTask_CreateOnMainQueue
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _02222AF0: .word ov07_02222A7C
    // TODO: decompile
}



void ov07_02222AF4(void) {
    // ldr r0, [r0, #0x24]
    // bx lr
    // TODO: decompile
}



void ov07_02222AF8(void) {
}



void ov07_02222B14(void) {
    // blx r1
    *((u32*)(r1 + 0xc)) = 0;
}



void ov07_02222B30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r5, #0
    // bne _02222B42
    // bl GF_AssertFail
    // mov r0, #1
    // str r0, [r5, #8]
    // mov r2, #0
    // str r2, [r5, #0xc]
    // str r4, [r5, #0x18]
    // str r6, [r5, #0x10]
    // ldr r0, _02222B68 ; =ov07_02222AF8
    // str r7, [r5, #0x14]
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // str r0, [r5, #4]
    // ldr r0, _02222B6C ; =ov07_02222B14
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02222B68: .word ov07_02222AF8
    // _02222B6C: .word ov07_02222B14
    // TODO: decompile
}



void ov07_02222B70(void) {
    GF_AssertFail();
    SysTask_Destroy(*((u32*)(r4 + 4)));
    SysTask_Destroy(*((u32*)r4));
    sub_02014AA0();
}



void ov07_02222B94(void) {
}



void ov07_02222BA4(void) {
    sub_02014A60(*((u32*)(r0 + 0x1c)));
    sub_02014AA0();
    // ldr r1, [r4, r1]
    sub_02014AB0(r5, (0x62 << 4), 4, 1);
}



void ov07_02222BC8(void) {
}



void ov07_02222BDC(void) {
}



void ov07_02222BE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r7, r2, #0
    // add r5, r0, #0
    // ldr r1, _02222C54 ; =0x00000624
    // add r0, r7, #0
    // bl Heap_Alloc
    // ldr r2, _02222C54 ; =0x00000624
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // cmp r4, #0
    // bne _02222C06
    // bl GF_AssertFail
    // mov r2, #0x32
    // add r1, r4, #0
    // lsl r2, r2, #4
    // add r0, r7, #0
    // add r1, #0x20
    // add r2, r4, r2
    // bl sub_02014A08
    // str r0, [r4, #0x1c]
    // cmp r0, #0
    // bne _02222C20
    // bl GF_AssertFail
    // mov r0, #0x62
    // lsl r0, r0, #4
    // add r1, r4, #0
    // mov r2, #3
    // str r5, [r4, r0]
    // add r0, r6, #0
    // add r1, #0x20
    // lsl r2, r2, #8
    // bl MIi_CpuClear32
    // mov r2, #0x32
    // lsl r2, r2, #4
    // add r1, r4, r2
    // add r0, r6, #0
    // sub r2, #0x20
    // bl MIi_CpuClear32
    // ldr r2, _02222C58 ; =ov07_02222BC8
    // ldr r3, _02222C5C ; =ov07_02222BDC
    // add r0, r4, #0
    // add r1, r4, #0
    // bl ov07_02222B30
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222C54: .word 0x00000624
    // _02222C58: .word ov07_02222BC8
    // _02222C5C: .word ov07_02222BDC
    // TODO: decompile
}



void ov07_02222C60(void) {
    GF_AssertFail();
    ov07_02222B70(r4);
    sub_02014A38(*((u32*)(r4 + 0x1c)));
    Heap_Free(r4);
}



void ov07_02222C84(void) {
    GF_AssertFail();
    sub_02014A4C(*((u32*)(r4 + 0x1c)));
}



void ov07_02222C98(void) {
    GF_AssertFail();
    ov07_02222B94(r4);
}



void ov07_02222CAC(void) {
}



void ov07_02222CC0(void) {
}



void ov07_02222CCC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r7, r0, #0
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x40]
    // mov r1, #0x20
    // str r2, [sp, #0x18]
    // add r5, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02222CE8
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x20
    // bl memset
    // ldr r0, [sp, #0x34]
    // bl ov07_02222D90
    // add r6, r0, #0
    // ldr r0, [sp, #0x40]
    // bl sub_02014AD8
    // str r0, [r4, #0x1c]
    // str r5, [sp]
    // add r1, sp, #0x20
    // mov r0, #0x10
    // ldrsh r0, [r1, r0]
    // add r1, r7, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x1c]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // bl sub_02014B08
    // ldr r2, _02222D34 ; =ov07_02222CAC
    // ldr r3, _02222D38 ; =ov07_02222CC0
    // add r0, r4, #0
    // add r1, r4, #0
    // bl ov07_02222B30
    // add r0, r4, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _02222D34: .word ov07_02222CAC
    // _02222D38: .word ov07_02222CC0
    // TODO: decompile
}



void ov07_02222D3C(void) {
    GF_AssertFail();
    ov07_02222B70(r4);
    sub_02014BD8(*((u32*)(r4 + 0x1c)));
    Heap_Free(r4);
}



void ov07_02222D60(void) {
    GF_AssertFail();
    sub_02014BF8(*((u32*)(r4 + 0x1c)));
}



void ov07_02222D74(void) {
    GF_AssertFail();
    ov07_02222B94(r4);
}



void ov07_02222D88(void) {
    // orr r0, r1
}



void ov07_02222D90(void) {
    // cmp r0, #3
    // bhi _02222DB6
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02222DA0: ; jump table
    // ldr r0, _02222DB8 ; =0x04000010
    // bx lr
    // ldr r0, _02222DBC ; =0x04000014
    // bx lr
    // ldr r0, _02222DC0 ; =0x04000018
    // bx lr
    // ldr r0, _02222DC4 ; =0x0400001C
    // bx lr
    // _02222DB8: .word 0x04000010
    // _02222DBC: .word 0x04000014
    // _02222DC0: .word 0x04000018
    // _02222DC4: .word 0x0400001C
    // TODO: decompile
}



void ov07_02222DC8(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    // asr r2, r0, #1
    // ldr r0, [sp]
    // add r1, r1, r3
    // strh r2, [r0]
    // add r0, r1, r0
    // asr r1, r0, #1
    // ldr r0, [sp, #4]
    // strh r1, [r0]
}



void ov07_02222DE4(void) {
    // sub r1, r1, r3
    // neg r1, r1
    // sub r0, r0, r2
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // mul r2, r1
    // mul r1, r0
    // add r0, r2, r1
    FX_Sqrt(((r0 << 0x10) << 0xc), (r0 << 0x10), (r1 << 0x10));
    // ldr r1, [sp, #8]
    // str r0, [r1]
}



void ov07_02222E0C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // sub r0, r1, r3
    // neg r0, r0
    // lsl r0, r0, #0x10
    // sub r1, r6, r2
    // asr r4, r0, #0x10
    // lsl r1, r1, #0x10
    // ldr r5, [sp, #0x10]
    // lsl r0, r4, #0xc
    // asr r1, r1, #4
    // bl FX_Atan2Idx
    // strh r0, [r5]
    // ldrh r1, [r5]
    // cmp r1, #0
    // beq _02222E3C
    // cmp r4, #0
    // bge _02222E3C
    // ldr r0, _02222E40 ; =0x00007FFF
    // sub r1, r1, r0
    // ldr r0, _02222E44 ; =0x0000FFFF
    // mul r0, r1
    // strh r0, [r5]
    // pop {r4, r5, r6, pc}
    // nop
    // _02222E40: .word 0x00007FFF
    // _02222E44: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_02222E48(void) {
    // add r2, r3, r2
    // str r2, [r0]
    // str r1, [r0]
    // add r2, r3, r2
    // str r2, [r0]
    // str r1, [r0]
}



void ov07_02222E74(void) {
    // ldrsb r1, [r4, r0]
    *((u8*)(r1 + 0x17)) = (r1 + 1);
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    *((u8*)(r1 + 0x17)) = 0;
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_BlendPalette(*((u32*)(r1 + 0x18)), *((u32*)(r1 + 8)), *((u16*)(r1 + 0xc)), *((u16*)(r1 + 0xe)));
    // str r0, [r4]
    // ldrsb r2, [r4, r0]
    // add r1, r1, r2
    // asr r0, r0, #0x18
    *((u8*)(r4 + 0x14)) = *((u8*)(r4 + 0x13));
    *((u8*)(r4 + 0x14)) = *((u8*)(r4 + 0x14));
    *((u8*)(r4 + 0x14)) = *((u8*)(r4 + 0x13));
    *((u8*)(r4 + 0x14)) = *((u8*)(r4 + 0x14));
}



void ov07_02222EE8(void) {
}



void ov07_02222EF8(void) {
    GF_AssertFail();
    SysTask_Destroy(*((u32*)(r4 + 4)));
    Heap_Free(r4);
}



void ov07_02222F10(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x1c
    // add r6, r2, #0
    // add r7, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02222F28
    // bl GF_AssertFail
    // str r5, [r4, #0x18]
    // str r6, [r4, #8]
    // strh r7, [r4, #0xc]
    // add r1, sp, #8
    // ldrh r0, [r1, #0x10]
    // strh r0, [r4, #0xe]
    // ldrh r0, [r1, #0x24]
    // strh r0, [r4, #0x10]
    // ldrb r2, [r1, #0x1c]
    // add r0, sp, #0x28
    // ldrb r0, [r0]
    // strb r2, [r4, #0x12]
    // strb r0, [r4, #0x13]
    // strb r2, [r4, #0x14]
    // mov r0, #0x14
    // ldrsb r0, [r1, r0]
    // strb r0, [r4, #0x16]
    // strb r0, [r4, #0x17]
    // ldrb r2, [r4, #0x12]
    // ldrb r0, [r4, #0x13]
    // cmp r2, r0
    // bhs _02222F5A
    // mov r0, #0x18
    // ldrsb r0, [r1, r0]
    // b _02222F60
    // mov r0, #0x18
    // ldrsb r0, [r1, r0]
    // neg r0, r0
    // strb r0, [r4, #0x15]
    // mov r0, #1
    // str r0, [r4]
    // ldr r0, _02222F78 ; =ov07_02222E74
    // ldr r2, [sp, #0x30]
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #4]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222F78: .word ov07_02222E74
    // TODO: decompile
}



void ov07_02222F7C(void) {
    // ldrh r6, [r0]
    // asr r4, r6, #0xa
    // and r4, r3
    // mul r5, r3
    // and r3, r6
    // mul r4, r3
    // asr r6, r6, #5
    // and r3, r6
    // mul r6, r2
    // add r3, r4, r6
    // add r3, r5, r3
    // asr r5, r3, #8
    // orr r3, r4
    // orr r3, r5
    // strh r3, [r0]
}



void ov07_02222FC4(void) {
    ov07_0221FA78();
    PaletteData_GetFadedBuf(0);
    ov07_0221BFC0(r5);
    ov07_02222F7C(r4, 0x30);
    ov07_02222F7C(r4, 0x80);
}



void ov07_02222FF4(void) {
    ov07_0221FA78();
    ov07_0221BFC0(r5);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_CopyPalette(r4, 0, 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_CopyPalette(r4, 0, 0, 0);
}



void ov07_02223038(void) {
    // cmp r0, #0x54
    // blo _02223040
    // mov r0, #0
    // bx lr
    // lsl r1, r0, #2
    // ldr r0, _02223048 ; =ov07_02236520
    // ldr r0, [r0, r1]
    // bx lr
    // _02223048: .word ov07_02236520
    // TODO: decompile
}



void ov07_0222304C(void) {
    // cmp r0, #0x21
    // blo _02223054
    // mov r0, #0
    // bx lr
    // lsl r1, r0, #2
    // ldr r0, _0222305C ; =ov07_0223649C
    // ldr r0, [r0, r1]
    // bx lr
    // _0222305C: .word ov07_0223649C
    // TODO: decompile
}



void ov07_02223060(void) {
    // bx lr
    // TODO: decompile
}



void ov07_02223064(void) {
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r1 + 4)), r0, r0);
    Heap_Free(r4);
}



void ov07_0222308C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r2, r0, #0
    // mov r0, #0
    // strb r0, [r2]
    // mov r3, #1
    // ldr r1, _022230B0 ; =ov07_02223064
    // add r0, r4, #0
    // lsl r3, r3, #0xc
    // str r4, [r2, #4]
    // bl ov07_0221C3F4
    // pop {r4, pc}
    // nop
    // _022230B0: .word ov07_02223064
    // TODO: decompile
}



void ov07_022230B4(void) {
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov07_0221C458(*((u32*)(r1 + 4)), r0, r0);
    Heap_Free(r4);
}



void ov07_022230DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r2, r0, #0
    // mov r0, #0
    // strb r0, [r2]
    // mov r3, #1
    // ldr r1, _02223100 ; =ov07_022230B4
    // add r0, r4, #0
    // lsl r3, r3, #0xc
    // str r4, [r2, #4]
    // bl ov07_0221C42C
    // pop {r4, pc}
    // nop
    // _02223100: .word ov07_022230B4
    // TODO: decompile
}



void ov07_02223104(void) {
    // ldrb r1, [r4]
    // strb r0, [r4]
    SysTask_Destroy((r1 + 1));
    Heap_Free(r4);
}



void ov07_02223128(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r0, #0
    // strb r0, [r1]
    // mov r2, #1
    // ldr r0, _02223148 ; =ov07_02223104
    // lsl r2, r2, #0xc
    // str r4, [r1, #4]
    // bl SysTask_CreateOnMainQueue
    // pop {r4, pc}
    // _02223148: .word ov07_02223104
    // TODO: decompile
}



void ov07_0222314C(void) {
    // ldrb r0, [r5]
    Sprite_TickFrame(*((u32*)*((u32*)(r1 + 0x14))));
    Sprite_TickFrame(*((u32*)*((u32*)(r5 + 0x18))));
    Sprite_TickFrame(*((u32*)*((u32*)(r5 + 0x1c))));
    Sprite_OffsetPositionXY(*((u32*)*((u32*)(r5 + 0x14))), 1, 0);
    // mvn r1, r1
    Sprite_OffsetPositionXY(*((u32*)*((u32*)(r5 + 0x18))), 0, 0);
    Sprite_OffsetPositionXY(*((u32*)*((u32*)(r5 + 0x1c))), 1, 1);
    SpriteSystem_DrawSprites(*((u32*)(r5 + 0xc)));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x10)));
    Heap_Free(r5);
    ov07_0221C448(r4, r6);
}



void ov07_022231BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r6, r1, #0
    // mov r1, #0x73
    // str r0, [sp]
    // mov r0, #5
    // lsl r1, r1, #2
    // add r7, r2, #0
    // add r5, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _022231DA
    // bl GF_AssertFail
    // mov r0, #0
    // strb r0, [r4]
    // str r6, [r4, #8]
    // str r7, [r4, #0xc]
    // ldr r0, [sp]
    // str r5, [r4, #0x10]
    // str r0, [r4, #4]
    // ldr r1, [sp]
    // add r0, sp, #4
    // bl ov07_0221F9E8
    // str r5, [r4, #0x14]
    // mov r6, #1
    // add r5, r4, #4
    // add r7, sp, #4
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0xc]
    // add r2, r7, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x14]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #3
    // blt _022231F8
    // mov r3, #1
    // ldr r0, [sp]
    // ldr r1, _02223220 ; =ov07_0222314C
    // add r2, r4, #0
    // lsl r3, r3, #0xc
    // bl ov07_0221C3F4
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223220: .word ov07_0222314C
    // TODO: decompile
}



void ov07_02223224(void) {
}



void ov07_02223240(void) {
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x7c
    ov07_022227A8(r1, 0x20, 0x22, 0x24);
    *((u8*)(r5 + 4)) = (*((u8*)(r5 + 4)) + 1);
    // add r0, #0x7c
    ov07_022227D8(r5);
    *((u8*)(r5 + 4)) = (*((u8*)(r5 + 4)) + 1);
    // and r0, r1
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r4, r3]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r5 + 0x34)), 0, 0x7c, 0x30);
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r4, r7]
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)(r4 + 0x34)), 1, 0x7e);
    // add r4, #0x14
    // and r2, r0
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r4, r2]
    // add r1, r1, r2
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r4, r7]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x38)), (0x7c << 0x10), (0x7e << 0x10));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x38)));
    // add r4, #0x14
    SpriteSystem_DrawSprites(*((u32*)(r5 + 0x10)));
    // and r1, r0
    // ldrsh r3, [r5, r3]
    BgSetPosTextAndCommit(*((u32*)(r5 + 0x18)), 3, 0, 0x7c);
    ov07_0221C448(*((u32*)(r5 + 8)), r2);
    Heap_Free(r5);
}



void ov07_02223350(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0xa0
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x20]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x22]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x24]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x26]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // mov r2, #1
    // lsl r2, r2, #8
    // str r0, [r4, #0x28]
    // add r1, r0, #0
    // and r0, r2
    // cmp r0, r2
    // bne _022233B0
    // add r2, r4, #0
    // add r0, r5, #0
    // add r2, #0x2c
    // add r3, r4, #0
    // bl ov07_02232020
    // b _022233C6
    // lsl r0, r2, #1
    // add r3, r1, #0
    // and r3, r0
    // cmp r3, r0
    // bne _022233C6
    // add r2, r4, #0
    // add r0, r5, #0
    // add r2, #0x2c
    // add r3, r4, #0
    // bl ov07_022323FC
    // ldr r0, [r4, #8]
    // ldr r1, _022233D4 ; =ov07_02223240
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _022233D4: .word ov07_02223240
    // TODO: decompile
}



void ov07_022233D8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #3
    // bhi _022234A2
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022233F0: ; jump table
    // ldrh r0, [r4, #0x18]
    // mov r1, #4
    // mov r2, #0x39
    // str r0, [sp]
    // ldrh r3, [r4, #0x16]
    // ldr r0, _02223544 ; =0x04000050
    // bl G2x_SetBlendAlpha_
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrh r1, [r4, #8]
    // ldrh r2, [r4, #0x16]
    // mov r0, #0
    // sub r1, r1, #2
    // cmp r2, r1
    // bge _02223428
    // add r1, r2, #2
    // strh r1, [r4, #0x16]
    // b _0222342A
    // add r0, r0, #1
    // ldrh r1, [r4, #0x18]
    // cmp r1, #9
    // bls _02223436
    // sub r1, r1, #2
    // strh r1, [r4, #0x18]
    // b _02223438
    // add r0, r0, #1
    // cmp r0, #2
    // bne _0222344A
    // ldrh r0, [r4, #8]
    // strh r0, [r4, #0x16]
    // mov r0, #7
    // strh r0, [r4, #0x18]
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrh r0, [r4, #0x18]
    // ldrh r1, [r4, #0x16]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02223548 ; =0x04000052
    // strh r1, [r0]
    // b _022234BA
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // beq _022234BA
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // b _022234BA
    // ldrh r0, [r4, #0x16]
    // mov r1, #0
    // cmp r0, #2
    // bls _02223472
    // sub r0, r0, #2
    // strh r0, [r4, #0x16]
    // b _02223474
    // add r1, r1, #1
    // ldrh r0, [r4, #0x18]
    // cmp r0, #0x1d
    // bhs _02223480
    // add r0, r0, #2
    // strh r0, [r4, #0x18]
    // b _02223482
    // add r1, r1, #1
    // cmp r1, #2
    // bne _02223494
    // mov r0, #0
    // strh r0, [r4, #0x16]
    // mov r0, #0x1f
    // strh r0, [r4, #0x18]
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrh r0, [r4, #0x18]
    // ldrh r1, [r4, #0x16]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02223548 ; =0x04000052
    // strh r1, [r0]
    // b _022234BA
    // mov r0, #2
    // mov r1, #0
    // bl ToggleBgLayer
    // ldr r0, [r4, #0x20]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // mov r1, #0x10
    // ldrsh r3, [r4, r1]
    // cmp r3, #0
    // ble _022234CC
    // mov r0, #0xc
    // ldrsh r2, [r4, r0]
    // lsl r0, r1, #5
    // cmp r2, r0
    // bge _022234DA
    // cmp r3, #0
    // bge _022234DE
    // mov r0, #0xc
    // ldrsh r1, [r4, r0]
    // ldr r0, _0222354C ; =0xFFFFFE64
    // cmp r1, r0
    // bgt _022234DE
    // mov r0, #1
    // str r0, [r4, #4]
    // mov r0, #0xa
    // ldrsh r1, [r4, r0]
    // mov r0, #0xe
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r4, #0xa]
    // mov r0, #0xc
    // ldrsh r2, [r4, r0]
    // mov r0, #0x10
    // ldrsh r1, [r4, r0]
    // add r1, r2, r1
    // strh r1, [r4, #0xc]
    // ldrh r2, [r4, #0x12]
    // ldrh r1, [r4, #0x14]
    // cmp r2, r1
    // bhs _02223522
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _02223508
    // add r0, r0, #1
    // b _0222350A
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // mov r0, #0xe
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _02223518
    // add r0, r0, #1
    // b _0222351A
    // mov r0, #0
    // strh r0, [r4, #0xe]
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // b _02223526
    // add r0, r1, #1
    // strh r0, [r4, #0x14]
    // mov r3, #0xa
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // mov r3, #0xc
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // pop {r3, r4, r5, pc}
    // _02223544: .word 0x04000050
    // _02223548: .word 0x04000052
    // _0222354C: .word 0xFFFFFE64
    // TODO: decompile
}



void ov07_02223550(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0xb8
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x1c
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xe]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // strh r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #7
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x12]
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _022235FC
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _022235FC
    // mov r0, #0xa
    // ldrsh r1, [r4, r0]
    // sub r0, #0xb
    // mul r0, r1
    // strh r0, [r4, #0xa]
    // mov r1, #0xc
    // add r0, r1, #0
    // ldrsh r2, [r4, r1]
    // sub r0, #0xd
    // mul r0, r2
    // strh r0, [r4, #0xc]
    // mov r0, #0xe
    // ldrsh r2, [r4, r0]
    // sub r0, #0xf
    // mul r0, r2
    // strh r0, [r4, #0xe]
    // mov r0, #0x10
    // ldrsh r2, [r4, r0]
    // sub r0, #0x11
    // mul r0, r2
    // strh r0, [r4, #0x10]
    // ldrsh r0, [r4, r1]
    // sub r0, #0x54
    // strh r0, [r4, #0xc]
    // b _02223604
    // mov r0, #0xc
    // ldrsh r0, [r4, r0]
    // add r0, #0x54
    // strh r0, [r4, #0xc]
    // mov r1, #0
    // strh r1, [r4, #0x16]
    // mov r0, #0x1f
    // strh r0, [r4, #0x18]
    // mov r0, #2
    // str r1, [r4, #4]
    // bl ToggleBgLayer
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // mov r1, #0
    // add r7, r0, #0
    // bl ov07_0221FB7C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x30]
    // mov r0, #7
    // add r1, r6, #0
    // mov r3, #2
    // bl GfGfxLoader_LoadCharData
    // add r0, r7, #0
    // mov r1, #1
    // bl ov07_0221FB7C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x90
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x34]
    // mov r1, #7
    // add r2, r6, #0
    // bl PaletteData_LoadNarc
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // mov r6, #2
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02223684
    // mov r6, #4
    // b _02223698
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _02223698
    // mov r6, #3
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov07_0221FB7C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x30]
    // mov r0, #7
    // add r1, r6, #0
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r3, #0xa
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // mov r3, #0xc
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x20]
    // ldr r1, _022236EC ; =ov07_022233D8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022236EC: .word ov07_022233D8
    // TODO: decompile
}



void ov07_022236F0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0x1c]
    // cmp r0, #3
    // bhi _022237B6
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02223708: ; jump table
    // ldrh r0, [r4, #0x18]
    // mov r1, #4
    // mov r2, #0x39
    // str r0, [sp]
    // ldrh r3, [r4, #0x16]
    // ldr r0, _02223858 ; =0x04000050
    // bl G2x_SetBlendAlpha_
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrh r0, [r4, #0x16]
    // mov r1, #0
    // cmp r0, #0x10
    // bhs _0222373C
    // add r0, r0, #2
    // strh r0, [r4, #0x16]
    // b _0222373E
    // add r1, r1, #1
    // ldrh r0, [r4, #0x18]
    // cmp r0, #4
    // bls _0222374A
    // sub r0, r0, #2
    // strh r0, [r4, #0x18]
    // b _0222374C
    // add r1, r1, #1
    // cmp r1, #2
    // bne _0222375E
    // mov r0, #0x10
    // strh r0, [r4, #0x16]
    // mov r0, #4
    // strh r0, [r4, #0x18]
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrh r0, [r4, #0x18]
    // ldrh r1, [r4, #0x16]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222385C ; =0x04000052
    // strh r1, [r0]
    // b _022237CE
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // beq _022237CE
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // b _022237CE
    // ldrh r0, [r4, #0x16]
    // mov r1, #0
    // cmp r0, #2
    // bls _02223786
    // sub r0, r0, #2
    // strh r0, [r4, #0x16]
    // b _02223788
    // add r1, r1, #1
    // ldrh r0, [r4, #0x18]
    // cmp r0, #0x10
    // bhs _02223794
    // add r0, r0, #2
    // strh r0, [r4, #0x18]
    // b _02223796
    // add r1, r1, #1
    // cmp r1, #2
    // bne _022237A8
    // mov r0, #0
    // strh r0, [r4, #0x16]
    // mov r0, #0x1f
    // strh r0, [r4, #0x18]
    // ldrb r0, [r4, #0x1c]
    // add r0, r0, #1
    // strb r0, [r4, #0x1c]
    // ldrh r0, [r4, #0x18]
    // ldrh r1, [r4, #0x16]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222385C ; =0x04000052
    // strh r1, [r0]
    // b _022237CE
    // mov r0, #2
    // mov r1, #0
    // bl ToggleBgLayer
    // ldr r0, [r4, #0x20]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // mov r1, #0x10
    // ldrsh r3, [r4, r1]
    // cmp r3, #0
    // ble _022237E0
    // mov r0, #0xc
    // ldrsh r2, [r4, r0]
    // lsl r0, r1, #5
    // cmp r2, r0
    // bge _022237EE
    // cmp r3, #0
    // bge _022237F2
    // mov r0, #0xc
    // ldrsh r1, [r4, r0]
    // ldr r0, _02223860 ; =0xFFFFFE64
    // cmp r1, r0
    // bgt _022237F2
    // mov r0, #1
    // str r0, [r4, #4]
    // mov r0, #0xa
    // ldrsh r1, [r4, r0]
    // mov r0, #0xe
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r4, #0xa]
    // mov r0, #0xc
    // ldrsh r2, [r4, r0]
    // mov r0, #0x10
    // ldrsh r1, [r4, r0]
    // add r1, r2, r1
    // strh r1, [r4, #0xc]
    // ldrh r2, [r4, #0x12]
    // ldrh r1, [r4, #0x14]
    // cmp r2, r1
    // bhs _02223836
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _0222381C
    // add r0, r0, #1
    // b _0222381E
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // mov r0, #0xe
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _0222382C
    // add r0, r0, #1
    // b _0222382E
    // mov r0, #0
    // strh r0, [r4, #0xe]
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // b _0222383A
    // add r0, r1, #1
    // strh r0, [r4, #0x14]
    // mov r3, #0xa
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // mov r3, #0xc
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // pop {r3, r4, r5, pc}
    // _02223858: .word 0x04000050
    // _0222385C: .word 0x04000052
    // _02223860: .word 0xFFFFFE64
    // TODO: decompile
}



void ov07_02223864(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0xb8
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x1c
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xe]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // strh r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #7
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x12]
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02223910
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _02223910
    // mov r0, #0xa
    // ldrsh r1, [r4, r0]
    // sub r0, #0xb
    // mul r0, r1
    // strh r0, [r4, #0xa]
    // mov r1, #0xc
    // add r0, r1, #0
    // ldrsh r2, [r4, r1]
    // sub r0, #0xd
    // mul r0, r2
    // strh r0, [r4, #0xc]
    // mov r0, #0xe
    // ldrsh r2, [r4, r0]
    // sub r0, #0xf
    // mul r0, r2
    // strh r0, [r4, #0xe]
    // mov r0, #0x10
    // ldrsh r2, [r4, r0]
    // sub r0, #0x11
    // mul r0, r2
    // strh r0, [r4, #0x10]
    // ldrsh r0, [r4, r1]
    // sub r0, #0x54
    // strh r0, [r4, #0xc]
    // b _02223918
    // mov r0, #0xc
    // ldrsh r0, [r4, r0]
    // add r0, #0x54
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _0222392C
    // mov r0, #0xe
    // ldrsh r1, [r4, r0]
    // sub r0, #0xf
    // mul r0, r1
    // strh r0, [r4, #0xe]
    // mov r0, #4
    // strh r0, [r4, #0x16]
    // mov r0, #0x10
    // strh r0, [r4, #0x18]
    // mov r1, #0
    // strh r1, [r4, #0x16]
    // strh r0, [r4, #0x18]
    // mov r0, #2
    // str r1, [r4, #4]
    // bl ToggleBgLayer
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // mov r1, #0
    // add r7, r0, #0
    // bl ov07_0221FB7C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x30]
    // mov r0, #7
    // add r1, r6, #0
    // mov r3, #2
    // bl GfGfxLoader_LoadCharData
    // add r0, r7, #0
    // mov r1, #1
    // bl ov07_0221FB7C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x90
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x34]
    // mov r1, #7
    // add r2, r6, #0
    // bl PaletteData_LoadNarc
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add r0, r5, #0
    // mov r6, #2
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _022239B2
    // mov r6, #4
    // b _022239C6
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _022239C6
    // mov r6, #3
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov07_0221FB7C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x30]
    // mov r0, #7
    // add r1, r6, #0
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnData
    // mov r3, #0xa
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // mov r3, #0xc
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x20]
    // ldr r1, _02223A18 ; =ov07_022236F0
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223A18: .word ov07_022236F0
    // TODO: decompile
}



void ov07_02223A1C(void) {
    // ldrb r0, [r4]
    // add r0, #0xc
    ov07_02222440(r1);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 9, ((*((u32*)(r4 + 0xc)) << 0x10) >> 0x10));
    // add r0, #0xc
    ov07_022223F0(r4, *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x24)));
    // ldrb r0, [r4]
    // strb r0, [r4]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xa, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xb, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 9, 0);
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_02223A94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x2c
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // str r5, [r4, #4]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r4, #0x24]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #0x20]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // add r7, r0, #0
    // beq _02223ACE
    // cmp r7, #2
    // bne _02223AD8
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // str r0, [sp]
    // b _02223AE0
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r2, r0, #0
    // add r0, r4, #0
    // ldr r1, [r4, #0x20]
    // ldr r3, [r4, #0x24]
    // add r0, #0xc
    // bl ov07_022223F0
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov07_02222004
    // add r6, r0, #0
    // ldr r0, [r4, #0x14]
    // add r1, r0, #0
    // mul r1, r6
    // str r1, [r4, #0x14]
    // cmp r7, #2
    // bne _02223B12
    // mov r0, #0
    // mvn r0, r0
    // mul r6, r0
    // ldr r0, [r4, #4]
    // ldr r1, [sp]
    // bl ov07_0221FA48
    // str r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // cmp r0, #1
    // bne _02223B3C
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x28]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // b _02223B44
    // mov r0, #0x28
    // add r1, r6, #0
    // mul r1, r0
    // strh r1, [r4, #0x28]
    // strh r0, [r4, #0x2a]
    // mov r2, #0x28
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #8]
    // mov r1, #0xa
    // bl Pokepic_SetAttr
    // mov r2, #0x2a
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #8]
    // mov r1, #0xb
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // ldr r1, _02223B6C ; =ov07_02223A1C
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223B6C: .word ov07_02223A1C
    // TODO: decompile
}



void ov07_02223B70(void) {
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_02222240((r1 + 4), 0x2c, 0x2e, *((u32*)(r1 + 0x28)));
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x28)), 0, 0x2c);
    // ldrsh r2, [r4, r2]
    // sub r2, #8
    Pokepic_SetAttr(*((u32*)(r4 + 0x28)), 1, 0x2e);
    Pokepic_SetAttr(*((u32*)(r4 + 0x28)), 9, 0);
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
}



void ov07_02223BC0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x30
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // str r5, [r4]
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r2, r0, #0
    // add r0, r4, #4
    // add r1, r6, #0
    // bl ov07_02222A44
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // cmp r0, #8
    // bgt _02223C0A
    // cmp r0, #2
    // blt _02223C7C
    // beq _02223C10
    // cmp r0, #4
    // beq _02223C2C
    // cmp r0, #8
    // beq _02223C50
    // b _02223C7C
    // cmp r0, #0x10
    // beq _02223C62
    // b _02223C7C
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x28]
    // mov r0, #0
    // ldr r1, [r4, #0x10]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [r4, #0x10]
    // b _02223C80
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0223197C
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x28]
    // mov r0, #0
    // ldr r1, [r4, #0x10]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [r4, #0x10]
    // b _02223C80
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x28]
    // b _02223C80
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0223197C
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x28]
    // b _02223C80
    // bl GF_AssertFail
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x2c]
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x2e]
    // mov r0, #0x2e
    // ldrsh r0, [r4, r0]
    // ldr r1, _02223CA8 ; =ov07_02223B70
    // add r2, r4, #0
    // add r0, #8
    // strh r0, [r4, #0x2e]
    // ldr r0, [r4]
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // _02223CA8: .word ov07_02223B70
    // TODO: decompile
}



void ov07_02223CAC(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x14)), 1);
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x14)), r4, r6);
    *((u32*)(r5 + 0x40)) = 0;
    // add r5, #0x18
    // str r0, [sp]
    ov07_02222508(r5, 0xa, 0xa, 0xe);
}



void ov07_02223CE4(void) {
    // add r0, #0x18
    ov07_02222748(*((u32*)(r0 + 0x14)));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    *((u32*)(r4 + 0x40)) = 1;
    // add r4, #0x18
    // str r0, [sp]
    ov07_02222508(r4, 0xe, 0xa, 0xc);
}



void ov07_02223D28(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02223D40: ; jump table
    // ldrsh r3, [r4, r1]
    // mul r1, r2
    // ldrsh r2, [r4, r2]
    // add r1, r3, r1
    // sub r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02223CAC((0x18 << 0x10), (0x4e << 0x10));
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) + 1);
    ov07_02223CE4((*((u32*)(r4 + 0x48)) + 1));
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) + 1);
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x44)) - 1);
    // bpl _02223DC0
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) + 1);
    // ldrsh r3, [r4, r1]
    // mul r1, r2
    // ldrsh r2, [r4, r2]
    // sub r1, r3, r1
    // sub r2, #0x18
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02223CAC((*((u32*)(r4 + 0x48)) + 1), (0x18 << 0x10), (0x4e << 0x10));
    ov07_02223CE4();
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) + 1);
}



void ov07_02223DC4(void) {
    ov07_02223D28(r1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x14)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_02223E08(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // mov r1, #0x50
    // add r5, r0, #0
    // str r2, [sp]
    // add r6, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // ldr r0, [sp]
    // str r7, [r4, #4]
    // str r0, [r4, #8]
    // str r6, [r4, #0x14]
    // add r0, r6, #0
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x14]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #4
    // str r0, [r4, #0x44]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // str r0, [r4, #0x3c]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // add r5, r0, #0
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x4c
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x4e
    // strh r0, [r1]
    // ldr r0, [r4]
    // ldr r1, _02223E90 ; =ov07_02223DC4
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223E90: .word ov07_02223DC4
    // TODO: decompile
}



void ov07_02223E94(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r1 + 4)));
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
}



void ov07_02223EB4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r1, #8
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r6, r0, #0
    // str r5, [r6]
    // add r0, r5, #0
    // bl ov07_0221FA78
    // str r0, [r6, #4]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // beq _02223EE2
    // cmp r0, #1
    // beq _02223EEE
    // cmp r0, #2
    // beq _02223EF4
    // b _02223EFA
    // add r0, r5, #0
    // bl ov07_0221E6C8
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // b _02223EFE
    // mov r4, #1
    // lsl r4, r4, #8
    // b _02223EFE
    // mov r4, #2
    // lsl r4, r4, #8
    // b _02223EFE
    // bl GF_AssertFail
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // ldr r1, [sp, #0xc]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp]
    // ldr r1, [sp, #0x10]
    // lsl r3, r7, #0x18
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r6, #4]
    // mov r1, #1
    // add r2, r4, #0
    // asr r3, r3, #0x18
    // bl PaletteData_BeginPaletteFade
    // ldr r0, [r6]
    // ldr r1, _02223F58 ; =ov07_02223E94
    // add r2, r6, #0
    // bl ov07_0221C410
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02223F58: .word ov07_02223E94
    // TODO: decompile
}



void ov07_02223F5C(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02223F74: ; jump table
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r1 + 4)), 0, *((u32*)(r1 + 0x18)), *((u32*)(r1 + 0x10)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = ((*((u32*)(r4 + 8)) + 1) + 1);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) - 1);
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 4)), *((u32*)(r4 + 0x18)), 0, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0;
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
}



void ov07_02224008(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x20
    // add r4, r0, #0
    // bl ov07_022324D8
    // add r6, r0, #0
    // str r4, [r6]
    // mov r1, #0
    // add r0, r4, #0
    // str r1, [r6, #4]
    // bl ov07_0221C4A8
    // ldr r2, _022241D0 ; =0x00000802
    // cmp r0, r2
    // bgt _02224042
    // bge _022240C8
    // cmp r0, #8
    // bgt _0222403C
    // cmp r0, #2
    // blt _0222403A
    // beq _0222405A
    // cmp r0, #4
    // beq _0222406C
    // cmp r0, #8
    // beq _02224092
    // b _02224180
    // cmp r0, #0x10
    // beq _022240A4
    // b _02224180
    // add r1, r2, #6
    // cmp r0, r1
    // bgt _02224052
    // bge _02224124
    // add r1, r2, #2
    // cmp r0, r1
    // beq _022240F8
    // b _02224180
    // add r2, #0xe
    // cmp r0, r2
    // beq _02224154
    // b _02224180
    // add r0, r4, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // add r0, r4, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // beq _02224078
    // b _02224184
    // ldr r0, [r6]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0223197C
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // add r0, r4, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // add r0, r4, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _02224184
    // ldr r0, [r6]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0223197C
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // mov r7, #0xff
    // mov r5, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov07_0221FA04
    // cmp r0, #0
    // beq _022240DC
    // cmp r0, #2
    // bne _022240E0
    // add r7, r5, #0
    // b _022240E6
    // add r5, r5, #1
    // cmp r5, #4
    // blt _022240CC
    // cmp r7, #0xff
    // bne _022240EC
    // mov r7, #0
    // ldr r0, [r6]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // mov r7, #0xff
    // mov r5, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov07_0221FA04
    // cmp r0, #4
    // bne _0222410C
    // add r7, r5, #0
    // b _02224112
    // add r5, r5, #1
    // cmp r5, #4
    // blt _022240FC
    // cmp r7, #0xff
    // bne _02224118
    // mov r7, #0
    // ldr r0, [r6]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // mov r7, #0xff
    // mov r5, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov07_0221FA04
    // cmp r0, #1
    // beq _02224138
    // cmp r0, #3
    // bne _0222413C
    // add r7, r5, #0
    // b _02224142
    // add r5, r5, #1
    // cmp r5, #4
    // blt _02224128
    // cmp r7, #0xff
    // bne _02224148
    // mov r7, #0
    // ldr r0, [r6]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // mov r7, #0xff
    // mov r5, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov07_0221FA04
    // cmp r0, #5
    // bne _02224168
    // add r7, r5, #0
    // b _0222416E
    // add r5, r5, #1
    // cmp r5, #4
    // blt _02224158
    // cmp r7, #0xff
    // bne _02224174
    // mov r7, #0
    // ldr r0, [r6]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r6, #4]
    // b _02224184
    // bl GF_AssertFail
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // bne _02224192
    // add r0, r6, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // str r0, [r6, #0x10]
    // add r0, r4, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r6, #0xc]
    // add r0, r4, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r6, #0x14]
    // add r0, r4, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r6, #0x18]
    // add r0, r4, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r6, #0x1c]
    // ldr r0, [r6]
    // ldr r1, _022241D4 ; =ov07_02223F5C
    // add r2, r6, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // _022241D0: .word 0x00000802
    // _022241D4: .word ov07_02223F5C
    // TODO: decompile
}



void ov07_022241D8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022241F4: ; jump table
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222508(r1, (*((u32*)(r1 + 0x3c)) << 0x10), (*((u32*)(r1 + 0x44)) << 0x10), (*((u32*)(r1 + 0x40)) << 0x10));
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    ov07_02222644(r4);
    // ldr r1, [sp, #8]
    _fsub(0);
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x14
    ov07_02222558(r4);
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    ov07_02222644(r4);
    // ldr r1, [sp, #8]
    _fsub(0);
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226FC(*((u32*)(r4 + 0x10)), 0xc, 0xe, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222508(r4, (*((u32*)(r4 + 0x40)) << 0x10), (*((u32*)(r4 + 0x44)) << 0x10), (*((u32*)(r4 + 0x3c)) << 0x10));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x14
    ov07_02222558(r4);
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    ov07_02222644(r4);
    // ldr r1, [sp, #8]
    _fsub(0);
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226FC(*((u32*)(r4 + 0x10)), 0xc, 0xe, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) - 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0;
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}



void ov07_02224348(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x54
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #4]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // bne _0222438A
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAA0
    // b _022243A8
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAA0
    // strh r0, [r4, #0xe]
    // add r0, r6, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xc]
    // add r0, r6, #0
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // mov r1, #0xc
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // str r0, [r4, #0x38]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r4, #0x3c]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r4, #0x40]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r4, #0x44]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4, #0x48]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // str r0, [r4, #0x4c]
    // add r0, r5, #0
    // mov r1, #7
    // bl ov07_0221C4A8
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221C4E8
    // str r0, [r4, #0x10]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x10]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r1, [r4, #0x38]
    // mov r2, #0x10
    // ldr r0, [r4]
    // sub r2, r2, r1
    // bl ov07_02231E08
    // ldr r0, [r4]
    // ldr r1, _02224468 ; =ov07_022241D8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // beq _02224456
    // mov r1, #1
    // b _02224458
    // mov r1, #0
    // ldr r0, [r4]
    // bl ov07_0221FB78
    // cmp r0, #1
    // bne _02224466
    // mov r0, #1
    // str r0, [r4, #0x50]
    // pop {r4, r5, r6, pc}
    // _02224468: .word ov07_022241D8
    // TODO: decompile
}



void ov07_0222446C(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02224488: ; jump table
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222590(r1, (*((u32*)(r1 + 0x34)) << 0x10), (*((u32*)(r1 + 0x38)) << 0x10), (*((u32*)(r1 + 0x3c)) << 0x10));
    // add r0, #0x10
    ov07_02222768(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x10
    ov07_02222788(r4, *((u32*)(r4 + 0xc)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0xc)), 8, 0xa, *((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 4)) = ((*((u32*)(r4 + 4)) + 1) + 1);
    *((u32*)(r4 + 0x50)) = (*((u32*)(r4 + 0x50)) - 1);
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222590(r4, (*((u32*)(r4 + 0x38)) << 0x10), (*((u32*)(r4 + 0x34)) << 0x10), (*((u32*)(r4 + 0x40)) << 0x10));
    // add r0, #0x10
    ov07_02222788(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x10
    ov07_02222788(r4, *((u32*)(r4 + 0xc)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0xc)), 8, 0xa, *((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) - 1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 4)) = 0;
    ov07_02223224(*((u32*)(r4 + 0xc)));
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
}



void ov07_022245BC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x54
    // add r5, r0, #0
    // mov r1, #0x54
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // str r5, [r4]
    // bl ov07_0221C4A8
    // ldr r2, _022247C0 ; =0x00000802
    // cmp r0, r2
    // bgt _02224600
    // bge _0222466C
    // mov r2, #0x42
    // lsl r2, r2, #2
    // cmp r0, r2
    // bgt _022245F8
    // sub r1, r2, #6
    // cmp r0, r1
    // blt _022245F6
    // beq _02224618
    // sub r1, r2, #4
    // cmp r0, r1
    // beq _02224618
    // cmp r0, r2
    // beq _02224642
    // b _02224722
    // add r2, #8
    // cmp r0, r2
    // beq _02224642
    // b _02224722
    // add r1, r2, #6
    // cmp r0, r1
    // bgt _02224610
    // bge _022246C8
    // add r1, r2, #2
    // cmp r0, r1
    // beq _0222469C
    // b _02224722
    // add r2, #0xe
    // cmp r0, r2
    // beq _022246F8
    // b _02224722
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAA0
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r1, r0, #0
    // ldr r0, [r4]
    // add r2, sp, #4
    // add r3, sp, #0
    // bl ov07_02232020
    // ldr r0, [sp, #0xc]
    // str r0, [r4, #0xc]
    // b _02224722
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAA0
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r1, r0, #0
    // ldr r0, [r4]
    // add r2, sp, #4
    // add r3, sp, #0
    // bl ov07_02232020
    // ldr r0, [sp, #0xc]
    // str r0, [r4, #0xc]
    // b _02224722
    // mov r7, #0xff
    // mov r6, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #0
    // beq _02224680
    // cmp r0, #2
    // bne _02224684
    // add r7, r6, #0
    // b _0222468A
    // add r6, r6, #1
    // cmp r6, #4
    // blt _02224670
    // cmp r7, #0xff
    // bne _02224690
    // mov r7, #0
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // b _02224722
    // mov r7, #0xff
    // mov r6, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #4
    // bne _022246B0
    // add r7, r6, #0
    // b _022246B6
    // add r6, r6, #1
    // cmp r6, #4
    // blt _022246A0
    // cmp r7, #0xff
    // bne _022246BC
    // mov r7, #0
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // b _02224722
    // mov r7, #0xff
    // mov r6, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #1
    // beq _022246DC
    // cmp r0, #3
    // bne _022246E0
    // add r7, r6, #0
    // b _022246E6
    // add r6, r6, #1
    // cmp r6, #4
    // blt _022246CC
    // cmp r7, #0xff
    // bne _022246EC
    // mov r7, #0
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // b _02224722
    // mov r7, #0xff
    // mov r6, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #5
    // bne _0222470C
    // add r7, r6, #0
    // b _02224712
    // add r6, r6, #1
    // cmp r6, #4
    // blt _022246FC
    // cmp r7, #0xff
    // bne _02224718
    // mov r7, #0
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _02224732
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x54
    // pop {r4, r5, r6, r7, pc}
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xa]
    // mov r0, #0xa
    // ldrsh r0, [r4, r0]
    // mov r1, #1
    // add r0, #0x10
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #0x34]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r4, #0x38]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r4, #0x3c]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r4, #0x40]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4, #0x44]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // str r0, [r4, #0x48]
    // add r0, r5, #0
    // mov r1, #7
    // bl ov07_0221C4A8
    // str r0, [r4, #0x4c]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x48]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // asr r0, r0, #0x10
    // str r0, [r4, #0x50]
    // ldr r0, [r4]
    // ldr r1, _022247C4 ; =ov07_0222446C
    // add r2, r4, #0
    // bl ov07_0221C410
    // add r1, r4, #0
    // bl ov07_0222446C
    // add sp, #0x54
    // pop {r4, r5, r6, r7, pc}
    // _022247C0: .word 0x00000802
    // _022247C4: .word ov07_0222446C
    // TODO: decompile
}



void ov07_022247C8(void) {
    // add r0, #8
    ov07_02222AF4(r1);
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}



void ov07_022247F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0x30
    // add r7, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r7, [r4]
    // add r0, r7, #0
    // bl ov07_0221C514
    // str r0, [r4, #4]
    // add r0, r7, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // mov r5, #0
    // mov r0, #1
    // lsl r0, r5
    // tst r0, r6
    // beq _0222482E
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov07_0221C4E8
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // add r5, r5, #1
    // cmp r5, #4
    // blt _02224818
    // add r0, r7, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r5, r0, #0
    // add r0, r7, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // ldr r2, [sp, #8]
    // add r1, r5, #0
    // bl ov07_02231E08
    // add r0, r7, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r7, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #8]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, r4, #0
    // lsl r1, r5, #0x10
    // lsl r2, r6, #0x10
    // lsl r3, r3, #0x10
    // add r0, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // bl ov07_02222AC4
    // ldr r0, [r4]
    // ldr r1, _0222489C ; =ov07_022247C8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222489C: .word ov07_022247C8
    // TODO: decompile
}



void ov07_022248A0(void) {
    ov07_0221C4A8(1);
    ov07_0221C4A8(r6, 0);
    // add r2, sp, #4
    // add r3, sp, #0
    ov07_02232020(r6, r0);
    // ldr r0, [sp]
    // ldr r1, [sp, #0x14]
    ov07_0221FAC8(r6);
    // ldr r0, [sp, #0xc]
    Pokepic_SetAttr(r7, r5);
    // ldr r0, [sp]
}



void ov07_022248F4(void) {
    Pokepic_SetAttr(*((u32*)(r1 + 0x14)), 6, 0);
    Heap_Free(r4);
    ov07_0221C448(*((u32*)(r4 + 0x3c)), r5);
    Pokepic_GetAttr(6);
    // eor r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x14)), 6, 1, r0);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 4)) = (r1 + 1);
}



void ov07_02224948(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #0x40
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // str r5, [r4, #0x3c]
    // bl ov07_0221C4A8
    // lsl r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r1, #0x20
    // bl ov07_02231FE4
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #0x3c]
    // ldr r1, _02224994 ; =ov07_022248F4
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _02224994: .word ov07_022248F4
    // TODO: decompile
}



void ov07_02224998(void) {
    // add r0, #0x24
    // ldrb r0, [r0]
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x40
    // add r2, r1, r2
    // asr r2, r2, #0x10
    ov07_02222268(r1, (0xc << 0x10));
    // add r0, #0x24
    // ldrb r0, [r0]
    // add r4, #0x24
    // strb r0, [r4]
    // add r0, #0x40
    ov07_022222B4(r4);
    // add r0, #0x24
    // ldrb r0, [r0]
    // add r0, #0x24
    // strb r1, [r0]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x18)), 0, 0x40);
    ov07_0221C448(*((u32*)(r4 + 0x64)), r2);
    Heap_Free(r4);
}



void ov07_02224A20(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x68
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #0x64]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // mov r6, #0xff
    // add r1, r6, #0
    // add r1, #9
    // cmp r0, r1
    // bgt _02224A6C
    // add r1, r6, #3
    // cmp r0, r1
    // blt _02224AC2
    // beq _02224A76
    // add r1, r6, #5
    // cmp r0, r1
    // beq _02224A80
    // add r1, r6, #0
    // add r1, #9
    // cmp r0, r1
    // beq _02224A9C
    // b _02224AC2
    // add r1, r6, #0
    // add r1, #0x11
    // cmp r0, r1
    // beq _02224AA6
    // b _02224AC2
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r6, r0, #0
    // b _02224AC6
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _02224AC6
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r6, r0, #0
    // b _02224AC6
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r6, r0, #0
    // b _02224AC6
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _02224AC6
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r6, r0, #0
    // b _02224AC6
    // bl GF_AssertFail
    // cmp r6, #0xff
    // bne _02224AD2
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x24
    // bl ov07_02231FE4
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // add r1, r4, #0
    // add r1, #0x14
    // str r0, [r4, #0x18]
    // bl ov07_02231FA0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02222004
    // cmp r0, #0
    // bgt _02224B04
    // mov r0, #0xc
    // ldrsh r1, [r4, r0]
    // sub r0, #0xd
    // mul r0, r1
    // strh r0, [r4, #0xc]
    // ldr r0, [r4, #0x64]
    // ldr r1, _02224B10 ; =ov07_02224998
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // _02224B10: .word ov07_02224998
    // TODO: decompile
}



void ov07_02224B14(void) {
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r4, #0x20
    // strb r0, [r4]
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x3c
    // add r2, r1, r2
    // asr r2, r2, #0x10
    ov07_02222268(r1, (0x64 << 0x10));
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x3c
    ov07_022222B4(r4, (r4 + 1));
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r0, #0x20
    // strb r1, [r0]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x14)), 0, 0x3c);
    ov07_0221C448(*((u32*)(r4 + 0x60)), r2);
    Heap_Free(r4);
}



void ov07_02224BAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x68
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #0x60]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r1, #0x64
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, #0x20
    // bl ov07_02231FE4
    // mov r6, #0xff
    // add r0, r6, #0
    // add r0, #9
    // cmp r7, r0
    // bgt _02224C08
    // add r0, r6, #3
    // cmp r7, r0
    // blt _02224C5E
    // beq _02224C12
    // add r0, r6, #5
    // cmp r7, r0
    // beq _02224C1C
    // add r0, r6, #0
    // add r0, #9
    // cmp r7, r0
    // beq _02224C38
    // b _02224C5E
    // add r0, r6, #0
    // add r0, #0x11
    // cmp r7, r0
    // beq _02224C42
    // b _02224C5E
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r6, r0, #0
    // b _02224C62
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _02224C62
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r6, r0, #0
    // b _02224C62
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r6, r0, #0
    // b _02224C62
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _02224C62
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r6, r0, #0
    // b _02224C62
    // bl GF_AssertFail
    // cmp r6, #0xff
    // bne _02224C6E
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // add r1, r4, #0
    // add r1, #0x10
    // str r0, [r4, #0x14]
    // bl ov07_02231FA0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02222004
    // cmp r0, #0
    // bgt _02224C9C
    // mov r0, #0x64
    // ldrsh r1, [r4, r0]
    // sub r0, #0x65
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r4, #0
    // add r0, #0x64
    // strh r2, [r0]
    // add r0, r5, #0
    // bl ov07_0221BFC0
    // ldr r0, [r4, #0x60]
    // ldr r1, _02224CB4 ; =ov07_02224B14
    // add r2, r4, #0
    // bl ov07_0221C410
    // add r1, r4, #0
    // bl ov07_02224B14
    // pop {r3, r4, r5, r6, r7, pc}
    // _02224CB4: .word ov07_02224B14
    // TODO: decompile
}



void ov07_02224CB8(void) {
    // ldrb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224CD4: ; jump table
    // add r0, #0x14
    ov07_02222558(r1, r0);
    // add r0, #0x38
    ov07_022227D8(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0x16);
    // ldrsh r2, [r4, r2]
    Pokepic_AddAttr(*((u32*)(r4 + 0x10)), 0, 0x38);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x28)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    *((u8*)(r4 + 9)) = (*((u8*)(r4 + 9)) + 1);
    ov07_0221C4A8(*((u32*)(r4 + 0xc)), 0);
    ov07_0221C4A8(*((u32*)(r4 + 0xc)), 1);
    ov07_0221C4A8(*((u32*)(r4 + 0xc)), 3);
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222508(r4, (r5 << 0x10), 0x64, (r6 << 0x10));
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x14
    ov07_02222558(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0x16);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x28)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x14
    ov07_02222558(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0x16);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x28)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2, r0);
    // add r2, #0xf4
    Pokepic_SetAttr(0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0xd);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2);
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 0xc)), r2);
    Heap_Free(r4);
}



void ov07_02224E58(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x5c
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4, #8]
    // strb r0, [r4]
    // str r5, [r4, #0xc]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r0, #0
    // strb r0, [r4, #9]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strb r0, [r4, #0xa]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #2]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FAA0
    // str r0, [r4, #4]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x64
    // lsl r3, r6, #0x10
    // add r0, #0x14
    // add r2, r1, #0
    // asr r3, r3, #0x10
    // bl ov07_02222508
    // mov r0, #0xa
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0x38
    // mov r1, #2
    // add r3, r2, #0
    // bl ov07_022227A8
    // ldr r0, [r4, #0xc]
    // ldr r1, _02224EF0 ; =ov07_02224CB8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02224EF0: .word ov07_02224CB8
    // TODO: decompile
}



void ov07_02224EF4(void) {
    // ldrb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224F10: ; jump table
    // add r0, #0x20
    ov07_0222260C(r1, r0);
    // add r0, #0x44
    ov07_022227D8(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xc, 0x20);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xd, 0x22);
    // ldrsh r2, [r4, r2]
    Pokepic_AddAttr(*((u32*)(r4 + 0x1c)), 0, 0x44);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x34)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 1, 2, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    *((u8*)(r4 + 9)) = (*((u8*)(r4 + 9)) + 1);
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r1, r2, #0x10
    // str r0, [sp, #4]
    // asr r3, r3, #0x10
    // str r0, [sp, #8]
    // add r0, #0x20
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222590(r4, (*((u8*)(r4 + 9)) << 0x10), (((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18) << 0x10), (*((u32*)(r4 + 0x10)) << 0x10));
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x20
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xc, 0x20);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xd, 0x22);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x34)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 1, 2, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x20
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xc, 0x20);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xd, 0x22);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x34)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 1, 2, r0);
    // add r2, #0xf4
    Pokepic_SetAttr(0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xd, 0xd);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 1, 2);
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 0x18)), r2);
    Heap_Free(r4);
}



void ov07_02225098(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x68
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4, #8]
    // strb r0, [r4]
    // str r5, [r4, #0x18]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0x18]
    // bl ov07_0221FA48
    // str r0, [r4, #0x1c]
    // mov r0, #0
    // strb r0, [r4, #9]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // strb r0, [r4, #0xa]
    // ldr r0, [r4, #0x18]
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0x18]
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x18]
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #0x18]
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0
    // add r3, r4, #2
    // bl ov07_02221F38
    // ldr r0, [r4, #0x18]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0x18]
    // bl ov07_0221FAA0
    // str r0, [r4, #4]
    // mov r1, #2
    // ldrsh r1, [r4, r1]
    // add r0, r1, r0
    // strh r0, [r4, #2]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // asr r0, r0, #0x10
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // asr r0, r0, #0x10
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r6, [sp]
    // mov r1, #0x64
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // add r0, #0x20
    // add r2, r7, #0
    // bl ov07_02222590
    // mov r0, #0xa
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0x44
    // mov r1, #2
    // add r3, r2, #0
    // bl ov07_022227A8
    // ldr r0, [r4, #0x18]
    // ldr r1, _02225198 ; =ov07_02224EF4
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02225198: .word ov07_02224EF4
    // TODO: decompile
}



void ov07_0222519C(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r2]
    // ldr r0, _022251C8 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl ov07_0221EC7C
    // ldr r0, [r4, #8]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // nop
    // _022251C8: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov07_022251CC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #0x28
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov07_02231FE4
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl ov07_0221EB98
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x24]
    // mov r1, #2
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r1, _0222524C ; =0x3F99999A
    // ldr r0, [r4, #0x24]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02225250 ; =0xFFFF1FFF
    // and r2, r1
    // lsr r1, r0, #0xb
    // orr r1, r2
    // str r1, [r0]
    // add r0, #0x4a
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x1b
    // orr r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _02225254 ; =0xFFFFC0FF
    // and r2, r1
    // mov r1, #7
    // lsl r1, r1, #8
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, [r4, #8]
    // ldr r1, _02225258 ; =ov07_0222519C
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _0222524C: .word 0x3F99999A
    // _02225250: .word 0xFFFF1FFF
    // _02225254: .word 0xFFFFC0FF
    // _02225258: .word ov07_0222519C
    // TODO: decompile
}



void ov07_0222525C(void) {
    // add r0, #0x20
    // ldrb r0, [r0]
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x3c
    // add r2, r1, r2
    // asr r2, r2, #0x10
    ov07_02222268(r1, (0x64 << 0x10));
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x3c
    ov07_022222B4(r4, (r4 + 1));
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r0, #0x20
    // strb r1, [r0]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x14)), 0, 0x3c);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x14)), 1, 0x3e);
    ov07_0221C448(*((u32*)(r4 + 0x60)), r2);
    Heap_Free(r4);
}



void ov07_022252F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x68
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #0x60]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r1, #0x64
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r1, #0x66
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, #0x20
    // bl ov07_02231FE4
    // mov r6, #0xff
    // add r0, r6, #0
    // add r0, #9
    // cmp r7, r0
    // bgt _02225362
    // add r0, r6, #3
    // cmp r7, r0
    // blt _022253B8
    // beq _0222536C
    // add r0, r6, #5
    // cmp r7, r0
    // beq _02225376
    // add r0, r6, #0
    // add r0, #9
    // cmp r7, r0
    // beq _02225392
    // b _022253B8
    // add r0, r6, #0
    // add r0, #0x11
    // cmp r7, r0
    // beq _0222539C
    // b _022253B8
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r6, r0, #0
    // b _022253BC
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _022253BC
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r6, r0, #0
    // b _022253BC
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r6, r0, #0
    // b _022253BC
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _022253BC
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r6, r0, #0
    // b _022253BC
    // bl GF_AssertFail
    // cmp r6, #0xff
    // bne _022253C8
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x14]
    // cmp r0, #0
    // bne _022253DE
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // add r1, #0x10
    // bl ov07_02231FA0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02222004
    // cmp r0, #0
    // bgt _02225412
    // mov r0, #0x64
    // ldrsh r1, [r4, r0]
    // sub r0, #0x65
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r4, #0
    // add r0, #0x64
    // strh r2, [r0]
    // mov r0, #0x66
    // ldrsh r1, [r4, r0]
    // sub r0, #0x67
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r4, #0
    // add r0, #0x66
    // strh r2, [r0]
    // add r0, r5, #0
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _0222542C
    // mov r0, #0x66
    // ldrsh r1, [r4, r0]
    // sub r0, #0x67
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r4, #0
    // add r0, #0x66
    // strh r2, [r0]
    // ldr r0, [r4, #0x60]
    // ldr r1, _02225440 ; =ov07_0222525C
    // add r2, r4, #0
    // bl ov07_0221C410
    // add r1, r4, #0
    // bl ov07_0222525C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02225440: .word ov07_0222525C
    // TODO: decompile
}



void ov07_02225444(void) {
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x30
    ov07_02222240(r1, 0x20, 0x22, *((u32*)(r1 + 0x24)));
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 0, 0x20);
    // ldrsh r2, [r4, r2]
    // sub r2, #8
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 1, 0x22);
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_0222548C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r1, #0x54
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r2, r4, #0
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, #0x1c
    // add r3, sp, #0
    // bl ov07_02232020
    // mov r0, #0x22
    // ldrsh r0, [r4, r0]
    // mov r1, #1
    // add r0, #8
    // strh r0, [r4, #0x22]
    // add r0, r5, #0
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r2, r0, #0
    // add r0, r4, #0
    // add r0, #0x30
    // add r1, r6, #0
    // bl ov07_02222A44
    // ldr r1, [r4, #0x3c]
    // add r2, r4, #0
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #0x3c]
    // ldr r1, [r4, #0x44]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #0x44]
    // ldr r0, [r4, #4]
    // ldr r1, _02225500 ; =ov07_02225444
    // bl ov07_0221C410
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02225500: .word ov07_02225444
    // TODO: decompile
}



void ov07_02225504(void) {
    // ldrb r0, [r4]
    // add r0, #0x30
    ov07_022222B4(r1, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 0, 0x30);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 1, 0x32);
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    Heap_Free(r4);
}



void ov07_0222554C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0x5c
    // add r6, r0, #0
    // bl ov07_022324D8
    // add r5, r0, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov07_02231FE4
    // add r0, r6, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r7, r0, #0
    // cmp r4, #8
    // bgt _0222558A
    // cmp r4, #2
    // blt _022255C8
    // beq _02225590
    // cmp r4, #4
    // beq _0222559A
    // cmp r4, #8
    // beq _022255AC
    // b _022255C8
    // cmp r4, #0x10
    // beq _022255B6
    // b _022255C8
    // add r0, r6, #0
    // bl ov07_0221C468
    // str r0, [sp, #8]
    // b _022255CC
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0223197C
    // str r0, [sp, #8]
    // b _022255CC
    // add r0, r6, #0
    // bl ov07_0221C470
    // str r0, [sp, #8]
    // b _022255CC
    // add r0, r6, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0223197C
    // str r0, [sp, #8]
    // b _022255CC
    // bl GF_AssertFail
    // add r2, r5, #0
    // ldr r1, [sp, #8]
    // add r0, r6, #0
    // add r2, #0x54
    // bl ov07_02231A50
    // add r2, r5, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, #0x1c
    // add r3, sp, #0xc
    // bl ov07_02232020
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x58
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x5a
    // strh r1, [r0]
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #8]
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _02225606
    // mov r1, #0x4f
    // mvn r1, r1
    // b _0222560A
    // mov r1, #0x15
    // lsl r1, r1, #4
    // add r0, r5, #0
    // add r0, #0x58
    // strh r1, [r0]
    // mov r0, #0x22
    // ldrsh r3, [r5, r0]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r1, #0x20
    // mov r2, #0x58
    // add r0, r5, #0
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // add r0, #0x30
    // bl ov07_02222268
    // ldr r0, [r5, #4]
    // ldr r1, _0222563C ; =ov07_02225504
    // add r2, r5, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222563C: .word ov07_02225504
    // TODO: decompile
}



void ov07_02225640(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r1, #0x5c
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r7, r0, #0
    // cmp r6, #8
    // bgt _02225688
    // cmp r6, #2
    // blt _022256C6
    // beq _0222568E
    // cmp r6, #4
    // beq _02225698
    // cmp r6, #8
    // beq _022256AA
    // b _022256C6
    // cmp r6, #0x10
    // beq _022256B4
    // b _022256C6
    // add r0, r5, #0
    // bl ov07_0221C468
    // str r0, [sp, #8]
    // b _022256CA
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // str r0, [sp, #8]
    // b _022256CA
    // add r0, r5, #0
    // bl ov07_0221C470
    // str r0, [sp, #8]
    // b _022256CA
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // str r0, [sp, #8]
    // b _022256CA
    // bl GF_AssertFail
    // add r2, r4, #0
    // ldr r1, [sp, #8]
    // add r0, r5, #0
    // add r2, #0x54
    // bl ov07_02231A50
    // add r2, r4, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, #0x1c
    // add r3, sp, #0x10
    // bl ov07_02232020
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x58
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x5a
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #8]
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _02225704
    // mov r1, #0x4f
    // mvn r1, r1
    // b _02225708
    // mov r1, #0x15
    // lsl r1, r1, #4
    // add r0, r4, #0
    // add r0, #0x58
    // strh r1, [r0]
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // bne _02225732
    // mov r0, #0x22
    // ldrsh r3, [r4, r0]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r1, #0x20
    // mov r2, #0x58
    // add r0, r4, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x30
    // bl ov07_02222268
    // b _02225756
    // ldr r1, [sp, #8]
    // add r0, r5, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r2, r0, #0
    // mov r0, #0x22
    // ldrsh r3, [r4, r0]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r1, #0x58
    // add r0, r4, #0
    // ldrsh r1, [r4, r1]
    // add r0, #0x30
    // bl ov07_02222268
    // ldr r0, [r4, #4]
    // ldr r1, _02225764 ; =ov07_02225504
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02225764: .word ov07_02225504
    // TODO: decompile
}



void ov07_02225768(void) {
    ov07_0221C4A8(0);
    ov07_0221C468(r5);
    ov07_0221C468(r5);
    ov07_0223197C(r5, r0);
    ov07_0221C470(r5);
    ov07_0221C470(r5);
    ov07_0223197C(r5, r0);
    GF_AssertFail();
    // add r2, sp, #0
    ov07_02231A50(r5, r6);
    // add r2, sp, #8
    // add r3, sp, #4
    ov07_02232020(r5, r4);
    ov07_0221FAA0(r5, r6);
    // asr r4, r0, #0x10
    // add r2, sp, #0
    // ldrsh r2, [r2, r1]
    // ldr r0, [sp, #0x10]
    Pokepic_SetAttr((r0 << 0x10), 0);
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [sp, #0x10]
    // add r2, r2, r4
    Pokepic_SetAttr(1, 2);
}



void ov07_02225810(void) {
    ov07_02222EE8(*((u32*)(r1 + 0x30)));
    ov07_02222EF8(*((u32*)(r4 + 0x30)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_02225838(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // mov r1, #0x34
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [sp, #0x20]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [sp, #0x24]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // add r2, r4, #0
    // str r0, [sp, #0x28]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, #0x1c
    // add r3, sp, #0x2c
    // bl ov07_022323FC
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // add r7, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // lsl r0, r6, #0x18
    // asr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // lsl r3, r7, #0x14
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // mov r2, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // lsr r3, r3, #0x10
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, _022258FC ; =0x0000044C
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x18]
    // bl ov07_02222F10
    // str r0, [r4, #0x30]
    // ldr r0, [r4, #4]
    // ldr r1, _02225900 ; =ov07_02225810
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022258FC: .word 0x0000044C
    // _02225900: .word ov07_02225810
    // TODO: decompile
}



void ov07_02225904(void) {
    // ldrb r0, [r4]
    *((u32*)(r1 + 0x4c)) = (*((u32*)(r1 + 0x4c)) + 1);
    *((u32*)(r1 + 0x4c)) = 0;
    *((u32*)(r1 + 0x54)) = 0;
    // ldrb r0, [r4]
    // strb r0, [r4]
    *((u32*)(r1 + 0x54)) = 0x50;
    // ldrb r0, [r4]
    // strb r0, [r4]
    Pokepic_SetAttr(*((u32*)(r1 + 0x24)), 0x12, *((u32*)(r1 + 0x54)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 1, *((u32*)(r4 + 0x50)));
    // ldrsh r1, [r4, r0]
    // sub r1, r2, r1
    *((u32*)(r4 + 0x50)) = r1;
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u32*)(r4 + 0x54)) = 0x42;
    ov07_02223224(*((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x54)), *((u32*)(r4 + 0x50)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_02225990(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r1, #0x58
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r2, r4, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, #0x1c
    // add r3, sp, #4
    // bl ov07_02232020
    // cmp r6, #8
    // bgt _022259D2
    // cmp r6, #2
    // blt _02225A10
    // beq _022259D8
    // cmp r6, #4
    // beq _022259E2
    // cmp r6, #8
    // beq _022259F4
    // b _02225A10
    // cmp r6, #0x10
    // beq _022259FE
    // b _02225A10
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r7, r0, #0
    // b _02225A14
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r7, r0, #0
    // b _02225A14
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r7, r0, #0
    // b _02225A14
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223197C
    // add r7, r0, #0
    // b _02225A14
    // bl GF_AssertFail
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // str r0, [r4, #0x48]
    // cmp r0, #0
    // ldr r0, [r4, #0x24]
    // bne _02225A68
    // mov r1, #1
    // bl Pokepic_GetAttr
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0x24]
    // mov r1, #0x12
    // bl Pokepic_GetAttr
    // mov r1, #0x50
    // sub r0, r1, r0
    // str r0, [r4, #0x54]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r1, #0x40
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r1, #0x42
    // strh r0, [r1]
    // mov r0, #0x42
    // ldrsh r1, [r4, r0]
    // sub r0, #0x43
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r4, #0
    // add r0, #0x42
    // strh r2, [r0]
    // b _02225A96
    // mov r1, #1
    // bl Pokepic_GetAttr
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0x24]
    // mov r1, #0x12
    // bl Pokepic_GetAttr
    // str r0, [r4, #0x54]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r1, #0x40
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // add r1, r4, #0
    // add r1, #0x42
    // strh r0, [r1]
    // mov r0, #0
    // str r0, [r4, #0x30]
    // str r0, [r4, #0x34]
    // mov r0, #0x50
    // str r0, [r4, #0x38]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov07_0221FAA0
    // mov r1, #0x50
    // sub r0, r1, r0
    // str r0, [r4, #0x3c]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r4, #0x44]
    // mov r0, #0
    // str r0, [r4, #0x4c]
    // ldr r0, [r4, #0x3c]
    // str r0, [sp]
    // ldr r0, [r4, #0x24]
    // ldr r1, [r4, #0x30]
    // ldr r2, [r4, #0x34]
    // ldr r3, [r4, #0x38]
    // bl Pokepic_SetVisible
    // ldr r0, [r4, #4]
    // ldr r1, _02225ADC ; =ov07_02225904
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02225ADC: .word ov07_02225904
    // TODO: decompile
}



void ov07_02225AE0(void) {
    ov07_0221C468();
    ov07_0221C468();
    ov07_0223197C(r5, r0);
    ov07_0221C470();
    ov07_0221C470();
    ov07_0223197C(r5, r0);
    GF_AssertFail();
}



void ov07_02225B38(void) {
    // ldrb r0, [r4]
    *((u32*)(r1 + 0x24)) = (*((u32*)(r1 + 0x24)) + 1);
    *((u32*)(r1 + 0x24)) = 0;
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    *((u32*)(r1 + 0x44)) = r2;
    Pokepic_SetAttr(*((u32*)(r1 + 0x30)), 1);
    // ldrsh r0, [r4, r0]
    // sub r1, r1, r0
    *((u32*)(r4 + 0x3c)) = *((u32*)(r4 + 0x3c));
    *((u32*)(r4 + 0x3c)) = *((u32*)(r4 + 0x40));
    // ldrb r0, [r4]
    // strb r0, [r4]
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 0x12, *((u32*)(r4 + 0x3c)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 0xe, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 1, *((u32*)(r4 + 0x48)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 0x12, *((u32*)(r4 + 0x40)));
    ov07_02223224(*((u32*)(r4 + 0x30)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_02225BC4(void) {
    // ldrb r0, [r4]
    *((u32*)(r1 + 0x24)) = (*((u32*)(r1 + 0x24)) + 1);
    *((u32*)(r1 + 0x24)) = 0;
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    *((u32*)(r1 + 0x44)) = r2;
    Pokepic_SetAttr(*((u32*)(r1 + 0x30)), 1);
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    *((u32*)(r4 + 0x3c)) = 0x1c;
    // bpl _02225C0E
    *((u32*)(r4 + 0x3c)) = 0;
    // ldrb r0, [r4]
    // strb r0, [r4]
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 0x12, *((u32*)(r4 + 0x3c)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 0xe, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 1, *((u32*)(r4 + 0x48)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 0x12, *((u32*)(r4 + 0x40)));
    ov07_02223224(*((u32*)(r4 + 0x30)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_02225C50(void) {
    // ldrb r0, [r4]
    *((u32*)(r1 + 0x24)) = (*((u32*)(r1 + 0x24)) + 1);
    *((u32*)(r1 + 0x24)) = 0;
    // ldrsh r2, [r4, r1]
    // sub r2, r3, r2
    *((u32*)(r1 + 0x3c)) = r2;
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    *((u32*)(r1 + 0x40)) = 0x1c;
    *((u32*)(r1 + 0x3c)) = 0;
    // ldrb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    Pokepic_SetVisible(*((u32*)(r1 + 0x30)), 0, *((u32*)(r1 + 0x3c)), 0x50);
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 0xe, 0);
    ov07_02223224(*((u32*)(r4 + 0x30)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_02225CC4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // mov r1, #0x50
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x1c]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r4, #0x20]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r2, r4, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, #0x28
    // add r3, sp, #4
    // bl ov07_02232020
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02225AE0
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // cmp r0, #0
    // beq _02225D46
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FAA0
    // mov r3, #0x50
    // sub r0, r3, r0
    // str r0, [r4, #0x3c]
    // mov r1, #0
    // str r1, [r4, #0x40]
    // str r1, [sp]
    // ldr r0, [r4, #0x30]
    // ldr r2, [r4, #0x3c]
    // bl Pokepic_SetVisible
    // ldr r0, [r4, #4]
    // ldr r1, _02225DB8 ; =ov07_02225C50
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // str r0, [r4, #0x44]
    // str r0, [r4, #0x48]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FAA0
    // mov r3, #0x50
    // sub r0, r3, r0
    // str r0, [r4, #0x3c]
    // str r0, [r4, #0x40]
    // mov r0, #0x1c
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _02225D86
    // ldr r0, [r4, #0x3c]
    // mov r1, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x30]
    // add r2, r1, #0
    // bl Pokepic_SetVisible
    // ldr r0, [r4, #4]
    // ldr r1, _02225DBC ; =ov07_02225BC4
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // str r0, [r4, #0x3c]
    // ldr r1, [r4, #0x44]
    // ldr r0, [r4, #0x40]
    // add r2, r1, r0
    // str r2, [r4, #0x44]
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0x3c]
    // mov r1, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x30]
    // add r2, r1, #0
    // mov r3, #0x50
    // bl Pokepic_SetVisible
    // ldr r0, [r4, #4]
    // ldr r1, _02225DC0 ; =ov07_02225B38
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _02225DB8: .word ov07_02225C50
    // _02225DBC: .word ov07_02225BC4
    // _02225DC0: .word ov07_02225B38
    // TODO: decompile
}



void ov07_02225DC4(void) {
    // ldrb r0, [r4]
    // str r0, [sp]
    // add r0, #0xd4
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_022227A8(r1, (*((u32*)(r1 + 4)) << 0x10), (*((u32*)(r1 + 8)) << 0x10), *((u32*)(r1 + 0xc)));
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0xd4
    ov07_022227D8(r4);
    // ldrb r0, [r4]
    // strb r0, [r4]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x28)), ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18), 0, 0);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x28)), ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18), 3, 0);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // ldrsh r0, [r4, r3]
    *((u32*)(r4 + 0x20)) = 1;
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x28)), ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18), 0, 0xd4);
    // ldrsh r0, [r4, r3]
    *((u32*)(r4 + 0x24)) = 1;
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x28)), ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18), 3, 0xd6);
    ov07_0221C448(*((u32*)(r4 + 0x2c)), r2);
    Heap_Free(r4);
}



void ov07_02225E9C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0xf8
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // str r5, [r4, #0x2c]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #0x30]
    // ldr r0, [r4, #0x2c]
    // bl ov07_0221C4A0
    // str r0, [r4, #0x28]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #4]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // str r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r4, #0x18]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // cmp r0, #0
    // bne _02225F02
    // mov r0, #3
    // b _02225F04
    // mov r0, #2
    // str r0, [r4, #0x1c]
    // ldr r0, [r4, #0x2c]
    // ldr r1, _02225F14 ; =ov07_02225DC4
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _02225F14: .word ov07_02225DC4
    // TODO: decompile
}



void ov07_02225F18(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r2, r0, #0
    // ldr r0, [r4, #0x2c]
    // ldr r3, [r4, #0x24]
    // cmp r3, r0
    // beq _02225F2C
    // ldr r1, [r4, #0x28]
    // cmp r1, r0
    // bne _02225F3C
    // ldr r0, [r4, #4]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // mov r1, #0x20
    // ldrsh r2, [r4, r1]
    // cmp r2, #0
    // bge _02225F5E
    // add r2, r3, r2
    // cmp r2, #0
    // ble _02225F56
    // str r2, [r4, #0x24]
    // ldrsh r0, [r4, r1]
    // ldr r2, [r4, #0x28]
    // add r0, r2, r0
    // str r0, [r4, #0x28]
    // b _02225F76
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x2c]
    // str r0, [r4, #0x28]
    // b _02225F76
    // add r2, r3, r2
    // cmp r2, #0xf
    // bge _02225F70
    // str r2, [r4, #0x24]
    // ldrsh r0, [r4, r1]
    // ldr r2, [r4, #0x28]
    // add r0, r2, r0
    // str r0, [r4, #0x28]
    // b _02225F76
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x2c]
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #0x24]
    // lsl r0, r0, #4
    // orr r1, r0
    // ldr r0, _02225F90 ; =0x0400004D
    // strb r1, [r0]
    // ldr r0, [r4, #0xc]
    // bl SpriteSystem_DrawSprites
    // pop {r4, pc}
    // _02225F90: .word 0x0400004D
    // TODO: decompile
}



void ov07_02225F94(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x30
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x20]
    // ldr r0, [r4, #4]
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #4]
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221C4E8
    // mov r1, #1
    // str r0, [r4, #0x1c]
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0x20
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _02225FEA
    // mov r0, #0
    // b _02225FEC
    // mov r0, #0xf
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl ManagedSprite_SetMosaicFlag
    // ldr r0, [r4, #4]
    // ldr r1, _02226008 ; =ov07_02225F18
    // add r2, r4, #0
    // bl ov07_0221C410
    // add r1, r4, #0
    // bl ov07_02225F18
    // pop {r3, r4, r5, pc}
    // _02226008: .word ov07_02225F18
    // TODO: decompile
}



void ov07_0222600C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xe]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // strh r0, [r4, #4]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strh r0, [r4, #6]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4, #8]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #8
    // bl ov07_0221C4A8
    // str r0, [r4, #0x30]
    // add r0, r5, #0
    // mov r1, #7
    // bl ov07_0221C4A8
    // ldr r2, _022260D8 ; =0xFFFF0000
    // mov r1, #0
    // and r2, r0
    // lsl r0, r0, #0x10
    // str r1, [r4, #0x1c]
    // lsr r2, r2, #0x10
    // str r2, [r4, #0x20]
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x20]
    // cmp r0, #0
    // bne _02226082
    // str r1, [r4, #0x20]
    // ldr r0, [r4, #0x24]
    // cmp r0, #0
    // bne _0222608C
    // mov r0, #0xff
    // str r0, [r4, #0x24]
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl ov07_0221C494
    // str r0, [r4, #0x38]
    // add r0, r5, #0
    // bl ov07_0221C478
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bne _022260B6
    // add r0, r5, #0
    // bl ov07_0221C468
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // bl ov07_0221C470
    // str r0, [r4, #0x18]
    // b _022260CA
    // cmp r0, #1
    // bne _022260CA
    // add r0, r5, #0
    // bl ov07_0221C470
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // bl ov07_0221C468
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x38]
    // cmp r0, #0
    // bne _022260D4
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // nop
    // _022260D8: .word 0xFFFF0000
    // TODO: decompile
}



void ov07_022260DC(void) {
    // ldr r0, [r0, #8]
    // mov r1, #0
    // cmp r0, #0
    // beq _022260EE
    // ldrh r2, [r0, #0x26]
    // ldrh r3, [r0, #0x24]
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022260E4
    // cmp r2, r3
    // beq _022260F4
    // mov r1, #1
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}



void ov07_022260F8(void) {
    ov07_022260DC(*((u32*)(r1 + 0x38)));
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x28)) = (*((u32*)(r5 + 0x28)) + 1);
    // add r0, #0xa8
    ov07_022222B4(r5, *((u32*)(r5 + 0x28)));
    sub_020154C4(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)));
    ov07_0221C448(*((u32*)(r5 + 0x40)), r6);
    ov07_02232508(r5);
    // ldrsh r2, [r5, r0]
    // mul r0, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x28)) = r2;
    // ldrsh r4, [r5, r0]
    // mul r1, r3
    // add r1, r1, r3
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x2c)) = r4;
    // ldrsh r1, [r5, r1]
    // add r0, #0xbe
    _s32_div_f(0xaa, 6, *((u32*)(r5 + 0x38)), *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 8)));
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = r0;
    GF_SinDeg(((r0 << 0x10) >> 0x10), *((u32*)(r5 + 0x2c)));
    // ldrsh r2, [r5, r1]
    // mul r1, r2
    // add r2, r1, r0
    // add r0, r2, r0
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x2c)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 8));
}



void ov07_022261B4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // mov r1, #0x41
    // lsl r1, r1, #2
    // add r6, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x3c
    // bl ov07_02231FE4
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov07_0222600C
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_02222004
    // add r5, r0, #0
    // ldr r1, [r4, #0x14]
    // add r0, r6, #0
    // add r2, sp, #0x18
    // bl ov07_02231B90
    // ldr r1, [r4, #0x18]
    // add r0, r6, #0
    // add r2, sp, #0xc
    // bl ov07_02231B90
    // ldr r0, [sp, #0x18]
    // mov r1, #0xac
    // bl _s32_div_f
    // add r6, r0, #0
    // ldr r0, [sp, #0xc]
    // mov r1, #0xac
    // bl _s32_div_f
    // add r7, r0, #0
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xac
    // bl _s32_div_f
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // mov r1, #0xac
    // bl _s32_div_f
    // mov r1, #0xe
    // ldrsh r1, [r4, r1]
    // add r2, r1, #0
    // mul r2, r5
    // add r0, r0, r2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // ldrh r0, [r4, #6]
    // lsl r1, r6, #0x10
    // mov r2, #0xc
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, r4, #0
    // add r0, #0xa8
    // add r3, r2, #0
    // mul r3, r5
    // add r2, r7, r3
    // ldr r3, [sp, #8]
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // bl ov07_02222268
    // cmp r5, #0
    // ldr r2, _022262D8 ; =0x00005C71
    // ble _0222626C
    // ldr r1, _022262DC ; =0x00000E38
    // add r0, r4, #0
    // add r0, #0xf0
    // mul r1, r5
    // mul r2, r5
    // mov r3, #0xa
    // bl ov07_022223F0
    // b _0222627C
    // ldr r1, _022262E0 ; =0x00003FFF
    // add r0, r4, #0
    // add r0, #0xf0
    // mul r1, r5
    // mul r2, r5
    // mov r3, #0xa
    // bl ov07_022223F0
    // ldr r0, [r4, #0x20]
    // mov r5, #0
    // cmp r0, #0
    // ble _02226296
    // add r6, r4, #0
    // add r6, #0xa8
    // add r0, r6, #0
    // bl ov07_022222B4
    // ldr r0, [r4, #0x20]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02226288
    // ldr r0, [r4, #0x24]
    // cmp r0, #0xff
    // beq _022262A0
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // mov r0, #0xa8
    // ldrsh r3, [r4, r0]
    // ldr r1, [r4, #0x38]
    // mov r2, #0xac
    // add r0, r3, #0
    // ldr r3, [r1, #0x20]
    // mul r0, r2
    // ldr r3, [r3]
    // ldr r3, [r3, #4]
    // add r0, r0, r3
    // str r0, [r1, #0x28]
    // mov r1, #0xaa
    // ldrsh r1, [r4, r1]
    // ldr r0, [r4, #0x38]
    // mul r2, r1
    // ldr r1, [r0, #0x20]
    // ldr r1, [r1]
    // ldr r1, [r1, #8]
    // add r1, r2, r1
    // str r1, [r0, #0x2c]
    // ldr r0, [r4, #0x40]
    // ldr r1, _022262E4 ; =ov07_022260F8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022262D8: .word 0x00005C71
    // _022262DC: .word 0x00000E38
    // _022262E0: .word 0x00003FFF
    // _022262E4: .word ov07_022260F8
    // TODO: decompile
}



void ov07_022262E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // mov r1, #0x41
    // lsl r1, r1, #2
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x3c
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // strh r0, [r4, #6]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strh r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // ldr r2, _02226474 ; =0xFFFF0000
    // mov r1, #0
    // and r2, r0
    // lsl r0, r0, #0x10
    // str r1, [r4, #0x1c]
    // lsr r2, r2, #0x10
    // str r2, [r4, #0x20]
    // lsr r0, r0, #0x10
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x20]
    // cmp r0, #0
    // bne _0222635A
    // str r1, [r4, #0x20]
    // ldr r0, [r4, #0x24]
    // cmp r0, #0
    // bne _02226364
    // mov r0, #0xff
    // str r0, [r4, #0x24]
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl ov07_0221C494
    // str r0, [r4, #0x38]
    // add r0, r5, #0
    // bl ov07_0221C478
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bne _0222638C
    // add r0, r5, #0
    // bl ov07_0221C468
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // bl ov07_0221C468
    // b _0222639A
    // add r0, r5, #0
    // bl ov07_0221C470
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // bl ov07_0221C470
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x38]
    // cmp r0, #0
    // bne _022263A6
    // bl GF_AssertFail
    // ldr r1, [r4, #0x14]
    // add r0, r5, #0
    // add r2, sp, #0x14
    // bl ov07_02231B90
    // ldr r1, [r4, #0x18]
    // add r0, r5, #0
    // add r2, sp, #8
    // bl ov07_02231B90
    // cmp r6, #0
    // bne _022263CA
    // add r0, sp, #0x14
    // bl ov07_02231DD0
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x14]
    // b _022263D4
    // add r0, sp, #8
    // bl ov07_02231DD0
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // mov r1, #0xac
    // bl _s32_div_f
    // add r5, r0, #0
    // ldr r0, [sp, #8]
    // mov r1, #0xac
    // bl _s32_div_f
    // add r6, r0, #0
    // ldr r0, [sp, #0x18]
    // mov r1, #0xac
    // bl _s32_div_f
    // add r7, r0, #0
    // ldr r0, [sp, #0xc]
    // mov r1, #0xac
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // ldrh r0, [r4, #6]
    // lsl r1, r5, #0x10
    // lsl r2, r6, #0x10
    // str r0, [sp, #4]
    // add r0, r4, #0
    // lsl r3, r7, #0x10
    // add r0, #0xa8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // bl ov07_02222268
    // ldr r0, [r4, #0x20]
    // mov r5, #0
    // cmp r0, #0
    // ble _02226432
    // add r6, r4, #0
    // add r6, #0xa8
    // add r0, r6, #0
    // bl ov07_022222B4
    // ldr r0, [r4, #0x20]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02226424
    // ldr r0, [r4, #0x24]
    // cmp r0, #0xff
    // beq _0222643C
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // mov r0, #0xa8
    // ldrsh r3, [r4, r0]
    // ldr r1, [r4, #0x38]
    // mov r2, #0xac
    // add r0, r3, #0
    // ldr r3, [r1, #0x20]
    // mul r0, r2
    // ldr r3, [r3]
    // ldr r3, [r3, #4]
    // add r0, r0, r3
    // str r0, [r1, #0x28]
    // mov r1, #0xaa
    // ldrsh r1, [r4, r1]
    // ldr r0, [r4, #0x38]
    // mul r2, r1
    // ldr r1, [r0, #0x20]
    // ldr r1, [r1]
    // ldr r1, [r1, #8]
    // add r1, r2, r1
    // str r1, [r0, #0x2c]
    // ldr r0, [r4, #0x40]
    // ldr r1, _02226478 ; =ov07_022260F8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02226474: .word 0xFFFF0000
    // _02226478: .word ov07_022260F8
    // TODO: decompile
}



void ov07_0222647C(void) {
    ov07_022260DC(*((u32*)(r1 + 0x38)));
    // add r0, #0xa8
    // add r1, #0xcc
    ov07_02222384(r5, r5);
    sub_020154C4(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)));
    ov07_0221C448(*((u32*)(r5 + 0x40)), r6);
    ov07_02232508(r5);
    // ldrsh r1, [r5, r1]
    // mul r3, r2
    // add r1, r3, r1
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x28)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 4));
    // ldrsh r1, [r5, r1]
    // mul r2, r1
    // add r1, r2, r1
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x2c)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 8));
}



void ov07_022264E0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // mov r1, #0x41
    // lsl r1, r1, #2
    // add r6, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x3c
    // bl ov07_02231FE4
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov07_0222600C
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_02222004
    // add r5, r0, #0
    // ldr r1, [r4, #0x14]
    // add r0, r6, #0
    // add r2, sp, #0x20
    // bl ov07_02231B90
    // ldr r1, [r4, #0x18]
    // add r0, r6, #0
    // add r2, sp, #0x14
    // bl ov07_02231B90
    // ldr r0, [sp, #0x20]
    // mov r1, #0xac
    // bl _s32_div_f
    // add r6, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0xac
    // bl _s32_div_f
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // mov r1, #0xac
    // bl _s32_div_f
    // add r7, r0, #0
    // ldr r0, [sp, #0x18]
    // mov r1, #0xac
    // bl _s32_div_f
    // lsl r1, r7, #0x10
    // asr r1, r1, #0x10
    // str r1, [sp]
    // mov r1, #0xe
    // ldrsh r1, [r4, r1]
    // mov r3, #0xc
    // add r2, r1, #0
    // mul r2, r5
    // add r0, r0, r2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldrh r0, [r4, #6]
    // lsl r2, r6, #0x10
    // add r1, r4, #0
    // str r0, [sp, #8]
    // ldr r0, [r4, #8]
    // add r1, #0xcc
    // lsl r0, r0, #0xc
    // neg r0, r0
    // str r0, [sp, #0xc]
    // ldrsh r6, [r4, r3]
    // add r0, r4, #0
    // add r0, #0xa8
    // add r3, r6, #0
    // ldr r6, [sp, #0x10]
    // mul r3, r5
    // add r3, r6, r3
    // lsl r3, r3, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // bl ov07_02222338
    // cmp r5, #0
    // ldr r2, _02226618 ; =0x00005C71
    // ble _022265A6
    // ldr r1, _0222661C ; =0x00000E38
    // add r0, r4, #0
    // add r0, #0xf0
    // mul r1, r5
    // mul r2, r5
    // mov r3, #0xa
    // bl ov07_022223F0
    // b _022265B6
    // ldr r1, _02226620 ; =0x00003FFF
    // add r0, r4, #0
    // add r0, #0xf0
    // mul r1, r5
    // mul r2, r5
    // mov r3, #0xa
    // bl ov07_022223F0
    // ldr r0, [r4, #0x20]
    // mov r5, #0
    // cmp r0, #0
    // ble _022265D6
    // add r6, r4, #0
    // add r7, r4, #0
    // add r6, #0xa8
    // add r7, #0xcc
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov07_02222384
    // ldr r0, [r4, #0x20]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _022265C6
    // ldr r0, [r4, #0x24]
    // cmp r0, #0xff
    // beq _022265E0
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // mov r0, #0xa8
    // ldrsh r3, [r4, r0]
    // ldr r1, [r4, #0x38]
    // mov r2, #0xac
    // add r0, r3, #0
    // ldr r3, [r1, #0x20]
    // mul r0, r2
    // ldr r3, [r3]
    // ldr r3, [r3, #4]
    // add r0, r0, r3
    // str r0, [r1, #0x28]
    // mov r1, #0xaa
    // ldrsh r1, [r4, r1]
    // ldr r0, [r4, #0x38]
    // mul r2, r1
    // ldr r1, [r0, #0x20]
    // ldr r1, [r1]
    // ldr r1, [r1, #8]
    // add r1, r2, r1
    // str r1, [r0, #0x2c]
    // ldr r0, [r4, #0x40]
    // ldr r1, _02226624 ; =ov07_0222647C
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02226618: .word 0x00005C71
    // _0222661C: .word 0x00000E38
    // _02226620: .word 0x00003FFF
    // _02226624: .word ov07_0222647C
    // TODO: decompile
}



void ov07_02226628(void) {
    ov07_022260DC(*((u32*)(r1 + 0x38)));
    // add r0, #0x58
    ov07_02222180(r5);
    sub_020154C4(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)));
    ov07_0221C448(*((u32*)(r5 + 0x40)), r6);
    Heap_Free(r5);
    // add r0, #0x8c
    // ldrsh r0, [r5, r0]
    // mul r1, r3
    // add r1, r2, r1
    // add r2, #0x88
    // ldrsh r2, [r5, r2]
    // mul r3, r2
    // add r3, r4, r3
    // add r2, r3, r2
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x28)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 4));
    // add r0, r1, r0
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x2c)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 8));
}



void ov07_02226698(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0x94
    // add r4, r0, #0
    // bl ov07_022324D8
    // add r5, r0, #0
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x3c
    // bl ov07_02231FE4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r5]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // str r0, [r5, #4]
    // add r0, r4, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r5, #0xc]
    // add r0, r4, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r5, #8]
    // add r0, r4, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // str r0, [r5, #0x10]
    // add r0, r4, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r5, #0x14]
    // add r0, r4, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // str r0, [r5, #0x18]
    // add r0, r4, #0
    // mov r1, #7
    // bl ov07_0221C4A8
    // str r0, [r5, #0x1c]
    // add r0, r4, #0
    // mov r1, #8
    // bl ov07_0221C4A8
    // str r0, [r5, #0x20]
    // cmp r0, #0
    // bne _02226716
    // add r0, r4, #0
    // bl ov07_0221C468
    // b _0222671C
    // add r0, r4, #0
    // bl ov07_0221C470
    // str r0, [r5, #0x24]
    // add r2, r5, #0
    // ldr r1, [r5, #0x24]
    // add r0, r4, #0
    // add r2, #0x88
    // bl ov07_02231B90
    // ldr r1, [r5]
    // add r0, r4, #0
    // bl ov07_0221C494
    // str r0, [r5, #0x38]
    // add r0, r4, #0
    // mov r1, #9
    // bl ov07_0221C4A8
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov07_0221C488
    // str r0, [r5, #0x34]
    // ldr r1, [r5, #4]
    // ldr r0, _022267FC ; =0x0000FFFF
    // mul r0, r1
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // add r4, r0, #0
    // ldr r1, [r5, #0xc]
    // ldr r0, _022267FC ; =0x0000FFFF
    // mul r0, r1
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // add r6, r0, #0
    // ldr r1, [r5, #8]
    // ldr r0, _022267FC ; =0x0000FFFF
    // mul r0, r1
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // add r7, r0, #0
    // ldr r1, [r5, #0x10]
    // ldr r0, _022267FC ; =0x0000FFFF
    // mul r0, r1
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [r5, #0x14]
    // lsl r1, r4, #0x10
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x18]
    // lsl r2, r6, #0x10
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x1c]
    // lsl r3, r7, #0x10
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r0, #0x58
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x10
    // bl ov07_022220FC
    // add r0, r5, #0
    // add r0, #0x58
    // bl ov07_02222180
    // add r0, r5, #0
    // add r0, #0x8c
    // ldr r2, [r0]
    // mov r0, #0x5a
    // ldrsh r0, [r5, r0]
    // mov r3, #0x58
    // mov r4, #0xac
    // add r1, r0, #0
    // add r0, r5, #0
    // mul r1, r4
    // ldrsh r3, [r5, r3]
    // add r0, #0x88
    // add r2, r2, r1
    // ldr r1, [r5, #0x38]
    // ldr r0, [r0]
    // mul r4, r3
    // add r3, r0, r4
    // ldr r0, [r1, #0x20]
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // add r0, r3, r0
    // str r0, [r1, #0x28]
    // ldr r1, [r5, #0x38]
    // ldr r0, [r1, #0x20]
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // add r0, r2, r0
    // str r0, [r1, #0x2c]
    // ldr r0, [r5, #0x40]
    // ldr r1, _02226800 ; =ov07_02226628
    // add r2, r5, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _022267FC: .word 0x0000FFFF
    // _02226800: .word ov07_02226628
    // TODO: decompile
}



void ov07_02226804(void) {
    ManagedSprite_IsAnimated(*((u32*)(r1 + 0x1c)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x1c)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
    ManagedSprite_TickFrame();
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
}



void ov07_02226838(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x20
    // add r5, r0, #0
    // add r4, r3, #0
    // bl ov07_022324D8
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // str r4, [r7, #0x1c]
    // bl ov07_0221C4A8
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // lsl r0, r0, #0x10
    // asr r2, r0, #0x10
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r7, #4]
    // ldr r1, _0222687C ; =ov07_02226804
    // add r2, r7, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222687C: .word ov07_02226804
    // TODO: decompile
}



void ov07_02226880(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _02226892
    // cmp r0, #1
    // beq _02226910
    // b _022269A8
    // ldr r1, [r4, #0x34]
    // ldr r0, _022269CC ; =ov07_02236670
    // lsl r2, r1, #1
    // ldrsh r6, [r0, r2]
    // add r0, r1, #1
    // str r0, [r4, #0x34]
    // cmp r6, #0xff
    // beq _022268E2
    // cmp r6, #0
    // bne _022268D6
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_GetPriority
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FAE8
    // cmp r5, r0
    // ldr r0, [r4, #4]
    // bne _022268CA
    // mov r1, #2
    // bl ov07_0221FB04
    // add r1, r0, #0
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetPriority
    // b _022268D6
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // add r1, r6, #0
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // b _022269BE
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // add r0, r4, #0
    // ldr r2, _022269D0 ; =0x00000E38
    // add r0, #0x20
    // mov r1, #0
    // mov r3, #4
    // bl ov07_022223F0
    // mov r1, #7
    // ldr r0, [r4, #0x1c]
    // mvn r1, r1
    // mov r2, #0x10
    // bl ManagedSprite_SetAffineTranslation
    // mov r0, #0
    // str r0, [r4, #0x34]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _022269BE
    // add r0, r4, #0
    // add r0, #0x20
    // bl ov07_02222440
    // cmp r0, #1
    // bne _0222692A
    // ldr r1, [r4, #0x20]
    // ldr r0, [r4, #0x1c]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ManagedSprite_SetAffineZRotation
    // b _022269BE
    // ldr r0, [r4, #0x34]
    // cmp r0, #5
    // ble _02226938
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _022269BE
    // add r0, r0, #1
    // str r0, [r4, #0x34]
    // cmp r0, #5
    // bhi _022269BE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222694C: ; jump table
    // add r0, r4, #0
    // ldr r1, _022269D0 ; =0x00000E38
    // ldr r2, _022269D4 ; =0xFFFFF1C8
    // add r0, #0x20
    // mov r3, #4
    // bl ov07_022223F0
    // b _022269BE
    // add r0, r4, #0
    // ldr r1, _022269D4 ; =0xFFFFF1C8
    // ldr r2, _022269D0 ; =0x00000E38
    // add r0, #0x20
    // mov r3, #4
    // bl ov07_022223F0
    // b _022269BE
    // add r0, r4, #0
    // ldr r1, _022269D0 ; =0x00000E38
    // ldr r2, _022269D4 ; =0xFFFFF1C8
    // add r0, #0x20
    // mov r3, #4
    // bl ov07_022223F0
    // b _022269BE
    // add r0, r4, #0
    // ldr r1, _022269D4 ; =0xFFFFF1C8
    // ldr r2, _022269D0 ; =0x00000E38
    // add r0, #0x20
    // mov r3, #4
    // bl ov07_022223F0
    // b _022269BE
    // add r0, r4, #0
    // ldr r1, _022269D0 ; =0x00000E38
    // add r0, #0x20
    // mov r2, #0
    // mov r3, #2
    // bl ov07_022223F0
    // b _022269BE
    // ldr r0, [r4, #0x1c]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x10]
    // bl SpriteSystem_DrawSprites
    // pop {r4, r5, r6, pc}
    // _022269CC: .word ov07_02236670
    // _022269D0: .word 0x00000E38
    // _022269D4: .word 0xFFFFF1C8
    // TODO: decompile
}



void ov07_022269D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x38
    // add r5, r0, #0
    // add r6, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // str r6, [r4, #0x1c]
    // mov r0, #0
    // str r0, [r4, #0x34]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #1
    // bl ov07_02221F80
    // add r2, r0, #0
    // ldr r0, [r4, #0x1c]
    // add r1, r6, #0
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // ldr r0, [r4, #0x1c]
    // bne _02226A38
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // b _02226A3E
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #0xc
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #4]
    // ldr r1, _02226A64 ; =ov07_02226880
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02226A64: .word ov07_02226880
    // TODO: decompile
}



void ov07_02226A68(void) {
    ManagedSprite_IsAnimated(*((u32*)(r1 + 0x1c)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x1c)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
    ManagedSprite_TickFrame();
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
}



void ov07_02226A9C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x38
    // add r5, r0, #0
    // add r6, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // str r6, [r4, #0x1c]
    // bl ov07_0221C470
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #1
    // bl ov07_02221F80
    // add r0, r5, #0
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02226AE4
    // mov r6, #0x48
    // mov r2, #0x20
    // mov r5, #0
    // b _02226AFA
    // ldr r0, [r4, #4]
    // add r1, r7, #0
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _02226AF6
    // mov r2, #0x7e
    // mov r5, #1
    // b _02226AFA
    // mov r2, #0x20
    // mov r5, #0
    // ldr r0, [r4, #0x1c]
    // add r1, r6, #0
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x1c]
    // add r1, r5, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // mov r1, #2
    // bl ov07_0221FB04
    // add r1, r0, #0
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #4]
    // ldr r1, _02226B28 ; =ov07_02226A68
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02226B28: .word ov07_02226A68
    // TODO: decompile
}



void ov07_02226B2C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #3
    // bhi _02226C1E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02226B46: ; jump table
    // mov r0, #0xa0
    // str r0, [sp]
    // mov r3, #0x70
    // mov r0, #1
    // str r3, [sp, #4]
    // mov r2, #0x15
    // str r2, [sp, #8]
    // lsl r0, r0, #0x12
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x24
    // add r1, #0x48
    // sub r2, #0x33
    // bl ov07_02222338
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02226C36
    // add r0, r4, #0
    // ldr r2, [r4, #0x1c]
    // add r0, #0x24
    // add r1, #0x48
    // bl ov07_022223CC
    // cmp r0, #0
    // bne _02226C36
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02226C36
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_IsAnimated
    // cmp r0, #0
    // bne _02226C36
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // add r0, r4, #0
    // add r2, r4, #0
    // mov r1, #0x10
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x20
    // add r2, #0x21
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4, #4]
    // bl ov07_02231E08
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02226C36
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02226BE0
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r0, #0x10
    // bhs _02226BF8
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02226C48 ; =0x04000052
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02226C36
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02226C36
    // ldr r0, [r4, #0x1c]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x10]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02226C48: .word 0x04000052
    // TODO: decompile
}



void ov07_02226C4C(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x6c
    // add r6, r0, #0
    // add r5, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // mov r1, #0x1d
    // str r5, [r4, #0x1c]
    // add r0, r5, #0
    // mvn r1, r1
    // mov r2, #0xa0
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #4]
    // mov r1, #2
    // bl ov07_0221FB04
    // add r1, r0, #0
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #4]
    // ldr r1, _02226C8C ; =ov07_02226B2C
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // _02226C8C: .word ov07_02226B2C
    // TODO: decompile
}



void ov07_02226C90(void) {
    ov07_0221C4A8(0);
    ov07_02222FC4(r4);
    ov07_02222FF4(r4);
}



void ov07_02226CB0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0x18
    // bls _02226CBE
    // b _02226EB2
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02226CCA: ; jump table
    // ldr r0, [r4, #0x34]
    // ldr r1, _02226EF8 ; =0xFFFF1FFF
    // cmp r0, #0
    // bne _02226D56
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // add r5, r0, #0
    // and r2, r1
    // lsr r1, r0, #0xd
    // orr r1, r2
    // str r1, [r0]
    // add r5, #0x48
    // ldrh r3, [r5]
    // mov r2, #0x3f
    // mov r1, #0xf
    // bic r3, r2
    // orr r1, r3
    // mov r3, #0x20
    // orr r1, r3
    // strh r1, [r5]
    // add r5, r0, #0
    // add r5, #0x4a
    // ldrh r6, [r5]
    // mov r1, #0x1f
    // bic r6, r2
    // orr r1, r6
    // orr r1, r3
    // strh r1, [r5]
    // add r1, r0, #0
    // mov r2, #0x80
    // add r1, #0x40
    // strh r2, [r1]
    // ldr r1, _02226EFC ; =0x0000A0C0
    // add r0, #0x44
    // strh r1, [r0]
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r1, #0x23
    // add sp, #4
    // str r1, [r4, #0x3c]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // add r5, r0, #0
    // and r2, r1
    // lsr r1, r0, #0xd
    // orr r1, r2
    // str r1, [r0]
    // add r5, #0x48
    // ldrh r3, [r5]
    // mov r2, #0x3f
    // mov r1, #0xf
    // bic r3, r2
    // orr r1, r3
    // mov r3, #0x20
    // orr r1, r3
    // strh r1, [r5]
    // add r5, r0, #0
    // add r5, #0x4a
    // ldrh r6, [r5]
    // mov r1, #0x1f
    // bic r6, r2
    // orr r1, r6
    // orr r1, r3
    // strh r1, [r5]
    // add r1, r0, #0
    // lsl r2, r3, #0xa
    // add r1, #0x40
    // strh r2, [r1]
    // ldr r1, _02226F00 ; =0x000056C0
    // add r0, #0x44
    // strh r1, [r0]
    // bl LCRandom
    // mov r1, #5
    // bl _s32_div_f
    // add r1, #0x23
    // add sp, #4
    // str r1, [r4, #0x3c]
    // pop {r3, r4, r5, r6, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // beq _02226DD8
    // ldr r0, [r4, #0x38]
    // cmp r0, #0
    // bne _02226DD8
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #0x38]
    // cmp r0, #1
    // bne _02226DDA
    // b _02226EF4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // beq _02226EF4
    // ldr r0, [r4, #0x38]
    // cmp r0, #1
    // bne _02226EF4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #0x38]
    // cmp r0, #2
    // beq _02226EF4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // beq _02226EF4
    // ldr r0, [r4, #0x38]
    // cmp r0, #2
    // bne _02226EF4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #0x38]
    // cmp r0, #3
    // beq _02226EF4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // beq _02226EF4
    // ldr r0, [r4, #0x38]
    // cmp r0, #3
    // bne _02226EF4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #8
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #0x38]
    // cmp r0, #4
    // beq _02226EF4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #8
    // bl ManagedSprite_OffsetPositionXY
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r1, [r4, #0x3c]
    // cmp r0, r1
    // ble _02226EF4
    // ldr r0, [r4, #0x38]
    // cmp r0, #0x14
    // ldr r0, [r4, #0x1c]
    // bge _02226EEE
    // mov r1, #0
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // add r1, sp, #0
    // ldr r0, [r4, #0x1c]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // add r0, sp, #0
    // mov r1, #0
    // ldrsh r0, [r0, r1]
    // cmp r0, #0x82
    // ble _02226EE4
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x38]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0x38]
    // pop {r3, r4, r5, r6, pc}
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02226EF8: .word 0xFFFF1FFF
    // _02226EFC: .word 0x0000A0C0
    // _02226F00: .word 0x000056C0
    // TODO: decompile
}



void ov07_02226F04(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x30]
    // cmp r0, #0
    // beq _02226F16
    // add r0, r4, #0
    // bl ov07_02226CB0
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // ldrb r1, [r4]
    // ldr r0, [r4, #0x24]
    // cmp r1, r0
    // blt _02226F6E
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02226F7C ; =0xFFFF1FFF
    // and r1, r2
    // add r2, r0, #0
    // str r1, [r0]
    // add r2, #0x48
    // ldrh r3, [r2]
    // mov r1, #0x3f
    // bic r3, r1
    // strh r3, [r2]
    // add r2, r0, #0
    // add r2, #0x4a
    // ldrh r3, [r2]
    // bic r3, r1
    // strh r3, [r2]
    // add r2, r0, #0
    // mov r1, #0
    // add r2, #0x40
    // strh r1, [r2]
    // add r0, #0x44
    // strh r1, [r0]
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0xc]
    // bl SpriteSystem_DrawSprites
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0xc]
    // bl SpriteSystem_DrawSprites
    // pop {r3, r4, r5, pc}
    // _02226F7C: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov07_02226F80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x40
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #0x20]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // str r0, [r4, #0x24]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r4, #0x28]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r4, #0x2c]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4, #0x30]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov07_0221C4A8
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x20]
    // bl ov07_0221C4E8
    // str r0, [r4, #0x1c]
    // mov r0, #0
    // str r0, [r4, #0x38]
    // ldr r1, [r4, #0x28]
    // cmp r1, #0xff
    // beq _02226FF2
    // add r0, r5, #0
    // bl ov07_0221FB04
    // add r1, r0, #0
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetPriority
    // ldr r1, [r4, #0x2c]
    // cmp r1, #0xff
    // beq _02226FFE
    // ldr r0, [r4, #0x1c]
    // bl ManagedSprite_SetDrawPriority
    // add r0, r5, #0
    // bl ov07_0221FAB0
    // cmp r0, #1
    // beq _02227030
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // cmp r0, #2
    // beq _02227020
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // cmp r0, #3
    // bne _02227030
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // add r7, r0, #0
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221C470
    // str r0, [sp]
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0xff
    // beq _0222707E
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02231924
    // add r6, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov07_02231924
    // cmp r7, #3
    // bhi _0222707E
    // add r1, r7, r7
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02227072: ; jump table
    // cmp r6, #5
    // bls _02227080
    // b _0222718A
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222708C: ; jump table
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // cmp r6, #5
    // bhi _0222718A
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022270D0: ; jump table
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // cmp r0, #5
    // bhi _0222718A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02227114: ; jump table
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // cmp r0, #5
    // bhi _0222718A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02227158: ; jump table
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // b _0222718A
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #4]
    // ldr r1, _02227198 ; =ov07_02226F04
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02227198: .word ov07_02226F04
    // TODO: decompile
}



void ov07_0222719C(void) {
    ov07_0221C448(*((u32*)(r1 + 4)), r0, r0);
    Heap_Free(r6);
    *((u32*)(r6 + 0x2c)) = (r0 - 1);
    ManagedSprite_TickFrame(*((u32*)(r6 + 0x1c)));
    SpriteSystem_DrawSprites(*((u32*)(r6 + 0xc)));
}



void ov07_022271DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x34
    // add r4, r0, #0
    // bl ov07_022324D8
    // add r7, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov07_02231FE4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // bne _02227200
    // mov r0, #3
    // b _02227208
    // add r0, r4, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // ldr r5, _02227240 ; =ov07_022378B0
    // str r0, [r7, #0x2c]
    // mov r6, #0
    // add r4, r7, #0
    // ldr r0, [r7, #4]
    // add r1, r6, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _02227224
    // ldr r1, [r5]
    // bl ManagedSprite_SetDrawPriority
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #4
    // blt _02227210
    // ldr r0, [r7, #4]
    // ldr r1, _02227244 ; =ov07_0222719C
    // add r2, r7, #0
    // bl ov07_0221C410
    // add r1, r7, #0
    // bl ov07_0222719C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02227240: .word ov07_022378B0
    // _02227244: .word ov07_0222719C
    // TODO: decompile
}



void ov07_02227248(void) {
    // str r0, [r5]
    ov07_0221FAF8(*((u32*)(r1 + 0xc)), 2);
    ov07_02222D88(0, 0);
    ov07_0221BFD0(*((u32*)(r5 + 0xc)));
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r1, [sp, #8]
    // str r6, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xb5
    ov07_02222CCC(0, 0xa0, 0xa0, (2 << 0x10));
    *((u32*)(r5 + 0x24)) = r0;
    *((u8*)(r5 + 8)) = (*((u8*)(r5 + 8)) + 1);
    // str r1, [r5]
    ov07_02222D3C(*((u32*)(r5 + 0x24)), (*((u32*)r5) + 1));
    *((u8*)(r5 + 8)) = (*((u8*)(r5 + 8)) + 1);
    ov07_0221C448(*((u32*)(r5 + 0xc)), r4);
    Heap_Free(r5);
}



void ov07_022272D0(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x28
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #8
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // str r0, [r4, #4]
    // ldr r0, [r4, #0xc]
    // ldr r1, _022272FC ; =ov07_02227248
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // _022272FC: .word ov07_02227248
    // TODO: decompile
}



void ov07_02227300(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // str r0, [sp, #0xc]
    // ldrb r0, [r4]
    // cmp r0, #3
    // bls _02227310
    // b _02227482
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222731C: ; jump table
    // ldrb r0, [r4, #4]
    // mov r7, #0
    // add r1, r7, #0
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // ldr r0, [r4, #8]
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _0222739A
    // ldr r6, _022274F0 ; =ov07_022366D2
    // add r5, r4, #0
    // add r1, sp, #0x10
    // ldr r0, [r5, #0x14]
    // add r1, #2
    // add r2, sp, #0x10
    // bl ManagedSprite_GetPositionXY
    // ldrb r1, [r4, #4]
    // ldrb r0, [r6]
    // cmp r1, r0
    // blo _02227380
    // add r0, r4, r7
    // ldrb r1, [r0, #1]
    // add r1, r1, #1
    // strb r1, [r0, #1]
    // ldrb r2, [r0, #1]
    // ldrb r1, [r6, #1]
    // cmp r2, r1
    // blo _02227388
    // mov r1, #0
    // strb r1, [r0, #1]
    // ldr r0, [r5, #0x14]
    // bl ManagedSprite_GetDrawFlag
    // cmp r0, #1
    // ldr r0, [r5, #0x14]
    // bne _02227378
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _02227388
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // b _02227388
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r5, r5, #4
    // add r6, r6, #2
    // add r7, r7, #1
    // bl ov07_0221C4A8
    // cmp r7, r0
    // blt _0222733C
    // ldrb r0, [r4, #4]
    // cmp r0, #0x2d
    // blo _02227438
    // mov r5, #0
    // ldr r0, [r4, #8]
    // add r1, r5, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _022273CA
    // add r6, r4, #0
    // mov r7, #1
    // ldr r0, [r6, #0x14]
    // add r1, r7, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r6, r6, #4
    // add r5, r5, #1
    // bl ov07_0221C4A8
    // cmp r5, r0
    // blt _022273B2
    // mov r0, #0
    // strb r0, [r4, #4]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _022274BC
    // mov r1, #0x64
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x20
    // mov r2, #0x3c
    // add r3, r1, #0
    // bl ov07_02222590
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _022274BC
    // add r0, r4, #0
    // add r0, #0x20
    // bl ov07_0222260C
    // cmp r0, #1
    // bne _0222743A
    // mov r5, #0
    // ldr r0, [r4, #8]
    // add r1, r5, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _022274BC
    // add r7, r4, #0
    // add r6, r4, #0
    // add r7, #0x20
    // add r0, r7, #0
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // bl ov07_02222644
    // ldr r0, [r6, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // bl ManagedSprite_SetAffineScale
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r6, r6, #4
    // add r5, r5, #1
    // bl ov07_0221C4A8
    // cmp r5, r0
    // blt _02227414
    // b _022274BC
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // ldrb r0, [r4, #4]
    // cmp r0, #0x2d
    // blo _022274BC
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _022274BC
    // ldrb r0, [r4, #5]
    // cmp r0, #0
    // beq _02227458
    // sub r0, r0, #1
    // strb r0, [r4, #5]
    // ldrb r0, [r4, #6]
    // cmp r0, #0xf
    // bhs _02227462
    // add r0, r0, #1
    // strb r0, [r4, #6]
    // ldrb r0, [r4, #5]
    // cmp r0, #0
    // bne _02227474
    // ldrb r0, [r4, #6]
    // cmp r0, #0xf
    // bne _02227474
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // ldrb r0, [r4, #6]
    // ldrb r1, [r4, #5]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _022274F4 ; =0x04000052
    // strh r1, [r0]
    // b _022274BC
    // mov r5, #0
    // ldr r0, [r4, #8]
    // add r1, r5, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _022274AA
    // add r6, r4, #0
    // add r7, r5, #0
    // ldr r0, [r6, #0x14]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #8]
    // add r1, r7, #0
    // add r6, r6, #4
    // add r5, r5, #1
    // bl ov07_0221C4A8
    // cmp r5, r0
    // blt _02227494
    // ldr r0, [r4, #8]
    // ldr r1, [sp, #0xc]
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // mov r5, #0
    // ldr r0, [r4, #8]
    // add r1, r5, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _022274E6
    // add r6, r4, #0
    // add r7, r5, #0
    // ldr r0, [r6, #0x14]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldr r0, [r4, #8]
    // add r1, r7, #0
    // add r6, r6, #4
    // add r5, r5, #1
    // bl ov07_0221C4A8
    // cmp r5, r0
    // blt _022274CE
    // ldr r0, [r4, #0x10]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _022274F0: .word ov07_022366D2
    // _022274F4: .word 0x04000052
    // TODO: decompile
}



void ov07_022274F8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // str r0, [sp]
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov07_0221BFD0
    // mov r1, #0x44
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02227516
    // bl GF_AssertFail
    // mov r0, #0
    // strb r0, [r4, #4]
    // strb r0, [r4]
    // str r5, [r4, #0xc]
    // ldr r0, [sp]
    // str r6, [r4, #0x10]
    // str r0, [r4, #8]
    // ldr r1, [sp]
    // add r0, sp, #8
    // bl ov07_0221F9E8
    // mov r1, #0
    // mvn r1, r1
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // bl ov07_02231E08
    // mov r0, #0xf
    // strb r0, [r4, #5]
    // mov r0, #0
    // strb r0, [r4, #6]
    // ldrb r0, [r4, #6]
    // ldrb r1, [r4, #5]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02227628 ; =0x04000052
    // strh r1, [r0]
    // ldr r0, [sp]
    // str r7, [r4, #0x14]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _02227572
    // ldr r0, [sp]
    // bl ov07_0221BFC0
    // add r1, r0, #0
    // mov r0, #0
    // add r2, sp, #4
    // bl ov07_02231A20
    // b _02227582
    // ldr r0, [sp]
    // bl ov07_0221BFC0
    // add r1, r0, #0
    // mov r0, #1
    // add r2, sp, #4
    // bl ov07_02231A20
    // ldr r0, [r4, #8]
    // mov r1, #0
    // mov r6, #1
    // bl ov07_0221C4A8
    // cmp r0, #1
    // ble _022275BC
    // add r5, r4, #4
    // add r7, sp, #4
    // ldr r0, [r4, #0xc]
    // ldr r1, [r4, #0x10]
    // add r2, sp, #8
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x14]
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r5, r5, #4
    // add r6, r6, #1
    // bl ov07_0221C4A8
    // cmp r6, r0
    // blt _02227594
    // add r3, sp, #4
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldr r0, [r4, #0x14]
    // bl ManagedSprite_SetPositionXY
    // mov r6, #0
    // ldr r0, [r4, #8]
    // add r1, r6, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _02227616
    // add r5, r4, #0
    // add r7, r6, #0
    // add r1, r4, r6
    // mov r0, #0
    // strb r0, [r1, #1]
    // ldr r0, [r5, #0x14]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // mov r2, #0x20
    // sub r2, r2, r7
    // lsl r2, r2, #0x10
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // asr r2, r2, #0x10
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r5, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #8]
    // mov r1, #0
    // add r5, r5, #4
    // add r7, r7, #4
    // add r6, r6, #1
    // bl ov07_0221C4A8
    // cmp r6, r0
    // blt _022275DE
    // mov r3, #1
    // ldr r0, [sp]
    // ldr r1, _0222762C ; =ov07_02227300
    // add r2, r4, #0
    // lsl r3, r3, #0xc
    // bl ov07_0221C3F4
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _02227628: .word 0x04000052
    // _0222762C: .word ov07_02227300
    // TODO: decompile
}



void ov07_02227630(void) {
    // ldrb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222764C: ; jump table
    // add r0, #0x14
    ov07_02222558(r1, r0);
    // add r0, #0x38
    ov07_022227D8(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0x16);
    // ldrsh r2, [r4, r2]
    Pokepic_AddAttr(*((u32*)(r4 + 0x10)), 0, 0x38);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x28)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x10)), 0, 0xa, 0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 0x10)));
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x10)), 0xa, 0, 0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 0x10)));
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov07_0221C4A8(*((u32*)(r4 + 0xc)), 0);
    ov07_0221C4A8(*((u32*)(r4 + 0xc)), 1);
    ov07_0221C4A8(*((u32*)(r4 + 0xc)), 3);
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222508(r4, (r5 << 0x10), 0x64, (r6 << 0x10));
    // ldrb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x14
    ov07_02222558(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0x16);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x28)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x14
    ov07_02222558(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0x16);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x28)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2, r0);
    // add r2, #0xf4
    Pokepic_SetAttr(0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0xd);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 2);
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 0xc)), r2);
    Heap_Free(r4);
}



void ov07_02227824(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x5c
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4, #8]
    // strb r0, [r4]
    // str r5, [r4, #0xc]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #2]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FAA0
    // str r0, [r4, #4]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x64
    // lsl r3, r6, #0x10
    // add r0, #0x14
    // add r2, r1, #0
    // asr r3, r3, #0x10
    // bl ov07_02222508
    // mov r0, #0xa
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0x38
    // mov r1, #2
    // add r3, r2, #0
    // bl ov07_022227A8
    // ldr r0, [r4, #0xc]
    // ldr r1, _022278AC ; =ov07_02227630
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _022278AC: .word ov07_02227630
    // TODO: decompile
}



void ov07_022278B0(void) {
    // ldrb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022278CC: ; jump table
    // add r0, #0x10
    ov07_0222260C(r1, r0);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 2, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r4, 0x96, 0x32, 0x32);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 2, r0);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r4, 0x32, 0x64, 0x96);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 2, r0);
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r4, 0x64, 0x96, 0x64);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 2, r0);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r4, 0x96, 0x64, 0x96);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // ldrsh r0, [r4, r0]
    ov07_02222674(2, *((u32*)(r4 + 4)), *((u32*)(r4 + 0x24)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 2, r0);
    // add r2, #0xf4
    Pokepic_SetAttr(0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0xd);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 2);
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 8)), r2);
    Heap_Free(r4);
}



void ov07_02227AEC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x58
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // str r5, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #2]
    // ldr r0, [r4, #8]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FAA0
    // str r0, [r4, #4]
    // mov r0, #0x32
    // str r0, [sp]
    // mov r1, #0x64
    // str r1, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x10
    // mov r2, #0x96
    // add r3, r1, #0
    // bl ov07_02222590
    // ldr r0, [r4, #8]
    // ldr r1, _02227B54 ; =ov07_022278B0
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02227B54: .word ov07_022278B0
    // TODO: decompile
}



void ov07_02227B58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r5, #1]
    // cmp r0, #0
    // beq _02227B72
    // cmp r0, #1
    // beq _02227C58
    // cmp r0, #2
    // bne _02227B70
    // b _02227CBA
    // b _02227CEE
    // ldrb r3, [r5]
    // mov r0, #0x1f
    // lsr r2, r3, #0x1f
    // lsl r1, r3, #0x1f
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // lsl r0, r0, #1
    // add r1, r3, #1
    // str r0, [sp, #0xc]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // mov r0, #6
    // mul r0, r1
    // ldr r1, _02227D0C ; =ov07_02236736
    // ldrsh r2, [r1, r0]
    // ldr r1, [sp, #8]
    // sub r7, r2, r1
    // mov r1, #0xa
    // ldrsh r3, [r5, r1]
    // ldr r1, _02227D10 ; =ov07_02236734
    // ldrsh r6, [r1, r0]
    // mov r1, #8
    // ldrsh r2, [r5, r1]
    // ldr r1, _02227D14 ; =ov07_02236732
    // ldrsh r4, [r1, r0]
    // lsl r0, r7, #0x10
    // str r3, [sp]
    // add r1, r2, r4
    // lsr r0, r0, #0x10
    // add r2, r2, r6
    // str r0, [sp, #4]
    // add r0, r5, #0
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // add r0, #0x28
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov07_02222268
    // mov r0, #0xa
    // ldrsh r3, [r5, r0]
    // mov r0, #8
    // ldrsh r2, [r5, r0]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // sub r1, r2, r4
    // str r3, [sp]
    // sub r2, r2, r6
    // str r0, [sp, #4]
    // add r0, r5, #0
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // add r0, #0x4c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov07_02222268
    // ldr r0, [sp, #0xc]
    // add r1, r0, #1
    // mov r0, #6
    // mul r0, r1
    // ldr r1, _02227D0C ; =ov07_02236736
    // ldrsh r2, [r1, r0]
    // ldr r1, [sp, #8]
    // sub r7, r2, r1
    // mov r1, #0xa
    // ldrsh r3, [r5, r1]
    // ldr r1, _02227D10 ; =ov07_02236734
    // ldrsh r6, [r1, r0]
    // mov r1, #8
    // ldrsh r2, [r5, r1]
    // ldr r1, _02227D14 ; =ov07_02236732
    // ldrsh r4, [r1, r0]
    // lsl r0, r7, #0x10
    // str r3, [sp]
    // add r1, r2, r4
    // lsr r0, r0, #0x10
    // add r2, r2, r6
    // str r0, [sp, #4]
    // add r0, r5, #0
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // add r0, #0x70
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov07_02222268
    // mov r0, #0xa
    // ldrsh r3, [r5, r0]
    // mov r0, #8
    // ldrsh r2, [r5, r0]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // sub r1, r2, r4
    // str r3, [sp]
    // sub r2, r2, r6
    // str r0, [sp, #4]
    // add r0, r5, #0
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // add r0, #0x94
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov07_02222268
    // ldrb r0, [r5]
    // add r0, r0, #1
    // strb r0, [r5]
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // mov r0, #0
    // add r7, r5, #0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r7, #0x28
    // add r6, r5, #0
    // add r4, r5, #0
    // add r0, r7, #0
    // bl ov07_022222B4
    // cmp r0, #0
    // bne _02227C7C
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // b _02227C8A
    // mov r1, #0x28
    // mov r2, #0x2a
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [r4, #0x18]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x18]
    // bl ManagedSprite_TickFrame
    // ldr r0, [sp, #0x14]
    // add r7, #0x24
    // add r0, r0, #1
    // add r6, #0x24
    // add r4, r4, #4
    // str r0, [sp, #0x14]
    // cmp r0, #4
    // blt _02227C66
    // ldr r0, [sp, #0x10]
    // cmp r0, #4
    // bne _02227D00
    // ldrb r0, [r5]
    // cmp r0, #9
    // bne _02227CB4
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // b _02227D00
    // mov r0, #0
    // strb r0, [r5, #1]
    // b _02227D00
    // ldrb r0, [r5, #4]
    // cmp r0, #0
    // beq _02227CC4
    // sub r0, r0, #1
    // strb r0, [r5, #4]
    // ldrb r0, [r5, #5]
    // cmp r0, #0xf
    // bhs _02227CCE
    // add r0, r0, #1
    // strb r0, [r5, #5]
    // ldrb r0, [r5, #4]
    // cmp r0, #0
    // bne _02227CE0
    // ldrb r0, [r5, #5]
    // cmp r0, #0xf
    // bne _02227CE0
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // ldrb r0, [r5, #5]
    // ldrb r1, [r5, #4]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02227D18 ; =0x04000052
    // strh r1, [r0]
    // b _02227D00
    // ldr r0, [r5, #0xc]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r5, #0
    // bl Heap_Free
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x14]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02227D0C: .word ov07_02236736
    // _02227D10: .word ov07_02236734
    // _02227D14: .word ov07_02236732
    // _02227D18: .word 0x04000052
    // TODO: decompile
}



void ov07_02227D1C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // str r0, [sp, #0x18]
    // bl ov07_0221BFD0
    // mov r1, #0xb8
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4, #1]
    // strb r0, [r4]
    // ldr r0, [sp, #0x18]
    // str r0, [r4, #0xc]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #8]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xa]
    // ldr r0, [r4, #0x10]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // mov r1, #0xa
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    // strh r0, [r4, #0xa]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C514
    // str r0, [r4, #0x14]
    // mov r0, #8
    // strb r0, [r4, #4]
    // mov r1, #6
    // strb r1, [r4, #5]
    // sub r1, r1, #7
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ov07_02231E08
    // ldrb r0, [r4, #5]
    // ldrb r1, [r4, #4]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02227F9C ; =0x04000052
    // strh r1, [r0]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA80
    // str r0, [sp, #0x20]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FAE8
    // add r7, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA90
    // str r0, [sp, #0x1c]
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, r6, #0
    // bl ov07_0221C4E8
    // mov r1, #1
    // str r0, [r5, #0x18]
    // bl ManagedSprite_SetOamMode
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _02227DBA
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0223192C
    // cmp r0, #3
    // ldr r0, [r4, #0x18]
    // bne _02227EAA
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x20]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x24]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x18]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x20]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x24]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x18]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA78
    // add r6, r0, #0
    // ldr r0, [sp, #0x18]
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r5, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0x80
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // add r0, r6, #0
    // bl PaletteData_LoadNarc_CustomTint
    // ldr r0, [r4, #0x20]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA78
    // add r6, r0, #0
    // ldr r0, [sp, #0x18]
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r5, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xc4
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // add r0, r6, #0
    // bl PaletteData_LoadNarc_CustomTint
    // b _02227F8C
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x14
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x20]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x24]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x18]
    // add r1, r7, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // add r1, r7, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x20]
    // add r1, r7, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x24]
    // add r1, r7, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x18]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x20]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x24]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x18]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA78
    // add r6, r0, #0
    // ldr r0, [sp, #0x18]
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r5, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xc4
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // add r0, r6, #0
    // bl PaletteData_LoadNarc_CustomTint
    // ldr r0, [r4, #0x20]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA78
    // add r6, r0, #0
    // ldr r0, [sp, #0x18]
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r5, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0x80
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // add r0, r6, #0
    // bl PaletteData_LoadNarc_CustomTint
    // ldr r0, [r4, #0xc]
    // ldr r1, _02227FA0 ; =ov07_02227B58
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02227F9C: .word 0x04000052
    // _02227FA0: .word ov07_02227B58
    // TODO: decompile
}



void ov07_02227FA4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _02227FB6
    // cmp r0, #1
    // beq _02228010
    // b _02228050
    // ldrb r1, [r4, #2]
    // ldr r5, _02228060 ; =ov07_022366CD
    // mov r2, #0x64
    // lsl r0, r1, #1
    // add r3, r1, r0
    // ldr r0, _02228064 ; =ov07_022366CE
    // ldr r1, _02228068 ; =ov07_022366CC
    // ldrb r0, [r0, r3]
    // ldrb r1, [r1, r3]
    // ldrb r3, [r5, r3]
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0xc
    // bl ov07_02222508
    // ldrb r0, [r4, #2]
    // cmp r0, #0
    // ldr r0, _0222806C ; =0x00007FFF
    // bne _02227FEC
    // str r0, [sp]
    // mov r1, #0
    // ldr r0, [r4, #8]
    // mov r2, #6
    // add r3, r1, #0
    // bl Pokepic_StartPaletteFade
    // b _02227FFA
    // str r0, [sp]
    // mov r2, #0
    // ldr r0, [r4, #8]
    // mov r1, #6
    // add r3, r2, #0
    // bl Pokepic_StartPaletteFade
    // ldrb r1, [r4, #2]
    // mov r0, #1
    // eor r0, r1
    // strb r0, [r4, #2]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xc
    // bl ov07_02222558
    // cmp r0, #0
    // bne _02228038
    // ldr r0, [r4, #8]
    // bl Pokepic_ResumePaletteFade
    // cmp r0, #0
    // bne _02228038
    // ldrb r0, [r4, #1]
    // cmp r0, #4
    // ldrb r0, [r4]
    // bhs _02228034
    // sub r0, r0, #1
    // strb r0, [r4]
    // b _02228038
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r1, #0xc
    // ldrsh r2, [r4, r1]
    // ldr r0, [r4, #8]
    // bl Pokepic_SetAttr
    // mov r2, #0xe
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #8]
    // mov r1, #0xd
    // bl Pokepic_SetAttr
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // _02228060: .word ov07_022366CD
    // _02228064: .word ov07_022366CE
    // _02228068: .word ov07_022366CC
    // _0222806C: .word 0x00007FFF
    // TODO: decompile
}



void ov07_02228070(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x30
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #2]
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // ldr r1, _022280A4 ; =ov07_02227FA4
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _022280A4: .word ov07_02227FA4
    // TODO: decompile
}



void ov07_022280A8(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _022280BC
    // cmp r0, #1
    // beq _022280F6
    // b _0222814E
    // ldrb r1, [r4, #1]
    // ldr r2, _02228160 ; =ov07_02236714
    // ldr r5, _02228164 ; =ov07_02236715
    // lsl r0, r1, #2
    // add r3, r1, r0
    // ldr r0, _02228168 ; =ov07_02236716
    // ldr r1, _0222816C ; =ov07_02236713
    // ldrb r0, [r0, r3]
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // ldr r0, _02228170 ; =ov07_02236717
    // ldrb r0, [r0, r3]
    // ldrb r3, [r5, r3]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_02222590
    // ldrb r0, [r4, #1]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _02228114
    // ldrb r0, [r4, #1]
    // cmp r0, #3
    // ldrb r0, [r4]
    // bhs _02228110
    // sub r0, r0, #1
    // strb r0, [r4]
    // b _02228114
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r2, #0x10
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xc
    // bl Pokepic_SetAttr
    // mov r2, #0x12
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd
    // bl Pokepic_SetAttr
    // mov r0, #2
    // mov r1, #4
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r1]
    // ldr r2, [r4, #0x24]
    // bl ov07_02222674
    // mov r2, #2
    // add r3, r0, #0
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // add r2, r2, r3
    // bl Pokepic_SetAttr
    // add sp, #0xc
    // pop {r4, r5, pc}
    // ldr r0, [r4, #8]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02228160: .word ov07_02236714
    // _02228164: .word ov07_02236715
    // _02228168: .word ov07_02236716
    // _0222816C: .word ov07_02236713
    // _02228170: .word ov07_02236717
    // TODO: decompile
}



void ov07_02228174(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x34
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // str r5, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #2]
    // ldr r0, [r4, #8]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FAA0
    // strh r0, [r4, #4]
    // ldr r0, [r4, #8]
    // ldr r1, _022281BC ; =ov07_022280A8
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // _022281BC: .word ov07_022280A8
    // TODO: decompile
}



void ov07_022281C0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #5
    // bls _022281D0
    // b _02228330
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022281DC: ; jump table
    // ldrb r1, [r4, #1]
    // ldr r2, _02228370 ; =ov07_022366EC
    // ldr r5, _02228374 ; =ov07_022366ED
    // lsl r0, r1, #2
    // add r3, r1, r0
    // ldr r0, _02228378 ; =ov07_022366EE
    // ldr r1, _0222837C ; =ov07_022366EB
    // ldrb r0, [r0, r3]
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // ldr r0, _02228380 ; =ov07_022366EF
    // ldrb r0, [r0, r3]
    // ldrb r3, [r5, r3]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_02222590
    // ldrb r0, [r4, #1]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _02228234
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r2, #0x10
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xc
    // bl Pokepic_SetAttr
    // mov r2, #0x12
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd
    // bl Pokepic_SetAttr
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #2
    // mov r2, #6
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // ldr r3, [r4, #0x24]
    // bl ov07_022226C4
    // add sp, #0xc
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // mov r1, #0
    // add r3, r0, #0
    // lsl r3, r3, #0x10
    // str r1, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x10
    // add r2, r1, #0
    // asr r3, r3, #0x10
    // bl ov07_02222268
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_022222B4
    // cmp r0, #0
    // bne _022282A0
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r2, #0x12
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_SetAttr
    // add sp, #0xc
    // pop {r4, r5, pc}
    // ldrb r1, [r4, #1]
    // ldr r2, _02228370 ; =ov07_022366EC
    // ldr r5, _02228374 ; =ov07_022366ED
    // lsl r0, r1, #2
    // add r3, r1, r0
    // ldr r0, _02228378 ; =ov07_022366EE
    // ldr r1, _0222837C ; =ov07_022366EB
    // ldrb r0, [r0, r3]
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // ldr r0, _02228380 ; =ov07_022366EF
    // ldrb r0, [r0, r3]
    // ldrb r3, [r5, r3]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_02222590
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #2]
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _02228300
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r2, #0x10
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xc
    // bl Pokepic_SetAttr
    // mov r2, #0x12
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd
    // bl Pokepic_SetAttr
    // mov r0, #1
    // str r0, [sp]
    // mov r1, #2
    // mov r2, #6
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // ldr r3, [r4, #0x24]
    // bl ov07_022226C4
    // add sp, #0xc
    // pop {r4, r5, pc}
    // mov r2, #4
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0xc]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // mov r1, #0xc
    // add r2, r1, #0
    // ldr r0, [r4, #0xc]
    // add r2, #0xf4
    // bl Pokepic_SetAttr
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r0, [r4, #0xc]
    // add r2, #0xf3
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #8]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02228370: .word ov07_022366EC
    // _02228374: .word ov07_022366ED
    // _02228378: .word ov07_022366EE
    // _0222837C: .word ov07_022366EB
    // _02228380: .word ov07_022366EF
    // TODO: decompile
}



void ov07_02228384(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x34
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // str r5, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #2]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, #4]
    // ldr r0, [r4, #8]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FAA0
    // strh r0, [r4, #6]
    // ldr r0, [r4, #8]
    // ldr r1, _022283D4 ; =ov07_022281C0
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _022283D4: .word ov07_022281C0
    // TODO: decompile
}



void ov07_022283D8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #4
    // bhi _022284C2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022283F2: ; jump table
    // ldr r0, [r4, #8]
    // bl ov07_0221E6C8
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _022284D4 ; =0x00007FFF
    // mov r1, #1
    // str r0, [sp, #8]
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #4]
    // lsr r2, r2, #0x10
    // sub r3, r1, #3
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [r4, #0x10]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl Pokepic_StartPaletteFade
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, pc}
    // ldr r0, [r4, #4]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _022284D0
    // ldr r0, [r4, #0x10]
    // bl Pokepic_ResumePaletteFade
    // cmp r0, #0
    // bne _022284D0
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, pc}
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #5
    // bls _022284D0
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, pc}
    // ldr r0, [r4, #8]
    // bl ov07_0221E6C8
    // add r2, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _022284D4 ; =0x00007FFF
    // mov r1, #1
    // str r0, [sp, #8]
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #4]
    // lsr r2, r2, #0x10
    // sub r3, r1, #3
    // bl PaletteData_BeginPaletteFade
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [r4, #0x10]
    // mov r1, #0x10
    // add r3, r2, #0
    // bl Pokepic_StartPaletteFade
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, pc}
    // ldr r0, [r4, #4]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _022284D0
    // ldr r0, [r4, #0x10]
    // bl Pokepic_ResumePaletteFade
    // cmp r0, #0
    // bne _022284D0
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, pc}
    // ldr r0, [r4, #8]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _022284D4: .word 0x00007FFF
    // TODO: decompile
}



void ov07_022284D8(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x14
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221FA78
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // ldr r1, _0222850C ; =ov07_022283D8
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _0222850C: .word ov07_022283D8
    // TODO: decompile
}



void ov07_02228510(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _02228524
    // cmp r0, #1
    // beq _02228590
    // b _02228604
    // ldrb r1, [r4, #1]
    // ldr r2, _02228618 ; =ov07_022366F6
    // ldr r5, _0222861C ; =ov07_022366F7
    // lsl r0, r1, #2
    // add r3, r1, r0
    // ldr r0, _02228620 ; =ov07_022366F8
    // ldr r1, _02228624 ; =ov07_022366F5
    // ldrb r0, [r0, r3]
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // ldr r0, _02228628 ; =ov07_022366F9
    // ldrb r0, [r0, r3]
    // ldrb r3, [r5, r3]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov07_02222590
    // ldrb r1, [r4, #1]
    // ldr r6, _0222862C ; =ov07_022366D8
    // lsl r0, r1, #1
    // add r5, r1, r0
    // mov r0, #4
    // ldrsh r3, [r4, r0]
    // ldr r0, _02228630 ; =ov07_022366D9
    // mov r1, #0
    // ldrb r0, [r0, r5]
    // add r2, r1, #0
    // add r0, r3, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, _02228634 ; =ov07_022366DA
    // ldrb r0, [r0, r5]
    // ldrb r5, [r6, r5]
    // str r0, [sp, #4]
    // add r3, r3, r5
    // add r0, r4, #0
    // lsl r3, r3, #0x10
    // add r0, #0x34
    // asr r3, r3, #0x10
    // bl ov07_02222268
    // ldrb r0, [r4, #1]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x10
    // mov r5, #0
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _022285A0
    // add r5, r5, #1
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov07_022222B4
    // cmp r0, #0
    // bne _022285AE
    // add r5, r5, #1
    // cmp r5, #2
    // blt _022285D4
    // ldrb r0, [r4, #1]
    // cmp r0, #3
    // blo _022285D0
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // mov r0, #0
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #2]
    // cmp r0, #3
    // blo _022285D4
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _022285D4
    // mov r0, #0
    // strb r0, [r4]
    // mov r2, #0x10
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xc
    // bl Pokepic_SetAttr
    // mov r2, #0x12
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0xd
    // bl Pokepic_SetAttr
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x36
    // mov r2, #6
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // ldr r3, [r4, #0x24]
    // bl ov07_022226C4
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #8]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02228618: .word ov07_022366F6
    // _0222861C: .word ov07_022366F7
    // _02228620: .word ov07_022366F8
    // _02228624: .word ov07_022366F5
    // _02228628: .word ov07_022366F9
    // _0222862C: .word ov07_022366D8
    // _02228630: .word ov07_022366D9
    // _02228634: .word ov07_022366DA
    // TODO: decompile
}



void ov07_02228638(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x58
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // str r5, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #4]
    // ldr r0, [r4, #8]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FAA0
    // strh r0, [r4, #6]
    // ldr r0, [r4, #8]
    // ldr r1, _02228680 ; =ov07_02228510
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // _02228680: .word ov07_02228510
    // TODO: decompile
}



void ov07_02228684(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _0222869A
    // cmp r0, #1
    // beq _022286B2
    // cmp r0, #2
    // beq _022286D2
    // b _02228714
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #0xa
    // blo _02228730
    // mov r0, #0
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228730
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #2
    // bl ManagedSprite_SetOamMode
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228730
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #0xa
    // blo _02228730
    // ldr r0, _02228744 ; =0x0400004A
    // mov r1, #0x3f
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #0x1f
    // orr r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _02228748 ; =0xFFFFC0FF
    // lsl r1, r1, #8
    // and r2, r3
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228730
    // mov r3, #1
    // lsl r3, r3, #0x1a
    // ldr r1, [r3]
    // ldr r0, _0222874C ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r3]
    // ldr r0, [r4, #4]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x10]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #8]
    // bl SpriteSystem_DrawSprites
    // pop {r4, pc}
    // _02228744: .word 0x0400004A
    // _02228748: .word 0xFFFFC0FF
    // _0222874C: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov07_02228750(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // mov r1, #0x14
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #4]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0x10]
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02228828 ; =0xFFFF1FFF
    // and r2, r1
    // lsr r1, r0, #0xb
    // orr r1, r2
    // str r1, [r0]
    // add r0, #0x4a
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x1f
    // orr r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _0222882C ; =0xFFFFC0FF
    // and r2, r1
    // mov r1, #0x12
    // lsl r1, r1, #8
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA80
    // add r7, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA90
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0xc]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA78
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r1, #0x20
    // lsl r0, r6, #0x14
    // str r1, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r1, #0xe0
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // add r2, r7, #0
    // bl PaletteData_LoadNarc_CustomTint
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #4]
    // ldr r1, _02228830 ; =ov07_02228684
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02228828: .word 0xFFFF1FFF
    // _0222882C: .word 0xFFFFC0FF
    // _02228830: .word ov07_02228684
    // TODO: decompile
}



void ov07_02228834(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #3
    // bls _02228844
    // b _02228A26
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02228850: ; jump table
    // ldr r0, [r4, #0xc]
    // mov r1, #0xe
    // mov r2, #1
    // bl Pokepic_SetAttr
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228A42
    // mov r0, #0
    // add r6, r4, #0
    // ldr r7, _02228A4C ; =ov07_022366C8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r5, r4, #0
    // add r6, #0x20
    // ldrb r0, [r5, #0x18]
    // cmp r0, #0
    // beq _02228884
    // cmp r0, #1
    // beq _022288B2
    // b _02228900
    // ldrb r0, [r5, #0x19]
    // add r0, r0, #1
    // strb r0, [r5, #0x19]
    // ldrb r1, [r5, #0x19]
    // ldrb r0, [r7]
    // cmp r1, r0
    // blo _02228906
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // mov r0, #5
    // mov r1, #0x64
    // str r0, [sp, #8]
    // add r0, r6, #0
    // mov r2, #5
    // add r3, r1, #0
    // bl ov07_02222590
    // ldrb r0, [r5, #0x18]
    // add r0, r0, #1
    // strb r0, [r5, #0x18]
    // b _02228906
    // add r0, r6, #0
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _022288C4
    // ldrb r0, [r5, #0x18]
    // add r0, r0, #1
    // strb r0, [r5, #0x18]
    // b _02228906
    // add r0, r6, #0
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    // bl ov07_02222644
    // mov r0, #8
    // ldrsb r0, [r4, r0]
    // bl _fflt
    // add r1, r0, #0
    // ldr r0, [sp, #0x28]
    // bl _fmul
    // add r1, r0, #0
    // ldr r0, [r5, #0x1c]
    // ldr r2, [sp, #0x24]
    // bl ManagedSprite_SetAffineScale
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #2
    // ldr r2, [r4, #4]
    // ldrsh r1, [r4, r1]
    // lsl r2, r2, #0x10
    // ldr r0, [r5, #0x1c]
    // ldr r3, [r5, #0x34]
    // asr r2, r2, #0x10
    // bl ov07_022226FC
    // b _02228906
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x1c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [sp, #0x14]
    // add r5, #0x2c
    // add r0, r0, #1
    // add r7, r7, #1
    // add r6, #0x2c
    // str r0, [sp, #0x14]
    // cmp r0, #3
    // blt _02228878
    // ldr r0, [sp, #0x10]
    // cmp r0, #3
    // bge _02228924
    // b _02228A42
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #3
    // bhs _0222897A
    // mov r6, #0
    // add r5, r4, #0
    // add r7, r6, #0
    // add r1, sp, #0x18
    // ldr r0, [r5, #0x1c]
    // add r1, #2
    // add r2, sp, #0x18
    // bl ManagedSprite_GetPositionXY
    // add r2, sp, #0x18
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // mov r2, #2
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x1c]
    // bl ManagedSprite_SetPositionXY
    // mov r0, #8
    // ldrsb r0, [r4, r0]
    // bl _fflt
    // add r1, r0, #0
    // mov r2, #0xfe
    // ldr r0, [r5, #0x1c]
    // lsl r2, r2, #0x16
    // bl ManagedSprite_SetAffineScale
    // strb r7, [r5, #0x18]
    // strb r7, [r5, #0x19]
    // add r6, r6, #1
    // add r5, #0x2c
    // cmp r6, #3
    // blt _02228936
    // ldrb r0, [r4]
    // sub r0, r0, #1
    // strb r0, [r4]
    // b _02228A42
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228A42
    // add r5, r4, #0
    // mov r7, #0
    // add r6, r4, #0
    // add r5, #0x20
    // ldr r0, [r6, #0x1c]
    // mov r1, #0
    // bl ManagedSprite_SetOamMode
    // mov r0, #0x64
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #5
    // mov r1, #5
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r2, #0x64
    // add r3, r1, #0
    // bl ov07_02222590
    // add r7, r7, #1
    // add r6, #0x2c
    // add r5, #0x2c
    // cmp r7, #3
    // blt _0222898A
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228A42
    // mov r7, #0
    // add r6, r4, #0
    // str r7, [sp, #0xc]
    // add r6, #0x20
    // add r5, r4, #0
    // add r0, r6, #0
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _022289D2
    // add r7, r7, #1
    // b _02228A0C
    // add r0, r6, #0
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    // bl ov07_02222644
    // mov r0, #8
    // ldrsb r0, [r4, r0]
    // bl _fflt
    // add r1, r0, #0
    // ldr r0, [sp, #0x20]
    // bl _fmul
    // add r1, r0, #0
    // ldr r0, [r5, #0x1c]
    // ldr r2, [sp, #0x1c]
    // bl ManagedSprite_SetAffineScale
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #2
    // ldr r2, [r4, #4]
    // ldrsh r1, [r4, r1]
    // lsl r2, r2, #0x10
    // ldr r0, [r5, #0x1c]
    // ldr r3, [r5, #0x34]
    // asr r2, r2, #0x10
    // bl ov07_022226FC
    // ldr r0, [sp, #0xc]
    // add r6, #0x2c
    // add r0, r0, #1
    // add r5, #0x2c
    // str r0, [sp, #0xc]
    // cmp r0, #3
    // blt _022289C4
    // cmp r7, #3
    // blt _02228A42
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228A42
    // ldr r0, [r4, #0xc]
    // mov r1, #0xe
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0x10]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x14]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _02228A4C: .word ov07_022366C8
    // TODO: decompile
}



void ov07_02228A50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x9c
    // str r0, [sp]
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // ldr r0, [sp]
    // str r0, [r4, #0x10]
    // bl ov07_0221C514
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #0x10]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #2]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // mov r1, #2
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    // strh r0, [r4, #2]
    // ldr r0, [r4, #0x10]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // bl ov07_0221FAA0
    // mov r1, #0
    // str r0, [r4, #4]
    // mvn r1, r1
    // ldr r0, [r4, #0x10]
    // add r2, r1, #0
    // bl ov07_02231E08
    // mov r6, #0
    // ldr r1, _02228B2C ; =0x0000060C
    // ldr r0, _02228B30 ; =0x04000052
    // add r5, r4, #0
    // strh r1, [r0]
    // add r7, r6, #0
    // strb r7, [r5, #0x18]
    // strb r7, [r5, #0x19]
    // ldr r0, [r4, #0x10]
    // add r1, r6, #0
    // bl ov07_0221C4E8
    // str r0, [r5, #0x1c]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r5, #0x1c]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x1c]
    // add r1, r6, #1
    // bl ManagedSprite_SetDrawPriority
    // add r6, r6, #1
    // add r5, #0x2c
    // cmp r6, #3
    // blt _02228ABC
    // ldr r0, [sp]
    // mov r1, #0
    // bl ov07_0221FB78
    // cmp r0, #1
    // bne _02228AFA
    // mov r0, #0
    // mvn r0, r0
    // b _02228AFC
    // mov r0, #1
    // strb r0, [r4, #8]
    // mov r6, #0
    // add r5, r4, #0
    // mov r7, #8
    // ldrsb r0, [r4, r7]
    // bl _fflt
    // add r1, r0, #0
    // mov r2, #0xfe
    // ldr r0, [r5, #0x1c]
    // lsl r2, r2, #0x16
    // bl ManagedSprite_SetAffineScale
    // add r6, r6, #1
    // add r5, #0x2c
    // cmp r6, #3
    // blt _02228B04
    // ldr r0, [r4, #0x10]
    // ldr r1, _02228B34 ; =ov07_02228834
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02228B2C: .word 0x0000060C
    // _02228B30: .word 0x04000052
    // _02228B34: .word ov07_02228834
    // TODO: decompile
}



void ov07_02228B38(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #3
    // bls _02228B48
    // b _02228C72
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02228B54: ; jump table
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA78
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov07_0221E6C8
    // add r2, r0, #0
    // mov r1, #0
    // lsl r2, r2, #0x10
    // str r1, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #1
    // add r0, r5, #0
    // lsr r2, r2, #0x10
    // add r3, r1, #0
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA78
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _02228C80
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #5
    // str r0, [sp]
    // ldrb r1, [r4, #1]
    // add r0, r4, #0
    // add r0, #0xb4
    // lsl r2, r1, #1
    // ldr r1, _02228C84 ; =ov07_02236722
    // ldrsh r1, [r1, r2]
    // mov r2, #0
    // add r3, r2, #0
    // bl ov07_022227A8
    // ldrb r0, [r4, #2]
    // cmp r0, #0
    // ldr r0, [r4, #0xc]
    // bne _02228BD4
    // bl ov07_0221FA78
    // mov r1, #0
    // mov r2, #0xff
    // mov r3, #0xa
    // str r1, [sp]
    // bl PaletteData_BlendPalettes
    // b _02228BE6
    // bl ov07_0221FA78
    // ldr r1, _02228C88 ; =0x00007FFF
    // mov r2, #0xff
    // str r1, [sp]
    // mov r1, #0
    // mov r3, #0xa
    // bl PaletteData_BlendPalettes
    // mov r0, #3
    // strb r0, [r4, #3]
    // ldrb r1, [r4, #2]
    // mov r0, #1
    // eor r0, r1
    // strb r0, [r4, #2]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // add r0, r4, #0
    // add r0, #0xb4
    // bl ov07_022227D8
    // cmp r0, #0
    // bne _02228C1C
    // ldrb r0, [r4, #1]
    // cmp r0, #8
    // ldrb r0, [r4]
    // blo _02228C18
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02228C1C
    // sub r0, r0, #1
    // strb r0, [r4]
    // ldrb r0, [r4, #3]
    // cmp r0, #0
    // beq _02228C3E
    // sub r0, r0, #1
    // strb r0, [r4, #3]
    // ldrb r0, [r4, #3]
    // cmp r0, #0
    // bne _02228C3E
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FA78
    // mov r1, #0
    // mov r2, #0xff
    // add r3, r1, #0
    // str r1, [sp]
    // bl PaletteData_BlendPalettes
    // mov r6, #0
    // add r5, r4, #0
    // mov r7, #0x14
    // ldr r0, [r5, #0x1c]
    // cmp r0, #0
    // beq _02228C58
    // mov r2, #0xb4
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r5, r7]
    // mov r1, #0
    // add r2, r3, r2
    // bl Pokepic_SetAttr
    // add r6, r6, #1
    // add r5, #0x14
    // cmp r6, #4
    // blt _02228C44
    // mov r3, #0xb4
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #8]
    // mov r1, #3
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0xc]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02228C84: .word ov07_02236722
    // _02228C88: .word 0x00007FFF
    // TODO: decompile
}



void ov07_02228C8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0xd8
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // str r5, [r4, #0xc]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C4A0
    // str r0, [r4, #8]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221FAB0
    // cmp r0, #1
    // bne _02228CBE
    // mov r1, #0x40
    // b _02228CC0
    // mov r1, #0xa
    // add r2, r4, #0
    // add r0, r5, #0
    // add r2, #0x14
    // add r3, r4, #4
    // bl ov07_02232020
    // ldr r0, [r4, #4]
    // mov r6, #0
    // cmp r0, #0
    // ble _02228CF6
    // add r5, r4, #0
    // add r7, r6, #0
    // ldr r0, [r5, #0x1c]
    // add r1, r7, #0
    // bl Pokepic_GetAttr
    // strh r0, [r5, #0x14]
    // ldr r0, [r5, #0x1c]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r5, #0x16]
    // ldr r0, [r4, #4]
    // add r6, r6, #1
    // add r5, #0x14
    // cmp r6, r0
    // blt _02228CD8
    // ldr r0, [r4, #0xc]
    // ldr r1, _02228D04 ; =ov07_02228B38
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02228D04: .word ov07_02228B38
    // TODO: decompile
}



void ov07_02228D08(void) {
    // ldrb r0, [r4]
    // add r0, #0x40
    ov07_022222B4(r1, r0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x1c
    ov07_022227D8(r4);
    // add r0, #0x64
    ov07_02222AF4(r4);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x18)), 0x40, 0x42);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x18)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
    ov07_0221C448(*((u32*)(r4 + 0xc)), r2);
    Heap_Free(r4);
}



void ov07_02228D64(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r1, #0x8c
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // str r5, [r4, #0xc]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C4A0
    // str r0, [r4, #8]
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x18]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ldr r0, [r4, #0xc]
    // bne _02228DA8
    // bl ov07_0221C470
    // b _02228DAC
    // bl ov07_0221C468
    // add r6, r0, #0
    // ldr r0, [r4, #0xc]
    // add r1, r6, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x14]
    // add r1, r4, #4
    // bl ov07_02231FA0
    // ldr r0, [r4, #0x14]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // mov r1, #6
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    // strh r0, [r4, #6]
    // ldr r0, [r4, #0xc]
    // add r1, r6, #0
    // bl ov07_02222004
    // add r7, r0, #0
    // ldr r0, [r4, #0xc]
    // add r1, r6, #0
    // bl ov07_0222202C
    // add r6, r0, #0
    // mov r0, #6
    // ldrsh r3, [r4, r0]
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // mov r2, #0x14
    // add r0, r6, #0
    // mul r0, r2
    // add r0, r3, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r2, [sp, #4]
    // sub r2, #0x28
    // mul r2, r7
    // add r2, r1, r2
    // add r0, r4, #0
    // lsl r2, r2, #0x10
    // add r0, #0x40
    // asr r2, r2, #0x10
    // bl ov07_02222268
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221FAF8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221FAF8
    // mov r5, #1
    // add r3, r5, #0
    // lsl r3, r6
    // add r1, r0, #0
    // add r6, r3, #0
    // mov r2, #0x20
    // add r3, r5, #0
    // orr r6, r2
    // lsl r3, r1
    // add r1, r6, #0
    // orr r1, r3
    // sub r2, #0x21
    // ldr r0, [r4, #0xc]
    // orr r1, r5
    // add r3, r2, #0
    // bl ov07_02231E44
    // mov r1, #0x1f
    // mov r2, #0
    // str r1, [sp]
    // mov r0, #0xf
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x64
    // add r3, r2, #0
    // bl ov07_02222AC4
    // ldr r0, [r4, #0x18]
    // add r1, r5, #0
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0xc]
    // ldr r1, _02228E6C ; =ov07_02228D08
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02228E6C: .word ov07_02228D08
    // TODO: decompile
}



void ov07_02228E70(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _02228E82
    // cmp r0, #1
    // beq _02228EC2
    // b _02228EF2
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // ldrb r0, [r4, #2]
    // bne _02228E94
    // lsl r3, r0, #3
    // ldr r0, _02228F0C ; =ov07_0223674C
    // ldr r2, [r0, r3]
    // neg r1, r2
    // b _02228E9C
    // lsl r3, r0, #3
    // ldr r0, _02228F0C ; =ov07_0223674C
    // ldr r1, [r0, r3]
    // neg r2, r1
    // ldr r5, _02228F10 ; =ov07_02236750
    // add r0, r4, #0
    // ldr r3, [r5, r3]
    // add r0, #0x5c
    // bl ov07_022223F0
    // ldrb r0, [r4, #1]
    // cmp r0, #1
    // bne _02228EB4
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // ldrb r1, [r4, #1]
    // mov r0, #1
    // eor r0, r1
    // strb r0, [r4, #1]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // add r0, r4, #0
    // add r0, #0x5c
    // bl ov07_02222440
    // cmp r0, #1
    // bne _02228EDE
    // ldr r2, [r4, #0x5c]
    // ldr r0, [r4, #0x28]
    // lsl r2, r2, #0x10
    // mov r1, #9
    // lsr r2, r2, #0x10
    // bl Pokepic_SetAttr
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #2]
    // cmp r0, #5
    // ldrb r0, [r4]
    // blo _02228EEC
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // sub r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x28]
    // mov r1, #9
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // _02228F0C: .word ov07_0223674C
    // _02228F10: .word ov07_02236750
    // TODO: decompile
}



void ov07_02228F14(void) {
    // ldrb r0, [r4]
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x38
    ov07_022227A8(r1, 0x1c, 0x1e, 0x20);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r1, sp, #4
    ov07_02231FA0(*((u32*)(r4 + 0x2c)));
    // add r3, sp, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, #0x38
    ov07_0222283C(r4, 0, 2, *((u32*)(r4 + 0x2c)));
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    Heap_Free(r4);
}



void ov07_02228F88(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x70
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #0x28]
    // mov r1, #0xb
    // mov r2, #0x64
    // bl Pokepic_SetAttr
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x1c]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x1e]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x20]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov07_0221C4A8
    // strh r0, [r4, #0x22]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov07_0221C4A8
    // str r0, [r4, #0x24]
    // cmp r6, #0
    // ldr r0, [r4, #4]
    // bne _02229012
    // ldr r1, _0222901C ; =ov07_02228E70
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // ldr r1, _02229020 ; =ov07_02228F14
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // _0222901C: .word ov07_02228E70
    // _02229020: .word ov07_02228F14
    // TODO: decompile
}



void ov07_02229024(void) {
    // ldrb r0, [r5]
    // str r0, [sp]
    // add r0, #0x4c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_022227A8(r1, ((*((u32*)(r1 + 0x48)) + 2) << 0x10), (*((u32*)(r1 + 0x48)) << 0x10), 0);
    // ldrb r0, [r5]
    // strb r0, [r5]
    // add r0, #0x4c
    ov07_022227D8(r5);
    // ldrb r0, [r5]
    // strb r0, [r5]
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r4, r7]
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)(r5 + 0x38)), 0, 0x4c);
    // ldrsh r3, [r5, r3]
    BgSetPosTextAndCommit(*((u32*)(r5 + 0x14)), 3, 0, 0x4c);
    // ldrsh r3, [r5, r3]
    BgSetPosTextAndCommit(*((u32*)(r5 + 0x14)), 3, 3, 0x4e);
    ov07_0221C448(*((u32*)(r5 + 4)), r2);
    Heap_Free(r5);
}



void ov07_022290BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x70
    // add r4, r0, #0
    // bl ov07_022324D8
    // add r7, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov07_02231FE4
    // ldr r0, [r7, #4]
    // mov r1, #1
    // bl ov07_0221C768
    // cmp r0, #0x46
    // bgt _022290EC
    // bge _0222910E
    // cmp r0, #0x1e
    // bgt _022290E6
    // beq _0222911A
    // b _02229120
    // cmp r0, #0x32
    // beq _02229114
    // b _02229120
    // cmp r0, #0x6e
    // bgt _022290F8
    // bge _02229102
    // cmp r0, #0x5a
    // beq _02229108
    // b _02229120
    // cmp r0, #0x96
    // bne _02229120
    // mov r0, #6
    // str r0, [r7, #0x48]
    // b _02229124
    // mov r0, #5
    // str r0, [r7, #0x48]
    // b _02229124
    // mov r0, #4
    // str r0, [r7, #0x48]
    // b _02229124
    // mov r0, #3
    // str r0, [r7, #0x48]
    // b _02229124
    // mov r0, #2
    // str r0, [r7, #0x48]
    // b _02229124
    // mov r0, #1
    // str r0, [r7, #0x48]
    // b _02229124
    // mov r0, #0
    // str r0, [r7, #0x48]
    // add r5, r7, #0
    // mov r6, #0
    // add r4, r7, #0
    // add r5, #0x28
    // ldr r0, [r7, #4]
    // add r1, r6, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x38]
    // cmp r0, #0
    // beq _02229140
    // add r1, r5, #0
    // bl ov07_02231FA0
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #4
    // blt _0222912C
    // ldr r0, [r7, #4]
    // ldr r1, _02229158 ; =ov07_02229024
    // add r2, r7, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02229158: .word ov07_02229024
    // TODO: decompile
}



void ov07_0222915C(void) {
    // ldrb r0, [r4]
    // str r0, [sp]
    // add r0, #0x40
    ov07_022227A8(r1, 0x14, 0, 0);
    // str r0, [sp]
    // add r0, #0x64
    ov07_022227A8(r4, 2, 0, 0);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x40
    ov07_022227D8(r4);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x38)), (0x40 << 0x10), (0x42 << 0x10));
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // sub r1, r2, r1
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x3c)), (0x2c << 0x10), (0x42 << 0x10));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x38)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x3c)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)));
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    Heap_Free(r4);
}



void ov07_02229220(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x88
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0x3c]
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x30]
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x34]
    // add r1, r4, #0
    // ldr r0, [r4, #0x30]
    // add r1, #0x28
    // bl ov07_02231FA0
    // add r1, r4, #0
    // ldr r0, [r4, #0x34]
    // add r1, #0x2c
    // bl ov07_02231FA0
    // ldr r0, [r4, #4]
    // ldr r1, _02229288 ; =ov07_0222915C
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // _02229288: .word ov07_0222915C
    // TODO: decompile
}



void ov07_0222928C(void) {
    // add r0, #0x8c
    // add r1, #0xb0
    ov07_022223CC(r1, *((u32*)(r1 + 0x38)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x38)));
    ov07_0221C448(*((u32*)(r4 + 0x14)), r5);
    ov07_02232508(r4);
    // add r0, #0xd4
    ov07_02222440(r4);
    // add r1, #0xd4
    ManagedSprite_SetAffineZRotation(*((u32*)(r4 + 0x38)), ((*((u32*)r4) << 0x10) >> 0x10));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x38)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x20)));
}



void ov07_022292E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0xe8
    // add r6, r0, #0
    // add r7, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x10
    // bl ov07_02231FE4
    // add r0, r6, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xc]
    // add r0, r6, #0
    // mov r1, #1
    // bl ov07_0221C4A8
    // strh r0, [r4, #0xe]
    // add r0, r6, #0
    // mov r1, #2
    // bl ov07_0221C4A8
    // str r0, [r4, #4]
    // add r0, r6, #0
    // mov r1, #3
    // bl ov07_0221C4A8
    // str r0, [r4, #8]
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_02222004
    // add r5, r0, #0
    // add r0, r7, #0
    // mov r1, #2
    // str r7, [r4, #0x38]
    // bl ManagedSprite_SetAffineOverwriteMode
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x44]
    // add r0, r6, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x58]
    // add r1, r4, #0
    // ldr r0, [r4, #0x44]
    // add r1, #0x40
    // bl ov07_02231FA0
    // add r1, r4, #0
    // ldr r0, [r4, #0x58]
    // add r1, #0x54
    // bl ov07_02231FA0
    // mov r0, #0x42
    // ldrsh r0, [r4, r0]
    // mov r3, #0x54
    // str r0, [sp]
    // mov r0, #0x56
    // ldrsh r2, [r4, r0]
    // mov r0, #0xe
    // ldrsh r0, [r4, r0]
    // add r1, r0, #0
    // mul r1, r5
    // add r0, r2, r1
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [r4, #4]
    // add r1, r4, #0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r4, #8]
    // mov r2, #0x40
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // ldrsh r3, [r4, r3]
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // mov ip, r3
    // mov r3, #0xc
    // ldrsh r3, [r4, r3]
    // add r0, #0x8c
    // add r1, #0xb0
    // add r7, r3, #0
    // mul r7, r5
    // mov r3, ip
    // add r3, r3, r7
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // bl ov07_02222338
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #4
    // bne _022293EC
    // add r0, r6, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #2
    // bne _022293EC
    // mov r0, #0
    // mvn r0, r0
    // mul r5, r0
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #5
    // bne _02229416
    // add r0, r6, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_0221FA04
    // cmp r0, #3
    // bne _02229416
    // mov r0, #0
    // mvn r0, r0
    // mul r5, r0
    // cmp r5, #0
    // ldr r2, _02229470 ; =0x00005C71
    // ble _0222942E
    // ldr r1, _02229474 ; =0x00000E38
    // add r0, r4, #0
    // add r0, #0xd4
    // mul r1, r5
    // mul r2, r5
    // mov r3, #0xa
    // bl ov07_022223F0
    // b _0222943E
    // ldr r1, _02229478 ; =0x00003FFF
    // add r0, r4, #0
    // add r0, #0xd4
    // mul r1, r5
    // mul r2, r5
    // mov r3, #0xa
    // bl ov07_022223F0
    // add r1, r4, #0
    // add r1, #0xd4
    // ldr r1, [r1]
    // ldr r0, [r4, #0x38]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ManagedSprite_SetAffineZRotation
    // add r0, r4, #0
    // add r1, r4, #0
    // ldr r2, [r4, #0x38]
    // add r0, #0x8c
    // add r1, #0xb0
    // bl ov07_022223CC
    // ldr r0, [r4, #0x38]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x14]
    // ldr r1, _0222947C ; =ov07_0222928C
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02229470: .word 0x00005C71
    // _02229474: .word 0x00000E38
    // _02229478: .word 0x00003FFF
    // _0222947C: .word ov07_0222928C
    // TODO: decompile
}



void ov07_02229480(void) {
    // push {r4, r5, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0x18]
    // cmp r0, #3
    // bls _02229490
    // b _022295FC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222949C: ; jump table
    // mov r0, #0x12
    // ldrsh r2, [r4, r0]
    // mov r0, #0x96
    // mov r3, #0x3c
    // str r0, [sp]
    // mov r1, #0x64
    // str r1, [sp, #4]
    // mov r0, #0xc
    // mul r1, r2
    // mul r3, r2
    // lsl r2, r3, #0x10
    // str r0, [sp, #8]
    // add r0, r4, #0
    // lsl r1, r1, #0x10
    // add r0, #0x9c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // mov r3, #5
    // bl ov07_02222590
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _0222961A
    // add r0, r4, #0
    // add r0, #0x9c
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _02229512
    // mov r0, #0x12
    // ldrsh r2, [r4, r0]
    // mov r0, #0xa
    // mov r1, #0x3c
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // mov r0, #0xc
    // mul r1, r2
    // str r0, [sp, #8]
    // add r0, r4, #0
    // lsl r1, r1, #0x10
    // mov r3, #0x96
    // add r5, r2, #0
    // mul r5, r3
    // lsl r2, r5, #0x10
    // add r0, #0x9c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov07_02222590
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _0222961A
    // add r0, r4, #0
    // add r0, #0x9c
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // bl ov07_02222644
    // ldr r0, [r4, #0x40]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // bl ManagedSprite_SetAffineScale
    // mov r0, #0x16
    // add r2, r4, #0
    // add r2, #0xb0
    // ldrsh r0, [r4, r0]
    // ldr r2, [r2]
    // mov r1, #0x10
    // bl ov07_02222674
    // mov r2, #0x16
    // add r3, r0, #0
    // ldrsh r2, [r4, r2]
    // mov r1, #0x14
    // ldrsh r1, [r4, r1]
    // add r2, r2, r3
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #0x40]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldrb r1, [r4, #0xc]
    // ldrb r0, [r4, #0x10]
    // cmp r1, r0
    // bhs _0222955A
    // add r0, r1, #1
    // strb r0, [r4, #0xc]
    // ldrb r1, [r4, #0xd]
    // ldrb r0, [r4, #0x11]
    // cmp r1, r0
    // bls _02229566
    // sub r0, r1, #1
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xd]
    // ldrb r1, [r4, #0xc]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222962C ; =0x04000052
    // strh r1, [r0]
    // b _0222961A
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #4
    // blt _0222961A
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _0222961A
    // add r0, r4, #0
    // add r0, #0x9c
    // bl ov07_0222260C
    // cmp r0, #0
    // bne _0222959A
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _0222961A
    // add r0, r4, #0
    // add r0, #0x9c
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // bl ov07_02222644
    // ldr r0, [r4, #0x40]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // bl ManagedSprite_SetAffineScale
    // mov r0, #0x16
    // add r2, r4, #0
    // add r2, #0xb0
    // ldrsh r0, [r4, r0]
    // ldr r2, [r2]
    // mov r1, #0x10
    // bl ov07_02222674
    // mov r2, #0x16
    // add r3, r0, #0
    // ldrsh r2, [r4, r2]
    // mov r1, #0x14
    // ldrsh r1, [r4, r1]
    // add r2, r2, r3
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #0x40]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldrb r1, [r4, #0xc]
    // ldrb r0, [r4, #0xe]
    // cmp r1, r0
    // bls _022295E2
    // sub r0, r1, #1
    // strb r0, [r4, #0xc]
    // ldrb r1, [r4, #0xd]
    // ldrb r0, [r4, #0xf]
    // cmp r1, r0
    // bhs _022295EE
    // add r0, r1, #1
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xd]
    // ldrb r1, [r4, #0xc]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222962C ; =0x04000052
    // strh r1, [r0]
    // b _0222961A
    // ldr r0, [r4, #0x44]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #0x48]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #0x1c]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl ov07_02232508
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0x40]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x28]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // nop
    // _0222962C: .word 0x04000052
    // TODO: decompile
}



void ov07_02229630(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // mov r1, #0xd4
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x18
    // bl ov07_02231FE4
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4C0
    // str r0, [r4, #0x44]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4C0
    // mov r1, #0
    // str r0, [r4, #0x48]
    // mvn r1, r1
    // ldr r0, [r4, #0x1c]
    // add r2, r1, #0
    // bl ov07_02231E08
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // mov r1, #0
    // strb r1, [r4, #0xc]
    // mov r0, #0x1f
    // strb r0, [r4, #0xd]
    // strb r1, [r4, #0xe]
    // strb r0, [r4, #0xf]
    // strb r0, [r4, #0x10]
    // mov r0, #4
    // strb r0, [r4, #0x11]
    // add r0, r5, #0
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _022296C0
    // ldr r0, [r4, #0x44]
    // mov r1, #0
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x48]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x40]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0xb3
    // strh r0, [r4, #0x14]
    // mov r0, #0x78
    // strh r0, [r4, #0x16]
    // add r0, r5, #0
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x40]
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // mov r0, #0
    // mvn r0, r0
    // strh r0, [r4, #0x12]
    // b _02229720
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _022296F0
    // ldr r0, [r4, #0x48]
    // mov r1, #0
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x44]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // mov r0, #0x90
    // strh r0, [r4, #0x14]
    // mov r0, #0x40
    // strh r0, [r4, #0x16]
    // b _0222971C
    // ldr r0, [r4, #0x44]
    // mov r1, #0
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x48]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x40]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x4c
    // strh r0, [r4, #0x14]
    // mov r0, #0x78
    // strh r0, [r4, #0x16]
    // add r0, r5, #0
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x40]
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // mov r0, #1
    // strh r0, [r4, #0x12]
    // mov r1, #0x14
    // mov r2, #0x16
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x40]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x40]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // mov r0, #0x12
    // ldrsh r0, [r4, r0]
    // mov r3, #0x64
    // add r1, r0, #0
    // mov r0, #5
    // str r0, [sp]
    // mul r1, r3
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // str r3, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x9c
    // add r2, r1, #0
    // bl ov07_02222590
    // add r0, r4, #0
    // add r0, #0x9c
    // bl ov07_0222260C
    // add r0, r4, #0
    // add r0, #0x9c
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // bl ov07_02222644
    // ldr r0, [r4, #0x40]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // bl ManagedSprite_SetAffineScale
    // mov r0, #0x16
    // add r2, r4, #0
    // add r2, #0xb0
    // ldrsh r0, [r4, r0]
    // ldr r2, [r2]
    // mov r1, #0x10
    // bl ov07_02222674
    // mov r2, #0x16
    // add r3, r0, #0
    // ldrsh r2, [r4, r2]
    // mov r1, #0x14
    // ldrsh r1, [r4, r1]
    // add r2, r2, r3
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #0x40]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x1c]
    // ldr r1, _022297B4 ; =ov07_02229480
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _022297B4: .word ov07_02229480
    // TODO: decompile
}



void ov07_022297B8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r4, r1, #0
    // str r0, [sp, #0x10]
    // ldrb r0, [r4]
    // cmp r0, #8
    // bls _022297C8
    // b _02229B1C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022297D4: ; jump table
    // ldrb r1, [r4, #0xc]
    // ldr r2, _02229B00 ; =ov07_02236705
    // ldr r5, _02229B04 ; =ov07_02236706
    // lsl r0, r1, #2
    // add r3, r1, r0
    // ldr r0, _02229B08 ; =ov07_02236707
    // ldr r1, _02229B0C ; =ov07_02236704
    // ldrb r0, [r0, r3]
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // ldr r0, _02229B10 ; =ov07_02236708
    // ldrb r0, [r0, r3]
    // ldrb r3, [r5, r3]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0xcc
    // bl ov07_02222590
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // add r0, r4, #0
    // add r0, #0xcc
    // bl ov07_0222260C
    // cmp r0, #1
    // bne _02229864
    // mov r2, #0xcc
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xc
    // bl Pokepic_SetAttr
    // mov r2, #0xce
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xd
    // bl Pokepic_SetAttr
    // mov r0, #0x20
    // add r2, r4, #0
    // add r2, #0xe0
    // ldrsh r0, [r4, r0]
    // ldr r1, [r4, #0x24]
    // ldr r2, [r2]
    // bl ov07_02222674
    // mov r2, #0x20
    // add r3, r0, #0
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // add r2, r2, r3
    // bl Pokepic_SetAttr
    // b _02229B56
    // ldrb r0, [r4, #0xc]
    // cmp r0, #3
    // ldrb r0, [r4]
    // blo _02229872
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // sub r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #1
    // blo _02229956
    // mov r0, #0
    // strb r0, [r4, #1]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // add r1, sp, #0x2c
    // ldr r0, [r4, #0x30]
    // add r1, #2
    // add r2, sp, #0x2c
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0x14
    // mov r0, #0x18
    // ldrsh r0, [r1, r0]
    // cmp r0, #0x68
    // bgt _022298BE
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // mov r2, #2
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #0x7c]
    // mov r1, #0
    // mov r2, #2
    // bl ManagedSprite_OffsetPositionXY
    // b _02229B56
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // add r1, sp, #0x28
    // ldr r0, [r4, #0x30]
    // add r1, #2
    // add r2, sp, #0x28
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0x14
    // mov r0, #0x14
    // ldrsh r0, [r1, r0]
    // cmp r0, #0x68
    // bgt _022298F2
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // mov r2, #2
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #0x7c]
    // mov r1, #0
    // mov r2, #2
    // bl ManagedSprite_OffsetPositionXY
    // b _022298FE
    // ldr r0, _02229B14 ; =0x04000052
    // mov r1, #0x10
    // strh r1, [r0]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // ldrb r0, [r4, #1]
    // mov r1, #0x10
    // add r2, r1, #0
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // add r0, r4, #4
    // bl ov07_02222E48
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // add r0, #8
    // sub r2, #0x10
    // bl ov07_02222E48
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02229B14 ; =0x04000052
    // strh r1, [r0]
    // ldrb r0, [r4, #1]
    // cmp r0, #0xa
    // bne _02229938
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // mov r2, #0x10
    // bl ManagedSprite_OffsetPositionXY
    // ldrb r0, [r4, #1]
    // cmp r0, #0xc
    // bne _02229956
    // ldr r0, [r4, #0x7c]
    // mov r1, #0
    // mov r2, #0x10
    // bl ManagedSprite_OffsetPositionXY
    // b _02229B56
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #1
    // bhs _02229958
    // b _02229B56
    // mov r0, #0
    // strb r0, [r4, #1]
    // add r1, sp, #0x24
    // ldr r0, [r4, #0x30]
    // add r1, #2
    // add r2, sp, #0x24
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0x20
    // ldr r0, [r4, #0x7c]
    // add r1, #2
    // add r2, sp, #0x20
    // bl ManagedSprite_GetPositionXY
    // add r0, r4, #0
    // add r0, #0xc8
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0xca
    // str r0, [sp, #4]
    // add r3, sp, #0x14
    // mov r0, #0x12
    // mov r1, #0x10
    // mov r2, #0xe
    // mov r5, #0xc
    // ldrsh r0, [r3, r0]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
    // bl ov07_02222DC8
    // add r0, r4, #0
    // add r0, #0x2c
    // str r0, [sp]
    // mov r3, #0xca
    // add r2, sp, #0x14
    // mov r0, #0x12
    // mov r1, #0x10
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // mov r2, #0xc8
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // bl ov07_02222DE4
    // add r0, r4, #0
    // add r0, #0x28
    // str r0, [sp]
    // mov r3, #0xca
    // add r2, sp, #0x14
    // mov r0, #0x12
    // mov r1, #0x10
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // mov r2, #0xc8
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // bl ov07_02222E0C
    // mov r0, #0xa
    // lsl r0, r0, #0xe
    // str r0, [r4, #0x2c]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // ldr r3, _02229B18 ; =ov07_022366E1
    // add r2, sp, #0x30
    // mov r1, #0xa
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _022299E2
    // add r1, sp, #0x1c
    // ldr r0, [r4, #0x30]
    // add r1, #2
    // add r2, sp, #0x1c
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0x18
    // ldr r0, [r4, #0x7c]
    // add r1, #2
    // add r2, sp, #0x18
    // bl ManagedSprite_GetPositionXY
    // add r3, sp, #0x14
    // mov r0, #8
    // ldrsh r0, [r3, r0]
    // mov r2, #0xa
    // str r0, [sp]
    // mov r0, #4
    // ldrsh r0, [r3, r0]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // ldrb r1, [r4, #0xc]
    // ldr r0, [r4, #0x2c]
    // lsl r5, r1, #1
    // add r1, sp, #0x30
    // ldrsb r1, [r1, r5]
    // mov r5, #6
    // mul r1, r0
    // str r1, [sp, #0xc]
    // ldrsh r2, [r3, r2]
    // add r0, r4, #0
    // add r1, r4, #0
    // ldrsh r3, [r3, r5]
    // add r0, #0x34
    // add r1, #0x58
    // bl ov07_02222338
    // add r3, sp, #0x14
    // mov r0, #4
    // ldrsh r0, [r3, r0]
    // mov r5, #0xa
    // str r0, [sp]
    // mov r0, #8
    // ldrsh r0, [r3, r0]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // ldrb r1, [r4, #0xc]
    // ldr r0, [r4, #0x2c]
    // lsl r2, r1, #1
    // add r1, sp, #0x30
    // add r1, #1
    // ldrsb r1, [r1, r2]
    // mov r2, #6
    // mul r1, r0
    // str r1, [sp, #0xc]
    // ldrsh r2, [r3, r2]
    // add r0, r4, #0
    // add r1, r4, #0
    // ldrsh r3, [r3, r5]
    // add r0, #0x80
    // add r1, #0xa4
    // bl ov07_02222338
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // add r0, r4, #0
    // ldr r2, [r4, #0x30]
    // add r0, #0x34
    // add r1, #0x58
    // mov r5, #0
    // bl ov07_022223CC
    // cmp r0, #0
    // bne _02229A92
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // add r0, r4, #0
    // add r1, r4, #0
    // ldr r2, [r4, #0x7c]
    // add r0, #0x80
    // add r1, #0xa4
    // bl ov07_022223CC
    // cmp r0, #0
    // bne _02229AAA
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #2
    // bne _02229B56
    // ldrb r0, [r4, #0xc]
    // cmp r0, #5
    // ldrb r0, [r4]
    // bne _02229ABC
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // sub r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // mov r5, #0
    // add r0, r4, #4
    // add r1, r5, #0
    // sub r2, r5, #2
    // bl ov07_02222E48
    // cmp r0, #1
    // bne _02229AD4
    // add r5, r5, #1
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0x10
    // mov r2, #2
    // bl ov07_02222E48
    // cmp r0, #1
    // bne _02229AE6
    // add r5, r5, #1
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02229B14 ; =0x04000052
    // cmp r5, #2
    // strh r1, [r0]
    // bne _02229B56
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02229B56
    // nop
    // _02229B00: .word ov07_02236705
    // _02229B04: .word ov07_02236706
    // _02229B08: .word ov07_02236707
    // _02229B0C: .word ov07_02236704
    // _02229B10: .word ov07_02236708
    // _02229B14: .word 0x04000052
    // _02229B18: .word ov07_022366E1
    // mov r6, #0
    // ldr r0, [r4, #0x10]
    // add r1, r6, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _02229B44
    // add r5, r4, #0
    // add r7, r6, #0
    // ldr r0, [r5, #0x30]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #0x10]
    // add r1, r7, #0
    // add r5, #0x4c
    // add r6, r6, #1
    // bl ov07_0221C4A8
    // cmp r6, r0
    // blt _02229B2E
    // ldr r0, [r4, #0x10]
    // ldr r1, [sp, #0x10]
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // mov r6, #0
    // ldr r0, [r4, #0x10]
    // add r1, r6, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _02229BC2
    // add r5, r4, #0
    // add r7, sp, #0x14
    // add r1, sp, #0x14
    // ldr r0, [r5, #0x30]
    // add r1, #2
    // add r2, sp, #0x14
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0
    // ldrsh r0, [r7, r0]
    // cmp r0, #0x50
    // bge _02229B8C
    // ldr r0, [r4, #0x10]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r5, #0x30]
    // bl ManagedSprite_SetPriority
    // b _02229BB2
    // mov r0, #2
    // ldrsh r0, [r7, r0]
    // cmp r0, #0x80
    // ldr r0, [r4, #0x10]
    // ble _02229BA4
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r5, #0x30]
    // bl ManagedSprite_SetPriority
    // b _02229BB2
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r5, #0x30]
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // add r5, #0x4c
    // add r6, r6, #1
    // bl ov07_0221C4A8
    // cmp r6, r0
    // blt _02229B68
    // ldrb r0, [r4]
    // cmp r0, #4
    // blo _02229BF6
    // mov r5, #0
    // ldr r0, [r4, #0x10]
    // add r1, r5, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _02229BF0
    // add r6, r4, #0
    // add r7, r5, #0
    // ldr r0, [r6, #0x30]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x10]
    // add r1, r7, #0
    // add r6, #0x4c
    // add r5, r5, #1
    // bl ov07_0221C4A8
    // cmp r5, r0
    // blt _02229BDA
    // ldr r0, [r4, #0x18]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov07_02229BFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r1, #0
    // mov r1, #0xf0
    // str r0, [sp]
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r1, #0
    // strb r1, [r4]
    // ldr r0, [sp]
    // strb r1, [r4, #1]
    // str r0, [r4, #0x10]
    // str r6, [r4, #0x18]
    // str r5, [r4, #0x14]
    // str r1, [r4, #4]
    // mov r0, #0x10
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x10]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // bl ov07_0221FA48
    // str r0, [r4, #0x1c]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x20]
    // ldr r0, [r4, #0x10]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // bl ov07_0221FAA0
    // str r0, [r4, #0x24]
    // ldr r0, [sp]
    // mov r1, #2
    // bl ov07_0221FAF8
    // add r5, r0, #0
    // ldr r0, [sp]
    // mov r1, #1
    // bl ov07_0221FAF8
    // mov r2, #1
    // add r1, r2, #0
    // add r3, r0, #0
    // lsl r1, r5
    // add r5, r2, #0
    // lsl r5, r3
    // orr r1, r5
    // orr r1, r2
    // sub r2, r2, #2
    // ldr r0, [r4, #0x10]
    // add r3, r2, #0
    // bl ov07_02231E44
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02229D38 ; =0x04000052
    // strh r1, [r0]
    // ldr r1, [sp]
    // add r0, sp, #4
    // bl ov07_0221F9E8
    // str r7, [r4, #0x30]
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // mov r6, #1
    // bl ov07_0221C4A8
    // cmp r0, #1
    // ble _02229CBE
    // add r5, r4, #0
    // add r5, #0x4c
    // add r7, sp, #4
    // ldr r0, [r4, #0x14]
    // ldr r1, [r4, #0x18]
    // add r2, r7, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x30]
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // add r5, #0x4c
    // add r6, r6, #1
    // bl ov07_0221C4A8
    // cmp r6, r0
    // blt _02229CA2
    // mov r6, #0
    // ldr r0, [r4, #0x10]
    // add r1, r6, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // ble _02229CF8
    // add r5, r4, #0
    // mov r7, #1
    // ldr r0, [r5, #0x30]
    // add r1, r7, #0
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x10]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r5, #0x30]
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // add r5, #0x4c
    // add r6, r6, #1
    // bl ov07_0221C4A8
    // cmp r6, r0
    // blt _02229CD0
    // ldr r0, [sp]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // ldr r0, [r4, #0x30]
    // bne _02229D18
    // mov r1, #0xa0
    // mov r2, #0x36
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x7c]
    // mov r1, #0x50
    // mov r2, #0x27
    // bl ManagedSprite_SetPositionXY
    // b _02229D2A
    // mov r1, #0x64
    // mov r2, #0x36
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x7c]
    // mov r1, #0xb4
    // mov r2, #0x27
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x10]
    // ldr r1, _02229D3C ; =ov07_022297B8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _02229D38: .word 0x04000052
    // _02229D3C: .word ov07_022297B8
    // TODO: decompile
}



void ov07_02229D40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // ldrb r0, [r5]
    // cmp r0, #0
    // beq _02229D52
    // cmp r0, #1
    // beq _02229DC6
    // b _02229DFA
    // ldrb r0, [r5, #6]
    // cmp r0, #0xf
    // bhs _02229D5C
    // add r0, r0, #1
    // strb r0, [r5, #6]
    // ldrb r0, [r5, #7]
    // cmp r0, #0
    // beq _02229D66
    // sub r0, r0, #1
    // strb r0, [r5, #7]
    // ldrb r0, [r5, #7]
    // ldrb r1, [r5, #6]
    // mov r6, #0
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02229E48 ; =0x04000052
    // strh r1, [r0]
    // ldrb r0, [r5, #4]
    // add r0, r0, #1
    // strb r0, [r5, #4]
    // ldrb r0, [r5, #5]
    // cmp r0, #0
    // ble _02229DB8
    // ldr r4, _02229E4C ; =ov07_02236778
    // add r7, r5, #0
    // add r1, sp, #0
    // ldr r0, [r7, #0x14]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldrb r1, [r5, #4]
    // ldrb r0, [r4]
    // cmp r1, r0
    // blo _02229DAC
    // add r0, r5, r6
    // ldrb r1, [r0, #1]
    // add r1, r1, #1
    // strb r1, [r0, #1]
    // ldrb r2, [r0, #1]
    // ldrb r1, [r4, #1]
    // cmp r2, r1
    // blo _02229DAC
    // mov r1, #0
    // strb r1, [r0, #1]
    // ldrb r0, [r5, #5]
    // add r6, r6, #1
    // add r7, r7, #4
    // add r4, r4, #2
    // cmp r6, r0
    // blt _02229D84
    // ldrb r0, [r5, #4]
    // cmp r0, #0x2d
    // blo _02229E24
    // ldrb r0, [r5]
    // add r0, r0, #1
    // strb r0, [r5]
    // b _02229E24
    // ldrb r0, [r5, #6]
    // cmp r0, #0
    // beq _02229DD0
    // sub r0, r0, #1
    // strb r0, [r5, #6]
    // ldrb r0, [r5, #7]
    // cmp r0, #0xf
    // bhs _02229DDA
    // add r0, r0, #1
    // strb r0, [r5, #7]
    // ldrb r0, [r5, #6]
    // cmp r0, #0
    // bne _02229DEC
    // ldrb r0, [r5, #7]
    // cmp r0, #0xf
    // bne _02229DEC
    // ldrb r0, [r5]
    // add r0, r0, #1
    // strb r0, [r5]
    // ldrb r0, [r5, #7]
    // ldrb r1, [r5, #6]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02229E48 ; =0x04000052
    // strh r1, [r0]
    // b _02229E24
    // ldrb r0, [r5, #5]
    // mov r6, #0
    // cmp r0, #0
    // ble _02229E14
    // add r4, r5, #0
    // ldr r0, [r4, #0x14]
    // bl Sprite_DeleteAndFreeResources
    // ldrb r0, [r5, #5]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blt _02229E04
    // ldr r0, [r5, #8]
    // add r1, r7, #0
    // bl ov07_0221C448
    // add r0, r5, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #5]
    // mov r6, #0
    // cmp r0, #0
    // ble _02229E40
    // add r4, r5, #0
    // ldr r0, [r4, #0x14]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldrb r0, [r5, #5]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blt _02229E2E
    // ldr r0, [r5, #0x10]
    // bl SpriteSystem_DrawSprites
    // pop {r3, r4, r5, r6, r7, pc}
    // _02229E48: .word 0x04000052
    // _02229E4C: .word ov07_02236778
    // TODO: decompile
}



void ov07_02229E50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // str r3, [sp]
    // bl ov07_0221BFD0
    // mov r1, #0x44
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02229E6E
    // bl GF_AssertFail
    // mov r0, #0
    // strb r0, [r4, #4]
    // strb r0, [r4]
    // str r5, [r4, #0xc]
    // str r6, [r4, #0x10]
    // add r0, sp, #4
    // add r1, r7, #0
    // str r7, [r4, #8]
    // bl ov07_0221F9E8
    // mov r1, #0
    // mvn r1, r1
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // bl ov07_02231E08
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ov07_0221C4A8
    // strb r0, [r4, #5]
    // mov r0, #0
    // strb r0, [r4, #6]
    // mov r0, #0xf
    // strb r0, [r4, #7]
    // ldrb r0, [r4, #7]
    // ldrb r1, [r4, #6]
    // mov r6, #1
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _02229FB4 ; =0x04000052
    // strh r1, [r0]
    // ldr r0, [sp]
    // str r0, [r4, #0x14]
    // ldrb r0, [r4, #5]
    // cmp r0, #1
    // ble _02229ED0
    // add r5, r4, #4
    // ldr r0, [r4, #0xc]
    // ldr r1, [r4, #0x10]
    // add r2, sp, #4
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x14]
    // ldrb r0, [r4, #5]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02229EBA
    // add r0, r7, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r7, #0
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _02229F24
    // add r0, r7, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r7, #0
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _02229F10
    // add r0, r7, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r7, #0
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _02229F10
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // b _02229F18
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x14]
    // mov r1, #0x80
    // mov r2, #0x50
    // bl ManagedSprite_SetPositionXY
    // b _02229F64
    // add r0, r7, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r7, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _02229F52
    // add r0, r7, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r7, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _02229F52
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // b _02229F5A
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x14]
    // mov r1, #0x80
    // mov r2, #0x50
    // bl ManagedSprite_SetPositionXY
    // ldrb r0, [r4, #5]
    // mov r6, #0
    // cmp r0, #0
    // ble _02229FA4
    // add r5, r4, #0
    // add r1, r4, r6
    // mov r0, #0
    // strb r0, [r1, #1]
    // ldr r0, [r5, #0x14]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r5, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #8]
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _02229F9A
    // mov r2, #0xfe
    // ldr r0, [r5, #0x14]
    // ldr r1, _02229FB8 ; =0xBF800000
    // lsl r2, r2, #0x16
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #5]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _02229F6E
    // ldr r1, _02229FBC ; =ov07_02229D40
    // ldr r3, _02229FC0 ; =0x0000044C
    // add r0, r7, #0
    // add r2, r4, #0
    // bl ov07_0221C3F4
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _02229FB4: .word 0x04000052
    // _02229FB8: .word 0xBF800000
    // _02229FBC: .word ov07_02229D40
    // _02229FC0: .word 0x0000044C
    // TODO: decompile
}



void ov07_02229FC4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r7, r0, #0
    // ldrb r0, [r4]
    // mov r6, #0
    // cmp r0, #3
    // bls _02229FD6
    // b _0222A17C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229FE2: ; jump table
    // ldrb r0, [r4, #9]
    // cmp r0, #0xf
    // bhs _02229FF4
    // add r0, r0, #1
    // strb r0, [r4, #9]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // beq _02229FFE
    // sub r0, r0, #1
    // strb r0, [r4, #0xa]
    // ldrb r0, [r4, #9]
    // cmp r0, #0xf
    // bne _0222A010
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _0222A010
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // ldrb r0, [r4, #0xa]
    // ldrb r1, [r4, #9]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222A1D8 ; =0x04000052
    // strh r1, [r0]
    // b _0222A1A8
    // ldr r0, [r4, #0x30]
    // cmp r0, #3
    // bhi _0222A084
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A030: ; jump table
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x24]
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x34]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x38]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // b _0222A084
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x20]
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x34]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x38]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // b _0222A084
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x2c]
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x34]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x38]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r1, sp, #8
    // ldr r0, [r4, #0x34]
    // add r1, #2
    // add r2, sp, #8
    // bl ManagedSprite_GetPositionXY
    // ldr r1, [r4, #0x30]
    // ldr r0, _0222A1DC ; =ov07_022367B0
    // lsl r2, r1, #3
    // ldrsh r0, [r0, r2]
    // ldr r5, _0222A1E0 ; =ov07_022367AE
    // add r3, sp, #8
    // str r0, [sp]
    // ldr r0, _0222A1E4 ; =ov07_02236774
    // ldrsh r2, [r5, r2]
    // ldrb r0, [r0, r1]
    // mov r1, #2
    // mov r5, #0
    // str r0, [sp, #4]
    // ldrsh r1, [r3, r1]
    // add r0, r4, #0
    // ldrsh r3, [r3, r5]
    // add r0, #0x3c
    // bl ov07_02222268
    // add r1, sp, #8
    // ldr r0, [r4, #0x38]
    // add r1, #2
    // add r2, sp, #8
    // bl ManagedSprite_GetPositionXY
    // ldr r1, [r4, #0x30]
    // ldr r0, _0222A1E8 ; =ov07_022367B4
    // lsl r2, r1, #3
    // ldrsh r0, [r0, r2]
    // ldr r5, _0222A1EC ; =ov07_022367B2
    // add r3, sp, #8
    // str r0, [sp]
    // ldr r0, _0222A1E4 ; =ov07_02236774
    // ldrsh r2, [r5, r2]
    // ldrb r0, [r0, r1]
    // mov r1, #2
    // mov r5, #0
    // str r0, [sp, #4]
    // ldrsh r1, [r3, r1]
    // add r0, r4, #0
    // ldrsh r3, [r3, r5]
    // add r0, #0x60
    // bl ov07_02222268
    // ldr r0, [r4, #0x30]
    // add r0, r0, #1
    // str r0, [r4, #0x30]
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0222A1A8
    // add r0, r4, #0
    // ldr r1, [r4, #0x34]
    // add r0, #0x3c
    // add r5, r6, #0
    // bl ov07_022222F0
    // cmp r0, #0
    // bne _0222A108
    // add r5, r5, #1
    // add r0, r4, #0
    // ldr r1, [r4, #0x38]
    // add r0, #0x60
    // bl ov07_022222F0
    // cmp r0, #0
    // bne _0222A118
    // add r5, r5, #1
    // cmp r5, #2
    // blt _0222A1A8
    // ldr r0, [r4, #0x30]
    // cmp r0, #3
    // bgt _0222A13A
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x38]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldrb r0, [r4]
    // sub r0, r0, #1
    // strb r0, [r4]
    // b _0222A1A8
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0222A1A8
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // beq _0222A14C
    // sub r0, r0, #1
    // strb r0, [r4, #9]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0xf
    // bhs _0222A156
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // ldrb r1, [r4, #0xa]
    // cmp r1, #7
    // blo _0222A15E
    // mov r6, #1
    // ldrb r0, [r4, #9]
    // cmp r0, #0
    // bne _0222A16E
    // cmp r1, #0xf
    // bne _0222A16E
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // ldrb r0, [r4, #0xa]
    // ldrb r1, [r4, #9]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222A1D8 ; =0x04000052
    // strh r1, [r0]
    // b _0222A1A8
    // ldrb r0, [r4, #8]
    // mov r6, #0
    // cmp r0, #0
    // ble _0222A196
    // add r5, r4, #0
    // ldr r0, [r5, #0x18]
    // bl Sprite_DeleteAndFreeResources
    // ldrb r0, [r4, #8]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0222A186
    // ldr r0, [r4, #0xc]
    // add r1, r7, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldrb r0, [r4]
    // cmp r0, #3
    // bhs _0222A1CE
    // cmp r6, #0
    // bne _0222A1CE
    // ldrb r0, [r4, #8]
    // mov r6, #0
    // cmp r0, #0
    // ble _0222A1CE
    // add r5, r4, #0
    // ldr r0, [r5, #0x18]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldrb r0, [r4, #8]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0222A1BC
    // ldr r0, [r4, #0x14]
    // bl SpriteSystem_DrawSprites
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0222A1D8: .word 0x04000052
    // _0222A1DC: .word ov07_022367B0
    // _0222A1E0: .word ov07_022367AE
    // _0222A1E4: .word ov07_02236774
    // _0222A1E8: .word ov07_022367B4
    // _0222A1EC: .word ov07_022367B2
    // TODO: decompile
}



void ov07_0222A1F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // str r0, [sp]
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov07_0221BFD0
    // mov r1, #0x84
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _0222A20E
    // bl GF_AssertFail
    // mov r0, #0
    // strb r0, [r4, #7]
    // strb r0, [r4]
    // str r5, [r4, #0x10]
    // str r6, [r4, #0x14]
    // str r0, [r4, #0x30]
    // ldr r0, [sp]
    // ldr r1, [sp]
    // str r0, [r4, #0xc]
    // add r0, sp, #4
    // bl ov07_0221F9E8
    // mov r1, #0
    // mvn r1, r1
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ov07_02231E08
    // mov r1, #0
    // strb r1, [r4, #9]
    // mov r0, #0xf
    // strb r0, [r4, #0xa]
    // ldrb r0, [r4, #0xa]
    // ldrb r2, [r4, #9]
    // lsl r0, r0, #8
    // orr r2, r0
    // ldr r0, _0222A318 ; =0x04000052
    // strh r2, [r0]
    // ldr r0, [r4, #0xc]
    // bl ov07_0221C4A8
    // strb r0, [r4, #8]
    // str r7, [r4, #0x18]
    // ldrb r0, [r4, #8]
    // mov r6, #1
    // cmp r0, #1
    // ble _0222A272
    // add r5, r4, #4
    // add r7, sp, #4
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4, #0x14]
    // add r2, r7, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x18]
    // ldrb r0, [r4, #8]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0222A25C
    // ldr r0, [r4, #0x18]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x20]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x24]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x2c]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // ldr r0, [r4, #0x24]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // ldrb r0, [r4, #8]
    // mov r7, #0
    // cmp r0, #0
    // ble _0222A2E8
    // ldr r6, _0222A31C ; =ov07_02236796
    // add r5, r4, #0
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetAnimateFlag
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [r5, #0x18]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldrb r0, [r4, #8]
    // add r7, r7, #1
    // add r5, r5, #4
    // add r6, r6, #4
    // cmp r7, r0
    // blt _0222A2BE
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x20]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x2c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp]
    // ldr r1, _0222A320 ; =ov07_02229FC4
    // ldr r3, _0222A324 ; =0x0000044C
    // add r2, r4, #0
    // bl ov07_0221C3F4
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222A318: .word 0x04000052
    // _0222A31C: .word ov07_02236796
    // _0222A320: .word ov07_02229FC4
    // _0222A324: .word 0x0000044C
    // TODO: decompile
}



void ov07_0222A328(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0xc]
    // cmp r0, #7
    // bls _0222A338
    // b _0222A490
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A344: ; jump table
    // ldrb r0, [r4, #0xe]
    // sub r0, r0, #1
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #0xe]
    // cmp r0, #0xa
    // bhi _0222A374
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #3
    // bhs _0222A376
    // b _0222A49E
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #3
    // bhi _0222A3AC
    // ldr r0, [r4, #0x38]
    // ldr r1, _0222A4A8 ; =0x3DCCCCCD
    // bl _fadd
    // str r0, [r4, #0x38]
    // ldr r1, [r4, #0x38]
    // ldr r0, [r4, #0x10]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // b _0222A49E
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #3
    // bhi _0222A3DA
    // ldr r0, [r4, #0x38]
    // ldr r1, _0222A4A8 ; =0x3DCCCCCD
    // bl _fsub
    // str r0, [r4, #0x38]
    // ldr r1, [r4, #0x38]
    // ldr r0, [r4, #0x10]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // b _0222A49E
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // ldrb r0, [r4, #0xe]
    // sub r0, r0, #1
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #0xe]
    // cmp r0, #0xa
    // bhi _0222A49E
    // ldr r0, [r4, #0x3c]
    // mov r1, #1
    // str r1, [r0]
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #0x1e
    // bls _0222A41C
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // ldr r0, [r4, #0x3c]
    // ldr r0, [r0]
    // cmp r0, #2
    // bne _0222A49E
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // add r5, r1, #0
    // add r2, sp, #8
    // ldr r0, [r4, #0x10]
    // add r1, sp, #8
    // add r2, #2
    // add r5, #0xa
    // bl ManagedSprite_GetPositionXY
    // ldrb r0, [r4, #0xf]
    // add r3, sp, #8
    // mov r1, #0
    // lsl r2, r0, #2
    // ldr r0, _0222A4AC ; =ov07_02236780
    // ldrsh r0, [r0, r2]
    // str r0, [sp]
    // lsl r0, r5, #0x10
    // ldr r5, _0222A4B0 ; =ov07_0223677E
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldrsh r2, [r5, r2]
    // add r0, r4, #0
    // mov r5, #2
    // ldrsh r1, [r3, r1]
    // ldrsh r3, [r3, r5]
    // add r0, #0x14
    // bl ov07_02222268
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // b _0222A49E
    // add r0, r4, #0
    // ldr r1, [r4, #0x10]
    // add r0, #0x14
    // bl ov07_022222F0
    // cmp r0, #0
    // bne _0222A49E
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldrb r0, [r4, #0xc]
    // add r0, r0, #1
    // strb r0, [r4, #0xc]
    // ldr r0, [r4, #0x3c]
    // mov r1, #3
    // str r1, [r0]
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // ldr r0, [r4, #0x10]
    // bl ManagedSprite_TickFrame
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0222A4A8: .word 0x3DCCCCCD
    // _0222A4AC: .word ov07_02236780
    // _0222A4B0: .word ov07_0223677E
    // TODO: decompile
}



void ov07_0222A4B4(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r2, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #3
    // bhi _0222A570
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A4CC: ; jump table
    // ldrb r6, [r4, #2]
    // mov r3, #1
    // mov r2, #0
    // cmp r6, #0
    // ble _0222A4F4
    // ldr r0, _0222A588 ; =0x00000514
    // add r5, r4, #0
    // ldr r1, [r5, r0]
    // cmp r1, #1
    // beq _0222A4EC
    // mov r3, #0
    // b _0222A4F4
    // add r2, r2, #1
    // add r5, r5, #4
    // cmp r2, r6
    // blt _0222A4E2
    // cmp r3, #1
    // bne _0222A580
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0222A580
    // ldrb r0, [r4, #2]
    // mov r5, #0
    // cmp r0, #0
    // ble _0222A51A
    // ldr r0, _0222A588 ; =0x00000514
    // add r3, r4, #0
    // mov r2, #2
    // str r2, [r3, r0]
    // ldrb r1, [r4, #2]
    // add r5, r5, #1
    // add r3, r3, #4
    // cmp r5, r1
    // blt _0222A50E
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0222A580
    // ldrb r5, [r4, #2]
    // mov r2, #1
    // mov r6, #0
    // cmp r5, #0
    // ble _0222A542
    // ldr r0, _0222A588 ; =0x00000514
    // add r3, r4, #0
    // ldr r1, [r3, r0]
    // cmp r1, #3
    // beq _0222A53A
    // mov r2, #0
    // b _0222A542
    // add r6, r6, #1
    // add r3, r3, #4
    // cmp r6, r5
    // blt _0222A530
    // cmp r2, #1
    // bne _0222A580
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0222A580
    // ldrb r0, [r4, #2]
    // mov r6, #0
    // cmp r0, #0
    // ble _0222A568
    // add r5, r4, #0
    // ldr r0, [r5, #0x24]
    // bl Sprite_DeleteAndFreeResources
    // ldrb r0, [r4, #2]
    // add r6, r6, #1
    // add r5, #0x40
    // cmp r6, r0
    // blt _0222A558
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _0222A580
    // ldr r0, [r4, #8]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x10]
    // bl SpriteSystem_DrawSprites
    // pop {r4, r5, r6, pc}
    // _0222A588: .word 0x00000514
    // TODO: decompile
}



void ov07_0222A58C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // str r0, [sp]
    // add r4, r1, #0
    // add r5, r2, #0
    // add r7, r3, #0
    // bl ov07_0221BFD0
    // ldr r1, _0222A6F4 ; =0x00000564
    // bl Heap_Alloc
    // add r6, r0, #0
    // bne _0222A5AA
    // bl GF_AssertFail
    // mov r0, #0
    // strb r0, [r6, #1]
    // strb r0, [r6]
    // str r4, [r6, #0xc]
    // ldr r0, [sp]
    // str r5, [r6, #0x10]
    // str r0, [r6, #8]
    // ldr r1, [sp]
    // add r0, sp, #0x1c
    // bl ov07_0221F9E8
    // mov r1, #0
    // mvn r1, r1
    // ldr r0, [r6, #8]
    // add r2, r1, #0
    // bl ov07_02231E08
    // ldr r0, [r6, #8]
    // mov r1, #0
    // bl ov07_0221C4A8
    // strb r0, [r6, #2]
    // mov r0, #0xc
    // strb r0, [r6, #2]
    // str r7, [r6, #0x24]
    // mov r4, #0
    // ldrb r0, [r6, #2]
    // str r4, [sp, #4]
    // cmp r0, #0
    // ble _0222A6E2
    // ldr r0, _0222A6F8 ; =0x00000514
    // add r5, r6, #0
    // add r0, r6, r0
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // str r0, [sp, #0xc]
    // cmp r4, #0
    // beq _0222A606
    // ldr r0, [r6, #0xc]
    // ldr r1, [r6, #0x10]
    // add r2, sp, #0x1c
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x24]
    // add r1, r5, #0
    // ldr r7, [r5, #0x24]
    // add r1, #0x20
    // mov r0, #0
    // strb r0, [r1]
    // add r1, r5, #0
    // add r1, #0x21
    // strb r0, [r1]
    // bl LCRandom
    // mov r1, #0xa
    // bl _s32_div_f
    // add r1, #0xa
    // add r0, r5, #0
    // add r1, r4, r1
    // add r0, #0x22
    // strb r1, [r0]
    // bl LCRandom
    // mov r1, #6
    // bl _s32_div_f
    // add r0, r5, #0
    // add r0, #0x23
    // strb r1, [r0]
    // mov r0, #0xfe
    // lsl r0, r0, #0x16
    // str r0, [r5, #0x4c]
    // ldr r0, [r6, #8]
    // ldr r1, _0222A6FC ; =ov07_022367CE
    // str r0, [r5, #0x14]
    // ldr r0, [r6, #0xc]
    // str r0, [r5, #0x18]
    // ldr r0, [r6, #0x10]
    // str r0, [r5, #0x1c]
    // ldr r0, [sp, #0x10]
    // str r0, [r5, #0x50]
    // ldr r0, [sp, #4]
    // lsl r0, r0, #3
    // str r0, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // bl LCRandom
    // ldr r2, [sp, #8]
    // mov r1, #6
    // ldrsh r1, [r2, r1]
    // bl _s32_div_f
    // ldr r2, [sp, #8]
    // mov r0, #2
    // ldrsh r0, [r2, r0]
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // bl LCRandom
    // ldr r2, [sp, #8]
    // mov r1, #4
    // ldrsh r1, [r2, r1]
    // bl _s32_div_f
    // ldr r2, _0222A6FC ; =ov07_022367CE
    // ldr r0, [sp, #0x18]
    // ldrsh r0, [r2, r0]
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // asr r2, r0, #0x10
    // ldr r1, [sp, #0x14]
    // add r0, r7, #0
    // bl ManagedSprite_SetPositionXY
    // add r0, r7, #0
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r1, [r5, #0x4c]
    // add r0, r7, #0
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // add r0, r7, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp]
    // ldr r1, _0222A700 ; =ov07_0222A328
    // ldr r2, [sp, #0xc]
    // ldr r3, _0222A704 ; =0x0000044B
    // bl ov07_0221C3F4
    // ldr r0, [sp, #4]
    // mov r1, #6
    // add r0, r0, #1
    // bl _s32_div_f
    // ldr r0, [sp, #0x10]
    // add r4, r4, #1
    // add r0, r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // add r0, #0x40
    // str r0, [sp, #0xc]
    // ldrb r0, [r6, #2]
    // add r5, #0x40
    // cmp r4, r0
    // blt _0222A5F6
    // ldr r0, [sp]
    // ldr r1, _0222A708 ; =ov07_0222A4B4
    // ldr r3, _0222A70C ; =0x0000044D
    // add r2, r6, #0
    // bl ov07_0221C3F4
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222A6F4: .word 0x00000564
    // _0222A6F8: .word 0x00000514
    // _0222A6FC: .word ov07_022367CE
    // _0222A700: .word ov07_0222A328
    // _0222A704: .word 0x0000044B
    // _0222A708: .word ov07_0222A4B4
    // _0222A70C: .word 0x0000044D
    // TODO: decompile
}



void ov07_0222A710(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #4]
    // cmp r0, #3
    // bhi _0222A7F6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A72A: ; jump table
    // ldr r0, [r4, #8]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FA48
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0222A81C
    // add r0, r4, #0
    // add r0, #0x2c
    // bl ov07_02222AF4
    // cmp r0, #0
    // beq _0222A81C
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ov07_0221FAF8
    // add r5, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl ov07_02222D88
    // add r6, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221BFD0
    // mov r1, #0xc8
    // str r1, [sp]
    // mov r3, #3
    // str r5, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // str r6, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r1, #0
    // mov r1, #0xa0
    // add r2, r1, #0
    // add r2, #0xcc
    // lsl r3, r3, #0xe
    // bl ov07_02222CCC
    // str r0, [r4, #0x28]
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0222A81C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // cmp r0, #0x78
    // blt _0222A81C
    // ldr r0, [r4, #0x28]
    // bl ov07_02222D3C
    // mov r1, #2
    // mov r2, #0x10
    // str r1, [sp]
    // add r0, r4, #0
    // str r2, [sp, #4]
    // add r0, #0x2c
    // add r3, r2, #0
    // bl ov07_02222AC4
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0222A81C
    // add r0, r4, #0
    // add r0, #0x2c
    // bl ov07_02222AF4
    // cmp r0, #0
    // beq _0222A81C
    // ldr r0, [r4, #8]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl ov07_0221FA48
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldrb r0, [r4, #4]
    // add r0, r0, #1
    // strb r0, [r4, #4]
    // b _0222A81C
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _0222A834 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl ov07_0221EC7C
    // ldr r0, [r4, #8]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #0x24]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x20]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x10]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222A834: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov07_0222A838(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #0x54
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov07_02231FE4
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ov07_0221C4E8
    // mov r1, #2
    // str r0, [r4, #0x20]
    // bl ManagedSprite_SetOamMode
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _0222A8CC ; =0xFFFF1FFF
    // and r2, r1
    // lsr r1, r0, #0xb
    // orr r1, r2
    // str r1, [r0]
    // add r0, #0x4a
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x1b
    // orr r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _0222A8D0 ; =0xFFFFC0FF
    // and r2, r1
    // mov r1, #0x17
    // lsl r1, r1, #8
    // orr r1, r2
    // strh r1, [r0]
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ov07_0221C4E8
    // mov r1, #1
    // str r0, [r4, #0x24]
    // bl ManagedSprite_SetOamMode
    // mov r1, #0x10
    // str r1, [sp]
    // add r0, r4, #0
    // mov r2, #2
    // str r1, [sp, #4]
    // add r0, #0x2c
    // add r3, r2, #0
    // bl ov07_02222AC4
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl ov07_0221EB98
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // ldr r0, [r4, #8]
    // ldr r1, _0222A8D4 ; =ov07_0222A710
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0222A8CC: .word 0xFFFF1FFF
    // _0222A8D0: .word 0xFFFFC0FF
    // _0222A8D4: .word ov07_0222A710
    // TODO: decompile
}



void ov07_0222A8D8(void) {
    ManagedSprite_GetDrawFlag();
    ManagedSprite_TickFrame(r4);
}



void ov07_0222A8EC(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldrsh r0, [r0, r1]
    // ldr r0, [sp, #4]
    ov07_0222A8D8(*((u32*)(r0 + 0x30)), 0x1c);
    // ldr r0, [sp, #4]
    ov07_0222A8D8(*((u32*)(r0 + 0x34)));
    // ldr r0, [sp, #4]
    *((u16*)(r0 + 0x1c)) = (r0 - 1);
    // ldr r0, [sp, #4]
    ov07_0222A8D8(*((u32*)(r0 + 0x28)), (r0 - 1));
    // ldr r0, [sp, #4]
    ov07_0222A8D8(*((u32*)(r0 + 0x2c)));
    // ldr r4, [sp, #4]
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x1e)) = (0x1e + 1);
    // ldrsh r0, [r4, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x28)), 0);
    // ldr r4, [sp, #4]
    Sprite_DeleteAndFreeResources(*((u32*)((r4 + 2) + 0x28)));
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    ov07_0221C448(*((u32*)(r0 + 4)));
    // ldr r0, [sp, #4]
    Heap_Free();
    // ldr r0, [sp, #4]
    SpriteSystem_DrawSprites(*((u32*)(r0 + 0x10)));
}



void ov07_0222A988(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // mov r1, #0x38
    // add r5, r0, #0
    // add r4, r3, #0
    // bl ov07_022324D8
    // add r6, r0, #0
    // mov r0, #0xa
    // strh r0, [r6, #0x1c]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02231FE4
    // ldr r1, [r6, #4]
    // add r0, sp, #0
    // bl ov07_0221F9E8
    // str r4, [r6, #0x28]
    // mov r0, #0
    // strh r0, [r6, #0x1e]
    // mov r7, #1
    // add r4, r6, #2
    // add r5, r6, #4
    // mov r0, #0
    // strh r0, [r4, #0x1e]
    // ldr r0, [r6, #8]
    // ldr r1, [r6, #0x10]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x28]
    // add r7, r7, #1
    // add r4, r4, #2
    // add r5, r5, #4
    // cmp r7, #4
    // blt _0222A9B8
    // ldr r0, [r6, #0x28]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // ldr r0, [r6, #0x2c]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // mov r1, #0x1f
    // ldr r0, [r6, #0x28]
    // mvn r1, r1
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // mov r1, #0x1f
    // ldr r0, [r6, #0x2c]
    // mvn r1, r1
    // mov r2, #0x20
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r6, #0x30]
    // mov r1, #0x20
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // mov r1, #0x20
    // ldr r0, [r6, #0x34]
    // add r2, r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r6, #4]
    // ldr r1, _0222AA1C ; =ov07_0222A8EC
    // add r2, r6, #0
    // bl ov07_0221C410
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _0222AA1C: .word ov07_0222A8EC
    // TODO: decompile
}



void ov07_0222AA20(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // mov r4, #0
    // str r0, [sp, #0x1c]
    // str r4, [sp, #0x20]
    // add r6, r5, #0
    // add r7, r5, #0
    // mov r0, #0x22
    // ldrsh r0, [r6, r0]
    // add r0, r0, #1
    // strh r0, [r6, #0x22]
    // mov r0, #0x22
    // ldrsh r0, [r6, r0]
    // cmp r0, #0x14
    // blt _0222AA82
    // ldr r0, [r7, #0x2c]
    // bl ov07_0222A8D8
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x6e
    // bne _0222AA82
    // mov r1, #0
    // mvn r1, r1
    // ldr r0, [r5, #4]
    // add r2, r1, #0
    // bl ov07_02231E08
    // ldr r0, [r5, #0x2c]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x38]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // mov r0, #0xf
    // str r0, [r5, #0x54]
    // mov r0, #0
    // str r0, [r5, #0x58]
    // add r4, r4, #1
    // add r6, r6, #2
    // add r7, r7, #4
    // cmp r4, #4
    // blt _0222AA30
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x32
    // bne _0222AAC6
    // ldr r0, [r5, #4]
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // ldr r0, _0222ACA0 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // ldr r0, _0222ACA4 ; =0x000003EA
    // str r0, [sp, #0x18]
    // ldr r3, [r5, #0x1c]
    // ldr r0, [r5, #0x18]
    // lsl r3, r3, #0x14
    // lsr r3, r3, #0x10
    // bl ov07_02222F10
    // str r0, [r5, #0x3c]
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x3c
    // bne _0222AB00
    // ldr r0, [r5, #4]
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, _0222ACA0 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // ldr r0, _0222ACA4 ; =0x000003EA
    // str r0, [sp, #0x18]
    // ldr r3, [r5, #0x1c]
    // ldr r0, [r5, #0x18]
    // lsl r3, r3, #0x14
    // lsr r3, r3, #0x10
    // bl ov07_02222F10
    // str r0, [r5, #0x40]
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x46
    // bne _0222AB3A
    // ldr r0, [r5, #4]
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // ldr r0, _0222ACA0 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // ldr r0, _0222ACA4 ; =0x000003EA
    // str r0, [sp, #0x18]
    // ldr r3, [r5, #0x1c]
    // ldr r0, [r5, #0x18]
    // lsl r3, r3, #0x14
    // lsr r3, r3, #0x10
    // bl ov07_02222F10
    // str r0, [r5, #0x44]
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x50
    // bne _0222AB74
    // ldr r0, [r5, #4]
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, _0222ACA0 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // ldr r0, _0222ACA4 ; =0x000003EA
    // str r0, [sp, #0x18]
    // ldr r3, [r5, #0x1c]
    // ldr r0, [r5, #0x18]
    // lsl r3, r3, #0x14
    // lsr r3, r3, #0x10
    // bl ov07_02222F10
    // str r0, [r5, #0x48]
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x5a
    // bne _0222ABAE
    // ldr r0, [r5, #4]
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // ldr r0, _0222ACA0 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // ldr r0, _0222ACA4 ; =0x000003EA
    // str r0, [sp, #0x18]
    // ldr r3, [r5, #0x1c]
    // ldr r0, [r5, #0x18]
    // lsl r3, r3, #0x14
    // lsr r3, r3, #0x10
    // bl ov07_02222F10
    // str r0, [r5, #0x4c]
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x64
    // bne _0222ABE8
    // ldr r0, [r5, #4]
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // str r2, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, _0222ACA0 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // ldr r0, _0222ACA4 ; =0x000003EA
    // str r0, [sp, #0x18]
    // ldr r3, [r5, #0x1c]
    // ldr r0, [r5, #0x18]
    // lsl r3, r3, #0x14
    // lsr r3, r3, #0x10
    // bl ov07_02222F10
    // str r0, [r5, #0x50]
    // mov r1, #0x22
    // ldrsh r0, [r5, r1]
    // cmp r0, #0x6e
    // bne _0222AC22
    // sub r1, #0x23
    // ldr r0, [r5, #4]
    // add r2, r1, #0
    // bl ov07_02231E08
    // ldr r0, [r5, #0x2c]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x38]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // mov r0, #0xf
    // str r0, [r5, #0x54]
    // mov r0, #0
    // str r0, [r5, #0x58]
    // mov r0, #0x22
    // ldrsh r0, [r5, r0]
    // cmp r0, #0x6e
    // blt _0222AC5A
    // ldr r0, [r5, #0x54]
    // cmp r0, #0
    // ble _0222AC34
    // sub r0, r0, #1
    // str r0, [r5, #0x54]
    // ldr r0, [r5, #0x58]
    // cmp r0, #0xf
    // bge _0222AC3E
    // add r0, r0, #1
    // str r0, [r5, #0x58]
    // ldr r0, [r5, #0x58]
    // ldr r1, [r5, #0x54]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222ACA8 ; =0x04000052
    // strh r1, [r0]
    // ldr r0, [r5, #0x54]
    // cmp r0, #0
    // bne _0222AC5A
    // ldr r0, [r5, #0x58]
    // cmp r0, #0xf
    // bne _0222AC5A
    // mov r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // cmp r0, #4
    // bne _0222AC96
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, #0x2c]
    // bl Sprite_DeleteAndFreeResources
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #4
    // blt _0222AC64
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, #0x3c]
    // bl ov07_02222EF8
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #6
    // blt _0222AC76
    // ldr r0, [r5, #4]
    // ldr r1, [sp, #0x1c]
    // bl ov07_0221C448
    // add r0, r5, #0
    // bl Heap_Free
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x10]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0222ACA0: .word 0x0000FFFF
    // _0222ACA4: .word 0x000003EA
    // _0222ACA8: .word 0x04000052
    // TODO: decompile
}



void ov07_0222ACAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // mov r1, #0x5c
    // str r0, [sp]
    // add r5, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0xa
    // strh r0, [r4, #0x20]
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r1, [r4, #4]
    // add r0, sp, #0xc
    // bl ov07_0221F9E8
    // str r5, [r4, #0x2c]
    // mov r0, #0
    // strh r0, [r4, #0x22]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r7, #5
    // add r6, r4, #2
    // add r5, r4, #4
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x1e
    // sub r2, r2, r1
    // mov r0, #0x1e
    // ror r2, r0
    // add r0, r1, r2
    // add r0, r7, r0
    // strh r0, [r6, #0x22]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0x10]
    // add r2, sp, #0xc
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x2c]
    // ldr r0, [sp, #8]
    // add r7, r7, #5
    // add r0, r0, #1
    // add r6, r6, #2
    // add r5, r5, #4
    // str r0, [sp, #8]
    // cmp r0, #4
    // blt _0222ACE0
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // ldr r0, [sp]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl ov07_0221FA48
    // mov r1, #0
    // add r5, r0, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r0, r5, #0
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // ldr r0, [sp]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _0222AD62
    // mov r7, #0x8c
    // b _0222AD64
    // mov r7, #0x54
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [r5, #0x2c]
    // ldr r1, [sp, #4]
    // add r2, r7, #0
    // bl ManagedSprite_SetPositionXY
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _0222AD68
    // ldr r0, [sp]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl ov07_0223192C
    // cmp r0, #3
    // ldr r0, [r4, #0x2c]
    // bne _0222ADAE
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x34]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x30]
    // mov r1, #0x12
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x38]
    // mov r1, #0x12
    // bl ManagedSprite_SetDrawPriority
    // b _0222ADCC
    // mov r1, #0x12
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x34]
    // mov r1, #0x12
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x30]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x38]
    // mov r1, #0xa
    // bl ManagedSprite_SetDrawPriority
    // mov r1, #0x1f
    // ldr r0, [r4, #0x2c]
    // mvn r1, r1
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // mov r1, #0x27
    // ldr r0, [r4, #0x38]
    // mvn r1, r1
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #0x34]
    // mov r1, #0x20
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #0x30]
    // mov r1, #0x28
    // mov r2, #4
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #0x2c]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // str r0, [r4, #0x1c]
    // ldr r0, [r4, #4]
    // ldr r1, _0222AE10 ; =ov07_0222AA20
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222AE10: .word ov07_0222AA20
    // TODO: decompile
}



void ov07_0222AE14(void) {
    // ldrb r0, [r4]
    // add r0, #0x60
    ov07_0222260C(r1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x28)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 0);
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    ov07_02232508(r4);
    // add r0, #0x60
    // add r1, sp, #8
    // add r2, sp, #4
    ov07_02222644(r4);
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x28)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226FC(*((u32*)(r4 + 0x28)), 0x58, 0x5a, *((u32*)(r4 + 0x74)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x28)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x3c)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x50)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)));
}



void ov07_0222AEA0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // mov r1, #0x84
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // mov r1, #1
    // str r0, [r4, #0x24]
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x58
    // strh r0, [r1]
    // mov r0, #0x58
    // ldrsh r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0x5c
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FAA0
    // add r1, r4, #0
    // add r1, #0x5a
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x28]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0x3c]
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221C4E8
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // add r0, r5, #0
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x28]
    // bl ManagedSprite_SetPriority
    // add r0, r5, #0
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x3c]
    // bl ManagedSprite_SetPriority
    // add r0, r5, #0
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x50]
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA04
    // sub r0, r0, #3
    // cmp r0, #1
    // ldr r0, [r4, #0x28]
    // bhi _0222AF6E
    // mov r1, #0x1e
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x3c]
    // mov r1, #0x32
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x50]
    // mov r1, #0x46
    // bl ManagedSprite_SetDrawPriority
    // b _0222AF84
    // mov r1, #0x3c
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x3c]
    // mov r1, #0x46
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x50]
    // mov r1, #0x32
    // bl ManagedSprite_SetDrawPriority
    // mov r2, #0x14
    // mov r1, #0x64
    // str r2, [sp]
    // str r1, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x60
    // add r3, r1, #0
    // bl ov07_02222590
    // ldr r0, [r4, #4]
    // ldr r1, _0222AFA8 ; =ov07_0222AE14
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0222AFA8: .word ov07_0222AE14
    // TODO: decompile
}



void ov07_0222AFAC(void) {
    // ldrb r0, [r4]
    // add r0, #0xa0
    // ldrb r0, [r0]
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // add r2, #0x30
    // str r0, [sp, #4]
    // add r0, #0x34
    // asr r2, r2, #0x10
    ov07_02222268(r1, (r1 << 0x10));
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    // ldrsh r1, [r4, r0]
    // asr r3, r0, #0x10
    // add r2, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x58
    // asr r2, r2, #0x10
    ov07_02222268(r4, (r1 << 0x10));
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    // ldrsh r1, [r4, r0]
    // asr r3, r0, #0x10
    // add r2, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x7c
    // asr r2, r2, #0x10
    ov07_02222268(r4, (r1 << 0x10));
    // ldrsh r3, [r4, r0]
    // ldrsh r2, [r4, r0]
    // str r3, [sp]
    // add r1, #0x30
    // str r0, [sp, #4]
    // add r0, #0x34
    // asr r1, r1, #0x10
    ov07_02222268(r4, (r2 << 0x10));
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // ldrsh r2, [r4, r0]
    // asr r3, r0, #0x10
    // add r1, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x58
    // asr r1, r1, #0x10
    ov07_02222268(r4, (r2 << 0x10));
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // ldrsh r2, [r4, r0]
    // asr r3, r0, #0x10
    // add r1, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x7c
    // asr r1, r1, #0x10
    ov07_02222268(r4, (r2 << 0x10));
    // add r0, #0xa0
    // ldrb r0, [r0]
    // add r0, #0xa0
    // strb r1, [r0]
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x58
    ov07_022222F0(r4, *((u32*)(r4 + 0x28)));
    // add r0, #0x34
    ov07_02222314(r4, *((u32*)(r4 + 0x24)));
    // add r0, #0x7c
    ov07_022222F0(r4, *((u32*)(r4 + 0x30)));
    // add r0, #0xa0
    // ldrb r0, [r0]
    // ldrb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    ov07_02232508(r4);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x28)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)));
}



void ov07_0222B130(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // mov r1, #0xa8
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xa1
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #8
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xa3
    // strb r1, [r0]
    // sub r1, #9
    // ldr r0, [r4, #4]
    // add r2, r1, #0
    // bl ov07_02231E08
    // add r0, r4, #0
    // add r0, #0xa2
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xa3
    // ldrb r0, [r0]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222B2A0 ; =0x04000052
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x24]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x20]
    // ldr r0, [r4, #0x24]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x22]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0x30]
    // ldr r0, [r4, #0x24]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // neg r1, r0
    // add r0, r4, #0
    // add r0, #0xa4
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA80
    // add r7, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA90
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #4]
    // ldr r5, [r4, #0x28]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // add r0, r5, #0
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r5]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA78
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, #4]
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r6, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xc4
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // add r2, r7, #0
    // bl PaletteData_LoadNarc_CustomTint
    // add r0, r5, #0
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #4]
    // ldr r5, [r4, #0x30]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // add r0, r5, #0
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r5]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA78
    // str r0, [sp, #0x20]
    // ldr r0, [r4, #4]
    // bl ov07_0221BFD0
    // add r3, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r6, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xc4
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // add r2, r7, #0
    // bl PaletteData_LoadNarc_CustomTint
    // add r0, r5, #0
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #4]
    // ldr r1, _0222B2A4 ; =ov07_0222AFAC
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222B2A0: .word 0x04000052
    // _0222B2A4: .word ov07_0222AFAC
    // TODO: decompile
}



void ov07_0222B2A8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrsh r0, [r4, r0]
    *((u16*)(r1 + 0x1e)) = (0x1e + 1);
    // ldrsh r0, [r4, r0]
    ov07_0222A8D8(*((u32*)(r1 + 0x30)));
    // ldrsh r0, [r4, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x30)), 0);
    // ldr r4, [sp, #4]
    Sprite_DeleteAndFreeResources(*((u32*)((r4 + 2) + 0x30)));
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    ov07_0221C448(*((u32*)(r0 + 4)));
    // ldr r0, [sp, #4]
    Heap_Free();
    // ldr r0, [sp, #4]
    SpriteSystem_DrawSprites(*((u32*)(r0 + 0x10)));
}



void ov07_0222B320(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x58
    // mov r1, #0x74
    // add r6, r0, #0
    // add r5, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // mov r0, #0xa
    // strh r0, [r4, #0x1c]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r1, [r4, #4]
    // add r0, sp, #0x24
    // bl ov07_0221F9E8
    // str r5, [r4, #0x30]
    // mov r6, #1
    // add r5, r4, #4
    // mov r7, #0x1f
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0x10]
    // add r2, sp, #0x24
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x30]
    // lsr r1, r6, #0x1f
    // lsl r0, r6, #0x1f
    // sub r0, r0, r1
    // ror r0, r7
    // add r0, r1, r0
    // beq _0222B36C
    // ldr r0, [r5, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #8
    // blt _0222B34C
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // mov r1, #0
    // add r5, r0, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // add r0, r5, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [sp, #0x1c]
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r0, [sp, #0x1c]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #0x14
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x50
    // add r1, r7, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov07_02222268
    // mov r7, #0
    // ldr r0, [r4, #4]
    // add r6, r7, #0
    // str r7, [sp, #0x14]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0223192C
    // cmp r0, #4
    // bne _0222B3F0
    // mov r0, #1
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // str r0, [sp, #0x20]
    // add r0, #0x50
    // add r5, r4, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // bl ov07_022222B4
    // str r0, [sp, #0x18]
    // lsr r2, r7, #0x1f
    // lsl r1, r7, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // beq _0222B432
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // bne _0222B42E
    // cmp r6, #8
    // bge _0222B432
    // mov r1, #0x50
    // mov r2, #0x52
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x30]
    // bl ManagedSprite_SetPositionXY
    // add r5, r5, #4
    // add r6, r6, #1
    // b _0222B432
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r7, r7, #1
    // cmp r0, #1
    // beq _0222B3FA
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ov07_0221FB04
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // mov r1, #2
    // bl ov07_0221FB04
    // add r7, r0, #0
    // mov r6, #0
    // str r4, [sp, #0xc]
    // add r5, r4, #0
    // mov r0, #8
    // sub r0, r0, r6
    // str r0, [sp, #8]
    // lsl r1, r0, #2
    // ldr r0, [sp, #0xc]
    // strh r1, [r0, #0x1e]
    // ldr r0, [r4, #4]
    // bl ov07_0221BFC0
    // cmp r0, #0
    // bne _0222B4B0
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _0222B492
    // cmp r6, #4
    // ldr r0, [r5, #0x30]
    // bge _0222B48A
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // b _0222B4A6
    // ldr r1, [sp, #0x10]
    // bl ManagedSprite_SetPriority
    // b _0222B4A6
    // cmp r6, #4
    // ldr r0, [r5, #0x30]
    // blt _0222B4A0
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // b _0222B4A6
    // ldr r1, [sp, #0x10]
    // bl ManagedSprite_SetPriority
    // ldr r0, [r5, #0x30]
    // ldr r1, [sp, #8]
    // bl ManagedSprite_SetDrawPriority
    // b _0222B4C0
    // ldr r0, [r5, #0x30]
    // add r1, r6, #0
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0x30]
    // add r1, r7, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [sp, #0xc]
    // add r6, r6, #1
    // add r0, r0, #2
    // add r5, r5, #4
    // str r0, [sp, #0xc]
    // cmp r6, #8
    // blt _0222B454
    // ldr r0, [r4, #4]
    // ldr r1, _0222B4DC ; =ov07_0222B2A8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B4DC: .word ov07_0222B2A8
    // TODO: decompile
}



void ov07_0222B4E0(void) {
    // push {r4, r5, lr}
    // sub sp, #0x1c
    // add r5, r1, #0
    // add r4, r0, #0
    // ldrb r0, [r5]
    // cmp r0, #0
    // beq _0222B4F6
    // cmp r0, #1
    // beq _0222B584
    // cmp r0, #2
    // b _0222B5E2
    // ldr r0, [r5, #0x28]
    // cmp r0, #0xe
    // ble _0222B54C
    // ldr r0, [r5, #0x30]
    // ldr r1, _0222B628 ; =0x3E4CCCCD
    // bl _fsub
    // str r0, [r5, #0x30]
    // ldr r0, [r5, #0x2c]
    // ldr r1, _0222B628 ; =0x3E4CCCCD
    // bl _fadd
    // str r0, [r5, #0x2c]
    // ldr r0, [r5, #0x30]
    // bl _f2d
    // ldr r2, _0222B62C ; =0x9999999A
    // ldr r3, _0222B630 ; =0x3FC99999
    // bl _dleq
    // bhi _0222B530
    // ldrb r0, [r5]
    // mov r1, #0
    // add r0, r0, #1
    // strb r0, [r5]
    // ldr r0, [r5, #0x1c]
    // bl ManagedSprite_SetDrawFlag
    // b _0222B60A
    // mov r0, #0x36
    // ldrsb r0, [r5, r0]
    // bl _fflt
    // add r1, r0, #0
    // ldr r0, [r5, #0x2c]
    // bl _fmul
    // add r1, r0, #0
    // ldr r0, [r5, #0x1c]
    // ldr r2, [r5, #0x30]
    // bl ManagedSprite_SetAffineScale
    // b _0222B60A
    // add r0, r5, #0
    // add r0, #0x34
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0x35
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x35
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0x34
    // ldrb r1, [r0]
    // add r0, r5, #0
    // add r0, #0x35
    // ldrb r0, [r0]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222B634 ; =0x04000052
    // strh r1, [r0]
    // ldr r0, [r5, #0x28]
    // add r0, r0, #1
    // str r0, [r5, #0x28]
    // b _0222B60A
    // ldr r0, [r5, #0x3c]
    // bl ov07_02222EE8
    // cmp r0, #0
    // bne _0222B60A
    // ldr r0, [r5, #0x38]
    // bl ov07_02222EF8
    // ldr r0, [r5, #0x3c]
    // bl ov07_02222EF8
    // ldr r0, [r5, #0x24]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // add r4, r0, #0
    // ldr r0, [r5, #4]
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r2, #0
    // lsl r3, r4, #0x14
    // str r2, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0xf
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r0, _0222B638 ; =0x0000FFFF
    // mov r2, #2
    // str r0, [sp, #0x14]
    // ldr r0, _0222B63C ; =0x0000044C
    // lsr r3, r3, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x18]
    // bl ov07_02222F10
    // str r0, [r5, #0x3c]
    // ldrb r0, [r5]
    // add r0, r0, #1
    // strb r0, [r5]
    // b _0222B60A
    // ldr r0, [r5, #0x3c]
    // bl ov07_02222EE8
    // cmp r0, #0
    // bne _0222B60A
    // ldr r0, [r5, #0x20]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, #0x3c]
    // bl ov07_02222EF8
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // bl ov07_0221C448
    // add r0, r5, #0
    // bl Heap_Free
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // ldr r0, [r5, #0x1c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, #0x20]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, #0x24]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, #0xc]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // nop
    // _0222B628: .word 0x3E4CCCCD
    // _0222B62C: .word 0x9999999A
    // _0222B630: .word 0x3FC99999
    // _0222B634: .word 0x04000052
    // _0222B638: .word 0x0000FFFF
    // _0222B63C: .word 0x0000044C
    // TODO: decompile
}



void ov07_0222B640(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // mov r1, #0x40
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x1c]
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0x20]
    // ldr r0, [r4, #4]
    // mov r1, #2
    // bl ov07_0221C4E8
    // str r0, [r4, #0x24]
    // mov r6, #0
    // str r6, [r4, #0x28]
    // add r0, r5, #0
    // sub r6, #0x20
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_02222004
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // mul r0, r6
    // add r6, r0, #0
    // mov r0, #0xfe
    // lsl r0, r0, #0x16
    // str r0, [r4, #0x2c]
    // str r0, [r4, #0x30]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221FB78
    // cmp r0, #1
    // bne _0222B6AA
    // mov r1, #0
    // mvn r1, r1
    // b _0222B6AC
    // mov r1, #1
    // add r0, r4, #0
    // add r0, #0x36
    // strb r1, [r0]
    // add r1, sp, #0x24
    // ldr r0, [r4, #0x20]
    // add r1, #2
    // add r2, sp, #0x24
    // bl ManagedSprite_GetPositionXY
    // add r2, sp, #0x24
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // mov r3, #0
    // ldrsh r2, [r2, r3]
    // add r1, r1, r6
    // lsl r1, r1, #0x10
    // ldr r0, [r4, #0x1c]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // mov r0, #0x36
    // ldrsb r0, [r4, r0]
    // bl _fflt
    // add r1, r0, #0
    // ldr r0, [r4, #0x2c]
    // bl _fmul
    // add r1, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r2, [r4, #0x30]
    // bl ManagedSprite_SetAffineScale
    // ldr r0, [r4, #0x1c]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r2, #0
    // lsl r3, r6, #0x14
    // str r2, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // ldr r0, _0222B888 ; =0x0000FFFF
    // mov r2, #2
    // str r0, [sp, #0x14]
    // ldr r0, _0222B88C ; =0x0000044C
    // lsr r3, r3, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x18]
    // bl ov07_02222F10
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x24]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #1
    // bl ObjPlttTransfer_GetPaletteVramOffset
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // add r1, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r2, #0
    // lsl r3, r6, #0x14
    // str r2, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // ldr r0, _0222B888 ; =0x0000FFFF
    // mov r2, #2
    // str r0, [sp, #0x14]
    // ldr r0, _0222B88C ; =0x0000044C
    // lsr r3, r3, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x18]
    // bl ov07_02222F10
    // str r0, [r4, #0x3c]
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov07_02231924
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [r4, #4]
    // bl ov07_0221BFC0
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, sp, #0x2c
    // bl ov07_02231A20
    // add r2, sp, #0x28
    // ldr r0, [r4, #0x1c]
    // add r1, sp, #0x28
    // add r2, #2
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _0222B7C8
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // mov r5, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // add r1, r5, #0
    // bl ManagedSprite_SetDrawPriority
    // b _0222B7DA
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawPriority
    // mov r5, #2
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov07_0221FA1C
    // add r7, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov07_0221FA10
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov07_0221FA2C
    // str r0, [sp, #0x20]
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov07_0221FA38
    // ldr r1, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // lsl r0, r7, #0x10
    // lsl r1, r1, #0x18
    // lsl r2, r5, #0x18
    // lsl r3, r3, #0x18
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl GetMonPicHeightBySpeciesGenderForm
    // add r2, r0, #0
    // add r5, sp, #0x24
    // mov r3, #0xa
    // ldrsh r3, [r5, r3]
    // mov r1, #4
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // ldr r0, [r4, #0x1c]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0xf
    // add r0, #0x35
    // strb r1, [r0]
    // sub r1, #0x10
    // ldr r0, [r4, #4]
    // add r2, r1, #0
    // bl ov07_02231E08
    // add r0, r4, #0
    // add r0, #0x34
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x35
    // ldrb r0, [r0]
    // add r2, r4, #0
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0222B890 ; =0x04000052
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // ldr r1, _0222B894 ; =ov07_0222B4E0
    // bl ov07_0221C410
    // add r1, r4, #0
    // bl ov07_0222B4E0
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222B888: .word 0x0000FFFF
    // _0222B88C: .word 0x0000044C
    // _0222B890: .word 0x04000052
    // _0222B894: .word ov07_0222B4E0
    // TODO: decompile
}



void ov07_0222B898(void) {
    // ldrb r0, [r4]
    // add r2, r4, r0
    // asr r3, r0, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x30
    // asr r2, r2, #0x10
    ov07_02222268(r1, 0x20, (*((u32*)(r2 + 0x6c)) << 0x10));
    // add r2, r4, r2
    // add r2, #0x84
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 2, *((u32*)(*((u32*)(r4 + 0x68)) << 2)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 0x2c, 1);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x30
    ov07_022222B4(r4);
    *((u32*)(r4 + 0x68)) = (*((u32*)(r4 + 0x68)) + 1);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r1, sp, #8
    ov07_0221C7B8(*((u32*)(r4 + 4)), 3);
    ov07_0221BFD0(*((u32*)(r4 + 4)));
    // add r0, sp, #8
    ov07_0223494C(r0);
    ov07_0221BFD0();
    // add r0, sp, #8
    ov07_0223475C(r0);
    // strb r0, [r4]
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 0);
    *((u16*)(r4 + 0x20)) = r0;
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 0, 0x30);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 1, 0x32);
    Pokepic_SetAttr(*((u32*)(r4 + 0x24)), 0x2c, 0);
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}



void ov07_0222B988(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // mov r1, #0x90
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02231FE4
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r2, r4, #0
    // ldr r0, [r4, #4]
    // add r2, #0x5c
    // bl ov07_02231A50
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r2, r4, #0
    // ldr r0, [r4, #4]
    // add r2, #0x60
    // bl ov07_02231A50
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _0222B9DA
    // mov r1, #1
    // b _0222B9DE
    // mov r1, #0
    // mvn r1, r1
    // add r0, r4, #0
    // add r0, #0x54
    // strh r1, [r0]
    // ldr r0, [r4, #4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0223192C
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0223192C
    // cmp r6, r0
    // bne _0222BA0A
    // mov r0, #1
    // b _0222BA0C
    // mov r0, #0
    // str r0, [r4, #0x58]
    // mov r1, #0
    // add r0, r5, #0
    // str r1, [r4, #0x68]
    // bl ov07_0221C4A8
    // add r2, r4, #0
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, #0x1c
    // add r3, sp, #0
    // bl ov07_02232020
    // ldr r0, [r4, #0x24]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // mov r1, #0x5e
    // ldrsh r2, [r4, r1]
    // mov r3, #0x54
    // sub r0, r0, r2
    // ldrsh r2, [r4, r3]
    // cmp r2, #0
    // ble _0222BA7E
    // add r2, r3, #0
    // add r2, #0xfb
    // str r2, [r4, #0x6c]
    // sub r3, #0xa4
    // str r3, [r4, #0x70]
    // mov r2, #0x5c
    // ldrsh r2, [r4, r2]
    // str r2, [r4, #0x74]
    // ldrsh r2, [r4, r1]
    // add r2, r2, r0
    // str r2, [r4, #0x78]
    // mov r2, #0x62
    // ldrsh r2, [r4, r2]
    // add r2, r2, r0
    // str r2, [r4, #0x7c]
    // ldrsh r1, [r4, r1]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #0xa
    // add r0, #0x84
    // str r1, [r0]
    // add r0, r4, #0
    // ldr r1, _0222BAD4 ; =0xFFFFFD76
    // add r0, #0x88
    // str r1, [r0]
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl Pokepic_GetAttr
    // b _0222BABE
    // add r2, r3, #0
    // sub r2, #0xa4
    // str r2, [r4, #0x6c]
    // add r3, #0xfb
    // str r3, [r4, #0x70]
    // mov r2, #0x5c
    // ldrsh r2, [r4, r2]
    // str r2, [r4, #0x74]
    // ldrsh r2, [r4, r1]
    // add r2, r2, r0
    // str r2, [r4, #0x78]
    // mov r2, #0x62
    // ldrsh r2, [r4, r2]
    // add r2, r2, r0
    // str r2, [r4, #0x7c]
    // ldrsh r1, [r4, r1]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r4, #0
    // ldr r1, _0222BAD4 ; =0xFFFFFD76
    // add r0, #0x84
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #0xa
    // add r0, #0x88
    // str r1, [r0]
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x8c
    // str r0, [r1]
    // ldr r0, [r4, #4]
    // ldr r1, _0222BAD8 ; =ov07_0222B898
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222BAD4: .word 0xFFFFFD76
    // _0222BAD8: .word ov07_0222B898
    // TODO: decompile
}



void ov07_0222BADC(void) {
}



void ov07_0222BAF4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r1, #0
    // add r2, r0, #0
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #3
    // bls _0222BB08
    // b _0222BC2A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222BB14: ; jump table
    // ldr r2, [r4, #0x10]
    // add r2, #0x4f
    // str r2, [r4, #0x10]
    // cmp r2, #0x50
    // blt _0222BB44
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add sp, #4
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x20
    // strb r1, [r0]
    // ldr r1, [r4, #0x14]
    // mov r0, #1
    // eor r0, r1
    // str r0, [r4, #0x14]
    // mov r0, #0
    // str r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // bne _0222BB60
    // mov r0, #2
    // str r0, [sp]
    // ldr r3, [r4]
    // ldr r0, [r4, #0x1c]
    // add r3, r3, #2
    // mov r1, #0
    // lsl r3, r3, #1
    // bl ov07_0222BADC
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #2
    // str r0, [sp]
    // ldr r3, [r4]
    // mov r1, #0x50
    // add r3, r3, #2
    // ldr r0, [r4, #0x1c]
    // sub r1, r1, r2
    // lsl r3, r3, #1
    // bl ov07_0222BADC
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // mov r3, #0xff
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // ldr r0, [r4, #0xc]
    // lsl r3, r3, #8
    // add r2, r0, #1
    // str r2, [r4, #0xc]
    // ldr r6, [r4, #8]
    // ldr r1, [r4, #4]
    // lsl r0, r6, #8
    // add r5, r0, #0
    // add r6, #0x50
    // lsl r0, r6, #0x18
    // and r5, r3
    // lsr r0, r0, #0x18
    // lsl r1, r1, #8
    // orr r5, r0
    // ldr r0, _0222BC74 ; =0x04000040
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // strh r5, [r0]
    // orr r1, r3
    // strh r1, [r0, #4]
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r4, #0x20
    // add sp, #4
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // mov r3, #0xff
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // ldr r0, [r4, #0xc]
    // lsl r3, r3, #8
    // add r2, r0, #1
    // str r2, [r4, #0xc]
    // ldr r6, [r4, #8]
    // ldr r1, [r4, #4]
    // lsl r0, r6, #8
    // add r5, r0, #0
    // add r6, #0x50
    // lsl r0, r6, #0x18
    // and r5, r3
    // lsr r0, r0, #0x18
    // lsl r1, r1, #8
    // orr r5, r0
    // ldr r0, _0222BC74 ; =0x04000040
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // strh r5, [r0]
    // orr r1, r3
    // strh r1, [r0, #4]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // cmp r0, #0x26
    // ble _0222BC06
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r4, #0x20
    // add sp, #4
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add r4, #0x20
    // add sp, #4
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #0x1c]
    // mov r1, #0xe
    // mov r2, #0
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r4, #0x20
    // add sp, #4
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r3, [r0]
    // ldr r1, _0222BC78 ; =0xFFFF1FFF
    // and r1, r3
    // add r3, r0, #0
    // str r1, [r0]
    // add r3, #0x48
    // ldrh r5, [r3]
    // mov r1, #0x3f
    // bic r5, r1
    // strh r5, [r3]
    // add r3, r0, #0
    // add r3, #0x4a
    // ldrh r5, [r3]
    // bic r5, r1
    // add r1, r0, #0
    // strh r5, [r3]
    // mov r3, #0
    // add r1, #0x40
    // strh r3, [r1]
    // add r0, #0x44
    // strh r3, [r0]
    // ldr r0, [r4, #0x24]
    // add r1, r2, #0
    // bl ov07_0221C448
    // ldr r0, [r4, #0x1c]
    // ldr r2, [r4, #0x18]
    // mov r1, #0x17
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0222BC74: .word 0x04000040
    // _0222BC78: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov07_0222BC7C(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x50
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x20
    // bl ov07_02231FE4
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x1c]
    // mov r0, #0
    // str r0, [r4]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_02231924
    // cmp r0, #3
    // beq _0222BCBC
    // cmp r0, #4
    // bne _0222BCD0
    // add r0, r5, #0
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // sub r1, r1, #1
    // lsl r1, r1, #0x18
    // mov r0, #2
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x17
    // bl Pokepic_GetAttr
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0x17
    // mov r2, #8
    // bl Pokepic_SetAttr
    // sub r6, #0x28
    // str r6, [r4, #8]
    // add r5, #0x28
    // mov r6, #1
    // lsl r6, r6, #0x1a
    // add r3, r6, #0
    // str r5, [r4, #4]
    // mov r1, #0
    // str r1, [r4, #0x10]
    // ldr r0, [r4, #4]
    // add r3, #0x48
    // str r0, [r4, #0xc]
    // str r1, [r4, #0x14]
    // ldr r1, [r6]
    // ldr r0, _0222BD88 ; =0xFFFF1FFF
    // and r1, r0
    // lsr r0, r6, #0xd
    // orr r0, r1
    // str r0, [r6]
    // ldrh r2, [r3]
    // mov r1, #0x3f
    // mov r0, #0x1f
    // bic r2, r1
    // orr r0, r2
    // mov r2, #0x20
    // orr r0, r2
    // strh r0, [r3]
    // add r3, r6, #0
    // add r3, #0x4a
    // ldrh r5, [r3]
    // mov r0, #0x1b
    // bic r5, r1
    // orr r0, r5
    // orr r0, r2
    // strh r0, [r3]
    // ldr r2, [r4, #8]
    // mov r0, #0xff
    // lsl r1, r2, #8
    // add r2, #0x50
    // lsl r0, r0, #8
    // lsl r2, r2, #0x18
    // and r1, r0
    // lsr r2, r2, #0x18
    // orr r2, r1
    // add r1, r6, #0
    // ldr r5, [r4, #0xc]
    // ldr r3, [r4, #4]
    // add r1, #0x40
    // strh r2, [r1]
    // lsl r1, r3, #8
    // and r1, r0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // add r6, #0x44
    // strh r0, [r6]
    // ldr r0, [r4, #0x24]
    // ldr r1, _0222BD8C ; =ov07_0222BAF4
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // nop
    // _0222BD88: .word 0xFFFF1FFF
    // _0222BD8C: .word ov07_0222BAF4
    // TODO: decompile
}



void ov07_0222BD90(void) {
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0xc
    ov07_02222240(r1, 0xe8, 0xea, *((u32*)(r1 + 8)));
    // str r0, [sp]
    // add r0, #0x38
    ov07_02222914(r4);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
    // add r2, sp, #0
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0, 0xe8);
    // ldrsh r2, [r4, r2]
    // sub r2, #8
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 1, 0xea);
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
}



void ov07_0222BE00(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0xf0
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [r4, #8]
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0xe8
    // strh r0, [r1]
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0xea
    // strh r0, [r1]
    // ldr r0, [r4, #8]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0xec
    // strh r0, [r1]
    // mov r0, #0xea
    // ldrsh r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0xea
    // add r1, #8
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xc
    // mov r1, #1
    // mov r2, #8
    // bl ov07_02222A44
    // add r0, sp, #0x20
    // mov r1, #1
    // mov r2, #0xa
    // bl ov07_02222A44
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // ldr r1, [r4, #0x18]
    // mov r6, #0
    // add r2, r1, #0
    // mul r2, r0
    // str r2, [r4, #0x18]
    // ldr r1, [sp, #0x2c]
    // add r5, r4, #0
    // mul r0, r1
    // str r0, [sp, #0x2c]
    // mov r7, #0x64
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl ov07_0221C4E8
    // str r0, [r5, #0x30]
    // add r1, r7, #0
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r5, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #2
    // blt _0222BE98
    // mov r0, #0xea
    // ldrsh r1, [r4, r0]
    // mov r0, #0xec
    // ldrsh r0, [r4, r0]
    // mov r3, #0xe8
    // ldr r2, _0222BF10 ; =ov07_02222180
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4, #0x30]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x34]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // add r0, r4, #0
    // ldrsh r3, [r4, r3]
    // add r0, #0x38
    // add r1, sp, #0x20
    // bl ov07_02222864
    // mov r1, #0
    // mvn r1, r1
    // ldr r0, [r4]
    // add r2, r1, #0
    // bl ov07_02231E08
    // ldr r0, [r4]
    // ldr r1, _0222BF14 ; =ov07_0222BD90
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // _0222BF10: .word ov07_02222180
    // _0222BF14: .word ov07_0222BD90
    // TODO: decompile
}



void ov07_0222BF18(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222BF34: ; jump table
    // add r0, #0x10
    ov07_022222B4(r1);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x10
    ov07_022220B8(r4, *((u32*)(r4 + 0xc)), 0x48, 0x4a);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x10
    ov07_02222268(r4, 0x10, 0, 0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x34
    ov07_02222440(r4);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 9, *((u32*)(r4 + 0x34)));
    // add r0, #0x34
    ov07_022223F0(r4, *((u32*)(r4 + 0x34)), 0, 4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u16*)(r4 + 8)) = 2;
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 8)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x10
    ov07_022222B4(r4, (r1 - 1));
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x10
    ov07_022220B8(r4, *((u32*)(r4 + 0xc)), 0x48, 0x4a);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u16*)(r4 + 8)) = 0x20;
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 8)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x34
    ov07_02222440(r4, (r1 - 1));
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 9, *((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0, 0x48);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 0x4a);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 9, 0);
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
}



void ov07_0222C074(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0xf0
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [r4, #0xc]
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x48
    // strh r0, [r1]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x4a
    // strh r0, [r1]
    // mov r1, #0
    // add r0, r4, #0
    // str r1, [sp]
    // mov r2, #3
    // str r2, [sp, #4]
    // add r0, #0x10
    // sub r2, #0x23
    // add r3, r1, #0
    // bl ov07_02222268
    // add r0, r4, #0
    // ldr r2, _0222C184 ; =0x00000E38
    // add r0, #0x34
    // mov r1, #0
    // mov r3, #8
    // bl ov07_022223F0
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // ldr r1, [r4, #0x18]
    // add r2, r1, #0
    // mul r2, r0
    // str r2, [r4, #0x18]
    // ldr r1, [r4, #0x3c]
    // mul r0, r1
    // str r0, [r4, #0x3c]
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // add r7, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r6, #3
    // bne _0222C142
    // cmp r0, #3
    // bne _0222C142
    // mov r1, #0xa
    // add r2, r1, #0
    // ldr r0, [r4, #0xc]
    // sub r2, #0x32
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0xc]
    // mov r1, #0xb
    // mov r2, #0x28
    // bl Pokepic_SetAttr
    // b _0222C176
    // cmp r6, #4
    // bne _0222C160
    // cmp r0, #4
    // bne _0222C160
    // ldr r0, [r4, #0xc]
    // mov r1, #0xa
    // mov r2, #0x28
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0xc]
    // mov r1, #0xb
    // mov r2, #0x28
    // bl Pokepic_SetAttr
    // b _0222C176
    // mov r2, #0x28
    // ldr r0, [r4, #0xc]
    // mov r1, #0xa
    // mul r2, r7
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0xc]
    // mov r1, #0xb
    // mov r2, #0x28
    // bl Pokepic_SetAttr
    // ldr r0, [r4]
    // ldr r1, _0222C188 ; =ov07_0222BF18
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C184: .word 0x00000E38
    // _0222C188: .word ov07_0222BF18
    // TODO: decompile
}



void ov07_0222C18C(void) {
    // ldr r4, [sp, #0x10]
    SpriteSystem_NewSprite(r1, r2, r3);
    // str r0, [r5]
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r3, #0x28
    // ldmia r3!, {r0, r1}
    // add r2, #0x28
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldrsh r0, [r4, r0]
    *((u16*)(r5 + 0x3c)) = 0x3c;
    // ldrsh r0, [r4, r0]
    *((u16*)(r5 + 0x3e)) = 0x3e;
    // ldrsh r1, [r4, r0]
    // add r0, #0x40
    // strh r1, [r0]
    *((u32*)(r5 + 0x44)) = *((u32*)(r4 + 0x44));
    *((u32*)(r5 + 0x48)) = 0;
    ManagedSprite_SetDrawFlag(*((u32*)r5), 0, r5, r4);
    ManagedSprite_SetDrawPriority(*((u32*)r5), 0x64);
    ManagedSprite_SetPriority(*((u32*)r5), 1);
}



void ov07_0222C1FC(void) {
}



void ov07_0222C208(void) {
}



void ov07_0222C214(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, [r4, #0x48]
    // cmp r0, #0
    // bne _0222C226
    // add sp, #0x10
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, [r4, #0x44]
    // cmp r0, #0
    // beq _0222C236
    // cmp r0, #1
    // beq _0222C236
    // cmp r0, #2
    // beq _0222C2B8
    // b _0222C2BE
    // add r0, r4, #4
    // bl ov07_02222180
    // cmp r0, #0
    // beq _0222C276
    // add r0, r4, #0
    // add r0, #0x28
    // bl ov07_022224AC
    // mov r0, #0x3c
    // ldrsh r1, [r4, r0]
    // ldr r0, [r4, #0x28]
    // add r0, r1, r0
    // str r0, [r4, #0x1c]
    // mov r1, #0x3e
    // ldrsh r2, [r4, r1]
    // mov r1, #4
    // ldrsh r1, [r4, r1]
    // ldr r0, [r4]
    // add r1, r2, r1
    // mov r2, #0x40
    // ldrsh r3, [r4, r2]
    // mov r2, #6
    // ldrsh r2, [r4, r2]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // b _0222C2BE
    // ldr r0, [r4, #0x44]
    // cmp r0, #1
    // bge _0222C2B0
    // cmp r0, #0
    // bne _0222C29E
    // ldr r1, [r4, #0xc]
    // ldr r2, _0222C2C4 ; =0x00007FFF
    // lsl r1, r1, #0x10
    // str r2, [sp]
    // ldr r0, [r4, #0x10]
    // lsr r1, r1, #0x10
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x18]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // ldr r0, _0222C2C8 ; =0x0000071C
    // str r0, [sp, #0xc]
    // add r0, r4, #4
    // bl ov07_0222212C
    // ldr r0, [r4, #8]
    // ldr r2, _0222C2CC ; =0x0000FFFF
    // str r0, [sp]
    // add r0, r4, #0
    // ldr r3, _0222C2D0 ; =0xFFFFF000
    // add r0, #0x28
    // mov r1, #0
    // bl ov07_02222494
    // ldr r0, [r4, #0x44]
    // add r0, r0, #1
    // str r0, [r4, #0x44]
    // b _0222C2BE
    // add sp, #0x10
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r4, pc}
    // _0222C2C4: .word 0x00007FFF
    // _0222C2C8: .word 0x0000071C
    // _0222C2CC: .word 0x0000FFFF
    // _0222C2D0: .word 0xFFFFF000
    // TODO: decompile
}



void ov07_0222C2D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r7, r0, #0
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // cmp r0, #6
    // bhi _0222C348
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222C2F0: ; jump table
    // add r0, r4, #0
    // add r0, #0xc
    // bl ov07_0222C214
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // b _0222C4AC
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r1, #0xa
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r0, [r0]
    // mov r1, #0xa
    // bl _s32_div_f
    // mov r1, #0x1f
    // sub r1, r1, r0
    // lsl r1, r1, #8
    // orr r1, r0
    // ldr r0, _0222C4B4 ; =0x04000052
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r1, [r0]
    // ldr r0, _0222C4B8 ; =0x00000136
    // cmp r1, r0
    // bge _0222C34A
    // b _0222C4AC
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ManagedSprite_SetOamMode
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // b _0222C4AC
    // ldr r1, _0222C4BC ; =0x0000FFFF
    // ldr r0, _0222C4B4 ; =0x04000052
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // b _0222C4AC
    // add r0, r4, #0
    // add r0, #0xf4
    // ldr r0, [r0]
    // cmp r0, #0
    // bgt _0222C3BC
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // mov r2, #0x4c
    // add r3, r0, #0
    // mul r3, r2
    // add r0, r4, r3
    // mov r1, #1
    // add r0, #0xa0
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // mul r2, r0
    // add r0, r4, r2
    // ldr r0, [r0, #0x58]
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #8
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // cmp r0, #2
    // bge _0222C3D4
    // add r0, r4, #0
    // add r0, #0xf4
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xc
    // bl ov07_0222C214
    // add r5, r4, #0
    // add r6, r0, #0
    // mov r7, #0
    // add r5, #0x58
    // add r0, r5, #0
    // bl ov07_0222C214
    // str r0, [sp]
    // cmp r0, #0
    // bne _0222C3F8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0222C208
    // ldr r0, [sp]
    // add r7, r7, #1
    // orr r6, r0
    // add r5, #0x4c
    // cmp r7, #2
    // blt _0222C3E4
    // cmp r6, #0
    // bne _0222C4AC
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // b _0222C4AC
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0xc]
    // ldr r0, [r0]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _0222C4AC
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // b _0222C4AC
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r1, [r0]
    // add r0, r4, #0
    // sub r1, #0xa
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r0, [r0]
    // mov r1, #0xa
    // bl _s32_div_f
    // mov r1, #0x1f
    // sub r1, r1, r0
    // lsl r1, r1, #8
    // orr r1, r0
    // ldr r0, _0222C4B4 ; =0x04000052
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r0, [r0]
    // cmp r0, #0
    // bgt _0222C4AC
    // add r0, r4, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // b _0222C4AC
    // add r5, r4, #0
    // mov r6, #0
    // add r5, #0x58
    // add r0, r5, #0
    // bl ov07_0222C1FC
    // add r6, r6, #1
    // add r5, #0x4c
    // cmp r6, #2
    // blt _0222C488
    // ldr r0, [r4, #0xc]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // bl SpriteSystem_DrawSprites
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C4B4: .word 0x04000052
    // _0222C4B8: .word 0x00000136
    // _0222C4BC: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0222C4C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #0x10]
    // bl ov07_0221BFD0
    // mov r1, #1
    // lsl r1, r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // str r6, [r4, #4]
    // str r7, [r4, #8]
    // mov r1, #8
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02222004
    // ldr r1, [sp, #0x10]
    // lsl r0, r0, #0x11
    // str r1, [r4, #0xc]
    // mov r1, #0
    // str r1, [r4, #0x50]
    // ldr r2, _0222C5F8 ; =0x0000BFFF
    // neg r0, r0
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, _0222C5FC ; =0xFFFF8000
    // ldr r0, _0222C600 ; =0x0000071C
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // lsr r1, r1, #0x12
    // add r0, #0x10
    // add r3, r1, #0
    // bl ov07_0222212C
    // ldr r0, [r4, #0x14]
    // ldr r2, _0222C604 ; =0x0000FFFF
    // str r0, [sp]
    // add r0, r4, #0
    // ldr r3, _0222C608 ; =0xFFFFF000
    // add r0, #0x34
    // mov r1, #0
    // bl ov07_02222494
    // add r0, r4, #0
    // ldr r1, [r4, #0x28]
    // add r0, #0x48
    // strh r1, [r0]
    // mov r0, #1
    // str r0, [r4, #0x54]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r1, r4, #0
    // add r1, #0x4a
    // strh r0, [r1]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov07_02221F80
    // add r1, r4, #0
    // add r1, #0x4c
    // strh r0, [r1]
    // mov r1, #0x4a
    // mov r2, #0x4c
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0xc]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r1, [r4]
    // add r0, sp, #0x14
    // bl ov07_0221F9E8
    // mov r0, #0x4a
    // ldrsh r0, [r4, r0]
    // add r1, sp, #0x14
    // add r5, r4, #0
    // strh r0, [r1]
    // mov r0, #0x4c
    // ldrsh r0, [r4, r0]
    // add r7, r4, #0
    // mov r6, #0
    // strh r0, [r1, #2]
    // add r5, #0x58
    // add r7, #0xc
    // str r7, [sp]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // add r3, sp, #0x14
    // bl ov07_0222C18C
    // add r6, r6, #1
    // add r5, #0x4c
    // cmp r6, #2
    // blt _0222C5A6
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xfc
    // str r1, [r0]
    // ldr r0, [r4]
    // mov r2, #0x1f
    // bl ov07_02231E08
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // mov r6, #0
    // add r5, r4, #0
    // mov r7, #1
    // ldr r0, [r5, #0x58]
    // add r1, r7, #0
    // bl ManagedSprite_SetOamMode
    // add r6, r6, #1
    // add r5, #0x4c
    // cmp r6, #2
    // blt _0222C5DA
    // ldr r0, [r4]
    // ldr r1, _0222C60C ; =ov07_0222C2D4
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222C5F8: .word 0x0000BFFF
    // _0222C5FC: .word 0xFFFF8000
    // _0222C600: .word 0x0000071C
    // _0222C604: .word 0x0000FFFF
    // _0222C608: .word 0xFFFFF000
    // _0222C60C: .word ov07_0222C2D4
    // TODO: decompile
}



void ov07_0222C610(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r2, #0x60
    // ldrsh r3, [r4, r2]
    // mov r2, #0x10
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x5c]
    // mov r1, #0
    // add r2, r3, r2
    // bl Pokepic_SetAttr
    // mov r2, #0x62
    // ldrsh r3, [r4, r2]
    // mov r2, #0x12
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x5c]
    // mov r1, #1
    // add r2, r3, r2
    // bl Pokepic_SetAttr
    // mov r1, #0x60
    // ldrsh r2, [r4, r1]
    // mov r1, #0x10
    // ldrsh r1, [r4, r1]
    // ldr r0, [r4, #0x58]
    // add r1, r2, r1
    // mov r2, #0x62
    // ldrsh r3, [r4, r2]
    // mov r2, #0x12
    // ldrsh r2, [r4, r2]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add r3, r3, r2
    // mov r2, #0x66
    // ldrsh r2, [r4, r2]
    // sub r2, r3, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // add r0, #0x34
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov07_02222644
    // mov r0, #0x64
    // ldrsh r0, [r4, r0]
    // bl _fflt
    // add r1, r0, #0
    // ldr r0, _0222C6A4 ; =0x3DCCCCCD
    // bl _fmul
    // add r1, r0, #0
    // ldr r0, [sp, #4]
    // bl _fadd
    // add r1, r0, #0
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x58]
    // ldr r2, [sp]
    // bl ManagedSprite_SetAffineScale
    // mov r0, #0x64
    // ldrsh r1, [r4, r0]
    // sub r0, #0x65
    // add r4, #0x64
    // mul r0, r1
    // strh r0, [r4]
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0222C6A4: .word 0x3DCCCCCD
    // TODO: decompile
}



void ov07_0222C6A8(void) {
    // add r0, #0x10
    ov07_022227D8(r1, r0);
    // add r0, #0x34
    ov07_0222260C(r4);
    ov07_0222C610(r4);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x34
    ov07_02222590(r4, 0xc, 0xa, 0xf);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x10
    ov07_022227D8(r4);
    // add r0, #0x34
    ov07_0222260C(r4);
    ov07_0222C610(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x5c)), 0, 0x60);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x5c)), 1, 0x62);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x58)), 0);
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // sub r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x58)), 0x60, (0x66 << 0x10));
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x58)), (0xfe << 0x16), (0xfe << 0x16));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_0221C448(*((u32*)r4), r2);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}



void ov07_0222C780(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x68
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4, #8]
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [r4, #0x5c]
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x60
    // strh r0, [r1]
    // ldr r0, [r4, #0x5c]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x62
    // strh r0, [r1]
    // ldr r0, [r4, #0x5c]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x66
    // strh r0, [r1]
    // mov r0, #6
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x10
    // mov r1, #2
    // mov r2, #0
    // mov r3, #1
    // bl ov07_022227A8
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x58]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x58]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x58]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // mov r0, #0xf
    // str r0, [sp]
    // mov r1, #0xa
    // str r1, [sp, #4]
    // mov r0, #7
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x34
    // mov r2, #0xc
    // add r3, r1, #0
    // bl ov07_02222590
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x64
    // strh r1, [r0]
    // ldr r0, [r4]
    // mov r1, #0x1c
    // mov r2, #0xf
    // bl ov07_02231E08
    // ldr r0, [r4]
    // ldr r1, _0222C84C ; =ov07_0222C6A8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0222C84C: .word ov07_0222C6A8
    // TODO: decompile
}



void ov07_0222C850(void) {
    // mov r2, #0x12
    // ldrsh r2, [r0, r2]
    // mov r3, #0x10
    // ldrsh r0, [r0, r3]
    // neg r2, r2
    // lsl r2, r2, #0x10
    // neg r0, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // orr r0, r2
    // mov r2, #3
    // ldr r3, _0222C86C ; =MIi_CpuClear32
    // lsl r2, r2, #8
    // bx r3
    // _0222C86C: .word MIi_CpuClear32
    // TODO: decompile
}



void ov07_0222C870(void) {
    ov07_02222D60(*((u32*)(r0 + 0x18)));
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    ov07_0222C850(r5);
    // add r0, #0x1c
    ov07_022222B4(r5);
    // str r0, [sp, #8]
    // ldrsh r4, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldr r1, [sp, #0xc]
    // add r1, r1, r2
    // str r1, [sp]
    // ldr r1, [sp]
    // sub r0, r0, r4
    // asr r1, r1, #0x10
    // str r1, [sp, #4]
    // asr r7, r1, #0x10
    // ldrsh r1, [r5, r1]
    // mul r0, r1
    _s32_div_f(0x16, 0x64, *((u32*)r1));
    // sub r0, r7, r0
    // asr r7, r0, #0x10
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0x28
    // sub r0, r0, r4
    // mul r0, r1
    _s32_div_f(0x14, 0x64);
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // bpl _0222C8EC
    // add r6, #0xc0
    // ldr r0, [sp, #4]
    ov07_02222D88((((r0 << 0x10) << 0x10) >> 0x10), ((r7 << 0x10) >> 0x10));
    // ldr r1, [sp, #0xc]
    // str r0, [r1, r2]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldrsh r0, [r5, r0]
    // ldr r0, [sp, #8]
}



void ov07_0222C918(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222C932: ; jump table
    ov07_0222C870(r1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov07_02231E74(*((u32*)r4), 0x1f, 0);
    // str r1, [sp]
    // add r4, #0x40
    // str r0, [sp, #4]
    ov07_02222AC4(r4, 0x1f, 0, 0);
    ov07_0222C870(r4);
    // add r0, #0x40
    ov07_02222AF4(r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov07_02222D74(*((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 8)) = 0;
    ov07_0221C4A0(*((u32*)r4));
    // ldrsh r3, [r4, r3]
    // neg r3, r3
    BgSetPosTextAndCommit(2, 0, 0x10);
    ov07_0221C4A0(*((u32*)r4));
    // ldrsh r3, [r4, r3]
    // neg r3, r3
    BgSetPosTextAndCommit(2, 3, 0x12);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x40
    ov07_02222AC4(r4, 0, 0x1f, 0x1f);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x40
    ov07_02222AF4(r4);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 6, 0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov07_02222D3C(*((u32*)(r4 + 0x18)));
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221FB04(*((u32*)r4), 1);
    SetBgPriority(((r5 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(0, ((r0 << 0x18) >> 0x18));
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221BFD0(*((u32*)r4));
    BG_ClearCharDataRange(((r5 << 0x18) >> 0x18), (1 << 0xe), 0, r0);
    ov07_0221C4A0(*((u32*)r4));
    ov07_0221FAEC(*((u32*)r4), 1);
    BgClearTilemapBufferAndCommit(r5, ((r0 << 0x18) >> 0x18));
    ov07_0221C448(*((u32*)r4), r6);
    Heap_Free(r4);
}



void ov07_0222CA8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x68
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x68
    // add r4, r0, #0
    // bl memset
    // ldr r1, _0222CBF4 ; =ov07_0222C918
    // str r5, [r4]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov07_0221C410
    // str r0, [sp, #0x14]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x12]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // mov r1, #0x12
    // ldrsh r2, [r4, r1]
    // sub r0, r2, r0
    // strh r0, [r4, #0x12]
    // mov r0, #0x10
    // ldrsh r0, [r4, r0]
    // mov r2, #1
    // sub r0, #0x28
    // strh r0, [r4, #0x10]
    // ldrsh r0, [r4, r1]
    // mov r1, #6
    // sub r0, #0x28
    // strh r0, [r4, #0x12]
    // ldr r0, [r4, #0xc]
    // bl Pokepic_SetAttr
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // add r6, r0, #0
    // mov r0, #0x12
    // ldrsh r1, [r4, r0]
    // sub r1, #8
    // strh r1, [r4, #0x14]
    // ldrsh r0, [r4, r0]
    // add r0, #0x58
    // strh r0, [r4, #0x16]
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bge _0222CB28
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // mov r0, #0x16
    // ldrsh r0, [r4, r0]
    // cmp r0, #0xbf
    // ble _0222CB34
    // mov r0, #0xbf
    // strh r0, [r4, #0x16]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221FAF8
    // add r7, r0, #0
    // ldr r0, [sp, #0x14]
    // bl SysTask_GetPriority
    // str r0, [sp, #0x18]
    // ldrh r0, [r4, #0x10]
    // ldrh r1, [r4, #0x12]
    // bl ov07_02222D88
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // bl ov07_0221BFD0
    // mov r1, #0x50
    // str r1, [sp]
    // ldr r1, [sp, #0x18]
    // str r7, [sp, #4]
    // add r1, r1, #1
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x1c]
    // ldr r2, _0222CBF8 ; =0x0000038E
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0x14
    // mov r1, #0x16
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r1]
    // lsl r3, r6, #0xf
    // lsl r0, r0, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // bl ov07_02222CCC
    // str r0, [r4, #0x18]
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x1c
    // mov r2, #0x50
    // add r3, r1, #0
    // bl ov07_02222268
    // ldr r0, [r4, #0x24]
    // add r1, r0, #0
    // mul r1, r6
    // str r1, [r4, #0x24]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02231924
    // sub r0, r0, #3
    // cmp r0, #1
    // bhi _0222CBE6
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_0221FAEC
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // lsl r0, r5, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldr r0, [r4]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // mov r0, #0
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldr r0, [sp, #0x14]
    // add r1, r4, #0
    // bl ov07_0222C918
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222CBF4: .word ov07_0222C918
    // _0222CBF8: .word 0x0000038E
    // TODO: decompile
}



void ov07_0222CBFC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r2, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #3
    // bhi _0222CCAC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CC16: ; jump table
    // add r0, r4, #0
    // add r0, #0x38
    // bl ov07_02222468
    // ldr r2, [r4, #0x38]
    // mov r1, #0x1f
    // sub r1, r1, r2
    // lsl r1, r1, #8
    // orr r2, r1
    // ldr r1, _0222CCB8 ; =0x04000052
    // cmp r0, #0
    // strh r2, [r1]
    // bne _0222CCAC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // b _0222CCAC
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // cmp r0, #0x20
    // ble _0222CCAC
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0222CCAC
    // add r0, r4, #0
    // add r0, #0x14
    // bl ov07_02222558
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x14
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov07_02222644
    // ldr r0, [r4, #0x4c]
    // cmp r0, #1
    // bne _0222CC7C
    // ldr r1, [sp, #4]
    // mov r0, #0
    // bl _fsub
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ManagedSprite_SetAffineScale
    // cmp r5, #0
    // bne _0222CCAC
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0222CCAC
    // ldr r0, [r4]
    // add r1, r2, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // bl SpriteSystem_DrawSprites
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0222CCB8: .word 0x04000052
    // TODO: decompile
}



void ov07_0222CCBC(void) {
    // add r0, #0x14
    ov07_022227D8(r1, r0);
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x14
    ov07_022220B8(r5, *((u32*)(r5 + 8)), 0x38, 0x3a);
    // ldrsh r4, [r5, r3]
    // sub r3, r4, r3
    // ldrsh r2, [r5, r2]
    // add r0, #0x14
    // asr r3, r3, #0x10
    ov07_0222207C(r5, *((u32*)(r5 + 0xc)), 0x38, (*((u32*)(r5 + 0x3c)) << 0x10));
    Pokepic_ResumePaletteFade(*((u32*)(r5 + 8)));
    // str r2, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r5 + 8)), 0x10, 0, 0);
    ov07_02221FF0(*((u32*)(r5 + 0xc)));
    // lsl r4, r0
    ov07_0221FA78(*((u32*)r5), 1);
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    PaletteData_BeginPaletteFade(4, ((r4 << 0x10) >> 0x10), 0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    // add r0, #0x14
    ov07_022227D8(r5);
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x14
    ov07_022220B8(r5, *((u32*)(r5 + 8)), 0x38, 0x3a);
    // ldrsh r4, [r5, r3]
    // sub r3, r4, r3
    // ldrsh r2, [r5, r2]
    // add r0, #0x14
    // asr r3, r3, #0x10
    ov07_0222207C(r5, *((u32*)(r5 + 0xc)), 0x38, (*((u32*)(r5 + 0x3c)) << 0x10));
    Pokepic_ResumePaletteFade(*((u32*)(r5 + 8)));
    // ldrsh r2, [r5, r2]
    Pokepic_SetAttr(*((u32*)(r5 + 8)), 0, 0x38);
    // ldrsh r2, [r5, r2]
    Pokepic_SetAttr(*((u32*)(r5 + 8)), 1, 0x3a);
    ov07_0221C470(*((u32*)r5));
    ov07_0221FAC8(*((u32*)r5), r0);
    Pokepic_SetAttr(*((u32*)(r5 + 8)), 6, 0);
    // ldrsh r3, [r5, r2]
    // sub r2, r3, r2
    // ldrsh r1, [r5, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0xc)), 0x38, (*((u32*)(r5 + 0x3c)) << 0x10));
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    ov07_0221C448(*((u32*)r5), r2);
    Heap_Free(r5);
}



void ov07_0222CE10(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x50
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x50
    // bl memset
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl ov07_0221BFC0
    // str r0, [r4, #0x4c]
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x10]
    // mov r0, #8
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0xa
    // add r0, #0x14
    // mov r1, #0xe
    // add r3, r2, #0
    // bl ov07_02222508
    // add r0, r4, #0
    // add r0, #0x38
    // mov r1, #0
    // mov r2, #0x10
    // mov r3, #8
    // bl ov07_02222418
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4]
    // mov r1, #0
    // mov r2, #0x1f
    // bl ov07_02231E08
    // ldr r0, [r4, #0x10]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x4c]
    // cmp r0, #1
    // ldr r0, [r4, #0x10]
    // bne _0222CE90
    // ldr r1, _0222CEB4 ; =0xBFB33333
    // ldr r2, _0222CEB8 ; =0x3FB33333
    // bl ManagedSprite_SetAffineScale
    // b _0222CE98
    // ldr r1, _0222CEB8 ; =0x3FB33333
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r0, [r4, #0x10]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4]
    // ldr r1, _0222CEBC ; =ov07_0222CBFC
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // _0222CEB4: .word 0xBFB33333
    // _0222CEB8: .word 0x3FB33333
    // _0222CEBC: .word ov07_0222CBFC
    // TODO: decompile
}



void ov07_0222CEC0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl ov07_0221BFD0
    // mov r1, #0x40
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x40
    // bl memset
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #8]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x38]
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x3a]
    // ldr r0, [r4, #8]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // str r0, [r4, #0x3c]
    // mov r1, #4
    // add r0, r4, #0
    // str r1, [sp]
    // add r0, #0x14
    // mov r2, #0
    // mov r3, #1
    // bl ov07_022227A8
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // mov r1, #0x14
    // ldrsh r1, [r4, r1]
    // mov r2, #0x10
    // add r0, r1, r0
    // mov r1, #0
    // strh r0, [r4, #0x14]
    // str r1, [sp]
    // ldr r0, [r4, #8]
    // add r3, r1, #0
    // bl Pokepic_StartPaletteFade
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02231924
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02231924
    // cmp r5, #2
    // bne _0222CF6C
    // cmp r0, #4
    // beq _0222CF74
    // cmp r5, #5
    // bne _0222CFBA
    // cmp r0, #3
    // bne _0222CFBA
    // ldr r0, [r4, #0xc]
    // bl ov07_02221FF0
    // mov r1, #1
    // add r5, r1, #0
    // lsl r5, r0
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // mov r3, #0
    // lsl r2, r5, #0x10
    // str r3, [sp]
    // mov r1, #0x10
    // str r1, [sp, #4]
    // mov r1, #4
    // lsr r2, r2, #0x10
    // str r3, [sp, #8]
    // bl PaletteData_BeginPaletteFade
    // mov r0, #1
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAC8
    // cmp r0, #0
    // bne _0222CFBA
    // ldr r0, [r4, #8]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // ldr r0, [r4]
    // ldr r1, _0222CFC8 ; =ov07_0222CCBC
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0222CFC8: .word ov07_0222CCBC
    // TODO: decompile
}



void ov07_0222CFCC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CFE6: ; jump table
    // add r0, #0x1c
    ov07_02222AF4(r0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0x44)) = 0x20;
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x44)) - 1);
    // bpl _0222D048
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    // add r4, #0x1c
    // str r0, [sp, #4]
    ov07_02222AC4(r4, 8, r5, 8);
    // add r0, #0x1c
    ov07_02222AF4(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_02222D3C(*((u32*)(r4 + 0x14)));
}



void ov07_0222D050(void) {
    ov07_0222CFCC(r1);
    ManagedSprite_GetDrawFlag(*((u32*)(r4 + 0x48)));
    ov07_0221C470(*((u32*)r4));
    ov07_0221FAC8(*((u32*)r4), r0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 6, 1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov07_0222CFCC(r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221FB04(*((u32*)r4), 1);
    SetBgPriority(((r5 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(0, ((r0 << 0x18) >> 0x18));
    ov07_0221C470(*((u32*)r4));
    ov07_0221FAC8(*((u32*)r4), r0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 6, 0);
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221BFD0(*((u32*)r4));
    BG_ClearCharDataRange(((r5 << 0x18) >> 0x18), (1 << 0xe), 0, r0);
    ov07_0221C4A0(*((u32*)r4));
    ov07_0221FAEC(*((u32*)r4), 1);
    BgClearTilemapBufferAndCommit(r5, ((r0 << 0x18) >> 0x18));
    ov07_0221C448(*((u32*)r4), r6);
    Heap_Free(r4);
}



void ov07_0222D148(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // str r0, [sp, #0x14]
    // mov r1, #0x4c
    // bl ov07_022324D8
    // add r4, r0, #0
    // ldr r0, [sp, #0x14]
    // str r0, [r4]
    // bl ov07_0221FA78
    // str r0, [r4, #0x18]
    // ldr r0, [r4]
    // mov r1, #0
    // mov r2, #0x10
    // bl ov07_02231E74
    // mov r2, #8
    // str r2, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x1c
    // mov r1, #0
    // mov r3, #0x10
    // bl ov07_02222AC4
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [r4, #0x10]
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [r4, #0x10]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // sub r0, #0x28
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x48]
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02231924
    // cmp r0, #5
    // beq _0222D1D8
    // cmp r0, #2
    // bne _0222D1EA
    // ldr r0, [r4, #0x48]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x48]
    // mov r1, #2
    // bl ManagedSprite_SetPriority
    // b _0222D224
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_0221FAEC
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // lsl r0, r6, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldr r0, [r4]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // mov r0, #0
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldr r0, [r4, #0x48]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r0, r5, #0
    // add r0, #0x50
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // str r5, [sp, #0x18]
    // cmp r5, #0
    // bge _0222D234
    // mov r5, #0
    // cmp r6, #0xbf
    // ble _0222D23A
    // mov r6, #0xbf
    // ldr r0, [sp, #0x14]
    // mov r1, #1
    // bl ov07_0221FAF8
    // ldr r1, [sp, #0x18]
    // sub r7, #0x28
    // str r0, [sp, #0x1c]
    // lsl r0, r7, #0x10
    // asr r0, r0, #0x10
    // neg r0, r0
    // neg r1, r1
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // bl ov07_02222D88
    // add r7, r0, #0
    // ldr r0, [sp, #0x14]
    // bl ov07_0221BFD0
    // mov r1, #0x64
    // str r1, [sp]
    // ldr r1, [sp, #0x1c]
    // mov r3, #5
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // str r7, [sp, #0xc]
    // str r0, [sp, #0x10]
    // lsl r0, r5, #0x18
    // lsl r1, r6, #0x18
    // ldr r2, _0222D2A8 ; =0x0000038E
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // lsl r3, r3, #0xc
    // bl ov07_02222CCC
    // mov r2, #1
    // str r0, [r4, #0x14]
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [r4, #0x18]
    // lsl r2, r2, #8
    // mov r3, #8
    // bl PaletteData_BlendPalettes
    // ldr r0, [r4]
    // ldr r1, _0222D2AC ; =ov07_0222D050
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222D2A8: .word 0x0000038E
    // _0222D2AC: .word ov07_0222D050
    // TODO: decompile
}



void ov07_0222D2B0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D2CA: ; jump table
    // add r0, #0x14
    ov07_02222558(r1);
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    ov07_02222644(r4);
    _fflt(*((u32*)(r4 + 0x54)));
    // ldr r0, [sp, #8]
    _fmul(r0);
    // ldr r2, [sp, #4]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), r0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x4c)) = 5;
    // str r0, [sp]
    // add r0, #0x14
    ov07_02222508(r4, 0xa, 0xa, 1);
    // add r0, #0x38
    ov07_02222440(r4);
    ManagedSprite_SetAffineZRotation(*((u32*)(r4 + 0x10)), ((*((u32*)(r4 + 0x38)) << 0x10) >> 0x10));
    *((u32*)(r4 + 0x4c)) = (*((u32*)(r4 + 0x4c)) - 1);
    // add r0, #0x38
    *((u32*)(r4 + 0x50)) = *((u32*)(r4 + 0x38));
    ov07_022223F0(r4, *((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x50)), 4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x14
    ov07_02222558(r4);
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    ov07_02222644(r4);
    _fflt(*((u32*)(r4 + 0x54)));
    // ldr r0, [sp, #8]
    _fmul(r0);
    // ldr r2, [sp, #4]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), r0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x10)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_0222D3BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r1, #0
    // mov r1, #0x58
    // add r5, r0, #0
    // add r7, r2, #0
    // str r3, [sp, #4]
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // str r6, [r4, #4]
    // str r7, [r4, #8]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // add r7, r0, #0
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov07_0221FB78
    // cmp r0, #1
    // bne _0222D3FC
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4, #0x54]
    // neg r6, r7
    // b _0222D402
    // mov r0, #1
    // str r0, [r4, #0x54]
    // add r6, r7, #0
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0
    // bl ov07_02221F80
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #1
    // bl ov07_02221F80
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // mov r1, #2
    // str r0, [r4, #0x10]
    // bl ManagedSprite_SetAffineOverwriteMode
    // mov r1, #0xfe
    // lsl r1, r1, #0x16
    // ldr r0, [r4, #0x10]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r0, [r4, #0x10]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    // bl ManagedSprite_SetPositionXY
    // mov r1, #0x28
    // mul r1, r7
    // lsl r1, r1, #0x10
    // ldr r0, [r4, #0x10]
    // asr r1, r1, #0x10
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #0x10]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // mov r1, #0xb
    // mvn r1, r1
    // mul r1, r6
    // lsl r1, r1, #0x10
    // ldr r0, [r4, #0x10]
    // asr r1, r1, #0x10
    // mov r2, #0xc
    // bl ManagedSprite_SetAffineTranslation
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov07_0223192C
    // cmp r0, #4
    // ldr r0, [r4, #0x10]
    // bne _0222D494
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // b _0222D49A
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #8
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0xa
    // add r0, #0x14
    // mov r1, #1
    // add r3, r2, #0
    // bl ov07_02222508
    // cmp r6, #0
    // blt _0222D4C2
    // add r0, r4, #0
    // ldr r1, _0222D4E4 ; =0x0000FF48
    // ldr r2, _0222D4E8 ; =0x0000E38D
    // add r0, #0x38
    // mov r3, #4
    // bl ov07_022223F0
    // ldr r0, _0222D4E4 ; =0x0000FF48
    // b _0222D4D2
    // add r0, r4, #0
    // ldr r2, _0222D4EC ; =0x00001C71
    // add r0, #0x38
    // mov r1, #0
    // mov r3, #4
    // bl ov07_022223F0
    // mov r0, #0
    // str r0, [r4, #0x50]
    // ldr r0, [r4]
    // ldr r1, _0222D4F0 ; =ov07_0222D2B0
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222D4E4: .word 0x0000FF48
    // _0222D4E8: .word 0x0000E38D
    // _0222D4EC: .word 0x00001C71
    // _0222D4F0: .word ov07_0222D2B0
    // TODO: decompile
}



void ov07_0222D4F4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // str r1, [r5]
    // add r6, r3, #0
    // mov r3, #8
    // mov r1, #0xa
    // add r4, r2, #0
    // add r0, r5, #4
    // add r2, r1, #0
    // str r3, [sp]
    // bl ov07_02222508
    // mov r0, #3
    // str r0, [r5, #0x2c]
    // mov r0, #8
    // str r0, [r5, #0x30]
    // mov r0, #0xa
    // str r0, [r5, #0x34]
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // str r0, [r5, #0x28]
    // ldr r0, [r5]
    // add r2, r6, #0
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r5]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // beq _0222D55C
    // mov r2, #0xfe
    // ldr r0, [r5]
    // ldr r1, _0222D568 ; =0xBF800000
    // lsl r2, r2, #0x16
    // bl ManagedSprite_SetAffineScale
    // ldr r0, [r5]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0222D568: .word 0xBF800000
    // TODO: decompile
}



void ov07_0222D56C(void) {
}



void ov07_0222D578(void) {
}



void ov07_0222D590(void) {
    ov07_02222558((r0 + 4));
    // add r1, sp, #8
    // add r2, sp, #4
    ov07_02222644((r4 + 4));
    // ldr r1, [sp, #8]
    _fsub(0);
    ManagedSprite_SetAffineScale(*((u32*)r4), r0, (0xfe << 0x16));
    // ldr r1, [sp, #8]
    ManagedSprite_SetAffineScale(*((u32*)r4), (0xfe << 0x16));
    *((u32*)(r4 + 0x2c)) = (*((u32*)(r4 + 0x2c)) - 1);
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222508((r4 + 4), (*((u32*)(r4 + 0x30)) << 0x10), 0xa, (*((u32*)(r4 + 0x34)) << 0x10));
    *((u32*)(r4 + 0x30)) = *((u32*)(r4 + 0x34));
    *((u32*)(r4 + 0x34)) = *((u32*)(r4 + 0x30));
}



void ov07_0222D60C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D624: ; jump table
    *((u32*)(r1 + 0x10)) = 0;
    // add r2, #0x44
    // mul r0, r1
    // add r0, r2, r0
    ov07_0222D578(0x38, *((u32*)(r1 + 0x14)), r1);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) + 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x20
    ov07_0222283C(r4, 0x1c, 0x1e, *((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r6, #0x44
    ov07_0222D590(r4);
    // add r6, #0x38
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x18)), 0, 0x1c);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x18)), 1, 0x1e);
    // add r5, #0x44
    ov07_0222D56C(r4);
    // add r5, #0x38
    ov07_0221C448(*((u32*)r4), r7);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_0222D6E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // str r1, [sp, #4]
    // mov r1, #0x4a
    // lsl r1, r1, #2
    // add r4, r0, #0
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // bl ov07_022324D8
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // str r4, [r7]
    // str r0, [r7, #4]
    // ldr r0, [sp, #8]
    // str r0, [r7, #8]
    // add r0, r4, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r7]
    // bl ov07_0221FA48
    // str r0, [r7, #0x18]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r7, #0x1c]
    // ldr r0, [r7, #0x18]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r7, #0x1e]
    // add r0, r7, #0
    // mov r3, #1
    // add r0, #0x20
    // mov r1, #4
    // mov r2, #0
    // str r3, [sp]
    // bl ov07_022227A8
    // mov r0, #0x1e
    // ldrsh r4, [r7, r0]
    // ldr r1, [r7]
    // add r0, sp, #0x14
    // add r4, #0x10
    // mov r5, #0
    // bl ov07_0221F9E8
    // add r0, r5, #0
    // add r6, r7, #0
    // str r0, [sp, #0x10]
    // add r6, #0x44
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // bne _0222D764
    // str r5, [sp]
    // mov r2, #0x1c
    // lsl r3, r4, #0x10
    // ldrsh r2, [r7, r2]
    // ldr r1, [sp, #0xc]
    // add r0, r6, #0
    // asr r3, r3, #0x10
    // bl ov07_0222D4F4
    // b _0222D780
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, sp, #0x14
    // bl SpriteSystem_NewSprite
    // lsl r3, r4, #0x10
    // add r1, r0, #0
    // str r5, [sp]
    // mov r2, #0x1c
    // ldrsh r2, [r7, r2]
    // add r0, r6, #0
    // asr r3, r3, #0x10
    // bl ov07_0222D4F4
    // mov r0, #1
    // eor r5, r0
    // ldr r0, [sp, #0x10]
    // sub r4, #0xa
    // add r0, r0, #1
    // add r6, #0x38
    // str r0, [sp, #0x10]
    // cmp r0, #4
    // blt _0222D74A
    // ldr r0, [r7]
    // ldr r1, _0222D7A0 ; =ov07_0222D60C
    // add r2, r7, #0
    // bl ov07_0221C410
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222D7A0: .word ov07_0222D60C
    // TODO: decompile
}



void ov07_0222D7A4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #6
    // bls _0222D7B4
    // b _0222D966
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D7C0: ; jump table
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov07_022222B4
    // cmp r0, #0
    // beq _0222D7F0
    // mov r2, #0x14
    // mov r3, #0x16
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // ldr r1, [r4, #0x10]
    // add r0, #0x18
    // bl ov07_022220B8
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r1, #0x18
    // add r0, r4, #0
    // ldrsh r1, [r4, r1]
    // add r0, #0x18
    // add r3, r2, #0
    // bl ov07_02222268
    // ldr r0, [r4, #0xc]
    // add sp, #0x10
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov07_022222B4
    // cmp r0, #0
    // beq _0222D832
    // mov r2, #0x14
    // mov r3, #0x16
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // ldr r1, [r4, #0x10]
    // add r0, #0x18
    // bl ov07_022220B8
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // mov r2, #0x14
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_SetAttr
    // mov r2, #0x16
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_SetAttr
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r2, [r4, #0x3c]
    // add r0, r4, #0
    // lsl r2, r2, #5
    // neg r2, r2
    // lsl r2, r2, #0x10
    // add r0, #0x18
    // asr r2, r2, #0x10
    // add r3, r1, #0
    // bl ov07_02222268
    // ldr r0, [r4, #0xc]
    // add sp, #0x10
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // ldr r2, [r4, #0x48]
    // add r0, #0x4c
    // add r1, #0x70
    // bl ov07_022223CC
    // cmp r0, #0
    // bne _0222D966
    // mov r0, #0x46
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // mov r2, #0x44
    // str r0, [sp]
    // mov r0, #0x16
    // ldrsh r0, [r4, r0]
    // mov r3, #0x14
    // add r1, #0x70
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // ldr r0, _0222D970 ; =0xFFFE0000
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x4c
    // bl ov07_02222338
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // b _0222D966
    // add r0, r4, #0
    // ldr r2, [r4, #0x48]
    // add r0, #0x4c
    // add r1, #0x70
    // bl ov07_022223CC
    // cmp r0, #0
    // bne _0222D966
    // ldr r0, [r4, #0x48]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // b _0222D966
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov07_022222B4
    // cmp r0, #0
    // beq _0222D8F0
    // mov r2, #0x14
    // mov r3, #0x16
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // ldr r1, [r4, #0x10]
    // add r0, #0x18
    // bl ov07_022220B8
    // b _0222D966
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // mov r1, #0x18
    // add r0, r4, #0
    // ldrsh r1, [r4, r1]
    // add r0, #0x18
    // add r3, r2, #0
    // bl ov07_02222268
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // b _0222D966
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov07_022222B4
    // cmp r0, #0
    // beq _0222D92E
    // mov r2, #0x14
    // mov r3, #0x16
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // ldr r1, [r4, #0x10]
    // add r0, #0x18
    // bl ov07_022220B8
    // b _0222D966
    // mov r2, #0x14
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_SetAttr
    // mov r2, #0x16
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // b _0222D966
    // ldr r0, [r4, #0x48]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // bl SpriteSystem_DrawSprites
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0222D970: .word 0xFFFE0000
    // TODO: decompile
}



void ov07_0222D974(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // mov r1, #0x94
    // add r5, r0, #0
    // str r2, [sp, #0x10]
    // add r6, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // ldr r0, [sp, #0x10]
    // str r7, [r4, #4]
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // str r0, [r4, #0x3c]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x14]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x16]
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r2, [r4, #0x3c]
    // add r0, r4, #0
    // lsl r2, r2, #4
    // neg r2, r2
    // lsl r2, r2, #0x10
    // add r0, #0x18
    // asr r2, r2, #0x10
    // add r3, r1, #0
    // bl ov07_02222268
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [r4, #0x40]
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x44
    // strh r0, [r1]
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x46
    // strh r0, [r1]
    // add r0, r6, #0
    // mov r1, #1
    // str r6, [r4, #0x48]
    // bl ManagedSprite_SetAnimateFlag
    // ldr r0, [r4, #0x48]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x48]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // mov r0, #0x16
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // mov r2, #0x14
    // str r0, [sp]
    // mov r0, #0x46
    // ldrsh r0, [r4, r0]
    // mov r3, #0x44
    // add r1, #0x70
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // mov r0, #2
    // lsl r0, r0, #0x10
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x4c
    // bl ov07_02222338
    // ldr r0, [r4]
    // ldr r1, _0222DA5C ; =ov07_0222D7A4
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222DA5C: .word ov07_0222D7A4
    // TODO: decompile
}



void ov07_0222DA60(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222DA7A: ; jump table
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // sub r2, r3, r2
    // add r0, #0x1c
    // asr r2, r2, #0x10
    ov07_02222218(r1, 0x18, (0x68 << 0x10), *((u32*)(r1 + 0x14)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = 0x10;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 1);
    // bpl _0222DB0A
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x40
    ov07_02222AC4(r4, 0, 0x10, 0x10);
    // add r0, #0x40
    ov07_02222AF4(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 1);
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 6, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_0221C448(*((u32*)r4), r2);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}



void ov07_0222DB14(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // mov r1, #0x6c
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C514
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x18]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x1a]
    // ldr r0, [r4, #0x10]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // add r1, r4, #0
    // add r1, #0x68
    // strh r0, [r1]
    // mov r0, #0x1a
    // ldrsh r0, [r4, r0]
    // mov r1, #0
    // add r0, #8
    // strh r0, [r4, #0x1a]
    // ldr r0, [r4]
    // bl ov07_0221C4E8
    // str r0, [r4, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x10]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0x1c
    // mov r1, #2
    // mov r2, #0x10
    // bl ov07_02222A44
    // ldr r0, [r4]
    // mov r1, #0x10
    // mov r2, #0
    // bl ov07_02231E08
    // mov r1, #0x10
    // str r1, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0x40
    // add r3, r2, #0
    // bl ov07_02222AC4
    // ldr r0, [r4, #0x28]
    // add r2, r4, #0
    // add r1, r0, #0
    // mul r1, r6
    // str r1, [r4, #0x28]
    // ldr r0, [r4]
    // ldr r1, _0222DBD4 ; =ov07_0222DA60
    // bl ov07_0221C410
    // ldr r0, [r4, #4]
    // bl SpriteSystem_DrawSprites
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0222DBD4: .word ov07_0222DA60
    // TODO: decompile
}



void ov07_0222DBD8(void) {
    // add r0, #0x14
    ov07_02222558(r0);
    // ldrsh r2, [r5, r2]
    Pokepic_SetAttr(*((u32*)(r5 + 0x10)), 0xd, 0x16);
    *((u32*)(r5 + 0x38)) = (*((u32*)(r5 + 0x38)) + 1);
    // add r5, #0x14
    // str r0, [sp]
    ov07_02222508(r5, 0xf, 0xa, 0xa);
    // add r0, #0x14
    ov07_02222558(r5);
    // ldrsh r2, [r5, r2]
    Pokepic_SetAttr(*((u32*)(r5 + 0x10)), 0xd, 0x16);
    // add r2, #0xf3
    Pokepic_SetAttr(0xd, 0xd);
    *((u32*)(r5 + 0x38)) = (*((u32*)(r5 + 0x38)) + 1);
}



void ov07_0222DC54(void) {
    // add r0, #0x44
    ov07_02222748(r0, *((u32*)(r0 + 0x3c)));
    // add r0, #0x68
    ov07_022222B4(r5);
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x68
    ov07_0222207C(r5, *((u32*)(r5 + 0x3c)), 0xb4, 0xb6);
    *((u32*)(r5 + 0x40)) = (*((u32*)(r5 + 0x40)) + 1);
    // str r1, [sp]
    // add r5, #0x8c
    // str r0, [sp, #4]
    ov07_02222AC4(r5, 0x10, r4, 0xe);
    // add r0, #0x8c
    ov07_02222AF4(r5);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x3c)), r4);
    *((u32*)(r5 + 0x40)) = (*((u32*)(r5 + 0x40)) + 1);
}



void ov07_0222DCD8(void) {
    ov07_0222DBD8(r1);
    ov07_0222DC54(r4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x3c)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_0222DD20(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // mov r1, #0xb8
    // add r6, r0, #0
    // add r7, r2, #0
    // str r3, [sp, #8]
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r6, [r4]
    // str r5, [r4, #4]
    // str r7, [r4, #8]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02222004
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0222202C
    // add r5, r0, #0
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [r4, #0x10]
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // mov r0, #0xc
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xa
    // add r0, #0x14
    // add r2, r1, #0
    // mov r3, #0xf
    // bl ov07_02222508
    // ldr r0, [sp, #8]
    // mov r1, #1
    // str r0, [r4, #0x3c]
    // bl ManagedSprite_SetAnimateFlag
    // ldr r0, [r4, #0x3c]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x3c]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x3c]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x3c]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [sp, #0xc]
    // lsl r0, r0, #5
    // add r1, r7, r0
    // add r0, r4, #0
    // add r0, #0xb4
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0xb6
    // strh r6, [r0]
    // cmp r5, #0
    // bge _0222DDD6
    // mov r1, #7
    // b _0222DDD8
    // mov r1, #0x17
    // mvn r1, r1
    // add r0, r1, #0
    // mul r0, r5
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // mov r1, #0
    // mov r0, #0x20
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x68
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov07_02222268
    // mov r0, #0x20
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x44
    // mov r1, #5
    // mov r2, #0xa
    // mov r3, #0xc
    // bl ov07_02222508
    // mov r0, #0x1a
    // str r0, [sp]
    // ldr r0, _0222DE28 ; =0x04000050
    // mov r1, #0
    // mov r2, #0x3f
    // mov r3, #0x1f
    // bl G2x_SetBlendAlpha_
    // ldr r0, [r4]
    // ldr r1, _0222DE2C ; =ov07_0222DCD8
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222DE28: .word 0x04000050
    // _0222DE2C: .word ov07_0222DCD8
    // TODO: decompile
}



void ov07_0222DE30(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222DE46: ; jump table
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    ov07_02222268(0, 0x28, 0);
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    ov07_02222268(0, 0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // sub r2, #0x50
    ov07_02222268(0, 0, 0);
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    ov07_02222268(0, 0, 0);
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    ov07_02222268(0, 0x50, 0);
    // mvn r2, r2
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    ov07_02222268(0, 0x27, 0);
    GF_AssertFail();
}



void ov07_0222DEEC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #4
    // bls _0222DEFC
    // b _0222E010
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222DF08: ; jump table
    // ldr r0, [r4, #0x6c]
    // add r0, r0, #1
    // str r0, [r4, #0x6c]
    // cmp r0, #4
    // ble _0222E010
    // add r0, r4, #0
    // bl ov07_0222DE30
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // mov r0, #0
    // str r0, [r4, #0x6c]
    // b _0222E010
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov07_022222B4
    // cmp r0, #0
    // beq _0222DF4E
    // mov r2, #0x64
    // mov r3, #0x66
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // ldr r1, [r4, #0x14]
    // add r0, #0x18
    // bl ov07_0222207C
    // b _0222E010
    // ldr r0, [r4, #0x68]
    // add r0, r0, #1
    // str r0, [r4, #0x68]
    // cmp r0, #6
    // bge _0222DF7E
    // mov r0, #0
    // str r0, [r4, #0xc]
    // mov r0, #0x64
    // ldrsh r1, [r4, r0]
    // mov r0, #0x18
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r0, #0x64
    // strh r1, [r0]
    // mov r0, #0x66
    // ldrsh r1, [r4, r0]
    // mov r0, #0x1a
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r0, #0x66
    // strh r1, [r0]
    // b _0222E010
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // bl ManagedSprite_SetOamMode
    // mov r1, #0x10
    // add r0, r4, #0
    // mov r2, #0
    // str r1, [sp]
    // add r0, #0x3c
    // add r3, r2, #0
    // str r1, [sp, #4]
    // bl ov07_02222AC4
    // ldr r0, _0222E01C ; =0x00007FFF
    // mov r1, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x10]
    // mov r2, #0xa
    // add r3, r1, #0
    // bl Pokepic_StartPaletteFade
    // b _0222E010
    // add r0, r4, #0
    // add r0, #0x3c
    // bl ov07_02222AF4
    // cmp r0, #0
    // beq _0222DFC4
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // bl Pokepic_ResumePaletteFade
    // cmp r0, #0
    // bne _0222E010
    // ldr r0, [r4, #0xc]
    // mov r2, #0
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, _0222E01C ; =0x00007FFF
    // mov r1, #0xa
    // str r0, [sp]
    // ldr r0, [r4, #0x10]
    // add r3, r2, #0
    // bl Pokepic_StartPaletteFade
    // b _0222E010
    // ldr r0, [r4, #0x10]
    // bl Pokepic_ResumePaletteFade
    // cmp r0, #0
    // bne _0222E010
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // b _0222E010
    // ldr r0, [r4, #0x14]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // bl SpriteSystem_DrawSprites
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0222E01C: .word 0x00007FFF
    // TODO: decompile
}



void ov07_0222E020(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // mov r1, #0x70
    // add r5, r0, #0
    // str r2, [sp]
    // add r6, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // ldr r0, [sp]
    // str r7, [r4, #4]
    // str r0, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // str r6, [r4, #0x14]
    // add r0, r6, #0
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // add r1, r4, #0
    // add r2, r4, #0
    // ldr r0, [r4, #0x14]
    // add r1, #0x64
    // add r2, #0x66
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r4]
    // ldr r1, _0222E078 ; =ov07_0222DEEC
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222E078: .word ov07_0222DEEC
    // TODO: decompile
}



void ov07_0222E07C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222E092: ; jump table
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
    ov07_02222268(0, 0x50, 0);
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
    ov07_02222268(0, 0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
    // sub r2, #0x50
    ov07_02222268(0, 0, 0);
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
    ov07_02222268(0, 0x28, 0);
    GF_AssertFail();
}



void ov07_0222E108(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // cmp r0, #6
    // bhi _0222E212
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E122: ; jump table
    // ldr r0, [r4, #0x54]
    // add r0, r0, #1
    // str r0, [r4, #0x54]
    // cmp r0, #1
    // ble _0222E212
    // add r0, r4, #0
    // bl ov07_0222E07C
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // mov r0, #0
    // str r0, [r4, #0x54]
    // b _0222E2DC
    // add r0, r4, #0
    // add r0, #0x28
    // bl ov07_022222B4
    // cmp r0, #0
    // beq _0222E16C
    // mov r2, #0x4c
    // mov r3, #0x4e
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // ldr r1, [r4, #0x24]
    // add r0, #0x28
    // bl ov07_0222207C
    // b _0222E2DC
    // ldr r0, [r4, #0x50]
    // add r0, r0, #1
    // str r0, [r4, #0x50]
    // cmp r0, #4
    // bge _0222E19C
    // mov r0, #0
    // str r0, [r4, #0xc]
    // mov r0, #0x4c
    // ldrsh r1, [r4, r0]
    // mov r0, #0x28
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r0, #0x4c
    // strh r1, [r0]
    // mov r0, #0x4e
    // ldrsh r1, [r4, r0]
    // mov r0, #0x2a
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r0, #0x4e
    // strh r1, [r0]
    // b _0222E2DC
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // mov r0, #8
    // str r0, [r4, #0x54]
    // ldr r0, [r4, #0x24]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x24]
    // mov r1, #1
    // bl ManagedSprite_SetAnimateFlag
    // b _0222E2DC
    // ldr r0, [r4, #0x54]
    // sub r0, r0, #1
    // str r0, [r4, #0x54]
    // bpl _0222E212
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221E6C8
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _0222E2E8 ; =0x0000FFFF
    // mov r1, #1
    // lsl r2, r2, #0x10
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // lsr r2, r2, #0x10
    // sub r3, #9
    // bl PaletteData_BeginPaletteFade
    // ldr r7, _0222E2E8 ; =0x0000FFFF
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // beq _0222E20A
    // mov r1, #0xe
    // mov r2, #0x10
    // mov r3, #0
    // str r7, [sp]
    // bl Pokepic_StartPaletteFade
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _0222E1F8
    // b _0222E2DC
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0222E2DC
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221E6C8
    // add r2, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0222E2E8 ; =0x0000FFFF
    // mov r1, #1
    // lsl r2, r2, #0x10
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // lsr r2, r2, #0x10
    // sub r3, #9
    // bl PaletteData_BeginPaletteFade
    // ldr r7, _0222E2E8 ; =0x0000FFFF
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // beq _0222E26C
    // mov r2, #0
    // mov r1, #2
    // add r3, r2, #0
    // str r7, [sp]
    // bl Pokepic_StartPaletteFade
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #4
    // blt _0222E25A
    // b _0222E2DC
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0222E2DC
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // mov r0, #4
    // str r0, [r4, #0x54]
    // str r0, [r4, #0x50]
    // mov r0, #0
    // str r0, [r4, #0x58]
    // b _0222E2DC
    // ldr r0, [r4, #0x54]
    // sub r0, r0, #1
    // str r0, [r4, #0x54]
    // bpl _0222E2DC
    // mov r0, #4
    // str r0, [r4, #0x54]
    // ldr r0, [r4, #0x50]
    // sub r0, r0, #1
    // str r0, [r4, #0x50]
    // bpl _0222E2B2
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // b _0222E2DC
    // ldr r0, [r4, #0x24]
    // ldr r1, [r4, #0x58]
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, [r4, #0x58]
    // mov r0, #1
    // eor r0, r1
    // str r0, [r4, #0x58]
    // b _0222E2DC
    // ldr r0, [r4, #0x24]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // bl SpriteSystem_DrawSprites
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222E2E8: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_0222E2EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // mov r1, #0x5c
    // add r4, r0, #0
    // str r2, [sp, #4]
    // add r7, r3, #0
    // bl ov07_022324D8
    // add r6, r0, #0
    // str r4, [r6]
    // ldr r0, [sp, #4]
    // str r5, [r6, #4]
    // str r0, [r6, #8]
    // add r0, r4, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // str r0, [r6, #0x10]
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r6]
    // add r1, r4, #0
    // bl ov07_0221FA48
    // str r0, [r5, #0x14]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0222E31C
    // str r7, [r6, #0x24]
    // add r0, r7, #0
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r6, #0x24]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // add r1, r6, #0
    // add r2, r6, #0
    // ldr r0, [r6, #0x24]
    // add r1, #0x4c
    // add r2, #0x4e
    // bl ManagedSprite_GetPositionXY
    // mov r1, #0x4c
    // ldrsh r2, [r6, r1]
    // add r0, r6, #0
    // add r0, #0x4c
    // sub r2, #0x28
    // strh r2, [r0]
    // mov r2, #0x4e
    // ldrsh r3, [r6, r2]
    // add r0, r6, #0
    // add r0, #0x4e
    // sub r3, #0x28
    // strh r3, [r0]
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [r6, #0x24]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r6, #0x24]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // mov r0, #0xf
    // mvn r0, r0
    // str r0, [r6, #0x54]
    // mov r0, #0x1a
    // str r0, [sp]
    // ldr r0, _0222E39C ; =0x04000050
    // mov r1, #0
    // mov r2, #0x3f
    // mov r3, #0x1f
    // bl G2x_SetBlendAlpha_
    // ldr r0, [r6]
    // ldr r1, _0222E3A0 ; =ov07_0222E108
    // add r2, r6, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222E39C: .word 0x04000050
    // _0222E3A0: .word ov07_0222E108
    // TODO: decompile
}



void ov07_0222E3A4(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _0222E3E4 ; =0x00000AAA
    // add r4, r0, #0
    // add r5, r1, #0
    // add r0, #0x10
    // mov r1, #0
    // mov r3, #3
    // bl ov07_02222418
    // cmp r5, #0
    // beq _0222E3D0
    // mov r0, #0
    // ldr r1, [r4, #0x18]
    // mvn r0, r0
    // mul r0, r1
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #8]
    // mov r1, #0xa
    // mov r2, #0x10
    // bl Pokepic_SetAttr
    // b _0222E3DC
    // mov r1, #0xa
    // add r2, r1, #0
    // ldr r0, [r4, #8]
    // sub r2, #0x1a
    // bl Pokepic_SetAttr
    // mov r0, #0
    // str r0, [r4, #0x4c]
    // str r0, [r4, #0x50]
    // pop {r3, r4, r5, pc}
    // _0222E3E4: .word 0x00000AAA
    // TODO: decompile
}



void ov07_0222E3E8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E402: ; jump table
    // add r0, #0x10
    ov07_02222468(r0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 9, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x50)) = (*((u32*)(r4 + 0x50)) - 1);
    // bpl _0222E4F2
    *((u32*)(r4 + 0x4c)) = (*((u32*)(r4 + 0x4c)) + 1);
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r4, #0x24
    // str r0, [sp, #4]
    ov07_02222268(r4, r1);
    // add r0, #0x10
    ov07_02222468(r4);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 9, *((u32*)(r4 + 0x10)));
    // add r0, #0x24
    ov07_02222314(r4, *((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x4c)) = (*((u32*)(r4 + 0x4c)) + 1);
    // add r0, #0x10
    // asr r1, r1, #0x10
    ov07_02222418(r4, (*((u32*)(r4 + 0x10)) << 0x10), 0, 3);
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r4, #0x24
    // str r3, [sp]
    // str r0, [sp, #4]
    // asr r3, r3, #0x10
    ov07_02222268(r4, r1, ((r3 + 2) << 0x10));
    // add r0, #0x24
    ov07_02222314(r4, *((u32*)(r4 + 8)));
    // add r0, #0x10
    ov07_02222468(r4);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 9, *((u32*)(r4 + 0x10)));
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(r5, 0xc);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 1, 0xe);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 9, r5);
    *((u32*)(r4 + 0x4c)) = (*((u32*)(r4 + 0x4c)) + 1);
}



void ov07_0222E4F8(void) {
    ov07_0222E3E8(r1, r0);
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) + 1);
    // eor r1, r0
    *((u32*)(r4 + 0x54)) = *((u32*)(r4 + 0x54));
    ov07_0222E3A4(r4, *((u32*)(r4 + 0x54)));
    ov07_0222E3E8(r4);
    // str r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    Heap_Free(r4);
}



void ov07_0222E54C(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x58
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #4]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_02222004
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4A8
    // cmp r0, #0
    // bne _0222E598
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #8]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // b _0222E5B8
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #8]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xe]
    // ldr r0, [r4, #8]
    // mov r1, #0xb
    // mov r2, #0x32
    // bl Pokepic_SetAttr
    // cmp r6, #1
    // bne _0222E5CC
    // mov r0, #0
    // b _0222E5CE
    // mov r0, #1
    // str r0, [r4, #0x54]
    // ldr r1, [r4, #0x54]
    // add r0, r4, #0
    // bl ov07_0222E3A4
    // ldr r0, [r4, #4]
    // ldr r1, _0222E5E4 ; =ov07_0222E4F8
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // _0222E5E4: .word ov07_0222E4F8
    // TODO: decompile
}



void ov07_0222E5E8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E600: ; jump table
    // add r0, #0x10
    ov07_02222768(r0, *((u32*)(r0 + 0xc)));
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_022226C4(*((u32*)(r4 + 0xc)), (*((u32*)(r4 + 0x3c)) << 0x10), (*((u32*)(r4 + 0x40)) << 0x10), *((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    // bpl _0222E6A4
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    // add r4, #0x10
    // str r0, [sp]
    ov07_02222508(r4, 0xf, 0xa, 0xa);
    // add r0, #0x10
    ov07_02222768(r4, *((u32*)(r4 + 0xc)));
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_022226C4(*((u32*)(r4 + 0xc)), (*((u32*)(r4 + 0x3c)) << 0x10), (*((u32*)(r4 + 0x40)) << 0x10), *((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0xd);
}



void ov07_0222E6A8(void) {
    ov07_0222E5E8(r1, r0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 8)) = 0x10;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) - 1);
    // bpl _0222E6F2
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov07_0221C448(*((u32*)r4), r2);
    Heap_Free(r4);
}



void ov07_0222E6F4(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x44
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r0, #8
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xa
    // add r0, #0x10
    // add r2, r1, #0
    // mov r3, #0xf
    // bl ov07_02222508
    // mov r0, #4
    // str r0, [r4, #0x34]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAA0
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // str r0, [r4, #0x3c]
    // ldr r0, [r4]
    // ldr r1, _0222E750 ; =ov07_0222E6A8
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _0222E750: .word ov07_0222E6A8
    // TODO: decompile
}



void ov07_0222E754(void) {
    _s32_div_f(*((u32*)(r0 + 0x74)), 0x64);
    _s32_div_f(*((u32*)(r5 + 0x78)), 0x64);
    _s32_div_f(*((u32*)(r5 + 0x70)), 0x64);
    // str r0, [sp]
    // add r0, #0x18
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222508(r5, (r4 << 0x10), 0xa, (r6 << 0x10));
    ov07_02231E08(*((u32*)r5), 0x10, 0);
    _s32_div_f(*((u32*)(r5 + 0x70)), 0x64);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
    ov07_02222AC4(r5, 0x10, 0xa, 0);
    *((u32*)(r5 + 0x64)) = 0;
    *((u32*)(r5 + 0x68)) = 0;
}



void ov07_0222E7BC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E7D4: ; jump table
    // add r0, #0x18
    ov07_02222748(r0, *((u32*)(r0 + 0x14)));
    _s32_div_f(*((u32*)(r4 + 0x78)), 0x64);
    _s32_div_f(*((u32*)(r4 + 0x74)), 0x64);
    _s32_div_f(*((u32*)(r4 + 0x70)), 0x64);
    // str r0, [sp]
    // add r0, #0x18
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222508(r4, (r6 << 0x10), 0xa, (r7 << 0x10));
    *((u32*)(r4 + 0x64)) = (*((u32*)(r4 + 0x64)) + 1);
    // add r0, #0x18
    ov07_02222748(r4, *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x68)) = (*((u32*)(r4 + 0x68)) + 1);
    *((u32*)(r4 + 0x64)) = r5;
    _s32_div_f(*((u32*)(r4 + 0x74)), 0x64);
    _s32_div_f(*((u32*)(r4 + 0x78)), 0x64);
    _s32_div_f(*((u32*)(r4 + 0x70)), 0x64);
    // add r4, #0x18
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222508(r4, (r6 << 0x10), 0xa, (r7 << 0x10));
    *((u32*)(r4 + 0x64)) = (*((u32*)(r4 + 0x64)) + 1);
    // add r0, #0x3c
    ov07_02222AF4(r4);
    *((u32*)(r4 + 0x64)) = (*((u32*)(r4 + 0x64)) + 1);
}



void ov07_0222E894(void) {
    ov07_0222E754(*((u32*)(r0 + 0x7c)));
    ov07_0222E7BC(r5);
    *((u32*)(r5 + 0x7c)) = (*((u32*)(r5 + 0x7c)) + 1);
    ov07_0222E7BC((*((u32*)(r5 + 0x7c)) + 1));
    *((u32*)(r5 + 0x6c)) = (*((u32*)(r5 + 0x6c)) - 1);
    // bmi _0222E8FC
    _s32_div_f(*((u32*)(r5 + 0x70)), 3);
    // sub r0, r1, r0
    *((u32*)(r5 + 0x70)) = r0;
    _s32_div_f(*((u32*)(r5 + 0x74)), 3);
    // sub r0, r1, r0
    *((u32*)(r5 + 0x74)) = r0;
    _s32_div_f(*((u32*)(r5 + 0x78)), 3);
    // sub r0, r1, r0
    *((u32*)(r5 + 0x78)) = r0;
    *((u32*)(r5 + 0x7c)) = r4;
    *((u32*)(r5 + 0x7c)) = (*((u32*)(r5 + 0x7c)) + 1);
}



void ov07_0222E90C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E928: ; jump table
    ov07_0222E894(r1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x10)) = 0x1e;
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x14)), 1);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x14)), (0xfe << 0x16), (0xfe << 0x16));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
    ov07_02222AC4(r4, 0, 0x10, 0x10);
    // str r0, [sp]
    StartBrightnessTransition(8, 0x10, 0, 0xd);
    // mvn r0, r0
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x10)) = (0 - 1);
    // mvn r0, r0
    IsBrightnessTransitionActive(1, *((u32*)(r4 + 0x10)));
    // str r0, [sp]
    StartBrightnessTransition(8, 0, 0x10, 0xd);
    // mvn r0, r0
    *((u32*)(r4 + 0x10)) = 1;
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    IsBrightnessTransitionActive(1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov07_02231E08(*((u32*)r4), 0x10, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
    ov07_02222AC4(r4, 0x10, 0, 0);
    // add r0, #0x3c
    ov07_02222AF4(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x14)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_0222EA48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // mov r1, #0x80
    // add r6, r0, #0
    // str r2, [sp]
    // add r5, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r6, [r4]
    // ldr r0, [sp]
    // str r7, [r4, #4]
    // str r0, [r4, #8]
    // str r5, [r4, #0x14]
    // add r0, r5, #0
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x14]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x14]
    // mov r1, #4
    // bl ManagedSprite_SetAnimationFrame
    // mov r0, #3
    // str r0, [r4, #0x6c]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // str r0, [r4, #0x70]
    // ldr r0, _0222EAAC ; =0x000005DC
    // ldr r1, _0222EAB0 ; =ov07_0222E90C
    // str r0, [r4, #0x74]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [r4, #0x78]
    // ldr r0, [r4]
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222EAAC: .word 0x000005DC
    // _0222EAB0: .word ov07_0222E90C
    // TODO: decompile
}



void ov07_0222EAB4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222EACA: ; jump table
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x10
    ov07_02222268(0, 0, 0);
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, #0x10
    ov07_02222268(0, 0, 0x20);
}



void ov07_0222EB00(void) {
    ov07_0222EAB4(r1, r0);
    // str r0, [r4]
    // add r0, #0x10
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x10
    ov07_022220B8(r4, *((u32*)(r4 + 8)), 0xc, 0xe);
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) + 1);
    // str r0, [r4]
    // str r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    Heap_Free(r4);
}



void ov07_0222EB6C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x38
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #4]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #8]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xe]
    // mov r0, #0
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #4]
    // ldr r1, _0222EBAC ; =ov07_0222EB00
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // _0222EBAC: .word ov07_0222EB00
    // TODO: decompile
}



void ov07_0222EBB0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222EBCA: ; jump table
    // add r0, #0x14
    ov07_02222A44(r1, 1, 0x40);
    // mul r0, r1
    *((u32*)(r4 + 0x20)) = *((u32*)(r4 + 8));
    // str r0, [r4]
    // ldrsh r2, [r4, r2]
    // add r2, #8
    // ldrsh r1, [r4, r1]
    // add r0, #0x14
    // asr r2, r2, #0x10
    ov07_02222240(r4, 0x10, (0x12 << 0x10), *((u32*)(r4 + 0xc)));
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 0x12);
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // add r2, #0x20
    // str r0, [sp, #4]
    // add r0, #0x14
    // asr r2, r2, #0x10
    ov07_02222268(r4, (r1 << 0x10), 0);
    // mul r0, r1
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 8));
    // str r0, [r4]
    // add r0, #0x14
    ov07_022222B4(r4, *((u32*)(r4 + 0x1c)));
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0, 0x14);
    // add r0, #0x14
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0, 0x14);
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, r1, r2
    // add r0, #0x40
    // asr r2, r2, #0x10
    ov07_02222268(r4, ((*((u32*)(r4 + 8)) << 5) << 0x10), 0);
    // str r0, [r4]
    // add r0, #0x40
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x38)), 0, 0x40);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x14
    ov07_02222268(r4, 0x14, 0x10, 0);
    // str r0, [r4]
    // add r0, #0x14
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(0, 0x10);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x40
    ov07_02222268(r4, 0x40, 0x3c, 0);
    // str r0, [r4]
    // add r0, #0x40
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x38)), 0, 0x40);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(0, 0x3c);
    // str r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    Heap_Free(r4);
}



void ov07_0222ED7C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x64
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4, #4]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_02222004
    // str r0, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #0xc]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x12]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x38]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x3c]
    // ldr r0, [r4, #0x38]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x3e]
    // ldr r0, [r4, #4]
    // ldr r1, _0222EDEC ; =ov07_0222EBB0
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _0222EDEC: .word ov07_0222EBB0
    // TODO: decompile
}



void ov07_0222EDF0(void) {
}



void ov07_0222EE14(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222EE2E: ; jump table
    // add r0, #0x1c
    ov07_02222788(r0, *((u32*)(r0 + 0x18)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0x18)), 0x44, 0x46, *((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x40)) = (*((u32*)(r4 + 0x40)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0x1c
    // str r0, [sp, #8]
    ov07_02222590(r4, 9, 0xb, 8);
    // add r0, #0x1c
    ov07_02222788(r4, *((u32*)(r4 + 0x18)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0x18)), 0x44, 0x46, *((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x40)) = (*((u32*)(r4 + 0x40)) + 1);
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r4, #0x1c
    // str r0, [sp, #8]
    ov07_02222590(r4, 0xb, 0xa, 0xf);
    // add r0, #0x1c
    ov07_02222788(r4, *((u32*)(r4 + 0x18)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0x18)), 0x44, 0x46, *((u32*)(r4 + 0x30)));
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(r4 + 0x18)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x18)), 0xd, 0xd);
    *((u32*)(r4 + 0x40)) = (*((u32*)(r4 + 0x40)) + 1);
}



void ov07_0222EF0C(void) {
    // str r2, [r1]
    ManagedSprite_SetDrawPriority(0x64, 0);
    ManagedSprite_SetPriority(r5, 1);
    ManagedSprite_SetDrawFlag(r5, 1);
    ManagedSprite_SetAnimateFlag(r5, 1);
    ManagedSprite_SetAnimSpeed(r5, r4);
    ManagedSprite_SetAnim(r5, 0);
    ManagedSprite_SetAnimationFrame(r5, 0);
    ManagedSprite_TickNFrames(r5, (0x37 << 0xc));
}



void ov07_0222EF58(void) {
    ManagedSprite_IsAnimated(*((u32*)r1));
    // str r0, [r5]
}



void ov07_0222EF88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222EFA2: ; jump table
    ov07_0222EDF0(r1);
    // add r0, r6, r2
    // add r1, #0x60
    // add r1, r1, r2
    ov07_0222EF0C(*((u32*)(*((u32*)(r6 + 0x10)) + 0x48)), r6, (2 << 0xc));
    *((u32*)(r6 + 0xc)) = (*((u32*)(r6 + 0xc)) + 1);
    ov07_0222EE14(r6);
    // add r0, r6, r2
    // add r1, #0x60
    // add r1, r1, r2
    ov07_0222EF58(*((u32*)(*((u32*)(r6 + 0x10)) + 0x48)), r6, (*((u32*)(r6 + 0x10)) << 2));
    // add r0, r6, r0
    ManagedSprite_SetAnim(*((u32*)((*((u32*)(r6 + 0x10)) << 2) + 0x48)), 1);
    *((u32*)(r6 + 0xc)) = (*((u32*)(r6 + 0xc)) + 1);
    // add r2, #0x78
    // ldr r0, [r2, r1]
    // str r0, [r2, r1]
    // add r0, r6, r0
    *((u32*)(r6 + 0x10)) = (*((u32*)(r6 + 0x10)) + 1);
    *((u32*)(r6 + 0xc)) = 0;
    *((u32*)(r6 + 0xc)) = (*((u32*)(r6 + 0xc)) + 1);
    // add r4, #0x60
    ov07_0222EF0C(*((u32*)(r6 + 0x48)), r6, (2 << 0xc));
    *((u32*)(r6 + 0xc)) = (*((u32*)(r6 + 0xc)) + 1);
    // add r4, #0x60
    ov07_0222EF58(*((u32*)(r6 + 0x48)), r6);
    *((u32*)(r6 + 0xc)) = (*((u32*)(r6 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r6 + 0x48)));
    ov07_0221C448(*((u32*)r6), r7);
    Heap_Free(r6);
    SpriteSystem_DrawSprites(*((u32*)(r6 + 8)));
}



void ov07_0222F0B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // str r1, [sp]
    // mov r1, #0x90
    // add r4, r0, #0
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // bl ov07_022324D8
    // ldr r1, [sp]
    // str r4, [r0]
    // str r1, [r0, #4]
    // ldr r1, [sp, #4]
    // str r0, [sp, #0x14]
    // str r1, [r0, #8]
    // ldr r0, [r0]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0]
    // bl ov07_0221FA48
    // ldr r1, [sp, #0x14]
    // str r0, [r1, #0x18]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // ldr r0, [sp, #0x14]
    // mov r1, #1
    // ldr r0, [r0, #0x18]
    // bl Pokepic_GetAttr
    // ldr r1, [sp, #0x14]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add r1, #0x44
    // str r0, [sp, #0xc]
    // strh r0, [r1]
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [sp, #0x14]
    // ldr r0, [r0]
    // bl ov07_0221FAA0
    // ldr r1, [sp, #0x14]
    // add r1, #0x46
    // strh r0, [r1]
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x1c
    // ldr r1, [r1]
    // bl ov07_0221F9E8
    // ldr r5, [sp, #0x14]
    // mov r4, #0
    // cmp r4, #0
    // bne _0222F130
    // ldr r0, [sp, #8]
    // b _0222F13A
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x1c
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0x48]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // lsr r0, r4, #0x1f
    // add r0, r4, r0
    // asr r1, r0, #1
    // ldr r0, _0222F200 ; =0x00001555
    // mov r2, #3
    // mul r0, r1
    // asr r0, r0, #4
    // lsl r0, r0, #2
    // ldr r1, _0222F204 ; =FX_SinCosTable_
    // str r0, [sp, #0x18]
    // add r1, r1, r0
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // lsl r2, r2, #0x10
    // mov r3, #0
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // ldr r0, _0222F208 ; =0x00000000
    // adc r1, r0
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // lsl r0, r1, #4
    // asr r6, r0, #0x10
    // mov r2, #3
    // ldr r1, _0222F204 ; =FX_SinCosTable_
    // ldr r0, [sp, #0x18]
    // lsl r2, r2, #0x10
    // ldrsh r0, [r1, r0]
    // mov r3, #0
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // ldr r2, _0222F208 ; =0x00000000
    // adc r1, r2
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // lsl r0, r0, #4
    // asr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // lsr r2, r4, #0x1f
    // lsl r1, r4, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // bne _0222F1C2
    // add r0, r7, r6
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r0, [r5, #0x48]
    // mov r1, #1
    // bl ManagedSprite_SetFlipMode
    // b _0222F1C8
    // sub r0, r7, r6
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r2, r0, #0x10
    // ldr r0, [r5, #0x48]
    // add r1, r6, #0
    // bl ManagedSprite_SetPositionXY
    // cmp r4, #2
    // bge _0222F1E2
    // mov r0, #8
    // b _0222F1E4
    // mov r0, #0
    // add r4, r4, #1
    // str r0, [r5, #0x78]
    // add r5, r5, #4
    // cmp r4, #6
    // blt _0222F128
    // ldr r0, [sp, #0x14]
    // ldr r1, _0222F20C ; =ov07_0222EF88
    // ldr r0, [r0]
    // ldr r2, [sp, #0x14]
    // bl ov07_0221C410
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222F200: .word 0x00001555
    // _0222F204: .word FX_SinCosTable_
    // _0222F208: .word 0x00000000
    // _0222F20C: .word ov07_0222EF88
    // TODO: decompile
}



void ov07_0222F210(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F22A: ; jump table
    ManagedSprite_SetAnimateFlag(*((u32*)(r1 + 0x5c)), 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x5c)));
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x5c)), 0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // add r0, #0x14
    ov07_02222508(r4, 0xa, 0xa, 0);
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 0);
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r4, (r5 << 0x10), 0x88, (r0 << 0x10));
    // add r0, #0x38
    ov07_02222314(r4, *((u32*)(r4 + 0x10)));
    // add r0, #0x14
    ov07_02222768(r4, *((u32*)(r4 + 0x10)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 6, 1);
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0xd);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x5c)), 1);
    ManagedSprite_SetAnimSpeed(*((u32*)(r4 + 0x5c)), (1 << 0xc));
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x5c)), 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x5c)));
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x5c)), 0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r4, r3]
    // add r0, #0x60
    ov07_02222268(r4, 0, 0, 0x8a);
    // add r0, #0x60
    ov07_022222B4(r4);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x5c)), 0x88, 0x62);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x5c)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_0222F378(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // mov r1, #0x8c
    // add r5, r0, #0
    // str r2, [sp]
    // add r6, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // ldr r0, [sp]
    // str r7, [r4, #4]
    // str r0, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #6
    // mov r2, #0
    // str r0, [r4, #0x10]
    // bl Pokepic_SetAttr
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r1, r4, #0
    // add r1, #0x88
    // strh r0, [r1]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #1
    // bl ov07_02221F80
    // add r1, r4, #0
    // add r1, #0x8a
    // strh r0, [r1]
    // str r6, [r4, #0x5c]
    // add r0, r6, #0
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x5c]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // mov r1, #0x88
    // mov r2, #0x8a
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0x5c]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4]
    // ldr r1, _0222F404 ; =ov07_0222F210
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222F404: .word ov07_0222F210
    // TODO: decompile
}



void ov07_0222F408(void) {
    ov07_02221FF0(r1);
    // lsl r2, r0
    // add r4, #0xc4
    // str r0, [sp]
    PaletteData_BlendPalettes(*((u32*)r4), 2, ((1 << 0x10) >> 0x10), 8);
}



void ov07_0222F434(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r1, #0xa
    // mov r0, #0x14
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x28
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov07_02222590
    // mov r0, #4
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xa
    // add r0, #0x4c
    // add r2, r1, #0
    // mov r3, #1
    // bl ov07_02222508
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #6
    // add r0, #0x98
    // str r1, [r0]
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02231924
    // add r1, r0, #0
    // lsl r2, r1, #1
    // ldr r1, _0222F4D0 ; =ov07_02236800
    // ldr r0, [r4, #0x20]
    // ldrh r1, [r1, r2]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #0
    // add r0, #0x28
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // bl ov07_02222644
    // add r0, r4, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _0222F4B8
    // ldr r1, [sp, #0x10]
    // mov r0, #0
    // bl _fsub
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // bl ManagedSprite_SetAffineScale
    // ldr r1, [r4, #0x18]
    // add r0, r4, #0
    // bl ov07_0222F408
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _0222F4D0: .word ov07_02236800
    // TODO: decompile
}



void ov07_0222F4D4(void) {
    // add r0, #0x94
    // add r0, #0x28
    ov07_0222260C(r0);
    // add r0, #0x28
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    ov07_02222644(r5);
    // add r0, #0xc8
    // ldr r1, [sp, #0x10]
    _fsub(r4);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x18)));
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_022226FC(*((u32*)(r5 + 0x18)), (*((u32*)(r5 + 0x14)) << 0x10), (*((u32*)(r5 + 0x10)) << 0x10), *((u32*)(r5 + 0x3c)));
    // add r0, #0x98
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0x98
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r5, #0x28
    // str r0, [sp, #8]
    ov07_02222590(r5, 0xa, 1, 0x14);
    // add r0, #0x28
    ov07_0222260C(r5);
    // add r0, #0x4c
    ov07_02222558(r5);
    // ldrsh r0, [r5, r0]
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    *((u16*)(r5 + 0x28)) = 0x4c;
    // add r0, #0x28
    ov07_02222644(r5);
    // add r0, #0xc8
    // ldr r1, [sp, #0x10]
    _fsub(r4);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x18)));
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_022226FC(*((u32*)(r5 + 0x18)), (*((u32*)(r5 + 0x14)) << 0x10), (*((u32*)(r5 + 0x10)) << 0x10), *((u32*)(r5 + 0x3c)));
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x20)), r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x18)), r4);
}



void ov07_0222F600(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // add r1, sp, #0xc
    // ldr r0, [r4, #0x1c]
    // add r1, #2
    // add r2, sp, #0xc
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0xc
    // mov r0, #0
    // ldrsh r3, [r1, r0]
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // mov r0, #8
    // str r3, [sp]
    // sub r3, #0x40
    // str r0, [sp, #4]
    // add r0, r4, #0
    // lsl r3, r3, #0x10
    // add r0, #0x70
    // add r2, r1, #0
    // asr r3, r3, #0x10
    // bl ov07_02222268
    // mov r2, #0xa
    // str r2, [sp]
    // str r2, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x28
    // mov r1, #2
    // mov r3, #0x14
    // bl ov07_02222590
    // add r0, r4, #0
    // add r0, #0x28
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // bl ov07_02222644
    // add r0, r4, #0
    // add r0, #0xcc
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _0222F668
    // ldr r1, [sp, #0x14]
    // mov r0, #0
    // bl _fsub
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // bl ManagedSprite_SetAffineScale
    // add r0, r4, #0
    // ldr r1, [r4, #0x1c]
    // add r0, #0x70
    // bl ov07_022222F0
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #6
    // add r0, #0x98
    // str r1, [r0]
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02231924
    // add r1, r0, #0
    // lsl r2, r1, #1
    // ldr r1, _0222F6BC ; =ov07_02236800
    // ldr r0, [r4, #0x24]
    // ldrh r1, [r1, r2]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, [r4, #0x1c]
    // add r0, r4, #0
    // bl ov07_0222F408
    // add sp, #0x18
    // pop {r4, pc}
    // _0222F6BC: .word ov07_02236800
    // TODO: decompile
}



void ov07_0222F6C0(void) {
    // add r0, #0x94
    // add r0, #0x98
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0x70
    ov07_022222F0(r0, *((u32*)(r0 + 0x1c)));
    // add r0, #0x98
    // add r0, #0x94
    // add r5, #0x94
    // str r0, [r5]
    // add r0, #0x70
    ov07_022222F0(r5, *((u32*)(r5 + 0x1c)));
    // add r0, #0x28
    ov07_0222260C(r5);
    // add r0, #0x28
    // add r1, sp, #4
    // add r2, sp, #0
    ov07_02222644(r5);
    // add r0, #0xcc
    // ldr r1, [sp, #4]
    _fsub(r4);
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x1c)));
    // add r0, #0x94
    // add r5, #0x94
    // str r0, [r5]
}



void ov07_0222F764(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F77E: ; jump table
    ov07_02231E08(*((u32*)r1), 0, 0x10);
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r0, #0x9c
    ov07_02222AC4(r4, 0, 8, 0x10);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x9c
    ov07_02222AF4(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_0222F434(r4);
    ov07_0222F4D4(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = 2;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) - 1);
    // bpl _0222F83E
    ov07_0222F600(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_0222F6C0(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [sp]
    // add r0, #0x9c
    // str r1, [sp, #4]
    ov07_02222AC4(r4, 8, 0, 8);
    // add r0, #0x9c
    ov07_02222AF4(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_0221C448(*((u32*)r4), r2);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}



void ov07_0222F848(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r1, #0xd0
    // add r6, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r6, [r4]
    // add r0, r6, #0
    // bl ov07_0221C514
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // add r1, r4, #0
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, r6, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // add r7, r0, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r0, r7, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // add r0, r7, #0
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // add r0, r6, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [sp, #4]
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // ldr r0, [sp, #4]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r0, [sp, #4]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r0, r6, r0
    // lsl r0, r0, #0x10
    // str r5, [r4, #0x14]
    // asr r6, r0, #0x10
    // ldr r0, [r4]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAA0
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x18]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x18]
    // ldr r1, [sp]
    // add r2, r5, #0
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x18]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x18]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0x1c]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x1c]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #0x28
    // bl ManagedSprite_SetAffineTranslation
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov07_0221FB78
    // add r1, r4, #0
    // add r1, #0xc8
    // str r0, [r1]
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_0221FB78
    // add r1, r4, #0
    // add r1, #0xcc
    // str r0, [r1]
    // ldr r0, [r4]
    // mov r1, #2
    // bl ov07_0221C4E8
    // str r0, [r4, #0x20]
    // ldr r0, [r4]
    // mov r1, #3
    // bl ov07_0221C4E8
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x20]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4]
    // ldr r1, _0222F9B4 ; =ov07_0222F764
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F9B4: .word ov07_0222F764
    // TODO: decompile
}



void ov07_0222F9B8(void) {
    // push {r4, lr}
    // sub sp, #0x20
    // mov r2, #0xa
    // add r4, r0, #0
    // add r0, #0xf8
    // mov r1, #0x19
    // add r3, r2, #0
    // str r2, [sp]
    // bl ov07_02222508
    // mov r0, #0x3a
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // mov r3, #0x38
    // str r0, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x44]
    // ldr r2, _0222FA04 ; =ov07_02222558
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x40]
    // add r1, #0xf8
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x3c]
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // add r0, r4, #0
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    // bl ov07_02222864
    // add sp, #0x20
    // pop {r4, pc}
    // _0222FA04: .word ov07_02222558
    // TODO: decompile
}



void ov07_0222FA08(void) {
    // push {r4, lr}
    // sub sp, #0x20
    // add r4, r0, #0
    // mov r0, #6
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xa
    // add r0, #0xf8
    // add r2, r1, #0
    // mov r3, #0x19
    // bl ov07_02222508
    // mov r0, #0x3a
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // mov r3, #0x38
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x3c]
    // ldr r2, _0222FA60 ; =ov07_02222558
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x40]
    // add r1, #0xf8
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x44]
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // add r0, r4, #0
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    // bl ov07_02222864
    // ldr r0, [r4, #0x3c]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add sp, #0x20
    // pop {r4, pc}
    // _0222FA60: .word ov07_02222558
    // TODO: decompile
}



void ov07_0222FA64(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222FA7C: ; jump table
    ov07_0222F9B8(r1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x48
    ov07_02222914(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // add r0, #0x14
    ov07_022227A8(r4, 4, 0, 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x14
    ov07_0222283C(r4, 0x38, 0x3a, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov07_0222FA08(r4);
    // add r0, #0x48
    ov07_02222914(r4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x3c)));
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r7);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_0222FB24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r6, r1, #0
    // mov r1, #0x47
    // lsl r1, r1, #2
    // add r5, r0, #0
    // str r2, [sp]
    // add r7, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // ldr r0, [sp]
    // str r6, [r4, #4]
    // str r0, [r4, #8]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x38]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x3a]
    // ldr r0, [r4, #0x10]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // mov r1, #0x3a
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    // strh r0, [r4, #0x3a]
    // add r0, sp, #4
    // add r1, r5, #0
    // bl ov07_0221F9E8
    // mov r6, #0
    // add r5, r4, #0
    // cmp r6, #0
    // bne _0222FB90
    // add r0, r7, #0
    // mov r1, #1
    // str r7, [r5, #0x3c]
    // bl ManagedSprite_SetAnim
    // b _0222FBA2
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #8]
    // add r2, sp, #4
    // bl SpriteSystem_NewSprite
    // mov r1, #1
    // str r0, [r5, #0x3c]
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x3c]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0x3c]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // mov r1, #0x38
    // mov r2, #0x3a
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x3c]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x3c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x3c]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #3
    // blt _0222FB80
    // ldr r0, [r4]
    // ldr r1, _0222FBE8 ; =ov07_0222FA64
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222FBE8: .word ov07_0222FA64
    // TODO: decompile
}



void ov07_0222FBEC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r7, #0
    // add r6, r5, #0
    // str r1, [sp, #0x10]
    // add r6, #0x30
    // add r4, r7, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x32
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0x30
    // mov r1, #0
    // str r0, [sp, #0xc]
    // ldr r2, _0222FC3C ; =0x00007FFF
    // add r0, r6, #0
    // add r3, r1, #0
    // bl ov07_022220FC
    // ldr r0, [r5, #0x38]
    // add r7, r7, #1
    // add r0, r0, r4
    // str r0, [r5, #0x38]
    // ldr r1, [r5, #0x48]
    // ldr r0, [sp, #0x10]
    // add r6, #0x24
    // mul r0, r1
    // str r0, [r5, #0x48]
    // ldr r0, _0222FC40 ; =0x00002AAA
    // add r5, #0x24
    // add r4, r4, r0
    // cmp r7, #6
    // blt _0222FBFC
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222FC3C: .word 0x00007FFF
    // _0222FC40: .word 0x00002AAA
    // TODO: decompile
}



void ov07_0222FC44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // str r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // add r5, r6, #0
    // add r4, r6, #0
    // ldr r0, [sp]
    // bl ov07_02222180
    // ldr r1, [r5, #0x38]
    // mov r2, #0xa
    // lsl r0, r1, #2
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r1, r0, #2
    // ldr r0, _0222FD00 ; =FX_SinCosTable_
    // ldr r3, [r6, #0x14]
    // ldrsh r0, [r0, r1]
    // lsl r2, r2, #0xc
    // mul r2, r3
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r3, r1, #0
    // mov r1, #0x13
    // lsl r1, r1, #4
    // mov r2, #0x30
    // add r7, r0, #0
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r5, r2]
    // ldr r0, [r4, #0x18]
    // add r1, r1, r2
    // ldr r2, _0222FD04 ; =0x00000132
    // lsl r1, r1, #0x10
    // ldrsh r2, [r6, r2]
    // asr r1, r1, #0x10
    // mov ip, r2
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r7, r7, r2
    // ldr r2, _0222FD08 ; =0x00000000
    // adc r3, r2
    // lsl r2, r3, #0x14
    // lsr r3, r7, #0xc
    // orr r3, r2
    // lsl r2, r3, #4
    // asr r2, r2, #0x10
    // mov r3, ip
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [r5, #0x38]
    // ldr r0, _0222FD0C ; =0x00003FFF
    // cmp r1, r0
    // blt _0222FCD6
    // ldr r0, _0222FD10 ; =0x0000BF49
    // cmp r1, r0
    // bgt _0222FCD6
    // ldr r0, [r4, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // b _0222FCE6
    // ldr r0, [r6]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r4, #0x18]
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [sp]
    // add r5, #0x24
    // add r0, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, r4, #4
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #6
    // blt _0222FC5A
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222FD00: .word FX_SinCosTable_
    // _0222FD04: .word 0x00000132
    // _0222FD08: .word 0x00000000
    // _0222FD0C: .word 0x00003FFF
    // _0222FD10: .word 0x0000BF49
    // TODO: decompile
}



void ov07_0222FD14(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222FD2E: ; jump table
    ov07_02231E08(*((u32*)r1), 1, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    ov07_02222AC4(0xa, 1, 0x10, 0xf);
    ov07_0222FBEC(r4, *((u32*)(r4 + 0x14)));
    ov07_0222FC44(r4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov07_0222FC44(r4);
    // add r0, r4, r0
    ov07_02222AF4((0x42 << 2));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x10)) = 0x1c;
    ov07_0222FC44(r4);
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) - 1);
    // bpl _0222FDFA
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    ov07_02222AC4(0xa, 0x10, 1, 0);
    ov07_0222FC44(r4);
    // add r0, r4, r0
    ov07_02222AF4((0x42 << 2));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x18)));
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r7);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_0222FE04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r1, #0
    // mov r1, #0x4d
    // lsl r1, r1, #2
    // add r4, r0, #0
    // str r2, [sp]
    // add r7, r3, #0
    // bl ov07_022324D8
    // add r6, r0, #0
    // str r4, [r6]
    // ldr r0, [sp]
    // str r5, [r6, #4]
    // str r0, [r6, #8]
    // add r0, r4, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // mov r1, #0
    // add r5, r0, #0
    // bl Pokepic_GetAttr
    // mov r1, #0x13
    // lsl r1, r1, #4
    // strh r0, [r6, r1]
    // add r0, r5, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // ldr r1, _0222FEA8 ; =0x00000132
    // strh r0, [r6, r1]
    // add r0, sp, #4
    // add r1, r4, #0
    // bl ov07_0221F9E8
    // mov r4, #0
    // add r5, r6, #0
    // cmp r4, #0
    // bne _0222FE5E
    // str r7, [r5, #0x18]
    // b _0222FE6A
    // ldr r0, [r6, #4]
    // ldr r1, [r6, #8]
    // add r2, sp, #4
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x18]
    // ldr r0, [r5, #0x18]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetAnimateFlag
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _0222FE56
    // ldr r0, [r6]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_02222004
    // str r0, [r6, #0x14]
    // ldr r0, [r6]
    // ldr r1, _0222FEAC ; =ov07_0222FD14
    // add r2, r6, #0
    // bl ov07_0221C410
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222FEA8: .word 0x00000132
    // _0222FEAC: .word ov07_0222FD14
    // TODO: decompile
}



void ov07_0222FEB0(void) {
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY();
    // add r0, sp, #8
    // ldrsh r3, [r0, r1]
    // ldrsh r2, [r0, r1]
    // neg r0, r0
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // add r2, r2, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r7, (r2 << 0x10), (r2 << 0x10), (r3 << 0x10));
    ManagedSprite_SetDrawFlag(r6, 1);
}



void ov07_0222FF04(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r0, r1, #0
    // add r1, r4, #0
    // bl ov07_022222F0
    // cmp r0, #0
    // beq _0222FFBE
    // add r1, sp, #8
    // add r0, r4, #0
    // add r1, #2
    // add r2, sp, #8
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #8
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // mov r1, #0x5b
    // lsl r1, r1, #2
    // str r0, [sp]
    // ldr r0, [sp]
    // mov r2, #0xe
    // mul r1, r0
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r1, r0, #2
    // ldr r0, _0222FFC4 ; =FX_SinCosTable_
    // lsl r2, r2, #0xc
    // ldrsh r0, [r0, r1]
    // mov r3, #0
    // asr r7, r0, #0x1f
    // add r1, r7, #0
    // str r0, [sp, #4]
    // bl _ll_mul
    // add r3, r0, #0
    // add r5, r1, #0
    // add r6, sp, #8
    // mov r2, #0
    // ldrsh r2, [r6, r2]
    // mov r6, #2
    // lsl r6, r6, #0xa
    // add r0, r4, #0
    // add r6, r3, r6
    // ldr r3, _0222FFC8 ; =0x00000000
    // ldr r1, [sp]
    // adc r5, r3
    // lsl r3, r5, #0x14
    // lsr r5, r6, #0xc
    // orr r5, r3
    // lsl r3, r5, #4
    // asr r3, r3, #0x10
    // add r2, r2, r3
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r2, #0xae
    // ldr r0, [sp, #4]
    // add r1, r7, #0
    // lsl r2, r2, #2
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // neg r0, r1
    // bl _fflt
    // ldr r1, _0222FFCC ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // mov r0, #0xfe
    // lsl r0, r0, #0x16
    // bl _fadd
    // add r1, r0, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0222FFC4: .word FX_SinCosTable_
    // _0222FFC8: .word 0x00000000
    // _0222FFCC: .word 0x45800000
    // TODO: decompile
}



void ov07_0222FFD0(void) {
    // ldr r0, [r7, r1]
    // ldr r0, [r7, r0]
    // str r2, [r7, r0]
    // ldr r0, [r7, r0]
    // str r2, [r7, r0]
    // ldr r1, [r7, r1]
    // add r0, r7, r0
    // add r3, #0x54
    // mul r2, r1
    // add r1, r3, r2
    ov07_0222FEB0(*((u32*)(((0x9d << 2) << 2) + 0x18)), (0x9d << 2), *((u32*)(r0 + 0x10)), *((u32*)(r0 + 0x14)));
    // ldr r1, [r7, r0]
    // str r1, [r7, r0]
    // ldr r0, [r7, r0]
    // add r6, #0x54
    ov07_0222FF04(*((u32*)(r7 + 0x18)), r7);
    // str r0, [sp]
    // ldr r0, [r7, r0]
    // add r6, #0x24
    // ldr r0, [sp]
}



void ov07_02230058(void) {
    ov07_0222FFD0(r1);
    Sprite_DeleteAndFreeResources(*((u32*)(r6 + 0x18)));
    Heap_Free(r6);
    ov07_0221C448(*((u32*)r6), r7);
    SpriteSystem_DrawSprites(*((u32*)(r6 + 8)));
}



void ov07_02230094(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r5, r1, #0
    // mov r1, #0x9e
    // lsl r1, r1, #2
    // add r4, r0, #0
    // str r2, [sp]
    // add r7, r3, #0
    // bl ov07_022324D8
    // add r6, r0, #0
    // str r4, [r6]
    // ldr r0, [sp]
    // str r5, [r6, #4]
    // str r0, [r6, #8]
    // add r0, r4, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // mov r1, #0
    // add r5, r0, #0
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // add r1, r4, #0
    // bl ov07_0221F9E8
    // mov r4, #0
    // add r5, r6, #0
    // cmp r4, #0
    // bne _022300F0
    // str r7, [r5, #0x18]
    // b _022300FC
    // ldr r0, [r6, #4]
    // ldr r1, [r6, #8]
    // add r2, sp, #0xc
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x18]
    // ldr r0, [r5, #0x18]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r5, #0x18]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r5, #0x18]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x18]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // mov r1, #3
    // bl _s32_div_f
    // ldr r0, [r5, #0x18]
    // bl ManagedSprite_SetAnim
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0xf
    // blt _022300E8
    // ldr r0, [r6]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_02222004
    // str r0, [r6, #0x10]
    // ldr r0, [r6]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0222202C
    // str r0, [r6, #0x14]
    // ldr r0, [r6]
    // ldr r1, _0223016C ; =ov07_02230058
    // add r2, r6, #0
    // bl ov07_0221C410
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223016C: .word ov07_02230058
    // TODO: decompile
}



void ov07_02230170(void) {
    // ldr r1, [r0, #0x2c]
    // cmp r1, #0
    // beq _02230180
    // cmp r1, #1
    // beq _02230194
    // cmp r1, #2
    // beq _022301A8
    // bx lr
    // ldr r1, _022301BC ; =0x00007FFF
    // str r1, [r0, #0x18]
    // mov r1, #5
    // str r1, [r0, #0x24]
    // mov r1, #1
    // lsl r1, r1, #0x10
    // str r1, [r0, #0x1c]
    // mov r1, #0x10
    // str r1, [r0, #0x28]
    // bx lr
    // ldr r1, _022301BC ; =0x00007FFF
    // str r1, [r0, #0x18]
    // mov r1, #4
    // mvn r1, r1
    // str r1, [r0, #0x24]
    // ldr r1, _022301C0 ; =0xFFFF0000
    // str r1, [r0, #0x1c]
    // mov r1, #0x10
    // str r1, [r0, #0x28]
    // bx lr
    // ldr r1, _022301BC ; =0x00007FFF
    // str r1, [r0, #0x18]
    // mov r1, #0xa
    // str r1, [r0, #0x24]
    // lsl r1, r1, #0xd
    // str r1, [r0, #0x1c]
    // mov r1, #0x10
    // str r1, [r0, #0x28]
    // bx lr
    // nop
    // _022301BC: .word 0x00007FFF
    // _022301C0: .word 0xFFFF0000
    // TODO: decompile
}



void ov07_022301C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // bl ov07_02222C84
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x58
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bge _022301EC
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // cmp r0, #0xc0
    // ble _022301F6
    // mov r0, #0xc0
    // str r0, [sp]
    // mov r0, #0
    // ldr r1, [r5, #0x20]
    // mvn r0, r0
    // mul r0, r1
    // ldr r4, [sp, #4]
    // str r0, [r5, #0x20]
    // ldr r0, [sp]
    // add r1, r4, #0
    // cmp r1, r0
    // bge _02230296
    // mov r0, #2
    // tst r0, r4
    // ldr r1, [r5, #0x1c]
    // beq _0223021A
    // ldr r0, [r5, #0x20]
    // lsl r0, r0, #0xc
    // add r2, r1, r0
    // b _02230220
    // ldr r0, [r5, #0x20]
    // lsl r0, r0, #0xc
    // sub r2, r1, r0
    // ldr r1, [sp, #4]
    // ldr r0, [r5, #0x18]
    // sub r3, r4, r1
    // ldr r1, _0223029C ; =0x00000199
    // mul r1, r3
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // asr r0, r0, #4
    // lsl r1, r0, #2
    // ldr r0, _022302A0 ; =FX_SinCosTable_
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // ldr r0, _022302A4 ; =0x00000000
    // adc r1, r0
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // lsl r0, r1, #4
    // asr r7, r0, #0x10
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x24]
    // sub r0, r4, r0
    // mul r0, r1
    // mov r1, #0xa
    // bl _s32_div_f
    // add r0, r7, r0
    // lsl r0, r0, #0x10
    // ldr r1, [r5, #0x30]
    // asr r7, r0, #0x10
    // lsl r0, r1, #0x10
    // lsr r1, r1, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // sub r6, r4, #1
    // bpl _0223027A
    // add r6, #0xc0
    // add r0, r0, r7
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // bl ov07_02222D88
    // ldr r1, [sp, #8]
    // lsl r2, r6, #2
    // str r0, [r1, r2]
    // ldr r0, [sp]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _0223020A
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223029C: .word 0x00000199
    // _022302A0: .word FX_SinCosTable_
    // _022302A4: .word 0x00000000
    // TODO: decompile
}



void ov07_022302A8(void) {
    ov07_02230170(r1);
    ov07_022301C4(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) - 1);
    ov07_022301C4(r4);
    *((u32*)(r4 + 0x2c)) = (*((u32*)(r4 + 0x2c)) + 1);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_0221C470(*((u32*)r4));
    ov07_0221FAC8(*((u32*)r4), r0);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 6, 0);
    ov07_02222C98(*((u32*)(r4 + 4)));
    ov07_02222C60(*((u32*)(r4 + 4)));
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221FB04(*((u32*)r4), 1);
    SetBgPriority(((r5 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(0, ((r0 << 0x18) >> 0x18));
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221BFD0(*((u32*)r4));
    BG_ClearCharDataRange(((r5 << 0x18) >> 0x18), (1 << 0xe), 0, r0);
    ov07_0221C4A0(*((u32*)r4));
    ov07_0221FAEC(*((u32*)r4), 1);
    BgClearTilemapBufferAndCommit(r5, ((r0 << 0x18) >> 0x18));
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r6);
}



void ov07_022303A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x34
    // add r7, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r7, [r4]
    // add r0, r7, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // mov r1, #0
    // str r0, [r4, #0xc]
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [r4, #0xc]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // sub r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAC8
    // cmp r0, #0
    // bne _02230402
    // ldr r0, [r4, #0xc]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // sub r6, #0x28
    // lsl r0, r6, #0x10
    // str r5, [r4, #0x14]
    // sub r5, #0x28
    // asr r0, r0, #0x10
    // neg r0, r0
    // neg r1, r5
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // str r5, [r4, #0x10]
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x10
    // bl ov07_02222D88
    // str r0, [r4, #0x30]
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_0221FAF8
    // bl ov07_02222D90
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221BFD0
    // add r2, r0, #0
    // ldr r1, [r4, #0x30]
    // add r0, r5, #0
    // bl ov07_02222BE4
    // str r0, [r4, #4]
    // mov r0, #1
    // str r0, [r4, #0x20]
    // add r0, r7, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_02231924
    // sub r0, r0, #3
    // cmp r0, #1
    // bhi _0223048A
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_0221FAEC
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // lsl r0, r5, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldr r0, [r4]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // mov r0, #0
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // ldr r0, [r4]
    // ldr r1, _02230498 ; =ov07_022302A8
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02230498: .word ov07_022302A8
    // TODO: decompile
}



void ov07_0223049C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #5
    // bls _022304AC
    // b _022305F0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022304B8: ; jump table
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0xc
    // mov r1, #0x7f
    // add r3, r2, #0
    // bl ov07_02222268
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _022305F4 ; =0xFFFF1FFF
    // and r1, r0
    // lsr r0, r2, #0xd
    // orr r0, r1
    // str r0, [r2]
    // mov r1, #0
    // ldr r0, [r4]
    // add r2, r1, #0
    // bl ov07_02231EC0
    // ldr r1, _022305F8 ; =0x04000040
    // mov r0, #0xff
    // strh r0, [r1]
    // mov r0, #0xbf
    // strh r0, [r1, #4]
    // mov r0, #7
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // add sp, #0xc
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r4, r5, pc}
    // ldr r0, [r4, #8]
    // sub r0, r0, #1
    // str r0, [r4, #8]
    // bpl _022305F0
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221E6C8
    // add r2, r0, #0
    // mov r3, #0
    // lsl r2, r2, #0x10
    // str r3, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _022305FC ; =0x0000FFFF
    // mov r1, #1
    // str r0, [sp, #8]
    // add r0, r5, #0
    // lsr r2, r2, #0x10
    // bl PaletteData_BeginPaletteFade
    // ldr r0, [r4, #4]
    // add sp, #0xc
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xc
    // bl ov07_022222B4
    // cmp r0, #0
    // beq _02230574
    // mov r0, #0xc
    // ldrsh r2, [r4, r0]
    // mov r0, #0x7f
    // add sp, #0xc
    // sub r0, r0, r2
    // lsl r1, r0, #8
    // mov r0, #0xff
    // lsl r0, r0, #8
    // add r2, #0x80
    // and r1, r0
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // ldr r1, _022305F8 ; =0x04000040
    // strh r0, [r1]
    // mov r0, #0xbf
    // strh r0, [r1, #4]
    // pop {r4, r5, pc}
    // ldr r0, [r4, #4]
    // add sp, #0xc
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r4, r5, pc}
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _022305F0
    // ldr r0, [r4, #4]
    // mov r2, #1
    // add r0, r0, #1
    // str r0, [r4, #4]
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _022305F4 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221E6C8
    // add r2, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r3, #0
    // lsl r2, r2, #0x10
    // ldr r0, _022305FC ; =0x0000FFFF
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #1
    // lsr r2, r2, #0x10
    // bl PaletteData_BeginPaletteFade
    // add sp, #0xc
    // pop {r4, r5, pc}
    // ldr r0, [r4]
    // bl ov07_0221FA78
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _022305F0
    // ldr r0, [r4, #4]
    // add sp, #0xc
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _022305F4: .word 0xFFFF1FFF
    // _022305F8: .word 0x04000040
    // _022305FC: .word 0x0000FFFF
    // TODO: decompile
}



void ov07_02230600(void) {
    // push {r4, lr}
    // mov r1, #0x34
    // add r4, r0, #0
    // bl ov07_022324D8
    // add r2, r0, #0
    // ldr r1, _02230618 ; =ov07_0223049C
    // add r0, r4, #0
    // str r4, [r2]
    // bl ov07_0221C410
    // pop {r4, pc}
    // _02230618: .word ov07_0223049C
    // TODO: decompile
}



void ov07_0223061C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230636: ; jump table
    ov07_02231E08(*((u32*)r1), 0, 0x10);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    ov07_02222AC4(r4, 0, 0x10, 0x10);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x14
    ov07_02222AF4(r4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    ov07_02222AC4(r4, 0x10, 0, 0);
    // add r0, #0x14
    ov07_02222AF4(r4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x10)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_022306D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // mov r1, #0x3c
    // add r6, r0, #0
    // str r2, [sp]
    // add r5, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r6, [r4]
    // ldr r0, [sp]
    // str r7, [r4, #4]
    // str r0, [r4, #8]
    // str r5, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #1
    // bl ManagedSprite_SetAnimateFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4]
    // ldr r1, _02230710 ; =ov07_0223061C
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // _02230710: .word ov07_0223061C
    // TODO: decompile
}



void ov07_02230714(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223072E: ; jump table
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222590(r1, (*((u32*)(r1 + 0x5c)) << 0x10), (*((u32*)(r1 + 0x60)) << 0x10), (*((u32*)(r1 + 0x64)) << 0x10));
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    ov07_0222283C(r4, 0xa, 8, *((u32*)(r4 + 0x10)));
    // add r0, #0x14
    ov07_02222788(r4, *((u32*)(r4 + 0x10)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0x10)), 8, 0xc, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    ov07_0222283C(r4, 0xa, 8, *((u32*)(r4 + 0x10)));
    // add r0, #0x14
    ov07_02222788(r4, *((u32*)(r4 + 0x10)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0x10)), 8, 0xc, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222590(r4, (*((u32*)(r4 + 0x60)) << 0x10), (*((u32*)(r4 + 0x5c)) << 0x10), (*((u32*)(r4 + 0x68)) << 0x10));
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    ov07_0222283C(r4, 0xa, 8, *((u32*)(r4 + 0x10)));
    // add r0, #0x14
    ov07_02222788(r4, *((u32*)(r4 + 0x10)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0x10)), 8, 0xc, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    ov07_0222283C(r4, 0xa, 8, *((u32*)(r4 + 0x10)));
    // add r0, #0x14
    ov07_02222788(r4, *((u32*)(r4 + 0x10)));
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0x10)), 8, 0xc, *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x70)) = (*((u32*)(r4 + 0x70)) - 1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 4)) = 0;
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0, 0xa);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 8);
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0xd, 0xd);
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
}



void ov07_022308E4(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x78
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FAA0
    // strh r0, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov07_0221C470
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #8]
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0xa]
    // mov r1, #0xa
    // str r1, [r4, #0x5c]
    // mov r0, #7
    // str r0, [r4, #0x60]
    // str r1, [r4, #0x64]
    // mov r0, #0x1e
    // str r0, [r4, #0x68]
    // str r1, [r4, #0x6c]
    // mov r3, #1
    // ldr r0, _02230958 ; =0x00040003
    // str r3, [r4, #0x70]
    // str r0, [r4, #0x74]
    // mov r1, #2
    // add r0, r4, #0
    // str r1, [sp]
    // add r0, #0x38
    // mov r2, #0
    // bl ov07_022227A8
    // ldr r0, [r4]
    // ldr r1, _0223095C ; =ov07_02230714
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, pc}
    // nop
    // _02230958: .word 0x00040003
    // _0223095C: .word ov07_02230714
    // TODO: decompile
}



void ov07_02230960(void) {
    // add r0, #8
    ov07_022222F0(r1, *((u32*)(r1 + 0x2c)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x2c)));
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}



void ov07_02230994(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r1, #0x30
    // add r5, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r5, [r4]
    // add r0, r5, #0
    // bl ov07_0221C528
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl ov07_0221C468
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0223192C
    // cmp r0, #3
    // bne _022309D8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4C0
    // str r0, [r4, #0x2c]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4C0
    // bl Sprite_DeleteAndFreeResources
    // b _022309EE
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221C4C0
    // str r0, [r4, #0x2c]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221C4C0
    // bl Sprite_DeleteAndFreeResources
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02222004
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0222202C
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl ov07_02221F80
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov07_02221F80
    // ldr r1, [sp, #0x10]
    // lsl r2, r7, #6
    // add r6, r1, r2
    // ldr r1, [sp, #0xc]
    // lsl r1, r1, #4
    // neg r1, r1
    // add r5, r0, r1
    // str r1, [sp, #8]
    // lsl r1, r6, #0x10
    // lsl r2, r5, #0x10
    // ldr r0, [r4, #0x2c]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [sp, #8]
    // mov r2, #0x30
    // add r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // mul r2, r7
    // str r0, [sp]
    // mov r0, #6
    // add r2, r6, r2
    // str r0, [sp, #4]
    // add r0, r4, #0
    // lsl r1, r6, #0x10
    // lsl r2, r2, #0x10
    // lsl r3, r5, #0x10
    // add r0, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // bl ov07_02222268
    // ldr r0, [r4]
    // ldr r1, _02230A6C ; =ov07_02230960
    // add r2, r4, #0
    // bl ov07_0221C410
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02230A6C: .word ov07_02230960
    // TODO: decompile
}



void ov07_02230A70(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230A8C: ; jump table
    // str r1, [sp]
    // add r0, #0x40
    ov07_022227A8(r1, 4, 0, 1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x40
    ov07_0222283C(r4, 0x18, 0x1a, *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // sub r0, #0x1f
    // mul r0, r2
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // mul r2, r4
    // add r2, r1, r2
    // add r0, #0x1c
    // asr r2, r2, #0x10
    ov07_02222268(r4, (0x28 << 0x10));
    // add r0, #0x1c
    ov07_02222314(r4, *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 8)) = 8;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) - 1);
    // bpl _02230B9C
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r3, [r4, r0]
    // ldrsh r2, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // mul r6, r5
    // add r1, r2, r6
    // sub r5, #0x2f
    // mul r5, r4
    // add r3, r3, r5
    // add r0, #0x1c
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r4, (*((u32*)(r4 + 0xc)) << 0x10), (r3 << 0x10));
    // add r0, #0x1c
    ov07_02222314(r4, *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x14)), 0, 0x18);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x14)), 1, 0x1a);
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
}



void ov07_02230BA0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r1, #0x64
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // str r5, [r4]
    // bl ov07_0221C468
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x14]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x18]
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x1a]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02222004
    // str r0, [r4, #0xc]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0222202C
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // ldr r1, _02230BF4 ; =ov07_02230A70
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // nop
    // _02230BF4: .word ov07_02230A70
    // TODO: decompile
}



void ov07_02230BF8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230C14: ; jump table
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r5, [sp, #4]
    // sub r5, #0x2c
    // mul r5, r2
    // add r2, r1, r5
    // add r0, #0x18
    // asr r2, r2, #0x10
    ov07_02222268(r1, (*((u32*)(r1 + 8)) << 0x10));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x18
    ov07_02222314(r4, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r4, #0x3c
    // str r1, [sp]
    ov07_022227A8(r4, 4, 0, 1);
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 0);
    // asr r5, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    // asr r2, r0, #0x10
    // add r0, #0x3c
    ov07_0222283C(r4, r5, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r3, [r4, r0]
    // ldrsh r2, [r4, r0]
    // add r0, #0x18
    // str r3, [sp]
    // str r5, [sp, #4]
    // sub r5, #0x2c
    // mul r5, r1
    // add r1, r2, r5
    // add r3, r3, r4
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r4, (*((u32*)(r4 + 8)) << 0x10), (r3 << 0x10));
    // add r0, #0x18
    ov07_02222314(r4, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 0x16);
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
}



void ov07_02230D1C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r1, #0x60
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r0, r5, #0
    // str r5, [r4]
    // bl ov07_0221C470
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0221FA48
    // str r0, [r4, #0x10]
    // mov r1, #0
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x14]
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // strh r0, [r4, #0x16]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_02222004
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov07_0222202C
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // ldr r1, _02230D70 ; =ov07_02230BF8
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // nop
    // _02230D70: .word ov07_02230BF8
    // TODO: decompile
}



void ov07_02230D74(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r7, r1, #0
    // add r4, r0, #0
    // mov r1, #0xac
    // add r6, r2, #0
    // str r3, [sp]
    // bl ov07_022324D8
    // str r4, [r0]
    // str r0, [sp, #4]
    // str r6, [r0, #0xc]
    // add r0, r4, #0
    // bl ov07_0221C468
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov07_02222004
    // ldr r1, [sp, #4]
    // str r0, [r1, #0x10]
    // ldr r1, [r1]
    // add r0, sp, #8
    // bl ov07_0221F9E8
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r1, sp, #8
    // strh r0, [r1]
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov07_02221F80
    // add r1, sp, #8
    // ldr r5, [sp, #4]
    // strh r0, [r1, #2]
    // mov r4, #0
    // cmp r4, #0
    // add r2, sp, #8
    // bne _02230DE2
    // ldr r0, [sp]
    // mov r1, #0
    // str r0, [r5, #0x14]
    // ldrsh r1, [r2, r1]
    // add r3, r2, #0
    // mov r2, #2
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // b _02230DEC
    // add r0, r7, #0
    // add r1, r6, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x14]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0x14]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _02230DC8
    // ldr r0, [sp, #4]
    // ldr r1, _02230E1C ; =ov07_02230E20
    // ldr r0, [r0]
    // ldr r2, [sp, #4]
    // bl ov07_0221C410
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _02230E1C: .word ov07_02230E20
    // TODO: decompile
}



void ov07_02230E20(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230E38: ; jump table
    // add r1, #0x1c
    // add r2, #0x64
    ov07_02230F0C(*((u32*)(r1 + 0x14)), r1, *((u32*)(r1 + 0x10)));
    // add r1, #0x1c
    // add r2, #0x64
    ov07_02230F6C(*((u32*)(r4 + 0x14)), r4, r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 8)) = 8;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) - 1);
    // add r1, #0x1c
    // add r2, #0x64
    ov07_02230F6C(*((u32*)(r4 + 0x14)), r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r1, #0x40
    // add r2, #0x88
    ov07_02230F0C(*((u32*)(r4 + 0x18)), r4, *((u32*)(r4 + 0x10)));
    // add r1, #0x40
    // add r2, #0x88
    ov07_02230F6C(*((u32*)(r4 + 0x18)), r4, r4);
    // add r1, #0x1c
    // add r2, #0x64
    ov07_02230F6C(*((u32*)(r4 + 0x14)), r4, r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r1, #0x1c
    // add r2, #0x64
    ov07_02230F6C(*((u32*)(r4 + 0x14)), r4);
    // add r1, #0x40
    // add r2, #0x88
    ov07_02230F6C(*((u32*)(r4 + 0x18)), r4, r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x14)));
    ov07_0221C448(*((u32*)r4), r7);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)));
}



void ov07_02230F0C(void) {
    ManagedSprite_SetAffineOverwriteMode(2);
    ManagedSprite_SetDrawFlag(r5, 1);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(r5);
    // add r1, sp, #8
    // ldrsh r3, [r1, r0]
    // ldrsh r1, [r1, r0]
    // sub r0, #0x20
    // asr r0, r0, #0x10
    // add r2, r1, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    ov07_02222268(r6, ((r4 << 4) << 0x10));
    // str r0, [sp]
    ov07_02222508(r7, 2, 0xa, 0xa);
}



void ov07_02230F6C(void) {
    ov07_022222F0(r1, r0);
    ov07_02222748(r4, r5);
    ManagedSprite_SetDrawFlag(r5, 0);
}



void ov07_02230F98(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x3c
    // add r6, r0, #0
    // add r7, r2, #0
    // add r5, r3, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // str r6, [r4]
    // str r7, [r4, #0xc]
    // str r5, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #0x10]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x10]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // ldr r1, _02230FE4 ; =ov07_02230FE8
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02230FE4: .word ov07_02230FE8
    // TODO: decompile
}



void ov07_02230FE8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231002: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    ov07_02222AC4(r1, 0, 0x10, 0x14);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    ov07_02231E08(*((u32*)r4), 0, 0x14);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0x14
    ov07_02222AF4(r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_SetAnimSpeed(*((u32*)(r4 + 0x10)), (1 << 0xc));
    ManagedSprite_GetAnimationFrame(*((u32*)(r4 + 0x10)));
    _s32_div_f(3);
    // add r1, r2, r1
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 8)));
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    ov07_02222AC4(r4, 0x10, 0, 4);
    // add r0, #0x14
    ov07_02222AF4(r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x10)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)));
}



void ov07_022310E0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // mov r1, #0x54
    // add r5, r0, #0
    // str r3, [sp, #0xc]
    // bl ov07_022324D8
    // ldr r1, [sp, #8]
    // str r5, [r0]
    // str r0, [sp, #0x14]
    // str r1, [r0, #8]
    // ldr r0, [r0]
    // bl ov07_0221C468
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02222004
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r1, [r1]
    // add r0, sp, #0x18
    // bl ov07_0221F9E8
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov07_02221F80
    // add r1, sp, #0x18
    // strh r0, [r1]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov07_02221F80
    // ldr r7, [sp, #0x14]
    // ldr r6, [sp, #0x14]
    // ldr r5, [sp, #0x14]
    // add r1, sp, #0x18
    // add r7, #0x3c
    // add r6, #0x24
    // strh r0, [r1, #2]
    // mov r4, #5
    // add r5, #0x14
    // add r7, #0x14
    // add r6, #0x14
    // cmp r4, #5
    // add r2, sp, #0x18
    // bne _0223115E
    // ldr r0, [sp, #0xc]
    // mov r1, #0
    // str r0, [r5, #0xc]
    // ldrsh r1, [r2, r1]
    // add r3, r2, #0
    // mov r2, #2
    // ldrsh r2, [r3, r2]
    // bl ManagedSprite_SetPositionXY
    // b _02231168
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0xc]
    // ldr r0, [r5, #0xc]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r5, #0xc]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp, #0x10]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, [r5, #0xc]
    // add r2, r7, #0
    // add r3, r4, #0
    // bl ov07_022311B0
    // sub r5, r5, #4
    // sub r7, r7, #4
    // sub r6, r6, #4
    // sub r4, r4, #1
    // bpl _02231144
    // ldr r0, [sp, #0x14]
    // ldr r1, _022311AC ; =ov07_02231234
    // ldr r0, [r0]
    // ldr r2, [sp, #0x14]
    // bl ov07_0221C410
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022311AC: .word ov07_02231234
    // TODO: decompile
}



void ov07_022311B0(void) {
    // add r1, r4, r1
    // asr r1, r1, #1
    ManagedSprite_SetAnim((r3 >> 0x1f));
    // str r0, [r7]
    // add r1, sp, #0
    // str r0, [r6]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(r5);
    // add r2, sp, #0
    // sub r6, #0xe
    // mul r6, r4
    // ldr r0, [sp, #0x18]
    // ldrsh r3, [r2, r1]
    // add r6, #0x28
    // mul r4, r6
    // add r0, r3, r4
    *((u16*)(r2 + 2)) = r0;
    // ldrsh r0, [r2, r3]
    // add r0, #0x28
    // strh r0, [r2]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    ManagedSprite_SetPositionXY(r5, 2, 0);
}



void ov07_02231204(void) {
    // str r1, [r2]
    ManagedSprite_SetDrawFlag(1, *((u32*)r2));
    // str r0, [r1]
    ManagedSprite_SetDrawFlag((*((u32*)r1) - 1), 0, *((u32*)r1));
}



void ov07_02231234(void) {
    // str r1, [sp]
    // add r6, #0x3c
    // add r4, #0x24
    ov07_02231204(*((u32*)(r1 + 0xc)), r1, r1);
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(r0 + 4)) + 4)) = (*((u32*)(r0 + 4)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)((*((u32*)(r0 + 4)) + 1) + 0xc)), (*((u32*)(r0 + 4)) + 1));
    // ldr r0, [sp]
    ov07_0221C448(*((u32*)r0), r6);
    // ldr r0, [sp]
    Heap_Free();
    // ldr r0, [sp]
    SpriteSystem_DrawSprites(*((u32*)(r0 + 8)));
}



void ov07_022312A8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r7, #0
    // add r6, r5, #0
    // str r1, [sp, #0x10]
    // add r6, #0x30
    // add r4, r7, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x32
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0x30
    // mov r1, #0
    // str r0, [sp, #0xc]
    // ldr r2, _022312F8 ; =0x00007FFF
    // add r0, r6, #0
    // add r3, r1, #0
    // bl ov07_022220FC
    // ldr r0, [r5, #0x38]
    // add r7, r7, #1
    // add r0, r0, r4
    // str r0, [r5, #0x38]
    // ldr r1, [r5, #0x48]
    // ldr r0, [sp, #0x10]
    // add r6, #0x24
    // mul r0, r1
    // str r0, [r5, #0x48]
    // ldr r0, _022312FC ; =0x00002AAA
    // add r5, #0x24
    // add r4, r4, r0
    // cmp r7, #6
    // blt _022312B8
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022312F8: .word 0x00007FFF
    // _022312FC: .word 0x00002AAA
    // TODO: decompile
}



void ov07_02231300(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0
    // add r7, r6, #0
    // str r0, [sp]
    // add r7, #0x30
    // add r4, r6, #0
    // add r5, r6, #0
    // add r0, r7, #0
    // bl ov07_02222180
    // mov r1, #0x13
    // lsl r1, r1, #4
    // mov r2, #0x30
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r5, #0x18]
    // add r1, r1, r2
    // ldr r2, _0223136C ; =0x00000132
    // lsl r1, r1, #0x10
    // ldrsh r2, [r6, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r1, [r4, #0x38]
    // ldr r0, _02231370 ; =0x00003FFF
    // cmp r1, r0
    // blt _02231348
    // ldr r0, _02231374 ; =0x0000BF49
    // cmp r1, r0
    // bgt _02231348
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // b _02231358
    // ldr r0, [r6]
    // bl ov07_0221FAE8
    // add r1, r0, #0
    // ldr r0, [r5, #0x18]
    // add r1, r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [sp]
    // add r7, #0x24
    // add r0, r0, #1
    // add r4, #0x24
    // add r5, r5, #4
    // str r0, [sp]
    // cmp r0, #6
    // blt _02231310
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223136C: .word 0x00000132
    // _02231370: .word 0x00003FFF
    // _02231374: .word 0x0000BF49
    // TODO: decompile
}



void ov07_02231378(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231392: ; jump table
    ov07_02231E08(*((u32*)r1), 1, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    ov07_02222AC4(0xa, 1, 0x10, 0xf);
    ov07_022312A8(r4, *((u32*)(r4 + 0x14)));
    ov07_02231300(r4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov07_02231300(r4);
    // add r0, r4, r0
    ov07_02222AF4((0x42 << 2));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x10)) = 0x1c;
    ov07_02231300(r4);
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) - 1);
    // bpl _0223145E
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    ov07_02222AC4(0xa, 0x10, 1, 0);
    ov07_02231300(r4);
    // add r0, r4, r0
    ov07_02222AF4((0x42 << 2));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x18)));
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r7);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}



void ov07_02231468(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r1, #0
    // mov r1, #0x4d
    // lsl r1, r1, #2
    // add r4, r0, #0
    // str r2, [sp]
    // add r7, r3, #0
    // bl ov07_022324D8
    // add r6, r0, #0
    // str r4, [r6]
    // ldr r0, [sp]
    // str r5, [r6, #4]
    // str r0, [r6, #8]
    // add r0, r4, #0
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_0221FA48
    // mov r1, #0
    // add r5, r0, #0
    // bl Pokepic_GetAttr
    // mov r1, #0x13
    // lsl r1, r1, #4
    // strh r0, [r6, r1]
    // add r0, r5, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // ldr r1, _0223150C ; =0x00000132
    // strh r0, [r6, r1]
    // add r0, sp, #4
    // add r1, r4, #0
    // bl ov07_0221F9E8
    // mov r4, #0
    // add r5, r6, #0
    // cmp r4, #0
    // bne _022314C2
    // str r7, [r5, #0x18]
    // b _022314CE
    // ldr r0, [r6, #4]
    // ldr r1, [r6, #8]
    // add r2, sp, #4
    // bl SpriteSystem_NewSprite
    // str r0, [r5, #0x18]
    // ldr r0, [r5, #0x18]
    // mov r1, #0x64
    // bl ManagedSprite_SetDrawPriority
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetAnimateFlag
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _022314BA
    // ldr r0, [r6]
    // bl ov07_0221C468
    // add r1, r0, #0
    // ldr r0, [r6]
    // bl ov07_02222004
    // str r0, [r6, #0x14]
    // ldr r0, [r6]
    // ldr r1, _02231510 ; =ov07_02231378
    // add r2, r6, #0
    // bl ov07_0221C410
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223150C: .word 0x00000132
    // _02231510: .word ov07_02231378
    // TODO: decompile
}



void ov07_02231514(void) {
}



void ov07_0223151C(void) {
}



void ov07_02231524(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x1c]
    // add r4, r1, #0
    // bl ov07_0221BFD0
    // add r6, r0, #0
    // ldr r0, [r5, #0x1c]
    // mov r1, #3
    // bl ov07_0221FB04
    // add r1, r0, #0
    // lsl r0, r4, #0x18
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x18
    // lsr r1, r1, #0x18
    // bl SetBgPriority
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [r5, #4]
    // ldr r0, [r5]
    // lsl r2, r1, #4
    // ldr r1, _022315B4 ; =ov07_0223680C
    // add r3, r4, #0
    // ldr r1, [r1, r2]
    // ldr r2, [r5, #0x2c]
    // bl GfGfxLoader_LoadCharData
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x80
    // str r0, [sp, #8]
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x30]
    // lsl r3, r2, #4
    // ldr r2, _022315B8 ; =ov07_02236810
    // ldr r1, [r5]
    // ldr r2, [r2, r3]
    // add r3, r6, #0
    // bl PaletteData_LoadNarc
    // lsl r1, r4, #0x18
    // ldr r0, [r5, #0x2c]
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [r5, #4]
    // ldr r0, [r5]
    // lsl r2, r1, #4
    // ldr r1, _022315BC ; =ov07_02236814
    // add r3, r4, #0
    // ldr r1, [r1, r2]
    // ldr r2, [r5, #0x2c]
    // bl GfGfxLoader_LoadScrnData
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _022315B4: .word ov07_0223680C
    // _022315B8: .word ov07_02236810
    // _022315BC: .word ov07_02236814
    // TODO: decompile
}



void ov07_022315C0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0x18]
    // cmp r0, #3
    // bhi _0223167C
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022315D8: ; jump table
    // add r0, r4, #0
    // mov r1, #2
    // bl ov07_02231524
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _022316CA
    // ldrh r0, [r4, #0x16]
    // mov r1, #4
    // mov r2, #0x39
    // str r0, [sp]
    // ldrh r3, [r4, #0x14]
    // ldr r0, _02231718 ; =0x04000050
    // bl G2x_SetBlendAlpha_
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _022316CA
    // add r1, r4, #0
    // add r1, #0x40
    // ldrb r1, [r1]
    // cmp r1, #0x14
    // bls _02231618
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // b _022316CA
    // add r0, r4, #0
    // add r0, #0x40
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x40
    // strb r1, [r0]
    // b _022316CA
    // ldrh r0, [r4, #0x14]
    // cmp r0, #0
    // beq _02231632
    // sub r0, r0, #1
    // strh r0, [r4, #0x14]
    // ldrh r0, [r4, #0x16]
    // cmp r0, #0x10
    // bhs _0223163C
    // add r0, r0, #1
    // strh r0, [r4, #0x16]
    // ldrh r0, [r4, #0x14]
    // cmp r0, #0
    // bne _0223166E
    // ldrh r0, [r4, #0x16]
    // cmp r0, #0x10
    // bne _0223166E
    // ldr r0, [r4, #0x2c]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x38]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x3c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldrb r0, [r4, #0x18]
    // add r0, r0, #1
    // strb r0, [r4, #0x18]
    // ldrh r0, [r4, #0x16]
    // ldrh r1, [r4, #0x14]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0223171C ; =0x04000052
    // strh r1, [r0]
    // b _022316CA
    // ldr r0, _02231720 ; =0x0400004A
    // mov r1, #0x3f
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #0x1f
    // orr r2, r1
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _02231724 ; =0xFFFFC0FF
    // lsl r1, r1, #8
    // and r2, r3
    // orr r1, r2
    // strh r1, [r0]
    // mov r2, #0
    // ldr r0, [r4, #0x2c]
    // mov r1, #2
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x2c]
    // mov r1, #2
    // mov r2, #3
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _02231728 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // ldr r0, [r4, #0x1c]
    // add r1, r5, #0
    // bl ov07_0221C448
    // add r0, r4, #0
    // bl ov07_02232508
    // pop {r3, r4, r5, pc}
    // mov r3, #0x10
    // mov r0, #0xc
    // ldrsh r1, [r4, r3]
    // ldrsh r0, [r4, r0]
    // mov r2, #0
    // add r0, r1, r0
    // strh r0, [r4, #0x10]
    // mov r0, #0x12
    // ldrsh r1, [r4, r0]
    // mov r0, #0xe
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r4, #0x12]
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x2c]
    // mov r1, #2
    // bl BgSetPosTextAndCommit
    // mov r3, #0x12
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x2c]
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r0, [r4, #0x34]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x38]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x3c]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x24]
    // bl SpriteSystem_DrawSprites
    // pop {r3, r4, r5, pc}
    // nop
    // _02231718: .word 0x04000050
    // _0223171C: .word 0x04000052
    // _02231720: .word 0x0400004A
    // _02231724: .word 0xFFFFC0FF
    // _02231728: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov07_0223172C(void) {
}



void ov07_0223174C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // mov r1, #0x44
    // add r6, r0, #0
    // bl ov07_022324D8
    // add r4, r0, #0
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x18
    // bl ov07_02231FE4
    // add r2, r4, #0
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl ov07_0221C4E8
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // bl ov07_0221C4E8
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // bl ov07_0221C4E8
    // str r0, [r4, #0x3c]
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // bl ov07_0221FB04
    // ldr r0, [r4, #0x34]
    // mov r1, #2
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x38]
    // mov r1, #2
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _022317B6
    // add r0, r6, #0
    // bl ov07_0221C468
    // b _022317BC
    // add r0, r6, #0
    // bl ov07_0221C470
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov07_02231924
    // add r5, r0, #0
    // add r0, r6, #0
    // bl ov07_0221BFC0
    // cmp r0, #1
    // bne _022317F4
    // ldr r0, [r4, #0x3c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // bl ov07_0221FB04
    // add r5, r0, #0
    // ldr r0, [r4, #0x34]
    // add r1, r5, #0
    // bl ManagedSprite_SetPriority
    // ldr r0, [r4, #0x38]
    // add r1, r5, #0
    // bl ManagedSprite_SetPriority
    // b _02231818
    // cmp r5, #1
    // bhi _02231802
    // ldr r0, [r4, #0x3c]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _02231818
    // sub r0, r5, #3
    // cmp r0, #1
    // ldr r0, [r4, #0x3c]
    // bhi _02231812
    // mov r1, #3
    // bl ManagedSprite_SetPriority
    // b _02231818
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, _02231864 ; =0x0400004A
    // ldr r1, _02231868 ; =0xFFFFC0FF
    // ldrh r2, [r0]
    // and r2, r1
    // mov r1, #0x16
    // lsl r1, r1, #8
    // orr r2, r1
    // lsr r1, r0, #0xd
    // orr r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x1b
    // orr r2, r1
    // mov r1, #0x20
    // orr r2, r1
    // strh r2, [r0]
    // lsl r3, r1, #0x15
    // ldr r2, [r3]
    // ldr r0, _0223186C ; =0xFFFF1FFF
    // and r2, r0
    // lsl r0, r1, #0xa
    // orr r0, r2
    // str r0, [r3]
    // ldr r0, [r4, #0x38]
    // mov r1, #2
    // bl ManagedSprite_SetOamMode
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // strh r0, [r4, #0x12]
    // ldr r0, [r4, #0x1c]
    // ldr r1, _02231870 ; =ov07_022315C0
    // add r2, r4, #0
    // bl ov07_0221C410
    // pop {r4, r5, r6, pc}
    // _02231864: .word 0x0400004A
    // _02231868: .word 0xFFFFC0FF
    // _0223186C: .word 0xFFFF1FFF
    // _02231870: .word ov07_022315C0
    // TODO: decompile
}



void ov07_02231874(void) {
}



void ov07_022318A0(void) {
    // add r1, sp, #0
    ov07_0223172C();
    // add r0, sp, #0
    ov07_02231514(0, (0 - 3));
    // add r0, sp, #0
    ov07_0223151C(0xc, 4);
    // add r1, sp, #0
    ov07_0223174C(r4);
}



void ov07_022318CC(void) {
}



void ov07_022318F8(void) {
    // add r1, sp, #0
    ov07_0223172C();
    // add r0, sp, #0
    ov07_02231514(0, (0 - 6));
    // add r0, sp, #0
    ov07_0223151C(0xc, 4);
    // add r1, sp, #0
    ov07_0223174C(r4);
}



void ov07_02231924(void) {
}



void ov07_0223192C(void) {
    ov07_0221FA04();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231942: ; jump table
}



void ov07_02231958(void) {
    ov07_0221FA04(r0, 0);
}



void ov07_0223197C(void) {
    ov07_0221FA04();
    ov07_0221FA04(r6, 0);
    // add r1, r5, r5
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022319A4: ; jump table
    GF_AssertFail(r4, (*((u16*)(r1 + 6)) << 0x10));
}



void ov07_022319E0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022319F2: ; jump table
    GF_AssertFail(4);
}



void ov07_02231A20(void) {
    // push {r4, r5}
    // sub sp, #0x18
    // ldr r5, _02231A4C ; =ov07_02236864
    // add r4, sp, #0
    // mov r3, #0xc
    // ldrh r1, [r5]
    // add r5, r5, #2
    // strh r1, [r4]
    // add r4, r4, #2
    // sub r3, r3, #1
    // bne _02231A2A
    // lsl r3, r0, #2
    // add r0, sp, #0
    // add r1, r0, r3
    // ldrh r0, [r0, r3]
    // strh r0, [r2]
    // ldrh r0, [r1, #2]
    // strh r0, [r2, #2]
    // add sp, #0x18
    // pop {r4, r5}
    // bx lr
    // nop
    // _02231A4C: .word ov07_02236864
    // TODO: decompile
}



void ov07_02231A50(void) {
}



void ov07_02231A70(void) {
    // push {r4, r5, r6, r7}
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x110
    // mov r5, #0x12
    // ldr r7, _02231AC8 ; =ov07_0223687C
    // add r4, r0, #0
    // add r2, r1, #0
    // add r6, sp, #0
    // lsl r5, r5, #4
    // ldmia r7!, {r0, r1}
    // stmia r6!, {r0, r1}
    // sub r5, r5, #1
    // bne _02231A88
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r1, sp, #0
    // mul r0, r4
    // add r0, r1, r0
    // ldr r1, _02231ACC ; =0x00000900
    // add r1, sp
    // ldr r1, [r1, #0x10]
    // lsl r1, r1, #1
    // add r3, r3, r1
    // mov r1, #0xc
    // add r4, r3, #0
    // mul r4, r1
    // add r1, r0, r4
    // ldr r3, [r1, #8]
    // ldr r1, [r1, #4]
    // ldr r0, [r0, r4]
    // str r0, [r2]
    // str r1, [r2, #4]
    // str r3, [r2, #8]
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x110
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _02231AC8: .word ov07_0223687C
    // _02231ACC: .word 0x00000900
    // TODO: decompile
}



void ov07_02231AD0(void) {
}



void ov07_02231AE0(void) {
}



void ov07_02231AF0(void) {
}



void ov07_02231B00(void) {
}



void ov07_02231B10(void) {
}



void ov07_02231B20(void) {
}



void ov07_02231B30(void) {
}



void ov07_02231B40(void) {
}



void ov07_02231B50(void) {
}



void ov07_02231B60(void) {
}



void ov07_02231B70(void) {
}



void ov07_02231B80(void) {
}



void ov07_02231B90(void) {
}



void ov07_02231BC0(void) {
}



void ov07_02231BF0(void) {
}



void ov07_02231C20(void) {
}



void ov07_02231C50(void) {
}



void ov07_02231C80(void) {
}



void ov07_02231CB0(void) {
}



void ov07_02231CE0(void) {
}



void ov07_02231D10(void) {
}



void ov07_02231D40(void) {
}



void ov07_02231D70(void) {
}



void ov07_02231DA0(void) {
}



void ov07_02231DD0(void) {
    // mov r2, #0
    // ldr r1, _02231DDC ; =0x000068D0
    // str r2, [r0]
    // str r1, [r0, #4]
    // str r2, [r0, #8]
    // bx lr
    // _02231DDC: .word 0x000068D0
    // TODO: decompile
}



void ov07_02231DE0(void) {
}



void ov07_02231DE8(void) {
}



void ov07_02231E08(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r1, #0
    // mvn r1, r1
    // add r4, r2, #0
    // cmp r5, r1
    // bne _02231E18
    // mov r5, #0x1a
    // mov r1, #0
    // mvn r1, r1
    // cmp r4, r1
    // bne _02231E22
    // mov r4, #5
    // mov r1, #2
    // bl ov07_0221FAF8
    // mov r1, #1
    // add r2, r1, #0
    // lsl r2, r0
    // orr r2, r1
    // ldr r0, _02231E40 ; =0x04000050
    // mov r1, #0
    // add r3, r5, #0
    // str r4, [sp]
    // bl G2x_SetBlendAlpha_
    // pop {r3, r4, r5, pc}
    // nop
    // _02231E40: .word 0x04000050
    // TODO: decompile
}



void ov07_02231E44(void) {
    // push {r3, r4, r5, lr}
    // mov r0, #0
    // add r4, r2, #0
    // mvn r0, r0
    // add r5, r1, #0
    // cmp r4, r0
    // bne _02231E54
    // mov r4, #0x1a
    // mov r0, #0
    // mvn r0, r0
    // cmp r3, r0
    // bne _02231E5E
    // mov r3, #5
    // ldr r0, _02231E70 ; =0x04000050
    // str r3, [sp]
    // mov r1, #0
    // add r2, r5, #0
    // add r3, r4, #0
    // bl G2x_SetBlendAlpha_
    // pop {r3, r4, r5, pc}
    // nop
    // _02231E70: .word 0x04000050
    // TODO: decompile
}



void ov07_02231E74(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0
    // add r5, r1, #0
    // mvn r0, r0
    // add r4, r2, #0
    // cmp r5, r0
    // bne _02231E86
    // mov r5, #0x1a
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _02231E90
    // mov r4, #5
    // add r0, r6, #0
    // mov r1, #2
    // bl ov07_0221FAF8
    // mov r1, #1
    // add r2, r1, #0
    // lsl r2, r0
    // mov r0, #0x11
    // add r7, r2, #0
    // orr r7, r0
    // add r0, r6, #0
    // bl ov07_0221FAF8
    // mov r1, #1
    // lsl r1, r0
    // ldr r0, _02231EBC ; =0x04000050
    // add r2, r7, #0
    // add r3, r5, #0
    // str r4, [sp]
    // bl G2x_SetBlendAlpha_
    // pop {r3, r4, r5, r6, r7, pc}
    // _02231EBC: .word 0x04000050
    // TODO: decompile
}



void ov07_02231EC0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r1, #0
    // bne _02231F14
    // mov r1, #1
    // bl ov07_0221FAF8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221FAF8
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221FAF8
    // add r2, r0, #0
    // mov r0, #1
    // add r3, r0, #0
    // add r1, r0, #0
    // lsl r3, r7
    // lsl r0, r2
    // lsl r1, r6
    // orr r0, r3
    // orr r1, r0
    // mov r0, #0x11
    // add r2, r1, #0
    // orr r2, r0
    // ldr r0, _02231F94 ; =0x04000048
    // ldrh r1, [r0]
    // mov r0, #0x3f
    // bic r1, r0
    // orr r1, r2
    // cmp r4, #0
    // beq _02231F0E
    // mov r0, #0x20
    // orr r1, r0
    // ldr r0, _02231F94 ; =0x04000048
    // strh r1, [r0]
    // b _02231F5E
    // mov r1, #1
    // bl ov07_0221FAF8
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #2
    // bl ov07_0221FAF8
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221FAF8
    // add r2, r0, #0
    // mov r0, #1
    // add r3, r0, #0
    // add r1, r0, #0
    // lsl r0, r2
    // lsl r3, r7
    // lsl r1, r6
    // orr r0, r3
    // orr r1, r0
    // ldr r2, _02231F94 ; =0x04000048
    // add r3, r1, #0
    // mov r0, #0x11
    // orr r3, r0
    // ldrh r1, [r2]
    // ldr r0, _02231F98 ; =0xFFFFC0FF
    // and r1, r0
    // lsl r0, r3, #8
    // orr r1, r0
    // cmp r4, #0
    // beq _02231F5A
    // lsr r0, r2, #0xd
    // orr r1, r0
    // ldr r0, _02231F94 ; =0x04000048
    // strh r1, [r0]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov07_0221FAF8
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov07_0221FAF8
    // mov r1, #1
    // add r2, r1, #0
    // lsl r1, r0
    // lsl r2, r4
    // orr r1, r2
    // add r3, r1, #0
    // ldr r1, _02231F9C ; =0x0400004A
    // mov r0, #0x11
    // orr r3, r0
    // ldrh r2, [r1]
    // mov r0, #0x3f
    // bic r2, r0
    // orr r2, r3
    // mov r0, #0x20
    // orr r0, r2
    // strh r0, [r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02231F94: .word 0x04000048
    // _02231F98: .word 0xFFFFC0FF
    // _02231F9C: .word 0x0400004A
    // TODO: decompile
}



void ov07_02231FA0(void) {
    // strh r0, [r4]
    *((u16*)(r1 + 2)) = 0;
    Pokepic_IsActive(0);
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = 0;
    Pokepic_GetAttr(r5, 0);
    // strh r0, [r4]
    Pokepic_GetAttr(r5, 1);
    *((u16*)(r4 + 2)) = r0;
}



void ov07_02231FD8(void) {
}



void ov07_02231FE4(void) {
}



void ov07_02232020(void) {
    // str r1, [r4]
    // and r1, r7
    ov07_0221C468(0x40);
    ov07_0221FA48(r6, r0);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    *((u32*)(*((u32*)r4) + 0x10)) = r7;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    ov07_0223197C(r6, r7);
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0221FA48(r6);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r0, r5, r1
    // ldr r1, [sp, #4]
    *((u32*)(*((u32*)r4) + 0x10)) = *((u32*)(*((u32*)r4) + 8));
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    ov07_0221FA04(r6, r7);
    ov07_022319E0();
    ov07_02231958(r6, r0);
    ov07_0221FA48(r6, r0);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    *((u32*)(*((u32*)r4) + 0x10)) = r7;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    ov07_0223197C(r6, r7);
    ov07_0221FA48(r6, r0);
    // mul r3, r1
    // add r2, r5, r3
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r2, r1
    // add r2, r5, r2
    *((u32*)(*((u32*)r4) + 0x10)) = r7;
    // mul r1, r0
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(0x14 + 8)), (0x14 + 4), *((u32*)r4), *((u32*)r4));
    // str r0, [r4]
    // and r1, r7
    ov07_0221C468((*((u32*)r4) + 1), 0x20);
    ov07_0223197C(r6, r0);
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    ov07_0221FA48(r6);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r0, r5, r1
    // ldr r1, [sp, #8]
    *((u32*)(*((u32*)r4) + 0x10)) = *((u32*)(*((u32*)r4) + 8));
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    ov07_0221FA04(r6, r7);
    ov07_022319E0();
    ov07_02231958(r6, r0);
    // str r0, [sp]
    // ldr r1, [sp]
    ov07_0221FA48(r6);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r0, r5, r1
    // ldr r1, [sp]
    *((u32*)(*((u32*)r4) + 0x10)) = *((u32*)(*((u32*)r4) + 8));
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    // ldr r1, [sp]
    ov07_0223197C(r6);
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    ov07_0221FA48(r6);
    // mul r3, r1
    // add r2, r5, r3
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r2, r1
    // add r2, r5, r2
    // ldr r0, [sp, #0xc]
    *((u32*)(*((u32*)r4) + 0x10)) = *((u32*)(*((u32*)r4) + 8));
    // mul r1, r0
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(0x14 + 8)), (0x14 + 4), *((u32*)r4), *((u32*)r4));
    // str r0, [r4]
    // and r1, r7
    ov07_0221C468((*((u32*)r4) + 1), 2);
    ov07_0221FA48(r6, r0);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r0, r5, r1
    ov07_0221C468(r6, *((u32*)r4), r0, 0x14);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 0x10)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    ov07_0221FAB0(r6);
    // and r0, r7
    ov07_0221C468(r6);
    ov07_0223197C(r6, r0);
    ov07_0221FA48(r6, r0);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r0, r5, r1
    ov07_0221C468(r6, *((u32*)r4), r0, 0x14);
    ov07_0223197C(r6, r0);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 0x10)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    // and r0, r7
    ov07_0221C470(r6);
    ov07_0221FA48(r6, r0);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r3
    // add r0, r5, r1
    ov07_0221C470(r6, *((u32*)r4), r0, 0x14);
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 0x10)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(*((u32*)r4) + 8)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    ov07_0221FAB0(r6);
    // and r0, r7
    ov07_0221C470(r6);
    ov07_0223197C(r6, r0);
    ov07_0221FA48(r6, r0);
    // mul r3, r1
    // add r2, r5, r3
    *((u32*)(*((u32*)r4) + 8)) = r0;
    // mul r1, r0
    // add r0, r5, r1
    ov07_0221C470(r6, 0x14, *((u32*)r4), *((u32*)r4));
    ov07_0223197C(r6, r0);
    // mul r3, r1
    // add r2, r5, r3
    *((u32*)(*((u32*)r4) + 0x10)) = r0;
    // mul r1, r0
    // add r1, r5, r1
    ov07_02231FA0(*((u32*)(0x14 + 8)), (0x14 + 4), *((u32*)r4), *((u32*)r4));
    // str r0, [r4]
}



void ov07_022323FC(void) {
    // str r1, [r4]
    // and r1, r6
    ov07_0221C4E8(*((u32*)r3));
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 0xc)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FD8(*((u32*)(*((u32*)r4) + 0xc)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    // and r0, r6
    ov07_0221C4E8(r7, *((u32*)r4));
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 0xc)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FD8(*((u32*)(*((u32*)r4) + 0xc)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    // and r0, r6
    ov07_0221C4E8(r7, *((u32*)r4));
    // mul r1, r3
    // add r0, r5, r1
    *((u32*)(*((u32*)r4) + 0xc)) = r0;
    // mul r1, r3
    // add r1, r5, r1
    ov07_02231FD8(*((u32*)(*((u32*)r4) + 0xc)), (*((u32*)r4) + 4), r0, 0x14);
    // str r0, [r4]
    // and r0, r6
    ov07_0221C4E8(r7, *((u32*)r4));
    // mul r3, r1
    // add r2, r5, r3
    *((u32*)(*((u32*)r4) + 0xc)) = r0;
    // mul r1, r0
    // add r1, r5, r1
    ov07_02231FD8(*((u32*)(0x14 + 0xc)), (0x14 + 4), *((u32*)r4), *((u32*)r4));
    // str r0, [r4]
}



void ov07_022324D8(void) {
    GF_AssertFail();
    ov07_0221BFD0(r4);
    Heap_Alloc(r5);
    GF_AssertFail();
    memset(r4, 0, r5);
}



void ov07_02232508(void) {
    GF_AssertFail();
    Heap_Free(r4);
}



void ov07_0223251C(void) {
    // add r1, #0x1b
    // sub r0, r0, r2
}



void ov07_02232540(void) {
    // push {r3, r4, r5}
    // sub sp, #0x2c
    // ldr r5, _0223257C ; =ov07_02237228
    // add r2, r0, #0
    // add r4, sp, #0
    // mov r3, #5
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r3, r3, #1
    // bne _0223254C
    // ldr r0, [r5]
    // str r0, [r4]
    // mov r0, #0
    // add r3, r0, #0
    // add r4, sp, #0
    // ldr r1, [r4]
    // cmp r2, r1
    // bne _0223256C
    // add sp, #0x2c
    // mov r0, #1
    // pop {r3, r4, r5}
    // bx lr
    // add r3, r3, #1
    // add r4, r4, #4
    // cmp r3, #0xb
    // blo _0223255E
    // add sp, #0x2c
    // pop {r3, r4, r5}
    // bx lr
    // nop
    // _0223257C: .word ov07_02237228
    // TODO: decompile
}



void ov07_02232580(void) {
    // push {r4, r5}
    // sub sp, #0x18
    // ldr r3, _022325B8 ; =ov07_02237188
    // add r2, sp, #0
    // add r5, r0, #0
    // add r4, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0
    // add r2, r0, #0
    // ldr r1, [r4]
    // cmp r5, r1
    // bne _022325AA
    // add sp, #0x18
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // add r2, r2, #1
    // add r4, r4, #4
    // cmp r2, #6
    // blo _0223259C
    // add sp, #0x18
    // pop {r4, r5}
    // bx lr
    // _022325B8: .word ov07_02237188
    // TODO: decompile
}



void ov07_022325BC(void) {
    // push {r3, r4, r5}
    // sub sp, #0xc
    // ldr r5, _022325F0 ; =ov07_0223717C
    // add r3, r0, #0
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // add r2, r4, #0
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r4]
    // mov r0, #1
    // mov r4, #0
    // ldr r1, [r2]
    // cmp r3, r1
    // bne _022325E2
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, r5}
    // bx lr
    // add r4, r4, #1
    // add r2, r2, #4
    // cmp r4, #3
    // blo _022325D4
    // add sp, #0xc
    // pop {r3, r4, r5}
    // bx lr
    // _022325F0: .word ov07_0223717C
    // TODO: decompile
}



void ov07_022325F4(void) {
}



void ov07_02232608(void) {
}



void ov07_0223261C(void) {
}



void ov07_02232630(void) {
}



void ov07_02232644(void) {
}



void ov07_02232658(void) {
}



void ov07_02232670(void) {
    Heap_Alloc(0xb8);
    GF_AssertFail();
    // str r4, [r0]
    // add r1, #0x88
    // str r2, [r1]
}



void ov07_02232694(void) {
    ov07_02232670();
    ov07_022326C0(r5);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x38)) = 0;
    *((u32*)(r4 + 0x5c)) = 0;
}



void ov07_022326C0(void) {
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    GetMonData(*((u32*)(r0 + 0xc)), 0xa2, 0, r1);
    // add r1, #0x9c
    // str r0, [r1]
    // add r0, #0x9c
    GF_AssertFail(*((u32*)r4), r4);
    // add r0, #0x9c
    // add r0, #0x94
    // str r2, [r0]
    // add r4, #0x98
    // str r0, [r4]
    GetMonData(*((u32*)(r4 + 0xc)), 0x9b, 0);
    // add r4, #0x98
    // str r0, [r4]
    // add r0, #0x94
    // str r1, [r0]
    // add r4, #0xa0
    GetMonData(*((u32*)(r4 + 0xc)), 0xab, r4);
}



void ov07_02232730(void) {
    // str r0, [sp]
    // add r0, #0x90
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02232750: ; jump table
    NARC_New(0x5f, *((u32*)r1));
    // add r1, #0x8c
    // str r0, [r1]
    // str r0, [sp, #0x14]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    CapsuleGetSealI(r4, 0);
    SealOnCapsuleGetID();
    sub_02091084(((r0 << 0x18) >> 0x18));
    // str r0, [sp, #0x10]
    // add r0, r4, r0
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x38)) = r7;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)));
    // add r0, #0x8c
    // ldr r2, [sp, #0x10]
    ov07_0221FEE4(*((u32*)r4), *((u32*)r4), 0);
    // add r1, r4, r1
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)) = r0;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)), (*((u32*)(r4 + 0x10)) << 2));
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x90
    // str r0, [r4]
    // str r0, [sp, #0x18]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    CapsuleGetSealI(r4, 2);
    SealOnCapsuleGetID();
    sub_02091084(((r0 << 0x18) >> 0x18));
    // str r0, [sp, #4]
    // add r0, r4, r0
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x38)) = r7;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)));
    // add r0, #0x8c
    // ldr r2, [sp, #4]
    ov07_0221FEE4(*((u32*)r4), *((u32*)r4), 0);
    // add r1, r4, r1
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)) = r0;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)), (*((u32*)(r4 + 0x10)) << 2));
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x90
    // str r0, [r4]
    // str r0, [sp, #0x1c]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    CapsuleGetSealI(r4, 4);
    SealOnCapsuleGetID();
    sub_02091084(((r0 << 0x18) >> 0x18));
    // str r0, [sp, #8]
    // add r0, r4, r0
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x38)) = r7;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)));
    // add r0, #0x8c
    // ldr r2, [sp, #8]
    ov07_0221FEE4(*((u32*)r4), *((u32*)r4), 0);
    // add r1, r4, r1
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)) = r0;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)), (*((u32*)(r4 + 0x10)) << 2));
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x90
    // str r0, [r4]
    // str r0, [sp, #0x20]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    CapsuleGetSealI(r4, 6);
    SealOnCapsuleGetID();
    sub_02091084(((r0 << 0x18) >> 0x18));
    // str r0, [sp, #0xc]
    // add r0, r4, r0
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x38)) = r7;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)));
    // add r0, #0x8c
    // ldr r2, [sp, #0xc]
    ov07_0221FEE4(*((u32*)r4), *((u32*)r4), 0);
    // add r1, r4, r1
    *((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)) = r0;
    // add r0, r4, r0
    GF_AssertFail(*((u32*)((*((u32*)(r4 + 0x10)) << 2) + 0x14)), (*((u32*)(r4 + 0x10)) << 2));
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x8c
    // str r1, [r0]
    NARC_Delete(*((u32*)r4), 0xff);
    // ldr r0, [sp]
    SysTask_Destroy();
}



void ov07_022329B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022329E0
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // bl ov07_022325F4
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // mov r1, #0x5f
    // mov r3, #0
    // bl ov07_0221FEB0
    // str r0, [r4, #0x14]
    // mov r0, #0xff
    // add r4, #0x90
    // str r0, [r4]
    // pop {r4, pc}
    // mov r1, #0
    // add r0, r4, #0
    // mov r2, #0xfa
    // str r1, [r4, #0x10]
    // add r0, #0x90
    // str r1, [r0]
    // ldr r0, _02232A00 ; =ov07_02232730
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // add r1, r4, #0
    // bl ov07_02232730
    // pop {r4, pc}
    // nop
    // _02232A00: .word ov07_02232730
    // TODO: decompile
}



void ov07_02232A04(void) {
    // add r0, #0x90
}



void ov07_02232A14(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #1
    // add r0, #0x88
    // str r1, [r0]
    // bl ov07_0221C69C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov07_02232AFC
    // mov r2, #0xfa
    // ldr r0, _02232A40 ; =ov07_02232A5C
    // add r1, r5, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // add r5, #0x84
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // nop
    // _02232A40: .word ov07_02232A5C
    // TODO: decompile
}



void ov07_02232A44(void) {
    // ldr r3, _02232A4C ; =ov07_02232A14
    // ldr r1, _02232A50 ; =ov07_02232C28
    // bx r3
    // nop
    // _02232A4C: .word ov07_02232A14
    // _02232A50: .word ov07_02232C28
    // TODO: decompile
}



void ov07_02232A54(void) {
    // add r0, #0x88
}



void ov07_02232A5C(void) {
    // str r0, [sp]
    GF_AssertFail(*((u32*)(r1 + 0x10)));
    sub_020154B0(*((u32*)(r6 + 0x14)));
    ov07_0221FF2C(*((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x14)) = 0;
    *((u32*)(r5 + 0x5c)) = 0;
    // add r6, #0x88
    // str r0, [r6]
    // ldr r0, [sp]
    SysTask_Destroy(0);
}



void ov07_02232AB8(void) {
}



void ov07_02232AC0(void) {
    // str r1, [r0]
    sub_02015494(*((u32*)(r1 + 0x10)), 0, *((u32*)(r1 + 0x18)), r1);
    sub_02015528(*((u32*)(r4 + 0x10)), 1);
    SysTask_Destroy(r5);
    Heap_Free(r4);
    *((u32*)(r4 + 4)) = (r0 - 1);
}



void ov07_02232AFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // add r7, r1, #0
    // cmp r0, #0
    // bne _02232B3A
    // add r0, r6, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // bl ov07_02232608
    // add r5, r0, #0
    // mov r4, #0
    // cmp r5, #0
    // ble _02232B2E
    // ldr r0, [r6, #0x14]
    // add r1, r4, #0
    // add r2, r7, #0
    // add r3, r6, #0
    // bl sub_02015494
    // add r4, r4, #1
    // cmp r4, r5
    // blt _02232B1C
    // mov r1, #1
    // str r1, [r6, #0x5c]
    // ldr r0, [r6, #0x14]
    // bl sub_02015528
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r6, #0x10]
    // mov r7, #0
    // cmp r0, #0
    // ble _02232BA0
    // add r0, r6, #0
    // str r0, [sp]
    // add r0, #0x5c
    // add r5, r6, #0
    // str r0, [sp]
    // ldr r0, [r6]
    // mov r1, #0x1c
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02232B5C
    // bl GF_AssertFail
    // str r7, [r4]
    // ldr r0, [r6, #4]
    // str r0, [r4, #8]
    // ldr r0, _02232BA4 ; =ov07_02232C64
    // str r0, [r4, #0x18]
    // mov r0, #0
    // str r0, [r5, #0x5c]
    // ldr r0, [sp]
    // str r0, [r4, #0xc]
    // ldr r0, [r5, #0x14]
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #0x38]
    // str r0, [r4, #0x14]
    // cmp r0, #0
    // bne _02232B7E
    // bl GF_AssertFail
    // ldr r0, [r4, #0x14]
    // bl ov07_02234530
    // str r0, [r4, #4]
    // ldr r0, _02232BA8 ; =ov07_02232AC0
    // ldr r2, _02232BAC ; =0x000003E9
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, [sp]
    // add r7, r7, #1
    // add r0, r0, #4
    // str r0, [sp]
    // ldr r0, [r6, #0x10]
    // add r5, r5, #4
    // cmp r7, r0
    // blt _02232B4C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02232BA4: .word ov07_02232C64
    // _02232BA8: .word ov07_02232AC0
    // _02232BAC: .word 0x000003E9
    // TODO: decompile
}



void ov07_02232BB0(void) {
    ov07_02231DE0(0, 1);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02232BCE: ; jump table
    // sub r0, #0x10
    // mvn r5, r5
    // sub r0, #0xa
    // mvn r5, r5
    // mvn r5, r5
    // sub r0, #0xb
    // mvn r5, r5
    // mvn r5, r5
    // sub r0, #0xd
    // add r5, #0xa
    // mul r2, r1
    // sub r2, r3, r2
    // str r2, [r4]
    // add r0, #0x20
    // mul r1, r0
    // sub r0, r2, r1
    *((u32*)(r4 + 4)) = 0xf;
}



void ov07_02232C28(void) {
    sub_02015504();
    // add r1, sp, #0
    ov07_02232BB0(*((u32*)(r0 + 4)));
    // ldr r1, [sp]
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 4));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r4 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 8));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r4 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 0xc));
}



void ov07_02232C64(void) {
    sub_02015504();
    // add r1, sp, #0
    ov07_02232BB0(*((u32*)(r0 + 8)));
    SealOnCapsuleGetID(*((u32*)(r4 + 0x14)));
    sub_0209109C();
    SealOnCapsuleGetX(*((u32*)(r4 + 0x14)));
    SealOnCapsuleGetY(*((u32*)(r4 + 0x14)));
    // sub r6, #0xbe
    // asr r3, r1, #0x10
    // ldr r2, [sp]
    // mul r4, r1
    // add r3, r2, r4
    // sub r0, r4, r0
    // asr r0, r0, #0x10
    // ldr r2, [sp, #4]
    // mul r1, r0
    // add r0, r2, r1
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r3, r0
    *((u32*)(r5 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 4));
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
}



void ov07_02232CD8(void) {
    sub_02015504();
    // ldrsh r2, [r0, r1]
    // sub r1, r1, r2
    // asr r2, r1, #0x10
    // ldrsh r0, [r0, r2]
    // mul r1, r3
    // sub r0, #0x81
    // asr r0, r0, #0x10
    // mul r2, r3
    // add r0, r2, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 4));
    // add r0, r1, r0
    *((u32*)(r4 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 8));
    *((u32*)(r4 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r4 + 0x20))) + 0xc));
}



void ov07_02232D20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // mov r1, #0x24
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _02232D34
    // bl GF_AssertFail
    // ldmia r5!, {r0, r1}
    // add r2, r4, #0
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r2]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _02232D58
    // ldr r0, _02232D7C ; =0x00000403
    // bl ov07_0223261C
    // str r0, [r4, #0x20]
    // ldr r0, _02232D7C ; =0x00000403
    // bl ov07_02232630
    // b _02232D66
    // ldr r0, [r4, #4]
    // bl ov07_0223261C
    // str r0, [r4, #0x20]
    // ldr r0, [r4, #4]
    // bl ov07_02232630
    // str r0, [r4, #0x1c]
    // ldr r0, [r4, #8]
    // ldr r2, [r4, #0x20]
    // mov r1, #0x5f
    // mov r3, #0
    // bl ov07_0221FEB0
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02232D7C: .word 0x00000403
    // TODO: decompile
}



void ov07_02232D80(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r1, [r5, #0xc]
    // cmp r1, #0xff
    // bne _02232DDA
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // beq _02232DB0
    // ldr r0, [r5, #0x1c]
    // mov r4, #0
    // cmp r0, #0
    // ble _02232DE4
    // ldr r6, _02232DF0 ; =ov07_02232CD8
    // ldr r0, [r5, #0x18]
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl sub_02015494
    // ldr r0, [r5, #0x1c]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _02232D9A
    // b _02232DE4
    // ldr r0, [r5, #0x1c]
    // mov r4, #0
    // cmp r0, #0
    // ble _02232DE4
    // ldr r6, _02232DF0 ; =ov07_02232CD8
    // ldr r0, [r5, #4]
    // bl ov07_02232644
    // cmp r4, r0
    // beq _02232DD0
    // ldr r0, [r5, #0x18]
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl sub_02015494
    // ldr r0, [r5, #0x1c]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _02232DBA
    // b _02232DE4
    // ldr r0, [r5, #0x18]
    // ldr r2, _02232DF0 ; =ov07_02232CD8
    // add r3, r5, #0
    // bl sub_02015494
    // ldr r0, [r5, #0x18]
    // mov r1, #1
    // bl sub_02015528
    // pop {r4, r5, r6, pc}
    // nop
    // _02232DF0: .word ov07_02232CD8
    // TODO: decompile
}



void ov07_02232DF4(void) {
    sub_020154B0(*((u32*)(r0 + 0x18)));
    ov07_0221FF2C(*((u32*)(r4 + 0x18)));
}



void ov07_02232E10(void) {
}



void ov07_02232E18(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(1);
    ov07_02233EBC(r4, 2);
}



void ov07_02232E40(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(3);
    ov07_02233EBC(r4, 4);
}



void ov07_02232E68(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(5);
    ov07_02233EBC(r4, 6);
}



void ov07_02232E90(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(7);
    ov07_02233EBC(r4, 0xe);
}



void ov07_02232EB8(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(0xf);
    ov07_02233EBC(r4, 0x12);
}



void ov07_02232EE0(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(0x13);
    ov07_02233EBC(r4, 0x1b);
}



void ov07_02232F08(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(0x15);
    ov07_02233EBC(r4, 0x16);
}



void ov07_02232F30(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    ov07_02233EB8(0x17);
    ov07_02233EBC(r4, 0x1b);
}



void ov07_02232F58(void) {
}



void ov07_02232F60(void) {
    // push {r3, lr}
    // ldr r1, [r0]
    // lsl r2, r1, #2
    // ldr r1, _02232F70 ; =ov07_022371B8
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r3, pc}
    // nop
    // _02232F70: .word ov07_022371B8
    // TODO: decompile
}



void ov07_02232F74(void) {
}



u8 ov07_02232F80(void) {
}



void ov07_02232F84(void) {
    ov07_022335B4();
    ov07_02232F74(r4, 2);
}



void ov07_02232F9C(void) {
}



void ov07_02232FA8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02232FC0: ; jump table
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x30)), 1);
    // add r0, #0xa0
    // add r2, sp, #0
    // str r0, [sp, #4]
    // add r0, #0x94
    // add r1, sp, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)));
    // add r0, #0xb4
    // add r1, #0x94
    ov07_0221FDFC(*((u32*)r4), *((u32*)r4));
    // add r1, #0xd8
    // str r0, [r1]
    // add r0, sp, #0
    ov07_02232D20(r4);
    // add r1, #0xd0
    // str r0, [r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ManagedSprite_GetAnimationFrame(*((u32*)(r4 + 0x30)), r4);
    *((u32*)(r4 + 0x24)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd0
    ov07_02232D80(*((u32*)r4));
    // add r0, #0xd8
    ov07_0221FE08(*((u32*)r4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd0
    ov07_02232DF4(*((u32*)r4));
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 0);
    // add r0, #0xd0
    ov07_02232E10(*((u32*)r4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_02232F74(r4, 4);
}



u8 ov07_02233088(void) {
}



void ov07_0223308C(void) {
    // add r1, #0xb8
    // add r2, #0xba
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x30)), r0, r0);
    // add r0, #0xbc
    // strh r1, [r0]
    // add r0, #0xbe
    // strh r1, [r0]
    // add r0, #0xc0
    // str r1, [r0]
    // add r0, #0xc8
    // str r1, [r0]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov07_022335B4((*((u32*)(r4 + 0xc)) + 1), 0xc);
    ov07_02232F74(r4, 6);
}



u8 ov07_022330E0(void) {
}



void ov07_022330E4(void) {
}



void ov07_022330F0(void) {
}



void ov07_022330FC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0223310E
    // cmp r0, #1
    // beq _02233142
    // b _02233184
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xc
    // str r0, [sp, #4]
    // ldr r0, _022331A0 ; =0x0000037F
    // mov r3, #1
    // add r5, r3, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // lsl r5, r2
    // add r0, #0xb0
    // lsl r2, r5, #0x10
    // ldr r0, [r0]
    // mov r1, #4
    // lsr r2, r2, #0x10
    // sub r3, r3, #2
    // bl PaletteData_BeginPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223319A
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0223319A
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // add r2, r0, #0
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _022331A0 ; =0x0000037F
    // mov r3, #1
    // add r5, r3, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // lsl r5, r2
    // add r0, #0xb0
    // lsl r2, r5, #0x10
    // ldr r0, [r0]
    // mov r1, #4
    // lsr r2, r2, #0x10
    // sub r3, r3, #2
    // bl PaletteData_BeginPaletteFade
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223319A
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0223319A
    // add r0, r4, #0
    // mov r1, #0xa
    // bl ov07_02232F74
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _022331A0: .word 0x0000037F
    // TODO: decompile
}



void ov07_022331A4(void) {
}



void ov07_022331B0(void) {
    *((u32*)(r0 + 0xc)) = (*((u32*)(r0 + 0xc)) + 1);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x30)));
    // add r1, sp, #8
    // ldrsh r3, [r1, r0]
    // ldrsh r1, [r1, r0]
    // add r0, #0x20
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x48
    ov07_02222268(r4, r1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x48
    ov07_022222F0(r4, *((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_02232F74(r4, 0xd);
}



u8 ov07_02233224(void) {
}



void ov07_02233228(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r1, [r5, #8]
    // cmp r1, #0
    // beq _02233238
    // cmp r1, #1
    // beq _0223324E
    // b _022332AE
    // ldr r0, [r5, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #0x30]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r1, [r5, #0xc]
    // mov r0, #6
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, _022332B8 ; =ov07_0223730E
    // ldr r1, _022332BC ; =ov07_02237310
    // ldrsh r0, [r0, r2]
    // ldrh r1, [r1, r2]
    // str r0, [sp]
    // ldr r0, [r5, #0x30]
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r5, #0xc]
    // ldr r4, _022332C0 ; =ov07_02237200
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // mov r6, #0
    // mov r7, #0x75
    // ldr r1, [r5, #0xc]
    // ldr r0, [r4]
    // cmp r1, r0
    // bne _02233286
    // ldr r0, [r4, #4]
    // add r1, r7, #0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl sub_0200602C
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, #5
    // blt _02233272
    // ldr r0, [r5, #0xc]
    // cmp r0, #0x14
    // bgt _0223329A
    // ldr r0, [sp]
    // cmp r0, #0xff
    // bne _022332A2
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // b _022332B4
    // ldr r0, [r5, #0x30]
    // ldr r2, [sp]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // b _022332B4
    // mov r1, #0xe
    // bl ov07_02232F74
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _022332B8: .word ov07_0223730E
    // _022332BC: .word ov07_02237310
    // _022332C0: .word ov07_02237200
    // TODO: decompile
}



u8 ov07_022332C4(void) {
}



void ov07_022332C8(void) {
    *((u32*)(r0 + 0xc)) = (*((u32*)(r0 + 0xc)) + 1);
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    *((u32*)(r0 + 0xc)) = 0;
    ov07_02232F74(0x10);
}



void ov07_022332E8(void) {
}



void ov07_022332F4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _02233304
    // cmp r0, #1
    // beq _02233314
    // b _0223337C
    // ldr r0, [r5, #0x18]
    // cmp r0, #3
    // blt _0223330E
    // bl GF_AssertFail
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r1, [r5, #0x18]
    // mov r0, #0x18
    // add r3, r1, #0
    // mul r3, r0
    // ldr r0, _02233380 ; =ov07_02237254
    // ldr r1, [r5, #0xc]
    // add r0, r0, r3
    // lsl r2, r1, #1
    // ldrsh r4, [r2, r0]
    // add r0, r1, #1
    // str r0, [r5, #0xc]
    // cmp r0, #0xb
    // bgt _02233332
    // cmp r4, #0xff
    // bne _02233352
    // ldr r0, [r5, #8]
    // mov r1, #0
    // add r0, r0, #1
    // str r0, [r5, #8]
    // ldr r0, [r5, #0x18]
    // add r0, r0, #1
    // str r0, [r5, #0x18]
    // ldr r0, [r5, #0x30]
    // bl ManagedSprite_SetAffineZRotation
    // add r0, r5, #0
    // mov r1, #0x12
    // bl ov07_02232F74
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // cmp r0, #5
    // bne _0223335E
    // ldr r0, _02233384 ; =0x000005FD
    // mov r1, #0x75
    // bl sub_0200602C
    // ldr r0, [r5, #0x30]
    // add r1, r4, #0
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, _02233388 ; =0x0001FFFE
    // mov r1, #0x5a
    // mul r0, r4
    // lsl r1, r1, #2
    // bl _s32_div_f
    // add r1, r0, #0
    // ldr r0, [r5, #0x30]
    // bl ManagedSprite_OffsetAffineZRotation
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02233380: .word ov07_02237254
    // _02233384: .word 0x000005FD
    // _02233388: .word 0x0001FFFE
    // TODO: decompile
}



u8 ov07_0223338C(void) {
}



void ov07_02233390(void) {
}



void ov07_0223339C(void) {
}



void ov07_022333A8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022333C0: ; jump table
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r0 + 0x30)));
    // lsl r5, r2
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0xb0
    PaletteData_BeginPaletteFade(*((u32*)r4), 4, ((1 << 0x10) >> 0x10), (1 - 6));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xb0
    PaletteData_GetSelectedBuffersBitmask(*((u32*)r4));
    // add r0, #0xa0
    // str r0, [sp, #0x10]
    // add r1, #0x94
    // str r1, [sp, #0x14]
    ov07_02232644(*((u32*)r4), *((u32*)r4));
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r2, sp, #0xc
    // add r1, sp, #0xc
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)));
    // add r0, sp, #0xc
    ov07_02232D20();
    // add r1, #0xd0
    // str r0, [r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd0
    ov07_02232D80(*((u32*)r4), r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd0
    ov07_02232DF4(*((u32*)r4));
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 0);
    // add r0, #0xd0
    ov07_02232E10(*((u32*)r4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xb0
    PaletteData_GetSelectedBuffersBitmask(*((u32*)r4));
    ov07_02232F74(r4, 0x16);
}



u8 ov07_02233498(void) {
}



void ov07_0223349C(void) {
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r0 + 0x30)), *((u32*)(r0 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // lsl r5, r2
    // add r0, #0xb0
    PaletteData_BeginPaletteFade(*((u32*)r4), 4, ((1 << 0x10) >> 0x10), (1 - 6));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xb0
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(*((u32*)(r4 + 8)) + 1)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_02232F74((*((u32*)(r4 + 8)) + 1), 0x18);
}



void ov07_02233500(void) {
}



void ov07_0223350C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // beq _0223351C
    // cmp r1, #1
    // beq _0223352A
    // b _02233582
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02233552
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x21
    // strb r1, [r0]
    // b _0223356E
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r2, #0xf
    // add r0, #0x21
    // strb r2, [r0]
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // add r0, #0x20
    // add r4, #0x21
    // ldrb r1, [r0]
    // ldrb r0, [r4]
    // lsl r0, r0, #8
    // orr r1, r0
    // ldr r0, _0223358C ; =0x04000052
    // strh r1, [r0]
    // b _02233588
    // mov r1, #0x1a
    // bl ov07_02232F74
    // mov r0, #1
    // pop {r4, pc}
    // _0223358C: .word 0x04000052
    // TODO: decompile
}



void ov07_02233590(void) {
}



u8 ov07_0223359C(void) {
}



void ov07_022335A0(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x14]
    // lsl r2, r1, #2
    // ldr r1, _022335B0 ; =ov07_0223729C
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r3, pc}
    // nop
    // _022335B0: .word ov07_0223729C
    // TODO: decompile
}



void ov07_022335B4(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #3
    // bls _022335C2
    // b _022337C2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022335CE: ; jump table
    // mov r0, #0xba
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // mov r2, #0xb8
    // str r0, [sp]
    // mov r0, #0xbe
    // ldrsh r0, [r4, r0]
    // mov r3, #0xbc
    // add r1, #0x6c
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    // bl ov07_02222338
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xc4
    // str r1, [r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232540
    // cmp r0, #1
    // bne _0223372C
    // bl LCRandom
    // mov r1, #0x14
    // bl _s32_div_f
    // add r1, #0xa
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0xd
    // bl ManagedSprite_OffsetAffineZRotation
    // b _0223385E
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232540
    // cmp r0, #1
    // bne _022336E2
    // mov r1, #2
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0xc
    // bl ManagedSprite_OffsetAffineZRotation
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    // cmp r2, r0
    // ble _0223367E
    // mov r1, #2
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0xc
    // bl ManagedSprite_OffsetAffineZRotation
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232580
    // cmp r0, #1
    // bne _022336E2
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    // cmp r2, r0
    // bne _022336E2
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // add r3, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // add r1, r4, #0
    // lsl r3, r3, #0x14
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // ldr r0, _02233864 ; =0x0000FFFF
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // ldr r0, _02233868 ; =0x000003EA
    // lsr r3, r3, #0x10
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // ldr r1, [r1]
    // bl ov07_02222F10
    // add r1, r4, #0
    // add r1, #0xd4
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #6
    // blt _0223371A
    // cmp r0, #8
    // bgt _0223371A
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r2, r0, #1
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r1, [r0]
    // cmp r1, r2
    // ble _0223371A
    // add r0, r2, #5
    // cmp r1, r0
    // blt _0223372C
    // add r0, r4, #0
    // add r1, r4, #0
    // ldr r2, [r4, #0x30]
    // add r0, #0x48
    // add r1, #0x6c
    // bl ov07_022223CC
    // cmp r0, #0
    // beq _0223372E
    // b _0223385E
    // add r0, r4, #0
    // mov r1, #0
    // bl ov07_022344B4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223385E
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232580
    // cmp r0, #1
    // bne _02233772
    // add r0, r4, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02233772
    // bl ov07_02222EE8
    // cmp r0, #1
    // beq _0223385E
    // add r0, r4, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // bl ov07_02222EF8
    // mov r0, #1
    // str r0, [r4, #0x28]
    // add sp, #0x1c
    // mov r0, #0
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #0xf
    // blt _02233786
    // mov r0, #1
    // str r0, [r4, #0x28]
    // add sp, #0x1c
    // mov r0, #0
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r1, [r0]
    // ldr r0, _0223386C ; =0x00000401
    // cmp r1, r0
    // bne _0223379A
    // ldr r0, _02233870 ; =0x000007E8
    // mov r1, #0x75
    // bl sub_0200602C
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223385E
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // mov r1, #1
    // bl ov07_022344C0
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xc4
    // str r1, [r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _0223385E
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // cmp r0, #5
    // bne _0223381C
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #0xc
    // beq _02233818
    // cmp r0, #0xd
    // beq _02233818
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // add r3, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // add r1, r4, #0
    // lsl r3, r3, #0x14
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // ldr r0, _02233864 ; =0x0000FFFF
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // ldr r0, _02233868 ; =0x000003EA
    // lsr r3, r3, #0x10
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // ldr r1, [r1]
    // bl ov07_02222F10
    // add r1, r4, #0
    // add r1, #0xd4
    // str r0, [r1]
    // mov r0, #1
    // str r0, [r4, #0x28]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // cmp r0, #0xf
    // ble _0223385E
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #0xc
    // beq _02233858
    // cmp r0, #0xd
    // beq _02233858
    // add r0, r4, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // bl ov07_02222EE8
    // cmp r0, #1
    // beq _0223385E
    // add r4, #0xd4
    // ldr r0, [r4]
    // bl ov07_02222EF8
    // add sp, #0x1c
    // mov r0, #0
    // pop {r3, r4, pc}
    // mov r0, #1
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // _02233864: .word 0x0000FFFF
    // _02233868: .word 0x000003EA
    // _0223386C: .word 0x00000401
    // _02233870: .word 0x000007E8
    // TODO: decompile
}



void ov07_02233874(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #3
    // bls _02233882
    // b _02233A6E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223388E: ; jump table
    // mov r0, #0xba
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // mov r2, #0xb8
    // str r0, [sp]
    // mov r0, #0xbe
    // ldrsh r0, [r4, r0]
    // mov r3, #0xbc
    // add r1, #0x6c
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    // bl ov07_02222338
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xc4
    // str r1, [r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // add r0, r4, #0
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232540
    // cmp r0, #1
    // bne _022339EC
    // bl LCRandom
    // mov r1, #0x14
    // bl _s32_div_f
    // add r1, #0xa
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0xd
    // bl ManagedSprite_OffsetAffineZRotation
    // b _02233AF6
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232540
    // cmp r0, #1
    // bne _022339A2
    // mov r1, #2
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0xc
    // bl ManagedSprite_OffsetAffineZRotation
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    // cmp r2, r0
    // ble _0223393E
    // mov r1, #2
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0xc
    // bl ManagedSprite_OffsetAffineZRotation
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232580
    // cmp r0, #1
    // bne _022339A2
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    // cmp r2, r0
    // bne _022339A2
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // add r3, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // add r1, r4, #0
    // lsl r3, r3, #0x14
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // ldr r0, _02233AFC ; =0x0000FFFF
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // ldr r0, _02233B00 ; =0x000003EA
    // lsr r3, r3, #0x10
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // ldr r1, [r1]
    // bl ov07_02222F10
    // add r1, r4, #0
    // add r1, #0xd4
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #6
    // blt _022339DA
    // cmp r0, #8
    // bgt _022339DA
    // add r0, r4, #0
    // add r0, #0xc0
    // ldr r1, [r0]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r2, r0, #1
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r1, [r0]
    // cmp r1, r2
    // ble _022339DA
    // add r0, r2, #5
    // cmp r1, r0
    // blt _022339EC
    // add r0, r4, #0
    // add r1, r4, #0
    // ldr r2, [r4, #0x30]
    // add r0, #0x48
    // add r1, #0x6c
    // bl ov07_022223CC
    // cmp r0, #0
    // beq _022339EE
    // b _02233AF6
    // add r0, r4, #0
    // mov r1, #0
    // bl ov07_022344B4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233AF6
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_02232580
    // cmp r0, #1
    // bne _02233A32
    // add r0, r4, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02233A32
    // bl ov07_02222EE8
    // cmp r0, #1
    // beq _02233AF6
    // add r0, r4, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // bl ov07_02222EF8
    // mov r0, #1
    // str r0, [r4, #0x28]
    // add sp, #0x1c
    // mov r0, #0
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #0xf
    // blt _02233A46
    // mov r0, #1
    // str r0, [r4, #0x28]
    // add sp, #0x1c
    // mov r0, #0
    // pop {r3, r4, pc}
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233AF6
    // ldr r0, [r4, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // mov r1, #0
    // bl ov07_022344C0
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xc4
    // str r1, [r0]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233AF6
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // cmp r0, #5
    // bne _02233AC2
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_GetPaletteOverrideOffset
    // add r3, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // mov r2, #2
    // add r1, r4, #0
    // lsl r3, r3, #0x14
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // ldr r0, _02233AFC ; =0x0000FFFF
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // ldr r0, _02233B00 ; =0x000003EA
    // lsr r3, r3, #0x10
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // ldr r1, [r1]
    // bl ov07_02222F10
    // add r1, r4, #0
    // add r1, #0xd4
    // str r0, [r1]
    // mov r0, #1
    // str r0, [r4, #0x28]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // cmp r0, #0xf
    // ble _02233AF6
    // add r0, r4, #0
    // add r0, #0xd4
    // ldr r0, [r0]
    // bl ov07_02222EE8
    // cmp r0, #1
    // beq _02233AF6
    // add r4, #0xd4
    // ldr r0, [r4]
    // bl ov07_02222EF8
    // add sp, #0x1c
    // mov r0, #0
    // pop {r3, r4, pc}
    // mov r0, #1
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // _02233AFC: .word 0x0000FFFF
    // _02233B00: .word 0x000003EA
    // TODO: decompile
}



void ov07_02233B04(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02233B1E: ; jump table
    ov07_022344C0(0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 1);
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 0);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 2);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xa0
    // add r2, sp, #0
    // str r0, [sp, #4]
    // add r0, #0x94
    // add r1, sp, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)), 0);
    // add r0, sp, #0
    ov07_02232D20();
    // add r1, #0xd0
    // str r0, [r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd0
    ov07_02232D80(*((u32*)(*((u32*)(r4 + 8)) + 1)), r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 2);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 1);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 0);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd0
    ov07_02232DF4(*((u32*)(*((u32*)(r4 + 8)) + 1)), 0);
    // add r0, #0xd0
    ov07_02232E10(*((u32*)r4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}



void ov07_02233C98(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _02233CA8
    // cmp r0, #1
    // beq _02233CDC
    // b _02233D0E
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bne _02233CBE
    // ldr r1, _02233D1C ; =0xFFFFE001
    // add r0, r4, #0
    // add r0, #0x34
    // lsr r2, r1, #0x13
    // mov r3, #0xa
    // bl ov07_022223F0
    // b _02233CCC
    // add r0, r4, #0
    // ldr r1, _02233D20 ; =0x00001FFF
    // ldr r2, _02233D1C ; =0xFFFFE001
    // add r0, #0x34
    // mov r3, #0xa
    // bl ov07_022223F0
    // ldr r1, [r4, #0x10]
    // mov r0, #1
    // eor r0, r1
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233D16
    // ldr r1, [r4, #0x34]
    // ldr r0, [r4, #0x30]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ManagedSprite_SetAffineZRotation
    // add r0, r4, #0
    // add r0, #0x34
    // bl ov07_02222440
    // cmp r0, #0
    // bne _02233D16
    // ldr r0, [r4, #0xc]
    // cmp r0, #1
    // blt _02233D02
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // b _02233D16
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // sub r0, r0, #1
    // str r0, [r4, #8]
    // b _02233D16
    // mov r0, #0
    // add r4, #0xc4
    // str r0, [r4]
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02233D1C: .word 0xFFFFE001
    // _02233D20: .word 0x00001FFF
    // TODO: decompile
}



void ov07_02233D24(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x30)));
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // add r0, #0xb8
    // strh r2, [r0]
    // ldrsh r0, [r1, r0]
    // add r4, #0xba
    // strh r0, [r4]
}



void ov07_02233D60(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _02233DB2
    // add r0, r4, #0
    // add r0, #0xdc
    // ldr r0, [r0]
    // cmp r0, #0
    // ble _02233D8A
    // add r0, r4, #0
    // add r0, #0xdc
    // ldr r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xdc
    // str r1, [r0]
    // ldr r0, [r4, #0x2c]
    // bl SpriteSystem_DrawSprites
    // pop {r4, pc}
    // add r1, #0x98
    // ldr r1, [r1]
    // add r0, r4, #0
    // lsl r2, r1, #2
    // ldr r1, _02233DB4 ; =ov07_022371A0
    // ldr r1, [r1, r2]
    // blx r1
    // cmp r0, #0
    // bne _02233DA0
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // ldr r0, [r4, #0x24]
    // cmp r0, #1
    // bne _02233DAC
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x2c]
    // bl SpriteSystem_DrawSprites
    // pop {r4, pc}
    // _02233DB4: .word ov07_022371A0
    // TODO: decompile
}



void ov07_02233DB8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // mov r1, #0xe0
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0xe0
    // add r4, r0, #0
    // bl MI_CpuFill8
    // cmp r4, #0
    // bne _02233DD6
    // bl GF_AssertFail
    // add r3, r4, #0
    // add r3, #0x90
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02233DDC
    // mov r0, #0
    // str r0, [r4, #8]
    // str r0, [r4, #0x10]
    // str r0, [r4, #0xc]
    // str r0, [r4, #0x14]
    // str r0, [r4, #0x18]
    // str r0, [r4]
    // str r0, [r4, #4]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // bl SpriteManager_New
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xdc
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl ov07_022325BC
    // str r0, [r4, #0x24]
    // add r0, r4, #0
    // mov r2, #0
    // add r0, #0xc4
    // str r2, [r0]
    // add r0, r4, #0
    // mov r1, #0x10
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // strb r2, [r0]
    // bl ov07_0221C69C
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r0, r0, #0x1f
    // sub r0, r0, r1
    // mov r2, #0x1f
    // ror r0, r2
    // add r0, r1, r0
    // beq _02233E4A
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x22
    // strb r1, [r0]
    // b _02233E52
    // add r0, r4, #0
    // sub r2, #0x20
    // add r0, #0x22
    // strb r2, [r0]
    // add r0, r4, #0
    // bl ov07_022342E4
    // add r0, r4, #0
    // bl ov07_0223441C
    // add r0, r4, #0
    // bl ov07_02233F30
    // mov r0, #1
    // str r0, [r4, #0x1c]
    // mov r0, #0
    // str r0, [r4, #0x28]
    // mov r2, #0xfa
    // ldr r0, _02233E84 ; =ov07_02233D60
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // add r1, r4, #0
    // add r1, #0xcc
    // str r0, [r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02233E84: .word ov07_02233D60
    // TODO: decompile
}



void ov07_02233E88(void) {
}



void ov07_02233EA0(void) {
}



void ov07_02233EB8(void) {
}



void ov07_02233EBC(void) {
    // ldr r0, [r0, #0x14]
    // cmp r0, r1
    // bne _02233EC6
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov07_02233ECC(void) {
    GF_AssertFail();
    // add r0, #0xac
    SpriteSystem_FreeResourcesAndManager(*((u32*)r4), *((u32*)(r4 + 0x2c)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x30)));
    // add r0, #0xcc
    SysTask_Destroy(*((u32*)r4));
    Heap_Free(r4);
}



void ov07_02233EFC(void) {
    // add r2, r0, #0
    // add r0, #0x98
    // str r1, [r0]
    // mov r0, #0
    // str r0, [r2, #8]
    // str r0, [r2, #0xc]
    // str r0, [r2, #0x10]
    // mov r0, #1
    // add r1, r2, #0
    // str r0, [r2, #0x1c]
    // ldr r0, [r2, #0x30]
    // ldr r3, _02233F1C ; =ManagedSprite_GetPositionXY
    // add r1, #0xb8
    // add r2, #0xba
    // bx r3
    // nop
    // _02233F1C: .word ManagedSprite_GetPositionXY
    // TODO: decompile
}



void ov07_02233F20(void) {
}



void ov07_02233F30(void) {
    // add r1, #0xb8
    // add r2, #0xba
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x30)), r0, r0);
    // add r0, #0x90
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233F5A: ; jump table
    // add r1, #0xbc
    // add r2, #0xbe
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)), r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(0, 0, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r1, #0xb8
    // add r2, #0xba
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)), r4, r4);
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(1, 4, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(1, 2, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(0, 1, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(1, 3, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(1, 5, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(0, 1, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x10
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(0, 1, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbc
    // sub r1, #0x14
    // strh r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x26
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r0, #0xbc
    // strh r1, [r0]
    // add r0, #0xbe
    // strh r1, [r0]
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(0, 1, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #8
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(1, 3, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #8
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    ov07_02221F04(1, 5, r4, r4);
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #8
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r4, #0xc0
    // str r0, [r4]
}



void ov07_022341A4(void) {
    // add r0, #0x90
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022341C0: ; jump table
    ov07_02221F04(0, 0, r1, r2);
    // ldrsh r0, [r4, r0]
    // add r0, #0x28
    // strh r0, [r4]
    ov07_02221F04(0, 1, r3, r4);
    // ldrsh r0, [r4, r0]
    // add r0, #0x26
    // strh r0, [r4]
    ov07_02221F04(1, 2, r3, r4);
    // ldrsh r0, [r4, r0]
    // add r0, #0x28
    // strh r0, [r4]
    ov07_02221F04(1, 4, r3, r4);
    // ldrsh r0, [r4, r0]
    // add r0, #0x28
    // strh r0, [r4]
    ov07_02221F04(1, 3, r3, r4);
    // ldrsh r0, [r4, r0]
    // add r0, #0x26
    // strh r0, [r4]
    ov07_02221F04(1, 5, r3, r4);
    // ldrsh r0, [r4, r0]
    // add r0, #0x26
    // strh r0, [r4]
    // strh r0, [r3]
    // strh r0, [r4]
    // strh r0, [r3]
    // strh r0, [r4]
    // strh r0, [r3]
    // strh r0, [r4]
    ov07_02221F04(0, 0, r3, r4);
    ov07_02221F04(0, 0, r3, r4);
    ov07_02221F04(0, 0, r3, r4);
    ov07_02221F04(0, 0, r3, r4);
    ov07_02221F04(0, 0, r3, r4);
    // strh r0, [r3]
    // strh r0, [r4]
    // mvn r0, r0
    // strh r0, [r3]
    // strh r0, [r4]
}



void ov07_022342E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, [r5, #0x2c]
    // mov r2, #0xa
    // bl SpriteSystem_InitSprites
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02234314
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // bl SpriteSystem_GetRenderer
    // mov r2, #0x11
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r1, #0
    // add r2, sp, #0x20
    // mov r0, #0xa
    // add r1, r1, #1
    // stmia r2!, {r0}
    // cmp r1, #6
    // blt _0223431A
    // mov r0, #0
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, [r5, #0x2c]
    // add r2, sp, #0x20
    // bl SpriteSystem_InitManagerWithCapacities
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov07_02232658
    // add r7, r0, #0
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // mov r1, #1
    // bl ov07_02232658
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // mov r1, #2
    // bl ov07_02232658
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // mov r1, #3
    // bl ov07_02232658
    // add r1, r5, #0
    // add r1, #0x94
    // str r0, [sp, #0x1c]
    // ldr r1, [r1]
    // mov r0, #8
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r1, [r0]
    // ldr r0, _02234418 ; =0x00001770
    // add r2, r4, #0
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, [r5, #0x2c]
    // add r3, r7, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // str r4, [sp]
    // add r2, r5, #0
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r1, [r0]
    // ldr r0, _02234418 ; =0x00001770
    // add r2, #0xac
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // ldr r2, [r2]
    // ldr r3, [r5, #0x2c]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r1, [r0]
    // ldr r0, _02234418 ; =0x00001770
    // ldr r3, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, [r5, #0x2c]
    // add r2, r4, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0x9c
    // ldr r1, [r0]
    // ldr r0, _02234418 ; =0x00001770
    // ldr r3, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, [r5, #0x2c]
    // add r2, r4, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02234418: .word 0x00001770
    // TODO: decompile
}



void ov07_0223441C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x34
    // add r2, sp, #0
    // add r1, sp, #0
    // add r2, #2
    // add r4, r0, #0
    // bl ov07_022341A4
    // mov r0, #0
    // add r1, sp, #0
    // strh r0, [r1, #4]
    // strh r0, [r1, #6]
    // mov r1, #1
    // str r1, [sp, #0x10]
    // add r1, r4, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xa4
    // ldr r1, [r1]
    // ldr r2, _02234498 ; =0x00001770
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r3, sp, #0
    // add r1, r4, #0
    // add r1, #0x9c
    // ldr r1, [r1]
    // add r0, r0, #1
    // add r1, r1, r2
    // str r1, [r3, #0x14]
    // add r3, r3, #4
    // cmp r0, #6
    // blt _0223444A
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, [r4, #0x2c]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // str r0, [r4, #0x30]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4, #0x30]
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0x30]
    // bl ManagedSprite_TickFrame
    // bl ov07_0221C69C
    // add sp, #0x34
    // pop {r3, r4, pc}
    // _02234498: .word 0x00001770
    // TODO: decompile
}



void ov07_0223449C(void) {
}



void ov07_022344A8(void) {
}



void ov07_022344B4(void) {
}



void ov07_022344C0(void) {
}



void ov07_022344C4(void) {
}



void ov07_022344D0(void) {
}



void ov07_022344DC(void) {
    // add r0, #0xdc
    // str r1, [r0]
}



void ov07_022344E4(void) {
    // sub r1, r1, r3
    // neg r1, r1
    // sub r0, r0, r2
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // mul r2, r1
    // mul r1, r0
    // add r0, r2, r1
    FX_Sqrt(((r0 << 0x10) << 0xc), (r0 << 0x10), (r1 << 0x10));
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
}



void ov07_02234510(void) {
}



void ov07_02234530(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r3, _02234588 ; =ov07_0223777C
    // add r4, r0, #0
    // add r2, sp, #0
    // mov r1, #7
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0223453C
    // add r0, r4, #0
    // bl SealOnCapsuleGetID
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0209109C
    // cmp r0, #0
    // bne _0223457E
    // add r0, r4, #0
    // bl ov07_02234510
    // cmp r0, #0x38
    // blt _02234568
    // mov r0, #3
    // b _02234576
    // add r0, r0, #1
    // mov r1, #0x14
    // bl _s32_div_f
    // cmp r0, #3
    // blt _02234576
    // mov r0, #3
    // add r1, sp, #0
    // add sp, #8
    // ldrb r0, [r1, r0]
    // pop {r4, pc}
    // add r0, sp, #0
    // ldrb r0, [r0, #1]
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02234588: .word ov07_0223777C
    // TODO: decompile
}



void ov07_0223458C(void) {
    Heap_Alloc(0x48);
    GF_AssertFail();
    ov07_0221C69C(0);
    // str r6, [r4]
    *((u32*)(r4 + 4)) = *((u32*)r5);
    *((u32*)(r4 + 8)) = 0;
}



void ov07_022345C8(void) {
    // add r4, #8
    ov07_02234658(*((u32*)r0), *((u32*)(r0 + 8)), r0);
    // str r0, [r4, r6]
    // ldr r0, [r4, r6]
    *((u32*)(r0 + 0x18)) = 0;
    // ldr r4, [r4, r6]
    // str r5, [r4]
    GF_AssertFail(0, (r3 + 4));
}



void ov07_02234604(void) {
    Heap_Free(*((u32*)(r0 + 8)));
    Heap_Free(r6);
}



void ov07_02234628(void) {
    ov07_0221FF2C(*((u32*)(*((u32*)(r0 + 8)) + 0x10)));
    SysTask_Destroy(*((u32*)(*((u32*)(r5 + 8)) + 0x18)), *((u32*)(r5 + 8)));
}



void ov07_02234658(void) {
    Heap_Alloc(0x24);
    GF_AssertFail();
    *((u32*)(r4 + 4)) = r5;
    *((u32*)(r4 + 8)) = *((u32*)r6);
    *((u32*)(r4 + 0xc)) = *((u32*)(r6 + 4));
    ov07_02234718(*((u32*)(r4 + 8)), *((u32*)r6));
    *((u32*)(r4 + 0x1c)) = r0;
    ov07_0221FE88(*((u32*)(r4 + 4)), *((u32*)(r4 + 8)), 1);
    *((u32*)(r4 + 0x10)) = r0;
}



void ov07_02234694(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #1
    // str r1, [r4, #0x20]
    // ldr r1, _022346B4 ; =ov07_02234710
    // bl ov07_022346E4
    // mov r2, #0xfa
    // ldr r0, _022346B8 ; =ov07_022346C0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x18]
    // pop {r4, pc}
    // nop
    // _022346B4: .word ov07_02234710
    // _022346B8: .word ov07_022346C0
    // TODO: decompile
}



void ov07_022346BC(void) {
    // ldr r0, [r0, #0x20]
    // bx lr
    // TODO: decompile
}



void ov07_022346C0(void) {
    sub_020154B0(*((u32*)(r1 + 0x10)));
    *((u32*)(r4 + 0x20)) = 0;
    ov07_0221FF2C(*((u32*)(r4 + 0x10)));
    SysTask_Destroy(r5);
}



void ov07_022346E4(void) {
    sub_02015494(*((u32*)(r0 + 0x10)), 0, r1, r0);
    sub_02015528(*((u32*)(r5 + 0x10)), *((u32*)(r5 + 0xc)));
}



void ov07_02234710(void) {
}



void ov07_02234718(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x58
    // ldr r4, _02234748 ; =ov07_02237784
    // add r5, r0, #0
    // add r3, sp, #0
    // mov r2, #0xb
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02234724
    // sub r0, r5, #5
    // cmp r0, #0x16
    // blo _0223473C
    // bl GF_AssertFail
    // add sp, #0x58
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // lsl r1, r0, #2
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // add sp, #0x58
    // pop {r3, r4, r5, pc}
    // nop
    // _02234748: .word ov07_02237784
    // TODO: decompile
}



void ov07_0223474C(void) {
}



void ov07_0223475C(void) {
}



void ov07_0223476C(void) {
    // add r0, r5, r0
    // str r3, [sp, #0x10]
    Pokepic_Push(*((u32*)((*((u32*)r0) << 2) + 0x18)));
    // add r1, r5, r1
    // add r1, r5, r0
    // add r1, #0x30
    // ldrb r1, [r1]
    // add r2, r5, r0
    // add r2, #0x38
    // str r1, [sp, #0x1c]
    // add r1, r5, r0
    // ldrb r2, [r2]
    // add r0, r5, r0
    // add r1, #0x34
    // ldrb r1, [r1]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, r5, r4
    // add r0, #0x4c
    // ldrb r2, [r0]
    // tst r0, r2
    // add r0, r5, r4
    // add r0, #0x4c
    // ldrb r2, [r0]
    // tst r0, r2
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // add r0, sp, #0x28
    GetMonSpriteCharAndPlttNarcIdsEx((((((*((u32*)(r5 + 4)) << 1) << 0x18) >> 0x18) << 0x18) >> 0x18), ((*((u16*)((*((u32*)(r5 + 4)) << 1) + 0x28)) << 0x10) >> 0x10), ((r2 << 0x18) >> 0x18), ((0 << 0x18) >> 0x18));
    // add r0, r5, r0
    Pokepic_GetTemplate(*((u32*)((*((u32*)r5) << 2) + 0x18)));
    // add r3, sp, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, r0
    Pokepic_ScheduleReloadFromNarc(*((u32*)((*((u32*)r5) << 2) + 0x18)), r0);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrh r0, [r7]
    // add r3, r5, r3
    sub_02014540(*((u16*)(r7 + 6)), *((u16*)(r7 + 2)), *((u32*)*((u32*)((*((u32*)r5) << 2) + 8))));
    // ldr r3, [sp, #0x18]
    // add r1, r5, r1
    // ldrh r0, [r7]
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 4)) = r0;
    // add r1, r5, r1
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 8)) = *((u16*)(r7 + 4));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp]
    GetMonPicHeightBySpeciesGenderForm(((r6 << 0x10) >> 0x10), ((*((u32*)((*((u32*)r5) << 2) + 8)) << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r1, r5, r1
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 0xc)) = r0;
    // add r1, r5, r1
    // add r0, r5, r0
    // add r0, #0x4c
    // asr r7, r1, #0x18
    // ldrb r0, [r0]
    ov07_02234B5C(*((u32*)r5), 1);
    // str r0, [sp, #0x20]
    // ldr r2, [sp, #0x20]
    // add r0, r5, r0
    // add r2, r2, r7
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 1);
    // ldr r1, [sp, #0x10]
    NARC_New(0xb4);
    // add r1, sp, #0x24
    // add r1, #2
    sub_020729D8(((r6 << 0x10) >> 0x10));
    // add r1, sp, #0x24
    // add r1, #1
    sub_020729FC(r4, ((r6 << 0x10) >> 0x10));
    // add r1, sp, #0x24
    sub_02072A20(r4, ((r6 << 0x10) >> 0x10));
    NARC_Delete(r4);
    // add r2, sp, #0x24
    // add r0, r5, r0
    // ldrb r2, [r2]
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x2e);
    // ldr r2, [sp, #0x20]
    // add r0, r5, r0
    // add r2, #0x24
    // str r2, [sp, #0x20]
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x14);
    // add r3, sp, #0x24
    // add r0, r5, r0
    // ldrsb r2, [r3, r2]
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x15, 1);
    // add r0, r5, r0
    // sub r2, r2, r7
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x16, 0x24);
    // add r3, sp, #0x24
    // add r0, r5, r0
    // ldrsb r2, [r3, r2]
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x29, 2);
}



void ov07_0223494C(void) {
    // str r1, [sp, #0x10]
    // add r0, r5, r0
    Pokepic_Pop(*((u32*)((*((u32*)r0) << 2) + 0x18)));
    // add r0, r5, r0
    Pokepic_GetTemplate(*((u32*)((*((u32*)r5) << 2) + 0x18)));
    // add r1, r5, r1
    // str r1, [sp, #0x1c]
    // add r1, r5, r0
    // add r1, #0x30
    // ldrb r1, [r1]
    // str r1, [sp, #0x18]
    // add r1, r5, r0
    // add r1, #0x38
    // ldrb r1, [r1]
    // add r0, r5, r0
    // add r0, #0x4c
    // str r1, [sp, #0x14]
    // add r1, r5, r3
    // ldrb r1, [r0]
    // tst r0, r1
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r3, r5, r3
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldrh r0, [r4]
    sub_02014540(*((u16*)(r0 + 6)), *((u16*)(r0 + 2)), *((u32*)*((u32*)((*((u32*)r5) << 2) + 8))));
    // ldrh r0, [r4]
    // add r1, r5, r1
    // ldr r3, [sp, #0x14]
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 4)) = r0;
    // add r1, r5, r1
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 8)) = *((u16*)(r4 + 4));
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // str r7, [sp]
    GetMonPicHeightBySpeciesGenderForm(((*((u16*)(r4 + 4)) << 0x10) >> 0x10), ((*((u32*)((*((u32*)r5) << 2) + 8)) << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r1, r5, r1
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 0xc)) = r0;
    // add r0, r5, r0
    // add r0, #0x4c
    // ldrb r0, [r0]
    ov07_02234B5C(*((u32*)r5), 1);
    // add r1, r5, r4
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)(r1 + 0x18)), 1, r0, *((u32*)(*((u32*)(r1 + 8)) + 0xc)));
}



void ov07_02234A20(void) {
    // add r0, r5, r0
    Pokepic_Push(*((u32*)((*((u32*)r0) << 2) + 0x18)));
    // add r3, sp, #0
    *((u16*)(r3 + 4)) = 0x72;
    // add r1, #0x90
    *((u16*)(r3 + 8)) = 0x72;
    *((u16*)(r3 + 0xa)) = 0;
    *((u8*)(r3 + 0xc)) = 0;
    // str r1, [sp, #0x10]
    // add r2, r5, r1
    // add r2, #0x4c
    // ldrb r4, [r2]
    // tst r4, r2
    // add r0, #0x8f
    *((u16*)(r3 + 6)) = 0x72;
    // add r2, #0xff
    *((u16*)(r3 + 6)) = 1;
    // add r0, r5, r0
    Pokepic_GetTemplate(*((u32*)((*((u32*)r5) << 2) + 0x18)), *((u32*)r5), 1);
    // add r3, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, r0
    Pokepic_ScheduleReloadFromNarc(*((u32*)((*((u32*)r5) << 2) + 0x18)), r0);
    // ldrh r0, [r7]
    // add r3, r5, r3
    sub_02014400(*((u16*)(r7 + 2)), r6, *((u32*)*((u32*)((*((u32*)r5) << 2) + 8))));
    // add r1, sp, #0
    // add r2, r5, r2
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 4)) = *((u16*)(r1 + 4));
    // add r0, r5, r0
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 8)) = *((u16*)(r1 + 8));
    // add r0, sp, #0
    ReadWholeNarcMemberByIdPair(*((u32*)((*((u32*)r5) << 2) + 8)), 0x75, r4);
    // add r0, sp, #0
    // ldrb r1, [r0]
    // add r0, r5, r0
    *((u32*)(*((u32*)((*((u32*)r5) << 2) + 8)) + 0xc)) = r1;
    // add r0, r5, r0
    // add r0, #0x4c
    // ldrb r0, [r0]
    ov07_02234B5C(*((u32*)r5), 1);
    // add r2, r5, r4
    // add r4, r1, r0
    Pokepic_SetAttr(*((u32*)(r2 + 0x18)), 1, r4);
    // add r0, r5, r1
    // add r0, #0x4c
    // ldrb r0, [r0]
    // tst r0, r2
    // add r0, r5, r0
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x2e, 1);
    // add r2, sp, #0
    // ldrb r3, [r2]
    // add r0, r5, r0
    // sub r2, r2, r3
    // add r2, r4, r2
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x14, 0x24);
    // add r0, r5, r0
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x15, 0);
    // add r2, sp, #0
    // ldrb r3, [r2]
    // add r0, r5, r0
    // sub r2, r2, r3
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x16, 0x24);
    // add r0, r5, r0
    Pokepic_SetAttr(*((u32*)((*((u32*)r5) << 2) + 0x18)), 0x29, 0);
}



void ov07_02234B5C(void) {
    // cmp r1, #0
    // bne _02234B68
    // lsl r1, r0, #2
    // ldr r0, _02234B78 ; =ov07_022377DC
    // ldrsh r0, [r0, r1]
    // bx lr
    // mov r2, #6
    // mul r2, r0
    // ldr r0, _02234B7C ; =ov07_022377F4
    // lsl r1, r1, #1
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
    // bx lr
    // nop
    // _02234B78: .word ov07_022377DC
    // _02234B7C: .word ov07_022377F4
    // TODO: decompile
}


