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
    // add r0, #8
    // add r0, #0x2c
    // add r0, #0xc
}




void sub_0202D308(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0202D31C: ; jump table
    // strb r0, [r3]
    // add r3, #8
    // add r3, #0x2c
    // and r0, r1
    // strb r0, [r3]
    // add r3, #0xc
    // strb r0, [r3]
}




void sub_0202D3B0(void) {
    // add r1, r4, r1
    *((u8*)(r0 + 3)) = r1;
    // add r2, r1, r2
    *((u16*)(r0 + 4)) = r2;
    // add r2, r1, r3
    *((u16*)(r0 + 6)) = r2;
}




u32 sub_0202D3DC(void) {
    // ldrb r0, [r0]
}




void sub_0202D3E4(void) {
    // strb r1, [r0]
}




void FrontierData_BattlePointAction(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0202D408: ; jump table
    // strh r2, [r0]
    // strh r1, [r0]
    // add r2, r2, r1
    // strh r1, [r0]
    // strh r2, [r0]
    // strh r1, [r0]
    // sub r1, r2, r1
    // strh r1, [r0]
}




u32 sub_0202D450(void) {
    // bic r2, r1
    // orr r1, r2
}




u32 sub_0202D488(void) {
}




void sub_0202D4B8(void) {
    // add r3, #0xc0
    // add r3, #0x18
}




void sub_0202D4DC(void) {
    // add r0, #0xc0
    // add r0, #0x18
}




void sub_0202D4FC(void) {
    // add r3, r0, r3
    // sub r0, #0x32
    // sub r2, #0x32
    // sub r0, r2, r3
    // add r0, #0x1e
    // sub r0, r0, r1
    _s32_div_f(0x000003CA, 0x1e, (0xfa << 2), (((0x14 * *((u8*)(r1 + 3))) << 0x10) >> 0x10));
    // add r0, r4, r5
    // add r0, r1, r0
    *((u16*)(r6 + 0x16)) = (((r0 << 0x10) << 0x10) >> 0x10);
}




void sub_0202D564(void) {
    // ldrh r0, [r0, #0x16]
    // bx lr
    // TODO: decompile
}




void sub_0202D568(void) {
}




u32 sub_0202D57C(void) {
    // add r2, r0, r2
    *((u16*)((5 << 1) + 0xa)) = 0;
    // add r5, #0xa
    // strh r2, [r5, r4]
    // add r0, r0, r1
}




u32 sub_0202D5C4(void) {
    // add r0, #0xa
    // strh r2, [r0, r1]
}




u32 sub_0202D5DC(void) {
    GF_AssertFail(1);
    // eor r1, r3
    // and r1, r2
    *((u16*)(0 + 8)) = *((u16*)(0 + 8));
    *((u16*)(0 + 8)) = (*((u16*)(0 + 8)) | ((r3 << 0x11) >> 0x10));
    // asr r2, r1
    // and r0, r2
}




void sub_0202D638(void) {
}




void sub_0202D63C(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}




void sub_0202D640(void) {
    Save_Frontier_GetStatic();
    // add r1, r0, r1
    // add r0, r1, r0
    MailMsg_Copy((r5 << 3), r4);
}




void sub_0202D660(void) {
}




void sub_0202D678(void) {
    // add r1, r5, r1
    // sub r5, r5, r6
    // ror r5, r2
    // add r2, r6, r5
    // lsl r3, r2
    // strb r1, [r3, r2]
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
}




u32 sub_0202D7B8(void) {
    // add r0, #0xff
}




void sub_0202D7C0(void) {
    // add r1, r5, r1
    MI_CpuCopy8(r1, (0x41 << 2), 0x0000063C);
    // strb r4, [r5, r0]
    // strb r6, [r5, r0]
    // add r5, #0xfe
    // strb r0, [r5]
}




void sub_0202D7F0(void) {
    // strb r3, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r0 + (0x00000101 - 1)));
}




void sub_0202D804(void) {
    // add r5, r0, r1
    // str r0, [r6]
    // add r0, r5, r4
    // add r0, #0xc9
    // add r7, #0x30
    *((u16*)(r1 + 4)) = *((u8*)0x00002710);
    // add r0, r5, r4
    // add r0, #0xc8
    NewMsgDataFromNarc(0, 0x1b, 0x1c, 0xb);
    // add r1, r5, r4
    // add r1, #0xc8
    // str r0, [sp]
    // add r1, #0x21
    // add r2, #8
    ReadMsgDataIntoU16Array(((*((u8*)r1) << 0x1e) >> 0x1f), r6);
    // ldr r0, [sp]
    DestroyMsgData();
    // add r0, r5, r4
    // add r0, #0xa8
    // add r1, #8
    MI_CpuCopy8(r6, 0x10);
    // add r0, r5, r4
    // add r0, #0xca
    // add r1, #0x18
    MI_CpuCopy8(r6, 8);
    // add r0, r5, r4
    // add r0, #0xd2
    // add r1, #0x20
    MI_CpuCopy8(r6, 8);
    // add r0, r5, r4
    // add r6, #0x28
    // add r0, #0xda
    MI_CpuCopy8(r6, 8);
    // add r0, r5, r4
    MI_CpuCopy8(r7, 0xa8);
}




void sub_0202D8A4(void) {
    // add r1, r5, r1
    MI_CpuCopy8(r1, (0x1d << 6), (0xff << 2));
    // strb r4, [r5, r0]
    // strb r6, [r5, r0]
    // add r5, #0xff
    // strb r0, [r5]
}




void sub_0202D8D0(void) {
    // strb r3, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r0 + (0x00000103 - 1)));
}




void sub_0202D8E4(void) {
    // add r0, r5, r0
}




void sub_0202D908(void) {
}




void Save_FrontierData_Get(void) {
}




void sub_0202D928(void) {
}



