/* Decompiled from asm/unk_0201010C.s */
#include "global.h"

void FadeFunc_00(void) {
}




void FadeFunc_01(void) {
}




void FadeFunc_02(void) {
    // str r1, [r0]
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D60);
    sub_0201289C(r4, _0210F64C);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_03(void) {
    *((u32*)(_0210F64C + 0x10)) = _020F5D5C;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D5C);
    sub_0201289C(r4, _0210F65C);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_04(void) {
    *((u32*)(_0210F64C + 0x20)) = _020F5D64;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D64);
    sub_0201289C(r4, _0210F66C);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_05(void) {
    *((u32*)(_0210F64C + 0x28)) = _020F5D58;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D58);
    sub_0201289C(r4, _0210F674);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_06(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E2C);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_07(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E38);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_08(void) {
    *((u32*)(_0210F64C + 8)) = _020F5D90;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D90);
    sub_0201289C(r4, _0210F654);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_09(void) {
    *((u32*)(_0210F64C + 0x38)) = _020F5D68;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D68);
    sub_0201289C(r4, _0210F684);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_10(void) {
    *((u32*)(_0210F64C + 0x48)) = _020F5D80;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D80);
    sub_0201289C(r4, _0210F694);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_11(void) {
    *((u32*)(_0210F64C + 0x40)) = _020F5DB8;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5DB8);
    sub_0201289C(r4, _0210F68C);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_12(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E5C);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_13(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E68);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_14(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_020116EC(r4, _020F5E80, _020F5E8C);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02011744(0);
}




void FadeFunc_15(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_020116EC(r4, _020F5EA4, _020F5EB0);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02011744(0);
}




void FadeFunc_16(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011884(r4, _020F5EC8);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020118BC(0);
}




void FadeFunc_17(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011884(r4, _020F5ED4);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020118BC(0);
}




void FadeFunc_18(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011884(r4, _020F5DD8);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020118BC(0);
}




void FadeFunc_19(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011884(r4, _020F5DE4);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020118BC(0);
}




void FadeFunc_20(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011B5C(r4, _020F5DD0);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02011B94(0);
}




void FadeFunc_21(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011B5C(r4, _020F5DC8);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02011B94(0);
}




void FadeFunc_22(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E08);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_23(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E14);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_24(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E20);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_25(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E44);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_26(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011D60(r4, _020F5DA8);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02011D98(0);
}




void FadeFunc_27(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011D60(r4, _020F5DA0);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02011D98(0);
}




void FadeFunc_28(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0
    *((u16*)(_020F5EFC + 8)) = 4;
    *((u16*)(_020F5EFC + 0xa)) = 0;
    *((u8*)(_020F5EFC + 0xc)) = 0x3f;
    *((u8*)(_020F5EFC + 0xd)) = 0x20;
    *((u16*)(_020F5EFC + 0xe)) = 1;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), 1);
    // add r1, sp, #0
    sub_02011FF8(r4);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02012030(0);
}




void FadeFunc_29(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0
    *((u16*)(_020F5F1C + 8)) = 4;
    *((u16*)(_020F5F1C + 0xa)) = 0;
    *((u8*)(_020F5F1C + 0xc)) = 0x3f;
    *((u8*)(_020F5F1C + 0xd)) = 0x20;
    *((u16*)(_020F5F1C + 0xe)) = 0;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), 0x20, 0);
    // add r1, sp, #0
    sub_02011FF8(r4);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02012030(0);
}




void FadeFunc_30(void) {
    *((u32*)(_0210F64C + 0x30)) = _020F5EBC;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5EBC);
    sub_0201289C(r4, _0210F67C);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_31(void) {
    *((u32*)(_0210F64C + 0x18)) = _020F5DF0;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5DF0);
    sub_0201289C(r4, _0210F664);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020128E0(0);
}




void FadeFunc_32(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(_020F5D58 + 0x32));
    *((u16*)(r0 + 4)) = *((u16*)(_020F5D58 + 0x34));
    *((u16*)(r0 + 6)) = *((u16*)(_020F5D58 + 0x36));
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u16*)(_020F5D58 + 0x36)), *((u16*)(_020F5D58 + 0x34)));
    // add r1, sp, #0
    sub_020122B8(r4);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020122F8(0);
}




void FadeFunc_33(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(_020F5D98 + 0x2a));
    *((u16*)(r0 + 4)) = *((u16*)(_020F5D98 + 0x2c));
    *((u16*)(r0 + 6)) = *((u16*)(_020F5D98 + 0x2e));
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u16*)(_020F5D98 + 0x2e)), *((u16*)(_020F5D98 + 0x2c)));
    // add r1, sp, #0
    sub_020122B8(r4);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020122F8(0);
}




void FadeFunc_34(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(_020F5D58 + 0x22));
    *((u16*)(r0 + 4)) = *((u16*)(_020F5D58 + 0x24));
    *((u16*)(r0 + 6)) = *((u16*)(_020F5D58 + 0x26));
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u16*)(_020F5D58 + 0x26)), *((u16*)(_020F5D58 + 0x24)));
    // add r1, sp, #0
    sub_020125EC(r4);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201262C(0);
}




void FadeFunc_35(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(_020F5D58 + 0x1a));
    *((u16*)(r0 + 4)) = *((u16*)(_020F5D58 + 0x1c));
    *((u16*)(r0 + 6)) = *((u16*)(_020F5D58 + 0x1e));
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u16*)(_020F5D58 + 0x1e)), *((u16*)(_020F5D58 + 0x1c)));
    // add r1, sp, #0
    sub_020125EC(r4);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201262C(0);
}




