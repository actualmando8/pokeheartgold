/* Decompiled from asm/overlay_80_02229EE0.s */
#include "global.h"

void ov80_02229EE0(void) {
}



void ov80_02229EF4(void) {
    // add r3, r1, #0
    // add r1, r2, #0
    // add r2, r3, #0
    // ldr r3, _02229F00 ; =ReadWholeNarcMemberByIdPair
    // bx r3
    // nop
    // _02229F00: .word ReadWholeNarcMemberByIdPair
    // TODO: decompile
}



void ov80_02229F04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // mov r1, #0x1b
    // str r3, [sp]
    // mov r0, #1
    // add r2, r1, #0
    // add r3, r6, #0
    // bl NewMsgDataFromNarc
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x30
    // bl MI_CpuFill8
    // lsl r0, r4, #0x10
    // ldr r2, [sp]
    // lsr r0, r0, #0x10
    // add r1, r6, #0
    // bl ov80_02229EE0
    // add r6, r0, #0
    // ldr r0, _02229F68 ; =0x0000FFFF
    // str r4, [r5]
    // strh r0, [r5, #0x18]
    // lsl r0, r4, #1
    // add r0, r4, r0
    // strh r0, [r5, #0x1a]
    // ldrh r0, [r6]
    // add r1, r4, #0
    // strh r0, [r5, #4]
    // add r0, r7, #0
    // bl NewString_ReadMsgData
    // add r5, #8
    // add r4, r0, #0
    // add r1, r5, #0
    // mov r2, #8
    // bl CopyStringToU16Array
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02229F68: .word 0x0000FFFF
    // TODO: decompile
}



