/* Decompiled from asm/unk_02085604.s */
#include "global.h"

void sub_02085604(void) {
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
    // add r3, r0, r1
    // sub r1, #0x2a
    // add r1, #8
    // str r3, [r0, r1]
    // add r3, r0, r1
    // sub r1, #0x28
    // add r2, #0xc
    // str r1, [r0, r2]
    // add r3, r0, r1
    // sub r1, #0x2e
    // add r1, #0xc
    // str r3, [r0, r1]
    // add r3, r0, r1
    // sub r1, #0x2c
    // add r2, #0x10
    // str r1, [r0, r2]
}




void sub_02085688(void) {
    // str r1, [r4, r0]
    // sub r7, #0xca
    // add r0, #0x48
    // strh r5, [r6, r7]
    // add r2, r5, r2
    // strh r5, [r6, r1]
    sub_02085604(r0, (*((u32*)(r0 + (0xf7 << 2))) + 1), (*((u32*)(r0 + (0xdd << 2))) << 0x10), (0 + 1));
    // sub r7, #0x30
    // add r2, r2, r3
    // str r2, [r4, r0]
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    // sub r1, #0x30
    // add r0, r2, r0
    // add r0, r2, r0
    // asr r2, r0, #1
    // sub r0, r0, r2
    // strh r0, [r4, r1]
    // add r0, #0x30
    // sub r0, r0, r2
    // add r0, r0, r2
    // add r1, r1, r0
    // add r0, r1, r0
    // asr r1, r0, #1
    // sub r0, r0, r1
    // strh r0, [r5, r7]
    // ldrsh r1, [r4, r0]
    // add r1, #0xc
    // strh r1, [r4, r0]
    // add r0, r0, r5
    // str r5, [r2, r7]
    // add r2, #0x1c
    // mov ip, r3
    // str r4, [sp]
    // ldr r5, [sp]
    // mov r5, ip
    // add r7, r4, r5
    // mov r5, ip
    *((u32*)(r4 + 4)) = ((*((u32*)(r4 + (0xfb << 2))) << 2) + 1);
    // add r1, #0x1c
    // add r2, #0x1c
    // ldr r0, [sp]
    // str r0, [sp]
    // mov r0, ip
    // mov ip, r0
    // sub r2, #0x34
    // sub r3, #0x14
    // add r6, r7, r6
    // str r6, [r4, r5]
}




void sub_02085808(void) {
}




void sub_02085820(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // sub r0, #0xec
    // sub r1, #0x48
    // add r1, r5, r1
    // add r1, sp, #0x14
    // str r0, [sp]
    // ldr r1, [sp, #0x14]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}




void sub_020858DC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}




void sub_02085938(void) {
    // str r1, [r4, r0]
}




