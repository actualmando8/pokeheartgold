/* Decompiled from asm/overlay_49.s */
#include "global.h"

void ov49_02258800(void) {
    // ldrsh r2, [r0, r3]
    // str r2, [r1]
    // ldrsh r0, [r0, r2]
}





void ov49_02258814(void) {
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // strh r2, [r1]
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r0, r0, #0xc
}





void ov49_02258830(void) {
    // str r0, [sp]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // str r0, [sp, #4]
    // str r0, [r5]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #4]
}





void ov49_022588A0(void) {
    // add r1, sp, #0x54
    // add r2, sp, #0x58
    // add r3, sp, #0x5c
    sub_020182B0(r1);
    // add r1, sp, #0x48
    // add r2, sp, #0x4c
    // add r3, sp, #0x50
    sub_020182CC(r5);
    sub_020182EC(r5, 0);
    sub_020182EC(r5, 1);
    sub_020182EC(r5, 2);
    // add r0, sp, #0x24
    MTX_Identity33_();
    // asr r0, r6, #4
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // add r0, sp, #0
    MTX_RotX33_(((r0 << 1) << 1), FX_SinCosTable_, (((r0 << 1) + 1) << 1));
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // asr r0, r5, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotZ33_(((r0 << 1) << 1), (((r0 << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // asr r0, r7, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotY33_(((r0 << 1) << 1), (((r0 << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0x24
    // add r0, sp, #0
    MTX_Concat33(r1);
    // add r1, sp, #0x54
    // add r2, sp, #0x24
    // add r3, sp, #0x48
    sub_0201F990(*((u32*)(r4 + 8)));
}





void ov49_02258958(void) {
    // str r0, [r4]
    // str r0, [sp]
}





void ov49_02258994(void) {
}





u8 ov49_022589A8(void) {
}





void ov49_022589AC(void) {
}





void ov49_022589B8(void) {
}





void ov49_022589C4(void) {
}





void ov49_022589D8(void) {
    // ldr r7, [sp, #0x28]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r5, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // strh r4, [r0]
    // ldr r0, [sp, #0xc]
    // strh r1, [r0]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}





void ov49_02258A30(void) {
    // bne _02258A3E
    // cmp r2, #0x20
    // blo _02258A34
    // nop
    // _02258A4C: .word ov49_02269634
}





void ov49_02258A50(void) {
    // bne _02258A5E
    // cmp r2, #3
    // blo _02258A54
    // nop
    // _02258A6C: .word _02269624
}





void ov49_02258A70(void) {
    // bne _02258A7E
    // cmp r2, #7
    // blo _02258A74
    // nop
    // _02258A8C: .word ov49_0226962C
}





void ov49_02258A90(void) {
    // bne _02258A9E
    // cmp r2, #4
    // blo _02258A94
    // nop
    // _02258AAC: .word ov49_02269628
}





void ov49_02258AB0(void) {
}





void ov49_02258AB4(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp, #4]
    // str r0, [r4]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #0x20]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
}





void ov49_02258B20(void) {
}





void ov49_02258B44(void) {
}





void ov49_02258B5C(void) {
    // add r0, r0, r4
    // add r0, r0, r4
    // blx r2
    // add r4, #0x28
    // add r1, sp, #8
    // add r7, sp, #0
    // add r6, sp, #8
}





void ov49_02258BD4(void) {
}





void ov49_02258BE0(void) {
}





void ov49_02258BEC(void) {
    // add r0, #0x18
}





void ov49_02258C08(void) {
    // add r0, #0x18
}





void ov49_02258C1C(void) {
}





void ov49_02258C28(void) {
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    // add r3, sp, #4
}





void ov49_02258C5C(void) {
    // str r3, [sp]
    // add r1, sp, #4
    // strh r0, [r1]
    // ldr r0, [sp]
    // add r1, sp, #4
    // str r0, [r4]
}





void ov49_02258CB8(void) {
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp]
    // add r2, sp, #0xc
    // add r2, #2
    // add r3, sp, #0xc
    // add r1, sp, #0xc
    // add r2, sp, #0xc
    // add r1, sp, #0xc
    // ldr r0, [sp, #4]
    // add r1, sp, #0x10
    // ldr r1, [sp, #8]
    // str r0, [r1]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #8]
}





void ov49_02258D54(void) {
}





void ov49_02258D70(void) {
    // add r0, r1, r0
    // add r4, #0x28
}





void ov49_02258DAC(void) {
}





void ov49_02258DB0(void) {
}





void ov49_02258DB4(void) {
    // add r1, sp, #8
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #8
    // mov r3, sp
    // strh r2, [r3]
}





void ov49_02258E04(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}





void ov49_02258E34(void) {
    // add r1, sp, #0
    // strh r0, [r1]
}





void ov49_02258E60(void) {
}





void ov49_02258E7C(void) {
}





void ov49_02258EAC(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #0
    // add r1, sp, #4
}





void ov49_02258EEC(void) {
    GF_AssertFail();
    // blx r2
    *((u16*)(r5 + 8)) = 0;
    *((u8*)(r5 + 0xa)) = 0;
    *((u8*)(r5 + 0xb)) = r4;
    // add r1, #0xc
    // strb r2, [r1]
    *((u32*)(r5 + 0x24)) = *((u32*)(ov49_022696C0 + (r4 << 2)));
}





void ov49_02258F38(void) {
}





void ov49_02258F3C(void) {
}





void ov49_02258F40(void) {
}





void ov49_02258F70(void) {
}





void ov49_02258F7C(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r3, sp
    // strh r2, [r3]
    // add r0, r2, r0
    // add r3, #0x28
}





void ov49_02258FDC(void) {
    // add r1, sp, #0
    // add r2, sp, #0
    // strh r0, [r2]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r1]
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // ldrsh r1, [r2, r0]
}





void ov49_0225904C(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    ov42_022282DC(*((u32*)r1));
    // add r4, sp, #0x1c
    *((u16*)(r4 + 4)) = r0;
    *((u16*)(r4 + 6)) = (r0 >> 0x10);
    // mov r5, sp
    *((u16*)(r4 + 0xc)) = *((u16*)(r4 + 4));
    *((u16*)(r4 + 0xe)) = *((u16*)(r4 + 6));
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // strh r0, [r5]
    // ldr r0, [sp, #0x18]
    *((u16*)((r5 - 4) + 2)) = *((u16*)(r4 + 0xe));
    ov42_02228270(*((u32*)(r5 - 4)), *((u8*)ov49_02269654));
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = (r0 >> 0x10);
    *((u16*)(r4 + 8)) = *((u16*)r4);
    *((u16*)(r4 + 0xa)) = *((u16*)(r4 + 2));
    // ldrsh r1, [r4, r0]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    // str r0, [sp, #0xc]
    // ldrsh r1, [r4, r0]
    // ldr r2, [sp, #0xc]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    ov49_022589AC(*((u32*)(r6 + 0x14)), ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10));
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    ov49_022589C4(*((u32*)(r6 + 0x14)), ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10));
    // strh r1, [r5]
    *((u16*)(r5 + 2)) = *((u16*)(r4 + 0xa));
    ov42_022284A4(*((u32*)r6), *((u32*)r5));
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    // str r1, [r0]
    // add r1, sp, #0x1c
    // ldr r0, [sp, #4]
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(*((u8*)(ov49_02269654 + r0)) + 0xa));
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}





void ov49_02259130(void) {
}





void ov49_0225913C(void) {
}





void ov49_02259148(void) {
}





void ov49_02259154(void) {
}





void ov49_02259160(void) {
}





void ov49_0225916C(void) {
}





void ov49_02259184(void) {
}





void ov49_0225919C(void) {
}





void ov49_022591B4(void) {
}





void ov49_022591C0(void) {
}





void ov49_022591CC(void) {
}





void ov49_022591D8(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r2, sp, #0xc
    // add r2, #2
    // add r3, sp, #0xc
    ov49_022589D8(*((u32*)(r0 + 0x14)), *((u8*)ov49_02269678));
    // add r7, sp, #0xc
    ov49_022593C0(r5);
    // add r1, sp, #0x10
    *((u16*)(r7 + 4)) = (*((u16*)(r7 + 2)) << 4);
    *((u16*)(r7 + 6)) = (*((u16*)r7) << 4);
    *((u16*)(r7 + 8)) = *((u8*)(r4 + 4));
    *((u16*)(r7 + 0xa)) = 0;
    *((u16*)(r7 + 0xc)) = *((u8*)(r4 + 1));
    *((u16*)(r7 + 0xe)) = *((u16*)(r4 + 2));
    ov42_022280B8(*((u32*)r5));
    // str r1, [r6]
    ov45_0223070C(*((u32*)(r5 + 4)), r0);
    *((u32*)(r6 + 4)) = r0;
    ov49_02258EEC(r5, r6, 0);
    *((u32*)(r5 + 0x24)) = r6;
    // ldr r0, [sp, #4]
    // add r2, sp, #0xc
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r2, #2
    // add r3, sp, #0xc
    ov49_022589D8(*((u32*)(r5 + 0x14)), *((u8*)r4));
    // ldr r0, [sp, #8]
    // add r4, #8
    // str r0, [sp, #8]
}





void ov49_0225927C(void) {
}





void ov49_02259294(void) {
}





void ov49_022592A8(void) {
    // add r1, sp, #0
    // mov r2, sp
    // strh r0, [r2]
    // add r2, sp, #0
    // strh r0, [r2]
    // ldrsh r3, [r2, r1]
    // asr r1, r3, #3
    // add r1, r3, r1
    // ldrsh r3, [r2, r3]
    // asr r2, r3, #3
    // add r2, r3, r2
}





void ov49_02259320(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}





void ov49_0225932C(void) {
    // asr r1, r6, #0x1f
    // asr r3, r2, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // add r0, r0, r1
    // str r0, [r5]
}





void ov49_022593BC(void) {
}





void ov49_022593C0(void) {
    // add r0, r0, r4
    // add r0, r1, r0
    // add r4, #0x28
    // add r0, r1, r0
}





void ov49_022593FC(void) {
    // cmp r0, #0
    // bne _02259406
}





void ov49_0225940C(void) {
}





void ov49_02259410(void) {
    ov42_02228188(*((u32*)r0), 6);
    ov42_02228188(*((u32*)r7), 4);
    ov42_02228188(*((u32*)r7), 5);
    // tst r2, r1
    // tst r2, r0
    ov49_0225927C(r5, 3, r4, r6);
    ov49_0225927C(r5, 1, 0, r6);
    // tst r2, r0
    ov49_0225927C(r5, r4, r6);
    ov49_0225927C(r5, 1, 1, r6);
    // tst r2, r0
    ov49_0225927C(r5, r4, r6);
    ov49_0225927C(r5, 1, 2, r6);
    // tst r0, r2
    ov49_0225927C(r5, r4, r6);
    ov49_0225927C(r5, 1, 3, r6);
}





void ov49_022594D8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022594F0: ; jump table
    ov49_02259294(ov49_02269658, 4);
    *((u16*)(r4 + 0xc)) = r0;
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0xc)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    ov42_02228188(*((u32*)r4), 4);
    ov42_02228188(*((u32*)r4), 6);
    ov49_02259294(ov49_0226965C, 4);
    *((u16*)(r4 + 0xe)) = r0;
    // ldrsh r2, [r4, r2]
    ov49_022592A8(r5, r4, 0xe, (r6 + 4));
    // ldrsh r3, [r4, r0]
    ov49_02258E7C(r5, r4, 2);
    *((u16*)(r4 + 8)) = 4;
    ov49_02258E7C(r5, r4, 1);
    *((u16*)(r4 + 8)) = 3;
    // ldrsh r3, [r4, r3]
    ov49_02258E7C(r5, r4, 1, 0xe);
    *((u16*)(r4 + 8)) = 4;
    ov42_02228188(*((u32*)r4), 5);
    // ldrsh r3, [r4, r3]
    ov49_02258E7C(r5, r4, 2, 0xe);
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    ov42_02228188(*((u32*)r4), 5);
    *((u16*)(r4 + 8)) = 0;
}





void ov49_022595CC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022595E4: ; jump table
    ov45_0223089C(*((u32*)(r0 + 4)), 0);
    ov45_0223093C(*((u32*)(r4 + 4)), 0);
    // add r0, #0xc
    ov49_02259320(r4, 0, (0x7d << 0xe), 0x18);
    *((u32*)(r4 + 0x1c)) = 0x20;
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) - 1);
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0x1c)) = 0;
    PlaySE(0x0000064E);
    // add r0, #0xc
    ov49_0225932C(r4, *((u32*)(r4 + 0x1c)));
    // add r1, sp, #0
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    ov45_02230908(*((u32*)(r4 + 4)));
    // add r0, #0xc
    ov49_022593BC(r4);
    // str r0, [sp, #4]
    // add r1, sp, #0
    ov45_022308E4(*((u32*)(r4 + 4)));
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    ov45_02230968(*((u32*)(r4 + 4)));
    *((u8*)(r4 + 0xa)) = 1;
}





void ov49_0225967C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02259694: ; jump table
    ov45_0223089C(*((u32*)(r0 + 4)), 0);
    ov45_0223093C(*((u32*)(r4 + 4)), 0);
    // add r0, #0xc
    ov49_02259320(r4, (0x7d << 0xe), 0, 0x18);
    *((u32*)(r4 + 0x1c)) = 0;
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    PlaySE(0x0000064E);
    // add r0, #0xc
    ov49_0225932C(r4, *((u32*)(r4 + 0x1c)));
    // add r1, sp, #0
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    ov45_02230908(*((u32*)(r4 + 4)));
    // add r0, #0xc
    ov49_022593BC(r4);
    // str r0, [sp, #4]
    // add r1, sp, #0
    ov45_022308E4(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x1c)) = 0x20;
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) - 1);
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    ov45_02230968(*((u32*)(r4 + 4)));
    ov45_0223089C(*((u32*)(r4 + 4)), 1);
    *((u8*)(r4 + 0xa)) = 1;
}





void ov49_02259734(void) {
}





void ov49_02259740(void) {
}





void ov49_0225974C(void) {
}





void ov49_02259758(void) {
}





void ov49_02259764(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02259780: ; jump table
    // add r0, #0xc
    // add r1, sp, #0x1c
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022597C8: ; jump table
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xc
    // add r1, sp, #0x10
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225980E: ; jump table
    // add r0, #0xc
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // add r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // add r0, #0xc
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r1, sp, #0x10
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225987A: ; jump table
    // add r1, sp, #0
    // mov r2, sp
    // strh r0, [r2]
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #0
    // mov r5, sp
    // strh r3, [r5]
}





void ov49_0225991C(void) {
    ov45_0223089C(*((u32*)(r0 + 4)), 0);
    // add r1, #0x10
    ov45_02230908(*((u32*)(r5 + 4)), r5);
    *((u32*)(r5 + 0xc)) = 0x1c;
    *((u16*)(r5 + 8)) = (*((u16*)(r5 + 8)) + 1);
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) - 1);
    // bpl _0225995C
    *((u32*)(r5 + 0xc)) = 0x1c;
    // add r3, #0x10
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // sub r0, #0x10
    // asr r0, r0, #0x10
    _s32_div_f((*((u32*)(r5 + 0xc)) << 0x10), 6, r5);
    // asr r1, r0, #0x10
    _s32_div_f((0xb4 * r1), 6);
    GF_SinDegNoWrap(((r0 << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r2, #0xd
    _ll_mul(0xFFFFE000);
    // add r3, r0, r3
    // adc r1, r6
    // ldr r2, [sp, #8]
    // add r0, r2, r1
    // str r0, [sp, #8]
    GF_SinDegNoWrap(((r4 << 0x10) >> 0x10), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa));
    // asr r1, r0, #0x1f
    _ll_mul((0xa << 0xc), r6);
    // add r3, r0, r3
    // adc r1, r4
    // ldr r2, [sp, #4]
    // add r0, r2, r1
    // str r0, [sp, #4]
    // add r1, sp, #0
    ov45_022308E4(*((u32*)(r5 + 4)), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa));
    ov45_02230920(*((u32*)(r5 + 4)), 1);
}





void ov49_022599F8(void) {
    // add r1, sp, #0
    // str r0, [sp, #4]
    // add r1, sp, #0
}





void ov49_02259A20(void) {
    *((u8*)(r0 + 1)) = r2;
    *((u8*)(r0 + 2)) = r2;
    *((u8*)(r0 + 3)) = 0;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // strb r3, [r0]
}





void ov49_02259A3C(void) {
    // strb r2, [r0]
    // sub r1, r1, r2
}





void ov49_02259A54(void) {
    // ldrsh r1, [r5, r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // strb r0, [r5]
    // ldrsh r1, [r5, r0]
    // ldrsb r0, [r5, r0]
    // ldrsh r1, [r5, r1]
    // ldrsb r0, [r5, r0]
    // add r0, r1, r0
}





void ov49_02259AA4(void) {
    OverlayManager_GetArgs();
    Heap_Create(3, 0x77, (0x3a << 0xc));
    Heap_Create(3, 0x78, (0x3d << 0xc));
    OverlayManager_CreateAndGetData(r4, (0xfe << 2), 0x77);
    memset(0, (0xfe << 2));
    // add r0, #0xc
    *((u32*)(r4 + 0x38)) = r5;
    *((u32*)(r4 + 0x34)) = *((u32*)(r5 + 0x1c));
    ov45_0222A53C(*((u32*)(r5 + 0x1c)));
    *((u8*)(r4 + 2)) = r0;
    ov45_0222A53C(*((u32*)(r4 + 0x34)));
    // mvn r1, r1
    GF_AssertFail(0);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    Save_PlayerData_GetProfile(*((u32*)r5));
    // str r0, [r4, r1]
    // add r0, #0x3c
    ov49_0225A5EC(r4, *((u32*)r5), 0x77);
    ov49_02258958(0x77);
    // str r0, [r4, r1]
    // add r1, #0xc
    PlayerProfile_GetTrainerGender(*((u32*)(r4 + (0xfa << 2))), (0xfa << 2));
    // str r0, [sp]
    ov49_02258AB4(0x18, r0, *((u32*)(r4 + (0xfa << 2))), 0x77);
    // str r0, [r4, r2]
    // str r0, [sp]
    // add r2, #8
    ov49_0225DF18(*((u32*)(r5 + 4)), *((u32*)(r5 + 8)), *((u32*)(r4 + (0x3e << 4))), 0x77);
    // str r0, [r4, r1]
    ov49_0225CB78(0x77, (0xf9 << 2));
    // str r0, [r4, r1]
    // sub r1, #0xf4
    // add r0, r4, r1
    // add r1, #0x3c
    ov49_0225AAC8(r4, *((u32*)r5), 0x77);
    // add r0, r4, r0
    // add r1, #0x3c
    ov49_0225ACA8((0xc6 << 2), r4, *((u32*)r5), 0x77);
    // add r0, r4, r0
    // add r1, #0x3c
    ov49_0225AD20((0xce << 2), r4, 0x77);
    // add r0, r4, r0
    // add r1, #0x3c
    ov49_0225B214((0x39 << 4), r4, 0x77);
    // add r0, r4, r0
    // add r1, #0x3c
    ov49_0225B0D4((0xf1 << 2), r4, 0x77);
    // add r0, r4, r0
    ov49_0225B308((0xb7 << 2), 0x77);
    // add r0, r4, r1
    // sub r1, #0xc4
    // add r1, r4, r1
    ov49_0225B198((0x3a << 4), 0x77);
    // str r0, [sp]
    // add r0, r4, r0
    // add r2, #0x3c
    ov49_0225B450((0x61 << 2), *((u32*)(r4 + 0x38)), r4, *((u32*)(r4 + (0xfd << 2))));
    ov45_0222A5C0(*((u32*)(r4 + 0x34)));
    ov45_0222AADC();
    // add r0, r4, r0
    // add r1, #0x3c
    // add r2, r4, r2
    // str r5, [sp]
    ov49_0225B9AC((0x61 << 2), r4, (0xb7 << 2), 0x77);
    ov49_0225EEAC(r4, 0x77);
    // str r0, [r4, r1]
    ov49_0225F1A8(r4, (0x3f << 4));
    ov49_0225F1F0(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r3, #8
    ov49_022652E8(*((u32*)(r4 + 0x34)), *((u32*)(r4 + (0xfa << 2))), *((u32*)(r4 + ((0xfa << 2) + 4))), *((u32*)(r4 + (0xfa << 2))));
    // str r0, [r4, r1]
    ov49_02268764(0x77, r4);
    // str r0, [r4, r1]
    Main_SetVBlankIntrCB(ov49_0225A5C8, r4);
    HBlankInterruptDisable();
}





void ov49_02259C90(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02259CB6: ; jump table
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u8*)(r4 + 3)) = 1;
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    *((u8*)(r4 + 3)) = 0;
    // str r0, [r5]
    ov45_0222D844(((*((u8*)(r4 + 4)) << 0x1c) >> 0x1c));
    ov45_0222A1FC(*((u32*)(r4 + 0x34)));
    *((u8*)(r4 + 4)) = (0x10 | (*((u8*)(r4 + 4)) & ~(0xf0)));
    ov45_0222A33C(*((u32*)(r4 + 0x34)), (*((u8*)(r4 + 4)) & ~(0xf0)));
    *((u8*)(r4 + 6)) = 1;
    ov49_0225A038(r4, 8);
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // add r0, r4, r0
    ov49_0225AC74((0xbe << 2));
    // add r0, r4, r0
    ov49_0225B014((0xce << 2), 0, 0);
    // add r0, r4, r0
    ov49_0225B124((0xf1 << 2));
    // add r0, r4, r0
    ov49_0225B200((0x3a << 4));
    sub_020393C8();
    // add r0, r4, r1
    // sub r1, #0xb4
    // add r1, r4, r1
    ov49_0225B284((0x39 << 4));
    sub_020397FC();
    ov45_0222E7CC();
    // add r0, r4, r1
    // sub r1, #0xb4
    // add r1, r4, r1
    ov49_0225B2C0((0x39 << 4), r0);
    ov45_0222A1FC(*((u32*)(r4 + 0x34)));
    // add r0, r4, r1
    // sub r1, #0xb4
    // add r1, r4, r1
    ov49_0225B2F0((0x39 << 4), r0);
    // str r0, [r5]
    // tst r0, r1
    // str r0, [r5]
    // add r0, r4, r0
    ov49_0225AC74((0xbe << 2), *((u32*)(gSystem + 0x48)));
    // add r0, r4, r0
    ov49_0225B014((0xce << 2), 0, 0);
    // add r0, r4, r0
    ov49_0225B124((0xf1 << 2));
    // add r0, r4, r0
    ov49_0225B200((0x3a << 4));
    // add r0, r4, r0
    ov49_0225B388((0xb7 << 2), 1, 0x46);
    // add r0, r4, r0
    ov49_0225AB44((0xbe << 2), r0);
    // str r0, [r5]
    *((u32*)(r4 + 8)) = 0x3c;
    // add r0, r4, r0
    ov49_0225AC5C((0xbe << 2));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) - 1);
    // str r0, [r5]
    // add r0, r4, r0
    ov49_0225B898((0x61 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 3)) = 1;
    // str r0, [r5]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 3)) = 1;
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    *((u8*)(r4 + 3)) = 0;
    ov49_0225A98C(r4);
    ov49_0225AA2C(r4);
}





void ov49_02259EF8(void) {
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, #0x3c
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r1, #0x3c
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, #0x3c
}





void ov49_02259FE8(void) {
}





void ov49_02259FEC(void) {
}





void ov49_02259FF0(void) {
    // ldr r0, [r0, r1]
}





void ov49_02259FF8(void) {
    // ldr r0, [r0, r1]
}





void ov49_0225A000(void) {
    // ldr r0, [r0, r1]
}





void ov49_0225A008(void) {
    // ldr r0, [r0, r1]
}





void ov49_0225A010(void) {
    // ldr r0, [r0, r1]
}





void ov49_0225A018(void) {
    // and r1, r2
}





void ov49_0225A02C(void) {
}





void ov49_0225A030(void) {
}





void ov49_0225A034(void) {
}





void ov49_0225A038(void) {
}





void ov49_0225A03C(void) {
}





void ov49_0225A040(void) {
}





void ov49_0225A044(void) {
}





void ov49_0225A04C(void) {
}





void ov49_0225A064(void) {
    // add r0, r0, r1
}





void ov49_0225A06C(void) {
}





void ov49_0225A084(void) {
    // add r0, r0, r1
    // add r0, #0x20
}





void ov49_0225A08C(void) {
    // add r0, r0, r2
}





void ov49_0225A09C(void) {
    // add r0, r0, r2
}





void ov49_0225A0AC(void) {
    // add r0, r0, r1
}





void ov49_0225A0BC(void) {
    // add r0, r0, r1
}





void ov49_0225A0CC(void) {
    // add r0, r0, r1
}





void ov49_0225A0DC(void) {
    // add r0, r0, r1
}





void ov49_0225A0EC(void) {
    // add r0, r0, r1
}





void ov49_0225A0FC(void) {
    // add r0, r0, r2
}





void ov49_0225A10C(void) {
}





void ov49_0225A120(void) {
}





void ov49_0225A134(void) {
    // add r0, r0, r1
}





void ov49_0225A144(void) {
    // add r0, r0, r3
}





void ov49_0225A154(void) {
    // add r0, r0, r1
}





void ov49_0225A164(void) {
    // add r0, r0, r2
}





void ov49_0225A174(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // add r5, #0x3c
}





void ov49_0225A1A4(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // add r5, #0x3c
}





void ov49_0225A1D4(void) {
    // add r0, r0, r1
}





void ov49_0225A1E4(void) {
    // add r0, r0, r3
}





void ov49_0225A1F4(void) {
    // add r0, r0, r2
}





void ov49_0225A204(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r0, sp, #8
    // str r0, [sp, #8]
    // add r0, r5, r0
    // add r5, #0x3c
}





void ov49_0225A22C(void) {
    // add r0, r0, r1
}





void ov49_0225A23C(void) {
}





void ov49_0225A24C(void) {
}





void ov49_0225A264(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r2, r1
    // add r1, #0x6c
    // add r1, r2, r1
    // add r2, #0x3c
}





void ov49_0225A294(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r2, r1
    // add r1, #0x6c
    // add r1, r2, r1
    // add r2, #0x3c
}





void ov49_0225A2C4(void) {
    // add r0, r0, r1
    ov49_0225AFD8((0xce << 2));
    // mvn r1, r1
    PlaySE(0x000005DC, 1);
}





void ov49_0225A2F8(void) {
    // add r0, r0, r1
}





void ov49_0225A30C(void) {
    // add r0, r0, r3
}





void ov49_0225A31C(void) {
}





void ov49_0225A334(void) {
    // add r0, r5, r0
}





void ov49_0225A37C(void) {
    // add r0, r0, r3
}





void ov49_0225A38C(void) {
    // add r0, r0, r3
}





void ov49_0225A39C(void) {
    // add r0, r0, r3
}





void ov49_0225A3AC(void) {
    // ldr r0, [r0, r3]
    // bx r3
    // nop
    // _0225A3B8: .word BufferJPGreeting
}





void ov49_0225A3BC(void) {
    // ldr r0, [r0, r3]
    // bx r3
    // nop
    // _0225A3C8: .word BufferENGreeting
}





void ov49_0225A3CC(void) {
    // ldr r0, [r0, r3]
    // bx r3
    // nop
    // _0225A3D8: .word BufferFRGreeting
}





void ov49_0225A3DC(void) {
    // ldr r0, [r0, r3]
    // bx r3
    // nop
    // _0225A3E8: .word BufferITGreeting
}





void ov49_0225A3EC(void) {
    // ldr r0, [r0, r3]
    // bx r3
    // nop
    // _0225A3F8: .word BufferDEGreeting
}





void ov49_0225A3FC(void) {
    // ldr r0, [r0, r3]
    // bx r3
    // nop
    // _0225A408: .word BufferSPGreeting
}





void ov49_0225A40C(void) {
    // ldr r0, [r5, r0]
}





void ov49_0225A428(void) {
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
}





void ov49_0225A478(void) {
}





void ov49_0225A490(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // str r0, [sp]
    // add r0, r4, r1
    // add r1, #8
    // add r1, r4, r1
    // add r4, #0x3c
}





void ov49_0225A4D0(void) {
    // add r0, r0, r1
}





void ov49_0225A4E0(void) {
    // add r0, r0, r1
}





void ov49_0225A4F0(void) {
    // add r0, r0, r1
}





void ov49_0225A500(void) {
    // add r0, r0, r1
}





void ov49_0225A510(void) {
    // add r0, r0, r1
}





void ov49_0225A520(void) {
    // ldr r0, [r0, r2]
    // bx r3
    // _0225A52C: .word ov49_02268968
}





void ov49_0225A530(void) {
    // strh r2, [r0, r1]
}





void ov49_0225A53C(void) {
    // add r0, r0, r2
}





void ov49_0225A54C(void) {
    // add r0, r0, r1
}





void ov49_0225A55C(void) {
    // str r2, [r0, r1]
}





void ov49_0225A56C(void) {
    // ldr r0, [r5, r0]
}





void ov49_0225A5AC(void) {
    // ldr r0, [r5, r0]
}





void ov49_0225A5C8(void) {
    // add r4, #0x3c
}





void ov49_0225A5EC(void) {
    // str r1, [sp, #0x14]
    // strh r1, [r0]
    // strh r1, [r0]
    GF_CreateVramTransferManager(0x20, r2);
    GfGfx_SetBanks(ov49_022697CC);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    BG_SetMaskColor(0, 0);
    SetBothScreensModesAndDisable(ov49_02269724);
    BgConfig_Alloc(r6);
    // str r0, [r5]
    // str r0, [sp, #0x18]
    InitBgFromTemplate(*((u32*)r5), ((*((u32*)ov49_02269734) << 0x18) >> 0x18), ov49_0226981C, 0);
    BG_ClearCharDataRange(((*((u32*)r4) << 0x18) >> 0x18), 0x20, 0, r6);
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((*((u32*)r4) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // add r7, #0x1c
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    Save_PlayerData_GetOptionsAddr((r0 + 1));
    Options_GetFrame();
    LoadFontPal0(0, 0xa0, r6);
    LoadFontPal1(0, 0x80, r6);
    // str r0, [sp]
    // str r6, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r5), 1, 0x55, 3);
    // str r4, [sp]
    // str r6, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r5), 1, 1, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    sub_0200EC0C(*((u32*)r5), 1, 0x1f, 2);
    // str r0, [sp]
    // str r6, [sp, #4]
    GfGfxLoader_GXLoadPal(0xd1, 0x5a, 0, 0x40);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r6, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x1f);
    ObjCharTransfer_InitEx(ov49_02269744, 0x10, 0x00100010);
    ObjPlttTransfer_Init(0x18, r6);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    sub_0203A880();
    // add r1, #8
    G2dRenderer_Init(0x18, r5, r6);
    *((u32*)(r5 + 4)) = r0;
    // add r0, #8
    G2dRenderer_SetSubSurfaceCoords(r5, 0, (1 << 0x14));
    Create2DGfxResObjMan(0x18, 0, r6);
    // str r0, [r4, r1]
    sub_02020654(0x18, r6);
    // str r0, [r5, r1]
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    GF_3DVramMan_Create(r6, 0, 2, 0);
    // str r0, [r5, r1]
}





void ov49_0225A7C0(void) {
}





void ov49_0225A7D0(void) {
    GF_DestroyVramTransferManager();
    FreeBgTilemapBuffer(*((u32*)r6), ((*((u32*)ov49_02269734) << 0x18) >> 0x18));
    Heap_Free(*((u32*)r6));
    sub_0202067C(*((u32*)(r6 + (5 << 6))));
    // str r4, [r6, r0]
    // sub r7, #0x10
    Destroy2DGfxResObjMan(*((u32*)(r6 + (5 << 6))));
    SpriteList_Delete(*((u32*)(r6 + 4)));
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    OamManager_Free();
    GF_3DVramMan_Delete(*((u32*)(r6 + (0x51 << 2))));
}





void ov49_0225A840(void) {
}





void ov49_0225A854(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r1, [r0]
    // add r0, #0x58
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetEdgeColorTable(ov49_02269754, (0x20 | *((u16*)0x04000008)), *((u16*)0x04000008), *((u16*)0x04000008));
    G3X_SetFog(0, 0, 0, 0);
    // str r1, [sp]
    G3X_SetClearColor(0x00006B5A, 0, 0x00007FFF, 0x3f);
    // str r1, [r0]
    NNS_G3dGlbLightVector(0, 0xFFFFF805, 0xFFFFF224, 0x6e);
    // add r0, sp, #4
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = (1 << 0xc);
    // add r0, sp, #4
    VEC_Fx16Normalize(r0);
    // add r4, sp, #4
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    NNS_G3dGlbLightVector(1, 0, 2, 4);
    // strh r1, [r0]
    *((u16*)(r4 + 2)) = 0;
    *((u16*)(r4 + 4)) = (1 << 0xc);
    // add r0, sp, #4
    VEC_Fx16Normalize(r4, r4);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r0]
    // ldrsh r3, [r4, r3]
    NNS_G3dGlbLightVector(2, 0, 4);
    NNS_G3dGlbLightColor(2, 0x00007FFF);
    // strh r1, [r0]
    *((u16*)(r4 + 2)) = 0;
    *((u16*)(r4 + 4)) = (1 << 0xc);
    // add r0, sp, #4
    VEC_Fx16Normalize(r4, r4);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    NNS_G3dGlbLightVector(3, 0, 2, 4);
    NNS_G3dGlbLightColor(3, 0x00007FFF);
}





void ov49_0225A98C(void) {
    // add r0, r4, r0
}





void ov49_0225AA2C(void) {
    // add r4, #0x3c
}





void ov49_0225AA70(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r5, [sp]
    // str r0, [sp, #4]
}





void ov49_0225AAC8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
}





void ov49_0225AB14(void) {
}





void ov49_0225AB44(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x10)) << 0x18) >> 0x18));
    RemoveTextPrinter(((*((u32*)(r5 + 0x10)) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0xf);
    String_Copy(*((u32*)(r5 + 0x18)), r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, *((u32*)(r5 + 0x18)), 0);
    *((u32*)(r5 + 0x10)) = r0;
    DrawFrameAndWindow2(r5, 1, 1, 1);
}





void ov49_0225ABA4(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 0x10)) << 0x18) >> 0x18));
    RemoveTextPrinter(((*((u32*)(r5 + 0x10)) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r5, 0xf);
    String_Copy(*((u32*)(r5 + 0x18)), r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, *((u32*)(r5 + 0x18)), 0);
    DrawFrameAndWindow2(r5, 1, 1, 1);
    ScheduleWindowCopyToVram(r5);
}





void ov49_0225AC08(void) {
}





void ov49_0225AC24(void) {
}





void ov49_0225AC38(void) {
}





void ov49_0225AC4C(void) {
    // cmp r0, #0
    // beq _0225AC56
}





void ov49_0225AC5C(void) {
}





void ov49_0225AC74(void) {
}





void ov49_0225ACA8(void) {
}





void ov49_0225ACBC(void) {
}





void ov49_0225ACC4(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp]
}





