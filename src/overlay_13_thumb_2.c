/* Decompiled from asm/overlay_13_thumb_2.s */
#include "global.h"

void ov13_022208E8(void) {
    // blx r1
}




void ov13_022208F8(void) {
    // blx r1
}




void ov13_02220908(void) {
    // ldrsh r0, [r4, r2]
    // mvn r1, r1
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, #8
    // ldrsh r0, [r4, r0]
    // add r0, r4, r0
    // mvn r1, r1
    // mvn r1, r1
    // mvn r0, r0
    // strb r1, [r4, r0]
    ov13_02221428(0x00000116, 0xf, 0x00000106);
    // mvn r0, r0
    ov13_022208E8(0x000005F8);
    *((u32*)(_0224CF98 + 0x14)) = r0;
    // strb r1, [r4, r0]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // mvn r0, r0
    ov13_022217D0(0);
    ov13_022209F8(r4);
    ov13_022208F8(*((u32*)(_0224CF98 + 0x14)));
    ov13_02221428();
    // mvn r1, r1
    ov13_02222A14(*((u32*)ov13_022459B4), 0);
}




void ov13_022209F8(void) {
    // str r0, [sp, #8]
    // add r0, sp, #0x2c
    *((u16*)(r0 + 0x30)) = *((u16*)_0224267C);
    *((u16*)(r0 + 0x32)) = *((u16*)(_0224267C + 2));
    // add r1, sp, #0x58
    // strh r0, [r1]
    // str r0, [sp, #0x24]
    *((u16*)(*((u16*)(_0224267C + 2)) + 2)) = 0;
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0xb0
    ov13_02222978(1, *((u16*)(_0224267C + 2)), 0x18);
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    *((u16*)(0x00000106 + 0x30)) = r0;
    // ldrsh r2, [r1, r0]
    // sub r0, #0x31
    *((u16*)(0x00000106 + 0x30)) = 0xa;
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    *((u16*)(0x0000010A + 0x2c)) = 0xa;
    // ldrsh r2, [r1, r0]
    // sub r0, #0x2d
    *((u16*)(0x0000010A + 0x2c)) = 0xa;
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    *((u16*)((0x42 << 2) + 0x32)) = 0xa;
    // ldrsh r2, [r1, r0]
    // sub r0, #0x33
    *((u16*)((0x42 << 2) + 0x32)) = 0x64;
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    *((u16*)((0x43 << 2) + 0x2e)) = 0x64;
    // ldrsh r2, [r1, r0]
    // sub r0, #0x2f
    *((u16*)((0x43 << 2) + 0x2e)) = 0x64;
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // mvn r1, r1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    ov13_02221454((0x7d << 4), 0);
    // and r0, r1
    ov13_022214AC(0x13, *((u32*)(_0224CF98 + 0x2c)));
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022217D0(0);
    // add r1, sp, #0x2c
    // ldrsh r6, [r1, r0]
    // ldrsh r7, [r1, r0]
    ov13_022208F8(*((u32*)(_0224CF98 + 4)));
    *((u32*)(r5 + 4)) = 0;
    ov13_02222DB0(ov13_0224CF9C);
    // mvn r1, r1
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022216E0(*((u32*)(r5 + 4)));
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 2);
    // mvn r0, r0
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0, 0x00000116, 1);
    // mvn r0, r0
    ov13_022230F8(r6);
    // asr r4, r0, #0x10
    ov13_022217D0(1);
    // add r0, sp, #0x74
    ov13_02222978(0, 0x3c);
    // add r0, sp, #0x74
    ov13_0222175C();
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022208E8(0x58);
    *((u32*)(_0224CF98 + 0xc)) = r0;
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_02222978(0, 0, 0x58);
    // add r1, sp, #0x2c
    // ldrsh r5, [r1, r0]
    // add r0, sp, #0x74
    ov13_02222F28(0x30, *((u32*)(_0224CF98 + 0xc)));
    // mvn r1, r1
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022230F8(r6);
    // asr r4, r0, #0x10
    // add r0, sp, #0x2c
    // ldrsh r0, [r0, r1]
    // ldr r0, [sp, #8]
    // add r1, #0xe6
    // strb r2, [r0, r1]
    ov13_02221428(((r4 + 1) << 0x10), 0x30, 0xf);
    // mvn r0, r0
    // mvn r1, r1
    ov13_022228CC(0xC0A80B65, 0xff, 0xC0A80B65);
    ov13_022214AC(0xc);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_02221428(0);
    // ldr r2, [sp, #8]
    // add r1, sp, #0xb0
    // add r2, r2, r3
    ov13_022217A0(3, (0x11 << 4));
    ov13_02222A00(2, 2, 0);
    // str r0, [r1]
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // str r1, [sp]
    // add r3, sp, #0x54
    ov13_022229FC(0, 0x0000FFFF, 1);
    ov13_022214AC(0xb);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // add r0, sp, #0x2c
    ov13_02222978(0, 0, 8);
    // add r0, sp, #0x2c
    *((u8*)(r0 + 1)) = 2;
    ov13_02222A1C(0xC0A80B65, 2);
    // str r0, [sp, #0x30]
    ov13_02222A44(0x00005790);
    // add r1, sp, #0x2c
    *((u16*)(r1 + 2)) = r0;
    // add r1, sp, #0x2c
    ov13_02222A08(*((u32*)ov13_022459B4), 8);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // str r0, [sp, #0x18]
    // add r0, sp, #0x60
    ov13_02222978(*((u32*)(_0224CF98 + 0x14)), 0, 0x14);
    // str r0, [sp, #0x70]
    // sub r0, #0x64
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0xc]
    _s32_div_f(0xC0A80B65, (0xfa << 2));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    _s32_div_f((0xfa << 2));
    // str r0, [sp, #0x10]
    // add r0, sp, #0x2c
    // ldrsh r7, [r0, r1]
    // ldr r0, [sp, #0x24]
    // ldrsb r0, [r1, r0]
    // mvn r1, r1
    ov13_02222A14(*((u32*)ov13_022459B4), 0);
    // mvn r1, r1
    // str r1, [r0]
    ov13_02222924(ov13_022459B4, 0);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022208E8(0x58);
    *((u32*)(r5 + 4)) = r0;
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022208F8(*((u32*)(r5 + 4)));
    *((u32*)(r5 + 4)) = 0;
    ov13_02222DB0(ov13_0224CF9C);
    // mvn r1, r1
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022216E0(*((u32*)(r5 + 4)));
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 2);
    // mvn r0, r0
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0, 0x00000116, 1);
    // mvn r0, r0
    ov13_022230F8(r6);
    // asr r4, r0, #0x10
    // ldr r1, [sp, #0x28]
    // mvn r0, r0
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0, 0x00000116, 0xf);
    // mvn r0, r0
    ov13_022208E8(0x58);
    *((u32*)(r5 + 0xc)) = r0;
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_02222978(0, 0, 0x58);
    // add r0, sp, #0x74
    ov13_02222F28(*((u32*)(r5 + 0xc)));
    // mvn r1, r1
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022230F8(r6);
    // asr r4, r0, #0x10
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(((r4 + 1) << 0x10), 0x00000116, 0xf);
    // mvn r0, r0
    ov13_02221410(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)));
    // str r0, [sp, #0x1c]
    ov13_022228CC(*((u32*)(r5 + 0x38)), r0);
    ov13_022214AC(0xc);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    *((u8*)(ov13_0224CFB8 + 0x1c)) = 1;
    ov13_02221428(ov13_0224CFB8, 1);
    ov13_02222A00(2, 2, 0);
    // str r0, [r1]
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // str r1, [sp]
    // add r3, sp, #0x54
    ov13_022229FC(0, 0x0000FFFF, 1);
    ov13_022214AC(0xb);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // add r0, sp, #0x2c
    ov13_02222978(0, 0, 8);
    // add r0, sp, #0x2c
    *((u8*)(r0 + 1)) = 2;
    // ldr r0, [sp, #0x1c]
    ov13_02222A1C(2);
    // str r0, [sp, #0x30]
    ov13_02222A44(0x00005790);
    // add r1, sp, #0x2c
    *((u16*)(r1 + 2)) = r0;
    // add r1, sp, #0x2c
    ov13_02222A08(*((u32*)ov13_022459B4), 8);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // ldr r0, [sp, #0x24]
    // add r1, sp, #0x60
    // add r2, sp, #0xb0
    ov13_022220B4(0, *((u32*)ov13_022459B4));
    // mvn r1, r1
    // ldr r0, [sp, #0x24]
    // add r0, r0, r1
    ov13_022214AC((1 << 0xc));
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // ldr r0, [sp, #0x18]
    ov13_02222978(0, 0, 0x000005F8);
    // add r0, sp, #0x3c
    ov13_02222B20();
    // add r1, sp, #0x3c
    ov13_02222B2C(*((u32*)ov13_022459B4));
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x3c
    // str r0, [sp, #0x38]
    // add r0, sp, #0x34
    // str r0, [sp]
    ov13_02222998((*((u32*)ov13_022459B4) + 1), 0, 0);
    // ldr r0, [sp, #0x50]
    // add r1, sp, #0x2c
    // str r2, [sp, #0x50]
    // ldrsh r0, [r1, r0]
    // ldr r0, [sp, #0x24]
    ov13_022214AC(0xf, (r0 + 1));
    ov13_022214AC(0x10);
    ov13_022214AC(0x11);
    // mvn r5, r5
    // ldrsh r0, [r1, r0]
    ov13_022230F8(0x2e);
    // str r0, [sp, #0x44]
    // add r0, sp, #0x48
    // str r0, [sp]
    // add r0, sp, #0x44
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x18]
    // add r1, #0xc
    ov13_02222984(*((u32*)ov13_022459B4), 0x000005DC, 0);
    // ldr r1, [sp, #0x18]
    // str r2, [r1]
    ov13_02222A84(((r0 << 0x10) >> 0x10), ov13_022459B4, *((u32*)ov13_022459B4));
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x50
    *((u32*)(r1 + 4)) = r0;
    // add r3, sp, #0xb0
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    ov13_022217FC(*((u32*)ov13_022459B4));
    // str r0, [sp, #0x20]
    // mvn r5, r5
    // ldr r1, [sp, #0x24]
    ov13_02222A14(*((u32*)ov13_022459B4));
    // mvn r1, r1
    // str r1, [r0]
    ov13_02222924(ov13_022459B4, 0);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022217D0(4);
    // add r1, sp, #0x2c
    // ldrsh r7, [r1, r0]
    ov13_022208F8(*((u32*)(_0224CF98 + 4)));
    *((u32*)(r5 + 4)) = 0;
    ov13_02222DB0(ov13_0224CF9C);
    // mvn r1, r1
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022216E0(*((u32*)(r5 + 4)));
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 2);
    // mvn r0, r0
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0, 0x00000116, 1);
    // mvn r0, r0
    ov13_022230F8(r6);
    // asr r4, r0, #0x10
    ov13_022208E8(0x58);
    *((u32*)(_0224CF98 + 0xc)) = r0;
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_02222978(0, 0, 0x58);
    // add r1, sp, #0x2c
    // ldrsh r5, [r1, r0]
    // add r0, sp, #0x74
    ov13_02222F28(0x30, *((u32*)(_0224CF98 + 0xc)));
    // mvn r1, r1
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022230F8(r6);
    // asr r4, r0, #0x10
    // add r0, sp, #0x2c
    // ldrsh r0, [r0, r1]
    // ldr r0, [sp, #8]
    // add r1, #0xe6
    // strb r2, [r0, r1]
    ov13_02221428(((r4 + 1) << 0x10), 0x30, 0xf);
    // mvn r0, r0
    // ldr r0, [sp, #0x1c]
    ov13_022228CC(0, *((u32*)(_0224CF98 + 0x38)), 0);
    ov13_022214AC(0xc);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_02221428(0);
    ov13_02222A00(2, 2, 0);
    // str r0, [r1]
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // str r1, [sp]
    // add r3, sp, #0x54
    ov13_022229FC(0, 0x0000FFFF, 1);
    ov13_022214AC(0xb);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // add r0, sp, #0x2c
    ov13_02222978(0, 0, 8);
    // add r0, sp, #0x2c
    *((u8*)(r0 + 1)) = 2;
    // ldr r0, [sp, #0x1c]
    ov13_02222A1C(2);
    // str r0, [sp, #0x30]
    ov13_02222A44(0x00005790);
    // add r1, sp, #0x2c
    *((u16*)(r1 + 2)) = r0;
    // add r1, sp, #0x2c
    ov13_02222A08(*((u32*)ov13_022459B4), 8);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // add r1, sp, #0x2c
    // ldrsh r0, [r1, r0]
    // ldr r2, [sp, #0x50]
    // ldr r0, [sp, #0x20]
    ov13_022214AC(0xf);
    ov13_022214AC(0x10);
    ov13_022214AC(0x11);
    // mvn r5, r5
    // ldrsh r0, [r1, r0]
    ov13_022230F8(0x2e);
    // mvn r1, r1
    ov13_02222A14(*((u32*)ov13_022459B4), 0);
    // mvn r1, r1
    // str r1, [r0]
    ov13_02222924(ov13_022459B4, 0);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 0xf);
    // mvn r0, r0
    ov13_022214B8(0);
    // sub r0, #0xf
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222139C: ; jump table
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428((*((u16*)(r0 + 6)) << 0x10), 0x00000116, 0xf);
    // mvn r0, r0
    // ldr r0, [sp, #8]
    ov13_022214C4(0);
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    ov13_02221428(0x00000116, 6);
    // mvn r0, r0
}




void ov13_02221410(void) {
    // and r2, r1
    // mvn r1, r1
    // and r0, r1
}




void ov13_02221428(void) {
    ov13_022208F8(*((u32*)(_0224CF98 + 0xc)));
    *((u32*)(_0224CF98 + 0xc)) = 0;
    ov13_022208F8(*((u32*)(_0224CF98 + 4)), 0);
    *((u32*)(_0224CF98 + 4)) = 0;
}




void ov13_02221454(void) {
    ov13_02222978(ov13_0224DCF8, 0, 8);
    *((u32*)(_0224CF98 + 0x10)) = 1;
    ov13_02222978(ov13_0224CFBC, 0, 0x1c);
    *((u32*)(_0224CF98 + 0x24)) = (r4 + 6);
    *((u32*)(_0224CF98 + 0x28)) = *((u16*)(r4 + 4));
    // and r0, r2
    *((u32*)(_0224CF98 + 0x2c)) = 0xf;
    *((u8*)(ov13_0224CFB8 + 0x1d)) = *((u8*)(r4 + 2));
    *((u32*)(_0224CF98 + 0x30)) = 0;
    *((u32*)(_0224CF98 + 0x34)) = 0xC0A80B01;
    *((u8*)(ov13_0224CFB8 + 0x1c)) = 0;
}




void ov13_022214AC(void) {
    *((u32*)(_0224CF98 + 0x10)) = r0;
}




void ov13_022214B8(void) {
    // nop
    // _022214C0: .word _0224CF98
}




void ov13_022214C4(void) {
    // str r0, [sp, #4]
    // add r4, r7, r2
    // str r0, [sp]
    // mvn r0, r0
    // add r2, #0x3d
    // and r0, r1
    // strh r0, [r7]
    ov13_02222978(r4, 0, 0x00000117);
    // tst r0, r1
    // add r1, #0x30
    ov13_02222968(r4, r6, *((u32*)(r6 + 4)));
    // add r1, #0x70
    ov13_02222968((r4 + 6), r6, *((u32*)(r6 + 4)));
    // add r0, #0xc
    // add r1, #0xb0
    ov13_02222968(r4, r6, *((u32*)(r6 + 4)));
    // add r0, #0x12
    // add r1, #0xf0
    ov13_02222968(r4, r6, *((u32*)(r6 + 4)));
    // add r0, #8
    ov13_02222A9C(r6);
    // add r0, #8
    ov13_022216BC(r6, r0);
    // add r0, #8
    ov13_02222A9C(r6);
    // add r6, #8
    // add r0, #0x18
    ov13_02222968(r4, r6, r0);
    // tst r0, r1
    // add r0, #0x39
    // add r1, #0x30
    ov13_02222968(r4, r5, *((u32*)(r5 + 4)));
    // add r0, #0x47
    // add r1, #0x70
    ov13_02222968(r4, r5, *((u32*)(r5 + 4)));
    // add r0, #0x55
    // add r1, #0xb0
    ov13_02222968(r4, r5, *((u32*)(r5 + 4)));
    // add r0, #0x63
    // add r1, #0xf0
    ov13_02222968(r4, r5, *((u32*)(r5 + 4)));
    // add r0, #8
    ov13_02222A9C(r5);
    // add r0, #8
    ov13_022216BC(r5, r0);
    // add r0, #8
    ov13_02222A9C(r5);
    // add r5, #8
    // add r0, #0x71
    ov13_02222968(r4, r5, r0);
    // tst r0, r1
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // add r0, #0x30
    ov13_022216BC(4, (*((u32*)(*((u16*)r7) + 4)) - 1));
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, #0x92
    // add r1, #0x30
    ov13_02222968(r4, *((u32*)(r2 + 4)));
    // ldr r0, [sp, #4]
    // add r0, #8
    ov13_02222A9C();
    // ldr r0, [sp, #4]
    // add r0, #8
    ov13_022216BC(r0);
    // ldr r0, [sp, #4]
    // add r0, #8
    ov13_02222A9C();
    // ldr r1, [sp, #4]
    // add r1, #8
    // add r0, #0xd2
    // str r1, [sp, #4]
    ov13_02222968(r4, r0);
    // tst r0, r1
    // ldr r1, [sp]
    // ldr r0, [sp]
    // add r0, #0x30
    ov13_022216BC(8, (*((u32*)(*((u16*)r7) + 4)) - 1));
    // ldr r2, [sp]
    // ldr r1, [sp]
    // add r0, #0xf3
    // add r1, #0x30
    ov13_02222968(r4, *((u32*)(r2 + 4)));
    // ldr r0, [sp]
    // add r0, #8
    ov13_02222A9C();
    // ldr r0, [sp]
    // add r0, #8
    ov13_022216BC(r0);
    // ldr r0, [sp]
    // add r0, #8
    ov13_02222A9C();
    // ldr r1, [sp]
    // add r0, r4, r0
    // add r1, #8
    // str r1, [sp]
    ov13_02222968(0x00000133, r0);
    // strb r0, [r7, r1]
    ov13_02222978(r4, 0, (0x55 << 2));
    // mvn r0, r0
}