void ov80_02229F6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp]
    // add r7, r2, #0
    // mov r1, #0
    // mov r2, #0x38
    // add r4, r0, #0
    // add r6, r3, #0
    // ldr r5, [sp, #0x34]
    // bl MI_CpuFill8
    // ldr r1, [sp]
    // ldr r2, [sp, #0x40]
    // add r0, sp, #8
    // bl ov80_02229EF4
    // ldrh r1, [r4]
    // add r3, sp, #8
    // ldr r0, _0222A118 ; =0xFFFFF800
    // add r2, r1, #0
    // and r2, r0
    // ldrh r1, [r3]
    // lsr r0, r0, #0x15
    // and r0, r1
    // orr r0, r2
    // strh r0, [r4]
    // ldrh r1, [r4]
    // ldr r0, _0222A11C ; =0xFFFF07FF
    // and r0, r1
    // ldrh r1, [r3, #0xe]
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x10
    // orr r0, r1
    // strh r0, [r4]
    // ldr r0, [sp, #0x38]
    // cmp r0, #0
    // beq _02229FCC
    // cmp r5, #4
    // blo _02229FC2
    // mov r0, #3
    // and r0, r5
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, _0222A120 ; =_0223B620
    // lsl r1, r5, #1
    // ldrh r0, [r0, r1]
    // strh r0, [r4, #2]
    // b _02229FD0
    // ldrh r0, [r3, #0xc]
    // strh r0, [r4, #2]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0
    // add r1, sp, #8
    // add r2, r4, #0
    // add r5, r0, #0
    // ldrh r3, [r1, #2]
    // strh r3, [r2, #4]
    // ldrh r3, [r1, #2]
    // cmp r3, #0xda
    // bne _02229FE8
    // str r5, [sp, #4]
    // add r0, r0, #1
    // add r1, r1, #2
    // add r2, r2, #2
    // cmp r0, #4
    // blt _02229FDC
    // str r7, [r4, #0xc]
    // cmp r6, #0
    // bne _0222A026
    // bl LCRandom
    // add r5, r0, #0
    // bl LCRandom
    // lsl r0, r0, #0x10
    // add r6, r5, #0
    // orr r6, r0
    // add r0, r6, #0
    // bl GetNatureFromPersonality
    // add r1, sp, #8
    // ldrb r1, [r1, #0xb]
    // cmp r1, r0
    // bne _02229FF8
    // add r0, r7, #0
    // add r1, r6, #0
    // bl CalcShininessByOtIdAndPersonality
    // cmp r0, #1
    // beq _02229FF8
    // str r6, [r4, #0x10]
    // b _0222A028
    // str r6, [r4, #0x10]
    // add r0, sp, #0x20
    // ldrb r1, [r0, #0x10]
    // ldr r2, [r4, #0x14]
    // mov r0, #0x1f
    // bic r2, r0
    // mov r0, #0x1f
    // and r0, r1
    // orr r2, r0
    // ldr r0, _0222A124 ; =0xFFFFFC1F
    // mov r7, #0
    // and r2, r0
    // lsl r0, r1, #0x1b
    // lsr r1, r0, #0x16
    // orr r2, r1
    // ldr r1, _0222A128 ; =0xFFFF83FF
    // add r5, r7, #0
    // and r2, r1
    // lsr r1, r0, #0x11
    // orr r2, r1
    // ldr r1, _0222A12C ; =0xFFF07FFF
    // and r2, r1
    // lsr r1, r0, #0xc
    // orr r2, r1
    // ldr r1, _0222A130 ; =0xFE0FFFFF
    // and r2, r1
    // lsr r1, r0, #7
    // orr r2, r1
    // ldr r1, _0222A134 ; =0xC1FFFFFF
    // lsr r0, r0, #2
    // and r1, r2
    // orr r0, r1
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // bl MaskOfFlagNo
    // add r1, sp, #8
    // ldrb r1, [r1, #0xa]
    // tst r0, r1
    // beq _0222A078
    // add r7, r7, #1
    // add r5, r5, #1
    // cmp r5, #6
    // blt _0222A068
    // ldr r0, _0222A138 ; =0x000001FE
    // add r1, r7, #0
    // bl _s32_div_f
    // cmp r0, #0xff
    // ble _0222A08C
    // mov r0, #0xff
    // lsl r0, r0, #0x18
    // mov r5, #0
    // lsr r7, r0, #0x18
    // add r0, r5, #0
    // bl MaskOfFlagNo
    // add r1, sp, #8
    // ldrb r1, [r1, #0xa]
    // tst r0, r1
    // beq _0222A0A4
    // add r0, r4, r5
    // strb r7, [r0, #0x18]
    // add r5, r5, #1
    // cmp r5, #6
    // blt _0222A092
    // mov r0, #0
    // strb r0, [r4, #0x1e]
    // ldr r0, _0222A13C ; =gGameLanguage
    // mov r1, #0x19
    // ldrb r0, [r0]
    // strb r0, [r4, #0x1f]
    // ldrh r0, [r4]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // bl GetMonBaseStat
    // cmp r0, #0
    // beq _0222A0E8
    // ldr r2, [r4, #0x10]
    // mov r1, #1
    // tst r1, r2
    // beq _0222A0D4
    // add r1, r4, #0
    // add r1, #0x20
    // strb r0, [r1]
    // b _0222A0FA
    // ldrh r0, [r4]
    // mov r1, #0x18
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // bl GetMonBaseStat
    // add r1, r4, #0
    // add r1, #0x20
    // strb r0, [r1]
    // b _0222A0FA
    // ldrh r0, [r4]
    // mov r1, #0x18
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // bl GetMonBaseStat
    // add r1, r4, #0
    // add r1, #0x20
    // strb r0, [r1]
    // add r1, r4, #0
    // ldr r0, [sp, #4]
    // add r1, #0x21
    // strb r0, [r1]
    // ldrh r0, [r4]
    // add r4, #0x22
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // add r2, r4, #0
    // bl GetSpeciesNameIntoArray
    // add r0, r6, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222A118: .word 0xFFFFF800
    // _0222A11C: .word 0xFFFF07FF
    // _0222A120: .word _0223B620
    // _0222A124: .word 0xFFFFFC1F
    // _0222A128: .word 0xFFFF83FF
    // _0222A12C: .word 0xFFF07FFF
    // _0222A130: .word 0xFE0FFFFF
    // _0222A134: .word 0xC1FFFFFF
    // _0222A138: .word 0x000001FE
    // _0222A13C: .word gGameLanguage
    // TODO: decompile
}