void ov49_0225AD20(void) {
    NARC_New(0x3c, r2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    AddCharResObjFromOpenNarc(*((u32*)(r4 + (0x13 << 4))), r0, 4, 0);
    *((u32*)(r7 + 0x40)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r4 + (0x4d << 2))), r6, 0xa, 0);
    *((u32*)(r7 + 0x44)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + (0x00001388 >> 4))), r6, 5, 0);
    *((u32*)(r7 + 0x48)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + (0x4f << 2))), r6, 6, 0);
    *((u32*)(r7 + 0x4c)) = r0;
    NARC_Delete(r6);
    sub_0200ADA4(*((u32*)(r7 + 0x40)));
    sub_0200B00C(*((u32*)(r7 + 0x44)));
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r3, #8
    // add r0, #0xc
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x4c
    CreateSpriteResourcesHeader(*((u32*)(r4 + (0x13 << 4))), 0x00001388, 0x00001388, 0x00001388);
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x44]
    // str r5, [sp, #0x48]
    // str r6, [sp, #0x40]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_Create((*((u8*)ov49_022696E8) << 0xc));
    *((u32*)(r5 + 0x50)) = r0;
    Sprite_SetAnimCtrlSeq(r6);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x50)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x50)), 0);
    *((u32*)(r7 + 0x3c)) = 0;
}





void ov49_0225AE4C(void) {
    // ldr r0, [r6, r7]
}





void ov49_0225AEA8(void) {
    // add r0, r0, r2
    // add r2, #8
}





void ov49_0225AEE0(void) {
}





void ov49_0225AEF8(void) {
}





void ov49_0225AF04(void) {
}





void ov49_0225AF08(void) {
    // add r4, #8
}





void ov49_0225AF30(void) {
    GF_AssertFail(*((u32*)(r0 + 0x30)));
    GF_AssertFail((*((u16*)(r4 + 0x12)) << 1));
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, #0x20
    *((u32*)(r5 + 0xc)) = r5;
    // add r3, sp, #0x18
    *((u16*)(r5 + 0x3a)) = *((u16*)(r4 + 0x10));
    *((u32*)(r5 + 4)) = ov49_0225B058;
    // str r0, [sp]
    // add r0, sp, #0x38
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r6), r5, 1, *((u8*)(r4 + 0x18)));
    // add r0, #0x20
    FillWindowPixelBuffer(r5, 0xf);
    // add r0, #0x20
    DrawFrameAndWindow1(r5, 1, 0x55, 3);
    // add r2, sp, #0x18
    // ldr r3, [sp, #0x2c]
    ListMenuInit(r5, r7, *((u16*)(r2 + 0x10)), ((r3 << 0x18) >> 0x18));
    *((u32*)(r5 + 0x30)) = r0;
    // add r5, #0x20
    ScheduleWindowCopyToVram(r5);
}





void ov49_0225AFD8(void) {
    // mvn r0, r0
    ListMenu_ProcessInput(1);
    // mvn r0, r0
    ov49_0225B070(r5);
    PlaySE(0x000005DC);
}





void ov49_0225B014(void) {
    // add r0, #0x20
    // add r0, #0x20
    // add r0, #0x20
}





void ov49_0225B058(void) {
}





void ov49_0225B06C(void) {
}





void ov49_0225B070(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
}





void ov49_0225B0D4(void) {
}





void ov49_0225B0D8(void) {
}





void ov49_0225B0E0(void) {
    // add r0, sp, #0x10
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
}





void ov49_0225B124(void) {
}





void ov49_0225B148(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0, r1, r2);
    ScheduleWindowCopyToVram(r4);
}





void ov49_0225B178(void) {
}





void ov49_0225B198(void) {
    GF_AssertFail(*((u32*)r0));
    ListMenuItems_New(2, r6);
    // str r0, [r5]
    ov49_0225B388(r4, 1, 0x43);
    ListMenuItems_AddItem(*((u32*)r5), r0, 0);
    ov49_0225B388(r4, 1, 0x42);
    ListMenuItems_AddItem(*((u32*)r5), r0, 1);
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u16*)(r5 + 0x14)) = 2;
    *((u32*)(r5 + 4)) = *((u32*)r5);
}





void ov49_0225B200(void) {
}





void ov49_0225B214(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
}





void ov49_0225B244(void) {
}





void ov49_0225B24C(void) {
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0, r1, 0);
    DrawFrameAndWindow1(r4, 1, 0x55, 3);
    ScheduleWindowCopyToVram(r4);
}





void ov49_0225B284(void) {
    // str r0, [sp]
}





void ov49_0225B2C0(void) {
    // str r0, [sp]
}





void ov49_0225B2F0(void) {
}





void ov49_0225B308(void) {
    // str r0, [sp]
    MessageFormat_New_Custom(8, 0x40, r1);
    // ldr r1, [sp]
    // str r0, [r1]
    NewMsgDataFromNarc(1, 0x1b, *((u32*)ov49_02269714), r7);
    *((u32*)(r5 + 4)) = r0;
    String_New((0x1e << 4), r7);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x14)) = r0;
    String_New((0x1e << 4), r7);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x18)) = r0;
}





void ov49_0225B35C(void) {
}





void ov49_0225B388(void) {
    // add r0, r4, r0
}





void ov49_0225B3A8(void) {
}





void ov49_0225B3C8(void) {
    // bx r3
    // _0225B3D4: .word BufferPlayersName
}





void ov49_0225B3D8(void) {
    // bx r3
    // _0225B3E4: .word BufferWiFiPlazaActivityName
}





void ov49_0225B3E8(void) {
    // bx r3
    // _0225B3F4: .word BufferWiFiPlazaEventName
}





void ov49_0225B3F8(void) {
    // bx r3
    // _0225B404: .word BufferWiFiPlazaInstrumentName
}





void ov49_0225B408(void) {
    // bx r3
    // _0225B414: .word BufferCountryName
}





void ov49_0225B418(void) {
}





void ov49_0225B42C(void) {
}





void ov49_0225B438(void) {
}





void ov49_0225B444(void) {
    // str r2, [r0, r1]
}





void ov49_0225B450(void) {
    // ldr r4, [sp, #0x20]
    // str r0, [sp, #4]
    // str r0, [r5, r2]
    // str r4, [sp]
    // ldr r3, [sp, #4]
    // add r0, #8
    // add r0, r5, r2
    // add r2, #0x38
    // strb r1, [r5]
    // strb r0, [r5]
}





void ov49_0225B4E4(void) {
    // add r0, r5, r0
    // add r0, #8
}





void ov49_0225B518(void) {
    // str r0, [sp, #0x38]
    // add r0, #0x3c
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B544: ; jump table
    // strb r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r7, [sp, #8]
    BeginNormalPaletteFade(4, 0, 0, 0x00007FFF);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    ov45_0222A5C0(r6);
    // str r0, [sp]
    // ldr r1, [sp, #0x38]
    // add r2, r5, r2
    ov49_0225B9AC(r4, (0xb7 << 2), r7);
    *((u8*)(r4 + 1)) = 4;
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // strb r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r7, [sp, #8]
    BeginNormalPaletteFade(4, 1, 1, 0x00007FFF);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    // strb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B61C: ; jump table
    // add r0, r4, r2
    // add r2, #0x38
    // ldr r1, [sp, #0x38]
    ov49_0225C8D4((*((u16*)(*((u8*)(r4 + 1)) + 6)) << 0x10), *((u32*)(r4 + (0x45 << 2))));
    ov49_0225B444(r5);
    ov49_02268968(*((u32*)(r5 + (0xf7 << 2))), *((u16*)(r4 + (0x00000153 - 3))), *((u8*)(r4 + (0x00000153 - 1))));
    // strb r1, [r4, r0]
    // sub r0, #0x3f
    // add r0, r4, r0
    ov49_0225CB68(0x00000153, 0);
    // add r0, r4, r2
    // add r2, #0x38
    // ldr r1, [sp, #0x38]
    ov49_0225C8D4(*((u32*)(r4 + (0x45 << 2))), r7);
    ov45_0222A53C(r6);
    ov45_0222ADD8(r6, r0);
    ov45_0222AE54(r6);
    ov45_0222A53C(r6);
    ov45_0222ADA8(r6, r0);
    // add r1, sp, #0x4c
    // add r2, sp, #0x48
    ov45_0222AE08();
    // strb r1, [r4, r0]
    // ldr r2, [sp, #0x4c]
    // strh r2, [r4, r1]
    // ldr r1, [sp, #0x48]
    // strb r1, [r4, r0]
    // ldr r1, [sp, #0x3c]
    // add r1, #0x3c
    // str r1, [sp, #0x3c]
    // add r0, #8
    // add r1, r5, r1
    ov49_0225BBCC(r4, (0x00000153 - 3));
    // strb r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r7, [sp, #8]
    BeginNormalPaletteFade(4, 1, 0, 0);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B71C: ; jump table
    // ldr r1, [sp, #0x38]
    ov49_0225BA20(r4);
    // ldr r2, [sp, #0x38]
    // add r1, r5, r1
    ov49_0225B99C(r4, (0xc6 << 2));
    // strb r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B75A: ; jump table
    ov45_0222A5C0(r6);
    // str r0, [sp]
    // ldr r1, [sp, #0x38]
    // add r2, r5, r2
    ov49_0225B9AC(r4, (0xb7 << 2), r7);
    ov45_0222A5C0(r6);
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    ov45_0222A53C(r6);
    // ldr r1, [sp, #0x24]
    ov45_0222A5C0(r6);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x2c]
    ov45_0222A578(r6);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x2c]
    ov45_0222AB28(r6, *((u8*)(r4 + 3)));
    // str r0, [sp, #0x34]
    ov45_0222AB48(r6, *((u8*)(r4 + 3)));
    // str r0, [sp, #0x30]
    ov45_0222AB58(r6, *((u8*)(r4 + 3)));
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x2c]
    // ldr r3, [sp, #0x3c]
    // str r1, [sp]
    // ldr r1, [sp, #0x20]
    // str r7, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x38]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x34]
    // add r3, r5, r3
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x30]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, r5, r1
    ov49_0225B944(r4, (0xc6 << 2));
    ov45_0222A53C(r6);
    ov45_0222ADA8(r6, r0);
    // mvn r1, r1
    GF_AssertFail(0);
    // add r1, sp, #0x44
    // add r2, sp, #0x40
    ov45_0222AE08(0);
    // ldr r1, [sp, #0x38]
    // ldr r3, [sp, #0x40]
    ov49_0225B9F0(r4, r7);
    *((u8*)(r4 + 2)) = 0;
    // strb r0, [r4]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r7, [sp, #8]
    BeginNormalPaletteFade(4, 1, 1, 0);
    // add r0, #8
    // add r1, r5, r1
    ov49_0225BBCC(r4, (0xc6 << 2));
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    // strb r0, [r4]
}





void ov49_0225B898(void) {
    // ldrb r0, [r0]
}





void ov49_0225B89C(void) {
}





void ov49_0225B8A8(void) {
    // str r4, [sp]
    // add r0, #8
}





void ov49_0225B8E0(void) {
}





void ov49_0225B8EC(void) {
}





void ov49_0225B8F8(void) {
}





void ov49_0225B8FC(void) {
    // cmp r1, #2
    // bne _0225B906
    // cmp r0, #2
    // bne _0225B910
}





void ov49_0225B914(void) {
    // cmp r1, #0
    // bne _0225B924
    // cmp r0, #2
    // bne _0225B924
}





void ov49_0225B928(void) {
}





void ov49_0225B934(void) {
    // cmp r0, #0
    // beq _0225B93E
}





void ov49_0225B944(void) {
    // ldr r0, [sp, #0x40]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x48]
    // add r2, #8
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x5c]
    // str r0, [sp, #0x24]
}





void ov49_0225B99C(void) {
}





void ov49_0225B9AC(void) {
    // add r0, #0xfd
    // sub r0, #0x38
    // str r1, [sp]
    // ldr r3, [sp, #0x20]
    // add r0, r5, r0
    // str r6, [sp, #4]
}





void ov49_0225B9F0(void) {
    // add r0, r5, r3
    // str r4, [sp]
    // add r3, #0x38
}





void ov49_0225BA20(void) {
}





void ov49_0225BA34(void) {
    // strh r1, [r0, r2]
}





void ov49_0225BA40(void) {
    // strh r2, [r1, r0]
    // strh r3, [r1, r0]
}





void ov49_0225BA5C(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r0, #0xa
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r1 + 0x00000156)), *((u16*)(r1 + (0x00000156 - 2))), 4, 0);
    // add r2, #0xb6
    LoadFontPal0(4, 0xa0, *((u16*)(r4 + 0xa0)));
    sub_020776B4();
    sub_02077690();
    // str r0, [sp]
    // add r0, #0xf6
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(r6, r0, 4, (0x16 << 4));
    SysTask_Destroy(r5);
}





void ov49_0225BABC(void) {
    // ldr r4, [sp, #0x20]
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
}





void ov49_0225BB10(void) {
}





void ov49_0225BB14(void) {
    // ldr r0, [sp, #0x2c]
    // str r0, [sp]
    // add r3, sp, #0xc
    // ldr r4, [sp, #0x28]
    // ldr r2, [sp, #0xc]
    // add r2, #0xc
    // add r3, r3, r4
    // strh r3, [r2]
    // ldr r2, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
}





void ov49_0225BB84(void) {
    AddWindow(*((u32*)r1), (r0 + 4), ov49_022697F4);
    // add r4, #8
    // add r5, #0x10
}





void ov49_0225BBA8(void) {
    // add r4, #0x10
}





void ov49_0225BBCC(void) {
}





void ov49_0225BBD0(void) {
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // ldr r4, [sp, #0x28]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    ov49_0225B438(r4);
    // ldr r0, [sp, #0x38]
    ov45_0222A9CC();
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x34]
    ov49_0225BA40(r6, 0x56);
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x34]
    ov49_0225BA40(r6, 0x58);
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x34]
    ov49_0225BA40(r6, 0x57);
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x34]
    ov49_0225BA40(r6, 0x58);
    BgFillTilemapBufferAndSchedule(*((u32*)r6), 4, 0);
    BgFillTilemapBufferAndSchedule(*((u32*)r6), 5, 0);
    BgFillTilemapBufferAndSchedule(*((u32*)r6), 6, 0);
    ov49_0225C3C0(r5);
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // str r0, [sp, #4]
    ov49_0225BB14(r6, 0x5c, 4);
    // ldr r0, [sp, #0x34]
    PlayerProfile_New();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x34]
    ov45_0222A844();
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r7, [sp, #8]
    ov49_0225C3DC(r5, r4, 0, 0x2c);
    // ldr r0, [sp, #0x10]
    PlayerProfile_GetTrainerID_VisibleHalf();
    // str r0, [sp]
    ov49_0225B3A8(r4, r0, 5, 0);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C414(r5, r4, 0, 0x31);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    ov49_0225C3DC(r5, r4, 0, 0x2d);
    // ldr r2, [sp, #0x10]
    ov49_0225C470(r5, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C414(r5, r4, 0, 0x32);
    ov49_0225C460(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    ov49_0225C3DC(r5, r4, 1, 0x2e);
    // ldr r0, [sp, #0x38]
    ov45_0222AA84();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C3DC(r5, r4, 1, 0x37);
    // ldr r2, [sp, #0x38]
    ov49_0225C480(r5, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C3DC(r5, r4, 1, 0x33);
    ov49_0225C460(r5, 1);
    // ldr r0, [sp, #0x44]
    // str r0, [r5]
    // ldr r2, [sp, #0x10]
    ov49_0225C470(r5, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    ov49_0225C3DC(r5, r4, 4, 0x38);
    // ldr r2, [sp, #0x48]
    ov49_0225C4B0(r5, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C3DC(r5, r4, 4, 0x3b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C3DC(r5, r4, 4, 0x3c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C3DC(r5, r4, 4, 0x3d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225C3DC(r5, r4, 4, 0x3e);
    ov49_0225C460(r5, 4);
    // str r1, [r5]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r7, [sp, #8]
    ov49_0225C3DC(r5, r4, 4, 0x30);
    ov49_0225C460(r5, 4);
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #4]
    ov49_0225C4CC(r5, r6);
    // ldr r0, [sp, #0x38]
    ov45_0222AAC8();
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // ldr r2, [sp, #0x30]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x34]
    ov49_0225BFF0(r5, r6);
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x38]
    ov45_0222A9CC();
    // ldr r0, [sp, #0x38]
    ov45_0222AA5C(0);
    // ldr r2, [sp, #0x30]
    // str r0, [sp]
    // ldr r3, [sp, #0x34]
    ov49_0225C180(r5, r6);
    // ldr r0, [sp, #0x38]
    // ldr r3, [sp, #0x34]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    ov49_0225BEA0(r5, r6);
    // ldr r0, [sp, #0x10]
    Heap_Free();
}





void ov49_0225BEA0(void) {
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x24]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x24]
    ov45_0222AAEC(ov49_022696F8);
    ov45_0222D7C0(((r0 << 0x10) >> 0x10));
    sub_020776B4((r0 << 0x10));
    // str r0, [sp, #0x28]
    sub_02077678(r7);
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x1c]
    GfGfxLoader_LoadFromNarc(1, r0, 1);
    // add r1, sp, #0x30
    // str r0, [sp, #0x2c]
    NNS_G2dGetUnpackedCharacterData();
    // ldr r0, [sp, #0x20]
    // add r3, #0xfa
    // str r0, [sp]
    // ldr r2, [sp, #0x30]
    BG_LoadCharTilesData(*((u32*)r5), 6, *((u32*)(r2 + 0x14)), 6);
    // ldr r0, [sp, #0x2c]
    Heap_Free();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r5), 6, 0x1a, ((r4 << 0x18) >> 0x18));
    sub_0207769C(r7);
    // add r0, #0xb
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 6, 0x1a, ((r4 << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 6);
    // ldr r0, [sp, #0x20]
    // add r6, #0x10
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
}





void ov49_0225BF80(void) {
    // str r0, [r5]
}





void ov49_0225BFC4(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
}





void ov49_0225BFEC(void) {
}





void ov49_0225BFF0(void) {
    // ldr r0, [sp, #0x90]
    // str r2, [sp, #0x2c]
    // ldr r0, [sp, #0x90]
    // ldr r0, [sp, #0x90]
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    // str r6, [sp, #8]
    // add r1, #0xcc
    // add r2, r7, r2
    // ldr r1, [sp, #0x2c]
    // add r2, #0x3d
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0xd0
    // ldr r1, [sp, #0x2c]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    // str r6, [sp, #8]
    // add r1, #0xd4
    // add r2, r7, r2
    // ldr r1, [sp, #0x2c]
    // add r2, #0x3c
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    // str r6, [sp, #8]
    // add r1, #0xd8
    // add r2, r7, r2
    // ldr r1, [sp, #0x2c]
    // add r2, #0x3b
    // add r2, sp, #0x38
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r1, [sp]
    // sub r2, #0x65
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xcc
    // str r2, [sp, #0x14]
    // add r2, #0xd0
    // str r2, [sp, #0x18]
    // add r2, #0xd4
    // str r2, [sp, #0x1c]
    // add r2, #0xd8
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x58
    // str r0, [sp, #0x38]
    // add r0, sp, #0x58
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x38
    // str r6, [sp, #0x54]
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp, #0x94]
}





void ov49_0225C148(void) {
    // ldr r0, [r4, r7]
}





void ov49_0225C180(void) {
    // str r3, [sp, #0x2c]
    // ldr r4, [sp, #0xa8]
    GF_AssertFail(*((u32*)(r0 + 0x68)));
    // str r2, [sp, #0x34]
    // str r2, [sp, #0x30]
    // add r1, #8
    // ldr r0, [sp, #0x34]
    // add r2, sp, #0x7c
    sub_02070D84((0 + 1), 2, *((u16*)(ov49_0226988C + 4)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // add r1, #0xcb
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x7c]
    // ldr r2, [sp, #0x80]
    AddCharResObjFromNarc(*((u32*)(r5 + 0x65)), 0x65, 0);
    *((u32*)(r6 + 0x6c)) = r0;
    sub_0200ADA4();
    GF_AssertFail();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // add r1, #0xcf
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x7c]
    // ldr r2, [sp, #0x84]
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x65)), 0x65, 0);
    *((u32*)(r6 + 0x70)) = r0;
    GF2DGfxResObj_GetPlttDataPtr();
    ov49_0225C368();
    sub_0200B00C(*((u32*)(r6 + 0x70)));
    GF_AssertFail();
    sub_0200A740(*((u32*)(r6 + 0x70)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // add r1, #0xd3
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x7c]
    // ldr r2, [sp, #0x88]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x65)), 0x65, 0);
    *((u32*)(r6 + 0x74)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // add r1, #0xd7
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x7c]
    // ldr r2, [sp, #0x8c]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x65)), 0x65, 0);
    *((u32*)(r6 + 0x78)) = r0;
    // add r2, sp, #0x38
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r1, [sp]
    // sub r2, #0x66
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r2, #0xcb
    // str r2, [sp, #0x14]
    // add r2, #0xcf
    // str r2, [sp, #0x18]
    // add r2, #0xd3
    // str r2, [sp, #0x1c]
    // add r2, #0xd7
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x58
    CreateSpriteResourcesHeader(0, 0x65, 0x65, 0x65);
    // str r0, [sp, #0x38]
    // add r0, sp, #0x58
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x30]
    _fflt((2 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #0x40]
    _fflt((r7 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r7 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r0, r1
    // str r0, [sp, #0x44]
    // add r0, sp, #0x38
    Sprite_Create((1 << 0x14));
    *((u32*)(r6 + 0x68)) = r0;
}





void ov49_0225C328(void) {
    // ldr r0, [r4, r7]
}





void ov49_0225C368(void) {
    // asr r7, r6, #5
    // and r1, r0
    // and r0, r7
    // asr r7, r6, #0xa
    // and r6, r7
    // add r0, r6, r1
    // add r0, r7, r0
    // asr r6, r0, #8
    // asr r1, r0, #8
    // asr r0, r0, #8
    // asr r6, r7, #8
    // strh r0, [r4]
}





void ov49_0225C3C0(void) {
}





void ov49_0225C3DC(void) {
    // add r3, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
}





void ov49_0225C414(void) {
    // add r1, sp, #0x10
    // sub r3, r1, r0
    // bpl _0225C43C
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // add r0, r2, r0
    // str r1, [sp, #0xc]
}





void ov49_0225C460(void) {
    // add r0, r2, r0
}





void ov49_0225C470(void) {
    // bx r3
    // nop
    // _0225C47C: .word ov49_0225B3C8
}





void ov49_0225C480(void) {
}





void ov49_0225C4B0(void) {
}





void ov49_0225C4CC(void) {
    // ldr r0, [sp, #0xb0]
    // str r0, [sp, #0xb0]
    // str r2, [sp, #0x2c]
    // str r3, [sp, #0x30]
    NARC_New(0xd7, r3);
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0xb4]
    ov45_0222A99C();
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0xb4]
    ov45_0222A9CC();
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x4c]
    // add r1, #0xac
    // str r0, [r1]
    // add r1, #0xec
    // str r0, [r1]
    // add r1, #0xfc
    // str r0, [r1]
    // ldr r0, [sp, #0x4c]
    // add r1, #0xac
    // str r0, [r1]
    // add r1, #0xec
    // str r0, [r1]
    // add r1, #0xfc
    // str r0, [r1]
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // add r0, #0x96
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // ldr r2, [sp, #0x40]
    // ldr r1, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + (0x4d << 2))), r7, *((u16*)(r2 + 2)), 0);
    // add r1, #0xac
    // str r0, [r1]
    // add r0, #0xac
    sub_0200B00C(*((u32*)r4), r4);
    GF_AssertFail();
    // add r0, #0xac
    sub_0200A740(*((u32*)r4));
    // add r0, #0x96
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x3c]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x34]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + (0x4e << 2))), *((u16*)r2), 0);
    // add r1, #0xec
    // str r0, [r1]
    // add r0, #0x96
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x34]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + (0x4f << 2))), r4, *((u16*)r2), 0);
    // add r1, #0xfc
    // str r0, [r1]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0xb0]
    ov45_0222A92C(ov49_0226991C, 0);
    // ldr r0, [sp, #0xb0]
    ov45_0222A964(r6);
    // add r1, #0xbc
    // str r0, [r1]
    *((u32*)(r7 + 0x7c)) = 0;
    // ldr r2, [sp, #0x44]
    // ldr r3, [sp, #0x4c]
    ov49_0225C828(r4, r7);
    // ldr r1, [sp, #0x2c]
    // ldr r1, [sp, #0x50]
    // add r0, #0x96
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + (0x13 << 4))), *((u16*)(r0 + 2)), 0);
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xbc
    sub_0200ADA4(*((u32*)r7), r7);
    GF_AssertFail();
    // add r0, #0xbc
    sub_0200A740(*((u32*)r7));
    // mvn r0, r0
    // add r2, #0x96
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, #0x96
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x54
    CreateSpriteResourcesHeader(0, r6, *((u8*)r4), *((u8*)r4));
    // ldr r2, [sp, #0x48]
    // str r0, [sp, #0x78]
    // add r0, sp, #0x54
    // str r0, [sp, #0x7c]
    // str r0, [sp, #0x8c]
    // str r0, [sp, #0x90]
    // ldr r0, [sp, #0x30]
    // add r3, sp, #0x80
    // str r0, [sp, #0x94]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldrsh r0, [r4, r0]
    _fflt((4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x80]
    // add r0, r1, r0
    // str r0, [sp, #0x80]
    // ldrsh r0, [r4, r0]
    _fflt((6 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x84]
    // add r0, r1, r0
    // str r0, [sp, #0x84]
    // add r0, sp, #0x78
    Sprite_Create();
    *((u32*)(r7 + 0x7c)) = r0;
    Sprite_SetPalOffsetRespectVramOffset(*((u8*)(r4 + 1)));
    // ldr r0, [sp, #0x48]
    // add r0, #0xc
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x50]
    NARC_Delete();
}





void ov49_0225C78C(void) {
    // add r0, #0xbc
    // add r0, #0xbc
    // add r1, #0xbc
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xac
    // add r1, #0xac
    // add r1, #0xec
    // add r1, #0xfc
    // add r0, #0xac
    // str r7, [r0]
}





void ov49_0225C828(void) {
    // add r0, r1, r0
    // add r0, r1, r0
}





void ov49_0225C844(void) {
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // str r2, [sp, #8]
    // add r1, #0xc
    AddWindow(*((u32*)r1), ov49_0226970C);
    // ldr r4, [sp, #4]
    // ldr r5, [sp, #4]
    // add r4, #0x2c
    // ldr r0, [sp, #8]
    // add r1, #0x38
    // str r7, [sp]
    GfGfxLoader_GetScrnDataFromOpenNarc(0, 0, r4);
    *((u32*)(r5 + 0x20)) = r0;
    // ldr r3, [sp, #4]
    // str r7, [sp]
    TouchHitboxController_Create(ov49_022696F4, 1, ov49_0225CB50);
    // ldr r1, [sp, #4]
    *((u32*)(r1 + 0x1c)) = r0;
    // ldr r0, [sp, #4]
    *((u16*)(r0 + 6)) = 1;
}





void ov49_0225C8A8(void) {
    // add r0, #0xc
}





void ov49_0225C8D4(void) {
    // str r0, [sp, #4]
    // ldrsh r0, [r5, r2]
    // str r4, [sp]
    // str r4, [sp]
    // str r4, [sp]
    // str r0, [sp, #4]
    // strh r0, [r5]
    // ldr r0, [sp, #4]
}





void ov49_0225C970(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r4, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r7, [sp, #0x30]
    // str r3, [sp, #0x14]
    // str r4, [sp, #0xc]
    // str r2, [sp, #0x10]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r7, 0x37, *((u32*)r1), 4);
    *((u16*)(r5 + 8)) = 0;
    // ldr r0, [sp, #0x14]
    ov45_0222AAC8(0);
    *((u16*)(r5 + 0xa)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r7, *((u16*)(r5 + 0xa)), *((u32*)r6), 6);
    // str r0, [sp]
    // str r4, [sp, #4]
    // add r2, #0x1b
    ov49_0225BB14(r6, r7, *((u16*)(r5 + 0xa)), 6);
    // ldr r0, [sp, #0x10]
    ov49_0225B388(1, 0x3f);
    // str r0, [sp, #0x18]
    // add r0, #0xc
    FillWindowPixelBuffer(r5, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x18]
    // str r1, [sp, #0xc]
    // add r0, #0xc
    AddTextPrinterParameterizedWithColor(r5, 0, 0);
    // str r4, [sp]
    ov49_0225CAD4(r5, r6, 0, r7);
    ov49_0225CAD4(r5, r6, 2, r7);
}





void ov49_0225CA30(void) {
    // str r3, [sp, #0x10]
    // ldr r4, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, #0x5d
    // str r4, [sp]
    // ldr r3, [sp, #0x10]
    // ldr r3, [sp, #0x10]
}





void ov49_0225CAA8(void) {
}





void ov49_0225CAD4(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r1, r5, r1
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)r1), 5, 0, 3);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 5);
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #4]
    // add r2, r2, r3
    // add r2, #0x60
    ov49_0225BB14(r4, r7, *((u8*)(ov49_022696EC + r6)), 6);
    // ldrsb r3, [r3, r6]
    ScheduleSetBgPosText(*((u32*)r4), 6, 3, ov49_022696F0);
}





void ov49_0225CB50(void) {
}





void ov49_0225CB68(void) {
}





void ov49_0225CB70(void) {
    // ldr r0, [r0, r1]
}





void ov49_0225CB78(void) {
    Heap_Alloc(0x14);
    // strb r0, [r2]
    Camera_New(r5, (0x14 - 1), (r0 + 1));
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #8
    Camera_Init_FromTargetDistanceAndAngle(r4, 0x0029AEC1, ov49_02269A6C, 0x000005C1);
    Camera_SetStaticPtr(*((u32*)r4));
    Camera_SetPerspectiveClippingPlane((0x96 << 0xc), (0xe1 << 0xe), *((u32*)r4));
}





void ov49_0225CBDC(void) {
}





void ov49_0225CBF4(void) {
    // add r1, #8
    // add r1, r1, r0
    // sub r0, r1, r0
}





void ov49_0225CC20(void) {
}





void ov49_0225CC28(void) {
    // add r1, r1, r4
    // sub r1, r3, r1
}





void ov49_0225CC40(void) {
}





void ov49_0225CC44(void) {
}





void ov49_0225CC4C(void) {
    // str r2, [sp]
    Heap_Alloc(r2, 0x000004A4);
    memset(0, 0x000004A4);
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    Heap_Alloc((0xb4 * r5));
    // str r0, [r4, r1]
    // ldr r0, [sp]
    Heap_Alloc(0xe4, (r6 * 0xe4));
    // str r0, [r4, r1]
    // ldr r2, [sp, #4]
    memset(*((u32*)(r4 + ((0x12 << 4) - 4))), 0);
    memset(*((u32*)(r4 + (0x12 << 4))), 0, r7);
    // strb r5, [r4, r0]
    // strb r6, [r4, r0]
}





void ov49_0225CCC0(void) {
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov49_0225CCF0(void) {
    // add r1, r5, r1
    ov49_0225D7B8((0x4b << 2));
    // add r1, r5, r7
    // add r0, r0, r6
    ov49_0225DA70(*((u32*)(r5 + (0x47 << 2))));
    // add r6, #0xb4
    // add r1, r1, r4
    ov49_0225DD68(r5, *((u32*)(r5 + (0x12 << 4))));
    // add r4, #0xe4
}





void ov49_0225CD58(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + (0x12 << 4))));
    GF_AssertFail(*((u32*)(r5 + (0x47 << 2))));
    // add r1, r5, r1
    ov49_0225D804(r5, (0x4b << 2));
    // add r0, r5, r7
    // add r1, r1, r6
    ov49_0225DD0C(*((u8*)(r5 + 0x00000125)), *((u32*)(r5 + (0x12 << 4))));
    // add r6, #0xe4
    // add r1, r5, r7
    // add r0, r0, r6
    ov49_0225DAFC(*((u32*)(r5 + (0x47 << 2))));
    // add r6, #0xb4
}





void ov49_0225CDE8(void) {
}





void ov49_0225CDEC(void) {
    // strb r2, [r5, r0]
    // strb r1, [r5, r0]
    // ldr r4, [sp, #0x18]
    ov49_0225D4FC(r1, r2, r3);
    NARC_New(0xcb, r7);
    // add r0, r5, r0
    HeapExp_FndInitAllocator(0x00000494, r4, 4);
    // add r0, r5, r0
    // str r0, [sp]
    // add r0, r5, r0
    ov49_0225D5FC((0x4b << 2), r7, r6, r4);
    // add r0, r5, r0
    // add r2, r5, r2
    // str r4, [sp]
    ov49_0225DC2C((0xa7 << 2), r7, 0x00000494, r6);
    // add r0, r5, r0
    // add r2, r5, r2
    // str r4, [sp]
    ov49_0225D854((0x71 << 2), r7, 0x00000494, r6);
    NARC_Delete(r7);
    ov49_0225D520(r6);
    // add r1, r5, r1
    ov49_0225D6F0(r5, (0x4b << 2));
    // str r1, [r5, r0]
}





void ov49_0225CE88(void) {
    // add r1, r4, r1
    ov49_0225D76C((0x4b << 2));
    // add r0, r4, r0
    // add r1, r4, r1
    ov49_0225D6AC((0x4b << 2), 0x00000494);
    // add r0, r4, r0
    // add r1, r4, r1
    ov49_0225DCBC((0xa7 << 2), 0x00000494);
    // add r0, r4, r0
    // add r1, r4, r1
    ov49_0225D9D0((0x71 << 2), 0x00000494);
    // str r1, [r4, r0]
}





void ov49_0225CED0(void) {
    // sub r0, #0xbc
    // sub r0, #0xbc
    // str r3, [r1, r0]
    // sub r2, #0x24
    // add r1, r1, r2
}





void ov49_0225CEFC(void) {
    // sub r0, #0xbc
    // sub r1, #0x24
    // add r1, r4, r1
    // str r1, [r4, r0]
}





