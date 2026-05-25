/* Decompiled from asm/overlay_112.s */
#include "global.h"

void ov112_021E5900(void) {
    // tst r3, r2
    // add r5, r5, r4
    // add r5, r5, r3
    // add r1, r1, r0
    // add r0, r1, r0
}





void ov112_021E5938(void) {
    *((u32*)(_021FF9E0 + 0x18)) = 1;
    *((u32*)(_021FF9E0 + 0x10)) = (*((u32*)(_021FF9E0 + 0x10)) + 1);
}





void ov112_021E594C(void) {
    // strb r1, [r0]
    *((u32*)(_021FF9E0 + 0x28)) = 0;
    *((u32*)(_021FF9E0 + 0x2c)) = 0;
    *((u32*)(_021FF9E0 + 0x18)) = 0;
    *((u32*)(_021FF9E0 + 0x24)) = 0;
    *((u32*)(_021FF9E0 + 8)) = 0;
    *((u32*)(_021FF9E0 + 0x10)) = 0;
}





void ov112_021E5964(void) {
    CARD_SpiWaitInit();
    CARD_SetSpiWriteWaitCycles(0x32);
    CARD_SetSpiReadWaitCycles(0x32);
    CARD_SpiWaitReadRange(ov112_021FFA18);
    ov112_021E594C();
    // strb r1, [r0]
    *((u8*)(_021FF500 + 1)) = 0xff;
    OS_GetTick(_021FF500, 0xff);
    *((u32*)(_021FF9E0 + 0x20)) = r0;
    *((u32*)(_021FF9E0 + 4)) = r0;
    *((u32*)(_021FF9E0 + 0xc)) = 0;
    *((u32*)(_021FF9E0 + 0x1c)) = 0;
}





void ov112_021E59A8(void) {
    // ldr r0, _021E59B0 ; =_021FF9E0
    // ldr r0, [r0, #0x2c]
    // bx lr
    // nop
    // _021E59B0: .word _021FF9E0
    // TODO: decompile
}





void ov112_021E59B4(void) {
    // strb r2, [r4]
    *((u8*)(ov112_021FFA18 + 1)) = r3;
    // ldr r1, [sp, #0x10]
    *((u32*)(ov112_021FFA18 + 4)) = r1;
    *((u8*)(ov112_021FFA18 + 2)) = 0;
    *((u8*)(ov112_021FFA18 + 3)) = 0;
    // strb r2, [r3]
    // add r5, #8
    ov112_021E5900(ov112_021FFA18, ((r1 << 0x18) >> 0x18), *((u8*)r0), (ov112_021FFA20 + 1));
    *((u8*)(r4 + 2)) = r0;
    // asr r0, r0, #8
    *((u8*)(r4 + 3)) = r0;
    // eor r2, r0
    // strb r2, [r3, r1]
    CARD_SpiWaitWriteRange(ov112_021FFA18, r5, *((u8*)(ov112_021FFA18 + 0)), ov112_021FFA18);
}





void ov112_021E5A14(void) {
    // str r0, [sp]
    ov112_021E59B4(0, 0, 0xf4, *((u8*)_021FF500));
    // blx r1
    ov112_021E594C(r4, *((u32*)(_021FF9E0 + 0x14)));
}





void ov112_021E5A5C(void) {
}





void ov112_021E5A68(void) {
}





void ov112_021E5A80(void) {
    // bx lr
    // TODO: decompile
}





void ov112_021E5A84(void) {
    // cmp r0, #1
    // bne _021E5AA4
    // ldr r0, _021E5AC8 ; =_021FF9E0
    // ldr r0, [r0, #0x2c]
    // cmp r0, #0
    // beq _021E5A94
    // mov r0, #1
    // bx lr
    // ldr r0, _021E5ACC ; =ov112_021FFA18
    // ldrb r0, [r0]
    // cmp r0, #0xfc
    // beq _021E5AA0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // cmp r0, #2
    // beq _021E5AAC
    // cmp r0, #3
    // bne _021E5AC4
    // mov r1, #0
    // b _021E5AB2
    // add r1, r1, #1
    // cmp r1, #4
    // blo _021E5AB0
    // mov r1, #0
    // b _021E5ABC
    // add r1, r1, #1
    // cmp r1, r0
    // blo _021E5ABA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _021E5AC8: .word _021FF9E0
    // _021E5ACC: .word ov112_021FFA18
    // TODO: decompile
}





void ov112_021E5AD0(void) {
    OS_GetTick(0, *((u32*)(_021FF9E0 + 0x2c)));
    // sub r3, r0, r3
    // sbc r1, r2
    _ll_udiv((*((u32*)(_021FF9E0 + 0x30)) << 6), ((r1 << 6) | (*((u32*)(_021FF9E0 + 0x30)) >> 0x1a)), 0x000082EA, 0);
    // sub r0, r0, r2
    // sbc r1, r3
    ov112_021E5A14(1, 0x64, 0);
    *((u32*)(_021FF9E0 + 0x24)) = 0;
}





void ov112_021E5B28(void) {
    // add r0, r1, r0
    *((u8*)(ov112_021FFA18 + 2)) = 0;
    *((u8*)(ov112_021FFA18 + 3)) = 0;
    ov112_021E5900(ov112_021FFA18, r0);
    *((u8*)(r6 + 2)) = r4;
    // asr r1, r4, #8
    *((u8*)(r6 + 3)) = r1;
    // strb r1, [r0]
    ov112_021E5938((0 + 1), 0);
}





void ov112_021E5B98(void) {
    CARD_SpiWaitReadRange(ov112_021FFA18);
    ov112_021E5A84();
    ov112_021E5AD0();
    ov112_021E5B28(r4);
    OS_GetTick(0);
    *((u32*)(_021FF9E0 + 0x30)) = r0;
    *((u32*)(_021FF9E0 + 0x34)) = r1;
    // sub r0, #0xf6
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E5C0C: ; jump table
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E5C2E: ; jump table
    *((u32*)(_021FF9E0 + 0x28)) = 2;
    // str r0, [sp]
    ov112_021E59B4(0, 0, 0xfa, *((u8*)_021FF500));
    *((u32*)(_021FF9E0 + 0x24)) = 1;
    *((u32*)(_021FF9E0 + 0x28)) = 2;
    *((u32*)(_021FF9E0 + 8)) = 0;
    // str r0, [sp]
    ov112_021E59B4(0, 0, 0xfa, *((u8*)_021FF500));
    ov112_021E5938(*((u32*)(_021FF9E0 + 0x2c)));
    ov112_021E5A80();
    *((u32*)(_021FF9E0 + 0x28)) = 3;
    *((u32*)(_021FF9E0 + 8)) = 1;
    *((u8*)(_021FF500 + 1)) = *((u8*)(r1 + 1));
    // eor r2, r1
    *((u32*)(_021FF9E0 + 4)) = *((u32*)(r1 + 4));
    // str r1, [sp]
    ov112_021E59B4(0, 0, 0xf8, *((u8*)_021FF500));
    *((u32*)(_021FF9E0 + 0x2c)) = 1;
    *((u32*)(_021FF9E0 + 0x18)) = 0;
    *((u32*)(_021FF9E0 + 0x24)) = 0;
    *((u32*)(_021FF9E0 + 0x28)) = 4;
    *((u8*)(_021FF500 + 1)) = *((u8*)(0 + 1));
    // eor r1, r2
    *((u32*)(_021FF9E0 + 4)) = *((u32*)(_021FF9E0 + 0x20));
    *((u32*)(_021FF9E0 + 0x2c)) = 1;
    *((u32*)(_021FF9E0 + 0x18)) = 0;
    *((u32*)(_021FF9E0 + 0x24)) = 0;
    // blx r2
    ov112_021E5938(*((u8*)(0 + 1)), 0, *((u32*)(_021FF9E0 + 0xc)), _021FF9E0);
    // sub r4, #8
    // blx r4
}





void ov112_021E5D38(void) {
    *((u32*)(_021FF9E0 + 0xc)) = r0;
}





void ov112_021E5D44(void) {
    *((u32*)(_021FF9E0 + 0x1c)) = r0;
}





void ov112_021E5D50(void) {
    *((u32*)(_021FF9E0 + 0x14)) = r0;
}





void ov112_021E5D5C(void) {
    // strb r0, [r1]
}





void ov112_021E5D68(void) {
}





void ov112_021E5D8C(void) {
    // str r2, [sp]
    // ldr r1, [sp]
    // add r1, #0x7f
    // str r0, [sp, #8]
    // asr r0, r1, #6
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r4, [sp]
    // strb r0, [r5]
    // strb r0, [r5]
    // strb r0, [r5]
    // ldr r0, [sp]
    // add r6, #0x80
    // sub r0, r0, r4
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r7, #0x80
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
}





void ov112_021E5E18(void) {
    *((u32*)(ov112_021FFAA4 + 0x14)) = r0;
}





void ov112_021E5E28(void) {
    // add r5, #0x10
    OS_GetOwnerRtcOffset(ov112_021FFAA4);
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r5 + 4)) = r1;
    // add r5, #8
    OS_GetLowEntropyData(r5);
}





void ov112_021E5E48(void) {
    // add r0, sp, #0x10
    RTC_GetTime();
    // add r0, sp, #0
    RTC_GetDate();
    // add r0, sp, #0
    // add r1, sp, #0x10
    RTC_ConvertDateTimeToSecond();
    // mvn r2, r2
    // sub r2, r2, r0
    // sbc r3, r1
    // mvn r0, r0
    // sub r2, r0, r2
    // sbc r1, r3
    // and r1, r4
    // and r0, r4
    // and r2, r3
    *((u32*)(*((u32*)(ov112_021FFAA4 + 0x20)) + 0x60)) = ((0 << 0x18) | ((((0xff << 0x18) >> 0x10) | (((0 >> 0x18) << 0x18) >> 0x18)) | ((0xff << 0x18) >> 8)));
}





void ov112_021E5EB8(void) {
    *((u32*)(ov112_021FFAA4 + 0x20)) = r0;
    *((u32*)(ov112_021FFAA4 + 0x24)) = r1;
}





void ov112_021E5EC4(void) {
    *((u32*)(ov112_021FFB24 + 0x20)) = r0;
    *((u32*)(ov112_021FFB24 + 0x24)) = r0;
    *((u32*)(ov112_021FFB24 + 0x28)) = r1;
    *((u32*)(ov112_021FFB24 + 0x2c)) = r1;
    *((u16*)(ov112_021FFB24 + 0x30)) = r2;
    // add r2, #0x7f
    *((u16*)(ov112_021FFB24 + 0x32)) = *((u16*)(ov112_021FFB24 + 0x30));
    *((u16*)(ov112_021FFB24 + 0x36)) = 0;
    // asr r0, r2, #6
    // add r0, r2, r0
    // asr r0, r0, #7
    *((u16*)(ov112_021FFB24 + 0x34)) = (0 >> 0x19);
}





void ov112_021E5EEC(void) {
    // and r1, r0
    // sub r0, r0, r1
    // add r0, sp, #0
    // strb r4, [r0]
    // add r1, sp, #0
    // add r1, #1
    MI_CpuCopy8(*((u32*)(ov112_021FFB24 + 0x20)), ((*((u32*)(ov112_021FFB24 + 0x28)) << 0x10) >> 0x10), ((0x80 << 0x10) >> 0x10));
    // asr r3, r4, #8
    // add r0, sp, #0
    ov112_021E5A68((((r5 + 1) << 0x18) >> 0x18), 0xa, ((r3 << 0x18) >> 0x18));
    // and r3, r2
    // asr r3, r4, #8
    ov112_021E5A68(*((u32*)(ov112_021FFB24 + 0x20)), ((r5 << 0x18) >> 0x18), (((2 | r4) << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18));
    OS_Halt(*((u16*)(ov112_021FFB24 + 0x36)), *((u32*)r0));
    // and r3, r1
    // asr r3, r4, #8
    ov112_021E5A68(*((u32*)(ov112_021FFB24 + 0x20)), 0x80, (((2 | r4) << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18));
    // and r2, r4
    // asr r3, r4, #8
    ov112_021E5A68(*((u32*)(ov112_021FFB24 + 0x20)), r6, ((0x80 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r1, r1, r5
    *((u32*)(ov112_021FFB24 + 0x20)) = *((u32*)(ov112_021FFB24 + 0x20));
    // add r1, r1, r5
    *((u32*)(ov112_021FFB24 + 0x28)) = *((u32*)(ov112_021FFB24 + 0x28));
    // sub r1, r1, r5
    *((u16*)(ov112_021FFB24 + 0x30)) = *((u16*)(ov112_021FFB24 + 0x30));
    *((u16*)(ov112_021FFB24 + 0x36)) = (*((u16*)(ov112_021FFB24 + 0x36)) + 1);
    *((u16*)(ov112_021FFB24 + 0x3a)) = (*((u16*)(ov112_021FFB24 + 0x3a)) + 1);
}





void ov112_021E6004(void) {
    OS_GetTick();
    // sub r3, r0, r3
    // sbc r1, r2
    _ll_udiv((*((u32*)(ov112_021FFAA4 + 0x3c)) << 6), ((r1 << 6) | (*((u32*)(ov112_021FFAA4 + 0x3c)) >> 0x1a)), 0x000082EA, 0);
    _f_ulltof();
    _fdiv(0x447A0000);
    // sub r1, #0xb4
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E6066: ; jump table
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x3c;
    ov112_021E5EC4(*((u32*)(ov112_021FFAA4 + 0x58)), (0xd7 << 8), 0x000028BE);
    ov112_021E5EC4(*((u32*)(r1 + 0x2c)), (0xd7 << 8));
    ov112_021E5EEC();
    *((u8*)(r0 + 0x1d)) = 0x3e;
    // add r0, #0x10
    // add r1, #8
    MI_CpuCopy8(*((u32*)(ov112_021FFAA4 + 0x24)), *((u32*)(ov112_021FFAA4 + 0x30)), 0x28);
    ov112_021E5EC4(*((u32*)(ov112_021FFAA4 + 0x30)), 0x0000D480, (0x89 << 2));
    ov112_021E5EEC();
    *((u8*)(r0 + 0x1d)) = 0x48;
    ov112_021E5EC4(0x0000CE80, *((u32*)(ov112_021FFAA4 + 0x38)), 0x00000D4C);
    ov112_021E6134();
    ov112_021E5A68(0, 0, 0x24, 1);
    ov112_021E5A68(0, 0, 0x24, 1);
    ov112_021E5E18(0xc);
    ov112_021E5A5C();
}





void ov112_021E6134(void) {
    // asr r1, r2, #8
    // add r0, sp, #0
    // strb r1, [r0]
    *((u8*)((*((u32*)(ov112_021FFB24 + 0x20)) << 0x10) + 1)) = ((*((u32*)(ov112_021FFB24 + 0x20)) << 0x10) >> 0x10);
    *((u8*)((*((u32*)(ov112_021FFB24 + 0x20)) << 0x10) + 2)) = 0x80;
    // add r0, sp, #0
    ov112_021E5A68((*((u32*)(ov112_021FFB24 + 0x20)) << 0x10), 3, 0xc, 2);
}





void ov112_021E6164(void) {
    OS_GetTick();
    // sub r3, r0, r3
    // sbc r1, r2
    _ll_udiv((*((u32*)(ov112_021FFAA4 + 0x3c)) << 6), ((r1 << 6) | (*((u32*)(ov112_021FFAA4 + 0x3c)) >> 0x1a)), 0x000082EA, 0);
    _f_ulltof();
    _fdiv(0x447A0000);
    // sub r0, #0x46
    _021E6A50(*((u8*)(ov112_021FFB24 + 0x1d)), ov112_021FFB24);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E61A8: ; jump table
    *((u8*)(r1 + 0x1d)) = 0x48;
    ov112_021E5EC4(0x0000CE80, *((u32*)(ov112_021FFAA4 + 0x38)), 0x00000D4C);
    ov112_021E6134();
    // asr r1, r2, #8
    // and r1, r2
    *((u16*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 0xa)) = ((0xff << 8) | ((r1 << 0x18) >> 0x18));
    // add r3, r0, r5
    // and r7, r1
    // and r2, r1
    // and r0, r1
    *((u32*)(((r1 << 0x18) >> 0x18) + 0x70)) = ((((0xff << 8) | (((*((u32*)(((r1 << 0x18) >> 0x18) + 0x70)) >> 0x18) << 0x18) >> 0x18)) | (*((u32*)(((r1 << 0x18) >> 0x18) + 0x70)) << 8)) | (*((u32*)(((r1 << 0x18) >> 0x18) + 0x70)) << 0x18));
    // and r3, r2
    // and r0, r2
    // and r4, r1
    // str r0, [r5]
    // and r4, r3
    // and r5, r1
    // and r1, r2
    *((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 4)) = (((((0xff << 0x18) >> 0x10) | (((*((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 4)) >> 0x18) << 0x18) >> 0x18)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 4)) << 8)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 4)) << 0x18));
    // add r0, #0x8c
    // and r5, r2
    // and r4, r2
    // and r1, r2
    // str r1, [r0]
    // add r1, #0x78
    // asr r1, r2, #8
    // and r2, r3
    // add r1, #0x78
    // strh r2, [r1]
    // add r1, #0x7a
    // asr r1, r2, #8
    // and r2, r3
    // add r1, #0x7a
    // strh r2, [r1]
    // and r5, r2
    // and r4, r2
    // and r1, r2
    *((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 0x7c)) = ((((0xff << 8) | (((*((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 0x7c)) >> 0x18) << 0x18) >> 0x18)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 0x7c)) << 8)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x38)) + 0x7c)) << 0x18));
    // add r1, #0x80
    // and r3, r1
    // and r2, r1
    // and r4, r7
    // add r1, #0x80
    // add r0, #0x88
    // str r2, [r1]
    // sub r0, #0xb0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E6356: ; jump table
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x4a;
    ov112_021E5EC4((0x2e << 0xa), *((u32*)(ov112_021FFAA4 + 0x34)), 4, (*((u32*)*((u32*)(ov112_021FFAA4 + 0x38))) << 0x18));
    ov112_021E6134();
    *((u8*)(r1 + 0x1d)) = 0x4c;
    // add r1, r2, r1
    ov112_021E5EC4(0x0000DE24, (0x89 << 2), 0x00001568);
    ov112_021E6134();
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x4a;
    ov112_021E5EC4((0x2e << 0xa), *((u32*)(ov112_021FFAA4 + 0x34)), 0x000006C8);
    ov112_021E6134();
    // sub r2, #0xb0
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E63E6: ; jump table
    ov112_021E5A68(0, 0, 0x24, 1);
    *((u8*)(r1 + 0x1d)) = 0x4c;
    // add r1, r2, r1
    ov112_021E5EC4(0x0000DE24, (0x89 << 2), 0x00001568);
    ov112_021E6134();
    ov112_021E5A68(0, 0, 0x9c, 1);
    *((u8*)(r1 + 0x1d)) = 0xb0;
    ov112_021E5EC4((r2 + 4), 0x0000B804, (9 << 6));
    ov112_021E5EEC();
    ov112_021E5A68(0, 0, 0x9c, 1);
    *((u8*)(r1 + 0x1d)) = 0xb2;
    // add r0, r3, r2
    // add r2, #0xb8
    ov112_021E5EC4(0xb2, 0x0000BA44, (0x91 << 2));
    ov112_021E5EEC();
    ov112_021E5A68(0, 0, 0x9c, 1);
    *((u8*)(r1 + 0x1d)) = 0xb4;
    // add r0, r3, r0
    // add r2, #0xd4
    ov112_021E5EC4((0x15 << 6), 0x0000BD40, 0xb4);
    ov112_021E5EEC();
    ov112_021E5A68(0, 0, 0x9c, 1);
    *((u8*)(r1 + 0x1d)) = 0xb6;
    ov112_021E5EC4(*((u32*)(r0 + 0xc)), (0xbf << 8), 0x00000CBC);
    ov112_021E5EEC();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E653A: ; jump table
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    // and r5, r4
    // and r0, r4
    // strb r0, [r3]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E65DA: ; jump table
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb0;
    ov112_021E5EC4((*((u32*)(ov112_021FFAA4 + 0x34)) + 4), 0x0000B804, (9 << 6), *((u32*)(ov112_021FFAA4 + 0x34)));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb2;
    // add r0, r0, r2
    // add r2, #0xb8
    ov112_021E5EC4(*((u32*)(r1 + 0x34)), 0x0000BA44, (0x91 << 2));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb4;
    // add r0, r1, r0
    // add r2, #0xd4
    ov112_021E5EC4((0x15 << 6), 0x0000BD40, 0xb4);
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb6;
    ov112_021E5EC4(*((u32*)(r1 + 0xc)), (0xbf << 8), 0x00000CBC);
    ov112_021E5EEC();
    // tst r1, r3
    ov112_021E5A68(0, 0, 0x9e, 1);
    *((u8*)(ov112_021FFB24 + 0x1d)) = r0;
    ov112_021E5A68(0, 0, 0x24);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E6678: ; jump table
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    // and r5, r3
    // and r0, r3
    // strb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E6718: ; jump table
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb0;
    ov112_021E5EC4((*((u32*)(ov112_021FFAA4 + 0x34)) + 4), 0x0000B804, (9 << 6), (((2 | ((*((u8*)*((u32*)(ov112_021FFAA4 + 0x34))) << 0x1c) >> 0x1c)) << 0x18) >> 0x18));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb2;
    // add r0, r0, r2
    // add r2, #0xb8
    ov112_021E5EC4(*((u32*)(r1 + 0x34)), 0x0000BA44, (0x91 << 2));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb4;
    // add r0, r1, r0
    // add r2, #0xd4
    ov112_021E5EC4((0x15 << 6), 0x0000BD40, 0xb4);
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb6;
    ov112_021E5EC4(*((u32*)(r1 + 0xc)), (0xbf << 8), 0x00000CBC);
    ov112_021E5EEC();
    // tst r1, r3
    ov112_021E5A68(0, 0, 0x9e, 1);
    *((u8*)(ov112_021FFB24 + 0x1d)) = r0;
    ov112_021E5A68(0, 0, 0x24, 1);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E67B8: ; jump table
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    // and r5, r3
    // and r0, r3
    // strb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E6872: ; jump table
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb0;
    ov112_021E5EC4((*((u32*)(ov112_021FFAA4 + 0x34)) + 4), 0x0000B804, (9 << 6), (((4 | ((*((u8*)*((u32*)(ov112_021FFAA4 + 0x34))) << 0x1c) >> 0x1c)) << 0x18) >> 0x18));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb2;
    // add r0, r0, r2
    // add r2, #0xb8
    ov112_021E5EC4(*((u32*)(r1 + 0x34)), 0x0000BA44, (0x91 << 2));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb4;
    // add r0, r1, r0
    // add r2, #0xd4
    ov112_021E5EC4((0x15 << 6), 0x0000BD40, 0xb4);
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb6;
    ov112_021E5EC4(*((u32*)(r1 + 0xc)), (0xbf << 8), 0x00000CBC);
    ov112_021E5EEC();
    // tst r1, r3
    ov112_021E5A68(0, 0, 0x9e, 1);
    *((u8*)(ov112_021FFB24 + 0x1d)) = r0;
    ov112_021E5A68(0, 0, 0x24, 1);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E6912: ; jump table
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    ov112_021E5A68(0, 0, 0x9c, 1);
    // and r5, r3
    // and r0, r3
    // strb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E69B2: ; jump table
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb0;
    ov112_021E5EC4((*((u32*)(ov112_021FFAA4 + 0x34)) + 4), 0x0000B804, (9 << 6), (((8 | ((*((u8*)*((u32*)(ov112_021FFAA4 + 0x34))) << 0x1c) >> 0x1c)) << 0x18) >> 0x18));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb2;
    // add r0, r0, r2
    // add r2, #0xb8
    ov112_021E5EC4(*((u32*)(r1 + 0x34)), 0x0000BA44, (0x91 << 2));
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb4;
    // add r0, r1, r0
    // add r2, #0xd4
    ov112_021E5EC4((0x15 << 6), 0x0000BD40, 0xb4);
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0xb6;
    ov112_021E5EC4(*((u32*)(r1 + 0xc)), (0xbf << 8), 0x00000CBC);
    ov112_021E5EEC();
    // tst r1, r3
    ov112_021E5A68(0, 0, 0x9e, 1);
    *((u8*)(ov112_021FFB24 + 0x1d)) = r0;
    ov112_021E5A68(0, 0, 0x24, 1);
    OS_Halt();
    ov112_021E5A68(0, 0, 0x24, 1);
}





void ov112_021E6A6C(void) {
    *((u32*)(ov112_021FFAA4 + 0x14)) = 0;
    ov112_021E5E18(0xc, ov112_021FFAA4, 0);
    ov112_021E5A5C();
    ov112_021E5E18(0xc);
    ov112_021E5A5C();
    OS_GetTick();
    *((u32*)(ov112_021FFAA4 + 0x3c)) = r0;
    *((u32*)(ov112_021FFAA4 + 0x40)) = r1;
    // sub r1, #0xb0
    // bmi _021E6BCE
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E6AE0: ; jump table
    ov112_021E5E28(*((u8*)(ov112_021FFB24 + 0x1c)), (*((u16*)(*((u8*)(ov112_021FFB24 + 0x1c)) + 6)) << 0x10), ov112_021FFAA4);
    // add r0, #0x10
    MI_CpuCopy8(*((u32*)(ov112_021FFAA4 + 0x20)), ov112_021FFB64, 0x28);
    ov112_021E5A68(ov112_021FFB64, 0x74, *((u8*)(ov112_021FFB24 + 0x1c)), 1);
    ov112_021E5E28();
    ov112_021E5A68(*((u32*)(ov112_021FFAA4 + 0x28)), 8, *((u8*)(ov112_021FFB24 + 0x1c)), 1);
    // add r0, sp, #0
    // strb r1, [r0]
    // asr r1, r2, #8
    *((u8*)(r0 + 1)) = 0x80;
    *((u8*)(r0 + 2)) = *((u16*)r2);
    // add r1, r2, r1
    *((u8*)(r0 + 3)) = *((u8*)(r0 + 2));
    // add r0, sp, #0
    ov112_021E5A68(4, 0xa, 0);
    ov112_021E5E28();
    // add r0, #0x10
    ov112_021E5A68(*((u32*)(ov112_021FFAA4 + 0x20)), 0x28, *((u8*)(ov112_021FFB24 + 0x1c)), 1);
    ov112_021E5E28();
    // add r0, #0x10
    ov112_021E5A68(*((u32*)(ov112_021FFAA4 + 0x20)), 0x28, *((u8*)(ov112_021FFB24 + 0x1d)), 1);
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5E48();
    ov112_021E5A68(0, 0, 0x20, 1);
    *((u32*)(*((u32*)(ov112_021FFAA4 + 0x20)) + 0x60)) = 0;
    ov112_021E5A68(0, 0, 0x20, 1);
}





void ov112_021E6BDC(void) {
    *((u32*)(ov112_021FFB24 + 0x20)) = *((u32*)(ov112_021FFB24 + 0x24));
    *((u32*)(ov112_021FFB24 + 0x28)) = *((u32*)(ov112_021FFB24 + 0x2c));
    *((u16*)(ov112_021FFB24 + 0x30)) = *((u16*)(ov112_021FFB24 + 0x32));
    *((u16*)(ov112_021FFB24 + 0x36)) = 0;
    *((u16*)(ov112_021FFB24 + 0x3a)) = 0;
}





