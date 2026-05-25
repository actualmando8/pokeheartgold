/* Decompiled from asm/unk_0208DE40.s */
#include "global.h"

void sub_0208DE40(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // bl NNS_G3dInit
    // bl G3X_Init
    // bl G3X_InitMtxStack
    // ldr r0, _0208DEC0 ; =0x04000060
    // ldr r1, _0208DEC4 ; =0xFFFFCFFD
    // ldrh r2, [r0]
    // ldr r3, _0208DEC8 ; =0x0000CFFB
    // and r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r4, [r0]
    // add r1, r1, #2
    // sub r3, #0x1c
    // and r4, r2
    // mov r2, #8
    // orr r2, r4
    // strh r2, [r0]
    // ldrh r2, [r0]
    // and r2, r1
    // mov r1, #0x10
    // orr r1, r2
    // strh r1, [r0]
    // ldrh r1, [r0]
    // and r1, r3
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl G3X_SetFog
    // mov r0, #0
    // ldr r2, _0208DECC ; =0x00007FFF
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _0208DED0 ; =0x04000540
    // mov r0, #0
    // str r0, [r1]
    // ldr r0, _0208DED4 ; =0xBFFF0000
    // str r0, [r1, #0x40]
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r1, _0208DED8 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #2
    // orr r0, r2
    // strh r0, [r1]
    // add sp, #4
    // pop {r3, r4, pc}
    // _0208DEC0: .word 0x04000060
    // _0208DEC4: .word 0xFFFFCFFD
    // _0208DEC8: .word 0x0000CFFB
    // _0208DECC: .word 0x00007FFF
    // _0208DED0: .word 0x04000540
    // _0208DED4: .word 0xBFFF0000
    // _0208DED8: .word 0x04000008
    // TODO: decompile
}


void sub_0208DEDC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PokepicManager_DrawAll
    // ldr r0, _0208DEF8 ; =0x04000540
    // mov r1, #1
    // str r1, [r0]
    // pop {r4, pc}
    // nop
    // _0208DEF8: .word 0x04000540
    // TODO: decompile
}


void sub_0208DEFC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Camera_Delete
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_02017088
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02016F2C
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PokepicManager_Delete
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0208DF2C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // ldr r3, _0208DF94 ; =_02104EA4
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x10
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, sp, #8
    // str r0, [r2]
    // mov r0, #0
    // strh r0, [r1]
    // strh r0, [r1, #2]
    // strh r0, [r1, #4]
    // strh r0, [r1, #6]
    // mov r0, #0x13
    // bl Camera_New
    // mov r1, #0xa7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r2, #1
    // str r2, [sp]
    // ldr r0, [r4, r1]
    // lsl r1, r2, #0x10
    // str r0, [sp, #4]
    // ldr r3, _0208DF98 ; =0x000005C1
    // add r0, sp, #0x10
    // add r2, sp, #8
    // bl Camera_Init_FromPosDistanceAndAngle
    // mov r2, #0xa7
    // lsl r2, r2, #2
    // mov r1, #0x19
    // ldr r2, [r4, r2]
    // mov r0, #0
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Camera_ClearFixedTarget
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Camera_SetStaticPtr
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // nop
    // _0208DF94: .word _02104EA4
    // _0208DF98: .word 0x000005C1
    // TODO: decompile
}