void ov80_0222A140(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r4, r2, #0
    // bl ZeroMonData
    // cmp r4, #0x78
    // bne _0222A158
    // mov r4, #0x32
    // b _0222A15E
    // cmp r4, #0x79
    // bne _0222A15E
    // mov r4, #0x64
    // ldr r1, [r6, #0x14]
    // ldr r0, _0222A308 ; =0x3FFFFFFF
    // add r2, r4, #0
    // and r0, r1
    // str r0, [sp, #0x1c]
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r6, #0x10]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldrh r1, [r6]
    // ldr r3, [sp, #0x1c]
    // add r0, r5, #0
    // lsl r1, r1, #0x15
    // lsr r1, r1, #0x15
    // bl CreateMon
    // add r0, r5, #0
    // mov r1, #0xaf
    // add r2, sp, #0x1c
    // bl SetMonData
    // add r0, r5, #0
    // bl CalcMonLevelAndStats
    // ldrh r0, [r6]
    // add r2, sp, #0x14
    // add r2, #1
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x1b
    // add r0, sp, #0x14
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #0x70
    // bl SetMonData
    // add r0, r5, #0
    // mov r1, #6
    // add r2, r6, #2
    // bl SetMonData
    // mov r4, #0
    // str r6, [sp, #0x10]
    // add r7, r4, #0
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x14
    // ldrh r1, [r0, #4]
    // add r0, sp, #0x14
    // add r2, #2
    // strh r1, [r0, #2]
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x36
    // bl SetMonData
    // ldrb r0, [r6, #0x1e]
    // add r2, sp, #0x14
    // add r2, #1
    // add r1, r0, #0
    // asr r1, r7
    // mov r0, #3
    // and r1, r0
    // add r0, sp, #0x14
    // strb r1, [r0, #1]
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x3e
    // bl SetMonData
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x42
    // mov r2, #0
    // bl GetMonData
    // add r1, sp, #0x14
    // strb r0, [r1]
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x3a
    // add r2, sp, #0x14
    // bl SetMonData
    // ldr r0, [sp, #0x10]
    // add r4, r4, #1
    // add r0, r0, #2
    // add r7, r7, #2
    // str r0, [sp, #0x10]
    // cmp r4, #4
    // blt _0222A1BC
    // ldr r0, [r6, #0xc]
    // mov r1, #7
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // add r2, sp, #0x18
    // bl SetMonData
    // add r2, sp, #0x14
    // ldrb r1, [r6, #0x18]
    // add r0, sp, #0x14
    // add r2, #1
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #0xd
    // bl SetMonData
    // add r2, sp, #0x14
    // ldrb r1, [r6, #0x19]
    // add r0, sp, #0x14
    // add r2, #1
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #0xe
    // bl SetMonData
    // add r2, sp, #0x14
    // ldrb r1, [r6, #0x1a]
    // add r0, sp, #0x14
    // add r2, #1
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #0xf
    // bl SetMonData
    // add r2, sp, #0x14
    // ldrb r1, [r6, #0x1b]
    // add r0, sp, #0x14
    // add r2, #1
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #0x10
    // bl SetMonData
    // add r2, sp, #0x14
    // ldrb r1, [r6, #0x1c]
    // add r0, sp, #0x14
    // add r2, #1
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #0x11
    // bl SetMonData
    // add r2, sp, #0x14
    // ldrb r1, [r6, #0x1d]
    // add r0, sp, #0x14
    // add r2, #1
    // strb r1, [r0, #1]
    // add r0, r5, #0
    // mov r1, #0x12
    // bl SetMonData
    // add r2, r6, #0
    // add r0, r5, #0
    // mov r1, #0xa
    // add r2, #0x20
    // bl SetMonData
    // add r2, r6, #0
    // add r0, r5, #0
    // mov r1, #9
    // add r2, #0x21
    // bl SetMonData
    // ldr r0, [r6, #0x14]
    // lsl r0, r0, #1
    // lsr r0, r0, #0x1f
    // beq _0222A2E4
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xed
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // ldrh r1, [r6]
    // add r4, r0, #0
    // lsl r1, r1, #0x15
    // lsr r1, r1, #0x15
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #0x77
    // add r2, r7, #0
    // bl SetMonData
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl DestroyMsgData
    // b _0222A2F0
    // add r2, r6, #0
    // add r0, r5, #0
    // mov r1, #0x75
    // add r2, #0x22
    // bl SetMonData
    // add r6, #0x1f
    // add r0, r5, #0
    // mov r1, #0xc
    // add r2, r6, #0
    // bl SetMonData
    // add r0, r5, #0
    // bl CalcMonLevelAndStats
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222A308: .word 0x3FFFFFFF
    // TODO: decompile
}



