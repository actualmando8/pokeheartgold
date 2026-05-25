/* Decompiled from asm/unk_02087284.s */
#include "global.h"

void sub_02087284(void) {
    // ldr r4, [sp, #0xc]
    Heap_Alloc(r4, (0x42 << 2));
    // ldr r1, [sp, #8]
    *((u32*)(r0 + 0x10)) = r1;
    // ldr r1, [sp, #0x10]
    *((u32*)(r0 + 0x14)) = r4;
    *((u32*)(r0 + 0x18)) = r1;
    // ldr r1, [sp, #0x14]
    *((u32*)(r0 + 0x1c)) = r1;
    // ldr r1, [sp, #0x18]
    *((u32*)(r0 + 0x20)) = r1;
    // ldr r1, [sp, #0x1c]
    *((u32*)(r0 + 4)) = r1;
    // ldr r1, [sp, #0x20]
    *((u32*)(r0 + 8)) = r1;
    // ldr r1, [sp, #0x24]
    *((u32*)(r0 + 0xc)) = r1;
    // add r1, #0xe4
    // str r3, [r1]
    // add r1, #0xfc
    // str r2, [r1]
    // add r1, #0xf1
    // str r2, [r0, r1]
    // add r1, #0xf4
    // str r3, [r1]
    // add r1, #0xf0
    // str r3, [r1]
}



void sub_020872DC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // mov r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // bl _fflt
    // add r1, r4, #0
    // bl _fsub
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl _fflt
    // add r1, r6, #0
    // bl _fsub
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r0, #0
    // bl _fmul
    // add r4, r0, #0
    // ldr r0, [sp, #0xc]
    // add r1, r0, #0
    // bl _fmul
    // add r1, r0, #0
    // add r0, r4, #0
    // bl _fadd
    // mov r1, #0
    // add r4, r0, #0
    // bl _fgr
    // ldr r0, _020873D0 ; =0x45800000
    // bls _02087344
    // add r1, r4, #0
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02087352
    // add r1, r4, #0
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // bl FX_Sqrt
    // bl _fflt
    // ldr r1, _020873D0 ; =0x45800000
    // bl _fdiv
    // ldr r1, [sp, #0x30]
    // add r4, r0, #0
    // bl _fls
    // blo _0208738A
    // add r1, sp, #0x18
    // mov r0, #0x1c
    // ldrsh r0, [r1, r0]
    // bl _fflt
    // add r1, r4, #0
    // bl _fgr
    // bhi _0208738A
    // mov r0, #0
    // add r1, r4, #0
    // bl _feq
    // bne _02087390
    // add sp, #0x18
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x30]
    // bl _fmul
    // add r1, r4, #0
    // bl _fdiv
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x30]
    // bl _fmul
    // add r1, r4, #0
    // bl _fdiv
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp]
    // bl _fadd
    // ldr r1, [sp, #0x28]
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #4]
    // bl _fadd
    // ldr r1, [sp, #0x2c]
    // str r0, [r1]
    // mov r0, #1
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _020873D0: .word 0x45800000
    // TODO: decompile
}



