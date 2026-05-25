/* Decompiled from asm/unk_02016EDC.s */
#include "global.h"

void sub_02016EDC(void) {
    // str r0, [r4]
    // add r1, r1, r6
    // add r6, r6, r0
}




void sub_02016F2C(void) {
}




void sub_02016F40(void) {
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r2, [sp]
    GF_AssertFail(*((u16*)(r2 + 2)), *((u8*)(r0 + 9)));
    // ldr r0, [sp, #4]
    // add r0, r0, r4
    GF_AssertFail(*((u32*)(*((u32*)r5) + 0x10)), (0x1d << 4));
    // add r0, r0, r4
    MI_CpuFill8(*((u32*)r5), 0, (0x1d << 4));
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 0x10)) = 1;
    // str r7, [r0, r4]
    // str r6, [sp, #8]
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 0x14)) = 0;
    // ldr r0, [sp]
    // add r1, r0, r4
    // strb r2, [r1, r0]
    // add r1, r1, r4
    AllocAtEndAndReadWholeNarcMemberByIdPair(0x5a, *((u32*)(*((u32*)r5) + 0x14)), *((u32*)(r5 + 4)));
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 8)) = r0;
    // add r1, r0, r4
    *((u32*)(*((u32*)r5) + 0xc)) = *((u32*)(*((u32*)r5) + 8));
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 0x1c)) = 0;
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 0x20)) = 0;
    // add r1, r0, r4
    // strb r2, [r1, r0]
    // add r3, r1, r4
    // strb r6, [r3, r1]
    // add r1, r1, r4
    // strb r2, [r1, r0]
    // add r1, r1, r4
    SysTask_CreateOnMainQueue(sub_020170C4, *((u32*)r5), 0);
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 4)) = r0;
    // add r1, r0, r4
    // ldr r0, [sp, #8]
    *((u32*)(*((u32*)r5) + 0x54)) = *((u32*)r5);
    Pokepic_GetAttr(r7, 0);
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x58)) = r0;
    Pokepic_GetAttr(r7, 1);
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x5c)) = r0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x60)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x64)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x68)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x6c)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x70)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x74)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x78)) = 0;
}




void sub_02017068(void) {
}




void sub_02017088(void) {
    // add r0, r0, r4
    // add r1, r1, r4
    // add r1, r1, r4
    // add r1, r1, r4
    // add r0, r0, r4
}




void sub_020170C4(void) {
}




void sub_020170FC(void) {
    *((u32*)(r0 + 0x18)) = 0;
    *((u32*)(r0 + 0x44)) = 0;
    // add r7, #0x7c
    // add r0, r7, r1
    // add r1, #0x2d
    // blx r2
    // add r1, #0x2d
    // add r0, #0x2d
    // strb r1, [r0]
    // strb r1, [r5, r0]
    sub_020179D4(r0, *((u8*)(r0 + 0x000001CD)), *((u32*)(0x54 + 0x50)));
    sub_02017A1C(r5);
    Pokepic_ResumePaletteFade(*((u32*)r5));
    // strb r1, [r5, r0]
    // add r6, #0xc
    // add r4, #0x44
    // str r0, [r4]
    GF_AssertFail(*((u32*)*((u32*)(r5 + 0xc))), 0);
    // blx r1
    // str r0, [r6]
    sub_020179D4(r5, *((u32*)(r7 + (*((u32*)*((u32*)(r5 + 0xc))) << 2))));
    sub_02017A1C(r5);
    GF_AssertFail((1 << 8), *((u32*)(r5 + 0x44)));
    *((u32*)(r5 + 0x1c)) = 1;
}




void sub_020171F4(void) {
}




void sub_02017208(void) {
}




void sub_02017214(void) {
}




