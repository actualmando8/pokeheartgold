/* Decompiled from asm/overlay_93_thumb_2.s */
#include "global.h"

void ov93_0225FBF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r7, r0, #0
    // str r1, [sp, #0x10]
    // mov r0, #0xc9
    // mov r1, #0x75
    // add r5, r2, #0
    // add r4, r3, #0
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0x75
    // str r1, [sp, #0xc]
    // ldr r1, _0225FC7C ; =ov93_02262CEC
    // lsl r6, r5, #3
    // ldrh r1, [r1, r6]
    // add r2, r7, #0
    // mov r3, #7
    // str r0, [sp, #0x14]
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r1, _0225FC80 ; =ov93_02262CEE
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x75
    // str r0, [sp, #0xc]
    // ldrh r1, [r1, r6]
    // ldr r0, [sp, #0x14]
    // add r2, r7, #0
    // mov r3, #7
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r0, [sp, #0x14]
    // bl NARC_Delete
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x30
    // bl MI_CpuFill8
    // ldr r0, [sp, #0x10]
    // mov r1, #0xc
    // add r2, r0, #0
    // mul r2, r1
    // ldr r0, _0225FC84 ; =ov93_02262FD4
    // lsl r1, r5, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // str r0, [r4, #0xc]
    // str r5, [r4, #4]
    // add r0, r4, #0
    // str r1, [r4]
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r2, [sp, #0x10]
    // add r0, r7, #0
    // add r1, r4, #0
    // bl ov93_0225FCA4
    // ldr r0, _0225FC88 ; =0x000005EB
    // bl PlaySE
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225FC7C: .word ov93_02262CEC
    // _0225FC80: .word ov93_02262CEE
    // _0225FC84: .word ov93_02262FD4
    // _0225FC88: .word 0x000005EB
    // TODO: decompile
}



void ov93_0225FC8C(void) {
}



void ov93_0225FCA4(void) {
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r3, sp, #0x10
    ov93_0225FD8C(r2, *((u32*)(r1 + 4)), *((u32*)(r1 + 8)));
    // ldr r1, [sp, #0x10]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // sub r7, r0, r1
    // sub r0, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // neg r7, r0
    // ldr r1, [sp, #0xc]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // sub r6, r0, r1
    // sub r0, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // neg r6, r0
    LCRandom(*((u32*)(r5 + 0x10)), (0x80 << 7));
    // and r0, r1
    // tst r0, r1
    // neg r4, r4
    // eor r0, r1
    *((u32*)(r5 + 0x28)) = 1;
    // ldr r0, [sp, #0x10]
    FX_Inv(1, *((u32*)(r5 + 0x28)));
    // ldr r0, [sp, #0xc]
    FX_Inv();
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    ScheduleSetBgAffineScale(7, 3, r5);
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #8]
    ScheduleSetBgAffineScale(7, 6);
    // ldr r0, [sp, #4]
    // sub r3, r4, r7
    ScheduleSetBgPosText(7, 0);
    // ldr r0, [sp, #4]
    // sub r3, r3, r6
    ScheduleSetBgPosText(7, 3, 0x27);
}



void ov93_0225FD8C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r3, #0
    // ldr r0, _0225FDE8 ; =ov93_02262CF0
    // lsl r3, r1, #3
    // ldr r0, [r0, r3]
    // add r6, r5, #0
    // mul r0, r2
    // mov r2, #0xc
    // mul r6, r2
    // ldr r3, _0225FDEC ; =ov93_02262FD4
    // lsl r2, r1, #2
    // add r1, r3, r6
    // ldr r1, [r2, r1]
    // bl _s32_div_f
    // mov r1, #3
    // lsl r1, r1, #8
    // add r2, r0, r1
    // ldr r1, [sp, #0x10]
    // str r2, [r4]
    // str r2, [r1]
    // mov r1, #1
    // lsl r1, r1, #0xc
    // cmp r2, r1
    // ble _0225FDE6
    // mov r1, #0xd
    // lsl r1, r1, #8
    // sub r0, r0, r1
    // ldr r2, _0225FDF0 ; =0x0000119A
    // asr r1, r0, #0x1f
    // mov r3, #0
    // bl _ll_mul
    // mov r3, #2
    // mov r5, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r5
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // ldr r2, [r4]
    // orr r1, r0
    // add r0, r2, r1
    // str r0, [r4]
    // pop {r4, r5, r6, pc}
    // _0225FDE8: .word ov93_02262CF0
    // _0225FDEC: .word ov93_02262FD4
    // _0225FDF0: .word 0x0000119A
    // TODO: decompile
}



void ov93_0225FDF4(void) {
    // cmp r0, #0xa
    // blt _0225FDFC
    // mov r0, #2
    // bx lr
    // cmp r0, #5
    // blt _0225FE04
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov93_0225FE08(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x10]
    // add r6, r2, #0
    // add r0, r0, r6
    // add r7, r3, #0
    // str r0, [r4, #0x10]
    // mov r1, #6
    // bl _s32_div_f
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov93_0225E3C4
    // add r1, r4, #0
    // add r1, #0x18
    // lsl r0, r0, #2
    // ldr r2, [r1, r0]
    // add r2, r2, r6
    // str r2, [r1, r0]
    // bl sub_0203769C
    // cmp r7, r0
    // bne _0225FE4E
    // ldr r1, _0225FE54 ; =0x00003848
    // ldr r0, [r5, r1]
    // add r0, r0, r6
    // str r0, [r5, r1]
    // ldr r0, _0225FE58 ; =0x000015A8
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // bl ov93_02262098
    // ldr r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225FE54: .word 0x00003848
    // _0225FE58: .word 0x000015A8
    // TODO: decompile
}



void ov93_0225FE5C(void) {
    // sub r1, r1, r2
    *((u32*)(0 + 0x10)) = *((u32*)(0 + 0x10));
    // add r1, r1, r2
    *((u32*)(0 + 8)) = *((u32*)(0 + 8));
}



void ov93_0225FE80(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0225FEA8 ; =0x00002FCC
    // add r6, r1, #0
    // ldr r0, [r5, r0]
    // add r4, r2, #0
    // cmp r0, #0
    // beq _0225FEA4
    // add r0, r4, #0
    // bl ov93_0225FE5C
    // ldr r2, [r5]
    // add r0, r6, #0
    // add r2, #0x30
    // ldrb r2, [r2]
    // add r1, r4, #0
    // bl ov93_0225FCA4
    // pop {r4, r5, r6, pc}
    // nop
    // _0225FEA8: .word 0x00002FCC
    // TODO: decompile
}



void ov93_0225FEAC(void) {
    // ldr r1, _0225FEBC ; =0x00001428
    // ldr r3, _0225FEC0 ; =_s32_div_f
    // add r2, r0, r1
    // ldr r1, [r2, #8]
    // mov r0, #0x64
    // mul r0, r1
    // ldr r1, [r2, #0xc]
    // bx r3
    // _0225FEBC: .word 0x00001428
    // _0225FEC0: .word _s32_div_f
    // TODO: decompile
}



void ov93_0225FEC4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldr r0, _0225FF14 ; =0x00002FDC
    // add r4, r1, #0
    // mov r3, #0
    // add r2, r5, #0
    // ldr r1, [r2, r0]
    // cmp r1, #0
    // bne _0225FF00
    // ldr r2, _0225FF14 ; =0x00002FDC
    // mov r6, #0x18
    // add r2, r5, r2
    // mul r6, r3
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r2, r6
    // bl ov93_0225FF1C
    // str r0, [sp]
    // ldr r1, _0225FF18 ; =0x00001560
    // ldrb r2, [r4, #1]
    // ldrb r3, [r4]
    // add r0, r5, #0
    // add r1, r5, r1
    // bl ov93_02261C58
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // add r3, r3, #1
    // add r2, #0x18
    // cmp r3, #0x28
    // blt _0225FED2
    // bl GF_AssertFail
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225FF14: .word 0x00002FDC
    // _0225FF18: .word 0x00001560
    // TODO: decompile
}



void ov93_0225FF1C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r2, #0
    // add r7, r0, #0
    // ldr r0, [r4]
    // add r5, r1, #0
    // cmp r0, #0
    // beq _0225FF2E
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x18
    // bl MI_CpuFill8
    // ldrb r1, [r5]
    // add r0, r7, #0
    // bl ov93_0225E3C4
    // ldr r1, [r7]
    // ldr r3, _0225FFF4 ; =ov93_02263010
    // add r1, #0x30
    // ldrb r2, [r1]
    // mov r1, #0x28
    // mul r1, r2
    // mov r2, #0xa
    // mul r2, r0
    // ldrb r0, [r5]
    // add r1, r3, r1
    // add r6, r1, r2
    // strh r0, [r4, #4]
    // ldrh r0, [r5, #2]
    // add r1, r6, #0
    // strh r0, [r4, #6]
    // ldr r0, [r5, #8]
    // str r0, [r4, #8]
    // str r6, [r4, #0x14]
    // ldrb r0, [r5, #1]
    // strb r0, [r4, #0xe]
    // add r0, r7, #0
    // bl ov93_0226027C
    // str r0, [r4, #0x10]
    // bl sub_0203769C
    // ldrb r1, [r5]
    // cmp r1, r0
    // bne _0225FF8E
    // ldr r1, [r5, #4]
    // add r0, r7, #0
    // bl ov93_0225DF38
    // mov r0, #0x19
    // strh r0, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #1
    // str r0, [r4]
    // add r1, sp, #0
    // mov r3, #0x16
    // ldr r0, [r4, #0x10]
    // add r1, #2
    // add r2, sp, #0
    // lsl r3, r3, #0x10
    // mov r5, #0
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // ldrb r0, [r6, #7]
    // cmp r0, #3
    // bhi _0225FFE8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FFB6: ; jump table
    // add r1, sp, #0
    // add r0, r5, #0
    // ldrsh r1, [r1, r0]
    // mov r0, #0x1c
    // sub r5, r0, r1
    // b _0225FFE8
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r5, [r1, r0]
    // sub r5, #0xcc
    // b _0225FFE8
    // add r1, sp, #0
    // add r0, r5, #0
    // ldrsh r5, [r1, r0]
    // sub r5, #0xa4
    // b _0225FFE8
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // mov r0, #0x34
    // sub r5, r0, r1
    // mov r1, #5
    // lsl r0, r5, #0xc
    // lsl r1, r1, #0xc
    // bl _s32_div_f
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225FFF4: .word ov93_02263010
    // TODO: decompile
}



void ov93_0225FFF8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _02260070 ; =0x00002FDC
    // mov r6, #0
    // add r4, r5, r0
    // add r7, r6, #0
    // ldr r0, [r4]
    // cmp r0, #1
    // bne _02260064
    // mov r0, #0xc
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _0226002C
    // mov r0, #0xc
    // ldrsh r0, [r4, r0]
    // sub r0, r0, #1
    // strh r0, [r4, #0xc]
    // mov r0, #0xc
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bne _02260064
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // b _02260064
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov93_02260080
    // cmp r0, #1
    // bne _02260064
    // ldr r0, _02260074 ; =0x00002FCC
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _0226005C
    // ldr r0, _02260078 ; =0x00002FBC
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _0226005C
    // ldrb r0, [r4, #0xe]
    // ldr r1, _0226007C ; =0x00001428
    // mov r3, #4
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // add r1, r5, r1
    // bl ov93_0225FE08
    // ldr r0, [r4, #0x10]
    // bl Sprite_DeleteAndFreeResources
    // str r7, [r4]
    // add r6, r6, #1
    // add r4, #0x18
    // cmp r6, #0x28
    // blt _02260004
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02260070: .word 0x00002FDC
    // _02260074: .word 0x00002FCC
    // _02260078: .word 0x00002FBC
    // _0226007C: .word 0x00001428
    // TODO: decompile
}