void sub_020873D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // add r6, r1, #0
    // add r0, r6, #0
    // add r0, #0xf0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _020873E6
    // b _02087632
    // ldr r0, [r6, #0x10]
    // mov r4, #0
    // str r4, [sp, #0x1c]
    // cmp r0, #0
    // bgt _020873F2
    // b _02087632
    // add r0, r6, #0
    // mov r7, #0x3f
    // str r0, [sp, #0x30]
    // add r0, #0xec
    // add r5, r6, #0
    // lsl r7, r7, #0x18
    // str r0, [sp, #0x30]
    // cmp r4, #0
    // beq _02087410
    // mov r0, #0x18
    // ldrsh r0, [r5, r0]
    // strh r0, [r5, #0x28]
    // mov r0, #0x1a
    // ldrsh r0, [r5, r0]
    // strh r0, [r5, #0x2a]
    // ldr r0, [r5, #0x24]
    // ldr r3, [r6, #0x20]
    // add r1, sp, #0x4c
    // add r2, sp, #0x48
    // bl ManagedSprite_GetPositionFxXYWithSubscreenOffset
    // ldr r0, [sp, #0x4c]
    // bl _fflt
    // ldr r1, _02087638 ; =0x45800000
    // bl _fdiv
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x48]
    // bl _fflt
    // ldr r1, _02087638 ; =0x45800000
    // bl _fdiv
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // sub r0, r4, r0
    // bl _fflt
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x41
    // lsl r0, r0, #0x18
    // bl _fsub
    // mov r1, #1
    // lsl r1, r1, #0x1e
    // bl _fdiv
    // add r1, sp, #0x44
    // str r1, [sp]
    // add r1, sp, #0x40
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // mov r1, #0x2a
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r1]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x24]
    // bl sub_020872DC
    // cmp r0, #0
    // beq _020874EE
    // ldr r0, [r5, #0x2c]
    // cmp r0, #0
    // bne _020874EE
    // ldr r0, [sp, #0x40]
    // mov r1, #0
    // bl _fgr
    // ldr r0, _02087638 ; =0x45800000
    // bls _020874A0
    // ldr r1, [sp, #0x40]
    // bl _fmul
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fadd
    // str r0, [sp, #0x14]
    // b _020874AE
    // ldr r1, [sp, #0x40]
    // bl _fmul
    // add r1, r7, #0
    // bl _fsub
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // mov r1, #0
    // bl _fgr
    // ldr r0, _02087638 ; =0x45800000
    // bls _020874CA
    // ldr r1, [sp, #0x44]
    // bl _fmul
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fadd
    // b _020874D6
    // ldr r1, [sp, #0x44]
    // bl _fmul
    // add r1, r7, #0
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    // bl _ffix
    // add r2, r0, #0
    // ldr r0, [r5, #0x24]
    // ldr r1, [sp, #0x28]
    // bl ManagedSprite_AddSpritePrecisePositionXY
    // b _02087626
    // ldr r0, [r5, #0x2c]
    // cmp r0, #0
    // beq _020874FA
    // cmp r0, #1
    // beq _020875CA
    // b _02087620
    // add r1, sp, #0x3c
    // ldr r0, [r5, #0x24]
    // ldr r3, [r6, #0x20]
    // add r1, #2
    // add r2, sp, #0x3c
    // bl ManagedSprite_GetPositionXYWithSubscreenOffset
    // add r0, r6, #0
    // add r0, #0xe8
    // ldr r0, [r0]
    // str r0, [sp, #0x18]
    // cmp r0, #0xff
    // bne _0208758E
    // add r0, r6, #0
    // add r0, #0xe8
    // str r4, [r0]
    // mov r0, #0x28
    // add r2, sp, #0x3c
    // mov r1, #2
    // ldrsh r0, [r6, r0]
    // ldrsh r1, [r2, r1]
    // sub r0, r0, r1
    // cmp r0, #0
    // ble _0208753C
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fadd
    // str r0, [sp, #0x10]
    // b _0208754A
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r7, #0
    // bl _fsub
    // str r0, [sp, #0x10]
    // mov r0, #0x2a
    // add r2, sp, #0x3c
    // mov r1, #0
    // ldrsh r0, [r6, r0]
    // ldrsh r1, [r2, r1]
    // sub r0, r0, r1
    // cmp r0, #0
    // ble _0208756A
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // add r0, r7, #0
    // bl _fadd
    // b _02087576
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r7, #0
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x10]
    // bl _ffix
    // add r1, r0, #0
    // ldr r0, [sp, #0x2c]
    // bl FX_Atan2Idx
    // str r0, [r5, #0x30]
    // b _020875AC
    // mov r0, #0x2d
    // ldr r1, [r6, #0x10]
    // lsl r0, r0, #4
    // bl _s32_div_f
    // ldr r1, [sp, #0x18]
    // add r2, r6, #0
    // lsl r1, r1, #4
    // add r2, #0xec
    // add r1, r6, r1
    // ldr r2, [r2]
    // ldr r1, [r1, #0x30]
    // mul r2, r0
    // sub r0, r1, r2
    // str r0, [r5, #0x30]
    // mov r1, #0x2d
    // ldr r0, [r5, #0x30]
    // lsl r1, r1, #4
    // bl _s32_div_f
    // ldr r0, [sp, #0x30]
    // str r1, [r5, #0x30]
    // ldr r0, [r0]
    // add r1, r0, #1
    // ldr r0, [sp, #0x30]
    // str r1, [r0]
    // ldr r0, [r5, #0x2c]
    // add r0, r0, #1
    // str r0, [r5, #0x2c]
    // b _02087620
    // ldr r0, [r5, #0x30]
    // mov r1, #0x2d
    // add r0, r0, #4
    // lsl r1, r1, #4
    // str r0, [r5, #0x30]
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // str r1, [r5, #0x30]
    // bl GF_SinDeg
    // mov r1, #0x28
    // ldrsh r1, [r6, r1]
    // lsl r1, r1, #0xc
    // str r1, [sp, #0x34]
    // add r1, r6, #0
    // add r1, #0xfc
    // ldr r1, [r1]
    // mul r0, r1
    // str r0, [sp, #0x38]
    // ldr r0, [r5, #0x30]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // mov r1, #0x2a
    // ldrsh r1, [r6, r1]
    // ldr r2, [sp, #0x34]
    // lsl r3, r1, #0xc
    // mov r1, #1
    // lsl r1, r1, #8
    // ldr r1, [r6, r1]
    // mul r0, r1
    // ldr r1, [sp, #0x38]
    // mov ip, r0
    // add r1, r2, r1
    // mov r2, ip
    // add r2, r3, r2
    // ldr r0, [r5, #0x24]
    // ldr r3, [r6, #0x20]
    // bl ManagedSprite_SetPositionFxXYWithSubscreenOffset
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [r6, #0x10]
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, r0
    // bge _02087632
    // b _02087400
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02087638: .word 0x45800000
    // TODO: decompile
}