void ov49_0225CF28(void) {
    // str r3, [sp]
    // add r2, r7, r1
    // add r1, r2, r1
    // ldr r1, [sp]
    // add r1, sp, #4
    // str r0, [r1]
    // strb r1, [r4]
    // add r0, #0x84
    // str r1, [r0]
}





void ov49_0225CF94(void) {
}





void ov49_0225CFA8(void) {
    // ldmia r4!, {r0, r1}
    // add r2, #0x9c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x9c
    // add r1, #0xa8
    // add r1, r2, r1
    // add r2, #0xa0
    // add r2, #0xac
    // add r2, r4, r2
    // add r4, #0xa4
    // add r3, #0xb0
    // add r3, r4, r3
}





void ov49_0225CFEC(void) {
    // ldmia r4!, {r0, r1}
    // add r2, #0xa8
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x9c
    // add r1, #0xa8
    // add r1, r2, r1
    // add r2, #0xa0
    // add r2, #0xac
    // add r2, r4, r2
    // add r4, #0xa4
    // add r3, #0xb0
    // add r3, r4, r3
}





void ov49_0225D030(void) {
}





void ov49_0225D040(void) {
}





void ov49_0225D04C(void) {
    // add r1, #0x80
    // add r0, #0x80
    // str r1, [r0]
}





void ov49_0225D064(void) {
    // add r1, #0x88
    // add r0, #0x88
    // str r1, [r0]
}





void ov49_0225D07C(void) {
}





void ov49_0225D088(void) {
    // add r0, #0x80
}





void ov49_0225D090(void) {
    // add r0, #0x88
}





void ov49_0225D098(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    ov49_0225DBF8();
    // add r2, r7, r1
    // ldr r1, [sp]
    // str r0, [sp, #0xc]
    // add r1, r2, r1
    sub_020181B0((r0 + 4), ((0xa7 << 2) << 4));
    // ldr r5, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r7, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // add r4, r7, r1
    // add r5, #0x7c
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r1, r3, r1
    // add r3, r7, r3
    sub_020180E8(r5, (0xc * r0), *((u32*)(r4 + (0xef << 2))), 0x00000494);
    // add r5, #0x14
    // ldr r0, [sp, #0xc]
    sub_020182A0((r0 + 4), 1);
    // ldr r0, [sp, #4]
    // add r1, sp, #0x18
    // strh r0, [r1]
    // ldr r0, [sp, #8]
    // mov r3, sp
    *((u16*)(r1 + 2)) = ((r0 << 4) << 4);
    // ldr r0, [sp, #0xc]
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 2));
    ov49_0225D1C4(((r0 << 4) << 4), *((u32*)(r3 - 4)), *((u16*)r1), (r3 - 4));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp]
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = r1;
    // add r0, #0xcc
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, #0xdc
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, #0xe0
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, #0xe1
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, #0xe2
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
}





void ov49_0225D160(void) {
    // str r1, [sp]
    sub_020182A0((r1 + 4), 0);
    // ldr r5, [sp]
    // add r0, r6, r0
    // add r5, #0x7c
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r6, r0
    // add r2, r4, r0
    // ldr r1, [sp, #4]
    // add r1, r1, r3
    // add r3, r6, r3
    sub_020180E8(r5, *((u16*)((0xa7 << 2) + 2)), *((u32*)(r2 + (0xef << 2))), 0x00000494);
    // add r5, #0x14
    // ldr r0, [sp]
    // strh r1, [r0]
}





void ov49_0225D1C0(void) {
}





void ov49_0225D1C4(void) {
    // add r0, sp, #0x1c
    // add r1, sp, #0
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
}





void ov49_0225D1EC(void) {
    // add r1, sp, #4
    // add r2, sp, #8
    // add r3, sp, #0xc
    // add r0, sp, #4
    // add r1, sp, #0
    // add r0, sp, #0
}





void ov49_0225D214(void) {
}





void ov49_0225D224(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r1, r0, r6
    // str r0, [sp, #4]
    // add r0, #0xb8
    // str r0, [sp, #4]
    // add r2, #0x7c
    // add r1, r2, r1
    // ldr r0, [sp, #4]
    // strb r1, [r0, r5]
    // add r0, r4, r5
    // add r0, #0xbc
    // strb r7, [r0]
    // add r0, r4, r6
    // ldr r1, [sp, #0x20]
    // add r0, #0xd0
    // str r1, [r0]
    // str r0, [sp, #8]
    // add r0, #0xcd
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // strb r0, [r1, r5]
    // add r1, r7, r7
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225D2B2: ; jump table
    // add r1, r4, r6
    // add r1, #0xc0
    // str r0, [r1]
    // add r1, #0x7c
    // add r0, r1, r0
    // add r1, r4, r6
    // add r1, #0xc0
    // str r0, [r1]
    // add r1, r4, r6
    // add r1, #0xc0
    // str r0, [r1]
    // add r1, #0xcc
    // ldr r0, [sp, #8]
    // strb r1, [r0, r5]
    // add r1, r4, r6
    // add r1, #0xc0
    // str r0, [r1]
    // add r1, #0xcc
    // ldr r0, [sp, #8]
    // strb r1, [r0, r5]
    // add r1, #0x7c
    // add r0, r1, r0
    // add r1, r4, r6
    // add r1, #0xc0
}





void ov49_0225D328(void) {
    // add r1, r6, r0
    // add r1, r1, r0
    // add r6, #0xb8
    // add r2, #0x7c
    // add r1, r2, r1
    // add r1, r5, r2
    // strb r0, [r6, r4]
    // add r1, #0xc0
    // str r0, [r1]
    // add r1, r5, r4
    // add r1, #0xbc
    // strb r0, [r1]
    // add r1, r5, r4
    // add r1, #0xcd
    // strb r0, [r1]
    // add r1, r5, r2
    // add r1, #0xd0
    // str r0, [r1]
}





void ov49_0225D394(void) {
}





void ov49_0225D3BC(void) {
    // add r1, r6, r0
    // add r1, r1, r0
    // add r0, r5, r4
    // add r0, #0xb8
}





void ov49_0225D3F8(void) {
    // add r1, r6, r0
    // add r1, r1, r0
    // add r0, r5, r4
    // add r0, #0xbc
    // add r2, #0xc0
    // str r7, [r2, r1]
    // add r5, #0x7c
    // add r0, r5, r0
}





void ov49_0225D450(void) {
    // add r0, r5, r4
    // add r0, #0xb8
}





void ov49_0225D470(void) {
    // add r0, r5, r0
    // add r0, #0xc0
}





void ov49_0225D494(void) {
}





void ov49_0225D4A0(void) {
    // add r1, r5, r0
}





void ov49_0225D4C8(void) {
    // add r0, #0xdc
    // str r1, [r0]
}





void ov49_0225D4D0(void) {
    // add r3, #0xe0
    // strb r4, [r3]
    // add r3, #0xe1
    // strb r1, [r3]
    // add r0, #0xe2
    // strb r2, [r0]
}





void ov49_0225D4E8(void) {
    // add r0, #0xe0
    // strb r1, [r0]
}





void ov49_0225D4F0(void) {
}





void ov49_0225D4FC(void) {
    // add r1, r1, r2
    // add r4, r0, r1
    // str r0, [sp]
}





void ov49_0225D520(void) {
}





void ov49_0225D528(void) {
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
}





void ov49_0225D574(void) {
}





void ov49_0225D57C(void) {
    // add r0, r0, r4
    // str r0, [r5]
    // str r1, [r5]
}





void ov49_0225D5A0(void) {
    // add r1, r1, r4
    // str r1, [r5]
    // sub r0, r0, r1
    // str r0, [r5]
}





void ov49_0225D5C8(void) {
}





void ov49_0225D5E4(void) {
    // sub r1, r1, r2
    // str r1, [r0]
    // str r1, [r0]
}





void ov49_0225D5FC(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // ldr r5, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    // add r5, #0x10
    // ldr r6, [sp, #8]
    // ldr r4, [sp, #0x10]
    // str r0, [sp, #0x18]
    // add r0, #0x10
    // add r5, #0x20
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r0, #0xc
    // add r1, #0x84
    // str r0, [r1]
    // add r1, #0x84
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0xc]
    // add r5, #0x14
}





void ov49_0225D6AC(void) {
    // str r1, [sp]
    // add r5, #0x20
    // add r0, #0x84
    // ldr r1, [sp]
    // add r1, #0x84
    // str r0, [r1]
    // add r5, #0x14
    // add r6, #0x10
}





void ov49_0225D6F0(void) {
    // str r0, [r6]
    // str r0, [sp]
    // ldr r0, [sp]
    // add r4, #0x10
    // add r5, #0x78
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r0, #0x7c
    // str r0, [sp, #8]
    // add r4, #0x20
    // str r0, [sp, #4]
    // add r0, #0x84
    // add r1, #0xf4
    // str r0, [r1]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r4, #0x14
}





void ov49_0225D76C(void) {
    // str r0, [sp]
    // add r0, #0x7c
    // add r5, #0x20
    // str r0, [sp]
    // add r0, #0xf4
    // add r1, #0xf4
    // str r0, [r1]
    // ldr r0, [sp]
    // add r5, #0x14
    // str r0, [r7]
}





void ov49_0225D7B8(void) {
    // str r0, [sp]
    // add r4, #0x20
    // add r6, r5, r0
    // add r0, #0xf4
    // ldr r0, [sp]
    // add r4, #0x14
    // add r7, #0x14
    // str r0, [sp]
}





void ov49_0225D804(void) {
}





void ov49_0225D820(void) {
    // sub r1, #8
    // add r0, r3, r0
    // add r1, #0xb4
}





void ov49_0225D854(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x20]
    // add r0, #0x20
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x20]
    // ldr r4, [sp, #0x24]
    // ldr r5, [sp, #0x20]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x58]
    // ldr r0, [sp, #0x24]
    // add r0, #0xc
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, #0xc
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r4, [sp, #8]
    // ldr r6, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x58]
    // str r0, [r4]
    // add r1, #8
    // add r1, r1, r2
    // add r0, r0, r1
    // add r4, #0x10
    // add r5, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r7, [sp, #0x14]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x38]
    // add r0, #0x38
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x3c]
    // ldr r6, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x38]
    // ldr r5, [sp, #0x30]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // ldr r1, [sp, #0x14]
    // sub r0, #0x20
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // add r5, #0x14
    // add r0, #0x14
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x3c]
    // add r0, #0x10
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #8]
    // add r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // add r0, #0x50
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x34]
    // add r0, #0xc
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // add r0, #0x50
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
}





void ov49_0225D9D0(void) {
    // str r0, [sp]
    // ldr r7, [sp]
    // str r0, [sp, #8]
    // add r7, #0x38
    sub_020180F8(r7, r1);
    // add r5, #0x14
    // ldr r0, [sp, #8]
    // add r7, #0x50
    // str r0, [sp, #8]
    // ldr r4, [sp]
    Heap_Free(*((u32*)(r4 + 1)));
    // add r4, #0x10
    // str r0, [sp, #4]
    // ldr r4, [sp]
    NNS_G3dGetTex(*((u32*)(r4 + 0x20)));
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    NNS_G3dTexReleaseTexKey();
    // ldr r0, [sp, #0x10]
    // blx r1
    // ldr r0, [sp, #0xc]
    // blx r1
    NNS_G3dPlttReleasePlttKey(r6, *((u32*)r7));
    // blx r1
    Heap_Free(*((u32*)(r4 + 0x20)), *((u32*)NNS_GfdDefaultFuncFreePlttVram));
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}





void ov49_0225DA70(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r0, #0x38
    // add r5, #0x8c
    // str r0, [sp, #4]
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225DA9E: ; jump table
    // ldr r1, [sp]
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    // add r1, r1, r6
    // ldr r1, [sp]
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    // add r1, r1, r6
    // add r1, #0x8c
    // str r0, [r1]
    // add r6, #0x14
}





void ov49_0225DAFC(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // add r0, r0, r1
    // ldr r0, [sp]
    // add r1, r0, r2
    // add r0, r1, r0
    // ldr r1, [sp]
    // add r1, r1, r2
    // ldr r0, [sp]
    // add r1, r0, r1
    // ldr r7, [sp]
    // str r0, [sp, #4]
    // add r7, #0x38
    // add r1, r7, r1
    // add r1, r1, r4
    // add r1, #0x8c
    // add r0, r7, r0
    // add r0, r0, r4
    // ldr r0, [sp, #4]
    // add r4, #0x14
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // add r0, #0x38
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r1, r1, r2
    // add r1, r1, r4
    // add r4, #0x14
    // ldr r0, [sp]
    // add r0, r0, r1
}





void ov49_0225DBF8(void) {
    // add r0, r4, r0
    // add r3, #0xe4
    GF_AssertFail((0xe4 * 0), (0 + 1), *((u8*)(r0 + 0x00000125)), *((u32*)(r0 + (0x00000125 - 5))));
}





void ov49_0225DC2C(void) {
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
    // str r7, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // ldr r4, [sp, #0x10]
    // ldr r5, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #0x30]
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    // ldr r0, [sp, #4]
    // add r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}





void ov49_0225DCBC(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r5, [sp]
    // str r6, [r5, r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}





void ov49_0225DD0C(void) {
    // add r0, r5, r0
    // add r0, #0xe0
    // add r1, #0xe1
    // add r0, r5, r0
    // add r0, #0xe0
    // add r4, #0xe2
    // add r0, r5, r0
}





void ov49_0225DD68(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // add r0, #0x7c
    // str r0, [sp, #0xc]
    // add r7, #0xc0
    // str r0, [sp, #8]
    // add r0, r4, r5
    // add r0, #0xb8
    // add r0, r4, r5
    // add r0, #0xbc
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225DDA2: ; jump table
    // add r2, #0xdc
    // ldr r1, [sp, #0xc]
    // add r1, #0xc0
    // ldr r0, [sp, #8]
    // add r2, #0xdc
    // ldr r1, [sp, #0xc]
    // add r1, #0xc0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r0, #0xd0
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r2, [sp, #0x10]
    // blx r2
    // add r2, #0xdc
    // ldr r1, [sp, #0xc]
    // add r1, #0xc0
    // ldr r0, [sp, #8]
    // add r2, #0xdc
    // ldr r1, [sp, #0xc]
    // add r1, #0xc0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r0, #0xd0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r2, [sp, #4]
    // blx r2
    // add r0, r4, r5
    // add r0, #0xcd
    // add r0, r4, r5
    // add r0, #0xcd
    // add r0, r4, r5
    // add r0, #0xcd
    // strb r1, [r0]
    // add r2, #0xdc
    // ldr r1, [sp, #0xc]
    // add r1, #0xcc
    // add r0, r4, r5
    // add r0, #0xcd
    // strb r1, [r0]
    // add r1, #0xc0
    // str r0, [r1]
    // add r1, #0xc0
    // ldr r0, [sp, #8]
    // add r0, r4, r5
    // add r0, #0xcd
    // add r0, r4, r5
    // add r0, #0xcd
    // add r0, r4, r5
    // add r0, #0xcd
    // strb r1, [r0]
    // add r2, #0xdc
    // ldr r1, [sp, #0xc]
    // add r1, #0xc0
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, #0x14
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x14
    // str r0, [sp, #8]
}





void ov49_0225DF18(void) {
    // str r3, [sp, #4]
    Heap_Alloc(r3, 0x00000614);
    memset(0, 0x00000614);
    // str r7, [r4]
    // strb r5, [r4, r0]
    // strb r6, [r4, r0]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #0x48]
    ov49_0225CC4C(9, 0x80);
    *((u32*)(r4 + 4)) = r0;
    // ldr r0, [sp, #0x48]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    ov49_0225CDEC(*((u32*)(r4 + 4)), r6, r5);
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r2, sp, #0x1c
    // add r2, #2
    // add r3, sp, #0x1c
    ov49_022589D8(*((u32*)r4), *((u16*)ov49_02269AAC));
    // add r0, r4, r0
    // str r0, [sp, #0x10]
    // add r0, r4, r0
    // str r0, [sp, #0x14]
    // mov r7, sp
    // add r0, r4, r0
    // str r0, [sp, #0x18]
    // add r6, sp, #0x1c
    ov49_0225D098(*((u32*)(r4 + 4)), *((u16*)(r5 + 2)), *((u16*)(r6 + 2)), *((u16*)r6));
    // add r1, r4, r1
    *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)) = r0;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225DFC6: ; jump table
    // add r1, r4, r1
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0, 0);
    // add r0, r4, r0
    // add r1, r4, r0
    // str r2, [r1, r0]
    // add r1, r4, r1
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0, 0);
    // add r1, r4, r1
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 1, 0);
    // add r1, r4, r1
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 2, 0);
    // add r1, r4, r1
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0, 2);
    // add r0, r4, r0
    // add r1, r4, r0
    // str r2, [r1, r0]
    // add r1, r4, r1
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0, 2);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // add r1, r4, r1
    ov49_0225EB00(*((u8*)(r4 + 0x00000608)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)));
    // strb r1, [r4, r0]
    GF_AssertFail(*((u8*)(r4 + 0x00000608)), (*((u8*)(r4 + 0x00000608)) + 1));
    // add r0, r4, r0
    ov49_0225D494(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0);
    // add r0, r1, r0
    // add r0, r4, r0
    ov49_0225EE4C(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), *((u16*)r5));
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // add r1, r4, r1
    ov49_0225EB00(*((u8*)(r4 + 0x00000609)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)));
    // strb r1, [r4, r0]
    GF_AssertFail(*((u8*)(r4 + (0x00000609 - 1))), (*((u8*)(r4 + 0x00000609)) + 1));
    // add r0, r4, r0
    ov49_0225D494(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0);
    // add r0, r1, r0
    // add r0, r4, r0
    ov49_0225EE4C(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), *((u16*)r5));
    // add r0, r4, r0
    // add r1, r4, r0
    // str r2, [r1, r0]
    // strb r1, [r4, r0]
    GF_AssertFail(*((u8*)(r4 + 0x0000060A)), (*((u8*)(r4 + 0x0000060A)) + 1), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)));
    // add r0, r4, r0
    ov49_0225D494(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0);
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // add r1, r4, r1
    ov49_0225EB00(*((u8*)(r4 + 0x0000060B)), *((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)));
    // strb r1, [r4, r0]
    GF_AssertFail(*((u8*)(r4 + 0x0000060B)), (*((u8*)(r4 + 0x0000060B)) + 1));
    // add r0, r4, r0
    ov49_0225D494(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), 0);
    // add r0, r4, r0
    ov49_0225D1EC(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)));
    *((u16*)(r6 + 4)) = r0;
    *((u16*)(r6 + 6)) = (r0 >> 0x10);
    *((u16*)(r6 + 8)) = *((u16*)(r6 + 4));
    *((u16*)(r6 + 0xa)) = *((u16*)(r6 + 6));
    // ldrsh r0, [r6, r0]
    // add r0, #8
    *((u16*)(r6 + 8)) = 8;
    // ldrsh r0, [r6, r0]
    // add r0, #0x14
    *((u16*)(r6 + 0xa)) = 0xa;
    // add r0, r4, r0
    // strh r1, [r7]
    *((u16*)(r7 + 2)) = *((u16*)(r6 + 0xa));
    ov49_0225D1C4(*((u32*)((*((u8*)(r4 + 0x00000612)) << 2) + 8)), *((u32*)r7));
    // add r2, sp, #0x1c
    // add r2, #2
    // add r3, sp, #0x1c
    // strb r1, [r4, r0]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #8]
    ov49_022589D8(*((u32*)r4), *((u16*)r5));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r7, [sp, #0x28]
    // str r0, [sp, #0x30]
    // str r7, [sp, #0x2c]
    // add r3, sp, #0x28
    ov49_0225CF28(*((u32*)(r4 + 4)), *((u16*)ov49_02269A88), *((u16*)(ov49_02269A88 + 2)));
    // str r0, [r5, r1]
    ov49_0225D040(*((u32*)(r5 + (0x82 << 2))), 0);
    // strb r1, [r4, r0]
}





void ov49_0225E2B4(void) {
    ov49_0225CF94(*((u32*)(r0 + (0x82 << 2))));
    ov49_0225D160(*((u32*)(r5 + 4)), *((u32*)(r5 + 8)));
    ov49_0225CE88(*((u32*)(r5 + 4)));
    ov49_0225CCC0(*((u32*)(r5 + 4)));
    Heap_Free(r5);
}





void ov49_0225E318(void) {
    // add r4, r5, r0
    ov49_0225EB08(r4, *((u32*)(r0 + 4)));
    // add r4, #0xc
    // add r4, r5, r0
    ov49_0225ECF0(r4, *((u32*)(r5 + 4)));
    // add r4, #0xc
    // add r4, r5, r0
    ov49_0225ED98(r4, *((u32*)(r5 + 4)));
    // add r4, #0xc
    ov49_0225CCF0(*((u32*)(r5 + 4)));
}





void ov49_0225E3A0(void) {
}





void ov49_0225E3AC(void) {
}





void ov49_0225E3B8(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r1, r5, r0
    // str r6, [sp]
    // add r1, sp, #0
    ov49_0225CFA8(*((u32*)(r1 + (0x82 << 2))));
}





void ov49_0225E3F4(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // add r1, r5, r0
    ov49_0225CFEC(*((u32*)(r1 + (0x82 << 2))), r6);
}





void ov49_0225E420(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    GF_AssertFail();
    // add r1, r5, r0
    ov49_0225D030(*((u32*)(r1 + (0x82 << 2))), r4);
    // ldrsh r1, [r1, r0]
    // add r1, r2, r1
    // str r1, [r4]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    *((u32*)(r4 + 8)) = ((r7 << 2) << 0xc);
    *((u32*)(r4 + 4)) = (0xa << 0xe);
}





void ov49_0225E47C(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // add r1, r5, r0
    ov49_0225D04C(*((u32*)(r1 + (0x82 << 2))));
}





void ov49_0225E4A4(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // add r1, r5, r0
    ov49_0225D064(*((u32*)(r1 + (0x82 << 2))));
}





void ov49_0225E4CC(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // add r1, r5, r0
    ov49_0225D040(*((u32*)(r1 + (0x82 << 2))), r6);
}





void ov49_0225E4F8(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // add r1, r5, r0
    ov49_0225D07C(*((u32*)(r1 + (0x82 << 2))), r6);
}





void ov49_0225E524(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // add r1, r5, r0
    ov49_0225D088(*((u32*)(r1 + (0x82 << 2))));
}





void ov49_0225E54C(void) {
    GF_AssertFail(*((u8*)(r0 + 0x00000613)));
    // add r1, r5, r0
    ov49_0225D090(*((u32*)(r1 + (0x82 << 2))));
}





void ov49_0225E574(void) {
}





void ov49_0225E580(void) {
}





void ov49_0225E58C(void) {
    // str r1, [sp]
    // ldr r1, [sp]
    // str r1, [sp, #4]
    // ldr r1, [sp, #4]
    ov49_0225E9D0(*((u32*)(r0 + 8)), (((r1 - 1) << 0x18) >> 0x18), (((r2 - 1) << 0x18) >> 0x18));
    // str r0, [sp, #8]
    // ldr r1, [sp]
    ov49_0225E9D0(*((u32*)(r4 + 8)), r7);
    // ldr r1, [sp, #8]
    ov49_0225D1C0(*((u32*)(r4 + 8)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E5E6: ; jump table
    ov49_0225EAB4(r5, *((u32*)(r4 + 8)));
    ov49_0225EA70(r5, *((u32*)(r4 + 8)));
}





void ov49_0225E624(void) {
    ov49_0225D1C0(*((u32*)(r0 + 8)));
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E64C: ; jump table
    ov49_0225D4A0(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 1);
    ov49_0225D4C8(*((u32*)(r4 + 8)), (2 << 0xa));
    ov49_0225D214(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 0, 6);
    ov49_0225D214(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 1, 6);
    ov49_0225D214(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 2, 6);
    ov49_0225D494(*((u32*)(r4 + 8)), 1);
    ov49_0225D328(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 0);
    ov49_0225D328(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 1);
    ov49_0225D328(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 2);
    ov49_0225D494(*((u32*)(r4 + 8)), 0);
}





void ov49_0225E6E0(void) {
    // add r5, r6, r0
    ov49_0225ECD4(r5, r1);
    // add r5, #0xc
}





void ov49_0225E714(void) {
    ov49_0225D1C0(*((u32*)(r0 + 8)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E73C: ; jump table
    ov49_0225D4A0(*((u32*)(r5 + 4)), *((u32*)(r4 + 8)), 1);
}





void ov49_0225E760(void) {
    ov49_0225D1C0(*((u32*)(r0 + 8)));
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E790: ; jump table
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)(r5 + 8)), 0, 2);
    // str r1, [r4, r0]
    // str r0, [sp]
    ov49_0225D224(*((u32*)(r4 + 4)), *((u32*)(r5 + 8)), 0, 1);
    // str r1, [r4, r0]
    // str r0, [sp]
    ov49_0225D224(*((u32*)(r4 + 4)), *((u32*)(r5 + 8)), 0, 4);
    ov49_0225D328(*((u32*)(r4 + 4)), *((u32*)(r5 + 8)), 1);
    // str r1, [r4, r0]
    ov49_0225D214(*((u32*)(r4 + 4)), *((u32*)(r5 + 8)), 1, 0);
    ov49_0225D328(*((u32*)(r4 + 4)), *((u32*)(r5 + 8)), 0);
    // str r1, [r4, r0]
}





void ov49_0225E824(void) {
    // ldr r0, [r0, r1]
}





void ov49_0225E82C(void) {
    ov49_0225E85C(r0, 0, r1, r2);
}





void ov49_0225E85C(void) {
    // add r5, r4, r0
    // add r0, r5, r0
    ov49_0225EB54((0xc * r1), *((u32*)(r0 + 4)), r3);
    // add r0, r5, r0
    ov49_0225EB84();
}





void ov49_0225E894(void) {
    // add r5, r6, r0
    ov49_0225ECD4(r5, r1);
    // add r5, #0xc
}





void ov49_0225E8C4(void) {
    // add r1, r5, r0
    // add r0, #0xc
    // ldr r0, [sp, #0x18]
    ov49_0225D450(*((u32*)(r1 + (0x8b << 2))), 1);
    ov49_0225D214(*((u32*)(r5 + 4)), r6, 1, 0);
    // ldr r0, [sp, #0x18]
    _ffltu(((r4 + 4) << 0xe), ((r4 + 4) << 2));
    _fadd((0x3f << 0x18), r0);
    _ffltu((r0 << 0xe));
    _fsub((0x3f << 0x18));
    _ffix();
    ov49_0225D3F8(*((u32*)(r5 + 4)), r7, 0, r0);
    _u32_div_f((*((u32*)(r5 + 0x0000060C)) + 1), 0x1c);
    // str r1, [r5, r0]
    _ffltu((r4 << 0xe));
    _fadd((0x3f << 0x18), r0);
    _ffltu((r4 << 0xe));
    _fsub((0x3f << 0x18));
    _ffix();
    ov49_0225D3F8(*((u32*)(r5 + 4)), r7, 0, r0);
    ov49_0225D3F8(*((u32*)(r5 + 4)), r7, 0, 0);
    // ldr r0, [sp, #0x1c]
    ov49_0225D394(*((u32*)(r5 + 4)), r6);
    ov49_0225D394(*((u32*)(r5 + 4)), r7);
    ov49_0225D4A0(*((u32*)(r5 + 4)), r6, 1);
    ov49_0225D328(r6, 1);
    ov49_0225D3F8(*((u32*)(r5 + 4)), r7, 0, 0);
}





void ov49_0225E9D0(void) {
    // asr r4, r1, #0x10
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // asr r0, r0, #0x10
    // ldrsh r0, [r1, r0]
}





void ov49_0225EA10(void) {
    // sub r4, #0xb
}





void ov49_0225EA40(void) {
    // sub r4, #0xb
}





void ov49_0225EA70(void) {
    ov49_0225D3BC(*((u32*)(r0 + 4)), 0);
    ov49_0225D470(r5, 1);
    ov49_0225EAE0(r6, r5);
    PlaySE(0x000005BC);
}





void ov49_0225EAB4(void) {
}





void ov49_0225EAE0(void) {
}





void ov49_0225EB00(void) {
}





void ov49_0225EB08(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225EB20: ; jump table
}





void ov49_0225EB54(void) {
    // add r6, r2, r3
    // add r2, r2, r3
    ov49_0225EBE4(((*((u16*)(r0 + 4)) << 0x10) >> 0x10), (0x0000FFFF - 2));
    *((u16*)(r5 + 4)) = 1;
    *((u32*)(r5 + 8)) = r4;
}





void ov49_0225EB84(void) {
    // add r1, r2, r1
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 4)) = 3;
}





void ov49_0225EBA8(void) {
}





void ov49_0225EBE4(void) {
}





void ov49_0225EC28(void) {
}





void ov49_0225EC30(void) {
    // ldrsh r1, [r4, r0]
    *((u16*)(r0 + 6)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul((6 << 0xc), (r1 + 1), *((u32*)(r0 + 8)));
    // add r0, r0, r2
    // adc r1, r3
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (0xa << 0xc), (2 << 0xa), 0);
    // add r1, r2, r1
    ov49_0225D4C8(*((u32*)r4), *((u32*)(r4 + 8)), r0);
    // ldrsh r1, [r4, r0]
    _s32_div_f((0x1f * r1), 0xa);
    // sub r1, r2, r0
    ov49_0225D4D0(*((u32*)r4), ((r1 << 0x18) >> 0x18), 0x1f);
    // ldrsh r0, [r4, r0]
    // asr r1, r0, #0x1f
    _ll_mul((6 << 0xc), 0x000002E1, 0);
    // add r0, r0, r2
    // adc r1, r3
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (0xa << 0xc), (2 << 0xa), 0);
    // add r1, r5, r3
    // add r3, r5, r3
    ov49_0225D4F0(*((u32*)r4), r1, (1 << 0xc));
}





void ov49_0225ECD4(void) {
    // add r2, r3, r2
    *((u16*)(r0 + 4)) = 1;
    *((u32*)(r0 + 8)) = r1;
}





void ov49_0225ECF0(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225ED06: ; jump table
}





void ov49_0225ED68(void) {
}





void ov49_0225ED98(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225EDAE: ; jump table
}





void ov49_0225EE10(void) {
}





void ov49_0225EE4C(void) {
    GF_AssertFail();
    ov49_0225D1EC(r5);
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // sub r4, #0x5c
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // ldrsh r3, [r1, r0]
    // add r0, r3, r0
    *((u16*)(r1 + 4)) = *((u32*)(ov49_02269A74 + (r4 << 2)));
    // ldrsh r0, [r1, r0]
    // mov r3, sp
    // sub r0, #0xa
    *((u16*)(r1 + 6)) = 6;
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov49_0225D1C4(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
}





void ov49_0225EEAC(void) {
    // str r6, [r7]
    // add r5, #8
    // add r5, #0x24
    // add r0, r7, r0
}





void ov49_0225EEF8(void) {
    // add r5, #8
    // add r5, #0x24
    // add r0, r6, r0
}





void ov49_0225EF24(void) {
}





void ov49_0225EF30(void) {
}





void ov49_0225EF3C(void) {
}





void ov49_0225EF40(void) {
    // ldrh r0, [r5]
}





void ov49_0225EF68(void) {
}





void ov49_0225EF84(void) {
}





void ov49_0225EF88(void) {
}





void ov49_0225EF8C(void) {
}





void ov49_0225EF90(void) {
}





void ov49_0225EF98(void) {
    // add r5, #8
    // add r0, r5, r0
}





void ov49_0225EFC4(void) {
    // add r5, #8
    // add r0, r5, r0
}





void ov49_0225EFF0(void) {
    // add r5, #8
    // add r0, r5, r0
}





void ov49_0225F018(void) {
    // add r0, r7, r0
    // str r1, [sp]
    // ldr r2, [sp]
    // add r0, r7, r0
    // add r6, #8
    // ldr r2, [sp]
    // add r6, #0x24
    // add r5, #0x24
}





void ov49_0225F068(void) {
}





void ov49_0225F074(void) {
}





void ov49_0225F098(void) {
    // blx r4
}





void ov49_0225F0D8(void) {
    // str r3, [sp]
}





void ov49_0225F10C(void) {
}





void ov49_0225F110(void) {
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r3, [sp]
}





void ov49_0225F148(void) {
    // add r3, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r4, #0x14
}





void ov49_0225F170(void) {
    // cmp r0, #0
    // bne _0225F17A
}





void ov49_0225F180(void) {
    // cmp r0, #0
    // beq _0225F18A
}





void ov49_0225F190(void) {
    // str r1, [r0]
    // ldr r1, [sp]
}





void ov49_0225F19C(void) {
}





void ov49_0225F1A8(void) {
    ov49_02259FEC();
    ov49_0225A010(r5);
    ov49_0225A02C(r5);
    ov49_02259FE8(r5);
    ov45_0222A5E8(1);
    GF_AssertFail(*((u16*)(r4 + 6)));
    // add r2, r3, r2
    ov49_0225EF98(r7, r6, (*((u16*)(r4 + 6)) << 3), 0);
}





void ov49_0225F1F0(void) {
    ov49_0225A02C();
    ov49_0225A010(r4);
    ov49_0225EF98(r0, 0, ov49_02269B78, 0);
}





void ov49_0225F224(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F234: ; jump table
    // tst r0, r1
}





void ov49_0225F260(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // ldr r5, [sp, #0x28]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // add r6, r4, r5
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, #0xc
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // blx r7
    // add r2, r4, r5
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, #0xc
    // add r6, #0x18
}





void ov49_0225F2FC(void) {
    // add r1, sp, #0
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
}





void ov49_0225F334(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp]
    // ldr r3, [sp, #0x20]
    // ldr r0, [sp, #4]
}





void ov49_0225F374(void) {
}