void FadeFunc_36(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011884(r4, _020F5E98);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020118BC(0);
}




void FadeFunc_37(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02011884(r4, _020F5EE0);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_020118BC(0);
}




void FadeFunc_38(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5DFC);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_39(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_0201164C(r4, _020F5E50);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_0201169C(0);
}




void FadeFunc_40(void) {
    *((u32*)(_0210F64C + 0x5c)) = _020F5D98;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5D98);
    sub_02012B1C(r4, _0210F69C);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02012B80(0);
}




void FadeFunc_41(void) {
    *((u32*)(_0210F64C + 0x74)) = _020F5DB0;
    sub_0200FCDC(*((u16*)(r0 + 0x24)), _020F5DB0);
    sub_02012B1C(r4, _0210F6B4);
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02012B80(0);
}




void FadeFunc_42(void) {
    sub_0200FCDC(*((u16*)(r0 + 0x24)), *((u32*)(r0 + 0xc)));
    sub_02012DD8(r4, _020F5E74);
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 0x2c)) = 0;
    sub_02012E10(0);
}




void sub_020109BC(void) {
    // asr r0, r0, #4
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
}




void sub_020109D8(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // asr r0, r1, #0xc
}




void sub_02010A00(void) {
    sub_020109BC();
    // str r0, [sp]
    // asr r0, r0, #0x1f
    // add r5, r5, r1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // asr r3, r4, #0x1f
    _ll_mul((r6 << 2), (r6 << 0xc));
    // add r0, r0, r2
    // adc r1, r2
    // asr r0, r0, #0xc
    // stmia r5!, {r0}
    // add r4, r4, r0
}




void sub_02010A54(void) {
    // add r0, r4, r0
    // asr r0, r0, #1
}




void sub_02010A6C(void) {
    // sub r0, r1, r0
}




void sub_02010A7C(void) {
    // add r0, r0, r1
    // bpl _02010A82
}




void sub_02010A8C(void) {
    // add r2, r3, r2
    // str r2, [r0]
    // add r2, r3, r2
    // add r2, r3, r2
    // add r1, r2, r1
}




void sub_02010AB0(void) {
    // ldr r4, [sp, #0x18]
    // ldr r7, [sp, #0x1c]
    // str r2, [r0]
    // str r0, [r1]
    // str r0, [r6]
}




void sub_02010B14(void) {
    Heap_Alloc(*((u32*)(r0 + 0x20)), 0x1c);
    *((u32*)(r5 + 0x14)) = r0;
    // strb r1, [r0]
    // mvn r7, r7
    // mvn r7, r7
    GF_AssertFail(0x00007FFF, *((u16*)(r5 + 0x24)), (0x1c - 1));
    // sub r6, #0x10
    // sub r6, #0x10
    GF_AssertFail();
    SetMasterBrightness(*((u32*)(r5 + 0x10)), r7);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(r5 + 8));
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = (r7 << 7);
    *((u32*)(r4 + 0x10)) = (r6 << 7);
    sub_02010A6C(r7, r6, *((u32*)(r5 + 4)));
    *((u32*)(r4 + 0x14)) = r0;
    *((u32*)(r4 + 0x18)) = *((u32*)(r5 + 0x10));
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
}




void sub_02010BB4(void) {
}




void sub_02010BF4(void) {
    // str r0, [r1]
    // add r0, r2, r0
    // asr r1, r2, #6
    // add r1, r2, r1
    // asr r1, r1, #7
}




void sub_02010C38(void) {
    GF_AssertFail();
    // sub r5, #0xc0
    sub_02010EE0(r4, 0);
    // add r1, r0, r5
    // ldrsh r2, [r1, r4]
    // ldrsh r1, [r0, r5]
    // tst r3, r4
    // and r3, r1
    *((u16*)(0x04000004 + 0x3c)) = (((r2 << 0x18) >> 0x18) | (r1 << 8));
    // add r0, #0x40
    // strh r1, [r0]
    // tst r0, r3
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04001040 + 4)) = 0xc0;
    // tst r3, r4
    // and r3, r1
    *((u16*)(0xc0 + 0x3e)) = (((r2 << 0x18) >> 0x18) | (0x04001040 << 8));
    // add r0, #0x42
    // strh r1, [r0]
    // tst r0, r3
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04001042 + 4)) = 0xc0;
    sub_02010EE0(*((u16*)0xc0), 0, *((u16*)0xc0));
    // add r1, r3, r5
    // ldrsh r2, [r1, r6]
    // ldrsh r1, [r3, r5]
    // tst r3, r6
    // and r3, r1
    *((u16*)(0x04000004 + 0x3c)) = (((r2 << 0x18) >> 0x18) | (r1 << 8));
    // add r0, #0x40
    // strh r1, [r0]
    // tst r0, r3
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04001040 + 4)) = 0xc0;
    // tst r3, r6
    // and r3, r1
    *((u16*)(0x04000004 + 0x3e)) = (((r2 << 0x18) >> 0x18) | (0x04001040 << 8));
    // add r0, #0x42
    // strh r1, [r0]
    // tst r0, r3
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04001042 + 4)) = 0xc0;
    sub_02010EE0(r4, 1, *((u16*)0x04000004));
    // add r1, r0, r5
    // ldrsh r2, [r1, r4]
    // ldrsh r1, [r0, r5]
    // tst r3, r4
    // and r3, r1
    *((u16*)(0x04000004 + 0x3c)) = (((r2 << 0x18) >> 0x18) | (r1 << 8));
    // add r0, #0x40
    // strh r1, [r0]
    // tst r0, r3
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04001040 + 4)) = 0xc0;
    // tst r3, r4
    // and r3, r1
    *((u16*)(0xc0 + 0x3e)) = (((r2 << 0x18) >> 0x18) | (0x04001040 << 8));
    // add r0, #0x42
    // strh r1, [r0]
    // tst r0, r3
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04001042 + 4)) = 0xc0;
}