void ov13_022216BC(void) {
    // mvn r0, r0
}




void ov13_022216E0(void) {
    // str r4, [sp, #4]
    // str r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp]
    // add r6, #8
    // tst r0, r1
    ov13_02222A9C(ov13_02245A14, *((u32*)(r0 + 0x54)));
    ov13_02222A9C(ov13_02245A14, *((u32*)(r5 + 4)));
    ov13_02222948(r6, ov13_02245A14, r0);
    // ldr r0, [sp]
    // add r5, #0x54
    // add r6, #0x54
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov13_0222175C(void) {
    ov13_02222A9C(ov13_02245A14);
    // str r0, [r4]
    ov13_02222968((r4 + 4), ov13_02245A14, *((u32*)r4));
    *((u32*)(r4 + 0x24)) = 1;
    ov13_02222A9C(ov13_02245A20);
    *((u32*)(r4 + 0x28)) = r0;
    // mvn r0, r0
    // add r4, #0x2c
    ov13_02222968(r4, ov13_02245A20, r0);
}




void ov13_022217A0(void) {
    // add r5, #8
}




void ov13_022217D0(void) {
    // mvn r1, r1
    *((u32*)(ov13_022459B4 + 4)) = r0;
    *((u32*)(ov13_022459B4 + 4)) = 0;
    ov13_02223100(0, ov13_022459B4, *((u32*)(ov13_022459B4 + 4)));
}




void ov13_022217FC(void) {
    // str r3, [sp]
    // add r7, #0xc
    ov13_02222A84(*((u16*)(r1 + 0xc)));
    // str r0, [r4]
    // str r0, [r4]
    // add r0, #0xc
    ov13_02221AF4(r6);
    // str r0, [r4]
    ov13_02222A84(*((u16*)(r7 + 6)));
    // ldr r3, [sp]
    ov13_0222189C(r5, r6, r4);
    // ldr r3, [sp]
    ov13_02221978(r0, r6, r4);
    // ldr r3, [sp]
    ov13_02221A50(r0, r6, r4);
}




void ov13_0222189C(void) {
    // str r1, [r5]
    // add r7, #0xc
    // add r1, #0x10
    // add r4, #0x24
    ov13_02221C2C(r3, (*((u32*)r2) + 1));
    // str r0, [r5]
    ov13_02222A84(*((u16*)(r4 + 2)));
    // str r0, [r5]
    ov13_02222A5C(*((u32*)(r4 + 4)));
    // mvn r1, r1
    ov13_022214AC(0x14, 1);
    ov13_02222A5C(*((u32*)(r4 + 4)));
    // mvn r1, r1
    ov13_022214AC(0x15, 2);
    ov13_022214AC(0x18);
    // mvn r0, r0
    // str r0, [r5]
    ov13_02221C78((r4 + 4), ov13_0224CFD8);
    // mvn r1, r1
    ov13_022214AC(0x16, 1);
    // mvn r0, r0
    // str r0, [r5]
    ov13_02222A84(*((u16*)(r7 + 0xc)));
    ov13_022220A4();
    // str r0, [r1]
    // str r0, [r5]
}




void ov13_02221978(void) {
    // str r1, [r5]
    // add r7, #0xc
    // add r3, #8
    // add r1, #0x10
    // add r4, #0x24
    ov13_02221C2C(r3, (*((u32*)r2) + 1));
    // str r0, [r5]
    ov13_02222A84(*((u16*)(r4 + 2)));
    // str r0, [r5]
    ov13_02222A5C(*((u32*)(r4 + 4)));
    // mvn r1, r1
    ov13_022214AC(0x14, 1);
    ov13_02222A5C(*((u32*)(r4 + 4)));
    // mvn r1, r1
    ov13_022214AC(0x15, 2);
    ov13_022214AC(0x18);
    // mvn r0, r0
    ov13_02222978(ov13_0224D658, 0, (0x6a << 4));
    ov13_02222A84(*((u16*)(r7 + 0xa)));
    // str r0, [sp]
    ov13_02221F94(0, r4, r0, ov13_0224D658);
    // str r0, [r5]
    // tst r0, r1
    // str r0, [r5]
}




void ov13_02221A50(void) {
    // str r1, [r5]
    // add r3, #0x10
    // add r1, #0xc
    // add r1, #0x10
    // add r4, #0x24
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // mvn r1, r1
    // mvn r0, r0
    // mvn r1, r1
    // mvn r0, r0
    // mvn r0, r0
}




void ov13_02221AF4(void) {
    // add r0, sp, #0xc
    // add r1, #0x10
    // add r4, #0x18
    ov13_02222968(r0, 8);
    ov13_02222A9C(ov13_02245A20);
    // add r0, sp, #0xc
    ov13_022227A0(8, ov13_02245A20, r0);
    // mvn r1, r1
    ov13_022214AC(2, 0);
    // mvn r0, r0
    ov13_02222A84(*((u16*)(r5 + 6)));
    // add r1, sp, #0xc
    ov13_02221BE8();
    ov13_02222A84(*((u16*)(r5 + 6)));
    // add r1, sp, #0xc
    ov13_02222968(ov13_0224DCF8, (1 << 0xc), 8);
    ov13_02222A84(*((u16*)(r5 + 0xc)));
    // tst r0, r1
    ov13_02222A84(*((u16*)r4), 0xf);
    ov13_022208E8();
    ov13_022214AC(2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov13_022225B0((r4 + 4), r7, r6, *((u8*)(r5 + 0xe)));
    ov13_022208F8(r7);
    ov13_022214B8();
    ov13_02222968(r4, r7, r6);
    ov13_02222A44(((r6 << 0x10) >> 0x10));
    *((u16*)(r5 + 0xa)) = r0;
    ov13_022208F8(r7);
}




void ov13_02221BE8(void) {
    ov13_02222948(ov13_0224DCF8, 6, (0 + 1));
}




void ov13_02221C2C(void) {
    ov13_02222A9C(ov13_02245A20);
    ov13_022227A0(r5, 8, ov13_02245A20, r0);
    ov13_02222948(r6, r5, 6);
    ov13_02222A84(*((u16*)(r6 + 6)));
    ov13_02222A84(*((u16*)(r5 + 6)));
}




void ov13_02221C78(void) {
    ov13_02222978(r1, 0, (0x41 << 2));
    // add r7, #0x80
    ov13_02222A84(*((u16*)(r6 + 2)));
    // mvn r0, r0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221CB4: ; jump table
    ov13_02222968(r5, (r4 + 6), r0);
    ov13_02222968(r7, (r4 + 6));
    // add r0, r5, r0
    ov13_02222968((1 << 8), (r4 + 6));
    ov13_02222A84(*((u8*)(r4 + 6)));
    // mvn r0, r0
    ov13_02221D34((r4 + 6), r2);
    ov13_02222A5C();
    *((u32*)(_0224CF98 + 0x34)) = r0;
    ov13_02221D34((r4 + 6), r2);
    ov13_02222A5C();
    *((u32*)(_0224CF98 + 0x38)) = r0;
    // mvn r0, r0
    ov13_02222A84(*((u16*)(r4 + 4)), _0224CF98);
    // add r4, r6, r0
}




void ov13_02221D34(void) {
    // add r5, r0, r2
    // add r3, r2, r0
}




void ov13_02221D58(void) {
    // str r0, [sp, #0xc]
    // add r0, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0xf0
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r0, #0xb0
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0x70
    // str r0, [sp]
    // add r7, #0x30
    // str r5, [sp, #0x10]
    // sub r1, #0x10
    // bmi _02221DF4
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221DAC: ; jump table
    // mvn r0, r0
    // mvn r0, r0
    // mvn r0, r0
    // sub r1, #0x10
    // bmi _02221E8C
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221E10: ; jump table
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r0, r5, r4
    // mvn r0, r0
    // ldr r0, [sp, #0xc]
    // mvn r0, r0
    // ldr r1, [sp, #0x10]
    // add r5, r1, r0
}




void ov13_02221EAC(void) {
    // str r0, [sp]
    // add r0, #8
    // str r0, [sp]
    // add r7, #0x30
    // str r4, [sp, #4]
    // mvn r0, r0
    // mvn r0, r0
    // add r0, r4, r5
    // mvn r0, r0
    // ldr r0, [sp]
    // mvn r0, r0
    // ldr r1, [sp, #4]
    // add r4, r1, r0
}




void ov13_02221F64(void) {
    // mvn r0, r0
    // mvn r0, r0
}




void ov13_02221F94(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r2, [sp]
    ov13_02222A84(*((u16*)(r1 + 2)), r1, *((u8*)(_022459B0 + r2)));
    // sub r6, r6, r0
    // add r4, r4, r0
    // mvn r0, r0
    ov13_02222A84(*((u16*)(r1 + 2)));
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #8
    // str r0, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222200E: ; jump table
    // ldr r1, [sp, #0x10]
    ov13_02221D58(r4, ((0x35 << 4) * r0));
    // add r1, r6, r1
    ov13_02221D58(r4, (0x4e << 2));
    // add r1, r6, r1
    ov13_02221EAC(r4, (0x9a << 2));
    // add r1, r6, r1
    ov13_02221EAC(r4, (0xb6 << 2));
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r1, r2, r1
    ov13_02221F64(r4, 8);
    // mvn r0, r0
    ov13_02222A84(*((u16*)(r4 + 2)));
    // sub r7, r7, r0
    // add r4, r4, r0
    *((u32*)(_0224CF98 + 0x30)) = (*((u32*)(_0224CF98 + 0x30)) | r5);
}




void ov13_022220A4(void) {
    // tst r0, r1
}




void ov13_022220B4(void) {
    // mvn r0, r0
}




void ov13_02222108(void) {
    // add r0, sp, #0x10
    // strb r1, [r0]
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 2)) = 0;
    // str r2, [sp, #0xc]
    ov13_02222978(*((u32*)(_0224CF98 + 0x14)), 0, 0x000005DC);
    ov13_022208E8((0x21 << 4));
    ov13_022214AC(2);
    // mvn r0, r0
    ov13_02222978(0, 0, (0x21 << 4));
    // add r6, #0x18
    ov13_02222968(ov13_0224DCF8, r7, 8);
    // add r0, sp, #0x14
    // add r0, #2
    ov13_02222968(ov13_0224DCF8, 8);
    ov13_02222394((r4 + 4));
    // add r1, sp, #0x10
    *((u16*)(r1 + 4)) = r0;
    // ldrsh r0, [r1, r0]
    ov13_022214AC(3);
    ov13_022208F8(r4);
    // mvn r0, r0
    // strb r0, [r4]
    ov13_02222A44(*((u16*)(r1 + 4)));
    *((u16*)(r4 + 2)) = r0;
    // add r1, sp, #0x10
    // ldrsh r0, [r1, r0]
    // add r3, sp, #0x14
    *((u16*)(r1 + 4)) = (4 + 4);
    // add r0, sp, #0x10
    // add r0, #2
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    ov13_02222420(0, r6, r4);
    // add r1, sp, #0x10
    // ldrsh r2, [r1, r0]
    *((u16*)(r1 + 2)) = (0x10 | r2);
    // add r0, sp, #0x14
    // add r0, #2
    ov13_022227A0((0x10 | r2), 8, ov13_02245A20, 6);
    ov13_022214AC(2);
    ov13_022208F8(r4);
    // mvn r0, r0
    // add r3, sp, #0x10
    // ldrsb r0, [r3, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x14
    // add r0, #2
    // str r0, [sp, #8]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r6]
    ov13_02222474(r5, (1 << 0xc), 4);
    // add r2, sp, #0x10
    // ldrsh r0, [r2, r1]
    // ldr r3, [sp, #0xc]
    // add r0, #0x18
    *((u16*)(r2 + 4)) = r0;
    // ldrsh r1, [r2, r1]
    ov13_022224CC(r5, 4, 0xff);
    ov13_022208F8(r4);
}




void ov13_0222224C(void) {
    // add r0, sp, #0xc
    // strb r1, [r0]
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 2)) = 0;
    // add r0, sp, #0x14
    ov13_02222978(_0224CF98, 0, 8);
    ov13_02222978(r4, 0, 0x000005DC);
    // add r0, sp, #0xc
    *((u8*)(r0 + 8)) = 2;
    *((u8*)(r0 + 9)) = 0;
    ov13_02222A44(4, 0);
    // add r1, sp, #0xc
    *((u16*)(r1 + 0xa)) = r0;
    // str r0, [sp, #0x18]
    ov13_02222A1C(*((u32*)(_0224CF98 + 0x2c)));
    // str r0, [sp, #0x18]
    // add r0, sp, #0xc
    *((u16*)(r0 + 4)) = 8;
    // add r0, sp, #0xc
    // add r0, #2
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // add r1, #0x18
    // add r2, sp, #0x14
    // add r3, sp, #0x10
    ov13_02222420(*((u32*)_0224CF98), r4);
    // add r5, #8
    // add r0, sp, #0x1c
    ov13_02222968(r5, 8);
    // add r0, sp, #0x1c
    ov13_022227A0(8, ov13_02245A20, 6);
    ov13_022214AC(2);
    // mvn r0, r0
    // add r3, sp, #0xc
    // ldrsb r0, [r3, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x1c
    // str r0, [sp, #8]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
    ov13_02222474(r4, (2 << 0xc), 4);
    // add r2, sp, #0xc
    // ldrsh r0, [r2, r1]
    // add r0, #0x18
    *((u16*)(r2 + 4)) = r0;
    // ldrsh r1, [r2, r1]
    ov13_022224CC(r4, 4, 0, r6);
}




void ov13_02222328(void) {
    ov13_02222978(*((u32*)(_0224CF98 + 0x14)), 0, 0x000005DC);
    // add r5, #0x10
    // add r0, sp, #0xc
    ov13_02222968(r5, 8);
    ov13_02222A9C(ov13_02245A20);
    // add r0, sp, #0xc
    ov13_022227A0(8, ov13_02245A20, r0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // str r0, [sp, #8]
    ov13_02222474(r4, (3 << 0xc), 0, 0);
    ov13_022224CC(r4, 0x18, 0, r6);
}




void ov13_02222394(void) {
    // ldrsb r0, [r1, r0]
    // strb r0, [r5]
    *((u8*)(r0 + 1)) = 1;
    // asr r4, r0, #0x10
    ov13_02222968((r0 + 6), *((u32*)(_0224CF98 + 0x24)), r4);
    ov13_02222A44(((r4 << 0x10) >> 0x10));
    *((u16*)(r5 + 2)) = r0;
    // asr r0, r0, #0x10
    // add r0, r1, r0
    // asr r0, r0, #1
    // asr r7, r0, #0x10
    ov13_02222A44(((r7 << 0x10) >> 0x10), (((r4 + 6) << 0x10) + 1));
    *((u16*)(r5 + 4)) = r0;
    // add r0, r6, r7
    // asr r6, r0, #0x10
    // strb r0, [r5, r7]
    // add r4, r5, r7
    *((u8*)(r4 + 1)) = 0;
    ov13_02222A44(0);
    *((u16*)(r4 + 4)) = r0;
    ov13_02222A1C(0xe);
    // str r0, [sp]
    // add r1, sp, #0
    ov13_02222968((r4 + 6), 4);
    ov13_02222A44(4);
    // add r6, #0xa
    *((u16*)(r4 + 2)) = r0;
    // asr r0, r0, #0x10
}




void ov13_02222420(void) {
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // str r0, [sp]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldrsh r2, [r4, r2]
    ov13_02222534(r2, (r1 + 4), 0);
    ov13_02222A44(*((u16*)r4));
    // strh r0, [r5]
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    // ldrsh r2, [r4, r2]
    ov13_02222968(r5, r2, 0);
}




void ov13_02222474(void) {
    // strh r0, [r5]
    // add r1, sp, #8
    // ldrsb r0, [r1, r0]
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp, #0x20]
    // add r5, #0x10
}




void ov13_022224CC(void) {
    // add r0, sp, #8
    ov13_02222978(0, 8);
    // add r0, sp, #8
    *((u8*)(r0 + 1)) = 2;
    ov13_02222A44(0x00005790, 2);
    // add r1, sp, #8
    *((u16*)(r1 + 2)) = r0;
    ov13_02222A1C(*((u32*)(_0224CF98 + 0x34)));
    // str r0, [sp, #0xc]
    // ldrsb r0, [r1, r0]
    // mvn r0, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    ov13_022229EC(r7, r5, r6, 0);
}




void ov13_02222534(void) {
    ov13_02222708(r2);
    // strb r0, [r4]
    ov13_022208E8(r5);
    // str r0, [sp, #0xc]
    // mvn r0, r0
    ov13_02222AB0(0);
    // add r1, sp, #0
    // strh r0, [r1]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0
    ov13_02222968(2);
    // ldr r1, [sp, #0x28]
    ov13_02222968(ov13_0224DD00, 2);
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    ov13_02222968(ov13_0224DD02);
    // ldr r2, [sp, #0x30]
    // add r0, sp, #4
    ov13_02222638(ov13_0224DD00, (r2 + 2), r5);
    // add r0, sp, #4
    ov13_0222269C(r7, r6, r5);
    // ldr r0, [sp, #0xc]
    ov13_022208F8();
}




void ov13_022225B0(void) {
    ov13_022208E8(r2);
    // str r0, [sp, #8]
    ov13_022214AC(2);
    // mvn r0, r0
    // ldr r1, [sp, #0x28]
    ov13_02222968(ov13_0224DD00, 2);
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    ov13_02222968(ov13_0224DD02);
    // ldr r2, [sp, #0x30]
    // add r0, sp, #0
    ov13_02222638(ov13_0224DD00, (r2 + 2), r4);
    // add r0, sp, #0
    ov13_0222269C(r5, r7, r4);
    ov13_02222708(r5, r4);
    ov13_022214AC(0x12);
    // ldr r0, [sp, #8]
    ov13_022208F8();
    // mvn r0, r0
    // ldr r0, [sp, #8]
    ov13_022208F8(0);
}




void ov13_02222638(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r1, [sp]
    // str r2, [sp, #8]
    // str r0, [r1]
    // str r3, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // strb r0, [r4, r0]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp]
    // add r0, r7, r0
    // strb r7, [r4, r1]
    // strb r0, [r4, r5]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
}




void ov13_0222269C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    ov13_022226C8();
    // eor r0, r1
    // strb r0, [r5, r4]
}