void ov49_0225F394(void) {
    // str r0, [r4]
    *((u8*)(r0 + 6)) = (*((u8*)(r0 + 6)) - 1);
    *((u8*)(r0 + 5)) = 2;
    // ldrsb r1, [r4, r0]
    *((u8*)(r0 + 4)) = (r1 + 1);
    // ldrsb r1, [r4, r0]
    // asr r0, r2, #1
    // add r0, r2, r0
    // asr r0, r0, #4
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, ((((0x00007FFF >> 0x1e) << 0xe) >> 0x10) << 2), (6 << 0xc), 0);
    // add r2, r0, r2
    // adc r1, r3
    // str r1, [r4]
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 4)) = 0;
    *((u8*)(r4 + 5)) = 1;
    MTRandom(1, (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    // and r0, r1
    *((u8*)(r4 + 6)) = r0;
    *((u8*)(r4 + 5)) = r3;
}





void ov49_0225F430(void) {
}





void ov49_0225F438(void) {
    // cmp r0, #0
    // beq _0225F442
}





void ov49_0225F448(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r1, [sp]
    // ldr r1, [sp]
}





void ov49_0225F518(void) {
    // str r2, [sp]
    ov49_02259FE8(r1);
    // str r0, [sp, #4]
    ov49_02259FF0(r5);
    // str r0, [sp, #8]
    ov49_02258DAC();
    ov49_0225EF84(r6);
    ov49_0225EF88(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F556: ; jump table
    ov49_0225EF40(r6, 0x2c);
    ov49_022614CC(r5);
    // ldr r0, [sp, #4]
    ov45_0222A4D0();
    // ldr r0, [sp, #4]
    ov45_0222B1B4();
    *((u16*)(r4 + 2)) = r0;
    // ldr r0, [sp, #4]
    ov45_0222A72C(*((u16*)(r4 + 2)));
    // ldr r1, [sp]
    ov49_0225F2FC(r5);
    // ldr r0, [sp, #8]
    ov49_02258EEC(r0, 4);
    ov49_0225EF90(r6);
    ov49_0225A030(r5);
    ov49_02258F38(r7);
    // ldr r0, [sp, #8]
    ov49_02258EEC(r7, 0);
    ov49_0225A008(r5);
    ov49_0225CC40(r7);
    *((u32*)(r4 + 4)) = 0x10;
    ov49_0225EF90(r6);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    ov49_0225A018(r5, 1);
    ov49_0225EF90(r6);
    // ldr r0, [sp, #8]
    ov49_02258E7C(r7, 2, 0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 7);
    // ldr r0, [sp, #8]
    ov49_02258E7C(r7, 2, 0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 7);
    // ldr r0, [sp, #8]
    ov49_02258E7C(r7, 1, 3);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 7);
    // ldr r0, [sp, #8]
    ov49_02258E7C(r7, 2, 3);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 7);
    ov49_02258E60(r7, 5);
    ov49_0225EF8C(r6, *((u16*)r4));
    ov49_0225A30C(r5, 1, 0);
    ov49_0225A08C(r5, r0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 0x15);
    ov49_0225A30C(r5, 1, 5);
    ov49_0225A09C(r5, r0);
    // add r4, #8
    ov49_0225A174(r5, r4, 0, 0);
    ov49_0225A1F4(r5, 1);
    ov49_0225EF8C(r6, 0xa);
    ov49_0225A1D4(r5);
    PlaySE(0x000005DC, r0);
    *((u16*)(r4 + 0x28)) = 0;
    *((u16*)(r4 + 0x28)) = r2;
    ov49_0225A40C(r5, 0);
    ov49_0225A1E4(r5, 0, 0);
    ov49_0225A30C(r5, 1, 8);
    ov49_0225A09C(r5, r0);
    ov49_0225A264(r5);
    ov49_0225EF8C(r6, 0xb);
    ov49_0225EF8C(r6, 0x11);
    ov49_0225A2C4(r5);
    ov49_0225A2F8(r5);
    ov49_0225EF8C(r6, 0xc);
    // ldr r0, [sp, #4]
    ov45_0222A770(*((u16*)(r4 + 0x28)), *((u16*)(r4 + 0x2a)));
    ov49_0225A490(r5);
    PlaySE(0x000005E5);
    ov49_0225A2F8(r5);
    ov49_0225EF8C(r6, 9);
    ov49_0225A30C(r5, 1, 0xa);
    ov49_0225A09C(r5, r0);
    // add r4, #8
    ov49_0225A174(r5, r4, 0, 0);
    ov49_0225A1F4(r5, 1);
    ov49_0225EF8C(r6, 0xd);
    ov49_0225A1D4(r5);
    PlaySE(0x000005DC, r0);
    *((u16*)(r4 + 0x2a)) = 0;
    *((u16*)(r4 + 0x2a)) = r2;
    ov49_0225A40C(r5, 0);
    ov49_0225A1E4(r5, 0, 0);
    ov49_0225A30C(r5, 1, 8);
    ov49_0225A09C(r5, r0);
    ov49_0225A264(r5);
    ov49_0225EF8C(r6, 0xf);
    ov49_0225EF8C(r6, 0x13);
    ov49_0225A2C4(r5);
    ov49_0225A2F8(r5);
    ov49_0225EF8C(r6, 0x14);
    // ldr r0, [sp, #4]
    ov45_0222A770(*((u16*)(r4 + 0x28)), *((u16*)(r4 + 0x2a)));
    ov49_0225A490(r5);
    PlaySE(0x000005E5);
    ov49_0225A2F8(r5);
    ov49_0225EF8C(r6, 0xc);
    PlaySE(0x000005BF);
    ov49_0225A530(r5);
    // ldr r1, [sp]
    ov49_0225A334(r5, 0);
    ov49_0225A39C(r5, *((u16*)(r4 + 2)), 1);
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    ov45_0222AB28();
    ov49_0225A30C(r5, 1, 1);
    ov49_0225A30C(r5, 1, 0x7c);
    ov49_0225A08C(r5, r0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 0x15);
    ov49_0225A30C(r5, 1, 2);
    ov49_0225A08C(r5, r0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 0x15);
    IsSEPlaying(0x000005BF);
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ov49_0225A30C(r5, 1, 4);
    ov49_0225A08C(r5, r0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 0x15);
    // ldr r0, [sp, #4]
    ov45_0222A770(*((u16*)(r4 + 0x28)), *((u16*)(r4 + 0x2a)));
    // ldr r1, [sp]
    ov49_0225A428(r5, 0);
    ov49_0225A40C(r5, 0, *((u16*)(r4 + 0x28)));
    ov49_0225A30C(r5, 1, 0xc);
    ov49_0225A08C(r5, r0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 0x15);
    ov49_0225A40C(r5, 0, *((u16*)(r4 + 0x28)));
    ov49_0225A40C(r5, 1, *((u16*)(r4 + 0x2a)));
    ov49_0225A30C(r5, 1, 0xb);
    ov49_0225A08C(r5, r0);
    // strh r0, [r4]
    ov49_0225EF8C(r6, 0x15);
    ov49_0225A0AC(r5);
    ov49_0225EF8C(r6, *((u16*)r4));
    // ldr r0, [sp, #8]
    ov49_02258EEC(r7, 1);
    ov49_0225A0EC(r5);
    ov49_02261540(r4, r5);
    ov49_0225EF68(r6);
    ov49_0225A010(r5);
    ov49_0225A02C(r5);
    ov49_0225EF98(r4, r0, ov49_02269B38, 0);
}





void ov49_0225FA14(void) {
    // str r2, [sp, #4]
    ov49_02259FE8(r1);
    // str r0, [sp, #8]
    ov49_02259FEC(r4);
    ov49_02259FF0(r4);
    // str r0, [sp, #0xc]
    ov49_02258DAC();
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FA54: ; jump table
    // str r0, [sp]
    // ldr r1, [sp, #4]
    ov49_0225F334(r4, *((u16*)r6), *((u16*)(r6 + 2)));
    ov45_0222D844();
    ov45_0222EB94();
    // ldr r0, [sp, #8]
    ov45_0222A520(0);
    ov49_0225EF90(r5);
    ov45_0222D844();
    ov45_0222EBC4();
    ov49_02259FEC(r4);
    ov49_0225A030(r4);
    ov49_0225EF90(r5);
    // ldr r0, [sp, #0xc]
    ov49_02258EAC(r7, 2, *((u16*)(r6 + 4)));
    ov49_02258E60(r7, 5);
    ov49_0225A018(r4, 1);
    // ldr r0, [sp, #8]
    ov45_0222A4B8();
    ov49_0225EF90(r5);
    ov49_0225EF8C(r5, 5);
    ov49_0225A37C(r4, *((u16*)(r6 + 8)), 0);
    ov49_0225A30C(r4, 0, 0x15);
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225A0EC(r4);
    ov49_0225EF90(r5);
    // ldr r0, [sp, #0xc]
    ov49_02258EEC(r7, 1);
    ov49_0225A010(r4);
    ov49_0225A02C(r4);
    ov49_0225EF98(r5, r0, ov49_02269B38, 0);
}





void ov49_0225FB5C(void) {
    // str r2, [sp, #4]
    ov49_0225A010(r1);
    // str r0, [sp, #8]
    ov49_02259FF0(r4);
    // str r0, [sp, #0xc]
    ov49_02258DAC();
    ov49_02259FE8(r4);
    // str r0, [sp, #0x10]
    ov49_02259FEC(r4);
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FBA4: ; jump table
    // str r0, [sp]
    // ldr r1, [sp, #4]
    ov49_0225F334(r4, *((u16*)r6), *((u16*)(r6 + 2)));
    ov49_0225EF90(r5);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    ov49_0225EFC4(ov49_02269B68, 0);
    // ldr r0, [sp, #0x10]
    ov45_0222A4C8(0);
    // ldr r0, [sp, #0x10]
    ov45_0222A4D0();
    ov49_02259FEC(r4);
    ov49_0225A030(r4);
    ov49_0225EF90(r5);
    // ldr r0, [sp, #0xc]
    ov49_02258EAC(r7, 2, *((u16*)(r6 + 4)));
    ov49_02258E60(r7, 5);
    ov49_0225A018(r4, 1);
    // ldr r0, [sp, #0x10]
    ov45_0222A424();
    ov49_0225EF8C(r5, 3);
    ov49_0225EF8C(r5, 5);
    ov49_0225A37C(r4, *((u16*)(r6 + 8)), 0);
    ov49_0225A30C(r4, 0, 8);
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225A0EC(r4);
    ov49_0225EF90(r5);
    // ldr r0, [sp, #0xc]
    ov49_02258EEC(r7, 1);
    ov49_0225A010(r4);
    ov49_0225A02C(r4);
    ov49_0225EF98(r5, r0, ov49_02269B38, 0);
}





void ov49_0225FCA8(void) {
    // str r2, [sp, #4]
    ov49_02259FE8(r1);
    ov49_02259FEC(r4);
    // str r0, [sp, #8]
    ov49_02259FF0(r4);
    // str r0, [sp, #0xc]
    ov49_02258DAC();
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FCE6: ; jump table
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #8]
    // ldr r1, [sp, #4]
    ov49_0225F334(r4, *((u16*)r2), *((u16*)(r3 + 2)));
    ov45_0222A520(r7, 0);
    ov49_0225EF90(r5);
    ov49_02259FEC(r4);
    ov49_0225A030(r4);
    ov49_0225EF90(r5);
    // ldr r0, [sp, #0xc]
    ov49_02258EAC(r6, 2, *((u16*)(r7 + 4)));
    ov49_02258E60(r6, 5);
    ov49_0225A018(r4, 1);
    ov45_0222A4B8(r7);
    ov49_0225EF90(r5);
    ov49_0225EF8C(r5, 5);
    ov49_0225A30C(r4, 1, 0x5b);
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225A0EC(r4);
    ov49_0225EF90(r5);
    // ldr r0, [sp, #0xc]
    ov49_02258EEC(r6, 1);
    ov49_0225A010(r4);
    ov49_0225A02C(r4);
    ov49_0225EF98(r5, r0, ov49_02269B38, 0);
}





void ov49_0225FDCC(void) {
    // str r0, [sp, #4]
    ov49_0225EF84();
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #4]
    ov49_0225EF88();
    // ldr r0, [sp, #4]
    ov49_0225EF40(4);
    // ldr r0, [sp, #4]
    ov49_0225EF90();
    ov49_0225A53C(r5, 0);
    ov49_0225A010(r5);
    // str r0, [sp, #0x14]
    ov49_02259FE8(r5);
    // str r0, [sp, #0x18]
    ov49_02259FF0(r5);
    ov49_0225A000(r5);
    // str r0, [sp, #0x1c]
    ov49_02259FF8(r5);
    // str r0, [sp, #0x20]
    ov49_02258DB0(r4);
    // ldr r0, [sp, #0x18]
    ov45_0222A330();
    // ldr r0, [sp, #0x18]
    ov45_0222A3A0();
    // ldr r0, [sp, #0x18]
    ov45_0222A2F8();
    ov49_02258F3C(r6);
    ov49_02258EEC(r4, r6, 9);
    ov49_02258F3C(r6);
    ov49_02258EEC(r4, r6, 0);
    ov49_02258DAC(r4);
    // str r0, [sp, #0x28]
    ov49_02258E60(5);
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    ov49_02258E60(6);
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    ov49_02258E34();
    // add r1, sp, #0x40
    *((u16*)(r1 + 4)) = r0;
    *((u16*)(r1 + 6)) = (r0 >> 0x10);
    // mov r2, sp
    *((u16*)(r1 + 0xc)) = *((u16*)(r1 + 4));
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 6));
    // strh r0, [r2]
    // ldr r1, [sp, #8]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r1 + 0xe));
    ov42_02228270(*((u32*)(r2 - 4)), (r2 - 4));
    // add r2, sp, #0x40
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    *((u16*)(r2 + 8)) = *((u16*)r2);
    *((u16*)(r2 + 0xa)) = *((u16*)(r2 + 2));
    // ldrsh r1, [r2, r1]
    // ldr r0, [sp, #0x1c]
    // asr r3, r1, #3
    // add r3, r1, r3
    // ldrsh r2, [r2, r3]
    // asr r3, r2, #3
    // add r3, r2, r3
    ov49_022589C4(*((u16*)(r2 + 2)), (((r3 >> 0x1c) << 0xc) >> 0x10), (((0xe >> 0x1c) << 0xc) >> 0x10), (0xe >> 0x1c));
    // str r0, [sp, #0x24]
    // add r0, sp, #0x40
    // ldrsh r2, [r0, r1]
    // asr r1, r2, #3
    // add r1, r2, r1
    // asr r1, r1, #4
    // str r1, [sp, #0x10]
    // ldrsh r1, [r0, r1]
    // ldr r2, [sp, #0x10]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    ov49_022589C4((r0 >> 0x1c), ((8 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10));
    ov49_0225A4E0(r5);
    ov49_0225A084(r5, ((r0 << 0x18) >> 0x18));
    ov49_0225A4D0(r5);
    // ldr r0, [sp, #0x2c]
    ov49_0225A500(r5);
    // ldr r0, [sp, #0x2c]
    ov49_0225A4E0(r5);
    ov49_02258D70(r4, r0);
    ov49_02258F3C();
    // ldr r2, [sp, #0x30]
    ov49_02258EEC(r4, r6, *((u32*)r2));
    ov49_0225A4D0(r5);
    ov49_0225A53C(r5, 0);
    // ldr r0, [sp, #0x24]
    ov49_02258A30();
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov49_0225F260(r5, r7, ov49_02269D20);
    // ldr r1, [sp, #0x28]
    ov49_02258EEC(r4, 0);
    // ldr r1, [sp, #0x24]
    ov49_0225A03C(r5, ((r1 << 0x18) >> 0x18));
    ov49_0225A53C(r5, 1);
    ov49_0225A55C(r5);
    // ldr r1, [sp, #0x28]
    ov49_02258EEC(r4, 0);
    // ldr r0, [sp, #0x14]
    ov49_0225EFC4(r7, ov49_02269B80, 0);
    ov49_0225A53C(r5, 1);
    // ldr r0, [sp, #0x18]
    ov45_0222B00C(0);
    // ldr r0, [sp, #0x14]
    ov49_0225EFC4(r7, ov49_02269B70, 0);
    // ldr r1, [sp, #0x28]
    ov49_02258EEC(r4, 0);
    ov49_0225A53C(r5, 1);
    // tst r0, r1
    // ldr r1, [sp, #0x28]
    ov49_02258F40(r4, *((u32*)(gSystem + 0x48)));
    // str r0, [sp, #0x34]
    ov49_02258E60(5);
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x34]
    ov49_02258E60(4);
    ov49_0225A064(r5, ((r0 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x38]
    // ldr r0, [sp, #0x14]
    ov49_0225EFC4(r7, ov49_02269B60, 0);
    // ldr r1, [sp, #0x28]
    ov49_02258EEC(r4, 0);
    // ldr r1, [sp, #0x34]
    ov49_02258EEC(r4, 0);
    ov49_0225A53C(r5, 1);
    ov49_02258A90(r6);
    // ldr r0, [sp, #0x28]
    ov49_02258E60(6);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    ov49_0225E58C(((r1 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18));
    ov49_0225A03C(r5, ((r6 << 0x18) >> 0x18));
    ov49_0225A53C(r5, 1);
    ov49_02258A70(r6);
    // ldr r0, [sp, #4]
    // str r6, [sp]
    ov49_0225F260(r5, r7, ov49_02269C90);
    // ldr r1, [sp, #0x28]
    ov49_02258EEC(r4, 0);
    ov49_0225A03C(r5, ((r6 << 0x18) >> 0x18));
    ov49_0225A53C(r5, 1);
    // ldr r0, [sp, #8]
    ov49_0225F224(0);
    // ldr r0, [sp, #8]
    ov49_02258A50(r6);
    // ldr r0, [sp, #4]
    // str r6, [sp]
    ov49_0225F260(r5, r7, ov49_02269C60);
    // ldr r1, [sp, #0x28]
    ov49_02258EEC(r4, 0);
    ov49_0225A03C(r5, ((r6 << 0x18) >> 0x18));
    ov49_0225A53C(r5, 1);
    // ldr r1, [sp, #0x28]
    ov49_02258F40(r4);
    // str r0, [sp, #0x3c]
    ov49_02258E60(4);
    ov49_0225A4F0(r5);
    ov49_0225A084(r5, ((r6 << 0x18) >> 0x18));
    ov49_0225A428(r5, r6, 1);
    // ldr r0, [sp, #0x3c]
    ov49_02258F3C();
    // ldr r1, [sp, #0x30]
    // str r0, [r1]
    // ldr r1, [sp, #0x3c]
    ov49_02258EEC(r4, 0);
    // tst r0, r1
    ov49_0225A4F0(r5, *((u32*)(gSystem + 0x48)));
    // ldr r0, [sp, #0x18]
    ov45_0222A53C();
    ov49_0225A428(r5, r0, 0);
    PlaySE(0x000005DC);
    ov49_0225A4E0(r5);
    ov49_0225A4D0(r5);
    PlaySE(0x000005DC);
}





void ov49_02260230(void) {
}





void ov49_02260254(void) {
    ov49_0225EF88();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260270: ; jump table
    ov49_02259FF0(r4);
    ov49_02258DAC();
    ov49_02258EEC(r6, r0, 0);
    ov49_02259FE8(r4);
    ov45_0222A5E8(0xb);
    PlaySE(0x000005DD);
    ov49_0225A30C(r4, 1, 0x41);
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225EF90(r5);
    ov49_0225A30C(r4, 2, 0x19);
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225EF90(r5);
    ov49_0225A294(r4);
    ov49_0225EF90(r5);
    ov49_0225A2C4(r4);
    ov49_0225EF8C(r5, 6);
    ov49_0225EF8C(r5, 8);
    ov49_0225A2F8(r4);
    ov49_0225A0EC(r4);
    ov49_0225A018(r4, 0);
    ov49_02259FF0(r4);
    ov49_02258DAC();
    ov49_0225A008(r4);
    ov49_0225CC44();
    ov49_02258EEC(r6, r7, 3);
    ov49_0225EF8C(r5, 7);
    ov49_02259FF0(r4);
    ov49_02258DAC();
    ov49_02258F38();
    ov49_0225A034(r4, 1);
    ov49_0225A038(r4, 0);
    ov49_02259FE8(r4);
    ov45_0222A5E8(0xb);
    ov49_02259FF0(r4);
    ov49_02258DAC();
    ov49_02258EAC(r4, r0, 2, 0);
    ov49_0225EF90(r5);
    ov49_02259FE8(r4);
    ov45_0222A5E8(1);
    ov49_02259FF0(r4);
    ov49_0225A010(r4);
    ov49_02258DAC(r5);
    ov49_02258E60(5);
    ov49_02258EEC(r5, r6, 1);
    ov49_0225EF98(r4, r7, ov49_02269B38, 0);
}





void ov49_02260428(void) {
    // str r2, [sp, #0x10]
    ov49_02259FF0(r1);
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x28]
    ov49_02258D70();
    ov49_0225A040(r4);
    // str r0, [sp, #0x20]
    ov49_0225EF84(r5);
    ov49_02259FE8(r4);
    // str r0, [sp, #0x24]
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260472: ; jump table
    ov49_0225EF40(r5, 0xc);
    // ldr r0, [sp, #0x20]
    ov49_02260C58();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022604A8: ; jump table
    *((u32*)(r4 + 8)) = 3;
    *((u32*)(r4 + 8)) = 4;
    *((u32*)(r4 + 8)) = 5;
    *((u32*)(r4 + 8)) = 6;
    GF_AssertFail(6);
    *((u32*)(r4 + 8)) = 5;
    // ldr r0, [sp, #0x24]
    ov45_0222A330(5);
    *((u16*)(r4 + 4)) = 0x16;
    *((u16*)(r4 + 6)) = 0;
    ov49_0225EF8C(r5, 5);
    // ldr r0, [sp, #0x24]
    ov45_0222A208();
    *((u16*)(r4 + 4)) = 0x48;
    *((u16*)(r4 + 6)) = 1;
    ov49_0225EF8C(r5, 5);
    // ldr r0, [sp, #0x20]
    ov49_02260C58();
    ov45_0222EBF0(((r0 << 0x18) >> 0x18));
    *((u16*)(r4 + 4)) = 0x14;
    *((u16*)(r4 + 6)) = 0;
    ov49_0225EF8C(r5, 3);
    ov45_0222EB38(r6);
    GF_AssertFail();
    ov49_0225EF90(r5);
    ov45_0222EB74();
    ov49_0225EF8C(r5, 2);
    // add r1, sp, #0x40
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    *((u8*)(r1 + 2)) = 0;
    *((u8*)(r1 + 3)) = 0;
    ov49_02259FE8(r4);
    ov45_0222AB68();
    // str r0, [sp, #0x1c]
    ov45_0222AB78(r7, 0);
    // mvn r1, r1
    // add r1, sp, #0x40
    // strb r0, [r1, r5]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x38
    *((u8*)(0 + 8)) = ((r5 + 1) << 0x18);
    // add r3, sp, #0x38
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    ov45_0222AC14(r7, *((u32*)(r6 + 8)), *((u8*)(r3 + 8)));
    *((u16*)(r6 + 4)) = 0x14;
    *((u16*)(r6 + 6)) = 0;
    ov49_0225EF8C(r5, 3);
    // ldr r0, [sp, #0x20]
    ov49_02260CC0();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    ov49_02260D28();
    // str r0, [sp, #0x30]
    ov49_0225A034(r4, 1);
    // ldr r1, [sp, #0x2c]
    ov49_0225A038(r4, ((r1 << 0x18) >> 0x18));
    ov49_02259FE8(r4);
    // ldr r1, [sp, #0x30]
    ov45_0222A5E8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260624: ; jump table
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    GF_AssertFail(4);
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x18]
    ov45_0222B118();
    ov49_02258E60(r7, 6);
    ov42_022282A4();
    // str r0, [sp, #0x34]
    ov49_02259FEC(r4);
    ov49_02258E34(r7);
    // add r1, sp, #0x38
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    *((u16*)(r4 + 6)) = 1;
    // ldrsh r2, [r1, r0]
    // asr r0, r2, #3
    // add r0, r2, r0
    // asr r0, r0, #4
    // strh r0, [r4]
    // ldrsh r1, [r1, r0]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    *((u16*)(r4 + 2)) = (6 >> 0x1c);
    // ldr r0, [sp, #0x34]
    *((u16*)(r4 + 4)) = (6 >> 0x1c);
    *((u16*)(r4 + 8)) = *((u32*)(r6 + 8));
    ov49_0225EF68(r5);
    ov49_02258E60(r7, 6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022606CC: ; jump table
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    GF_AssertFail(7);
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x14]
    ov49_02258EEC(r7);
    ov49_0225EF90(r5);
    ov49_02258F38(r7);
    // str r0, [r6]
    ov49_0225EF8C(r5, 7);
    ov49_02258E60(r7, 6);
    ov42_022282A4(((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x28]
    ov49_02258EAC((r0 << 0x18), r7, 2, ((r0 << 0x18) >> 0x18));
    ov49_0225EF90(r5);
    ov49_02258E60(r7, 5);
    // str r0, [r6]
    ov49_0225EF8C(r5, 7);
    // str r0, [r6]
    ov49_0225A37C(r4, *((u32*)(r6 + 8)), 0);
    ov49_0225A30C(r4, *((u16*)(r6 + 6)), *((u16*)(r6 + 4)));
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225EF68(r5);
    // ldr r0, [sp, #0x28]
    ov49_02258EEC(r7, 1);
    ov49_0225A0EC(r4);
    ov49_0225A010(r4);
    // ldr r1, [sp, #0x10]
    ov49_0225EF98(ov49_02269B38, 0);
}





void ov49_022607C4(void) {
    // str r2, [sp]
    ov49_0225EF84();
    ov49_0225A010(r4);
    // str r0, [sp, #0x14]
    ov49_02259FF0(r4);
    // str r0, [sp, #0x18]
    ov49_02258DAC();
    // str r0, [sp, #0x10]
    ov49_02259FE8(r4);
    // str r0, [sp, #0xc]
    ov49_0225EF88(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226080A: ; jump table
    ov49_0225EF40(r6, 4);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    ov49_02258EEC(0);
    ov49_0225EF90(r6);
    // strb r0, [r5]
    ov49_0225A040(r4);
    *((u8*)(r5 + 1)) = 0;
    *((u8*)(r5 + 2)) = 0;
    *((u8*)(r5 + 3)) = 2;
    *((u8*)(r5 + 1)) = 1;
    *((u8*)(r5 + 2)) = 1;
    *((u8*)(r5 + 3)) = 3;
    *((u8*)(r5 + 1)) = 2;
    *((u8*)(r5 + 2)) = 2;
    *((u8*)(r5 + 3)) = 4;
    GF_AssertFail(4);
    ov49_02259FE8(r4);
    ov45_0222A5E8(0xc);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp]
    ov49_0225EFC4(ov49_02269B88, r5);
    ov49_0225EF8C(r6, 2);
    ov49_0225EF8C(r6, 3);
    ov49_0225A040(r4);
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    ov49_0225A034(r4, 1);
    ov49_0225A038(r4, ((r5 << 0x18) >> 0x18));
    // ldr r0, [sp, #0xc]
    ov45_0222B108();
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    ov45_0222B118();
    // ldr r0, [sp, #0x10]
    ov49_02258E60(6);
    ov42_022282A4();
    // str r0, [sp, #0x1c]
    ov49_02259FEC(r4);
    // ldr r0, [sp, #0x10]
    ov49_02258E34();
    // add r1, sp, #0x20
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    *((u16*)(r5 + 6)) = 2;
    // ldrsh r0, [r1, r0]
    // asr r2, r0, #3
    // add r2, r0, r2
    // asr r0, r2, #4
    // strh r0, [r5]
    // ldrsh r1, [r1, r0]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    *((u16*)(r5 + 2)) = (6 >> 0x1c);
    // ldr r0, [sp, #0x1c]
    *((u16*)(r5 + 4)) = (6 >> 0x1c);
    *((u16*)(r5 + 8)) = *((u8*)(r7 + 2));
    ov49_02259FE8(r4, (r2 >> 0x1c));
    ov45_0222A4C8(1);
    ov49_0225EF68(r6);
    // ldr r0, [sp, #0x10]
    ov49_02258E60(1, 6);
    ov42_022282A4();
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    ov49_02258EAC(2, r0);
    ov49_0225EF90(r6);
    // ldr r0, [sp, #0x10]
    ov49_02258E60(5);
    ov49_0225EF90(r6);
    // str r0, [sp, #4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022609A8: ; jump table
    ov49_0225A37C(r4, *((u8*)(r7 + 2)), 0);
    ov49_0225A37C(r4, *((u8*)(r7 + 2)), 0);
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    ov49_0225A30C(r4, 0, 7);
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r6);
    ov49_0225EF8C(r6, 7);
    ov49_0225A0AC(r4);
    ov49_0225A0EC(r4);
    ov49_0225EF90(r6);
    ov49_0225EF68(r6);
    ov49_02259FE8(r4);
    ov45_0222A5E8(1);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    ov49_02258EEC(1);
    ov49_0225A010(r4);
    // ldr r1, [sp]
    ov49_0225EF98(ov49_02269B38, 0);
}





void ov49_02260A68(void) {
    // str r2, [sp]
    ov49_0225EF84();
    // str r0, [sp, #8]
    ov49_0225A010(r4);
    ov49_02259FF0(r4);
    // str r0, [sp, #0xc]
    ov49_02258DAC();
    ov49_02259FE8(r4);
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260AAC: ; jump table
    ov49_0225EF40(r5, 0xc);
    ov49_02259FE8(r4);
    ov45_0222A5E8(0xd);
    ov45_0222A330(r7);
    // strh r0, [r6]
    ov49_0225EF8C(r5, 2);
    ov45_0222A3A0(r7);
    *((u16*)(r6 + 2)) = 0xa;
    ov45_0222A2E0(r7);
    // strh r0, [r6]
    ov49_0225EF8C(r5, 2);
    *((u16*)(r6 + 2)) = 9;
    ov49_0225EF8C(r5, 1);
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    ov45_0222A310(r7);
    ov49_0225A034(r4, 1);
    // ldr r1, [sp, #4]
    ov49_0225A038(r4, ((r1 << 0x18) >> 0x18));
    // sub r2, #0x18
    ov45_0222A704(r7, 0x17, 0x17);
    ov49_02258E60(r6, 6);
    ov42_022282A4();
    ov49_02259FEC(r4);
    ov49_02258E34(r6);
    // add r1, sp, #0x10
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    *((u16*)(r4 + 6)) = 3;
    // ldrsh r2, [r1, r0]
    // asr r0, r2, #3
    // add r0, r2, r0
    // asr r0, r0, #4
    // strh r0, [r4]
    // ldrsh r1, [r1, r0]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    *((u16*)(r4 + 2)) = (6 >> 0x1c);
    *((u16*)(r4 + 4)) = r7;
    *((u16*)(r4 + 8)) = 0;
    ov49_0225EF68(r5);
    ov49_02258E60(r6, 6);
    ov42_022282A4();
    // ldr r0, [sp, #0xc]
    ov49_02258EAC(r6, 2, r0);
    ov49_0225EF90(r5);
    ov49_02258E60(r6, 5);
    ov49_0225EF90(r5);
    // ldr r2, [sp, #8]
    ov49_0225A30C(r4, 1, *((u16*)r2));
    ov49_0225A08C(r4, r0);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225A0EC(r4);
    ov49_0225EF90(r5);
    ov49_0225EF68(r5);
    ov49_02259FE8(r4);
    ov45_0222A5E8(1);
    // ldr r0, [sp, #0xc]
    ov49_02258EEC(r6, 1);
    ov49_0225A010(r4);
    // ldr r1, [sp]
    ov49_0225EF98(ov49_02269B38, 0);
    GF_AssertFail();
}





void ov49_02260C58(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260C6A: ; jump table
}





void ov49_02260CC0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260CD2: ; jump table
}





void ov49_02260D28(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260D3A: ; jump table
}





void ov49_02260D90(void) {
    ov49_0225EF88();
    ov49_02259FE8(r4);
    ov45_0222A330();
    ov49_0225A30C(r4, 1, 3);
    ov45_0222A374(r6, r0);
    ov49_0225A30C(r4, 1, 0x4e);
    ov49_0225A30C(r4, 1, 2);
    ov49_0225A08C(r4, r0);
    PlaySE(0x000005DC);
    ov49_0225EF90(r5);
    ov49_0225A0AC(r4);
    ov49_0225A0EC(r4);
    ov49_02259FF0(r4);
    ov49_02258DAC();
    ov49_02258EEC(r4, r0, 1);
}





