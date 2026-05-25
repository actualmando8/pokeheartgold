/* Decompiled from asm/unk_0202D230.s */
#include "global.h"

u8 sub_0202D230(void) {
}



void sub_0202D234(void) {
}



void sub_0202D240(void) {
}



void sub_0202D254(void) {
}



void sub_0202D274(void) {
    // ldr r3, _0202D27C ; =MI_CpuFill8
    // mov r1, #0
    // ldr r2, _0202D280 ; =0x00000B3C
    // bx r3
    // _0202D27C: .word MI_CpuFill8
    // _0202D280: .word 0x00000B3C
    // TODO: decompile
}



u32 sub_0202D284(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0202D296: ; jump table
    // ldrb r0, [r0]
    // add r0, #8
    MI_CpuCopy8(*((u16*)(*((u16*)(*((u8*)(*((u8*)(((r0 << 0x1b) >> 0x1d) + 2)) + 3)) + 4)) + 6)), r2, 4);
    // add r0, #0x2c
    MI_CpuCopy8(0, r2, 0x10);
    // ldrb r0, [r0]
    // add r0, #0xc
    MI_CpuCopy8(((0 << 0x1f) >> 0x1f), r2, 0x1c);
    // ldrb r0, [r0]
}



void sub_0202D308(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0202D31C: ; jump table
    // ldrb r1, [r3]
    // bic r1, r0
    // ldrb r0, [r2]
    // orr r0, r1
    // strb r0, [r3]
    // ldrb r0, [r2]
    *((u8*)(r0 + 2)) = ((0x1c << 0x1d) >> 0x1b);
    // ldrb r0, [r2]
    *((u8*)(r0 + 3)) = ((0x1c << 0x1d) >> 0x1b);
    // ldrh r0, [r2]
    *((u16*)(r0 + 4)) = ((0x1c << 0x1d) >> 0x1b);
    // ldrh r0, [r2]
    *((u16*)(r0 + 6)) = ((0x1c << 0x1d) >> 0x1b);
    // add r3, #8
    MI_CpuCopy8(r2, r0, 4, r0);
    // add r3, #0x2c
    MI_CpuCopy8(r2, r3, 0x10);
    // ldrb r4, [r3]
    // ldrb r1, [r2]
    // bic r4, r0
    // and r0, r1
    // orr r0, r4
    // strb r0, [r3]
    // add r3, #0xc
    MI_CpuCopy8(r2, r3, 0x1c);
    *((u32*)(r3 + 0x28)) = *((u32*)r2);
    // ldrb r1, [r3]
    // bic r1, r0
    // ldrb r0, [r2]
    // orr r0, r1
    // strb r0, [r3]
}



void sub_0202D3B0(void) {
    // push {r3, r4}
    // ldrb r4, [r0, #3]
    // add r1, r4, r1
    // cmp r1, #0xff
    // bge _0202D3BC
    // strb r1, [r0, #3]
    // ldrh r1, [r0, #4]
    // add r2, r1, r2
    // ldr r1, _0202D3D8 ; =0x0000FFFF
    // cmp r2, r1
    // bge _0202D3C8
    // strh r2, [r0, #4]
    // ldrh r1, [r0, #6]
    // add r2, r1, r3
    // ldr r1, _0202D3D8 ; =0x0000FFFF
    // cmp r2, r1
    // bge _0202D3D4
    // strh r2, [r0, #6]
    // pop {r3, r4}
    // bx lr
    // _0202D3D8: .word 0x0000FFFF
    // TODO: decompile
}



u32 sub_0202D3DC(void) {
    // ldrb r0, [r0]
}



void sub_0202D3E4(void) {
    // ldrb r3, [r0]
    // bic r3, r2
    // orr r1, r3
    // strb r1, [r0]
}