void sub_0208DF9C(void) {
    // push {r4, r5}
    // cmp r2, #0xff
    // bne _0208DFB2
    // ldrh r2, [r0]
    // strh r2, [r1]
    // ldrh r2, [r0, #2]
    // strh r2, [r1, #2]
    // ldrh r0, [r0, #4]
    // strh r0, [r1, #4]
    // pop {r4, r5}
    // bx lr
    // cmp r2, #0
    // bne _0208DFC6
    // ldrh r2, [r0, #6]
    // strh r2, [r1]
    // ldrh r2, [r0, #8]
    // strh r2, [r1, #2]
    // ldrh r0, [r0, #0xa]
    // strh r0, [r1, #4]
    // pop {r4, r5}
    // bx lr
    // mov r3, #6
    // ldrsh r5, [r0, r3]
    // mov r3, #0xc
    // ldrsh r3, [r0, r3]
    // add r4, r3, #0
    // mul r4, r2
    // add r3, r5, r4
    // strh r3, [r1]
    // mov r3, #8
    // ldrsh r5, [r0, r3]
    // mov r3, #0xe
    // ldrsh r3, [r0, r3]
    // add r4, r3, #0
    // mul r4, r2
    // add r3, r5, r4
    // strh r3, [r1, #2]
    // mov r3, #0xa
    // ldrsh r4, [r0, r3]
    // mov r3, #0x10
    // ldrsh r0, [r0, r3]
    // mul r2, r0
    // add r0, r4, r2
    // strh r0, [r1, #4]
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void sub_0208DFF8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r5, r0]
    // add r6, r2, #0
    // sub r7, r1, r0
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // mov r1, #0
    // bl _fgr
    // bls _0208E04C
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _0208E16C ; =0x45800000
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // bl _ffix
    // b _0208E072
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _0208E16C ; =0x45800000
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // strh r0, [r6]
    // mov r0, #2
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r5, r0]
    // sub r7, r1, r0
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // mov r1, #0
    // bl _fgr
    // bls _0208E0C4
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _0208E16C ; =0x45800000
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // bl _ffix
    // b _0208E0EA
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _0208E16C ; =0x45800000
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // strh r0, [r6, #2]
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r5, r0]
    // sub r4, r1, r0
    // add r0, r4, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // mov r1, #0
    // bl _fgr
    // bls _0208E13C
    // add r0, r4, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _0208E16C ; =0x45800000
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // bl _ffix
    // b _0208E162
    // add r0, r4, #0
    // bl _fflt
    // ldr r1, _0208E16C ; =0x45800000
    // bl _fdiv
    // ldr r1, _0208E170 ; =0x40800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _0208E16C ; =0x45800000
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // strh r0, [r6, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0208E16C: .word 0x45800000
    // _0208E170: .word 0x40800000
    // TODO: decompile
}