void ov49_02260E2C(void) {
    // str r2, [sp]
    ov49_02259FF0(r1);
    // str r0, [sp, #8]
    ov49_02259FF8(r5);
    ov49_0225A008(r5);
    // str r0, [sp, #0xc]
    ov49_02259FE8(r5);
    // str r0, [sp, #4]
    ov49_0225EF84(r6);
    ov49_0225EF88(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02260E76: ; jump table
    ov49_0225EF40(r6, 0x18);
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    ov49_02258D70();
    *((u32*)(r4 + 0xc)) = r0;
    ov49_0225A040(r5);
    *((u16*)(r4 + 6)) = 2;
    *((u16*)(r4 + 6)) = 1;
    *((u16*)(r4 + 6)) = 0;
    GF_AssertFail(0);
    ov49_0225EF8C(r6, 1);
    // ldr r0, [sp, #4]
    ov45_0222A374();
    *((u16*)(r4 + 4)) = 8;
    ov49_0225EF8C(r6, 6);
    // ldr r0, [sp, #4]
    ov45_0222A330();
    *((u16*)(r4 + 4)) = 0xa;
    ov49_0225EF8C(r6, 6);
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    ov45_0222ADB8(*((u16*)(r4 + 6)));
    // mvn r1, r1
    // str r0, [r4]
    ov49_0225EF8C(r6, 2);
    ov49_0225A30C(r5, 0, 0x1f);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    *((u16*)(r4 + 4)) = 9;
    ov49_0225EF8C(r6, 6);
    // tst r1, r0
    // tst r0, r1
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    ov45_0222ADC8(*((u32*)(gSystem + 0x48)), 0x80);
    ov49_0225A0CC(r5);
    *((u8*)(r4 + 0xa)) = 6;
    *((u16*)(r4 + 4)) = 0xf;
    ov49_0225EF8C(r6, 0xc);
    ov49_022611F4(r4, r7);
    ov49_0225A0CC(r5);
    // ldr r0, [sp, #4]
    ov45_0222AE44();
    *((u16*)(r4 + 8)) = 0;
    ov49_02259FE8(r5);
    ov45_0222A5E8(0xa);
    ov49_0225A044(r5);
    // ldr r0, [sp, #0xc]
    ov49_0225CC44();
    ov49_02259130(*((u32*)(r4 + 0xc)), 0);
    ov49_0225916C(*((u32*)(r4 + 0xc)), 1);
    PlaySE(0x000005C1);
    ov49_0225A510(r5);
    *((u8*)(r4 + 0xa)) = 3;
    ov49_0225EF8C(r6, 0xc);
    // ldr r2, [sp, #0xc]
    ov49_02261234(r4, r7);
    ov49_0225916C(*((u32*)(r4 + 0xc)), 0);
    ov49_02259160(*((u32*)(r4 + 0xc)), 2);
    ov49_022591B4(*((u32*)(r4 + 0xc)), 8);
    ov49_0225EF8C(r6, 4);
    *((u16*)(r4 + 8)) = 0;
    ov49_02261434(r4, r7, r5);
    // ldr r1, [sp, #0xc]
    ov49_022611D4(r4);
    ov49_022613AC(r4, r7);
    ov49_0225EF8C(r6, 5);
    ov49_0225A53C(r5, 0);
    ov49_02261434(r4, r7, r5);
    // ldr r1, [sp, #0xc]
    ov49_022611D4(r4);
    // add r1, sp, #0x10
    ov49_02259154(*((u32*)(r4 + 0xc)));
    ov49_02261460(r4, r7, r5);
    // ldr r1, [sp, #0x10]
    *((u8*)(r4 + 0xb)) = 0;
    ov49_0225EF8C(r6, 0xd);
    // ldr r0, [sp, #8]
    ov49_02258EAC(*((u32*)(r4 + 0xc)), 2, 1);
    ov49_0225EF8C(r6, 7);
    ov49_02258E60(*((u32*)(r4 + 0xc)), 5);
    ov49_0225EF8C(r6, *((u16*)(r4 + 4)));
    ov49_0225A30C(r5, 0, 0x1e);
    ov49_0225A08C(r5, r0);
    *((u16*)(r4 + 4)) = 0xf;
    ov49_0225EF8C(r6, 0xb);
    ov49_0225A30C(r5, 0, 0x20);
    ov49_0225A08C(r5, r0);
    *((u16*)(r4 + 4)) = 0xf;
    ov49_0225EF8C(r6, 0xb);
    ov49_0225A30C(r5, 0, 0x21);
    ov49_0225A08C(r5, r0);
    *((u16*)(r4 + 4)) = 0xf;
    ov49_0225EF8C(r6, 0xb);
    ov49_0225A0AC(r5);
    ov49_0225EF8C(r6, *((u16*)(r4 + 4)));
    ov49_0225A0EC(r5);
    ov49_0225EF8C(r6, *((u8*)(r4 + 0xa)));
    ov49_02261434(r4, r7, r5);
    ov49_02261460(r4, r7, r5);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov49_0225A034(r5, 1);
    ov49_0225A038(r5, 0);
    ov49_0225A0EC(r5);
    ov49_02259FE8(r5);
    ov45_0222A5E8(0xb);
    ov49_0225EF8C(r6, 0xe);
    ov49_02261434(r4, r7, r5);
    ov49_02261460(r4, r7, r5);
    ov49_0225A010(r5);
    ov49_0225A0EC(r5);
    // ldr r0, [sp, #8]
    ov49_02258EEC(*((u32*)(r4 + 0xc)), 1);
    ov49_0225EF68(r6);
    // ldr r1, [sp]
    ov49_0225EF98(r7, ov49_02269B38, 0);
}





void ov49_022611D4(void) {
    // add r1, sp, #0
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
}





void ov49_022611F4(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r3, sp, #8
    // add r1, sp, #0x14
    // ldr r1, [sp, #0x14]
    // add r1, r1, r0
    // ldr r0, [sp, #8]
}





void ov49_02261234(void) {
    // ldrsh r1, [r5, r0]
    *((u16*)(r0 + 8)) = (r1 + 1);
    // ldrsh r0, [r5, r0]
    *((u16*)(r0 + 8)) = 0x18;
    // add r1, sp, #0xc
    // add r2, sp, #8
    ov45_0222AE08(*((u32*)r0), (r1 + 1));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // add r3, sp, #0x1c
    ov49_0225E420(r6);
    ov49_02258E34(*((u32*)(r5 + 0xc)));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // add r0, sp, #4
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // add r1, sp, #0x28
    ov49_02258800((r0 >> 0x10), *((u16*)(r1 + 2)));
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x2c]
    // sub r6, r1, r0
    // ldrsh r0, [r5, r0]
    _fflt((8 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r0, r0, r2
    // adc r1, r3
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (6 << 0xe), (2 << 0xa), 0);
    // str r0, [sp, #0x14]
    // ldrsh r2, [r5, r0]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x30]
    // sub r6, r1, r0
    _fflt(((r2 - 4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r0, r0, r2
    // adc r1, r3
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (5 << 0xe), (2 << 0xa), 0);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x10
    // add r1, sp, #0x28
    VEC_Add(0, 0);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    ov49_0225CC20(r7);
    // ldrsh r1, [r5, r0]
    _s32_div_f((0x00007FFF * r1), 0x18);
    // asr r0, r0, #4
    // ldr r1, [sp, #0x14]
    // ldrsh r3, [r0, r2]
    // asr r0, r3, #0x1f
    // add r2, r6, r2
    // adc r0, r3
    // add r0, r1, r2
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    ov49_02259148(*((u32*)(r5 + 0xc)), (((2 << 0xa) >> 0xc) | (((FX_SinCosTable_ << 0x10) | (r3 >> 0x10)) << 0x14)), 0);
}





void ov49_022613AC(void) {
    // ldrsh r1, [r5, r0]
    *((u16*)(r0 + 8)) = (r1 + 1);
    // ldrsh r0, [r5, r0]
    *((u16*)(r0 + 8)) = 0x10;
    // ldrsh r0, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // asr r0, r2, #2
    // add r0, r2, r0
    // asr r0, r0, #4
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, ((((0x00007FFF >> 0x1d) << 0xd) >> 0x10) << 2), (3 << 0xc), 0);
    // add r2, r0, r2
    // adc r1, r3
    // add r1, sp, #0
    ov49_02259154(*((u32*)(r5 + 0xc)), (2 << 0xa), 0);
    // ldr r0, [sp, #4]
    // add r1, sp, #0
    // add r0, r0, r4
    // str r0, [sp, #4]
    ov49_02259148(*((u32*)(r5 + 0xc)));
}





void ov49_02261434(void) {
    // add r1, sp, #0
    // add r2, sp, #4
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r3, sp, #8
    // add r1, sp, #8
}





void ov49_02261460(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // add r0, #0x10
    // add r0, #0x10
    // add r0, #0x10
    // add r0, #0x10
    // add r0, #0x10
    // add r1, sp, #8
    // ldr r0, [sp, #0xc]
    // add r1, sp, #8
    // add r0, r0, r4
    // str r0, [sp, #0xc]
}





void ov49_022614CC(void) {
    // str r0, [sp]
    ov49_0225A10C(r1, 0x12);
    ov49_0225A40C(r5, 0, 1);
    ov49_0225A30C(r5, r7, 6);
    ov49_0225A144(r5, r0, r4);
    ov49_0225A30C(r5, 1, 7);
    ov49_0225A144(r5, r0, 0);
    // ldr r2, [sp]
    // add r2, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    ov49_0225A154(r5, ov49_02269C00);
    // ldr r1, [sp]
    *((u32*)(r1 + 8)) = r0;
}





void ov49_02261540(void) {
}





void ov49_0226154C(void) {
    ov49_02259FE8(r1);
    // str r0, [sp, #8]
    ov49_02259FF0(r6);
    // str r0, [sp, #0xc]
    ov49_02258D70(r4);
    ov49_0225EF84(r5);
    // str r0, [sp, #0x10]
    ov49_0225A010(r6);
    // str r0, [sp, #0x14]
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261594: ; jump table
    ov49_0225EF40(r5, 8);
    ov49_0225EF8C(r5, 1);
    // ldr r0, [sp, #8]
    ov45_0222A230(r4);
    // ldr r0, [sp, #8]
    ov45_0222A550(r4);
    ov49_0225EF8C(r5, 2);
    // ldr r0, [sp, #8]
    ov45_0222A578(r4);
    ov49_0225EF8C(r5, 1);
    ov45_0222AADC();
    ov45_0222AA5C(r6);
    // ldr r0, [sp, #0xc]
    ov49_02258CB8(r4, r0);
    ov49_022591C0(0);
    ov49_0225EF8C(r5, 3);
    // ldr r0, [sp, #8]
    ov45_0222A578(r4);
    ov49_02258D54(r7);
    ov49_0225EF8C(r5, 1);
    ov45_0222A920();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #8]
    ov49_02261DBC(1, r6, r7);
    ov49_0225EF8C(r5, 5);
    // ldr r0, [sp, #0xc]
    ov49_02258EEC(r7, 0);
    ov49_0225A06C(r6, ((r4 << 0x18) >> 0x18), 1);
    ov49_0225A04C(r6, ((r4 << 0x18) >> 0x18), 1);
    ov49_02259130(r7, 0);
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    ov49_0225EFC4(r4, ov49_02269B58);
    // ldr r0, [sp, #0xc]
    ov49_02258EEC(r7, 4);
    ov49_0225EF8C(r5, 4);
    ov49_0225A04C(r6, ((r4 << 0x18) >> 0x18), 1);
    ov49_0225A06C(r6, ((r4 << 0x18) >> 0x18), 1);
    ov49_022591C0(r7, 1);
    ov49_02258F38(r7);
    ov49_0225EF90(r5);
    ov49_0225EF68(r5);
    // ldr r0, [sp, #0xc]
    ov49_02258EEC(r7, 2);
    // ldr r0, [sp, #0x14]
    ov49_0225EF98(r4, ov49_02269B40, 0);
    ov49_0225A04C(r6, ((r4 << 0x18) >> 0x18), 0);
    ov49_0225A06C(r6, ((r4 << 0x18) >> 0x18), 0);
}





void ov49_02261720(void) {
    // str r0, [sp, #8]
    ov49_02259FE8(r1);
    ov49_02259FF0(r5);
    // str r0, [sp, #0x10]
    ov49_0225A010(r5);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    ov49_02258D70(r4);
    // ldr r0, [sp, #0x10]
    ov49_02258DAC();
    // ldr r0, [sp, #8]
    ov49_0225EF84();
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    ov49_0225EF88();
    // ldr r0, [sp, #8]
    ov49_0225EF40(8);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    ov49_0225EF8C(1);
    ov45_0222A25C(r6, r4);
    // ldr r0, [sp, #8]
    ov49_0225EF68();
    // ldr r0, [sp, #0x10]
    ov49_02258EEC(r7, 0);
    ov49_0225A06C(r5, ((r4 << 0x18) >> 0x18), 1);
    ov49_0225A04C(r5, ((r4 << 0x18) >> 0x18), 1);
    // ldr r0, [sp, #0xc]
    ov49_0225EF98(r4, ov49_02269B48, 0);
    ov45_0222A2A0(r6, r4);
    ov45_0222A374(r6);
    ov45_0222ADA8(r6, r4);
    // mvn r1, r1
    // ldr r0, [sp, #0x10]
    ov49_02258EEC(r7, 0);
    ov49_0225A06C(r5, ((r4 << 0x18) >> 0x18), 1);
    ov49_0225A04C(r5, ((r4 << 0x18) >> 0x18), 1);
    ov49_02259130(r7, 0);
    // ldr r0, [sp, #8]
    ov49_0225EF68();
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    ov49_0225EF98(r4, ov49_02269B50);
    ov45_0222A578(r6, r4);
    ov45_0222A920();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    ov49_02261DBC(0, r6, r5, r7);
    // ldr r0, [sp, #0x10]
    ov49_02258EEC(r7, 0);
    ov49_0225A06C(r5, ((r4 << 0x18) >> 0x18), 1);
    ov49_0225A04C(r5, ((r4 << 0x18) >> 0x18), 1);
    ov49_02259130(r7, 0);
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    ov49_0225EFC4(r4, ov49_02269B58);
    ov45_0222AD58(r6, r4);
    // ldr r0, [sp, #0x10]
    ov49_02258EEC(r7, 0);
    ov49_0225A04C(r5, ((r4 << 0x18) >> 0x18), 1);
    // ldr r0, [sp, #0xc]
    ov49_0225EFC4(r4, ov49_02269B80, 0);
}





void ov49_022618C0(void) {
    // str r2, [sp]
    ov49_02259FF0(r1);
    // ldr r1, [sp]
    ov49_02258D70();
    ov49_0225EF88(r5);
    ov49_02258EEC(r7, r4, 3);
    ov49_0225EF90(r5);
    ov49_02258F38(r4);
    ov49_0225EF90(r5);
    ov49_02258D54(r4);
    ov49_0225A010(r6);
    // ldr r1, [sp]
    ov49_0225EF98(ov49_02269B78, 0);
}





void ov49_02261930(void) {
    ov49_02259FE8(r1);
    // str r0, [sp]
    ov49_02259FF0(r6);
    // str r0, [sp, #8]
    ov49_02259FF8(r6);
    // str r0, [sp, #4]
    ov49_0225EF84(r5);
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261970: ; jump table
    ov49_0225EF40(r5, 0x20);
    // ldr r0, [sp, #8]
    ov49_02258D70(r7);
    // str r0, [r4]
    // ldr r0, [sp]
    ov45_0222ADA8(r7);
    // mvn r1, r1
    *((u32*)(r4 + 4)) = r0;
    GF_AssertFail(0);
    // add r2, #8
    ov45_0222AE08(*((u32*)(r4 + 4)), (r4 + 4), r4);
    // ldr r0, [sp, #8]
    ov49_02258EEC(*((u32*)r4), 3);
    ov49_0225EF8C(r5, 1);
    ov49_02258F38(*((u32*)r4));
    // ldr r0, [sp, #4]
    // add r3, sp, #0x34
    ov49_0225E420(*((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // ldr r1, [sp, #0x34]
    // sub r0, r1, r0
    *((u32*)(r4 + 0x10)) = (1 << 0x10);
    // add r1, sp, #0x34
    ov49_02259154(*((u32*)r4));
    // ldr r0, [sp, #0x38]
    // mov r3, sp
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x14)) = 0;
    // add r0, sp, #0xc
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    // add r1, sp, #0xc
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(0 + 2));
    ov49_02258DB4(*((u32*)r4), *((u32*)(r3 - 4)), *((u16*)0), (r3 - 4));
    PlaySE(0x0000064E);
    ov49_02259184(*((u32*)r4), 1);
    ov49_0225EF8C(r5, 2);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    *((u32*)(r4 + 0x14)) = 0x18;
    // ldr r0, [sp, #4]
    // add r3, sp, #0x28
    ov49_0225E420(0x18, *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x2c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // sub r7, r1, r0
    _fflt((*((u32*)(r4 + 0x14)) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r1, r0, #0x1f
    // asr r3, r7, #0x1f
    _ll_mul(r7);
    // add r0, r0, r2
    // adc r1, r3
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (6 << 0xe), (2 << 0xa), 0);
    // str r0, [sp, #0x20]
    // add r0, r0, r1
    // str r0, [sp, #0x20]
    // add r1, sp, #0x1c
    ov49_02259148(*((u32*)r4), *((u32*)(r4 + 0xc)));
    ov49_02259184(*((u32*)r4), 0);
    ov49_022591B4(*((u32*)r4), 8);
    ov49_02259160(*((u32*)r4), 2);
    ov49_0225EF8C(r5, 3);
    ov49_0225A520(r6, *((u32*)(r4 + 4)));
    // add r0, #0x18
    ov49_0225F438(r4);
    // add r0, #0x18
    ov49_0225F374(r4);
    // add r0, #0x18
    ov49_0225F438(r4);
    // add r0, #0x18
    ov49_0225F430(r4);
    // add r0, #0x18
    ov49_0225F394(r4);
    // ldr r0, [sp, #4]
    // add r3, sp, #0x10
    ov49_0225E420(*((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x10
    // add r0, r0, r6
    // str r0, [sp, #0x14]
    ov49_02259148(*((u32*)r4));
    // ldr r0, [sp]
    ov45_0222AD80(*((u32*)(r4 + 4)));
    ov49_0225EF8C(r5, 4);
    ov49_02258D54(*((u32*)r4));
    ov49_0225EF68(r5);
    ov49_0225A010(r6);
    ov49_0225EF98(r7, ov49_02269B78, 0);
}





void ov49_02261B74(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261BBA: ; jump table
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x14
    // strh r0, [r2]
    // add r1, sp, #0x1c
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // mov r3, sp
    // add r1, sp, #0x14
    // strh r2, [r3]
    // add r1, sp, #0x18
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp]
}





void ov49_02261DBC(void) {
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    ov49_02259FF0(r2);
    ov49_02258DAC();
    // str r0, [sp, #0xc]
    ov49_0225A000(r6);
    // ldr r0, [sp, #8]
    ov49_02258E60(4);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x20]
    // add r0, sp, #0x28
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261E04: ; jump table
    // add r0, sp, #0x1c
    // str r0, [sp]
    ov49_02261FC0(r6, r5, ov49_02269B90, 4);
    // add r0, sp, #0x1c
    // str r0, [sp]
    ov49_02261FC0(r6, r5, ov49_02269BC0, 4);
    // add r0, sp, #0x1c
    // str r0, [sp]
    ov49_02261FC0(r6, r5, ov49_02269BA0, 4);
    // str r0, [sp, #0x20]
    // add r0, sp, #0x1c
    // str r0, [sp]
    ov49_02261FC0(r6, r5, ov49_02269C20, 8);
    // str r0, [sp, #0x20]
    // add r0, sp, #0x1c
    // str r0, [sp]
    ov49_02261FC0(r6, r5, ov49_02269C40, 8);
    // str r0, [sp, #0x20]
    // add r0, sp, #0x1c
    // str r0, [sp]
    ov49_02261FC0(r6, r5, ov49_02269BB0, 4);
    // str r0, [sp, #0x20]
    // add r0, sp, #0x1c
    // str r0, [sp]
    ov49_02261FC0(r6, r5, ov49_02269BD0, 4);
    // ldr r0, [sp, #4]
    ov45_0222AFF8(r7);
    // ldr r0, [sp, #4]
    ov45_0222B00C(r7);
    // ldr r0, [sp, #4]
    ov45_0222B020(r7);
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r2, sp, #0x20
    // add r3, sp, #0x1c
    ov49_0225904C(r5);
    GF_AssertFail();
    // ldr r0, [sp, #0x20]
    ov42_022282A4();
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #8]
    ov49_02258E34(0);
    // add r1, sp, #0x14
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // mov r3, sp
    *((u16*)(r1 + 4)) = *((u16*)r1);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // ldr r0, [sp, #8]
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 0xa));
    // ldr r2, [sp, #0x20]
    ov49_02258E04(*((u16*)(r1 + 2)), *((u32*)(r3 - 4)), *((u16*)(r1 + 8)), (r3 - 4));
    // add r1, sp, #0x14
    // ldrsh r2, [r1, r0]
    // asr r0, r2, #3
    // add r0, r2, r0
    // asr r0, r0, #4
    // strb r0, [r4]
    // ldrsh r1, [r1, r0]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r0, r0, #4
    *((u8*)(r4 + 1)) = (6 >> 0x1c);
    // add r0, sp, #0x28
    *((u8*)(r4 + 2)) = *((u8*)((6 >> 0x1c) + 0x10));
    // ldr r0, [sp, #0x3c]
    *((u8*)(r4 + 3)) = r7;
    *((u8*)(r4 + 4)) = *((u8*)((6 >> 0x1c) + 0x10));
}





void ov49_02261FC0(void) {
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #4]
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // add r3, sp, #8
    ov49_022589D8(r0, *((u32*)r2));
    // add r1, sp, #8
    // add r2, sp, #8
    // ldr r0, [sp, #4]
    ov49_02258F7C(*((u16*)(r1 + 2)), *((u16*)r2));
    // add r1, sp, #8
    // ldr r0, [sp, #0x20]
    // strh r2, [r0]
    // ldr r0, [sp, #0x20]
    *((u16*)(*((u16*)r1) + 2)) = (*((u16*)r1) << 4);
}





void ov49_02262028(void) {
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    ov49_0225EF3C();
    // ldr r0, [sp, #0x10]
    ov49_0225EF84();
    ov49_02259FE8(r5);
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x10]
    ov49_0225EF88();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226205E: ; jump table
    ov45_0222F314(*((u8*)(r6 + 1)));
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    sub_02037454();
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    sub_0203988C();
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    ov45_0222F464();
    ov45_0222F314(*((u8*)(r6 + 1)));
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) - 1);
    // bpl _02262114
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    sub_020390C4();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02262128: ; jump table
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    // ldr r0, [sp, #0x10]
    ov49_0225EF88();
    _02262AB8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226215A: ; jump table
    // ldr r0, [sp, #0x10]
    ov49_0225EF40((*((u16*)(r0 + 6)) << 0x10), 0x44);
    // ldr r0, [sp, #0x10]
    ov49_0225EF90();
    _02262AB8();
    // ldr r0, [sp, #0x30]
    ov45_0222A414();
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(7, 0x1c);
    _02262AB8();
    // ldr r0, [sp, #0x30]
    ov45_0222A394();
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(2, 0x1c);
    _02262AB8();
    PlaySE(0x000005DD);
    // ldr r0, [sp, #0x10]
    ov49_0225EF90();
    _02262AB8();
    ov49_0225A37C(r5, *((u8*)(r6 + 2)), 0);
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    ov49_02262BF8(r4, r5, 0);
    _02262AB8();
    ov49_02262C38(r4, r5, 3, 1);
    // add r4, #0x18
    ov49_0225A174(r5, r4, 0, 0);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4);
    _02262AB8();
    ov49_0225A1D4(r5);
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(5, 0x1c);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(6);
    _02262AB8();
    ov49_0225A1E4(r5, 0, 0);
    ov49_02262CA8(r4, r5);
    _02262AB8();
    ov49_0225A37C(r5, *((u8*)(r6 + 2)), 0);
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // add r3, #0x22
    ov49_02262BF8(r4, r5, *((u8*)(r6 + 2)));
    _02262AB8();
    // ldr r0, [sp, #0x30]
    ov45_0222A394();
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(2, 0x1c);
    ov45_0222F274(*((u8*)(r6 + 1)));
    ov45_0222F2D4(*((u8*)(r6 + 1)));
    ov45_0222F294(*((u8*)(r6 + 1)));
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(1, 0x1c);
    ov45_0222F3E8(*((u8*)(r6 + 1)));
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(7, 0x1c);
    ov45_0222F3E8(*((u8*)(r6 + 1)));
    // strh r0, [r4]
    *((u32*)(r4 + 0x10)) = (0xe1 << 2);
    // ldrsh r2, [r4, r1]
    ov49_0225A30C(r5, 0, 0xa);
    *((u32*)(r4 + 0x14)) = 1;
    ov49_0225A30C(r5, 0xb);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    sub_0203981C(*((u8*)(r6 + 1)));
    ov45_0222F464();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // ldr r3, [sp, #0x14]
    ov45_0222AC14(0, *((u8*)(r6 + 2)), 1);
    *((u8*)(r4 + 7)) = 1;
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // add r0, #0x3c
    ov49_02262D70(r4, r5, *((u8*)(r6 + 2)), 1);
    // add r4, #0x3c
    ov49_02262E04(r4, r5, 1);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(7);
    sub_0203988C();
    // str r0, [sp, #0x2c]
    ov45_0222F314(*((u8*)(r6 + 1)));
    ov45_0222F3E8(*((u8*)(r6 + 1)));
    // strh r0, [r4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // ldrsh r1, [r4, r0]
    ov49_0225A0CC(r5);
    *((u32*)(r4 + 0x14)) = 1;
    ov49_0225A30C(r5, 0, 0xb);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    // add r0, #0x3c
    ov49_02262DF8(r4, r5, 0);
    // ldr r0, [sp, #0x2c]
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    // strb r0, [r6]
    ov49_0225A0CC(r5);
    ov49_0225A30C(r5, 0, r6);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(9);
    // add r0, #0x3c
    *((u16*)(r4 + 8)) = r7;
    ov49_02262DD4(r4, 0);
    // add r4, #0x3c
    ov49_02262DF8(r4, r5, 0);
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ov45_0222F464();
    // strb r0, [r6]
    ov49_0225A0CC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x17);
    // strb r0, [r6]
    ov49_0225A0CC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x10);
    ov45_0222F464();
    *((u8*)(r4 + 7)) = r7;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // ldr r3, [sp, #0x14]
    ov45_0222AC14(0, *((u8*)(r6 + 2)), r7);
    // ldrsh r0, [r4, r0]
    ov45_0222F314(*((u8*)(r6 + 1)));
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(3, 0x17);
    ov45_0222F274(*((u8*)(r6 + 1)));
    ov45_0222F294(*((u8*)(r6 + 1)));
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0, 0x17);
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0, 8);
    ov49_0225A0CC(r5);
    ov49_0225A30C(r5, 0, 0x12);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r0, #0x3c
    ov49_02262DF8(r4, r5, 0);
    sub_0203988C();
    ov45_0222F314(*((u8*)(r6 + 1)));
    sub_020390C4();
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(8, 9);
    *((u16*)(r4 + 8)) = r7;
    ov45_0222F274(*((u8*)(r6 + 1)));
    ov45_0222F294(*((u8*)(r6 + 1)));
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0, 0x17);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r0, #0x3c
    ov49_02262DF8(r4, r5, 0);
    ov49_02259FE8(r5);
    ov45_0222A5E8(*((u8*)(r6 + 3)));
    sub_02039B38();
    ov49_02259FE8(r5);
    ov45_0222A2C8();
    sub_02034354(0);
    // ldr r0, [sp, #0x30]
    ov45_0222AB1C();
    sub_02034B00();
    sub_020378E4(0);
    // ldr r1, [sp, #0x10]
    ov49_02262C20(r4, 0xa, 0x11);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r4, #0x3c
    ov49_02262DF8(r4, r5, 0);
    sub_02034434();
    sub_0203769C();
    sub_0203476C();
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0xb);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r0, #0x3c
    ov49_02262DF8(r4, r5, 0);
    sub_02034780();
    sub_0203476C();
    sub_02034780();
    sub_020347A0();
    ov45_0222F314(*((u8*)(r6 + 1)));
    ov45_0222F464();
    ov45_0222F1BC(*((u16*)(r4 + 2)));
    *((u16*)(r4 + 2)) = 1;
    ov45_0222F218(1);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0xc);
    ov45_0222F218();
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r0, #0x3c
    ov49_02262DF8(r4, r5, 0);
    sub_02037BEC();
    // ldr r0, [sp, #0x30]
    ov45_0222A43C();
    // ldr r1, [sp, #0x10]
    ov49_02262C20(r4, 0xd, 0xe);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r0, #0x3c
    ov49_02262DF8(r4, r5, 0);
    // ldr r0, [sp, #0x30]
    ov45_0222A548();
    *((u32*)(r4 + 0xc)) = r0;
    sub_0203769C();
    // add r4, #0xc
    sub_02037C0C(r4);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0xe);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r4, #0x3c
    ov49_02262DF8(r4, r5, 0);
    // str r0, [sp, #0x18]
    sub_020347A0(0);
    // str r0, [sp, #0x28]
    sub_0203769C();
    // str r0, [sp, #0x24]
    // str r7, [sp, #0x20]
    ov45_0222F430();
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    sub_02037C44(r7);
    ov45_0222EC68(*((u32*)r0));
    // mvn r1, r1
    // str r0, [sp, #0x18]
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    // ldr r0, [sp, #0x30]
    ov45_0222A450(*((u32*)r5), r4);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x30]
    ov45_0222A480(1, r4);
    ov45_0222F464();
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(1, 0xf);
    // strb r0, [r6]
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(4, 0x17);
    sub_020398D4(0, 1);
    ov45_0222F464();
    // ldr r0, [sp, #0x30]
    // add r1, sp, #0x34
    ov45_0222A498();
    ov45_0222F314(*((u8*)(r6 + 1)));
    // add r3, sp, #0x34
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    ov45_0222AC14(1, *((u8*)(r6 + 2)), r0, *((u8*)r3));
    ov49_0225A0CC(r5);
    // ldr r1, [sp, #0x10]
    ov49_02262C20(r4, 0x1c, 0x12);
    ov49_0225A30C(r5, 0, 0x1a);
    ov49_0225A08C(r5, r0);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x11);
    // add r4, #0x3c
    ov49_02262DB8(r4, r5);
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    ov49_02262CB4(r4, r5, r6);
    ov49_0225A0AC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x12);
    ov49_0225A294(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x13);
    ov49_0225A2C4(r5);
    ov49_0225A2F8(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x17);
    // ldr r0, [sp, #0x30]
    ov45_0222A404();
    ov49_0225A2F8(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x14);
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    ov49_02262CB4(r4, r5, r6);
    ov49_0225A2F8(r5);
    ov45_0222F3E8(*((u8*)(r6 + 1)));
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // add r0, #0x3c
    ov49_02262D70(r4, r5, *((u8*)(r6 + 2)), 1);
    // add r0, #0x3c
    ov49_02262E04(r4, r5, 1);
    // ldrsh r2, [r4, r1]
    ov49_0225A30C(r5, 0, 0xa);
    *((u32*)(r4 + 0x14)) = 1;
    ov49_0225A30C(r5, 0xb);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(7);
    ov45_0222F314(*((u8*)(r6 + 1)));
    // strb r1, [r6]
    ov49_0225A30C(r5, 0, 0x12);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(9);
    // str r0, [sp]
    // add r0, #0x3c
    ov49_02262D70(r4, r5, *((u8*)(r6 + 2)), 1);
    // add r4, #0x3c
    ov49_02262E04(r4, r5, 1);
    ov49_0225A30C(r5, 0, 0x12);
    ov49_0225A09C(r5, r0);
    ov49_0225A0BC(r5);
    // str r0, [sp]
    // add r0, #0x3c
    ov49_02262D70(r4, r5, *((u8*)(r6 + 2)), 1);
    // add r0, #0x3c
    ov49_02262DD4(r4, 0);
    // add r4, #0x3c
    ov49_02262DF8(r4, r5, 1);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(8);
    sub_020343E4();
    sub_0203986C();
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x18);
    sub_0203988C();
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x1c);
    ov49_0225A0AC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(*((u8*)(r4 + 4)));
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 5)) = (5 - 1);
    // ldrsb r0, [r4, r0]
    sub_02037AC0(*((u8*)(r4 + 6)));
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(0x1b);
    *((u16*)(r4 + 0xa)) = (*((u16*)(r4 + 0xa)) + 1);
    sub_02037AC0(*((u8*)(r4 + 6)));
    *((u16*)(r4 + 0xa)) = 0;
    sub_02037B38(*((u8*)(r4 + 6)));
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(*((u8*)(r4 + 4)));
    ov49_0225A0EC(r5);
    ov49_02262CA8(r4, r5);
    // add r4, #0x3c
    ov49_02262DB8(r4, r5);
    ov49_0225A2F8(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF68();
}





void ov49_02262AC4(void) {
}





void ov49_02262B14(void) {
    ov49_0225EF84();
    ov49_0225EF88(r6);
    ov49_0225EF40(r6, 8);
    // str r0, [sp, #4]
    ov49_0225A040(r5);
    GF_AssertFail();
    ov49_0225A37C(r5, r4, 0);
    ov49_0225A30C(r5, 1, r7);
    ov49_0225A0FC(r5, r0);
    // ldr r0, [sp, #4]
    // str r3, [sp]
    ov49_02262D70(r5, r4, 0);
    // ldr r0, [sp, #4]
    ov49_02262E04(r5, 1);
    ov49_0225EF90(r6);
    // tst r0, r1
    ov49_02262DB8(r4, r5);
    ov49_0225A0EC(r5);
    ov49_02259FF0(r5);
    ov49_02258DAC();
    ov49_02258EEC(r4, r0, 1);
    ov49_0225EF68(r6);
    ov49_02262E04(r4, r5, 0);
}





void ov49_02262BF8(void) {
    // ldr r0, [sp, #0x10]
}





void ov49_02262C20(void) {
    *((u8*)(r0 + 4)) = r2;
    *((u8*)(r0 + 6)) = r3;
    *((u8*)(r0 + 5)) = 0;
    *((u16*)(r0 + 0xa)) = 0;
}





void ov49_02262C38(void) {
    // str r0, [sp]
    ov49_0225A10C(r1, r2);
    // ldr r0, [sp]
    *((u32*)(r0 + 0x38)) = r6;
    // add r2, r7, r4
    ov49_0225A30C(r5, 0);
    ov49_0225A144(r5, r0, r4);
    // ldr r2, [sp]
    // add r2, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    *((u16*)(r0 + 0x28)) = *((u32*)(r0 + 0x38));
    // ldr r0, [sp]
    *((u16*)(*((u16*)(r0 + 0x2a)) + 0x2a)) = *((u32*)(r0 + 0x38));
    ov49_0225A154(r5, *((u32*)(r0 + 0x38)), ov49_02269DFC);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x18)) = r0;
}





void ov49_02262CA8(void) {
}





void ov49_02262CB4(void) {
    ov49_02259FE8(r1);
    // str r0, [sp, #0x10]
    sub_0203988C();
    ov45_0222F314(*((u8*)(r4 + 1)));
    // strb r0, [r4]
    ov49_0225EF8C(r6, 0x17, r0);
    *((u16*)(r5 + 8)) = r2;
    ov49_0225EF8C(r6, 0x15);
    *((u8*)(r5 + 7)) = r2;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x28]
    ov45_0222AC14(0, *((u8*)(r4 + 2)));
    ov45_0222F3E8(*((u8*)(r4 + 1)));
    // strh r0, [r5]
    // ldrsh r2, [r5, r0]
    ov45_0222F314(*((u8*)(r4 + 1)));
    // strb r0, [r4]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225EF8C(r6, 0x16);
    ov49_0225EF8C(r6, 0x14);
}





void ov49_02262D70(void) {
    GF_AssertFail();
    // strb r0, [r5]
    *((u8*)(r5 + 1)) = 0;
    *((u8*)(r5 + 2)) = 0;
    *((u8*)(r5 + 3)) = 0;
    *((u8*)(r5 + 4)) = 0;
    *((u8*)(r5 + 5)) = 0;
    *((u8*)(r5 + 6)) = 0;
    *((u8*)(r5 + 7)) = 0;
    *((u8*)(r5 + 6)) = r4;
    // ldr r1, [sp, #0x18]
    *((u8*)(r5 + 3)) = r6;
    ov49_02262DD4(r5);
    // str r0, [sp]
    ov49_0225A204(r7, 0x12, 3, 0xd);
}





void ov49_02262DB8(void) {
    // strb r2, [r0]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
}





void ov49_02262DD4(void) {
    // asr r1, r0, #0x10
    // ldrsh r0, [r4, r0]
}





void ov49_02262DF8(void) {
}





void ov49_02262E04(void) {
}





void ov49_02262E10(void) {
    // str r3, [sp, #4]
    // strb r7, [r5]
    // tst r0, r1
    // str r0, [sp]
    // tst r0, r1
    // str r2, [sp]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // tst r0, r1
    // str r2, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // sub r1, r1, r2
    // tst r0, r1
    // str r0, [sp]
    // str r2, [sp]
    // ldrsh r1, [r5, r1]
}