void sub_02010E64(void) {
    Heap_Alloc(r3, 0x00000604);
    // str r0, [r5]
    *((u32*)(r5 + 4)) = 1;
    *((u32*)(r5 + 8)) = r6;
    // str r4, [r1, r0]
    Heap_Alloc(r3, 0x00000C08);
    // str r0, [r5]
    *((u32*)(r5 + 4)) = 2;
    *((u32*)(r5 + 8)) = r6;
    // add r2, r2, r4
    // str r3, [r2, r0]
    // add r4, r4, r1
}




void sub_02010EC8(void) {
}




void sub_02010ED0(void) {
}




void sub_02010EE0(void) {
}




void sub_02010F00(void) {
    // str r0, [sp]
    // add r1, r0, r6
    // ldr r0, [sp]
}




void sub_02010F34(void) {
    // str r4, [sp]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r4, [sp, #8]
}




void sub_02010F84(void) {
    // ldr r2, [sp, #0x34]
    // ldr r4, [sp, #0x20]
    // str r5, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    // ldr r3, [sp, #0x30]
    // str r4, [sp, #4]
    // str r4, [sp]
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x24]
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    // str r4, [sp, #8]
}




void sub_02010FEC(void) {
    // add r1, sp, #4
    // add r1, sp, #4
    // strb r0, [r1]
    // add r0, sp, #4
    // str r4, [sp]
    // add r1, sp, #4
}




void sub_02011068(void) {
}




void sub_02011080(void) {
    // str r7, [r5, r0]
    // strb r4, [r5, r0]
    // strb r6, [r5, r0]
    // str r7, [r5, r0]
    // ldr r1, [sp, #0x18]
    // str r1, [r5, r0]
    // strb r4, [r5, r1]
    // strb r6, [r5, r0]
}




void sub_020110C4(void) {
    // bx r3
    // nop
    // _020110D0: .word SysTask_CreateOnVWaitQueue
    // _020110D4: .word sub_02011104
    // _020110D8: .word 0x000003FF
}




void sub_020110DC(void) {
}




void sub_020110F4(void) {
    // ldrb r1, [r1, r3]
    // bx r3
    // _020110FC: .word 0x00000309
    // _02011100: .word sub_0200FFB4
}




void sub_02011104(void) {
    // str r0, [sp]
    // add r6, #0xc4
    // add r0, #0xc0
    // add r5, r5, r6
    // ldr r0, [sp]
}




void sub_02011130(void) {
    GF_AssertFail();
    // sub r0, #0xc0
    // add r0, r4, r0
    // add r0, #0xc0
    // tst r1, r2
    // add r0, #0x46
    // strh r1, [r0]
    // tst r0, r1
    // strh r0, [r1]
    // tst r0, r1
    // add r2, #0x44
    // strh r0, [r2]
    // tst r0, r1
    // strh r0, [r1]
    // tst r1, r2
    // add r0, #0x44
    // and r3, r1
    // strh r1, [r0]
    // tst r0, r1
    // and r1, r0
    // strh r0, [r2]
    // tst r1, r2
    // add r0, #0x46
    // strh r1, [r0]
    // tst r0, r1
    // strh r0, [r1]
    // tst r1, r2
    // add r0, #0x44
    // strh r1, [r0]
    // tst r0, r1
    // strh r0, [r1]
    // tst r1, r2
    // add r0, #0x44
    // and r3, r1
    // strh r1, [r0]
    // tst r0, r1
    // and r1, r0
    // strh r0, [r2]
    // add r1, r4, r0
    // add r1, #0xc0
    // tst r2, r3
    // add r1, #0x46
    // strh r2, [r1]
    // tst r1, r2
    // strh r1, [r2]
    // tst r2, r3
    // add r1, #0x44
    // strh r2, [r1]
    // tst r1, r2
    // strh r1, [r2]
    // tst r2, r3
    // add r1, #0x44
    // and r5, r2
    // strh r2, [r1]
    // tst r1, r2
    // and r2, r1
    // strh r1, [r3]
    // tst r2, r3
    // add r1, #0x46
    // strh r2, [r1]
    // tst r1, r2
    // strh r1, [r2]
    // tst r2, r3
    // add r1, #0x44
    // strh r2, [r1]
    // tst r1, r2
    // strh r1, [r2]
    // tst r2, r3
    // add r1, #0x44
    // and r5, r2
    // strh r2, [r1]
    // tst r1, r2
    // and r2, r1
    // strh r1, [r3]
    // add r1, r4, r1
    // add r0, r1, r0
    // add r0, #0xc0
    // tst r2, r3
    // add r0, #0x46
    // strh r2, [r0]
    // tst r0, r2
    // strh r0, [r2]
    // tst r0, r1
    // add r2, #0x44
    // strh r0, [r2]
    // tst r0, r1
    // strh r0, [r1]
    // tst r1, r2
    // add r0, #0x44
    // and r3, r1
    // strh r1, [r0]
    // tst r0, r1
    // and r1, r0
    // strh r0, [r2]
    // tst r2, r3
    // add r0, #0x46
    // strh r2, [r0]
    // tst r0, r2
    // strh r0, [r2]
    // tst r1, r2
    // add r0, #0x44
    // strh r1, [r0]
    // tst r0, r1
    // strh r0, [r1]
    // tst r1, r2
    // add r0, #0x44
    // and r3, r1
    // strh r1, [r0]
    // tst r0, r1
    // and r1, r0
    // strh r0, [r2]
}