void ov93_02260080(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // str r0, [sp]
    // add r1, sp, #4
    // mov r3, #0x16
    // ldr r0, [r4, #0x10]
    // add r1, #2
    // add r2, sp, #4
    // lsl r3, r3, #0x10
    // mov r7, #0
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // ldr r0, [r4, #0x14]
    // ldrb r0, [r0, #7]
    // cmp r0, #3
    // bhi _02260188
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022600AE: ; jump table
    // add r0, sp, #4
    // add r1, r7, #0
    // ldrsh r2, [r0, r1]
    // mov r0, #0x1c
    // sub r6, r0, r2
    // mov r2, #5
    // ldr r0, [r4, #0x10]
    // lsl r2, r2, #0xc
    // bl ManagedSprite_AddSpritePrecisePositionXY
    // add r1, sp, #8
    // mov r3, #0x16
    // ldr r0, [r4, #0x10]
    // add r1, #2
    // add r2, sp, #8
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r1, sp, #4
    // mov r0, #4
    // ldrsh r1, [r1, r0]
    // mov r0, #0x1c
    // sub r5, r0, r1
    // cmp r1, #0x4a
    // ble _02260188
    // mov r7, #1
    // b _02260188
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r6, [r1, r0]
    // ldr r0, [r4, #0x10]
    // ldr r1, _02260270 ; =0xFFFFB000
    // add r2, r7, #0
    // sub r6, #0xcc
    // bl ManagedSprite_AddSpritePrecisePositionXY
    // add r1, sp, #8
    // mov r3, #0x16
    // ldr r0, [r4, #0x10]
    // add r1, #2
    // add r2, sp, #8
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r1, sp, #4
    // mov r0, #6
    // ldrsh r0, [r1, r0]
    // add r5, r0, #0
    // sub r5, #0xcc
    // cmp r0, #0x98
    // bge _02260188
    // mov r7, #1
    // b _02260188
    // add r0, sp, #4
    // add r1, r7, #0
    // ldrsh r6, [r0, r1]
    // ldr r0, [r4, #0x10]
    // ldr r2, _02260270 ; =0xFFFFB000
    // sub r6, #0xa4
    // bl ManagedSprite_AddSpritePrecisePositionXY
    // add r1, sp, #8
    // mov r3, #0x16
    // ldr r0, [r4, #0x10]
    // add r1, #2
    // add r2, sp, #8
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r1, sp, #4
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // add r5, r0, #0
    // sub r5, #0xa4
    // cmp r0, #0x72
    // bge _02260188
    // mov r7, #1
    // b _02260188
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // mov r0, #0x34
    // add r2, r7, #0
    // sub r6, r0, r1
    // mov r1, #5
    // ldr r0, [r4, #0x10]
    // lsl r1, r1, #0xc
    // bl ManagedSprite_AddSpritePrecisePositionXY
    // add r1, sp, #8
    // mov r3, #0x16
    // ldr r0, [r4, #0x10]
    // add r1, #2
    // add r2, sp, #8
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r1, sp, #4
    // mov r0, #6
    // ldrsh r1, [r1, r0]
    // mov r0, #0x34
    // sub r5, r0, r1
    // cmp r1, #0x68
    // ble _02260188
    // mov r7, #1
    // cmp r5, #0
    // blt _022601B8
    // cmp r5, #0xe
    // bge _022601F0
    // lsl r0, r5, #0xc
    // mov r1, #0xe
    // bl _s32_div_f
    // mov r1, #1
    // lsl r1, r1, #0xa
    // cmp r0, r1
    // bge _022601A2
    // add r0, r1, #0
    // bl _fflt
    // ldr r1, _02260274 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // b _022601F0
    // mov r0, #0xd
    // mvn r0, r0
    // cmp r5, r0
    // ble _022601F0
    // ldrb r0, [r4, #0xe]
    // neg r1, r5
    // lsl r2, r0, #2
    // ldr r0, _02260278 ; =ov93_02262CA4
    // ldr r0, [r0, r2]
    // mul r0, r1
    // mov r1, #0xe
    // bl _s32_div_f
    // mov r1, #1
    // lsl r1, r1, #0xa
    // cmp r0, r1
    // bge _022601DC
    // add r0, r1, #0
    // bl _fflt
    // ldr r1, _02260274 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // bl sub_0203769C
    // mov r1, #4
    // ldrsh r1, [r4, r1]
    // cmp r1, r0
    // bne _02260260
    // cmp r6, #0
    // blt _02260260
    // cmp r5, #0
    // bgt _02260260
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // bl ov93_022614F4
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #0xe]
    // cmp r0, #1
    // beq _0226021E
    // cmp r0, #2
    // beq _02260226
    // cmp r0, #3
    // beq _02260232
    // b _0226023A
    // ldr r0, [r4, #8]
    // lsl r0, r0, #1
    // str r0, [r4, #8]
    // b _0226023A
    // ldr r1, [r4, #8]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #8]
    // b _0226023A
    // ldr r1, [r4, #8]
    // lsl r0, r1, #1
    // add r0, r1, r0
    // str r0, [r4, #8]
    // ldrb r1, [r4, #0xe]
    // ldr r0, [sp]
    // bl ov93_02260FB8
    // ldrb r0, [r4, #0xe]
    // cmp r0, #0
    // beq _02260250
    // ldr r0, [sp, #0xc]
    // mov r1, #3
    // bl ov93_02261528
    // ldr r0, [sp]
    // bl ov93_02260F84
    // add r1, r0, #0
    // beq _02260260
    // ldr r0, [sp]
    // bl ov93_022627E8
    // cmp r7, #1
    // bne _0226026A
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02260270: .word 0xFFFFB000
    // _02260274: .word 0x45800000
    // _02260278: .word ov93_02262CA4
    // TODO: decompile
}



void ov93_0226027C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // ldr r6, _022602E0 ; =ov93_02262DCC
    // add r2, r0, #0
    // add r5, r1, #0
    // add r4, sp, #0
    // mov r3, #6
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r3, r3, #1
    // bne _0226028A
    // ldr r0, [r6]
    // add r1, sp, #0
    // str r0, [r4]
    // mov r0, #0
    // ldrsh r0, [r5, r0]
    // strh r0, [r1]
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // strh r0, [r1, #2]
    // ldrb r0, [r5, #6]
    // str r0, [sp, #0xc]
    // ldr r0, [r2, #0x24]
    // ldr r1, [r2, #0x28]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // mov r1, #0
    // mov r2, #2
    // mov r3, #0x16
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // lsl r3, r3, #0x10
    // add r4, r0, #0
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldrh r1, [r5, #4]
    // add r0, r4, #0
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // mov r1, #2
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, [r4]
    // bl Sprite_TickFrame
    // add r0, r4, #0
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // _022602E0: .word ov93_02262DCC
    // TODO: decompile
}



void ov93_022602E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // ldr r7, _0226030C ; =0x00002FDC
    // add r5, r0, #0
    // add r6, r4, #0
    // ldr r0, [r5, r7]
    // cmp r0, #1
    // bne _02260300
    // ldr r0, _02260310 ; =0x00002FEC
    // ldr r0, [r5, r0]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, _0226030C ; =0x00002FDC
    // str r6, [r5, r0]
    // add r4, r4, #1
    // add r5, #0x18
    // cmp r4, #0x28
    // blt _022602EE
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0226030C: .word 0x00002FDC
    // _02260310: .word 0x00002FEC
    // TODO: decompile
}



void ov93_02260314(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x68
    // ldr r5, _022605F8 ; =ov93_02262E00
    // str r2, [sp, #4]
    // add r7, r0, #0
    // str r1, [sp]
    // mov r4, #0
    // add r3, sp, #0x34
    // mov r2, #6
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02260326
    // ldr r0, [r5]
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #8]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #0x10]
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // b _0226044C
    // ldr r2, [r7]
    // ldr r1, [sp, #0xc]
    // add r0, r7, #0
    // add r1, r2, r1
    // add r1, #0x2c
    // ldrb r1, [r1]
    // bl ov93_0225E3C4
    // add r5, r0, #0
    // ldr r0, [sp, #4]
    // lsl r1, r5, #2
    // add r0, r0, r1
    // ldr r1, [r0, #0x18]
    // mov r0, #0x24
    // mul r0, r1
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // add r1, r2, r1
    // bl _s32_div_f
    // ldr r1, [sp, #0xc]
    // lsl r5, r5, #1
    // lsl r2, r1, #2
    // add r1, sp, #0x24
    // str r0, [r1, r2]
    // ldr r0, [r7]
    // add r0, #0x30
    // ldrb r0, [r0]
    // lsl r3, r0, #3
    // ldr r0, _022605FC ; =ov93_02262D7C
    // add r0, r0, r3
    // ldrh r0, [r5, r0]
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, r0, #4
    // str r0, [sp, #0x1c]
    // ldr r0, [r1, r2]
    // str r0, [sp, #0x20]
    // b _0226043E
    // mov r0, #0x18
    // add r1, r4, #0
    // mul r1, r0
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x34
    // add r5, r0, r1
    // ldr r0, [r7, #0x24]
    // ldr r1, [r7, #0x28]
    // bl SpriteSystem_NewSprite
    // add r6, r0, #0
    // beq _02260446
    // mov r3, #0x16
    // mov r1, #0x80
    // mov r2, #0x60
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r1, [sp, #0x10]
    // add r0, r6, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r6]
    // bl Sprite_TickFrame
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x13
    // sub r2, r2, r1
    // mov r0, #0x13
    // ror r2, r0
    // mov r0, #2
    // add r1, r1, r2
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r5, #4]
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x12
    // sub r2, r2, r1
    // mov r0, #0x12
    // ror r2, r0
    // mov r0, #2
    // add r1, r1, r2
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r5, #8]
    // bl LCRandom
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // lsl r0, r1, #0xc
    // str r0, [r5, #0xc]
    // bl LCRandom
    // mov r1, #5
    // lsl r1, r1, #0xe
    // bl _s32_div_f
    // mov r0, #0xa
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r5, #0x10]
    // bl LCRandom
    // mov r1, #0xf
    // bl _s32_div_f
    // add r1, #0x14
    // strh r1, [r5, #0x14]
    // add r1, r4, #0
    // mov r0, #0x18
    // mul r1, r0
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r0, r0, r1
    // str r6, [r0, #4]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x20]
    // cmp r1, r0
    // blt _02260396
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [r7]
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [sp, #0xc]
    // cmp r0, r1
    // bge _0226045A
    // b _02260344
    // mov r0, #0xe
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // mov r1, #0xd9
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x40]
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // add r6, r0, r1
    // b _02260522
    // ldr r1, [sp, #0xc]
    // mov r0, #0x18
    // mul r0, r1
    // add r4, r6, r0
    // ldr r0, [r7, #0x24]
    // ldr r1, [r7, #0x28]
    // add r2, sp, #0x34
    // bl SpriteSystem_NewSprite
    // add r5, r0, #0
    // beq _02260528
    // mov r3, #0x16
    // mov r1, #0x80
    // mov r2, #0x60
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // bl LCRandom
    // mov r1, #3
    // bl _s32_div_f
    // add r0, r5, #0
    // add r1, #0x1c
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5]
    // bl Sprite_TickFrame
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x13
    // sub r2, r2, r1
    // mov r0, #0x13
    // ror r2, r0
    // mov r0, #2
    // add r1, r1, r2
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r4, #4]
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x12
    // sub r2, r2, r1
    // mov r0, #0x12
    // ror r2, r0
    // mov r0, #2
    // add r1, r1, r2
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r4, #8]
    // bl LCRandom
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // lsl r0, r1, #0xc
    // str r0, [r4, #0xc]
    // bl LCRandom
    // mov r1, #5
    // lsl r1, r1, #0xe
    // bl _s32_div_f
    // mov r0, #1
    // lsl r0, r0, #0x10
    // add r0, r1, r0
    // str r0, [r4, #0x10]
    // bl LCRandom
    // mov r1, #0xf
    // bl _s32_div_f
    // add r1, #0x14
    // strh r1, [r4, #0x14]
    // ldr r1, [sp, #0xc]
    // mov r0, #0x18
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp]
    // add r1, r0, r2
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // str r5, [r1, r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // cmp r0, #8
    // blt _0226046E
    // mov r0, #0xd
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #4]
    // lsl r1, r0, #1
    // ldr r0, _02260600 ; =_02262C6C
    // ldrh r0, [r0, r1]
    // ldr r1, _02260604 ; =0x00000424
    // str r0, [sp, #0x40]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r6, r0, r1
    // b _022605EC
    // ldr r1, [sp, #0xc]
    // mov r0, #0x18
    // mul r0, r1
    // add r4, r6, r0
    // ldr r0, [r7, #0x24]
    // ldr r1, [r7, #0x28]
    // add r2, sp, #0x34
    // bl SpriteSystem_NewSprite
    // add r5, r0, #0
    // beq _022605F2
    // mov r3, #0x16
    // mov r1, #0x80
    // mov r2, #0x60
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // add r0, r5, #0
    // mov r1, #0xb
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5]
    // bl Sprite_TickFrame
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x13
    // sub r2, r2, r1
    // mov r0, #0x13
    // ror r2, r0
    // mov r0, #2
    // add r1, r1, r2
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r4, #4]
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x12
    // sub r2, r2, r1
    // mov r0, #0x12
    // ror r2, r0
    // mov r0, #2
    // add r1, r1, r2
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r4, #8]
    // bl LCRandom
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // bl _s32_div_f
    // lsl r0, r1, #0xc
    // str r0, [r4, #0xc]
    // bl LCRandom
    // mov r1, #5
    // lsl r1, r1, #0xe
    // bl _s32_div_f
    // mov r0, #1
    // lsl r0, r0, #0x10
    // add r0, r1, r0
    // str r0, [r4, #0x10]
    // bl LCRandom
    // mov r1, #0xf
    // bl _s32_div_f
    // add r1, #0x14
    // strh r1, [r4, #0x14]
    // ldr r1, [sp, #0xc]
    // mov r0, #0x18
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp]
    // add r1, r0, r2
    // ldr r0, _02260604 ; =0x00000424
    // str r5, [r1, r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // cmp r0, #3
    // blt _02260544
    // add sp, #0x68
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022605F8: .word ov93_02262E00
    // _022605FC: .word ov93_02262D7C
    // _02260600: .word _02262C6C
    // _02260604: .word 0x00000424
    // TODO: decompile
}



void ov93_02260608(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0226065C ; =0x000033A0
    // mov r4, #0
    // add r5, r6, r0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0226061C
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, #0x18
    // cmp r4, #0x24
    // blt _02260612
    // mov r0, #0x37
    // lsl r0, r0, #8
    // mov r5, #0
    // add r4, r6, r0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02260636
    // bl Sprite_DeleteAndFreeResources
    // add r5, r5, #1
    // add r4, #0x18
    // cmp r5, #8
    // blt _0226062C
    // mov r0, #0xdf
    // lsl r0, r0, #6
    // mov r4, #0
    // add r5, r6, r0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02260650
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, #0x18
    // cmp r4, #3
    // blt _02260646
    // pop {r4, r5, r6, pc}
    // nop
    // _0226065C: .word 0x000033A0
    // TODO: decompile
}