void ov49_02262FB4(void) {
    // str r2, [sp, #0xc]
    ov49_02259FE8(r1);
    ov49_0225A010(r5);
    // str r0, [sp, #0x24]
    ov49_0225EF84(r6);
    ov45_0222B034(r7);
    // str r0, [sp, #0x20]
    ov45_0222B040(r7);
    // str r0, [sp, #0x1c]
    ov45_0222B06C(r7);
    ov49_0225EF8C(r6, 0x20);
    ov49_0225A0CC(r5);
    *((u16*)(r4 + 0xa)) = 0;
    ov45_0222A5C0(r7);
    // str r0, [sp, #0x18]
    ov45_0222A578(r7, *((u8*)(r4 + 3)));
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    ov49_0225EF88(r6);
    // ldr r0, [sp, #0x14]
    ov49_0225EF8C(r6, 0x20);
    ov49_0225A0CC(r5);
    *((u16*)(r4 + 0xa)) = 0;
    ov49_0225EF88(r6);
    _02263B5E();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02263070: ; jump table
    ov49_0225EF40(r6, 0x50);
    // add r0, #0x44
    // strh r1, [r0]
    // add r0, #0x46
    // strh r1, [r0]
    // add r0, #0x38
    *((u32*)(r0 + 0x48)) = 0;
    ov49_0226526C(r0, 0);
    ov49_02259FF0(r5);
    // str r0, [sp, #0x28]
    ov49_02258DAC();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    ov49_02258F40();
    // str r0, [sp, #0x30]
    *((u16*)(r4 + 0xa)) = 0;
    ov49_0225EF8C(r6, 0x26);
    _02263B5E();
    ov49_02258E60(4);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x2c]
    ov49_02258E60(6);
    ov42_022282A4();
    // str r0, [sp, #0x38]
    ov45_0222AE64(r7);
    // ldr r2, [sp, #0x34]
    ov49_02264CA8(r4, r7);
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x30]
    *((u32*)(r4 + 0x10)) = r0;
    ov49_02259130(0);
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x38]
    ov49_02259160();
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x34]
    ov49_0225EFF0(0);
    PlaySE(0x000005E4);
    ov45_0222A5E8(r7, 9);
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x34]
    ov49_0225A428(r5, 0);
    ov49_0225EF8C(r6, 1);
    _02263B5E();
    ov49_0225EF8C(r6, 0x22);
    _02263B5E();
    ov45_0222AE74(r7, *((u8*)(r4 + 3)));
    ov49_0225EF8C(r6, 2);
    _02263B5E();
    ov49_0225EF8C(r6, 0x22);
    _02263B5E();
    // ldr r0, [sp, #0x20]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022631BA: ; jump table
    ov45_0222B0E8(r7, *((u8*)(r4 + 3)));
    ov49_0225EF8C(r6, 3);
    _02263B5E();
    ov49_0225EF8C(r6, 0x22);
    _02263B5E();
    ov49_0225EF8C(r6, 0x20);
    _02263B5E();
    ov45_0222B0F8(r7);
    ov45_0222B118(r7, 7);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    ov49_02264D4C(r4, r7, r5, *((u8*)(r4 + 4)));
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 4, r6);
    _02263B5E();
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    ov49_02264D4C(r4, r7, r5, *((u8*)(r4 + 5)));
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 5, r6);
    ov45_0222AED8(r7, 0);
    _02263B5E();
    // ldr r0, [sp, #0x20]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02263268: ; jump table
    ov49_0225A0CC(r5);
    ov45_0222B028(r7);
    ov49_0225EF8C(r6, 6);
    _02263B5E();
    ov49_0225EF8C(r6, 8);
    _02263B5E();
    ov49_0225A0DC(r5);
    ov49_0225A0BC(r5);
    ov49_02264EC8(r4, r5);
    _02263B5E();
    ov49_0225EF8C(r6, 0x20);
    ov49_0225A0CC(r5);
    _02263B5E();
    ov49_02264E20(r4, r7, r5);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 7, r6);
    _02263B5E();
    ov49_0225EF8C(r6, 7);
    _02263B5E();
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x28);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 9, r6);
    _02263B5E();
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_0225A334(r5, *((u16*)(r4 + 8)), 1);
    ov49_02264C50(r5, *((u8*)(r4 + 3)), *((u16*)(r4 + 8)));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 9, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x2e);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xb, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x36);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xb, r6);
    // str r0, [sp]
    // add r0, #0x14
    ov49_02264F9C(r4, r5, 3, 0x00000203);
    // add r1, #0x14
    ov49_0225A174(r5, r4, 0, 0);
    ov49_02264F10(r4);
    ov49_0225EF8C(r6, 0xc);
    ov49_0225A1D4(r5);
    ov49_0225EF8C(r6, 0xd);
    ov49_0225EF8C(r6, 0x13);
    ov49_02258E60(*((u32*)(r4 + 0x10)), 4);
    // ldr r1, [sp, #0xc]
    ov45_0222AB94(r7, r0);
    ov45_0222AF80(r7);
    ov49_0225EF8C(r6, 0x21);
    ov49_02264F24(r4, r5);
    ov49_0225A1E4(r5, 0, 0);
    // add r0, #0x14
    ov49_02265260(r4, r5);
    ov49_02264F1C(r4);
    // ldr r0, [sp, #0x18]
    ov45_0222AAC8();
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x14]
    ov45_0222AAC8();
    // ldr r1, [sp, #0x40]
    *((u8*)(r4 + 0xc)) = 1;
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // str r0, [sp]
    ov49_02264E90(r4, r7, r5, 1);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x000001FB);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x12, r6);
    ov45_0222AED8(r7, 4);
    *((u8*)(r4 + 0xc)) = 0;
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // str r3, [sp]
    ov49_02264E90(r4, r7, r5, 1);
    // str r0, [sp]
    ov49_02264E90(r4, r7, r5, 2);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), (0x7f << 2));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xe, r6);
    // str r0, [sp]
    // add r0, #0x14
    ov49_02264F9C(r4, r5, 2, 0x00000206);
    // add r1, #0x14
    ov49_0225A174(r5, r4, 0, 0);
    ov49_02264F10(r4);
    ov49_0225EF8C(r6, 0xf);
    ov49_0225A1D4(r5);
    ov45_0222AED8(r7, 3);
    ov49_0225EF8C(r6, 0x10);
    ov49_02258E60(*((u32*)(r4 + 0x10)), 4);
    // ldr r0, [sp, #0x14]
    ov45_0222AAC8();
    // ldr r1, [sp, #0xc]
    ov45_0222ABD0(r7, r6, r0);
    ov49_0225EF8C(r6, 0xa);
    ov49_02264F24(r4, r5);
    ov49_0225A1E4(r5, 0, 0);
    // add r0, #0x14
    ov49_02265260(r4, r5);
    ov49_02264F1C(r4);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // str r0, [sp]
    ov49_02264E90(r4, r7, r5, 1);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x000001FE);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x11, r6);
    // ldr r0, [sp, #0x14]
    ov45_0222AAC8();
    ov45_0222A72C(r7, r0);
    PlaySE(0x000005BF);
    ov49_0225EF8C(r6, 0x12);
    // ldr r0, [sp, #0x20]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226363A: ; jump table
    // ldr r1, [sp, #0x14]
    ov49_02264F78(r4);
    ov49_0225EF8C(r6, 0x21);
    ov49_0225EF8C(r6, 0xa);
    ov49_0225A0CC(r5);
    ov49_0225A0DC(r5);
    ov49_0225A0BC(r5);
    ov49_02264EC8(r4, r5);
    ov49_0225EF8C(r6, 0x20);
    ov49_0225A0CC(r5);
    ov45_0222AED8(r7, 5);
    ov49_0225EF8C(r6, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    ov49_02265044(r4, r5, 0x1e, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x14
    ov49_0225A1A4(r5, r4, 0, 0);
    ov49_0225EF8C(r6, 0x15);
    ov49_02264F10(r4);
    ov49_0225A1D4(r5);
    // mvn r1, r1
    // str r0, [sp, #0x44]
    ov49_02264F24(r4, r5);
    ov49_0225A1E4(r5, 0, 0);
    // add r0, #0x14
    ov49_02265260(r4, r5);
    // ldr r0, [sp, #0x44]
    // strb r0, [r4]
    ov49_0225EF8C(r6, 0x16);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, r3, r2
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x000001DD, *((u8*)r4));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x17, r6);
    // str r0, [sp]
    // add r0, #0x14
    // add r3, #0x73
    ov49_02264F9C(r4, r5, 4, (*((u8*)r4) << 2));
    // add r1, #0x14
    ov49_0225A174(r5, r4, 0, 0);
    ov49_0225EF8C(r6, 0x18);
    ov49_0225A1D4(r5);
    // str r0, [sp, #0x48]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022637A2: ; jump table
    ov49_0225A1E4(r5, 0, 0);
    // add r0, #0x14
    ov49_02265260(r4, r5);
    ov49_02264F1C(r4);
    // ldr r0, [sp, #0x48]
    // add r0, r0, r1
    *((u8*)(r4 + 1)) = *((u8*)r4);
    ov49_0225EF8C(r6, 0x19);
    ov49_02264F24(r4, r5);
    // add r0, #0x38
    ov49_02265274(r4, r7, (((*((u8*)(r4 + 1)) + 6) << 0x10) >> 0x10), 2);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, r3, r2
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x00000165, *((u8*)(r4 + 1)));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x1a, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, #0x55
    ov49_02264C04(r5, *((u8*)(r4 + 3)), *((u8*)r4));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x1b, r6);
    // add r0, #0x38
    ov49_022652D0(r4);
    // add r0, #0x38
    ov49_022652E0(r4);
    ov49_0225EF8C(r6, 0x1c);
    ov49_0225EF8C(r6, 0x20);
    ov49_0225A0CC(r5);
    ov49_0225A0DC(r5);
    ov49_0225A0BC(r5);
    // ldr r0, [sp, #0x20]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022638C8: ; jump table
    // ldr r1, [sp, #0x14]
    ov49_02264F78(r4);
    ov49_0225EF8C(r6, 0x1d);
    ov49_0225A0CC(r5);
    ov49_0225A0DC(r5);
    ov49_0225A0BC(r5);
    ov49_02264EC8(r4, r5);
    ov49_0225EF8C(r6, 0x20);
    ov49_0225A0CC(r5);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    ov49_0225EF8C(r6, 0x23);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // ldr r2, [sp, #0x10]
    // add r2, #0xec
    ov49_02264C04(r5, *((u8*)(r4 + 3)));
    ov49_0225A08C(r5, r0);
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x1e, r6);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x1f, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x33);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xa, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x32);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xa, r6);
    ov49_0225A1E4(r5, 0, 0);
    // add r0, #0x14
    ov49_02265260(r4, r5);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x2d);
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #0x4c]
    ov49_0225A08C(r5);
    *((u16*)(r4 + 0xa)) = 0;
    // ldr r0, [sp, #0x4c]
    String_GetLength(0);
    // str r0, [sp, #0x50]
    ov49_0225CB70(r5);
    // ldr r1, [sp, #0x50]
    // add r1, #0x3c
    // str r0, [sp]
    ov49_02264CFC(r4, ((0xff << 0x18) >> 0x18), 0x26, r6);
    ov45_0222AFC4(r7);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x2b);
    ov49_0225A08C(r5, r0);
    *((u16*)(r4 + 0xa)) = 0;
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x26, r6);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x2a);
    ov49_0225A08C(r5, r0);
    *((u16*)(r4 + 0xa)) = 0;
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x26, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), (0x59 << 2));
    ov49_0225A08C(r5, r0);
    *((u16*)(r4 + 0xa)) = 0;
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x26, r6);
    ov49_02264D14(r4, r6);
    ov49_02264D30(r4, r6, r5);
    // add r0, #0x44
    // add r1, #0x46
    ov45_0222A704(r7, *((u16*)r4), *((u32*)(r4 + 0x48)));
    ov45_0222AE64(r7);
    ov49_0225A0EC(r5);
    ov45_0222A5E8(r7, 1);
    ov49_02259FF0(r5);
    ov49_02258DAC();
    ov49_02258EEC(r7, r0, 1);
    ov49_02259130(*((u32*)(r4 + 0x10)), 1);
    ov49_02258E60(*((u32*)(r4 + 0x10)), 4);
    // ldr r0, [sp, #0x24]
    ov49_0225EFF0(r0, 1);
    ov49_0225A4D0(r5);
    ov49_02264CF8(r4);
    ov49_0225EF68(r6);
    ov49_02264F60(r4);
    // add r4, #0x38
    ov49_0226529C(r4, r7);
}





void ov49_02263B74(void) {
    ov49_02259FE8(r1);
    ov49_0225EF84(r6);
    ov45_0222B034(r7);
    // str r0, [sp, #0x14]
    ov45_0222B040(r7);
    // str r0, [sp, #0x10]
    ov45_0222B06C(r7);
    ov49_0225EF8C(r6, 0x1a);
    ov49_0225A0CC(r5);
    *((u16*)(r4 + 0xa)) = 0;
    ov45_0222A5C0(r7);
    // str r0, [sp, #0xc]
    ov45_0222A578(r7, *((u8*)(r4 + 3)));
    // str r0, [sp, #8]
    ov49_0225EF88(r6);
    // ldr r0, [sp, #8]
    ov49_0225EF8C(r6, 0x1a);
    ov49_0225A0CC(r5);
    *((u16*)(r4 + 0xa)) = 0;
    ov49_0225EF88(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02263C16: ; jump table
    ov49_0225EF40(r6, 0x50);
    // add r0, #0x44
    // strh r1, [r0]
    // add r0, #0x46
    // strh r1, [r0]
    *((u32*)(r0 + 0x48)) = 0;
    ov45_0222B020(r7, 0);
    // str r0, [sp, #0x18]
    // ldr r2, [sp, #0x18]
    ov49_02264CA8(r4, r7);
    // str r0, [sp, #0x1c]
    PlaySE(0x000005E4);
    ov45_0222A5E8(r7, 9);
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    ov49_0225A428(r5, 0);
    // ldr r1, [sp, #0x18]
    ov45_0222B0E8(r7);
    ov49_0225EF8C(r6, 1);
    _022644DA();
    ov49_0225EF8C(r6, 0x1a);
    _022644DA();
    ov45_0222B0B0(r7);
    _022644DA();
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    ov49_02264D4C(r4, r7, r5, *((u8*)(r4 + 5)));
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 2, r6);
    ov45_0222B0F8(r7);
    ov45_0222B118(r7, 7);
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    ov49_02264D4C(r4, r7, r5, *((u8*)(r4 + 4)));
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 3, r6);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02263D3A: ; jump table
    ov49_0225A0CC(r5);
    ov45_0222AED8(r7, 0);
    ov45_0222B028(r7);
    ov49_0225EF8C(r6, 4);
    ov49_0225EF8C(r6, 6);
    ov49_0225A0DC(r5);
    ov49_0225A0BC(r5);
    ov49_02264EC8(r4, r5);
    ov49_0225EF8C(r6, 0x1a);
    ov49_0225A0CC(r5);
    ov49_02264E20(r4, r7, r5);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 5, r6);
    ov49_0225EF8C(r6, 5);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x28);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 7, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_0225A334(r5, *((u16*)(r4 + 8)), 1);
    ov49_02264C50(r5, *((u8*)(r4 + 3)), *((u16*)(r4 + 8)));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 7, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x2f);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 9, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x35);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 9, r6);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02263E98: ; jump table
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(r6, 0xa);
    ov45_0222B0BC(r7);
    *((u32*)(r4 + 0x4c)) = 1;
    // ldr r1, [sp, #8]
    ov49_02264F78(r4);
    ov49_0225EF8C(r6, 0xe);
    ov45_0222B0BC(r7);
    *((u32*)(r4 + 0x4c)) = 1;
    // ldr r1, [sp, #8]
    ov49_02264F78(r4);
    ov45_0222AED8(r7, 1);
    ov49_0225EF8C(r6, 0xf);
    ov49_0225EF8C(r6, 0x1a);
    ov49_0225A0CC(r5);
    ov49_0225A0CC(r5);
    ov49_0225A0DC(r5);
    ov49_0225A0BC(r5);
    ov49_02264EC8(r4, r5);
    ov49_0225EF8C(r6, 0x1b);
    ov49_0225A0CC(r5);
    ov49_0225EF8C(r6, 0x1a);
    ov49_0225A0CC(r5);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // str r3, [sp]
    ov49_02264E90(r4, r7, r5, 1);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x000001FF);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xb, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // str r3, [sp]
    ov49_02264E90(r4, r7, r5, 1);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), (2 << 8));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xc, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // str r3, [sp]
    ov49_02264E90(r4, r7, r5, 1);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x00000201);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0xd, r6);
    PlaySE(0x000005BF);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x00000202);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 8, r6);
    ov45_0222AED8(r7, 2);
    ov45_0222A5C0(r7);
    ov45_0222AAC8();
    ov49_0225A478(r5, r0);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // str r3, [sp]
    ov49_02264E90(r4, r7, r5, 1);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x000001FB);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x1b, r6);
    ov45_0222AED8(r7, 2);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x000002AF);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x10, r6);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022640DE: ; jump table
    ov49_0225EF8C(r6, 0x11);
    ov49_0225A0CC(r5);
    ov45_0222B0BC(r7);
    *((u32*)(r4 + 0x4c)) = 1;
    ov49_0225A0DC(r5);
    ov49_0225A0BC(r5);
    ov49_02264EC8(r4, r5);
    ov49_0225EF8C(r6, 0x1a);
    ov49_0225A0CC(r5);
    // ldr r0, [sp, #0x10]
    ov49_0225EF8C(r6, 0x1a);
    *((u8*)(r4 + 2)) = (r0 - 6);
    // strb r0, [r4]
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, #0x37
    ov49_02264C04(r5, *((u8*)(r4 + 3)), *((u8*)r4));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x12, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, #0x55
    ov49_02264C04(r5, *((u8*)(r4 + 3)), *((u8*)r4));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x13, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, #0xec
    ov49_02264C04(r5, *((u8*)(r4 + 3)), *((u8*)(r4 + 2)));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x14, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, r3, r2
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x000001DD, *((u8*)r4));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x15, r6);
    // str r0, [sp]
    // add r0, #0x14
    // add r3, #0x73
    ov49_02264F9C(r4, r5, 5, (*((u8*)r4) << 2));
    // add r1, #0x14
    ov49_0225A174(r5, r4, 0, 0);
    ov49_02264F10(r4);
    ov49_0225EF8C(r6, 0x16);
    ov49_0225A1D4(r5);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02264256: ; jump table
    // add r0, r0, r1
    *((u8*)(r4 + 1)) = r0;
    ov45_0222AED8(r7, (((*((u8*)(r4 + 1)) + 6) << 0x10) >> 0x10));
    ov49_0225EF8C(r6, 0x17);
    *((u8*)(r4 + 1)) = 0x7e;
    ov45_0222AED8(r7, *((u8*)(r4 + 1)));
    ov49_0225EF8C(r6, 0x1c);
    ov49_02264F24(r4, r5);
    ov49_0225A1E4(r5, 0, 0);
    // add r0, #0x14
    ov49_02265260(r4, r5);
    ov49_02264F1C(r4);
    // ldr r1, [sp, #8]
    ov49_02264F78(r4);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    // add r2, r3, r2
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x00000165, *((u8*)(r4 + 1)));
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x18, r6);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x19, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x33);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x19, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x34);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 8, r6);
    ov49_0225A1E4(r5, 0, 0);
    // add r0, #0x14
    ov49_02265260(r4, r5);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x2d);
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    ov49_0225A08C(r5);
    *((u16*)(r4 + 0xa)) = 0;
    // ldr r0, [sp, #0x20]
    String_GetLength(0);
    // str r0, [sp, #0x24]
    ov49_0225CB70(r5);
    // ldr r1, [sp, #0x24]
    // add r1, #0x3c
    // str r0, [sp]
    ov49_02264CFC(r4, ((0xff << 0x18) >> 0x18), 0x1f, r6);
    ov45_0222AFC4(r7);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x2b);
    ov49_0225A08C(r5, r0);
    *((u16*)(r4 + 0xa)) = 0;
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x1f, r6);
    ov49_0225A334(r5, *((u8*)(r4 + 3)), 0);
    ov49_02264C04(r5, *((u8*)(r4 + 3)), 0x31);
    ov49_0225A08C(r5, r0);
    // str r0, [sp]
    ov49_02264CFC(r4, 0x80, 0x1b, r6);
    ov49_02264D14(r4, r6);
    ov49_02264D30(r4, r6, r5);
    // add r0, #0x44
    // add r1, #0x46
    ov45_0222A704(r7, *((u16*)r4), *((u32*)(r4 + 0x48)));
    ov45_0222B0D8(r7, *((u8*)(r4 + 3)));
    ov45_0222AE64(r7);
    ov49_0225A0EC(r5);
    ov49_02264CF8(r4);
    ov49_0225EF68(r6);
    ov45_0222A5E8(r7, 1);
    ov49_02259FF0(r5);
    ov49_02258DAC();
    ov49_02258EEC(r4, r0, 1);
    ov49_0225A4D0(r5);
    ov49_02264F60(r4);
}





void ov49_022644E8(void) {
    ov49_0225EF84();
    ov49_02259FE8(r4);
    ov49_0225EF88(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02264516: ; jump table
    ov49_0225EF40(r6, 0x28);
    PlaySE(0x000005DC);
    ov45_0222A330(r7);
    ov49_0225EF8C(r6, 2);
    ov45_0222A374(r7);
    ov49_0225EF8C(r6, 1);
    ov49_0225EF8C(r6, 3);
    ov49_0225A30C(r4, 1, 0x4e);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 3);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0xf);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x10);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_02265110((r5 + 4), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov49_0225A1A4(r4, (r5 + 4), 0, 0);
    ov49_0225EF8C(r6, 6);
    ov49_0225A1D4(r4);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226464A: ; jump table
    // mvn r1, r1
    ov49_0225EF8C(r6, 7);
    ov49_0225EF8C(r6, 8);
    ov49_0225EF8C(r6, 0xd);
    ov49_0225EF8C(r6, 0xe);
    ov49_0225EF8C(r6, 0xf);
    ov49_0225EF8C(r6, 0x15);
    ov49_0225EF8C(r6, 0x10);
    PlaySE(0x000005DC);
    ov49_0225EF8C(r6, 0x16);
    ov49_0225A1E4(r4, 0, 0);
    ov49_02265260((r5 + 4), r4);
    ov49_0225A30C(r4, 1, 0x17);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_022651E8((r5 + 4), r4);
    ov49_0225A174(r4, (r5 + 4), 0, 0);
    ov49_0225EF8C(r6, 9);
    ov49_0225A1D4(r4);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02264736: ; jump table
    // mvn r1, r1
    ov49_0225EF8C(r6, 0xa);
    ov49_0225EF8C(r6, 0xb);
    ov49_0225EF8C(r6, 0xc);
    PlaySE(0x000005DC);
    ov49_0225EF8C(r6, 4);
    ov49_0225A1E4(r4, 0, 0);
    ov49_02265260((r5 + 4), r4);
    ov49_0225A37C(r4, 0, 0);
    ov49_0225A30C(r4, 1, 0x18);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A37C(r4, 1, 0);
    ov49_0225A30C(r4, 1, 0x19);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A37C(r4, 2, 0);
    ov49_0225A30C(r4, 1, 0x1a);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x12);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x13);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x14);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_02265170((r5 + 4), r4);
    ov49_0225A174(r4, (r5 + 4), 0, 0);
    ov49_0225EF8C(r6, 0x11);
    ov49_0225A1D4(r4);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022648B0: ; jump table
    // mvn r1, r1
    ov49_0225EF8C(r6, 0x12);
    ov49_0225EF8C(r6, 0x13);
    ov49_0225EF8C(r6, 0x14);
    PlaySE(0x000005DC);
    ov49_0225EF8C(r6, 4);
    ov49_0225A1E4(r4, 0, 0);
    ov49_02265260((r5 + 4), r4);
    ov49_0225A30C(r4, 1, 0x1b);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x1c);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x1d);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x1e);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A30C(r4, 1, 0x16);
    ov49_0225A08C(r4, r0);
    // str r0, [r5]
    ov49_0225EF8C(r6, 0x17);
    ov49_0225A0AC(r4);
    ov49_0225EF8C(r6, *((u32*)r5));
    ov49_0225EF68(r6);
    ov49_0225A0EC(r4);
    ov49_02259FF0(r4);
    ov49_02258DAC();
    ov49_02258EEC(r4, r0, 1);
}





void ov49_022649F4(void) {
    ov49_0225EF84();
    ov49_02259FE8(r4);
    ov49_0225EF88(r5);
    PlaySE(0x000005DC);
    ov45_0222A330(r6);
    ov45_0222A374(r6);
    ov49_0225A30C(r4, 1, 0x4e);
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 1);
    ov49_0225A30C(r4, 1, 3);
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 1);
    ov45_0222B134(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02264A86: ; jump table
    ov49_0225A37C(r4, 0, 0);
    ov49_0225A30C(r4, 1, 0x49);
    ov49_0225A37C(r4, 1, 0);
    ov49_0225A30C(r4, 1, 0x49);
    ov49_0225A37C(r4, 2, 0);
    ov49_0225A30C(r4, 1, 0x49);
    ov49_0225A37C(r4, 5, 0);
    ov49_0225A30C(r4, 1, 0x4d);
    ov49_0225A37C(r4, 6, 0);
    ov49_0225A30C(r4, 1, 0x4d);
    ov49_0225A30C(r4, 1, 0x4a);
    ov49_0225A30C(r4, 1, 0x4f);
    ov49_0225A30C(r4, 1, 0x4b);
    ov49_0225A30C(r4, 1, 0x4c);
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 1);
    ov49_0225A0AC(r4);
    ov49_0225EF8C(r5, 2);
    ov49_0225A0EC(r4);
    ov49_02259FF0(r4);
    ov49_02258DAC();
    ov49_02258EEC(r4, r0, 1);
}





void ov49_02264B94(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02264BB4: ; jump table
}





void ov49_02264C04(void) {
    ov49_02259FE8();
    ov45_0222AB28(r6);
    ov49_0225A30C(r5, 3, *((u16*)(ov49_02269EC6 + (0 << 2))), (ov49_02269EC4 + 4));
}





void ov49_02264C50(void) {
    ov49_02259FE8();
    ov45_0222AB28(r5);
    ov45_0222AB28(r7, r6);
    ov49_0225A30C(r4, 3, 0x000002A9);
}





void ov49_02264CA8(void) {
    // mvn r0, r0
}





void ov49_02264CF8(void) {
}





void ov49_02264CFC(void) {
    *((u8*)(r0 + 6)) = r1;
    *((u8*)(r0 + 7)) = r2;
    // add r1, sp
}





void ov49_02264D14(void) {
}





void ov49_02264D30(void) {
}





void ov49_02264D4C(void) {
    // ldr r3, [sp, #0x10]
    ov49_02264D9C(r2, 0, r3);
    // ldr r3, [sp, #0x14]
    ov49_02264D9C(r5, 1, r4);
    // ldr r0, [sp, #0x10]
    ov45_0222AA10();
    // ldr r0, [sp, #0x14]
    ov45_0222AA10();
    // add r2, r2, r4
    ov49_0225A30C(r5, 3, *((u16*)((r0 << 1) + ov49_02269E44)), (r0 << 1));
    ov49_0225A08C(r5, r0);
}





void ov49_02264D9C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02264DBA: ; jump table
}





void ov49_02264E20(void) {
    // str r0, [sp]
    // ldr r0, [sp]
}





void ov49_02264E90(void) {
    // str r0, [sp]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp]
}





void ov49_02264EC8(void) {
    ov49_02259FE8(r1);
    ov45_0222B094();
    ov49_0225A0CC(r4, 0x000001C2);
    ov49_0225A334(r4, *((u8*)(r5 + 3)), 0);
    ov49_02264C04(r4, *((u8*)(r5 + 3)), (0xab << 2));
    ov49_0225A08C(r4, r0);
    ov49_0225A0BC(r4);
}





void ov49_02264F10(void) {
}





void ov49_02264F1C(void) {
}





void ov49_02264F24(void) {
    // ldrsh r1, [r5, r0]
    ov49_0225A334(r1, *((u8*)(r0 + 3)), 0);
    ov49_02264C04(r4, *((u8*)(r5 + 3)), 0x000002AB);
    ov49_0225A08C(r4, r0);
}





void ov49_02264F60(void) {
    // ldrsh r2, [r0, r1]
}





void ov49_02264F78(void) {
}





void ov49_02264F9C(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r6, [sp, #0x20]
    ov49_0225A10C(r1, r2);
    // ldr r0, [sp]
    *((u32*)(r0 + 0x20)) = r7;
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    ov49_0225A30C(r5, 3, 0x00000205);
    ov49_0225A30C(r5, 3, 0xeb);
    // ldr r2, [sp, #4]
    // add r2, r2, r4
    ov49_0225A30C(r5, 3);
    ov49_0225A144(r5, r0, r4);
    // ldr r2, [sp]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    *((u16*)(r0 + 0x10)) = *((u32*)(r0 + 0x20));
    // ldr r0, [sp]
    *((u16*)(*((u16*)(r0 + 0x12)) + 0x12)) = *((u32*)(r0 + 0x20));
    ov49_0225A154(r5, *((u32*)(r0 + 0x20)), ov49_02269E24);
    // ldr r1, [sp]
    // str r0, [r1]
}





void ov49_02265044(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r3, [sp, #4]
    // str r0, [sp, #0x24]
    ov49_0225A120(r1, r3);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    *((u32*)(r0 + 0x20)) = r1;
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    ov49_0225A30C(r5, 3, 0x00000205);
    ov49_0225A30C(r5, 3, 0xeb);
    MTRandom(r0);
    _u32_div_f(r4);
    ov49_0225A164(r5);
    // ldr r2, [sp, #0x20]
    // add r2, r2, r6
    ov49_0225A30C(r5, 3);
    ov49_0225A144(r5, r0, r6);
    // ldr r0, [sp, #4]
    // ldr r2, [sp]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    *((u16*)(r0 + 0x10)) = *((u32*)(r0 + 0x20));
    // ldr r0, [sp]
    *((u16*)(*((u16*)(r0 + 0x12)) + 0x12)) = *((u32*)(r0 + 0x20));
    ov49_0225A154(r5, *((u32*)(r0 + 0x20)), ov49_02269E24);
    // ldr r1, [sp]
    // str r0, [r1]
}





void ov49_02265110(void) {
    ov49_0225A10C(r1, 8);
    *((u32*)(r7 + 0x20)) = 8;
    ov49_0225A30C(r6, 1, *((u8*)ov49_02269E1C));
    ov49_0225A144(r6, r0, r4);
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u16*)(r7 + 0x10)) = *((u32*)(r7 + 0x20));
    *((u16*)(r7 + 0x12)) = *((u32*)(r7 + 0x20));
    ov49_0225A154(r6, r7, ov49_02269E24);
    // str r0, [r7]
}





void ov49_02265170(void) {
    ov49_0225A10C(r1, 4);
    *((u32*)(r6 + 0x20)) = 4;
    ov49_0225A38C(r5, 0, 0);
    ov49_0225A30C(r5, 1, 0x27);
    ov49_0225A144(r5, r0, r4);
    ov49_0225A30C(r5, 1, 0x25);
    ov49_0225A144(r5, r0, 3);
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u16*)(r6 + 0x10)) = *((u32*)(r6 + 0x20));
    *((u16*)(r6 + 0x12)) = *((u32*)(r6 + 0x20));
    ov49_0225A154(r5, r6, ov49_02269E24);
    // str r0, [r6]
}





void ov49_022651E8(void) {
    ov49_0225A10C(r1, 4);
    *((u32*)(r6 + 0x20)) = 4;
    ov49_0225A37C(r5, 0, 0);
    ov49_0225A30C(r5, 1, 0x26);
    ov49_0225A144(r5, r0, r4);
    ov49_0225A30C(r5, 1, 0x25);
    ov49_0225A144(r5, r0, 3);
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u16*)(r6 + 0x10)) = *((u32*)(r6 + 0x20));
    *((u16*)(r6 + 0x12)) = *((u32*)(r6 + 0x20));
    ov49_0225A154(r5, r6, ov49_02269E24);
    // str r0, [r6]
}





void ov49_02265260(void) {
}





void ov49_0226526C(void) {
}





void ov49_02265274(void) {
    // strh r0, [r5]
}





void ov49_0226529C(void) {
    // strh r0, [r5]
    // strh r0, [r5]
}





void ov49_022652D0(void) {
    // ldrh r0, [r0]
}





void ov49_022652E0(void) {
}





void ov49_022652E8(void) {
    // ldr r0, [sp, #0x20]
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r5, [sp, #0x24]
    Heap_Alloc(0x0001082C);
    memset(0, 0x0001082C);
    // ldr r0, [sp, #4]
    // str r6, [r4]
    *((u32*)(r4 + 4)) = r0;
    // ldr r0, [sp]
    // ldr r1, [sp, #0x20]
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 0xc)) = r7;
    NARC_New(0xd1);
    // add r0, r4, r0
    HeapExp_FndInitAllocator(0x0001081C, r5, 4);
    ov49_02265698(r4, r6, r5);
    ov49_02265738(r4, r6, r5);
    ov49_022657B4(r4, r6, r5);
    NARC_Delete(r6);
}





void ov49_0226535C(void) {
}





void ov49_02265378(void) {
    // add r5, #0x10
    // add r5, r5, r7
}





void ov49_02265398(void) {
    // add r5, #0x10
    // add r5, r5, r7
}





void ov49_022653C0(void) {
    // add r5, #0x10
    // add r1, r5, r1
}





void ov49_022653F0(void) {
}





void ov49_0226540C(void) {
    // ldr r4, [sp, #0x14]
    // sub r2, r2, r1
    // str r4, [r0]
    // ldr r1, [sp, #8]
    // sub r1, r1, r3
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // sub r1, r1, r2
}





void ov49_02265434(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // ldr r0, [sp]
    // add r0, r1, r0
}





void ov49_022655E0(void) {
    // str r4, [r1]
    // str r1, [r2]
    // str r0, [r3]
}