void sub_0201164C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void sub_0201169C(void) {
}




void sub_020116EC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x4c
}




void sub_02011744(void) {
    // add r0, #0x4c
    // add r0, r4, r0
}




void sub_020117A0(void) {
    // str r1, [sp]
    // add r1, #0x20
    // add r2, #0x10
    // str r6, [sp, #4]
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
}




void sub_020117FC(void) {
    // add r1, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // asr r0, r1, #6
    // add r0, r1, r0
    // asr r0, r0, #7
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // asr r1, r2, #6
    // add r1, r2, r1
    // asr r2, r3, #6
    // add r2, r3, r2
    // asr r1, r1, #7
    // asr r3, r4, #6
    // add r3, r4, r3
    // asr r2, r2, #7
    // asr r3, r3, #7
}




void sub_02011884(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_020118BC(void) {
}




void sub_02011918(void) {
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r1]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r6, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    sub_02010A6C(0, 2);
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x44]
    sub_02010E64(r5, *((u8*)(r4 + 8)), r6);
    // ldrsh r1, [r4, r0]
    *((u32*)(r5 + 0xc)) = (r1 << 7);
    // ldrsh r1, [r4, r1]
    *((u32*)(r5 + 0x10)) = 4;
    // ldrsh r1, [r4, r1]
    *((u32*)(r5 + 0x14)) = 6;
    // ldr r1, [sp, #0x20]
    *((u32*)(r5 + 0x18)) = 6;
    // ldr r1, [sp, #0x18]
    *((u32*)(r5 + 0x1c)) = 6;
    // ldr r1, [sp, #0x1c]
    *((u32*)(r5 + 0x20)) = 6;
    *((u32*)(r5 + 0x24)) = 0;
    // ldr r0, [sp, #0x40]
    *((u32*)(r5 + 0x30)) = r7;
    *((u32*)(r5 + 0x34)) = 0;
    // ldr r0, [sp, #0x44]
    *((u32*)(r5 + 0x28)) = 0;
    *((u32*)(r5 + 0x2c)) = *((u8*)(r4 + 0xb));
    sub_02011AD8(r5, 6);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r5, 0x000003FF);
    sub_02010EE0(r5, 0);
    // str r6, [sp]
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 9)), *((u8*)(r4 + 0xa)), *((u8*)(r4 + 8)));
    sub_02011068(r7, 1, r6, *((u32*)(r5 + 0x2c)));
    sub_02011068(r7, 2, r6, *((u32*)(r5 + 0x2c)));
    // ldr r0, [sp, #0x44]
    // str r0, [sp]
    sub_0200FF88(*((u32*)(r5 + 0x34)), r5, sub_02010C38, r6);
}




void sub_020119F4(void) {
    *((u32*)(r0 + 0x24)) = (*((u32*)(r0 + 0x24)) + 1);
    *((u32*)(r0 + 0x24)) = 0;
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) - 1);
    // add r1, r2, r1
    *((u32*)(r0 + 0xc)) = *((u32*)(r0 + 0x18));
    sub_02011AD8(*((u32*)(r0 + 0x18)), *((u32*)(r0 + 0xc)));
    SysTask_CreateOnVWaitQueue(sub_02010F00, r4, 0x000003FF);
    sub_0200FFB4(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x28)));
}




void sub_02011A44(void) {
    // str r1, [sp]
    // asr r1, r0, #6
    // add r1, r0, r1
    // asr r1, r1, #7
    // ldr r5, [sp, #0x20]
    // ldr r4, [sp, #0x24]
    // sub r0, r3, r2
    // bpl _02011A5C
    // neg r0, r0
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [sp, #4]
    // asr r7, r0, #0x1f
    // asr r1, r0, #0x1f
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // adc r6, r7
    // add r2, r2, r1
    // adc r3, r7
    // sub r0, r0, r2
    // asr r2, r0, #0xc
    // ldr r0, [sp]
    // sub r0, r0, r2
    // str r0, [r5]
    // bpl _02011AC4
    // str r0, [r5]
    // add r0, r1, r0
    // str r0, [r4]
    // str r0, [r4]
}




void sub_02011AD8(void) {
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // sub r0, r0, r4
    // add r1, r7, r0
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0xc]
    // sub r0, r0, r4
    // add r1, r7, r0
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // strh r1, [r6, r0]
    // ldr r1, [sp, #8]
    // strh r1, [r6, r0]
}




void sub_02011B5C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_02011B94(void) {
}