void ov112_021E6BF8(void) {
    // sub r0, #0xb0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E6C34: ; jump table
    // add r0, #0x5b
    ov112_021E5A68(0, 0, 0x36, 1);
    ov112_021E5E18(4);
    ov112_021E5A5C();
    ov112_021E5A68(*((u32*)(ov112_021FFAA4 + 0x20)), 0x68, 0x32, 1);
    // add r0, #0x5b
    ov112_021E5A68(0, 0, 0x44, 1);
    ov112_021E5E18(5);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x44, 1);
    ov112_021E5E18(6);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x44, 1);
    ov112_021E5E18(0xb);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x44, 1);
    ov112_021E5E18(8);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x44, 1);
    ov112_021E5E18(9);
    ov112_021E5A5C();
    // add r1, #0x5d
    // add r1, #0x5d
    ov112_021E5A68(0, 0, 0x44, 1);
    ov112_021E5E18(0xa);
    ov112_021E5A5C();
    ov112_021E5A68(0x68, 0x40, 1);
    // add r0, #0x5b
    ov112_021E5A68(0, 0, 0x56, 1);
    ov112_021E5E18(5);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x56, 1);
    ov112_021E5E18(7);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x56, 1);
    ov112_021E5E18(8);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x56, 1);
    ov112_021E5E18(9);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x56, 1);
    ov112_021E5E18(0xb);
    ov112_021E5A5C();
    // add r1, #0x5d
    // add r1, #0x5d
    ov112_021E5A68(0, 0, 0x56, 1);
    ov112_021E5E18(0xa);
    ov112_021E5A5C();
    ov112_021E5A68(0x68, 0x52, 1);
    // add r0, #0x5b
    ov112_021E5A68(*((u32*)(ov112_021FFAA4 + 0x20)), 0x68, 0x64, 1);
    ov112_021E5E18(5);
    ov112_021E5A5C();
    // add r2, #0x5d
    // add r1, #0x5d
    ov112_021E5A68(0x68, 0x64, 1);
    ov112_021E5E18(0xa);
    ov112_021E5A5C();
    ov112_021E5A68(0x68, 0x60, 1);
    // add r0, #0x5b
    ov112_021E5A68(0, 0, 0xd8, 1);
    ov112_021E5E18(5);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0xd8, 1);
    ov112_021E5E18(8);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0xd8, 1);
    ov112_021E5E18(9);
    ov112_021E5A5C();
    // add r1, #0x5d
    // add r1, #0x5d
    ov112_021E5A68(0, 0, 0xd8, 1);
    ov112_021E5E18(0xa);
    ov112_021E5A5C();
    // sub r2, #0x10
    ov112_021E5A68(0x68, ((r2 << 0x18) >> 0x18), 1);
    ov112_021E5E18(0xc);
    ov112_021E5A5C();
}





void ov112_021E6F60(void) {
    // sub r0, #0xa0
    // bmi _021E7064
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E700A: ; jump table
    MI_CpuCopy8((*((u16*)(r2 + 6)) << 0x10), *((u32*)(ov112_021FFAA4 + 0x24)), 0x68);
    // and r1, r0
    // and r3, r6
    // and r2, r5
    *((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) = ((((((*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) >> 0x18) << 0x18) >> 0x18) | ((0xff << 0x18) >> 0x10)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) << 8)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) << 0x18));
    ov112_021E6BF8(((((((*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) >> 0x18) << 0x18) >> 0x18) | ((0xff << 0x18) >> 0x10)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) << 8)) | (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) << 0x18)), (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) << 8), (*((u32*)(*((u32*)(ov112_021FFAA4 + 0x24)) + 0x64)) << 0x18), ((0xff << 0x18) >> 0x10));
    // sub r0, #0xb0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E70E4: ; jump table
    ov112_021E5A68(0, 0, 0x38, 1);
    ov112_021E5A68(0, 0, 0x4e, 1);
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0x5a, 1);
    ov112_021E5A68(0, 0, 0x66, 1);
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5A68(0, 0, 0xc0, 1);
    ov112_021E5A68(0, 0, 0xc2, 1);
    ov112_021E5A68(0, 0, 0xc4, 1);
    ov112_021E5A68(0, 0, 0xc6, 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E71A8: ; jump table
    ov112_021E5A68(0, 0, 0xd0, 1);
    ov112_021E5A68(0, 0, 0xd2, 1);
    ov112_021E5A68(0, 0, 0xd4, 1);
    ov112_021E5A68(0, 0, 0xd6, 1);
    ov112_021E5A68(0, 0, 1);
    ov112_021E5E18(0xc);
    ov112_021E5A5C();
    ov112_021E5E18(0xc);
    ov112_021E5A5C();
    ov112_021E5E18(3);
    ov112_021E5A5C();
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x3a;
    ov112_021E5EC4(*((u32*)(ov112_021FFAA4 + 0x50)), (0xa << 6), 0x00008C50);
    ov112_021E5EC4(*((u32*)(r1 + 0x10)), (0xa << 6));
    ov112_021E5EEC();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x46;
    ov112_021E5EC4((0x8f << 8), *((u32*)(ov112_021FFAA4 + 8)), 0x2a);
    ov112_021E6134();
    ov112_021E5E18(0xe);
    ov112_021E5A5C();
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x3c;
    ov112_021E5EC4(*((u32*)(ov112_021FFAA4 + 0x58)), (0xd7 << 8), 0x000028BE);
    ov112_021E5EC4(*((u32*)(r1 + 0x2c)), (0xd7 << 8));
    ov112_021E5EEC();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x48;
    ov112_021E5EC4(0x0000CE80, *((u32*)(ov112_021FFAA4 + 0x38)), 0x00000D4C);
    ov112_021E6134();
    ov112_021E5E18(0xe);
    ov112_021E5A5C();
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x48;
    ov112_021E5EC4(0x0000CE80, *((u32*)(ov112_021FFAA4 + 0x38)), 0x00000D4C);
    ov112_021E6134();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E5E18(0xf);
    ov112_021E5A5C();
    ov112_021E6004(*((u16*)(ov112_021FFB24 + 0x30)));
    ov112_021E5EEC();
    MI_CpuCopy8(*((u32*)(ov112_021FFB24 + 0x28)), r4);
    // add r1, r1, r4
    *((u32*)(ov112_021FFB24 + 0x20)) = *((u32*)(ov112_021FFB24 + 0x20));
    // add r1, r1, r4
    *((u32*)(ov112_021FFB24 + 0x28)) = *((u32*)(ov112_021FFB24 + 0x28));
    // sub r1, r1, r4
    *((u16*)(ov112_021FFB24 + 0x30)) = *((u16*)(ov112_021FFB24 + 0x30));
    *((u16*)(ov112_021FFB24 + 0x36)) = (*((u16*)(ov112_021FFB24 + 0x36)) + 1);
    *((u16*)(ov112_021FFB24 + 0x3a)) = (*((u16*)(ov112_021FFB24 + 0x3a)) + 1);
    ov112_021E6164(*((u16*)(ov112_021FFB24 + 0x30)), (*((u16*)(ov112_021FFB24 + 0x3a)) + 1));
    ov112_021E6134();
}





void ov112_021E7398(void) {
    OS_LockMutex(ov112_021FFB08);
    ov112_021E5B98();
    ov112_021E5E18(r4);
    OS_UnlockMutex(r5);
    OS_Sleep(r6);
}





void ov112_021E73C8(void) {
    *((u32*)(ov112_021FFAA4 + 0x18)) = 1;
    *((u32*)(ov112_021FFAA4 + 0x14)) = 1;
    *((u32*)(ov112_021FFAA4 + 0x44)) = 0;
    *((u32*)(ov112_021FFAA4 + 0x48)) = 0;
    ov112_021E5964(ov112_021FFAA4, 0);
    ov112_021E5D5C(1);
    ov112_021E5D38(ov112_021E6A6C);
    ov112_021E5D44(ov112_021E6F60);
    ov112_021E5D50(ov112_021E6BDC);
    CARD_SpiWaitGetStatus();
    CARD_SpiWaitGetStatus();
    CARD_SetSpiWriteWaitCycles(0);
    CARD_SetSpiReadWaitCycles(0);
    OS_InitMutex(ov112_021FFB08);
    OS_InitMessageQueue(ov112_021FFB20, ov112_021FFAC0, 1);
    // str r4, [sp]
    // add r3, r5, r4
    // str r6, [sp, #4]
    OS_CreateThread(ov112_021FFBD8, ov112_021E7398, 0);
    OS_WakeupThreadDirect(ov112_021FFBD8);
}





void ov112_021E7464(void) {
    OS_LockMutex(ov112_021FFB08);
    OS_KillThread(ov112_021FFBD8, 0);
    OS_UnlockMutex(ov112_021FFB08);
}





void ov112_021E7484(void) {
    *((u8*)(ov112_021FFB24 + 0x1c)) = 0x2a;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x2a;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x2c;
}





void ov112_021E74A8(void) {
    *((u32*)(ov112_021FFAA4 + 0x10)) = r0;
    *((u32*)(ov112_021FFAA4 + 0x2c)) = r1;
    *((u32*)(ov112_021FFAA4 + 0x30)) = r2;
    *((u8*)(ov112_021FFB24 + 0x1c)) = 0x32;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x20;
    ov112_021E5EC4(0, 0, 0x00000D4C, ov112_021FFAA4);
    *((u16*)(ov112_021FFB24 + 0x3c)) = 0x0000B732;
    *((u16*)(ov112_021FFB24 + 0x3a)) = 0;
    // add r2, #0x7f
    // asr r0, r2, #6
    // add r0, r2, r0
    // asr r0, r0, #7
    *((u16*)(ov112_021FFB24 + 0x38)) = (0 >> 0x19);
    *((u32*)(ov112_021FFAA4 + 0x4c)) = *((u32*)(ov112_021FFAA4 + 0x44));
    *((u32*)(ov112_021FFAA4 + 0x50)) = *((u32*)(ov112_021FFAA4 + 0x48));
    ov112_021E5D8C(*((u32*)(ov112_021FFAA4 + 0x10)), *((u32*)(ov112_021FFAA4 + 0x48)), 0x00008C50, *((u32*)(ov112_021FFAA4 + 0x44)));
    // add r3, r1, r0
    *((u32*)(ov112_021FFAA4 + 0x54)) = r3;
    // add r1, r1, r0
    *((u32*)(ov112_021FFAA4 + 0x58)) = *((u32*)(ov112_021FFAA4 + 0x48));
    ov112_021E5D8C(*((u32*)(ov112_021FFAA4 + 0x2c)), *((u32*)(ov112_021FFAA4 + 0x48)), 0x000028BE);
    // add r3, #0x52
    *((u32*)(ov112_021FFAA4 + 0x5c)) = *((u32*)(ov112_021FFAA4 + 0x54));
    // add r1, r1, r0
    *((u32*)(ov112_021FFAA4 + 0x60)) = *((u32*)(ov112_021FFAA4 + 0x58));
    ov112_021E5D8C(*((u32*)(ov112_021FFAA4 + 0x30)), *((u32*)(ov112_021FFAA4 + 0x58)), (0x89 << 2), *((u32*)(ov112_021FFAA4 + 0x54)));
}





void ov112_021E7548(void) {
    *((u32*)(ov112_021FFAA4 + 8)) = r0;
    *((u32*)(ov112_021FFAA4 + 0x38)) = r1;
    *((u32*)(ov112_021FFAA4 + 0x34)) = r2;
    *((u32*)(ov112_021FFAA4 + 0x30)) = r3;
    *((u8*)(ov112_021FFB24 + 0x1c)) = 0x40;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x20;
    ov112_021E5EC4(0, 0, 0x00000D4C);
    *((u16*)(ov112_021FFB24 + 0x3c)) = 0x00002BCA;
    *((u16*)(ov112_021FFB24 + 0x3a)) = 0;
    // add r2, #0x7f
    // asr r0, r2, #6
    // add r0, r2, r0
    // asr r0, r0, #7
    *((u16*)(ov112_021FFB24 + 0x38)) = (0 >> 0x19);
}





void ov112_021E7594(void) {
    *((u32*)(ov112_021FFAA4 + 0x2c)) = r0;
    *((u32*)(ov112_021FFAA4 + 0x30)) = r1;
    *((u32*)(ov112_021FFAA4 + 0x38)) = r2;
    *((u32*)(ov112_021FFAA4 + 0x34)) = r3;
    *((u8*)(ov112_021FFB24 + 0x1c)) = 0x52;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x20;
    ov112_021E5EC4(0, 0, 0x00000D4C);
    *((u16*)(ov112_021FFB24 + 0x3c)) = 0x0000382E;
    *((u16*)(ov112_021FFB24 + 0x3a)) = 0;
    // add r2, #0x7f
    // asr r0, r2, #6
    // add r0, r2, r0
    // asr r0, r0, #7
    *((u16*)(ov112_021FFB24 + 0x38)) = (0 >> 0x19);
    // add r3, r1, r0
    *((u32*)(r4 + 0x54)) = r3;
    // add r1, r4, r0
    *((u32*)(r4 + 0x58)) = *((u32*)(r4 + 0x44));
    ov112_021E5D8C(*((u32*)(r4 + 0x2c)), *((u32*)(r4 + 0x44)), 0x000028BE);
    // add r3, #0x52
    *((u32*)(ov112_021FFAA4 + 0x5c)) = *((u32*)(ov112_021FFAA4 + 0x54));
    // add r1, r1, r0
    *((u32*)(ov112_021FFAA4 + 0x60)) = *((u32*)(ov112_021FFAA4 + 0x58));
    ov112_021E5D8C(*((u32*)(ov112_021FFAA4 + 0x30)), *((u32*)(ov112_021FFAA4 + 0x58)), (0x89 << 2), *((u32*)(ov112_021FFAA4 + 0x54)));
}





void ov112_021E7620(void) {
    *((u32*)(ov112_021FFAA4 + 0x38)) = r0;
    *((u32*)(ov112_021FFAA4 + 0x30)) = r1;
    *((u8*)(ov112_021FFB24 + 0x1c)) = 0x60;
    *((u8*)(ov112_021FFB24 + 0x1d)) = 0x20;
    ov112_021E5EC4(0, 0, 0x00000D4C);
    *((u16*)(ov112_021FFB24 + 0x3c)) = 0x000024D8;
    *((u16*)(ov112_021FFB24 + 0x3a)) = 0;
    // add r2, #0x7f
    // asr r0, r2, #6
    // add r0, r2, r0
    // asr r0, r0, #7
    *((u16*)(ov112_021FFB24 + 0x38)) = (0 >> 0x19);
}





void ov112_021E7668(void) {
}





void ov112_021E7670(void) {
}





void ov112_021E768C(void) {
}





void ov112_021E76A8(void) {
    ov112_021E59A8(ov112_021FFAA4);
    *((u32*)(ov112_021FFAA4 + 0x14)) = 1;
}





void ov112_021E76CC(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r2, r1
    // str r2, [r0]
    // add r0, #0x50
    // and r1, r2
    // str r1, [r3]
    // strh r1, [r0]
    // add r3, #0x50
    // strh r1, [r3]
    sub_0201A728(0x10, 0, *((u32*)0x04001000), 0x04001000);
    Heap_Create(3, 0x9a, (7 << 0x10));
    OverlayManager_CreateAndGetData(r4, 0x0001F378, 0x9a);
    memset(0, 0x0001F378);
    OverlayManager_GetArgs(r4);
    *((u32*)(r5 + 0x20)) = *((u32*)(r0 + 8));
    ov112_021E795C(r5);
    SetKeyRepeatTimers(3, 8);
    sub_020210BC();
    sub_02021148(4);
    ov112_021E7768(r5);
    TextFlags_SetCanABSpeedUpPrint(1);
}





void ov112_021E7768(void) {
    BgConfig_Alloc(0x9a);
    *((u32*)(r4 + 0x18)) = r0;
    FontID_Alloc(4, 0x9a);
    ov112_021E7C18(r4);
    ov112_021E79D0();
    ov112_021E79F0(*((u32*)(r4 + 0x18)));
    ov112_021E7B18(r4);
    ov112_021E9A78(r4, 0);
    ov112_021E9A78(r4, 1);
    ov112_021EA1AC(r4);
    ov112_021EA4F4(r4);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    ov112_021E9C98(r4);
    Main_SetVBlankIntrCB(ov112_021E79A8, r4);
    // and r0, r1
    // strh r0, [r2]
    ToggleBgLayer(4, 1, 0x04000304);
}





void ov112_021E77E4(void) {
    ov112_021EA1F8();
    ov112_021E9C10(r4, 1);
    ov112_021E9C10(r4, 0);
    ov112_021E7AC8(*((u32*)(r4 + 0x18)));
    sub_02021238();
    GF_DestroyVramTransferManager();
    ov112_021E9E30(r4);
    ov112_021E7C6C(r4);
    FontID_Release(4);
    Main_SetVBlankIntrCB(0, 0);
    // str r1, [r4, r0]
}





void ov112_021E7830(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E784E: ; jump table
    IsPaletteFadeFinished((*((u16*)(*((u32*)r5) + 6)) << 0x10));
    // str r0, [r5]
    // blx r1
    // str r0, [r5]
    // blx r1
    // str r0, [r5]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x18)), 5, 0, *((u16*)(r4 + 0x0001F2E0)));
    // blx r1
    // str r0, [r5]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    // str r0, [r5]
    // str r0, [r4]
    ov112_021E9C94(r4);
    IsPaletteFadeFinished();
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x0001E52C)));
}





void ov112_021E7910(void) {
    OverlayManager_GetData();
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    ov112_021E77E4(r4);
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x9a);
    sub_0201A738(0x10);
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
}





void ov112_021E795C(void) {
    Save_Bag_Get(*((u32*)(r0 + 0x20)));
    // str r0, [r4, r1]
    Save_PlayerData_GetProfile(*((u32*)(r4 + 0x20)), 0x0001E434);
    // str r0, [r4, r1]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + 0x20)), 0x0001E438);
    // str r0, [r4, r1]
    Save_Pokewalker_Get(*((u32*)(r4 + 0x20)), 0x0001E43C);
    // str r0, [r4, r1]
    Save_Pokedex_Get(*((u32*)(r4 + 0x20)), 0x0001E440);
    // str r0, [r4, r1]
}





void ov112_021E79A8(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 0x18)));
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    // str r0, [r3, r1]
}





void ov112_021E79D0(void) {
}





