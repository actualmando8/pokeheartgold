/* Decompiled from asm/unk_02085604.s */
#include "global.h"

void sub_02085604(void) {
    // ldr r4, [r0, r2]
    // str r4, [r0, r3]
    // str r1, [r0, r2]
    // add r1, #8
    // str r3, [r0, r1]
    // add r1, #0xc
    // str r3, [r0, r1]
    // add r1, #0x10
    // str r3, [r0, r1]
    // add r1, #0x14
    // str r3, [r0, r1]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x2a
    // ldrh r3, [r3, r1]
    // add r1, #8
    // str r3, [r0, r1]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x28
    // ldrh r1, [r3, r1]
    // add r2, #0xc
    // str r1, [r0, r2]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x2e
    // ldrh r3, [r3, r1]
    // add r1, #0xc
    // str r3, [r0, r1]
    // ldr r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x2c
    // ldrh r1, [r3, r1]
    // add r2, #0x10
    // str r1, [r0, r2]
}



void sub_02085688(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // mov r0, #0xdd
    // lsl r0, r0, #2
    // mov r1, #1
    // str r1, [r4, r0]
    // add r7, r0, #0
    // mov r5, #0
    // mov r1, #0xab
    // add r3, r5, #0
    // add r6, r4, #0
    // sub r7, #0xca
    // add r0, #0x48
    // lsl r1, r1, #2
    // strh r5, [r6, r7]
    // ldr r2, [r6, r0]
    // add r3, r3, #1
    // add r2, r5, r2
    // lsl r2, r2, #0x10
    // lsr r5, r2, #0x10
    // strh r5, [r6, r1]
    // add r6, r6, #4
    // cmp r3, #5
    // blt _020856A4
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // add r1, r1, #1
    // bl sub_02085604
    // mov r1, #0xfb
    // lsl r1, r1, #2
    // mov r0, #0x2d
    // add r7, r1, #0
    // mov r6, #0
    // add r5, r4, #0
    // lsl r0, r0, #4
    // sub r7, #0x30
    // ldr r3, [r5, r7]
    // cmp r3, #0
    // beq _020856F0
    // ldr r2, [r4, r0]
    // add r6, r6, #1
    // add r2, r2, r3
    // str r2, [r4, r0]
    // ldr r2, [r4, r1]
    // add r5, r5, #4
    // add r2, r2, #1
    // str r2, [r4, r1]
    // cmp r6, #4
    // blt _020856D6
    // mov r0, #0xfb
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // ldr r7, _02085804 ; =0x000002A2
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // mov r1, #0x2d
    // lsl r1, r1, #4
    // ldr r2, [r4, r1]
    // ldr r0, [r4, r0]
    // sub r1, #0x30
    // add r0, r2, r0
    // lsl r2, r0, #3
    // lsr r0, r2, #0x1f
    // add r0, r2, r0
    // asr r2, r0, #1
    // mov r0, #0x70
    // sub r0, r0, r2
    // strh r0, [r4, r1]
    // mov r6, #0
    // add r3, r4, #0
    // add r5, r4, #0
    // mov r0, #0xef
    // lsl r0, r0, #2
    // ldr r2, [r3, r0]
    // add r0, #0x30
    // ldr r0, [r4, r0]
    // add r6, r6, #1
    // lsl r1, r0, #3
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r3, r3, #4
    // sub r0, r0, r2
    // lsl r0, r0, #3
    // lsl r2, r2, #5
    // add r0, r0, r2
    // add r1, r1, r0
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r1, r0, #1
    // mov r0, #0x70
    // sub r0, r0, r1
    // strh r0, [r5, r7]
    // add r5, r5, #2
    // cmp r6, #4
    // blt _0208571C
    // ldr r0, _02085804 ; =0x000002A2
    // ldrsh r1, [r4, r0]
    // add r1, #0xc
    // strh r1, [r4, r0]
    // mov r1, #0xfb
    // lsl r1, r1, #2
    // mov r0, #0
    // ldr r1, [r4, r1]
    // add r3, r0, #0
    // cmp r1, #0
    // ble _02085788
    // mov r7, #7
    // mov r6, #0xfb
    // add r1, r4, #0
    // add r2, r4, #0
    // lsl r7, r7, #6
    // lsl r6, r6, #2
    // mov r5, #0xef
    // lsl r5, r5, #2
    // ldr r5, [r1, r5]
    // add r3, r3, #1
    // add r0, r0, r5
    // sub r5, r0, #1
    // str r5, [r2, r7]
    // ldr r5, [r4, r6]
    // add r1, r1, #4
    // add r2, #0x1c
    // cmp r3, r5
    // blt _02085770
    // mov r3, #0
    // mov ip, r3
    // str r4, [sp]
    // add r2, r4, #0
    // mov r1, #0xef
    // ldr r5, [sp]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // mov r0, #0
    // cmp r1, #0
    // ble _020857BE
    // mov r5, ip
    // lsl r5, r5, #2
    // add r7, r4, r5
    // mov r5, ip
    // add r1, r2, #0
    // add r6, r5, #1
    // mov r5, #0xef
    // str r6, [r1, #4]
    // lsl r5, r5, #2
    // ldr r5, [r7, r5]
    // add r0, r0, #1
    // add r1, #0x1c
    // add r2, #0x1c
    // add r3, r3, #1
    // cmp r0, r5
    // blt _020857AA
    // ldr r0, [sp]
    // add r0, r0, #4
    // str r0, [sp]
    // mov r0, ip
    // add r0, r0, #1
    // mov ip, r0
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r3, r0
    // blt _02085790
    // mov r0, #0xf7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // cmp r0, #0
    // ble _02085800
    // mov r5, #0x3f
    // lsl r5, r5, #4
    // add r2, r5, #0
    // add r3, r5, #0
    // add r0, r4, #0
    // sub r2, #0x34
    // sub r3, #0x14
    // ldr r6, [r0, r2]
    // ldr r7, [r4, r5]
    // add r1, r1, #1
    // add r6, r7, r6
    // str r6, [r4, r5]
    // ldr r6, [r4, r3]
    // add r0, r0, #4
    // cmp r1, r6
    // blt _020857EE
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02085804: .word 0x000002A2
    // TODO: decompile
}