void sub_02011BF0(void) {
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r6, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    sub_02010A6C(*((u16*)r1), *((u16*)(r1 + 2)));
    *((u32*)(r5 + 0x10)) = r0;
    // ldr r3, [sp, #0x44]
    sub_02010E64(r5, *((u8*)(r4 + 4)), r6);
    *((u32*)(r5 + 0xc)) = (*((u16*)r4) << 7);
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x14)) = (*((u16*)r4) << 7);
    // ldr r0, [sp, #0x1c]
    *((u32*)(r5 + 0x18)) = (*((u16*)r4) << 7);
    *((u32*)(r5 + 0x1c)) = 0;
    // ldr r0, [sp, #0x40]
    *((u32*)(r5 + 0x24)) = r7;
    *((u32*)(r5 + 0x28)) = 0;
    // ldr r0, [sp, #0x44]
    *((u32*)(r5 + 0x2c)) = 0;
    *((u32*)(r5 + 0x20)) = *((u8*)(r4 + 7));
    sub_02011D08(r5);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r5, 0x000003FF);
    sub_02010EE0(r5, 0);
    // str r6, [sp]
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 5)), *((u8*)(r4 + 6)), *((u8*)(r4 + 4)));
    sub_02011068(r7, 1, r6, *((u32*)(r5 + 0x20)));
    sub_02011068(r7, 2, r6, *((u32*)(r5 + 0x20)));
    // ldr r0, [sp, #0x44]
    // str r0, [sp]
    sub_0200FF88(*((u32*)(r5 + 0x28)), r5, sub_02010C38, r6);
}




void sub_02011CB8(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    *((u32*)(r0 + 0x1c)) = 0;
    *((u32*)(r0 + 0x14)) = (*((u32*)(r0 + 0x14)) - 1);
    // add r1, r2, r1
    *((u32*)(r0 + 0xc)) = *((u32*)(r0 + 0x10));
    sub_02011D08(*((u32*)(r0 + 0x10)), *((u32*)(r0 + 0xc)));
    SysTask_CreateOnVWaitQueue(sub_02010F00, r4, 0x000003FF);
    sub_0200FFB4(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x2c)));
}




void sub_02011D08(void) {
    // asr r0, r1, #6
    // add r0, r1, r0
    // asr r0, r0, #7
    // add r1, sp, #0
    // add r4, sp, #0
    // neg r1, r1
    // strh r0, [r5, r1]
    // strh r0, [r5, r7]
}




void sub_02011D60(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_02011D98(void) {
}




void sub_02011DEC(void) {
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // sub r0, r1, r0
    // ldr r6, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    _s32_div_f(*((u16*)r1), r2);
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x44]
    sub_02010E64(r5, *((u8*)(r4 + 4)), r6);
    *((u32*)(r5 + 0xc)) = (2 << 0x12);
    *((u32*)(r5 + 0x10)) = *((u16*)r4);
    // ldr r0, [sp, #0x20]
    *((u32*)(r5 + 0x14)) = *((u16*)r4);
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x18)) = *((u16*)r4);
    // ldr r0, [sp, #0x1c]
    *((u32*)(r5 + 0x1c)) = *((u16*)r4);
    *((u32*)(r5 + 0x20)) = 0;
    // ldr r0, [sp, #0x40]
    *((u32*)(r5 + 0x28)) = r7;
    *((u32*)(r5 + 0x2c)) = 0;
    // ldr r0, [sp, #0x44]
    *((u32*)(r5 + 0x30)) = 0;
    *((u32*)(r5 + 0x24)) = *((u8*)(r4 + 7));
    sub_02011F10(r5);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r5, 0x000003FF);
    sub_02010EE0(r5, 0);
    // str r6, [sp]
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 5)), *((u8*)(r4 + 6)), *((u8*)(r4 + 4)));
    sub_02011068(r7, 1, r6, *((u32*)(r5 + 0x24)));
    sub_02011068(r7, 2, r6, *((u32*)(r5 + 0x24)));
    // ldr r0, [sp, #0x44]
    // str r0, [sp]
    sub_0200FF88(*((u32*)(r5 + 0x2c)), r5, sub_02010C38, r6);
}




void sub_02011EC0(void) {
    *((u32*)(r0 + 0x20)) = (*((u32*)(r0 + 0x20)) + 1);
    *((u32*)(r0 + 0x20)) = 0;
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) - 1);
    // add r1, r2, r1
    *((u32*)(r0 + 0x10)) = *((u32*)(r0 + 0x14));
    sub_02011F10(*((u32*)(r0 + 0x14)), *((u32*)(r0 + 0x10)));
    SysTask_CreateOnVWaitQueue(sub_02010F00, r4, 0x000003FF);
    sub_0200FFB4(*((u32*)(r4 + 0x2c)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x30)));
}




void sub_02011F10(void) {
    sub_02010EE0(0);
    // str r0, [sp]
    // asr r0, r0, #4
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (*((u32*)(r4 + 0x10)) << 2), *((u32*)(r4 + 0xc)));
    // add r2, r0, r2
    // adc r1, r3
    // asr r7, r1, #0xc
    _s32_div_f((r7 << 1), 0x15, (2 << 0xa), 0);
    // sub r2, r1, r0
    // add r1, #0xb4
    _s32_div_f((0x0000FFFF * r2), 0xb4);
    // add r1, r0, r1
    // asr r4, r1, #1
    sub_02010A54(r4, (1 << 8));
    // asr r0, r0, #0xc
    // str r0, [sp, #4]
    GF_AssertFail();
    // ldr r2, [sp, #4]
    // add r1, sp, #0xc
    sub_02010A00(r4, 0);
    // ldr r5, [sp]
    // ldr r0, [sp, #4]
    // sub r0, r0, r1
    // add r0, sp, #0xc
    // neg r1, r6
    sub_02010A7C(0x80, (r0 << 2));
    // str r0, [sp, #8]
    sub_02010A7C(0x80, r6);
    // ldr r1, [sp, #8]
    // asr r2, r1, #0x10
    // strh r2, [r5, r1]
    // asr r1, r0, #0x10
    // strh r1, [r5, r0]
    // sub r0, r0, r4
    // ldr r0, [sp]
    // add r0, r0, r3
    // strh r2, [r0, r3]
    // strh r1, [r0, r2]
}