void ov112_021E79F0(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    InitBgFromTemplate(r4, 1, ov112_021F3704, 0);
    InitBgFromTemplate(r4, 2, ov112_021F3720, 0);
    InitBgFromTemplate(r4, 3, ov112_021F373C, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BgClearTilemapBufferAndCommit(r4, 2);
    BgClearTilemapBufferAndCommit(r4, 3);
    InitBgFromTemplate(r4, 4, ov112_021F3758, 0);
    InitBgFromTemplate(r4, 5, ov112_021F3774, 0);
    InitBgFromTemplate(r4, 6, ov112_021F3790, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    BgClearTilemapBufferAndCommit(r4, 5);
    BgClearTilemapBufferAndCommit(r4, 6);
    BG_ClearCharDataRange(4, 0x20, 0, 0x9a);
    BG_ClearCharDataRange(5, 0x20, 0, 0x9a);
    BG_ClearCharDataRange(6, 0x20, 0, 0x9a);
}





void ov112_021E7AC8(void) {
}





void ov112_021E7B18(void) {
    NARC_New(0xf9, 0x9a);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(4, *((u32*)(r5 + 0x18)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 8, *((u32*)(r5 + 0x18)), 3);
    // str r1, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 0, 0, 0);
    LoadFontPal1(0, (7 << 6), 0x9a);
    Options_GetFrame(*((u32*)(r5 + 0x0001E43C)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r5 + 0x18)), 1, 0x000003E2, 0xd);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 1, 4, 0);
    LoadFontPal1(4, (7 << 6), 0x9a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 5, *((u32*)(r5 + 0x18)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 9, *((u32*)(r5 + 0x18)), 6);
    Options_GetFrame(*((u32*)(r5 + 0x0001E43C)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r5 + 0x18)), 4, 0x000003E2, 0xd);
    NARC_Delete(r4);
}





void ov112_021E7C18(void) {
    // add r2, #0xf7
    NewMsgDataFromNarc(0, 0x1b, 0x1b, 0x9a);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(1, 0x1b, 0xde, 0x9a);
    // str r0, [r4, r1]
    MessageFormat_New_Custom(0x10, 0x20, 0x9a);
    // str r0, [r4, r1]
    String_New((0x19 << 4), 0x9a);
    // str r0, [r4, r1]
}





void ov112_021E7C6C(void) {
    String_Delete(*((u32*)(r0 + 0x0001E454)));
    DestroyMsgData(*((u32*)(r4 + 0x0001E450)));
    DestroyMsgData(*((u32*)(r4 + 0x0001E44C)));
    MessageFormat_Delete(*((u32*)(r4 + 0x0001E448)));
}





void ov112_021E7CA4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021E7CC8(void) {
    Save_PlayerData_GetProfile(*((u32*)(r0 + 0x20)));
    PlayerProfile_GetPlayerName_NewString(0x9a);
    // str r0, [r5, r1]
    // mov r2, #GAME_VERSION
    // add r0, #8
    // strh r2, [r5, r0]
    // add r0, #0x5b
    // add r0, #0x5b
    // strb r2, [r5, r0]
    // add r1, #0x5a
    // strb r0, [r5, r1]
    PlayerProfile_GetTrainerID(*((u32*)(r5 + 0x0001E438)), 0x00001024, (*((u8*)(r5 + 0x00001024)) & ~(1)));
    // str r0, [r5, r1]
    // add r1, #0x3c
    // add r1, r5, r1
    CopyStringToU16Array(r4, 0x00001030, 8);
    // str r1, [r5, r0]
    // mov r1, #GAME_VERSION
    // strh r1, [r5, r0]
    sub_02032728(*((u32*)(r5 + 0x0001E440)), 1);
    // add r1, r5, r1
    MIi_CpuCopyFast(0x00001034, 0x28);
    // add r0, #0x24
    ov112_021E73C8(r5, (1 << 0xc), 0xf);
    // add r0, r5, r1
    // add r1, #0x68
    // add r1, r5, r1
    ov112_021E5EB8(0x00001024);
    // add r0, r5, r0
    ov112_021E5D68(0x00010834);
    String_Delete(r4);
}





void ov112_021E7D7C(void) {
    // add r1, r4, r1
    ov112_021E7DFC(0x000010F4);
    // add r0, r4, r0
    ov112_021E8CB8(0x0000C910, r4);
    ov112_021E7DC0(r4);
}





void ov112_021E7DA4(void) {
    // add r0, r4, r0
    ov112_021E8CB8(0x0000C910, r0);
    ov112_021E7DC0(r4);
}





void ov112_021E7DC0(void) {
    // add r1, r4, r1
    ov112_021F3244(*((u32*)(r0 + 0x20)), (0xf2 << 8));
    // str r1, [r4, r0]
    // mov r1, #GAME_VERSION
    // strh r1, [r4, r0]
    sub_02032728(*((u32*)(r4 + 0x0001E440)), 1);
    // add r1, r4, r1
    MIi_CpuCopyFast(0x0000F1D8, 0x28);
}





void ov112_021E7DFC(void) {
    // add r1, #0xe6
    Heap_Alloc(0x9a, 0x9a);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // add r1, sp, #0x14
    AddWindowParameterized(*((u32*)(r5 + 0x18)), 1, 0);
    // add r0, sp, #0x14
    FillWindowPixelBuffer(0);
    MI_CpuCopy8(ov112_021F5758, r4, 0x20);
    // add r1, #0x20
    MI_CpuCopy8(ov112_021F5858, r4, 0x20);
    // add r1, #0x40
    MI_CpuCopy8(ov112_021F5778, r4, 0x20);
    // add r1, #0x60
    MI_CpuCopy8(ov112_021F5918, r4, 0x20);
    // add r1, #0x80
    MI_CpuCopy8(ov112_021F5838, r4, 0x20);
    // add r1, #0xa0
    MI_CpuCopy8(ov112_021F5978, r4, 0x20);
    // add r1, #0xc0
    MI_CpuCopy8(ov112_021F5798, r4, 0x20);
    // add r1, #0xe0
    MI_CpuCopy8(ov112_021F5878, r4, 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F57B8, (1 << 8), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F58B8, (0x12 << 4), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5818, (5 << 6), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5938, (0x16 << 4), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F57F8, (6 << 6), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5998, (0x1a << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F56C8, (0x9e << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5718, (0xa2 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F55F8, (0xa6 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5698, (0xaa << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5598, (0xae << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F55E8, (0xb2 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F55D8, (0xb6 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5688, (0xba << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F55C8, (0xbe << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F56B8, (0xc2 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5588, (0xc6 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F55A8, (0xca << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5898, (0xce << 2), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F58D8, (0xd6 << 2), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F58F8, (0xde << 2), 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5668, (0xee << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5638, (0xf2 << 2), 8);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F56F8, (0x1e << 4), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5628, (0x1f << 4), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5648, (0x82 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5748, (0x86 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5678, (0x8a << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F56D8, (0x8e << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F55B8, (0x92 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5608, (0x96 << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F56E8, (0x9a << 2), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5618, (0x3d << 4), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F56A8, (0x3e << 4), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5B98, (0xe1 << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5CD8, (0xe5 << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5BD8, (0xe9 << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5A18, (0xed << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5C98, (0xf1 << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5AD8, (0xf5 << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7418, (0x69 << 4), (5 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7558, (0x7d << 4), (5 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7698, (0x91 << 4), (5 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F77D8, (0xa5 << 4), (5 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7918, (0xb9 << 4), (5 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7A58, (0xcd << 4), (5 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5C58, 0x000018D0, 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F59D8, 0x00001910, 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6178, 0x00001950, 0x80);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5E18, 0x000019D0, 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6DD8, 0x00001A30, 0xc0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5A58, 0x00001AF0, 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5A98, 0x00001B30, 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5B18, 0x00001B70, 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5B58, 0x00001BB0, 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F62F8, 0x00001BF0, 0x80);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6378, 0x00001C70, 0x80);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6718, 0x00001CF0, 0xc0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5738, 0x00001DB0, 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5708, (0x77 << 6), 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FE198, 0x00001DD0, (3 << 8));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5D18, (0xf9 << 4), 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5C18, 0x00001110, 0x40);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F65D8, 0x00001150, 0xa0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F61F8, 0x000011F0, 0x80);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6278, 0x00001270, 0x80);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6538, 0x00001270, 0xa0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F70D8, 0x00001310, (1 << 8));
    // add r0, sp, #0x14
    ov112_021E90FC(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    ov112_021E93BC(0x10, 0xa, 2, r6);
    // add r1, r4, r1
    MI_CpuCopy8(r6, (0xfd << 4), (5 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F67D8, 0x00001690, 0xc0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6898, 0x00001750, 0xc0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7018, 0x00001810, 0xc0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6498, 0x00001410, 0xa0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F63F8, 0x000014B0, 0xa0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F57D8, 0x00001670, 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5DB8, 0x000015B0, 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6058, 0x00001610, 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5D58, 0x00001550, 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F71D8, 0x000020D0, (1 << 8));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5958, 0x000021D0, 0x20);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5658, 0x000021F0, 0x10);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FCF98, 0x000022B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8198, 0x00002430, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8318, 0x000025B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8498, 0x00002730, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FC998, 0x000028B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8618, 0x00002A30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8798, 0x00002BB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8918, 0x00002D30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FC398, 0x00002EB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8A98, 0x00003030, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8C18, 0x000031B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8D98, 0x00003330, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8F18, 0x000034B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9098, 0x00003630, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9218, 0x000037B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9398, 0x00003930, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FB798, 0x00003AB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9518, 0x00003C30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9698, 0x00003DB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9818, 0x00003F30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FB198, 0x000040B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9998, 0x00004230, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9B18, 0x000043B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9C98, 0x00004530, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FAB98, 0x000046B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9E18, 0x00004830, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F9F98, 0x000049B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FA118, 0x00004B30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FA298, 0x00004CB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FA418, 0x00004E30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FA598, 0x00004FB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FA718, 0x00005130, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FA898, 0x000052B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FAA18, 0x00005430, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FAD18, 0x000055B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FAE98, 0x00005730, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FB018, 0x000058B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FB318, 0x00005A30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FB498, 0x00005BB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FB618, 0x00005D30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FB918, 0x00005EB0, (6 << 6));
    // add r1, r4, r2
    MI_CpuCopy8(ov112_021FBA98, (0x00006030 >> 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FBC18, 0x000061B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FBD98, 0x00006330, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FBF18, 0x000064B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FC098, 0x00006630, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FC218, 0x000067B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FC518, 0x00006930, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FC698, 0x00006AB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FC818, 0x00006C30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FCB18, 0x00006DB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FCC98, 0x00006F30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FCE18, 0x000070B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FD118, 0x00007230, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FD298, 0x000073B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FD418, 0x00007530, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FD598, 0x000076B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FD718, 0x00007830, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FD898, 0x000079B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FDA18, 0x00007B30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FDB98, 0x00007CB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FDD18, 0x00007E30, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FDE98, 0x00007FB0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021FE018, 0x00008130, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7B98, 0x000082B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7D18, 0x00008430, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F7E98, 0x000085B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F8018, 0x00008730, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F72D8, 0x000088B0, (6 << 6));
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6678, 0x00002210, 0xa0);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5E78, (0x3f << 4), 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5ED8, (0x45 << 4), 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5F38, (0x4b << 4), 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5F98, (0x51 << 4), 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F5FF8, (0x57 << 4), 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F6118, (0x5d << 4), 0x60);
    // add r1, r4, r1
    MI_CpuCopy8(ov112_021F60B8, (0x63 << 4), 0x60);
    // add r0, r4, r0
    ov112_021F0D48(0x00008A30);
    Heap_Free(r6);
    // add r0, sp, #0x14
    RemoveWindow();
}





void ov112_021E8B74(void) {
    // ldr r0, [sp, #0x30]
    // str r1, [sp]
    // str r0, [sp, #0x30]
    // str r2, [sp, #4]
    // str r0, [sp, #0x10]
    GF_RTC_TimeToSec((0xc0 * r3));
    SetLCRNGSeed();
    // str r7, [sp, #8]
    LCRandom();
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // ldr r1, [sp, #0x10]
    // add r6, r2, r1
    // add r6, #8
    // str r1, [sp, #0x14]
    // add r4, r6, r1
    // ldr r1, [sp, #0x30]
    // strb r0, [r1, r7]
    // ldr r0, [sp, #0x14]
    AllocAndLoadMonPersonal_HandleAlternateForm(*((u16*)(r6 + 0x1f)), *((u8*)(r4 + 6)), 0x9a);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // strh r0, [r5]
    *((u16*)(r5 + 2)) = *((u16*)(r4 + 4));
    *((u16*)(r5 + 4)) = *((u16*)(r4 + 8));
    *((u8*)(r5 + 0xc)) = *((u16*)(r4 + 2));
    // and r1, r2
    *((u8*)(r5 + 0xd)) = ((*((u8*)(r5 + 0xd)) & ~(0x1f)) | 0x1f);
    *((u8*)(r5 + 0xd)) = ((*((u8*)(r5 + 0xd)) & ~(0x60)) | ((*((u8*)(r4 + 7)) << 0x1e) >> 0x19));
    *((u8*)(r5 + 0xd)) = (*((u8*)(r5 + 0xd)) & ~(0x80));
    // ldr r0, [sp, #0xc]
    GetPersonalAttr(0x80, 0x1c, *((u8*)(r4 + 6)), (r5 + 2));
    // and r0, r2
    *((u8*)(r5 + 0xe)) = (1 | (*((u8*)(r5 + 0xe)) & ~(1)));
    // ldr r0, [sp]
    // strh r1, [r0]
    // ldr r0, [sp, #4]
    // strb r1, [r0, r7]
    // ldr r0, [sp, #0xc]
    FreeMonPersonal((1 | (*((u8*)(r5 + 0xe)) & ~(1))), *((u16*)(r4 + 0x12)), ((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r5, #0x10
    // str r0, [sp]
}





void ov112_021E8C5C(void) {
    // strh r0, [r4]
}





void ov112_021E8CB8(void) {
    // str r0, [sp, #0x28]
    // add r1, #0xe6
    Heap_Alloc(0x9a, 0x9a);
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x2c]
    // add r4, sp, #0x40
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x18)), r4, 1, 0);
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x2c]
    // add r4, #0x10
    // str r0, [sp, #0x2c]
    // strh r0, [r7]
    AcquireBoxMonLock(*((u32*)(r5 + 0x0001E430)));
    // add r1, #0x36
    GetBoxMonData(*((u32*)(r5 + 0x0001E430)), 0, 0);
    *((u16*)(r6 + 4)) = r0;
    GetBoxMonData(*((u32*)(r5 + 0x0001E430)), 0xa1, 0);
    *((u8*)(r7 + 0xc)) = r0;
    GetBoxMonData(*((u32*)(r5 + 0x0001E430)), 0x70, 0);
    // and r0, r2
    *((u8*)(r7 + 0xd)) = (0x1f | (*((u8*)(r7 + 0xd)) & ~(0x1f)));
    *((u8*)(r7 + 0xd)) = (*((u8*)(r7 + 0xd)) & ~(0x80));
    BoxMonIsShiny(*((u32*)(r5 + 0x0001E430)), (*((u8*)(r7 + 0xd)) & ~(0x80)), ((r0 << 0x18) >> 0x18));
    *((u8*)(r7 + 0xe)) = (((r0 << 0x1f) >> 0x1e) | (*((u8*)(r7 + 0xe)) & ~(2)));
    GetBoxMonData(*((u32*)(r5 + 0x0001E430)), 9, 0);
    // add r1, #0x26
    // strb r0, [r1]
    // add r2, #0x10
    GetBoxMonData(*((u32*)(r5 + 0x0001E430)), 0x75, r7);
    ReleaseBoxMonLock(*((u32*)(r5 + 0x0001E430)), 1);
    AllocAndLoadMonPersonal(*((u16*)r7), 0x9a);
    GetPersonalAttr(0x1c);
    // and r0, r2
    *((u8*)(r7 + 0xe)) = (1 | (*((u8*)(r7 + 0xe)) & ~(1)));
    FreeMonPersonal(r4, (*((u8*)(r7 + 0xe)) & ~(1)), ((r0 << 0x18) >> 0x18));
    GetBoxMonGender(*((u32*)(r5 + 0x0001E430)));
    *((u8*)(r7 + 0xd)) = (((r0 << 0x1e) >> 0x19) | (*((u8*)(r7 + 0xd)) & ~(0x60)));
    // ldr r0, [sp, #0x28]
    // str r1, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // add r0, #0x27
    // strb r1, [r0]
    // add r1, #0x5b
    NewString_ReadMsgData(*((u32*)(r5 + 0x0001E44C)), *((u32*)(r5 + 0x0001D798)), (*((u8*)(r7 + 0xd)) & ~(0x60)));
    // add r1, #0x28
    CopyStringToU16Array(r7, 0x15);
    String_Delete(r4);
    // add r0, sp, #0x3c
    // str r0, [sp]
    // ldr r3, [sp, #0x28]
    // add r0, #0x52
    // add r1, #0x82
    // add r2, #0x88
    ov112_021E8B74(r7, r7, r7);
    // ldr r0, [sp, #0x20]
    // add r0, r4, r0
    // add r0, #0xbc
    // add r2, #0x82
    ov112_021E8C5C(*((u32*)(r5 + 0x0001E430)), r7);
    // ldr r2, [sp, #0x20]
    // add r0, sp, #0x40
    // add r2, r4, r2
    // add r3, sp, #0x3c
    ov112_021E9148(r5);
    // str r0, [sp, #0x14]
    // add r0, r7, r0
    // str r0, [sp, #0x34]
    // add r0, #0x52
    ov112_021E9470(*((u16*)r7));
    // str r0, [sp]
    GfGfxLoader_LoadFromNarc(0xfa, r0, 1, 0x9a);
    // ldr r1, [sp, #0x34]
    // str r0, [sp, #0x30]
    // add r1, r1, r4
    MI_CpuCopy8((6 << 6));
    // ldr r0, [sp, #0x30]
    Heap_Free();
    // add r4, r4, r0
    // ldr r0, [sp, #0x14]
    // add r6, #0x10
    // str r0, [sp, #0x14]
    // add r1, #0x7f
    // add r0, #0x72
    ov112_021E9480(*((u16*)r7), ((*((u8*)r7) << 0x19) >> 0x1e), 0);
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0x00000102, r0, 1, 0x9a);
    // add r1, r7, r1
    MI_CpuCopy8(0x00000FFE, (6 << 8));
    Heap_Free(r4);
    // str r0, [sp, #0x18]
    // add r6, sp, #0x40
    // add r0, r7, r0
    // str r0, [sp, #0x38]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xac
    // ldr r3, [sp, #0x24]
    ov112_021E93BC(*((u32*)r6), 0xa, 2);
    // ldr r1, [sp, #0x38]
    // ldr r0, [sp, #0x24]
    // add r1, r1, r4
    MI_CpuCopy8((5 << 6));
    // add r4, r4, r0
    // ldr r0, [sp, #0x18]
    // add r6, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r0, r1, r0
    // add r3, #0x80
    // add r3, #0x8c
    // strh r4, [r3]
    // add r3, #0x82
    // add r3, #0xa0
    // strh r4, [r3]
    // add r3, #0x84
    // add r3, r7, r2
    // add r3, #0xb4
    // strb r4, [r3]
    // ldr r0, [sp, #0x1c]
    // add r1, #0xbe
    MI_CpuCopy8(*((u32*)(ov112_021FF528 + ((((5 << 6) + 1) + 6) << 2))), r7, 0xc0, ((5 << 6) + 1));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x11c]
    // ldr r3, [sp, #0x24]
    ov112_021E93BC(0x10, 0xa, 2);
    // ldr r0, [sp, #0x24]
    // add r1, r7, r2
    // sub r2, #0x3e
    MI_CpuCopy8(0x0000017E);
    ov112_021E9464(*((u32*)(r5 + 0x0001E430)));
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0xfa, r0, 1, 0x9a);
    // add r1, r7, r1
    MI_CpuCopy8(0x000002BE, (6 << 6));
    Heap_Free(r4);
    GF_AssertFail(*((u16*)(r5 + 0x0001D77C)));
    // add r1, #0x1a
    // add r2, #0x18
    ov112_021E9480(*((u16*)(r5 + 0x0001D77C)), *((u8*)(r5 + 0x0001D77C)), *((u8*)(r5 + 0x0001D77C)));
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0x00000102, r0, 1, 0x9a);
    GetBoxMonData(*((u32*)(r5 + 0x0001E430)), 0, 0);
    ov112_021E9A30(r4, ov112_021FE498, r0);
    // add r1, r7, r1
    MI_CpuCopy8(r4, 0x0000043E, (6 << 8));
    Heap_Free(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x12c]
    // ldr r3, [sp, #0x24]
    ov112_021E93BC(0x10, 0xa, 2);
    // ldr r0, [sp, #0x24]
    // add r1, r7, r1
    MI_CpuCopy8(0x00000A3E, (5 << 6));
    // add r4, sp, #0x40
    // add r7, r7, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x24]
    ov112_021E93BC(*((u32*)(r4 + 0xc)), 0xc, 2);
    // ldr r0, [sp, #0x24]
    // add r1, r7, r5
    MI_CpuCopy8((6 << 6));
    // add r4, #0x10
    // add r5, r5, r0
    // add r4, sp, #0x40
    RemoveWindow(r4);
    // add r4, #0x10
    // ldr r0, [sp, #0x24]
    Heap_Free();
}





void ov112_021E90FC(void) {
    Save_PlayerData_GetProfile(*((u32*)(r1 + 0x20)));
    PlayerProfile_GetPlayerName_NewString(0x9a);
    FontID_Alloc(5, 0x9a);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 5, r4, 2);
    FontID_Release(5);
    String_Delete(r4);
}





void ov112_021E9148(void) {
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    NewMsgDataFromNarc(1, 0x1b, 0xed, 0x9a);
    // str r0, [sp, #0x20]
    FontID_Alloc(5, 0x9a);
    // ldr r4, [sp, #0x18]
    // ldr r5, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r1, #0x80
    NewString_ReadMsgData(*((u32*)(r1 + 0x0001E450)), *((u16*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 5, r0, 2);
    String_Delete(r6);
    // add r5, #0x10
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // add r1, r1, r3
    NewString_ReadMsgData(*((u16*)(0x14 + 8)), *((u8*)(r1 + 0)), (*((u8*)(r1 + 0)) * 0x14));
    // str r6, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xa
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    AddTextPrinterParameterizedWithColor(r5, 5, r0, 2);
    String_Delete(r4);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // add r1, #0x5b
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), *((u32*)(0x0001E44C + 0x0001D798)), 0x0001D798);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    // add r0, #0xd0
    AddTextPrinterParameterizedWithColor(0x00030100, 5, r0, 2);
    String_Delete(r4);
    String_New(0xc, 0x9a);
    // ldr r0, [sp, #0x14]
    GetBoxMonData(*((u32*)(r0 + 0x0001E430)), 0x77, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0xe0
    // str r0, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(0, 5, r4, 2);
    String_Delete(r4);
    FontID_Release(5);
    // ldr r0, [sp, #0x20]
    DestroyMsgData();
}





void ov112_021E9290(void) {
    // str r3, [sp, #0x20]
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r5, [sp, #0xc]
    // str r7, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x40
    // str r3, [sp]
    // str r0, [sp, #4]
}





void ov112_021E9338(void) {
    // add r2, sp, #0
    // add r1, sp, #0
    // add r1, #2
    sub_02032688(*((u32*)(r0 + 0x0001E440)), 0x0001E440);
    // add r0, sp, #0
}





void ov112_021E935C(void) {
    // asr r5, r3, #2
    // asr r4, r2, #2
    // add r5, r3, r5
    // add r4, r2, r4
    // asr r5, r5, #3
    // asr r4, r4, #3
    // add r4, r4, r1
    // sub r1, r1, r5
    // ror r1, r2
    // add r1, r5, r1
    // sub r3, r3, r5
    // ror r3, r2
    // add r2, r5, r3
    // add r2, r1, r2
    // and r1, r2
    // add r1, r2, r1
    // asr r2, r1, #1
    // add r1, r2, r1
    // asr r0, r0, #4
    // add r1, r2, r1
    // asr r2, r1, #1
    // add r1, r2, r1
    // and r0, r1
}





void ov112_021E93BC(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #4]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r3, [sp, #8]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r3, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    // asr r2, r3, #2
    // add r2, r3, r2
    // asr r2, r2, #3
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #0xc]
    // ldr r7, [sp, #0x14]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r5, r1, r0
    // ldr r3, [sp, #0x34]
    // ldr r2, [sp, #0x30]
    // add r3, r3, r4
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, r6, r2
    // add r3, r3, r7
    // asr r2, r0, #1
    // lsl r2, r4
    // strb r1, [r5]
    // and r0, r2
    // lsl r0, r4
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #0x14]
    // add r7, #8
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x10]
}





void ov112_021E9464(void) {
}





void ov112_021E9470(void) {
}





void ov112_021E9480(void) {
    sub_02070438(((r0 << 0x10) >> 0x10), ((r2 << 0x18) >> 0x18));
    // sub r2, #0x46
    // sub r2, #0x46
    // sub r2, #0x23
    // sub r2, #0x23
    // sub r2, #8
    // sub r2, #9
    // sub r2, #9
    // sub r2, #8
    // add r2, #0x42
    // add r2, #0x42
    // add r2, #0x3a
    // add r2, #0x47
    // add r2, #0x47
    // add r2, #0x48
    // add r1, #0xc9
    // add r0, r0, r1
    // add r1, #0xcc
    // add r0, r0, r1
    // add r1, #0xcf
    // add r0, r0, r1
    // add r1, #0xd1
    // add r0, r0, r1
    // add r1, #0xd3
    // add r0, r0, r1
    // add r1, #0xd5
    // add r0, r0, r1
    // add r1, #0xc5
    // add r0, r0, r1
    // add r1, #0xa5
    // add r0, r0, r1
    // add r1, #0xa9
    // add r0, r0, r1
    // add r1, #0xe7
    // add r0, r0, r1
    // add r1, #0xe9
    // add r0, r0, r1
    // add r1, #0xef
    // add r0, r0, r1
    // add r1, #0xf1
    // add r0, r0, r1
    // add r0, r0, r2
}





void ov112_021E95A0(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    sub_02032674(*((u32*)(r0 + 0x0001E440)));
    Save_Pokedex_Get(*((u32*)(r6 + 0x20)));
    Pokedex_GetNatDexFlag();
    // ldr r0, [sp]
    Pokewalker_CourseIsUnlocked(*((u32*)(r6 + 0x0001E440)), 0);
    Pokewalker_UnlockCourse(*((u32*)(r6 + 0x0001E440)), r4);
    // str r4, [r6, r0]
    // add r5, #0xc0
}





void ov112_021E9610(void) {
    // str r1, [sp]
    Save_Pokedex_Get(*((u32*)(r0 + 0x20)));
    Pokedex_GetNatDexFlag();
    Pokewalker_CourseIsUnlocked(*((u32*)(r6 + 0x0001E440)), 0);
    // ldr r0, [sp]
    // sub r0, r1, r0
    // mvn r0, r0
}





void ov112_021E966C(void) {
    ov112_021E7CA4(2, 0xd);
    ov112_021EA51C(r5, 0);
    // str r0, [sp]
    ov112_021E9FA4(r5, 3, *((u32*)(r5 + 0x0001E514)), 4);
    // str r0, [sp]
    ov112_021E9FA4(r5, 4, *((u32*)(r5 + 0x0001E518)), 4);
    ov112_021EA51C(r5, r4);
    // str r4, [r5, r0]
    // strh r1, [r5, r0]
}





void ov112_021E96D0(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), 0x96);
    NewString_ReadMsgData(*((u32*)(r5 + 0x0001E44C)), 0x97);
    ov112_021E7CA4(r5, 2, 0xd);
    ov112_021EA51C(r5, 0);
    // str r0, [sp]
    ov112_021E9FA4(r5, 3, r6, 4);
    // str r0, [sp]
    ov112_021E9FA4(r5, 4, r7, 4);
    ov112_021EA51C(r5, r4);
    // str r4, [r5, r0]
    // strh r1, [r5, r0]
    String_Delete(r7, 0);
    String_Delete(r6);
}





void ov112_021E9750(void) {
    ov112_021E9888(0);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov112_021EA51C(r4, 0);
    ov112_021EA584(r4);
    PlaySE(0x000005DD);
    // strh r1, [r4, r0]
    // str r1, [r4, r0]
    ov112_021EA51C(r4, 1);
    ov112_021EA584(r4);
    PlaySE(0x000005DD);
    // strh r1, [r4, r0]
    // tst r1, r0
    PlaySE(0x000005DC, 0x40);
    ov112_021EA51C(r4, 0);
    // str r1, [r4, r0]
    // tst r1, r0
    PlaySE(0x000005DC, 0x80);
    ov112_021EA51C(r4, 1);
    // str r1, [r4, r0]
    // tst r2, r1
    // strh r1, [r4, r0]
    ov112_021EA584(r4, 1, 0x0001EC50);
    PlaySE(0x000005DD);
    // tst r0, r2
    ov112_021EA51C(r4, 2);
    ov112_021EA584(r4);
    // str r1, [r4, r0]
    // strh r1, [r4, r0]
    PlaySE(0x000005DC, 1);
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x0001E530)));
    // strh r1, [r4, r0]
}





void ov112_021E9888(void) {
    GF_AssertFail();
    TouchscreenHitbox_FindRectAtTouchNew(*((u32*)(ov112_021FF514 + (r4 << 2))), (r4 << 2));
}





void ov112_021E98A4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021E98E8(void) {
    // ldr r3, _021E98F4 ; =ToggleBgLayer
    // lsl r1, r1, #0x18
    // mov r0, #5
    // lsr r1, r1, #0x18
    // bx r3
    // nop
    // _021E98F4: .word ToggleBgLayer
    // TODO: decompile
}





void ov112_021E98F8(void) {
    // sub r4, r4, r5
    // ror r4, r3
    // add r3, r5, r4
    // asr r1, r2, #2
    // add r1, r2, r1
    // asr r1, r1, #3
    // add r4, r4, r1
    // asr r1, r3
    // asr r1, r3
    // and r0, r1
}





void ov112_021E9934(void) {
    // asr r4, r2, #2
    // add r4, r2, r4
    // sub r5, r5, r6
    // ror r5, r2
    // add r2, r6, r5
    // asr r4, r4, #3
    // and r5, r3
    // tst r3, r6
    // lsl r3, r2
    // add r1, r2, r1
    // lsl r3, r2
    // add r1, r2, r1
    // eor r2, r3
    // and r2, r4
    // strb r2, [r0, r1]
    // strb r1, [r0, r2]
    // eor r1, r3
    // and r1, r2
    // strb r1, [r0, r4]
}





void ov112_021E9998(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #4]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // and r6, r1
    // and r0, r1
    // sub r6, #8
    // str r0, [sp, #0x10]
    // add r0, r7, r1
    // ldr r1, [sp, #0xc]
    // add r4, r1, r2
    // ldr r0, [sp, #0x38]
    // add r1, r0, r1
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // sub r0, #8
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r1, r6, r4
    ov112_021E98F8((*((u8*)*((u32*)ov112_021FF504)) >> 4), *((u8*)((*((u8*)*((u32*)ov112_021FF504)) >> 4) + 1)), *((u8*)(*((u32*)ov112_021FF504) + (0 << 1))));
    // ldr r0, [sp]
    // ldr r2, [sp, #0x18]
    // add r1, r6, r4
    ov112_021E9934(1);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
}





void ov112_021E9A30(void) {
    // mvn r3, r3
    // str r3, [sp]
    // mvn r3, r3
    // str r3, [sp]
    // add r0, r6, r1
    // add r1, r4, r1
    // sub r3, #8
}





void ov112_021E9A78(void) {
    // str r1, [sp]
    GF_AssertFail();
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9A9A: ; jump table
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF608));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF5D8));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF5D0));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF640));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF660));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF624));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF684));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // add r7, r5, r0
    AddWindow(*((u32*)(r5 + 0x18)), r7, *((u32*)ov112_021FF5F0));
    // add r7, #0x10
    // ldr r0, [sp]
    // strb r0, [r5, r1]
    // ldr r0, [sp]
    // add r1, r5, r0
    // strb r4, [r1, r0]
}





void ov112_021E9C10(void) {
    // add r6, r5, r0
    // add r0, r6, r0
    RemoveWindow((0 << 4));
    // strb r1, [r5, r0]
    // add r6, r5, r0
    // add r7, #0xa1
    // add r0, r6, r0
    RemoveWindow((0 << 4), 0xff);
    // strb r1, [r5, r0]
}





void ov112_021E9C94(void) {
    // bx lr
    // TODO: decompile
}





void ov112_021E9C98(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), 0x4c);
    // str r0, [r4, r1]
    // sub r1, #0xc
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E458)), 0x49);
    // str r0, [r4, r1]
    // sub r1, #0x10
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E45C)), 0x4a);
    // str r0, [r4, r1]
    // sub r1, #0x14
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E460)), 0x4b);
    // str r0, [r4, r1]
    // sub r1, #0x18
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E464)), 0x4e);
    // str r0, [r4, r1]
    // sub r1, #0x1c
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E468)), 0x4d);
    // str r0, [r4, r1]
    // sub r1, #0x20
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E46C)), 0x50);
    // str r0, [r4, r1]
    // sub r1, #0x24
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E470)), 0x4f);
    // str r0, [r4, r1]
    // sub r1, #0x28
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E474)), 0x3f);
    // str r0, [r4, r1]
    // sub r1, #0x48
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E494)), 0x40);
    // str r0, [r4, r1]
    // sub r1, #0x4c
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E498)), 0x41);
    // str r0, [r4, r1]
    // sub r1, #0x50
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E49C)), 0x42);
    // str r0, [r4, r1]
    // sub r1, #0x54
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E4A0)), 0x47);
    // str r0, [r4, r1]
    // sub r1, #0x58
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E4A4)), 0x3f);
    // str r0, [r4, r1]
    // sub r1, #0x5c
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E4A8)), 0x47);
    // str r0, [r4, r1]
    // sub r1, #0x60
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E4AC)), 0x4f);
    // str r0, [r4, r1]
    // sub r1, #0x64
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E4B0)), 0x3b);
    // str r0, [r4, r1]
    // sub r1, #0x68
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E4B4)), 0x3d);
    // str r0, [r4, r1]
    // sub r1, #0x70
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E4BC)), 0x52);
    // str r0, [r4, r1]
    // sub r1, #0xc0
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E50C)), 0x55);
    // str r0, [r4, r1]
    // sub r1, #0xc4
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E510)), 0x94);
    // str r0, [r4, r1]
    // sub r1, #0xc8
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E514)), 0x95);
    // str r0, [r4, r1]
}





void ov112_021E9E30(void) {
    String_Delete(*((u32*)(r0 + 0x0001E458)));
    String_Delete(*((u32*)(r4 + 0x0001E45C)));
    String_Delete(*((u32*)(r4 + 0x0001E460)));
    String_Delete(*((u32*)(r4 + 0x0001E464)));
    String_Delete(*((u32*)(r4 + 0x0001E468)));
    String_Delete(*((u32*)(r4 + 0x0001E46C)));
    String_Delete(*((u32*)(r4 + 0x0001E470)));
    String_Delete(*((u32*)(r4 + 0x0001E474)));
    String_Delete(*((u32*)(r4 + 0x0001E494)));
    String_Delete(*((u32*)(r4 + 0x0001E49C)));
    String_Delete(*((u32*)(r4 + 0x0001E498)));
    String_Delete(*((u32*)(r4 + 0x0001E4A0)));
    String_Delete(*((u32*)(r4 + 0x0001E4A4)));
    String_Delete(*((u32*)(r4 + 0x0001E4A8)));
    String_Delete(*((u32*)(r4 + 0x0001E4AC)));
    String_Delete(*((u32*)(r4 + 0x0001E4B0)));
    String_Delete(*((u32*)(r4 + 0x0001E4B4)));
    String_Delete(*((u32*)(r4 + 0x0001E4BC)));
    String_Delete(*((u32*)(r4 + 0x0001E50C)));
    String_Delete(*((u32*)(r4 + 0x0001E510)));
    String_Delete(*((u32*)(r4 + 0x0001E514)));
    String_Delete(*((u32*)(r4 + 0x0001E518)));
}





void ov112_021E9F40(void) {
}





void ov112_021E9F5C(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), r2);
    // add r1, #0xc
    StringExpandPlaceholders(*((u32*)(r5 + 0x0001E448)), *((u32*)(r5 + 0x0001E448)), r0);
    // str r4, [sp]
    ov112_021E9FA4(r5, r7, *((u32*)(r5 + 0x0001E454)), 0);
    String_Delete(r6);
}





void ov112_021E9FA4(void) {
    // add r5, r0, r2
    // add r0, r5, r4
    FillWindowPixelBuffer(0, 0x0001EA68);
    // str r3, [sp]
    // ldr r0, [sp, #0x28]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, r6, 0);
}





void ov112_021E9FD8(void) {
    // add r5, r0, r2
    // add r0, r5, r4
    FillWindowPixelBuffer(0, 0x0001EA68);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, r7, r6, 0);
}





void ov112_021EA010(void) {
    // add r5, r0, r2
    // add r0, r5, r4
    FillWindowPixelBuffer(0, 0x0001EBA8);
    // str r3, [sp]
    // ldr r0, [sp, #0x28]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, r6, 0);
}





void ov112_021EA044(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), r2);
    // add r1, #0xc
    StringExpandPlaceholders(*((u32*)(r5 + 0x0001E448)), *((u32*)(r5 + 0x0001E448)), r0);
    // str r4, [sp]
    ov112_021EA010(r5, r7, *((u32*)(r5 + 0x0001E454)), 0);
    String_Delete(r6);
}





void ov112_021EA08C(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), r2);
    // add r4, r5, r0
    // add r0, r4, r6
    DrawFrameAndWindow2(0x0001EA68, 1, 0x000003E2, 0xd);
    // add r0, r4, r6
    FillWindowPixelBuffer(0xff);
    // add r1, #0xc
    StringExpandPlaceholders(*((u32*)(r5 + 0x0001E448)), *((u32*)(r5 + 0x0001E448)), r7);
    Options_GetTextFrameDelay(*((u32*)(r5 + 0x0001E43C)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r4, r6
    AddTextPrinterParameterized(1, *((u32*)(r5 + 0x0001E454)), 0);
    String_Delete(r7);
}





void ov112_021EA10C(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), r2);
    // add r4, r5, r0
    // add r0, r4, r6
    DrawFrameAndWindow2(0x0001EA68, 1, 0x000003E2, 0xd);
    // add r0, r4, r6
    FillWindowPixelBuffer(0xff);
    // add r1, #0xc
    StringExpandPlaceholders(*((u32*)(r5 + 0x0001E448)), *((u32*)(r5 + 0x0001E448)), r7);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r4, r6
    AddTextPrinterParameterized(1, *((u32*)(r5 + 0x0001E454)), 0);
    String_Delete(r7);
}





void ov112_021EA17C(void) {
}





void ov112_021EA19C(void) {
    // ldr r1, _021EA1A4 ; =0x0001EC4C
    // ldr r3, _021EA1A8 ; =sub_0200F450
    // ldr r0, [r0, r1]
    // bx r3
    // _021EA1A4: .word 0x0001EC4C
    // _021EA1A8: .word sub_0200F450
    // TODO: decompile
}





void ov112_021EA1AC(void) {
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GF_CreateVramTransferManager(0x40, 0x9a);
    ov112_021EA230(r4);
    ov112_021EA2C4(r4);
    ov112_021EA3C0(r4);
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0x0001E528)));
    G2dRenderer_SetSubSurfaceCoords(0, (1 << 0x14));
    ov112_021EAB58();
}





void ov112_021EA1F8(void) {
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0x0001E530)));
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r7 + 0x0001E528)), *((u32*)(r7 + (0x0001E528 + 4))));
    SpriteSystem_Free(*((u32*)(r7 + 0x0001E528)));
}