void sub_0208763C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r1, #0
    // ldr r1, [r0, #4]
    // ldr r5, [r0, #8]
    // str r1, [sp, #0x18]
    // ldr r1, _020876A4 ; =0x000056CF
    // ldr r7, [r0, #0xc]
    // ldr r4, [r0]
    // add r0, r5, #0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r1, _020876A8 ; =0x000056D0
    // add r0, r5, #0
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _020876AC ; =_02102814
    // lsl r1, r6, #2
    // ldr r6, [r0, r1]
    // str r4, [sp]
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _020876A4 ; =0x000056CF
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // mov r1, #2
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // str r4, [sp]
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _020876A8 ; =0x000056D0
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // mov r1, #3
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _020876A4: .word 0x000056CF
    // _020876A8: .word 0x000056D0
    // _020876AC: .word _02102814
    // TODO: decompile
}



void sub_020876B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r2, r1, #0
    // ldr r3, [r0, #0x18]
    // ldr r1, _020877AC ; =0x000056CE
    // ldr r7, [r0, #4]
    // add r5, r3, r1
    // ldr r6, [r0, #8]
    // ldr r1, [r0, #0xc]
    // ldr r4, [r0]
    // cmp r3, #1
    // ldr r0, [r0, #0x1c]
    // bne _02087726
    // cmp r0, #0
    // str r4, [sp]
    // bne _020876F2
    // ldr r0, _020877B0 ; =_02102814
    // lsl r2, r2, #2
    // ldr r0, [r0, r2]
    // add r2, r7, #0
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r1, #0
    // mov r1, #2
    // add r3, r6, #0
    // str r5, [sp, #0x14]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // b _0208770E
    // mov r0, #0x60
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r1, #0
    // mov r1, #2
    // add r2, r7, #0
    // add r3, r6, #0
    // str r5, [sp, #0x14]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // mov r3, #0x5f
    // str r5, [sp, #8]
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // b _02087784
    // cmp r0, #0
    // str r4, [sp]
    // bne _02087750
    // ldr r0, _020877B0 ; =_02102814
    // lsl r2, r2, #2
    // ldr r0, [r0, r2]
    // add r2, r7, #0
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // add r0, r1, #0
    // mov r1, #3
    // add r3, r6, #0
    // str r5, [sp, #0x14]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // b _0208776E
    // mov r0, #0x60
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // add r0, r1, #0
    // mov r1, #3
    // add r2, r7, #0
    // add r3, r6, #0
    // str r5, [sp, #0x14]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // mov r3, #0x5f
    // str r5, [sp, #8]
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // mov r3, #0x5d
    // str r5, [sp, #4]
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // mov r3, #0x5e
    // str r5, [sp, #4]
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _020877AC: .word 0x000056CE
    // _020877B0: .word _02102814
    // TODO: decompile
}