void ov49_022655F4(void) {
    // strh r1, [r4]
    // asr r0, r1, #4
    *((u16*)(r0 + 2)) = r2;
    // ldrsh r0, [r0, r1]
    *((u32*)(r0 + 4)) = r3;
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(FX_SinCosTable_, (r0 << 2), r3);
    // add r2, r0, r2
    // adc r1, r3
    *((u32*)(r4 + 8)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
}





void ov49_02265628(void) {
    // add r0, r1, r0
    // strh r0, [r4]
    // asr r0, r0, #4
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (*((u16*)r0) << 2), *((u32*)(r0 + 4)));
    // add r2, r0, r2
    // adc r1, r3
    *((u32*)(r4 + 8)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
}





void ov49_02265660(void) {
    // str r0, [r1]
}





void ov49_02265668(void) {
}





void ov49_02265698(void) {
    // str r0, [sp]
    // add r1, #0x81
    GfGfxLoader_LoadFromOpenNarc(r1, 0, 0, r2);
    // str r0, [r5, r1]
    NNS_G3dGetMdlSet(*((u32*)(r5 + 0x00010550)), 0x00010550);
    // str r0, [r5, r1]
    // add r0, #8
    // add r0, r0, r2
    // add r1, r1, r0
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    NNS_G3dMdlSetMdlEmiAll(*((u32*)(r5 + 0x00010558)), 0x00007FFF, *((u16*)(*((u32*)(r5 + 0x00010554)) + 0xe)));
    // add r5, #0x10
}





void ov49_0226571C(void) {
}





void ov49_02265738(void) {
    // add r5, r0, r1
    // add r2, #0x90
    ov49_02258830(r5, r1, 0, r2);
}





void ov49_02265760(void) {
    NNS_G3dGetTex(*((u32*)(r0 + 0x00010640)));
    // add r1, sp, #4
    // add r2, sp, #0
    NNS_G3dTexReleaseTexKey();
    // ldr r0, [sp, #4]
    // blx r1
    // ldr r0, [sp]
    // blx r1
    NNS_G3dPlttReleasePlttKey(r6, *((u32*)r7));
    // blx r1
    Heap_Free(*((u32*)(r5 + 0x00010640)), *((u32*)NNS_GfdDefaultFuncFreePlttVram));
}





void ov49_022657B4(void) {
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    // str r0, [sp, #0x18]
    // add r0, r5, r0
    // str r0, [sp, #0x1c]
    // add r7, r4, r6
    // add r1, r5, r0
    // add r1, r5, r0
    NNS_G3dGetTex(*((u32*)(*((u8*)(r7 + 2)) + 0x00010640)), *((u8*)(r7 + 2)));
    // add r2, r5, r1
    // str r0, [r2, r1]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // add r3, #0xb7
    // add r0, r0, r1
    // ldr r1, [sp, #0x1c]
    // add r1, r1, r2
    // ldr r2, [sp, #8]
    sub_020180BC(0x14, *((u8*)r4), (*((u8*)r4) << 4), *((u8*)(r7 + 2)));
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}





void ov49_02265858(void) {
    // add r4, r5, r0
    // add r7, r5, r0
    sub_020180F8(r4, r7);
    // str r1, [r5, r0]
    // add r5, #0x14
    // add r4, #0x14
}





void ov49_02265890(void) {
    GF_AssertFail();
    ov49_02265948(r5, r4);
    *((u32*)(r4 + 8)) = r6;
    // strb r7, [r4]
    ov49_02258E60(r6, 5);
    // add r0, #0x28
    *((u32*)(r4 + 4)) = r0;
    // blx r2
    ov49_02265668(r5, r4, *((u32*)(ov49_0226A610 + (*((u8*)r4) << 2))), (*((u8*)r4) << 2));
}





void ov49_022658E4(void) {
    ov49_02265958(r1);
    GF_AssertFail(*((u8*)r4));
    // blx r2
    ov49_02265948(r5, r4, *((u32*)(ov49_0226A538 + (*((u8*)r4) << 2))), (*((u8*)r4) << 2));
}





void ov49_02265920(void) {
    // ldrb r0, [r4]
}





void ov49_02265948(void) {
    // bx r3
    // _02265954: .word memset
}





void ov49_02265958(void) {
    // cmp r0, #0
    // beq _02265962
}





void ov49_02265968(void) {
    // add r1, r0, r1
}





void ov49_02265980(void) {
    // str r0, [sp]
    GF_AssertFail();
    // add r7, r5, r0
    // str r0, [sp, #4]
    GF_AssertFail(*((u32*)(r7 + (r4 << 2))));
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // str r6, [r7, r0]
    // add r2, r1, r2
    // add r5, #0xc
    // add r0, r5, r0
    // add r1, r2, r1
    sub_020181B0((0x78 * r4), (*((u8*)r6) << 4), 0x00010550);
}





void ov49_022659D0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r1, r0, r7
    GF_AssertFail(*((u32*)(r1 + 0x0000087C)));
    // ldr r0, [sp, #4]
    // add r0, #0xc
    // add r0, r0, r6
    sub_020182A4(0x78);
    // ldr r0, [sp, #4]
    // add r1, r0, r7
    // ldr r1, [sp]
    // add r1, r1, r0
    // add r1, r1, r3
    // str r1, [sp, #0xc]
    // add r0, #0xf0
    // ldr r1, [sp]
    // add r1, r1, r2
    NNS_G3dGetTex(*((u32*)(*((u8*)(*((u32*)(r1 + 0x0000087C)) + 1)) + 0x00010550)), *((u8*)(*((u32*)(r1 + 0x0000087C)) + 1)), (*((u8*)(*((u32*)(r1 + 0x0000087C)) + 1)) << 2), (*((u8*)*((u32*)(r1 + 0x0000087C))) << 4));
    // ldr r1, [sp, #0xc]
    *((u32*)(r1 + 0xc)) = r0;
    NNS_G3dForceBindMdlTex(*((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)), 0, 0);
    GF_AssertFail();
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    NNS_G3dForceBindMdlPltt(*((u32*)(r0 + 8)), *((u32*)(r1 + 0xc)), 0, 0);
    GF_AssertFail();
    // ldr r0, [sp, #4]
    // add r5, r0, r1
    // add r0, r0, r7
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // add r7, r0, r1
    // ldr r1, [sp, #8]
    // add r0, r0, r4
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, r0, r6
    // add r1, r7, r1
    sub_020181D4((0x14 * *((u8*)(*((u32*)(0x000106DC + 0x0000087C)) + 2))), *((u8*)(*((u32*)(0x000106DC + 0x0000087C)) + 2)));
    // ldr r0, [sp, #0x14]
    // add r0, r7, r0
    sub_02018198(*((u32*)(r5 + 0x000008C4)));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    NNS_G3dMdlSetMdlPolygonIDAll(*((u32*)(r0 + 8)), *((u32*)(r1 + 4)));
    // ldr r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #4]
    // add r0, r0, r6
    sub_020181EC();
    // ldr r0, [sp]
    // add r5, r0, r1
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // ldr r0, [sp, #4]
    // add r0, r0, r6
    // add r1, r5, r2
    sub_020181E0(*((u32*)(r0 + 0x0000087C)), *((u8*)(*((u32*)(r0 + 0x0000087C)) + 2)), (0x14 * *((u8*)(*((u32*)(r0 + 0x0000087C)) + 2))));
    // ldr r0, [sp, #0xc]
    NNS_G3dReleaseMdlTex(*((u32*)(r0 + 8)));
    // ldr r0, [sp, #0xc]
    NNS_G3dReleaseMdlPltt(*((u32*)(r0 + 8)));
    // ldr r0, [sp, #0xc]
    *((u32*)(r0 + 0xc)) = 0;
}





void ov49_02265B14(void) {
}





void ov49_02265B28(void) {
}





void ov49_02265B3C(void) {
    // add r0, r0, r1
    // add r2, r4, r1
    // add r1, r1, r5
    // add r0, r0, r1
    sub_020181A4((0x14 * *((u8*)(*((u32*)(r2 + 0x0000087C)) + 2))), *((u8*)(*((u32*)(r2 + 0x0000087C)) + 2)));
    // add r0, r4, r0
    // add r4, r0, r2
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [r4, r5]
    // add r0, r2, r0
    _s32_div_f((2 << 0xc), r0, *((u32*)(r4 + (r5 << 2))));
    // str r1, [r4, r5]
}





void ov49_02265B94(void) {
    // add r0, r0, r1
    // add r2, r5, r1
    // add r1, r1, r6
    // add r0, r0, r1
    sub_020181A4((0x14 * *((u8*)(*((u32*)(r2 + 0x0000087C)) + 2))), *((u8*)(*((u32*)(r2 + 0x0000087C)) + 2)));
    // add r2, r5, r3
    // add r2, r2, r1
    // ldr r5, [sp, #0x10]
    // add r4, r5, r4
    // str r4, [r2, r1]
    // sub r3, #0xc4
    // sub r0, r0, r3
    // str r0, [r2, r1]
}





void ov49_02265BE8(void) {
    // add r0, r0, r1
    // add r2, r5, r1
    // add r1, r1, r6
    // add r0, r0, r1
    sub_020181A4((0x14 * *((u8*)(*((u32*)(r2 + 0x0000087C)) + 2))), *((u8*)(*((u32*)(r2 + 0x0000087C)) + 2)));
    // ldr r1, [sp, #0x10]
    // add r3, r5, r2
    // sub r0, r0, r1
    // add r2, r3, r2
    // add r1, #0xc4
    // str r0, [r2, r1]
    // add r2, r5, r0
    // add r2, r2, r0
    // str r1, [r2, r0]
}





void ov49_02265C40(void) {
    // add r2, r1, r2
    // add r0, r0, r4
    // add r1, r1, r3
    // add r0, r0, r1
    sub_020181A0((0x14 * *((u8*)(*((u32*)((r2 << 2) + 0x0000087C)) + 2))), *((u8*)(*((u32*)((r2 << 2) + 0x0000087C)) + 2)));
}





void ov49_02265C68(void) {
}





void ov49_02265C74(void) {
}





void ov49_02265C80(void) {
}





void ov49_02265C8C(void) {
}





void ov49_02265C98(void) {
}





void ov49_02265CA4(void) {
}





void ov49_02265CB0(void) {
    // str r0, [sp]
    // add r5, #0xc
    // ldr r0, [sp]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // add r1, sp, #4
    ov49_02259154(*((u32*)(r7 + 8)));
    // ldr r1, [sp, #8]
    // add r2, r1, r0
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #0xc]
    // str r2, [sp, #8]
    sub_020182A8(r5);
    sub_020182A0(r5, 0);
    // add r5, #0x78
    // str r1, [r7, r0]
}





void ov49_02265D10(void) {
    ov49_02265980(1, ov49_0226A730);
    ov49_02265980(r5, r4, 0, ov49_0226A73C);
    // add r0, #0x84
    sub_020182A0(r4, 0);
    // add r1, sp, #0xc
    ov49_02259154(*((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // add r5, sp, #0xc
    // str r0, [sp, #0xc]
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // add r0, r0, r2
    // str r0, [sp, #4]
    // str r1, [r4, r0]
    ov49_02258E60(*((u32*)(r4 + 8)), 6, (1 << 0x10));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02265D80: ; jump table
    // ldr r1, [sp, #0x14]
    // sub r1, r1, r0
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000BFFF, 1);
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x00003FFF, 1);
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0, 1);
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, ((2 << 0xe) - 1), 1);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0x84
    sub_020182A8(r4);
    // add r4, #0xc
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    sub_020182A8(r4);
}





void ov49_02265E54(void) {
    ov49_02265980(1, ov49_0226A730);
    ov49_02265980(r5, r4, 0, ov49_0226A73C);
    ov49_02265980(r5, r4, 2, ov49_0226A734);
    // add r0, #0x84
    sub_020182A0(r4, 0);
    // add r1, sp, #0xc
    ov49_02259154(*((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // add r5, sp, #0xc
    // str r0, [sp, #0xc]
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // add r0, r0, r2
    // str r0, [sp, #4]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov49_02258E60(*((u32*)(r4 + 8)), 6, (1 << 0x10));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02265ED6: ; jump table
    // ldr r1, [sp, #0x14]
    // sub r1, r1, r0
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000A38D, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x0000DC70, 1);
    // ldr r2, [sp, #0xc]
    // add r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0x84
    sub_020182A8(r4, (2 << 0xe));
    // ldr r2, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0xfc
    sub_020182A8(r4, (2 << 0xe));
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000238E, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x00005C71, 1);
    // ldr r2, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0x84
    sub_020182A8(r4, (2 << 0xe));
    // ldr r2, [sp, #0xc]
    // add r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0xfc
    sub_020182A8(r4, (2 << 0xe));
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000E38F, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x00001C71, 1);
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0x84
    // sub r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0xfc
    // add r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000638D, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x00009C71, 1);
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0x84
    // add r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0xfc
    // sub r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // add r4, #0xc
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    sub_020182A8(r4);
}





void ov49_02266088(void) {
    ov49_02265980(1, ov49_0226A730);
    ov49_02265980(r5, r4, 0, ov49_0226A73C);
    ov49_02265980(r5, r4, 2, ov49_0226A734);
    ov49_02265980(r5, r4, 3, ov49_0226A738);
    // add r0, #0x84
    sub_020182A0(r4, 0);
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // add r1, #8
    // str r2, [r4, r1]
    // add r1, sp, #0xc
    ov49_02259154(*((u32*)(r4 + 8)), 0x00000958, 8);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // add r5, sp, #0xc
    // str r0, [sp, #0xc]
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // add r0, r0, r2
    // str r0, [sp, #4]
    ov49_02258E60(*((u32*)(r4 + 8)), 6, (1 << 0x10));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226611A: ; jump table
    // ldr r1, [sp, #0x14]
    // sub r1, r1, r0
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000A38D, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x0000DC70, 1);
    // add r0, r4, r0
    sub_020182E0((0x5d << 2), 0x0000BFFF, 1);
    // ldr r2, [sp, #0xc]
    // add r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0x84
    sub_020182A8(r4, (2 << 0xe));
    // ldr r2, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0xfc
    sub_020182A8(r4, (2 << 0xe));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r4, r0
    sub_020182A8((0x5d << 2));
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000238E, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x00005C71, 1);
    // add r0, r4, r0
    sub_020182E0((0x5d << 2), 0x00003FFF, 1);
    // ldr r2, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0x84
    sub_020182A8(r4, (2 << 0xe));
    // ldr r2, [sp, #0xc]
    // add r1, r2, r1
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, #0xfc
    sub_020182A8(r4, (2 << 0xe));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r4, r0
    sub_020182A8((0x5d << 2));
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000E38F, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x00001C71, 1);
    // add r0, r4, r0
    sub_020182E0((0x5d << 2), 0, 1);
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0x84
    // sub r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0xfc
    // add r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r4, r0
    sub_020182A8((0x5d << 2));
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x84
    sub_020182E0(r4, 0x0000638D, 1);
    // add r0, #0xfc
    sub_020182E0(r4, 0x00009C71, 1);
    // add r0, r4, r0
    sub_020182E0((0x5d << 2), 0x00007FFF, 1);
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0x84
    // add r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // ldr r5, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, #0xfc
    // sub r3, r5, r3
    sub_020182A8(r4, (2 << 0xe));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r4, r0
    sub_020182A8((0x5d << 2));
    // add r4, #0xc
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    sub_020182A8(r4);
}





void ov49_02266354(void) {
}





void ov49_02266360(void) {
}





void ov49_0226636C(void) {
}





void ov49_02266378(void) {
}





void ov49_02266384(void) {
}





void ov49_02266390(void) {
}





void ov49_0226639C(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r0, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A454, 2, 0x21);
}





void ov49_022663EC(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r0, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A46C, 2, 0x21);
}





void ov49_0226643C(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r0, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A4B4, 3, 0x21);
}





void ov49_0226648C(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r0, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A464, 2, 0x21);
}





void ov49_022664DC(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r0, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A49C, 3, 0x29);
}





void ov49_0226652C(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r0, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A4C0, 3, 0x21);
}





void ov49_0226657C(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r2, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A47C, 2, 0x21);
    // ldr r0, [sp, #8]
    ov49_02267C8C(r7);
}





void ov49_022665D0(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r2, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A45C, 2, 0x21);
    // ldr r0, [sp, #8]
    ov49_02267C8C(r7);
}





void ov49_02266624(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r3, r3, r6
    ov49_02265980(r1, 0, ov49_0226A70C);
    // str r2, [sp]
    // add r0, r7, r0
    // str r7, [sp, #4]
    ov49_02267D98(0x00000954, ov49_0226A474, 2, 0x21);
    // ldr r0, [sp, #8]
    ov49_02267C8C(r7);
}





void ov49_02266678(void) {
    // str r0, [sp, #4]
    // ldrsh r0, [r5, r0]
    *((u16*)(r1 + 2)) = (2 + 1);
    // ldrsh r1, [r5, r0]
    _s32_div_f((6 * r1), 0x36);
    // ldrsb r4, [r5, r0]
    // add r7, #0xc
    _s32_div_f(r4, 3);
    // ldrsb r0, [r5, r0]
    // add r0, r7, r0
    sub_020182A0((0x78 * r1), 1);
    // str r0, [sp, #8]
    // strb r6, [r5, r1]
    // ldrsb r0, [r5, r0]
    // add r7, #0xc
    sub_020182A4(r5, 0x00000955);
    // ldr r0, [sp, #4]
    ov49_02265B28(r5, r4, 0);
    // str r0, [sp, #8]
    sub_020182A0(r6, 0);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov49_02265BE8(0, r5, r4, 0);
    // ldrsb r0, [r5, r0]
    // add r7, #0x78
    // add r6, #0x78
    // ldrsb r0, [r5, r0]
    // ldr r0, [sp, #8]
}





void ov49_02266748(void) {
}





void ov49_02266754(void) {
}





void ov49_02266760(void) {
}





void ov49_0226676C(void) {
    // ldrsh r1, [r5, r0]
    // add r1, r1, r0
    // asr r0, r1, #4
    // add r0, r1, r0
    // asr r4, r0, #5
    // ldrsh r1, [r5, r0]
    // strh r4, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r2, #0xc
    // add r0, r2, r0
    sub_020182A0((0x78 * (r4 - 1)), 0, r1);
    // add r1, #0xc
    // add r0, r1, r0
    sub_020182A0((0x78 * r4), 1);
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 2)) = (2 + 1);
    // ldrsh r0, [r5, r0]
    // str r4, [sp]
    // add r6, #0xc
    sub_020182A4(r5);
    // ldrsh r0, [r5, r0]
    ov49_02265B28(r7, r5, r4, 0);
    // str r0, [sp]
    ov49_02265B14(r7, r5, r4, 0);
    // ldrsh r0, [r5, r0]
    // add r6, #0x78
    // ldr r0, [sp]
}





void ov49_02266820(void) {
    // str r0, [sp, #4]
    GF_AssertFail(*((u8*)(*((u32*)(r1 + 0x0000087C)) + 2)));
    // str r1, [r5, r0]
    // add r0, #0xc
    sub_020182A0(r5, 0);
    // ldrsh r1, [r5, r0]
    ov49_02265968(r5, (r1 + 1));
    // add r0, #0xc
    sub_020182A0(r5, 1);
    // ldr r0, [sp, #4]
    ov49_02265B28(r5, 0, 0);
    // ldrsh r0, [r5, r1]
    *((u16*)(r5 + 2)) = (r0 + 1);
    // str r2, [r5, r0]
    // ldrsh r0, [r5, r1]
    // ldr r0, [sp, #4]
    // str r2, [sp]
    ov49_02265BE8(0x00000954, r5, 0, 0);
    // add r0, #0xc
    sub_020182A0(r5, 0);
    // add r7, #0xc
    // str r4, [sp, #8]
    // add r7, #0x78
    ov49_02265968(r5, 1);
    // ldrsh r1, [r5, r0]
    sub_020182A0(r7, 1);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov49_02265B94((0xa << 0xa), r5, r4, 0);
    // str r0, [sp, #8]
    // add r1, r5, r0
    sub_020182A0(r7, 0);
    // ldr r0, [sp, #4]
    // add r1, r0, r1
    NNS_G3dMdlSetMdlAlphaAll(*((u32*)((*((u8*)*((u32*)(r6 + 0x0000087C))) << 4) + 0x00010558)), 0x1f);
    // str r2, [r1, r0]
    // sub r0, #0xdc
    // ldr r0, [sp, #4]
    // add r2, r0, r2
    // asr r1, r2, #2
    // add r1, r2, r1
    // asr r1, r1, #3
    NNS_G3dMdlSetMdlAlphaAll(*((u32*)((*((u8*)*((u32*)(r6 + 0x00000958))) << 4) + 0x00010558)), (*((u32*)(r1 + 0x00000958)) >> 0x1d), (0x14 * *((u32*)(r1 + 0x00000958))));
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // add r7, #0x78
    // ldr r0, [sp, #8]
}





void ov49_02266978(void) {
}





void ov49_022669B0(void) {
    // str r0, [sp]
    // ldrsb r2, [r5, r1]
    // ldrsb r0, [r5, r0]
    // strb r2, [r5, r0]
    // ldrsb r0, [r5, r0]
    // strb r2, [r5, r0]
    // ldrsb r0, [r5, r1]
    // strb r0, [r5, r1]
    // ldrsb r1, [r5, r0]
    // asr r1, r2, #2
    // add r1, r2, r1
    // asr r2, r1, #3
    // ldrsb r1, [r5, r1]
    // add r7, r2, r1
    // add r1, #0xc
    // add r4, r1, r0
    sub_020182A0(r4, 1, (0x00000955 << 2));
    // add r4, #0x78
    // strb r7, [r5, r0]
    // add r7, #0xc
    sub_020182A4(r5);
    // ldr r0, [sp]
    ov49_02267A1C(r5, r4);
    // str r0, [sp, #4]
    sub_020182A0(r6, 0);
    // add r7, #0x78
    // add r6, #0x78
    // ldrsb r1, [r5, r0]
    // ldr r0, [sp, #4]
}





void ov49_02266A88(void) {
    // ldrsh r1, [r4, r1]
    // add r0, r4, r0
    ov49_02267E18(0x00000954, 2);
    // ldrsh r1, [r4, r1]
    *((u16*)(r4 + 2)) = (2 + 1);
}





void ov49_02266AB0(void) {
    // ldrsh r1, [r5, r1]
    // add r0, r5, r0
    ov49_02267E18(0x00000954, 2);
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 2)) = (2 + 1);
    ov49_02267D00(r6, r5);
    ov49_02267D34(r6, r5);
}





void ov49_02266AF0(void) {
}





void ov49_02266B28(void) {
    ov49_02258DAC(*((u32*)(r0 + 4)));
    ov49_0225CC44(*((u32*)(r5 + 8)), *((u32*)(r4 + 8)));
    ov49_02258E34(*((u32*)(r4 + 8)));
    // add r2, sp, #0
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    *((u16*)(r2 + 4)) = *((u16*)r2);
    *((u16*)(r2 + 6)) = *((u16*)(r2 + 2));
    // ldrsh r1, [r2, r1]
    // asr r3, r1, #3
    // add r3, r1, r3
    // ldrsh r2, [r2, r3]
    // asr r3, r2, #3
    // add r3, r2, r3
    ov49_022589C4(*((u32*)(r5 + 0xc)), (((r3 >> 0x1c) << 0xc) >> 0x10), (((6 >> 0x1c) << 0xc) >> 0x10), (6 >> 0x1c));
    // strb r1, [r4, r0]
    ov49_02265980(r5, r4, 0, ov49_0226A74C);
    ov49_0226786C(r5, r4, 0, 0);
    ov49_02265980(r5, r4, 0, ov49_0226A74C);
    ov49_02265980(r5, r4, 1, ov49_0226A750);
    ov49_0226786C(r5, r4, 0, 2);
    ov49_0226786C(r5, r4, 1, 1);
    ov49_02265980(r5, r4, 0, ov49_0226A74C);
    ov49_02265980(r5, r4, 1, ov49_0226A750);
    ov49_02265980(r5, r4, 2, ov49_0226A754);
    ov49_0226786C(r5, r4, 0, 0);
    ov49_0226786C(r5, r4, 1, 2);
    ov49_0226786C(r5, r4, 2, 1);
    // strb r6, [r4, r0]
    ov49_02259130(*((u32*)(r4 + 8)), 0);
    ov49_02266C6C(r5, r4);
    ov49_02266D04(r5, r4);
}





void ov49_02266C6C(void) {
    // add r1, sp, #0x10
    ov49_02259154(*((u32*)(r1 + 8)));
    // ldrsb r0, [r5, r0]
    _fflt((*((u8*)(ov49_0226A450 + (0x00000955 - 1))) << 0xc), (0x00000955 - 1));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    // ldr r6, [sp, #0x14]
    // ldr r4, [sp, #0x18]
    // ldr r7, [sp, #0x10]
    _ffix();
    // add r0, r6, r0
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov49_0226540C(0x00000A04, r7, r7, r6);
    // add r0, r5, r0
    ov49_022655F4(0x00000A2C, 0, 0x0000071C, (2 << 0xe));
    ov49_0226747C(r5);
    // strh r1, [r5, r0]
}





void ov49_02266D04(void) {
    // add r1, sp, #0x10
    ov49_02259154(*((u32*)(r1 + 8)));
    // ldr r3, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r0, r3, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, r0
    ov49_0226540C(0x00000A04, r1);
    // add r0, r4, r0
    ov49_022655F4(0x00000A2C, 0, 0x0000071C, 0);
    ov49_02267674(r4);
    // strh r1, [r4, r0]
}





void ov49_02266D60(void) {
    ov49_02266D7C(*((u8*)(r1 + 0x00000965)));
    ov49_02266E78();
}





void ov49_02266D7C(void) {
    // add r0, r5, r1
    // sub r1, #0xae
    // ldrsh r1, [r5, r1]
    ov49_02265434(0x00000A04);
    // str r0, [sp]
    // add r0, r5, r0
    ov49_02265628(0x00000A2C);
    // ldrsh r1, [r5, r0]
    // strh r1, [r5, r0]
    // add r1, sp, #0xc
    ov49_02259154(*((u32*)(r5 + 8)), (r1 + 1));
    // add r1, sp, #0xc
    // add r0, r5, r0
    // add r2, sp, #0x10
    // add r3, sp, #0x14
    ov49_022655E0(0x00000A04);
    // add r1, sp, #8
    // add r0, r5, r0
    ov49_02265660(0x00000A2C);
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // add r1, sp, #0xc
    ov49_02259148(*((u32*)(r5 + 8)));
    ov49_0226747C(r5);
    // ldrsb r0, [r5, r0]
    ov49_0226789C(r6, r5, 0);
    // ldrsb r0, [r5, r7]
    ov49_02258DAC(*((u32*)(r6 + 4)));
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r0, r1
    ov49_02259160(r7, 2);
    ov49_02258E34(*((u32*)(r5 + 8)));
    // add r1, sp, #4
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 2));
    ov49_02258E04(*((u32*)(r5 + 8)), *((u32*)(r3 - 4)), r4, (r3 - 4));
    // ldr r0, [sp]
}





void ov49_02266E78(void) {
    // add r0, r5, r1
    // sub r1, #0xae
    // ldrsh r1, [r5, r1]
    ov49_02265434(0x00000A04);
    // str r0, [sp]
    // add r0, r5, r0
    ov49_02265628(0x00000A2C);
    // ldrsh r1, [r5, r0]
    // strh r1, [r5, r0]
    // add r1, sp, #4
    ov49_02259154(*((u32*)(r5 + 8)), (r1 + 1));
    // add r1, sp, #4
    // add r0, r5, r0
    // add r2, sp, #8
    // add r3, sp, #0xc
    ov49_022655E0(0x00000A04);
    // add r1, sp, #4
    ov49_02259148(*((u32*)(r5 + 8)));
    ov49_02267674(r5);
    // ldrsb r0, [r5, r0]
    ov49_0226789C(r6, r5, 0);
    // ldrsb r0, [r5, r7]
    // ldr r0, [sp]
}





void ov49_02266EF8(void) {
    ov49_02266F14(*((u8*)(r1 + 0x00000965)));
    ov49_02267074();
}





void ov49_02266F14(void) {
    // str r0, [sp, #0x10]
    // add r1, sp, #0x24
    ov49_02259154(*((u32*)(r1 + 8)));
    // ldrsb r0, [r5, r0]
    _fflt((*((u8*)(ov49_0226A450 + (0x00000955 - 1))) << 0xc), (0x00000955 - 1));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    // ldr r6, [sp, #0x28]
    // ldr r4, [sp, #0x2c]
    // ldr r7, [sp, #0x24]
    _ffix();
    // sub r0, r6, r0
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov49_0226540C(0x00000A04, r7, r7, r6);
    // strh r4, [r5, r1]
    // strb r4, [r5, r0]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #0x14]
    // add r0, #0xc
    // str r0, [sp, #0x14]
    // add r0, #0x36
    // add r1, #0x12
    // add r7, r5, r0
    // add r6, r5, r1
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x24
    // add r2, sp, #0x28
    // add r3, sp, #0x2c
    sub_020182B0(0x00000956, 0x00000956);
    // add r1, r5, r4
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x20]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x2c]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x28]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x24]
    // sub r0, r1, r0
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x28]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    ov49_0226540C(r7);
    ov49_022655F4(r6, 0, 0x00000AAA, (6 << 0xc));
    // ldr r0, [sp, #0x10]
    ov49_0226786C(r5, r4, 3);
    // ldr r0, [sp, #0x14]
    // add r0, #0x78
    // str r0, [sp, #0x14]
    // add r7, #0x28
    // ldrsb r0, [r5, r0]
    // add r6, #0xc
    // strb r1, [r5, r0]
}





void ov49_02267074(void) {
    // add r1, sp, #0x10
    ov49_02259154(*((u32*)(r1 + 8)));
    // ldr r3, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // sub r0, r3, r0
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, r0
    ov49_0226540C(0x00000A04, r1);
    // strh r1, [r4, r0]
    // strb r1, [r4, r0]
}





void ov49_022670B8(void) {
    ov49_022670D4(*((u8*)(r1 + 0x00000965)));
    ov49_02267328();
}





void ov49_022670D4(void) {
    // ldrsb r0, [r4, r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022670F0: ; jump table
    // ldrsh r0, [r4, r0]
    // strh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    // strb r0, [r4, r1]
    ov49_0225919C(*((u32*)(r1 + 8)), 1, ((0x00000954 + 2) + 1));
    // strh r1, [r4, r0]
    // strb r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // strh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    ov49_0225919C(*((u32*)(r4 + 8)), 0, ((2 + 2) - 1));
    // strb r1, [r4, r0]
    // strh r1, [r4, r0]
    ov49_02258E60(*((u32*)(r4 + 8)), 6);
    ov49_02259160(*((u32*)(r4 + 8)), r0);
    // add r0, #0xb0
    // ldrsh r1, [r4, r1]
    // add r0, r4, r0
    ov49_02265434(r1, (r1 + 2));
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // add r1, sp, #0x30
    ov49_02259154(*((u32*)(r4 + 8)), (r1 + 1));
    // add r1, sp, #0x30
    // add r0, r4, r0
    // add r2, sp, #0x34
    // add r3, sp, #0x38
    ov49_022655E0(0x00000A04);
    // add r1, sp, #0x30
    ov49_02259148(*((u32*)(r4 + 8)));
    // strb r1, [r4, r0]
    // strh r2, [r4, r1]
    // ldr r1, [sp, #0x34]
    // str r1, [r4, r0]
    ov49_02265668(r6, r4, 0x000005C2);
    // ldrsh r1, [r4, r0]
    _s32_div_f((0x00007FFF * r1), 0xa);
    // asr r0, r0, #4
    // ldrsh r2, [r0, r1]
    // asr r0, r2, #0x1f
    // add r1, r3, r1
    // adc r0, r2
    // add r1, sp, #0x24
    ov49_02259154(*((u32*)(r4 + 8)), (2 << 0xa), 0, (r2 << 0xf));
    // add r1, sp, #0x24
    // add r0, r0, r5
    // str r0, [sp, #0x28]
    ov49_02259148(*((u32*)(r4 + 8)));
    // ldrsh r1, [r4, r0]
    ov49_02259130(*((u32*)(r4 + 8)), 1);
    ov49_02258DAC(*((u32*)(r6 + 4)));
    ov49_0225CC40(*((u32*)(r6 + 8)), r4);
    // strh r1, [r4, r0]
    // strb r0, [r4, r1]
    // sub r0, #0xf
    // ldrsb r0, [r4, r0]
    // add r0, #0x28
    // add r7, r4, r0
    // add r0, r4, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r7, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    ov49_02265434(r7, *((u8*)(r4 + 0x00000964)));
    // ldr r0, [sp, #0x10]
    ov49_02265628();
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x18
    // add r2, sp, #0x1c
    // add r3, sp, #0x20
    sub_020182B0();
    // ldr r0, [sp, #8]
    // add r1, sp, #0x18
    // add r2, sp, #0x1c
    // add r3, sp, #0x20
    ov49_022655E0();
    // ldr r0, [sp, #4]
    // add r1, sp, #0x14
    ov49_02265660();
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x1c]
    // add r1, r1, r0
    // ldr r0, [sp]
    // ldr r3, [sp, #0x20]
    // str r1, [sp, #0x18]
    sub_020182A8();
    ov49_0226786C(r6, r4, r5, 4);
    ov49_02265668(r6, r4, 0x000005A8);
    ov49_0226789C(r6, r4, r5);
    // ldr r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r7, #0x28
    // add r0, #0x78
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x28
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x78
    // str r0, [sp]
    // ldrsb r0, [r4, r0]
}





void ov49_02267328(void) {
    // ldrsb r0, [r4, r0]
    ov49_0226789C(r0, r1, 0);
    // ldrsb r0, [r4, r7]
    // ldrsb r0, [r4, r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02267364: ; jump table
    ov49_02265668(r6, r4, 0x000005A8);
    // ldrsb r0, [r4, r0]
    ov49_0226786C(r6, r4, 0, 4);
    // ldrsb r0, [r4, r7]
    // strb r1, [r4, r0]
    ov49_0225919C(*((u32*)(r4 + 8)), 1);
    // strh r1, [r4, r0]
    // strb r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // strh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    ov49_0225919C(*((u32*)(r4 + 8)), 0, ((2 + 2) - 1));
    // strb r1, [r4, r0]
    // strh r1, [r4, r0]
    ov49_02258E60(*((u32*)(r4 + 8)), 6);
    ov49_02259160(*((u32*)(r4 + 8)), r0);
    // add r0, #0xb0
    // ldrsh r1, [r4, r1]
    // add r0, r4, r0
    ov49_02265434(r1, (r1 + 2));
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // add r1, sp, #0
    ov49_02259154(*((u32*)(r4 + 8)), (r1 + 1));
    // add r1, sp, #0
    // add r0, r4, r0
    // add r2, sp, #4
    // add r3, sp, #8
    ov49_022655E0(0x00000A04);
    // add r1, sp, #0
    ov49_02259148(*((u32*)(r4 + 8)));
    // strh r1, [r4, r0]
    // ldr r1, [sp, #4]
    // str r1, [r4, r0]
    ov49_02265668(r6, r4, 0x000005C2);
    ov49_02259130(*((u32*)(r4 + 8)), 1);
    ov49_02258DAC(*((u32*)(r6 + 4)));
    ov49_0225CC40(*((u32*)(r6 + 8)), r4);
}