void ov13_022226C8(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // ldr r1, [sp]
    // add r0, r6, r0
    // str r7, [r5]
    // strb r6, [r4, r1]
    // strb r0, [r4, r7]
    // add r0, r6, r0
}




void ov13_02222708(void) {
    // str r0, [sp]
    // mvn r0, r0
    ov13_02222730(0, r0, r1, 0);
    // mvn r1, r1
    // eor r0, r1
}




void ov13_02222730(void) {
    // ldr r6, [sp, #0x18]
    // eor r2, r5
    // eor r5, r2
}




void ov13_02222768(void) {
    // add r3, #0xff
    // tst r6, r5
    // eor r7, r4
    // stmia r1!, {r7}
}




void ov13_022227A0(void) {
    // add r0, r5, r0
    // asr r0, r0, #1
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // mvn r0, r0
    // str r0, [sp, #0xc]
    // mvn r0, r0
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}




void ov13_0222281C(void) {
    // add r1, r2, r1
    // ldr r6, [sp, #0x18]
    // asr r4, r1, #1
    // strb r0, [r5, r0]
    // ldrsb r2, [r7, r1]
    // ldrsb r3, [r5, r0]
    // eor r2, r3
    // strb r2, [r5, r0]
}




void ov13_02222850(void) {
    // add r3, r2, r3
    // asr r4, r3, #1
    // add r5, r1, r4
    // ldrsb r1, [r0, r3]
    // eor r1, r2
    // strb r1, [r5]
}




void ov13_02222874(void) {
    // add r0, r6, r0
    // asr r7, r0, #1
    // add r1, r5, r7
    // add r0, r4, r7
}




void ov13_022228A4(void) {
    // blx r1
}




void ov13_022228BC(void) {
    // blx r1
}




void ov13_022228CC(void) {
    ov13_02222A1C();
    *((u32*)(ov13_022459B4 + 0x18)) = r0;
    ov13_02222A1C(r5, ov13_022459B4);
    *((u32*)(ov13_022459B4 + 0x1c)) = r0;
    ov13_02222A1C(r4, ov13_022459B4);
    *((u32*)(ov13_022459B4 + 0x20)) = r0;
    SOC_Startup(ov13_022459BC, ov13_022459B4);
    // mvn r0, r0
    OS_Sleep(0x64);
}




void ov13_02222924(void) {
    // mvn r0, r0
    // neg r0, r0
}




void ov13_02222948(void) {
    // sub r3, r4, r3
}




void ov13_02222968(void) {
    // bx r3
    // nop
    // _02222974: .word MI_CpuCopy8
}




void ov13_02222978(void) {
}




void ov13_02222984(void) {
}




void ov13_02222998(void) {
    // ldr r5, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)r5), 0x01FF6210, 0);
    // add r6, r4, r3
    // adc r4, r0
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 4)), 0x01FF6210, 0);
    // add r2, r6, r3
    // adc r4, r0
    // add r0, sp, #0
    SOC_Poll((r1 >> 6), 1, (r1 << 0x1a), r4);
}




void ov13_022229EC(void) {
}




void ov13_022229FC(void) {
}




void ov13_02222A00(void) {
}




void ov13_02222A08(void) {
}




void ov13_02222A14(void) {
}




void ov13_02222A1C(void) {
    // and r1, r4
    // and r0, r4
    // and r2, r3
}




void ov13_02222A44(void) {
    // asr r1, r0, #8
    // and r0, r1
}




void ov13_02222A5C(void) {
    // and r1, r4
    // and r0, r4
    // and r2, r3
}




void ov13_02222A84(void) {
    // asr r1, r0, #8
    // and r0, r1
}




void ov13_02222A9C(void) {
    // ldrsb r1, [r0, r2]
    // ldrsb r1, [r0, r2]
}




void ov13_02222AB0(void) {
    // add r0, sp, #0
    ov13_02222978(*((u32*)(_0224CF98 + 8)), 0, 0xc);
    // add r0, sp, #0
    RTC_GetTime();
    // ldr r0, [sp]
    // add r1, r4, r0
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // ldr r0, [sp, #8]
    // add r4, r1, r0
    *((u32*)(_0224CF98 + 0x18)) = r4;
    *((u32*)(_0224CF98 + 0x1c)) = 0x5D588B65;
    *((u32*)(_0224CF98 + 0x20)) = 0x00269EC3;
    *((u32*)(_0224CF98 + 8)) = 1;
    // add r1, r3, r1
    *((u32*)(_0224CF98 + 0x18)) = (*((u32*)(_0224CF98 + 0x18)) * *((u32*)(_0224CF98 + 0x1c)));
}




void ov13_02222B20(void) {
}




void ov13_02222B2C(void) {
}




void ov13_02222B34(void) {
    // str r0, [r4]
    // add r0, #0xc
    MIi_CpuCopy16(r0, (r1 + 4), 0x20);
    // add r1, #0x30
    *((u32*)(r4 + 0x24)) = *((u16*)(r5 + 0x36));
    MIi_CpuCopy16((r5 + 4), r4, 6);
    // tst r3, r7
    // add r3, r4, r1
    // add r3, #0x3c
    // strb r7, [r3]
    // tst r3, r7
    // add r3, r4, r1
    // add r3, #0x3c
    // add r3, r4, r1
    // add r3, #0x3c
    // strb r7, [r3]
    *((u32*)(r4 + 0x38)) = (0 + 1);
    *((u32*)(r4 + 0x4c)) = *((u16*)(r5 + 0x32));
    // and r0, r1
    *((u32*)(r4 + 0x50)) = 1;
    *((u32*)(r4 + 0x50)) = 2;
    *((u32*)(r4 + 0x50)) = 0;
}




void ov13_02222BC0(void) {
}




void ov13_02222BE4(void) {
    // str r2, [r3]
}




void ov13_02222BF4(void) {
    // bx r3
    // nop
    // _02222C00: .word OS_SendMessage
    // _02222C04: .word ov13_0224DDA0
}




void ov13_02222C08(void) {
    // bx r3
    // nop
    // _02222C14: .word OS_SendMessage
    // _02222C18: .word ov13_0224DDA0
}




void ov13_02222C1C(void) {
    OS_InitMessageQueue(ov13_0224DDA0, ov13_0224DD90, 4);
    // mvn r0, r0
    OS_DisableInterrupts(0);
    // str r5, [r1]
    *((u32*)(ov13_0224DD80 + 0xc)) = r6;
    OS_RestoreInterrupts(ov13_0224DD80);
    // blx r1
    *((u32*)(ov13_0224DD80 + 8)) = 0x00005890;
    ov13_022236B8(ov13_02222BF4, 0x00005890, 0x00005890);
    // add r6, sp, #0
    OS_ReceiveMessage(ov13_0224DDA0, r6, 1);
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222C92: ; jump table
    // blx r1
    // mvn r0, r0
}




void ov13_02222CE0(void) {
    ov13_022235DC((1 - 2));
    // add r1, sp, #0
    OS_ReceiveMessage(ov13_0224DDA0, 1);
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222D1E: ; jump table
    // blx r1
    OS_DisableInterrupts(*((u32*)(r6 + 8)), *((u32*)(r6 + 0xc)));
    // str r2, [r1]
    *((u32*)(ov13_0224DD80 + 0xc)) = 0;
    OS_RestoreInterrupts(ov13_0224DD80, 0);
}




void ov13_02222D78(void) {
    // mvn r5, r5
    ov13_022235A4();
    // add r6, sp, #0
    OS_ReceiveMessage(ov13_0224DDA0, r6, 1);
    // ldr r0, [sp]
}




void ov13_02222DB0(void) {
    // str r0, [sp, #4]
    // mvn r0, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // mvn r0, r0
    // blx r1
    // str r4, [sp, #8]
    ov13_02223478(0, 0, 0, 0x0030BFFE);
    // add r0, sp, #0x18
    OS_CreateAlarm();
    // str r0, [sp]
    // add r0, sp, #0x18
    OS_SetAlarm(0x13, 0x003FEC42, r6, ov13_02222C08);
    // add r1, sp, #0x14
    OS_ReceiveMessage(ov13_0224DDA0, 1);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222E32: ; jump table
    ov13_02223434(r4, 0x40);
    ov13_02223568();
    ov13_02223434(r4, 0x40);
    ov13_02223568();
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x58
    // blx r1
    // blx r1
    // ldr r1, [sp, #4]
    // str r0, [r1]
    // str r7, [r0]
    ov13_02222B34(r4, (0x58 + 4));
    // add r4, #0xc0
    // add r5, #0x54
    // add r0, sp, #0x18
    OS_CancelAlarm();
    // add r4, sp, #0x14
    OS_ReceiveMessage(ov13_0224DDA0, r4, 0);
    // ldr r0, [sp, #8]
    // blx r1
    // ldr r0, [sp, #0x10]
}




void ov13_02222F28(void) {
    // str r0, [sp, #0xc]
    // str r1, [sp, #4]
    MI_CpuFill8(ov13_0224DE80, 0, 0x60);
    // strb r1, [r0]
    // strb r1, [r0]
    // strb r1, [r0]
    // mvn r0, r0
    *((u8*)(ov13_0224DE80 + 1)) = r6;
    // add r1, r2, r1
    // add r0, #0x2c
    MI_CpuCopy8(r7, ((0x14 * r6) + 2), *((u32*)(r7 + 0x28)));
    WCM_ClearApList();
    ov13_02223478(0, (r7 + 4), *((u32*)r7), 0x0030BFFE);
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    OS_CreateAlarm(0);
    // str r0, [sp]
    // add r0, sp, #0x14
    OS_SetAlarm(0x12, 0x003FEC42, 0, ov13_02222C08);
    // add r1, sp, #0x10
    OS_ReceiveMessage(ov13_0224DDA0, 1);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222FEC: ; jump table
    // add r0, sp, #0x14
    OS_CancelAlarm((*((u16*)(r0 + 6)) << 0x10));
    ov13_02223434(ov13_0224DDC0, 1);
    ov13_02222BC0(r7, ov13_0224DDC0);
    ov13_02223634(ov13_0224DDC0, ov13_0224DE80, r5);
    ov13_02222BC0(r7, ov13_0224DDC0);
    ov13_02223634(ov13_0224DDC0, ov13_0224DE80, r5);
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    ov13_02223634(ov13_0224DDC0, ov13_0224DE80, r5);
    // add r0, sp, #0x14
    OS_CancelAlarm();
    // add r4, sp, #0x10
    OS_ReceiveMessage(ov13_0224DDA0, r4, 0);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov13_02222BE4(ov13_0224DDC0, 0);
    // ldr r0, [sp, #0xc]
}




void ov13_022230F8(void) {
}




void ov13_02223100(void) {
    // blx r1
}




void ov13_02223114(void) {
    // ldrsh r2, [r0, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02223132: ; jump table
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_SearchAsync(*((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x10)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x14)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 4)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_ConnectAsync(*((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x20)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x24)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0xc)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    *((u32*)(ov13_0224DEE0 + 0x18)) = 1;
    // blx r3
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DEE0 + 0x18)) = 5;
    // blx r2
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DEE0 + 0x18)) = 7;
    // blx r2
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_SearchAsync(*((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x10)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x14)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 4)), *((u32*)(ov13_0224DEE0 + 0x1c)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_CleanupAsync(2, 0, *((u32*)(ov13_0224DEE0 + 0x1c)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_ConnectAsync(*((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x20)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x24)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0xc)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_SearchAsync(*((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x10)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x14)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 4)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_CleanupAsync(2, 0, *((u32*)(ov13_0224DEE0 + 0x1c)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    WCM_ConnectAsync(*((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x20)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x24)), *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0xc)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    *((u32*)(*((u32*)(ov13_0224DEE0 + 0x1c)) + 0x18)) = 3;
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    WCM_Finish(*((u32*)(ov13_0224DEE0 + 0x18)), 0, 2);
    *((u32*)(ov13_0224DEE0 + 0x18)) = 0;
    // blx r2
    *((u32*)(ov13_0224DEE0 + 0x18)) = 3;
    // blx r3
    // blx r2
    // blx r2
}




void ov13_022233CC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022233E2: ; jump table
    WCM_SearchAsync(0, 0, 0);
    WCM_DisconnectAsync(0);
    WCM_StartupAsync(*((u32*)(r1 + 8)), ov13_02223114);
}




void ov13_02223434(void) {
    // add r5, #0xc0
}




void ov13_02223478(void) {
    // str r3, [sp]
    OS_DisableInterrupts();
    // ldr r0, [sp]
    *((u32*)(ov13_0224DEE0 + 4)) = r0;
    // strb r0, [r2]
    *((u32*)(ov13_0224DEE0 + 0x10)) = ov13_0224DF08;
    MI_CpuFill8(ov13_0224DF08, 0xff, 6);
    *((u32*)(ov13_0224DEE0 + 0x10)) = _02108FC0;
    // strb r1, [r2]
    // add r2, r1, r0
    // strb r1, [r2]
    *((u32*)(ov13_0224DEE0 + 0x14)) = ov13_0224DF10;
    MI_CpuFill8(ov13_0224DF10, 0xff, 0x20);
    *((u32*)(ov13_0224DEE0 + 0x14)) = _02108FC8;
    WCM_SearchAsync(*((u32*)(ov13_0224DEE0 + 0x10)), *((u32*)(ov13_0224DEE0 + 0x14)), *((u32*)(ov13_0224DEE0 + 4)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 6;
    OS_RestoreInterrupts(r7, 6);
    ov13_022233CC(1);
    *((u32*)(ov13_0224DEE0 + 0x18)) = 6;
    OS_RestoreInterrupts(r7, 6);
    OS_RestoreInterrupts(r7);
}




void ov13_02223568(void) {
    OS_DisableInterrupts();
    WCM_SearchAsync(0, 0, 0);
    *((u32*)(ov13_0224DEE0 + 0x18)) = 4;
    OS_RestoreInterrupts(r4, 4);
    OS_RestoreInterrupts(r4);
}




void ov13_022235A4(void) {
    OS_DisableInterrupts();
    WCM_DisconnectAsync(*((u32*)(ov13_0224DEE0 + 0x18)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 4;
    OS_RestoreInterrupts(r4, 4);
    OS_RestoreInterrupts(r4);
}




void ov13_022235DC(void) {
    OS_DisableInterrupts();
    WCM_CleanupAsync(*((u32*)(ov13_0224DEE0 + 0x18)));
    OS_RestoreInterrupts(r4);
    *((u32*)(ov13_0224DEE0 + 0x18)) = 2;
    OS_RestoreInterrupts(r4, 2);
    ov13_022233CC(1);
    *((u32*)(ov13_0224DEE0 + 0x18)) = 2;
    OS_RestoreInterrupts(r4, 2);
    OS_RestoreInterrupts(r4);
}




void ov13_02223634(void) {
    OS_DisableInterrupts();
    *((u32*)(ov13_0224DEE0 + 0xc)) = r6;
    MI_CpuCopy8(r5, *((u32*)(ov13_0224DEE0 + 0x24)), 0x50);
    MI_CpuFill8(*((u32*)(r1 + 0x24)), 0, 0x50);
    MIi_CpuCopy32(r7, *((u32*)(ov13_0224DEE0 + 0x20)), 0xc0);
    ov13_022233CC();
    *((u32*)(ov13_0224DEE0 + 0x18)) = 8;
    OS_RestoreInterrupts(r4, 8);
    WCM_ConnectAsync(*((u32*)(ov13_0224DEE0 + 0x20)), *((u32*)(ov13_0224DEE0 + 0x24)), *((u32*)(ov13_0224DEE0 + 0xc)));
    *((u32*)(ov13_0224DEE0 + 0x18)) = 8;
    OS_RestoreInterrupts(r4, 8);
    OS_RestoreInterrupts(r4);
}




void ov13_022236B8(void) {
    // str r2, [sp]
    OS_DisableInterrupts();
    // add r0, #0x53
    *((u32*)(ov13_0224DEE0 + 0x24)) = r5;
    // add r6, #0x2f
    *((u32*)(ov13_0224DEE0 + 8)) = (r5 & ~(3));
    // str r6, [r2]
    // add r6, r6, r3
    *((u32*)(ov13_0224DEE0 + 0x20)) = (((r5 & ~(3)) & ~(0x1f)) & ~(0x1f));
    // add r6, #0xdf
    *((u32*)((r5 & ~(3)) + 4)) = ((((r5 & ~(3)) & ~(0x1f)) & ~(0x1f)) & ~(0x1f));
    // ldr r1, [sp]
    // add r5, r5, r1
    // sub r1, r5, r1
    *((u32*)(*((u32*)(ov13_0224DEE0 + 8)) + 8)) = *((u32*)(*((u32*)(ov13_0224DEE0 + 8)) + 4));
    *((u32*)(*((u32*)(ov13_0224DEE0 + 8)) + 0xc)) = 0;
    // str r1, [r0]
    *((u32*)(ov13_0224DEE0 + 0x1c)) = r7;
    // sub r3, #0x1f
    WCM_Init(*((u32*)ov13_0224DEE0), 0x0000231F, ov13_0224DEE0, 0x0000231F);
    OS_RestoreInterrupts(r4);
    *((u32*)(ov13_0224DEE0 + 0x18)) = 1;
    WCM_StartupAsync(*((u32*)(ov13_0224DEE0 + 8)), ov13_02223114);
    OS_RestoreInterrupts(r4);
    *((u32*)(ov13_0224DEE0 + 0x18)) = 4;
    OS_RestoreInterrupts(r4, 4);
    OS_RestoreInterrupts(r4);
}




void ov13_02223770(void) {
    // ldrsh r2, [r0, r1]
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0222378E: ; jump table
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_SearchAsync(*((u32*)(*((u32*)ov13_0224DFB0) + 0x44)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x48)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x60)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_ConnectAsync(*((u32*)(*((u32*)ov13_0224DFB0) + 0x4c)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x28)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x58)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    *((u32*)(ov13_0224DF30 + 0x2c)) = 1;
    // blx r3
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DF30 + 0x2c)) = 5;
    // blx r2
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DF30 + 0x2c)) = 7;
    // blx r2
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_SearchAsync(*((u32*)(*((u32*)ov13_0224DFB0) + 0x44)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x48)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x60)), *((u32*)ov13_0224DFB0));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_CleanupAsync(2, 0, *((u32*)ov13_0224DFB0));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_ConnectAsync(*((u32*)(*((u32*)ov13_0224DFB0) + 0x4c)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x28)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x58)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_SearchAsync(*((u32*)(*((u32*)ov13_0224DFB0) + 0x44)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x48)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x60)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_CleanupAsync(2, 0, *((u32*)ov13_0224DFB0));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    WCM_ConnectAsync(*((u32*)(*((u32*)ov13_0224DFB0) + 0x4c)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x28)), *((u32*)(*((u32*)ov13_0224DFB0) + 0x58)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    *((u32*)(*((u32*)ov13_0224DFB0) + 0x2c)) = 3;
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r2
    // ldrsh r0, [r0, r2]
    WCM_Finish(*((u32*)(ov13_0224DF30 + 0x2c)), 0, 2);
    *((u32*)(ov13_0224DF30 + 0x2c)) = 0;
    // blx r2
    *((u32*)(ov13_0224DF30 + 0x2c)) = 3;
    // blx r3
    // blx r2
    // blx r2
    *((u32*)(ov13_0224DF30 + 0x2c)) = 0;
    // blx r2
    // blx r2
}




void ov13_02223A7C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02223A92: ; jump table
    WCM_SearchAsync(0, 0, 0);
    WCM_DisconnectAsync(0);
    WCM_StartupAsync(*((u32*)(r1 + 8)), ov13_02223770);
}