void ov112_021EA230(void) {
    // add r2, sp, #0x34
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteSystem_Alloc(0x9a, ov112_021FECAC);
    // str r0, [r4, r1]
    SpriteManager_New(*((u32*)(r4 + 0x0001E528)), 0x0001E528);
    // add r2, sp, #0x14
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    SpriteSystem_Init(*((u32*)(r4 + (0x0001E52C - 4))), r2, ov112_021FECC4, 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))), 0xd9);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))));
}





void ov112_021EA2C4(void) {
    NARC_New(0xf9, 0x9a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r0, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r4, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r4, 0x16);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r4, 0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x0001E528)), *((u32*)(r5 + (0x0001E528 + 4))), r4, 0x15);
    NARC_Delete(r4);
}





void ov112_021EA3C0(void) {
    // str r0, [sp]
    // ldr r2, [sp]
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r0 + 0x0001E528)), *((u32*)(r0 + 0x0001E52C)), (1 << 0x14));
    // str r0, [r5, r1]
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x0001E530)), *((u8*)r7));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E530)), 0);
    // ldr r0, [sp]
    // add r0, #0x34
    // str r0, [sp]
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x0001E534)), 2);
    // add r5, r4, r0
    SpriteSystem_NewSprite(*((u32*)(r4 + 0x0001E528)), *((u32*)(r4 + 0x0001E52C)), ov112_021FF028);
    // str r0, [r5, r1]
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x0001E530)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E530)), 0);
    ManagedSprite_SetPriority(*((u32*)(r5 + r7)), 2);
    // add r5, r4, r0
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r4 + 0x0001E528)), *((u32*)(r4 + 0x0001E52C)), ov112_021FF05C, (1 << 0x14));
    // str r0, [r5, r1]
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x0001E530)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E530)), 0);
    ManagedSprite_SetPriority(*((u32*)(r5 + r7)), 2);
    ov112_021EA984(r4);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x0001E550)), 2);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x0001E550)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x0001E53C)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x0001E540)), 1);
}





void ov112_021EA4F4(void) {
    ManagedSprite_SetAnimateFlag(*((u32*)(r0 + 0x0001E530)), 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E530)), 8);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E530)), 0);
}





void ov112_021EA51C(void) {
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x0001E530)), *((u8*)(ov112_021FECE4 + (r1 << 2))), *((u8*)(ov112_021FECE5 + (r1 << 2))), (1 << 0x14));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x0001E530)), *((u8*)(ov112_021FECE6 + r4)));
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x0001E530)), *((u8*)(ov112_021FECE7 + r4)));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E530)), 1);
}





void ov112_021EA570(void) {
    // ldr r1, _021EA57C ; =0x0001E530
    // ldr r3, _021EA580 ; =ManagedSprite_SetDrawFlag
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bx r3
    // nop
    // _021EA57C: .word 0x0001E530
    // _021EA580: .word ManagedSprite_SetDrawFlag
    // TODO: decompile
}





void ov112_021EA584(void) {
    ManagedSprite_GetActiveAnim(*((u32*)(r0 + 0x0001E530)));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E530)), (r0 + 3));
}





void ov112_021EA5A4(void) {
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x0001E534)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E534)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E538)), 0);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E534)), 2);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E538)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E538)), 1);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x0001E538)), r4);
    ManagedSprite_SetAnimateFlag(*((u32*)(r5 + 0x0001E538)), 1);
}





void ov112_021EA60C(void) {
    ov112_021E7668(0x0001E538);
    ManagedSprite_GetActiveAnim(r5);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E538)), 1);
    ManagedSprite_GetActiveAnim(r5);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E538)), 2);
}





void ov112_021EA64C(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x0001E534)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
}





void ov112_021EA670(void) {
    // add r1, r0, r1
}





void ov112_021EA688(void) {
    // add r1, r0, r1
}





void ov112_021EA6A0(void) {
    // add r1, r0, r1
}





void ov112_021EA6B8(void) {
}





void ov112_021EA6D8(void) {
    // str r2, [sp]
    // ldr r2, [sp, #0x18]
    // add r6, r5, r0
    // add r0, #0x75
    // add r2, #0xd0
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r6 + (r1 << 2))), (r3 << 0x10), (r2 << 0x10), (1 << 0x14));
    // ldr r1, [sp]
    ManagedSprite_SetAnim(*((u32*)(r6 + r7)), (r1 + 4));
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + r7)), 1);
    // add r4, #0x11
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x0001E530)), 0);
    // add r6, r5, r0
    // add r0, #0x11
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r6 + (r4 << 2))), (r1 << 0x10), (r2 << 0x10));
    // ldr r1, [sp]
    // add r1, #0x13
    // str r1, [sp]
    ManagedSprite_SetAnim(*((u32*)(r6 + r7)));
    // add r4, #0x75
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x0001E530)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + r7)), 1);
}





void ov112_021EA76C(void) {
    // add r0, r4, r0
    ov112_021EA9A0(0x0001EC80);
    // add r2, r4, r1
    // add r4, r2, r1
    // strb r0, [r2, r1]
    MTRandom(1, (r0 << 4));
    _u32_div_f(6);
    *((u8*)(r4 + 3)) = (r1 + 2);
    MTRandom((r1 + 2));
    _u32_div_f((0x4b << 2));
    *((u16*)(r4 + 0xc)) = r1;
    *((u16*)(r4 + 4)) = 0x80;
    *((u16*)(r4 + 6)) = 0x74;
    MTRandom(0x74);
    _u32_div_f(0x28);
    // add r1, #0x28
    *((u8*)(r4 + 2)) = r1;
    MTRandom();
    _u32_div_f(0x3c);
    // add r1, #0x78
    *((u16*)(r4 + 0xe)) = r1;
}





void ov112_021EA7D0(void) {
    // add r0, r4, r0
    ov112_021EA9A0(0x0001EC80);
    // add r2, r4, r1
    // add r4, r2, r1
    // strb r0, [r2, r1]
    MTRandom(1, (r0 << 4));
    _u32_div_f(5);
    // mvn r0, r0
    *((u8*)(r4 + 3)) = (0 * (r1 + 5));
    MTRandom((0 * (r1 + 5)), (r1 + 5));
    _u32_div_f((0x4b << 2));
    *((u16*)(r4 + 0xc)) = r1;
    *((u16*)(r4 + 4)) = 0x80;
    // sub r0, #0xed
    *((u16*)(r4 + 6)) = 0x80;
    MTRandom(0x80);
    _u32_div_f(0x28);
    // add r1, #0x28
    *((u8*)(r4 + 2)) = r1;
    MTRandom();
    _u32_div_f(0x3c);
    // add r1, #0x78
    *((u16*)(r4 + 0xe)) = r1;
}





void ov112_021EA838(void) {
    // add r4, r0, r1
    // ldrsh r1, [r4, r0]
    // sub r1, #0x14
    *((u16*)(r4 + 0xe)) = *((u8*)r4);
    // add r4, #0x10
}





void ov112_021EA864(void) {
    // str r0, [sp, #4]
    // add r4, r0, r1
    // ldrsb r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0xb4
    _s32_div_f((6 * 0x0001EC80), (5 << 6));
    GF_SinDeg(*((u16*)(r4 + 0xc)));
    _s32_div_f((0x5a << 2));
    *((u16*)(r4 + 0xa)) = r0;
    GF_CosDeg(*((u16*)(r4 + 0xc)));
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    *((u16*)(r4 + 8)) = (r0 >> 0x14);
    // add r0, #0xa
    *((u16*)(r4 + 0xc)) = *((u16*)(r4 + 0xc));
    _s32_div_f(*((u16*)(r4 + 0xc)), (0x5a << 2));
    _s32_div_f(r1, 0x49);
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // str r0, [sp]
    // ldrsh r7, [r4, r3]
    // ldrsh r3, [r4, r3]
    // ldr r0, [sp, #4]
    // add r3, r7, r3
    ov112_021EA6D8(0xa, r6, r0, 8);
    // ldrsh r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // sub r0, r1, r0
    *((u16*)(r4 + 6)) = 3;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0xe)) = (0xe - 1);
    // ldrsh r1, [r4, r0]
    // sub r0, #0x74
    // ldrsh r0, [r4, r0]
    // strb r0, [r4]
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E704)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0001E574)), 0);
    _s32_div_f(*((u16*)(r4 + 0xc)), (0x5a << 2));
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E704)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E574)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E704)), 3);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x0001E574)), 3);
    // add r4, #0x10
}





void ov112_021EA984(void) {
    // add r1, r0, r1
    // strb r0, [r1]
    *((u16*)(0x0001EC80 + 0xe)) = 0;
    // add r1, #0x10
}





void ov112_021EA9A0(void) {
    // add r0, #0x10
    // mvn r0, r0
}





void ov112_021EA9BC(void) {
    // ldrsh r0, [r1, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x0001E568)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E564)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x0001E568)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x0001E564)), 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E568)), 0xa);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E564)), 0x18);
}





void ov112_021EAA10(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x0001E568)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E564)), 0);
}





void ov112_021EAA34(void) {
    // add r2, #0xd0
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x0001E568)), (r1 << 0x10), (r2 << 0x10), (1 << 0x14));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E568)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E564)), 0);
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x0001E564)), (r1 << 0x10), (r2 << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E564)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E568)), 0);
}





void ov112_021EAA98(void) {
    *((u16*)(r1 + 4)) = 0x80;
    *((u16*)(r1 + 6)) = 0x82;
    // sub r2, #0x8c
    *((u8*)(r1 + 2)) = 0x82;
    *((u16*)(r1 + 0xe)) = 0;
    *((u16*)(r1 + 4)) = 0x80;
    // sub r2, #0xee
    *((u16*)(r1 + 6)) = 0x80;
    *((u8*)(r1 + 2)) = 0xa;
    *((u16*)(r1 + 0xe)) = 0;
    *((u16*)(r1 + 4)) = 0x80;
    *((u16*)(r1 + 6)) = 0x82;
    *((u8*)(r1 + 2)) = 0;
    *((u16*)(r1 + 0xe)) = 0;
    *((u16*)(r1 + 8)) = 0;
    *((u16*)(r1 + 0xa)) = 0;
}





void ov112_021EAAE4(void) {
    // ldrsb r4, [r2, r1]
    // ldrsh r3, [r2, r1]
    // add r3, r3, r4
    // ldrsh r3, [r2, r1]
    // sub r1, #0x74
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // ldrsh r3, [r2, r1]
    // add r3, r3, r4
    // ldrsh r1, [r2, r1]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
}





void ov112_021EAB58(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}





void ov112_021EAB78(void) {
    GetMonIconNaixEx(r2, 0, r3);
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetCharData(0x14, r0, 0, 0x0001EA64);
    // str r0, [r5, r1]
    DC_FlushRange(*((u32*)(*((u32*)(r5 + (0x0001EA60 + 4))) + 0x14)), (1 << 0xa));
    // str r4, [sp]
    // add r4, #9
    // add r1, r5, r0
    // str r0, [sp, #4]
    ov112_021EABE8(*((u32*)(r5 + 0x0001EA64)), r6, r7, 0);
    Heap_Free(*((u32*)(r5 + 0x0001EA60)));
}





void ov112_021EABE8(void) {
    // ldr r1, [sp, #0x10]
    // add r1, #0xc0
    // ldr r0, [sp, #0x14]
}





void ov112_021EAC18(void) {
    Sound_SetSceneAndPlayBGM(0x49, 0x00000497, 0);
    PlayBGM(0x00000497);
}





void ov112_021EAC34(void) {
    // blx r1
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 8)) = 0;
}





u8 ov112_021EAC58(void) {
}





void ov112_021EAC5C(void) {
    SaveArray_PCStorage_Get(*((u32*)(r0 + 0x20)));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    PCStorage_CountEmptySpotsInAllBoxes(r4);
    ov112_021E9C10(r5, 3);
    ov112_021E9A78(r5, 1);
    PCStorage_CountMonsInAllBoxes(r4);
    sub_0203263C(*((u32*)(r5 + 0x0001E440)));
    ov112_021E9C10(r5, 3);
    ov112_021E9A78(r5, 1);
    // add r1, sp, #0x10
    // add r1, #2
    // add r2, sp, #0x10
    sub_02032688(*((u32*)(r5 + 0x0001E440)));
    // add r0, sp, #0x10
    *((u32*)(r5 + 4)) = 3;
    // strh r2, [r5, r0]
    *((u32*)(r5 + 0x10)) = 0;
    ov112_021E9C10(r5, 3, 0);
    ov112_021E9A78(r5, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x18)), 1);
    sub_020326A4(*((u32*)(r5 + 0x0001E440)), 0, 0);
    // strh r1, [r5, r0]
    *((u32*)(r5 + 0x10)) = 0;
    ov112_021E9C10(r5, 3);
    ov112_021E9A78(r5, 7);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x18)), 1);
    ov112_021EADD0(r5, 0);
    ov112_021E9C10(r5, 3);
    ov112_021E9A78(r5, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x18)), 1);
    ov112_021EADD0(r5, 1);
}





void ov112_021EADD0(void) {
    // add r1, sp, #0xc
    // add r2, sp, #8
    sub_02032674(*((u32*)(r0 + 0x0001E440)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #8]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 7, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 6, 7);
    // ldr r1, [sp, #8]
    ov112_021E9610(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 0xc, r0, 7);
    ov112_021E7CA4(r5, 5, 0x10);
    ov112_021E98E8(r5, 1);
    // strh r3, [r5, r0]
    // str r0, [sp]
    ov112_021EA010(r5, 1, *((u32*)(r5 + 0x0001E50C)), 0);
    ov112_021EA044(r5, 2, 0x53, 0x00010200);
    // str r0, [sp]
    ov112_021EA010(r5, 3, *((u32*)(r5 + 0x0001E510)), 0);
    ov112_021EA044(r5, 4, 0x54, 0x00010200);
    ov112_021EA044(r5, 0, 0x58, 0x00010200);
    ov112_021EA044(r5, 0, 0x57);
    ov112_021EA044(r5, 0, 0x56);
    AllocMonZeroed(0x9a);
    Mon_GetBoxMon();
    Pokewalker_TryGetBoxMon(*((u32*)(r5 + 0x0001E440)), r0);
    BufferBoxMonNickname(*((u32*)(r5 + 0x0001E448)), 0xd, r4);
    ov112_021EA044(r5, 5, 0x59, (0xc1 << 0xa));
    // add r1, r5, r2
    // sub r2, #0x10
    // add r2, r5, r2
    ov112_021E9290(r4, 0x0001D7AC, 1);
    ov112_021EA670(r5, 7);
    Heap_Free(r6);
    ov112_021EA688(r5, 7);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x0001EBF8, 0);
    // add r0, r5, r0
    CopyWindowToVram(0x0001EBF8);
    ov112_021EA64C(r5);
}





void ov112_021EAF48(void) {
}





void ov112_021EAF5C(void) {
    ov112_021E9C10(1);
    ov112_021E9A78(r5, 3);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x18)), 1, 0, 0);
    ov112_021E7CA4(r5, 5, 0x11);
    ov112_021E7CA4(r5, 2, 0x17);
    // add r1, #0x98
    NewString_ReadMsgData(*((u32*)(r5 + 0x0001E44C)), 0);
    // str r7, [sp]
    ov112_021E9FA4(r5, r4, r0, 4);
    String_Delete(r6);
    ov112_021E9F40(r5, 6);
    // str r0, [r5, r1]
    ov112_021EA51C(r5, *((u32*)(ov112_021FF0AC + (*((u32*)(r5 + 0x0001EC50)) << 2))), (*((u32*)(r5 + 0x0001EC50)) << 2));
}





void ov112_021EAFFC(void) {
    // tst r1, r2
    // str r1, [r4, r0]
    ov112_021EA51C(r0, *((u32*)(ov112_021FF0AC + (*((u32*)(r0 + 0x0001EC50)) << 2))), (*((u32*)(r0 + 0x0001EC50)) << 2));
    // tst r1, r2
    // str r1, [r4, r0]
    ov112_021EA51C(r4, *((u32*)(ov112_021FF0AC + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    // tst r2, r1
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EB06A: ; jump table
    *((u32*)(r4 + 4)) = 2;
    sub_020326A4(*((u32*)(r4 + 0x0001E440)), 0, 0);
    ov112_021E9C10(r4, 3);
    ov112_021E9A78(r4, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 1);
    *((u32*)(r4 + 4)) = 3;
    // strh r3, [r4, r2]
    *((u32*)(r4 + 0x10)) = 0;
    ov112_021E9C10(0x1a, 3, 0x0001D77C, 0);
    ov112_021E9A78(r4, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 1);
    sub_020326A4(*((u32*)(r4 + 0x0001E440)), 0, 0);
    sub_020326A4(*((u32*)(r4 + 0x0001E440)), r1);
    // strh r1, [r4, r0]
    *((u32*)(r4 + 0x10)) = 0;
    ov112_021E9C10(r4, 3);
    ov112_021E9A78(r4, 7);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 1);
    ov112_021E9C10(0xf, 3);
    ov112_021E9A78(r4, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 1);
    ov112_021E9C10(0xa, 3);
    ov112_021E9A78(r4, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 1);
}





void ov112_021EB1D8(void) {
}





void ov112_021EB1E8(void) {
}





void ov112_021EB208(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EB244(void) {
    ov112_021E7CA4(2, 0xa);
    // str r0, [sp]
    ov112_021E9FA4(r4, 5, *((u32*)(r4 + 0x0001E46C)), 4);
    ov112_021E9F40(r4, 1);
    // str r1, [r4, r0]
    ov112_021EA51C(r4, 2);
}





void ov112_021EB28C(void) {
    ov112_021E9888(1);
    // mvn r0, r0
    ov112_021EC440(r4, r0, (r0 + 2), 9);
    PlaySE(0x000005DD);
    // tst r1, r0
    PlaySE(0x000005DC, 0x40);
    ov112_021EA51C(r4, 2);
    // str r1, [r4, r0]
    // tst r1, r0
    PlaySE(0x000005DC, 0x80);
    ov112_021EA51C(r4, 3);
    // str r1, [r4, r0]
    // tst r1, r0
    PlaySE(0x000005DD, 1);
    ov112_021EC440(r4, *((u32*)(r4 + 0x0001EC50)), (*((u32*)(r4 + 0x0001EC50)) + 2), 9);
    // tst r0, r1
    PlaySE(0x000005DD, 2);
    ov112_021EC440(r4, 1, 3, 9);
    ov112_021EB9C0(0x19);
    PlaySE(0x000005DC);
    ov112_021EB90C(r4, 3);
    ov112_021EB9E4(0x1a);
    ov112_021EB950(r4, 3);
    PlaySE(0x000005DC);
}





void ov112_021EB388(void) {
}





void ov112_021EB3A8(void) {
}





void ov112_021EB3B8(void) {
}





void ov112_021EB3D8(void) {
    ov112_021E7CA4(2, 0xb);
    ov112_021E7CA4(r4, 5, 0x10);
    // str r0, [sp]
    ov112_021E9FA4(r4, 3, *((u32*)(r4 + 0x0001E464)), 4);
    // str r0, [sp]
    ov112_021E9FA4(r4, 4, *((u32*)(r4 + 0x0001E460)), 4);
    ov112_021E9F40(r4, 1);
    // str r0, [r4, r1]
    ov112_021EA51C(r4, *((u32*)(ov112_021FF090 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
}





void ov112_021EB44C(void) {
    ov112_021E9888(2);
    // mvn r0, r0
    ov112_021EC440(r4, r0, *((u32*)(ov112_021FF090 + (r0 << 2))), 0xe);
    PlaySE(0x000005DD);
    // tst r1, r0
    PlaySE(0x000005DC, 0x40);
    // str r1, [r4, r0]
    ov112_021EA51C(r4, *((u32*)(ov112_021FF090 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    // tst r1, r0
    PlaySE(0x000005DC, 0x80);
    // str r1, [r4, r0]
    ov112_021EA51C(r4, *((u32*)(ov112_021FF090 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    // tst r1, r0
    PlaySE(0x000005DD, 1);
    ov112_021EC440(r4, *((u32*)(r4 + 0x0001EC50)), *((u32*)(ov112_021FF090 + (*((u32*)(r4 + 0x0001EC50)) << 2))), 0xe);
    // tst r0, r1
    PlaySE(0x000005DC, 2);
    ov112_021EC440(r4, 2, 3, 0xe);
    ov112_021EB9C0(0x19);
    PlaySE(0x000005DC);
    ov112_021EB90C(r4, 3);
    ov112_021EB9E4(0x1a);
    ov112_021EB950(r4, 3);
    PlaySE(0x000005DC);
}





void ov112_021EB568(void) {
    ov112_021EA570();
    *((u32*)(r4 + 4)) = 3;
    *((u32*)(r4 + 0x10)) = 1;
    *((u32*)(r4 + 4)) = 3;
    *((u32*)(r4 + 0x10)) = 2;
    *((u32*)(r4 + 4)) = 0xb;
    GF_AssertFail(0xb);
}





void ov112_021EB5AC(void) {
}





void ov112_021EB5BC(void) {
}





void ov112_021EB5DC(void) {
    ov112_021E7CA4(2, 0xc);
    ov112_021E7CA4(r4, 5, 0x10);
    // str r0, [sp]
    ov112_021E9FA4(r4, 3, *((u32*)(r4 + 0x0001E45C)), 4);
    // str r0, [sp]
    ov112_021E9FA4(r4, 4, *((u32*)(r4 + 0x0001E460)), 4);
    // str r0, [sp]
    ov112_021E9FA4(r4, 5, *((u32*)(r4 + 0x0001E464)), 4);
    ov112_021E9F40(r4, 1);
    // str r0, [r4, r1]
    ov112_021EA51C(r4, *((u32*)(ov112_021FF09C + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
}





void ov112_021EB664(void) {
    ov112_021E9888(3);
    // mvn r0, r0
    ov112_021EC440(r4, r0, *((u32*)(ov112_021FF09C + (r0 << 2))), 0x13);
    PlaySE(0x000005DD);
    // tst r1, r0
    PlaySE(0x000005DC, 0x40);
    // str r1, [r4, r0]
    ov112_021EA51C(r4, *((u32*)(ov112_021FF09C + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    // tst r1, r0
    PlaySE(0x000005DC, 0x80);
    // str r1, [r4, r0]
    ov112_021EA51C(r4, *((u32*)(ov112_021FF09C + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    // tst r1, r0
    PlaySE(0x000005DD, 1);
    ov112_021EC440(r4, *((u32*)(r4 + 0x0001EC50)), *((u32*)(ov112_021FF09C + (*((u32*)(r4 + 0x0001EC50)) << 2))), 0x13);
    // tst r0, r1
    PlaySE(0x000005DC, 2);
    ov112_021EC440(r4, 3, 3, 0x13);
    ov112_021EB9C0(0x19);
    PlaySE(0x000005DC);
    ov112_021EB90C(r4, 7);
    ov112_021EB9E4(0x1a);
    ov112_021EB950(r4, 3);
    PlaySE(0x000005DC);
}





void ov112_021EB780(void) {
    ov112_021EA570();
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EB79C: ; jump table
    *((u32*)(r4 + 4)) = 3;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 4)) = 3;
    *((u32*)(r4 + 0x10)) = 1;
    *((u32*)(r4 + 4)) = 3;
    *((u32*)(r4 + 0x10)) = 2;
    *((u32*)(r4 + 4)) = 0xb;
    GF_AssertFail(0xb, *((u32*)(r4 + 0x0001EC50)));
}





void ov112_021EB7D8(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EB838(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EB85C(void) {
}





void ov112_021EB864(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EB8C4(void) {
}





void ov112_021EB8E8(void) {
}





u8 ov112_021EB908(void) {
}





void ov112_021EB90C(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EB950(void) {
    // add r1, sp, #0x10
    // add r1, #2
    // add r2, sp, #0x10
    sub_02032688(*((u32*)(r0 + 0x0001E440)));
    // add r0, sp, #0x10
    *((u32*)(r5 + 4)) = 3;
    *((u32*)(r5 + 0x10)) = 4;
    ov112_021E9C10(r5, r4);
    ov112_021E9A78(r5, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x18)), 1);
    ov112_021EA570(r5);
}





void ov112_021EB9C0(void) {
    // tst r0, r1
    // tst r0, r2
    // tst r0, r2
}





void ov112_021EB9E4(void) {
    // tst r0, r2
    // tst r1, r0
    // add r0, #0xfc
    // tst r0, r2
}





void ov112_021EBA08(void) {
}





void ov112_021EBA28(void) {
    // blx r1
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 4)) = 0xb;
    *((u32*)(r0 + 8)) = 0;
}





u8 ov112_021EBA50(void) {
}





void ov112_021EBA54(void) {
}





void ov112_021EBA6C(void) {
}





void ov112_021EBA8C(void) {
    // tst r0, r1
}





u8 ov112_021EBAB0(void) {
}





void ov112_021EBAB4(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EBB58(void) {
    // blx r1
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 8)) = 0;
    ov112_021EA864(r0, *((u32*)(ov112_021FF740 + (*((u32*)(r0 + 8)) << 2))), (*((u32*)(r0 + 8)) << 2));
}





u32 ov112_021EBB84(void) {
}





void ov112_021EBB98(void) {
}





void ov112_021EBBB0(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021E966C(r4, 1);
}





void ov112_021EBBD8(void) {
    ov112_021E9750();
    ov112_021EA570(r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EA98);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EAA8);
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EBC3C(void) {
    ov112_021EA08C(0, 4);
    // str r0, [r4, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
}





void ov112_021EBC7C(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    // str r0, [sp]
    ov112_021E9FA4(r4, 5, *((u32*)(r4 + 0x0001E458)), 4);
    ov112_021E7CA4(r4, 2, 0xa);
    ov112_021E9F40(r4, 1);
    ov112_021EA51C(r4, 2);
}





void ov112_021EBCD8(void) {
    ov112_021E9888(1);
    // mvn r0, r0
    ov112_021EC440(r4, r0, (r0 + 2), 6);
    PlaySE(0x000005DD);
    // tst r1, r0
    PlaySE(0x000005DC, 0x40);
    ov112_021EA51C(r4, 2);
    // str r1, [r4, r0]
    // tst r1, r0
    PlaySE(0x000005DC, 0x80);
    ov112_021EA51C(r4, 3);
    // str r1, [r4, r0]
    // tst r1, r0
    PlaySE(0x000005DD, 1);
    ov112_021EC440(r4, *((u32*)(r4 + 0x0001EC50)), (*((u32*)(r4 + 0x0001EC50)) + 2), 6);
    // tst r0, r1
    PlaySE(0x000005DC, 2);
    ov112_021EC440(r4, 1, 3, 6);
}





void ov112_021EBD9C(void) {
    ov112_021EA570();
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EAB8);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EBDE8(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 2, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 1);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    ov112_021EA08C(r4, 2, 9);
    // str r0, [r4, r1]
}





void ov112_021EBE4C(void) {
}





void ov112_021EBE6C(void) {
}





void ov112_021EBE78(void) {
    ov112_021E9750();
    ov112_021EA570(r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EA98);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EAA8);
    // strh r1, [r4, r0]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EA98);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EAA8);
    ov112_021EA570(r4);
    // strh r1, [r4, r0]
}





u32 ov112_021EBF18(void) {
}





void ov112_021EBF4C(void) {
}





void ov112_021EBF70(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
    ov112_021ED2F4(r4);
    ov112_021EA08C(r4, 0, 5);
    // str r0, [r4, r1]
}





void ov112_021EBFC8(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA5A4(r4, 2);
}





void ov112_021EC000(void) {
    ov112_021E7484(1);
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x0000AABC, 0x000006C8);
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x00009D70, 0x00000D4C);
}





void ov112_021EC038(void) {
}





void ov112_021EC044(void) {
    ov112_021E76A8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EC05E: ; jump table
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    ov112_021EC134(r4);
    sub_02032624(*((u32*)(r4 + 0x0001E440)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov112_021E7464((0x0001D758 + 4), 0);
    ov112_021E7464(0x14);
    ov112_021E7668();
    ov112_021E98E8(r4, 1);
    ov112_021E9888(5);
    // tst r0, r1
    // tst r0, r1
    ov112_021E7464(2, *((u32*)(gSystem + 0x48)));
    ov112_021EC440(r4, 1, 3, 0x12);
    PlaySE(0x000005DC);
    ov112_021E98E8(r4, 0);
}





void ov112_021EC134(void) {
    // mvn r0, r0
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    SaveArray_PCStorage_Get(*((u32*)(r0 + 0x20)));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    sub_02032688(*((u32*)(r5 + 0x0001E440)));
    // add r1, r5, r6
    Pokewalker_TryGetBoxMon(*((u32*)(r5 + 0x0001E440)));
    // add r0, sp, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // str r0, [sp, #8]
    PCStorage_FindFirstEmptySlot(r4);
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r3, r5, r6
    PCStorage_PlaceMonInBoxByIndexPair(r4);
    // ldr r1, [sp, #8]
    // add r0, #0x88
    // strh r1, [r5, r0]
    // mvn r1, r1
    // add r0, #0x88
    // strh r1, [r5, r0]
}





void ov112_021EC1A8(void) {
    ov112_021EA08C(0, 0x21);
    // str r0, [r4, r1]
    ov112_021EA570(r4, 0x0001E524);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
}





void ov112_021EC1E4(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EC208(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 2, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 5, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 5);
    ov112_021EA08C(r4, 2, 0x1f);
    // str r0, [r4, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
}





void ov112_021EC284(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0;
}





void ov112_021EC2A8(void) {
    // ldrsh r0, [r4, r2]
    // sub r2, #0x88
    // add r2, r4, r2
    BufferBoxMonNickname(*((u32*)(r0 + 0x0001E448)), 1, 0x0001F370);
    ov112_021EA08C(r4, 2, 0x1a);
    // str r0, [r4, r1]
}





void ov112_021EC2E4(void) {
}





void ov112_021EC304(void) {
    // str r2, [r4, r1]
    ov112_021EA688(8, 0);
    // add r1, r4, r2
    // sub r2, #0x10
    // add r0, r4, r0
    // add r2, r4, r2
    ov112_021E9290(0x0001F2E8, 0x0001D7AC, 0);
}





void ov112_021EC338(void) {
    // str r2, [r4, r1]
    ov112_021EA670(8, (*((u32*)(r0 + 0x0001F2D0)) + 1));
    MTRandom(0x1a);
    _u32_div_f(0xb4);
    ov112_021EA7D0(r4);
}





u8 ov112_021EC374(void) {
}





void ov112_021EC378(void) {
}





void ov112_021EC390(void) {
}





void ov112_021EC3B0(void) {
}





void ov112_021EC3C8(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA17C(r4);
}





u32 ov112_021EC3F0(void) {
}





void ov112_021EC404(void) {
}





void ov112_021EC414(void) {
}





void ov112_021EC434(void) {
}





void ov112_021EC440(void) {
    // str r1, [r5, r3]
    ov112_021EA51C(r2, 0x0001EC50);
    ov112_021EA584(r5);
    *((u32*)(r5 + 0xc)) = r4;
}





void ov112_021EC460(void) {
}





void ov112_021EC478(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 4, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 5, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    ov112_021EA688(r4, 7);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 4);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 5);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 1);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    // strh r1, [r4, r0]
}





void ov112_021EC520(void) {
    // blx r1
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 8)) = 0;
    ov112_021EA864(r0, *((u32*)(ov112_021FF7CC + (*((u32*)(r0 + 8)) << 2))), (*((u32*)(r0 + 8)) << 2));
}





void ov112_021EC54C(void) {
    // strh r2, [r0, r1]
}





void ov112_021EC55C(void) {
    *((u32*)(r0 + 0xc)) = 1;
    *((u32*)(r0 + 0xc)) = 0x16;
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 1, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 4, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 5, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 4);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 5);
    ov112_021EA688(r4, 3);
    ov112_021EA688(r4, 4);
    ov112_021EC460(r4, 2, 0xb, 3);
}





void ov112_021EC640(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 1);
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
    ov112_021EA08C(r4, 0, 5);
    // str r0, [r4, r1]
    ov112_021ED2F4(r4, 0x0001E524);
}





void ov112_021EC67C(void) {
}





void ov112_021EC69C(void) {
}





void ov112_021EC6C0(void) {
}





void ov112_021EC6D8(void) {
}





void ov112_021EC6F8(void) {
}





void ov112_021EC70C(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 1, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    ov112_021EA688(r4, 3);
    ov112_021EA688(r4, 4);
    ov112_021EA08C(r4, 0, 0xc);
    // str r0, [r4, r1]
}





void ov112_021EC778(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021E9C10(r4, 1);
    ov112_021E9C10(r4, 0);
    ov112_021E9A78(r4, 3);
    ov112_021E9A78(r4, 2);
}





void ov112_021EC7B8(void) {
}





void ov112_021EC7D0(void) {
    // add r1, r1, r0
    // add r0, r5, r4
    // add r1, r1, r0
    // ldrsb r1, [r1, r0]
    // add r1, #0x5b
    NewString_ReadMsgData(*((u32*)(r0 + 0x0001E44C)), *((u32*)(r0 + 0x0001EC54)));
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x76);
    // str r7, [sp]
    ov112_021E9FA4(r5, r4, r0, 4);
    String_Delete(r6);
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 0xa, (*((u32*)(r5 + 0x0001EC54)) + 1), 1);
    ov112_021EC7B8(r5);
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 0xb, r0, 1);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x0001E448)), *((u32*)(r5 + (0x0001E448 + 4))), 0x51, 0x9a);
    // str r0, [sp]
    ov112_021E9FA4(r5, 7, r0, 0);
    String_Delete(r4);
    ov112_021EC8A4(r5, *((u32*)(r5 + 0x0001EC54)), *((u32*)(r5 + (0x0001EC54 - 4))));
}





void ov112_021EC8A4(void) {
    ov112_021ECA88();
    // mvn r1, r1
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E44C)), 0x76);
    // str r0, [sp]
    ov112_021EA010(r4, 0, r0, 0);
    String_Delete(r5);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x0001EBB8, 0);
    // add r0, r4, r0
    CopyWindowToVram(0x0001EBB8);
    ov112_021ECA88(r4);
    // add r1, #0x5b
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E44C)), r0);
    // str r0, [sp]
    ov112_021EA010(r4, 0, r0, 0);
    String_Delete(r5);
    ov112_021ECA88(r4);
    // add r1, #0x77
    NewString_ReadMsgData(*((u32*)(r4 + 0x0001E44C)), r0);
    // str r0, [sp]
    ov112_021EA010(r4, 1, r0, 0);
    String_Delete(r5);
}