void sub_02011FF8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_02012030(void) {
}




void sub_02012090(void) {
    // str r2, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x44]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x44]
    Heap_Alloc((0x30 * *((u16*)(r1 + 8))), *((u16*)(r1 + 8)));
    *((u32*)(r6 + 0xc)) = r0;
    GF_AssertFail();
    *((u32*)(r6 + 0x10)) = *((u16*)(r5 + 8));
    // str r0, [sp, #0x20]
    // ldr r4, [sp, #0x20]
    // add r0, r0, r4
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // add r0, r2, r7
    // add r2, r2, r7
    // add r1, #0x20
    // add r2, #0x10
    // add r3, r3, r4
    sub_02010AB0(*((u32*)(r5 + 4)), *((u32*)(r5 + 4)), *((u32*)(r6 + 0xc)), *((u32*)r5));
    // ldr r0, [sp, #0x20]
    // add r7, #0x30
    // str r0, [sp, #0x20]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x44]
    sub_02010E64(r6, *((u16*)(r5 + 0xa)));
    // ldr r0, [sp, #0x18]
    *((u32*)(r6 + 0x14)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r6 + 0x18)) = r0;
    *((u32*)(r6 + 0x1c)) = 0;
    // ldr r0, [sp, #0x3c]
    *((u32*)(r6 + 0x24)) = 0;
    // ldr r0, [sp, #0x40]
    *((u32*)(r6 + 0x28)) = 0;
    // ldr r0, [sp, #0x44]
    *((u32*)(r6 + 0x2c)) = 0;
    *((u32*)(r6 + 0x20)) = *((u16*)(r5 + 0xe));
    sub_02012204(r6);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r6, 0x000003FF);
    sub_02010EE0(r6, 0);
    // ldr r1, [sp, #0x38]
    // str r1, [sp]
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x3c]
    sub_02010F84(*((u32*)(r6 + 0x20)), *((u8*)(r5 + 0xc)), *((u8*)(r5 + 0xd)), *((u16*)(r5 + 0xa)));
    // ldr r2, [sp, #0x38]
    sub_02011068(*((u32*)(r6 + 0x24)), 1, *((u32*)(r6 + 0x20)));
    // ldr r2, [sp, #0x38]
    sub_02011068(2, *((u32*)(r6 + 0x20)));
    // ldr r0, [sp, #0x44]
    // str r0, [sp]
    // ldr r3, [sp, #0x38]
    sub_0200FF88(*((u32*)(r6 + 0x28)), r6, sub_02010C38);
}




void sub_020121A4(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    *((u32*)(r0 + 0x1c)) = 0;
    *((u32*)(r0 + 0x14)) = (*((u32*)(r0 + 0x14)) - 1);
    sub_02012290((*((u32*)(r0 + 0x14)) - 1), (*((u32*)(r0 + 0x1c)) + 1));
    sub_02012204(r4);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r4, 0x000003FF);
    sub_0200FFB4(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x2c)));
}




void sub_020121F4(void) {
}




void sub_02012204(void) {
    // add r0, r0, r2
    // bmi _02012236
    // add r1, r1, r5
    // sub r5, #0x30
    // bpl _02012226
}




void sub_02012238(void) {
    // asr r1, r2, #6
    // add r1, r2, r1
    // asr r2, r1, #7
    // asr r1, r3, #6
    // add r1, r3, r1
    // asr r3, r5, #6
    // add r3, r5, r3
    // asr r5, r3, #7
    // asr r3, r4, #6
    // add r3, r4, r3
    // asr r3, r3, #7
    // asr r1, r1, #7
    // add r4, r0, r4
    // asr r6, r1, #0x10
    // asr r0, r0, #0x10
    // strh r0, [r4, r1]
    // strh r6, [r4, r2]
}




void sub_02012290(void) {
    // add r0, r1, r4
    // add r1, r1, r4
    // add r1, #0x10
    // add r4, #0x30
}




void sub_020122B8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_020122F8(void) {
}