void ov13_02223AE4(void) {
    // add r5, #0xc0
}




void ov13_02223B28(void) {
    // str r3, [sp]
    OS_DisableInterrupts();
    // ldr r0, [sp]
    *((u32*)(ov13_0224DF30 + 0x60)) = r0;
    *((u32*)(ov13_0224DF30 + 0x44)) = ov13_0224E3E8;
    // strb r1, [r0]
    MI_CpuFill8((ov13_0224E3E8 + 1), 0xff, 6);
    *((u32*)(ov13_0224DF30 + 0x44)) = _02108FC0;
    *((u32*)(ov13_0224DF30 + 0x48)) = ov13_0224E420;
    // strb r1, [r2]
    // add r2, r1, r0
    // strb r1, [r2]
    MI_CpuFill8(ov13_0224E420, 0xff, 0x20);
    *((u32*)(ov13_0224DF30 + 0x48)) = _02108FC8;
    WCM_SearchAsync(ov13_0224E3E8, *((u32*)(ov13_0224DF30 + 0x48)), *((u32*)(ov13_0224DF30 + 0x60)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 6;
    OS_RestoreInterrupts(r7, 6);
    ov13_02223A7C(1);
    *((u32*)(ov13_0224DF30 + 0x2c)) = 6;
    OS_RestoreInterrupts(r7, 6);
    OS_RestoreInterrupts(r7);
}




void ov13_02223C10(void) {
    OS_DisableInterrupts();
    WCM_DisconnectAsync(*((u32*)(ov13_0224DF30 + 0x2c)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 4;
    OS_RestoreInterrupts(r4, 4);
    OS_RestoreInterrupts(r4);
}




void ov13_02223C48(void) {
    OS_DisableInterrupts();
    WCM_CleanupAsync(*((u32*)(ov13_0224DF30 + 0x2c)));
    OS_RestoreInterrupts(r4);
    *((u32*)(ov13_0224DF30 + 0x2c)) = 2;
    OS_RestoreInterrupts(r4, 2);
    ov13_02223A7C(1);
    *((u32*)(ov13_0224DF30 + 0x2c)) = 2;
    OS_RestoreInterrupts(r4, 2);
    OS_RestoreInterrupts(r4);
}




void ov13_02223CA0(void) {
    OS_DisableInterrupts();
    *((u32*)(ov13_0224DF30 + 0x58)) = r6;
    MI_CpuCopy8(r5, *((u32*)(ov13_0224DF30 + 0x28)), 0x60);
    MI_CpuFill8(*((u32*)(r1 + 0x28)), 0, 0x60);
    MIi_CpuCopy32(r7, *((u32*)(ov13_0224DF30 + 0x4c)), 0xc0);
    ov13_02223A7C();
    *((u32*)(ov13_0224DF30 + 0x2c)) = 8;
    OS_RestoreInterrupts(r4, 8);
    WCM_ConnectAsync(*((u32*)(ov13_0224DF30 + 0x4c)), *((u32*)(ov13_0224DF30 + 0x28)), *((u32*)(ov13_0224DF30 + 0x58)));
    *((u32*)(ov13_0224DF30 + 0x2c)) = 8;
    OS_RestoreInterrupts(r4, 8);
    OS_RestoreInterrupts(r4);
}




void ov13_02223D24(void) {
    // str r2, [sp]
    OS_DisableInterrupts();
    // add r0, #0x63
    *((u32*)(ov13_0224DF30 + 0x28)) = r5;
    // add r6, #0x2f
    *((u32*)(ov13_0224DF30 + 8)) = (r5 & ~(3));
    *((u32*)(ov13_0224DF30 + 0x3c)) = ((r5 & ~(3)) & ~(0x1f));
    // add r6, r6, r3
    *((u32*)(ov13_0224DF30 + 0x4c)) = (((r5 & ~(3)) & ~(0x1f)) & ~(0x1f));
    // add r6, #0xdf
    *((u32*)((r5 & ~(3)) + 4)) = ((((r5 & ~(3)) & ~(0x1f)) & ~(0x1f)) & ~(0x1f));
    // ldr r1, [sp]
    // add r5, r5, r1
    // sub r1, r5, r1
    *((u32*)(*((u32*)(ov13_0224DF30 + 8)) + 8)) = *((u32*)(*((u32*)(ov13_0224DF30 + 8)) + 4));
    *((u32*)(*((u32*)(ov13_0224DF30 + 8)) + 0xc)) = 0;
    // str r1, [r0]
    // str r7, [r0]
    // sub r3, #0x1f
    WCM_Init(*((u32*)(ov13_0224DF30 + 0x3c)), 0x0000231F, ov13_0224DF30, 0x0000231F);
    OS_RestoreInterrupts(r4);
    *((u32*)(ov13_0224DF30 + 0x2c)) = 1;
    WCM_StartupAsync(*((u32*)(ov13_0224DF30 + 8)), ov13_02223770);
    OS_RestoreInterrupts(r4);
    *((u32*)(ov13_0224DF30 + 0x2c)) = 4;
    OS_RestoreInterrupts(r4, 4);
    OS_RestoreInterrupts(r4);
}




void ov13_02223DE0(void) {
    // nop
    // _02223DE8: .word ov13_0224DF30
}




void ov13_02223DEC(void) {
    OS_LockMutex(ov13_0224DFC4);
    // blx r1
    OS_UnlockMutex(ov13_0224DFC4, *((u32*)(ov13_0224DF30 + 4)));
}




void ov13_02223E1C(void) {
    OS_LockMutex(ov13_0224DFC4);
    // blx r1
    OS_UnlockMutex(ov13_0224DFC4, *((u32*)(ov13_0224DF30 + 0xc)));
}




void ov13_02223E44(void) {
    OS_DisableInterrupts();
    *((u32*)(ov13_0224DF30 + 0x68)) = 0;
    *((u32*)(ov13_0224DF30 + 0x6c)) = 0;
    // stmia r3!, {r1}
    OS_RestoreInterrupts(0, (0 + 1), ov13_0224DFB4);
}




void ov13_02223E6C(void) {
    OS_DisableInterrupts();
    *((u32*)(ov13_0224DF30 + 0x6c)) = (*((u32*)(ov13_0224DF30 + 0x6c)) + 1);
    *((u32*)(ov13_0224DF30 + 0x6c)) = 0;
    OS_RestoreInterrupts(ov13_0224DF30, 0, (*((u32*)(ov13_0224DF30 + 0x6c)) << 2));
}




void ov13_02223EA4(void) {
    // str r0, [r2, r3]
    *((u32*)(ov13_0224DF30 + 0x68)) = (*((u32*)(ov13_0224DF30 + 0x68)) + 1);
    *((u32*)(ov13_0224DF30 + 0x68)) = 0;
}




void ov13_02223ED4(void) {
}




void ov13_02223EE0(void) {
    *((u32*)(ov13_0224DF30 + 0x70)) = r0;
    ov13_02223E44(ov13_0224DF30);
    // add r1, r7, r0
    // add r0, r1, r0
    // blx r1
    *((u32*)(ov13_0224DF30 + 0x54)) = (0xc0 * r6);
    // add r2, r0, r1
    // sub r0, #0x3f
    // and r3, r0
    *((u32*)(ov13_0224DF30 + 0x40)) = r2;
    // add r2, r7, r0
    // add r0, r3, r2
    // add r0, r0, r1
    // sub r1, #0x3f
    // and r0, r1
    *((u32*)(ov13_0224DF30 + 0x5c)) = 0x00002490;
    ov13_02223D24(ov13_02223EA4, r2, r2);
    OS_Sleep(0xa);
    ov13_02223E6C();
    ov13_02223E6C();
}




void ov13_02223F84(void) {
    ov13_02223C48();
    OS_Sleep(0xa);
    ov13_02223E6C();
    ov13_02223E6C();
    // blx r1
    *((u32*)(ov13_0224DF30 + 0x54)) = 0;
}




void ov13_02223FDC(void) {
    // add r6, r3, r1
    ov13_02223CA0(r6, 0, (0xc0 << 0xa), *((u32*)(ov13_0224DF30 + 0x5c)));
    // add r0, sp, #4
    OS_CreateAlarm((r4 - 3));
    // str r0, [sp]
    // add r0, sp, #4
    OS_SetAlarm(0x12, 0x003FEC42, 0, ov13_02223ED4);
    ov13_02226CBC();
    // mvn r5, r5
    // mvn r5, r5
    OS_Sleep(0xa, *((u32*)(ov13_02245A58 + 0xc)));
    ov13_02223E6C();
    // sub r5, #8
    ov13_02223CA0(r6, 0, (3 << 0x10));
    ov13_02223E6C(r5);
    // add r0, sp, #4
    OS_CancelAlarm();
    ov13_02223E6C();
    *((u32*)(ov13_0224DF30 + 0x20)) = 1;
    SOC_Startup(ov13_02245A6C, 1);
    // mvn r5, r5
    *((u32*)(ov13_0224DF30 + 0x24)) = 1;
}




void ov13_02224100(void) {
    ov13_02223C10(*((u32*)(ov13_0224DF30 + 0x20)));
    OS_Sleep(0xa);
    ov13_02223E6C();
    ov13_02223E6C();
    *((u32*)(ov13_0224DF30 + 0x20)) = 0;
    *((u32*)(ov13_0224DF30 + 0x24)) = 0;
    SOC_Cleanup(ov13_0224DF30, 0);
}




void ov13_02224164(void) {
    // str r0, [sp]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r2, sp, #0x48
    // add r2, #2
    // strb r0, [r2]
    // add r0, sp, #0x48
    // add r0, #2
    memcpy(0, ((0 + 4) + 4), 0x20);
    // add r0, sp, #0x48
    // add r0, #2
    // strb r7, [r0, r1]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x24]
    // add r0, #0x28
    // str r0, [sp, #0x24]
    // add r0, sp, #0x48
    // add r0, #2
    strlen(*((u8*)(r6 + 4)), *((u32*)r6));
    // add r0, sp, #0x48
    // add r0, #2
    memcmp((r4 + 4), r0);
    // ldr r0, [sp, #0x24]
    // add r1, #0x28
    memcmp(r4, 6);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // add r4, #0x30
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // add r6, #0x30
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x28
    // strb r0, [r2]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // ldr r6, [sp, #0x18]
    // ldr r0, [sp, #4]
    // add r7, sp, #0x28
    memcpy((r7 + 1), ((0 + 4) + 4), 0x20);
    // strb r0, [r7, r1]
    strlen(ov13_02245AC4, *((u32*)r5));
    memcmp(r7, ov13_02245AC4, r0);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r5, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r5, sp, #0x28
    memcpy(r5, (r4 + 4), 0x20);
    // strb r0, [r5, r1]
    strlen(r5, *((u32*)r4));
    strlen(r7);
    strlen(r7);
    memcmp(r5, r7, r0);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r4, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r1, [r0]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
}




void ov13_02224330(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // mvn r4, r4
    ov13_02226CD8(1, *((u32*)(ov13_0224DF30 + 0x70)));
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    ov13_02226CD8(1);
    // str r0, [sp, #8]
    // str r0, [sp, #0x1c]
    ov13_02226CBC(0);
    ov13_02223B28(0, 0, 0, 0x0030BFFE);
    // mvn r4, r4
    // add r0, sp, #0x24
    OS_CreateAlarm();
    // str r0, [sp]
    // add r0, sp, #0x24
    OS_SetAlarm(0x13, 0x000FFB10, 0, ov13_02223ED4);
    // add r6, sp, #0x24
    OS_Sleep(0xa);
    ov13_02226CBC();
    ov13_02223E6C(*((u32*)(r7 + 0x10)), *((u32*)(ov13_02245A58 + 0xc)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022243E0: ; jump table
    ov13_02223AE4(*((u32*)(r7 + 0x5c)), *((u32*)(r7 + 0x70)));
    OS_CancelAlarm(r6);
    // str r0, [sp]
    OS_SetAlarm(r6, 0x000FFB10, 0, ov13_02223ED4);
    ov13_02223E6C();
    // add r0, sp, #0x24
    OS_CancelAlarm();
    ov13_02223E6C();
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // ldr r7, [sp, #0xc]
    // str r0, [sp, #4]
    // add r0, #8
    // str r0, [sp, #4]
    // add r6, #0x2c
    // ldr r0, [sp, #4]
    // add r1, #0xc
    memcpy(*((u32*)(ov13_0224DF30 + 0x70)), *((u32*)(ov13_0224DF30 + 0x5c)), 0x20);
    *((u32*)(r7 + 4)) = *((u16*)(r5 + 0xa));
    // add r1, r7, r0
    *((u8*)(r1 + 8)) = 0;
    // tst r0, r1
    *((u16*)(r7 + 0x32)) = 0;
    // add r7, #0x30
    // strb r0, [r6]
    *((u8*)(r6 + 1)) = *((u8*)(r5 + 5));
    *((u8*)(r6 + 2)) = *((u8*)(r5 + 6));
    *((u8*)(r6 + 3)) = *((u8*)(r5 + 7));
    *((u8*)(r6 + 4)) = *((u8*)(r5 + 8));
    // add r5, #0xc0
    *((u8*)(r6 + 5)) = *((u8*)(r5 + 9));
    // ldr r0, [sp, #4]
    // add r6, #0x30
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // str r4, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    // add r2, sp, #0x20
    ov13_02224164(*((u32*)(ov13_0224DF30 + 0x38)), *((u16*)(r5 + 0x2c)));
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x20]
    // add r4, r1, r0
    *((u32*)(ov13_0224DF30 + 0x18)) = r2;
    strcpy(ov13_0224E440, (r4 + 4));
    // add r4, #0x28
    // add r0, #0x28
    // strb r2, [r1]
    *((u8*)(ov13_0224E3E0 + 1)) = *((u8*)(r4 + 1));
    *((u8*)(ov13_0224E3E0 + 2)) = *((u8*)(r4 + 2));
    *((u8*)(ov13_0224E3E0 + 3)) = *((u8*)(r4 + 3));
    *((u8*)(ov13_0224E3E0 + 4)) = *((u8*)(r4 + 4));
    *((u8*)(ov13_0224E3E0 + 5)) = *((u8*)(r4 + 5));
    // add r0, sp, #0x50
    ov13_02226D40(*((u8*)(r4 + 5)), ov13_0224E3E0, *((u8*)(r4 + 4)));
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    memcpy();
    *((u32*)(ov13_0224DF30 + 0x38)) = 2;
    ov13_02226F3C(ov13_0224DF30, 2);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    ov13_02226CBC(*((u32*)(ov13_0224DF30 + 0x10)));
    // mvn r4, r4
    // mvn r4, r4
    // ldr r0, [sp, #0xc]
    ov13_02226CFC(*((u32*)(ov13_0224DF30 + 0x10)), *((u32*)(ov13_02245A58 + 0xc)));
    // ldr r0, [sp, #8]
    ov13_02226CFC();
}




void ov13_022245C4(void) {
}




void ov13_022245DC(void) {
    // add r0, sp, #4
    *((u8*)(r0 + 4)) = 8;
    *((u8*)(r0 + 5)) = 2;
    // str r1, [sp, #0xc]
    *((u16*)(r0 + 6)) = 0x000001E6;
    SOCL_GetHostID(0x000001E6);
    // add r1, sp, #4
    SOC_U32to4U8();
    // add r1, sp, #8
    // add r2, sp, #4
    // str r4, [sp]
    ov13_022245C4(r5, r6);
}




void ov13_02224618(void) {
}




void ov13_02224624(void) {
    // asr r4, r5, #8
    // and r4, r5
    // str r4, [r1]
    // asr r1, r6, #8
    // and r1, r5
    // str r4, [r2]
    // add r2, r1, r4
    // add r3, r3, r1
    // asr r2, r5, #8
    // and r2, r3
}




void ov13_02224694(void) {
    // asr r1, r5, #8
    // and r1, r5
    // str r1, [r2]
    // asr r1, r6, #8
    // and r1, r5
    // str r2, [r3]
    // add r2, #0xb
    // add r1, r0, r1
    // str r1, [r4]
}




void ov13_022246E4(void) {
    // add r5, #8
    // str r5, [sp]
    // add r0, sp, #0
    // asr r1, r2, #8
    // and r2, r6
    // add r1, r5, r1
}




void ov13_02224718(void) {
    // sub r0, #8
    // str r1, [sp, #4]
    // strb r5, [r1]
    // asr r2, r0, #8
    // and r0, r2
    // ldr r3, [sp, #0x20]
    // strh r0, [r1]
    // str r0, [sp]
    // add r7, #8
    // strb r0, [r6]
    // ldr r0, [sp, #4]
    // asr r0, r1, #8
    // and r1, r0
    // strh r1, [r6]
    // asr r1, r2, #8
    // and r0, r2
    // add r4, r0, r7
    // add r5, r5, r0
    // asr r0, r1, #8
    // and r0, r1
    // strh r0, [r4]
    // sub r0, r0, r6
}




void ov13_022247DC(void) {
    // strb r3, [r5]
    // asr r1, r0, #8
    // and r2, r0
    // strh r1, [r5]
    // add r2, #0xb
    // asr r1, r2, #8
    // and r0, r2
    // add r0, r5, r6
}




void ov13_0222483C(void) {
    // strb r0, [r4]
    // add r0, #8
    // sub r0, r0, r4
    // sub r1, #8
    // strh r1, [r4]
}




void ov13_02224864(void) {
    // str r1, [sp]
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // str r5, [sp, #8]
    // str r6, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r4, [sp, #0x14]
    // add r0, #8
    // str r0, [sp, #8]
    // add r0, sp, #8
    // add r1, r5, r4
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // ldr r1, [sp, #0x10]
    // asr r0, r1, #8
    // and r0, r1
    // asr r0, r1, #8
    // and r1, r2
    // str r0, [sp, #4]
    // asr r0, r1, #8
    // and r0, r1
    // add r0, sp, #8
    // add r1, r5, r4
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r1, [r0]
}




void ov13_02224938(void) {
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r2, [sp, #4]
    // ldr r0, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov13_02224988(void) {
    // add r2, sp, #4
    // add r0, sp, #4
    // strh r1, [r0]
    // add r2, #2
    // strb r0, [r2]
    // add r2, sp, #4
    ov13_022247DC(*((u32*)ov13_02245A58), 1, (r2 + 1), 2);
    // add r2, sp, #4
    ov13_022247DC(2, 2);
    // add r2, sp, #4
    ov13_022247DC(5, 2);
    // add r2, sp, #4
    // add r2, #2
    ov13_022247DC(3, 7);
    ov13_022247DC(4, ov13_0224E3D8, 6);
    // str r0, [sp]
    // sub r3, r3, r4
    // add r3, #8
    ov13_02224718(r4, 2, ov13_0224E464, r0);
}




void ov13_02224A24(void) {
}




void ov13_02224A30(void) {
    // add r2, #0xc
    *((u8*)(r0 + 0xc)) = *((u8*)ov13_02245B18);
    *((u8*)(r0 + 1)) = *((u8*)(ov13_02245B18 + 1));
    *((u8*)(r0 + 2)) = *((u8*)(ov13_02245B18 + 2));
    // add r1, sp, #4
    // add r1, #2
    *((u8*)(r0 + 3)) = *((u8*)(ov13_02245B18 + 3));
    // strb r2, [r1]
    *((u8*)(ov13_02245B18 + 1)) = *((u8*)(ov13_0224E3E0 + 1));
    *((u8*)(ov13_02245B18 + 2)) = *((u8*)(ov13_0224E3E0 + 2));
    *((u8*)(ov13_02245B18 + 3)) = *((u8*)(ov13_0224E3E0 + 3));
    *((u8*)(ov13_02245B18 + 4)) = *((u8*)(ov13_0224E3E0 + 4));
    *((u8*)(ov13_02245B18 + 5)) = *((u8*)(ov13_0224E3E0 + 5));
    // add r1, sp, #0
    // and r0, r2
    *((u8*)(ov13_02245B18 + 6)) = 0xfd;
    // add r0, sp, #0
    ov13_02224A24(0xfd, ov13_02245B18, *((u8*)(ov13_02245B18 + 6)));
    // add r1, sp, #0
    // strb r2, [r0]
    *((u8*)(ov13_0224E3D8 + 1)) = *((u8*)(r1 + 1));
    *((u8*)(ov13_0224E3D8 + 2)) = *((u8*)(r1 + 2));
    *((u8*)(ov13_0224E3D8 + 3)) = *((u8*)(r1 + 3));
    *((u8*)(ov13_0224E3D8 + 4)) = *((u8*)(r1 + 4));
    *((u8*)(ov13_0224E3D8 + 5)) = *((u8*)(r1 + 5));
    // add r0, sp, #4
    // add r0, #2
    memcmp(ov13_0224E3D8, 6);
    // add r1, sp, #0
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = *((u8*)(r1 + 1));
    *((u8*)(r4 + 2)) = *((u8*)(r1 + 2));
    *((u8*)(r4 + 3)) = *((u8*)(r1 + 3));
    *((u8*)(r4 + 4)) = *((u8*)(r1 + 4));
    // add r1, sp, #4
    // add r1, #2
    *((u8*)(r4 + 5)) = *((u8*)(r1 + 5));
    // add r1, sp, #4
    // add r1, #2
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = *((u8*)(r1 + 1));
    *((u8*)(r4 + 2)) = *((u8*)(r1 + 2));
    *((u8*)(r4 + 3)) = *((u8*)(r1 + 3));
    *((u8*)(r4 + 4)) = *((u8*)(r1 + 4));
    // add r1, sp, #0
    *((u8*)(r4 + 5)) = *((u8*)(r1 + 5));
    *((u8*)(r4 + 6)) = *((u8*)r1);
    *((u8*)(r4 + 7)) = *((u8*)(r1 + 1));
    *((u8*)(r4 + 8)) = *((u8*)(r1 + 2));
    *((u8*)(r4 + 9)) = *((u8*)(r1 + 3));
    *((u8*)(r4 + 0xa)) = *((u8*)(r1 + 4));
    *((u8*)(r4 + 0xb)) = *((u8*)(r1 + 5));
    // add r0, sp, #0x2c
    // add r1, sp, #0
    ov13_02226D40(*((u32*)(ov13_02245A58 + 4)));
    // add r1, sp, #4
    // add r0, sp, #0xc
    // add r1, #2
    ov13_02226D40();
}




void ov13_02224B2C(void) {
    // str r1, [sp, #4]
    // add r1, #8
    // str r1, [sp, #4]
    // str r1, [sp, #0x14]
    // str r1, [sp]
    // add r3, sp, #0xc
    // asr r0, r1, #8
    // and r0, r1
    // str r0, [sp, #8]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, sp, #0x14
    // add r1, r2, r1
    // add r2, sp, #0x10
    ov13_02224694(((((0xff << 8) | ((r0 << 0x18) >> 0x18)) << 0x10) >> 0x10), (*((u16*)r0) << 8), ((r0 << 0x18) >> 0x18));
    // ldr r2, [sp, #0x10]
    // sub r1, r2, r0
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02224B82: ; jump table
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r2, [sp, #0xc]
    memcpy(ov13_0224E284, r0, ov13_0224E284, ov13_0224E284);
    // str r0, [sp]
    // asr r0, r1, #8
    // and r0, r1
    // str r1, [r0]
    // asr r2, r3, #8
    // and r2, r3
    // str r3, [r1, r2]
    // add r1, #0x28
    // asr r2, r3, #8
    // and r2, r3
    // str r3, [r0, r2]
    // add r0, #0x28
    // asr r0, r1, #8
    // and r0, r1
    *((u32*)(ov13_0224E2B0 + 4)) = ((((0xff << 8) | ((ov13_0224E184 << 0x18) >> 0x18)) << 0x10) >> 0x10);
    // sub r2, r2, r0
    // add r0, r1, r0
    memset((0x28 * ((ov13_0224E184 << 0x18) >> 0x18)), 0, 0x20, ((((0xff << 8) | (((0x57 << 2) << 0x18) >> 0x18)) << 0x10) >> 0x10));
    // ldr r2, [sp, #0x10]
    // sub r2, r2, r1
    // add r4, r0, r1
    // ldr r0, [sp, #0xc]
    // ldrsb r1, [r5, r7]
    ov13_02226D0C(r4, (0x28 * r2));
    // add r4, r4, r0
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // sub r2, r2, r1
    // add r0, r0, r1
    // ldr r2, [sp, #0xc]
    memcpy(ov13_0224E2E8, r5);
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r2, [sp, #0xc]
    memcpy(ov13_0224E380, r5, ov13_0224E380, ov13_0224E380);
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, sp, #0x14
    // add r1, r2, r1
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov13_02224694();
    // ldr r0, [sp]
}




void ov13_02224D00(void) {
    // ldrsb r1, [r5, r3]
    // sub r6, #0x30
    // add r6, r6, r6
    // add r6, pc
    // asr r6, r6, #0x10
    // add pc, r6
    // _02224D32: ; jump table
    // sub r1, #0x30
    // add r2, r2, r1
    // sub r1, #0x57
    // add r2, r2, r1
    // sub r1, #0x37
    // add r2, r2, r1
    // sub r1, r1, r6
    // ror r1, r7
    // add r1, r6, r1
    // add r6, r3, r6
    // asr r1, r6, #1
    // strb r2, [r0, r1]
}




void ov13_02224DB4(void) {
    // str r0, [sp]
    strcpy(ov13_0224E09C, ov13_0224E284);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224DDA: ; jump table
    *((u32*)(ov13_0224E0B0 + 0xc)) = 0;
    // mvn r0, r0
    // str r0, [sp]
    *((u32*)(ov13_0224E0B0 + 0x10)) = *((u32*)(0 + 4));
    // add r4, sp, #4
    // add r0, sp, #4
    memcpy(ov13_0224E0B0, ov13_0224E2E8, 0x20);
    // add r0, sp, #0x24
    // strb r1, [r0]
    // add r0, sp, #4
    strlen(0);
    *((u32*)(ov13_0224E0B0 + 0xc)) = 1;
    // strb r0, [r5]
    *((u8*)(r5 + 1)) = *((u8*)(r4 + 1));
    *((u8*)(r5 + 2)) = *((u8*)(r4 + 2));
    *((u8*)(r5 + 3)) = *((u8*)(r4 + 3));
    *((u8*)(r5 + 4)) = *((u8*)(r4 + 4));
    *((u32*)(ov13_0224E0B0 + 0xc)) = 1;
    ov13_02224D00(r5, r4, 0xa);
    *((u32*)(ov13_0224E0B0 + 0xc)) = 2;
    // strb r0, [r2]
    *((u32*)(ov13_0224E0B0 + 0xc)) = 2;
    ov13_02224D00(r5, r4, 0x1a, (r4 + 1));
    *((u32*)(ov13_0224E0B0 + 0xc)) = 3;
    // strb r0, [r2]
    *((u32*)(ov13_0224E0B0 + 0xc)) = 3;
    ov13_02224D00(r5, r4, 0x20, (r4 + 1));
    // mvn r0, r0
    // str r0, [sp]
    // add r6, #0x28
    // add r5, #0x20
    *((u32*)(ov13_0224E0B0 + 0xc)) = 4;
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    *((u32*)(ov13_0224E0B0 + 0xc)) = 5;
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // mvn r0, r0
    // str r0, [sp]
    // ldr r0, [sp]
}




void ov13_02224F3C(void) {
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r4, [sp, #4]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 1;
    OS_Sleep((0x7d << 2), 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224F72: ; jump table
    ov13_02224330((*((u16*)(*((u32*)(ov13_0224DF30 + 0x1c)) + 6)) << 0x10));
    // str r0, [sp, #8]
    *((u32*)(ov13_0224DF30 + 0x38)) = 3;
    ov13_02226F3C(ov13_0224DF30, 3);
    *((u32*)(ov13_0224DF30 + 0x1c)) = 2;
    ov13_02223FDC(ov13_0224DF30, 2);
    // str r0, [sp, #8]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 3;
    SOC_Socket(2, 2, 0);
    // bpl _02224FD6
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r5, sp, #0x24
    // str r1, [r5]
    *((u32*)(r5 + 4)) = 0;
    // add r2, sp, #0x10
    *((u8*)(r2 + 0x14)) = 8;
    *((u8*)(r2 + 0x15)) = 2;
    *((u16*)(r2 + 0x16)) = 0x000001E6;
    // str r1, [sp, #0x28]
    SOC_Bind(1, r5, 0x000001E6);
    // str r0, [sp, #8]
    // mvn r0, r0
    // str r0, [sp, #8]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 4;
    ov13_02226CBC(ov13_0224DF30, 4);
    SOC_Close(r4, *((u32*)(ov13_02245A58 + 0xc)));
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r0, sp, #0x10
    *((u8*)(2 + 0xc)) = 8;
    // add r1, sp, #0x1c
    ov13_02224A30(ov13_0224E3F0, 8);
    // add r0, sp, #0x1c
    // str r0, [sp]
    SOC_RecvFrom(r4, ov13_0224EC64, (2 << 0xa), 4);
    ov13_02224864(ov13_0224EC64, ov13_0224DF80);
    ov13_02226CBC();
    // add r1, r0, r1
    *((u32*)(ov13_02245A58 + 0xc)) = 0x00007530;
    *((u32*)(ov13_0224DF30 + 0x1c)) = 5;
    *((u32*)(ov13_0224DF30 + 0x38)) = 4;
    ov13_02226F3C(ov13_0224DF30, 4);
    ov13_02224988(ov13_0224EC64);
    *((u32*)(ov13_0224DF30 + 0x14)) = r0;
    // add r1, sp, #0x1c
    ov13_02224618(r4, ov13_0224EC64, r0);
    ov13_02226CBC();
    // str r0, [sp, #0xc]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 6;
    ov13_02226CBC(ov13_0224DF30, 6);
    SOC_Close(r4, *((u32*)(ov13_02245A58 + 0xc)));
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // str r0, [sp]
    SOC_RecvFrom(r4, ov13_0224EC64, (2 << 0xa), 4);
    ov13_02224938(ov13_0224EC64, 3, ov13_0224E464, ov13_0224E3F0);
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    ov13_022246E4(ov13_0224E464);
    // ldr r1, [sp, #0x18]
    ov13_02226CBC(0x00000101);
    // str r0, [sp, #0x10]
    // strb r0, [r2]
    // add r1, sp, #0x10
    ov13_02226C94(ov13_0224E408, (8 - 1), 4);
    // str r0, [sp, #4]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 7;
    *((u32*)(ov13_0224DF30 + 0x38)) = 5;
    *((u32*)(ov13_02245A58 + 0xc)) = (5 - 6);
    ov13_02226F3C(ov13_02245A58, (5 - 6));
    ov13_02226CBC();
    // ldr r1, [sp, #0xc]
    // add r1, r1, r2
    *((u32*)(ov13_0224DF30 + 0x1c)) = 5;
    ov13_0222483C(ov13_0224E464, 0x00000102, ov13_0224E408, 8);
    *((u32*)(ov13_0224DF30 + 0x34)) = r0;
    // str r0, [sp]
    ov13_02224718(ov13_0224EC64, 4, ov13_0224E464, *((u32*)(ov13_0224DF30 + 0x34)));
    *((u32*)(ov13_0224DF30 + 0x14)) = r0;
    // add r1, sp, #0x1c
    ov13_02224618(r4, ov13_0224EC64, r0);
    ov13_02226CBC();
    // str r0, [sp, #0xc]
    // mov ip, r5
    // stmia r7!, {r0, r1, r2, r3}
    // mov r5, ip
    // stmia r7!, {r0, r1, r2, r3}
    // mov ip, r5
    // stmia r7!, {r0, r1, r2, r3}
    // str r0, [r7]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 8;
    // add r0, sp, #0x1c
    // str r0, [sp]
    SOC_RecvFrom(r4, ov13_0224EC64, (2 << 0xa), 4);
    ov13_02224938(ov13_0224EC64, 5, ov13_0224E464, ov13_0224E400);
    *((u32*)(ov13_0224DF30 + 0x34)) = r0;
    ov13_02224B2C(ov13_0224E464, ov13_0224DF30);
    // ldrsb r0, [r1, r0]
    // strb r1, [r0]
    // str r0, [sp, #4]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 9;
    ov13_02226CBC(ov13_0224DF30, 9);
    // ldr r1, [sp, #0xc]
    // add r1, r1, r2
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    SOC_Close(r4, (0xfa << 2));
    // mvn r0, r0
    // str r0, [sp, #8]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 7;
    ov13_0222483C(ov13_0224E464, 0x00000301, ov13_0224DF30, 1);
    *((u32*)(ov13_0224DF30 + 0x34)) = r0;
    // str r0, [sp]
    ov13_02224718(ov13_0224EC64, 6, ov13_0224E464, *((u32*)(ov13_0224DF30 + 0x34)));
    *((u32*)(ov13_0224DF30 + 0x14)) = r0;
    ov13_02223DE0(ov13_0224DF30);
    ov13_02226CBC();
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // str r0, [sp, #4]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 0xa;
    // add r1, sp, #0x1c
    ov13_02224618(r4, ov13_0224DF30, ov13_0224EC64, *((u32*)(ov13_0224DF30 + 0x14)));
    ov13_02226CBC();
    // str r0, [sp, #0xc]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 0xa;
    ov13_02226CBC(ov13_0224DF30, 0xa);
    // ldr r1, [sp, #0xc]
    // add r1, r1, r2
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    ov13_02224DB4((r0 + 1), (0xfa << 2));
    // str r0, [sp, #8]
    *((u32*)(ov13_0224DF30 + 0x1c)) = 9;
    SOC_Close(r4, 9);
    // mvn r0, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
}




void ov13_02225320(void) {
    ov13_02224F3C();
    *((u32*)(ov13_0224DF30 + 0x78)) = r0;
    ov13_02224100(ov13_0224DF30);
    *((u32*)(ov13_0224DF30 + 0x38)) = 7;
    // mvn r1, r1
    *((u32*)(ov13_02245A58 + 0xc)) = 0;
    ov13_02226F3C(ov13_02245A58, 0);
}




void ov13_02225358(void) {
    // str r0, [sp]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // tst r1, r0
    // ldr r2, [sp, #0x1c0]
    // tst r0, r2
    // str r0, [sp, #0x14]
    // add r0, sp, #0x68
    ov13_02225710(0, r3, (r2 << 3));
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // add r0, #8
    memcpy(r5, r4);
    // add r3, sp, #0x58
    // add r2, sp, #0x48
    // strb r0, [r3]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // asr r3, r2, #0x1f
    _ll_mul(0, (8 - 1), (r2 + 1), (r3 + 1));
    // str r0, [sp, #0xc]
    // str r1, [sp, #8]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x40]
    // ldr r0, [sp]
    // add r5, r0, r1
    // add r2, sp, #0x60
    // strb r0, [r2]
    // add r2, sp, #0x58
    // ldr r1, [sp, #0x1c]
    // add r0, sp, #0x68
    ov13_02225B58(*((u8*)r5), (8 - 1), (r2 + 1), (r2 + 1));
    // ldr r0, [sp, #0xc]
    // asr r1, r4, #0x1f
    // add r3, r4, r0
    // ldr r0, [sp, #8]
    // adc r1, r0
    // and r0, r1
    // str r0, [sp, #0x24]
    // and r0, r1
    // str r0, [sp, #0x2c]
    // and r0, r1
    // and r2, r3
    // str r2, [sp, #0x34]
    // str r2, [sp, #0x34]
    // str r0, [sp, #0x38]
    // and r0, r1
    // and r2, r3
    // str r2, [sp, #0x44]
    // str r2, [sp, #0x44]
    // str r0, [sp, #0x3c]
    // and r2, r0
    // and r0, r3
    // mov ip, r0
    // and r1, r0
    // and r0, r3
    // and r0, r3
    // and r0, r3
    // ldr r0, [sp, #0x40]
    // mov r0, ip
    // ldr r0, [sp, #0x3c]
    // ldr r0, [sp, #0x44]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #0x54]
    // str r0, [sp, #0x50]
    // add r0, sp, #0x58
    // add r1, sp, #0x50
    ov13_022256C8(((((0xff << 8) << 8) | (0xff << 0x18)) | (((((((0xff << 8) << 8) | (0xff << 0x18)) | (((0xff << 0x10) << 0x18) | (((0xff << 8) << 8) | (0xff << 0x18)))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18)))), ((((((((r1 << 0x18) | ((0xff << 0x10) >> 8)) | (((0xff << 8) << 8) | (0xff << 0x18))) | ((r1 << 8) | ((0xff << 0x18) >> 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))), ((((0xff << 8) << 8) | (0xff << 0x18)) | (((((((0xff << 8) << 8) | (0xff << 0x18)) | (((0xff << 0x10) << 0x18) | (((0xff << 8) << 8) | (0xff << 0x18)))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18)))), (((0xff << 0x10) << 0x18) | (((0xff << 8) << 8) | (0xff << 0x18))));
    // add r2, sp, #0x60
    // strb r0, [r5]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // add r3, sp, #0x58
    // ldr r0, [sp]
    // strb r1, [r0]
    // str r0, [sp]
}




void ov13_02225510(void) {
    // str r0, [sp]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // tst r1, r0
    // ldr r2, [sp, #0x1c0]
    // tst r0, r2
    // str r0, [sp, #0x14]
    // add r0, sp, #0x68
    ov13_022259C8(0, r3, (r2 << 3));
    // str r0, [sp, #0x20]
    // add r3, sp, #0x58
    // strb r0, [r3]
    // add r5, #8
    // ldr r0, [sp]
    memcpy(*((u8*)r5), r5, (r4 - 1), (r3 + 1));
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x18]
    // ldr r4, [sp, #0x14]
    // ldr r2, [sp, #0x24]
    // ldr r1, [sp, #0x18]
    // asr r3, r2, #0x1f
    _ll_mul(r4);
    // str r0, [sp, #0xc]
    // str r1, [sp, #8]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // asr r1, r4, #0x1f
    // add r5, r4, r0
    // ldr r0, [sp, #8]
    // adc r1, r0
    // and r0, r1
    // str r0, [sp, #0x28]
    // and r0, r1
    // str r0, [sp, #0x30]
    // and r2, r0
    // and r3, r0
    // str r0, [sp, #0x38]
    // and r0, r1
    // and r2, r5
    // str r2, [sp, #0x44]
    // str r2, [sp, #0x44]
    // str r0, [sp, #0x3c]
    // and r2, r0
    // and r0, r5
    // mov ip, r0
    // and r1, r0
    // and r0, r5
    // and r0, r5
    // and r0, r5
    // ldr r0, [sp, #0x40]
    // mov r0, ip
    // ldr r0, [sp, #0x3c]
    // ldr r0, [sp, #0x44]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // str r1, [sp, #0x54]
    // str r0, [sp, #0x50]
    // add r0, sp, #0x58
    // add r1, sp, #0x50
    ov13_022256C8(((((0xff << 8) << 8) | (0xff << 0x18)) | (((((((0xff << 8) << 8) | (0xff << 0x18)) | (((0xff << 0x10) << 0x18) | (((0xff << 8) << 8) | (0xff << 0x18)))) | (((0xff << 8) << 8) | (0xff << 0x18))) | ((r5 >> 0x18) | (0 << 8))) | (((0xff << 8) << 8) | (0xff << 0x18)))), ((((((((0 << 0x18) | ((0xff << 0x10) >> 8)) | (((0xff << 8) << 8) | (0xff << 0x18))) | ((0 << 8) | ((0xff << 0x18) >> 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))) | (((0xff << 8) << 8) | (0xff << 0x18))), ((((0xff << 8) << 8) | (0xff << 0x18)) | (((((((0xff << 8) << 8) | (0xff << 0x18)) | (((0xff << 0x10) << 0x18) | (((0xff << 8) << 8) | (0xff << 0x18)))) | (((0xff << 8) << 8) | (0xff << 0x18))) | ((r5 >> 0x18) | (0 << 8))) | (((0xff << 8) << 8) | (0xff << 0x18)))), ((r5 >> 0x18) | (0 << 8)));
    // ldr r0, [sp]
    // add r2, sp, #0x60
    // add r5, r0, r1
    // strb r0, [r2]
    // add r2, sp, #0x58
    // ldr r1, [sp, #0x20]
    // add r0, sp, #0x68
    ov13_02225F14(*((u8*)r5), (8 - 1), (r2 + 1), (r2 + 1));
    // add r2, sp, #0x60
    // strb r0, [r5]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // bmi _022256AA
    // add r0, sp, #0x48
    // add r1, sp, #0x58
    memcmp((*((u8*)r2) - 1), (8 - 1), 8);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
}




void ov13_022256C8(void) {
    // eor r3, r4
    // strb r3, [r2]
    // eor r3, r4
    // eor r3, r4
    // eor r3, r4
    // eor r3, r4
    // eor r3, r4
    // eor r3, r4
    // eor r0, r3
}




void ov13_02225710(void) {
    // str r2, [sp]
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0]
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    *((u32*)(r0 + 4)) = (*((u8*)(r1 + 4)) << 0x18);
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    *((u32*)(r0 + 8)) = (*((u8*)(r1 + 8)) << 0x18);
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    *((u32*)(r0 + 0xc)) = (*((u8*)(r1 + 0xc)) << 0x18);
    // str r1, [sp, #8]
    // and r7, r1
    // str r1, [sp, #4]
    // and r6, r1
    // ldr r1, [sp, #4]
    // eor r1, r6
    // and r4, r6
    // eor r1, r4
    // eor r4, r1
    // ldr r1, [sp, #8]
    // eor r1, r4
    // eor r3, r1
    *((u32*)(r0 + 0x10)) = *((u32*)ov13_02242688);
    // eor r3, r1
    *((u32*)(r0 + 0x14)) = *((u32*)ov13_02242688);
    // eor r3, r1
    *((u32*)(r0 + 0x18)) = *((u32*)ov13_02242688);
    // eor r1, r3
    *((u32*)(r0 + 0x1c)) = *((u32*)(r0 + 0xc));
    // ldr r1, [sp]
    // str r1, [sp]
    // add r0, #0x10
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    *((u32*)(0xa + 0x10)) = (*((u8*)(*((u32*)ov13_02242688) + 0x10)) << 0x18);
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    *((u32*)(0xa + 0x14)) = (*((u8*)(*((u32*)ov13_02242688) + 0x14)) << 0x18);
    // str r1, [sp, #0xc]
    // and r7, r1
    // mov lr, r1
    // and r1, r2
    // mov r2, lr
    // eor r1, r2
    // and r2, r4
    // eor r1, r2
    // eor r2, r1
    // ldr r1, [sp, #0xc]
    // eor r1, r2
    // eor r2, r1
    *((u32*)(0xa + 0x18)) = *((u32*)ov13_02242688);
    // eor r2, r1
    *((u32*)(0xa + 0x1c)) = *((u32*)ov13_02242688);
    // eor r2, r1
    *((u32*)(0xa + 0x20)) = *((u32*)ov13_02242688);
    // eor r1, r2
    *((u32*)(0xa + 0x24)) = *((u32*)(0xa + 0xc));
    // ldr r1, [sp]
    // str r1, [sp]
    // eor r2, r1
    *((u32*)(0xc + 0x28)) = *((u32*)(0xc + 0x10));
    // eor r1, r2
    *((u32*)(0xc + 0x2c)) = *((u32*)(0xc + 0x14));
    // add r0, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    *((u32*)(0xc + 0x18)) = (*((u8*)(ov13_022442B0 + 0x18)) << 0x18);
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    *((u32*)(0xc + 0x1c)) = (*((u8*)(ov13_022442B0 + 0x1c)) << 0x18);
    // str r1, [sp, #0x10]
    // and r7, r1
    // mov ip, r1
    // and r1, r2
    // mov r2, ip
    // eor r1, r2
    // and r2, r4
    // eor r1, r2
    // eor r2, r1
    // ldr r1, [sp, #0x10]
    // eor r1, r2
    // eor r2, r1
    *((u32*)(0xc + 0x20)) = *((u32*)ov13_02242688);
    // eor r2, r1
    *((u32*)(0xc + 0x24)) = *((u32*)ov13_02242688);
    // eor r2, r1
    *((u32*)(0xc + 0x28)) = *((u32*)ov13_02242688);
    // eor r1, r2
    *((u32*)(0xc + 0x2c)) = *((u32*)(0xc + 0xc));
    // ldr r1, [sp]
    // str r1, [sp]
    // and r1, r2
    // str r1, [sp, #0x14]
    // and r1, r2
    // eor r1, r7
    // and r2, r6
    // eor r2, r1
    // ldr r1, [sp, #0x14]
    // eor r1, r2
    // eor r2, r1
    *((u32*)(0xe + 0x30)) = ((*((u32*)(ov13_022442B0 + ((*((u32*)(0xe + 0x2c)) << 0x18) >> 0x16))) << 0x18) >> 0x18);
    // eor r2, r1
    *((u32*)(0xe + 0x34)) = ((*((u32*)(ov13_022442B0 + ((*((u32*)(0xe + 0x2c)) << 0x18) >> 0x16))) << 0x18) >> 0x18);
    // eor r2, r1
    *((u32*)(0xe + 0x38)) = ((*((u32*)(ov13_022442B0 + ((*((u32*)(0xe + 0x2c)) << 0x18) >> 0x16))) << 0x18) >> 0x18);
    // eor r1, r2
    *((u32*)(0xe + 0x3c)) = *((u32*)(0xe + 0x1c));
    // add r0, #0x20
    // ldr r0, [sp]
}




void ov13_022259C8(void) {
    ov13_02225710();
    // mov ip, r0
    // mov r1, ip
    // add r2, r4, r2
    // str r3, [r1]
    // str r5, [r2]
    *((u32*)(r4 + 4)) = *((u32*)(((r1 << 2) << 2) + 4));
    *((u32*)(((r1 << 2) << 2) + 4)) = *((u32*)(r4 + 4));
    *((u32*)(r4 + 8)) = *((u32*)(((r1 << 2) << 2) + 8));
    *((u32*)(((r1 << 2) << 2) + 8)) = *((u32*)(r4 + 8));
    *((u32*)(r4 + 0xc)) = *((u32*)(((r1 << 2) << 2) + 0xc));
    *((u32*)(((r1 << 2) << 2) + 0xc)) = *((u32*)(r4 + 0xc));
    // add r1, #0x10
    // sub r2, #0x10
    // str r0, [sp]
    // mov r0, ip
    // add r4, #0x10
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    // str r0, [r4]
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    *((u32*)(r4 + 4)) = *((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022442B0 + ((*((u32*)(r4 + 4)) >> 0x18) << 2))) << 0x18) >> 0x16)));
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    *((u32*)(r4 + 8)) = *((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022442B0 + ((*((u32*)(r4 + 8)) >> 0x18) << 2))) << 0x18) >> 0x16)));
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    *((u32*)(r4 + 0xc)) = *((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022442B0 + ((*((u32*)(r4 + 0xc)) >> 0x18) << 2))) << 0x18) >> 0x16)));
    // ldr r0, [sp]
    // mov r0, ip
    // str r1, [sp]
    // mov r0, ip
}




void ov13_02225B58(void) {
    // str r3, [sp]
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #0xc]
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #8]
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r5, r2
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // eor r6, r1
    // asr r1, r7, #1
    // str r1, [sp, #4]
    // str r1, [sp, #0x40]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #8]
    // eor r2, r1
    // ldr r1, [sp, #0x40]
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // str r1, [sp, #0x48]
    // ldr r1, [sp, #8]
    // eor r2, r1
    // ldr r1, [sp, #0x48]
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // str r1, [sp, #0x44]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #0xc]
    // str r1, [sp, #0x14]
    // eor r2, r1
    // ldr r1, [sp, #0x14]
    // eor r1, r2
    // eor r1, r3
    // eor r2, r1
    // add r0, #0x20
    // ldr r1, [sp, #8]
    // ldr r4, [sp, #0xc]
    // eor r4, r6
    // eor r1, r4
    // eor r1, r3
    // ldr r3, [sp, #4]
    // eor r1, r7
    // str r3, [sp, #4]
    // ldr r5, [sp, #0x10]
    // str r5, [sp, #0x18]
    // ldr r5, [sp, #0x44]
    // ldr r5, [sp, #0x18]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r5, [sp, #0x44]
    // str r5, [sp, #0x1c]
    // ldr r5, [sp, #0x1c]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #8]
    // ldr r3, [sp, #0x44]
    // ldr r3, [sp, #0x10]
    // str r3, [sp, #0x20]
    // eor r4, r3
    // ldr r3, [sp, #0x20]
    // eor r3, r4
    // eor r3, r5
    // eor r5, r3
    // ldr r2, [sp, #0x44]
    // ldr r1, [sp, #0x10]
    // eor r1, r6
    // eor r1, r2
    // eor r1, r3
    // eor r6, r1
    // str r3, [sp, #0x24]
    // str r4, [sp, #0x28]
    // and r4, r5
    // str r4, [sp, #0x2c]
    // ldr r4, [sp, #0x10]
    // and r5, r4
    // ldr r4, [sp, #0x44]
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x2c]
    // eor r5, r4
    // ldr r4, [sp, #0x28]
    // eor r5, r4
    // ldr r4, [sp, #0x24]
    // eor r4, r5
    // ldr r5, [sp]
    // strb r6, [r5]
    *((u8*)(*((u32*)(ov13_022442B0 + (((0xff << 8) >> 0x18) << 2))) + 1)) = (*((u32*)(ov13_022442B0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) >> 0x10);
    *((u8*)(*((u32*)(ov13_022442B0 + (((0xff << 8) >> 0x18) << 2))) + 2)) = (*((u32*)(ov13_022442B0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) >> 8);
    *((u8*)(*((u32*)(ov13_022442B0 + (((0xff << 8) >> 0x18) << 2))) + 3)) = *((u32*)(ov13_022442B0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16)));
    // str r4, [sp, #0x30]
    // ldr r4, [sp, #0x10]
    // str r4, [sp, #0x34]
    // and r4, r5
    // str r4, [sp, #0x38]
    // ldr r4, [sp, #0x44]
    // and r5, r4
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x38]
    // eor r5, r4
    // ldr r4, [sp, #0x34]
    // eor r5, r4
    // ldr r4, [sp, #0x30]
    // eor r4, r5
    // ldr r5, [sp]
    *((u8*)(*((u32*)(ov13_022442B0 + (((0xff << 8) >> 0x18) << 2))) + 4)) = (*((u32*)(ov13_022442B0 + (((*((u32*)(ov13_02243AB0 + (((ov13_02243EB0 >> 8) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16))) >> 0x18);
    *((u8*)(*((u32*)(ov13_022442B0 + (((0xff << 8) >> 0x18) << 2))) + 5)) = (*((u32*)(ov13_022442B0 + (((*((u32*)(ov13_02243AB0 + (((ov13_02243EB0 >> 8) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16))) >> 0x10);
    *((u8*)(*((u32*)(ov13_022442B0 + (((0xff << 8) >> 0x18) << 2))) + 6)) = (*((u32*)(ov13_022442B0 + (((*((u32*)(ov13_02243AB0 + (((ov13_02243EB0 >> 8) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16))) >> 8);
    *((u8*)(*((u32*)(ov13_022442B0 + (((0xff << 8) >> 0x18) << 2))) + 7)) = *((u32*)(ov13_022442B0 + (((*((u32*)(ov13_02243AB0 + (((ov13_02243EB0 >> 8) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16)));
    // str r4, [sp, #0x3c]
    // ldr r4, [sp, #0x44]
    // mov lr, r4
    // ldr r4, [sp, #0x10]
    // and r4, r5
    // mov ip, r4
    // and r6, r4
    // and r4, r5
    // eor r4, r6
    // mov r5, ip
    // eor r5, r4
    // mov r4, lr
    // eor r5, r4
    // ldr r4, [sp, #0x3c]
    // eor r4, r5
    // ldr r5, [sp]
    *((u8*)(*((u32*)(ov13_022442B0 + (((*((u32*)(ov13_022436B0 + (((ov13_022432B0 >> 0x10) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16))) + 8)) = ((0xff << 0x10) >> 0x18);
    *((u8*)(*((u32*)(ov13_022442B0 + (((*((u32*)(ov13_022436B0 + (((ov13_022432B0 >> 0x10) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16))) + 9)) = ((0xff << 0x10) >> 0x10);
    *((u8*)(*((u32*)(ov13_022442B0 + (((*((u32*)(ov13_022436B0 + (((ov13_022432B0 >> 0x10) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16))) + 0xa)) = ((0xff << 0x10) >> 8);
    *((u8*)(*((u32*)(ov13_022442B0 + (((*((u32*)(ov13_022436B0 + (((ov13_022432B0 >> 0x10) << 0x18) >> 0x16))) >> 0x10) << 0x18) >> 0x16))) + 0xb)) = (0xff << 0x10);
    // ldr r0, [sp, #0x44]
    // and r2, r0
    // and r0, r1
    // ldr r1, [sp, #0x10]
    // and r1, r3
    // eor r0, r1
    // eor r0, r2
    // eor r0, r4
    // eor r0, r5
    // ldr r1, [sp]
    *((u8*)((0xff << 0x10) + 0xc)) = ((0xff << 0x18) >> 0x18);
    *((u8*)((0xff << 0x10) + 0xd)) = ((0xff << 0x18) >> 0x10);
    *((u8*)((0xff << 0x10) + 0xe)) = ((0xff << 0x18) >> 8);
    *((u8*)((0xff << 0x10) + 0xf)) = (0xff << 0x18);
}




void ov13_02225F14(void) {
    // str r3, [sp]
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #0xc]
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #8]
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #0x40]
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // eor r6, r1
    // asr r1, r7, #1
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #0x40]
    // ldr r1, [sp, #0xc]
    // eor r1, r7
    // eor r1, r3
    // eor r1, r4
    // eor r1, r5
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x40]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #0xc]
    // eor r1, r7
    // eor r1, r3
    // eor r1, r4
    // eor r1, r5
    // str r1, [sp, #0x44]
    // ldr r1, [sp, #0xc]
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x40]
    // ldr r4, [sp, #8]
    // eor r4, r1
    // ldr r1, [sp, #0x14]
    // eor r1, r4
    // eor r1, r2
    // eor r2, r1
    // ldr r1, [sp, #0xc]
    // add r0, #0x20
    // ldr r4, [sp, #8]
    // ldr r4, [sp, #0x40]
    // eor r4, r6
    // eor r4, r7
    // eor r1, r4
    // eor r1, r3
    // ldr r3, [sp, #4]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x44]
    // ldr r5, [sp, #0x10]
    // str r5, [sp, #0x18]
    // ldr r5, [sp, #0x18]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #0xc]
    // ldr r5, [sp, #0x44]
    // str r5, [sp, #0x1c]
    // ldr r5, [sp, #0x10]
    // ldr r5, [sp, #0x1c]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #8]
    // ldr r3, [sp, #0x10]
    // str r3, [sp, #0x20]
    // ldr r3, [sp, #0x44]
    // eor r4, r3
    // ldr r3, [sp, #0x20]
    // eor r3, r4
    // eor r3, r5
    // eor r3, r6
    // str r3, [sp, #0x40]
    // ldr r3, [sp, #0x10]
    // ldr r3, [sp, #0x44]
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // eor r6, r1
    // str r3, [sp, #0x24]
    // ldr r3, [sp, #0x44]
    // str r4, [sp, #0x28]
    // and r4, r5
    // str r4, [sp, #0x2c]
    // ldr r4, [sp, #0x10]
    // and r5, r4
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x2c]
    // eor r5, r4
    // ldr r4, [sp, #0x28]
    // eor r5, r4
    // ldr r4, [sp, #0x24]
    // eor r4, r5
    // ldr r5, [sp]
    // strb r6, [r5]
    *((u8*)(*((u32*)(ov13_02242EB0 + (((0xff << 8) >> 0x18) << 2))) + 1)) = (*((u32*)(ov13_02242EB0 + (((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_02242AB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022426B0 + (((ov13_02242AB0 >> 8) << 0x18) >> 0x16))) >> 0x18) << 2))) << 0x18) >> 0x16))) >> 0x18) << 2))) >> 0x10) << 0x18) >> 0x16))) >> 0x10);
    *((u8*)(*((u32*)(ov13_02242EB0 + (((0xff << 8) >> 0x18) << 2))) + 2)) = (*((u32*)(ov13_02242EB0 + (((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_02242AB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022426B0 + (((ov13_02242AB0 >> 8) << 0x18) >> 0x16))) >> 0x18) << 2))) << 0x18) >> 0x16))) >> 0x18) << 2))) >> 0x10) << 0x18) >> 0x16))) >> 8);
    *((u8*)(*((u32*)(ov13_02242EB0 + (((0xff << 8) >> 0x18) << 2))) + 3)) = *((u32*)(ov13_02242EB0 + (((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_02242AB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022426B0 + (((ov13_02242AB0 >> 8) << 0x18) >> 0x16))) >> 0x18) << 2))) << 0x18) >> 0x16))) >> 0x18) << 2))) >> 0x10) << 0x18) >> 0x16)));
    // str r4, [sp, #0x30]
    // str r4, [sp, #0x34]
    // and r4, r5
    // str r4, [sp, #0x38]
    // ldr r4, [sp, #0x44]
    // and r5, r4
    // ldr r4, [sp, #0x10]
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x38]
    // eor r5, r4
    // ldr r4, [sp, #0x34]
    // eor r5, r4
    // ldr r4, [sp, #0x30]
    // eor r4, r5
    // ldr r5, [sp]
    *((u8*)(*((u32*)(ov13_02242EB0 + (((0xff << 8) >> 0x18) << 2))) + 4)) = (*((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) >> 0x18);
    *((u8*)(*((u32*)(ov13_02242EB0 + (((0xff << 8) >> 0x18) << 2))) + 5)) = (*((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) >> 0x10);
    *((u8*)(*((u32*)(ov13_02242EB0 + (((0xff << 8) >> 0x18) << 2))) + 6)) = (*((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) >> 8);
    *((u8*)(*((u32*)(ov13_02242EB0 + (((0xff << 8) >> 0x18) << 2))) + 7)) = *((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16)));
    // str r4, [sp, #0x3c]
    // mov lr, r4
    // ldr r4, [sp, #0x10]
    // and r4, r5
    // mov ip, r4
    // and r6, r4
    // ldr r4, [sp, #0x44]
    // and r4, r5
    // eor r4, r6
    // mov r5, ip
    // eor r5, r4
    // mov r4, lr
    // eor r5, r4
    // ldr r4, [sp, #0x3c]
    // eor r4, r5
    // ldr r5, [sp]
    *((u8*)(*((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) + 8)) = ((0xff << 0x10) >> 0x18);
    *((u8*)(*((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) + 9)) = ((0xff << 0x10) >> 0x10);
    *((u8*)(*((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) + 0xa)) = ((0xff << 0x10) >> 8);
    *((u8*)(*((u32*)(ov13_02242EB0 + ((((0xff << 0x18) >> 0x10) << 0x18) >> 0x16))) + 0xb)) = (0xff << 0x10);
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x44]
    // and r0, r6
    // and r1, r6
    // and r2, r3
    // eor r1, r2
    // eor r0, r1
    // eor r0, r4
    // eor r0, r5
    // ldr r1, [sp]
    *((u8*)(*((u32*)(ov13_02242EB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_02242AB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022426B0 + (((ov13_02242AB0 >> 8) << 0x18) >> 0x16))) >> 0x18) << 2))) << 0x18) >> 0x16))) >> 0x18) << 2))) >> 0x18) << 2))) + 0xc)) = ((0xff << 8) >> 0x18);
    *((u8*)(*((u32*)(ov13_02242EB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_02242AB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022426B0 + (((ov13_02242AB0 >> 8) << 0x18) >> 0x16))) >> 0x18) << 2))) << 0x18) >> 0x16))) >> 0x18) << 2))) >> 0x18) << 2))) + 0xd)) = ((0xff << 8) >> 0x10);
    *((u8*)(*((u32*)(ov13_02242EB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_02242AB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022426B0 + (((ov13_02242AB0 >> 8) << 0x18) >> 0x16))) >> 0x18) << 2))) << 0x18) >> 0x16))) >> 0x18) << 2))) >> 0x18) << 2))) + 0xe)) = ((0xff << 8) >> 8);
    *((u8*)(*((u32*)(ov13_02242EB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_02242AB0 + ((*((u32*)(ov13_022446B0 + ((*((u32*)(ov13_022426B0 + (((ov13_02242AB0 >> 8) << 0x18) >> 0x16))) >> 0x18) << 2))) << 0x18) >> 0x16))) >> 0x18) << 2))) >> 0x18) << 2))) + 0xf)) = (0xff << 8);
}