void sub_02085974(void) {
    sub_02086AB4(0, 0);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + 0xc)), 0x14, 0x16);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) - 1);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(r7 + (*((u8*)(r4 + 0x19)) << 2))), *((u32*)(r7 + (*((u8*)(r4 + 0x19)) << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(_02110578 + (*((u8*)(r4 + 0x19)) << 2))), *((u32*)(_02110578 + (*((u8*)(r4 + 0x19)) << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    // add r4, #0x1c
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + (0x73 << 2))), (0x75 << 2), 0x000001D6);
    // strb r1, [r4, r0]
    // add r4, #0x1c
    // add r4, r5, r0
    sub_02086D98(*((u32*)r4), *((u32*)(r4 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), r0);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0xc)));
    // add r4, #0x1c
    // add r4, r5, r0
    sub_02086D98(*((u32*)r4), *((u32*)(r4 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), r0);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0xc)));
    // add r4, #0x1c
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, #0x14
    // add r1, #0x18
    // add r4, r5, r0
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(_0211055C + (*((u8*)(r4 + 0x19)) << 2))), *((u32*)(_0211055C + (*((u8*)(r4 + 0x19)) << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    // add r4, #0x1c
    // add r4, r5, r0
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), *((u32*)(_02110578 + (*((u8*)(r4 + 0x19)) << 2))), *((u32*)(_02110578 + (*((u8*)(r4 + 0x19)) << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    // add r4, #0x1c
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    sub_02086F44(((0xb3 << 2) - 4), (0xb3 << 2), (*((u32*)(r5 + ((0xb3 << 2) - 4))) + 1));
    sub_02086398(r5, *((u32*)(r5 + ((0xed << 2) - 4))));
    sub_02086AE4(r5, r0);
    sub_020863C0(r5, *((u32*)(r5 + (r1 - 4))));
    sub_02086AE4(r5, r0);
    sub_02086AB4(r5, 0, 1);
    sub_02086384(r5);
    sub_02085808(r5, 1);
}




void sub_02085BEC(void) {
    // blx r1
    sub_02086BB4(r0, *((u32*)(_0210271C + (*((u32*)(r0 + (0xb << 6))) << 2))), (*((u32*)(r0 + (0xb << 6))) << 2));
    sub_02086C8C(r5);
    SpriteSystem_DrawSprites(*((u32*)(r5 + (0xbd << 2))));
}




void sub_02085C20(void) {
    // add r3, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldrsh r0, [r4, r0]
    // ldrsh r7, [r4, r3]
    // mov ip, r0
    // add r0, sp, #4
    // add r0, r0, r1
    // add r0, #0x7c
    // sub r0, #0x38
    System_GetTouchHeld(*((u32*)(gSystem + 0x48)), (0x14 * ((0x91 << 2) + 2)), (0xeb << 2), (0x91 << 2));
    // str r1, [r4, r0]
    sub_02086B2C(r4, r5);
    // sub r5, #0xa
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // tst r1, r0
    // mov r0, ip
    // ldrsh r0, [r4, r0]
    // strh r1, [r4, r0]
    // tst r1, r0
    // ldrsh r0, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    _s32_div_f((r3 + 2), 3);
    // strh r1, [r4, r0]
    // tst r1, r0
    // strh r0, [r4, r3]
    // strh r6, [r4, r3]
    // strh r0, [r4, r3]
    // ldrsh r0, [r4, r3]
    _s32_div_f((r7 + 1), 5);
    // strh r1, [r4, r0]
    // tst r1, r0
    // strh r0, [r4, r3]
    // strh r6, [r4, r3]
    // strh r0, [r4, r3]
    // strh r0, [r4, r3]
    // tst r1, r7
    sub_02085FFC(r4, 1);
    PlaySE(0x000005E5);
    sub_02085F80(r4);
    PlaySE(0x000005E2);
    // sub r2, #0xd8
    // sub r3, #0x30
    // str r0, [sp]
    // str r0, [r4, r7]
    sub_02086AB4(r4, 1, r6);
    sub_02086AB4(r4, 2, 1);
    sub_02086B6C(r4, r5, 2);
    // add r1, r4, r7
    sub_02086D98(*((u32*)(r4 + r7)), *((u32*)(r1 + 8)));
    // add r0, r4, r7
    ManagedSprite_SetAnim(*((u32*)(r0 + 0xc)), r0);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x96 << 2))), 3);
    // add r0, r4, r7
    // ldr r0, [sp]
    // add r1, #0xdc
    // str r6, [r4, r1]
    // add r1, #0xe0
    // str r2, [r4, r1]
    // sub r1, #0x8c
    // strh r2, [r4, r1]
    // sub r0, #0x8a
    // strh r1, [r4, r0]
    // add r1, r4, r1
    // add r2, #0xdc
    // str r3, [r4, r2]
    // add r0, #0xe0
    // str r1, [r4, r0]
    // add r1, #0xdc
    // str r3, [r4, r1]
    // add r0, #0xe0
    // str r2, [r4, r0]
    PlaySE(0x000005E5, (0x2d << 4), (0x2d << 4), 2);
    // tst r5, r1
    sub_02085FFC(r4, 2);
    PlaySE(0x000005E5);
    // tst r5, r0
    // sub r0, #0x30
    // add r0, #0x44
    // sub r2, #0xdc
    // sub r0, #0x30
    // sub r3, #0x30
    // str r0, [r4, r3]
    // add r2, r4, r1
    // str r2, [r4, r1]
    // str r0, [r4, r1]
    // str r3, [r4, r1]
    // add r1, #8
    // str r2, [r4, r0]
    // str r3, [r4, r1]
    PlaySE((0x5e << 4), (0xeb << 2), *((u32*)(2 + 4)), 1);
    // add r1, #0xfe
    // tst r0, r1
    // sub r1, #0xdc
    // sub r0, #0x30
    // add r2, #0x44
    // sub r0, #0x30
    // sub r3, #0x30
    // str r0, [r4, r3]
    // add r2, r4, r1
    // str r2, [r4, r1]
    // str r0, [r4, r1]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    PlaySE((0x5e << 4), *((u32*)(2 + 4)), 2);
    PlaySE((0x5e << 4));
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // add r2, sp, #4
    // add r0, r2, r0
    sub_02086B2C(r4, *((u32*)(((0x00000246 - 2) << 2) + (0x14 * r2))));
    // sub r5, #0xa
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}