void sub_02085808(void) {
}



void sub_02085820(void) {
    sub_02086490();
    sub_02086DA4(r5);
    sub_02086758(r5);
    sub_02086DE4(r5, 0);
    sub_020868A0(r5);
    sub_020869BC(r5);
    sub_02086F44(r5);
    sub_02086FCC(r5);
    sub_02087064(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // str r0, [sp, #0x10]
    // sub r0, #0xec
    // sub r1, #0x48
    // ldr r0, [r5, r0]
    // add r1, r5, r1
    sub_020871C4((0xf9 << 2), (0xf9 << 2), 4, 2);
    // ldr r0, [r5, r0]
    sub_0203A4AC(0x6c);
    // add r1, sp, #0x14
    NNS_G2dGetUnpackedPaletteData();
    // str r0, [sp]
    // ldr r1, [sp, #0x14]
    // ldr r0, [r5, r0]
    PaletteData_LoadPalette((0xbf << 2), *((u32*)(r1 + 0xc)), 3, 0xe0);
    Heap_Free(r4);
    sub_02085808(r5, 1);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
}



void sub_020858DC(void) {
    // ldr r0, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    IsPaletteFadeFinished((0xb2 << 2), (r1 + 1));
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
}



void sub_02085938(void) {
    // ldr r1, [r4, r1]
    IsPaletteFadeFinished((0xb2 << 2));
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    sub_02086328((0xb2 << 2), (r1 + 1));
    // ldr r0, [r4, r0]
    TouchHitboxController_IsTriggered((3 << 8));
    sub_02085C20(r4);
}



void sub_02085974(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0xb2
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldr r2, [r5, r1]
    // cmp r2, #0
    // beq _0208598A
    // cmp r2, #1
    // bne _02085988
    // b _02085AF0
    // b _02085B84
    // mov r1, #0
    // add r2, r1, #0
    // bl sub_02086AB4
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r6, #0
    // cmp r0, #0
    // ble _02085A1C
    // ldr r7, _02085BE0 ; =_0211055C
    // add r4, r5, #0
    // ldrb r0, [r4, #0x18]
    // cmp r0, #0
    // beq _02085A0E
    // mov r1, #0x14
    // mov r2, #0x16
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_OffsetPositionXY
    // ldrb r0, [r4, #0x18]
    // sub r0, r0, #1
    // strb r0, [r4, #0x18]
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // blt _020859E4
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _020859E4
    // ldrb r0, [r4, #0x19]
    // lsl r1, r0, #2
    // ldr r1, [r7, r1]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // blt _02085A0E
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _02085A0E
    // ldrb r0, [r4, #0x19]
    // ldr r1, _02085BE4 ; =_02110578
    // lsl r2, r0, #2
    // ldr r1, [r1, r2]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _020859A2
    // mov r0, #0xfb
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r6, #0
    // cmp r0, #0
    // ble _02085A64
    // mov r7, #0x76
    // add r4, r5, #0
    // lsl r7, r7, #2
    // ldrb r0, [r4, r7]
    // cmp r0, #0
    // beq _02085A56
    // mov r1, #0x75
    // ldr r2, _02085BE8 ; =0x000001D6
    // mov r0, #0x73
    // lsl r1, r1, #2
    // lsl r0, r0, #2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // bl ManagedSprite_OffsetPositionXY
    // mov r0, #0x76
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // sub r1, r0, #1
    // mov r0, #0x76
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // mov r0, #0xfb
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _02085A2E
    // ldrb r0, [r5, #0x18]
    // cmp r0, #0
    // bne _02085AE4
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _02085AA2
    // mov r0, #0x1c
    // mul r0, r6
    // mov r7, #0x2e
    // add r4, r5, r0
    // lsl r7, r7, #4
    // ldr r0, [r4]
    // ldr r1, [r4, #8]
    // bl sub_02086D98
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, r7]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _02085A82
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _02085ADA
    // mov r0, #0x1c
    // mul r0, r6
    // mov r7, #0xba
    // add r4, r5, r0
    // lsl r7, r7, #2
    // ldr r0, [r4]
    // ldr r1, [r4, #8]
    // bl sub_02086D98
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #0xc]
    // bl ManagedSprite_TickFrame
    // ldr r0, [r5, r7]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _02085ABA
    // mov r0, #0xb2
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // add r1, r1, #1
    // str r1, [r5, r0]
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // add r1, r1, #1
    // str r1, [r5, r0]
    // b _02085BDA
    // add r0, r1, #0
    // add r0, #0x14
    // add r1, #0x18
    // ldr r6, [r5, r0]
    // ldr r0, [r5, r1]
    // cmp r6, r0
    // bge _02085B2C
    // mov r0, #0x1c
    // mul r0, r6
    // ldr r7, _02085BE0 ; =_0211055C
    // add r4, r5, r0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #6
    // beq _02085B1E
    // lsl r1, r0, #2
    // ldr r1, [r7, r1]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // mov r0, #0x2e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _02085B06
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r6, r0
    // bge _02085B68
    // mov r0, #0x1c
    // mul r0, r6
    // ldr r7, _02085BE4 ; =_02110578
    // add r4, r5, r0
    // ldrb r0, [r4, #0x19]
    // cmp r0, #6
    // beq _02085B5A
    // lsl r1, r0, #2
    // ldr r1, [r7, r1]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // bl ManagedSprite_SetAffineScale
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // mov r0, #0xba
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r6, r6, #1
    // add r4, #0x1c
    // cmp r6, r0
    // blt _02085B42
    // mov r1, #0xb3
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r0, r0, #1
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // cmp r0, #6
    // bne _02085BDA
    // sub r0, r1, #4
    // ldr r0, [r5, r0]
    // add r2, r0, #1
    // sub r0, r1, #4
    // str r2, [r5, r0]
    // b _02085BDA
    // bl sub_02086F44
    // mov r1, #0xed
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // bne _02085BA6
    // sub r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl sub_02086398
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02086AE4
    // b _02085BB8
    // sub r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl sub_020863C0
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02086AE4
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02085BCC
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #1
    // bl sub_02086AB4
    // add r0, r5, #0
    // bl sub_02086384
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02085808
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02085BE0: .word _0211055C
    // _02085BE4: .word _02110578
    // _02085BE8: .word 0x000001D6
    // TODO: decompile
}