void ov93_02260660(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // ldr r1, _022608FC ; =0x0000339C
    // mov r4, #0
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02260678
    // add sp, #0x34
    // add r0, r4, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // str r4, [sp, #0x14]
    // add r5, r0, #4
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0226073A
    // mov r1, #0x14
    // ldrsh r1, [r5, r1]
    // cmp r1, #0
    // bne _02260696
    // bl Sprite_DeleteAndFreeResources
    // mov r0, #0
    // str r0, [r5]
    // b _0226073A
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x10]
    // add r0, r1, r0
    // str r0, [r5, #0xc]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #8]
    // add r1, r1, r0
    // mov r0, #0xa
    // lsl r0, r0, #0x10
    // str r1, [r5, #4]
    // cmp r1, r0
    // blt _022606B0
    // str r0, [r5, #4]
    // ldr r0, [r5, #0xc]
    // ldr r6, [r5, #4]
    // bl GF_SinDegFX32
    // add r7, r0, #0
    // ldr r0, [r5, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0xc]
    // bl GF_CosDegFX32
    // str r0, [sp, #0x1c]
    // asr r1, r7, #0x1f
    // add r0, r7, #0
    // asr r3, r6, #0x1f
    // add r2, r6, #0
    // bl _ll_mul
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // add r6, r1, #0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r1, #0
    // mov r3, #2
    // add r7, r0, #0
    // ldr r1, [sp, #0x28]
    // lsl r3, r3, #0xa
    // add r3, r1, r3
    // ldr r1, _02260900 ; =0
    // ldr r0, [r5]
    // adc r6, r1
    // lsl r1, r6, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r1
    // asr r1, r3, #0xb
    // lsr r1, r1, #0x14
    // add r1, r3, r1
    // asr r1, r1, #0xc
    // add r1, #0x80
    // mov r3, #2
    // lsl r1, r1, #0x10
    // ldr r6, _02260900 ; =0
    // lsl r3, r3, #0xa
    // asr r1, r1, #0x10
    // add r3, r7, r3
    // adc r2, r6
    // lsl r2, r2, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r2
    // neg r3, r3
    // asr r2, r3, #0xb
    // lsr r2, r2, #0x14
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r2, #0x60
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // mov r0, #0x14
    // ldrsh r0, [r5, r0]
    // add r4, r4, #1
    // sub r0, r0, #1
    // strh r0, [r5, #0x14]
    // ldr r0, [sp, #0x14]
    // add r5, #0x18
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // cmp r0, #0x24
    // blt _0226067E
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0xd9
    // ldr r0, [sp, #0x18]
    // lsl r1, r1, #2
    // add r5, r0, r1
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0226080E
    // mov r1, #0x14
    // ldrsh r1, [r5, r1]
    // cmp r1, #0
    // bne _0226076A
    // bl Sprite_DeleteAndFreeResources
    // mov r0, #0
    // str r0, [r5]
    // b _0226080E
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x10]
    // add r0, r1, r0
    // str r0, [r5, #0xc]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #8]
    // add r1, r1, r0
    // mov r0, #0xa
    // lsl r0, r0, #0x10
    // str r1, [r5, #4]
    // cmp r1, r0
    // blt _02260784
    // str r0, [r5, #4]
    // ldr r0, [r5, #0xc]
    // ldr r6, [r5, #4]
    // bl GF_SinDegFX32
    // add r7, r0, #0
    // ldr r0, [r5, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0xc]
    // bl GF_CosDegFX32
    // str r0, [sp, #0x20]
    // asr r1, r7, #0x1f
    // add r0, r7, #0
    // asr r3, r6, #0x1f
    // add r2, r6, #0
    // bl _ll_mul
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r6, r1, #0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r1, #0
    // mov r3, #2
    // add r7, r0, #0
    // ldr r1, [sp, #0x2c]
    // lsl r3, r3, #0xa
    // add r3, r1, r3
    // ldr r1, _02260900 ; =0
    // ldr r0, [r5]
    // adc r6, r1
    // lsl r1, r6, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r1
    // asr r1, r3, #0xb
    // lsr r1, r1, #0x14
    // add r1, r3, r1
    // asr r1, r1, #0xc
    // add r1, #0x80
    // mov r3, #2
    // lsl r1, r1, #0x10
    // ldr r6, _02260900 ; =0
    // lsl r3, r3, #0xa
    // asr r1, r1, #0x10
    // add r3, r7, r3
    // adc r2, r6
    // lsl r2, r2, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r2
    // neg r3, r3
    // asr r2, r3, #0xb
    // lsr r2, r2, #0x14
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r2, #0x60
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // mov r0, #0x14
    // ldrsh r0, [r5, r0]
    // add r4, r4, #1
    // sub r0, r0, #1
    // strh r0, [r5, #0x14]
    // ldr r0, [sp]
    // add r5, #0x18
    // add r0, r0, #1
    // str r0, [sp]
    // cmp r0, #8
    // blt _02260752
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r1, _02260904 ; =0x00000424
    // ldr r0, [sp, #0x18]
    // add r5, r0, r1
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _022608E0
    // mov r1, #0x14
    // ldrsh r1, [r5, r1]
    // cmp r1, #0
    // bne _0226083C
    // bl Sprite_DeleteAndFreeResources
    // mov r0, #0
    // str r0, [r5]
    // b _022608E0
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x10]
    // add r0, r1, r0
    // str r0, [r5, #0xc]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #8]
    // add r1, r1, r0
    // mov r0, #0xa
    // lsl r0, r0, #0x10
    // str r1, [r5, #4]
    // cmp r1, r0
    // blt _02260856
    // str r0, [r5, #4]
    // ldr r0, [r5, #0xc]
    // ldr r6, [r5, #4]
    // bl GF_SinDegFX32
    // add r7, r0, #0
    // ldr r0, [r5, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0xc]
    // bl GF_CosDegFX32
    // str r0, [sp, #0x24]
    // asr r1, r7, #0x1f
    // add r0, r7, #0
    // asr r3, r6, #0x1f
    // add r2, r6, #0
    // bl _ll_mul
    // str r0, [sp, #0x30]
    // ldr r2, [sp, #8]
    // ldr r0, [sp, #0x24]
    // add r6, r1, #0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r1, #0
    // mov r3, #2
    // add r7, r0, #0
    // ldr r1, [sp, #0x30]
    // lsl r3, r3, #0xa
    // add r3, r1, r3
    // ldr r1, _02260900 ; =0
    // ldr r0, [r5]
    // adc r6, r1
    // lsl r1, r6, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r1
    // asr r1, r3, #0xb
    // lsr r1, r1, #0x14
    // add r1, r3, r1
    // asr r1, r1, #0xc
    // add r1, #0x80
    // mov r3, #2
    // lsl r1, r1, #0x10
    // ldr r6, _02260900 ; =0
    // lsl r3, r3, #0xa
    // asr r1, r1, #0x10
    // add r3, r7, r3
    // adc r2, r6
    // lsl r2, r2, #0x14
    // lsr r3, r3, #0xc
    // orr r3, r2
    // neg r3, r3
    // asr r2, r3, #0xb
    // lsr r2, r2, #0x14
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r2, #0x60
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // mov r0, #0x14
    // ldrsh r0, [r5, r0]
    // add r4, r4, #1
    // sub r0, r0, #1
    // strh r0, [r5, #0x14]
    // ldr r0, [sp, #4]
    // add r5, #0x18
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #3
    // blt _02260824
    // cmp r4, #0
    // bne _022608F6
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // str r1, [r0]
    // mov r0, #1
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _022608FC: .word 0x0000339C
    // _02260900: .word 0
    // _02260904: .word 0x00000424
    // TODO: decompile
}



void ov93_02260908(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02260970 ; =0x0000339C
    // add r4, r5, r0
    // ldr r0, [r4]
    // cmp r0, #1
    // bne _0226091A
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r2, #0x47
    // add r0, r4, #0
    // mov r1, #0
    // lsl r2, r2, #4
    // bl MI_CpuFill8
    // ldr r1, _02260970 ; =0x0000339C
    // ldr r2, _02260974 ; =0x00001428
    // add r0, r5, #0
    // add r1, r5, r1
    // add r2, r5, r2
    // bl ov93_02260314
    // ldr r1, _02260974 ; =0x00001428
    // ldr r0, [r5, #0x2c]
    // add r1, r5, r1
    // bl ov93_0225FC8C
    // add r0, r5, #0
    // bl ov93_02260B84
    // mov r2, #0
    // ldr r0, _02260978 ; =0x00002FCC
    // add r1, r2, #0
    // str r2, [r5, r0]
    // ldr r0, _0226097C ; =0x00001430
    // str r2, [r5, r0]
    // add r0, #8
    // str r2, [r5, r0]
    // mov r0, #0x51
    // lsl r0, r0, #6
    // add r2, r2, #1
    // str r1, [r5, r0]
    // add r5, r5, #4
    // cmp r2, #4
    // blt _02260958
    // ldr r0, _02260980 ; =0x00000594
    // bl PlaySE
    // mov r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // nop
    // _02260970: .word 0x0000339C
    // _02260974: .word 0x00001428
    // _02260978: .word 0x00002FCC
    // _0226097C: .word 0x00001430
    // _02260980: .word 0x00000594
    // TODO: decompile
}



void ov93_02260984(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // ldr r6, _022609DC ; =ov93_02262E34
    // add r4, r2, #0
    // add r3, r0, #0
    // add r7, r1, #0
    // add r5, sp, #0
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // sub r2, r2, #1
    // bne _02260994
    // ldr r0, [r6]
    // add r2, sp, #0
    // str r0, [r5]
    // ldr r0, [r3, #0x24]
    // ldr r1, [r3, #0x28]
    // bl SpriteSystem_NewSprite
    // mov r3, #0x16
    // lsl r2, r4, #4
    // mov r1, #0x48
    // sub r1, r1, r2
    // lsl r1, r1, #0x10
    // add r5, r0, #0
    // asr r1, r1, #0x10
    // mov r2, #0x20
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5]
    // bl Sprite_TickFrame
    // add r0, r5, #0
    // mov r1, #1
    // bl ManagedSprite_SetAnimateFlag
    // add r0, r5, #0
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _022609DC: .word ov93_02262E34
    // TODO: decompile
}



void ov93_022609E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, _02260A10 ; =0x0000380C
    // mov r4, #0
    // add r5, r7, r0
    // add r6, r4, #0
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // add r3, r4, #0
    // bl ov93_02260A58
    // ldr r0, [r5]
    // add r1, r6, #0
    // bl ManagedSprite_TickNFrames
    // mov r0, #1
    // lsl r0, r0, #0xe
    // add r4, r4, #1
    // add r5, #0xc
    // add r6, r6, r0
    // cmp r4, #5
    // blt _022609EC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02260A10: .word 0x0000380C
    // TODO: decompile
}



void ov93_02260A14(void) {
}



void ov93_02260A30(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _02260A54 ; =0x0000380C
    // mov r4, #0
    // add r5, r6, r0
    // add r0, r5, #0
    // bl ov93_02260A8C
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov93_02260AD8
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, #5
    // blt _02260A3A
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _02260A54: .word 0x0000380C
    // TODO: decompile
}



u32 ov93_02260A58(void) {
}



void ov93_02260A8C(void) {
    // add r2, sp, #0
    // sub r0, r0, r1
    // asr r4, r0, #0x10
    // add r1, sp, #0
    // add r1, #2
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)r0), (*((u8*)(r0 + 6)) << 4), (0x16 << 0x10));
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    *((u16*)(r1 + 2)) = (r2 + 2);
    // ldrsh r0, [r1, r0]
    *((u16*)(r1 + 2)) = r4;
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), 2, 0, (0x16 << 0x10));
}



void ov93_02260AD8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrb r1, [r4, #6]
    // add r5, r0, #0
    // cmp r1, #0
    // bne _02260B66
    // ldrb r1, [r4, #5]
    // cmp r1, #1
    // beq _02260B44
    // cmp r1, #3
    // bne _02260B66
    // ldr r0, [r4]
    // bl ManagedSprite_IsAnimated
    // cmp r0, #0
    // bne _02260B66
    // mov r0, #8
    // ldrsh r1, [r4, r0]
    // add r1, r1, #5
    // strh r1, [r4, #8]
    // ldrsh r0, [r4, r0]
    // bl ov93_02260B70
    // strb r0, [r4, #4]
    // mov r0, #1
    // strb r0, [r4, #5]
    // ldrb r1, [r4, #4]
    // ldr r0, [r4]
    // bl ManagedSprite_SetAnim
    // mov r1, #7
    // mov r3, #0x16
    // ldr r0, [r4]
    // mvn r1, r1
    // mov r2, #0x20
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, _02260B68 ; =0x0000380C
    // mov r2, #0
    // add r3, r5, r0
    // mov r1, #4
    // ldrb r0, [r3, #6]
    // cmp r0, #0
    // bne _02260B36
    // strb r1, [r3, #6]
    // b _02260B3A
    // sub r0, r0, #1
    // strb r0, [r3, #6]
    // add r2, r2, #1
    // add r3, #0xc
    // cmp r2, #5
    // blt _02260B2C
    // pop {r3, r4, r5, pc}
    // bl ov93_0225FEAC
    // ldrb r1, [r4, #5]
    // cmp r1, #1
    // bne _02260B66
    // cmp r0, #0x4b
    // ble _02260B66
    // mov r0, #2
    // strb r0, [r4, #5]
    // ldrb r1, [r4, #4]
    // ldr r0, [r4]
    // add r1, r1, #3
    // bl ManagedSprite_SetAnim
    // ldr r0, _02260B6C ; =0x00000596
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // _02260B68: .word 0x0000380C
    // _02260B6C: .word 0x00000596
    // TODO: decompile
}



void ov93_02260B70(void) {
    // cmp r0, #0xa
    // blt _02260B78
    // mov r0, #2
    // bx lr
    // cmp r0, #5
    // blt _02260B80
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov93_02260B84(void) {
    // push {r3, lr}
    // ldr r1, _02260BAC ; =0x0000380C
    // mov r2, #0
    // add r1, r0, r1
    // ldrb r0, [r1, #6]
    // cmp r0, #0
    // bne _02260BA0
    // mov r0, #3
    // strb r0, [r1, #5]
    // ldr r0, [r1]
    // mov r1, #6
    // bl ManagedSprite_SetAnim
    // pop {r3, pc}
    // add r2, r2, #1
    // add r1, #0xc
    // cmp r2, #5
    // blt _02260B8C
    // pop {r3, pc}
    // nop
    // _02260BAC: .word 0x0000380C
    // TODO: decompile
}



void ov93_02260BB0(void) {
    // add r0, #0x30
    // ldrb r0, [r0]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r0 + 0x2c)), 4, 0, 0xd);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 0x2c)), 4, 0x14, 0xd);
}



void ov93_02260BF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r6]
    // add r0, #0x30
    // ldrb r0, [r0]
    // cmp r0, #0
    // ble _02260C50
    // ldr r0, _02260CF0 ; =ov93_02262C72
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r5, [sp]
    // ldrh r7, [r0]
    // mov r4, #0
    // add r0, r6, #0
    // add r0, #0x8c
    // add r3, r7, r4
    // mov r1, #1
    // lsl r3, r3, #0x10
    // ldr r0, [r0]
    // add r2, r1, #0
    // lsr r3, r3, #0x10
    // bl PaletteData_GetBufferColorAtIndex
    // strh r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #3
    // blt _02260C14
    // ldr r0, [sp, #4]
    // add r0, r0, #2
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, #6
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [r6]
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [sp, #0xc]
    // cmp r0, r1
    // blt _02260C0C
    // bl sub_0203769C
    // ldr r3, [r6]
    // mov r2, #0
    // add r1, r3, #0
    // add r1, #0x30
    // ldrb r4, [r1]
    // cmp r4, #0
    // ble _02260C74
    // add r1, r3, #0
    // add r1, #0x2c
    // ldrb r1, [r1]
    // cmp r0, r1
    // beq _02260C74
    // add r2, r2, #1
    // add r3, r3, #1
    // cmp r2, r4
    // blt _02260C62
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // mov r1, #1
    // bl PaletteData_GetUnfadedBuf
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // mov r1, #1
    // bl PaletteData_GetFadedBuf
    // ldr r1, [r6]
    // add r7, r0, #0
    // add r0, r1, #0
    // add r0, #0x30
    // ldrb r5, [r0]
    // mov r4, #0
    // cmp r5, #0
    // ble _02260CEA
    // add r1, r1, r4
    // add r1, #0x2c
    // ldrb r1, [r1]
    // add r0, r6, #0
    // bl ov93_0225E3C4
    // lsl r1, r0, #1
    // ldr r0, _02260CF4 ; =ov93_02262DA4
    // lsl r2, r5, #3
    // add r0, r0, r2
    // ldrh r2, [r1, r0]
    // mov r1, #6
    // add r3, r4, #0
    // mul r3, r1
    // add r1, sp, #0x10
    // add r1, r1, r3
    // lsl r3, r2, #1
    // ldr r2, [sp, #8]
    // mov r0, #0
    // add r2, r2, r3
    // add r3, r7, r3
    // ldrh r5, [r1]
    // add r0, r0, #1
    // strh r5, [r2]
    // ldrh r5, [r1]
    // add r1, r1, #2
    // add r2, r2, #2
    // strh r5, [r3]
    // add r3, r3, #2
    // cmp r0, #3
    // blt _02260CC8
    // ldr r1, [r6]
    // add r4, r4, #1
    // add r0, r1, #0
    // add r0, #0x30
    // ldrb r5, [r0]
    // cmp r4, r5
    // blt _02260C9E
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02260CF0: .word ov93_02262C72
    // _02260CF4: .word ov93_02262DA4
    // TODO: decompile
}