void ov112_021EC950(void) {
    // str r2, [r6, r0]
    // str r2, [r6, r1]
    // add r0, r6, r0
    MI_CpuFill8((0x0001EC54 + 4), 0xff, 0x1e);
    Pokewalker_CourseIsUnlocked(*((u32*)(r6 + 0x0001E440)), 0);
    // add r1, r6, r5
    // strb r4, [r1, r0]
}





void ov112_021EC99C(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 1, 0, 0);
    ov112_021E7CA4(r4, 5, 0x11);
    ov112_021E7CA4(r4, 2, 0x17);
    ov112_021EC950(r4);
    // strh r0, [r4, r1]
    ov112_021EC7D0(r4, 0x0001EC76);
    ov112_021E9F40(r4, 6);
    ov112_021ECA18(r4, *((u32*)(r4 + 0x0001EC54)));
    ov112_021EA51C(r4, *((u32*)(ov112_021FF0C4 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
}





void ov112_021ECA18(void) {
    ov112_021EC7B8();
    ov112_021EA688(r5, 3);
    ov112_021EA670(r5, 4);
    ov112_021EA670(r5, 3);
    ov112_021EA670(r5, 4);
    ov112_021EA670(r5, 3);
    ov112_021EA688(r5, 4);
    ov112_021EA688(r5, 3);
    ov112_021EA688(r5, 4);
}





void ov112_021ECA88(void) {
    // add r1, r3, r1
    // add r1, r4, r1
    // add r0, r0, r1
    // add r2, #8
    // ldrsb r0, [r0, r2]
}





void ov112_021ECAA8(void) {
    ov112_021E9888(4);
    // mvn r1, r1
    // str r5, [r4, r0]
    ov112_021ECA88(r4, 0);
    ov112_021EC440(r4, r5, *((u32*)(ov112_021FF0C4 + (r5 << 2))), 0xb);
    PlaySE(0x000005DD);
    ov112_021EC8A4(r4, *((u32*)(r4 + 0x0001EC54)), *((u32*)(r4 + (0x0001EC54 - 4))));
    ov112_021EC8A4(r4, *((u32*)(r4 + 0x0001EC54)), *((u32*)(r4 + (0x0001EC54 - 4))));
    PlaySE(0x000005DC);
    ov112_021EA51C(r4, *((u32*)(ov112_021FF0C4 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    ov112_021ECDA0(r4);
    ov112_021ECA18(r4, *((u32*)(r4 + 0x0001EC54)));
    ov112_021EA6A0(r4, 3, 2);
    ov112_021ECDA0(r4, 1);
    ov112_021ECA18(r4, *((u32*)(r4 + 0x0001EC54)));
    ov112_021EA6A0(r4, 4, 3);
    ov112_021EC440(r4, r5, *((u32*)(ov112_021FF0C4 + (r5 << 2))), 0xb);
    PlaySE(0x000005DD);
    // tst r2, r0
    // str r1, [r4, r0]
    PlaySE(0x000005DC, (*((u32*)(r4 + 0x0001EC50)) - 1), 0x40);
    ov112_021EA51C(r4, *((u32*)(ov112_021FF0C4 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    ov112_021EC8A4(r4, *((u32*)(r4 + 0x0001EC54)), *((u32*)(r4 + (0x0001EC54 - 4))));
    // tst r2, r0
    // str r1, [r4, r0]
    PlaySE(0x000005DC, (*((u32*)(r4 + 0x0001EC50)) + 1), 0x80);
    ov112_021EA51C(r4, *((u32*)(ov112_021FF0C4 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    ov112_021EC8A4(r4, *((u32*)(r4 + 0x0001EC54)), *((u32*)(r4 + (0x0001EC54 - 4))));
    // tst r2, r0
    ov112_021ECDA0(r4, 0x20);
    ov112_021ECA18(r4, *((u32*)(r4 + 0x0001EC54)));
    ov112_021EA6A0(r4, 3, 2);
    // tst r1, r0
    ov112_021ECDA0(r4, 1);
    ov112_021ECA18(r4, *((u32*)(r4 + 0x0001EC54)));
    ov112_021EA6A0(r4, 4, 3);
    // tst r1, r0
    ov112_021EC440(r4, *((u32*)(r4 + 0x0001EC50)), *((u32*)(ov112_021FF0C4 + (*((u32*)(r4 + 0x0001EC50)) << 2))), 0xb);
    PlaySE(0x000005DD);
    ov112_021ECA88(r4);
    ov112_021EC440(r4, *((u32*)(r4 + 0x0001EC50)), *((u32*)(ov112_021FF0C4 + (*((u32*)(r4 + 0x0001EC50)) << 2))), 0xb);
    PlaySE(0x000005DD);
    PlaySE(0x000005DC);
    // tst r0, r1
    ov112_021EC440(r4, 5, 3, 0xb);
    PlaySE(0x000005DC);
}





void ov112_021ECCC4(void) {
    ov112_021EA570();
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021ECCE2: ; jump table
    ov112_021EA51C(r4, *((u32*)(ov112_021FF0C4 + (*((u32*)(r4 + 0x0001EC50)) << 2))), (*((u32*)(r4 + 0x0001EC50)) << 2));
    ov112_021ECA88(r4);
    ov112_021EA570(r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    ov112_021ECA88(r4);
    // str r0, [r4, r1]
    ov112_021E9C10(r4, 2);
    ov112_021E9C10(r4, 3);
    ov112_021E9A78(r4, 1);
    ov112_021E9A78(r4, 0);
    // strh r1, [r4, r0]
    ov112_021EA570(r4, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    GF_AssertFail(0);
}





void ov112_021ECDA0(void) {
    // asr r0, r0, #0x18
    // str r2, [r5, r0]
    // str r0, [r5, r1]
    PlaySE(0x000005DC, 0x0001EC50, (*((u32*)(r0 + (0x0001EC50 + 4))) - 1));
    // asr r4, r1, #0x18
    ov112_021EC7B8((*((u32*)(r5 + (r1 + 4))) << 0x18), *((u32*)(r5 + r1)));
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    PlaySE(0x000005DC, 0);
    ov112_021EA51C(r5, *((u32*)(ov112_021FF0C4 + (*((u32*)(r5 + 0x0001EC50)) << 2))), (*((u32*)(r5 + 0x0001EC50)) << 2));
    ov112_021EC7D0(r5);
}





void ov112_021ECE28(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 1, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    ov112_021EA688(r4, 3);
    ov112_021EA688(r4, 4);
    ov112_021E9C10(r4, 2);
    ov112_021E9C10(r4, 3);
    ov112_021E9A78(r4, 1);
    ov112_021E9A78(r4, 0);
    BufferPokewalkerCourseName(*((u32*)(r4 + 0x0001E448)), 0, ((*((u32*)(r4 + 0x0001D798)) << 0x18) >> 0x18));
    ov112_021EA08C(r4, 2, 0x15);
    // str r0, [r4, r1]
}





void ov112_021ECECC(void) {
}





void ov112_021ECEEC(void) {
}





void ov112_021ECEF8(void) {
}





void ov112_021ECF38(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x18)), 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x18)), 1);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x18)), 2);
    ov112_021EA688(r4, 3);
    ov112_021EA688(r4, 4);
    ov112_021ED2F4(r4);
    ov112_021EA08C(r4, 0, 7);
    // str r0, [r4, r1]
}





void ov112_021ECF88(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    // add r0, #0xa
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
}





void ov112_021ECFD4(void) {
}





u32 ov112_021ED020(void) {
}





void ov112_021ED054(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 1);
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
    ov112_021EA08C(r4, 0, 5);
    // str r0, [r4, r1]
    ov112_021ED2F4(r4, 0x0001E524);
}





void ov112_021ED090(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    // add r0, #0xa
}





void ov112_021ED0C8(void) {
}





void ov112_021ED0D0(void) {
    // add r1, r4, r2
    // sub r2, #0x10
    // add r2, r4, r2
    ov112_021E9290(*((u32*)(r0 + 0x0001E430)), 0x0001D7AC, 0);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x0001E550)), 1);
    ov112_021EA670(r4, 8);
    // strh r1, [r4, r0]
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 8, 0);
    SysTask_CreateOnMainQueue(ov112_021ED13C, r4, 2);
    // str r0, [r4, r1]
}





void ov112_021ED13C(void) {
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r0, r0, r3
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 8, *((u16*)(r1 + 0x0001F2D6)));
    SysTask_Destroy(r5);
}





void ov112_021ED180(void) {
}





void ov112_021ED1A0(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x18)), 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x18)), 1);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x18)), 2);
    ov112_021E9C10(r4, 2);
    ov112_021E9C10(r4, 3);
    ov112_021E9A78(r4, 0);
    ov112_021E9A78(r4, 1);
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
    ov112_021EA688(r4, 3);
    ov112_021EA688(r4, 4);
    ov112_021ED2F4(r4);
    ov112_021EA08C(r4, 0, 5);
    // str r0, [r4, r1]
}





void ov112_021ED224(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA5A4(r4, 2);
}





void ov112_021ED25C(void) {
}





void ov112_021ED264(void) {
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x0000AABC, 0x000006C8);
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x00009D70, 0x00000D4C);
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
    ov112_021E7D7C(r4);
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, r2
    ov112_021E74A8(0x000010F4, 0x0000C910, 0x0000F1D0);
    ov112_021E7CC8(r4);
    ov112_021EA5A4(r4, 2);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E550)), 0x19);
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x0001E550)), 0);
    ov112_021ED25C(r4);
}





void ov112_021ED2F4(void) {
    ov112_021E98A4();
    SysTask_CreateOnMainQueue(ov112_021ED180, r4, 2);
    // str r0, [r4, r1]
}





void ov112_021ED314(void) {
    IsSEPlaying(0x00000934);
    PlaySE(0x00000934);
}





void ov112_021ED330(void) {
    ov112_021E7668();
    // strh r4, [r5, r0]
    // strh r1, [r5, r0]
}





void ov112_021ED35C(void) {
    ov112_021E7670();
    ov112_021E768C();
    ov112_021ED330(r4, r0);
    MTRandom((r0 << 0x18));
    _u32_div_f(0xff);
    ov112_021EA76C(r4);
    ov112_021EA60C(r4);
    ov112_021ED314(r5);
    ov112_021EDAF4(r4, r5);
    // sub r1, #0x14
    // add r1, r4, r1
    ov112_021EAA98(r4, 0x0001F2D4, 2);
    // strh r1, [r4, r0]
    ov112_021EAA10(r4, 1);
    // strh r1, [r4, r0]
    ov112_021E76A8(0x0001F2D4, 0);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED3DC: ; jump table
    *((u16*)(r4 + 0x14)) = 0x2a;
    *((u16*)(r4 + 0x14)) = 0x2a;
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    sub_02032644(*((u32*)(r4 + 0x0001E440)));
    ov112_021EA688(r4, 8);
    // add r1, r4, r1
    ov112_021EAA98(r4, 0x0001F2C0, 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    *((u32*)(r4 + 0xc)) = 0x3a;
    ov112_021E7464(0x3a);
    ov112_021E7668(0x20);
    ov112_021E98E8(r4, 1);
    ov112_021E9888(5);
    // tst r0, r1
    // tst r0, r1
    *((u16*)(r4 + 0x14)) = 0x21;
    ov112_021E7464(0x21, *((u32*)(gSystem + 0x48)));
    ov112_021EC440(r4, 3, 3, 0x21);
    PlaySE(0x000005DD);
    ov112_021EA10C(r4, 2, 6);
    *((u16*)(r4 + 0x16)) = 1;
    ov112_021E98E8(r4, 0);
}





void ov112_021ED4D4(void) {
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x00009DFC, (0x33 << 6));
    // add r0, r4, r1
    // add r1, #0x2c
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    ov112_021E7548(0x00009D44, 0x0000AABC, 0x0000B184);
    ov112_021E7CC8(r4);
    ov112_021ED25C(r4);
    ov112_021EA5A4(r4, 2);
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x0001E550)), 0);
}





void ov112_021ED530(void) {
    Save_LocalFieldData_Get(*((u32*)(r0 + 0x20)));
    LocalFieldData_GetCurrentPosition();
    // add r5, r6, r0
    // add r7, r6, r0
    // add r0, r1, r0
    // add r1, r7, r1
    ov112_021F328C(*((u32*)(r6 + 0x20)), ((0x89 << 2) * (9 + 1)), (9 + 1));
    // sub r5, r5, r0
    // bpl _021ED550
}





void ov112_021ED590(void) {
    // add r1, r4, r2
    // add r2, r4, r2
    sub_02032674(*((u32*)(r0 + 0x0001E440)), (0x0001D758 + 4));
    sub_02032650(*((u32*)(r4 + 0x0001E440)), *((u32*)(r4 + 0x0001D758)), *((u16*)(r4 + 0x00009D7A)));
    sub_02032650(*((u32*)(r4 + r0)), r2, *((u16*)(r4 + 0x00009D7A)));
}





void ov112_021ED5DC(void) {
    // add r1, r4, r2
    // add r2, r4, r2
    sub_02032674(*((u32*)(r0 + 0x0001E440)), (0x0001D758 + 4));
    sub_02032650(*((u32*)(r4 + 0x0001E440)), *((u32*)(r4 + 0x0001D758)), *((u16*)(r4 + 0x00009D7A)));
}





void ov112_021ED610(void) {
    // ldr r1, _021ED634 ; =0x000010E7
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x1d
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _021ED62E
    // ldr r1, _021ED638 ; =0x00009D44
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021ED62A
    // ldr r0, _021ED63C ; =0x000001ED
    // cmp r1, r0
    // bls _021ED62E
    // mov r0, #0
    // bx lr
    // mov r0, #1
    // bx lr
    // nop
    // _021ED634: .word 0x000010E7
    // _021ED638: .word 0x00009D44
    // _021ED63C: .word 0x000001ED
    // TODO: decompile
}





void ov112_021ED640(void) {
    // ldr r1, _021ED664 ; =0x0000AABC
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x1a
    // lsr r1, r1, #0x1f
    // cmp r1, #1
    // bne _021ED660
    // mov r1, #0xad
    // lsl r1, r1, #8
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _021ED65C
    // ldr r0, _021ED668 ; =0x000001ED
    // cmp r1, r0
    // bls _021ED660
    // mov r0, #0
    // bx lr
    // mov r0, #1
    // bx lr
    // _021ED664: .word 0x0000AABC
    // _021ED668: .word 0x000001ED
    // TODO: decompile
}





void ov112_021ED66C(void) {
    ov112_021E7670();
    ov112_021E768C();
    ov112_021EA7D0(r4);
    ov112_021EA60C(r4);
    ov112_021ED314(r5);
    ov112_021E76A8();
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED6A2: ; jump table
    *((u16*)(r4 + 0x14)) = 0x2a;
    *((u16*)(r4 + 0x14)) = 0x2a;
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    ov112_021ED610(r4);
    // add r2, #0x10
    // add r2, r4, r2
    GetSpeciesNameIntoArray(*((u16*)(r4 + 0x00009D44)), 0x9a, 0x00009D44);
    // add r1, r4, r1
    ov112_021EAA98(r4, 0x0001F2C0, 1);
    ov112_021ED530(r4);
    ov112_021ED590(r4);
    ov112_021ED7DC(r4);
    // sub r1, r1, r0
    // str r1, [r4, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    *((u32*)(r4 + 0xc)) = 0x3c;
    ov112_021E7464(0x3c);
    ov112_021E7668(0x20);
    ov112_021E98E8(r4, 1);
    ov112_021E9888(5);
    // tst r0, r1
    // tst r0, r1
    *((u16*)(r4 + 0x14)) = 0x21;
    *((u32*)(r4 + 0xc)) = 0x42;
    ov112_021E7464(0x42, *((u32*)(gSystem + 0x48)));
    ov112_021EC440(r4, 3, 3, 0x21);
    PlaySE(0x000005DD);
    ov112_021EA10C(r4, 2, 6);
    *((u16*)(r4 + 0x16)) = 1;
    ov112_021E98E8(r4, 0);
}





void ov112_021ED7DC(void) {
    // add r0, sp, #4
    // str r2, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, r4, r3
    // str r0, [sp, #4]
    // sub r0, #0x10
    // add r0, sp, #0
    *((u16*)(0x00009D54 + 0xc)) = *((u16*)(r0 + 0x00009D54));
    // and r5, r6
    *((u8*)(0x00009D54 + 0xe)) = ((*((u8*)(0x00009D54 + 0xe)) & ~(0x1f)) | 0x1f);
    *((u8*)(0x00009D54 + 0xe)) = ((*((u8*)(0x00009D54 + 0xe)) & ~(0x60)) | ((((*((u8*)(r0 + (0x00009D54 - 3))) << 0x19) >> 0x1e) << 0x1e) >> 0x19));
    *((u8*)(0x00009D54 + 0xe)) = ((*((u8*)(0x00009D54 + 0xe)) & ~(0x80)) | ((((*((u8*)(r0 + (0x00009D54 - 2))) << 0x1e) >> 0x1f) << 0x1f) >> 0x18));
    // str r2, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #4
    // add r0, r4, r0
    ov112_021F30BC(0x0000AA34, *((u32*)(r0 + 0x000010F0)), 0, ((((*((u8*)(r0 + (0x00009D54 - 2))) << 0x1e) >> 0x1f) << 0x1f) >> 0x18));
    // add r0, r4, r0
    ov112_021F31BC(0x00009DFC);
    // add r1, sp, #0
    // strh r2, [r1]
    // add r3, #0xd
    // and r3, r5
    *((u8*)(r1 + 2)) = ((*((u8*)(r1 + 2)) & ~(0x1f)) | 0x1f);
    // add r3, #0xd
    // add r0, #0xe
    *((u8*)(r1 + 2)) = ((*((u8*)(r1 + 2)) & ~(0x60)) | ((((*((u8*)(r4 + (0xad << 8))) << 0x19) >> 0x1e) << 0x1e) >> 0x19));
    *((u8*)(r1 + 2)) = (((((*((u8*)(r4 + (0xad << 8))) << 0x1e) >> 0x1f) << 0x1f) >> 0x18) | (*((u8*)(r1 + 2)) & ~(0x80)));
    // add r1, sp, #0
    // add r0, r4, r0
    ov112_021F3140(0x00009DFC, (*((u8*)(r1 + 2)) & ~(0x80)), 0x80);
}





void ov112_021ED8DC(void) {
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x0000AABC, 0x000006C8);
    // add r0, r4, r0
    // add r1, r4, r1
    ov112_021E7620(0x00009D70, 0x0000B184);
    ov112_021E7CC8(r4);
    ov112_021ED25C(r4);
}





void ov112_021ED918(void) {
    ov112_021E7670();
    ov112_021E768C();
    ov112_021EA7D0(r4);
    ov112_021ED314(r5);
    ov112_021EA60C(r4);
    ov112_021E76A8();
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED950: ; jump table
    *((u16*)(r4 + 0x14)) = 0x2a;
    *((u16*)(r4 + 0x14)) = 0x2a;
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    // add r0, sp, #0xc
    // add r1, sp, #0
    RTC_GetDateTime();
    // add r0, sp, #0xc
    // add r1, sp, #0
    RTC_ConvertDateTimeToSecond();
    ov112_021ED530(r4);
    ov112_021ED5DC(r4);
    ov112_021EA670(r4, 6);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    *((u32*)(r4 + 0xc)) = 0x3d;
    ov112_021E7464(0x3d);
    ov112_021E7668(0x20);
    ov112_021E98E8(r4, 1);
    ov112_021E9888(5);
    // tst r0, r1
    // tst r0, r1
    ov112_021E7464(2, *((u32*)(gSystem + 0x48)));
    *((u16*)(r4 + 0x14)) = 0x21;
    *((u32*)(r4 + 0xc)) = 0x42;
    ov112_021EC440(r4, 3, 3, 0x21);
    PlaySE(0x000005DD);
    ov112_021EA10C(r4, 2, 6);
    *((u16*)(r4 + 0x16)) = 1;
    ov112_021E98E8(r4, 0);
}





void ov112_021EDA4C(void) {
    ov112_021E7DA4();
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    ov112_021E7594(0x0000C910, 0x0000F1D0, 0x00009D70, 0x0000AABC);
    ov112_021E7CC8(r4);
    // add r1, r4, r2
    // sub r2, #0x10
    // add r2, r4, r2
    ov112_021E9290(*((u32*)(r4 + 0x0001E42C)), 0x0001E42C, 0x0001D7AC, 0);
    // add r1, r4, r2
    // sub r2, #0x10
    // add r2, r4, r2
    ov112_021E9290(*((u32*)(r4 + (r1 + 4))), 0);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x0001E550)), 1);
    ov112_021EA670(r4, 8);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x0001E550)), 0x19);
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x0001E550)), 0);
    // strh r1, [r4, r0]
    ov112_021EA5A4(r4, 2);
    ov112_021ED25C(r4);
}





void ov112_021EDAF4(void) {
    ManagedSprite_SetAnimationFrame(*((u32*)(r0 + 0x0001E550)), 0);
    // sub r1, #0x1e
    // asr r2, r1, #1
    // add r2, r1, r2
    ManagedSprite_SetAnimationFrame(*((u32*)(r0 + 0x0001E550)), (((0x0001E550 >> 0x1e) << 0xe) >> 0x10), (0x0001E550 >> 0x1e));
}





void ov112_021EDB24(void) {
    ov112_021E7670();
    ov112_021E768C();
    ov112_021ED330(r4, ((r0 << 0x18) >> 0x18));
    ov112_021EA76C(r4);
    ov112_021EA60C(r4);
    ov112_021ED314(r5);
    ov112_021EDAF4(r4, r5);
    // sub r1, #0x14
    // add r1, r4, r1
    ov112_021EAA98(r4, 0x0001F2D4, 2);
    // strh r1, [r4, r0]
    ov112_021EAA10(r4, 1);
    // strh r1, [r4, r0]
    ov112_021E76A8(0x0001F2D4, 0);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EDB9A: ; jump table
    *((u16*)(r4 + 0x14)) = 0x2a;
    *((u16*)(r4 + 0x14)) = 0x2a;
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    // add r1, r4, r2
    // add r2, r4, r2
    sub_02032674(*((u32*)(r4 + 0x0001E440)), (0x0001D758 + 4));
    ov112_021ED590(r4);
    sub_02032644(*((u32*)(r4 + 0x0001E440)));
    ov112_021EA688(r4, 8);
    // add r1, r4, r1
    ov112_021EAA98(r4, 0x0001F2C0, 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x0001E538)), 0);
    *((u32*)(r4 + 0xc)) = 0x3b;
    ov112_021E7464(0x3b);
    ov112_021E7668(0x20);
    ov112_021E98E8(r4, 1);
    ov112_021E9888(5);
    // tst r0, r1
    // tst r0, r1
    *((u16*)(r4 + 0x14)) = 0x21;
    *((u32*)(r4 + 0xc)) = 0x42;
    ov112_021E7464(0x42, *((u32*)(gSystem + 0x48)));
    ov112_021EC440(r4, 3, 3, 0x21);
    PlaySE(0x000005DD);
    ov112_021EA10C(r4, 2, 6);
    *((u16*)(r4 + 0x16)) = 1;
    ov112_021E98E8(r4, 0);
}