void FrontierData_BattlePointAction(void) {
    // cmp r2, #6
    // bhi _0202D446
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0202D408: ; jump table
    // ldr r2, _0202D44C ; =0x0000270F
    // cmp r1, r2
    // bls _0202D420
    // strh r2, [r0]
    // b _0202D446
    // strh r1, [r0]
    // b _0202D446
    // ldrh r2, [r0]
    // add r2, r2, r1
    // ldr r1, _0202D44C ; =0x0000270F
    // cmp r2, r1
    // ble _0202D432
    // strh r1, [r0]
    // b _0202D446
    // strh r2, [r0]
    // b _0202D446
    // ldrh r2, [r0]
    // cmp r2, r1
    // bhs _0202D442
    // mov r1, #0
    // strh r1, [r0]
    // b _0202D446
    // sub r1, r2, r1
    // strh r1, [r0]
    // ldrh r0, [r0]
    // bx lr
    // nop
    // _0202D44C: .word 0x0000270F
    // TODO: decompile
}



u32 sub_0202D450(void) {
    *((u8*)(r0 + 2)) = 0;
    // bic r2, r1
    *((u16*)(r0 + 8)) = *((u16*)(r0 + 8));
    *((u8*)(r0 + 2)) = (*((u8*)(r0 + 2)) + 1);
    *((u8*)(r0 + 2)) = 1;
    // orr r1, r2
    *((u16*)(r0 + 8)) = 0x10;
}



u32 sub_0202D488(void) {
    *((u8*)(r0 + 3)) = 1;
    *((u8*)(r0 + 3)) = (*((u8*)(r0 + 3)) + 1);
    *((u8*)(r0 + 3)) = (*((u8*)(r0 + 3)) - 1);
}



void sub_0202D4B8(void) {
    // add r3, #0xc0
    MI_CpuCopy8(r2, r0, 0xa8, r0);
    // add r3, #0x18
    MI_CpuCopy8(r2, r3, 0xa8);
}



void sub_0202D4DC(void) {
    // add r0, #0xc0
    MI_CpuCopy8(r2, 0xa8);
    // add r0, #0x18
    MI_CpuCopy8(r2, 0xa8);
}