void sub_02012358(void) {
    *((u32*)(r0 + 0xc)) = 0;
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    *((u32*)(r0 + 0x10)) = *((u16*)r1);
    // ldr r6, [sp, #0x40]
    // ldr r3, [sp, #0x4c]
    // sub r1, r2, r1
    *((u32*)(r0 + 0x14)) = *((u16*)r1);
    // ldr r7, [sp, #0x44]
    sub_02010E64(2, r6);
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x18)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r5 + 0x1c)) = 0;
    *((u32*)(r5 + 0x20)) = r0;
    *((u32*)(r5 + 0x24)) = 0;
    // ldr r0, [sp, #0x48]
    *((u32*)(r5 + 0x30)) = r7;
    *((u32*)(r5 + 0x34)) = r0;
    // ldr r0, [sp, #0x4c]
    *((u32*)(r5 + 0x2c)) = r0;
    *((u32*)(r5 + 0x28)) = *((u16*)(r4 + 6));
    // add r0, #0xc
    sub_020125D4(r5, *((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x18)));
    sub_020124B0(r5);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r5, 0x000003FF);
    sub_02010EE0(r5, 0);
    // str r0, [sp, #0x20]
    sub_02010EE0(r5, 1);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // str r6, [sp]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r3, [sp, #8]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 4)), *((u8*)(r4 + 5)), 0);
    // ldr r0, [sp, #0x24]
    // str r6, [sp]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 4)), *((u8*)(r4 + 5)), 1);
    sub_02011068(r7, 3, r6, *((u32*)(r5 + 0x28)));
    // ldr r0, [sp, #0x4c]
    // str r0, [sp]
    sub_0200FF88(*((u32*)(r5 + 0x34)), r5, sub_02010C38, r6);
}




void sub_02012454(void) {
    *((u32*)(r0 + 0x24)) = (*((u32*)(r0 + 0x24)) + 1);
    *((u32*)(r0 + 0x24)) = 0;
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // add r0, #0xc
    sub_020125D4(r0, (*((u32*)(r0 + 0x1c)) + 1), *((u32*)(r0 + 0x18)));
    sub_020124B0(r4);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r4, 0x000003FF);
    sub_0200FFB4(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x2c)));
}




void sub_020124AC(void) {
}




void sub_020124B0(void) {
    // str r0, [sp]
    _s32_div_f(*((u32*)(r0 + 0xc)), 0x00003FFF);
    // str r0, [sp, #4]
    // ldr r0, [sp]
    sub_02010EE0(((r1 << 0x10) >> 0x10), 0);
    // ldr r0, [sp]
    sub_02010EE0(1);
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // sub r1, r1, r6
    sub_020109D8(0x00003FFF, 0x60);
    // sub r1, r1, r6
    // add r3, r7, r1
    // sub r2, r1, r0
    // strh r2, [r3, r1]
    // strh r2, [r3, r1]
    // strh r2, [r5, r1]
    // add r0, #0x80
    // strh r0, [r5, r1]
    // sub r0, r0, r6
    // add r0, r7, r0
    // strh r2, [r0, r1]
    // strh r2, [r0, r1]
    // strh r1, [r5, r0]
    // strh r1, [r5, r0]
    // ldr r0, [sp, #4]
    // add r4, #0xc0
    // sub r6, r1, r0
    // ldr r0, [sp]
    // sub r0, r0, r5
    // add r0, r7, r0
    // strh r2, [r0, r1]
    // strh r2, [r0, r1]
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r1, #0x60
    sub_020109D8((r6 + 1), 0x60, 0x80);
    // sub r0, r0, r5
    // add r0, r7, r0
    // strh r3, [r0, r2]
    // sub r3, r2, r1
    // strh r3, [r0, r2]
    // add r1, #0x80
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
}




void sub_020125D4(void) {
}




void sub_020125EC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_0201262C(void) {
}




void sub_0201268C(void) {
    // str r3, [sp, #0x1c]
    *((u32*)(r0 + 0xc)) = *((u16*)r1);
    // str r2, [sp, #0x18]
    // ldr r6, [sp, #0x38]
    *((u32*)(r0 + 0x10)) = *((u16*)r1);
    // ldr r3, [sp, #0x44]
    // ldr r7, [sp, #0x3c]
    // sub r1, r2, r1
    *((u32*)(r0 + 0x14)) = *((u16*)r1);
    sub_02010E64(2, r6);
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x18)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r5 + 0x1c)) = 0;
    *((u32*)(r5 + 0x20)) = r0;
    *((u32*)(r5 + 0x24)) = 0;
    // ldr r0, [sp, #0x40]
    *((u32*)(r5 + 0x30)) = r7;
    *((u32*)(r5 + 0x34)) = r0;
    // ldr r0, [sp, #0x44]
    *((u32*)(r5 + 0x2c)) = r0;
    *((u32*)(r5 + 0x28)) = *((u16*)(r4 + 6));
    sub_020127B8(r5, 0);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r5, 0x000003FF);
    sub_02010EE0(r5, 0);
    sub_02010EE0(r5, 1);
    // str r6, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 4)), *((u8*)(r4 + 5)), 0);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 4)), *((u8*)(r4 + 5)), 1);
    sub_02011068(r7, 3, r6, *((u32*)(r5 + 0x28)));
    // ldr r0, [sp, #0x44]
    // str r0, [sp]
    sub_0200FF88(*((u32*)(r5 + 0x34)), r5, sub_02010C38, r6);
}




void sub_0201275C(void) {
    *((u32*)(r0 + 0x24)) = (*((u32*)(r0 + 0x24)) + 1);
    *((u32*)(r0 + 0x24)) = 0;
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // add r0, #0xc
    sub_02012884(r0, (*((u32*)(r0 + 0x1c)) + 1), *((u32*)(r0 + 0x18)));
    sub_020127B8(r4);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r4, 0x000003FF);
    sub_0200FFB4(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x2c)));
}




void sub_020127B4(void) {
}