void ov93_02260CF8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x9c
    // add r7, r0, #0
    // ldr r0, [r7, #0x28]
    // ldr r1, _02260E10 ; =0x00002716
    // mov r2, #2
    // bl SpriteManager_FindPlttResourceOffset
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r7]
    // add r0, #0x30
    // ldrb r0, [r0]
    // cmp r0, #0
    // ble _02260D6E
    // ldr r0, _02260E14 ; =ov93_02262C8A
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // lsl r0, r0, #4
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r5, [sp, #4]
    // ldrh r1, [r0]
    // ldr r0, [sp]
    // mov r6, #0
    // add r4, r1, r0
    // add r0, r7, #0
    // add r0, #0x8c
    // lsl r3, r4, #0x10
    // ldr r0, [r0]
    // mov r1, #3
    // mov r2, #1
    // lsr r3, r3, #0x10
    // bl PaletteData_GetBufferColorAtIndex
    // strh r0, [r5]
    // add r6, r6, #1
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r6, #0x10
    // blt _02260D32
    // ldr r0, [sp, #8]
    // add r0, r0, #2
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [r7]
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [sp, #0x18]
    // cmp r0, r1
    // blt _02260D26
    // bl sub_0203769C
    // ldr r3, [r7]
    // mov r2, #0
    // add r1, r3, #0
    // add r1, #0x30
    // ldrb r4, [r1]
    // cmp r4, #0
    // ble _02260D92
    // add r1, r3, #0
    // add r1, #0x2c
    // ldrb r1, [r1]
    // cmp r0, r1
    // beq _02260D92
    // add r2, r2, #1
    // add r3, r3, #1
    // cmp r2, r4
    // blt _02260D80
    // add r0, r7, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // mov r1, #3
    // bl PaletteData_GetUnfadedBuf
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // mov r1, #3
    // bl PaletteData_GetFadedBuf
    // ldr r1, [r7]
    // str r0, [sp, #0x10]
    // add r0, r1, #0
    // add r0, #0x30
    // ldrb r5, [r0]
    // mov r4, #0
    // cmp r5, #0
    // ble _02260E0C
    // ldr r0, [sp, #0xc]
    // lsl r6, r0, #4
    // add r1, r1, r4
    // add r1, #0x2c
    // ldrb r1, [r1]
    // add r0, r7, #0
    // bl ov93_0225E3C4
    // lsl r1, r0, #1
    // ldr r0, _02260E18 ; =ov93_02262D04
    // lsl r2, r5, #3
    // add r0, r0, r2
    // ldrh r0, [r1, r0]
    // lsl r3, r4, #5
    // add r1, sp, #0x1c
    // add r2, r6, r0
    // add r1, r1, r3
    // lsl r5, r2, #1
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // mov r0, #0
    // add r2, r2, r5
    // add r3, r3, r5
    // ldrh r5, [r1]
    // add r0, r0, #1
    // strh r5, [r2]
    // ldrh r5, [r1]
    // add r1, r1, #2
    // add r2, r2, #2
    // strh r5, [r3]
    // add r3, r3, #2
    // cmp r0, #0x10
    // blt _02260DEA
    // ldr r1, [r7]
    // add r4, r4, #1
    // add r0, r1, #0
    // add r0, #0x30
    // ldrb r5, [r0]
    // cmp r4, r5
    // blt _02260DC0
    // add sp, #0x9c
    // pop {r4, r5, r6, r7, pc}
    // _02260E10: .word 0x00002716
    // _02260E14: .word ov93_02262C8A
    // _02260E18: .word ov93_02262D04
    // TODO: decompile
}



void ov93_02260E1C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, [r5, #0x28]
    // ldr r1, _02260F08 ; =0x00002716
    // mov r2, #2
    // bl SpriteManager_FindPlttResourceOffset
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r0, #0x30
    // ldrb r0, [r0]
    // cmp r0, #0
    // ble _02260E76
    // ldr r0, [sp, #4]
    // ldr r7, _02260F0C ; =ov93_02262C82
    // lsl r0, r0, #4
    // add r4, sp, #0x14
    // str r0, [sp]
    // ldrh r6, [r7]
    // ldr r3, [sp]
    // add r0, r5, #0
    // add r0, #0x8c
    // add r3, r6, r3
    // lsl r3, r3, #0x10
    // ldr r0, [r0]
    // mov r1, #3
    // mov r2, #1
    // lsr r3, r3, #0x10
    // bl PaletteData_GetBufferColorAtIndex
    // strh r0, [r4]
    // ldr r0, [sp, #0x10]
    // add r7, r7, #2
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r4, r4, #2
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [sp, #0x10]
    // cmp r0, r1
    // blt _02260E46
    // bl sub_0203769C
    // ldr r3, [r5]
    // mov r2, #0
    // add r1, r3, #0
    // add r1, #0x30
    // ldrb r4, [r1]
    // cmp r4, #0
    // ble _02260E9A
    // add r1, r3, #0
    // add r1, #0x2c
    // ldrb r1, [r1]
    // cmp r0, r1
    // beq _02260E9A
    // add r2, r2, #1
    // add r3, r3, #1
    // cmp r2, r4
    // blt _02260E88
    // add r0, r5, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // mov r1, #3
    // bl PaletteData_GetUnfadedBuf
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // mov r1, #3
    // bl PaletteData_GetFadedBuf
    // ldr r1, [r5]
    // str r0, [sp, #8]
    // add r0, r1, #0
    // add r0, #0x30
    // ldrb r6, [r0]
    // mov r4, #0
    // cmp r6, #0
    // ble _02260F02
    // ldr r0, [sp, #4]
    // lsl r7, r0, #4
    // add r1, r1, r4
    // add r1, #0x2c
    // ldrb r1, [r1]
    // add r0, r5, #0
    // bl ov93_0225E3C4
    // lsl r1, r0, #1
    // ldr r0, _02260F10 ; =ov93_02262D54
    // lsl r2, r6, #3
    // add r0, r0, r2
    // ldrh r0, [r1, r0]
    // lsl r1, r4, #1
    // add r2, sp, #0x14
    // ldrh r3, [r2, r1]
    // add r0, r7, r0
    // ldr r2, [sp, #0xc]
    // lsl r0, r0, #1
    // strh r3, [r2, r0]
    // add r2, sp, #0x14
    // ldrh r2, [r2, r1]
    // ldr r1, [sp, #8]
    // add r4, r4, #1
    // strh r2, [r1, r0]
    // ldr r1, [r5]
    // add r0, r1, #0
    // add r0, #0x30
    // ldrb r6, [r0]
    // cmp r4, r6
    // blt _02260EC8
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02260F08: .word 0x00002716
    // _02260F0C: .word ov93_02262C82
    // _02260F10: .word ov93_02262D54
    // TODO: decompile
}



void ov93_02260F14(void) {
}



void ov93_02260F3C(void) {
    // push {r4, r5}
    // ldr r2, _02260F80 ; =0x00002FB0
    // add r4, r0, #0
    // sub r0, r2, #4
    // add r3, r1, #0
    // ldr r1, [r4, r2]
    // ldr r0, [r4, r0]
    // sub r0, r1, r0
    // cmp r0, #8
    // blt _02260F56
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // lsr r5, r1, #0x1f
    // lsl r1, r1, #0x1d
    // sub r1, r1, r5
    // mov r0, #0x1d
    // ror r1, r0
    // add r0, r5, r1
    // lsl r0, r0, #4
    // add r1, r4, r0
    // add r0, r2, #0
    // sub r0, #0x84
    // add r5, r1, r0
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r0, [r4, r2]
    // add r0, r0, #1
    // str r0, [r4, r2]
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // _02260F80: .word 0x00002FB0
    // TODO: decompile
}



void ov93_02260F84(void) {
    // push {r3, r4}
    // ldr r1, _02260FB4 ; =0x00002FAC
    // add r2, r1, #4
    // ldr r4, [r0, r1]
    // ldr r2, [r0, r2]
    // cmp r4, r2
    // blt _02260F98
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // add r2, r4, #1
    // str r2, [r0, r1]
    // sub r1, #0x80
    // add r3, r0, r1
    // lsr r2, r4, #0x1f
    // lsl r1, r4, #0x1d
    // sub r1, r1, r2
    // mov r0, #0x1d
    // ror r1, r0
    // add r0, r2, r1
    // lsl r0, r0, #4
    // add r0, r3, r0
    // pop {r3, r4}
    // bx lr
    // _02260FB4: .word 0x00002FAC
    // TODO: decompile
}



void ov93_02260FB8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r2, r0, #0
    // ldr r0, _022610A4 ; =0x00002FB0
    // add r7, r1, #0
    // ldr r5, [r2, r0]
    // sub r0, r0, #4
    // ldr r0, [r2, r0]
    // mov r4, #0
    // cmp r0, r5
    // beq _02260FD0
    // cmp r7, #0
    // bne _02260FD4
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // lsr r3, r0, #0x1f
    // lsl r1, r0, #0x1d
    // sub r1, r1, r3
    // mov r0, #0x1d
    // ror r1, r0
    // add r1, r3, r1
    // lsr r3, r5, #0x1f
    // lsl r5, r5, #0x1d
    // sub r5, r5, r3
    // ror r5, r0
    // add r0, r3, r5
    // cmp r1, r0
    // bge _02261012
    // cmp r1, r0
    // bge _0226105A
    // lsl r3, r1, #4
    // add r6, r2, r3
    // ldr r3, _022610A8 ; =0x00002F38
    // ldrb r5, [r6, r3]
    // cmp r5, #0
    // bne _02261008
    // ldr r0, _022610AC ; =0x00002F2C
    // add r2, r2, r0
    // lsl r0, r1, #4
    // add r4, r2, r0
    // b _0226105A
    // add r1, r1, #1
    // add r6, #0x10
    // cmp r1, r0
    // blt _02260FF8
    // b _0226105A
    // cmp r1, #8
    // bge _02261034
    // lsl r3, r1, #4
    // add r6, r2, r3
    // ldr r3, _022610A8 ; =0x00002F38
    // ldrb r5, [r6, r3]
    // cmp r5, #0
    // bne _0226102C
    // ldr r3, _022610AC ; =0x00002F2C
    // lsl r1, r1, #4
    // add r3, r2, r3
    // add r4, r3, r1
    // b _02261034
    // add r1, r1, #1
    // add r6, #0x10
    // cmp r1, #8
    // blt _0226101C
    // cmp r4, #0
    // bne _0226105A
    // mov r6, #0
    // cmp r0, #0
    // ble _0226105A
    // ldr r1, _022610A8 ; =0x00002F38
    // add r5, r2, #0
    // ldrb r3, [r5, r1]
    // cmp r3, #0
    // bne _02261052
    // ldr r0, _022610AC ; =0x00002F2C
    // add r1, r2, r0
    // lsl r0, r6, #4
    // add r4, r1, r0
    // b _0226105A
    // add r6, r6, #1
    // add r5, #0x10
    // cmp r6, r0
    // blt _02261042
    // cmp r4, #0
    // bne _02261066
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // beq _02261070
    // bl GF_AssertFail
    // mov r0, #1
    // strb r7, [r4, #1]
    // strb r0, [r4, #0xc]
    // cmp r7, #1
    // beq _02261084
    // cmp r7, #2
    // beq _0226108C
    // cmp r7, #3
    // beq _02261098
    // b _022610A0
    // ldr r0, [r4, #4]
    // lsl r0, r0, #1
    // str r0, [r4, #8]
    // b _022610A0
    // ldr r1, [r4, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [r4, #8]
    // b _022610A0
    // ldr r1, [r4, #4]
    // lsl r0, r1, #1
    // add r0, r1, r0
    // str r0, [r4, #8]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _022610A4: .word 0x00002FB0
    // _022610A8: .word 0x00002F38
    // _022610AC: .word 0x00002F2C
    // TODO: decompile
}



void ov93_022610B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // ldr r4, _02261144 ; =ov93_02262E68
    // add r7, r0, #0
    // str r1, [sp]
    // add r3, sp, #4
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _022610BE
    // ldr r0, [r4]
    // ldr r4, [sp]
    // ldr r5, _02261148 ; =ov93_02262CB4
    // str r0, [r3]
    // mov r6, #0
    // ldr r0, [r7, #0x24]
    // ldr r1, [r7, #0x28]
    // add r2, sp, #4
    // bl SpriteSystem_NewSprite
    // mov r3, #0x16
    // str r0, [r4]
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // lsr r1, r6, #0x1f
    // add r1, r6, r1
    // asr r1, r1, #1
    // ldr r0, [r4]
    // add r1, #0x1f
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #4
    // blt _022610D0
    // ldr r0, [r7]
    // add r0, #0x30
    // ldrb r0, [r0]
    // cmp r0, #2
    // beq _0226111E
    // cmp r0, #3
    // beq _02261136
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl ManagedSprite_SetDrawFlag
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // mov r1, #0
    // ldr r0, [r0, #4]
    // bl ManagedSprite_SetDrawFlag
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _02261144: .word ov93_02262E68
    // _02261148: .word ov93_02262CB4
    // TODO: decompile
}



void ov93_0226114C(void) {
}