void sub_0208E174(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // ldr r2, _0208E33C ; =0x00000275
    // add r5, r0, #0
    // mov r1, #0xe6
    // lsl r1, r1, #2
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E340 ; =_02104EB0
    // add r1, r5, r1
    // bl sub_0208DF9C
    // ldr r2, _0208E344 ; =0x00000276
    // ldr r1, _0208E348 ; =0x0000039E
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E34C ; =_02104EC2
    // add r1, r5, r1
    // bl sub_0208DF9C
    // ldr r2, _0208E350 ; =0x00000277
    // ldr r1, _0208E354 ; =0x000003AA
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E358 ; =_02104ED4
    // add r1, r5, r1
    // bl sub_0208DF9C
    // mov r1, #0xe9
    // lsl r1, r1, #2
    // ldr r0, _0208E35C ; =_02104EE6
    // add r1, r5, r1
    // mov r2, #0
    // bl sub_0208DF9C
    // ldr r2, _0208E360 ; =0x00000279
    // mov r1, #0x3b
    // lsl r1, r1, #4
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E364 ; =_02104EF8
    // add r1, r5, r1
    // bl sub_0208DF9C
    // ldr r2, _0208E33C ; =0x00000275
    // ldr r1, _0208E368 ; =0x000003B6
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E36C ; =_02104F0A
    // add r1, r5, r1
    // bl sub_0208DF9C
    // ldr r1, _0208E370 ; =0x000003C2
    // ldr r0, _0208E374 ; =_02104F1C
    // add r1, r5, r1
    // mov r2, #0
    // bl sub_0208DF9C
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // mov r1, #0xef
    // lsl r1, r1, #2
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E378 ; =_02104F2E
    // add r1, r5, r1
    // bl sub_0208DF9C
    // ldr r2, _0208E360 ; =0x00000279
    // mov r1, #0xf2
    // lsl r1, r1, #2
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E37C ; =_02104F40
    // add r1, r5, r1
    // bl sub_0208DF9C
    // ldr r1, _0208E380 ; =0x000003CE
    // ldr r0, _0208E384 ; =_02104F52
    // add r1, r5, r1
    // mov r2, #0
    // bl sub_0208DF9C
    // ldr r2, _0208E350 ; =0x00000277
    // ldr r1, _0208E388 ; =0x000003DA
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E38C ; =_02104F64
    // add r1, r5, r1
    // bl sub_0208DF9C
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // mov r1, #0xf5
    // lsl r1, r1, #2
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E390 ; =_02104F76
    // add r1, r5, r1
    // bl sub_0208DF9C
    // mov r1, #0x3e
    // lsl r1, r1, #4
    // ldr r0, _0208E394 ; =_02104F88
    // add r1, r5, r1
    // mov r2, #0
    // bl sub_0208DF9C
    // ldr r2, _0208E344 ; =0x00000276
    // ldr r1, _0208E398 ; =0x000003E6
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E39C ; =_02104F9A
    // add r1, r5, r1
    // bl sub_0208DF9C
    // ldr r2, _0208E350 ; =0x00000277
    // ldr r1, _0208E3A0 ; =0x000003F2
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E3A4 ; =_02104FAC
    // add r1, r5, r1
    // bl sub_0208DF9C
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // mov r1, #0xfb
    // lsl r1, r1, #2
    // ldrb r2, [r5, r2]
    // ldr r0, _0208E3A8 ; =_02104FBE
    // add r1, r5, r1
    // bl sub_0208DF9C
    // mov r0, #0
    // str r0, [sp, #0x24]
    // mov r0, #0xce
    // lsl r0, r0, #2
    // add r1, r5, r0
    // str r1, [sp, #0x20]
    // add r1, r0, #0
    // add r1, #0x60
    // add r1, r5, r1
    // str r1, [sp, #0x1c]
    // add r1, r0, #0
    // sub r1, #0x60
    // add r1, r5, r1
    // str r1, [sp, #0x18]
    // add r1, r0, #6
    // add r1, r5, r1
    // str r1, [sp, #0x14]
    // add r1, r0, #0
    // add r1, #0x66
    // add r1, r5, r1
    // str r1, [sp, #0x10]
    // add r1, r0, #0
    // sub r1, #0x5a
    // add r1, r5, r1
    // str r1, [sp, #0xc]
    // add r1, r0, #0
    // add r1, #0xc
    // add r1, r5, r1
    // str r1, [sp, #8]
    // add r1, r0, #0
    // add r1, #0x6c
    // add r1, r5, r1
    // str r1, [sp, #4]
    // add r1, r0, #0
    // sub r1, #0x54
    // add r1, r5, r1
    // str r1, [sp]
    // add r1, r0, #0
    // add r1, #0x12
    // add r7, r5, r1
    // add r1, r0, #0
    // add r1, #0x72
    // sub r0, #0x4e
    // add r6, r5, r1
    // add r4, r5, r0
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // bl sub_0208DFF8
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // bl sub_0208DFF8
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // bl sub_0208DFF8
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl sub_0208DFF8
    // ldr r0, [sp, #0x20]
    // add r7, #0x18
    // add r0, #0x18
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r6, #0x18
    // add r0, #0x18
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r4, #0x18
    // add r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0x18
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // cmp r0, #4
    // blo _0208E2C2
    // mov r0, #0xfe
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0208E33C: .word 0x00000275
    // _0208E340: .word _02104EB0
    // _0208E344: .word 0x00000276
    // _0208E348: .word 0x0000039E
    // _0208E34C: .word _02104EC2
    // _0208E350: .word 0x00000277
    // _0208E354: .word 0x000003AA
    // _0208E358: .word _02104ED4
    // _0208E35C: .word _02104EE6
    // _0208E360: .word 0x00000279
    // _0208E364: .word _02104EF8
    // _0208E368: .word 0x000003B6
    // _0208E36C: .word _02104F0A
    // _0208E370: .word 0x000003C2
    // _0208E374: .word _02104F1C
    // _0208E378: .word _02104F2E
    // _0208E37C: .word _02104F40
    // _0208E380: .word 0x000003CE
    // _0208E384: .word _02104F52
    // _0208E388: .word 0x000003DA
    // _0208E38C: .word _02104F64
    // _0208E390: .word _02104F76
    // _0208E394: .word _02104F88
    // _0208E398: .word 0x000003E6
    // _0208E39C: .word _02104F9A
    // _0208E3A0: .word 0x000003F2
    // _0208E3A4: .word _02104FAC
    // _0208E3A8: .word _02104FBE
    // TODO: decompile
}