void ov13_022262D0(void) {
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0xEFCDAB89;
    *((u32*)(r0 + 8)) = 0x98BADCFE;
    *((u32*)(r0 + 0xc)) = 0x10325476;
}




void ov13_022262F8(void) {
    // and r0, r2
    // add r1, r1, r2
    // add r1, r2, r1
    // sub r4, r1, r0
    // add r1, #0x18
    // add r0, r1, r0
    // add r1, #0x18
    // add r0, #0x3f
    // add r1, r7, r4
    // add r4, #0x40
    // add r0, #0x3f
    // add r5, #0x18
    // add r0, r5, r0
    // add r1, r7, r4
    // sub r2, r6, r4
}




void ov13_02226370(void) {
    // add r0, sp, #0
    // add r1, #0x10
    ov13_02226C0C(8);
    // and r1, r0
    // sub r2, r0, r1
    ov13_022262F8(r4, ov13_02245AD8);
    // add r1, sp, #0
    ov13_022262F8(r4, 8);
    ov13_02226C0C(r5, r4, 0x10);
    ov13_02226C7C(r4, 0, 0x58);
}




void ov13_022263C4(void) {
    // str r0, [sp]
    // add r0, sp, #0x44
    ov13_02226C38(*((u32*)r0), 0x40);
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #4]
    // mvn r0, r4
    // and r1, r5
    // and r0, r6
    // ldr r0, [sp, #4]
    // add r1, r0, r1
    // sub r1, r1, r0
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r3, r0, r4
    // ldr r0, [sp, #0x48]
    // mvn r1, r3
    // str r0, [sp, #8]
    // and r0, r4
    // and r1, r5
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // sub r0, r1, r0
    // add r0, r6, r0
    // add r2, r0, r3
    // ldr r0, [sp, #0x4c]
    // mvn r1, r2
    // str r0, [sp, #0xc]
    // and r0, r3
    // and r1, r4
    // ldr r0, [sp, #0xc]
    // add r1, r0, r1
    // add r0, r1, r0
    // add r0, r5, r0
    // add r1, r0, r2
    // ldr r0, [sp, #0x50]
    // mvn r5, r1
    // str r0, [sp, #0x10]
    // and r0, r2
    // and r5, r3
    // ldr r0, [sp, #0x10]
    // add r5, r0, r5
    // sub r0, r5, r0
    // add r0, r4, r0
    // ldr r4, [sp, #0x54]
    // add r0, r0, r1
    // str r4, [sp, #0x14]
    // mvn r5, r0
    // and r4, r1
    // and r5, r2
    // ldr r4, [sp, #0x14]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r3, r3, r4
    // ldr r4, [sp, #0x58]
    // add r3, r3, r0
    // str r4, [sp, #0x18]
    // mvn r5, r3
    // and r4, r0
    // and r5, r1
    // ldr r4, [sp, #0x18]
    // add r5, r4, r5
    // add r4, r5, r4
    // add r2, r2, r4
    // ldr r4, [sp, #0x5c]
    // add r2, r2, r3
    // str r4, [sp, #0x1c]
    // mvn r5, r2
    // and r4, r3
    // and r5, r0
    // ldr r4, [sp, #0x1c]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r1, r1, r4
    // ldr r4, [sp, #0x60]
    // add r1, r1, r2
    // str r4, [sp, #0x20]
    // mvn r5, r1
    // and r4, r2
    // and r5, r3
    // ldr r4, [sp, #0x20]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r0, r0, r4
    // ldr r4, [sp, #0x64]
    // add r0, r0, r1
    // str r4, [sp, #0x24]
    // mvn r5, r0
    // and r4, r1
    // and r5, r2
    // ldr r4, [sp, #0x24]
    // add r5, r4, r5
    // add r4, r5, r4
    // add r3, r3, r4
    // ldr r4, [sp, #0x68]
    // add r3, r3, r0
    // str r4, [sp, #0x28]
    // mvn r5, r3
    // and r4, r0
    // and r5, r1
    // ldr r4, [sp, #0x28]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r2, r2, r4
    // ldr r4, [sp, #0x6c]
    // add r2, r2, r3
    // str r4, [sp, #0x2c]
    // mvn r5, r2
    // and r4, r3
    // and r5, r0
    // ldr r4, [sp, #0x2c]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r1, r1, r4
    // ldr r4, [sp, #0x70]
    // add r1, r1, r2
    // str r4, [sp, #0x30]
    // mvn r5, r1
    // and r4, r2
    // and r5, r3
    // ldr r4, [sp, #0x30]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r0, r0, r4
    // add r0, r0, r1
    // ldr r4, [sp, #0x74]
    // mvn r5, r0
    // str r4, [sp, #0x34]
    // and r4, r1
    // and r5, r2
    // ldr r4, [sp, #0x34]
    // add r5, r4, r5
    // add r4, r5, r4
    // add r3, r3, r4
    // add r4, r3, r0
    // ldr r3, [sp, #0x78]
    // mvn r5, r4
    // str r3, [sp, #0x38]
    // and r3, r0
    // and r5, r1
    // ldr r3, [sp, #0x38]
    // add r5, r3, r5
    // sub r3, r5, r3
    // add r2, r2, r3
    // add r3, r2, r4
    // mvn r2, r3
    // str r2, [sp, #0x3c]
    // ldr r2, [sp, #0x7c]
    // ldr r5, [sp, #0x3c]
    // str r2, [sp, #0x40]
    // and r2, r4
    // and r5, r0
    // ldr r2, [sp, #0x40]
    // add r5, r2, r5
    // sub r2, r5, r2
    // add r1, r1, r2
    // add r2, r1, r3
    // ldr r1, [sp, #0x80]
    // mvn r6, r2
    // mov ip, r1
    // and r5, r3
    // and r1, r4
    // mov r1, ip
    // add r5, r1, r5
    // add r1, r5, r1
    // add r0, r0, r1
    // add r1, r0, r2
    // ldr r5, [sp, #0x3c]
    // and r0, r3
    // and r5, r2
    // ldr r0, [sp, #8]
    // add r5, r0, r5
    // sub r0, r5, r0
    // add r0, r4, r0
    // add r0, r0, r1
    // and r4, r2
    // ldr r4, [sp, #0x1c]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r3, r3, r4
    // add r3, r3, r0
    // mvn r5, r1
    // and r4, r1
    // and r5, r0
    // ldr r4, [sp, #0x30]
    // add r5, r4, r5
    // add r4, r5, r4
    // add r2, r2, r4
    // add r2, r2, r3
    // mvn r5, r0
    // and r4, r0
    // and r5, r3
    // ldr r4, [sp, #4]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r1, r1, r4
    // add r1, r1, r2
    // mvn r5, r3
    // and r4, r3
    // and r5, r2
    // ldr r4, [sp, #0x18]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r0, r0, r4
    // add r4, r0, r1
    // mvn r5, r2
    // and r0, r2
    // and r5, r1
    // ldr r0, [sp, #0x2c]
    // add r5, r0, r5
    // add r0, r5, r0
    // add r0, r3, r0
    // add r3, r0, r4
    // mvn r5, r1
    // and r0, r1
    // and r5, r4
    // mov r0, ip
    // add r5, r0, r5
    // sub r0, r5, r0
    // add r0, r2, r0
    // add r0, r0, r3
    // mvn r5, r4
    // and r2, r4
    // and r5, r3
    // ldr r2, [sp, #0x14]
    // add r5, r2, r5
    // sub r2, r5, r2
    // add r1, r1, r2
    // add r5, r1, r0
    // mvn r2, r3
    // and r1, r3
    // and r2, r0
    // ldr r1, [sp, #0x28]
    // add r2, r1, r2
    // add r1, r2, r1
    // add r1, r4, r1
    // add r2, r1, r5
    // mvn r4, r0
    // and r1, r0
    // and r4, r5
    // ldr r1, [sp, #0x40]
    // add r4, r1, r4
    // sub r1, r4, r1
    // add r1, r3, r1
    // add r1, r1, r2
    // mvn r4, r5
    // and r3, r5
    // and r4, r2
    // ldr r3, [sp, #0x10]
    // add r4, r3, r4
    // sub r3, r4, r3
    // add r0, r0, r3
    // add r4, r0, r1
    // mvn r3, r2
    // and r0, r2
    // and r3, r1
    // ldr r0, [sp, #0x24]
    // add r3, r0, r3
    // add r0, r3, r0
    // add r0, r5, r0
    // add r3, r0, r4
    // mvn r5, r1
    // and r0, r1
    // and r5, r4
    // ldr r0, [sp, #0x38]
    // add r5, r0, r5
    // sub r0, r5, r0
    // add r0, r2, r0
    // add r0, r0, r3
    // mvn r5, r4
    // and r2, r4
    // and r5, r3
    // ldr r2, [sp, #0xc]
    // add r5, r2, r5
    // sub r2, r5, r2
    // add r1, r1, r2
    // add r5, r1, r0
    // mvn r2, r3
    // and r1, r3
    // and r2, r0
    // ldr r1, [sp, #0x20]
    // add r2, r1, r2
    // add r1, r2, r1
    // add r1, r4, r1
    // add r2, r1, r5
    // mvn r4, r0
    // and r1, r0
    // and r4, r5
    // ldr r1, [sp, #0x34]
    // add r4, r1, r4
    // sub r1, r4, r1
    // add r1, r3, r1
    // add r1, r1, r2
    // eor r3, r2
    // eor r4, r3
    // ldr r3, [sp, #0x18]
    // add r4, r3, r4
    // sub r3, r4, r3
    // add r0, r0, r3
    // add r4, r0, r1
    // eor r0, r1
    // eor r3, r0
    // ldr r0, [sp, #0x24]
    // add r3, r0, r3
    // sub r0, r3, r0
    // add r0, r5, r0
    // add r3, r0, r4
    // eor r0, r4
    // eor r5, r0
    // ldr r0, [sp, #0x30]
    // add r5, r0, r5
    // add r0, r5, r0
    // add r0, r2, r0
    // add r0, r0, r3
    // eor r2, r3
    // eor r5, r2
    // ldr r2, [sp, #0x40]
    // add r5, r2, r5
    // sub r2, r5, r2
    // add r1, r1, r2
    // add r5, r1, r0
    // eor r1, r0
    // eor r2, r1
    // ldr r1, [sp, #8]
    // add r2, r1, r2
    // sub r1, r2, r1
    // add r1, r4, r1
    // add r2, r1, r5
    // eor r1, r5
    // eor r4, r1
    // ldr r1, [sp, #0x14]
    // add r4, r1, r4
    // add r1, r4, r1
    // add r1, r3, r1
    // add r1, r1, r2
    // eor r3, r2
    // eor r4, r3
    // ldr r3, [sp, #0x20]
    // add r4, r3, r4
    // sub r3, r4, r3
    // add r0, r0, r3
    // add r4, r0, r1
    // eor r0, r1
    // eor r3, r0
    // ldr r0, [sp, #0x2c]
    // add r3, r0, r3
    // sub r0, r3, r0
    // add r0, r5, r0
    // add r3, r0, r4
    // eor r0, r4
    // eor r5, r0
    // ldr r0, [sp, #0x38]
    // add r5, r0, r5
    // add r0, r5, r0
    // add r0, r2, r0
    // add r0, r0, r3
    // eor r2, r3
    // eor r5, r2
    // ldr r2, [sp, #4]
    // add r5, r2, r5
    // sub r2, r5, r2
    // add r1, r1, r2
    // add r5, r1, r0
    // eor r1, r0
    // eor r2, r1
    // ldr r1, [sp, #0x10]
    // add r2, r1, r2
    // sub r1, r2, r1
    // add r1, r4, r1
    // add r2, r1, r5
    // eor r1, r5
    // eor r4, r1
    // ldr r1, [sp, #0x1c]
    // add r4, r1, r4
    // add r1, r4, r1
    // add r1, r3, r1
    // add r1, r1, r2
    // eor r3, r2
    // eor r4, r3
    // ldr r3, [sp, #0x28]
    // add r4, r3, r4
    // sub r3, r4, r3
    // add r0, r0, r3
    // add r4, r0, r1
    // eor r0, r1
    // eor r3, r0
    // ldr r0, [sp, #0x34]
    // add r3, r0, r3
    // sub r0, r3, r0
    // add r0, r5, r0
    // add r3, r0, r4
    // eor r0, r4
    // eor r5, r0
    // mov r0, ip
    // add r5, r0, r5
    // add r0, r5, r0
    // add r0, r2, r0
    // add r0, r0, r3
    // eor r2, r3
    // eor r5, r2
    // ldr r2, [sp, #0xc]
    // add r5, r2, r5
    // sub r2, r5, r2
    // add r1, r1, r2
    // add r5, r1, r0
    // mvn r1, r3
    // eor r2, r1
    // ldr r1, [sp, #4]
    // add r2, r1, r2
    // sub r1, r2, r1
    // add r1, r4, r1
    // add r2, r1, r5
    // mvn r1, r0
    // eor r4, r1
    // ldr r1, [sp, #0x20]
    // add r4, r1, r4
    // add r1, r4, r1
    // add r1, r3, r1
    // add r1, r1, r2
    // mvn r3, r5
    // eor r4, r3
    // ldr r3, [sp, #0x40]
    // add r4, r3, r4
    // sub r3, r4, r3
    // add r0, r0, r3
    // add r4, r0, r1
    // mvn r0, r2
    // eor r3, r0
    // ldr r0, [sp, #0x18]
    // add r3, r0, r3
    // sub r0, r3, r0
    // add r0, r5, r0
    // add r3, r0, r4
    // mvn r0, r1
    // eor r5, r0
    // ldr r0, [sp, #0x34]
    // add r5, r0, r5
    // add r0, r5, r0
    // add r0, r2, r0
    // add r0, r0, r3
    // mvn r2, r4
    // eor r5, r2
    // ldr r2, [sp, #0x10]
    // add r5, r2, r5
    // sub r2, r5, r2
    // add r1, r1, r2
    // add r5, r1, r0
    // mvn r1, r3
    // eor r2, r1
    // ldr r1, [sp, #0x2c]
    // add r2, r1, r2
    // sub r1, r2, r1
    // add r1, r4, r1
    // add r2, r1, r5
    // mvn r1, r0
    // eor r4, r1
    // ldr r1, [sp, #8]
    // add r4, r1, r4
    // sub r1, r4, r1
    // add r1, r3, r1
    // add r1, r1, r2
    // mvn r3, r5
    // eor r4, r3
    // ldr r3, [sp, #0x24]
    // add r4, r3, r4
    // add r3, r4, r3
    // add r0, r0, r3
    // add r3, r0, r1
    // mvn r0, r2
    // eor r0, r1
    // mov r4, ip
    // add r4, r4, r0
    // sub r0, r4, r0
    // add r0, r5, r0
    // add r0, r0, r3
    // mvn r4, r1
    // eor r5, r4
    // ldr r4, [sp, #0x1c]
    // add r5, r4, r5
    // sub r4, r5, r4
    // add r2, r2, r4
    // add r4, r2, r0
    // mvn r2, r3
    // eor r5, r2
    // ldr r2, [sp, #0x38]
    // add r5, r2, r5
    // add r2, r5, r2
    // add r1, r1, r2
    // add r2, r1, r4
    // mvn r1, r0
    // eor r5, r1
    // ldr r1, [sp, #0x14]
    // add r5, r1, r5
    // sub r1, r5, r1
    // add r1, r3, r1
    // add r1, r1, r2
    // mvn r3, r4
    // eor r5, r3
    // ldr r3, [sp, #0x30]
    // add r5, r3, r5
    // sub r3, r5, r3
    // add r0, r0, r3
    // add r5, r0, r1
    // mvn r0, r2
    // eor r3, r0
    // ldr r0, [sp, #0xc]
    // add r3, r0, r3
    // add r0, r3, r0
    // add r0, r4, r0
    // add r3, r0, r5
    // mvn r0, r1
    // eor r4, r0
    // ldr r0, [sp, #0x28]
    // add r4, r0, r4
    // sub r0, r4, r0
    // add r0, r2, r0
    // add r0, r0, r3
    // add r1, r2, r1
    // str r1, [r7]
    // add r0, r1, r0
    *((u32*)(r7 + 4)) = ((0x14792C6F >> 0xb) | (0x14792C6F << 0x15));
    // add r0, r0, r3
    *((u32*)(r7 + 8)) = *((u32*)(r7 + 8));
    // add r0, r0, r5
    *((u32*)(r7 + 0xc)) = *((u32*)(r7 + 0xc));
    // add r0, sp, #0x44
    ov13_02226C7C(*((u32*)(r7 + 0xc)), 0, 0x40, (0x2AD7D2BB << 0xf));
}