void ov93_02261164(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // ldr r4, _022612CC ; =ov93_02262E9C
    // add r5, r0, #0
    // str r1, [sp]
    // add r3, sp, #0xc
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02261172
    // ldr r0, [r4]
    // ldr r4, [sp]
    // str r0, [r3]
    // mov r0, #0
    // ldr r7, _022612D0 ; =ov93_02262C7A
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, #0xe4
    // ldr r1, [r0]
    // ldr r0, [r4, #0xc]
    // add r0, r1, r0
    // bl GF_SinDegFX32
    // asr r1, r0, #0x1f
    // mov r2, #0x4c
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // ldr r0, _022612D4 ; =0
    // adc r1, r0
    // lsl r0, r1, #0x14
    // lsr r6, r2, #0xc
    // orr r6, r0
    // ldr r0, [sp]
    // add r6, #0x80
    // add r0, #0xe4
    // ldr r1, [r0]
    // ldr r0, [r4, #0xc]
    // add r0, r1, r0
    // bl GF_CosDegFX32
    // asr r1, r0, #0x1f
    // mov r2, #0x44
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // ldr r2, _022612D4 ; =0
    // adc r1, r2
    // lsr r2, r0, #0xc
    // lsl r1, r1, #0x14
    // orr r2, r1
    // mov r0, #0x62
    // sub r0, r0, r2
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x24]
    // ldr r1, [r5, #0x28]
    // add r2, sp, #0xc
    // bl SpriteSystem_NewSprite
    // ldr r2, [sp, #4]
    // lsl r1, r6, #0x10
    // sub r2, #0x18
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // str r0, [r4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldrh r1, [r7, #2]
    // ldr r0, [r4]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldr r0, [r4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x24]
    // ldr r1, [r5, #0x28]
    // ldr r2, _022612D8 ; =ov93_02262ED0
    // bl SpriteSystem_NewSprite
    // mov r1, #0
    // mov r3, #0x16
    // add r2, r1, #0
    // lsl r3, r3, #0x10
    // str r0, [r4, #4]
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4, #4]
    // mov r1, #0x21
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x24]
    // ldr r1, [r5, #0x28]
    // ldr r2, _022612DC ; =ov93_02262F04
    // bl SpriteSystem_NewSprite
    // ldr r2, [sp, #4]
    // lsl r1, r6, #0x10
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // str r0, [r4, #8]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ManagedSprite_SetAffineOverwriteMode
    // mov r1, #0xfe
    // lsl r1, r1, #0x16
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #8]
    // add r1, #0x22
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #8]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x30
    // bl ov93_02262444
    // ldr r0, [sp, #8]
    // add r4, #0x4c
    // add r0, r0, #1
    // add r7, r7, #2
    // str r0, [sp, #8]
    // cmp r0, #3
    // bge _022612B4
    // b _02261186
    // ldr r0, [sp]
    // mov r1, #1
    // ldr r0, [r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp]
    // mov r1, #1
    // ldr r0, [r0, #8]
    // bl ManagedSprite_SetDrawFlag
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _022612CC: .word ov93_02262E9C
    // _022612D0: .word ov93_02262C7A
    // _022612D4: .word 0
    // _022612D8: .word ov93_02262ED0
    // _022612DC: .word ov93_02262F04
    // TODO: decompile
}



void ov93_022612E0(void) {
    Sprite_DeleteAndFreeResources(*((u32*)r1));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 4)));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 8)));
    // add r1, #0x30
    ov93_02262484(r6, r5);
    // add r5, #0x4c
}



void ov93_02261310(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r1, #0xf4
    // ldrb r1, [r1]
    // mov r0, #0x1e
    // lsl r0, r0, #0xc
    // lsl r2, r1, #2
    // ldr r1, _02261350 ; =ov93_02262CC4
    // ldrb r1, [r1, r2]
    // bl _s32_div_f
    // add r1, r4, #0
    // add r1, #0xe8
    // str r0, [r1]
    // mov r1, #0
    // add r2, r1, #0
    // add r3, r4, #0
    // lsl r0, r2, #0xc
    // str r0, [r3, #0xc]
    // add r1, r1, #1
    // strb r1, [r3, #0x14]
    // add r2, #0x5a
    // add r3, #0x4c
    // cmp r1, #3
    // blt _02261332
    // mov r0, #2
    // strb r0, [r4, #0x10]
    // mov r0, #1
    // add r4, #0xf1
    // strb r0, [r4]
    // pop {r4, pc}
    // nop
    // _02261350: .word ov93_02262CC4
    // TODO: decompile
}



void ov93_02261354(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0xf1
    // ldrb r0, [r0]
    // mov r5, #0
    // cmp r0, #1
    // bne _02261368
    // b _022614E8
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xec
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf2
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _022613F4
    // add r0, r4, #0
    // add r0, #0xe4
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0xe8
    // ldr r0, [r0]
    // add r1, r1, r0
    // add r0, r4, #0
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf3
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf3
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0xf4
    // ldrb r1, [r1]
    // add r0, r4, #0
    // add r0, #0xf3
    // lsl r2, r1, #2
    // ldr r1, _022614EC ; =ov93_02262CC4
    // ldrb r0, [r0]
    // ldrb r1, [r1, r2]
    // cmp r0, r1
    // blo _02261456
    // add r0, r4, #0
    // add r0, #0xf3
    // strb r5, [r0]
    // add r0, r4, #0
    // add r0, #0xf0
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf0
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf0
    // ldrb r1, [r0]
    // mov r0, #0x1e
    // lsl r0, r0, #0xc
    // add r2, r1, #0
    // mul r2, r0
    // add r0, r4, #0
    // add r0, #0xe4
    // str r2, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrb r0, [r0]
    // lsl r1, r0, #2
    // ldr r0, _022614F0 ; =ov93_02262CC5
    // ldrb r1, [r0, r1]
    // add r0, r4, #0
    // add r0, #0xf2
    // strb r1, [r0]
    // b _02261456
    // add r0, r4, #0
    // add r0, #0xf2
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf2
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf2
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02261456
    // add r0, r4, #0
    // add r0, #0xf0
    // ldrb r0, [r0]
    // cmp r0, #0xc
    // blo _02261456
    // add r0, r4, #0
    // add r0, #0xf0
    // strb r5, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xf4
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrb r0, [r0]
    // cmp r0, #5
    // blo _0226143C
    // add r0, r4, #0
    // mov r1, #4
    // add r0, #0xf4
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0xf4
    // ldrb r1, [r1]
    // mov r0, #0x1e
    // lsl r0, r0, #0xc
    // lsl r2, r1, #2
    // ldr r1, _022614EC ; =ov93_02262CC4
    // ldrb r1, [r1, r2]
    // bl _s32_div_f
    // add r1, r4, #0
    // add r1, #0xe8
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xf4
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02261492
    // ldr r1, _022614EC ; =ov93_02262CC4
    // mov r0, #0
    // mov r7, #0xc
    // ldrb r3, [r1]
    // ldrb r2, [r1, #1]
    // add r0, r0, #1
    // add r1, r1, #4
    // add r2, r3, r2
    // add r3, r2, #0
    // mul r3, r7
    // add r5, r5, r3
    // cmp r0, #2
    // blt _02261466
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // sub r5, #0xf
    // cmp r5, r0
    // bne _022614C6
    // add r0, r4, #0
    // add r0, #0x4c
    // mov r1, #1
    // bl ov93_02261528
    // b _022614C6
    // cmp r0, #2
    // bne _022614C6
    // ldr r0, _022614EC ; =ov93_02262CC4
    // mov r1, #0
    // mov r7, #0xc
    // ldrb r3, [r0]
    // ldrb r2, [r0, #1]
    // add r1, r1, #1
    // add r0, r0, #4
    // add r2, r3, r2
    // add r3, r2, #0
    // mul r3, r7
    // add r5, r5, r3
    // cmp r1, #3
    // blt _0226149C
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // sub r5, #0xf
    // cmp r5, r0
    // bne _022614C6
    // add r0, r4, #0
    // add r0, #0x98
    // mov r1, #1
    // bl ov93_02261528
    // mov r7, #0
    // add r5, r4, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r5, #0
    // bl ov93_02261538
    // add r2, r5, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, #0x30
    // bl ov93_02262540
    // add r7, r7, #1
    // add r5, #0x4c
    // cmp r7, #3
    // blt _022614CA
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022614EC: .word ov93_02262CC4
    // _022614F0: .word ov93_02262CC5
    // TODO: decompile
}



void ov93_022614F4(void) {
    // push {r3, r4}
    // ldr r2, _02261524 ; =0x00001468
    // mov r3, #0
    // add r2, r0, r2
    // add r4, r2, #0
    // ldrb r0, [r4, #0x15]
    // cmp r0, #1
    // bne _02261512
    // mov r0, #0x4c
    // mul r0, r3
    // add r0, r2, r0
    // str r0, [r1]
    // ldrb r0, [r0, #0x14]
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r4, #0x4c
    // cmp r3, #3
    // blt _022614FE
    // mov r0, #0
    // str r0, [r1]
    // pop {r3, r4}
    // bx lr
    // nop
    // _02261524: .word 0x00001468
    // TODO: decompile
}



void ov93_02261528(void) {
}



void ov93_02261538(void) {
    // push {r4, lr}
    // ldrb r3, [r2, #0x10]
    // lsl r4, r3, #2
    // ldr r3, _02261548 ; =ov93_02262C94
    // ldr r3, [r3, r4]
    // blx r3
    // pop {r4, pc}
    // nop
    // _02261548: .word ov93_02262C94
    // TODO: decompile
}



void ov93_0226154C(void) {
}



void ov93_02261554(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r2, #0
    // mov r0, #0x1c
    // ldrsh r0, [r5, r0]
    // add r1, sp, #0
    // strh r0, [r1, #2]
    // mov r0, #0x1e
    // ldrsh r0, [r5, r0]
    // strh r0, [r1]
    // ldrb r0, [r5, #0x11]
    // cmp r0, #0
    // beq _02261574
    // cmp r0, #1
    // beq _022615A8
    // b _02261732
    // ldr r0, [r5]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #8]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r1, sp, #0
    // mov r3, #0x16
    // ldr r0, [r5]
    // add r1, #2
    // add r2, sp, #0
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // strh r0, [r5, #0x1c]
    // mov r0, #0
    // ldrsh r0, [r1, r0]
    // strh r0, [r5, #0x1e]
    // ldrb r0, [r5, #0x11]
    // add r0, r0, #1
    // strb r0, [r5, #0x11]
    // mov r1, #0x5a
    // ldr r2, [r5, #0xc]
    // lsl r1, r1, #0xc
    // cmp r2, r1
    // bgt _022615BA
    // bge _022615EC
    // cmp r2, #0
    // beq _022615CC
    // b _02261654
    // lsl r0, r1, #1
    // cmp r2, r0
    // bgt _022615C4
    // beq _02261614
    // b _02261654
    // ldr r0, _0226173C ; =0x0010E000
    // cmp r2, r0
    // beq _02261634
    // b _02261654
    // mov r0, #0x1e
    // ldrsh r0, [r5, r0]
    // ldrb r1, [r5, #0x12]
    // add r0, #0x20
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // mul r0, r1
    // mov r1, #0xf
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // sub r1, #0x20
    // add r0, sp, #0
    // strh r1, [r0]
    // b _02261658
    // mov r0, #0x1c
    // ldrsh r2, [r5, r0]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // sub r0, r2, r0
    // lsl r0, r0, #0x10
    // ldrb r1, [r5, #0x12]
    // asr r0, r0, #0x10
    // mul r0, r1
    // mov r1, #0xf
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r1, r1, r0
    // add r0, sp, #0
    // strh r1, [r0, #2]
    // b _02261658
    // mov r0, #0x1e
    // ldrsh r0, [r5, r0]
    // ldrb r1, [r5, #0x12]
    // sub r0, #0xe4
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // mul r0, r1
    // mov r1, #0xf
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // add r1, #0xe4
    // add r0, sp, #0
    // strh r1, [r0]
    // b _02261658
    // mov r0, #0x1c
    // ldrsh r0, [r5, r0]
    // ldrb r1, [r5, #0x12]
    // add r0, #0x20
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // mul r0, r1
    // mov r1, #0xf
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // asr r1, r0, #0x10
    // sub r1, #0x20
    // add r0, sp, #0
    // strh r1, [r0, #2]
    // b _02261658
    // bl GF_AssertFail
    // ldrb r1, [r5, #0x12]
    // cmp r1, #0xf
    // blo _022616A0
    // mov r1, #0x1c
    // mov r2, #0x1e
    // mov r3, #0x16
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // ldr r0, [r5]
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // mov r2, #0x1e
    // ldrsh r2, [r5, r2]
    // mov r1, #0x1c
    // mov r3, #0x16
    // add r2, #0x18
    // lsl r2, r2, #0x10
    // ldrsh r1, [r5, r1]
    // ldr r0, [r5, #8]
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // add r0, r5, #0
    // mov r1, #2
    // bl ov93_02261528
    // add r1, r5, #0
    // add r5, #0x30
    // add r0, r4, #0
    // add r2, r5, #0
    // bl ov93_0226249C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0xb4
    // mul r0, r1
    // lsl r0, r0, #0xc
    // mov r1, #0xf
    // bl _s32_div_f
    // bl GF_SinDegFX32
    // mov r2, #6
    // asr r1, r0, #0x1f
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl _ll_mul
    // mov r3, #2
    // mov r2, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r2
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // neg r1, r1
    // asr r0, r1, #0xb
    // add r3, sp, #0
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r4, r0, #0xc
    // ldrsh r2, [r3, r2]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // ldr r0, [r5]
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // add r2, #0x18
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // ldr r0, [r5, #8]
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // neg r0, r4
    // mov r1, #3
    // bl _s32_div_f
    // lsl r0, r0, #0xc
    // mov r1, #0x18
    // bl _s32_div_f
    // mov r1, #1
    // lsl r1, r1, #0xc
    // sub r0, r1, r0
    // bl _fflt
    // ldr r1, _02261740 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, [r5, #8]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r5, #0x12]
    // add r0, r0, #1
    // strb r0, [r5, #0x12]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0226173C: .word 0x0010E000
    // _02261740: .word 0x45800000
    // TODO: decompile
}