void ov49_0226747C(void) {
    // add r1, sp, #0
    ov49_02259154(*((u32*)(r0 + 8)));
    // ldrsb r0, [r5, r0]
    _fflt((0xf << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xe));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // add r5, #0xc
    // ldr r4, [sp, #8]
    // add r3, r4, r3
    sub_020182A8(r5, (1 << 0xc));
    _fflt((0xe << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // ldr r4, [sp, #8]
    // add r0, #0xc
    // add r3, r4, r3
    sub_020182A8(r5, (1 << 0xc));
    _fflt((0xe << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((0xe << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // add r5, #0x84
    // ldr r4, [sp, #8]
    // add r3, r4, r3
    sub_020182A8(r5, (1 << 0xc));
    _fflt((0xf << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xe));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // ldr r4, [sp, #8]
    // add r0, #0xc
    // add r3, r4, r3
    sub_020182A8(r5, (1 << 0xc));
    _fflt((0xe << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // ldr r4, [sp, #8]
    // add r0, #0x84
    // add r3, r4, r3
    sub_020182A8(r5, (1 << 0xc));
    _fflt((0xe << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((0xe << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // add r5, #0xfc
    // ldr r4, [sp, #8]
    // add r3, r4, r3
    sub_020182A8(r5, (1 << 0xc));
}





void ov49_02267674(void) {
    // add r1, sp, #0
    ov49_02259154(*((u32*)(r0 + 8)));
    // ldrsb r0, [r5, r0]
    _fflt((3 << 0x10));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xe));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // add r5, #0xc
    // ldr r4, [sp, #8]
    // sub r3, r4, r3
    sub_020182A8(r5, (2 << 0xe));
    _fflt((0xb << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // ldr r4, [sp, #8]
    // add r0, #0xc
    // sub r3, r4, r3
    sub_020182A8(r5, (2 << 0xe));
    _fflt((0xb << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((0xe << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // add r5, #0x84
    // ldr r4, [sp, #8]
    // sub r3, r4, r3
    sub_020182A8(r5, (2 << 0xe));
    _fflt((3 << 0x10));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xe));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // ldr r4, [sp, #8]
    // add r0, #0xc
    // sub r3, r4, r3
    sub_020182A8(r5, (2 << 0xe));
    _fflt((0xb << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((2 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // ldr r4, [sp, #8]
    // add r0, #0x84
    // sub r3, r4, r3
    sub_020182A8(r5, (2 << 0xe));
    _fflt((0xb << 0xe));
    _fadd((0x3f << 0x18), r0);
    _fflt((0xe << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _ffix(r6);
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r3
    // add r5, #0xfc
    // ldr r4, [sp, #8]
    // sub r3, r4, r3
    sub_020182A8(r5, (2 << 0xe));
}





void ov49_0226786C(void) {
    // add r5, r1, r6
    // strb r4, [r5, r2]
    // add r5, r1, r2
    // strb r3, [r5, r6]
    // str r4, [sp]
}





void ov49_0226789C(void) {
    // add r4, r7, r5
    // add r4, r7, r3
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // str r1, [sp, #8]
    // add r1, #0xc
    // add r0, r1, r0
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // strb r0, [r4, r5]
    // strb r0, [r4, r5]
}





void ov49_02267908(void) {
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r1, sp, #0x50
    // str r2, [sp, #0x18]
    ov49_02259154(*((u32*)(r1 + 8)));
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r1, #0xd
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x28]
    // add r0, #0xc
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x1c]
    // add r5, r4, r0
    // ldr r3, [sp, #0x24]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r3, r6, r3
    ov49_02265980((0xf << 2), 0x00000968, r5);
    // ldr r1, [sp, #0x34]
    // add r0, sp, #0x50
    // add r2, sp, #0x44
    VEC_Add();
    // add r0, sp, #0x44
    // add r2, sp, #0x38
    VEC_Add(r7);
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // add r0, r1, r0
    // ldr r1, [sp, #0x44]
    // ldr r2, [sp, #0x48]
    // ldr r3, [sp, #0x4c]
    sub_020182A8((0x78 * r5));
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // add r0, r1, r0
    sub_020182A0(0);
    // ldr r0, [sp, #0x14]
    // add r2, r0, r5
    // strb r1, [r2, r0]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x38]
    // add r0, r0, r1
    // ldr r1, [sp, #0x44]
    // ldr r3, [sp, #0x48]
    ov49_0226540C(0x28, (r5 * 0x28));
    // ldr r0, [sp, #0x34]
    // add r0, #0xc
    // add r7, #0xc
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r1, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // strb r1, [r0, r2]
    // ldr r1, [sp, #0x14]
    // strb r0, [r1, r3]
    // strb r0, [r1, r3]
    // strb r0, [r1, r2]
}





void ov49_02267A1C(void) {
    // add r1, r5, r2
    // ldrsb r0, [r1, r4]
    // add r2, #0x10
    // strb r0, [r1, r4]
    // add r0, r5, r2
    // ldrsb r1, [r1, r4]
    // add r0, r0, r6
    ov49_02265434(0x28, 0x00000958);
    // str r0, [sp]
    // add r1, sp, #4
    // add r0, r5, r0
    // add r0, r0, r6
    // add r2, sp, #8
    // add r3, sp, #0xc
    ov49_022655E0(0x00000968);
    // add r1, #0xc
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #0xc]
    sub_020182A8((0x78 * r4), r5);
    ov49_02265B14(r7, r5, r4, 0);
    // ldr r0, [sp]
}





void ov49_02267A84(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r5, #0xc
    // ldr r0, [sp]
    ov49_02265980(r2, r1, 0, ov49_0226A70C);
    // add r1, sp, #8
    ov49_02259154(*((u32*)(r7 + 8)));
    // ldr r1, [sp, #0xc]
    // add r2, r1, r0
    // ldr r1, [sp, #0x10]
    // add r3, r1, r0
    // ldr r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    sub_020182A8(r5);
    sub_020182A0(r5, 0);
    // ldr r0, [sp, #4]
    // add r5, #0x78
    // ldr r0, [sp, #4]
    // strb r0, [r7, r1]
}





void ov49_02267AF0(void) {
    // str r0, [sp, #4]
    // ldrsh r1, [r5, r0]
    _s32_div_f((0xc * r1), 0x30);
    // str r4, [r5, r0]
    // add r0, r0, r2
    // add r2, r1, r0
    // add r1, sp, #8
    *((u16*)((r0 << 2) + 4)) = *((u16*)((r0 << 2) + ov49_0226A678));
    *((u16*)((r0 << 2) + 6)) = *((u16*)((r6 * 0x30) + 2));
    // add r0, #0xc
    // add r0, r0, r1
    sub_020182A0(r5, 0, *((u16*)((r0 << 2) + 4)));
    // add r0, r0, r2
    // add r2, r1, r0
    // add r0, sp, #8
    // strh r1, [r0]
    *((u16*)(ov49_0226A67C + 2)) = *((u16*)((r6 * 0x30) + 2));
    _fflt((*((u16*)((r6 * 0x30) + 2)) << 0xc), *((u16*)((r4 << 2) + ov49_0226A67C)), (r6 * 0x30));
    _fadd((0x3f << 0x18), r0);
    _fflt((r4 << 0xc));
    _fsub((0x3f << 0x18));
    // add r1, sp, #8
    _ffix();
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov49_02265BE8(r5, r6, 0);
    _fflt(r7);
    _fadd((0x3f << 0x18), r0);
    _fflt(r7);
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov49_02265BE8(r5, r6, 1);
    // add r1, #0xc
    // add r0, r1, r0
    sub_020182A0((0x78 * r6), 1);
    // add r2, #0xc
    // add r0, r2, r0
    sub_020182A0((0x78 * *((u16*)r0)), 0, r5);
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 2)) = (2 + 1);
    // ldrsh r0, [r5, r0]
}





void ov49_02267C20(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r5, #0xc
    // ldr r0, [sp]
    // add r3, r3, r6
    ov49_02265980(r2, r1, 0, ov49_0226A70C);
    // add r1, sp, #8
    ov49_02259154(*((u32*)(r7 + 8)));
    // ldr r1, [sp, #0xc]
    // add r2, r1, r0
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #0x10]
    // str r2, [sp, #0xc]
    sub_020182A8(r5);
    sub_020182A0(r5, 0);
    // ldr r0, [sp, #4]
    // add r5, #0x78
    // strh r1, [r7, r0]
    // ldr r0, [sp, #4]
    // strh r0, [r7, r1]
}





void ov49_02267C8C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r1, sp, #8
    ov49_02259154(*((u32*)(r1 + 8)));
    // ldr r7, [sp, #4]
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #8]
    // sub r1, r1, r0
    // str r1, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // add r7, #0xc
    // add r3, #0x25
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, #0x10
    // add r3, r3, r6
    ov49_02265980(((1 << 0xe) << 2), 0, ov49_0226A70C);
    // add r1, #0x10
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, r7, r0
    // add r1, r1, r5
    sub_020182A8((0x78 * r4), r4);
    // add r5, r5, r0
}





void ov49_02267D00(void) {
    // strh r2, [r1, r0]
    // strh r5, [r1, r0]
    // add r4, #0xc
    // add r0, #0x10
    // add r0, r4, r1
    sub_020182A0(0, 1, 1);
}





void ov49_02267D34(void) {
    // strh r2, [r5, r0]
    // strh r0, [r5, r1]
    // add r6, #0xc
    // add r2, #0x10
    ov49_02265B14(r0, r1, 0, 0);
    // add r1, #0x10
    // add r0, r6, r0
    sub_020182A0((0x78 * r4), 0);
}





void ov49_02267D98(void) {
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // str r1, [r5, r0]
    // ldr r4, [sp, #0x34]
    // strh r2, [r5, r1]
    // strh r3, [r5, r0]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r4, #0xc
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r0, r4, r0
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r5, #0xec
    // str r0, [sp, #0x14]
}





void ov49_02267E18(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // ldr r4, [sp, #8]
    // add r6, sp, #0x10
    // add r1, r0, r4
    // strh r0, [r6]
    *((u16*)(r6 + 2)) = *((u16*)(r1 + 2));
    // ldr r0, [sp]
    GF_AssertFail(*((u16*)(r1 + 2)), *((u16*)r6));
    // str r0, [sp, #4]
    GF_AssertFail(*((u8*)(r6 + 3)));
    // ldr r1, [sp, #4]
    // add r0, r5, r0
    ov49_02267EF8((0xec * r7));
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    ov49_02267F40(r5, *((u16*)(r5 + (0xed << 2))));
    // add r4, #0xec
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
}





void ov49_02267EBC(void) {
    // ldr r0, [sp, #0x20]
    // add r0, #0xd8
    // str r4, [r0]
    // add r0, #0xdc
    // str r6, [r0]
    // add r0, #0xe0
    // str r7, [r0]
    // ldr r1, [sp, #0x18]
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r1, [sp, #0x1c]
    // add r0, #0xe8
    // str r1, [r0]
    // ldr r0, [sp, #0x20]
}





void ov49_02267EF8(void) {
    // add r0, #0xd8
    sub_020182A0(*((u32*)r0), 1);
    // strh r0, [r7]
    *((u8*)(r7 + 6)) = 1;
    *((u16*)(r7 + 4)) = r6;
    // add r1, #0xe8
    // blx r2
}





void ov49_02267F40(void) {
    // blx r1
    // str r0, [sp]
    // ldrsh r0, [r5, r6]
    // strh r0, [r5]
    // ldr r0, [sp]
    // add r0, #0xd8
    sub_020182A0(*((u32*)r0), 0, (*((u16*)(r0 + 2)) << 2));
    *((u8*)(r5 + 6)) = 0;
    // ldr r0, [sp]
}





void ov49_02267F94(void) {
    // str r0, [sp, #0x10]
    // add r1, sp, #0x24
    ov49_02259154(r1);
    // ldr r0, [sp, #0x24]
    // add r0, r0, r1
    // str r0, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // add r0, r2, r0
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // sub r0, r0, r1
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // add r0, #8
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // add r0, #0xa8
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02267FE8: ; jump table
    // ldr r1, [sp, #0x24]
    // sub r7, r1, r0
    // ldr r1, [sp, #0x28]
    // add r6, r1, r0
    // ldr r5, [sp, #0x2c]
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r7, r1, r0
    // ldr r1, [sp, #0x28]
    // add r6, r1, r0
    // ldr r5, [sp, #0x2c]
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // sub r7, r1, r0
    // ldr r1, [sp, #0x28]
    // add r6, r1, r0
    // ldr r1, [sp, #0x2c]
    // sub r5, r1, r0
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r7, r1, r0
    // ldr r1, [sp, #0x28]
    // add r6, r1, r0
    // ldr r1, [sp, #0x2c]
    // sub r5, r1, r0
    // str r0, [sp, #0x20]
    // str r6, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    ov49_0226540C(0x12, (2 << 0xe), r7);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x20]
    ov49_022655F4(0x00000CCC, (6 << 0xc));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // add r0, #0xd8
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    sub_020182A8(*((u32*)r0));
    // ldr r0, [sp, #0x1c]
    // add r0, #0x28
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r0, #0xc
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
}





void ov49_022680B4(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r6, [sp]
    // str r0, [sp, #4]
    // add r0, #0xa8
    // add r6, #8
    // ldr r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r2, [sp]
    // ldrsh r1, [r2, r1]
    // str r0, [sp, #8]
    // add r1, sp, #0x10
    // add r1, sp, #0x14
    // add r2, sp, #0x18
    // add r3, sp, #0x1c
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // add r1, r1, r0
    // str r1, [sp, #0x14]
    // add r0, #0xd8
    // ldr r3, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r6, #0x28
    // add r0, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r4, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r7, #0x28
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
}





void ov49_0226813C(void) {
    // str r0, [sp, #0x10]
    // add r1, sp, #0x1c
    ov49_02259154(r1);
    // ldr r1, [sp, #0x1c]
    // add r1, r1, r0
    // str r1, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r1, r1, r0
    // str r1, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // sub r0, r1, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // str r1, [sp, #0x18]
    // add r1, #8
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r1, #0xa8
    // str r1, [sp, #0x14]
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226818A: ; jump table
    // ldr r1, [sp, #0x1c]
    // sub r7, r1, r0
    // ldr r1, [sp, #0x24]
    // ldr r6, [sp, #0x20]
    // add r5, r1, r0
    // ldr r1, [sp, #0x1c]
    // add r7, r1, r0
    // ldr r1, [sp, #0x24]
    // ldr r6, [sp, #0x20]
    // add r5, r1, r0
    // ldr r1, [sp, #0x24]
    // ldr r7, [sp, #0x1c]
    // ldr r6, [sp, #0x20]
    // sub r5, r1, r0
    // ldr r1, [sp, #0x1c]
    // sub r7, r1, r0
    // ldr r1, [sp, #0x24]
    // ldr r6, [sp, #0x20]
    // sub r5, r1, r0
    // ldr r1, [sp, #0x1c]
    // add r7, r1, r0
    // ldr r1, [sp, #0x24]
    // ldr r6, [sp, #0x20]
    // sub r5, r1, r0
    // str r6, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    ov49_0226540C(0x13, (*((u16*)(r1 + 6)) << 0x10), r7);
    // ldr r0, [sp, #0x14]
    ov49_022655F4(0x00001555, 0x0000071C, (2 << 0x10));
    // ldr r0, [sp, #0x18]
    // add r0, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0xc
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    ov49_02268230(*((u16*)(r0 + 4)));
}





void ov49_02268230(void) {
    // str r0, [sp, #8]
    // add r4, #0xa8
    // str r0, [sp, #4]
    // add r0, #8
    // str r0, [sp, #4]
    // str r4, [sp]
    // ldrsh r0, [r5, r0]
    ov49_022655F4(r0, 0, 0x00000E38, (3 << 0xe));
    ov49_02265628(r4);
    // ldrsh r1, [r5, r1]
    // ldr r0, [sp, #4]
    ov49_02265434(0);
    // ldr r0, [sp]
    // add r1, sp, #0xc
    ov49_02265660();
    // add r1, sp, #0x10
    // add r2, sp, #0x14
    // add r3, sp, #0x18
    ov49_022655E0(r6);
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x18]
    // add r2, r1, r0
    // str r2, [sp, #0x14]
    // add r0, #0xd8
    // ldr r1, [sp, #0x10]
    sub_020182A8(*((u32*)r7));
    // ldr r0, [sp, #4]
    // add r0, #0x28
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r4, #0xc
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r6, #0x28
    // str r0, [sp, #8]
    // ldrsh r1, [r5, r0]
}





void ov49_022682D4(void) {
    // add r1, sp, #0x10
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // add r0, r2, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // sub r0, r0, r1
    // str r0, [sp, #0x18]
    // str r6, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, sp, #0x10
}





void ov49_02268334(void) {
    // str r4, [sp, #0x10]
    // add r4, #8
    // str r4, [sp, #0x10]
    // ldrsh r1, [r5, r1]
    // ldr r0, [sp, #0x10]
    ov49_02265434(*((u16*)(r0 + 4)), 0);
    // str r0, [sp, #0x14]
    // add r1, sp, #0x18
    // add r2, sp, #0x1c
    // add r3, sp, #0x20
    ov49_022655E0(r4);
    // add r0, #0xd8
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    sub_020182A8(*((u32*)r7));
    // ldr r0, [sp, #0x14]
    // add r2, sp, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov49_022683FC(r5, r6, 0xFFFFD000);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov49_022683FC(r5, r6, (0xa << 0xc));
    // ldr r0, [sp, #0x10]
    // add r0, #0x28
    // str r0, [sp, #0x10]
    // add r4, #0x28
    // ldr r0, [sp, #0x14]
    *((u8*)(r5 + 7)) = (*((u8*)(r5 + 7)) + 1);
    // strh r0, [r5]
}





void ov49_022683FC(void) {
    // add r3, r5, r5
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02268418: ; jump table
    // sub r2, r0, r6
    // ldr r0, [sp, #0x28]
    // add r0, r1, r0
    // add r2, r0, r6
    // ldr r0, [sp, #0x28]
    // add r0, r1, r0
    // ldr r0, [sp, #0x2c]
    // sub r2, r1, r0
    // ldr r0, [sp, #0x30]
    // add r0, r1, r0
    // ldr r0, [sp, #0x2c]
    // add r2, r1, r0
    // ldr r0, [sp, #0x30]
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0xc]
    // add r1, #8
    // add r0, r1, r0
    // add r0, r7, r0
    // add r0, #0xd8
}





void ov49_02268490(void) {
    Heap_Alloc(0x60);
    memset(0, 0x60);
    // add r1, r2, r1
    ov49_022686C0(r4, (0xa * r5), ov49_0226A7E0);
    // add r1, r2, r1
    ov49_022686E4(r4, (r6 << 1), ov49_0226A7D8);
    *((u32*)(r4 + 0x48)) = 0x3c;
    *((u32*)(r4 + 0x50)) = 0x3c;
    ov49_022686F0(r4, (r4 + 4), (0 + 1));
}





void ov49_022684F4(void) {
}





void ov49_022684FC(void) {
    // str r0, [sp, #4]
    // ldr r4, [sp, #4]
    // add r6, #0x30
    // add r5, #0x18
    // str r0, [sp]
    // ldr r4, [sp, #4]
    // str r1, [sp, #8]
    // add r7, #8
    // add r6, #0x38
    // add r5, #0x20
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // str r1, [sp, #8]
    // ldr r0, [sp, #4]
}





void ov49_02268588(void) {
    *((u8*)(r0 + 0x18)) = *((u8*)r0);
    *((u8*)(r0 + 0x19)) = *((u8*)(r0 + 1));
    *((u8*)(r0 + 0x1a)) = *((u8*)(r0 + 2));
    *((u8*)(r0 + 0x1b)) = *((u8*)(r0 + 3));
    *((u32*)(r0 + 0x48)) = 0;
    // add r4, r2, r0
    // add r0, #0x30
    ov49_02268640(r0, r4, ov49_0226A7E0);
    // add r4, #0x38
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, #0x22
    // strb r1, [r0]
    // add r0, #0x23
    // strb r1, [r0]
    *((u32*)(r5 + 0x50)) = 0;
    ov49_02268640(r5, (r4 + 2));
}





void ov49_022685F8(void) {
    *((u8*)(r0 + 0x1c)) = *((u8*)(r0 + 4));
    *((u8*)(r0 + 0x1d)) = *((u8*)(r0 + 5));
    *((u8*)(r0 + 0x1e)) = *((u8*)(r0 + 6));
    *((u8*)(r0 + 0x1f)) = *((u8*)(r0 + 7));
    *((u32*)(r0 + 0x4c)) = 0;
    // add r0, #0x34
    // add r1, r2, r1
}





void ov49_02268620(void) {
}





void ov49_02268624(void) {
    // ldrsb r4, [r0, r3]
    // ldrsb r2, [r0, r2]
    // ldrsb r0, [r0, r3]
    // strh r0, [r1]
}





void ov49_02268640(void) {
    // and r3, r2
    // strb r3, [r0]
    // and r3, r4
    // asr r3, r3, #5
    // and r1, r3
    // asr r1, r1, #0xa
}





void ov49_02268664(void) {
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r5, r0]
    // sub r0, r2, r0
    // str r0, [sp, #4]
    // ldrsb r2, [r1, r0]
    // ldrsb r0, [r5, r0]
    // sub r0, r2, r0
    // str r0, [sp]
    // ldrsb r7, [r5, r0]
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp, #0x20]
    // sub r0, r0, r7
    // add r0, r7, r0
    // strb r0, [r4]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // ldrsb r1, [r5, r1]
    // add r0, r1, r0
    // ldr r0, [sp]
    // ldr r1, [sp, #0x20]
    // ldrsb r1, [r5, r1]
    // add r0, r1, r0
}





void ov49_022686C0(void) {
    // add r5, #8
}





void ov49_022686E4(void) {
}





void ov49_022686F0(void) {
    // add r7, sp, #4
    // str r0, [sp]
    // add r7, #2
    // add r6, sp, #4
    // ldr r0, [sp]
    // add r1, sp, #4
    // add r0, #8
    // add r1, #2
    // ldr r0, [sp]
    // add r1, sp, #4
    // add r0, #0xc
    // add r1, sp, #4
    // ldr r0, [sp]
    // add r1, sp, #4
    // add r0, #0x10
    // add r1, #2
    // ldr r0, [sp]
    // add r1, sp, #4
    // add r0, #0x14
    // str r0, [sp]
    // add r1, sp, #4
}





void ov49_02268764(void) {
    // strb r0, [r2]
    // str r5, [r4]
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp]
}





void ov49_02268850(void) {
}





void ov49_02268870(void) {
}





void ov49_02268968(void) {
}





void ov49_02268974(void) {
}





void ov49_022689A0(void) {
}





void ov49_022689D4(void) {
    // sub r1, #0xb
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022689EA: ; jump table
    // sub r0, #0xb
}





void ov49_02268A00(void) {
}





void ov49_02268A0C(void) {
    // strb r0, [r2]
    // str r5, [r4]
}





void ov49_02268A6C(void) {
}





void ov49_02268A7C(void) {
}





void ov49_02268ADC(void) {
    GF_AssertFail();
    // blx r2
}





void ov49_02268B04(void) {
}





void ov49_02268B08(void) {
}





void ov49_02268B0C(void) {
    _u32_div_f(r1, 0xe);
    // add r3, r0, r2
    // and r1, r0
    // str r0, [sp]
    // str r0, [sp]
    // ldr r2, [sp]
    ov49_0225E85C(*((u32*)(r7 + 4)), *((u8*)ov49_0226A8B4), (*((u32*)(r7 + 0xc)) << 3), (1 << 0xc));
    GF_AssertFail();
    // and r0, r1
    *((u32*)(r7 + 0xc)) = 3;
}





void ov49_02268B90(void) {
    _u32_div_f(r1, 6);
    // str r0, [sp]
    // add r1, sp, #4
    ov49_02268D0C(*((u8*)(ov49_0226A83D + (*((u32*)(r5 + 0xc)) << 1))), (*((u32*)(r5 + 0xc)) << 1));
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    ov49_0225E85C(*((u32*)(r5 + 4)), *((u8*)(r1 + 0)), 0, (1 << 0xc));
    GF_AssertFail();
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, sp, #4
    ov49_02268D0C();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    ov49_0225E85C(*((u32*)(r5 + 4)), *((u8*)(r1 + 0)), 1, (1 << 0xc));
    GF_AssertFail();
    // ldr r0, [sp, #8]
    _u32_div_f((*((u32*)(r5 + 0xc)) + 1), 7);
    *((u32*)(r5 + 0xc)) = r1;
}





void ov49_02268C2C(void) {
    ov49_0225E894(*((u32*)(r0 + 4)), *((u32*)(ov49_0226A868 + (*((u32*)(r0 + 0xc)) << 3))), (*((u32*)(r0 + 0xc)) << 3));
    ov49_0225E6E0(*((u32*)(r4 + 4)), *((u32*)(ov49_0226A868 + (*((u32*)(r4 + 0xc)) << 3))), (*((u32*)(r4 + 0xc)) << 3));
    PlaySE(0x000005B4);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
}





void ov49_02268C74(void) {
    GF_AssertFail();
    // add r1, #0xc
    *((u8*)(r5 + 0xc)) = 0;
    *((u8*)(r5 + 1)) = 0;
    *((u8*)(r5 + 2)) = 0;
    *((u8*)(r5 + 3)) = 0;
    // blx r2
    *((u8*)(r5 + 8)) = r4;
}





void ov49_02268CAC(void) {
    // bx r3
    // _02268CB8: .word ov49_0225E82C
}





void ov49_02268CBC(void) {
    // bx r3
    // nop
    // _02268CC8: .word ov49_0225E82C
}





void ov49_02268CCC(void) {
    // bx r3
    // _02268CD8: .word ov49_0225E82C
}





void ov49_02268CDC(void) {
    // bx r3
    // _02268CE8: .word ov49_0225E82C
}





void ov49_02268CEC(void) {
}





void ov49_02268D0C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02268D1E: ; jump table
    *((u32*)(r1 + 4)) = 6;
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 2;
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 2;
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 1;
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 1;
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 2;
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 3;
    // str r0, [r1]
    GF_AssertFail(ov49_0226A830);
}





void ov49_02268D94(void) {
}





void ov49_02268DB0(void) {
}





void ov49_02268DCC(void) {
    ov49_0225EF84();
    ov49_02259FE8(r4);
    // str r0, [sp]
    ov49_02259FF0(r4);
    // str r0, [sp, #4]
    ov49_02258DB0();
    // ldr r0, [sp, #4]
    ov49_02258DAC();
    // str r0, [sp, #8]
    ov49_0225EF88(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02268E10: ; jump table
    ov49_0225EF40(r5, 4);
    PlaySE(0x000005DC);
    // ldr r0, [sp, #8]
    ov49_02258E60(6);
    ov42_022282A4();
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov49_02258EEC(r7, 0);
    ov49_02259130(r7, 0);
    // ldr r1, [sp, #0xc]
    ov49_02259160(r7);
    // ldr r0, [sp]
    ov45_0222A330();
    ov49_0225A30C(r4, 1, 3);
    // str r0, [r6]
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 5);
    // ldr r0, [sp]
    ov45_0222A3A0();
    ov49_0225A30C(r4, 1, 0x58);
    // str r0, [r6]
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 5);
    // ldr r0, [sp]
    ov45_0222A2E0();
    ov49_0225A30C(r4, 1, 0x57);
    // str r0, [r6]
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 5);
    ov49_0225A30C(r4, 1, 0x51);
    // str r0, [r6]
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 5);
    ov49_0225A264(r4);
    ov49_0225EF8C(r5, 2);
    ov49_0225A2C4(r4);
    ov49_0225EF8C(r5, 3);
    ov49_0225A2F8(r4);
    ov49_0225EF8C(r5, 4);
    ov49_0225A2F8(r4);
    ov49_0225A30C(r4, 1, 0x55);
    // str r0, [r6]
    ov49_0225A08C(r4, r0);
    ov49_0225EF8C(r5, 5);
    ov49_0225A0EC(r4);
    ov49_0225A2F8(r4);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov49_02258EEC(1);
    ov49_0225EF68(r5);
    ov49_02259130(r7, 1);
    // ldr r0, [sp, #4]
    ov49_02258EAC(r7, 0, 1);
    ov49_0225A0AC(r4);
    ov49_0225EF8C(r5, *((u32*)r6));
    GF_AssertFail();
}





void ov49_02268FAC(void) {
    Heap_Alloc(r1, 0xc4);
    memset(0, 0xc4);
    // str r5, [r4]
    ov49_02259FE8(r5);
    *((u32*)(r4 + 4)) = r0;
    ov49_02259FF8(r5);
    *((u32*)(r4 + 8)) = r0;
    ov49_0225A000(r5);
    *((u32*)(r4 + 0xc)) = r0;
    ov49_022589A8();
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, #0xbc
    // mvn r0, r0
    // sub r1, r0, r1
    // add r0, #0xc0
    // str r1, [r0]
    // add r0, #0xbc
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, #0xc0
    // str r1, [r0]
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov49_022589D8(*((u32*)(r4 + 0xc)), *((u8*)ov49_0226A8C8));
    // add r0, sp, #4
    // add r0, #0xaa
    // strh r1, [r0]
    // add r0, sp, #4
    // add r0, #0xac
    // strh r1, [r0]
    // add r2, #0xbc
    ov49_0225E3B8(*((u32*)(r4 + 8)), 0, *((u32*)r4));
    ov45_0222AD80(*((u32*)(r4 + 4)), r5);
    ov49_02269178(r4, r5);
    ov49_022695C4(r4, r5);
}





void ov49_02269090(void) {
}





void ov49_02269098(void) {
    // mvn r1, r1
    // str r0, [sp, #8]
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp]
    // add r7, #0x2c
    // add r7, #0xe
}





void ov49_02269154(void) {
    // add r0, r5, r0
    // add r0, r6, r0
    // add r0, r0, r4
}





void ov49_02269178(void) {
    // str r1, [sp]
    // add r0, #0xc0
    // asr r1, r0, #0x1f
    // asr r3, r7, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // asr r2, r0, #0x1f
    // add r2, r2, r0
    // adc r3, r1
    // add r0, #0xbc
    // ldr r1, [sp]
    // add r2, r3, r2
}





void ov49_02269240(void) {
    // ldr r0, [sp, #0x30]
    // str r1, [sp]
    // str r0, [sp, #0x30]
    // str r2, [sp, #4]
    ov45_0222AD3C(*((u32*)(r0 + 4)));
    ov45_0222AD2C(*((u32*)(r7 + 4)));
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    _u32_div_f(3);
    // str r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // add r0, #0x2c
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r1, r4, r1
    ov45_0222ADE8(*((u32*)(r7 + 4)), (0xe * r7));
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp]
    ov49_0225E47C(*((u32*)(r7 + 8)));
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov49_022693D4(r5, r6, *((u16*)(r3 + 2)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov49_022693A4(0x0000FFFE, r5, r6, *((u16*)(r0 + 8)));
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov49_022693D4(r5, r6, *((u16*)r3));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov49_022693A4(0x0000FFFE, r5, r6, *((u16*)(r0 + 4)));
    // ldr r1, [sp, #0x10]
    // add r1, r4, r1
    ov45_0222ADF8(*((u32*)(r7 + 4)));
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp]
    // add r0, r2, r0
    ov49_022693F8(0, *((u32*)(r7 + 8)));
    // ldr r1, [sp, #0x10]
    // add r1, r4, r1
    ov45_0222ADF8(*((u32*)(r7 + 4)));
    // ldr r0, [sp, #4]
    ov49_022693A4(r5, r6, 0x000005C6);
    // ldr r1, [sp]
    ov49_0225E4A4(*((u32*)(r7 + 8)));
    // ldr r1, [sp, #0x10]
    // add r1, r4, r1
    ov45_0222ADF8(*((u32*)(r7 + 4)));
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov49_022693A4(r5, r6, *((u16*)(r3 + 0xa)));
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #4]
    ov49_022693A4(r5, r6, *((u16*)(r3 + 6)));
}





void ov49_022693A4(void) {
}





void ov49_022693D4(void) {
}





void ov49_022693F8(void) {
    GF_AssertFail();
    *((u16*)(r5 + 2)) = r4;
    // strh r0, [r5]
    // blx r3
}





void ov49_02269430(void) {
    // blx r3
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 9)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
    *((u8*)(r0 + 0xb)) = 0;
    *((u8*)(r0 + 0xc)) = 0;
    *((u8*)(r0 + 0xd)) = 0;
}





void ov49_02269474(void) {
}





void ov49_02269494(void) {
}





void ov49_022694B4(void) {
    // add r0, sp, #0x10
    // str r4, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldrsh r0, [r5, r0]
    // str r1, [sp]
    // str r2, [sp, #4]
    // ldrsh r0, [r5, r0]
    *((u16*)(r0 + 4)) = (4 + 1);
    *((u16*)(r0 + 4)) = 0;
    // ldrsh r0, [r5, r0]
    *((u16*)(r0 + 0xc)) = (0xc - 1);
    // ldrsh r1, [r5, r0]
    // ldrsh r1, [r5, r1]
    _s32_div_f((0x0000FFFF * (4 + 1)), 6);
    _fflt((*((u16*)(r5 + 8)) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r0, r6, #4
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #8]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    _ll_mul(FX_SinCosTable_, (r0 << 2), r0);
    // add r2, r0, r2
    // adc r1, r3
    // ldrsh r0, [r5, r0]
    _fflt((0xa << 0xc), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // asr r3, r2, #0x1f
    _ll_mul(r0);
    // add r2, r0, r2
    // adc r1, r3
    // str r1, [sp, #0x14]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov49_0225E4F8((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), r6, 0);
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x10
    ov49_0225E3F4();
}





void ov49_022695C4(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r1, r6, r1
    // ldr r1, [sp]
    // add r3, sp, #8
    // add r5, r7, r0
    // ldrsh r0, [r5, r0]
    // add r0, #0x10
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r1, r6, r1
}