void sub_0202D4FC(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldrb r0, [r1, #2]
    // mov r2, #0xfa
    // lsl r2, r2, #2
    // sub r0, r0, #1
    // add r3, r0, #0
    // mul r3, r2
    // lsl r0, r3, #0x10
    // lsr r4, r0, #0x10
    // ldrh r3, [r1, #4]
    // mov r0, #0xa
    // ldrb r5, [r1, #3]
    // mul r0, r3
    // mov r3, #0x14
    // mul r3, r5
    // lsl r0, r0, #0x10
    // lsl r3, r3, #0x10
    // lsr r0, r0, #0x10
    // lsr r3, r3, #0x10
    // add r3, r0, r3
    // add r0, r2, #0
    // sub r0, #0x32
    // cmp r3, r0
    // ble _0202D532
    // mov r5, #0
    // b _0202D53A
    // sub r2, #0x32
    // sub r0, r2, r3
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldrh r1, [r1, #6]
    // ldr r0, _0202D560 ; =0x000003CA
    // cmp r1, r0
    // bls _0202D546
    // mov r1, #0
    // b _0202D554
    // add r0, #0x1e
    // sub r0, r0, r1
    // mov r1, #0x1e
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // add r0, r4, r5
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // strh r0, [r6, #0x16]
    // pop {r4, r5, r6, pc}
    // _0202D560: .word 0x000003CA
    // TODO: decompile
}



void sub_0202D564(void) {
    // ldrh r0, [r0, #0x16]
    // bx lr
    // TODO: decompile
}



void sub_0202D568(void) {
}



void sub_0202D57C(void) {
    // push {r4, r5}
    // cmp r1, #5
    // bne _0202D588
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // cmp r1, #6
    // bne _0202D58E
    // mov r1, #5
    // cmp r2, #2
    // beq _0202D598
    // cmp r2, #3
    // beq _0202D5A2
    // b _0202D5B4
    // lsl r2, r1, #1
    // mov r3, #0
    // add r2, r0, r2
    // strh r3, [r2, #0xa]
    // b _0202D5B4
    // add r5, r0, #0
    // add r5, #0xa
    // lsl r4, r1, #1
    // ldrh r3, [r5, r4]
    // ldr r2, _0202D5C0 ; =0x0000FFFE
    // cmp r3, r2
    // bhs _0202D5B4
    // add r2, r3, #1
    // strh r2, [r5, r4]
    // lsl r1, r1, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #0xa]
    // pop {r4, r5}
    // bx lr
    // nop
    // _0202D5C0: .word 0x0000FFFE
    // TODO: decompile
}



u32 sub_0202D5C4(void) {
    // add r0, #0xa
    // strh r2, [r0, r1]
    // ldrh r0, [r0, r1]
}



void sub_0202D5DC(void) {
    // push {r4, lr}
    // mov r3, #1
    // cmp r1, #0x10
    // blo _0202D5EC
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, pc}
    // mov r4, #0
    // cmp r1, #0
    // bls _0202D600
    // add r4, r4, #1
    // lsl r4, r4, #0x10
    // lsl r3, r3, #0x11
    // lsr r4, r4, #0x10
    // lsr r3, r3, #0x10
    // cmp r4, r1
    // blo _0202D5F2
    // cmp r2, #0
    // beq _0202D624
    // cmp r2, #1
    // beq _0202D61C
    // cmp r2, #2
    // bne _0202D630
    // ldr r1, _0202D634 ; =0x0000FFFF
    // eor r1, r3
    // lsl r1, r1, #0x10
    // lsr r2, r1, #0x10
    // ldrh r1, [r0, #8]
    // and r1, r2
    // strh r1, [r0, #8]
    // b _0202D630
    // ldrh r1, [r0, #8]
    // orr r1, r3
    // strh r1, [r0, #8]
    // b _0202D630
    // ldrh r0, [r0, #8]
    // add r2, r0, #0
    // asr r2, r1
    // mov r0, #1
    // and r0, r2
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0202D634: .word 0x0000FFFF
    // TODO: decompile
}



void sub_0202D638(void) {
}



void sub_0202D63C(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}



void sub_0202D640(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl Save_Frontier_GetStatic
    // ldr r1, _0202D65C ; =0x00000ABC
    // add r1, r0, r1
    // lsl r0, r5, #3
    // add r0, r1, r0
    // add r1, r4, #0
    // bl MailMsg_Copy
    // pop {r3, r4, r5, pc}
    // nop
    // _0202D65C: .word 0x00000ABC
    // TODO: decompile
}



void sub_0202D660(void) {
}



void sub_0202D678(void) {
    // mul r1, r2
    // add r1, r5, r1
    // sub r5, r5, r6
    // ror r5, r2
    // add r2, r6, r5
    // lsl r3, r2
    // ldrb r1, [r3, r2]
    // orr r1, r5
    // strb r1, [r3, r2]
    // orr r3, r5
    // orr r1, r3
    // orr r1, r2
    // str r1, [r0]
}



void sub_0202D6DC(void) {
}



void sub_0202D6F8(void) {
    // ldr r3, [r0]
    // ldr r2, [r1]
    // cmp r3, r2
    // bls _0202D704
    // mov r0, #1
    // bx lr
    // ldr r3, [r0, #4]
    // ldr r2, [r1, #4]
    // cmp r3, r2
    // bls _0202D710
    // mov r0, #1
    // bx lr
    // ldr r2, [r0, #8]
    // ldr r0, [r1, #8]
    // cmp r2, r0
    // bls _0202D71C
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void sub_0202D720(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0
    sub_0202D6F8(r3, (((*((u32*)r0) >> 8) << 0x18) >> 0x18));
    sub_0202D6DC(r5);
    // mul r0, r1
    // add r0, r2, r0
    // add r0, r5, r0
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // lsl r2, r1
    // tst r0, r1
}



u32 sub_0202D7B0(void) {
    // add r0, #0xfe
    // ldrb r0, [r0]
}



u32 sub_0202D7B8(void) {
    // add r0, #0xff
    // ldrb r0, [r0]
}



void sub_0202D7C0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x41
    // add r4, r2, #0
    // lsl r1, r1, #2
    // ldr r2, _0202D7E8 ; =0x0000063C
    // add r1, r5, r1
    // add r6, r3, #0
    // bl MI_CpuCopy8
    // ldr r0, _0202D7EC ; =0x00000101
    // strb r4, [r5, r0]
    // sub r0, r0, #1
    // strb r6, [r5, r0]
    // mov r0, #1
    // add r5, #0xfe
    // strb r0, [r5]
    // pop {r4, r5, r6, pc}
    // nop
    // _0202D7E8: .word 0x0000063C
    // _0202D7EC: .word 0x00000101
    // TODO: decompile
}



void sub_0202D7F0(void) {
    // ldr r2, _0202D800 ; =0x00000101
    // ldrb r3, [r0, r2]
    // sub r2, r2, #1
    // strb r3, [r1]
    // ldrb r0, [r0, r2]
    // strb r0, [r1, #1]
    // bx lr
    // nop
    // _0202D800: .word 0x00000101
    // TODO: decompile
}



void sub_0202D804(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r1, #0x41
    // lsl r1, r1, #2
    // add r5, r0, r1
    // mov r0, #0xe4
    // add r4, r2, #0
    // mul r4, r0
    // ldr r0, _0202D8A0 ; =0x00002710
    // add r7, r6, #0
    // str r0, [r6]
    // add r0, r5, r4
    // add r0, #0xc9
    // ldrb r0, [r0]
    // add r7, #0x30
    // strh r0, [r6, #4]
    // add r0, r5, r4
    // add r0, #0xc8
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _0202D85A
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0x1c
    // mov r3, #0xb
    // bl NewMsgDataFromNarc
    // add r1, r5, r4
    // add r1, #0xc8
    // ldrb r1, [r1]
    // add r2, r6, #0
    // str r0, [sp]
    // lsl r1, r1, #0x1e
    // lsr r1, r1, #0x1f
    // add r1, #0x21
    // add r2, #8
    // bl ReadMsgDataIntoU16Array
    // ldr r0, [sp]
    // bl DestroyMsgData
    // b _0202D868
    // add r0, r5, r4
    // add r1, r6, #0
    // add r0, #0xa8
    // add r1, #8
    // mov r2, #0x10
    // bl MI_CpuCopy8
    // add r0, r5, r4
    // add r1, r6, #0
    // add r0, #0xca
    // add r1, #0x18
    // mov r2, #8
    // bl MI_CpuCopy8
    // add r0, r5, r4
    // add r1, r6, #0
    // add r0, #0xd2
    // add r1, #0x20
    // mov r2, #8
    // bl MI_CpuCopy8
    // add r0, r5, r4
    // add r6, #0x28
    // add r0, #0xda
    // add r1, r6, #0
    // mov r2, #8
    // bl MI_CpuCopy8
    // add r0, r5, r4
    // add r1, r7, #0
    // mov r2, #0xa8
    // bl MI_CpuCopy8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0202D8A0: .word 0x00002710
    // TODO: decompile
}



void sub_0202D8A4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x1d
    // add r4, r2, #0
    // lsl r1, r1, #6
    // mov r2, #0xff
    // add r1, r5, r1
    // lsl r2, r2, #2
    // add r6, r3, #0
    // bl MI_CpuCopy8
    // ldr r0, _0202D8CC ; =0x00000103
    // strb r4, [r5, r0]
    // sub r0, r0, #1
    // strb r6, [r5, r0]
    // mov r0, #1
    // add r5, #0xff
    // strb r0, [r5]
    // pop {r4, r5, r6, pc}
    // _0202D8CC: .word 0x00000103
    // TODO: decompile
}



void sub_0202D8D0(void) {
    // ldr r2, _0202D8E0 ; =0x00000103
    // ldrb r3, [r0, r2]
    // sub r2, r2, #1
    // strb r3, [r1]
    // ldrb r0, [r0, r2]
    // strb r0, [r1, #1]
    // bx lr
    // nop
    // _0202D8E0: .word 0x00000103
    // TODO: decompile
}



void sub_0202D8E4(void) {
    Heap_Alloc(r1, (0xff << 2));
    // add r0, r5, r0
    MI_CpuCopy8((0x1d << 6), r0, (0xff << 2));
}



void sub_0202D908(void) {
}



void Save_FrontierData_Get(void) {
}



void sub_0202D928(void) {
}