void ov93_02261744(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0xf3
    // ldrb r0, [r0]
    // add r4, r2, #0
    // cmp r0, #0
    // beq _02261774
    // add r1, #0xf4
    // ldrb r1, [r1]
    // mov r0, #0xb
    // lsl r0, r0, #0xe
    // lsl r2, r1, #2
    // ldr r1, _022618BC ; =ov93_02262CC4
    // ldrb r1, [r1, r2]
    // bl _s32_div_f
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ManagedSprite_TickNFrames
    // b _0226177C
    // ldr r0, [r4]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // add r0, r5, #0
    // add r0, #0xf3
    // ldrb r1, [r0]
    // mov r0, #0xb4
    // mul r0, r1
    // add r1, r5, #0
    // add r1, #0xf4
    // ldrb r1, [r1]
    // lsl r0, r0, #0xc
    // lsl r2, r1, #2
    // ldr r1, _022618BC ; =ov93_02262CC4
    // ldrb r1, [r1, r2]
    // bl _s32_div_f
    // bl GF_SinDegFX32
    // mov r2, #3
    // asr r1, r0, #0x1f
    // lsl r2, r2, #0xe
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
    // neg r1, r1
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r7, r0, #0xc
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r1, [r0]
    // ldr r0, [r4, #0xc]
    // add r0, r1, r0
    // bl GF_SinDegFX32
    // asr r1, r0, #0x1f
    // mov r2, #0x4c
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r6, r2, #0xc
    // orr r6, r0
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r1, [r0]
    // ldr r0, [r4, #0xc]
    // add r6, #0x80
    // add r0, r1, r0
    // bl GF_CosDegFX32
    // asr r1, r0, #0x1f
    // mov r2, #0x44
    // mov r3, #0
    // bl _ll_mul
    // add r2, r0, #0
    // mov r0, #2
    // mov r3, #0
    // lsl r0, r0, #0xa
    // add r0, r2, r0
    // adc r1, r3
    // lsr r2, r0, #0xc
    // lsl r1, r1, #0x14
    // orr r2, r1
    // mov r0, #0x62
    // sub r0, r0, r2
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // lsl r1, r6, #0x10
    // sub r2, #0x18
    // add r2, r2, r7
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // ldr r0, [r4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r2, [sp, #4]
    // lsl r1, r6, #0x10
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // ldr r0, [r4, #8]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // neg r0, r7
    // mov r1, #3
    // bl _s32_div_f
    // lsl r0, r0, #0xc
    // mov r1, #0xc
    // bl _s32_div_f
    // mov r1, #1
    // lsl r1, r1, #0xc
    // sub r0, r1, r0
    // bl _fflt
    // ldr r1, _022618C0 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // add r1, r5, #0
    // add r1, #0xf4
    // ldrb r1, [r1]
    // add r0, r5, #0
    // add r0, #0xf3
    // lsl r2, r1, #2
    // ldr r1, _022618BC ; =ov93_02262CC4
    // ldrb r0, [r0]
    // ldrb r1, [r1, r2]
    // sub r1, r1, #1
    // cmp r0, r1
    // bne _02261896
    // add r2, r4, #0
    // ldr r0, [sp]
    // add r1, r4, #0
    // add r2, #0x30
    // bl ov93_0226249C
    // add r5, #0xe4
    // ldr r1, [r5]
    // ldr r0, [r4, #0xc]
    // add r0, r1, r0
    // mov r1, #0x5a
    // asr r0, r0, #0xc
    // lsl r1, r1, #2
    // bl _s32_div_f
    // cmp r1, #0xb4
    // bne _022618B0
    // mov r0, #1
    // b _022618B2
    // mov r0, #0
    // strb r0, [r4, #0x15]
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022618BC: .word ov93_02262CC4
    // _022618C0: .word 0x45800000
    // TODO: decompile
}



void ov93_022618C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // ldrb r0, [r4, #0x11]
    // add r5, r1, #0
    // cmp r0, #3
    // bls _022618D4
    // b _02261BA2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022618E0: ; jump table
    // ldr r0, _02261BA8 ; =0x00000593
    // bl PlaySE
    // add r1, sp, #8
    // mov r3, #0x16
    // ldr r0, [r4]
    // add r1, #2
    // add r2, sp, #8
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r3, sp, #4
    // mov r2, #4
    // ldrsh r2, [r3, r2]
    // mov r1, #6
    // ldrsh r1, [r3, r1]
    // sub r2, #0x20
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // ldr r0, [r4, #4]
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4, #4]
    // mov r1, #0x21
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldrb r1, [r4, #0x14]
    // ldr r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, _02261BAC ; =ov93_02262C7A
    // ldrh r1, [r1, r2]
    // add r1, r1, #2
    // bl ManagedSprite_SetAnim
    // add r0, r5, #0
    // add r0, #0xf4
    // ldrb r0, [r0]
    // ldr r1, _02261BB0 ; =ov93_02262CC6
    // add r5, #0xf4
    // lsl r0, r0, #2
    // ldrb r0, [r1, r0]
    // strb r0, [r4, #0x12]
    // ldrb r0, [r5]
    // lsl r0, r0, #2
    // ldrb r0, [r1, r0]
    // lsr r0, r0, #1
    // strb r0, [r4, #0x13]
    // ldrb r0, [r4, #0x11]
    // add r0, r0, #1
    // strb r0, [r4, #0x11]
    // b _02261BA2
    // ldrb r1, [r4, #0x12]
    // ldrb r0, [r4, #0x13]
    // cmp r1, r0
    // bne _02261984
    // ldrb r1, [r4, #0x14]
    // ldr r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, _02261BAC ; =ov93_02262C7A
    // ldrh r1, [r1, r2]
    // add r1, r1, #1
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r1, #1
    // ldr r0, [r4, #4]
    // lsl r1, r1, #0xe
    // bl ManagedSprite_TickNFrames
    // ldrb r0, [r4, #0x12]
    // cmp r0, #0
    // bne _022619A8
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldrb r1, [r4, #0x14]
    // ldr r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, _02261BAC ; =ov93_02262C7A
    // ldrh r1, [r1, r2]
    // bl ManagedSprite_SetAnim
    // ldrb r0, [r4, #0x11]
    // add r0, r0, #1
    // strb r0, [r4, #0x11]
    // b _02261BA2
    // sub r0, r0, #1
    // strb r0, [r4, #0x12]
    // b _02261BA2
    // add r0, r5, #0
    // add r0, #0xf2
    // ldrb r0, [r0]
    // mov r2, #0
    // cmp r0, #0
    // bne _022619E0
    // add r0, r5, #0
    // add r0, #0xf4
    // ldrb r0, [r0]
    // add r3, r5, #0
    // add r3, #0xf3
    // lsl r1, r0, #2
    // ldr r0, _02261BB4 ; =ov93_02262CC4
    // ldrb r3, [r3]
    // ldrb r0, [r0, r1]
    // add r5, #0xf0
    // sub r3, r0, r3
    // add r3, r2, r3
    // ldr r2, _02261BB8 ; =ov93_02262CC5
    // ldrb r1, [r2, r1]
    // add r1, r3, r1
    // add r6, r1, r0
    // ldrb r0, [r5]
    // add r5, r0, #2
    // b _02261A0C
    // add r1, r2, r0
    // add r0, r5, #0
    // add r0, #0xf0
    // ldrb r0, [r0]
    // cmp r0, #0xc
    // blo _022619FE
    // add r5, #0xf4
    // ldrb r0, [r5]
    // mov r5, #1
    // add r0, r0, #1
    // lsl r2, r0, #2
    // ldr r0, _02261BB4 ; =ov93_02262CC4
    // ldrb r0, [r0, r2]
    // add r6, r1, r0
    // b _02261A0C
    // add r5, #0xf4
    // ldrb r2, [r5]
    // add r5, r0, #1
    // lsl r3, r2, #2
    // ldr r2, _02261BB4 ; =ov93_02262CC4
    // ldrb r2, [r2, r3]
    // add r6, r1, r2
    // mov r1, #0x1e
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #0xc
    // bl _s32_div_f
    // add r0, r5, r0
    // mov r1, #0xc
    // bl _s32_div_f
    // add r5, r1, #0
    // mov r0, #0x1e
    // lsl r0, r0, #0xc
    // add r7, r5, #0
    // mul r7, r0
    // add r0, r7, #0
    // bl GF_SinDegFX32
    // add r5, r0, #0
    // add r0, r7, #0
    // bl GF_CosDegFX32
    // str r0, [sp]
    // add r1, sp, #4
    // mov r3, #0x16
    // ldr r0, [r4]
    // add r1, #2
    // add r2, sp, #4
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r1, sp, #4
    // mov r3, #0
    // ldrsh r0, [r1, r3]
    // mov r2, #0x4c
    // add r0, #0x18
    // strh r0, [r1]
    // mov r0, #2
    // ldrsh r7, [r1, r0]
    // asr r1, r5, #0x1f
    // add r0, r5, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // add r1, #0x80
    // lsl r0, r1, #0x10
    // asr r0, r0, #0x10
    // sub r0, r0, r7
    // lsl r0, r0, #0xc
    // add r1, r6, #0
    // bl _s32_div_f
    // str r0, [r4, #0x20]
    // add r0, sp, #4
    // mov r3, #0
    // ldrsh r5, [r0, r3]
    // ldr r0, [sp]
    // mov r2, #0x44
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // add r2, r0, #0
    // mov r0, #2
    // mov r3, #0
    // lsl r0, r0, #0xa
    // add r0, r2, r0
    // adc r1, r3
    // lsr r2, r0, #0xc
    // lsl r1, r1, #0x14
    // orr r2, r1
    // mov r0, #0x62
    // sub r0, r0, r2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // sub r0, r0, r5
    // lsl r0, r0, #0xc
    // add r1, r6, #0
    // bl _s32_div_f
    // str r0, [r4, #0x24]
    // lsl r0, r7, #0xc
    // str r0, [r4, #0x28]
    // lsl r0, r5, #0xc
    // str r0, [r4, #0x2c]
    // strb r6, [r4, #0x12]
    // str r6, [r4, #0x18]
    // ldrb r0, [r4, #0x11]
    // add r0, r0, #1
    // strb r0, [r4, #0x11]
    // ldr r1, [r4, #0x28]
    // ldr r0, [r4, #0x20]
    // add r0, r1, r0
    // str r0, [r4, #0x28]
    // ldr r1, [r4, #0x2c]
    // ldr r0, [r4, #0x24]
    // add r0, r1, r0
    // str r0, [r4, #0x2c]
    // ldrb r1, [r4, #0x12]
    // mov r0, #0xb4
    // mul r0, r1
    // ldr r1, [r4, #0x18]
    // lsl r0, r0, #0xc
    // bl _s32_div_f
    // bl GF_SinDegFX32
    // mov r2, #3
    // asr r1, r0, #0x1f
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl _ll_mul
    // add r5, r0, #0
    // ldr r2, [r4, #0x28]
    // add r6, r1, #0
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // ldr r2, [r4, #0x2c]
    // lsl r1, r1, #4
    // asr r3, r2, #0xb
    // lsr r3, r3, #0x14
    // add r3, r2, r3
    // mov r2, #2
    // asr r3, r3, #0xc
    // mov r7, #0
    // lsl r2, r2, #0xa
    // asr r1, r1, #0x10
    // sub r3, #0x18
    // add r2, r5, r2
    // adc r6, r7
    // lsl r5, r6, #0x14
    // lsr r2, r2, #0xc
    // orr r2, r5
    // neg r5, r2
    // asr r2, r5, #0xb
    // lsr r2, r2, #0x14
    // add r2, r5, r2
    // asr r2, r2, #0xc
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // ldr r0, [r4]
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // mov r0, #0xb
    // ldr r1, [r4, #0x18]
    // lsl r0, r0, #0xe
    // bl _s32_div_f
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ManagedSprite_TickNFrames
    // ldr r2, [r4, #0x28]
    // ldr r3, [r4, #0x2c]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r2, r3, #0xb
    // lsr r2, r2, #0x14
    // add r2, r3, r2
    // lsl r1, r1, #4
    // lsl r2, r2, #4
    // mov r3, #0x16
    // ldr r0, [r4, #8]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldrb r0, [r4, #0x12]
    // sub r0, r0, #1
    // strb r0, [r4, #0x12]
    // ldrb r0, [r4, #0x12]
    // cmp r0, #0
    // bne _02261BA2
    // ldrb r1, [r4, #0x14]
    // ldr r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, _02261BAC ; =ov93_02262C7A
    // ldrh r1, [r1, r2]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl ManagedSprite_SetAnimationFrame
    // add r0, r4, #0
    // mov r1, #2
    // bl ov93_02261528
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02261BA8: .word 0x00000593
    // _02261BAC: .word ov93_02262C7A
    // _02261BB0: .word ov93_02262CC6
    // _02261BB4: .word ov93_02262CC4
    // _02261BB8: .word ov93_02262CC5
    // TODO: decompile
}



void ov93_02261BBC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // ldr r6, _02261C34 ; =ov93_02262E9C
    // add r5, r0, #0
    // add r4, r1, #0
    // add r3, sp, #0
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02261BCA
    // ldr r0, [r6]
    // mov r7, #0x16
    // str r0, [r3]
    // mov r6, #0
    // lsl r7, r7, #0x10
    // ldr r0, [r5, #0x24]
    // ldr r1, [r5, #0x28]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // mov r1, #0
    // str r0, [r4]
    // add r2, r1, #0
    // add r3, r7, #0
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, #0x24]
    // ldr r1, [r5, #0x28]
    // ldr r2, _02261C38 ; =ov93_02262ED0
    // bl SpriteSystem_NewSprite
    // mov r1, #0
    // str r0, [r4, #4]
    // add r2, r1, #0
    // add r3, r7, #0
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4, #4]
    // mov r1, #0x21
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, #0x18
    // cmp r6, #3
    // blt _02261BDC
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _02261C34: .word ov93_02262E9C
    // _02261C38: .word ov93_02262ED0
    // TODO: decompile
}



void ov93_02261C3C(void) {
    Sprite_DeleteAndFreeResources(*((u32*)r1));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 4)));
    // add r5, #0x18
}