void sub_02085BEC(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0xb
    // add r5, r0, #0
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // lsl r2, r1, #2
    // ldr r1, _02085C1C ; =_0210271C
    // ldr r1, [r1, r2]
    // blx r1
    // add r4, r0, #0
    // add r0, r5, #0
    // bl sub_02086BB4
    // add r0, r5, #0
    // bl sub_02086C8C
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl SpriteSystem_DrawSprites
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02085C1C: .word _0210271C
    // TODO: decompile
}



void sub_02085C20(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // ldr r5, _02085F00 ; =_0210272C
    // add r4, r0, #0
    // add r3, sp, #4
    // mov r2, #7
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02085C2C
    // ldr r0, [r5]
    // mov r1, #0x14
    // str r0, [r3]
    // mov r3, #0x91
    // lsl r3, r3, #2
    // add r0, r3, #2
    // ldrsh r0, [r4, r0]
    // ldrsh r7, [r4, r3]
    // mov r6, #0
    // mov ip, r0
    // mul r1, r0
    // add r0, sp, #4
    // lsl r2, r7, #2
    // add r0, r0, r1
    // ldr r5, [r2, r0]
    // add r0, r3, #0
    // add r0, #0x7c
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02085C80
    // mov r2, #0xeb
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // cmp r0, #1
    // beq _02085C80
    // add r0, r2, #0
    // sub r0, #0x38
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02085CBC
    // ldr r0, _02085F04 ; =gSystem
    // ldr r0, [r0, #0x48]
    // cmp r0, #0
    // beq _02085C80
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _02085C82
    // b _02085F78
    // mov r0, #0xdd
    // add r1, r6, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02086B2C
    // sub r5, #0xa
    // cmp r5, #1
    // bhi _02085CAA
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #2
    // beq _02085D8C
    // mov r1, #2
    // add sp, #0x40
    // str r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // beq _02085D8C
    // mov r1, #1
    // add sp, #0x40
    // str r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02085F04 ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x4c]
    // tst r1, r0
    // beq _02085CDE
    // mov r0, ip
    // cmp r0, #0
    // ble _02085CD4
    // add r0, r3, #2
    // ldrsh r0, [r4, r0]
    // sub r1, r0, #1
    // b _02085CD6
    // mov r1, #2
    // add r0, r3, #2
    // strh r1, [r4, r0]
    // mov r6, #1
    // b _02085F2A
    // mov r1, #0x80
    // tst r1, r0
    // beq _02085CFE
    // add r0, r3, #2
    // ldrsh r0, [r4, r0]
    // add r1, r0, #1
    // add r0, r3, #2
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // mov r1, #3
    // bl _s32_div_f
    // ldr r0, _02085F08 ; =0x00000246
    // mov r6, #1
    // strh r1, [r4, r0]
    // b _02085F2A
    // mov r1, #0x10
    // tst r1, r0
    // beq _02085D2C
    // cmp r5, #0xa
    // bne _02085D0E
    // mov r0, #3
    // strh r0, [r4, r3]
    // b _02085D28
    // cmp r5, #0xb
    // bne _02085D16
    // strh r6, [r4, r3]
    // b _02085D28
    // add r0, r7, #1
    // strh r0, [r4, r3]
    // ldrsh r0, [r4, r3]
    // mov r1, #5
    // bl _s32_div_f
    // mov r0, #0x91
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // mov r6, #1
    // b _02085F2A
    // mov r1, #0x20
    // tst r1, r0
    // beq _02085D56
    // cmp r5, #0xa
    // bne _02085D3C
    // mov r0, #3
    // strh r0, [r4, r3]
    // b _02085D52
    // cmp r5, #0xb
    // bne _02085D44
    // strh r6, [r4, r3]
    // b _02085D52
    // cmp r7, #0
    // ble _02085D4E
    // sub r0, r7, #1
    // strh r0, [r4, r3]
    // b _02085D52
    // mov r0, #4
    // strh r0, [r4, r3]
    // mov r6, #1
    // b _02085F2A
    // ldr r1, _02085F04 ; =gSystem
    // ldr r7, [r1, #0x48]
    // mov r1, #1
    // tst r1, r7
    // beq _02085E3C
    // cmp r5, #0xa
    // bne _02085D72
    // add r0, r4, #0
    // bl sub_02085FFC
    // ldr r0, _02085F0C ; =0x000005E5
    // bl PlaySE
    // b _02085F2A
    // cmp r5, #0xb
    // bne _02085D84
    // add r0, r4, #0
    // bl sub_02085F80
    // ldr r0, _02085F10 ; =0x000005E2
    // bl PlaySE
    // b _02085F2A
    // sub r2, #0xd8
    // ldr r0, [r4, r2]
    // cmp r0, #0
    // bne _02085D8E
    // b _02085F78
    // sub r3, #0x30
    // ldr r0, [r4, r3]
    // mov r1, #0x1c
    // add r7, r0, #0
    // str r0, [sp]
    // mul r7, r1
    // add r0, r5, #1
    // str r0, [r4, r7]
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r6, #0
    // bl sub_02086AB4
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl sub_02086AB4
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl sub_02086B6C
    // add r1, r4, r7
    // ldr r0, [r4, r7]
    // ldr r1, [r1, #8]
    // bl sub_02086D98
    // add r1, r0, #0
    // add r0, r4, r7
    // ldr r0, [r0, #0xc]
    // bl ManagedSprite_SetAnim
    // mov r0, #0x96
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, r7
    // ldr r3, [r0, #4]
    // ldr r0, [sp]
    // add r2, r0, #1
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r2, r1
    // bne _02085E0E
    // add r1, r0, #0
    // mov r6, #1
    // add r1, #0xdc
    // str r6, [r4, r1]
    // add r1, r0, #0
    // mov r2, #0
    // add r1, #0xe0
    // str r2, [r4, r1]
    // add r1, r0, #0
    // mov r2, #3
    // sub r1, #0x8c
    // strh r2, [r4, r1]
    // mov r1, #2
    // sub r0, #0x8a
    // strh r1, [r4, r0]
    // b _02085F2A
    // mov r1, #0x1c
    // mul r1, r2
    // add r1, r4, r1
    // ldr r1, [r1, #4]
    // cmp r3, r1
    // beq _02085E28
    // add r2, r0, #0
    // mov r3, #1
    // add r2, #0xdc
    // str r3, [r4, r2]
    // add r0, #0xe0
    // str r1, [r4, r0]
    // b _02085E34
    // add r1, r0, #0
    // mov r3, #2
    // add r1, #0xdc
    // str r3, [r4, r1]
    // add r0, #0xe0
    // str r2, [r4, r0]
    // ldr r0, _02085F0C ; =0x000005E5
    // bl PlaySE
    // b _02085F2A
    // mov r1, #2
    // add r5, r7, #0
    // tst r5, r1
    // beq _02085E52
    // add r0, r4, #0
    // bl sub_02085FFC
    // ldr r0, _02085F0C ; =0x000005E5
    // bl PlaySE
    // b _02085F2A
    // lsl r5, r1, #8
    // tst r5, r0
    // beq _02085EB6
    // add r0, r3, #0
    // sub r0, #0x30
    // ldr r1, [r4, r0]
    // add r0, r2, #0
    // add r0, #0x44
    // ldr r0, [r4, r0]
    // cmp r1, r0
    // bne _02085E6E
    // sub r2, #0xdc
    // ldr r0, [r4, r2]
    // b _02085E74
    // add r0, r3, #0
    // sub r0, #0x30
    // ldr r0, [r4, r0]
    // sub r0, r0, #1
    // sub r3, #0x30
    // str r0, [r4, r3]
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1c
    // mul r1, r0
    // add r2, r4, r1
    // ldr r1, [r2, #8]
    // cmp r1, #1
    // bne _02085E9A
    // mov r1, #0xeb
    // mov r2, #2
    // lsl r1, r1, #2
    // str r2, [r4, r1]
    // add r1, r1, #4
    // str r0, [r4, r1]
    // b _02085EAC
    // mov r1, #0xeb
    // lsl r1, r1, #2
    // mov r3, #1
    // str r3, [r4, r1]
    // add r0, r1, #4
    // ldr r2, [r2, #4]
    // add r1, #8
    // str r2, [r4, r0]
    // str r3, [r4, r1]
    // mov r0, #0x5e
    // lsl r0, r0, #4
    // bl PlaySE
    // b _02085F2A
    // add r1, #0xfe
    // tst r0, r1
    // beq _02085F2A
    // add r1, r2, #0
    // add r0, r3, #0
    // sub r1, #0xdc
    // sub r0, #0x30
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    // sub r1, r1, #1
    // cmp r0, r1
    // bne _02085ED4
    // add r2, #0x44
    // ldr r0, [r4, r2]
    // b _02085EDC
    // add r0, r3, #0
    // sub r0, #0x30
    // ldr r0, [r4, r0]
    // add r0, r0, #1
    // sub r3, #0x30
    // str r0, [r4, r3]
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x1c
    // mul r1, r0
    // add r2, r4, r1
    // ldr r1, [r2, #8]
    // cmp r1, #1
    // bne _02085F14
    // mov r1, #0xeb
    // mov r2, #2
    // lsl r1, r1, #2
    // str r2, [r4, r1]
    // add r1, r1, #4
    // str r0, [r4, r1]
    // b _02085F22
    // _02085F00: .word _0210272C
    // _02085F04: .word gSystem
    // _02085F08: .word 0x00000246
    // _02085F0C: .word 0x000005E5
    // _02085F10: .word 0x000005E2
    // mov r0, #0xeb
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r1, [r2, #4]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0x5e
    // lsl r0, r0, #4
    // bl PlaySE
    // cmp r6, #1
    // bne _02085F78
    // mov r0, #0x5e
    // lsl r0, r0, #4
    // bl PlaySE
    // ldr r1, _02085F7C ; =0x00000246
    // mov r0, #0x14
    // ldrsh r2, [r4, r1]
    // sub r1, r1, #2
    // ldrsh r1, [r4, r1]
    // mul r0, r2
    // add r2, sp, #4
    // lsl r1, r1, #2
    // add r0, r2, r0
    // ldr r5, [r1, r0]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02086B2C
    // sub r5, #0xa
    // cmp r5, #1
    // bhi _02085F6A
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #2
    // beq _02085F78
    // mov r1, #2
    // add sp, #0x40
    // str r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // beq _02085F78
    // mov r1, #1
    // str r1, [r4, r0]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _02085F7C: .word 0x00000246
    // TODO: decompile
}



void sub_02085F80(void) {
    String_New(0x64, 0x6c);
    // str r0, [r6, r1]
    // add r0, #0x18
    // add r1, #0x4c
    // strb r4, [r6, r0]
    // ldr r0, [r6, r1]
    // str r0, [r5]
    sub_02086D98(1, *((u32*)(r6 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0xc)), r0);
    // str r0, [sp]
    String16_FormatInteger(r7, (*((u32*)r5) - 1), 1, 1);
    // ldr r0, [r6, r0]
    String_Cat((0xf5 << 2), r7);
    // ldr r0, [r6, r0]
    // add r5, #0x1c
    String_Delete(r7);
    sub_02085808(r6, 3);
}



void sub_02085FFC(void) {
    // str r1, [r5, r2]
    // add r3, #0x18
    // strb r0, [r5, r3]
    // add r3, #0x6c
    // ldr r3, [r5, r3]
    // add r0, #0x68
    // ldr r0, [r5, r0]
    // sub r0, #0x54
    // str r3, [r5, r0]
    // sub r2, #0x54
    // ldr r2, [r5, r2]
    // mul r0, r2
    // add r0, r5, r0
    // str r1, [r5, r2]
    // str r3, [r5, r0]
    // add r2, #8
    // str r1, [r5, r2]
    // sub r2, #0x54
    // ldr r6, [r5, r2]
    // mul r4, r1
    // str r0, [r5, r4]
    // add r1, r5, r4
    // ldr r0, [r5, r4]
    sub_02086D98(((0xeb << 2) + 4), *((u32*)(0x1c + 8)), (0xeb << 2), *((u32*)(0x1c + 4)));
    // add r0, r5, r4
    ManagedSprite_SetAnim(*((u32*)(r0 + 0xc)), r0);
    // add r0, r5, r4
    // ldr r0, [r5, r0]
    // mul r4, r0
    // add r1, r5, r4
    // ldr r0, [r5, r4]
    sub_02086D98(0x1c, *((u32*)((r6 - 1) + 8)));
    // add r0, r5, r4
    ManagedSprite_SetAnim(*((u32*)(r0 + 0xc)), r0);
    // add r0, r5, r4
    // str r2, [r5, r1]
    // str r3, [r5, r0]
    // add r1, #8
    // str r2, [r5, r1]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}



void sub_020860B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x68
    // str r0, [sp, #4]
    // mov r2, #0xc1
    // ldr r1, [sp, #4]
    // lsl r2, r2, #2
    // add r1, r1, r2
    // ldr r2, [sp, #4]
    // mov r0, #0
    // add r0, r0, #1
    // str r1, [r2, #0x10]
    // add r1, r1, #4
    // add r2, #0x1c
    // cmp r0, #0x10
    // blt _020860CA
    // ldr r4, _0208616C ; =_02102768
    // add r3, sp, #8
    // mov r2, #0x30
    // ldrh r1, [r4]
    // add r4, r4, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _020860DC
    // cmp r0, #0x1c
    // bge _0208614A
    // add r2, sp, #8
    // lsl r1, r0, #3
    // add r1, r2, r1
    // mov r7, #0x7f
    // ldr r2, [sp, #4]
    // lsl r3, r0, #2
    // mvn r7, r7
    // add r2, r2, r3
    // ldr r4, _02086170 ; =0x00000307
    // add r3, r7, #4
    // mov r5, #0x7d
    // mov r6, #0x79
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // add r0, r0, #1
    // sub r6, r5, r6
    // mov r5, #0xc1
    // lsl r5, r5, #2
    // strb r6, [r2, r5]
    // mov r5, #0x7f
    // mov r6, #0x7b
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // sub r6, r5, r6
    // ldr r5, _02086174 ; =0x00000306
    // strb r6, [r2, r5]
    // mov r5, #0x7d
    // mov r6, #0x79
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // add r6, r5, r6
    // ldr r5, _02086178 ; =0x00000305
    // strb r6, [r2, r5]
    // ldrsh r6, [r1, r7]
    // ldrsh r5, [r1, r3]
    // add r1, #8
    // add r5, r6, r5
    // strb r5, [r2, r4]
    // add r2, r2, #4
    // cmp r0, #0x1c
    // blt _02086100
    // mov r0, #0x6c
    // str r0, [sp]
    // mov r1, #0xc1
    // ldr r0, [sp, #4]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // ldr r2, _0208617C ; =sub_02086180
    // ldr r3, [sp, #4]
    // mov r1, #0x1c
    // bl TouchHitboxController_Create
    // mov r2, #3
    // ldr r1, [sp, #4]
    // lsl r2, r2, #8
    // str r0, [r1, r2]
    // add sp, #0x68
    // pop {r3, r4, r5, r6, r7, pc}
    // _0208616C: .word _02102768
    // _02086170: .word 0x00000307
    // _02086174: .word 0x00000306
    // _02086178: .word 0x00000305
    // _0208617C: .word sub_02086180
    // TODO: decompile
}



void sub_02086180(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r2, #0
    // mov r2, #0xb
    // lsl r2, r2, #6
    // add r5, r0, #0
    // ldr r0, [r4, r2]
    // cmp r0, #1
    // bne _020861B4
    // add r0, r2, #0
    // add r0, #0xb4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // beq _020861A0
    // mov r0, #1
    // add r2, #0xb4
    // str r0, [r4, r2]
    // cmp r1, #0
    // beq _020861A6
    // b _0208631A
    // cmp r5, #0x10
    // bhs _020861E6
    // mov r1, #0x3f
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // cmp r5, r0
    // bhs _020861B6
    // b _0208631A
    // mov r0, #0x1c
    // mul r0, r5
    // add r3, r4, r0
    // ldr r0, [r3, #8]
    // cmp r0, #1
    // bne _020861D0
    // add r0, r1, #0
    // mov r2, #2
    // sub r0, #0x44
    // str r2, [r4, r0]
    // sub r1, #0x40
    // str r5, [r4, r1]
    // b _020861DE
    // add r0, r1, #0
    // mov r2, #1
    // sub r0, #0x44
    // str r2, [r4, r0]
    // ldr r0, [r3, #4]
    // sub r1, #0x40
    // str r0, [r4, r1]
    // ldr r0, _0208631C ; =0x000005E5
    // bl PlaySE
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0x1a
    // bne _02086200
    // mov r0, #0x91
    // mov r1, #0
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // mov r1, #2
    // add r0, r0, #2
    // strh r1, [r4, r0]
    // ldr r0, _0208631C ; =0x000005E5
    // bl PlaySE
    // b _0208623E
    // cmp r5, #0x1b
    // bne _0208621A
    // mov r0, #0x91
    // mov r1, #3
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // mov r1, #2
    // add r0, r0, #2
    // strh r1, [r4, r0]
    // ldr r0, _02086320 ; =0x000005E2
    // bl PlaySE
    // b _0208623E
    // add r0, r5, #0
    // sub r0, #0x10
    // mov r1, #5
    // bl _u32_div_f
    // mov r0, #0x91
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // add r0, r5, #0
    // sub r0, #0x10
    // mov r1, #5
    // bl _u32_div_f
    // ldr r1, _02086324 ; =0x00000246
    // strh r0, [r4, r1]
    // ldr r0, _0208631C ; =0x000005E5
    // bl PlaySE
    // cmp r5, #0x10
    // blo _02086308
    // cmp r5, #0x19
    // bhi _02086308
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0208631A
    // sub r0, #0xc0
    // ldr r7, [r4, r0]
    // mov r0, #0x1c
    // add r6, r7, #0
    // mul r6, r0
    // add r0, r5, #0
    // sub r0, #0xf
    // str r0, [r4, r6]
    // add r1, r4, r6
    // ldr r0, [r4, r6]
    // ldr r1, [r1, #8]
    // bl sub_02086D98
    // add r1, r0, #0
    // add r0, r4, r6
    // ldr r0, [r0, #0xc]
    // bl ManagedSprite_SetAnim
    // mov r1, #1
    // add r0, r4, #0
    // add r2, r1, #0
    // bl sub_02086AB4
    // sub r5, #0x10
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02086B2C
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl sub_02086AB4
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #1
    // bl sub_02086AB4
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl sub_02086B6C
    // mov r0, #0x96
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl ManagedSprite_SetAnim
    // add r0, r4, r6
    // ldr r2, [r0, #4]
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r3, [r4, r0]
    // add r1, r7, #1
    // cmp r1, r3
    // bne _020862D8
    // add r1, r0, #0
    // mov r2, #1
    // add r1, #0xdc
    // str r2, [r4, r1]
    // add r1, r0, #0
    // mov r2, #0
    // add r1, #0xe0
    // str r2, [r4, r1]
    // add r0, #0xe4
    // str r2, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r3, #0x1c
    // mul r3, r1
    // add r3, r4, r3
    // ldr r3, [r3, #4]
    // cmp r2, r3
    // beq _020862FA
    // add r1, r0, #0
    // mov r2, #1
    // add r1, #0xdc
    // str r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xe0
    // str r3, [r4, r1]
    // mov r1, #0
    // add r0, #0xe4
    // str r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, r0, #0
    // mov r3, #2
    // add r2, #0xdc
    // str r3, [r4, r2]
    // add r0, #0xe0
    // str r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0x1a
    // bne _02086314
    // add r0, r4, #0
    // bl sub_02085FFC
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_02085F80
    // pop {r3, r4, r5, r6, r7, pc}
    // _0208631C: .word 0x000005E5
    // _02086320: .word 0x000005E2
    // _02086324: .word 0x00000246
    // TODO: decompile
}



void sub_02086328(void) {
    // ldr r2, [r4, r1]
    // ldr r1, [r4, r1]
    sub_02085604(((0xeb << 2) + 4));
    sub_02086DA4(r4);
    sub_02086DE4(r4, 1);
    sub_02085808(r4, 2);
    // str r1, [r4, r0]
    // ldr r1, [r4, r1]
    sub_02086AE4((0xeb << 2), (0xff + 4));
    sub_02086384(r4);
}



void sub_02086384(void) {
}



void sub_02086398(void) {
    // ldr r4, [r0, r2]
    // add r0, #0x1c
}



void sub_020863C0(void) {
    // ldr r6, [r0, r2]
    // add r0, #0x1c
}