void ov112_021EDCB0(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EDCC6: ; jump table
}





void ov112_021EDD08(void) {
    ov112_021EA570();
    ov112_021EDCB0(*((u16*)(r4 + 0x14)));
    *((u16*)(r4 + 0x14)) = r0;
    ov112_021EA08C(r4, 2, *((u16*)(r4 + 0x14)));
    // str r0, [r4, r1]
}





void ov112_021EDD30(void) {
    ov112_021EA570();
    ov112_021EDCB0(*((u16*)(r4 + 0x14)));
    *((u16*)(r4 + 0x14)) = r0;
    ov112_021EA08C(r4, 2, *((u16*)(r4 + 0x14)));
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 0x42;
}





void ov112_021EDD5C(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 1);
    ov112_021EA08C(r4, 0, 7);
    // str r0, [r4, r1]
}





void ov112_021EDD80(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 1);
    ov112_021EA08C(r4, 0, 5);
    // str r0, [r4, r1]
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
}





void ov112_021EDDB4(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 1);
    ov112_021EA08C(r4, 0, 5);
    // str r0, [r4, r1]
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
}





void ov112_021EDDE8(void) {
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 0x18)), 1);
    ov112_021EA08C(r4, 0, 5);
    // str r0, [r4, r1]
    ov112_021E7CA4(r4, 2, 0xe);
    ov112_021E9F40(r4, 1);
}





void ov112_021EDE1C(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0;
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0xc));
}





void ov112_021EDE68(void) {
    ov112_021E7464();
    ov112_021ED640(r4);
    // add r1, r4, r1
    MIi_CpuClearFast(0, (0xad << 8), (0xbf << 2));
    // strb r2, [r4, r1]
    // add r3, #0x1c
    BufferBoxMonNickname(*((u32*)(r4 + 0x0001E42C)), 1, *((u32*)(r4 + 0x0001E42C)), 0x0001E42C);
    // add r0, #0x1c
    BufferBoxMonNickname(*((u32*)(r4 + r3)), 1, *((u32*)(r4 + (r3 + 4))));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    ov112_021EA08C(r4, 2, 0x18);
    // str r0, [r4, r1]
    PlayFanfare(0x000004A2, 0x0001E524);
}





void ov112_021EDF08(void) {
    // add r1, r4, r1
    ov112_021EAAE4(0x0001F2C0);
    TextPrinterCheckActive(((*((u32*)(r4 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA838(r4);
    IsFanfarePlaying();
    *((u32*)(r4 + 4)) = 5;
}





void ov112_021EDF4C(void) {
    String_New(0xc, 0x9a);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x18)), 2);
    ov112_021ED610(r5);
    // add r1, r5, r1
    CopyU16ArrayToStringN(r4, 0x00009D54, 0xc);
    // str r1, [sp]
    // str r1, [sp, #4]
    BufferString(*((u32*)(r5 + 0x0001E448)), 1, r4, ((*((u8*)(r5 + 0x00009D51)) << 0x19) >> 0x1e));
    ov112_021EA08C(r5, 2, 0x1b);
    ov112_021EA08C(r5, 2, 0x20);
    // str r0, [r5, r1]
    ov112_021E7464(0x0001E524);
    String_Delete(r4);
}





void ov112_021EDFE8(void) {
    AllocMonZeroed(0x9a);
    Pokewalker_TryGetBoxMon(*((u32*)(r5 + 0x0001E440)), r0);
    GetMonData(r4, 5, 0);
    GetMonData(r4, 0x70, 0);
    // add r1, #0xd
    Heap_Free(r4, ((*((u8*)(r5 + 0x00009D44)) << 0x1b) >> 0x1b), *((u16*)(r5 + 0x00009D44)));
}





void ov112_021EE044(void) {
    // add r1, r4, r1
    ov112_021EAAE4(0x0001F2C0);
    TextPrinterCheckActive(((*((u32*)(r4 + 0x0001E524)) << 0x18) >> 0x18));
    IsFanfarePlaying();
    ov112_021ED610(r4);
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x00009D44, 0x10);
    // strb r2, [r4, r1]
    ov112_021ED640(r4, 0x000010E7, (*((u8*)(r4 + 0x000010E7)) & ~(4)));
    // add r1, r4, r1
    MIi_CpuClearFast(0, (0xad << 8), (0xbf << 2));
    // strb r2, [r4, r1]
    ov112_021EDFE8(r4, 0x0000AABC, (*((u8*)(r4 + 0x0000AABC)) & ~(0x20)));
    *((u32*)(r4 + 4)) = 6;
}





void ov112_021EE0F4(void) {
}





void ov112_021EE10C(void) {
}





void ov112_021EE12C(void) {
    ov112_021EA08C(2, 0x1d);
    // str r0, [r4, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    ov112_021E7464();
    PlayFanfare(0x000004A1);
}





void ov112_021EE178(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    IsFanfarePlaying();
    *((u32*)(r4 + 4)) = 6;
}





void ov112_021EE1A4(void) {
}





void ov112_021EE1BC(void) {
}





void ov112_021EE1DC(void) {
}





void ov112_021EE1E8(void) {
    ov112_021E9750();
    ov112_021EA570(r4);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EA98);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EAA8);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EA98);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EAA8);
    ov112_021EA570(r4);
    *((u32*)(r4 + 4)) = 0;
}





void ov112_021EE29C(void) {
}





void ov112_021EE2B4(void) {
}





void ov112_021EE2D4(void) {
    ov112_021E7CA4(2, 0xa);
    // str r0, [sp]
    ov112_021E9FA4(r4, 5, *((u32*)(r4 + 0x0001E468)), 4);
    ov112_021E9F40(r4, 1);
    // str r1, [r4, r0]
    ov112_021EA51C(r4, 2);
}





void ov112_021EE31C(void) {
    ov112_021E9888(1);
    // mvn r0, r0
    ov112_021EC440(r4, r0, (r0 + 2), 0x33);
    PlaySE(0x000005DD);
    // tst r1, r0
    ov112_021EA51C(r4, 2);
    PlaySE(0x000005DC);
    // str r1, [r4, r0]
    // tst r1, r0
    ov112_021EA51C(r4, 3);
    PlaySE(0x000005DC);
    // str r1, [r4, r0]
    // tst r2, r1
    ov112_021EC440(r4, *((u32*)(r4 + 0x0001EC50)), (*((u32*)(r4 + 0x0001EC50)) + 2), 0x33);
    PlaySE(0x000005DD);
    // tst r0, r2
    ov112_021EC440(r4, 3, 0x33);
    PlaySE(0x000005DC);
}





void ov112_021EE3E0(void) {
    ov112_021EA570();
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 1, 0, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r4 + 0x18)), 2, 0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EA98);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x0001EAA8);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x18)), 2);
    // str r1, [r4, r0]
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EE464(void) {
    // add r1, r4, r5
    Pokewalker_TryGetBoxMon(*((u32*)(r0 + 0x0001E440)));
    ov112_021EA5A4(r4, 0);
    // add r2, r4, r5
    BufferBoxMonNickname(*((u32*)(r4 + 0x0001E448)), 1);
    // add r0, r4, r5
    // add r1, r4, r2
    // sub r2, #0x10
    // add r2, r4, r2
    ov112_021E9290(0x0001D7AC, 0);
    ov112_021EC460(r4, 2, 0x1a, 0x35);
}





void ov112_021EE4B8(void) {
}





void ov112_021EE4D0(void) {
    // str r1, [r4, r0]
    MTRandom(0x37, (*((u32*)(r0 + 0x0001F2D0)) + 1));
    _u32_div_f(0xb4);
    ov112_021EA7D0(r4);
    ov112_021ED314(*((u32*)(r4 + 0x0001F2D0)));
}





u8 ov112_021EE510(void) {
}





void ov112_021EE514(void) {
}





void ov112_021EE524(void) {
}





void ov112_021EE52C(void) {
}





void ov112_021EE550(void) {
}





void ov112_021EE570(void) {
}





void ov112_021EE594(void) {
    ManagedSprite_IsAnimated(*((u32*)(r0 + 0x0001E530)));
    ov112_021EA570(r4);
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0xc));
}





void ov112_021EE5B8(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





u8 ov112_021EE604(void) {
}





void ov112_021EE608(void) {
    // tst r1, r2
    *((u32*)(r0 + 4)) = 6;
}





u8 ov112_021EE624(void) {
}





void ov112_021EE628(void) {
    SaveArray_PCStorage_Get(*((u32*)(r0 + 0x20)));
    sub_020326A4(*((u32*)(r5 + 0x0001E440)), 2, *((u32*)(r5 + 0x0001D770)));
    sub_02032720(*((u32*)(r5 + 0x0001E440)), *((u32*)(r5 + 0x0001D798)));
    PCStorage_GetMonByIndexPair(r7, r4, r6);
    Pokewalker_SetBoxMon(*((u32*)(r5 + 0x0001E440)), r0);
    PCStorage_DeleteBoxMonByIndexPair(r7, r4, r6);
    ov112_021EECF0(r5);
}





void ov112_021EE688(void) {
    // blx r1
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 8)) = 0;
}





u8 ov112_021EE6AC(void) {
}





void ov112_021EE6B0(void) {
    ov112_021EA08C(2, 0xd);
    // str r0, [r4, r1]
    ov112_021EA5A4(r4, 0);
}





void ov112_021EE6D0(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA17C(r4);
}





u32 ov112_021EE6F8(void) {
}





void ov112_021EE70C(void) {
}





void ov112_021EE718(void) {
    sub_0203263C(*((u32*)(r0 + 0x0001E440)));
    *((u32*)(r4 + 4)) = 0xa;
    *((u32*)(r4 + 0x10)) = 3;
}





void ov112_021EE73C(void) {
}





void ov112_021EE754(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    *((u32*)(r4 + 4)) = 0xb;
}





void ov112_021EE778(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EE7A8(void) {
    SaveArray_PCStorage_Get(*((u32*)(r0 + 0x20)));
    // str r0, [sp, #4]
    AllocMonZeroed(0x9a);
    Mon_GetBoxMon();
    // add r2, sp, #8
    // add r1, sp, #8
    // add r2, #2
    sub_02032688(*((u32*)(r5 + 0x0001E440)));
    // add r0, sp, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    Pokewalker_TryGetBoxMon(*((u32*)(r5 + 0x0001E440)), r6);
    ov112_021EE8BC(r6, r4, *((u32*)(r5 + 0x0001EC7C)));
    // strh r0, [r5, r1]
    ov112_021EE970(r6, *((u32*)(r5 + 0x0001EC7C)));
    // str r1, [r5, r0]
    Pokewalker_ClearBoxMon(*((u32*)(r5 + 0x0001E440)), 0);
    MTRandom();
    _u32_div_f(0x18);
    // str r0, [sp]
    // add r2, r5, r7
    ov112_021EE9A4(r4, *((u32*)(r5 + 0x0001E438)), r1);
    Mon_GetBoxMon(r4);
    // str r1, [sp]
    BoxMonSetTrainerMemo(*((u32*)(r5 + 0x0001E438)), 0, 0xe9);
    // ldr r0, [sp, #4]
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    PCStorage_FindFirstEmptySlot();
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    PCStorage_PlaceMonInBoxByIndexPair(r6);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    PCStorage_GetMonByIndexPair();
    // str r0, [r5, r1]
    // add r1, #0x14
    Pokedex_SetMonSeenFlag(*((u32*)(r5 + 0x0001E430)), r4);
    Pokedex_SetMonCaughtFlag(*((u32*)(r5 + 0x0001E444)), r4);
    Heap_Free(r4);
}





void ov112_021EE8BC(void) {
    // str r0, [sp]
    // add r0, r0, r4
    // str r0, [sp]
    // add r2, sp, #0
}





void ov112_021EE920(void) {
    // strh r1, [r4, r0]
    sub_02032764(*((u32*)(r0 + 0x0001E440)), 0);
    sub_0203276C(*((u32*)(r4 + 0x0001E440)));
    Bag_AddItem(*((u32*)(r4 + 0x0001E434)), 0xcf, 1, 0x9a);
    // strh r1, [r4, r0]
}





void ov112_021EE970(void) {
    GetBoxMonData(9, 0);
    // add r1, sp, #0
    // strb r0, [r1]
    // strb r0, [r1]
    // add r2, sp, #0
    SetBoxMonData(r4, 9);
}





void ov112_021EE9A4(void) {
    // str r3, [sp, #4]
    // ldr r0, [sp, #0x20]
    // ldr r3, [sp, #4]
    // str r0, [sp]
}





void ov112_021EE9E4(void) {
    // add r0, sp, #0x10
    // strb r1, [r0]
    // and r0, r3
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r7, [sp, #0xc]
    // add r2, #8
    // add r4, #0xa
    // add r2, sp, #0x10
}





void ov112_021EEA7C(void) {
    Bag_AddItem(*((u32*)(r0 + 0x0001E434)), *((u16*)(r0 + 0x00009DAC)), 1, 0x9a);
    Bag_AddItem(*((u32*)(r5 + 0x0001E434)), *((u16*)(r5 + 0x00009DB8)), 1, 0x9a);
    Bag_AddItem(*((u32*)(r5 + 0x0001E434)), *((u16*)(r5 + 0x0000B002)), 1, 0x9a);
}





void ov112_021EEAF0(void) {
    SaveArray_PCStorage_Get(*((u32*)(r0 + 0x20)));
    AllocMonZeroed(0x9a);
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r5 + 0x0001E438)), 0x9a);
    // str r0, [sp, #0xc]
    // add r2, sp, #0x18
    // add r1, sp, #0x1c
    // add r2, #2
    sub_02032688(*((u32*)(r5 + 0x0001E440)));
    // add r0, sp, #0x18
    // str r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0x20]
    // add r6, r5, r0
    MTRandom(*((u16*)r6));
    _u32_div_f(0x18);
    // str r0, [sp]
    ov112_021EE9A4(r4, *((u32*)(r5 + 0x0001E438)), r6, r1);
    Mon_GetBoxMon(r4);
    // str r1, [sp]
    BoxMonSetTrainerMemo(*((u32*)(r5 + 0x0001E438)), 0, 0xe9);
    Mon_GetBoxMon(r4);
    // str r0, [sp, #0x14]
    // add r1, sp, #0x24
    // add r2, sp, #0x20
    PCStorage_FindFirstEmptySlot(r7);
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x14]
    PCStorage_PlaceMonInBoxByIndexPair(r7);
    Pokedex_SetMonSeenFlag(*((u32*)(r5 + 0x0001E444)), r4);
    Pokedex_SetMonCaughtFlag(*((u32*)(r5 + 0x0001E444)), r4);
    // ldr r0, [sp, #8]
    // add r6, #0x10
    // str r0, [sp, #8]
    String_New(0x10, 0x9a);
    // add r1, r5, r2
    // str r1, [sp, #0x10]
    // str r0, [sp, #4]
    // add r2, #0x1e
    // add r1, r5, r2
    CopyU16ArrayToString(*((u16*)r1), (0xad << 8));
    ZeroMonData(r4);
    Mon_GetBoxMon(r4);
    MTRandom();
    _u32_div_f(0x18);
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    ov112_021EE9E4(r4, *((u32*)(r5 + 0x0000AD14)), r1);
    // add r2, sp, #0x18
    // add r2, #1
    // add r0, sp, #0x18
    *((u8*)((*((u8*)(r5 + 0x0000AD2E)) << 0x1f) + 1)) = ((*((u8*)(r5 + 0x0000AD2E)) << 0x1f) >> 0x1f);
    SetBoxMonData(r6, 0x9d);
    // ldr r2, [sp, #4]
    SetBoxMonData(r6, 0x91);
    Mon_GetBoxMon(r4);
    // str r1, [sp]
    BoxMonSetTrainerMemo(*((u32*)(r5 + 0x0001E438)), 4, *((u16*)(r5 + 0x0000AD1A)));
    // add r2, r5, r2
    SetBoxMonData(r6, 0xa, 0x0000AD2F);
    // add r0, sp, #0x18
    // strb r1, [r0]
    // add r2, sp, #0x18
    SetBoxMonData(r6, 0x6e);
    // add r2, r5, r2
    SetBoxMonData(r6, 0x9b, 0x0000AD30);
    // add r1, sp, #0x24
    // add r2, sp, #0x20
    PCStorage_FindFirstEmptySlot(r7);
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    PCStorage_PlaceMonInBoxByIndexPair(r7, r6);
    Pokedex_SetMonSeenFlag(*((u32*)(r5 + 0x0001E444)), r4);
    Pokedex_SetMonCaughtFlag(*((u32*)(r5 + 0x0001E444)), r4);
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    PCStorage_GetMonByIndexPair(r7);
    // str r0, [r5, r1]
    // ldr r0, [sp, #4]
    String_Delete(0x0001E430);
    // ldr r0, [sp, #0xc]
    String_Delete();
    Heap_Free(r4);
}





void ov112_021EECF0(void) {
}





void ov112_021EED08(void) {
    // str r2, [r4, r1]
    ov112_021EE7A8(*((u32*)(r0 + 0x10)), 0);
    ov112_021EEAF0(r4, 1);
    ov112_021EEA7C(r4);
    ov112_021EE920(r4);
    sub_020326A4(*((u32*)(r4 + 0x0001E440)), 1, 0);
    // add r1, r4, r2
    // sub r2, #0x10
    // add r2, r4, r2
    ov112_021E9290(*((u32*)(r4 + 0x0001E430)), 0x0001D7AC, 0);
    ov112_021ED0C8(r4);
    ov112_021EAA10(r4);
    // strb r1, [r4, r0]
    PlayFanfare(0x000004A2, 0);
    ov112_021EAA10(r4);
    // strh r1, [r4, r0]
    ov112_021E95A0(r4, 0x1f);
    *((u32*)(r4 + 8)) = 0;
    ov112_021EEA7C(0);
    ov112_021EEAF0(r4, 0);
    *((u32*)(r4 + 8)) = 5;
    ov112_021EE7A8(5);
    // add r1, r4, r2
    // sub r2, #0x10
    // add r2, r4, r2
    ov112_021E9290(*((u32*)(r4 + 0x0001E430)), 0x0001D7AC, 0);
    ov112_021ED0C8(r4);
    *((u32*)(r4 + 8)) = 0;
    sub_020326A4(*((u32*)(r4 + 0x0001E440)), 1, 0);
    // strb r2, [r4, r1]
}





void ov112_021EEDFC(void) {
    // blx r1
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 8)) = 0;
}





void ov112_021EEE20(void) {
}





void ov112_021EEE2C(void) {
    ov112_021EA08C(2, 0xd);
    // str r0, [r4, r1]
    ov112_021EA5A4(r4, 0);
}





void ov112_021EEE4C(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    sub_02006B84(*((u16*)(r4 + 0x0001F2D6)));
    IsFanfarePlaying();
    ov112_021EA17C(r4);
}





u32 ov112_021EEE8C(void) {
}





void ov112_021EEEA0(void) {
}





void ov112_021EEEAC(void) {
}





void ov112_021EEEC0(void) {
    ov112_021EA08C(2, 0xd);
    // str r0, [r4, r1]
    ov112_021EA5A4(r4, 0);
}





void ov112_021EEEE0(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    ov112_021EA17C(r4);
}





u32 ov112_021EEF08(void) {
}





void ov112_021EEF1C(void) {
}





void ov112_021EEF28(void) {
}





void ov112_021EEF30(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EEF68(void) {
    ov112_021E77E4(*((u32*)(r0 + 0x0001D764)));
    // str r0, [r5, r6]
    BgConfig_Alloc(0x9a);
    *((u32*)(r5 + 0x18)) = r0;
    ov112_021EF15C();
    sub_020932E0(0x9a, 1, 0x12);
    // str r0, [r5, r1]
    ov112_021F039C(0x9a, (r6 + 4));
    // add r1, #8
    // str r0, [r5, r1]
    ov112_021EF17C(*((u32*)(r5 + 0x18)), r6);
    ov112_021EF19C();
    // add r0, r5, r0
    ov112_021EF1CC(r6);
    // str r1, [r5, r0]
    SaveArray_PCStorage_Get(*((u32*)(r5 + 0x20)), 0);
    SaveArray_Party_Get(*((u32*)(r5 + 0x20)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0xc
    // add r1, r5, r0
    // str r1, [sp, #0x18]
    // sub r0, #8
    // str r1, [sp, #0x1c]
    // str r5, [sp, #0x20]
    sub_02093440(*((u32*)(r5 + r6)), *((u32*)(r5 + 0x18)), r4, r0);
    // add r0, #8
    ov112_021F03BC(*((u32*)(r5 + r6)), *((u32*)(r5 + 0x18)));
    // add r1, r5, r1
    Main_SetVBlankIntrCB(ov112_021EF310, r6);
    // str r0, [r5, r6]
}





void ov112_021EF03C(void) {
    // add r4, r5, r0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EF058: ; jump table
    // str r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    // str r0, [r4]
    IsPaletteFadeFinished(2);
    // str r0, [r4]
    sub_020935E0(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x14)) = 0;
    // str r0, [r4]
    *((u32*)(r4 + 0x14)) = 1;
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [r4]
    IsPaletteFadeFinished(5);
    ov112_021EF31C(r4, r5);
    sub_02093A40(*((u32*)(r4 + 4)));
    ov112_021F050C(*((u32*)(r4 + 8)));
}





void ov112_021EF100(void) {
    // str r0, [r4, r1]
    Main_SetVBlankIntrCB(0, 0);
    sub_02093354(*((u32*)(r4 + 0x0001D768)));
    ov112_021F051C(*((u32*)(r4 + 0x0001D76C)));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    Heap_Free(*((u32*)(r4 + 0x18)));
    ov112_021E7768(r4);
    *((u32*)(r4 + 4)) = 3;
}





void ov112_021EF15C(void) {
}





void ov112_021EF17C(void) {
}





void ov112_021EF19C(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x9a);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}





void ov112_021EF1CC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
}





void ov112_021EF1F0(void) {
    // str r0, [r5]
    // add r2, #0x18
    // str r0, [r5]
}





void ov112_021EF298(void) {
    // str r0, [r4]
    // str r0, [r4]
}





void ov112_021EF300(void) {
    // add r3, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // add r2, r3, #0
    // ldr r3, _021EF30C ; =PCStorage_GetBoxName
    // bx r3
    // _021EF30C: .word PCStorage_GetBoxName
    // TODO: decompile
}





void ov112_021EF310(void) {
}





void ov112_021EF31C(void) {
    SaveArray_Party_Get(*((u32*)(r1 + 0x20)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x10)));
    GetMonData(5, 0);
    *((u16*)(r5 + 0x18)) = r0;
    GetMonData(r6, 0x70, 0);
    // add r1, #0x30
    // strb r0, [r1]
    // add r2, #0x1a
    GetMonData(r6, 0x75, r5);
    MonIsShiny(r6);
    // add r1, #0x31
    // strb r0, [r1]
    GetMonData(r6, 0x6f, 0);
    // add r5, #0x32
    // strb r0, [r5]
    // str r6, [r4, r0]
    // str r1, [r4, r0]
    SaveArray_PCStorage_Get((0x0001E42C + 4), 0);
    PCStorage_GetMonByIndexPair(r6, *((u32*)(r5 + 0x10)));
    GetBoxMonData(0xac, 0);
    // str r6, [r4, r0]
    // str r1, [r4, r0]
    SaveArray_PCStorage_Get(*((u32*)(r4 + 0x20)), 0);
    // add r3, sp, #0
    ov112_021EF1F0(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0x10)));
    // ldr r0, [sp]
    *((u16*)(r5 + 0x18)) = r0;
    // add r0, sp, #0
    // add r0, #0x30
    // strb r1, [r0]
    // add r0, #0x1a
    // add r1, sp, #0x18
    CopyU16StringArrayN(r5, *((u16*)(r0 + 0xa)), 0xb);
    // add r1, sp, #0
    // add r0, #0x31
    // add r5, #0x32
    // strb r2, [r0]
    // strb r0, [r5]
}





void ov112_021EF3F8(void) {
    // add r0, r2, r0
    // str r0, [sp]
    // mvn r0, r0
    // add r0, sp, #0x34
    *((u8*)(0 + 9)) = 2;
    SaveArray_Party_Get(*((u32*)(r2 + 0x20)), 2);
    Party_GetMonByIndex(r4);
    GetMonData(0, 0);
    // str r0, [sp, #0x34]
    GetMonData(r7, 5, 0);
    // add r1, sp, #4
    *((u16*)(r1 + 0x34)) = r0;
    GetMonData(r7, 0x70, 0);
    // add r1, sp, #0x34
    *((u8*)(r1 + 7)) = r0;
    // add r2, sp, #0x3c
    // add r2, #2
    GetMonData(r7, 0x75);
    MonIsShiny(r7);
    // add r1, sp, #0x34
    *((u8*)(r1 + 6)) = r0;
    GetMonData(r7, 0x6f, 0);
    // add r1, sp, #0x34
    *((u8*)(r1 + 8)) = r0;
    GetMonData(r7, 0xb, 0);
    // add r2, sp, #0x34
    // asr r6, r4
    // tst r6, r0
    // add r6, r2, r4
    // add r6, #0x20
    // strb r3, [r6]
    // add r6, r2, r4
    // add r6, #0x20
    // strb r1, [r6]
    GetMonData(r7, 6, 0, 1);
    // add r1, sp, #0x34
    *((u16*)(r1 + 0x26)) = r0;
    GetMonData(r7, 0xa1, 0);
    // add r1, sp, #0x54
    *((u8*)(r1 + 8)) = r0;
    // ldr r0, [sp]
    // add r1, sp, #0x34
    ov112_021F04DC(*((u32*)(r0 + 8)));
    SaveArray_PCStorage_Get();
    // add r3, sp, #4
    ov112_021EF1F0(r5, r4);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // str r0, [sp, #0x34]
    // add r0, sp, #4
    *((u16*)(r0 + 0x34)) = r1;
    // add r0, sp, #0x34
    *((u8*)(r0 + 7)) = *((u16*)(r0 + 0xa));
    // add r0, sp, #0x3c
    // add r0, #2
    // add r1, sp, #0x1c
    CopyU16StringArrayN(*((u16*)(r0 + 0xa)), 0xb);
    // add r0, sp, #4
    // add r2, sp, #0x34
    *((u8*)(r2 + 6)) = *((u16*)(r0 + 0x10));
    *((u8*)(r2 + 8)) = *((u16*)(r0 + 0x12));
    // asr r6, r5
    // tst r6, r0
    // add r6, r2, r5
    // add r6, #0x20
    // strb r3, [r6]
    // add r6, r2, r5
    // add r6, #0x20
    // strb r1, [r6]
    // add r0, sp, #4
    // add r1, sp, #0x34
    *((u16*)(0 + 0x26)) = *((u16*)(1 + 0xc));
    // add r0, sp, #0x54
    *((u8*)(1 + 8)) = *((u16*)(1 + 0x14));
    // ldr r0, [sp]
    ov112_021F04DC(*((u32*)(1 + 8)), 0, *((u16*)(1 + 0x14)), 1);
    // add r1, sp, #0x34
    *((u8*)(r1 + 9)) = 0;
    // ldr r0, [sp]
    ov112_021F04DC(*((u32*)(0 + 8)));
}





void ov112_021EF568(void) {
    // str r2, [r0, r1]
    // add r2, r0, r2
    // str r2, [r0, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    GF_SndStartFadeOutBGM(0, 0x10);
}





void ov112_021EF5AC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EF5C2: ; jump table
    IsPaletteFadeFinished((*((u16*)(*((u32*)(r0 + 8)) + 6)) << 0x10));
    ov112_021E77E4(r4);
    // add r0, r4, r0
    ov112_021F31D8(0x00009DFC);
    *((u32*)(r4 + 8)) = 1;
    // add r1, r4, r1
    OverlayManager_New(ov112_021FF124, 0x0001D750, 0x9a);
    *((u32*)(r4 + 0x1c)) = r0;
    *((u32*)(r4 + 8)) = 2;
    OverlayManager_Run(*((u32*)(r4 + 0x1c)));
    OverlayManager_Delete(*((u32*)(r4 + 0x1c)));
    *((u32*)(r4 + 8)) = 3;
}





void ov112_021EF62C(void) {
}





u8 ov112_021EF640(void) {
}