void ov93_02261C58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // str r3, [sp]
    // ldr r4, _02261D04 ; =0
    // beq _02261D02
    // bl sub_0203769C
    // ldr r1, [sp]
    // cmp r1, r0
    // beq _02261D02
    // add r0, r4, #0
    // add r2, r7, #0
    // ldrb r1, [r2, #0x15]
    // cmp r1, #0
    // bne _02261C82
    // mov r1, #0x18
    // mul r1, r0
    // add r4, r7, r1
    // b _02261C8A
    // add r0, r0, #1
    // add r2, #0x18
    // cmp r0, #3
    // blt _02261C74
    // cmp r4, #0
    // beq _02261D02
    // ldr r1, [sp]
    // add r0, r6, #0
    // bl ov93_0225E3C4
    // ldr r1, [r6]
    // ldr r2, _02261D08 ; =ov93_02262D2C
    // add r1, #0x30
    // ldrb r1, [r1]
    // add r7, r0, #0
    // ldr r0, [r4]
    // lsl r3, r1, #3
    // lsl r1, r7, #1
    // add r2, r2, r3
    // ldrh r1, [r1, r2]
    // bl ManagedSprite_SetPaletteOverride
    // ldr r1, _02261D0C ; =ov93_02262C7A
    // lsl r2, r5, #1
    // ldrh r1, [r1, r2]
    // ldr r0, [r4]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r6]
    // mov r3, #0x16
    // add r0, #0x30
    // ldrb r0, [r0]
    // lsl r3, r3, #0x10
    // lsl r1, r0, #2
    // ldr r0, _02261D10 ; =ov93_02262CD8
    // add r0, r0, r1
    // ldrb r0, [r7, r0]
    // ldr r1, _02261D14 ; =ov93_02262CB4
    // lsl r2, r0, #2
    // ldr r0, _02261D18 ; =ov93_02262CB6
    // ldrsh r1, [r1, r2]
    // ldrsh r0, [r0, r2]
    // mov r2, #0x10
    // sub r0, #0x18
    // strh r0, [r4, #0x10]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4]
    // sub r2, #0x60
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Sprite_TickFrame
    // ldr r0, [sp, #0x18]
    // strb r5, [r4, #0x12]
    // sub r0, #0xc
    // strh r0, [r4, #0x16]
    // mov r0, #0
    // strb r0, [r4, #0x13]
    // mov r0, #1
    // strb r0, [r4, #0x15]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02261D04: .word 0
    // _02261D08: .word ov93_02262D2C
    // _02261D0C: .word ov93_02262C7A
    // _02261D10: .word ov93_02262CD8
    // _02261D14: .word ov93_02262CB4
    // _02261D18: .word ov93_02262CB6
    // TODO: decompile
}



void ov93_02261D1C(void) {
    ov93_02261D3C(r1, r1);
    // add r5, #0x18
}



void ov93_02261D3C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r1, #0
    // ldrb r0, [r4, #0x13]
    // cmp r0, #4
    // bls _02261D4A
    // b _02261E88
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261D56: ; jump table
    // add r1, sp, #0
    // mov r3, #0x16
    // ldr r0, [r4]
    // add r1, #2
    // add r2, sp, #0
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // lsl r0, r0, #0xc
    // str r0, [r4, #8]
    // mov r0, #0
    // ldrsh r0, [r1, r0]
    // lsl r0, r0, #0xc
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0x13]
    // add r0, r0, #1
    // strb r0, [r4, #0x13]
    // mov r0, #0x16
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _02261D96
    // sub r0, r0, #1
    // strh r0, [r4, #0x16]
    // b _02261E88
    // ldr r0, [r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #2
    // ldr r1, [r4, #0xc]
    // lsl r0, r0, #0xe
    // add r2, r1, r0
    // str r2, [r4, #0xc]
    // mov r0, #0x10
    // ldrsh r1, [r4, r0]
    // asr r0, r2, #0xb
    // lsr r0, r0, #0x14
    // add r0, r2, r0
    // asr r0, r0, #0xc
    // cmp r0, r1
    // blt _02261E88
    // lsl r0, r1, #0xc
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0x13]
    // add r0, r0, #1
    // strb r0, [r4, #0x13]
    // b _02261E88
    // add r1, sp, #0
    // mov r3, #0x16
    // ldr r0, [r4]
    // add r1, #2
    // add r2, sp, #0
    // lsl r3, r3, #0x10
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // sub r2, #0x20
    // lsl r2, r2, #0x10
    // mov r3, #0x16
    // ldr r0, [r4, #4]
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // ldr r0, [r4, #4]
    // mov r1, #0x21
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _02261EB0 ; =0x00000593
    // bl PlaySE
    // ldrb r1, [r4, #0x12]
    // ldr r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, _02261EB4 ; =ov93_02262C7A
    // ldrh r1, [r1, r2]
    // add r1, r1, #2
    // bl ManagedSprite_SetAnim
    // mov r0, #8
    // strb r0, [r4, #0x14]
    // ldrb r0, [r4, #0x13]
    // add r0, r0, #1
    // strb r0, [r4, #0x13]
    // b _02261E88
    // ldrb r0, [r4, #0x14]
    // sub r0, r0, #1
    // strb r0, [r4, #0x14]
    // ldrb r0, [r4, #0x14]
    // cmp r0, #3
    // bne _02261E36
    // mov r1, #1
    // ldr r0, [r4, #4]
    // lsl r1, r1, #0xe
    // bl ManagedSprite_TickNFrames
    // ldrb r0, [r4, #0x14]
    // cmp r0, #0
    // bne _02261E88
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldrb r1, [r4, #0x12]
    // ldr r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, _02261EB4 ; =ov93_02262C7A
    // ldrh r1, [r1, r2]
    // bl ManagedSprite_SetAnim
    // ldrb r0, [r4, #0x13]
    // add r0, r0, #1
    // strb r0, [r4, #0x13]
    // b _02261E88
    // mov r0, #2
    // ldr r1, [r4, #0xc]
    // lsl r0, r0, #0xe
    // sub r1, r1, r0
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // str r1, [r4, #0xc]
    // asr r1, r0, #0xc
    // mov r0, #0x10
    // ldrsh r0, [r4, r0]
    // sub r0, #0x60
    // cmp r1, r0
    // bgt _02261E88
    // ldr r0, [r4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0
    // strb r0, [r4, #0x13]
    // add sp, #4
    // strb r0, [r4, #0x15]
    // pop {r3, r4, pc}
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0xc]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r2, r3, #0xb
    // lsr r2, r2, #0x14
    // add r2, r3, r2
    // lsl r1, r1, #4
    // lsl r2, r2, #4
    // mov r3, #0x16
    // ldr r0, [r4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x10
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, pc}
    // _02261EB0: .word 0x00000593
    // _02261EB4: .word ov93_02262C7A
    // TODO: decompile
}



void ov93_02261EB8(void) {
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // ldr r0, [sp, #0x8c]
    // ldr r1, [sp, #0x88]
    // ldr r4, [sp, #0x9c]
    FontID_String_GetWidthMultiline(0);
    // asr r1, r7, #2
    // add r1, r7, r1
    // asr r6, r1, #3
    FX_ModS32(8);
    // add r0, sp, #0x30
    InitWindow();
    // ldr r3, [sp, #0xb0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x30
    AddTextWindowTopLeftCorner(0, ((r6 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x90]
    // ldr r1, [sp, #0x8c]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r2, [sp, #0x88]
    // add r0, sp, #0x30
    // str r3, [sp, #0x14]
    AddTextPrinterParameterizedWithColorAndSpacing(0xff, 0);
    // add r0, sp, #0x30
    sub_02013688(1, 0x75);
    // add r3, sp, #0x24
    sub_02021AC8(1, 1);
    // ldr r0, [sp, #0xa4]
    // add r0, r7, r0
    // asr r0, r0, #1
    // sub r4, r4, r0
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x40]
    // add r0, sp, #0x30
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x1c]
    SpriteManager_GetSpriteList((r7 >> 0x1f));
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x98]
    SpriteManager_FindPlttResourceProxy();
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #0x58]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0xa0]
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0xa8]
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0xac]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // add r0, sp, #0x40
    sub_020135D8(0x75);
    // ldr r1, [sp, #0x94]
    sub_020138B0();
    // ldr r2, [sp, #0xa0]
    sub_020136B4(r6, r4);
    // add r0, sp, #0x30
    RemoveWindow();
    // str r6, [r5]
    // add r3, sp, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u16*)(r5 + 0x10)) = r7;
}



void ov93_02261FB0(void) {
}



void ov93_02261FC8(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r1, r0, r7
    // ldrb r1, [r1, r0]
    // sub r6, r0, r1
    // sub r4, #0x50
    // sub r4, r0, r1
    // sub r4, #0x10
    // sub r6, #0x50
    // sub r1, #0xa0
    // sub r6, r0, r1
    // sub r4, #0x50
    // add r1, sp, #8
    // add r2, sp, #4
    sub_02013794(*((u32*)(r0 + 4)));
    // ldr r1, [sp, #8]
    // sub r2, r2, r6
    sub_020136B4(*((u32*)(r5 + 4)), 0xa8);
    // ldr r1, [sp, #8]
    // sub r2, r2, r4
    sub_020136B4(*((u32*)(r5 + 0x18)), 0xa8);
    // add r5, #0x28
}



void ov93_02262034(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, _02262094 ; =0x0000019E
    // add r4, r1, #0
    // ldrsb r1, [r4, r0]
    // cmp r1, #0
    // ble _02262046
    // sub r1, r1, #1
    // strb r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // add r0, r0, #2
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _02262054
    // cmp r0, #1
    // beq _02262070
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov93_02262108
    // cmp r0, #1
    // bne _02262066
    // add r0, r4, #0
    // bl ov93_022620D4
    // pop {r3, r4, r5, pc}
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl ov93_02262130
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov93_02261FC8
    // cmp r5, #1
    // bne _02262092
    // ldr r0, _02262094 ; =0x0000019E
    // mov r1, #0xf
    // strb r1, [r4, r0]
    // add r1, r0, #2
    // ldrb r1, [r4, r1]
    // add r0, r0, #2
    // sub r1, r1, #1
    // strb r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // _02262094: .word 0x0000019E
    // TODO: decompile
}



void ov93_02262098(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r5, _022620D0 ; =0x000186A0
    // add r7, r0, #0
    // add r6, r1, #0
    // mov r4, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // bl _s32_div_f
    // add r3, r0, #0
    // mov r0, #0x63
    // lsl r2, r3, #4
    // add r1, r7, r4
    // lsl r0, r0, #2
    // strb r2, [r1, r0]
    // add r0, r3, #0
    // mul r0, r5
    // sub r6, r6, r0
    // add r0, r5, #0
    // mov r1, #0xa
    // bl _s32_div_f
    // add r4, r4, #1
    // add r5, r0, #0
    // cmp r4, #6
    // blt _022620A2
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022620D0: .word 0x000186A0
    // TODO: decompile
}



void ov93_022620D4(void) {
    // push {r4, r5, r6, r7}
    // mov r1, #0x66
    // mov r5, #0
    // lsl r1, r1, #2
    // add r3, r5, #0
    // sub r2, r1, #6
    // mov r6, #0x63
    // add r4, r0, r5
    // lsl r6, r6, #2
    // ldrb r7, [r4, r6]
    // sub r6, r6, #6
    // strb r7, [r4, r6]
    // mov r6, #5
    // sub r6, r6, r5
    // lsl r6, r6, #1
    // strb r6, [r4, r1]
    // add r5, r5, #1
    // strb r3, [r4, r2]
    // cmp r5, #6
    // blt _022620E0
    // ldr r1, _02262104 ; =0x0000019F
    // strb r3, [r0, r1]
    // pop {r4, r5, r6, r7}
    // bx lr
    // _02262104: .word 0x0000019F
    // TODO: decompile
}



void ov93_02262108(void) {
    // add r3, r0, r5
    // ldrb r4, [r3, r1]
    // ldrb r3, [r3, r2]
}



void ov93_02262130(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02262224 ; =0x0000019F
    // mov r7, #5
    // ldrb r0, [r6, r0]
    // cmp r0, #6
    // bls _02262142
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // str r4, [sp]
    // ldr r0, [sp]
    // add r5, r6, r7
    // mov ip, r0
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldrsb r0, [r5, r0]
    // cmp r0, #0
    // ble _0226216A
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldrsb r0, [r5, r0]
    // sub r1, r0, #1
    // mov r0, #0x66
    // lsl r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #0
    // str r0, [sp]
    // b _02262216
    // ldr r0, _02262228 ; =0x00000192
    // ldrb r0, [r5, r0]
    // cmp r0, #1
    // bls _02262186
    // mov r0, #6
    // ldr r1, _0226222C ; =0x00000186
    // lsl r0, r0, #6
    // ldrb r0, [r5, r0]
    // ldrb r1, [r5, r1]
    // cmp r0, r1
    // bne _02262186
    // mov r0, #1
    // str r0, [sp]
    // b _02262216
    // mov r0, #0
    // mov r1, #6
    // str r0, [sp]
    // mov r0, #6
    // lsl r1, r1, #6
    // lsl r0, r0, #6
    // ldrb r2, [r5, r1]
    // ldrb r0, [r5, r0]
    // add r2, #0x17
    // strb r2, [r5, r1]
    // add r1, r1, #6
    // ldrb r3, [r5, r1]
    // add r1, r3, #0
    // add r1, #0xa0
    // cmp r0, r3
    // bgt _022621B0
    // mov r2, #6
    // lsl r2, r2, #6
    // ldrb r2, [r5, r2]
    // cmp r2, r3
    // bhs _022621BE
    // cmp r0, r1
    // bgt _02262204
    // mov r0, #6
    // lsl r0, r0, #6
    // ldrb r0, [r5, r0]
    // cmp r0, r1
    // blt _02262204
    // ldr r0, _02262228 ; =0x00000192
    // ldrb r0, [r5, r0]
    // cmp r0, #1
    // bhs _022621D2
    // ldr r0, _02262228 ; =0x00000192
    // ldrb r0, [r5, r0]
    // add r1, r0, #1
    // ldr r0, _02262228 ; =0x00000192
    // strb r1, [r5, r0]
    // b _02262204
    // cmp r7, #5
    // beq _022621DC
    // mov r0, ip
    // cmp r0, #1
    // bne _02262204
    // ldr r0, _02262228 ; =0x00000192
    // ldrb r0, [r5, r0]
    // add r1, r0, #1
    // ldr r0, _02262228 ; =0x00000192
    // strb r1, [r5, r0]
    // sub r0, #0xc
    // ldrb r1, [r5, r0]
    // mov r0, #6
    // lsl r0, r0, #6
    // strb r1, [r5, r0]
    // add r0, #0x1f
    // ldrb r0, [r6, r0]
    // add r1, r0, #1
    // ldr r0, _02262224 ; =0x0000019F
    // strb r1, [r6, r0]
    // ldrb r0, [r6, r0]
    // cmp r0, #6
    // blo _02262204
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #6
    // lsl r0, r0, #6
    // ldrb r0, [r5, r0]
    // mov r1, #0xa0
    // bl _s32_div_f
    // mov r0, #6
    // lsl r0, r0, #6
    // strb r1, [r5, r0]
    // add r4, r4, #1
    // sub r7, r7, #1
    // cmp r4, #6
    // blt _02262146
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02262224: .word 0x0000019F
    // _02262228: .word 0x00000192
    // _0226222C: .word 0x00000186
    // TODO: decompile
}