void sub_02017220(void) {
    // add r0, #0x7c
    // add r4, r0, r1
    MI_CpuFill8(r4, 0, 0x54, 0);
    // str r0, [r4]
    *((u32*)(r4 + 0x50)) = *((u32*)(_020F61BC + (r5 * 0xc)));
    GF_AssertFail(r4, ((r3 + 1) << 0x18), (((r3 + 1) << 0x18) >> 0x18));
}




void sub_0201726C(void) {
}




void sub_02017280(void) {
}




void sub_02017294(void) {
    // strb r0, [r4]
}




void sub_020172B4(void) {
}




void sub_020172C8(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #2
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r4]
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #2
    // add r2, #1
    // add r0, sp, #0
    // add r1, r5, r1
    // str r1, [r4]
    // add r0, r5, r0
    // str r0, [r6]
}




void sub_0201733C(void) {
    // add r1, sp, #0
    // add r1, #1
    // add r1, sp, #0
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #3
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r4]
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #2
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r6]
}




void sub_020173C8(void) {
    // add r2, sp, #0
    // add r2, #3
    // add r0, sp, #0
    // add r1, sp, #0
    // add r0, r5, r0
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #2
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r6]
    // add r1, sp, #0
    // add r0, sp, #0
    // add r1, sp, #4
    // add r1, sp, #0
    // add r1, #1
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r0, r7, r0
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4]
}




void sub_02017470(void) {
    // sub r0, r2, r0
    // bpl _0201747C
}




void sub_02017488(void) {
    // neg r3, r2
    // asr r2, r3, #2
    // add r2, r3, r2
    // asr r2, r2, #3
}




void sub_020174A4(void) {
}




void sub_020174B4(void) {
}




void sub_020174BC(void) {
    // add r2, #0xf4
    // add r2, #0xf3
}




void sub_02017504(void) {
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // add r0, sp, #0
    // add r1, r4, r1
    // add r0, r4, r0
}




void sub_0201752C(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // add r0, sp, #0
    // add r0, r4, r0
}




void sub_02017550(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, sp, #0
    // add r0, r4, r0
}




void sub_02017578(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // add r0, sp, #0
    // add r0, r4, r0
}




void sub_0201759C(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r1, sp, #0
    // add r1, r4, r1
}




void sub_020175C4(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r0, sp, #0
    // add r0, r4, r0
}




void sub_020175EC(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #3
    // add r0, sp, #0
    // add r1, sp, #8
    // add r0, r5, r0
    // str r0, [sp, #0xc]
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #3
    // add r2, #2
    // add r0, sp, #0
    // add r1, r5, r1
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    // add r1, #1
    // add r0, sp, #0
    // add r0, sp, #0xc
    // add r1, sp, #8
    // add r1, sp, #0
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #3
    // add r1, sp, #4
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #3
    // add r2, #2
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    // add r0, sp, #0
    // ldr r1, [sp, #4]
    // add r0, r5, r0
}




void sub_020176CC(void) {
    // add r1, sp, #0
    // add r1, sp, #0
    // add r1, r4, r1
}




void sub_020176F0(void) {
}




void sub_02017714(void) {
}




void sub_02017730(void) {
    // add r1, sp, #4
    // add r1, sp, #0
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // add r2, r4, r2
}




void sub_0201775C(void) {
    // add r1, sp, #4
    // add r1, sp, #0
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // add r2, r4, r2
}




void sub_02017788(void) {
    // add r1, sp, #8
    // add r1, sp, #0
    // add r1, #1
    // add r0, sp, #0
    // add r1, sp, #4
    // add r1, sp, #0
    // add r1, #2
    // add r0, sp, #0
    // add r0, r4, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    // add r0, sp, #0
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
}




void sub_02017808(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020173C8();
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #4]
    // asr r0, r0, #4
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0xc
    // add r0, sp, #0
    // add r0, r4, r0
    *((u32*)((*((u8*)(FX_SinCosTable_ * r2)) << 2) + 0x24)) = (r0 << 2);
}