void sub_02085F80(void) {
    // str r0, [r6, r1]
    // add r0, #0x18
    // add r1, #0x4c
    // strb r4, [r6, r0]
    // str r0, [r5]
    // str r0, [sp]
    // add r5, #0x1c
}




void sub_02085FFC(void) {
    // str r1, [r5, r2]
    // add r3, #0x18
    // strb r0, [r5, r3]
    // add r3, #0x6c
    // add r0, #0x68
    // sub r0, #0x54
    // str r3, [r5, r0]
    // sub r2, #0x54
    // add r0, r5, r0
    // str r1, [r5, r2]
    // str r3, [r5, r0]
    // add r2, #8
    // str r1, [r5, r2]
    // sub r2, #0x54
    // str r0, [r5, r4]
    // add r1, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // add r1, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // str r2, [r5, r1]
    // str r3, [r5, r0]
    // add r1, #8
    // str r2, [r5, r1]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}




void sub_020860B8(void) {
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    // ldr r2, [sp, #4]
    *((u32*)((0xc1 << 2) + 0x10)) = r1;
    // add r2, #0x1c
    // add r3, sp, #8
    // strh r1, [r3]
    // add r2, sp, #8
    // add r1, r2, r1
    // ldr r2, [sp, #4]
    // mvn r7, r7
    // add r2, r2, r3
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // sub r6, r5, r6
    // strb r6, [r2, r5]
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // sub r6, r5, r6
    // strb r6, [r2, r5]
    // mvn r5, r5
    // mvn r6, r6
    // ldrsh r5, [r1, r5]
    // ldrsh r6, [r1, r6]
    // add r6, r5, r6
    // strb r6, [r2, r5]
    // ldrsh r6, [r1, r7]
    // ldrsh r5, [r1, r3]
    // add r1, #8
    // add r5, r6, r5
    // strb r5, [r2, r4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // ldr r3, [sp, #4]
    TouchHitboxController_Create(0x6c, 0x1c, sub_02086180, (0x7f + 4));
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
}




void sub_02086180(void) {
    // add r0, #0xb4
    // add r2, #0xb4
    // str r0, [r4, r2]
    // add r3, r4, r0
    // sub r0, #0x44
    // str r2, [r4, r0]
    // sub r1, #0x40
    // str r5, [r4, r1]
    // sub r0, #0x44
    // str r2, [r4, r0]
    // sub r1, #0x40
    // str r0, [r4, r1]
    PlaySE(0x000005E5, (0x3f << 4), 1);
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    PlaySE(0x000005E5, 2);
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
    PlaySE(0x000005E2, 2);
    // sub r0, #0x10
    _u32_div_f(r5, 5);
    // strh r1, [r4, r0]
    // sub r0, #0x10
    _u32_div_f(r5, 5);
    // strh r0, [r4, r1]
    PlaySE(0x000005E5, 0x00000246);
    // sub r0, #0xc0
    // sub r0, #0xf
    // str r0, [r4, r6]
    // add r1, r4, r6
    sub_02086D98(*((u32*)(r4 + (*((u32*)(r4 + (0xb5 << 2))) * 0x1c))), *((u32*)(*((u32*)(r4 + (0xb5 << 2))) + 8)));
    // add r0, r4, r6
    ManagedSprite_SetAnim(*((u32*)(r0 + 0xc)), r0);
    sub_02086AB4(r4, 1, 1);
    // sub r5, #0x10
    sub_02086B2C(r4, r5);
    sub_02086AB4(r4, 1, 0);
    sub_02086AB4(r4, 2, 1);
    sub_02086B6C(r4, r5, 2);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x96 << 2))), 3);
    // add r0, r4, r6
    // add r1, #0xdc
    // str r2, [r4, r1]
    // add r1, #0xe0
    // str r2, [r4, r1]
    // add r0, #0xe4
    // str r2, [r4, r0]
    // add r3, r4, r3
    // add r1, #0xdc
    // str r2, [r4, r1]
    // add r1, #0xe0
    // str r3, [r4, r1]
    // add r0, #0xe4
    // str r1, [r4, r0]
    // add r2, #0xdc
    // str r3, [r4, r2]
    // add r0, #0xe0
    // str r1, [r4, r0]
    sub_02085FFC(r4, 0, (0x2d << 4), 2);
    sub_02085F80(r4);
}




void sub_02086328(void) {
    // str r1, [r4, r0]
}




void sub_02086384(void) {
}




void sub_02086398(void) {
    // add r0, #0x1c
}




void sub_020863C0(void) {
    // add r0, #0x1c
}