void ov112_021EF644(void) {
    // tst r1, r2
    *((u32*)(r0 + 4)) = 3;
}





u8 ov112_021EF660(void) {
}





u32 ov112_021EF664(void) {
}





void ov112_021EF67C(void) {
    // blx r1
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 8)) = 0;
}





void ov112_021EF6A0(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021EF700(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 1, 0, 0);
    ov112_021E7CA4(r4, 2, 0xf);
    ov112_021E9FD8(r4, 1, *((u32*)(r4 + 0x0001E494)), 0);
}





void ov112_021EF758(void) {
    sub_02032718(*((u32*)(r0 + 0x0001E440)));
    BufferPokewalkerCourseName(*((u32*)(r5 + 0x0001E448)), 2, ((r0 << 0x18) >> 0x18));
    // sub r4, r1, r0
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    sub_02032674(*((u32*)(r5 + 0x0001E440)), *((u32*)(r5 + 0x000010F0)));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 5, r4, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 3, *((u16*)(r5 + 0x00009D7A)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 6, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 7, 7);
    ov112_021E9F5C(r5, 2, 0x38, (0xc1 << 0xa));
    ov112_021E9F5C(r5, 3, 0x39, (0xc1 << 0xa));
    ov112_021E9F5C(r5, 4, 0x3a, (0xc1 << 0xa));
    // str r0, [sp]
    ov112_021E9FA4(r5, 5, *((u32*)(r5 + 0x0001E4B4)), 0);
    ov112_021E9F5C(r5, 6, 0x3c, (0xc1 << 0xa));
    // str r0, [sp]
    ov112_021E9FA4(r5, 7, *((u32*)(r5 + 0x0001E4BC)), 0);
    ov112_021E9F5C(r5, 8, 0x3e, (0xc1 << 0xa));
    ov112_021EA670(r5, 9);
    ov112_021EA6B8(r5, 9, 0xd2, 0x40);
    // add r3, #0xd
    ov112_021EAB78(r5, 0, *((u16*)(r5 + 0x00009D44)), ((*((u8*)(r5 + 0x00009D44)) << 0x1b) >> 0x1b));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}





void ov112_021EF8C0(void) {
}





void ov112_021EF8D4(void) {
    sub_02032718(*((u32*)(r0 + 0x0001E440)));
    BufferPokewalkerCourseName(*((u32*)(r5 + 0x0001E448)), 1, ((r0 << 0x18) >> 0x18));
    String_New(0xc, 0x9a);
    // add r1, r5, r1
    CopyU16ArrayToStringN(0x00009D54, 0xb);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferString(*((u32*)(r5 + 0x0001E448)), 1, r4, ((*((u8*)(r5 + 0x00009D51)) << 0x19) >> 0x1e));
    String_Delete(r4);
    ov112_021EA08C(r5, 0, 0x2c);
    // str r0, [r5, r1]
    *((u32*)(r5 + 0xc)) = 4;
}





void ov112_021EF958(void) {
    ov112_021EA08C(5, 0, 0x34);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 5;
    PlayFanfare((0x4a << 4), 0x0001E524);
    // strh r1, [r4, r0]
}





void ov112_021EF994(void) {
    ov112_021EA08C(0, 0x2e);
    PlayFanfare(0x000004A1);
    ov112_021EA08C(r4, 0, 0x2d);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 6;
}





void ov112_021EF9D4(void) {
    BufferPokewalkerCourseName(*((u32*)(r0 + 0x0001E448)), 4, ((*((u32*)(r0 + 0x0001EC78)) << 0x18) >> 0x18));
    ov112_021EA08C(r4, 0, 0x30);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 7;
    // str r1, [r4, r0]
}





void ov112_021EFA1C(void) {
    PlayFanfare(0x000004A2);
    ov112_021EA08C(r4, 0, 0x37);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 8;
}





void ov112_021EFA44(void) {
    // strh r1, [r4, r2]
    ov112_021EA08C(0, 0x35);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 9;
}





void ov112_021EFA74(void) {
    ov112_021EA08C(0, 0x36);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 0xa;
    PlayFanfare(0x000004A2, 0x0001E524);
}





void ov112_021EFA9C(void) {
}





void ov112_021EFAC0(void) {
}





void ov112_021EFAD4(void) {
    // add r0, #0x10
    // sub r0, #0x57
}





void ov112_021EFB14(void) {
    ov112_021E9C10(4);
    ov112_021E9A78(r5, 5);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x18)), 1, 0, 0);
    // add r0, r5, r0
    // add r1, r5, r1
    ov112_021EFAD4(0x00009D70, 0x0000AABC);
    ov112_021EA688(r5, 9);
    ov112_021E7CA4(r5, 2, 0xf);
    ov112_021E9FD8(r5, 1, *((u32*)(r5 + 0x0001E4A0)), 0);
    ov112_021E9FD8(r5, 1, *((u32*)(r5 + 0x0001E4A0)), 0);
    // add r1, #9
    ov112_021EA688(r5, 0);
    ov112_021EA6B8(r5, 9, 0x28, 0x40);
    ov112_021EA6B8(r5, 0xa, 0x90, 0x40);
    ov112_021EA6B8(r5, 0xb, 0x28, 0x60);
    ov112_021EA6B8(r5, 0xc, 0x90, 0x60);
    // add r7, r5, r0
    // add r1, #9
    ov112_021EA670(r5, 0);
    // add r1, #8
    BufferSpeciesName(*((u32*)(r5 + 0x0001E448)), r4, *((u16*)(r6 + 0x00009D7C)));
    // add r2, #0x43
    ov112_021E9F5C(r5, (r4 + 3), r4, (0xc1 << 0xa));
    ov112_021EAB78(r5, r4, *((u16*)(r6 + 0x00009D7C)), ((*((u8*)r7) << 0x1b) >> 0x1b));
    // add r6, #0x10
    // add r7, #0x10
    // add r4, r5, r0
    ov112_021EA670(r5, 0xc);
    BufferSpeciesName(*((u32*)(r5 + 0x0001E448)), 0xb, *((u16*)r4));
    ov112_021E9F5C(r5, 6, 0x46, (0xc1 << 0xa));
    ov112_021EAB78(r5, 3, *((u16*)r4), ((*((u8*)(r4 + 0xd)) << 0x1b) >> 0x1b));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}





void ov112_021EFC9C(void) {
}





void ov112_021EFCB0(void) {
    ov112_021EA08C(0, 0x31);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 0xf;
    PlayFanfare(0x000004A2, 0x0001E524);
}





void ov112_021EFCD8(void) {
}





void ov112_021EFCFC(void) {
    // add r1, #9
}





void ov112_021EFD24(void) {
    // strh r6, [r5, r0]
}





void ov112_021EFD4C(void) {
    // push {r4, r5}
    // mov r1, #0
    // ldr r2, _021EFD98 ; =0x00009DAC
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrh r3, [r5, r2]
    // cmp r3, #0
    // beq _021EFD5E
    // add r1, r1, #1
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #3
    // blt _021EFD56
    // ldr r2, _021EFD9C ; =0x00009DB8
    // mov r5, #0
    // add r4, r0, #0
    // ldrh r3, [r4, r2]
    // cmp r3, #0
    // beq _021EFD74
    // add r1, r1, #1
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #0xa
    // blt _021EFD6C
    // ldr r2, _021EFDA0 ; =0x0000AABC
    // ldrb r2, [r0, r2]
    // lsl r2, r2, #0x19
    // lsr r2, r2, #0x1f
    // beq _021EFD90
    // ldr r2, _021EFDA4 ; =0x0000B002
    // ldrh r0, [r0, r2]
    // cmp r0, #0
    // beq _021EFD90
    // add r1, r1, #1
    // add r0, r1, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _021EFD98: .word 0x00009DAC
    // _021EFD9C: .word 0x00009DB8
    // _021EFDA0: .word 0x0000AABC
    // _021EFDA4: .word 0x0000B002
    // TODO: decompile
}





void ov112_021EFDA8(void) {
    ov112_021E9C10(5);
    ov112_021E9A78(r7, 6);
    ov112_021EFD4C(r7);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r7 + 0x18)), 1, 0, 0);
    ov112_021E7CA4(r7, 2, 0xf);
    ov112_021E9FD8(r7, 1, *((u32*)(r7 + 0x0001E4A4)), 0);
    // add r1, sp, #0x10
    MIi_CpuClearFast(0, 0x1c);
    // add r0, sp, #0x10
    ov112_021EFD24(*((u16*)(r7 + 0x00009DAC)));
    // add r0, sp, #0x10
    ov112_021EFD24(*((u16*)(r7 + 0x00009DB8)));
    // add r0, sp, #0x10
    ov112_021EFD24(((*((u8*)(r7 + 0x0000AABC)) << 0x19) >> 0x1f), *((u16*)(r7 + 0x0000B002)));
    // add r1, r7, r1
    MIi_CpuClearFast(0, 0x0000AABC, 0x000006C8);
    // add r1, r7, r1
    MIi_CpuClearFast(0, 0x00009D70, 0x00000D4C);
    String_New(0x13, 0x9a);
    // add r4, sp, #0x10
    GetItemNameIntoString(r0, *((u16*)r4), 0x9a);
    // str r0, [sp]
    ov112_021E9FA4(r7, (r5 + 2), r6, 0);
    String_Delete(r6);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}





void ov112_021EFED8(void) {
}





void ov112_021EFEEC(void) {
    ov112_021EA08C(0, 0x32);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 0x14;
    PlayFanfare(0x000004A2, 0x0001E524);
}





void ov112_021EFF14(void) {
}





void ov112_021EFF38(void) {
}





void ov112_021EFF4C(void) {
}





void ov112_021EFF70(void) {
}





void ov112_021EFF84(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 1, 0, 0);
    ov112_021E7CA4(r5, 2, 0xf);
    ov112_021E9FD8(r5, 1, *((u32*)(r5 + 0x0001E498)), r4);
    sub_02032718(*((u32*)(r5 + 0x0001E440)));
    BufferPokewalkerCourseName(*((u32*)(r5 + 0x0001E448)), 2, ((r0 << 0x18) >> 0x18));
    // sub r4, r1, r0
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    sub_02032674(*((u32*)(r5 + 0x0001E440)), *((u32*)(r5 + 0x000010F0)));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 5, r4, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 3, *((u16*)(r5 + 0x00009D7A)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 6, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 7, 7);
    // str r0, [sp]
    ov112_021E9FA4(r5, 5, *((u32*)(r5 + 0x0001E4B4)), 0);
    ov112_021E9F5C(r5, 6, 0x3c, (0xc1 << 0xa));
    // str r0, [sp]
    ov112_021E9FA4(r5, 7, *((u32*)(r5 + 0x0001E4BC)), 0);
    ov112_021E9F5C(r5, 8, 0x3e, (0xc1 << 0xa));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}





void ov112_021F00CC(void) {
}





void ov112_021F00E0(void) {
    ov112_021EA08C(0, 0x2e);
    ov112_021EA08C(0, 0x2d);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 0x1b;
}





void ov112_021F0114(void) {
    BufferPokewalkerCourseName(*((u32*)(r0 + 0x0001E448)), 4, ((*((u32*)(r0 + 0x0001EC78)) << 0x18) >> 0x18));
    ov112_021EA08C(r4, 0, 0x30);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 0x1c;
    // str r1, [r4, r0]
}





void ov112_021F015C(void) {
}





void ov112_021F0180(void) {
}





void ov112_021F0194(void) {
}





void ov112_021F01B8(void) {
}





void ov112_021F01CC(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x18)), 1, 0, 0);
    ov112_021E7CA4(r5, 2, 0xf);
    ov112_021E9FD8(r5, 1, *((u32*)(r5 + 0x0001E49C)), r4);
    sub_02032718(*((u32*)(r5 + 0x0001E440)));
    BufferPokewalkerCourseName(*((u32*)(r5 + 0x0001E448)), 2, ((r0 << 0x18) >> 0x18));
    // sub r4, r1, r0
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    sub_02032674(*((u32*)(r5 + 0x0001E440)), *((u32*)(r5 + 0x000010F0)));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 5, r4, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 3, *((u16*)(r5 + 0x00009D7A)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 6, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x0001E448)), 7, 7);
    // str r0, [sp]
    ov112_021E9FA4(r5, 5, *((u32*)(r5 + 0x0001E4B4)), 0);
    ov112_021E9F5C(r5, 6, 0x3c, (0xc1 << 0xa));
    // str r0, [sp]
    ov112_021E9FA4(r5, 7, *((u32*)(r5 + 0x0001E4BC)), 0);
    ov112_021E9F5C(r5, 8, 0x3e, (0xc1 << 0xa));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}





void ov112_021F0314(void) {
}





void ov112_021F0328(void) {
    ov112_021EA08C(0, 0x2f);
    PlayFanfare(0x000004A1);
    ov112_021EA08C(r4, 0, 0x2d);
    // str r0, [r4, r1]
    *((u32*)(r4 + 0xc)) = 8;
}





void ov112_021F0368(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x0001E524)) << 0x18) >> 0x18));
    IsFanfarePlaying();
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0xc));
}





void ov112_021F0394(void) {
}





void ov112_021F039C(void) {
    // str r5, [r4]
}





void ov112_021F03BC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #8
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x28
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x38
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x48
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x58
    // add r2, #0xf9
    // add r0, #0x74
    // add r4, #0x74
}





void ov112_021F04DC(void) {
}





void ov112_021F050C(void) {
}





void ov112_021F051C(void) {
    // add r0, #8
    // add r0, #0x18
    // add r0, #0x28
    // add r0, #0x38
    // add r0, #0x48
    // add r0, #0x58
    // add r5, #0x74
    // add r6, r5, r0
    // add r0, r5, r0
}





void ov112_021F05CC(void) {
    // ldr r0, [r5, r6]
    // ldr r0, [r7, r0]
    // ldr r0, [r7, r0]
}





void ov112_021F05FC(void) {
    ov112_021F0668();
    // str r1, [sp]
    // str r4, [sp, #4]
    GfGfxLoader_GXLoadPal(0x00000103, 0, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x00000103, 1, r5, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x00000103, 2, r5, 7);
    BgCommitTilemapBufferToVram(r5, 7);
    LoadFontPal0(4, (0x1e << 4), r4);
}





void ov112_021F0668(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x1c
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 7, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 7);
}





void ov112_021F06CC(void) {
    // add r0, #0x28
    // add r1, #0xa
    // str r0, [sp, #0x10]
    CopyU16ArrayToString(*((u32*)(r0 + 0x70)));
    // add r0, #0x38
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x38
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x70)), 0);
    // add r0, #0x38
    CopyWindowToVram(r5);
    GetSpeciesName(*((u16*)(r4 + 4)), *((u32*)r5));
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferString(*((u32*)(r5 + 0x6c)), 0, r0, 2);
    String_Delete(r6);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x6c)), *((u32*)(r5 + 0x68)), 0, *((u32*)r5));
    // add r0, #8
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #8
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, 0);
    // add r0, #8
    CopyWindowToVram(r5);
    String_Delete(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x6c)), 0, r7, 3);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x6c)), *((u32*)(r5 + 0x68)), 3, *((u32*)r5));
    // add r0, #0x18
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x18
    GetWindowWidth(r5);
    FontID_String_GetWidth(0, r6, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x18
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6);
    // add r0, #0x18
    CopyWindowToVram(r5);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + 0x68)), 1);
    // add r0, #0x48
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x48
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0);
    // add r0, #0x48
    CopyWindowToVram(r5);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + 0x68)), 2);
    // add r0, #0x48
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x48
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0);
    // add r0, #0x48
    CopyWindowToVram(r5);
    String_Delete(r4);
    // add r0, #0x48
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x48
    CopyWindowToVram(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x68)), 4);
    // add r0, #0x28
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x28
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0);
    // add r0, #0x28
    CopyWindowToVram(r5);
    String_Delete(r4);
    // ldr r2, [sp, #0x10]
    BufferItemName(*((u32*)(r5 + 0x6c)), 0);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x6c)), *((u32*)(r5 + 0x68)), 5, *((u32*)r5));
    // add r0, #0x58
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x58
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0);
    // add r5, #0x58
    CopyWindowToVram(r5);
    String_Delete(r4);
}





void ov112_021F0908(void) {
    // add r5, #0x74
    // add r0, #0x74
    // add r0, r7, r4
    // add r0, #0x20
    // add r6, r5, r0
    // add r6, r5, r0
}





void ov112_021F0980(void) {
    // add r5, #0x74
    // add r0, r5, r0
}





void ov112_021F09B4(void) {
    // add r1, #8
    // add r0, #8
    // str r0, [r4, r7]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x2d
    // str r0, [r5, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // sub r2, #0x14
    // str r0, [sp, #0xc]
    // add r1, #0xff
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x14
    // sub r1, #0x49
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r0, #0x14
    // sub r1, #0x4d
    // str r0, [r5, r1]
    // sub r1, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x2c
    // str r0, [sp, #0xc]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x2c
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // sub r1, #0xc
}





void ov112_021F0B28(void) {
    // add r0, #0x18
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r5, r1
    // str r0, [r1, r7]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
}





void ov112_021F0B9C(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r3, #8
    // add r0, #0xc
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x2c
    // add r2, sp, #0x2c
    // str r0, [sp]
    // add r0, sp, #0x50
    // ldr r0, [sp, #0x90]
    // str r5, [sp, #0x74]
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x94]
    // add r0, r1, r0
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x50
    // ldr r1, [sp, #0x98]
    // ldr r1, [sp, #0x9c]
}





void ov112_021F0C30(void) {
    // str r1, [r0]
    // ldr r1, [sp]
}





void ov112_021F0C50(void) {
    // str r0, [r5, r1]
    // str r0, [r5, r1]
}





void ov112_021F0C8C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0x10
    // str r0, [sp, #0xc]
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // ldr r0, [sp, #0x10]
    // add r1, r4, r1
}





void ov112_021F0D04(void) {
    // add r1, #0x24
    // add r0, r4, r0
    // add r0, r4, r1
    // add r1, #0x24
}





void ov112_021F0D48(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r0, #0x40
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // strh r7, [r5]
    *((u8*)(r0 + 2)) = *((u8*)r0);
    // add r3, r6, r3
    // add r3, r6, r3
    *((u8*)(r0 + 3)) = ((*((u8*)(*((u32*)ov112_021FF244) + 1)) << 0x18) >> 0x18);
    // ldr r1, [sp, #8]
    // add r1, r1, r7
    MI_CpuCopy8(*((u32*)ov112_021FF244), (*((u32*)ov112_021FF244) + 2), *((u8*)(r0 + 2)), (*((u8*)(*((u32*)ov112_021FF244) + 1)) << 0x18));
    // add r0, r7, r0
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}





void ov112_021F0DC0(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
}





void ov112_021F0DF4(void) {
}





void ov112_021F0E14(void) {
    SpeciesToOverworldModelIndexOffset(0x000001ED);
    // add r4, r0, r1
    OverworldModelLookupHasFemaleForm(r5, 0x00000129);
    OverworldModelLookupFormCount(r5);
    // add r4, r4, r6
}





void ov112_021F0E60(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // strb r3, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(ov112_021FF2DC + 0xc));
    *((u8*)(r1 + 2)) = *((u8*)(ov112_021FF2DC + 0xd));
    *((u8*)(r1 + 3)) = *((u8*)(ov112_021FF2DC + 0xe));
    TouchscreenHitbox_TouchNewIsIn(*((u8*)(ov112_021FF2DC + 0xe)), *((u8*)(ov112_021FF2DC + 0xd)));
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r4 + 0x78)));
}





void ov112_021F0EB4(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // strb r3, [r1]
    *((u8*)(0x0000013D + 1)) = *((u8*)(ov112_021FF2DC + 4));
    *((u8*)(0x0000013D + 2)) = *((u8*)(ov112_021FF2DC + 5));
    *((u8*)(0x0000013D + 3)) = *((u8*)(ov112_021FF2DC + 6));
    TouchscreenHitbox_TouchNewIsIn(*((u8*)(r0 + 0x0000013D)), 0x0000013D, *((u8*)(ov112_021FF2DC + 6)), *((u8*)(ov112_021FF2DC + 5)));
    // tst r0, r1
}





void ov112_021F0EFC(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // strb r3, [r1]
    *((u8*)((0x0000013D + 1) + 1)) = *((u8*)(ov112_021FF2DC + 8));
    *((u8*)((0x0000013D + 1) + 2)) = *((u8*)(ov112_021FF2DC + 9));
    *((u8*)((0x0000013D + 1) + 3)) = *((u8*)(ov112_021FF2DC + 0xa));
    TouchscreenHitbox_TouchNewIsIn((*((u8*)(r0 + (0x0000013D + 1))) - 1), (0x0000013D + 1), *((u8*)(ov112_021FF2DC + 0xa)), *((u8*)(ov112_021FF2DC + 9)));
    // tst r0, r1
}





void ov112_021F0F48(void) {
    // add r0, #0x85
    // add r0, #0x86
}





void ov112_021F0F60(void) {
    // add r0, #0x76
}





void ov112_021F0F70(void) {
    // mvn r0, r0
}





void ov112_021F0F90(void) {
    // add r6, sp, #8
    // stmia r6!, {r0, r1, r2, r3}
    // stmia r6!, {r0, r1, r2, r3}
    // mvn r0, r0
    // str r0, [sp, #4]
    GF_AssertFail(0, 0, 0, 0);
    GF_AssertFail(*((u32*)r5));
    Save_Pokewalker_Get(*((u32*)*((u32*)r5)));
    Save_PlayerData_GetProfile(*((u32*)*((u32*)r5)));
    PlayerProfile_GetTrainerGender();
    *((u32*)(r5 + 0xc)) = r0;
    PlayerProfile_GetNamePtr(r4);
    *((u32*)(r5 + 8)) = r0;
    // add r4, r0, r7
    // add r0, r1, r0
    // add r0, #0x84
    // add r1, #0x84
    // strb r0, [r1]
    // add r1, #0x84
    // strb r0, [r1]
    // add r1, #0x84
    // strb r0, [r1]
    // add r1, #0x84
    // strb r0, [r1]
    // add r0, #0x84
    // strb r2, [r5, r1]
    // add r1, #0xbc
    // str r2, [r5, r1]
    // sub r1, #0x44
    // str r2, [r5, r1]
    // strb r2, [r5, r1]
    // strb r6, [r5, r1]
    // strb r2, [r5, r1]
    // strb r6, [r5, r1]
    // add r0, #0x84
    GF_AssertFail(*((u8*)r4), (5 << 6), (*((u8*)(r5 + 0x00000142)) + 1));
    // ldr r0, [sp, #4]
    // str r1, [sp, #4]
    // add r0, sp, #8
    // str r4, [r0, r1]
    // add r0, sp, #8
    // add r0, r0, r1
    *((u32*)(*((u8*)(r5 + 0x0000013E)) + 4)) = r6;
    // strb r1, [r5, r0]
    // add r7, #0x88
    // add r2, sp, #8
    // add r1, #0x84
    // add r6, sp, #8
    // ldr r0, [sp, #4]
    GF_AssertFail(*((u32*)((r6 + 1) + (0 << 3))), *((u32*)*((u32*)((r6 + 1) + (0 << 3)))), *((u8*)(r5 + 0x0000013E)));
    // ldr r0, [sp, #4]
    // str r1, [r0]
    // add r2, #8
    // str r0, [sp]
    // add r0, sp, #8
    MATH_QSort(0, *((u8*)(r5 + 0x0000013E)), 8, ov112_021F0F70);
    // add r0, sp, #8
    // add r0, #0x76
    // strb r2, [r0]
    GF_RTC_DateTimeToSec(*((u32*)((*((u8*)(r5 + 0x0000013E)) - 1) + ((*((u8*)(r5 + 0x0000013E)) - 1) << 3))), ((*((u8*)(r5 + 0x0000013E)) - 1) << 3), 0);
    // add r1, sp, #8
    // str r0, [r1]
    // add r3, sp, #8
    // add r1, #0x76
    // add r4, #0x76
    // strb r1, [r4]
    // add r1, #0x84
    // add r1, r2, r1
    // str r1, [r0]
    // str r1, [r0]
    // add r6, sp, #8
    // add r3, #0x84
    // add r4, #0x78
    // add r0, #0x84
    // strb r1, [r0]
    // add r6, #8
    // add r2, sp, #8
    // add r7, #0x84
    // add r7, #0xc0
    // str r0, [r7]
    // add r2, #8
    // strb r1, [r5, r0]
}





void ov112_021F1288(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + 0x14)));
    // add r2, #0xf8
    NewMsgDataFromNarc(1, 0x1b, 0x1b, *((u32*)(r5 + 4)));
    *((u32*)(r5 + 0x5c)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 0xed, *((u32*)(r5 + 4)));
    *((u32*)(r5 + 0x60)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 0xde, *((u32*)(r5 + 4)));
    *((u32*)(r5 + 0x64)) = r0;
    MessageFormat_New_Custom(0xd, 0x20, *((u32*)(r5 + 4)));
    *((u32*)(r5 + 0x58)) = r0;
    // add r4, #0x18
    AddWindow(*((u32*)(r5 + 0x14)), r5, ov112_021FF350);
    // add r6, #8
    // add r4, #0x10
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r5 + 0x14)), 2, 0, 1);
    LoadFontPal1(0, (7 << 6), *((u32*)(r5 + 4)));
    LoadFontPal1(4, (7 << 6), *((u32*)(r5 + 4)));
    FontID_Alloc(4, *((u32*)(r5 + 4)));
}





void ov112_021F1324(void) {
    // add r5, #0x18
    // add r5, #0x10
}





void ov112_021F135C(void) {
    // str r3, [sp, #0x10]
    GF_AssertFail();
    // add r4, #0x18
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x58)), *((u32*)(r5 + 0x5c)), r7, *((u32*)(r5 + 4)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x28]
    // ldr r3, [sp, #0x10]
    // add r0, r4, r6
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r0);
    String_Delete(r5);
    // add r0, r4, r6
    CopyWindowToVram();
}





void ov112_021F13BC(void) {
}





void ov112_021F13CC(void) {
    // str r0, [sp, #0x10]
    // add r0, #0x38
    // str r0, [sp, #0x10]
    FillWindowPixelBuffer(0);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x58)), *((u32*)(r5 + 0x5c)), r6, *((u32*)(r5 + 4)));
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x58)), *((u32*)(r5 + 0x5c)), r4, *((u32*)(r5 + 4)));
    String_GetLength(r6);
    String_GetLength(r7);
    // add r0, r4, r0
    String_New((r0 + 2), *((u32*)(r5 + 4)));
    String_Copy(r6);
    String_AddChar(r4, (0xe << 0xc));
    String_Cat(r4, r7);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 1, r4, 0);
    String_Delete(r7);
    String_Delete(r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 1, r6, 0);
    String_Delete(r6);
    // ldr r0, [sp, #0x10]
    CopyWindowToVram();
}





void ov112_021F1488(void) {
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    String_New(r3, *((u32*)(r0 + 4)));
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    CopyU16ArrayToString(r0, ov112_021FF2EC, (0 + 1), (r6 + 2));
    CopyU16ArrayToString(r7, r6);
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp, #8]
    BufferString(*((u32*)(r5 + 0x58)), r7, 2);
    String_Delete(r7);
}





void ov112_021F1504(void) {
    // add r1, sp, #0
    // add r1, sp, #0
}





void ov112_021F1548(void) {
    // add r1, sp, #0
    // add r1, sp, #0
}





void ov112_021F1584(void) {
    // mov ip, r3
    // mov r2, ip
    ov112_021F1548(r0, r2, *((u16*)r1), (0 + 1));
    ov112_021F1488(r6, r7, 0xb);
}





void ov112_021F15CC(void) {
}





void ov112_021F15E4(void) {
    // add r0, r1, r0
    // add r0, #0xc0
    // add r0, sp, #0xc
    // str r3, [r0]
    *((u32*)((*((u8*)(r0 + 0x0000013D)) << 2) + 4)) = 0;
    *((u32*)((*((u8*)(r0 + 0x0000013D)) << 2) + 8)) = 0;
    *((u32*)((*((u8*)(r0 + 0x0000013D)) << 2) + 0xc)) = 0;
    // add r0, sp, #0
    // str r3, [r0]
    *((u32*)((*((u8*)(r0 + 0x0000013D)) << 2) + 4)) = 0;
    *((u32*)((*((u8*)(r0 + 0x0000013D)) << 2) + 8)) = 0;
    // sub r0, #0x1d
    // sub r4, #0xd
    // add r0, r1, r0
    // add r1, r1, r4
    RTC_ConvertSecondToDateTime(0x0000013D, r0, *((u32*)*((u32*)(*((u8*)(r0 + 0x0000013D)) << 2))), 0);
}