void sub_0201783C(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020173C8();
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // asr r1, r1, #4
    // ldrsh r1, [r1, r2]
    // add r0, sp, #0
    // asr r1, r1, #0xc
    // add r0, r4, r0
    *((u32*)((*((u8*)r0) << 2) + 0x24)) = (FX_SinCosTable_ * r0);
}




void sub_02017874(void) {
    // add r1, sp, #0
    // add r1, #1
    // add r1, sp, #0
    // add r0, sp, #0
    // add r0, r4, r0
    // add r0, r4, r0
}




void sub_020178BC(void) {
    // add r1, sp, #0
    // add r1, #1
    // add r1, sp, #0
    // add r0, sp, #0
    // add r0, r4, r0
    // add r0, r1, r0
    // add r0, r4, r0
    // add r0, r1, r0
}




void sub_0201790C(void) {
    // add r1, sp, #0
    // add r1, #3
    // add r0, sp, #0
    // add r4, #0x60
    // add r4, #0x64
    // add r4, #0x68
    // add r4, #0x6c
    // add r4, #0x70
    // add r4, #0x74
    // add r4, #0x78
    // add r1, sp, #0
    // add r1, #1
    // add r0, sp, #0
    // add r1, sp, #4
    // add r1, sp, #0
    // add r1, #2
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    // add r0, sp, #0
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // str r0, [r4]
}




void sub_020179D4(void) {
    // add r2, r3, r2
    // sub r2, r5, r2
    // add r2, r3, r2
    // add r2, r5, r2
    // add r2, r3, r2
    // add r2, r5, r2
}




void sub_02017A1C(void) {
    // add r2, #0xf4
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)r0), 0xc, 0xc, *((u32*)(r0 + 0x70)));
    // add r2, #0xf3
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)r4), 0xd, 0xd, *((u32*)(r4 + 0x74)));
    Pokepic_SetAttr(*((u32*)r4), 9, ((*((u32*)(r4 + 0x78)) << 0x10) >> 0x10));
    sub_02017488(r4);
    sub_02017488(r4);
    GF_AssertFail();
}




void sub_02017A84(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // add r0, r4, r0
    // add r0, sp, #0
    // add r0, r4, r0
}




void sub_02017AD8(void) {
}




void sub_02017AEC(void) {
    // add r1, sp, #4
    // add r1, #2
    // add r1, sp, #4
    // add r1, #1
    // add r1, sp, #4
    // add r1, sp, #8
    // ldr r0, [sp, #8]
    // add r3, sp, #4
    // str r0, [sp]
}




void sub_02017B2C(void) {
}




void sub_02017B48(void) {
    // strb r2, [r0, r1]
}




void sub_02017B54(void) {
    // add r1, r4, r1
    sub_02017280(0x000001CE);
    GF_AssertFail(*((u8*)(r4 + 0x000001CE)), 0, 0);
}




void sub_02017B8C(void) {
}




void sub_02017B98(void) {
}




void sub_02017BA4(void) {
}




void sub_02017BB0(void) {
}




void sub_02017BBC(void) {
}




void sub_02017BC8(void) {
    // str r0, [r3]
    // add r0, r1, r0
    // str r0, [r3]
    // add r0, r1, r0
    // str r0, [r3]
}




void sub_02017BF8(void) {
    // sub r0, #0x23
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02017C0C: ; jump table
    // add r0, #0x3c
    // add r0, #0x68
    // add r0, #0x40
    // add r0, #0x6c
    // add r0, #0x44
    // add r0, #0x70
    // add r0, #0x48
    // add r0, #0x74
    // add r0, #0x4c
    // add r0, #0x78
}