void sub_0208E3AC(void) {
    // push {r4, lr}
    // sub sp, #0x20
    // add r4, r0, #0
    // mov r0, #0x13
    // bl PokepicManager_Create
    // mov r1, #0x2a
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl sub_0208A520
    // add r1, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // add r0, sp, #0x10
    // bne _0208E3DE
    // mov r2, #2
    // mov r3, #0
    // bl GetBoxmonSpriteCharAndPlttNarcIds
    // b _0208E3E4
    // mov r2, #2
    // bl GetPokemonSpriteCharAndPlttNarcIds
    // mov r2, #0xa9
    // lsl r2, r2, #2
    // ldr r0, _0208E440 ; =0x000007B8
    // add r1, r4, r2
    // sub r2, #0x68
    // ldrh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // mov r3, #1
    // bl NARC_ReadPokepicAnimScript
    // mov r1, #0xb5
    // lsl r1, r1, #2
    // mov r2, #0
    // str r2, [r4, r1]
    // add r0, r1, #0
    // str r2, [sp]
    // sub r0, #0x30
    // str r2, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // sub r1, #0x34
    // ldr r0, [r4, r1]
    // add r1, sp, #0x10
    // mov r2, #0xd0
    // mov r3, #0x68
    // bl PokepicManager_CreatePokepic
    // mov r1, #0x2d
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x23
    // mov r2, #0
    // bl Pokepic_SetAttr
    // add sp, #0x20
    // pop {r4, pc}
    // nop
    // _0208E440: .word 0x000007B8
    // TODO: decompile
}


void sub_0208E444(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // mov r2, #0xa
    // add r4, r0, #0
    // lsl r2, r2, #6
    // ldr r0, [r4, r2]
    // lsl r0, r0, #3
    // lsr r0, r0, #0x1f
    // beq _0208E47C
    // mov r0, #2
    // str r0, [sp]
    // add r0, r2, #0
    // add r0, #0x54
    // ldr r0, [r4, r0]
    // add r1, r2, #0
    // str r0, [sp, #4]
    // mov r3, #0
    // ldr r0, _0208E4B0 ; =0x000007B8
    // str r3, [sp, #8]
    // add r1, #0x4c
    // add r2, #0x50
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // bl sub_0207294C
    // add sp, #0xc
    // pop {r3, r4, pc}
    // add r2, #0x50
    // ldr r0, [r4, r2]
    // mov r1, #1
    // bl Pokepic_StartAnim
    // mov r3, #0xb5
    // lsl r3, r3, #2
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, [r4, r3]
    // add r1, r3, #0
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // sub r2, r3, #4
    // ldr r0, _0208E4B0 ; =0x000007B8
    // sub r3, #0x98
    // sub r1, #8
    // ldrh r3, [r4, r3]
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // bl sub_0207294C
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0208E4B0: .word 0x000007B8
    // TODO: decompile
}


void sub_0208E4B4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl sub_02017088
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PokepicManager_Delete
    // add r0, r4, #0
    // bl sub_0208E3AC
    // add r0, r4, #0
    // bl sub_0208E444
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0208E4DC(void) {
    // push {r3, lr}
    // ldr r1, _0208E538 ; =0x000007BF
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // cmp r1, #0xf
    // bne _0208E4F0
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // beq _0208E512
    // ldr r0, _0208E53C ; =_02104FFC
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0208E534
    // lsl r1, r0, #2
    // ldr r0, _0208E540 ; =_02104FD0
    // ldrb r0, [r0, r1]
    // pop {r3, pc}
    // ldr r0, _0208E53C ; =_02104FFC
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // cmp r0, #4
    // blt _0208E526
    // cmp r0, #9
    // bgt _0208E526
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0208E534
    // lsl r1, r0, #2
    // ldr r0, _0208E540 ; =_02104FD0
    // ldrb r0, [r0, r1]
    // pop {r3, pc}
    // nop
    // _0208E538: .word 0x000007BF
    // _0208E53C: .word _02104FFC
    // _0208E540: .word _02104FD0
    // TODO: decompile
}


void sub_0208E544(void) {
    sub_0208E4DC(0xff, 0);
}