void ov112_021F1624(void) {
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // add r1, r5, r1
    // add r1, #0xc0
    // sub r1, #0x19
    // str r1, [sp, #0x10]
    // sub r1, #0x15
    // sub r0, #0xd
    // str r1, [sp, #0xc]
    // sub r4, #0xc
    ov112_021F1488(r0, *((u32*)(r0 + 8)), 0, 9);
    // add r1, #0x20
    ov112_021F1584(r5, r6, 1, *((u16*)(r6 + 0xa)));
    // add r1, #0x10
    ov112_021F1488(r5, r6, 2, 9);
    // add r1, #0x36
    ov112_021F1584(r5, r6, 3, *((u16*)(r6 + 0xc)));
    ov112_021F1504(r5, *((u16*)(r6 + 0xe)));
    // add r1, #0x36
    ov112_021F1584(r5, r6, 5, *((u16*)(r6 + 0xc)));
    // str r0, [sp]
    ov112_021F15CC(r5, 6, r4, 2);
    // str r0, [sp]
    // add r2, #0x78
    ov112_021F15CC(r5, 7, *((u16*)r6), 5);
    // add r6, #0x4c
    ov112_021F1488(r5, r6, 8, 0x15);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    ov112_021F15CC(r5, 9, 2);
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    ov112_021F15CC(r5, 0xa, 2);
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    ov112_021F13CC(r5);
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    ov112_021F15CC(r5, 9, 2);
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    ov112_021F15CC(r5, 0xa, 2);
    ov112_021F13BC(r5, 0, 0x56, 0);
    // str r0, [sp]
    ov112_021F15CC(r5, 6, r4, 2);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x58)), *((u32*)(r5 + 0x5c)), r7, *((u32*)(r5 + 4)));
    // add r0, #0x28
    GetWindowWidth(r5);
    FontID_String_GetCenterAlignmentX(1, r4, 0, (r0 << 3));
    String_Delete(r4);
    ov112_021F13BC(r5, 1, r7, ((r6 << 0x18) >> 0x18));
}





void ov112_021F178C(void) {
}





void ov112_021F179C(void) {
    BgConfig_Alloc(*((u32*)(r0 + 4)));
    // add r3, sp, #4
    *((u32*)(r5 + 0x14)) = r0;
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r6, sp, #0x14
    InitBgFromTemplate(*((u32*)(r5 + 0x14)), *((u8*)ov112_021FF4C0), r6, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x14)), *((u8*)r4));
    // str r0, [sp]
    BG_FillCharDataRange(*((u32*)(r5 + 0x14)), *((u8*)r4), 0, 1);
    // add r6, #0x1c
}





void ov112_021F1814(void) {
    FreeBgTilemapBuffer(*((u32*)(r0 + 0x14)), *((u8*)ov112_021FF4C0));
    Heap_Free(*((u32*)(r6 + 0x14)));
}





void ov112_021F1838(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021F1904(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov112_021F194C(void) {
    GF_AssertFail();
    PlayBGM(((*((u32*)(ov112_021FF9B8 + (r4 << 2))) << 0x10) >> 0x10), (r4 << 2));
}





void ov112_021F196C(void) {
    SpriteSystem_Alloc(*((u32*)(r0 + 4)));
    *((u32*)(r5 + 0x68)) = r0;
    SpriteManager_New();
    // add r2, sp, #0x2c
    *((u32*)(r5 + 0x6c)) = r0;
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r3, [sp, #0x18]
    SpriteSystem_Init(*((u32*)(r5 + 0x68)), r2, ov112_021FF330, 0x20);
    SpriteSystem_InitSprites(*((u32*)(r5 + 0x68)), *((u32*)(r5 + 0x6c)), 0x20);
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r5 + 0x68)), *((u32*)(r5 + 0x6c)), r3);
    SpriteSystem_GetRenderer(*((u32*)(r5 + 0x68)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x83 << 0xe));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}





void ov112_021F1A08(void) {
}





void ov112_021F1A40(void) {
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}





void ov112_021F1AF4(void) {
    // mov ip, r1
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r3]
    // strh r6, [r1]
    *((u16*)(r1 + 2)) = r3;
    // add r0, sp, #0x38
    // str r2, [sp, #8]
    // add r2, sp, #0
    *((u16*)(r1 + 6)) = *((u8*)(*((u32*)ov112_021FF398) + 0x10));
    // mov r1, ip
    SpriteSystem_NewSpriteWithYOffset(r0, *((u8*)(*((u32*)ov112_021FF398) + 0x14)), (0x83 << 0xe));
    ManagedSprite_SetAnimateFlag(1);
}





void ov112_021F1B44(void) {
    // mov ip, r1
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r3]
    // strh r6, [r1]
    *((u16*)(r1 + 2)) = r3;
    // add r0, sp, #0x38
    // str r2, [sp, #8]
    // add r2, sp, #0
    *((u16*)(r1 + 6)) = *((u8*)(*((u32*)ov112_021FF3CC) + 0x10));
    // mov r1, ip
    SpriteSystem_NewSpriteWithYOffset(r0, *((u8*)(*((u32*)ov112_021FF3CC) + 0x14)), (0x83 << 0xe));
    ManagedSprite_SetAnimateFlag(1);
}





void ov112_021F1B94(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1AF4(*((u32*)(r0 + 0x68)), *((u32*)(r0 + 0x6c)), 0x20, 0xb0);
    *((u32*)(r4 + 0x70)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1AF4(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x50, 0xb0);
    *((u32*)(r4 + 0x74)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1AF4(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0xd8, 0xb0);
    *((u32*)(r4 + 0x78)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1AF4(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x80, 0x44);
    *((u32*)(r4 + 0x7c)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1AF4(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x68, 0x38);
    // add r1, #0x80
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1AF4(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x98, 0x38);
    // add r1, #0x84
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1AF4(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x68, 0x28);
    // add r1, #0x94
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1B44(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x68, 0x28);
    // add r1, #0x88
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1B44(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x98, 0x28);
    // add r1, #0x8c
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov112_021F1B44(*((u32*)(r4 + 0x68)), *((u32*)(r4 + 0x6c)), 0x80, 0x28);
    // add r1, #0x90
    // str r0, [r1]
    ov112_021F1F80(r4, r4);
    ov112_021F1CC8(r4, 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x70)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x74)), 0);
}





void ov112_021F1CC8(void) {
    // add r0, #0x98
    // add r0, #0xac
    // add r0, #0x80
    // add r0, #0x84
    // add r0, #0x88
    // add r0, #0x94
    // add r0, #0x8c
    // add r5, #0x90
}





void ov112_021F1D28(void) {
    // add r4, #0x70
}





void ov112_021F1D58(void) {
}





void ov112_021F1D70(void) {
    // str r2, [sp]
    // ldr r1, [sp]
    // ldr r2, [sp]
    // add r1, r6, r5
    // ldr r2, [sp]
    // add r1, r6, r5
}





void ov112_021F1DC0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F1DE2: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // strb r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // strb r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // strb r1, [r4, r0]
}





void ov112_021F1EFC(void) {
    // sub r0, #0x32
}





void ov112_021F1F3C(void) {
}





void ov112_021F1F54(void) {
}





void ov112_021F1F80(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x98
    // add r0, #0x98
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xac
    // add r4, #0xac
}





void ov112_021F1FD0(void) {
    // add r0, #0xa0
    // add r0, #0xa8
    // add r6, #0x14
}





void ov112_021F2000(void) {
    // str r3, [sp, #0x14]
    // str r2, [sp, #0x10]
    // ldr r7, [sp, #0x68]
    // ldr r2, [sp, #0x70]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r4, sp, #0x20
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r5, [sp, #8]
    // str r0, [r4]
    // add r0, sp, #0x58
    // str r0, [sp, #0x18]
    // str r4, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(*((u8*)(*((u32*)ov112_021FF400) + 0x14)) + 2)) = r7;
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x18]
    // add r0, sp, #0x20
    *((u16*)(3 + 6)) = r1;
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r4, [sp, #0x34]
    // add r2, sp, #0x20
    SpriteSystem_NewSpriteWithYOffset((0 + 2), (0x83 << 0xe));
    *((u32*)(r5 + 8)) = r0;
    ManagedSprite_SetAnimateFlag(1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 8)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    ov112_021F1AF4(4, r7);
    // ldr r1, [sp, #8]
    *((u32*)(r1 + 0x10)) = r0;
}





void ov112_021F2098(void) {
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // add r0, sp, #0x30
    // add r0, sp, #0x2c
    // add r2, sp, #0x2c
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // add r1, sp, #0x2c
    // add r1, #2
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x2c
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // add r1, sp, #0x2c
    // add r1, #2
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x2c
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // ldr r0, [sp, #0xc]
    // ldr r7, [sp, #0x4c]
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r0, r0, r4
    // str r6, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // add r4, r4, r5
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // add r4, r0, r1
    // add r0, sp, #0x38
    // add r4, #0x20
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // sub r0, #0x32
    // ldr r0, [sp, #0xc]
}





void ov112_021F2204(void) {
    // add r0, r5, r0
    // add r0, #0xc0
    // add r0, #0x98
    ov112_021F1F54(r0, 0x68, 0x48, 0);
    // add r0, #0x98
    ov112_021F1F3C(r5, 3);
    // add r0, #0xac
    ov112_021F1F54(r5, 0x98, 0x48, 0);
    // add r0, #0xac
    ov112_021F1F3C(r5, 1);
    ov112_021F0F48(r4, 1);
    // str r0, [sp]
    // add r5, #0x98
    // str r0, [sp, #4]
    // add r4, #0x85
    // add r0, r5, r0
    ov112_021F2098((0x14 * r6), *((u16*)(r4 + 0xa)), ((*((u8*)r4) << 0x1b) >> 0x1b), ((*((u8*)r4) << 0x19) >> 0x1e));
    ov112_021F0F48(r4, 0);
    // str r0, [sp]
    // add r5, #0x98
    // str r0, [sp, #4]
    // add r4, #0x86
    // add r0, r5, r0
    ov112_021F2098((0x14 * r6), *((u16*)(r4 + 0xc)), ((*((u8*)r4) << 0x1b) >> 0x1b), ((*((u8*)r4) << 0x19) >> 0x1e));
}





void ov112_021F22B0(void) {
    // add r4, #0xf
}





void ov112_021F22D0(void) {
    // add r4, #0x70
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // str r3, [sp]
    // add r0, r6, r0
    // add r0, #0x98
    // add r3, sp, #4
    // strh r0, [r3]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldr r1, [sp]
}





void ov112_021F2328(void) {
}





void ov112_021F2338(void) {
}





void ov112_021F2348(void) {
    // str r1, [r0, r2]
}





void ov112_021F235C(void) {
    // str r3, [r0, r2]
    // str r1, [r0, r2]
    // and r1, r3
    // str r1, [r0, r2]
    // and r1, r3
    // str r1, [r0, r2]
}





void ov112_021F238C(void) {
    // ldrsb r3, [r2, r3]
    // add r0, #0xac
    // sub r2, r2, r3
    // asr r2, r2, #0x10
    ov112_021F1F54(r0, 0x98, (0x48 << 0x10), 1);
    // str r0, [r5, r1]
    // ldrsb r0, [r0, r3]
    // str r0, [r5, r1]
    // and r0, r2
    // str r0, [r5, r1]
    // add r0, #0xac
    ov112_021F1F3C(r5, 3, (((((*((u32*)(r5 + (0x52 << 2))) << 0x10) >> 0x19) + 1) << 0x19) >> 0x10), (*((u32*)(r5 + (0x52 << 2))) >> 0x10));
    // and r0, r2
    // str r0, [r5, r1]
    // and r0, r2
    // str r0, [r5, r1]
    // add r1, #0x98
    // asr r4, r1, #0x10
    // str r0, [r5, r3]
    // and r0, r1
    // add r0, #0xac
    ov112_021F1EFC(r5, 0, (((((*((u32*)(r5 + (0x52 << 2))) << 0x17) >> 0x18) + 1) << 0x18) >> 0x17));
    // add r0, #0xac
    ov112_021F1EFC(r5, 0);
    // str r0, [r5, r1]
    // and r0, r2
    // str r0, [r5, r1]
    // add r5, #0xac
    ov112_021F1F54(r5, r4, 0x48, 0);
    GF_AssertFail();
}





void ov112_021F24C4(void) {
    // str r1, [r0, r2]
}





void ov112_021F24D8(void) {
    // str r3, [r0, r2]
    // str r1, [r0, r2]
    // str r3, [r0, r2]
}





void ov112_021F24F8(void) {
    // add r0, #0x84
    // add r0, #0x84
    // str r0, [r4, r2]
    // add r0, #0xac
    // str r0, [r4, r1]
    // str r1, [r4, r0]
}





void ov112_021F257C(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    // add r1, #0x84
    // add r1, r2, r1
    // asr r2, r1, #1
    // add r6, r2, r1
    ov112_021F2204(0, 1);
    ov112_021F2204(r5, 1, 0);
    // add r0, #0x78
    // add r0, #0x7a
    // sub r0, r1, r0
    // bpl _021F25C2
    // neg r0, r0
    // add r4, #0x84
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // add r2, r6, r2
    ov112_021F1624(r5, r6, 3, (*((u8*)r4) >> 0x1f));
}





void ov112_021F25FC(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    ov112_021F2204(0, 1);
    // add r0, #0x84
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    // add r0, #0x84
    ManagedSprite_SetAnim(*((u32*)r5), 0xb);
    // add r4, #0x78
    ov112_021F1624(r5, 0x1a, 0x20);
}





void ov112_021F2688(void) {
    // add r0, r4, r0
    // add r0, #0xc0
    // add r0, #0x84
    ManagedSprite_SetDrawFlag(*((u32*)r0), 1);
    // add r0, #0x84
    ManagedSprite_SetAnim(*((u32*)r4), 0xd);
    ov112_021F2204(r4, 0, 1);
    // add r0, #0x80
    ov112_021F22B0(*((u32*)r4), ((*((u32*)(r4 + 0xc)) << 0x18) >> 0x18), 3);
    ov112_021F1624(r4, r5, 0);
}





void ov112_021F26E8(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    ov112_021F2204(0, 1);
    ov112_021F2204(r5, 1, 0);
    // add r4, #0x78
    ov112_021F1624(r5, 0x23, 0x29);
    ov112_021F24C4(r5);
}





void ov112_021F2768(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    ov112_021F2204(0, 1);
    // add r0, #0x80
    ov112_021F22B0(*((u32*)r0), ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18), 3);
    ov112_021F2204(r5, 1, 0);
    ov112_021F1624(r5, r4, 0);
}





void ov112_021F27B8(void) {
}





void ov112_021F27E0(void) {
}





void ov112_021F2810(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    ov112_021F2204(0, 1);
    // add r0, #0x84
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    // add r0, #0x84
    ManagedSprite_SetAnim(*((u32*)r5), 0xc);
    // add r6, #0x77
    ov112_021F1624(r5, 0x2e, 0x32);
}





void ov112_021F2874(void) {
    // add r0, r5, r0
    // add r0, #0xc0
    // add r1, #0x84
    // add r0, #0x77
    // sub r1, #0x12
    // add r4, r1, r0
    // add r4, #0x33
    ov112_021F2204(r0, 0, 1);
    // add r0, #0x84
    ov112_021F22B0(*((u32*)r5), ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18), 1);
    ov112_021F1624(r5, r4, 0);
}





void ov112_021F28DC(void) {
    // add r0, #0x84
    // add r0, #0x8c
    // add r0, #0x8c
}





void ov112_021F2920(void) {
}





void ov112_021F2944(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    ov112_021F2204(0, 1);
    // add r0, #0x84
    ov112_021F22B0(*((u32*)r5), ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18), 3);
    ov112_021F1624(r5, 0x44, r4);
}





void ov112_021F298C(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    ov112_021F2204(0, 1);
    // add r0, #0x84
    ov112_021F22B0(*((u32*)r5), ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18), 3);
    _u32_div_f(*((u32*)(r6 + 0x7c)), 0x64);
    // add r4, r4, r0
    // add r4, r4, r0
    // add r4, r4, r0
    // add r0, r4, r0
    // add r0, r0, r6
    // add r0, r0, r4
    // add r2, #0xe2
    // add r1, #0x32
    ov112_021F1624(r5, 0x5a, 0x4e, ((*((u32*)(r5 + (0x51 << 2))) << 0x16) >> 0x1f));
}





void ov112_021F2A78(void) {
    // sub r2, #0x11
    // add r1, r5, r1
    // add r1, #0xc0
    // add r1, #0x78
    ov112_021F2204(0, 1);
    // add r0, #0x84
    ov112_021F22B0(*((u32*)r5), ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18), 3);
    ov112_021F2204((0x50 >> 2), 0, 1);
    // add r0, #0x98
    ov112_021F1F54(r5, 0x80, 0x48, 0);
    // add r0, #0x98
    ov112_021F1F3C(r5, 0);
    ov112_021F22D0(r5, 0, 8, 0xa);
    ov112_021F1624(r5, 0x55, 0);
}





void ov112_021F2B2C(void) {
    // add r0, #0x84
    // add r0, #0x84
    // add r0, #0xbc
    // add r0, #0x8c
    // add r0, #0x8c
}





void ov112_021F2B80(void) {
    // add r1, r5, r1
    // add r1, #0xc0
    ov112_021F15E4((*((u8*)(r0 + 0x0000013D)) << 2));
    ov112_021F0F60(r4);
    ov112_021F1904(r5, r6, r0);
    ov112_021F0F60(r4);
    ov112_021F1D58(r5, r0);
    // add r0, #0x76
    ov112_021F0F60(r4, ((*((u32*)(r5 + (0x51 << 2))) << 0x18) >> 0x18));
    ov112_021F194C(r5, r0);
    // add r1, #0x76
    // str r0, [r5, r2]
    // add r0, #0x84
    // add r0, r1, r0
    ov112_021F257C(r5, *((u16*)(r4 + 8)), (0x51 << 2));
    ov112_021F2B2C(r5);
    ov112_021F25FC(r5);
    ov112_021F2688(r5);
    ov112_021F26E8(r5);
    ov112_021F2768(r5);
    ov112_021F27B8(r5);
    ov112_021F27E0(r5);
    ov112_021F2810(r5);
    ov112_021F2874(r5);
    ov112_021F28DC(r5);
    ov112_021F2920(r5);
    ov112_021F2944(r5);
    ov112_021F298C(r5);
    ov112_021F2A78(r5, r6);
}





void ov112_021F2CC4(void) {
    // str r1, [r0, r2]
}





void ov112_021F2CD4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0x00007FFF);
    // and r0, r2
    // str r0, [r4, r1]
    IsPaletteFadeFinished((0xFFFF87FF | (((((*((u32*)(r4 + (0x51 << 2))) << 0x11) >> 0x1c) + 1) << 0x1c) >> 0x11)), (0x51 << 2), (((((*((u32*)(r4 + (0x51 << 2))) << 0x11) >> 0x1c) + 1) << 0x1c) >> 0x11));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x70)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x74)), 0);
    ov112_021F1CC8(r4, 0);
    ov112_021F2328(r4);
    ov112_021F2B80(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x00007FFF);
    // and r0, r2
    // str r0, [r4, r1]
    IsPaletteFadeFinished((0xFFFF87FF | (((((*((u32*)(r4 + (0x51 << 2))) << 0x11) >> 0x1c) + 1) << 0x1c) >> 0x11)), (0x51 << 2), (((((*((u32*)(r4 + (0x51 << 2))) << 0x11) >> 0x1c) + 1) << 0x1c) >> 0x11));
    // and r0, r2
    // str r0, [r4, r1]
    // and r0, r2
    // str r0, [r4, r1]
    GF_AssertFail(1, (0x51 << 2), *((u32*)(r4 + (0x51 << 2))));
}





void ov112_021F2DE4(void) {
    OverlayManager_GetArgs();
    GF_AssertFail();
    Heap_Create(3, 0x9b, (3 << 0x11));
    OverlayManager_CreateAndGetData(r4, (0x15 << 4), 0x9b);
    MI_CpuFill8(0, (0x15 << 4));
    *((u32*)(r4 + 4)) = 0x9b;
    // str r5, [r4]
    ov112_021F0F90(r4);
    ov112_021F0DC0();
    ov112_021F0DF4();
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    NARC_New(0xfb, *((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x10)) = r0;
    ov112_021F179C(r4);
    ov112_021F1288(r4);
    ov112_021F196C(r4);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
    Main_SetVBlankIntrCB(ov112_021F2EB0, r4);
}





void ov112_021F2E70(void) {
    OverlayManager_GetData();
    ov112_021F1324();
    ov112_021F1814(r5);
    ov112_021F1A08(r5);
    NARC_Delete(*((u32*)(r5 + 0x10)));
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    ov112_021F0DC0();
    OverlayManager_FreeData(r4);
    Heap_Destroy(0x9b);
}





void ov112_021F2EB0(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r4 + 0x6c)));
    GF_AssertFail(*((u32*)(r4 + 0x14)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x6c)));
    SpriteSystem_TransferOam();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x14)));
    // str r0, [r3, r1]
}





void ov112_021F2EF4(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F2F14: ; jump table
    ov112_021F2DE4(r6, (*((u16*)(*((u32*)r4) + 6)) << 0x10));
    // str r0, [r4]
    ov112_021F1838((*((u32*)r4) + 1));
    ov112_021F1A40(r5);
    // str r0, [r4]
    ov112_021F1DC0((*((u32*)r4) + 1));
    ov112_021F1B94(r5);
    ov112_021F178C(r5);
    // str r0, [r5, r1]
    ov112_021F2B80(r5, (0x51 << 2), (*((u32*)(r5 + (0x51 << 2))) & ~(0xff)));
    // str r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    // str r0, [r4]
    IsPaletteFadeFinished((*((u32*)r4) + 1));
    GF_AssertFail(1);
}





void ov112_021F2FAC(void) {
    // str r0, [r4]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
}





void ov112_021F3018(void) {
    OverlayManager_GetData();
    ov112_021F2CD4();
    ov112_021F0EB4(r4);
    // strb r1, [r4, r0]
    ov112_021F2CC4(r4, (*((u8*)(r4 + 0x0000013D)) - 1));
    PlaySE(0x000005DC);
    ov112_021F0EFC(r4);
    _s32_div_f((*((u8*)(r4 + 0x0000013D)) + 1), *((u8*)(r4 + (0x0000013D + 1))));
    // strb r1, [r4, r0]
    ov112_021F2CC4(r4);
    PlaySE(0x000005DC);
    ov112_021F0E60(r4);
    ov112_021F2338(r4);
    ov112_021F1D28(r4, 5);
    ov112_021F1D28(r4, 6);
    ov112_021F1D28(r4, 7);
    ov112_021F1D28(r4, 8);
}





void ov112_021F30BC(void) {
    // add r1, #0x20
    // add r0, #0x85
    // and r1, r2
    // add r0, #0x85
    // strb r1, [r0]
    // add r0, #0x85
    // add r0, #0x85
    // strb r1, [r0]
    // add r0, #0x85
    // add r0, #0x85
    // strb r1, [r0]
    // add r0, #0x84
    // strb r1, [r0]
    // sub r1, #0x1b
    // str r1, [r5]
}





void ov112_021F3140(void) {
    // mov ip, r1
    // add r1, #0x84
    // add r1, #0x86
    // mov r1, ip
    // and r1, r3
    // add r1, #0x86
    // strb r3, [r1]
    // add r1, #0x86
    // add r1, #0x86
    // strb r3, [r1]
    // add r1, #0x86
    // add r1, #0x86
    // strb r3, [r1]
    // add r0, #0x88
}





void ov112_021F31BC(void) {
    // add r1, #0x84
    // add r0, #0x88
}





void ov112_021F31D8(void) {
    // add r1, #0x84
    // add r6, r6, r5
    // add r1, #0x76
    // add r0, #0x88
}





void ov112_021F3244(void) {
    Save_PlayerData_GetProfile();
    SaveArray_Party_Get(r5);
    MIi_CpuClearFast(0, r4, (0x7d << 2));
    TrainerHouseSet_SetZero(r4);
    ov112_021F336C(r4, r5);
    // add r0, #0x30
    ov112_021F33D8(r4, r6);
    GF_CalcCRC16(r4, 0x000001F2);
    // strh r0, [r4, r1]
}





void ov112_021F328C(void) {
    // str r1, [sp, #4]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp]
    // ldr r5, [sp, #0x10]
    Save_TrainerHouse_Get(0);
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    TrainerHouseSet_CheckHasData();
    // ldr r0, [sp, #8]
    ov112_021F35A4();
    // ldr r0, [sp, #4]
    GF_CalcCRC16(0x000001F2);
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    ov112_021F35A4(*((u16*)(r1 + 0x000001F2)), 0x000001F2);
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r1, sp, #0x18
    ov112_021F3608();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x14
    ov112_021F35C8();
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // add r0, sp, #0x18
    // add r6, r0, r4
    // add r3, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // strb r0, [r6]
    // add r5, r5, r0
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r1, r3
    MI_CpuCopy8((6 << 6), (r0 * (6 << 6)), (6 << 6), ((r0 * (6 << 6)) * (6 << 6)));
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x18
    // strb r2, [r1, r0]
    // ldr r0, [sp]
    ov112_021F3630();
}





void ov112_021F336C(void) {
    // str r0, [r5]
    // add r0, #8
    // add r5, #0x18
    // add r5, #8
}





void ov112_021F33D8(void) {
    // str r1, [sp]
    Party_GetCount(r1);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x1c]
    Party_GetMonByIndex(0);
    GetMonData(3, 0);
    GetMonData(r5, 0x4c, 0);
    GetMonData(r5, 5, 0);
    // and r1, r2
    // and r0, r3
    // strh r0, [r6]
    GetMonData(r5, 0x70, 0, ((r0 << 0x10) >> 0x10));
    // and r1, r2
    // strh r0, [r6]
    Mon_UpdateShayminForm(r5, 0, ((*((u16*)r6) << 0x15) >> 0x15));
    // and r0, r1
    // strh r0, [r6]
    // str r0, [sp, #0xc]
    GetMonData(r5, 6, 0);
    *((u16*)(r6 + 2)) = r0;
    GetMonData(r5, 7, 0);
    *((u32*)(r6 + 0xc)) = r0;
    GetMonData(r5, 0, 0);
    *((u32*)(r6 + 0x10)) = r0;
    GetMonData(r5, 0xc, 0);
    *((u8*)(r6 + 0x1f)) = r0;
    GetMonData(r5, 0xa, 0);
    // add r1, #0x20
    // strb r0, [r1]
    GetMonData(r5, 9, 0);
    // add r1, #0x21
    // strb r0, [r1]
    GetMonData(r5, 0xa1, 0);
    // add r1, #0x22
    // strb r0, [r1]
    // add r2, sp, #0x20
    GetMonData(r5, 0x75);
    // add r0, #0x24
    // add r1, sp, #0x20
    CopyU16StringArrayN(r6, 0xa);
    // str r4, [sp, #0x10]
    // str r6, [sp, #8]
    // add r1, #0x36
    GetMonData(r5, 0, 0);
    // ldr r1, [sp, #8]
    *((u16*)(r1 + 4)) = r0;
    // add r1, #0x3e
    GetMonData(r5, r4, 0);
    // lsl r1, r7
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    *((u8*)(r6 + 0x1e)) = ((r0 | r0) + 2);
    // str r4, [sp, #4]
    // add r1, #0x46
    GetMonData(r5, 0, 0);
    // lsl r1, r7
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // add r1, #0xd
    GetMonData(r5, r4, 0);
    // add r1, r6, r4
    *((u8*)(r1 + 0x18)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)(r6 + 0x14)) = r0;
    // ldr r0, [sp, #0xc]
    Mon_UpdateShayminForm(r5, 1);
    // ldr r0, [sp, #0x14]
    // add r6, #0x38
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
}





void ov112_021F35A4(void) {
    // add r5, r5, r7
}





void ov112_021F35C8(void) {
    // str r2, [sp]
    // ldr r0, [sp]
    // str r1, [r0]
    // add r5, r5, r7
    // ldr r1, [sp]
    // str r0, [r1]
}





void ov112_021F3608(void) {
    Save_VarsFlags_Get();
    Save_VarsFlags_CheckFlagInArray(r0, *((u16*)ov112_021FF4D4));
    // strb r0, [r6, r4]
}





void ov112_021F3630(void) {
    Save_VarsFlags_Get();
    Save_VarsFlags_SetFlagInArray(r0, *((u16*)ov112_021FF4D4));
    Save_VarsFlags_ClearFlagInArray(r6, *((u16*)r5));
}