void ov80_0222A30C(void) {
    // ldr r3, _0222A32C ; =ov80_0223B628
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _0222A31E
    // ldr r0, _0222A330 ; =ov80_0223B62A
    // lsl r1, r2, #2
    // ldrh r0, [r0, r1]
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #0x3f
    // blo _0222A310
    // mov r0, #3
    // bx lr
    // nop
    // _0222A32C: .word ov80_0223B628
    // _0222A330: .word ov80_0223B62A
    // TODO: decompile
}



void ov80_0222A334(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl Save_PlayerData_GetProfile
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl Save_PlayerData_GetProfile
    // mov r3, #0
    // add r1, r0, #0
    // str r3, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #4
    // bl sub_0207217C
    // ldr r0, _0222A3B8 ; =0x00000113
    // bl MapHeader_GetMapSec
    // add r3, r0, #0
    // mov r0, #0xb
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl MonSetTrainerMemo
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xc1
    // mov r3, #0xb
    // bl NewMsgDataFromNarc
    // mov r1, #0
    // add r5, r0, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #0x91
    // add r2, r6, #0
    // bl SetMonData
    // add r0, r4, #0
    // mov r1, #7
    // add r2, sp, #8
    // bl SetMonData
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl DestroyMsgData
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222A3B8: .word 0x00000113
    // TODO: decompile
}



void ov80_0222A3BC(void) {
}



void ov80_0222A3D4(void) {
    Sprite_GetAnimationNumber();
    Sprite_SetAnimationFrame(r5, 0);
    Sprite_SetAnimCtrlSeq(r5, r4);
    Sprite_UpdateAnim(r5, (1 << 0xc));
}



void ov80_0222A400(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    Sprite_GetAnimationFrame(0);
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(r5);
}



void ov80_0222A43C(void) {
    CalculateHpBarColor(0x30);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A454: ; jump table
}



void ov80_0222A474(void) {
}



void ov80_0222A480(void) {
    // add r0, r5, r0
    *((u32*)((r3 << 2) + 0x18)) = *((u32*)r1);
    // mul r6, r0
    // add r0, r5, r6
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x3c
    // add r0, r0, r6
    // add r1, #8
    CopyU16StringArray(r0, r1);
    // add r0, r5, r6
    // add r0, #0x4c
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x50
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x52
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x54
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x56
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x58
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x5a
    // strh r1, [r0]
}



void ov80_0222A4EC(void) {
    // str r1, [sp, #0x14]
    LCRandom();
    LCRandom();
    // orr r2, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    ov80_02229F6C(r7, r6);
}