void ov13_02226C0C(void) {
    // add r3, r0, r4
    // strb r5, [r0, r4]
}




void ov13_02226C38(void) {
    // add r6, r1, r7
    // stmia r0!, {r3}
}




void ov13_02226C64(void) {
    // strb r3, [r0, r4]
}




void ov13_02226C7C(void) {
    // asr r1, r1, #0x18
    // strb r1, [r0]
}




void ov13_02226C94(void) {
}




void ov13_02226CBC(void) {
    OS_GetTick();
    _ll_udiv((r0 << 6), ((r1 << 6) | (r0 >> 0x1a)), 0x000082EA, 0);
}




void ov13_02226CD8(void) {
    // blx r1
    memset((r0 * r1), 0, (r0 * r1));
}




void ov13_02226CFC(void) {
    // blx r1
}




void ov13_02226D0C(void) {
    // and r1, r3
    // asr r5, r1, #4
    // and r1, r3
    // add r5, #0x30
    // add r5, #0x37
    // strb r5, [r2]
    // strb r1, [r2]
    // sub r0, r2, r0
}




void ov13_02226D40(void) {
    // str r0, [sp]
    // ldrsb r1, [r6, r1]
    // add r0, r4, r0
    // strb r7, [r0]
    // strb r0, [r4]
    // ldr r0, [sp]
    // sub r0, r4, r0
}