void sub_020877B4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // ldr r7, [r5, #8]
    // str r0, [sp]
    // mov r1, #0x80
    // add r0, sp, #4
    // strh r1, [r0]
    // mov r1, #0x60
    // strh r1, [r0, #2]
    // mov r6, #0
    // strh r6, [r0, #4]
    // strh r6, [r0, #6]
    // str r6, [sp, #0xc]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #0x14]
    // str r6, [sp, #0x30]
    // str r6, [sp, #0x34]
    // str r6, [sp, #0x10]
    // ldr r1, [r5, #0x18]
    // ldr r0, _0208782C ; =0x000056CE
    // add r1, r1, r0
    // str r1, [sp, #0x18]
    // ldr r1, [r5, #0x18]
    // add r1, r1, r0
    // str r1, [sp, #0x1c]
    // ldr r1, [r5, #0x18]
    // add r1, r1, r0
    // str r1, [sp, #0x20]
    // ldr r1, [r5, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // sub r0, r6, #1
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // ble _02087828
    // add r4, r5, #0
    // ldr r0, [sp]
    // add r1, r7, #0
    // add r2, sp, #4
    // bl SpriteSystem_NewSprite
    // str r0, [r4, #0x24]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r4, #0x24]
    // mov r1, #0x80
    // mov r2, #0x60
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, r0
    // blt _02087804
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _0208782C: .word 0x000056CE
    // TODO: decompile
}



void sub_02087830(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // mov r6, #0
    // cmp r0, #0
    // ble _02087872
    // ldr r7, _02087874 ; =0x000056CE
    // add r4, r5, #0
    // ldr r2, [r5, #0x18]
    // ldr r1, _02087874 ; =0x000056CE
    // ldr r0, [r5, #8]
    // add r1, r2, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r2, [r5, #0x18]
    // ldr r1, _02087874 ; =0x000056CE
    // ldr r0, [r5, #8]
    // add r1, r2, r1
    // bl SpriteManager_UnloadCellObjById
    // ldr r1, [r5, #0x18]
    // ldr r0, [r5, #8]
    // add r1, r1, r7
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, [r4, #0x24]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, r0
    // blt _02087840
    // pop {r3, r4, r5, r6, r7, pc}
    // _02087874: .word 0x000056CE
    // TODO: decompile
}



void sub_02087878(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0x14]
    // mov r0, #0xbf
    // bl NARC_New
    // str r0, [r5]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_020876B0
    // add r0, r5, #0
    // bl sub_020877B4
    // mov r2, #1
    // ldr r0, _020878AC ; =sub_020873D4
    // add r1, r5, #0
    // lsl r2, r2, #0xc
    // bl SysTask_CreateOnVBlankQueue
    // add r5, #0xf4
    // str r0, [r5]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _020878AC: .word sub_020873D4
    // TODO: decompile
}



void sub_020878B0(void) {
}



void sub_020878B8(void) {
    *((u16*)(r0 + 0x28)) = r1;
    *((u16*)(r0 + 0x2a)) = r2;
    // add r1, #0xe8
    // str r2, [r1]
    // add r1, #0xec
    // str r3, [r1]
    *((u32*)(r0 + 0x2c)) = 0;
    // add r4, #0x10
}



void sub_020878EC(void) {
    sub_02087930();
    *((u16*)(r5 + 0x28)) = r4;
    *((u16*)(r5 + 0x2a)) = r6;
    // add r0, #0xe8
    // str r1, [r0]
    // add r0, #0xec
    // str r2, [r0]
    *((u32*)(r5 + 0x2c)) = 0;
    // add r3, #0x10
}



void sub_02087930(void) {
    // ldrsh r3, [r0, r3]
    // ldrsh r0, [r0, r1]
}



void sub_02087948(void) {
    // str r2, [sp]
    // add r0, #0xe8
    // str r1, [r0]
    // add r0, #0xec
    // str r7, [r0]
    *((u16*)(r0 + 0x28)) = r1;
    // ldr r0, [sp]
    *((u16*)(r0 + 0x2a)) = *((u32*)(r0 + 0x10));
    // ldr r2, [sp]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x24)), r1, *((u32*)(r0 + 0x20)));
    // add r4, #0x10
}



void sub_02087988(void) {
    // add r1, #0xe4
    sub_020878B0(0);
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r4]
    // add r0, #0xf4
    SysTask_Destroy(*((u32*)(*((u32*)r4) + 1)));
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r4]
    sub_02087830((*((u32*)r4) + 1));
    NARC_Delete(*((u32*)r4));
    Heap_Free(r4);
}



void sub_020879E0(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x24)), r1);
    // add r5, #0x10
}



void sub_02087A08(void) {
    // add r3, #0xfc
    // str r1, [r3]
    // str r2, [r0, r1]
    // add r1, #0xfc
    // str r2, [r1]
    // add r1, #0xf1
    // str r2, [r0, r1]
}



void sub_02087A30(void) {
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x24)), 1);
    // add r5, #0x10
}



void sub_02087A54(void) {
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x24)), 0);
    // add r5, #0x10
}