void ov80_0222A52C(void) {
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x34]
    // ldr r5, [sp, #0x30]
    // ldr r0, [sp, #0x10]
    // ldrb r0, [r0, r4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #8]
    // ldrh r1, [r7]
    // ldr r0, [sp, #0xc]
    ov80_0222A4EC(*((u32*)r3), 0, ((0 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x30]
    // str r0, [r5]
    // ldr r0, [sp, #0xc]
    // add r0, #0x38
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
}



void ov80_0222A5A4(void) {
    // cmp r0, #0x64
    // bhs _0222A5AC
    // mov r0, #3
    // bx lr
    // cmp r0, #0x78
    // bhs _0222A5B4
    // mov r0, #6
    // bx lr
    // cmp r0, #0x8c
    // bhs _0222A5BC
    // mov r0, #9
    // bx lr
    // cmp r0, #0xa0
    // bhs _0222A5C4
    // mov r0, #0xc
    // bx lr
    // cmp r0, #0xb4
    // bhs _0222A5CC
    // mov r0, #0xf
    // bx lr
    // cmp r0, #0xc8
    // bhs _0222A5D4
    // mov r0, #0x12
    // bx lr
    // cmp r0, #0xdc
    // bhs _0222A5DC
    // mov r0, #0x15
    // bx lr
    // mov r0, #0x1f
    // bx lr
    // TODO: decompile
}



void ov80_0222A5E0(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x90]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0x90]
    GF_AssertFail();
    // ldr r0, [sp, #0x90]
    // str r4, [sp, #0x14]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x94]
    // str r0, [sp, #0xc]
    LCRandom();
    // ldr r1, [sp]
    _s32_div_f(*((u16*)(r1 + 2)));
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    ov80_02229EF4(*((u16*)(r0 + 4)), (r1 << 1), 0xcd);
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x10]
    // ldrh r2, [r2]
    // add r1, sp, #0x1c
    // ldrh r5, [r1]
    // add r1, #0x10
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r5, [sp, #0x10]
    // ldrh r2, [r2]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldrh r5, [r0]
    // ldrh r5, [r1]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // strh r1, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x90]
    // ldr r0, [sp, #0x14]
}



void ov80_0222A6B8(void) {
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x8c]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp, #0x8c]
    // add r0, sp, #0x44
    ov80_02229F04(0xb, 0xcc);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    ov80_0222A5A4(r5);
    // ldr r1, [sp, #0x8c]
    // strb r0, [r1, r4]
    // ldr r0, [sp, #0x10]
    // add r0, sp, #0x78
    // add r1, sp, #0x2c
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    ov80_0222A5E0(0xb, 0);
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x24
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    ov80_0222A5E0(0xb, 0);
    // ldr r0, [sp, #0x1c]
    // ldr r6, [sp, #0x18]
    // add r4, sp, #0x2c
    // add r5, sp, #0x24
    // ldrh r1, [r6]
    // add r0, sp, #0x34
    ov80_02229EF4(0xcd);
    // add r0, sp, #0x24
    // strh r0, [r4]
    // add r0, sp, #0x24
    // strh r0, [r5]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    Heap_Free(*((u16*)(*((u16*)(r0 + 0x10)) + 0x1c)));
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x44
    ov80_02229F04(0xb, 0xcc);
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // add r1, r1, r2
    // str r6, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0x2c
    // add r2, sp, #0x24
    ov80_0222A5E0(0xb, ((r1 >> 1) << 1), (r1 >> 1));
    // ldr r0, [sp, #0x8c]
    // add r4, r0, r6
    // ldr r0, [sp, #0x14]
    ov80_0222A5A4();
    // strb r0, [r4]
    // ldr r0, [sp, #0x20]
    Heap_Free();
    // ldr r0, [sp, #0x90]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x8c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x88]
    ov80_0222A52C(0xcd, 0);
}



void ov80_0222A7CC(void) {
    sub_0203769C();
    // eor r0, r1
    sub_02034818(1);
    BufferPlayersName(r5, r4, r0);
}



void ov80_0222A7EC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl PlayerProfile_GetTrainerGender
    // add r4, r0, #0
    // add r0, r5, #0
    // bl PlayerProfile_GetVersion
    // cmp r0, #0
    // bgt _0222A804
    // beq _0222A822
    // b _0222A816
    // cmp r0, #0xc
    // bgt _0222A816
    // cmp r0, #7
    // blt _0222A816
    // beq _0222A816
    // cmp r0, #8
    // beq _0222A816
    // cmp r0, #0xc
    // beq _0222A82E
    // cmp r4, #0
    // bne _0222A81E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #0x61
    // pop {r3, r4, r5, pc}
    // cmp r4, #0
    // bne _0222A82A
    // mov r0, #0xee
    // pop {r3, r4, r5, pc}
    // mov r0, #0xef
    // pop {r3, r4, r5, pc}
    // cmp r4, #0
    // bne _0222A836
    // ldr r0, _0222A83C ; =0x00000127
    // pop {r3, r4, r5, pc}
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // pop {r3, r4, r5, pc}
    // _0222A83C: .word 0x00000127
    // TODO: decompile
}



void ov80_0222A840(void) {
}