void ov13_02226D74(void) {
    // mvn r0, r0
    *((u32*)(ov13_02245A58 + 0x10)) = r1;
    *((u32*)(ov13_0224DF30 + 0x38)) = 7;
    *((u32*)(ov13_0224DF30 + 0x7c)) = r2;
    // ldr r2, [sp, #0x18]
    *((u32*)(ov13_0224DF30 + 4)) = r3;
    *((u32*)(ov13_0224DF30 + 0xc)) = r2;
    // ldr r0, [sp, #0x1c]
    *((u32*)(ov13_02245A58 + 8)) = ov13_0224DF30;
    ov13_02223EE0(r1);
    *((u32*)(ov13_0224DF30 + 0x74)) = 1;
    *((u32*)(ov13_0224DF30 + 0x78)) = r0;
    // blx r1
    *((u32*)(ov13_0224DF30 + 0x30)) = *((u32*)(r5 + 8));
    // sub r0, #8
    *((u32*)(ov13_0224DF30 + 0x78)) = r6;
    OS_IsThreadAvailable(r6, ov13_0224DF30, 1);
    // sub r0, #0x10
    *((u32*)(ov13_0224DF30 + 0x78)) = r6;
    // str r3, [sp]
    // str r4, [sp, #4]
    // add r3, r5, r3
    OS_CreateThread(ov13_0224DFDC, ov13_02225320, 0, (*((u32*)(r5 + 8)) & ~(7)));
    *((u32*)(ov13_0224DF30 + 0x38)) = 1;
    ov13_02226CBC(ov13_0224DF30, 1);
    // add r1, r0, r1
    *((u32*)(ov13_02245A58 + 0xc)) = 0x0000EA60;
    *((u32*)(ov13_0224DF30 + 0x10)) = 0;
    // stmia r5!, {r0, r1, r2, r3}
    // stmia r5!, {r0, r1, r2, r3}
    // stmia r5!, {r0, r1}
    ov13_02226F3C(0, 0, 0, 0);
    OS_WakeupThreadDirect(ov13_0224DFDC);
    *((u32*)(ov13_0224DF30 + 0x64)) = 1;
}




void ov13_02226E5C(void) {
    *((u32*)(ov13_0224DF30 + 0x10)) = 1;
    OS_Sleep(0x64);
    OS_Sleep((0x7d << 2));
    OS_IsThreadTerminated(ov13_0224DFDC);
    OS_WakeupThreadDirect(ov13_0224DFDC);
    OS_JoinThread(r4);
    OS_IsThreadTerminated(r4);
    // blx r1
    *((u32*)(ov13_0224DF30 + 0x30)) = 0;
    *((u32*)(ov13_0224DF30 + 0x64)) = 0;
    ov13_02226F3C(*((u32*)(ov13_0224DF30 + 0x38)), 0);
    ov13_02223F84(*((u32*)(ov13_0224DF30 + 0x74)));
    *((u32*)(ov13_0224DF30 + 0x74)) = 0;
    // mvn r0, r0
}




void ov13_02226EF0(void) {
    // str r0, [r4]
    // mvn r0, r0
    ov13_02226CBC(0, *((u32*)(ov13_02245A58 + 0xc)));
    // sub r0, r1, r0
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = *((u32*)(ov13_0224DF30 + 0x78));
}




void ov13_02226F28(void) {
}




void ov13_02226F3C(void) {
}