void sub_02017C78(void) {
    sub_02017220(((r1 << 0x18) >> 0x18));
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r1, #0x2c
    sub_02017280(r5);
    // ldr r1, [sp, #4]
    // add r1, #0x2d
    sub_02017280(r5);
    // str r0, [sp]
    // ldr r0, [sp]
    // add r6, r1, r0
    // ldr r0, [sp, #4]
    // add r1, r7, r1
    sub_0201726C(r5, (0 << 2));
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // ldr r1, [sp, #4]
    sub_02017BF8(((*((u32*)(*((u32*)(_020F61C4 + *((u32*)(r6 + 4)))) + 4)) << 0x18) >> 0x18), (*((u32*)(_020F61C4 + *((u32*)(r6 + 4)))) << 2), r5);
    // ldr r0, [sp, #4]
    // add r0, #0x2d
    // ldr r0, [sp, #4]
    // blx r2
    // ldr r0, [sp, #4]
    // add r0, #0x2d
    // ldr r0, [sp, #4]
    // add r0, #0x2d
    // str r0, [sp, #4]
    // strb r1, [r0]
}




void sub_02017D20(void) {
    // add r0, r2, r0
    // sub r0, #0x1e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02017D48: ; jump table
    // asr r0, r1, #4
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0xc
    // str r1, [r0]
    // asr r1, r1, #4
    // ldrsh r1, [r1, r2]
    // asr r1, r1, #0xc
    // str r1, [r0]
    // asr r0, r1, #4
    // ldrsh r0, [r0, r1]
    // asr r0, r0, #0xc
    // neg r1, r0
    // str r1, [r0]
    // asr r1, r1, #4
    // ldrsh r1, [r1, r2]
    // asr r0, r1, #0xc
    // neg r1, r0
    // str r1, [r0]
    GF_AssertFail(*((u32*)(r0 + 0x24)), (FX_SinCosTable_ * *((u32*)(r0 + 0xc))), ((((*((u32*)(r0 + 0x24)) << 2) << 1) + 1) << 1));
    // add r0, #0x2c
    // add r1, #0x30
    sub_02017BC8(*((u8*)r4), r4, *((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    // str r0, [r4]
}




void sub_02017DD8(void) {
    _s32_div_f(((*((u32*)(r0 + 0x1c)) + 1) * *((u32*)(r0 + 0x10))), *((u32*)(r0 + 0x18)));
    // add r0, r1, r0
    // sub r0, #0x1e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02017E06: ; jump table
    // asr r0, r1, #4
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0xc
    // str r1, [r0]
    // asr r1, r1, #4
    // ldrsh r1, [r1, r2]
    // asr r1, r1, #0xc
    // str r1, [r0]
    // asr r0, r1, #4
    // ldrsh r0, [r0, r1]
    // asr r0, r0, #0xc
    // neg r1, r0
    // str r1, [r0]
    // asr r1, r1, #4
    // ldrsh r1, [r1, r2]
    // asr r0, r1, #0xc
    // neg r1, r0
    // str r1, [r0]
    GF_AssertFail(*((u32*)(r4 + 0x24)), (FX_SinCosTable_ * *((u32*)(r4 + 0xc))), ((((*((u32*)(r4 + 0x24)) << 2) << 1) + 1) << 1));
    // add r0, #0x2c
    // add r1, #0x30
    sub_02017BC8(*((u8*)r4), r4, *((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    // str r0, [r4]
}




void sub_02017E98(void) {
    // add r2, r5, r2
    // add r0, r0, r2
    // str r0, [r1]
    // add r0, #0x2c
    // add r1, #0x30
    // str r0, [r4]
}




void sub_02017ED4(void) {
    // str r0, [r1]
    // add r0, #0x2c
    // add r1, #0x30
    // str r0, [r4]
}




void sub_02017F10(void) {
    // add r2, r2, r0
    // add r0, r0, r2
    // str r0, [r1]
    // add r0, #0x2c
    // str r2, [r1]
    // str r0, [r4]
    // str r2, [r1]
    // str r0, [r4]
    // add r3, r3, r0
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1]
    // str r0, [r4]
    // sub r2, r3, r2
    // sub r0, r0, r2
    // str r0, [r1]
    // str r0, [r4]
    // add r0, #0x2c
    // add r1, #0x30
}