void sub_020127B8(void) {
    // str r1, [sp, #8]
    sub_02010EE0(0);
    // str r0, [sp, #0x10]
    sub_02010EE0(r4, 1);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r6, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // sub r0, r0, r7
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    sub_020109D8(0x60, 0x00003FFF);
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    sub_020109D8();
    // sub r1, r1, r0
    // asr r1, r1, #0x10
    // str r1, [sp, #0x14]
    // strh r1, [r6, r2]
    // sub r1, r1, r4
    // asr r2, r1, #0x10
    // strh r2, [r6, r1]
    // sub r1, r1, r7
    // mov ip, r2
    // ldr r2, [sp, #0x10]
    // add r0, #0x80
    // add r3, r2, r1
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // strh r1, [r3, r2]
    // mov r2, ip
    // strh r2, [r3, r1]
    // add r4, #0x80
    // asr r2, r1, #0x10
    // strh r2, [r5, r1]
    // asr r1, r0, #0x10
    // strh r1, [r5, r0]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r0, r3, r0
    // strh r2, [r0, r3]
    // strh r1, [r0, r2]
}




void sub_02012884(void) {
}




void sub_0201289C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_020128E0(void) {
    // add r1, #8
}




void sub_02012940(void) {
    // ldr r7, [sp, #0x38]
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x18]
    // str r3, [sp]
    // ldr r6, [sp, #0x3c]
    // add r0, #0xc0
    // add r0, #0xc0
    // str r0, [r5, r1]
    // ldr r3, [sp, #0x44]
    // str r2, [r5, r0]
    // add r0, #0x18
    // str r2, [r5, r0]
    // add r0, #0x1c
    // str r3, [r5, r0]
    // ldr r0, [sp, #0x18]
    // add r2, #8
    // str r0, [r5, r2]
    // add r2, #0xc
    // str r0, [r5, r2]
    // ldr r0, [sp, #0x1c]
    // add r2, #0x10
    // str r0, [r5, r2]
    // add r2, #0x14
    // str r0, [r5, r2]
    // add r0, #0x20
    // str r6, [r5, r0]
    // ldr r0, [sp, #0x40]
    // add r1, #0x24
    // str r0, [r5, r1]
    // str r7, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
}




void sub_02012A2C(void) {
    // str r1, [r4, r2]
    // str r1, [r4, r2]
    // sub r1, #8
    // sub r1, #0xc
    // sub r1, #8
    // sub r2, #8
    // str r1, [r4, r2]
    // add r0, #0x10
    // add r2, #8
}




void sub_02012A8C(void) {
}




void sub_02012A90(void) {
    // add r0, r0, r4
}




void sub_02012ACC(void) {
    // sub r0, r4, r6
    // add r0, r0, r6
    // strb r6, [r5, r1]
}




void sub_02012B1C(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
}




void sub_02012B80(void) {
    sub_02012C68(*((u32*)(r0 + 0x14)), r0);
    sub_02012D4C(r5);
    sub_02010F34(*((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x18)), *((u32*)(r5 + 0x10)));
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    Heap_Free((*((u32*)(r5 + 0xc)) + 1));
    *((u32*)(r5 + 0x14)) = r4;
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    GF_AssertFail((*((u32*)(r5 + 0xc)) + 1));
}




void sub_02012BE8(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul((r2 << 0xc), *((u32*)(r1 + 0x14)));
    // add r0, r2, r0
    // adc r1, r3
    // asr r2, r0, #0xc
    // sub r1, r6, r2
    // strb r1, [r5, r0]
    // str r4, [r5, r1]
    // strb r1, [r5, r0]
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    sub_020117A0(r5, r4, r0, r7);
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    sub_02011068(*((u8*)(r4 + 8)), 1, *((u8*)(r4 + 0xb)));
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    sub_02011068(2, *((u8*)(r4 + 0xb)));
    // strb r1, [r5, r0]
}




void sub_02012C68(void) {
    sub_020117FC(*((u8*)(r0 + 0x00000385)));
    // strb r0, [r5, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x4c
    // add r1, #0xc
    sub_02012940(r5, *((u32*)(r5 + (0x00000385 - 5))), *((u8*)(r5 + (0x00000385 - 1))), *((u32*)(r4 + 8)));
    // add r0, #0x4c
    sub_02012A2C();
    // strb r1, [r5, r0]
}




void sub_02012CDC(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul((r2 << 0xc), *((u32*)(r1 + 0x14)));
    // add r0, r2, r0
    // adc r1, r3
    // asr r0, r0, #0xc
    // strb r0, [r5, r1]
    // sub r2, r6, r0
    // str r4, [r5, r0]
    // strb r3, [r5, r0]
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0xc]
    // add r0, #0x4c
    // add r1, #0xc
    sub_02012940(r5, *((u32*)(r5 + ((0xe1 << 2) - 4))), r0, r7);
    // strb r1, [r5, r0]
}




void sub_02012D4C(void) {
    // add r0, #0x4c
    sub_02012A2C(*((u8*)(r0 + 0x00000385)));
    // strb r0, [r5, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_020117A0(r5, *((u32*)(r5 + (0x00000385 - 5))), *((u8*)(r5 + (0x00000385 - 1))), *((u32*)(r4 + 8)));
    sub_02011068(*((u32*)(r4 + 0x18)), 1, *((u32*)(r4 + 0x10)), *((u8*)(*((u32*)(r5 + (0xe << 6))) + 0xb)));
    sub_02011068(2, *((u32*)(r4 + 0x10)), *((u8*)(r3 + 0xb)));
    sub_020117FC();
    // strb r1, [r5, r0]
}