void ov93_02262230(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // ldr r0, [r1, #0x24]
    // ldr r1, [r1, #0x28]
    // ldr r2, _0226224C ; =ov93_02262F6C
    // bl SpriteSystem_NewSprite
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl Sprite_TickFrame
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _0226224C: .word ov93_02262F6C
    // TODO: decompile
}



void ov93_02262250(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r7, r0, #0
    // ldr r0, _022622FC ; =0x00003848
    // add r6, r7, #0
    // ldr r0, [r7, r0]
    // add r4, r7, #0
    // str r0, [sp, #0x2c]
    // mov r0, #5
    // str r0, [sp, #0x30]
    // ldr r0, _02262300 ; =0x000016B0
    // add r6, #0x64
    // add r5, r7, r0
    // add r4, #0xc8
    // add r5, #0x64
    // ldr r0, _02262300 ; =0x000016B0
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _0226227A
    // bl GF_AssertFail
    // ldr r0, [sp, #0x2c]
    // mov r1, #0xa
    // bl _u32_div_f
    // add r0, r7, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // add r1, r1, #4
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x2c]
    // mov r1, #0xa
    // bl _u32_div_f
    // str r0, [sp, #0x2c]
    // ldr r0, _02262304 ; =0x000015AC
    // add r1, sp, #0x3c
    // ldr r0, [r4, r0]
    // add r2, sp, #0x38
    // bl sub_02013794
    // ldr r0, [sp, #0x34]
    // add r2, r7, #0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _02262308 ; =0x000E0F00
    // add r2, #0x90
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0226230C ; =0x00002713
    // add r3, r5, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // mov r0, #0xa8
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // mov r0, #1
    // str r0, [sp, #0x20]
    // mov r0, #0xc
    // str r0, [sp, #0x24]
    // mov r0, #2
    // str r0, [sp, #0x28]
    // ldr r0, [r7, #0x2c]
    // ldr r1, [r7, #0x28]
    // ldr r2, [r2]
    // bl ov93_02261EB8
    // ldr r0, [sp, #0x34]
    // bl String_Delete
    // ldr r0, [sp, #0x30]
    // sub r6, #0x14
    // sub r4, #0x28
    // sub r5, #0x14
    // sub r0, r0, #1
    // str r0, [sp, #0x30]
    // bpl _0226226E
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022622FC: .word 0x00003848
    // _02262300: .word 0x000016B0
    // _02262304: .word 0x000015AC
    // _02262308: .word 0x000E0F00
    // _0226230C: .word 0x00002713
    // TODO: decompile
}



void ov93_02262310(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _02262334 ; =0x000016B0
    // mov r6, #0
    // add r4, r5, r0
    // add r7, r0, #0
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _02262328
    // add r0, r4, #0
    // bl ov93_02261FB0
    // add r6, r6, #1
    // add r5, #0x14
    // add r4, #0x14
    // cmp r6, #6
    // blt _0226231C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02262334: .word 0x000016B0
    // TODO: decompile
}



void ov93_02262338(void) {
}



void ov93_02262344(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // ldr r0, [r1, #0x24]
    // ldr r1, [r1, #0x28]
    // ldr r2, _02262364 ; =ov93_02262FA0
    // bl SpriteSystem_NewSprite
    // add r4, r0, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4]
    // bl Sprite_TickFrame
    // add r0, r4, #0
    // pop {r4, pc}
    // _02262364: .word ov93_02262FA0
    // TODO: decompile
}



void ov93_02262368(void) {
}



void ov93_02262374(void) {
    // ldrsh r1, [r4, r0]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226238C: ; jump table
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r1), 0x80, 0x10, (0x16 << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
    // ldrsh r2, [r4, r1]
    *((u16*)(r4 + 6)) = (r2 + 1);
    // ldrsh r1, [r4, r1]
    *((u16*)(r4 + 6)) = 0;
    *((u32*)(r4 + 0x14)) = 1;
    *((u32*)(r4 + 0x18)) = 1;
    *((u32*)(r4 + 0xc)) = 0x80;
    *((u32*)(r4 + 0x10)) = 0x20;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = ((4 + 1) + 1);
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) + 6);
    ManagedSprite_OffsetPositionXY(*((u32*)r4), 0, 6);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
    *((u32*)(r4 + 0x14)) = 0;
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = 0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = (4 + 1);
}



void ov93_02262444(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r6, #0
    // ldr r0, [r7, #0x24]
    // ldr r1, [r7, #0x28]
    // ldr r2, _02262480 ; =ov93_02262F38
    // bl SpriteSystem_NewSprite
    // add r4, r0, #0
    // mov r1, #0x1b
    // bl ManagedSprite_SetAnim
    // add r0, r4, #0
    // mov r1, #1
    // bl ManagedSprite_SetOamMode
    // add r0, r4, #0
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r4]
    // bl Sprite_TickFrame
    // add r6, r6, #1
    // stmia r5!, {r4}
    // cmp r6, #2
    // blt _0226244C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02262480: .word ov93_02262F38
    // TODO: decompile
}



void ov93_02262484(void) {
}



void ov93_0226249C(void) {
    // add r1, sp, #4
    // str r2, [sp]
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)r1), (0x16 << 0x10));
    // ldr r5, [sp]
    // add r6, sp, #4
    // ldrsh r2, [r6, r2]
    // add r2, #0x1c
    // ldrsh r1, [r6, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), 2, (0 << 0x10), (0x16 << 0x10));
    ManagedSprite_SetAnim(*((u32*)r5), 0x1b);
    ManagedSprite_SetOamMode(*((u32*)r5), 1);
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    LCRandom();
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r5 + 8)) = (1 << 0xc);
    LCRandom((1 << 0xc), (r0 >> 0x1f), (r0 << 0x14));
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r5 + 0x10)) = (1 << 0xa);
    // tst r0, r7
    // mvn r0, r0
    // mul r0, r1
    *((u32*)(r5 + 8)) = 0;
    // ldr r0, [sp]
    *((u8*)(0 + 0x19)) = 0;
    *((u8*)(0 + 0x18)) = 1;
}



void ov93_02262540(void) {
    // neg r2, r2
    ManagedSprite_AddSpritePrecisePositionXY(*((u32*)r2), *((u32*)(r2 + 8)), *((u32*)(r2 + 0x10)));
    Sprite_TickFrame(*((u32*)*((u32*)r5)));
    *((u8*)(r6 + 0x19)) = (*((u8*)(r6 + 0x19)) + 1);
    ManagedSprite_SetDrawFlag(*((u32*)r6), 0);
    *((u8*)(r6 + 0x18)) = 0;
}



u32 ov93_02262598(void) {
}



void ov93_022625BC(void) {
    OverlayManager_GetData();
    // add r1, #0x3d
    // ldrb r1, [r1]
    // add r1, #0x3e
    // ldrb r1, [r1]
    IsPaletteFadeFinished(*((u32*)r0), *((u32*)r0));
    sub_0200FB70();
    sub_0200FC20(0);
    // add r0, #0x3e
    // ldrb r0, [r0]
    // add r1, #0x3e
    // strb r0, [r1]
    ov90_02258B98((*((u32*)r4) + 1), *((u32*)r4));
    // add r0, #0x3e
    // ldrb r0, [r0]
    // add r1, #0x3e
    // strb r0, [r1]
    ov90_02258938(*((u32*)(r4 + 4)), *((u32*)r4));
    *((u32*)(r4 + 4)) = 0;
    ov90_02258A04(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 8)) = 0;
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02262654: ; jump table
    // add r0, #0x31
    // ldrb r0, [r0]
    // str r0, [r5]
    // str r0, [r5]
    ov90_0225892C(3, 0x75);
    *((u32*)(r4 + 4)) = r0;
    // str r0, [r5]
    ov90_022589BC(*((u32*)(r4 + 4)));
    ov90_022589CC(*((u32*)(r4 + 4)));
    *((u32*)(*((u32*)r4) + 0x34)) = r0;
    ov90_02258938(*((u32*)(r4 + 4)), *((u32*)r4));
    *((u32*)(r4 + 4)) = 0;
    // str r0, [r5]
    // add r1, #0x10
    ov90_022589F8(5, 5, 0x75);
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r5]
    ov90_02258AA0(*((u32*)(r4 + 8)));
    ov90_02258AA4(*((u32*)(r4 + 8)));
    *((u32*)(*((u32*)r4) + 0x38)) = r0;
    ov90_02258A04(*((u32*)(r4 + 8)), *((u32*)r4));
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r5]
}



u32 ov93_022626E8(void) {
}



void ov93_022626FC(void) {
    // ldr r3, _02262708 ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _0226270C ; =ov93_022630E4
    // mov r1, #4
    // bx r3
    // nop
    // _02262708: .word sub_0203410C
    // _0226270C: .word ov93_022630E4
    // TODO: decompile
}



u8 ov93_02262710(void) {
}



u8 ov93_02262714(void) {
}



void ov93_02262718(void) {
}



void ov93_02262724(void) {
}



void ov93_0226273C(void) {
    // str r1, [r3, r0]
}



void ov93_02262748(void) {
}



void ov93_02262760(void) {
    // add r5, #0x30
    // ldrb r5, [r5]
    // add r6, #0x2c
    // ldrb r6, [r6]
    // add r0, r4, r0
    *((u32*)((0 << 2) + 0xc)) = *((u32*)r2);
    // add r0, #0x30
    // ldrb r0, [r0]
    GF_AssertFail(*((u32*)r3), *((u32*)r2), (0 + 1), (*((u32*)r3) + 1));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}



void ov93_022627A4(void) {
}



void ov93_022627C0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // lsl r3, r2, #2
    // ldr r2, _022627E4 ; =ov93_02263114
    // ldr r2, [r2, r3]
    // cmp r2, #0
    // beq _022627E0
    // blx r2
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _022627E4: .word ov93_02263114
    // TODO: decompile
}



void ov93_022627E8(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // add r2, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0
    ov93_0225E230(r5);
}



void ov93_02262814(void) {
    sub_0203769C();
    ov93_0225FEC4(r5, (r4 + 4));
}



void ov93_02262830(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // add r0, sp, #0
    *((u16*)(2 + 4)) = r5;
    *((u8*)(2 + 6)) = 5;
    *((u8*)(2 + 7)) = r4;
    // add r1, sp, #0
    ov93_0225E230(r6, 5);
}



void ov93_02262860(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, _02262880 ; =0x00002FD0
    // add r5, r0, #0
    // ldr r2, [r5, r1]
    // add r2, r2, #1
    // str r2, [r5, r1]
    // bl ov93_02260908
    // ldrb r1, [r4, #6]
    // ldrb r2, [r4, #7]
    // add r0, r5, #0
    // bl ov93_0225E48C
    // pop {r3, r4, r5, pc}
    // nop
    // _02262880: .word 0x00002FD0
    // TODO: decompile
}



void ov93_02262884(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // add r0, sp, #0
    *((u16*)(3 + 4)) = r5;
    *((u8*)(3 + 6)) = r4;
    *((u8*)(3 + 7)) = 4;
    *((u8*)(3 + 8)) = r6;
    // add r1, sp, #0
    ov93_0225E230(r7, 4);
}



void ov93_022628B8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrh r1, [r4, #4]
    // add r5, r0, #0
    // ldr r0, _022628E8 ; =0x00002FC8
    // ldr r3, _022628EC ; =0x00001428
    // str r1, [r5, r0]
    // ldr r1, [r5]
    // ldrb r2, [r4, #6]
    // add r1, #0x30
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x2c]
    // add r3, r5, r3
    // bl ov93_0225FBF0
    // ldr r0, _022628F0 ; =0x00002FCC
    // mov r1, #1
    // str r1, [r5, r0]
    // ldrb r1, [r4, #7]
    // ldrb r2, [r4, #8]
    // add r0, r5, #0
    // bl ov93_0225E48C
    // pop {r3, r4, r5, pc}
    // _022628E8: .word 0x00002FC8
    // _022628EC: .word 0x00001428
    // _022628F0: .word 0x00002FCC
    // TODO: decompile
}



void ov93_022628F4(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // add r0, sp, #0
    *((u8*)(4 + 4)) = 2;
    *((u8*)(4 + 5)) = r4;
    // add r1, sp, #0
    ov93_0225E230(r5, 2);
}



void ov93_02262920(void) {
    // add r2, r1, #0
    // mov r1, #3
    // str r1, [r0, #0x20]
    // ldrb r1, [r2, #4]
    // ldr r3, _02262930 ; =ov93_0225E48C
    // ldrb r2, [r2, #5]
    // bx r3
    // nop
    // _02262930: .word ov93_0225E48C
    // TODO: decompile
}



void ov93_02262934(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // add r0, sp, #0
    *((u8*)(5 + 4)) = 3;
    *((u8*)(5 + 5)) = r4;
    // add r1, sp, #0
    ov93_0225E230(r5, 3);
}



void ov93_02262960(void) {
    // add r3, r1, #0
    // ldr r1, _02262974 ; =0x00002FBC
    // mov r2, #1
    // str r2, [r0, r1]
    // mov r1, #6
    // str r1, [r0, #0x20]
    // ldrb r1, [r3, #4]
    // ldrb r2, [r3, #5]
    // ldr r3, _02262978 ; =ov93_0225E48C
    // bx r3
    // _02262974: .word 0x00002FBC
    // _02262978: .word ov93_0225E48C
    // TODO: decompile
}



void ov93_0226297C(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // add r0, sp, #0
    *((u8*)(6 + 4)) = r5;
    *((u8*)(6 + 5)) = r4;
    // add r1, sp, #0
    ov93_0225E230(r6);
}



void ov93_022629A8(void) {
    // ldr r3, _022629B4 ; =ov93_0225E48C
    // add r2, r1, #0
    // ldrb r1, [r2, #4]
    // ldrb r2, [r2, #5]
    // bx r3
    // nop
    // _022629B4: .word ov93_0225E48C
    // TODO: decompile
}



void ov93_022629B8(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r0, [sp]
    // add r0, sp, #0
    *((u8*)(7 + 4)) = 6;
    *((u8*)(7 + 5)) = r4;
    // add r1, sp, #0
    ov93_0225E230(r5, 6);
}



void ov93_022629E4(void) {
    // add r2, r1, #0
    // mov r1, #1
    // str r1, [r0, #0x20]
    // ldrb r1, [r2, #4]
    // ldr r3, _022629F4 ; =ov93_0225E48C
    // ldrb r2, [r2, #5]
    // bx r3
    // nop
    // _022629F4: .word ov93_0225E48C
    // TODO: decompile
}


