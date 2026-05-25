/* Decompiled from asm/overlay_12_battle_controller_opponent.s */
#include "global.h"

void ov12_02258800(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x94
    // str r1, [sp, #0x18]
    // add r7, r0, #0
    // bl BattleSystem_GetBattleContext
    // add r5, r0, #0
    // ldr r0, [sp, #0x18]
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x10
    // tst r0, r1
    // bne _0225882C
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // beq _02258830
    // str r4, [sp, #0x44]
    // b _0225883E
    // ldr r1, [sp, #0x18]
    // add r0, r7, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x44]
    // ldr r2, [sp, #0x18]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl Battler_GetRandomOpposingBattlerId
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // ldr r1, [sp, #0x18]
    // add r0, r7, #0
    // bl BattleSystem_GetPartySize
    // str r0, [sp, #0x40]
    // mov r0, #0
    // str r0, [sp, #0x50]
    // add r0, r5, r4
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x44]
    // add r0, r5, r0
    // str r0, [sp, #0x30]
    // mov r0, #0
    // str r0, [sp, #0x48]
    // mov r0, #6
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x40]
    // ldr r4, [sp, #0x48]
    // cmp r0, #0
    // ble _02258968
    // ldr r1, [sp, #0x18]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xae
    // mov r2, #0
    // str r0, [sp, #0x68]
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // beq _02258950
    // ldr r0, _02258B8C ; =0x000001EE
    // cmp r1, r0
    // beq _02258950
    // ldr r0, [sp, #0x68]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02258950
    // add r0, r4, #0
    // bl MaskOfFlagNo
    // ldr r1, [sp, #0x50]
    // tst r0, r1
    // bne _02258950
    // ldr r1, [sp, #0x34]
    // ldr r0, _02258B90 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // cmp r4, r0
    // beq _02258950
    // ldr r1, [sp, #0x30]
    // ldr r0, _02258B90 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // cmp r4, r0
    // beq _02258950
    // ldr r1, [sp, #0x34]
    // ldr r0, _02258B94 ; =0x000021A4
    // ldrb r0, [r1, r0]
    // cmp r4, r0
    // beq _02258950
    // ldr r1, [sp, #0x30]
    // ldr r0, _02258B94 ; =0x000021A4
    // ldrb r0, [r1, r0]
    // cmp r4, r0
    // beq _02258950
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x60]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x68]
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x68]
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0x60]
    // ldr r2, [sp, #0x5c]
    // bl CalculateTypeEffectiveness
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x54]
    // ldr r1, [sp, #0x60]
    // ldr r2, [sp, #0x5c]
    // bl CalculateTypeEffectiveness
    // ldr r1, [sp, #0x4c]
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #0x48]
    // cmp r1, r0
    // bhs _02258960
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #0x48]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x38]
    // b _02258960
    // add r0, r4, #0
    // bl MaskOfFlagNo
    // ldr r1, [sp, #0x50]
    // orr r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x40]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _02258874
    // ldr r0, [sp, #0x38]
    // cmp r0, #6
    // beq _02258A30
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x38]
    // add r0, r7, #0
    // bl BattleSystem_GetPartyMon
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    // add r0, r4, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x3c]
    // ldr r3, [sp, #0x3c]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov12_02258BB4
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x3c]
    // cmp r0, #0
    // beq _02258A08
    // mov r0, #0
    // str r0, [sp, #0x90]
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x70]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetBattlerAbility
    // str r0, [sp, #0x74]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetBattlerHeldItemEffect
    // str r0, [sp, #0x78]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // str r0, [sp, #0x7c]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, [sp, #0x74]
    // ldr r2, [sp, #0x6c]
    // str r1, [sp]
    // ldr r1, [sp, #0x78]
    // ldr r3, [sp, #0x70]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x7c]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x90
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x3c]
    // add r0, r5, #0
    // bl ov12_02252054
    // ldr r1, [sp, #0x90]
    // mov r0, #2
    // tst r0, r1
    // bne _02258A12
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // cmp r0, #4
    // blt _0225897E
    // ldr r0, [sp, #0x20]
    // cmp r0, #4
    // bne _02258A2A
    // ldr r0, [sp, #0x38]
    // bl MaskOfFlagNo
    // ldr r1, [sp, #0x50]
    // orr r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x50]
    // b _02258A34
    // ldr r0, [sp, #0x38]
    // add sp, #0x94
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0x3f
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x50]
    // cmp r0, #0x3f
    // beq _02258A3C
    // b _02258864
    // mov r0, #0
    // str r0, [sp, #0x28]
    // mov r0, #6
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x40]
    // cmp r0, #0
    // bgt _02258A50
    // b _02258B84
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x24]
    // add r0, r7, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xae
    // mov r2, #0
    // str r0, [sp, #0x1c]
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // beq _02258A70
    // ldr r0, _02258B8C ; =0x000001EE
    // cmp r1, r0
    // bne _02258A72
    // b _02258B76
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02258B76
    // ldr r0, _02258B90 ; =0x0000219C
    // ldr r1, [sp, #0x34]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x24]
    // cmp r1, r2
    // beq _02258B76
    // ldr r1, [sp, #0x30]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x24]
    // cmp r1, r2
    // beq _02258B76
    // add r2, r0, #0
    // ldr r1, [sp, #0x34]
    // add r2, #8
    // ldrb r2, [r1, r2]
    // ldr r1, [sp, #0x24]
    // cmp r1, r2
    // beq _02258B76
    // ldr r1, [sp, #0x30]
    // add r0, #8
    // ldrb r1, [r1, r0]
    // ldr r0, [sp, #0x24]
    // cmp r0, r1
    // beq _02258B76
    // mov r0, #0
    // str r0, [sp, #0x64]
    // ldr r0, [sp, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x84]
    // ldr r0, [sp, #0x24]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x88]
    // ldr r1, [sp, #0x64]
    // ldr r0, [sp, #0x1c]
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x8c]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x8c]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov12_02258BB4
    // str r0, [sp, #0x80]
    // ldr r0, [sp, #0x8c]
    // cmp r0, #0
    // beq _02258B5E
    // lsl r0, r0, #4
    // add r1, r5, r0
    // ldr r0, _02258B98 ; =0x000003E1
    // ldrb r0, [r1, r0]
    // cmp r0, #1
    // beq _02258B5E
    // add r0, r7, #0
    // add r1, r6, #0
    // bl BattleSystem_GetFieldSide
    // add r3, r0, #0
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // lsl r3, r3, #2
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x84]
    // add r4, r5, r3
    // str r0, [sp, #0xc]
    // mov r3, #0x6f
    // str r6, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // lsl r3, r3, #2
    // ldr r2, [sp, #0x8c]
    // ldr r3, [r4, r3]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl CalcMoveDamage
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #0
    // str r0, [sp, #0x90]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x80]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r1, [sp, #8]
    // add r0, sp, #0x90
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x8c]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov12_02251D28
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #0x90]
    // ldr r0, _02258B9C ; =0x00140808
    // tst r0, r1
    // beq _02258B5E
    // mov r0, #0
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x4c]
    // cmp r1, r0
    // bhs _02258B6C
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x88]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x64]
    // add r0, r0, #1
    // str r0, [sp, #0x64]
    // cmp r0, #4
    // blt _02258AC4
    // ldr r0, [sp, #0x24]
    // add r1, r0, #1
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0x24]
    // cmp r1, r0
    // bge _02258B84
    // b _02258A50
    // ldr r0, [sp, #0x2c]
    // add sp, #0x94
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02258B8C: .word 0x000001EE
    // _02258B90: .word 0x0000219C
    // _02258B94: .word 0x000021A4
    // _02258B98: .word 0x000003E1
    // _02258B9C: .word 0x00140808
    // TODO: decompile
}



void ov12_02258BA0(void) {
}



void ov12_02258BB4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // ldr r2, _02258D6C ; =0x00000137
    // add r7, r0, #0
    // add r6, r1, #0
    // cmp r3, r2
    // bgt _02258BCE
    // blt _02258BC8
    // b _02258D12
    // cmp r3, #0xed
    // beq _02258C90
    // b _02258D64
    // add r0, r2, #0
    // add r0, #0x34
    // cmp r3, r0
    // bgt _02258BDE
    // add r2, #0x34
    // cmp r3, r2
    // beq _02258BE6
    // b _02258D64
    // add r2, #0x8a
    // cmp r3, r2
    // beq _02258C02
    // b _02258D64
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r6, #0
    // lsr r1, r1, #0x10
    // mov r2, #0xc
    // bl GetItemVar
    // add r5, r0, #0
    // b _02258D66
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r6, #0
    // lsr r1, r1, #0x10
    // mov r2, #1
    // bl GetItemVar
    // sub r0, #0x7e
    // cmp r0, #0xf
    // bhi _02258C8C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02258C2C: ; jump table
    // mov r5, #1
    // b _02258D66
    // mov r5, #2
    // b _02258D66
    // mov r5, #3
    // b _02258D66
    // mov r5, #4
    // b _02258D66
    // mov r5, #5
    // b _02258D66
    // mov r5, #6
    // b _02258D66
    // mov r5, #7
    // b _02258D66
    // mov r5, #8
    // b _02258D66
    // mov r5, #0xa
    // b _02258D66
    // mov r5, #0xb
    // b _02258D66
    // mov r5, #0xc
    // b _02258D66
    // mov r5, #0xd
    // b _02258D66
    // mov r5, #0xe
    // b _02258D66
    // mov r5, #0xf
    // b _02258D66
    // mov r5, #0x10
    // b _02258D66
    // mov r5, #0x11
    // b _02258D66
    // mov r5, #0
    // b _02258D66
    // add r0, r4, #0
    // mov r1, #0x4b
    // mov r2, #0
    // bl GetMonData
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #0x4a
    // mov r2, #0
    // bl GetMonData
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #0x49
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // add r0, r4, #0
    // mov r1, #0x48
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0x46
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0x47
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r2, r6, #0x1f
    // lsl r0, r5, #0x1f
    // lsr r5, r2, #0x1b
    // lsl r2, r7, #0x1f
    // lsr r4, r2, #0x1c
    // ldr r2, [sp, #4]
    // lsl r1, r1, #0x1f
    // lsl r2, r2, #0x1f
    // lsr r3, r2, #0x1d
    // ldr r2, [sp, #8]
    // mov r6, #1
    // and r2, r6
    // lsr r1, r1, #0x1e
    // orr r1, r2
    // orr r1, r3
    // orr r1, r4
    // lsr r0, r0, #0x1a
    // orr r1, r5
    // orr r1, r0
    // mov r0, #0xf
    // mul r0, r1
    // mov r1, #0x3f
    // bl _s32_div_f
    // add r5, r0, #1
    // cmp r5, #9
    // blt _02258D66
    // add r5, r5, #1
    // b _02258D66
    // mov r2, #0xd
    // str r2, [sp]
    // mov r2, #8
    // mov r3, #0
    // bl CheckAbilityActive
    // cmp r0, #0
    // bne _02258D66
    // mov r0, #0x4c
    // str r0, [sp]
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r2, #8
    // mov r3, #0
    // bl CheckAbilityActive
    // cmp r0, #0
    // bne _02258D66
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r6, r0]
    // ldr r1, _02258D70 ; =0x000080FF
    // tst r1, r0
    // beq _02258D66
    // mov r1, #3
    // tst r1, r0
    // beq _02258D4A
    // mov r5, #0xb
    // mov r1, #0xc
    // tst r1, r0
    // beq _02258D52
    // mov r5, #5
    // mov r1, #0x30
    // tst r1, r0
    // beq _02258D5A
    // mov r5, #0xa
    // mov r1, #0xc0
    // tst r0, r1
    // beq _02258D66
    // mov r5, #0xf
    // b _02258D66
    // mov r5, #0
    // add r0, r5, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02258D6C: .word 0x00000137
    // _02258D70: .word 0x000080FF
    // TODO: decompile
}



void ov12_02258D74(void) {
    Heap_Alloc(5, (0x6b << 2));
    MIi_CpuClearFast(0, r0, (0x6b << 2));
    // ldrb r1, [r5]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    NARC_New(0xb4, 5);
    // str r0, [r4, r1]
}



void ov12_02258DB0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x22
    // lsl r1, r1, #4
    // tst r0, r1
    // bne _02258E48
    // sub r1, #0x8b
    // ldrb r1, [r4, r1]
    // mov r0, #1
    // tst r0, r1
    // beq _02258DDC
    // add r0, r5, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // tst r0, r1
    // beq _02258E48
    // ldr r0, _02258E4C ; =0x00000195
    // ldr r1, _02258E50 ; =ov12_0226D120
    // ldrb r2, [r4, r0]
    // sub r0, r0, #1
    // ldrb r1, [r1, r2]
    // str r1, [sp]
    // mov r1, #5
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // ldrb r0, [r4, r0]
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // str r6, [sp, #0x10]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // bl BattleSystem_GetPaletteData
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // add r0, sp, #0
    // bl ov07_02233DB8
    // add r1, r4, #0
    // add r1, #0x88
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #0x64
    // bl ov07_022344C4
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #2
    // bl ov07_022344D0
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov07_0223449C
    // add r4, #0x88
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov07_022344C0
    // add sp, #0x28
    // pop {r4, r5, r6, pc}
    // _02258E4C: .word 0x00000195
    // _02258E50: .word ov12_0226D120
    // TODO: decompile
}



void ov12_02258E54(void) {
    // push {r3, lr}
    // add r2, r1, #0
    // add r2, #0x94
    // ldrb r2, [r2]
    // cmp r2, #0
    // beq _02258E76
    // mov r2, #0x6a
    // mov r3, #0
    // lsl r2, r2, #2
    // strb r3, [r1, r2]
    // add r2, r1, #0
    // add r2, #0x94
    // ldrb r2, [r2]
    // lsl r3, r2, #2
    // ldr r2, _02258E78 ; =ov12_0226D010
    // ldr r2, [r2, r3]
    // blx r2
    // pop {r3, pc}
    // _02258E78: .word ov12_0226D010
    // TODO: decompile
}



void ov12_02258E7C(void) {
    // add r0, #0x28
    BattleHpBar_FreeResources(r1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x18)));
    ov12_02262014(r4);
    // ldr r0, [r4, r0]
    NARC_Delete((0x69 << 2));
    Heap_Free(r4);
}



void ov12_02258EB0(void) {
    // bx lr
    // TODO: decompile
}



void ov12_02258EB4(void) {
    // add r1, #0x98
    BattleSystem_SetRandTemp(*((u32*)r1));
    ov12_02259944(r5, r4);
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 1);
    ov12_02259928(r4);
}



void ov12_02258EE0(void) {
}



void ov12_02258EF4(void) {
}



void ov12_02258F08(void) {
}



void ov12_02258F1C(void) {
}



void ov12_02258F30(void) {
}



void ov12_02258F44(void) {
    Pokepic_Delete(*((u32*)(r1 + 0x20)));
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 7);
    ov12_02259928(r4);
}



void ov12_02258F68(void) {
}



void ov12_02258F7C(void) {
}



void ov12_02258F90(void) {
}



void ov12_02258FA0(void) {
}



void ov12_02258FB4(void) {
}



void ov12_02258FC8(void) {
}



void ov12_02258FD8(void) {
}



void ov12_02259000(void) {
}



void ov12_02259014(void) {
}



void ov12_02259028(void) {
}



void ov12_0225903C(void) {
}



void ov12_02259050(void) {
}



void ov12_02259064(void) {
}



void ov12_02259078(void) {
}



void ov12_0225908C(void) {
}



void ov12_022590A0(void) {
    Pokepic_GetAttr(*((u32*)(r1 + 0x20)), 6);
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 0x17);
    ov12_0225A9B0(r5, r4);
    ov12_02259928(r4);
}



void ov12_022590D4(void) {
}



void ov12_022590E8(void) {
}



void ov12_022590FC(void) {
}



void ov12_02259110(void) {
}



void ov12_02259124(void) {
}



void ov12_02259134(void) {
}



void ov12_02259148(void) {
}



void ov12_0225915C(void) {
}



void ov12_02259170(void) {
}



void ov12_02259184(void) {
}



void ov12_02259198(void) {
}



void ov12_022591A8(void) {
}



void ov12_022591BC(void) {
}



void ov12_022591CC(void) {
}



void ov12_022591E0(void) {
}



void ov12_022591F4(void) {
    // add r6, #0x94
    // str r1, [sp, #4]
    // ldrb r1, [r1, r2]
    // str r0, [sp]
    BattleSystem_GetPartyMon(((*((u8*)(r1 + 1)) << 0x1c) >> 0x1c));
    // tst r0, r1
    // str r0, [sp, #8]
    // add r0, #0x16
    // add r5, #0xe
    // str r0, [sp, #8]
    MaskOfFlagNo(0, *((u32*)(r6 + 0x1c)));
    // tst r0, r1
    // add r1, #0x36
    SetMonData(r7, r4, r5);
    // ldr r2, [sp, #8]
    // add r1, #0x3a
    // add r2, r2, r4
    SetMonData(r7, r4);
    MaskOfFlagNo(((*((u8*)(r6 + 1)) << 0x1c) >> 0x1c));
    // tst r0, r1
    // add r2, #0xc
    SetMonData(r7, 6, r6);
    SetMonData(r7, 0xa3, (r6 + 2));
    SetMonData(r7, 0xa0, (r6 + 4));
    // add r2, #0x20
    SetMonData(r7, 0x70, r6);
    // add r2, #0x24
    SetMonData(r7, 0xa, r6);
    CalcMonLevelAndStats(r7);
    // ldr r1, [sp, #4]
    // ldrb r1, [r1, r2]
    // ldrb r2, [r6]
    // ldr r0, [sp]
    ov12_0226430C((0x65 << 2));
    // ldr r0, [sp, #4]
    ov12_02259928();
}



void ov12_022592D0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl BattleSystem_GetBattleType
    // add r6, r0, #0
    // add r0, r5, #0
    // bl BattleSystem_GetBattleInput
    // ldr r2, _02259320 ; =0x00000196
    // ldrb r1, [r4, r2]
    // cmp r1, #0
    // bne _02259304
    // mov r1, #8
    // and r1, r6
    // bne _022592FC
    // cmp r1, #0
    // bne _02259304
    // sub r1, r2, #1
    // ldrb r1, [r4, r1]
    // cmp r1, #4
    // beq _02259304
    // ldr r1, _02259324 ; =0xFFFFF300
    // mov r2, #0
    // bl BattleInput_StartMenuScrollHorizontalTask
    // mov r1, #0x65
    // add r2, r4, #0
    // lsl r1, r1, #2
    // add r2, #0x94
    // ldrb r1, [r4, r1]
    // ldrb r2, [r2]
    // add r0, r5, #0
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl ov12_02259928
    // pop {r4, r5, r6, pc}
    // nop
    // _02259320: .word 0x00000196
    // _02259324: .word 0xFFFFF300
    // TODO: decompile
}



void ov12_02259328(void) {
    // add r0, #0x28
    ov12_02264EB4(r1);
    ov12_02262014(r4);
    // add r2, #0x94
    // ldrb r1, [r4, r1]
    // ldrb r2, [r2]
    ov12_0226430C(r5, (0x65 << 2), r4);
    ov12_02259928(r4);
}



void ov12_02259358(void) {
    // str r1, [sp, #8]
    // ldrb r1, [r7, r1]
    // str r0, [sp]
    // add r4, #0x94
    BattleSystem_GetPartySize((0x65 << 2));
    // str r0, [sp, #4]
    // ldrb r1, [r7, r1]
    // ldr r0, [sp]
    BattleSystem_GetPartyMon((0x65 << 2), 0);
    GetMonData(0, 0xa, 0);
    // add r2, sp, #8
    SetMonData(r6, 0xa0);
    // ldr r0, [sp, #4]
    // ldrb r1, [r7, r1]
    // ldrb r2, [r4]
    // ldr r0, [sp]
    ov12_0226430C((0x65 << 2));
    ov12_02259928(r7);
}



void ov12_022593D4(void) {
}



void ov12_022593E8(void) {
}



void ov12_022593FC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // str r0, [sp, #0x10]
    // add r5, r1, #0
    // ldr r0, _022594F0 ; =0x00000195
    // add r4, r5, #0
    // ldrb r1, [r5, r0]
    // mov r0, #1
    // add r4, #0x94
    // tst r0, r1
    // beq _02259416
    // mov r6, #2
    // b _02259418
    // mov r6, #0
    // ldrb r0, [r4, #5]
    // lsl r3, r6, #0x18
    // lsr r3, r3, #0x18
    // str r0, [sp]
    // ldrb r0, [r4, #1]
    // str r0, [sp, #4]
    // ldr r0, [r4, #8]
    // str r0, [sp, #8]
    // ldrh r1, [r4, #2]
    // ldrb r2, [r4, #4]
    // add r0, sp, #0x14
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // ldr r0, [r5, #0x20]
    // bl Pokepic_GetTemplate
    // add r7, r0, #0
    // add r2, sp, #0x14
    // add r3, r7, #0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5, #0x20]
    // bl Pokepic_ScheduleReloadFromNarc
    // ldr r0, [sp, #0x10]
    // bl ov12_0223A99C
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // bl ov12_0223BB94
    // add r3, r0, #0
    // ldr r0, [r4, #8]
    // mov r2, #5
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldrh r0, [r7, #6]
    // str r0, [sp, #0xc]
    // ldrh r0, [r7]
    // ldrh r1, [r7, #2]
    // bl sub_02014540
    // ldr r0, [sp, #0x10]
    // bl ov12_0223A99C
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrh r2, [r7]
    // bl ov12_0223BBA8
    // ldr r0, [sp, #0x10]
    // bl ov12_0223A99C
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrh r2, [r7, #4]
    // bl ov12_0223BBC0
    // ldr r0, [r4, #8]
    // lsl r2, r6, #0x18
    // str r0, [sp]
    // ldrh r0, [r4, #2]
    // ldrb r1, [r4, #4]
    // ldrb r3, [r4, #1]
    // lsr r2, r2, #0x18
    // bl GetMonPicHeightBySpeciesGenderForm
    // add r6, r0, #0
    // ldr r0, [sp, #0x10]
    // bl ov12_0223A99C
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // add r2, r6, #0
    // bl ov12_0223BBD8
    // ldr r0, _022594F0 ; =0x00000195
    // mov r1, #1
    // ldrb r0, [r5, r0]
    // bl ov07_02234B5C
    // add r2, r0, #0
    // ldr r0, [r5, #0x20]
    // mov r1, #1
    // add r2, r6, r2
    // bl Pokepic_SetAttr
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
    // ldr r0, [sp, #0x10]
    // bl ov12_0226430C
    // add r0, r5, #0
    // bl ov12_02259928
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022594F0: .word 0x00000195
    // TODO: decompile
}



void ov12_022594F4(void) {
    BattleSystem_SetBackground();
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 0x2e);
    ov12_02259928(r4);
}



void ov12_02259514(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _022595B4 ; =0x00000196
    // add r4, r1, #0
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _0225959A
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r6, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // add r0, r5, #0
    // bl BattleSystem_GetBattleInput
    // str r0, [sp, #8]
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, [sp, #8]
    // add r0, r6, #0
    // add r1, r7, #0
    // str r3, [sp, #4]
    // bl BattleInput_ChangeMenu
    // ldr r0, [sp, #8]
    // mov r1, #0
    // bl BattleInput_Deadstriped_022698AC
    // add r0, r6, #0
    // bl NARC_Delete
    // add r0, r7, #0
    // bl NARC_Delete
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // add r0, r5, #0
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // cmp r1, r0
    // beq _02259586
    // add r0, r5, #0
    // bl BattleSystem_GetHpBar
    // bl ov12_02265D74
    // add r0, r4, #0
    // add r0, #0x28
    // bl ov12_02264EB4
    // ldr r0, [sp, #8]
    // bl BattleInput_DisableBallGauge
    // add r0, r4, #0
    // bl ov12_02262014
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x2f
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl ov12_02259928
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022595B4: .word 0x00000196
    // TODO: decompile
}



void ov12_022595B8(void) {
}



void ov12_022595CC(void) {
}



void ov12_022595E0(void) {
    // ldrb r1, [r4, r1]
    // add r6, #0x94
    BattleSystem_GetFieldSide((0x65 << 2));
    ov12_0225B120(r5, r4, r6);
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 0x32);
    ov12_02259928(r4);
}



void ov12_0225961C(void) {
    // ldrb r1, [r4, r1]
    // add r6, #0x94
    BattleSystem_GetFieldSide((0x65 << 2));
    ov12_0225B16C(r5, r4, r6);
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 0x33);
    ov12_02259928(r4);
}



void ov12_02259658(void) {
    BattleSystem_GetSpriteSystem();
    BattleSystem_GetSpriteManager(r5);
    BattleSystem_GetPaletteData(r5);
    ov12_0226ADE0(r6, r7, r0);
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 0x34);
    ov12_02259928(r4);
}



void ov12_02259694(void) {
    BattleSystem_GetSpriteManager();
    ov12_0226AE78();
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 0x35);
    ov12_02259928(r4);
}



void ov12_022596B8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r5, #0
    // add r4, #0x94
    // ldrb r1, [r4, #1]
    // add r6, r0, #0
    // cmp r1, #0
    // ldr r1, _022596FC ; =0x00000196
    // bne _022596D8
    // ldrb r1, [r5, r1]
    // cmp r1, #0
    // bne _022596E4
    // ldrh r1, [r4, #2]
    // bl BattleSystem_GameStatIncrement
    // b _022596E4
    // ldrb r1, [r5, r1]
    // cmp r1, #0
    // beq _022596E4
    // ldrh r1, [r4, #2]
    // bl BattleSystem_GameStatIncrement
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
    // add r0, r6, #0
    // bl ov12_0226430C
    // add r0, r5, #0
    // bl ov12_02259928
    // pop {r4, r5, r6, pc}
    // nop
    // _022596FC: .word 0x00000196
    // TODO: decompile
}



void ov12_02259700(void) {
}



void ov12_02259724(void) {
}



void ov12_02259738(void) {
}



void ov12_02259748(void) {
}



void ov12_02259758(void) {
}



void ov12_02259768(void) {
}



void ov12_0225978C(void) {
}



void ov12_022597B0(void) {
}



void ov12_022597C4(void) {
}



void ov12_022597D8(void) {
}



void ov12_022597EC(void) {
    // str r1, [sp, #4]
    // str r1, [sp, #0x10]
    // add r1, #0x94
    // str r1, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // add r2, #8
    // str r7, [sp, #8]
    ov12_0223BF14(*((u16*)(r1 + 2)));
    // ldr r0, [sp]
    BattleSystem_GetBattleType();
    // tst r0, r1
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp]
    BattleSystem_SetBattleOutcomeFlags(((*((u32*)(0x80 + 4)) << 0x18) >> 0x18));
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    BattleSystem_GetMaxBattlers(r7);
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    BattleSystem_GetParty();
    Party_GetCount();
    Party_GetMonByIndex(r6, r5);
    GetMonData(5, 0);
    GetMonData(r4, 0x4c, 0);
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    BattleSystem_GetFieldSide();
    GetMonData(r4, 0xa3, 0);
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    GetMonData(r4, 0xa3, 0);
    // add r7, r7, r0
    Party_GetCount(r6);
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    BattleSystem_GetMaxBattlers((r0 + 1));
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    BattleSystem_SetBattleOutcomeFlags(3);
    // ldr r0, [sp]
    BattleSystem_SetBattleOutcomeFlags(2);
    // ldr r0, [sp]
    BattleSystem_SetBattleOutcomeFlags(1);
    // ldr r1, [sp, #4]
    // ldrb r1, [r1, r2]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp]
    // ldrb r2, [r2]
    ov12_0226430C((0x65 << 2));
    // ldr r0, [sp, #4]
    ov12_02259928();
}



void ov12_022598F8(void) {
    BattleSystem_GetWindow(0);
    FillWindowPixelBuffer(0xff);
    CopyWindowPixelsToVram_TextMode(r6);
    // ldrb r1, [r4, r1]
    ov12_0226430C(r5, (0x65 << 2), 0x42);
    ov12_02259928(r4);
}



void ov12_02259928(void) {
    // add r0, #0x94
    // strb r1, [r0]
}



void ov12_02259930(void) {
}



void ov12_02259944(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #5
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r1, r0, #0
    // str r4, [r1]
    // mov r2, #0
    // strb r2, [r1, #0x14]
    // strb r2, [r1, #0x15]
    // ldr r0, _02259964 ; =ov12_02260668
    // strb r2, [r1, #0x16]
    // bl SysTask_CreateOnMainQueue
    // pop {r4, pc}
    // _02259964: .word ov12_02260668
    // TODO: decompile
}



void ov12_02259968(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // str r0, [sp, #0x24]
    // add r6, r1, #0
    // add r5, r2, #0
    // bl ov12_0223A8D4
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // bl BattleSystem_GetBattleType
    // mov r0, #5
    // mov r1, #0x30
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, _02259B8C ; =0x00000195
    // strb r2, [r4, #0x12]
    // ldrb r0, [r6, r0]
    // mov r1, #1
    // tst r0, r1
    // beq _022599BE
    // mov r0, #2
    // strb r0, [r4, #0x13]
    // ldr r0, [sp, #0x24]
    // bl ov12_0223A8F4
    // str r0, [r4, #0xc]
    // ldr r1, _02259B8C ; =0x00000195
    // ldr r0, [r0]
    // ldrb r2, [r6, r1]
    // mov r1, #1
    // and r2, r1
    // add r3, r2, #0
    // mov r1, #6
    // mul r3, r1
    // ldr r1, _02259B90 ; =ov07_022377F4
    // mov r2, #0x58
    // ldrsh r1, [r1, r3]
    // bl ManagedSprite_SetPositionXY
    // b _022599E4
    // ldr r0, [sp, #0x24]
    // add r1, r2, #0
    // strb r2, [r4, #0x13]
    // bl ov12_0223A8F4
    // str r0, [r4, #0xc]
    // ldr r1, _02259B8C ; =0x00000195
    // ldr r0, [r0]
    // ldrb r2, [r6, r1]
    // mov r1, #1
    // and r2, r1
    // add r3, r2, #0
    // mov r1, #6
    // mul r3, r1
    // ldr r1, _02259B90 ; =ov07_022377F4
    // mov r2, #0x88
    // ldrsh r1, [r1, r3]
    // bl ManagedSprite_SetPositionXY
    // ldrb r0, [r5, #1]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // beq _022599F0
    // mov r0, #1
    // b _022599F2
    // mov r0, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldrb r0, [r5, #1]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1b
    // str r0, [sp, #4]
    // ldr r0, [r5, #4]
    // str r0, [sp, #8]
    // ldrb r2, [r5, #1]
    // ldrh r1, [r5, #2]
    // ldrb r3, [r4, #0x13]
    // lsl r2, r2, #0x1e
    // add r0, sp, #0x5c
    // lsr r2, r2, #0x1e
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // ldr r0, [r5, #4]
    // str r0, [sp]
    // ldrb r3, [r5, #1]
    // ldrh r0, [r5, #2]
    // ldrb r2, [r4, #0x13]
    // lsl r1, r3, #0x1e
    // lsl r3, r3, #0x18
    // lsr r1, r1, #0x1e
    // lsr r3, r3, #0x1b
    // bl GetMonPicHeightBySpeciesGenderForm
    // str r0, [sp, #0x2c]
    // mov r0, #0x69
    // lsl r0, r0, #2
    // add r1, sp, #0x30
    // ldrh r2, [r5, #2]
    // ldr r0, [r6, r0]
    // add r1, #2
    // bl sub_020729D8
    // mov r0, #0x69
    // lsl r0, r0, #2
    // add r1, sp, #0x30
    // ldrh r2, [r5, #2]
    // ldr r0, [r6, r0]
    // add r1, #1
    // bl sub_020729FC
    // mov r0, #0x69
    // lsl r0, r0, #2
    // ldrh r2, [r5, #2]
    // ldr r0, [r6, r0]
    // add r1, sp, #0x30
    // bl sub_02072A20
    // mov r3, #0x69
    // lsl r3, r3, #2
    // ldr r0, [r6, r3]
    // sub r3, #0xf
    // add r1, sp, #0x30
    // ldrh r2, [r5, #2]
    // ldrb r3, [r6, r3]
    // add r1, #3
    // bl NARC_ReadPokepicAnimScript
    // ldr r1, _02259B8C ; =0x00000195
    // mov r0, #6
    // ldrb r2, [r6, r1]
    // ldr r3, _02259B90 ; =ov07_022377F4
    // add r7, r2, #0
    // mul r7, r0
    // ldr r0, _02259B94 ; =ov07_022377F4 + 2
    // mov r2, #2
    // ldrsh r0, [r0, r7]
    // ldrsh r3, [r3, r7]
    // str r0, [sp]
    // ldr r0, _02259B98 ; =ov07_022377F4 + 4
    // ldrsh r0, [r0, r7]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // add r0, sp, #0x30
    // ldrsb r2, [r0, r2]
    // str r2, [sp, #0xc]
    // mov r2, #1
    // ldrsb r2, [r0, r2]
    // str r2, [sp, #0x10]
    // ldrb r0, [r0]
    // add r2, sp, #0x5c
    // str r0, [sp, #0x14]
    // sub r0, r1, #1
    // ldrb r0, [r6, r0]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x30
    // add r0, #3
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // bl ov12_022612A4
    // str r0, [r6, #0x20]
    // ldr r0, [r6, #0x20]
    // str r0, [r4, #8]
    // ldrb r0, [r4, #0x13]
    // cmp r0, #2
    // bne _02259AD2
    // mov r3, #0
    // str r3, [sp]
    // mov r1, #8
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // bl Pokepic_StartPaletteFade
    // ldrb r0, [r4, #0x13]
    // cmp r0, #2
    // bne _02259B12
    // ldr r0, [sp, #0x24]
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x40
    // tst r0, r1
    // beq _02259B12
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r7, r0, #0
    // ldr r0, [r4, #8]
    // mov r1, #0x2e
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #8]
    // mov r1, #0
    // mov r2, #0xc0
    // bl Pokepic_SetAttr
    // add r2, r7, #0
    // ldr r0, [r4, #8]
    // mov r1, #1
    // sub r2, #0x88
    // bl Pokepic_SetAttr
    // strh r7, [r4, #0x14]
    // b _02259B1E
    // ldr r0, _02259B8C ; =0x00000195
    // ldrb r0, [r6, r0]
    // lsl r1, r0, #2
    // ldr r0, _02259B9C ; =ov07_022377DC
    // ldrsh r0, [r0, r1]
    // strh r0, [r4, #0x14]
    // ldr r0, [sp, #0x24]
    // str r0, [r4]
    // str r6, [r4, #4]
    // ldrb r0, [r5]
    // strb r0, [r4, #0x10]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r6, r0]
    // add r0, r0, #1
    // strb r1, [r4, #0x11]
    // ldrh r1, [r5, #2]
    // strh r1, [r4, #0x16]
    // ldrb r1, [r5, #1]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x1b
    // add r1, r4, #0
    // add r1, #0x2c
    // strb r2, [r1]
    // ldr r1, [r5, #8]
    // str r1, [r4, #0x18]
    // ldrb r0, [r6, r0]
    // str r0, [r4, #0x1c]
    // ldr r0, [r5, #4]
    // bl GetNatureFromPersonality
    // str r0, [r4, #0x24]
    // ldrb r0, [r5, #1]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // str r0, [r4, #0x28]
    // ldrb r0, [r4, #0x13]
    // cmp r0, #2
    // bne _02259B78
    // ldr r0, [sp, #0x24]
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x40
    // tst r0, r1
    // beq _02259B78
    // ldr r0, _02259BA0 ; =ov12_0225B7B8
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // b _02259B82
    // ldr r0, _02259BA4 ; =ov12_0225B494
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // mov r0, #1
    // bl sub_02005B58
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // _02259B8C: .word 0x00000195
    // _02259B90: .word ov07_022377F4
    // _02259B94: .word ov07_022377F4 + 2
    // _02259B98: .word ov07_022377F4 + 4
    // _02259B9C: .word ov07_022377DC
    // _02259BA0: .word ov12_0225B7B8
    // _02259BA4: .word ov12_0225B494
    // TODO: decompile
}



void ov12_02259BA8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // add r6, r1, #0
    // add r5, r2, #0
    // bl BattleSystem_GetBattleType
    // mov r0, #5
    // mov r1, #0x9c
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, _02259D3C ; =0x00000195
    // ldrb r1, [r6, r0]
    // mov r0, #1
    // tst r0, r1
    // beq _02259BCE
    // mov r1, #2
    // b _02259BD0
    // mov r1, #0
    // add r0, r4, #0
    // add r0, #0x84
    // strb r1, [r0]
    // ldrb r0, [r5, #1]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // beq _02259BE2
    // mov r0, #1
    // b _02259BE4
    // mov r0, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldrb r0, [r5, #1]
    // add r3, r4, #0
    // add r3, #0x84
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1b
    // str r0, [sp, #4]
    // ldr r0, [r5, #4]
    // str r0, [sp, #8]
    // ldrb r2, [r5, #1]
    // add r0, r4, #0
    // ldrh r1, [r5, #2]
    // lsl r2, r2, #0x1e
    // ldrb r3, [r3]
    // add r0, #0x14
    // lsr r2, r2, #0x1e
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // ldr r0, [r5, #4]
    // add r2, r4, #0
    // str r0, [sp]
    // ldrb r3, [r5, #1]
    // add r2, #0x84
    // ldrh r0, [r5, #2]
    // lsl r1, r3, #0x1e
    // lsl r3, r3, #0x18
    // ldrb r2, [r2]
    // lsr r1, r1, #0x1e
    // lsr r3, r3, #0x1b
    // bl GetMonPicHeightBySpeciesGenderForm
    // add r1, r4, #0
    // add r1, #0x85
    // strb r0, [r1]
    // mov r0, #0x69
    // lsl r0, r0, #2
    // add r1, r4, #0
    // ldrh r2, [r5, #2]
    // ldr r0, [r6, r0]
    // add r1, #0x90
    // bl sub_020729D8
    // mov r0, #0x69
    // lsl r0, r0, #2
    // add r1, r4, #0
    // ldrh r2, [r5, #2]
    // ldr r0, [r6, r0]
    // add r1, #0x91
    // bl sub_020729FC
    // mov r0, #0x69
    // lsl r0, r0, #2
    // add r1, r4, #0
    // ldrh r2, [r5, #2]
    // ldr r0, [r6, r0]
    // add r1, #0x93
    // bl sub_02072A20
    // add r0, r6, #0
    // bl ov12_02261284
    // str r7, [r4]
    // add r0, r4, #0
    // str r6, [r4, #4]
    // mov r1, #0
    // add r0, #0x83
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x96
    // strb r1, [r0]
    // add r0, r4, #0
    // ldrb r1, [r5]
    // add r0, #0x80
    // strb r1, [r0]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r2, [r6, r0]
    // add r1, r4, #0
    // add r1, #0x81
    // strb r2, [r1]
    // add r1, r4, #0
    // ldrh r2, [r5, #2]
    // add r1, #0x86
    // add r0, r0, #1
    // strh r2, [r1]
    // ldrb r1, [r5, #1]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x1b
    // add r1, r4, #0
    // add r1, #0x97
    // strb r2, [r1]
    // ldrb r1, [r6, r0]
    // add r0, r4, #0
    // add r0, #0x82
    // strb r1, [r0]
    // add r0, r4, #0
    // ldr r1, [r5, #8]
    // add r0, #0x88
    // str r1, [r0]
    // add r0, r4, #0
    // ldr r1, [r5, #0xc]
    // add r0, #0x8c
    // strb r1, [r0]
    // ldr r0, [r5, #4]
    // bl GetNatureFromPersonality
    // add r1, r4, #0
    // add r1, #0x8d
    // strb r0, [r1]
    // add r0, r4, #0
    // ldr r1, [r5, #0x10]
    // add r0, #0x8e
    // strh r1, [r0]
    // ldrb r0, [r5, #1]
    // lsl r0, r0, #0x1d
    // lsr r1, r0, #0x1f
    // add r0, r4, #0
    // add r0, #0x92
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x94
    // strh r1, [r0]
    // mov r0, #1
    // bl sub_02005B58
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x65
    // lsl r1, r1, #2
    // add r5, r0, #0
    // ldrb r1, [r6, r1]
    // add r0, r7, #0
    // bl ov12_0223C140
    // cmp r0, #0xff
    // beq _02259D2C
    // mov r0, #2
    // tst r0, r5
    // beq _02259D1E
    // mov r0, #8
    // tst r0, r5
    // bne _02259D1E
    // ldr r0, _02259D3C ; =0x00000195
    // ldrb r0, [r6, r0]
    // cmp r0, #3
    // bls _02259D1E
    // ldr r0, _02259D40 ; =ov12_0225B960
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _02259D44 ; =ov12_0225BE38
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _02259D40 ; =ov12_0225B960
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02259D3C: .word 0x00000195
    // _02259D40: .word ov12_0225B960
    // _02259D44: .word ov12_0225BE38
    // TODO: decompile
}



void ov12_02259D48(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r4, r2, #0
    // bl BattleSystem_GetBattleType
    // mov r0, #5
    // mov r1, #0x9c
    // bl Heap_Alloc
    // add r5, r0, #0
    // add r1, r5, #0
    // mov r0, #0
    // add r1, #0x83
    // strb r0, [r1]
    // ldr r2, _02259F24 ; =0x00000195
    // ldr r1, [sp, #0x10]
    // ldrb r2, [r1, r2]
    // mov r1, #1
    // tst r1, r2
    // beq _02259D7E
    // add r0, r5, #0
    // mov r1, #2
    // add r0, #0x84
    // strb r1, [r0]
    // b _02259D84
    // add r1, r5, #0
    // add r1, #0x84
    // strb r0, [r1]
    // ldrb r0, [r4, #1]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // beq _02259D90
    // mov r0, #1
    // b _02259D92
    // mov r0, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldrb r0, [r4, #1]
    // add r3, r5, #0
    // add r3, #0x84
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1b
    // str r0, [sp, #4]
    // ldr r0, [r4, #4]
    // str r0, [sp, #8]
    // ldrb r2, [r4, #1]
    // add r0, r5, #0
    // ldrh r1, [r4, #2]
    // lsl r2, r2, #0x1e
    // ldrb r3, [r3]
    // add r0, #0x14
    // lsr r2, r2, #0x1e
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // ldr r0, [r4, #4]
    // add r2, r5, #0
    // str r0, [sp]
    // ldrb r3, [r4, #1]
    // add r2, #0x84
    // ldrh r0, [r4, #2]
    // lsl r1, r3, #0x1e
    // lsl r3, r3, #0x18
    // ldrb r2, [r2]
    // lsr r1, r1, #0x1e
    // lsr r3, r3, #0x1b
    // bl GetMonPicHeightBySpeciesGenderForm
    // add r1, r5, #0
    // add r1, #0x85
    // strb r0, [r1]
    // mov r1, #0x69
    // ldr r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // add r1, r5, #0
    // ldrh r2, [r4, #2]
    // add r1, #0x90
    // bl sub_020729D8
    // mov r1, #0x69
    // ldr r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // add r1, r5, #0
    // ldrh r2, [r4, #2]
    // add r1, #0x91
    // bl sub_020729FC
    // mov r1, #0x69
    // ldr r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // add r1, r5, #0
    // ldrh r2, [r4, #2]
    // add r1, #0x93
    // bl sub_02072A20
    // ldr r0, [sp, #0x10]
    // bl ov12_02261284
    // ldr r0, [sp, #0xc]
    // str r0, [r5]
    // ldr r0, [sp, #0x10]
    // str r0, [r5, #4]
    // add r0, r5, #0
    // ldrb r1, [r4]
    // add r0, #0x80
    // strb r1, [r0]
    // mov r1, #0x65
    // ldr r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldrb r2, [r0, r1]
    // add r0, r5, #0
    // add r0, #0x81
    // strb r2, [r0]
    // add r0, r5, #0
    // ldrh r2, [r4, #2]
    // add r0, #0x86
    // add r1, r1, #1
    // strh r2, [r0]
    // ldrb r0, [r4, #1]
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x1b
    // add r0, r5, #0
    // add r0, #0x97
    // strb r2, [r0]
    // ldr r0, [sp, #0x10]
    // ldrb r1, [r0, r1]
    // add r0, r5, #0
    // add r0, #0x82
    // strb r1, [r0]
    // add r0, r5, #0
    // ldr r1, [r4, #8]
    // add r0, #0x88
    // str r1, [r0]
    // add r0, r5, #0
    // ldr r1, [r4, #0xc]
    // add r0, #0x8c
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // bl GetNatureFromPersonality
    // add r1, r5, #0
    // add r1, #0x8d
    // strb r0, [r1]
    // add r0, r5, #0
    // ldr r1, [r4, #0x10]
    // add r0, #0x8e
    // strh r1, [r0]
    // ldrb r0, [r4, #1]
    // lsl r0, r0, #0x1d
    // lsr r1, r0, #0x1f
    // add r0, r5, #0
    // add r0, #0x92
    // strb r1, [r0]
    // add r0, r5, #0
    // ldr r1, [r4, #0x14]
    // add r0, #0x94
    // strh r1, [r0]
    // add r1, r5, #0
    // mov r0, #0
    // add r1, #0x96
    // strb r0, [r1]
    // add r1, r5, #0
    // ldr r2, [r4, #0x4c]
    // add r1, #0x98
    // str r2, [r1]
    // mov ip, r4
    // add r7, r5, #0
    // add r6, r4, #0
    // add r1, r5, #0
    // mov r2, ip
    // add r2, #0x50
    // ldrh r3, [r2]
    // add r2, r7, #0
    // add r2, #0x40
    // strh r3, [r2]
    // add r2, r4, r0
    // add r2, #0x58
    // ldrb r3, [r2]
    // add r2, r5, r0
    // add r2, #0x48
    // strb r3, [r2]
    // add r2, r4, r0
    // add r2, #0x5c
    // ldrb r3, [r2]
    // add r2, r5, r0
    // add r2, #0x4c
    // strb r3, [r2]
    // add r2, r4, r0
    // add r2, #0x60
    // ldrb r3, [r2]
    // add r2, r5, r0
    // add r2, #0x50
    // strb r3, [r2]
    // ldr r2, [r6, #0x64]
    // add r0, r0, #1
    // str r2, [r1, #0x54]
    // mov r2, ip
    // add r2, r2, #2
    // mov ip, r2
    // add r7, r7, #2
    // add r6, r6, #4
    // add r1, r1, #4
    // cmp r0, #4
    // blt _02259EA4
    // mov r2, #0x65
    // ldr r1, [sp, #0x10]
    // lsl r2, r2, #2
    // ldrb r1, [r1, r2]
    // ldr r0, [sp, #0xc]
    // bl ov12_0223C140
    // cmp r0, #0xff
    // beq _02259F06
    // add r1, r5, #0
    // add r1, #0x8c
    // ldrb r1, [r1]
    // cmp r0, r1
    // beq _02259F14
    // ldr r0, _02259F28 ; =ov12_0225C18C
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _02259F2C ; =ov12_0225C6C8
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02259F24: .word 0x00000195
    // _02259F28: .word ov12_0225C18C
    // _02259F2C: .word ov12_0225C6C8
    // TODO: decompile
}



void ov12_02259F30(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r0, #5
    // mov r1, #0x78
    // str r2, [sp, #8]
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r0, [sp]
    // add r7, r4, #0
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // str r0, [r4, #8]
    // ldr r0, [sp, #8]
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x68
    // strb r1, [r0]
    // mov r1, #0x65
    // ldr r0, [sp, #4]
    // lsl r1, r1, #2
    // ldrb r2, [r0, r1]
    // add r0, r4, #0
    // add r0, #0x69
    // strb r2, [r0]
    // ldr r0, [sp, #4]
    // add r1, r1, #1
    // ldrb r1, [r0, r1]
    // add r0, r4, #0
    // add r0, #0x6a
    // strb r1, [r0]
    // add r1, r4, #0
    // mov r0, #0
    // add r1, #0x6b
    // strb r0, [r1]
    // ldr r1, [sp, #8]
    // ldrb r2, [r1, #1]
    // add r1, r4, #0
    // add r1, #0x6c
    // strb r2, [r1]
    // ldr r1, [sp, #8]
    // ldrh r2, [r1, #2]
    // add r1, r4, #0
    // add r1, #0x6e
    // strh r2, [r1]
    // ldr r1, [sp, #8]
    // add r2, r4, #0
    // ldr r1, [r1, #4]
    // str r1, [r4, #0x70]
    // ldr r1, [sp, #8]
    // ldr r1, [r1, #0x2c]
    // str r1, [r4, #0x74]
    // ldr r1, [sp, #8]
    // mov ip, r1
    // mov r3, ip
    // ldrh r3, [r3, #8]
    // strh r3, [r7, #0x28]
    // ldr r3, [sp, #8]
    // add r7, r7, #2
    // add r6, r3, r0
    // add r3, r4, r0
    // ldrb r5, [r6, #0x10]
    // add r3, #0x30
    // strb r5, [r3]
    // add r3, r4, r0
    // ldrb r5, [r6, #0x14]
    // add r3, #0x34
    // strb r5, [r3]
    // add r3, r4, r0
    // ldrb r5, [r6, #0x18]
    // add r3, #0x38
    // add r0, r0, #1
    // strb r5, [r3]
    // ldr r3, [r1, #0x1c]
    // add r1, r1, #4
    // str r3, [r2, #0x3c]
    // mov r3, ip
    // add r3, r3, #2
    // add r2, r2, #4
    // mov ip, r3
    // cmp r0, #4
    // blt _02259FA4
    // mov r2, #0x65
    // ldr r1, [sp, #4]
    // lsl r2, r2, #2
    // ldrb r1, [r1, r2]
    // ldr r0, [sp]
    // bl ov12_0223C140
    // cmp r0, #0xff
    // beq _02259FF4
    // ldr r1, [r4, #0x74]
    // cmp r0, r1
    // beq _0225A002
    // ldr r0, _0225A010 ; =ov12_0225C9BC
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _0225A014 ; =ov12_0225CC58
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225A010: .word ov12_0225C9BC
    // _0225A014: .word ov12_0225CC58
    // TODO: decompile
}



void ov12_0225A018(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // add r6, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r7, [r4]
    // ldr r0, [r5, #0x20]
    // str r0, [r4, #4]
    // ldrb r0, [r6]
    // strb r0, [r4, #8]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // add r0, r0, #1
    // strb r1, [r4, #9]
    // ldrb r0, [r5, r0]
    // mov r1, #0
    // add r3, r1, #0
    // strb r0, [r4, #0xa]
    // strb r1, [r4, #0xb]
    // ldrb r0, [r6, #1]
    // strb r0, [r4, #0xc]
    // ldrh r0, [r6, #2]
    // lsl r2, r0, #1
    // ldr r0, _0225A074 ; =ov12_0226D15A
    // ldrh r0, [r0, r2]
    // mov r2, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // bl Pokepic_StartPaletteFade
    // ldr r0, [r4, #4]
    // mov r1, #0x2d
    // mov r2, #1
    // bl Pokepic_SetAttr
    // ldr r0, _0225A078 ; =ov12_0225CDB8
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A074: .word ov12_0226D15A
    // _0225A078: .word ov12_0225CDB8
    // TODO: decompile
}



void ov12_0225A07C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #5
    // mov r1, #0x24
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, _0225A288 ; =0x00000195
    // strb r2, [r4, #0x12]
    // ldrb r0, [r5, r0]
    // mov r1, #1
    // tst r0, r1
    // beq _0225A0C4
    // mov r0, #2
    // strb r0, [r4, #0x13]
    // add r0, r6, #0
    // bl ov12_0223A8F4
    // str r0, [r4, #8]
    // ldr r1, _0225A288 ; =0x00000195
    // ldr r0, [r0]
    // ldrb r2, [r5, r1]
    // mov r1, #1
    // and r1, r2
    // mov r2, #6
    // mul r2, r1
    // ldr r1, _0225A28C ; =ov07_022377F4
    // ldrsh r1, [r1, r2]
    // mov r2, #0x58
    // bl ManagedSprite_SetPositionXY
    // b _0225A0E8
    // add r0, r6, #0
    // add r1, r2, #0
    // strb r2, [r4, #0x13]
    // bl ov12_0223A8F4
    // str r0, [r4, #8]
    // ldr r1, _0225A288 ; =0x00000195
    // ldr r0, [r0]
    // ldrb r2, [r5, r1]
    // mov r1, #1
    // and r1, r2
    // mov r2, #6
    // mul r2, r1
    // ldr r1, _0225A28C ; =ov07_022377F4
    // ldrsh r1, [r1, r2]
    // mov r2, #0x88
    // bl ManagedSprite_SetPositionXY
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // bne _0225A10A
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x10
    // tst r0, r1
    // beq _0225A112
    // ldr r0, _0225A288 ; =0x00000195
    // ldrb r1, [r5, r0]
    // mov r0, #1
    // tst r0, r1
    // beq _0225A112
    // ldr r0, _0225A288 ; =0x00000195
    // ldrb r0, [r5, r0]
    // str r0, [sp, #0x10]
    // b _0225A11C
    // ldr r0, _0225A288 ; =0x00000195
    // ldrb r1, [r5, r0]
    // mov r0, #1
    // and r0, r1
    // str r0, [sp, #0x10]
    // mov r1, #0x65
    // ldrh r2, [r7, #2]
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // lsl r2, r2, #0x18
    // add r0, r6, #0
    // lsr r2, r2, #0x18
    // bl ov12_02261EF0
    // strh r0, [r7, #2]
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x65
    // lsl r1, r1, #2
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldrb r1, [r5, r1]
    // add r0, r6, #0
    // bl ov12_0223C140
    // cmp r0, #0xff
    // beq _0225A166
    // ldr r0, [sp, #0x20]
    // mov r1, #2
    // tst r0, r1
    // beq _0225A162
    // ldr r0, [sp, #0x20]
    // mov r1, #8
    // tst r0, r1
    // bne _0225A162
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // b _0225A166
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // mov r0, #6
    // mul r0, r1
    // ldr r1, _0225A28C ; =ov07_022377F4
    // ldr r3, _0225A288 ; =0x00000195
    // ldrsh r1, [r1, r0]
    // str r1, [sp, #0x14]
    // ldr r1, _0225A290 ; =ov07_022377F4 + 2
    // ldrsh r0, [r1, r0]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // ldrh r2, [r7, #2]
    // ldrb r3, [r5, r3]
    // add r0, r6, #0
    // bl ov12_02261B2C
    // str r0, [r5, #0x18]
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0x13]
    // cmp r0, #0
    // bne _0225A23A
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // cmp r0, #0
    // beq _0225A1E8
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // cmp r0, #0x20
    // beq _0225A1E8
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #8
    // cmp r0, r1
    // beq _0225A1E8
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // lsl r1, r1, #8
    // cmp r0, r1
    // beq _0225A1E8
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xa
    // cmp r0, r1
    // beq _0225A1E8
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xc
    // cmp r0, r1
    // bne _0225A23A
    // add r0, r6, #0
    // bl ov12_0223A8D4
    // str r0, [sp, #0x24]
    // ldrh r0, [r7, #2]
    // ldrb r1, [r4, #0x13]
    // add r2, sp, #0x28
    // bl sub_02070D84
    // ldr r1, [sp, #0x28]
    // add r0, sp, #0x28
    // strh r1, [r0, #0x18]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x10]
    // strh r1, [r0, #0x1a]
    // ldr r1, [sp, #0x30]
    // add r3, sp, #0x40
    // strh r1, [r0, #0x1c]
    // mov r1, #0
    // strh r1, [r0, #0x1e]
    // mov r0, #6
    // mul r0, r2
    // ldr r2, _0225A294 ; =ov07_022377F4 + 4
    // strb r1, [r3, #8]
    // ldrsh r0, [r2, r0]
    // str r1, [sp, #0x4c]
    // str r0, [sp]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, r3, #0
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // bl PokepicManager_CreatePokepic
    // str r0, [r4, #4]
    // b _0225A23E
    // mov r0, #0
    // str r0, [r4, #4]
    // ldr r0, [sp, #0x10]
    // lsl r1, r0, #2
    // ldr r0, _0225A298 ; =ov07_022377DC
    // ldrsh r0, [r0, r1]
    // strh r0, [r4, #0x14]
    // str r6, [r4]
    // ldrb r0, [r7]
    // strb r0, [r4, #0x10]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // add r0, r0, #1
    // strb r1, [r4, #0x11]
    // ldrb r0, [r5, r0]
    // str r0, [r4, #0x18]
    // mov r0, #0
    // str r0, [r4, #0x20]
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // beq _0225A26A
    // cmp r0, #2
    // bne _0225A27A
    // add r0, r6, #0
    // bl BattleSystem_GetBgConfig
    // mov r1, #3
    // mov r2, #2
    // mov r3, #0x84
    // bl BgSetPosTextAndCommit
    // ldr r0, _0225A29C ; =ov12_0225CE28
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A288: .word 0x00000195
    // _0225A28C: .word ov07_022377F4
    // _0225A290: .word ov07_022377F4 + 2
    // _0225A294: .word ov07_022377F4 + 4
    // _0225A298: .word ov07_022377DC
    // _0225A29C: .word ov12_0225CE28
    // TODO: decompile
}



void ov12_0225A2A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #5
    // mov r1, #0x1c
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4, #0xa]
    // str r6, [r4]
    // ldrb r1, [r7]
    // strb r1, [r4, #8]
    // ldrb r1, [r7, #1]
    // str r1, [r4, #0x10]
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r2, [r5, r1]
    // strb r2, [r4, #9]
    // str r5, [r4, #4]
    // add r2, r1, #1
    // ldrb r3, [r5, r2]
    // mov r2, #1
    // tst r2, r3
    // beq _0225A2DA
    // mov r1, #2
    // strb r1, [r4, #0xb]
    // b _0225A2FC
    // ldrb r1, [r5, r1]
    // add r0, r6, #0
    // bl BattleSystem_GetTrainer
    // add r2, r0, #0
    // mov r0, #0
    // strb r0, [r4, #0xb]
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrb r2, [r2, #1]
    // add r0, r6, #0
    // bl ov12_02261EF0
    // mov r1, #0
    // bl TrainerClassToBackpicID
    // str r0, [r4, #0xc]
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // add r0, r6, #0
    // bl ov12_0223C140
    // cmp r0, #0xff
    // beq _0225A320
    // ldr r0, _0225A32C ; =ov12_0225D644
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0225A330 ; =ov12_0225D138
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A32C: .word ov12_0225D644
    // _0225A330: .word ov12_0225D138
    // TODO: decompile
}



void ov12_0225A334(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r0, #0
    // strb r0, [r1, #0xa]
    // add r2, r4, #0
    // str r5, [r1]
    // add r2, #0x94
    // ldrb r2, [r2]
    // strb r2, [r1, #8]
    // mov r2, #0x65
    // lsl r2, r2, #2
    // ldrb r3, [r4, r2]
    // add r2, r2, #1
    // strb r3, [r1, #9]
    // str r4, [r1, #4]
    // ldrb r3, [r4, r2]
    // mov r2, #1
    // tst r2, r3
    // beq _0225A36A
    // mov r0, #2
    // b _0225A36A
    // strb r0, [r1, #0xb]
    // ldr r0, _0225A378 ; =ov12_0225D890
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // nop
    // _0225A378: .word ov12_0225D890
    // TODO: decompile
}



void ov12_0225A37C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl ov12_0223A8D4
    // mov r0, #5
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // ldr r1, _0225A400 ; =0x00000195
    // strb r0, [r4, #0xa]
    // ldrb r2, [r5, r1]
    // mov r1, #1
    // tst r1, r2
    // beq _0225A3A6
    // mov r0, #2
    // b _0225A3A6
    // strb r0, [r4, #0xb]
    // ldr r0, _0225A400 ; =0x00000195
    // mov r2, #0
    // ldrb r3, [r5, r0]
    // mov r0, #1
    // add r1, r3, #0
    // and r1, r0
    // mov r0, #6
    // str r2, [sp]
    // ldr r2, _0225A404 ; =ov07_022377F4 + 36
    // mul r0, r1
    // ldrsh r2, [r2, r0]
    // str r2, [sp, #4]
    // ldr r2, _0225A408 ; =ov07_022377F4 + 38
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #8]
    // ldrh r2, [r6, #2]
    // add r0, r7, #0
    // bl ov12_02261B2C
    // str r0, [r5, #0x18]
    // str r0, [r4, #4]
    // ldr r3, _0225A400 ; =0x00000195
    // ldr r2, [r6, #4]
    // ldrb r0, [r5, r3]
    // lsl r2, r2, #1
    // lsl r0, r0, #0x1f
    // lsr r1, r0, #0x1d
    // ldr r0, _0225A40C ; =ov07_022377DC
    // add r0, r0, r1
    // ldrsh r0, [r2, r0]
    // add r1, r4, #0
    // mov r2, #0
    // strh r0, [r4, #0xc]
    // str r7, [r4]
    // ldrb r0, [r6]
    // strb r0, [r4, #8]
    // sub r0, r3, #1
    // ldrb r0, [r5, r0]
    // strb r0, [r4, #9]
    // ldr r0, _0225A410 ; =ov12_0225D990
    // bl SysTask_CreateOnMainQueue
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0225A400: .word 0x00000195
    // _0225A404: .word ov07_022377F4 + 36
    // _0225A408: .word ov07_022377F4 + 38
    // _0225A40C: .word ov07_022377DC
    // _0225A410: .word ov12_0225D990
    // TODO: decompile
}



void ov12_0225A414(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r4, r6, #0
    // add r4, #0x28
    // add r7, r0, #0
    // add r5, r2, #0
    // mov r0, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl MIi_CpuClearFast
    // mov r0, #0x65
    // str r7, [r4, #0xc]
    // lsl r0, r0, #2
    // ldrb r1, [r6, r0]
    // add r0, r4, #0
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // add r1, r0, #0
    // ldr r0, _0225A4D4 ; =0x00000195
    // ldrb r0, [r6, r0]
    // bl BattleHpBar_Util_GetBarTypeFromBattlerSide
    // add r1, r4, #0
    // add r1, #0x25
    // strb r0, [r1]
    // add r0, r4, #0
    // ldrb r1, [r5]
    // add r0, #0x4c
    // strb r1, [r0]
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // str r0, [r4, #0x28]
    // ldrh r0, [r5, #4]
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // ldrb r1, [r5, #1]
    // add r0, #0x48
    // strb r1, [r0]
    // ldrb r0, [r5, #7]
    // lsl r0, r0, #0x19
    // lsr r1, r0, #0x1e
    // add r0, r4, #0
    // add r0, #0x49
    // strb r1, [r0]
    // mov r1, #0
    // str r1, [r4, #0x30]
    // ldr r0, [r5, #8]
    // str r0, [r4, #0x38]
    // ldr r0, [r5, #0xc]
    // str r0, [r4, #0x3c]
    // add r0, r4, #0
    // ldrb r2, [r5, #6]
    // add r0, #0x26
    // strb r2, [r0]
    // ldrb r0, [r5, #7]
    // lsl r0, r0, #0x1b
    // lsr r2, r0, #0x1b
    // add r0, r4, #0
    // add r0, #0x4a
    // strb r2, [r0]
    // ldrb r0, [r5, #7]
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x1f
    // add r0, r4, #0
    // add r0, #0x4b
    // strb r2, [r0]
    // add r0, r4, #0
    // ldrb r2, [r5, #0x14]
    // add r0, #0x4d
    // strb r2, [r0]
    // add r0, r4, #0
    // ldr r2, [r5, #0x10]
    // add r0, #0x27
    // strb r2, [r0]
    // add r0, r4, #0
    // bl BattleHpBar_SetEnabled
    // mov r2, #0
    // ldr r1, [r4, #0x28]
    // add r0, r4, #0
    // mvn r2, r2
    // bl ov12_0226498C
    // mov r2, #0xfa
    // ldr r0, _0225A4D8 ; =ov12_0225DA18
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225A4D4: .word 0x00000195
    // _0225A4D8: .word ov12_0225DA18
    // TODO: decompile
}



void ov12_0225A4DC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r5, #0
    // add r4, #0x28
    // add r6, r0, #0
    // mov r0, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl MIi_CpuClearFast
    // mov r0, #0x65
    // str r6, [r4, #0xc]
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // add r0, r4, #0
    // add r0, #0x24
    // strb r1, [r0]
    // add r5, #0x94
    // add r0, r4, #0
    // ldrb r1, [r5]
    // add r0, #0x4c
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov12_02264FB0
    // mov r2, #0xfa
    // ldr r0, _0225A520 ; =ov12_0225DA8C
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x10]
    // pop {r4, r5, r6, pc}
    // _0225A520: .word ov12_0225DA8C
    // TODO: decompile
}



void ov12_0225A524(void) {
    // str r1, [sp]
    Heap_Alloc(5, 0x3c);
    MIi_CpuClearFast(0, r0, 0x3c);
    *((u8*)(r4 + 0xa)) = 0;
    *((u8*)(r4 + 0xb)) = 0;
    // str r5, [r4]
    // ldrb r0, [r7]
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp]
    // ldrb r0, [r0, r1]
    *((u8*)(r4 + 9)) = r0;
    // ldr r0, [sp]
    // ldrb r1, [r0, r1]
    // add r0, #0x34
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r0, #0x28
    *((u32*)(r4 + 4)) = r4;
    // add r0, #0x23
    // strb r1, [r0]
    // ldrsh r0, [r7, r0]
    *((u16*)(r4 + 0x36)) = 0x24;
    *((u16*)(r4 + 0x38)) = *((u16*)(r7 + 0x26));
    // add r0, #0x28
    // ldrb r1, [r0]
    // add r0, #0x3a
    // strb r1, [r0]
    // add r0, #0x29
    // ldrb r1, [r0]
    // add r0, #0x3b
    // strb r1, [r0]
    // add r0, r5, r3
    // add r0, r6, r3
    *((u8*)(r4 + 0x10)) = *((u8*)(r4 + 8));
    // add r2, r7, r0
    // add r1, r4, r0
    *((u8*)(*((u8*)((0 + 1) + 8)) + 0x1c)) = 0;
    // add r1, r4, r0
    *((u8*)(*((u8*)((0 + 1) + 8)) + 0x1c)) = *((u8*)((0 + 1) + 2));
    // add r2, r7, r3
    *((u16*)(r4 + 0x24)) = *((u16*)(r7 + 0x14));
    // add r0, r4, r3
    // add r0, #0x2c
    // strb r1, [r0]
    // add r0, r4, r3
    // add r2, #0x20
    // ldrb r1, [r2]
    // add r0, #0x30
    // strb r1, [r0]
    // ldr r0, [sp]
    SysTask_CreateOnMainQueue(*((u32*)*((u16*)(r7 + 0x14))), r4, 0, (0 + 1));
}



void ov12_0225A604(void) {
    // str r1, [sp]
    Heap_Alloc(5, 0x24);
    // add r0, #0x20
    // strb r4, [r0]
    // ldr r0, [sp]
    // str r5, [r3]
    // add r0, #0x94
    // ldrb r0, [r0]
    *((u8*)(r0 + 0x1c)) = r0;
    // ldr r0, [sp]
    // ldrb r0, [r0, r1]
    *((u8*)(r0 + 0x1d)) = r0;
    // ldr r0, [sp]
    // ldrb r0, [r0, r1]
    *((u8*)(r0 + 0x1e)) = r0;
    // ldr r0, [sp]
    // add r0, #0x28
    *((u32*)(r0 + 4)) = r0;
    *((u8*)(r0 + 0x1f)) = *((u8*)(r7 + 1));
    // add r2, r7, r4
    // add r1, r3, r4
    *((u16*)(r0 + 0xc)) = *((u16*)(r7 + 4));
    *((u8*)(((0x65 << 2) + 1) + 0x14)) = *((u8*)(r2 + 0xc));
    *((u8*)(((0x65 << 2) + 1) + 0x18)) = *((u8*)(r2 + 0x10));
    *((u16*)(r0 + 0x22)) = *((u16*)(r7 + 2));
    // ldr r0, [sp]
    SysTask_CreateOnMainQueue(*((u32*)(*((u16*)(r7 + 2)) + 4)), r0, 0, r0);
}



void ov12_0225A674(void) {
    // str r0, [sp]
    Heap_Alloc(5, 0x34);
    *((u8*)(r0 + 0xf)) = 0;
    // ldr r0, [sp]
    // str r0, [r6]
    // add r0, #0x94
    // ldrb r0, [r0]
    *((u8*)(r0 + 0xc)) = r7;
    // ldrb r1, [r7, r0]
    *((u8*)(r0 + 0xd)) = r1;
    // ldrb r0, [r7, r0]
    *((u8*)(r0 + 0xe)) = ((0x65 << 2) + 1);
    *((u16*)(r0 + 0x30)) = *((u16*)(r5 + 2));
    // add r0, #0x28
    *((u32*)(r0 + 4)) = r7;
    // add r0, #0x32
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r1, sp, #4
    ov12_0223C1C4(r0, *((u8*)(r5 + 1)));
    // ldr r0, [sp]
    BattleSystem_GetMaxBattlers();
    // ldr r0, [sp]
    BattleSystem_GetBattleType();
    *((u16*)(r6 + 0x10)) = *((u16*)(r5 + 4));
    *((u16*)(r6 + 0x12)) = *((u16*)(r5 + 6));
    *((u16*)(r6 + 0x14)) = *((u16*)(r5 + 8));
    // add r5, #8
    *((u16*)(r6 + 0x16)) = *((u16*)(r5 + 0xa));
    // add r1, #8
    SysTask_CreateOnMainQueue(*((u32*)(r7 + 8)), r6, 0);
}



void ov12_0225A700(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    Heap_Alloc(5, 0x34);
    Heap_Alloc(5, 0x34);
    *((u32*)(r4 + 8)) = r0;
    Heap_Alloc(5, 0x38);
    *((u32*)(*((u32*)(r4 + 8)) + 4)) = r0;
    SaveArray_Party_Alloc(5, *((u32*)(r4 + 8)));
    // ldr r3, [sp, #4]
    // str r0, [r1]
    *((u8*)(r4 + 0xe)) = 0;
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // ldrb r0, [r0]
    *((u8*)(r4 + 0xc)) = r0;
    // ldr r0, [sp]
    // ldrb r0, [r0, r1]
    *((u8*)(r4 + 0xd)) = r0;
    // ldr r0, [sp]
    // ldrb r0, [r0, r1]
    *((u8*)(r4 + 0xf)) = r0;
    // ldr r0, [sp, #4]
    *((u8*)(r4 + 0x14)) = *((u8*)(r0 + 1));
    // ldr r0, [sp, #4]
    *((u8*)(r4 + 0x15)) = *((u8*)(*((u8*)(r0 + 1)) + 2));
    // ldr r0, [sp, #4]
    *((u8*)(r4 + 0x16)) = *((u8*)(*((u8*)(*((u8*)(r0 + 1)) + 2)) + 3));
    // ldr r0, [sp, #4]
    // add r7, r0, r6
    // add r1, r1, r6
    *((u8*)(*((u32*)(r4 + 8)) + 0xc)) = *((u8*)(r7 + 4));
    // add r0, r3, r2
    // add r0, r5, r2
    *((u8*)(*((u8*)(r7 + 4)) + 0x18)) = *((u8*)(*((u8*)(r7 + 4)) + 8));
    // add r7, #0x20
    // ldrb r1, [r7]
    // add r0, r4, r6
    // add r0, #0x30
    // strb r1, [r0]
    // ldr r0, [sp]
    SysTask_CreateOnMainQueue(*((u32*)(*((u8*)(r7 + 4)) + 0xc)), r4, 0, (r3 + 6));
}



void ov12_0225A7AC(void) {
    // str r1, [sp]
    Heap_Alloc(5, 0x34);
    *((u8*)(r0 + 0xa)) = 0;
    // str r4, [r2]
    // ldrb r0, [r7]
    *((u8*)(r0 + 8)) = r0;
    *((u8*)(r0 + 9)) = *((u8*)(r7 + 1));
    *((u8*)(r0 + 0xb)) = *((u8*)(r7 + 2));
    *((u32*)(r0 + 0x10)) = *((u32*)(r7 + 0x20));
    *((u8*)(r0 + 0x16)) = *((u8*)(r7 + 3));
    *((u16*)(r0 + 0x14)) = 0;
    // add r0, #0x24
    // ldrb r0, [r0]
    *((u8*)(r0 + 0x18)) = r7;
    // add r0, r7, r3
    // add r0, r2, r3
    *((u8*)(r7 + 0xc)) = *((u8*)(r7 + 4));
    // add r0, r5, r4
    // add r0, r6, r4
    *((u8*)(r7 + 0x1c)) = *((u8*)(r7 + 8));
    // ldr r0, [sp]
    SysTask_CreateOnMainQueue(*((u32*)(r7 + 0x10)), r0, 0, (0 + 1));
}



void ov12_0225A818(void) {
    Heap_Alloc(5, 0x1c);
    *((u8*)(r0 + 0xe)) = 0;
    // str r6, [r1]
    // ldrb r0, [r4]
    *((u8*)(r0 + 0xc)) = r0;
    // ldrb r0, [r5, r0]
    *((u8*)(r0 + 0xd)) = (0x65 << 2);
    // add r0, #0x28
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 0x10)) = *((u16*)(r4 + 2));
    *((u8*)(r0 + 0xf)) = *((u8*)(r4 + 1));
    *((u16*)(r0 + 0x18)) = *((u32*)(r4 + 4));
    *((u32*)(r0 + 0x14)) = *((u32*)(r4 + 8));
    SysTask_CreateOnMainQueue(*((u32*)(r5 + 0x14)), r0, 0);
}



void ov12_0225A85C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // bl ov12_0223A934
    // str r0, [sp]
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r6, [r4]
    // ldrb r0, [r5]
    // mov r1, #0x65
    // lsl r1, r1, #2
    // strb r0, [r4, #4]
    // ldrb r0, [r7, r1]
    // strb r0, [r4, #5]
    // ldrh r2, [r5, #2]
    // lsl r0, r2, #1
    // add r2, r2, r0
    // add r0, sp, #4
    // strh r2, [r0, #2]
    // mov r2, #2
    // strb r2, [r0, #1]
    // ldrb r0, [r5, #1]
    // ldrb r1, [r7, r1]
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [sp, #8]
    // add r0, r6, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r1, [sp]
    // add r0, r6, #0
    // add r2, sp, #4
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225A8C0 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225A8C0: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225A8C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // bl BattleSystem_GetMessageLoader
    // str r0, [sp]
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r0, r6, #0
    // str r5, [r4]
    // add r0, #0x94
    // ldrb r0, [r0]
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, r7, #0
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225A910 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225A910: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225A914(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r0, #5
    // mov r1, #0x70
    // add r4, r2, #0
    // bl Heap_Alloc
    // add r6, r0, #0
    // mov r1, #0
    // add r0, #0x6a
    // strb r1, [r0]
    // str r7, [r6]
    // add r0, r5, #0
    // str r5, [r6, #4]
    // add r0, #0x94
    // ldrb r1, [r0]
    // add r0, r6, #0
    // add r0, #0x68
    // strb r1, [r0]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // add r0, r6, #0
    // add r0, #0x69
    // strb r1, [r0]
    // add r0, r7, #0
    // bl ov12_0223A8DC
    // add r3, r6, #0
    // str r0, [r6, #0xc]
    // add r7, r4, #0
    // add r3, #0x10
    // mov r2, #0xb
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0225A958
    // ldr r0, [r5, #0x20]
    // str r0, [r6, #8]
    // ldr r0, [r4, #0x4c]
    // cmp r0, #1
    // bne _0225A978
    // ldr r0, [r4, #0x50]
    // cmp r0, #0x19
    // bne _0225A978
    // mov r0, #0x1a
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // ldr r0, [r4, #0x4c]
    // cmp r0, #1
    // bne _0225A98C
    // ldr r0, [r4, #0x50]
    // cmp r0, #0x1a
    // bne _0225A98C
    // mov r0, #0x1a
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // ldrh r0, [r4, #2]
    // add r1, r6, #0
    // add r1, #0x6c
    // str r0, [sp]
    // add r0, r6, #0
    // ldr r2, [r4, #0x4c]
    // ldr r3, [r4, #0x50]
    // add r0, #0x6b
    // bl ov12_02261D30
    // ldr r0, _0225A9AC ; =ov12_0225FD14
    // add r1, r6, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225A9AC: .word ov12_0225FD14
    // TODO: decompile
}



void ov12_0225A9B0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0xc
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #9]
    // str r5, [r1]
    // ldr r0, [r4, #0x20]
    // str r0, [r1, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // strb r0, [r1, #8]
    // ldr r0, _0225A9DC ; =ov12_0225FF80
    // strb r2, [r1, #0xa]
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // _0225A9DC: .word ov12_0225FF80
    // TODO: decompile
}



void ov12_0225A9E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r7, r0, #0
    // ldr r0, [r6, #0x2c]
    // add r5, r2, #0
    // cmp r0, #0
    // bne _0225A9F2
    // bl GF_AssertFail
    // add r4, r6, #0
    // add r4, #0x28
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl MI_CpuFill8
    // str r7, [r4, #0xc]
    // add r0, r4, #0
    // ldrb r1, [r5]
    // add r0, #0x4c
    // strb r1, [r0]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r6, r0]
    // add r0, r4, #0
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // add r1, r0, #0
    // ldr r0, _0225AA60 ; =0x00000195
    // ldrb r0, [r6, r0]
    // bl BattleHpBar_Util_GetBarTypeFromBattlerSide
    // add r1, r4, #0
    // add r1, #0x25
    // strb r0, [r1]
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // str r0, [r4, #0x28]
    // ldrh r0, [r5, #4]
    // str r0, [r4, #0x2c]
    // ldr r0, [r5, #8]
    // str r0, [r4, #0x30]
    // add r0, r4, #0
    // ldrb r1, [r5, #1]
    // add r0, #0x48
    // strb r1, [r0]
    // ldr r1, [r5, #8]
    // ldr r0, _0225AA64 ; =0x00007FFF
    // cmp r1, r0
    // bne _0225AA50
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x30]
    // mov r2, #0xfa
    // ldr r0, _0225AA68 ; =ov12_0225FFDC
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225AA60: .word 0x00000195
    // _0225AA64: .word 0x00007FFF
    // _0225AA68: .word ov12_0225FFDC
    // TODO: decompile
}



void ov12_0225AA6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r7, r0, #0
    // ldr r0, [r6, #0x2c]
    // add r5, r2, #0
    // cmp r0, #0
    // bne _0225AA7E
    // bl GF_AssertFail
    // add r4, r6, #0
    // add r4, #0x28
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl MI_CpuFill8
    // str r7, [r4, #0xc]
    // add r0, r4, #0
    // ldrb r1, [r5]
    // add r0, #0x4c
    // strb r1, [r0]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r2, [r6, r0]
    // add r1, r4, #0
    // add r1, #0x24
    // strb r2, [r1]
    // ldr r1, [r5, #4]
    // add r0, r0, #1
    // str r1, [r4, #0x38]
    // ldr r1, [r5, #0xc]
    // str r1, [r4, #0x3c]
    // ldr r2, [r5, #8]
    // ldr r1, [r4, #0x38]
    // sub r1, r2, r1
    // str r1, [r4, #0x40]
    // ldrb r0, [r6, r0]
    // cmp r0, #0
    // bne _0225AACA
    // mov r2, #0xfa
    // ldr r0, _0225AADC ; =ov12_02260030
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x24
    // add r4, #0x4c
    // ldrb r1, [r1]
    // ldrb r2, [r4]
    // bl ov12_0226430C
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225AADC: .word ov12_02260030
    // TODO: decompile
}



void ov12_0225AAE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0x74
    // str r2, [sp]
    // bl Heap_Alloc
    // add r1, r0, #0
    // ldr r0, _0225ABB0 ; =0x00000195
    // ldrb r2, [r4, r0]
    // mov r0, #1
    // tst r0, r2
    // beq _0225AB00
    // mov r2, #2
    // b _0225AB02
    // mov r2, #0
    // add r0, r1, #0
    // add r0, #0x67
    // strb r2, [r0]
    // add r2, r1, #0
    // mov r0, #0
    // add r2, #0x66
    // strb r0, [r2]
    // str r5, [r1]
    // ldr r2, [sp]
    // str r4, [r1, #4]
    // ldrb r3, [r2]
    // add r2, r1, #0
    // add r2, #0x64
    // strb r3, [r2]
    // mov r2, #0x65
    // lsl r2, r2, #2
    // ldrb r3, [r4, r2]
    // add r2, r1, #0
    // add r2, #0x65
    // strb r3, [r2]
    // ldr r2, [r4, #0x20]
    // add r7, r1, #0
    // str r2, [r1, #8]
    // ldr r2, [sp]
    // ldrh r3, [r2, #2]
    // add r2, r1, #0
    // add r2, #0x68
    // strh r3, [r2]
    // ldr r2, [sp]
    // ldrb r3, [r2, #1]
    // add r2, r1, #0
    // add r2, #0x6a
    // strb r3, [r2]
    // ldr r2, [sp]
    // ldrb r3, [r2, #8]
    // add r2, r1, #0
    // add r2, #0x6b
    // strb r3, [r2]
    // ldr r2, [sp]
    // ldr r2, [r2, #4]
    // str r2, [r1, #0x6c]
    // ldr r2, [sp]
    // ldrb r3, [r2, #9]
    // add r2, r1, #0
    // add r2, #0x70
    // strh r3, [r2]
    // ldr r2, [sp]
    // ldrb r3, [r2, #0xa]
    // add r2, r1, #0
    // add r2, #0x72
    // strh r3, [r2]
    // ldr r2, [sp]
    // add r3, r1, #0
    // mov ip, r2
    // mov r4, ip
    // ldrh r4, [r4, #0xc]
    // strh r4, [r7, #0x24]
    // ldr r4, [sp]
    // add r7, r7, #2
    // add r6, r4, r0
    // add r4, r1, r0
    // ldrb r5, [r6, #0x14]
    // add r4, #0x2c
    // strb r5, [r4]
    // add r4, r1, r0
    // ldrb r5, [r6, #0x18]
    // add r4, #0x30
    // strb r5, [r4]
    // add r4, r1, r0
    // ldrb r5, [r6, #0x1c]
    // add r4, #0x34
    // add r0, r0, #1
    // strb r5, [r4]
    // ldr r4, [r2, #0x20]
    // add r2, r2, #4
    // str r4, [r3, #0x38]
    // mov r4, ip
    // add r4, r4, #2
    // add r3, r3, #4
    // mov ip, r4
    // cmp r0, #4
    // blt _0225AB6E
    // ldr r0, _0225ABB4 ; =ov12_022600F0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225ABB0: .word 0x00000195
    // _0225ABB4: .word ov12_022600F0
    // TODO: decompile
}



void ov12_0225ABB8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // ldr r2, _0225ABE4 ; =0x00000195
    // mov r4, #1
    // ldrb r2, [r1, r2]
    // tst r2, r4
    // beq _0225ABCA
    // mov r4, #0x75
    // b _0225ABCC
    // sub r4, #0x76
    // mov r2, #0x65
    // lsl r2, r2, #2
    // ldrb r1, [r1, r2]
    // ldrb r2, [r5]
    // bl ov12_0226430C
    // ldrh r0, [r5, #2]
    // add r1, r4, #0
    // bl sub_0200602C
    // pop {r3, r4, r5, pc}
    // nop
    // _0225ABE4: .word 0x00000195
    // TODO: decompile
}



void ov12_0225ABE8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #6]
    // add r0, r4, #0
    // str r5, [r1]
    // add r0, #0x94
    // ldrb r0, [r0]
    // strb r0, [r1, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // strb r0, [r1, #5]
    // ldr r0, _0225AC18 ; =ov12_0226037C
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // nop
    // _0225AC18: .word ov12_0226037C
    // TODO: decompile
}



void ov12_0225AC1C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0x68
    // str r2, [sp]
    // bl Heap_Alloc
    // add r1, r0, #0
    // str r5, [r1]
    // ldr r0, [sp]
    // str r4, [r1, #4]
    // ldrb r2, [r0]
    // add r0, r1, #0
    // add r0, #0x60
    // strb r2, [r0]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r2, [r4, r0]
    // add r0, r1, #0
    // add r0, #0x61
    // strb r2, [r0]
    // add r2, r1, #0
    // mov r0, #0
    // add r2, #0x62
    // strb r0, [r2]
    // ldr r2, [sp]
    // add r7, r1, #0
    // ldrb r3, [r2, #1]
    // add r2, r1, #0
    // add r2, #0x63
    // strb r3, [r2]
    // ldr r2, [sp]
    // add r3, r1, #0
    // ldrb r2, [r2, #2]
    // str r2, [r1, #0x64]
    // ldr r2, [sp]
    // mov ip, r2
    // mov r4, ip
    // ldrh r4, [r4, #4]
    // strh r4, [r7, #0x20]
    // ldr r4, [sp]
    // add r7, r7, #2
    // add r6, r4, r0
    // add r4, r1, r0
    // ldrb r5, [r6, #0xc]
    // add r4, #0x28
    // strb r5, [r4]
    // add r4, r1, r0
    // ldrb r5, [r6, #0x10]
    // add r4, #0x2c
    // strb r5, [r4]
    // add r4, r1, r0
    // ldrb r5, [r6, #0x14]
    // add r4, #0x30
    // add r0, r0, #1
    // strb r5, [r4]
    // ldr r4, [r2, #0x18]
    // add r2, r2, #4
    // str r4, [r3, #0x34]
    // mov r4, ip
    // add r4, r4, #2
    // add r3, r3, #4
    // mov ip, r4
    // cmp r0, #4
    // blt _0225AC68
    // ldr r0, _0225ACAC ; =ov12_02260418
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225ACAC: .word ov12_02260418
    // TODO: decompile
}



void ov12_0225ACB0(void) {
    GF_AssertFail(*((u32*)(r1 + 0x2c)));
    // add r0, #0x72
    // strb r1, [r0]
    // add r0, #0x28
    ov12_0226498C(r5, *((u32*)(r5 + 0x50)), (1 << 8));
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
    ov12_0226430C(r6, (0x65 << 2));
}



void ov12_0225ACE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // add r6, r0, #0
    // add r7, r2, #0
    // bl BattleSystem_GetTrainerIndex
    // str r0, [sp, #4]
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r6, [r4]
    // ldrb r0, [r7]
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // strb r0, [r4, #5]
    // add r0, r6, #0
    // bl BattleSystem_GetTextFrameDelay
    // str r0, [sp]
    // mov r2, #0x65
    // lsl r2, r2, #2
    // ldrb r2, [r5, r2]
    // ldrb r3, [r7, #1]
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // bl BattleSystem_PrintTrainerMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225AD40 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225AD40: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225AD44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // add r3, sp, #4
    // add r6, r1, #0
    // add r7, r2, #0
    // bl ov12_02261390
    // add r0, r5, #0
    // bl BattleSystem_GetMessageLoader
    // str r0, [sp]
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // ldrb r0, [r7]
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, sp, #4
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225AD98 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225AD98: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225AD9C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // add r3, sp, #4
    // add r6, r1, #0
    // add r7, r2, #0
    // bl ov12_02261464
    // add r0, r5, #0
    // bl BattleSystem_GetMessageLoader
    // str r0, [sp]
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // ldrb r0, [r7]
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, sp, #4
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225ADF0 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225ADF0: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225ADF4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r2, sp, #0
    // add r6, r1, #0
    // bl ov12_02261544
    // add r0, r5, #0
    // bl BattleSystem_GetMessageLoader
    // add r7, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // mov r0, #0x22
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, sp, #0
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225AE44 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0225AE44: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225AE48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // add r3, sp, #4
    // add r6, r1, #0
    // add r7, r2, #0
    // bl ov12_022615F0
    // add r0, r5, #0
    // bl BattleSystem_GetMessageLoader
    // str r0, [sp]
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // ldrb r0, [r7]
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, sp, #4
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225AE9C ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225AE9C: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225AEA0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0xc
    // bl Heap_Alloc
    // add r1, r0, #0
    // add r0, r4, #0
    // str r5, [r1]
    // add r0, #0x94
    // ldrb r0, [r0]
    // mov r2, #0
    // strb r0, [r1, #8]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // add r4, #0x28
    // strb r0, [r1, #9]
    // strb r2, [r1, #0xa]
    // ldr r0, _0225AED4 ; =ov12_02260584
    // str r4, [r1, #4]
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // nop
    // _0225AED4: .word ov12_02260584
    // TODO: decompile
}



void ov12_0225AED8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // ldr r1, _0225AF6C ; =0x00000196
    // add r4, r2, #0
    // ldrb r2, [r5, r1]
    // add r6, r0, #0
    // cmp r2, #0
    // bne _0225AF2A
    // bl BattleSystem_GetMessageLoader
    // str r0, [sp]
    // mov r0, #5
    // mov r1, #0xc
    // bl Heap_Alloc
    // add r7, r0, #0
    // str r6, [r7]
    // ldrb r0, [r4]
    // strb r0, [r7, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // strb r0, [r7, #5]
    // mov r0, #0
    // strb r0, [r7, #7]
    // add r0, r6, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r1, [sp]
    // add r0, r6, #0
    // add r2, r4, #4
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r7, #6]
    // ldr r0, _0225AF70 ; =ov12_02260614
    // add r1, r7, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r2, #1
    // bne _0225AF46
    // sub r1, r1, #2
    // ldrb r1, [r5, r1]
    // bl ov12_02263A00
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
    // add r0, r6, #0
    // bl ov12_0226430C
    // pop {r3, r4, r5, r6, r7, pc}
    // bl BattleSystem_GetBattleType
    // mov r1, #4
    // tst r0, r1
    // bne _0225AF5C
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // add r0, r6, #0
    // bl ov12_02263A00
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
    // add r0, r6, #0
    // bl ov12_0226430C
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225AF6C: .word 0x00000196
    // _0225AF70: .word ov12_02260614
    // TODO: decompile
}



void ov12_0225AF74(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r4, r6, #0
    // add r4, #0x28
    // add r7, r0, #0
    // add r5, r2, #0
    // mov r0, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl MIi_CpuClearFast
    // mov r0, #0x65
    // str r7, [r4, #0xc]
    // lsl r0, r0, #2
    // ldrb r1, [r6, r0]
    // add r0, r4, #0
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // add r1, r0, #0
    // ldr r0, _0225B024 ; =0x00000195
    // ldrb r0, [r6, r0]
    // bl BattleHpBar_Util_GetBarTypeFromBattlerSide
    // add r1, r4, #0
    // add r1, #0x25
    // strb r0, [r1]
    // add r0, r4, #0
    // ldrb r1, [r5]
    // add r0, #0x4c
    // mov r2, #0
    // strb r1, [r0]
    // mov r0, #2
    // ldrsh r0, [r5, r0]
    // str r0, [r4, #0x28]
    // ldrh r0, [r5, #4]
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // ldrb r1, [r5, #1]
    // add r0, #0x48
    // strb r1, [r0]
    // ldrb r0, [r5, #7]
    // lsl r0, r0, #0x19
    // lsr r1, r0, #0x1e
    // add r0, r4, #0
    // add r0, #0x49
    // strb r1, [r0]
    // str r2, [r4, #0x30]
    // ldr r0, [r5, #8]
    // sub r2, #0x21
    // str r0, [r4, #0x38]
    // ldr r0, [r5, #0xc]
    // str r0, [r4, #0x3c]
    // add r0, r4, #0
    // ldrb r1, [r5, #6]
    // add r0, #0x26
    // strb r1, [r0]
    // ldrb r0, [r5, #7]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1b
    // add r0, r4, #0
    // add r0, #0x4a
    // strb r1, [r0]
    // ldrb r0, [r5, #7]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x1f
    // add r0, r4, #0
    // add r0, #0x4b
    // strb r1, [r0]
    // add r0, r4, #0
    // ldr r1, [r5, #0x10]
    // add r0, #0x27
    // strb r1, [r0]
    // ldr r1, [r4, #0x28]
    // add r0, r4, #0
    // bl ov12_0226498C
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x24
    // add r4, #0x4c
    // ldrb r1, [r1]
    // ldrb r2, [r4]
    // bl ov12_0226430C
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225B024: .word 0x00000195
    // TODO: decompile
}



void ov12_0225B028(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // add r4, r2, #0
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #0xa]
    // str r5, [r1]
    // ldrb r0, [r4]
    // strb r0, [r1, #8]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r1, #9]
    // ldrh r0, [r4, #2]
    // strh r0, [r1, #0xc]
    // ldrb r0, [r4, #1]
    // strb r0, [r1, #0xe]
    // ldr r0, _0225B05C ; =ov12_022609F8
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // _0225B05C: .word ov12_022609F8
    // TODO: decompile
}



void ov12_0225B060(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // add r4, r2, #0
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #0xa]
    // str r6, [r1]
    // ldr r0, [r5, #0x20]
    // str r0, [r1, #4]
    // ldrb r0, [r4]
    // strb r0, [r1, #8]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // strb r0, [r1, #9]
    // ldrb r0, [r4, #1]
    // strb r0, [r1, #0xb]
    // strb r2, [r1, #0xc]
    // ldrb r0, [r4, #2]
    // strb r0, [r1, #0xd]
    // ldr r0, _0225B09C ; =ov12_02260B30
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // nop
    // _0225B09C: .word ov12_02260B30
    // TODO: decompile
}



void ov12_0225B0A0(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // add r4, r2, #0
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r0, #0
    // strb r0, [r1, #7]
    // str r6, [r1]
    // ldrb r2, [r4]
    // strb r2, [r1, #4]
    // mov r2, #0x65
    // lsl r2, r2, #2
    // ldrb r3, [r5, r2]
    // add r2, r2, #1
    // strb r3, [r1, #5]
    // ldrb r2, [r5, r2]
    // strb r2, [r1, #6]
    // add r2, r4, r0
    // ldrb r3, [r2, #2]
    // add r2, r1, r0
    // add r0, r0, #1
    // strb r3, [r2, #8]
    // cmp r0, #6
    // blt _0225B0CA
    // ldr r0, _0225B0E4 ; =ov12_02260BA0
    // mov r2, #0
    // strb r2, [r1, #0xe]
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // _0225B0E4: .word ov12_02260BA0
    // TODO: decompile
}



void ov12_0225B0E8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // add r6, r2, #0
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #7]
    // str r5, [r1]
    // ldrb r0, [r6]
    // strb r0, [r1, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r3, [r4, r0]
    // add r0, r0, #1
    // strb r3, [r1, #5]
    // ldrb r0, [r4, r0]
    // strb r0, [r1, #6]
    // ldr r0, _0225B11C ; =ov12_02260C58
    // strb r2, [r1, #0xe]
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // _0225B11C: .word ov12_02260C58
    // TODO: decompile
}



void ov12_0225B120(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // add r4, r2, #0
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r0, #0
    // strb r0, [r1, #7]
    // str r6, [r1]
    // ldrb r2, [r4]
    // strb r2, [r1, #4]
    // mov r2, #0x65
    // lsl r2, r2, #2
    // ldrb r3, [r5, r2]
    // add r2, r2, #1
    // strb r3, [r1, #5]
    // ldrb r2, [r5, r2]
    // strb r2, [r1, #6]
    // add r2, r4, r0
    // ldrb r3, [r2, #2]
    // add r2, r1, r0
    // add r0, r0, #1
    // strb r3, [r2, #8]
    // cmp r0, #6
    // blt _0225B14A
    // mov r0, #1
    // strb r0, [r1, #0xe]
    // ldr r0, _0225B168 ; =ov12_02260BA0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // nop
    // _0225B168: .word ov12_02260BA0
    // TODO: decompile
}



void ov12_0225B16C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // add r6, r2, #0
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #7]
    // str r5, [r1]
    // ldrb r0, [r6]
    // strb r0, [r1, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r3, [r4, r0]
    // add r0, r0, #1
    // strb r3, [r1, #5]
    // ldrb r0, [r4, r0]
    // strb r0, [r1, #6]
    // mov r0, #1
    // strb r0, [r1, #0xe]
    // ldr r0, _0225B1A4 ; =ov12_02260C58
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // nop
    // _0225B1A4: .word ov12_02260C58
    // TODO: decompile
}



void ov12_0225B1A8(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // ldr r1, _0225B1F8 ; =0x00000196
    // add r5, r0, #0
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // bne _0225B1E6
    // bl BattleSystem_GetMessageLoader
    // add r1, r0, #0
    // ldr r2, _0225B1FC ; =0x0000039B
    // add r0, sp, #0
    // strh r2, [r0, #2]
    // mov r3, #0
    // strb r3, [r0, #1]
    // add r0, r5, #0
    // add r2, sp, #0
    // bl BattleSystem_PrintBattleMessage
    // add r0, r5, #0
    // mov r1, #0
    // bl BattleSystem_GetWindow
    // mov r1, #1
    // bl WaitingIcon_New
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov12_0223BB80
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x37
    // bl ov12_0226430C
    // add sp, #0x24
    // pop {r4, r5, pc}
    // _0225B1F8: .word 0x00000196
    // _0225B1FC: .word 0x0000039B
    // TODO: decompile
}



void ov12_0225B200(void) {
    // ldrb r3, [r4, r3]
    // add r2, sp, #0
    ov12_02261CA8(r2, (0x65 << 2));
    // add r0, sp, #0
    ov07_0223494C(5);
    // ldrb r1, [r4, r1]
    // ldrb r2, [r6]
    ov12_0226430C(r5, (0x65 << 2));
}



void ov12_0225B234(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #0xe]
    // str r5, [r1]
    // add r0, r4, #0
    // str r4, [r1, #4]
    // add r0, #0x94
    // ldrb r0, [r0]
    // strb r0, [r1, #0xc]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // strb r0, [r1, #0xd]
    // ldr r0, [r4, #0x20]
    // str r0, [r1, #8]
    // ldr r0, _0225B268 ; =ov12_02260CDC
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // _0225B268: .word ov12_02260CDC
    // TODO: decompile
}



void ov12_0225B26C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #5
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r1, r0, #0
    // mov r2, #0
    // strb r2, [r1, #0xe]
    // str r5, [r1]
    // add r0, r4, #0
    // str r4, [r1, #4]
    // add r0, #0x94
    // ldrb r0, [r0]
    // strb r0, [r1, #0xc]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // strb r0, [r1, #0xd]
    // ldr r0, [r4, #0x20]
    // str r0, [r1, #8]
    // ldr r0, _0225B2A0 ; =ov12_02260D28
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // _0225B2A0: .word ov12_02260D28
    // TODO: decompile
}



void ov12_0225B2A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r2, sp, #0
    // add r6, r1, #0
    // bl ov12_02261928
    // add r0, r5, #0
    // bl BattleSystem_GetMessageLoader
    // add r7, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // mov r0, #0x3b
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, sp, #0
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225B2F4 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0225B2F4: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225B2F8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r3, sp, #0
    // add r6, r1, #0
    // bl ov12_022619E4
    // add r0, r5, #0
    // bl BattleSystem_GetMessageLoader
    // add r7, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // mov r0, #0x3c
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, sp, #0
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225B348 ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0225B348: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225B34C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r2, sp, #0
    // add r6, r1, #0
    // bl ov12_02261AD4
    // add r0, r5, #0
    // bl BattleSystem_GetMessageLoader
    // add r7, r0, #0
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // mov r0, #0x3d
    // strb r0, [r4, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r0, [r6, r0]
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, sp, #0
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #6]
    // ldr r0, _0225B39C ; =ov12_022605D0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0225B39C: .word ov12_022605D0
    // TODO: decompile
}



void ov12_0225B3A0(void) {
    // ldrb r3, [r4, r3]
    // add r2, sp, #0
    ov12_02261CA8(r2, (0x65 << 2));
    // add r0, sp, #0
    ov07_02234A20(5);
    // ldrb r1, [r4, r1]
    // ldrb r2, [r6]
    ov12_0226430C(r5, (0x65 << 2));
}



void ov12_0225B3D4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // ldr r0, _0225B424 ; =0x00000195
    // mov r1, #1
    // ldrb r0, [r5, r0]
    // add r4, r2, #0
    // tst r0, r1
    // beq _0225B3EA
    // mov r1, #0x75
    // b _0225B3EC
    // sub r1, #0x76
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // beq _0225B3FC
    // cmp r0, #1
    // beq _0225B40C
    // cmp r0, #2
    // beq _0225B404
    // b _0225B412
    // ldr r0, _0225B428 ; =0x000006FE
    // bl sub_0200602C
    // b _0225B412
    // ldr r0, _0225B42C ; =0x000006FC
    // bl sub_0200602C
    // b _0225B412
    // ldr r0, _0225B430 ; =0x000006FD
    // bl sub_0200602C
    // mov r1, #0x65
    // lsl r1, r1, #2
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
    // add r0, r6, #0
    // bl ov12_0226430C
    // pop {r4, r5, r6, pc}
    // nop
    // _0225B424: .word 0x00000195
    // _0225B428: .word 0x000006FE
    // _0225B42C: .word 0x000006FC
    // _0225B430: .word 0x000006FD
    // TODO: decompile
}



void ov12_0225B434(void) {
    PlayBGM(*((u16*)(r2 + 2)));
    // ldrb r1, [r5, r1]
    // ldrb r2, [r4]
    ov12_0226430C(r6, (0x65 << 2));
}



void ov12_0225B454(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // mov r0, #5
    // mov r1, #0xc
    // add r5, r2, #0
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0xc
    // add r4, r0, #0
    // bl MI_CpuFill8
    // mov r2, #0
    // strb r2, [r4, #6]
    // str r6, [r4]
    // ldrb r0, [r5]
    // add r1, r4, #0
    // strb r0, [r4, #4]
    // ldrb r0, [r5, #1]
    // strb r0, [r4, #7]
    // mov r0, #0x65
    // strb r2, [r4, #8]
    // lsl r0, r0, #2
    // ldrb r0, [r7, r0]
    // strb r0, [r4, #5]
    // ldr r0, _0225B490 ; =ov12_02260D84
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225B490: .word ov12_02260D84
    // TODO: decompile
}



void ov12_0225B494(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225B4B8: ; jump table
    *((u32*)(r4 + 0x20)) = 0x1c;
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) + 1);
    *((u32*)(r4 + 0x20)) = (*((u32*)(r4 + 0x20)) - 1);
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) + 1);
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), (*((u16*)(*((u8*)(r4 + 0x12)) + 6)) << 0x10));
    // add r1, sp, #0x14
    // ldrsh r0, [r1, r0]
    ManagedSprite_OffsetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), 8, 0);
    ManagedSprite_SetPositionXY(*((u32*)r0), 0xc0, 0x58);
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 0xc))));
    // add r3, sp, #0x14
    // ldrsh r2, [r3, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0, 2);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0);
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r0, r1
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r0, [r3, r2]
    // sub r0, #0x18
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r2, [r3, r2]
    // neg r2, r2
    Pokepic_AddAttr(*((u32*)(r4 + 8)), 0, 2);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0);
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r1, r0
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r0, [r3, r2]
    // sub r0, #0x10
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r2, [r3, r2]
    Pokepic_AddAttr(*((u32*)(r4 + 8)), 0, 2);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0);
    // ldrsh r1, [r4, r1]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0x2c, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0x2d, 0);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0, 0x14);
    // ldr r0, [r1, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x2c
    // ldrb r0, [r0]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)(r4 + 0x11)), *((u32*)(r4 + 0x1c)), *((u32*)(r4 + 8)));
    ManagedSprite_SetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), 0xc0, 0x58);
    // str r2, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 8)), 8, 0, 0);
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) + 1);
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)(*((u8*)(r4 + 0x12)) + 1)));
    // add r0, sp, #0x14
    // ldrsh r0, [r0, r1]
    // sub r1, #0xa
    ManagedSprite_OffsetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), 2, 0);
    ManagedSprite_SetPositionXY(*((u32*)r0), 0x40, 0x88);
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 0xc))));
    // add r3, sp, #0x14
    // ldrsh r2, [r3, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0, 2);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0);
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r1, r0
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r0, [r3, r2]
    // sub r0, #0x18
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r2, [r3, r2]
    Pokepic_AddAttr(*((u32*)(r4 + 8)), 0, 2);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0);
    // add r3, sp, #0x14
    // ldrsh r1, [r3, r2]
    // sub r0, r0, r1
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r0, [r3, r2]
    // sub r0, #0x10
    *((u16*)(r3 + 2)) = r0;
    // ldrsh r2, [r3, r2]
    // neg r2, r2
    Pokepic_AddAttr(*((u32*)(r4 + 8)), 0, 2);
    // ldrsh r5, [r4, r0]
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0, r5);
    // ldr r0, [r1, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x2c
    // ldrb r0, [r0]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)(r4 + 0x11)), *((u32*)(r4 + 0x1c)), *((u32*)(r4 + 8)));
    ManagedSprite_SetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), 0x40, 0x88);
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) + 1);
    ov12_0223B750(*((u32*)r4));
    sub_02017068(*((u8*)(r4 + 0x11)));
    Pokepic_IsAnimFinished(*((u32*)(r4 + 8)));
    // add r2, sp, #0x18
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x18
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    *((u8*)(r4 + 0x12)) = 4;
    *((u8*)(r4 + 0x12)) = 0xff;
    ov07_0221C394(0xff);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    *((u8*)(r4 + 0x12)) = 0xff;
    sub_02005B58(0);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0x11)), *((u8*)(r4 + 0x10)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}



void ov12_0225B7B8(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225B7DC: ; jump table
    *((u32*)(r4 + 0x20)) = 0x1c;
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) + 1);
    *((u32*)(r4 + 0x20)) = (*((u32*)(r4 + 0x20)) - 1);
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) + 1);
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), (*((u16*)(*((u8*)(r4 + 0x12)) + 6)) << 0x10));
    // add r1, sp, #0x14
    // ldrsh r0, [r1, r0]
    ManagedSprite_OffsetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), 8, 0);
    ManagedSprite_SetPositionXY(*((u32*)r0), 0xc0, 0x58);
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 0xc))));
    Pokepic_AddAttr(*((u32*)(r4 + 8)), 1, 4);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    // ldrsh r1, [r4, r1]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0x2c, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0x2d, 0);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 1, 0x14);
    // ldr r0, [r1, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x2c
    // ldrb r0, [r0]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov12_02261F38(*((u32*)r4), *((u8*)(r4 + 0x11)), *((u32*)(r4 + 0x1c)), *((u32*)(r4 + 8)));
    ManagedSprite_SetPositionXY(*((u32*)*((u32*)(r4 + 0xc))), 0xc0, 0x58);
    // str r2, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 8)), 8, 0, 0);
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) + 1);
    ov12_0223B750(*((u32*)r4));
    sub_02017068(*((u8*)(r4 + 0x11)));
    Pokepic_IsAnimFinished(*((u32*)(r4 + 8)));
    // add r2, sp, #0x18
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x18
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    *((u8*)(r4 + 0x12)) = 4;
    *((u8*)(r4 + 0x12)) = 0xff;
    ov07_0221C394(0xff);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    *((u8*)(r4 + 0x12)) = 0xff;
    sub_02005B58(0);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0x11)), *((u8*)(r4 + 0x10)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}



void ov12_0225B960(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0xb0
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // cmp r0, #7
    // bls _0225B974
    // b _0225BDFC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B980: ; jump table
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x96
    // strb r1, [r0]
    // str r1, [r4, #0x10]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // ldr r0, [r4]
    // beq _0225B9C8
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x20
    // tst r0, r1
    // bne _0225BA06
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225BA06
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov07_0221FDFC
    // str r0, [r4, #0x10]
    // b _0225BA06
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x20
    // tst r0, r1
    // bne _0225BA06
    // ldr r0, [r4]
    // bl ov12_0223B688
    // cmp r0, #1
    // bne _0225B9F2
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225B9F2
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov07_0221FDFC
    // str r0, [r4, #0x10]
    // b _0225BA06
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0225BA06
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov07_0221FDFC
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0xb0
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // add r1, sp, #0x4c
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // add r1, r4, #0
    // add r2, r4, #0
    // str r0, [sp, #0x4c]
    // add r1, #0x81
    // add r2, #0x8c
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl BattleSystem_GetPartyMon
    // str r0, [sp, #0x54]
    // mov r0, #5
    // add r1, sp, #0x4c
    // bl ov07_02232694
    // str r0, [r4, #8]
    // bl ov07_022329B0
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0xb0
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233F20
    // cmp r0, #0
    // bne _0225BAA2
    // ldr r0, [r4, #8]
    // bl ov07_02232A04
    // cmp r0, #1
    // bne _0225BAA2
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233EA0
    // cmp r0, #1
    // bne _0225BAA2
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #4
    // bne _0225BAAC
    // add r0, r4, #0
    // add r0, #0x96
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x96
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x96
    // ldrb r0, [r0]
    // cmp r0, #0xc
    // bhs _0225BAA4
    // b _0225BE20
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x96
    // strb r1, [r0]
    // ldr r0, [r4]
    // bl ov12_0223A8D4
    // add r2, r4, #0
    // add r3, r4, #0
    // add r5, r0, #0
    // mov r0, #0x69
    // add r2, #0x86
    // add r3, #0x82
    // ldr r1, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldrh r2, [r2]
    // ldrb r3, [r3]
    // add r1, sp, #0x24
    // bl NARC_ReadPokepicAnimScript
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r3, [r0]
    // mov r0, #6
    // add r2, r4, #0
    // add r1, r3, #0
    // mul r1, r0
    // ldr r0, _0225BE24 ; =ov07_022377F4 + 2
    // add r2, #0x14
    // ldrsh r0, [r0, r1]
    // str r0, [sp]
    // ldr r0, _0225BE28 ; =ov07_022377F4 + 4
    // ldrsh r0, [r0, r1]
    // add r1, r5, #0
    // lsl r5, r3, #2
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x85
    // ldrb r0, [r0]
    // ldr r3, _0225BE2C ; =ov07_022377DC
    // str r0, [sp, #8]
    // mov r0, #0x90
    // ldrsb r0, [r4, r0]
    // ldrsh r3, [r3, r5]
    // str r0, [sp, #0xc]
    // mov r0, #0x91
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r0, #0x93
    // ldrb r0, [r0]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r0, [r0]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r4]
    // bl ov12_022612A4
    // ldr r1, [r4, #4]
    // mov r2, #0
    // str r0, [r1, #0x20]
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // ldr r0, [r0, #0x20]
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0x2c
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #6
    // ldr r0, [r0, #0x20]
    // mov r2, #1
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // mov r3, #0
    // lsl r1, r0, #1
    // ldr r0, _0225BE30 ; =ov12_0226D15A
    // ldrh r0, [r0, r1]
    // mov r1, #0x10
    // add r2, r1, #0
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_StartPaletteFade
    // ldr r0, [r4, #4]
    // mov r1, #6
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #8]
    // bl ov07_02232A44
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // ldr r0, _0225BE34 ; =0x00000706
    // bne _0225BB9A
    // mov r1, #0x75
    // bl sub_0200602C
    // b _0225BBA2
    // mov r1, #0x74
    // mvn r1, r1
    // bl sub_0200602C
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _0225BBB0
    // bl ov07_0221FE08
    // mov r0, #0
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0xb0
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233E88
    // cmp r0, #1
    // beq _0225BBDC
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x83
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // ldr r0, [r0, #0x20]
    // bl Pokepic_GetAttr
    // mov r1, #1
    // lsl r1, r1, #8
    // cmp r0, r1
    // bne _0225BC72
    // ldr r0, [r4, #8]
    // bl ov07_02232A54
    // cmp r0, #0
    // bne _0225BC72
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225BC0E
    // ldr r0, [r4, #4]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #0x69
    // ldr r3, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r2, r4, #0
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // str r0, [sp, #0x10]
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r3, [r3, #0x20]
    // bl ov12_02261F38
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // mov r2, #0
    // add r3, r2, #0
    // lsl r1, r0, #1
    // ldr r0, _0225BE30 ; =ov12_0226D15A
    // ldrh r0, [r0, r1]
    // mov r1, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_StartPaletteFade
    // mov r0, #5
    // add r4, #0x83
    // add sp, #0xb0
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // ldr r0, [r0, #0x20]
    // bl Pokepic_GetAttr
    // mov r2, #1
    // lsl r2, r2, #8
    // cmp r0, r2
    // ldr r0, [r4, #4]
    // blt _0225BD16
    // ldr r0, [r0, #0x20]
    // mov r1, #0xc
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r0, [r0, #0x20]
    // add r2, #0xf3
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225BCB2
    // ldr r0, [r4, #4]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #0x69
    // ldr r3, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r2, r4, #0
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // str r0, [sp, #0x10]
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r3, [r3, #0x20]
    // bl ov12_02261F38
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // mov r2, #0
    // mov r3, #1
    // lsl r1, r0, #1
    // ldr r0, _0225BE30 ; =ov12_0226D15A
    // ldrh r0, [r0, r1]
    // mov r1, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_StartPaletteFade
    // mov r0, #5
    // add r4, #0x83
    // add sp, #0xb0
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r0, #0x20]
    // mov r1, #0xc
    // mov r2, #0x20
    // bl Pokepic_AddAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // ldr r0, [r0, #0x20]
    // mov r2, #0x20
    // bl Pokepic_AddAttr
    // ldr r0, [r4, #4]
    // mov r1, #0x90
    // ldrsb r1, [r4, r1]
    // ldr r0, [r0, #0x20]
    // bl sub_0200914C
    // add sp, #0xb0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #8]
    // bl ov07_02232A54
    // cmp r0, #0
    // bne _0225BE20
    // mov r0, #6
    // add r4, #0x83
    // add sp, #0xb0
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4]
    // bl ov12_0223B750
    // add r1, r4, #0
    // add r1, #0x81
    // ldrb r1, [r1]
    // bl sub_02017068
    // cmp r0, #1
    // bne _0225BE20
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_IsAnimFinished
    // cmp r0, #0
    // bne _0225BE20
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233ECC
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x88
    // str r1, [r0]
    // ldr r0, [r4, #8]
    // bl ov07_02232AB8
    // add r0, r4, #0
    // add r0, #0x92
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225BDCC
    // mov r0, #5
    // bl ov07_0221BEDC
    // str r0, [r4, #0x24]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0xb
    // add r2, sp, #0x58
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #0x24]
    // add r3, sp, #0x58
    // bl ov12_02261B80
    // mov r0, #7
    // add r4, #0x83
    // add sp, #0xb0
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r0, #0xff
    // add r4, #0x83
    // add sp, #0xb0
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C394
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C3B0
    // cmp r0, #0
    // bne _0225BE20
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C3C0
    // ldr r0, [r4, #0x24]
    // bl ov07_0221BFE0
    // mov r0, #0xff
    // add r4, #0x83
    // add sp, #0xb0
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // bl sub_02005B58
    // add r1, r4, #0
    // add r2, r4, #0
    // add r1, #0x81
    // add r2, #0x80
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #0xb0
    // pop {r3, r4, r5, pc}
    // _0225BE24: .word ov07_022377F4 + 2
    // _0225BE28: .word ov07_022377F4 + 4
    // _0225BE2C: .word ov07_022377DC
    // _0225BE30: .word ov12_0226D15A
    // _0225BE34: .word 0x00000706
    // TODO: decompile
}



void ov12_0225BE38(void) {
    // push {r4, r5, lr}
    // sub sp, #0xfc
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // cmp r0, #6
    // bls _0225BE4C
    // b _0225C156
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BE58: ; jump table
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x96
    // strb r1, [r0]
    // str r1, [r4, #0x10]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // ldr r0, [r4]
    // beq _0225BE9E
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x20
    // tst r0, r1
    // bne _0225BEDC
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225BEDC
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov07_0221FDFC
    // str r0, [r4, #0x10]
    // b _0225BEDC
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x20
    // tst r0, r1
    // bne _0225BEDC
    // ldr r0, [r4]
    // bl ov12_0223B688
    // cmp r0, #1
    // bne _0225BEC8
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225BEC8
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov07_0221FDFC
    // str r0, [r4, #0x10]
    // b _0225BEDC
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0225BEDC
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov07_0221FDFC
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0xfc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // cmp r0, #4
    // bne _0225BF18
    // add r0, r4, #0
    // add r0, #0x96
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x96
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x96
    // ldrb r0, [r0]
    // cmp r0, #0xc
    // bhs _0225BF10
    // b _0225C17A
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x96
    // strb r1, [r0]
    // ldr r0, [r4]
    // bl ov12_0223A8D4
    // add r2, r4, #0
    // add r3, r4, #0
    // add r5, r0, #0
    // mov r0, #0x69
    // add r2, #0x86
    // add r3, #0x82
    // ldr r1, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldrh r2, [r2]
    // ldrb r3, [r3]
    // add r1, sp, #0x24
    // bl NARC_ReadPokepicAnimScript
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r1, [r0]
    // mov r0, #6
    // add r2, r4, #0
    // add r3, r1, #0
    // mul r3, r0
    // ldr r0, _0225C180 ; =ov07_022377F4 + 38
    // add r1, r5, #0
    // ldrsh r0, [r0, r3]
    // ldr r5, _0225C184 ; =ov07_022377F4 + 36
    // add r2, #0x14
    // str r0, [sp]
    // ldr r0, _0225C188 ; =ov07_022377F4 + 4
    // ldrsh r0, [r0, r3]
    // ldrsh r3, [r5, r3]
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x85
    // ldrb r0, [r0]
    // str r0, [sp, #8]
    // mov r0, #0x90
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0xc]
    // mov r0, #0x91
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r0, #0x93
    // ldrb r0, [r0]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r0, [r0]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r4]
    // bl ov12_022612A4
    // ldr r1, [r4, #4]
    // str r0, [r1, #0x20]
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // add r2, r1, #0
    // ldr r0, [r0, #0x20]
    // add r2, #0xf4
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r0, [r0, #0x20]
    // add r2, #0xf3
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0x2c
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #6
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _0225BFD4
    // bl ov07_0221FE08
    // mov r0, #0
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0xfc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // mov r0, #5
    // bl ov07_0221BEDC
    // str r0, [r4, #0x24]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0x29
    // add r2, sp, #0xa4
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #0x24]
    // add r3, sp, #0xa4
    // bl ov12_02261B80
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0xfc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C394
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C3B0
    // cmp r0, #0
    // beq _0225C036
    // b _0225C17A
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C3C0
    // ldr r0, [r4, #0x24]
    // bl ov07_0221BFE0
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0xfc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225C068
    // ldr r0, [r4, #4]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #0x69
    // ldr r3, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r2, r4, #0
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // str r0, [sp, #0x10]
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r3, [r3, #0x20]
    // bl ov12_02261F38
    // mov r0, #5
    // add r4, #0x83
    // add sp, #0xfc
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // ldr r0, [r4]
    // bl ov12_0223B750
    // add r1, r4, #0
    // add r1, #0x81
    // ldrb r1, [r1]
    // bl sub_02017068
    // cmp r0, #1
    // bne _0225C17A
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_IsAnimFinished
    // cmp r0, #0
    // bne _0225C17A
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233ECC
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x88
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0x92
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225C126
    // mov r0, #5
    // bl ov07_0221BEDC
    // str r0, [r4, #0x24]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0xb
    // add r2, sp, #0x4c
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #0x24]
    // add r3, sp, #0x4c
    // bl ov12_02261B80
    // mov r0, #6
    // add r4, #0x83
    // add sp, #0xfc
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // mov r0, #0xff
    // add r4, #0x83
    // add sp, #0xfc
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C394
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C3B0
    // cmp r0, #0
    // bne _0225C17A
    // ldr r0, [r4, #0x24]
    // bl ov07_0221C3C0
    // ldr r0, [r4, #0x24]
    // bl ov07_0221BFE0
    // mov r0, #0xff
    // add r4, #0x83
    // add sp, #0xfc
    // strb r0, [r4]
    // pop {r4, r5, pc}
    // mov r0, #0
    // bl sub_02005B58
    // add r1, r4, #0
    // add r2, r4, #0
    // add r1, #0x81
    // add r2, #0x80
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #0xfc
    // pop {r4, r5, pc}
    // nop
    // _0225C180: .word ov07_022377F4 + 38
    // _0225C184: .word ov07_022377F4 + 36
    // _0225C188: .word ov07_022377F4 + 4
    // TODO: decompile
}



void ov12_0225C18C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x1d8
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r1, r4, #0
    // add r1, #0x83
    // ldrb r1, [r1]
    // add r5, r0, #0
    // cmp r1, #0xb
    // bls _0225C1A8
    // b _0225C6A6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C1B4: ; jump table
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r1, [r0]
    // ldr r0, _0225C4FC ; =ov12_0226D120
    // ldrb r0, [r0, r1]
    // str r0, [sp, #0x58]
    // mov r0, #5
    // str r0, [sp, #0x5c]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r0, [r0]
    // str r0, [sp, #0x64]
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // str r0, [sp, #0x68]
    // ldr r0, [r4]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x74]
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // str r0, [sp, #0x78]
    // mov r2, #1
    // mov r1, #0
    // add r0, r4, #0
    // str r2, [sp, #0x6c]
    // str r1, [sp, #0x70]
    // add r0, #0x94
    // ldrh r0, [r0]
    // cmp r0, #1
    // bne _0225C212
    // str r2, [sp, #0x60]
    // b _0225C214
    // str r1, [sp, #0x60]
    // add r0, sp, #0x58
    // bl ov07_02233DB8
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov12_0223A8D4
    // add r2, r4, #0
    // add r3, r4, #0
    // add r5, r0, #0
    // mov r0, #0x69
    // add r2, #0x86
    // add r3, #0x82
    // ldr r1, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldrh r2, [r2]
    // ldrb r3, [r3]
    // add r1, sp, #0x30
    // bl NARC_ReadPokepicAnimScript
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r3, [r0]
    // mov r0, #6
    // add r2, r4, #0
    // add r1, r3, #0
    // mul r1, r0
    // ldr r0, _0225C500 ; =ov07_022377F4 + 2
    // add r2, #0x14
    // ldrsh r0, [r0, r1]
    // str r0, [sp]
    // ldr r0, _0225C504 ; =ov07_022377F4 + 4
    // ldrsh r0, [r0, r1]
    // add r1, r5, #0
    // lsl r5, r3, #2
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x85
    // ldrb r0, [r0]
    // ldr r3, _0225C508 ; =ov07_022377DC
    // str r0, [sp, #8]
    // mov r0, #0x90
    // ldrsb r0, [r4, r0]
    // ldrsh r3, [r3, r5]
    // str r0, [sp, #0xc]
    // mov r0, #0x91
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r0, #0x93
    // ldrb r0, [r0]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r0, [r0]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x30
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r4]
    // bl ov12_022612A4
    // ldr r1, [r4, #4]
    // mov r2, #0
    // str r0, [r1, #0x20]
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // ldr r0, [r0, #0x20]
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0x2c
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #6
    // ldr r0, [r0, #0x20]
    // mov r2, #1
    // bl Pokepic_SetAttr
    // mov r0, #0
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // mov r1, #5
    // bl ov07_0221FDFC
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1d8
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r1, sp, #0x24
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r0, [r0]
    // add r1, r4, #0
    // add r2, r4, #0
    // str r0, [sp, #0x24]
    // add r1, #0x81
    // add r2, #0x8c
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl BattleSystem_GetPartyMon
    // str r0, [sp, #0x2c]
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // add r1, sp, #0x24
    // str r0, [sp, #0x28]
    // mov r0, #5
    // bl ov07_02232694
    // str r0, [r4, #8]
    // bl ov07_022329B0
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1d8
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0xc]
    // bl ov07_02233F20
    // cmp r0, #0
    // beq _0225C346
    // add r0, r4, #0
    // add r0, #0x94
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0225C35A
    // ldr r0, [r4, #8]
    // bl ov07_02232A04
    // cmp r0, #1
    // bne _0225C35A
    // ldr r0, [r4, #0xc]
    // bl ov07_02233EA0
    // cmp r0, #1
    // beq _0225C35C
    // b _0225C6C4
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _0225C366
    // bl ov07_0221FE08
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // mov r3, #0
    // lsl r1, r0, #1
    // ldr r0, _0225C50C ; =ov12_0226D15A
    // ldrh r0, [r0, r1]
    // mov r1, #0x10
    // add r2, r1, #0
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_StartPaletteFade
    // ldr r0, [r4, #4]
    // mov r1, #6
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #8]
    // bl ov07_02232A44
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // ldr r0, _0225C510 ; =0x00000706
    // bne _0225C3A8
    // mov r1, #0x75
    // bl sub_0200602C
    // b _0225C3B0
    // mov r1, #0x74
    // mvn r1, r1
    // bl sub_0200602C
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1d8
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0xc]
    // bl ov07_02233E88
    // cmp r0, #1
    // beq _0225C3D8
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x83
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // ldr r0, [r0, #0x20]
    // bl Pokepic_GetAttr
    // mov r1, #1
    // lsl r1, r1, #8
    // cmp r0, r1
    // bne _0225C46E
    // ldr r0, [r4, #8]
    // bl ov07_02232A54
    // cmp r0, #0
    // bne _0225C46E
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225C40A
    // ldr r0, [r4, #4]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #0x69
    // ldr r3, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r2, r4, #0
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // str r0, [sp, #0x10]
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r3, [r3, #0x20]
    // bl ov12_02261F38
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // mov r2, #0
    // add r3, r2, #0
    // lsl r1, r0, #1
    // ldr r0, _0225C50C ; =ov12_0226D15A
    // ldrh r0, [r0, r1]
    // mov r1, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_StartPaletteFade
    // mov r0, #5
    // add r4, #0x83
    // add sp, #0x1d8
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // ldr r0, [r0, #0x20]
    // bl Pokepic_GetAttr
    // mov r2, #1
    // lsl r2, r2, #8
    // cmp r0, r2
    // ldr r0, [r4, #4]
    // blt _0225C52C
    // ldr r0, [r0, #0x20]
    // mov r1, #0xc
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r0, [r0, #0x20]
    // add r2, #0xf3
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225C4AE
    // ldr r0, [r4, #4]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #0x69
    // ldr r3, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r2, r4, #0
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // str r0, [sp, #0x10]
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r3, [r3, #0x20]
    // bl ov12_02261F38
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // mov r2, #0
    // mov r3, #1
    // lsl r1, r0, #1
    // ldr r0, _0225C50C ; =ov12_0226D15A
    // b _0225C514
    // _0225C4FC: .word ov12_0226D120
    // _0225C500: .word ov07_022377F4 + 2
    // _0225C504: .word ov07_022377F4 + 4
    // _0225C508: .word ov07_022377DC
    // _0225C50C: .word ov12_0226D15A
    // _0225C510: .word 0x00000706
    // ldrh r0, [r0, r1]
    // mov r1, #0x10
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_StartPaletteFade
    // mov r0, #5
    // add r4, #0x83
    // add sp, #0x1d8
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r0, #0x20]
    // mov r1, #0xc
    // mov r2, #0x20
    // bl Pokepic_AddAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // ldr r0, [r0, #0x20]
    // mov r2, #0x20
    // bl Pokepic_AddAttr
    // ldr r0, [r4, #4]
    // mov r1, #0x90
    // ldrsb r1, [r4, r1]
    // ldr r0, [r0, #0x20]
    // bl sub_0200914C
    // add sp, #0x1d8
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #8]
    // bl ov07_02232A54
    // cmp r0, #0
    // bne _0225C586
    // mov r0, #6
    // add r4, #0x83
    // add sp, #0x1d8
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4]
    // bl ov12_0223B750
    // add r1, r4, #0
    // add r1, #0x81
    // ldrb r1, [r1]
    // bl sub_02017068
    // cmp r0, #1
    // bne _0225C586
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_IsAnimFinished
    // cmp r0, #0
    // beq _0225C588
    // b _0225C6C4
    // ldr r0, [r4, #0xc]
    // bl ov07_02233ECC
    // ldr r0, [r4, #8]
    // bl ov07_02232AB8
    // add r0, r4, #0
    // add r0, #0x92
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225C5D0
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0xb
    // add r2, sp, #0x180
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x180
    // bl ov12_02261B80
    // mov r0, #7
    // add r4, #0x83
    // add sp, #0x1d8
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // mov r0, #8
    // add r4, #0x83
    // add sp, #0x1d8
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // bl ov07_0221C394
    // add r0, r5, #0
    // bl ov07_0221C3B0
    // cmp r0, #0
    // bne _0225C6C4
    // add r0, r5, #0
    // bl ov07_0221C3C0
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1d8
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0225C640
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0xf
    // add r2, sp, #0x128
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x128
    // bl ov12_02261B80
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1d8
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // mov r0, #0xff
    // add r4, #0x83
    // add sp, #0x1d8
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r3, r4, #0
    // add r3, #0x81
    // ldrb r3, [r3]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x28
    // add r2, sp, #0xd8
    // bl ov12_02261CA8
    // add r0, sp, #0xd8
    // mov r1, #5
    // bl ov07_02234A20
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0x10
    // add r2, sp, #0x80
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x80
    // bl ov12_02261B80
    // mov r0, #0x1a
    // ldr r1, [r4, #4]
    // mov r2, #1
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1d8
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r1, r4, #0
    // add r2, r4, #0
    // add r1, #0x81
    // add r2, #0x80
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x1d8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov12_0225C6C8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1fc
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r1, r4, #0
    // add r1, #0x83
    // ldrb r1, [r1]
    // add r5, r0, #0
    // cmp r1, #9
    // bls _0225C6E4
    // b _0225C98C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C6F0: ; jump table
    // ldr r0, [r4]
    // bl ov12_0223A8D4
    // add r2, r4, #0
    // add r3, r4, #0
    // add r5, r0, #0
    // mov r0, #0x69
    // add r2, #0x86
    // add r3, #0x82
    // ldr r1, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldrh r2, [r2]
    // ldrb r3, [r3]
    // add r1, sp, #0x24
    // bl NARC_ReadPokepicAnimScript
    // add r0, r4, #0
    // add r0, #0x82
    // ldrb r1, [r0]
    // mov r0, #6
    // add r2, r4, #0
    // add r3, r1, #0
    // mul r3, r0
    // ldr r0, _0225C9B0 ; =ov07_022377F4 + 38
    // add r1, r5, #0
    // ldrsh r0, [r0, r3]
    // ldr r5, _0225C9B4 ; =ov07_022377F4 + 36
    // add r2, #0x14
    // str r0, [sp]
    // ldr r0, _0225C9B8 ; =ov07_022377F4 + 4
    // ldrsh r0, [r0, r3]
    // ldrsh r3, [r5, r3]
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x85
    // ldrb r0, [r0]
    // str r0, [sp, #8]
    // mov r0, #0x90
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0xc]
    // mov r0, #0x91
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r0, #0x93
    // ldrb r0, [r0]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r0, [r0]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x24
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r4]
    // bl ov12_022612A4
    // ldr r1, [r4, #4]
    // str r0, [r1, #0x20]
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // add r2, r1, #0
    // ldr r0, [r0, #0x20]
    // add r2, #0xf4
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r0, [r0, #0x20]
    // add r2, #0xf3
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #0x2c
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #4]
    // mov r1, #6
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1fc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0x29
    // add r2, sp, #0x1a4
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x1a4
    // bl ov12_02261B80
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1fc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0225C810
    // ldr r0, [r4, #4]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x20]
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #0x69
    // ldr r3, [r4, #4]
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r2, r4, #0
    // add r1, #0x81
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r2, #0x82
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x84
    // ldrb r0, [r0]
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // str r0, [sp, #0x10]
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r3, [r3, #0x20]
    // bl ov12_02261F38
    // mov r0, #4
    // add r4, #0x83
    // add sp, #0x1fc
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4]
    // bl ov12_0223B750
    // add r1, r4, #0
    // add r1, #0x81
    // ldrb r1, [r1]
    // bl sub_02017068
    // cmp r0, #1
    // bne _0225C878
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x20]
    // bl Pokepic_IsAnimFinished
    // cmp r0, #0
    // beq _0225C87A
    // b _0225C9AA
    // add r0, r4, #0
    // add r0, #0x92
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225C8B6
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0xb
    // add r2, sp, #0x14c
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x14c
    // bl ov12_02261B80
    // mov r0, #5
    // add r4, #0x83
    // add sp, #0x1fc
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #6
    // add r4, #0x83
    // add sp, #0x1fc
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // bl ov07_0221C394
    // add r0, r5, #0
    // bl ov07_0221C3B0
    // cmp r0, #0
    // bne _0225C9AA
    // add r0, r5, #0
    // bl ov07_0221C3C0
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1fc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0225C926
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0xf
    // add r2, sp, #0xf4
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0xf4
    // bl ov12_02261B80
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1fc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0xff
    // add r4, #0x83
    // add sp, #0x1fc
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r3, r4, #0
    // add r3, #0x81
    // ldrb r3, [r3]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x28
    // add r2, sp, #0xa4
    // bl ov12_02261CA8
    // add r0, sp, #0xa4
    // mov r1, #5
    // bl ov07_02234A20
    // add r0, r4, #0
    // add r0, #0x81
    // ldrb r1, [r0]
    // mov r0, #0x10
    // add r2, sp, #0x4c
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x4c
    // bl ov12_02261B80
    // mov r0, #0x1a
    // ldr r1, [r4, #4]
    // mov r2, #1
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // add r0, r4, #0
    // add r0, #0x83
    // ldrb r0, [r0]
    // add r4, #0x83
    // add sp, #0x1fc
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r1, r4, #0
    // add r2, r4, #0
    // add r1, #0x81
    // add r2, #0x80
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x1fc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225C9B0: .word ov07_022377F4 + 38
    // _0225C9B4: .word ov07_022377F4 + 36
    // _0225C9B8: .word ov07_022377F4 + 4
    // TODO: decompile
}



void ov12_0225C9BC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x178
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r1, r4, #0
    // add r1, #0x6b
    // ldrb r1, [r1]
    // add r5, r0, #0
    // cmp r1, #8
    // bhi _0225CAA6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225C9E2: ; jump table
    // ldr r0, [r4, #0x70]
    // cmp r0, #0
    // beq _0225CA32
    // add r0, r4, #0
    // add r0, #0x69
    // ldrb r1, [r0]
    // mov r0, #0xf
    // add r2, sp, #0x120
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x120
    // bl ov12_02261B80
    // add r0, r4, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // add sp, #0x178
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // mov r0, #4
    // add r4, #0x6b
    // add sp, #0x178
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r3, r4, #0
    // add r3, #0x69
    // ldrb r3, [r3]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x10
    // add r2, sp, #0xd0
    // bl ov12_02261CA8
    // add r0, sp, #0xd0
    // mov r1, #5
    // bl ov07_0223494C
    // add r0, r4, #0
    // add r0, #0x69
    // ldrb r1, [r0]
    // mov r0, #0x10
    // add r2, sp, #0x78
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x78
    // bl ov12_02261B80
    // mov r0, #0x1a
    // ldr r1, [r4, #4]
    // mov r2, #0
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // add r0, r4, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // add sp, #0x178
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // bl ov07_0221C394
    // add r0, r5, #0
    // bl ov07_0221C3B0
    // cmp r0, #0
    // beq _0225CAA8
    // b _0225CC42
    // add r0, r5, #0
    // bl ov07_0221C3C0
    // add r0, r4, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // add sp, #0x178
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x6a
    // ldrb r5, [r0]
    // mov r0, #1
    // tst r0, r5
    // beq _0225CB06
    // ldr r0, _0225CC48 ; =ov12_0226D120
    // ldrb r0, [r0, r5]
    // str r0, [sp, #0x50]
    // mov r0, #5
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, r4, #0
    // add r0, #0x69
    // ldrb r0, [r0]
    // str r0, [sp, #0x5c]
    // add r0, r4, #0
    // add r0, #0x6e
    // ldrh r0, [r0]
    // str r0, [sp, #0x60]
    // ldr r0, [r4]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x6c]
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // str r0, [sp, #0x70]
    // mov r0, #1
    // str r0, [sp, #0x64]
    // mov r0, #0
    // str r0, [sp, #0x68]
    // add r0, sp, #0x50
    // bl ov07_02233DB8
    // b _0225CB52
    // ldr r3, _0225CC4C ; =ov12_0226D128
    // add r2, sp, #0x10
    // add r6, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // lsl r0, r5, #2
    // ldr r0, [r6, r0]
    // str r0, [sp, #0x28]
    // mov r0, #5
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, r4, #0
    // add r0, #0x69
    // ldrb r0, [r0]
    // str r0, [sp, #0x34]
    // add r0, r4, #0
    // add r0, #0x6e
    // ldrh r0, [r0]
    // str r0, [sp, #0x38]
    // ldr r0, [r4]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x44]
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // str r0, [sp, #0x48]
    // mov r0, #1
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // str r0, [sp, #0x40]
    // add r0, sp, #0x28
    // bl ov07_02233DB8
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // mov r1, #5
    // add r0, #0x6b
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x6e
    // ldrh r0, [r0]
    // mov r2, #0x10
    // lsl r1, r0, #1
    // ldr r0, _0225CC50 ; =ov12_0226D15A
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // add r3, r1, #0
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // bl Pokepic_StartPaletteFade
    // add r4, #0x6a
    // ldrb r0, [r4]
    // cmp r0, #5
    // bhi _0225CC42
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225CB8A: ; jump table
    // mov r1, #0x74
    // ldr r0, _0225CC54 ; =0x00000706
    // mvn r1, r1
    // bl sub_0200602C
    // add sp, #0x178
    // pop {r4, r5, r6, pc}
    // ldr r0, _0225CC54 ; =0x00000706
    // mov r1, #0x75
    // bl sub_0200602C
    // add sp, #0x178
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #8]
    // bl Pokepic_ResumePaletteFade
    // cmp r0, #0
    // bne _0225CC42
    // add r0, r4, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // add sp, #0x178
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // mov r1, #0xc
    // add r2, r1, #0
    // ldr r0, [r4, #8]
    // sub r2, #0x2c
    // bl Pokepic_AddAttr
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r0, [r4, #8]
    // sub r2, #0x2d
    // bl Pokepic_AddAttr
    // add r1, r4, #0
    // add r1, #0x6c
    // ldrb r1, [r1]
    // ldr r0, [r4, #8]
    // bl sub_0200914C
    // ldr r0, [r4, #8]
    // mov r1, #0xc
    // bl Pokepic_GetAttr
    // cmp r0, #0
    // bgt _0225CC42
    // ldr r0, [r4, #8]
    // bl Pokepic_Delete
    // mov r0, #7
    // add r4, #0x6b
    // add sp, #0x178
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0xc]
    // bl ov07_02233E88
    // cmp r0, #0
    // bne _0225CC42
    // ldr r0, [r4, #0xc]
    // bl ov07_02233ECC
    // mov r0, #8
    // add r4, #0x6b
    // add sp, #0x178
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r1, r4, #0
    // add r2, r4, #0
    // add r1, #0x69
    // add r2, #0x68
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x178
    // pop {r4, r5, r6, pc}
    // nop
    // _0225CC48: .word ov12_0226D120
    // _0225CC4C: .word ov12_0226D128
    // _0225CC50: .word ov12_0226D15A
    // _0225CC54: .word 0x00000706
    // TODO: decompile
}



void ov12_0225CC58(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, #0x6b
    // ldrb r1, [r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225CC80: ; jump table
    // add r0, #0x69
    // ldrb r1, [r0]
    // add r2, sp, #0x110
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x110
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // strb r0, [r4]
    // add r4, #0x6b
    // strb r0, [r4]
    // add r3, #0x69
    // ldrb r3, [r3]
    // add r1, #0x10
    // add r2, sp, #0xc0
    ov12_02261CA8(*((u32*)r4), r4, r4);
    // add r0, sp, #0xc0
    ov07_0223494C(5);
    // add r0, #0x69
    // ldrb r1, [r0]
    // add r2, sp, #0x68
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x68
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // str r2, [r1, r0]
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // strb r0, [r4]
    ov07_0221C394((r4 + 1), *((u32*)(r4 + 4)), 0);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // strb r0, [r4]
    // add r0, #0x69
    // ldrb r1, [r0]
    // add r2, sp, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x10
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, #0x6b
    // strb r0, [r4]
    Pokepic_Delete(*((u32*)(r4 + 8)));
    // add r1, #0x69
    // add r2, #0x68
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    ov12_0226430C(*((u32*)r4), r4, r4);
    Heap_Free(r4);
    SysTask_Destroy(r6);
}



void ov12_0225CDB8(void) {
    // sub r2, #0x2c
    Pokepic_AddAttr(*((u32*)(r1 + 4)), 0xc, 0xc);
    // sub r2, #0x2d
    Pokepic_AddAttr(*((u32*)(r4 + 4)), 0xd, 0xd);
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) - 1);
    Pokepic_AddAttr(*((u32*)(r4 + 4)), 1, (1 - 2));
    Pokepic_GetAttr(*((u32*)(r4 + 4)), 0xc);
    Pokepic_Delete(*((u32*)(r4 + 4)));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_0225CE28(void) {
    BattleSystem_GetBattleType(*((u32*)r1));
    BattleSystem_GetBgConfig(*((u32*)r4));
    BgSetPosTextAndCommit(3, 1, 4);
    *((u32*)(r4 + 0x20)) = (*((u32*)(r4 + 0x20)) + 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225CE78: ; jump table
    ManagedSprite_GetNumFrames(*((u32*)(r4 + 0xc)));
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0xc)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), 2);
    *((u32*)(r4 + 0x1c)) = 0x1c;
    *((u8*)(r4 + 0x12)) = 1;
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) - 1);
    *((u8*)(r4 + 0x12)) = 2;
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 8))));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0xc)));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    ManagedSprite_OffsetPositionXY(*((u32*)*((u32*)(r4 + 8))), 8, 0);
    ManagedSprite_SetPositionXY(*((u32*)r0), 0xc0, 0x58);
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 8))));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0xc)), 6, 0);
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r0, [r2, r1]
    // sub r0, #0x18
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r1, [r2, r1]
    // neg r1, r1
    // asr r1, r1, #0x10
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0xc)), (6 << 0x10), 0);
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // ldrsh r0, [r2, r0]
    // sub r0, r3, r0
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r0, [r2, r1]
    // sub r0, #0x10
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r1, [r2, r1]
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0xc)), 6, 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0xc)));
    // ldrsh r1, [r4, r0]
    // add r3, sp, #0
    // ldrsh r0, [r3, r0]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0xc)), 0);
    ManagedSprite_SetPositionXY(*((u32*)*((u32*)(r4 + 8))), 0xc0, 0x58);
    ManagedSprite_GetNumFrames(*((u32*)(r4 + 0xc)));
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0xc)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), 1);
    // bic r1, r0
    *((u16*)(r4 + 0x16)) = *((u16*)(r4 + 0x16));
    *((u8*)(r4 + 0x12)) = 3;
    *((u8*)(r4 + 0x12)) = 4;
    // add r0, sp, #0
    // ldrsh r0, [r0, r1]
    // sub r1, #0xe
    ManagedSprite_OffsetPositionXY(*((u32*)*((u32*)(r4 + 8))), 6, 0);
    ManagedSprite_SetPositionXY(*((u32*)r0), 0x40, 0x88);
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)*((u32*)(r4 + 8))));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0xc)), 6, 0);
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // ldrsh r0, [r2, r0]
    // sub r0, r3, r0
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r0, [r2, r1]
    // sub r0, #0x18
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r1, [r2, r1]
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0xc)), 6, 0);
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // ldrsh r0, [r2, r1]
    // sub r0, r3, r0
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r0, [r2, r1]
    // sub r0, #0x10
    *((u16*)(r2 + 6)) = 2;
    // ldrsh r1, [r2, r1]
    // neg r1, r1
    // asr r1, r1, #0x10
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0xc)), (6 << 0x10), 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0xc)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 4)), 0, 2);
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    // ldrsh r0, [r4, r0]
    Pokepic_Delete(*((u32*)(r4 + 4)));
    // add r3, sp, #0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0xc)), 0x14, 0);
    ManagedSprite_SetPositionXY(*((u32*)*((u32*)(r4 + 8))), 0x40, 0x88);
    *((u8*)(r4 + 0x12)) = 4;
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0xc)));
    ov12_02261DC8(r4, *((u32*)(r4 + 0xc)));
    *((u8*)(r4 + 0x12)) = 4;
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0x11)), *((u8*)(r4 + 0x10)));
    Heap_Free(r4);
    SysTask_Destroy(r6);
}



void ov12_0225D138(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // add r6, r0, #0
    // ldrb r0, [r4, #0xa]
    // cmp r0, #6
    // bls _0225D150
    // b _0225D62E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225D15C: ; jump table
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // bne _0225D178
    // mov r0, #1
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #4
    // bhi _0225D192
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225D188: ; jump table
    // mov r0, #0xf
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [r4, #0x18]
    // mov r0, #5
    // str r0, [sp, #0x18]
    // b _0225D1CA
    // mov r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r0, _0225D4F0 ; =0x00000401
    // str r0, [sp, #0x18]
    // b _0225D1CA
    // mov r0, #0xd
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r0, _0225D4F4 ; =0x00000402
    // str r0, [sp, #0x18]
    // b _0225D1CA
    // mov r0, #0xf
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [r4, #0x18]
    // mov r0, #1
    // lsl r0, r0, #0xa
    // str r0, [sp, #0x18]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #4
    // str r0, [sp, #0x10]
    // ldrb r0, [r4, #9]
    // str r0, [sp, #0x14]
    // ldr r0, [r4]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x24]
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // str r0, [sp, #0x28]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [r4]
    // str r0, [sp, #0x2c]
    // add r0, sp, #8
    // bl ov07_02233DB8
    // ldr r1, [r4, #4]
    // add r1, #0x88
    // str r0, [r1]
    // ldr r0, [r4, #4]
    // mov r1, #0x64
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_022344C4
    // ldr r0, [r4, #4]
    // mov r1, #2
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_022344D0
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_022344C0
    // ldr r0, [r4, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r4, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnimateFlag
    // mov r0, #3
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #0xb]
    // cmp r0, #2
    // ldr r0, [r4, #4]
    // bne _0225D344
    // ldr r0, [r0, #0x18]
    // mov r1, #5
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #4]
    // add r1, sp, #4
    // ldr r0, [r0, #0x18]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // cmp r0, #0xa0
    // blt _0225D2D6
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233F20
    // cmp r0, #0
    // beq _0225D2D6
    // ldr r0, [r4, #4]
    // mov r1, #1
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_0223449C
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233EFC
    // mov r0, #2
    // tst r0, r6
    // beq _0225D2E4
    // mov r0, #8
    // tst r0, r6
    // bne _0225D2E4
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // add r4, r0, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #1
    // bl ov07_0223449C
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov07_02233EFC
    // add r4, #0x88
    // ldr r0, [r4]
    // mov r1, #0xc
    // bl ov07_022344DC
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // cmp r1, r0
    // bge _0225D2E6
    // b _0225D62E
    // ldr r0, [r4]
    // bl BattleSystem_GetSpriteManager
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x18]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #4]
    // mov r1, #0
    // str r1, [r0, #0x18]
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D4FC ; =0x00004E2F
    // add r1, r2, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D500 ; =0x00004E2A
    // add r1, r2, r1
    // bl SpriteManager_UnloadPlttObjById
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D504 ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadCellObjById
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D504 ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadAnimObjById
    // mov r0, #6
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r0, #0x18]
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r4, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r4, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnimateFlag
    // mov r0, #2
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // mov r1, #4
    // ldr r0, [r0, #0x18]
    // mvn r1, r1
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4, #4]
    // add r1, sp, #4
    // ldr r0, [r0, #0x18]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // ldr r1, [r4, #4]
    // add r0, r1, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0225D48E
    // ldr r0, [r1, #0x18]
    // bl ManagedSprite_GetAnimationFrame
    // ldr r1, [r4, #0xc]
    // str r0, [sp]
    // lsl r5, r0, #2
    // mov r0, #0x18
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, _0225D508 ; =ov12_0226D1E8
    // add r0, r0, r2
    // ldrsh r1, [r5, r0]
    // ldr r0, _0225D50C ; =0x00007FFF
    // cmp r1, r0
    // beq _0225D48E
    // ldr r0, [r4, #4]
    // mov r1, #1
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_0223449C
    // ldr r1, [r4, #0xc]
    // mov r0, #0x18
    // add r3, r1, #0
    // mul r3, r0
    // ldr r2, _0225D508 ; =ov12_0226D1E8
    // add r7, sp, #4
    // mov r1, #2
    // add r2, r2, r3
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r5, r2]
    // ldr r0, [r4, #4]
    // add r1, r1, r2
    // mov r2, #0
    // ldrsh r7, [r7, r2]
    // ldr r2, _0225D510 ; =ov12_0226D1EA
    // add r0, #0x88
    // add r2, r2, r3
    // ldrsh r2, [r5, r2]
    // lsl r1, r1, #0x10
    // ldr r0, [r0]
    // add r2, r7, r2
    // lsl r2, r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov07_022344A8
    // ldr r0, [sp]
    // cmp r0, #3
    // bne _0225D48E
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233F20
    // cmp r0, #0
    // beq _0225D48E
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233EFC
    // ldr r0, [r4, #4]
    // mov r1, #1
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_022344C0
    // mov r0, #2
    // tst r0, r6
    // beq _0225D48E
    // mov r0, #8
    // tst r0, r6
    // bne _0225D48E
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // ldr r1, [r4, #0xc]
    // add r6, r0, #0
    // add r3, r1, #0
    // mov r0, #0x18
    // mul r3, r0
    // ldr r2, _0225D508 ; =ov12_0226D1E8
    // add r0, r6, #0
    // add r2, r2, r3
    // add r0, #0x88
    // add r7, sp, #4
    // mov r1, #2
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r5, r2]
    // ldr r0, [r0]
    // add r1, r1, r2
    // mov r2, #0
    // ldrsh r7, [r7, r2]
    // ldr r2, _0225D510 ; =ov12_0226D1EA
    // lsl r1, r1, #0x10
    // add r2, r2, r3
    // ldrsh r2, [r5, r2]
    // asr r1, r1, #0x10
    // add r2, r7, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov07_022344A8
    // add r0, r6, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #1
    // bl ov07_0223449C
    // add r0, r6, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov07_02233EFC
    // add r6, #0x88
    // ldr r0, [r6]
    // mov r1, #1
    // bl ov07_022344C0
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // sub r0, #0x2a
    // cmp r1, r0
    // ble _0225D49C
    // b _0225D62E
    // ldr r0, [r4]
    // bl BattleSystem_GetSpriteManager
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x18]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r4, #4]
    // mov r1, #0
    // str r1, [r0, #0x18]
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D4FC ; =0x00004E2F
    // add r1, r2, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D500 ; =0x00004E2A
    // add r1, r2, r1
    // bl SpriteManager_UnloadPlttObjById
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D504 ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadCellObjById
    // ldr r2, [r4, #4]
    // ldr r1, _0225D4F8 ; =0x00000195
    // add r0, r5, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D504 ; =0x00004E27
    // b _0225D514
    // nop
    // _0225D4F0: .word 0x00000401
    // _0225D4F4: .word 0x00000402
    // _0225D4F8: .word 0x00000195
    // _0225D4FC: .word 0x00004E2F
    // _0225D500: .word 0x00004E2A
    // _0225D504: .word 0x00004E27
    // _0225D508: .word ov12_0226D1E8
    // _0225D50C: .word 0x00007FFF
    // _0225D510: .word ov12_0226D1EA
    // add r1, r2, r1
    // bl SpriteManager_UnloadAnimObjById
    // mov r0, #6
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // add r1, sp, #4
    // ldr r0, [r0, #0x18]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r4, #4]
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_GetAnimationFrame
    // add r7, r0, #0
    // cmp r7, #4
    // bne _0225D54A
    // mov r0, #8
    // str r0, [r4, #0x14]
    // mov r0, #4
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0225D62E
    // ldr r2, [r4, #0xc]
    // mov r1, #0x18
    // add r5, r2, #0
    // mul r5, r1
    // ldr r1, _0225D634 ; =ov12_0226D1E8
    // lsl r6, r7, #2
    // add r1, r1, r5
    // ldrsh r1, [r6, r1]
    // ldr r2, _0225D638 ; =0x00007FFF
    // cmp r1, r2
    // beq _0225D62E
    // add r3, sp, #4
    // mov r2, #2
    // ldrsh r2, [r3, r2]
    // add r1, r2, r1
    // mov r2, #0
    // ldrsh r3, [r3, r2]
    // ldr r2, _0225D63C ; =ov12_0226D1EA
    // lsl r1, r1, #0x10
    // add r2, r2, r5
    // ldrsh r2, [r6, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov07_022344A8
    // cmp r7, #3
    // bne _0225D62E
    // ldr r0, [r4, #4]
    // ldr r5, [r4, #0x18]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233F20
    // cmp r5, r0
    // beq _0225D62E
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233EFC
    // ldr r0, [r4, #4]
    // mov r1, #1
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_022344D0
    // ldr r0, [r4, #4]
    // mov r1, #1
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_022344C0
    // ldr r0, [r4, #0x18]
    // cmp r0, #3
    // beq _0225D62E
    // ldr r0, _0225D640 ; =0x0000070A
    // bl PlaySE
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x14]
    // sub r0, r0, #1
    // str r0, [r4, #0x14]
    // bne _0225D62E
    // ldr r0, [r4, #0x18]
    // cmp r0, #3
    // bne _0225D5E8
    // mov r0, #6
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #5
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233E88
    // cmp r0, #1
    // beq _0225D62E
    // ldr r0, [r4, #4]
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233ECC
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x88
    // str r1, [r0]
    // mov r0, #6
    // add sp, #0x30
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #8]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225D634: .word ov12_0226D1E8
    // _0225D638: .word 0x00007FFF
    // _0225D63C: .word ov12_0226D1EA
    // _0225D640: .word 0x0000070A
    // TODO: decompile
}



void ov12_0225D644(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // bl BattleSystem_GetBattleType
    // add r4, r0, #0
    // ldrb r0, [r5, #0xa]
    // cmp r0, #0
    // beq _0225D664
    // cmp r0, #1
    // beq _0225D71C
    // cmp r0, #2
    // bne _0225D662
    // b _0225D85A
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #0xb]
    // cmp r0, #2
    // ldr r0, [r5, #4]
    // bne _0225D6F0
    // ldr r0, [r0, #0x18]
    // mov r1, #5
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r5, #4]
    // add r1, sp, #0
    // ldr r0, [r0, #0x18]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // cmp r1, r0
    // bge _0225D694
    // b _0225D870
    // ldr r0, [r5]
    // bl BattleSystem_GetSpriteManager
    // add r4, r0, #0
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x18]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r5, #4]
    // mov r1, #0
    // str r1, [r0, #0x18]
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D878 ; =0x00004E2F
    // add r1, r2, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D87C ; =0x00004E2A
    // add r1, r2, r1
    // bl SpriteManager_UnloadPlttObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D880 ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadCellObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D880 ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadAnimObjById
    // mov r0, #2
    // strb r0, [r5, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r0, #0x18]
    // mov r1, #1
    // bl ManagedSprite_SetPriority
    // ldr r0, [r5, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r5, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnim
    // ldr r0, [r5, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_SetAnimateFlag
    // mov r0, #1
    // strb r0, [r5, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #4]
    // mov r1, #4
    // ldr r0, [r0, #0x18]
    // mvn r1, r1
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r5, #4]
    // add r1, sp, #0
    // ldr r0, [r0, #0x18]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r0, [r5, #4]
    // add r1, r0, #0
    // add r1, #0x88
    // ldr r1, [r1]
    // cmp r1, #0
    // beq _0225D7F2
    // mov r1, #2
    // tst r1, r4
    // beq _0225D7F2
    // mov r1, #8
    // tst r1, r4
    // bne _0225D7F2
    // ldr r0, [r0, #0x18]
    // bl ManagedSprite_GetAnimationFrame
    // add r7, r0, #0
    // ldr r1, [r5, #0xc]
    // mov r0, #0x18
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, _0225D884 ; =ov12_0226D1E8
    // lsl r6, r7, #2
    // add r0, r0, r2
    // ldrsh r1, [r6, r0]
    // ldr r0, _0225D888 ; =0x00007FFF
    // cmp r1, r0
    // beq _0225D7F2
    // ldrb r1, [r5, #9]
    // ldr r0, [r5]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldr r0, [r5]
    // bl BattleSystem_GetOpponentData
    // add r4, r0, #0
    // cmp r7, #3
    // bne _0225D7F2
    // add r0, #0x88
    // ldr r0, [r0]
    // bl ov07_02233F20
    // cmp r0, #0
    // beq _0225D7F2
    // ldr r1, [r5, #0xc]
    // mov r0, #0x18
    // add r3, r1, #0
    // mul r3, r0
    // ldr r2, _0225D884 ; =ov12_0226D1E8
    // add r7, sp, #0
    // mov r1, #2
    // add r2, r2, r3
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r6, r2]
    // add r0, r4, #0
    // add r0, #0x88
    // add r1, r1, r2
    // mov r2, #0
    // ldrsh r7, [r7, r2]
    // ldr r2, _0225D88C ; =ov12_0226D1EA
    // lsl r1, r1, #0x10
    // add r2, r2, r3
    // ldrsh r2, [r6, r2]
    // ldr r0, [r0]
    // asr r1, r1, #0x10
    // add r2, r7, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov07_022344A8
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #1
    // bl ov07_0223449C
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov07_02233EFC
    // add r0, r4, #0
    // add r0, #0x88
    // ldr r0, [r0]
    // mov r1, #1
    // bl ov07_022344C0
    // add r4, #0x88
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov07_022344D0
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // sub r0, #0x2a
    // cmp r1, r0
    // bgt _0225D870
    // ldr r0, [r5]
    // bl BattleSystem_GetSpriteManager
    // add r4, r0, #0
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x18]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r5, #4]
    // mov r1, #0
    // str r1, [r0, #0x18]
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D878 ; =0x00004E2F
    // add r1, r2, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D87C ; =0x00004E2A
    // add r1, r2, r1
    // bl SpriteManager_UnloadPlttObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D880 ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadCellObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D874 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D880 ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadAnimObjById
    // mov r0, #2
    // strb r0, [r5, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r5, #9]
    // ldrb r2, [r5, #8]
    // ldr r0, [r5]
    // bl ov12_0226430C
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225D874: .word 0x00000195
    // _0225D878: .word 0x00004E2F
    // _0225D87C: .word 0x00004E2A
    // _0225D880: .word 0x00004E27
    // _0225D884: .word ov12_0226D1E8
    // _0225D888: .word 0x00007FFF
    // _0225D88C: .word ov12_0226D1EA
    // TODO: decompile
}



void ov12_0225D890(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r1, #0
    // add r6, r0, #0
    // ldrb r0, [r5, #0xa]
    // cmp r0, #0
    // beq _0225D8A6
    // cmp r0, #1
    // beq _0225D90E
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldrb r0, [r5, #0xb]
    // cmp r0, #2
    // ldr r0, [r5, #4]
    // bne _0225D8DE
    // ldr r0, [r0, #0x18]
    // mov r1, #5
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r5, #4]
    // add r1, sp, #0
    // ldr r0, [r0, #0x18]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // cmp r1, r0
    // blt _0225D97A
    // ldrb r0, [r5, #0xa]
    // add sp, #4
    // add r0, r0, #1
    // strb r0, [r5, #0xa]
    // pop {r3, r4, r5, r6, pc}
    // mov r1, #4
    // ldr r0, [r0, #0x18]
    // mvn r1, r1
    // mov r2, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r5, #4]
    // add r1, sp, #0
    // ldr r0, [r0, #0x18]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // add r1, sp, #0
    // mov r0, #2
    // ldrsh r1, [r1, r0]
    // sub r0, #0x2a
    // cmp r1, r0
    // bgt _0225D97A
    // ldrb r0, [r5, #0xa]
    // add sp, #4
    // add r0, r0, #1
    // strb r0, [r5, #0xa]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r5]
    // bl BattleSystem_GetSpriteManager
    // add r4, r0, #0
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x18]
    // bl Sprite_DeleteAndFreeResources
    // ldr r0, [r5, #4]
    // mov r1, #0
    // str r1, [r0, #0x18]
    // ldr r2, [r5, #4]
    // ldr r1, _0225D980 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D984 ; =0x00004E2F
    // add r1, r2, r1
    // bl SpriteManager_UnloadCharObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D980 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D988 ; =0x00004E2A
    // add r1, r2, r1
    // bl SpriteManager_UnloadPlttObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D980 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D98C ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadCellObjById
    // ldr r2, [r5, #4]
    // ldr r1, _0225D980 ; =0x00000195
    // add r0, r4, #0
    // ldrb r2, [r2, r1]
    // ldr r1, _0225D98C ; =0x00004E27
    // add r1, r2, r1
    // bl SpriteManager_UnloadAnimObjById
    // ldrb r1, [r5, #9]
    // ldrb r2, [r5, #8]
    // ldr r0, [r5]
    // bl ov12_0226430C
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225D980: .word 0x00000195
    // _0225D984: .word 0x00004E2F
    // _0225D988: .word 0x00004E2A
    // _0225D98C: .word 0x00004E27
    // TODO: decompile
}



void ov12_0225D990(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r1 + 4)));
    // add r2, sp, #0
    // ldrsh r0, [r2, r1]
    *((u16*)(r2 + 2)) = (*((u8*)(r4 + 0xb)) + 5);
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    *((u16*)(r2 + 2)) = r3;
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    // ldrsh r0, [r2, r1]
    *((u16*)(r2 + 2)) = ((*((u8*)(r4 + 0xa)) + 1) - 5);
    // ldrsh r3, [r4, r0]
    // ldrsh r0, [r2, r1]
    *((u16*)(r2 + 2)) = r3;
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 4)), 2, 0);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_0225DA18(void) {
    // ldrb r1, [r4]
    // add r0, #0x4d
    // ldrb r0, [r0]
    // add r0, #0x4d
    // ldrb r0, [r0]
    // add r4, #0x4d
    // strb r0, [r4]
    ov12_02264FB0(r1, 0);
    BattleHpBar_SetEnabled(r4, 1);
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x4f
    // ldrb r0, [r0]
    // strb r0, [r4]
    // add r1, #0x24
    // add r2, #0x4c
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    ov12_0226430C(*((u32*)(r4 + 0xc)), r4, r4);
    *((u32*)(r4 + 0x10)) = 0;
    SysTask_Destroy(r5);
}



void ov12_0225DA8C(void) {
    // ldrb r1, [r4]
    // add r0, #0x4f
    // ldrb r0, [r0]
    // strb r0, [r4]
    // add r1, #0x24
    // add r2, #0x4c
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    ov12_0226430C(*((u32*)(r1 + 0xc)), r1, r1);
    *((u32*)(r4 + 0x10)) = 0;
    SysTask_Destroy(r5);
    BattleHpBar_SetEnabled(r4, 0);
}



void ov12_0225DAD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x58
    // add r4, r1, #0
    // add r7, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBgConfig
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // add r6, r0, #0
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // add r5, r0, #0
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldrb r0, [r4, #9]
    // cmp r1, r0
    // beq _0225DB16
    // ldr r0, [r4]
    // bl BattleSystem_GetHpBar
    // str r0, [sp, #8]
    // b _0225DB1A
    // mov r0, #0
    // str r0, [sp, #8]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #8
    // bls _0225DB22
    // b _0225E0FA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225DB2E: ; jump table
    // mov r0, #0
    // add r1, r4, #0
    // add r2, sp, #0x40
    // ldrh r3, [r1, #0x24]
    // add r1, r1, #2
    // strh r3, [r2]
    // add r3, r4, r0
    // add r3, #0x2c
    // ldrb r3, [r3]
    // strh r3, [r2, #8]
    // add r3, r4, r0
    // add r3, #0x30
    // ldrb r3, [r3]
    // add r0, r0, #1
    // strh r3, [r2, #0x10]
    // add r2, r2, #2
    // cmp r0, #4
    // blt _0225DB46
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // add r1, r4, #0
    // add r1, #0x34
    // ldrb r1, [r1]
    // add r2, sp, #0x40
    // bl BattleInput_LoadFightMenuText
    // ldrb r0, [r4, #0xa]
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // add r6, r0, #0
    // mov r0, #1
    // lsl r0, r0, #0xa
    // add r1, r5, #0
    // tst r1, r0
    // beq _0225DC00
    // ldr r0, [r4]
    // bl ov12_0223BB04
    // cmp r0, #0
    // beq _0225DBA0
    // cmp r0, #1
    // beq _0225DBCC
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #2
    // add r1, sp, #0x10
    // strb r0, [r1, #0xd]
    // add r0, r4, #0
    // add r0, #0x23
    // ldrb r0, [r0]
    // ldrb r2, [r4, #9]
    // mov r3, #0
    // lsl r0, r0, #8
    // orr r0, r2
    // str r0, [sp, #0x20]
    // ldr r0, _0225DED8 ; =0x00000399
    // add r2, sp, #0x1c
    // strh r0, [r1, #0xe]
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl BattleSystem_PrintBattleMessage
    // mov r0, #3
    // add sp, #0x58
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // add r0, sp, #0x10
    // strb r1, [r0, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetTrainerGender
    // ldr r1, _0225DEDC ; =0x000004CA
    // add r1, r0, r1
    // add r0, sp, #0x10
    // strh r1, [r0, #0xe]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // add r1, r6, #0
    // add r2, sp, #0x1c
    // bl BattleSystem_PrintBattleMessage
    // add r1, r4, #0
    // add r1, #0x35
    // strb r0, [r1]
    // mov r0, #2
    // add sp, #0x58
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0x20
    // add r2, r5, #0
    // tst r2, r1
    // beq _0225DC20
    // mov r1, #8
    // add r0, sp, #0x10
    // strb r1, [r0, #0xd]
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetTrainerIndex
    // str r0, [sp, #0x20]
    // ldr r1, _0225DEE0 ; =0x0000039A
    // add r0, sp, #0x10
    // strh r1, [r0, #0xe]
    // b _0225DC56
    // lsl r1, r1, #4
    // tst r1, r5
    // beq _0225DC3E
    // mov r1, #8
    // add r0, sp, #0x10
    // strb r1, [r0, #0xd]
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetTrainerIndex
    // str r0, [sp, #0x20]
    // ldr r1, _0225DEE4 ; =0x000004C6
    // add r0, sp, #0x10
    // strh r1, [r0, #0xe]
    // b _0225DC56
    // add r2, r4, #0
    // mov r1, #2
    // add r3, sp, #0x10
    // strb r1, [r3, #0xd]
    // add r2, #0x23
    // ldrb r2, [r2]
    // ldrb r1, [r4, #9]
    // sub r0, #0x67
    // lsl r2, r2, #8
    // orr r1, r2
    // str r1, [sp, #0x20]
    // strh r0, [r3, #0xe]
    // ldr r0, [r4]
    // add r1, r6, #0
    // add r2, sp, #0x1c
    // mov r3, #0
    // bl BattleSystem_PrintBattleMessage
    // mov r0, #3
    // add sp, #0x58
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0x35
    // ldrb r0, [r0]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0225DC9C
    // mov r0, #3
    // add sp, #0x58
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // bl ov12_02264E84
    // ldr r0, [sp, #0xc]
    // ldr r1, [r4]
    // bl ov12_02261FD4
    // mov r0, #4
    // strb r0, [r4, #0xa]
    // add r0, r6, #0
    // bl BattleInput_CheckFeedbackDone
    // cmp r0, #0
    // bne _0225DC9E
    // b _0225E0FA
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r5, r0, #0
    // ldrb r1, [r4, #9]
    // add r0, sp, #0x10
    // add r2, r4, #0
    // strb r1, [r0, #1]
    // add r1, r4, #0
    // add r1, #0x34
    // ldrb r1, [r1]
    // add r2, #0x3b
    // strb r1, [r0]
    // add r1, r4, #0
    // add r1, #0x23
    // ldrb r1, [r1]
    // strb r1, [r0, #2]
    // mov r1, #0x36
    // ldrsh r1, [r4, r1]
    // strh r1, [r0, #4]
    // ldrh r1, [r4, #0x38]
    // strh r1, [r0, #6]
    // add r1, r4, #0
    // add r1, #0x3a
    // ldrb r1, [r1]
    // strb r1, [r0, #3]
    // ldrb r1, [r4, #9]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_0223B580
    // add r1, sp, #0x10
    // strb r0, [r1, #8]
    // ldr r1, _0225DEE8 ; =0x00000197
    // ldr r0, [sp, #0xc]
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // beq _0225DDD2
    // add r0, r6, #0
    // mov r1, #1
    // bl BattleInput_Deadstriped_022698AC
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #1
    // tst r0, r1
    // beq _0225DD20
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #6
    // bl BattleInput_ChangeMenu
    // b _0225DDC8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // lsl r1, r1, #8
    // tst r0, r1
    // beq _0225DD44
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #0xa
    // bl BattleInput_ChangeMenu
    // b _0225DDC8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #0x20
    // tst r0, r1
    // beq _0225DD66
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #8
    // bl BattleInput_ChangeMenu
    // b _0225DDC8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xc
    // tst r0, r1
    // beq _0225DD8A
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #0x14
    // bl BattleInput_ChangeMenu
    // b _0225DDC8
    // add r0, sp, #0x10
    // ldrb r0, [r0]
    // cmp r0, #4
    // bne _0225DDB4
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // bne _0225DDB4
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #4
    // bl BattleInput_ChangeMenu
    // b _0225DDC8
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #3
    // bl BattleInput_ChangeMenu
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov12_0223BB64
    // b _0225DE98
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #1
    // tst r0, r1
    // beq _0225DDF4
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #5
    // bl BattleInput_ChangeMenu
    // b _0225DE90
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // lsl r1, r1, #8
    // tst r0, r1
    // beq _0225DE18
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #9
    // bl BattleInput_ChangeMenu
    // b _0225DE90
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #0x20
    // tst r0, r1
    // beq _0225DE3A
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #7
    // bl BattleInput_ChangeMenu
    // b _0225DE90
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xc
    // tst r0, r1
    // beq _0225DE5E
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #0x13
    // bl BattleInput_ChangeMenu
    // b _0225DE90
    // add r0, sp, #0x10
    // ldrb r0, [r0]
    // cmp r0, #4
    // beq _0225DE7C
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #1
    // bl BattleInput_ChangeMenu
    // b _0225DE90
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #2
    // bl BattleInput_ChangeMenu
    // ldr r1, _0225DEE8 ; =0x00000197
    // ldr r0, [sp, #0xc]
    // mov r2, #1
    // strb r2, [r0, r1]
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x1c
    // bl BattleInput_SetPartyExpPercents
    // add r1, r4, #0
    // add r2, r4, #0
    // add r0, r6, #0
    // add r1, #0x10
    // add r2, #0x16
    // bl BattleInput_UpdateBallGaugeAnimation
    // add r0, r6, #0
    // bl BattleInput_EnableBallGauge
    // add r0, r7, #0
    // bl NARC_Delete
    // add r0, r5, #0
    // bl NARC_Delete
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _0225DECC
    // bl ov12_02265D70
    // mov r0, #5
    // add sp, #0x58
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0225DEEC ; =gSystem
    // b _0225DEF0
    // _0225DED8: .word 0x00000399
    // _0225DEDC: .word 0x000004CA
    // _0225DEE0: .word 0x0000039A
    // _0225DEE4: .word 0x000004C6
    // _0225DEE8: .word 0x00000197
    // _0225DEEC: .word gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #8
    // tst r0, r1
    // beq _0225DF1E
    // ldr r0, [r4]
    // mov r5, #0
    // bl BattleSystem_GetMaxBattlers
    // cmp r0, #0
    // ble _0225DF1E
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // add r0, #0x28
    // bl ov12_02264C84
    // ldr r0, [r4]
    // add r5, r5, #1
    // bl BattleSystem_GetMaxBattlers
    // cmp r5, r0
    // blt _0225DF04
    // add r0, r6, #0
    // bl BattleInput_CheckTouch
    // mov r1, #0
    // mvn r1, r1
    // str r0, [r4, #0xc]
    // cmp r0, r1
    // beq _0225DF50
    // mov r0, #0xa
    // strb r0, [r4, #0xb]
    // ldr r0, _0225E100 ; =0x000005DD
    // bl PlaySE
    // mov r0, #6
    // add sp, #0x58
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl BattleInput_CheckFeedbackDone
    // cmp r0, #1
    // beq _0225DF52
    // ldr r0, [r4, #0xc]
    // cmp r0, #1
    // beq _0225DF52
    // b _0225E0FA
    // ldr r0, [r4, #0xc]
    // cmp r0, #4
    // bls _0225DF5A
    // b _0225E062
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225DF66: ; jump table
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #0x22
    // lsl r1, r1, #4
    // tst r0, r1
    // beq _0225E066
    // mov r0, #7
    // strb r0, [r4, #0xa]
    // b _0225E066
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r5, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // str r3, [sp, #4]
    // bl BattleInput_ChangeMenu
    // add r0, r6, #0
    // mov r1, #0
    // bl BattleInput_Deadstriped_022698AC
    // ldr r0, [sp, #8]
    // bl ov12_02265D74
    // ldr r0, [r4, #4]
    // bl ov12_02264EB4
    // ldr r0, [sp, #0xc]
    // bl ov12_02262014
    // add r0, r5, #0
    // bl NARC_Delete
    // add r0, r7, #0
    // bl NARC_Delete
    // b _0225E066
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r5, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // str r3, [sp, #4]
    // bl BattleInput_ChangeMenu
    // add r0, r6, #0
    // mov r1, #0
    // bl BattleInput_Deadstriped_022698AC
    // ldr r0, [sp, #8]
    // bl ov12_02265D74
    // ldr r0, [r4, #4]
    // bl ov12_02264EB4
    // ldr r0, [sp, #0xc]
    // bl ov12_02262014
    // add r0, r5, #0
    // bl NARC_Delete
    // add r0, r7, #0
    // bl NARC_Delete
    // b _0225E066
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r5, r0, #0
    // add r0, r6, #0
    // bl BattleInput_GetCancelRunFlag
    // cmp r0, #1
    // bne _0225E044
    // ldr r0, [sp, #8]
    // bl ov12_02265D74
    // mov r0, #0xff
    // str r0, [r4, #0xc]
    // mov r3, #0
    // str r3, [sp]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // str r3, [sp, #4]
    // bl BattleInput_ChangeMenu
    // add r0, r7, #0
    // bl NARC_Delete
    // add r0, r5, #0
    // bl NARC_Delete
    // b _0225E066
    // bl GF_AssertFail
    // mov r0, #8
    // add sp, #0x58
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl BattleInput_CheckFeedbackDone
    // cmp r0, #1
    // bne _0225E0FA
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r5, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // str r3, [sp, #4]
    // bl BattleInput_ChangeMenu
    // add r0, r6, #0
    // mov r1, #0
    // bl BattleInput_Deadstriped_022698AC
    // ldr r0, [sp, #8]
    // bl ov12_02265D74
    // ldr r0, [r4, #4]
    // bl ov12_02264EB4
    // ldr r0, [sp, #0xc]
    // bl ov12_02262014
    // add r0, r6, #0
    // bl BattleInput_DisableBallGauge
    // mov r0, #8
    // strb r0, [r4, #0xa]
    // add r0, r5, #0
    // bl NARC_Delete
    // add r0, r7, #0
    // bl NARC_Delete
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov12_022698B0
    // cmp r0, #1
    // bne _0225E0FA
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // ldr r2, [r4, #0xc]
    // bl ov12_02262F24
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #8]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r7, #0
    // bl SysTask_Destroy
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225E100: .word 0x000005DD
    // TODO: decompile
}



void ov12_0225E104(void) {
}



void ov12_0225E134(void) {
}



void ov12_0225E154(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223B694
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleContext
    // mov r2, #0
    // ldrb r1, [r4, #9]
    // add r3, r2, #0
    // bl GetBattlerVar
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #0x1a
    // bl GetMonBaseStat
    // ldr r2, _0225E1CC ; =ov12_0226D140
    // lsl r1, r5, #1
    // ldrb r2, [r2, r1]
    // mul r2, r0
    // add r0, r2, #0
    // ldr r2, _0225E1D0 ; =ov12_0226D141
    // ldrb r1, [r2, r1]
    // bl _s32_div_f
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_Random
    // mov r1, #0xff
    // bl _s32_div_f
    // cmp r1, r5
    // ldr r0, [r4]
    // bgt _0225E1AC
    // ldrb r1, [r4, #9]
    // mov r2, #4
    // bl ov12_02262F24
    // b _0225E1B4
    // ldrb r1, [r4, #9]
    // mov r2, #5
    // bl ov12_02262F24
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #8]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // pop {r4, r5, r6, pc}
    // _0225E1CC: .word ov12_0226D140
    // _0225E1D0: .word ov12_0226D141
    // TODO: decompile
}



void ov12_0225E1D4(void) {
}



void ov12_0225E1FC(void) {
    // add r2, sp, #0
    ov12_0223BE0C(*((u32*)r1), *((u8*)(r1 + 9)));
    ov12_02261ED4(*((u32*)r4));
    // add r0, sp, #0
    // ldrb r0, [r0]
    ov12_02261EB8(*((u32*)r4));
    // add r2, sp, #0
    // ldrb r2, [r2]
    ov12_02262F24(*((u32*)r4), *((u8*)(r4 + 9)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 9)), *((u8*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_0225E250(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBgConfig
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // add r7, r0, #0
    // ldrb r1, [r4, #0x1d]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // str r0, [sp, #0x10]
    // ldrb r1, [r4, #0x1d]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldrb r0, [r4, #0x1d]
    // cmp r1, r0
    // beq _0225E28A
    // ldr r0, [r4]
    // bl BattleSystem_GetHpBar
    // add r5, r0, #0
    // b _0225E28C
    // mov r5, #0
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #3
    // bls _0225E298
    // b _0225E3D0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E2A4: ; jump table
    // add r0, r7, #0
    // bl BattleInput_CheckFeedbackDone
    // cmp r0, #0
    // bne _0225E2B8
    // b _0225E3F8
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // add r1, r0, #0
    // mov r2, #2
    // add r0, sp, #0x14
    // strb r2, [r0, #0x15]
    // ldrb r2, [r4, #0x1f]
    // ldrb r3, [r4, #0x1d]
    // lsl r2, r2, #8
    // orr r2, r3
    // str r2, [sp, #0x2c]
    // ldr r2, _0225E3FC ; =0x00000399
    // mov r3, #0
    // strh r2, [r0, #0x16]
    // ldr r0, [r4]
    // add r2, sp, #0x28
    // bl BattleSystem_PrintBattleMessage
    // add r0, r7, #0
    // bl BattleInput_EnableBallGauge
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // str r0, [sp, #0xc]
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r5, sp, #0x14
    // str r0, [sp, #8]
    // mov r2, #0
    // add r3, r4, #0
    // add r6, r5, #0
    // ldrh r0, [r3, #0xc]
    // add r1, r4, r2
    // add r2, r2, #1
    // strh r0, [r5]
    // ldrb r0, [r1, #0x14]
    // add r3, r3, #2
    // add r5, r5, #2
    // strb r0, [r6, #8]
    // ldrb r0, [r1, #0x18]
    // strb r0, [r6, #0xc]
    // add r6, r6, #1
    // cmp r2, #4
    // blt _0225E300
    // ldrb r1, [r4, #0x1e]
    // add r0, sp, #0x14
    // add r2, r7, #0
    // strb r1, [r0, #0x10]
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x14
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    // mov r3, #0xb
    // bl BattleInput_ChangeMenu
    // ldr r0, [sp, #0xc]
    // bl NARC_Delete
    // ldr r0, [sp, #8]
    // bl NARC_Delete
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r4, #0x20
    // add sp, #0x4c
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // bl BattleInput_CheckTouch
    // mov r1, #0
    // mvn r1, r1
    // str r0, [r4, #8]
    // cmp r0, r1
    // beq _0225E3F8
    // ldr r0, _0225E400 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r4, #0x20
    // add sp, #0x4c
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #0xff
    // beq _0225E3A8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // bne _0225E3A2
    // add r0, r7, #0
    // mov r1, #0
    // bl BattleInput_Deadstriped_022698AC
    // add r0, r5, #0
    // bl ov12_02265D74
    // ldr r0, [r4, #4]
    // bl ov12_02264EB4
    // ldr r0, [sp, #0x10]
    // bl ov12_02262014
    // add r0, r7, #0
    // bl BattleInput_DisableBallGauge
    // ldrb r1, [r4, #0x1d]
    // ldr r0, [r4]
    // ldr r2, [r4, #8]
    // bl ov12_02262FE0
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r4, #0x20
    // add sp, #0x4c
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, r7, #0
    // bl ov12_022698B0
    // cmp r0, #1
    // bne _0225E3F8
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov12_0223BB10
    // ldrb r1, [r4, #0x1d]
    // ldrb r2, [r4, #0x1c]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _0225E3FC: .word 0x00000399
    // _0225E400: .word 0x000005DD
    // TODO: decompile
}



void ov12_0225E404(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r6, r1, #0
    // str r0, [sp, #8]
    // ldr r0, [r6]
    // bl BattleSystem_GetBattleType
    // add r4, r0, #0
    // ldr r0, [r6]
    // bl BattleSystem_GetBattleContext
    // str r0, [sp, #0xc]
    // ldr r0, _0225E4C8 ; =0x00000101
    // tst r0, r4
    // bne _0225E43A
    // ldr r0, [r6]
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #1
    // tst r0, r1
    // bne _0225E43A
    // ldrb r1, [r6, #0x1d]
    // ldr r0, [r6]
    // bl BattleSystem_GetFieldSide
    // cmp r0, #0
    // bne _0225E44A
    // ldrb r1, [r6, #0x1d]
    // ldr r0, [r6]
    // bl ov10_0221BEF4
    // cmp r0, #0xff
    // beq _0225E4C2
    // add r4, r0, #1
    // b _0225E4A2
    // mov r7, #0
    // add r4, r7, #0
    // add r5, sp, #0x10
    // add r0, r4, #0
    // bl MaskOfFlagNo
    // ldrh r1, [r6, #0x22]
    // tst r0, r1
    // bne _0225E462
    // add r0, r4, #1
    // stmia r5!, {r0}
    // add r7, r7, #1
    // add r4, r4, #1
    // cmp r4, #4
    // blt _0225E450
    // ldr r0, [r6]
    // bl BattleSystem_Random
    // add r1, r7, #0
    // bl _s32_div_f
    // lsl r1, r1, #2
    // add r0, sp, #0x10
    // ldr r4, [r0, r1]
    // mov r0, #1
    // sub r3, r4, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // lsl r3, r3, #1
    // add r3, r6, r3
    // ldrb r2, [r6, #0x1d]
    // ldrh r3, [r3, #0xc]
    // ldr r0, [r6]
    // ldr r1, [sp, #0xc]
    // bl ov12_022506D4
    // str r0, [sp]
    // ldrb r3, [r6, #0x1d]
    // ldr r0, [r6]
    // ldr r1, [sp, #0xc]
    // mov r2, #0xb
    // bl ov12_022582B8
    // ldrb r1, [r6, #0x1d]
    // ldr r0, [r6]
    // add r2, r4, #0
    // bl ov12_02262FE0
    // ldrb r1, [r6, #0x1d]
    // ldrb r2, [r6, #0x1c]
    // ldr r0, [r6]
    // bl ov12_0226430C
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [sp, #8]
    // bl SysTask_Destroy
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225E4C8: .word 0x00000101
    // TODO: decompile
}



void ov12_0225E4CC(void) {
}



void ov12_0225E4EC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r1, #0
    // ldrb r1, [r5, #0x1d]
    // add r6, r0, #0
    // ldr r0, [r5]
    // add r2, sp, #0
    // bl ov12_0223BE0C
    // cmp r0, #1
    // bne _0225E508
    // ldr r0, [r5]
    // bl ov12_02261ED4
    // add r0, sp, #0
    // ldrb r4, [r0]
    // cmp r4, #0
    // beq _0225E514
    // cmp r4, #4
    // bls _0225E51C
    // ldr r0, [r5]
    // bl ov12_02261EB8
    // b _0225E53E
    // ldr r0, [r5]
    // bl BattleSystem_GetBattleContext
    // ldrb r1, [r5, #0x1d]
    // add r2, r4, #5
    // mov r3, #0
    // bl GetBattlerVar
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // beq _0225E538
    // ldr r0, _0225E564 ; =0x000001D3
    // cmp r1, r0
    // bls _0225E53E
    // ldr r0, [r5]
    // bl ov12_02261EB8
    // add r2, sp, #0
    // ldrb r1, [r5, #0x1d]
    // ldrb r2, [r2]
    // ldr r0, [r5]
    // bl ov12_02262FE0
    // ldrb r1, [r5, #0x1d]
    // ldrb r2, [r5, #0x1c]
    // ldr r0, [r5]
    // bl ov12_0226430C
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0225E564: .word 0x000001D3
    // TODO: decompile
}



void ov12_0225E568(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r4, r1, #0
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // bl BattleSystem_GetBgConfig
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // add r7, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // add r5, r0, #0
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldrb r0, [r4, #0xd]
    // cmp r1, r0
    // beq _0225E5A2
    // ldr r0, [r4]
    // bl BattleSystem_GetHpBar
    // add r6, r0, #0
    // b _0225E5A4
    // mov r6, #0
    // ldrb r0, [r4, #0xf]
    // cmp r0, #3
    // bhi _0225E69A
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E5B6: ; jump table
    // add r0, r5, #0
    // bl BattleInput_CheckFeedbackDone
    // cmp r0, #0
    // bne _0225E5CA
    // b _0225E6F4
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r2, sp, #0x10
    // add r6, r0, #0
    // mov r0, #0
    // add r1, r4, #0
    // add r2, #2
    // ldrh r3, [r1, #0x10]
    // add r0, r0, #1
    // strh r3, [r2]
    // ldrh r3, [r1, #0x12]
    // strh r3, [r2, #2]
    // ldrh r3, [r1, #0x14]
    // strh r3, [r2, #4]
    // ldrh r3, [r1, #0x16]
    // add r1, #8
    // strh r3, [r2, #6]
    // add r2, #8
    // cmp r0, #4
    // blt _0225E5E6
    // ldrb r1, [r4, #0xe]
    // add r0, sp, #0x30
    // add r0, #2
    // strb r1, [r0]
    // ldrh r0, [r4, #0x30]
    // ldrb r1, [r4, #0xe]
    // bl ov12_02266C84
    // add r1, sp, #0x30
    // add r1, #2
    // strb r0, [r1, #1]
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // add r0, #2
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // mov r3, #0xc
    // bl BattleInput_ChangeMenu
    // add r0, r7, #0
    // bl NARC_Delete
    // add r0, r6, #0
    // bl NARC_Delete
    // ldrb r0, [r4, #0xf]
    // add sp, #0x34
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleInput_CheckTouch
    // mov r1, #0
    // mvn r1, r1
    // str r0, [r4, #8]
    // cmp r0, r1
    // beq _0225E6F4
    // ldr r0, _0225E6F8 ; =0x000005DD
    // bl PlaySE
    // ldrb r0, [r4, #0xf]
    // add sp, #0x34
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // cmp r0, #0xff
    // beq _0225E68C
    // ldr r0, [r4, #4]
    // bl ov12_02264EB4
    // add r0, r7, #0
    // bl ov12_02262014
    // add r0, r6, #0
    // bl ov12_02265D74
    // add r0, r4, #0
    // add r0, #0x32
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0225E68C
    // add r0, r5, #0
    // mov r1, #0
    // bl BattleInput_Deadstriped_022698AC
    // ldrb r0, [r4, #0xf]
    // add sp, #0x34
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // pop {r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // add r0, r5, #0
    // bl ov12_022698B0
    // cmp r0, #1
    // bne _0225E6F4
    // ldr r0, [r4]
    // ldr r5, [r4, #8]
    // bl BattleSystem_GetBattleType
    // add r6, r0, #0
    // cmp r5, #0xff
    // beq _0225E6D4
    // ldr r0, [r4]
    // add r1, sp, #0xc
    // bl ov12_0223C1A0
    // mov r0, #2
    // tst r0, r6
    // ldr r0, [r4, #8]
    // beq _0225E6CC
    // add r1, r0, #1
    // add r0, sp, #0xc
    // ldrb r0, [r0, r1]
    // add r5, r0, #1
    // b _0225E6D4
    // sub r1, r0, #1
    // add r0, sp, #0xc
    // ldrb r0, [r0, r1]
    // add r5, r0, #1
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // add r2, r5, #0
    // bl ov12_0226311C
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [sp, #8]
    // bl SysTask_Destroy
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _0225E6F8: .word 0x000005DD
    // TODO: decompile
}



void ov12_0225E6FC(void) {
    BattleSystem_GetBattleContext(*((u32*)r1));
    ov12_022581D4(*((u32*)r5), r0, 0xb, *((u8*)(r5 + 0xd)));
    GF_AssertFail();
    ov12_0226311C(*((u32*)r5), *((u8*)(r5 + 0xd)), r4);
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 0xd)), *((u8*)(r5 + 0xc)));
    Heap_Free(r5);
    SysTask_Destroy(r6);
}



void ov12_0225E740(void) {
}



void ov12_0225E760(void) {
    // add r2, sp, #0
    ov12_0223BE0C(*((u32*)r1), *((u8*)(r1 + 0xd)));
    ov12_02261ED4(*((u32*)r4));
    // add r0, sp, #0
    // ldrb r0, [r0]
    ov12_02261EB8(*((u32*)r4));
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E7AE: ; jump table
    ov12_02261EB8(*((u32*)r4), ((1 << 8) << 2), (1 << 8));
    BattleSystem_GetFieldSide(*((u32*)r4), *((u8*)(r4 + 0xd)));
    BattleSystem_GetFieldSide(*((u32*)r4), r5);
    ov12_02261EB8(*((u32*)r4));
    // add r2, sp, #0
    // ldrb r2, [r2]
    ov12_0226311C(*((u32*)r4), *((u8*)(r4 + 0xd)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(r4);
    SysTask_Destroy(r7);
}



void ov12_0225E830(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x14
    // add r4, r1, #0
    // add r7, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // ldrb r1, [r4, #0xe]
    // add r5, r0, #0
    // cmp r1, #0x1e
    // bls _0225E84C
    // bl _0225F376
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225E858: ; jump table
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // bl BattleInput_GetKeyPressed
    // strb r0, [r4, #0x10]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // mov r2, #3
    // str r1, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #5
    // add r3, r1, #0
    // add r0, r5, #0
    // lsl r2, r2, #0xa
    // sub r3, #0xd
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0xa
    // add r3, r1, #0
    // ldr r2, _0225EC14 ; =0x0000FFFF
    // add r0, r5, #0
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0225E9B4
    // ldr r0, [r4]
    // bl ov12_02237B0C
    // mov r0, #5
    // mov r1, #0x34
    // bl Heap_Alloc
    // str r0, [r4, #4]
    // mov r1, #0
    // mov r2, #0x34
    // bl memset
    // ldr r1, [r4]
    // ldr r0, [r4, #4]
    // str r1, [r0]
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetPlayerProfile
    // ldr r1, [r4, #4]
    // str r0, [r1, #4]
    // ldr r0, [r4, #4]
    // mov r1, #5
    // str r1, [r0, #0xc]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x26
    // strb r1, [r0]
    // ldr r0, [r4]
    // bl BattleSystem_GetBag
    // ldr r1, [r4, #4]
    // str r0, [r1, #8]
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, #4]
    // str r1, [r0, #0x10]
    // ldr r0, [r4, #4]
    // ldrb r1, [r4, #0x10]
    // add r0, #0x25
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // ldrb r1, [r4, #0x14]
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // ldrb r1, [r4, #0x15]
    // add r0, #0x23
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // ldrb r1, [r4, #0x16]
    // add r0, #0x24
    // strb r1, [r0]
    // ldrb r0, [r4, #0xd]
    // add r0, r4, r0
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [r4, #4]
    // str r1, [r0, #0x18]
    // ldr r0, [r4, #4]
    // bl ov08_022225D4
    // add sp, #0x1fc
    // mov r0, #3
    // add sp, #0x14
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // ldrb r1, [r4, #0x10]
    // add r0, #0x25
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // bl ov08_022225D4
    // ldrb r0, [r4, #0xe]
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // ldr r1, [r4, #4]
    // add r0, r1, #0
    // add r0, #0x26
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225E9B4
    // mov r0, #0
    // add r1, #0x26
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // add r0, #0x25
    // ldrb r0, [r0]
    // strb r0, [r4, #0x10]
    // ldr r1, [r4, #4]
    // ldrh r0, [r1, #0x1c]
    // cmp r0, #0
    // beq _0225E9E0
    // ldrb r0, [r1, #0x1e]
    // cmp r0, #3
    // bls _0225E9B8
    // bl _0225F376
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225E9C4: ; jump table
    // add sp, #0x1fc
    // mov r0, #4
    // add sp, #0x14
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // add sp, #0x1fc
    // mov r0, #6
    // add sp, #0x14
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // add sp, #0x1fc
    // mov r0, #6
    // add sp, #0x14
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetParty
    // str r0, [sp, #0x14]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _0225EA16
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // bne _0225EA16
    // ldrb r1, [r4, #0xd]
    // mov r0, #1
    // add r7, r1, #0
    // and r7, r0
    // b _0225EA18
    // ldrb r7, [r4, #0xd]
    // ldr r0, [r4, #8]
    // mov r1, #6
    // ldr r0, [r0, #4]
    // ldr r0, [r0]
    // bl Party_InitWithMaxSize
    // ldr r0, [sp, #0x14]
    // mov r6, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _0225EA66
    // mov r0, #6
    // mul r0, r7
    // add r5, r4, r0
    // ldrb r2, [r5, #0x18]
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl BattleSystem_GetPartyMon
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldr r0, [r0]
    // bl Party_AddMon
    // ldr r1, [r4, #8]
    // ldrb r0, [r5, #0x18]
    // ldr r1, [r1, #4]
    // add r5, r5, #1
    // add r1, r1, r6
    // add r1, #0x2c
    // strb r0, [r1]
    // ldr r0, [sp, #0x14]
    // add r6, r6, #1
    // bl Party_GetCount
    // cmp r6, r0
    // blt _0225EA36
    // ldr r0, [r4, #8]
    // ldr r1, [r4]
    // ldr r0, [r0, #4]
    // str r1, [r0, #8]
    // ldr r0, [r4, #8]
    // mov r1, #5
    // ldr r0, [r0, #4]
    // str r1, [r0, #0xc]
    // ldr r1, [r4, #8]
    // mov r0, #0
    // ldr r1, [r1, #4]
    // strb r0, [r1, #0x11]
    // ldr r1, [r4, #8]
    // ldr r1, [r1, #4]
    // add r1, #0x36
    // strb r0, [r1]
    // ldr r1, [r4, #8]
    // ldr r1, [r1, #4]
    // strh r0, [r1, #0x24]
    // ldr r0, [r4, #8]
    // mov r1, #2
    // ldr r0, [r0, #4]
    // add r0, #0x35
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // ldrh r1, [r0, #0x1c]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // strh r1, [r0, #0x22]
    // ldr r0, [r4, #4]
    // ldrb r1, [r0, #0x1e]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // add r0, #0x33
    // strb r1, [r0]
    // ldr r0, [r4, #4]
    // ldr r1, [r0, #0x10]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // str r1, [r0, #0x28]
    // ldr r0, [r4, #8]
    // ldrb r1, [r4, #0x10]
    // ldr r0, [r0, #4]
    // add r0, #0x32
    // strb r1, [r0]
    // ldrb r0, [r4, #0xd]
    // ldr r2, [r4, #8]
    // add r0, r2, r0
    // ldrb r1, [r0, #0xc]
    // ldr r0, [r2, #4]
    // strb r1, [r0, #0x14]
    // ldrb r1, [r4, #0xd]
    // ldr r5, [r4, #8]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r0, r5, r0
    // ldrb r1, [r0, #0xc]
    // ldr r0, [r5, #4]
    // strb r1, [r0, #0x15]
    // ldrb r0, [r4, #0xf]
    // cmp r0, #4
    // bne _0225EAFC
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r0, r4, r0
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // str r1, [r0, #0x18]
    // ldrb r0, [r4, #0xd]
    // b _0225EB12
    // ldrb r0, [r4, #0xd]
    // add r0, r4, r0
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // str r1, [r0, #0x18]
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r0, r4, r0
    // add r0, #0x30
    // ldrb r1, [r0]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // str r1, [r0, #0x1c]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // bl ov10_0221BE20
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // ldr r1, [r0, #4]
    // add r0, r1, #0
    // add r0, #0x36
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225EBC6
    // add r1, #0x32
    // ldrb r0, [r1]
    // mov r1, #0
    // strb r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // add r0, #0x36
    // strb r1, [r0]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #6
    // bne _0225EB64
    // add sp, #0x1fc
    // mov r0, #2
    // add sp, #0x14
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // add sp, #0x1fc
    // mov r0, #6
    // add sp, #0x14
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // bl ov12_02237BB8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // ldrb r1, [r4, #0x10]
    // bl BattleInput_SetKeyPressed
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0
    // mov r1, #5
    // str r0, [sp, #4]
    // mov r2, #3
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // lsl r2, r2, #0xa
    // sub r3, #0xd
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // mov r1, #0xa
    // str r0, [sp, #4]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // ldr r2, _0225EC14 ; =0x0000FFFF
    // add r0, r5, #0
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0225EBC8
    // b _0225F376
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #0
    // bl sub_0201649C
    // ldr r0, [r4, #4]
    // ldrh r0, [r0, #0x1c]
    // cmp r0, #0
    // bne _0225EBDE
    // b _0225ED4A
    // mov r0, #9
    // strb r0, [r4, #0xe]
    // ldr r0, [r4, #4]
    // ldrb r1, [r0, #0x1e]
    // cmp r1, #3
    // bls _0225EBEC
    // b _0225ED4E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225EBF8: ; jump table
    // ldrh r1, [r0, #0x1c]
    // ldr r0, _0225EC18 ; =0x0000FFE4
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #1
    // bhi _0225EC1C
    // mov r0, #8
    // strb r0, [r4, #0xe]
    // b _0225ED4E
    // _0225EC14: .word 0x0000FFFF
    // _0225EC18: .word 0x0000FFE4
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // bhs _0225EC3A
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // cmp r0, #3
    // beq _0225EC44
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // cmp r0, #0x13
    // beq _0225EC44
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #1
    // bhs _0225EC8A
    // ldr r0, [r4, #4]
    // ldrh r0, [r0, #0x1c]
    // cmp r0, #0x17
    // ldr r0, [r4]
    // bne _0225EC6C
    // bl BattleSystem_AreBattleAnimationsOn
    // cmp r0, #1
    // bne _0225EC5C
    // mov r0, #0x11
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r1, #0x74
    // ldr r0, _0225EF7C ; =0x000005EC
    // mvn r1, r1
    // bl sub_0200602C
    // mov r0, #0x15
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // bl BattleSystem_AreBattleAnimationsOn
    // cmp r0, #1
    // bne _0225EC7A
    // mov r0, #0x19
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r1, #0x74
    // ldr r0, _0225EF7C ; =0x000005EC
    // mvn r1, r1
    // bl sub_0200602C
    // mov r0, #0x1d
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r0, #8
    // strb r0, [r4, #0xe]
    // b _0225ED4E
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // bhs _0225ECAE
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // cmp r0, #3
    // beq _0225ECB8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // cmp r0, #0x13
    // beq _0225ECB8
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #1
    // bhs _0225ECE8
    // ldr r0, [r4, #4]
    // mov r1, #0x26
    // ldrh r0, [r0, #0x1c]
    // mov r2, #5
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225ECE8
    // ldr r0, [r4]
    // bl BattleSystem_AreBattleAnimationsOn
    // cmp r0, #1
    // bne _0225ECD8
    // mov r0, #0x11
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r1, #0x74
    // ldr r0, _0225EF7C ; =0x000005EC
    // mvn r1, r1
    // bl sub_0200602C
    // mov r0, #0x15
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r0, #8
    // strb r0, [r4, #0xe]
    // b _0225ED4E
    // ldrh r1, [r0, #0x1c]
    // ldr r0, _0225EF80 ; =0x0000FFC1
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #1
    // bhi _0225ED02
    // mov r0, #8
    // strb r0, [r4, #0xe]
    // b _0225ED4E
    // cmp r1, #0x37
    // ldr r0, [r4]
    // bne _0225ED26
    // bl BattleSystem_AreBattleAnimationsOn
    // cmp r0, #1
    // bne _0225ED16
    // mov r0, #0xd
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r1, #0x74
    // ldr r0, _0225EF7C ; =0x000005EC
    // mvn r1, r1
    // bl sub_0200602C
    // mov r0, #0xf
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // bl BattleSystem_AreBattleAnimationsOn
    // cmp r0, #1
    // bne _0225ED34
    // mov r0, #0xb
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r1, #0x74
    // ldr r0, _0225EF7C ; =0x000005EC
    // mvn r1, r1
    // bl sub_0200602C
    // mov r0, #0xf
    // strh r0, [r4, #0x12]
    // b _0225ED4E
    // mov r0, #8
    // strb r0, [r4, #0xe]
    // b _0225ED4E
    // mov r0, #8
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #0xe]
    // cmp r0, #8
    // beq _0225EE32
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov12_02237ED0
    // add sp, #0x1fc
    // add sp, #0x14
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [r4, #4]
    // ldrh r0, [r2, #0x1c]
    // cmp r0, #0
    // bne _0225ED72
    // mov r1, #0xff
    // add r0, sp, #0x1c
    // strh r1, [r0]
    // b _0225ED8E
    // add r1, sp, #0x1c
    // strh r0, [r1]
    // ldrb r0, [r2, #0x1e]
    // strb r0, [r1, #2]
    // cmp r0, #1
    // bhi _0225ED8E
    // ldr r0, [r4, #8]
    // ldr r2, [r0, #4]
    // ldrb r0, [r2, #0x11]
    // add r0, r2, r0
    // add r0, #0x2c
    // ldrb r0, [r0]
    // add r0, r0, #1
    // strb r0, [r1, #3]
    // add r3, sp, #0x1c
    // ldrb r1, [r4, #0xd]
    // mov r2, sp
    // ldrh r5, [r3]
    // ldr r0, [r4]
    // sub r2, r2, #4
    // strh r5, [r2]
    // ldrh r3, [r3, #2]
    // strh r3, [r2, #2]
    // ldr r2, [r2]
    // bl ov12_022632C0
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // bl Heap_Free
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r7, #0
    // bl SysTask_Destroy
    // add sp, #0x1fc
    // add sp, #0x14
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _0225EF84 ; =0x000004B6
    // add r0, sp, #0x8c
    // strh r1, [r0, #2]
    // mov r1, #5
    // strb r1, [r0, #1]
    // ldr r0, [r4, #4]
    // ldrh r0, [r0, #0x1c]
    // str r0, [sp, #0x90]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r2, sp, #0x8c
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #0x11]
    // mov r0, #0x1e
    // strb r0, [r4, #0x17]
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #0x11]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0225EE32
    // ldrb r0, [r4, #0x17]
    // sub r0, r0, #1
    // strb r0, [r4, #0x17]
    // ldrb r0, [r4, #0x17]
    // cmp r0, #0
    // beq _0225EE34
    // b _0225F376
    // ldrh r0, [r4, #0x12]
    // add sp, #0x1fc
    // add sp, #0x14
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r4, #0xd]
    // mov r0, #9
    // add r2, sp, #0x1b8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r2, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r3, sp, #0x1b8
    // bl ov12_02261B80
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #0
    // ldr r0, [r0, #4]
    // add r2, sp, #0x160
    // ldrb r0, [r0, #0x11]
    // mov r3, #1
    // lsl r5, r0, #1
    // mov r0, #9
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // bl ov12_022643C8
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r2, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r3, sp, #0x160
    // bl ov12_02261B80
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // add r2, sp, #0x108
    // ldrh r0, [r0, #0x1c]
    // cmp r0, #0x37
    // bne _0225EF02
    // ldrb r0, [r4, #0xd]
    // mov r1, #0
    // add r3, r1, #0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x36
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // bl ov12_022643C8
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r2, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r3, sp, #0x108
    // bl ov12_02261B80
    // b _0225EF6C
    // cmp r0, #0x38
    // bne _0225EF3A
    // ldrb r0, [r4, #0xd]
    // mov r1, #0
    // add r3, r1, #0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x74
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // bl ov12_022643C8
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r2, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r3, sp, #0x108
    // bl ov12_02261B80
    // b _0225EF6C
    // ldrb r1, [r4, #0xd]
    // mov r0, #0xc
    // mov r3, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // bl ov12_022643C8
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r2, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r3, sp, #0x108
    // bl ov12_02261B80
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _0225EF88 ; =0x000004B3
    // b _0225EF8C
    // _0225EF7C: .word 0x000005EC
    // _0225EF80: .word 0x0000FFC1
    // _0225EF84: .word 0x000004B6
    // _0225EF88: .word 0x000004B3
    // add r0, sp, #0x68
    // strh r2, [r0, #2]
    // mov r1, #0xc
    // strb r1, [r0, #1]
    // ldrb r1, [r4, #0xd]
    // ldr r3, [r4, #8]
    // add r3, r3, r1
    // ldrb r3, [r3, #0xc]
    // lsl r3, r3, #8
    // orr r1, r3
    // str r1, [sp, #0x6c]
    // ldr r1, [r4, #4]
    // ldrh r1, [r1, #0x1c]
    // sub r1, #0x37
    // cmp r1, #7
    // bhi _0225EFFE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225EFB8: ; jump table
    // mov r0, #1
    // str r0, [sp, #0x70]
    // b _0225EFFE
    // mov r0, #2
    // str r0, [sp, #0x70]
    // b _0225EFFE
    // mov r0, #3
    // str r0, [sp, #0x70]
    // b _0225EFFE
    // mov r0, #6
    // str r0, [sp, #0x70]
    // b _0225EFFE
    // mov r0, #4
    // str r0, [sp, #0x70]
    // b _0225EFFE
    // mov r0, #5
    // str r0, [sp, #0x70]
    // b _0225EFFE
    // add r1, r2, #1
    // strh r1, [r0, #2]
    // mov r1, #0
    // strb r1, [r0, #1]
    // b _0225EFFE
    // add r1, r2, #2
    // strh r1, [r0, #2]
    // mov r1, #2
    // strb r1, [r0, #1]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r2, sp, #0x68
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #0x11]
    // mov r0, #0x1e
    // strb r0, [r4, #0x17]
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r1, #0
    // ldr r0, [r0, #4]
    // add r2, sp, #0xb0
    // ldrb r0, [r0, #0x11]
    // mov r3, #1
    // lsl r5, r0, #1
    // mov r0, #0xe
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r5, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // bl ov12_022643C8
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl BattleSystem_GetOpponentData
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r2, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r3, sp, #0xb0
    // bl ov12_02261B80
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // ldr r1, [r0, #4]
    // ldrb r0, [r1, #0x11]
    // lsl r6, r0, #1
    // add r0, r1, r0
    // add r0, #0x2c
    // ldrb r7, [r0]
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl BattleSystem_GetHpBar
    // mov r1, #0
    // mov r2, #1
    // add r5, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl ov12_0223AB0C
    // str r0, [sp, #0x18]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // add r1, r0, #0
    // ldr r0, [sp, #0x18]
    // bl BattleHpBar_Util_GetBarTypeFromBattlerSide
    // add r1, r5, #0
    // add r1, #0x25
    // strb r0, [r1]
    // ldr r0, [r4]
    // add r1, r6, #0
    // add r2, r7, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // ldr r1, [r4, #8]
    // mov r2, #0
    // ldr r1, [r1, #4]
    // ldrh r1, [r1, #0x20]
    // sub r0, r0, r1
    // str r0, [r5, #0x28]
    // add r0, r6, #0
    // mov r1, #0xa4
    // bl GetMonData
    // str r0, [r5, #0x2c]
    // ldr r0, [r4, #8]
    // mov r1, #0xa0
    // ldr r0, [r0, #4]
    // mov r2, #0
    // ldrh r0, [r0, #0x20]
    // str r0, [r5, #0x30]
    // add r0, r6, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0225F0F6
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x4a
    // strb r1, [r0]
    // ldr r1, [r5, #0x30]
    // add r0, r5, #0
    // bl ov12_02264DCC
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r4, #8]
    // ldr r0, [r4]
    // ldr r1, [r1, #4]
    // ldrb r1, [r1, #0x11]
    // lsl r1, r1, #1
    // bl BattleSystem_GetHpBar
    // add r5, r0, #0
    // bl ov12_02264E00
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225F128
    // b _0225F376
    // mov r2, #1
    // add r0, r5, #0
    // mov r1, #0
    // lsl r2, r2, #8
    // bl ov12_0226498C
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // add r5, r0, #0
    // ldr r0, [r4, #8]
    // ldr r1, [r0, #4]
    // ldrb r0, [r1, #0x11]
    // ldrh r1, [r1, #0x20]
    // lsl r0, r0, #1
    // cmp r1, #0
    // add r1, sp, #0x1c
    // beq _0225F178
    // ldr r2, _0225F37C ; =0x000004BE
    // strh r2, [r1, #0x2a]
    // mov r2, #0x11
    // add r1, sp, #0x44
    // strb r2, [r1, #1]
    // ldr r1, [r4, #8]
    // add r1, r1, r0
    // ldrb r1, [r1, #0xc]
    // lsl r1, r1, #8
    // orr r0, r1
    // str r0, [sp, #0x48]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #4]
    // ldrh r0, [r0, #0x20]
    // str r0, [sp, #0x4c]
    // b _0225F18E
    // ldr r2, _0225F380 ; =0x000004E2
    // strh r2, [r1, #0x2a]
    // mov r2, #2
    // add r1, sp, #0x44
    // strb r2, [r1, #1]
    // ldr r1, [r4, #8]
    // add r1, r1, r0
    // ldrb r1, [r1, #0xc]
    // lsl r1, r1, #8
    // orr r0, r1
    // str r0, [sp, #0x48]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r2, sp, #0x44
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #0x11]
    // mov r0, #0x1e
    // strb r0, [r4, #0x17]
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #8]
    // mov r5, #0
    // ldr r0, [r0, #4]
    // ldrb r0, [r0, #0x11]
    // lsl r7, r0, #1
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl BattleSystem_GetHpBar
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #8]
    // add r1, r7, #0
    // ldr r3, [r0, #4]
    // ldr r0, [r4]
    // ldrb r2, [r3, #0x11]
    // add r2, r3, r2
    // add r2, #0x2c
    // ldrb r2, [r2]
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa0
    // add r2, r5, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0225F1EE
    // ldr r0, [sp, #0x10]
    // add r1, r5, #0
    // add r0, #0x4a
    // strb r1, [r0]
    // ldr r0, [sp, #0x10]
    // mov r2, #1
    // add r1, r0, #0
    // ldr r1, [r1, #0x28]
    // lsl r2, r2, #8
    // bl ov12_0226498C
    // mov r1, #2
    // add r0, sp, #0x1c
    // strb r1, [r0, #5]
    // ldr r0, [r4, #8]
    // mov r1, #0xf
    // add r0, r0, r7
    // ldrb r0, [r0, #0xc]
    // mov r2, #5
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [sp, #0x24]
    // ldr r0, [r4, #4]
    // ldrh r0, [r0, #0x1c]
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225F222
    // mov r6, #0
    // add r5, r5, #1
    // ldr r0, [r4, #4]
    // mov r1, #0x10
    // ldrh r0, [r0, #0x1c]
    // mov r2, #5
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225F236
    // mov r6, #1
    // add r5, r5, #1
    // ldr r0, [r4, #4]
    // mov r1, #0x11
    // ldrh r0, [r0, #0x1c]
    // mov r2, #5
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225F24A
    // mov r6, #2
    // add r5, r5, #1
    // ldr r0, [r4, #4]
    // mov r1, #0x12
    // ldrh r0, [r0, #0x1c]
    // mov r2, #5
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225F25E
    // mov r6, #3
    // add r5, r5, #1
    // ldr r0, [r4, #4]
    // mov r1, #0x13
    // ldrh r0, [r0, #0x1c]
    // mov r2, #5
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225F272
    // mov r6, #4
    // add r5, r5, #1
    // ldr r0, [r4, #4]
    // mov r1, #0x14
    // ldrh r0, [r0, #0x1c]
    // mov r2, #5
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225F286
    // mov r6, #5
    // add r5, r5, #1
    // ldr r0, [r4, #4]
    // mov r1, #0x15
    // ldrh r0, [r0, #0x1c]
    // mov r2, #5
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0225F29A
    // mov r6, #6
    // add r5, r5, #1
    // cmp r5, #1
    // beq _0225F2A6
    // ldr r1, _0225F384 ; =0x000004CD
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // b _0225F2FA
    // cmp r6, #6
    // bhi _0225F2FA
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F2B6: ; jump table
    // ldr r1, _0225F388 ; =0x000004BA
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // b _0225F2FA
    // ldr r1, _0225F38C ; =0x000004B7
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // b _0225F2FA
    // ldr r1, _0225F390 ; =0x000004B9
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // b _0225F2FA
    // ldr r1, _0225F394 ; =0x000004BB
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // b _0225F2FA
    // ldr r1, _0225F398 ; =0x000004B8
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // b _0225F2FA
    // ldr r1, _0225F39C ; =0x000004BC
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // b _0225F2FA
    // ldr r1, _0225F3A0 ; =0x000004BD
    // add r0, sp, #0x1c
    // strh r1, [r0, #6]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r2, sp, #0x20
    // bl BattleSystem_PrintBattleMessage
    // strb r0, [r4, #0x11]
    // mov r0, #0x1e
    // strb r0, [r4, #0x17]
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // bl ov07_0221C394
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // bl ov07_0221C3B0
    // cmp r0, #0
    // bne _0225F376
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // bl ov07_0221C3C0
    // ldrb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #0x11]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0225F376
    // ldrb r0, [r4, #0x17]
    // sub r0, r0, #1
    // strb r0, [r4, #0x17]
    // ldrb r0, [r4, #0x17]
    // cmp r0, #0
    // bne _0225F376
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov12_02237ED0
    // mov r0, #8
    // strb r0, [r4, #0xe]
    // add sp, #0x1fc
    // add sp, #0x14
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225F37C: .word 0x000004BE
    // _0225F380: .word 0x000004E2
    // _0225F384: .word 0x000004CD
    // _0225F388: .word 0x000004BA
    // _0225F38C: .word 0x000004B7
    // _0225F390: .word 0x000004B9
    // _0225F394: .word 0x000004BB
    // _0225F398: .word 0x000004B8
    // _0225F39C: .word 0x000004BC
    // _0225F3A0: .word 0x000004BD
    // TODO: decompile
}



void ov12_0225F3A4(void) {
    // add r3, sp, #0
    // strh r0, [r3]
    // mov r2, sp
    // ldrh r6, [r3]
    // strh r6, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r3 + 2));
    ov12_022632C0(*((u32*)r1), *((u8*)(r1 + 0xd)), *((u32*)(r2 - 4)), *((u16*)(r3 + 2)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(*((u32*)*((u32*)(*((u32*)(r4 + 8)) + 4))));
    Heap_Free(*((u32*)(*((u32*)(r4 + 8)) + 4)));
    Heap_Free(*((u32*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_0225F3FC(void) {
}



void ov12_0225F434(void) {
    // add r2, sp, #0
    ov12_0223BE0C(*((u32*)r1), *((u8*)(r1 + 0xd)));
    ov12_02261ED4(*((u32*)r4));
    // add r0, sp, #0
    // ldrb r1, [r0]
    // add r2, sp, #0
    *((u16*)(r0 + 2)) = r1;
    ov12_0223BE0C(*((u32*)r4), *((u8*)(r4 + 0xd)));
    ov12_02261ED4(*((u32*)r4));
    // add r0, sp, #0
    // ldrb r1, [r0]
    // orr r1, r2
    *((u16*)(r0 + 2)) = (r1 << 8);
    // add r2, sp, #0
    ov12_0223BE0C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u16*)(r0 + 2)));
    ov12_02261ED4(*((u32*)r4));
    // add r3, sp, #0
    // ldrb r1, [r3]
    // mov r2, sp
    // and r0, r1
    *((u8*)(r3 + 4)) = 0xf;
    *((u8*)(r3 + 5)) = 0;
    // strh r6, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r3 + 4));
    ov12_022632C0(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u32*)(r2 - 4)), *((u16*)(r3 + 4)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(*((u32*)*((u32*)(*((u32*)(r4 + 8)) + 4))));
    Heap_Free(*((u32*)(*((u32*)(r4 + 8)) + 4)));
    Heap_Free(*((u32*)(r4 + 8)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_0225F4E0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // ldrb r1, [r4, #0xa]
    // add r5, r0, #0
    // cmp r1, #3
    // bhi _0225F57C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225F502: ; jump table
    // ldr r0, [r4]
    // mov r1, #0
    // bl BattleSystem_GetWindow
    // add r6, r0, #0
    // mov r1, #0xff
    // bl FillWindowPixelBuffer
    // add r0, r6, #0
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // bl BattleInput_GetKeyPressed
    // strb r0, [r4, #0x17]
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // mov r2, #3
    // str r1, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #5
    // add r3, r1, #0
    // add r0, r5, #0
    // lsl r2, r2, #0xa
    // sub r3, #0xd
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0xa
    // add r3, r1, #0
    // ldr r2, _0225F870 ; =0x0000FFFF
    // add r0, r5, #0
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0xa]
    // add sp, #0x24
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // pop {r4, r5, r6, r7, pc}
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0225F57E
    // b _0225F8A6
    // ldr r0, [r4]
    // bl ov12_02237B0C
    // mov r0, #5
    // mov r1, #0x38
    // bl Heap_Alloc
    // str r0, [r4, #4]
    // mov r0, #5
    // bl SaveArray_Party_Alloc
    // ldr r1, [r4, #4]
    // str r0, [r1]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #0xc
    // and r0, r1
    // cmp r0, #0xc
    // beq _0225F5B2
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // cmp r0, #0xcb
    // beq _0225F5B2
    // b _0225F6C6
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl ov12_0223AB0C
    // cmp r0, #2
    // bne _0225F5CE
    // ldrb r0, [r4, #9]
    // str r0, [sp, #0x18]
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // bl BattleSystem_GetBattlerIdPartner
    // str r0, [sp, #0x14]
    // b _0225F5DC
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // str r0, [sp, #0x18]
    // ldrb r0, [r4, #9]
    // str r0, [sp, #0x14]
    // mov r0, #5
    // bl AllocMonZeroed
    // add r6, r0, #0
    // mov r5, #0
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // ldr r0, [r0]
    // bl Party_AddMon
    // add r5, r5, #1
    // cmp r5, #6
    // blt _0225F5E6
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // mov r7, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0225F64E
    // ldr r0, [sp, #0x18]
    // mov r1, #6
    // mul r1, r0
    // add r5, r4, r1
    // add r6, r7, #0
    // ldrb r2, [r5, #0x1c]
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // bl BattleSystem_GetPartyMon
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // ldr r0, [r0]
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, [sp, #0x1c]
    // bl CopyPokemonToPokemon
    // ldr r0, [r4, #4]
    // ldrb r1, [r5, #0x1c]
    // add r0, r0, r6
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r0, [r4]
    // ldr r1, [sp, #0x18]
    // add r5, r5, #1
    // add r6, r6, #2
    // add r7, r7, #1
    // bl BattleSystem_GetPartySize
    // cmp r7, r0
    // blt _0225F614
    // ldr r0, [r4]
    // ldr r1, [sp, #0x14]
    // mov r6, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0225F6AA
    // ldr r0, [sp, #0x14]
    // mov r1, #6
    // mul r1, r0
    // mov r0, #1
    // add r5, r4, r1
    // str r0, [sp, #0xc]
    // add r7, r6, #0
    // ldrb r2, [r5, #0x1c]
    // ldr r0, [r4]
    // ldr r1, [sp, #0x14]
    // bl BattleSystem_GetPartyMon
    // str r0, [sp, #0x20]
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r0]
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, [sp, #0x20]
    // bl CopyPokemonToPokemon
    // ldr r0, [r4, #4]
    // ldrb r1, [r5, #0x1c]
    // add r0, r0, r7
    // add r0, #0x2d
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // add r0, r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // add r5, r5, #1
    // add r7, r7, #2
    // add r6, r6, #1
    // bl BattleSystem_GetPartySize
    // cmp r6, r0
    // blt _0225F66A
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl ov12_0223AB0C
    // cmp r0, #4
    // bne _0225F6BE
    // ldr r0, [r4, #4]
    // mov r1, #1
    // strb r1, [r0, #0x11]
    // b _0225F746
    // ldr r0, [r4, #4]
    // mov r1, #0
    // strb r1, [r0, #0x11]
    // b _0225F746
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _0225F6E8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // bne _0225F6E8
    // ldrb r1, [r4, #9]
    // mov r0, #1
    // add r7, r1, #0
    // and r7, r0
    // b _0225F6EC
    // ldrb r1, [r4, #9]
    // add r7, r1, #0
    // ldr r0, [r4]
    // bl ov12_0223AB0C
    // cmp r0, #4
    // bne _0225F6FA
    // mov r1, #1
    // b _0225F6FC
    // mov r1, #0
    // ldr r0, [r4, #4]
    // strb r1, [r0, #0x11]
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetParty
    // str r0, [sp, #0x10]
    // mov r6, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _0225F746
    // mov r0, #6
    // mul r0, r7
    // add r5, r4, r0
    // ldrb r2, [r5, #0x1c]
    // ldr r0, [r4]
    // add r1, r7, #0
    // bl BattleSystem_GetPartyMon
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // ldr r0, [r0]
    // bl Party_AddMon
    // ldr r0, [r4, #4]
    // ldrb r1, [r5, #0x1c]
    // add r0, r0, r6
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r0, [sp, #0x10]
    // add r5, r5, #1
    // add r6, r6, #1
    // bl Party_GetCount
    // cmp r6, r0
    // blt _0225F71A
    // ldr r1, [r4]
    // ldr r0, [r4, #4]
    // str r1, [r0, #8]
    // ldr r0, [r4, #4]
    // mov r1, #5
    // str r1, [r0, #0xc]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // add r0, #0x36
    // strb r1, [r0]
    // ldr r1, [r4, #0x10]
    // ldr r0, [r4, #4]
    // strh r1, [r0, #0x24]
    // ldrb r1, [r4, #0x16]
    // ldr r0, [r4, #4]
    // strb r1, [r0, #0x12]
    // ldr r0, [r4, #4]
    // ldrb r1, [r4, #0xb]
    // add r0, #0x35
    // strb r1, [r0]
    // ldrh r1, [r4, #0x14]
    // ldr r0, [r4, #4]
    // strh r1, [r0, #0x22]
    // ldrb r1, [r4, #9]
    // ldr r0, [r4, #4]
    // str r1, [r0, #0x28]
    // ldr r0, [r4, #4]
    // ldrb r1, [r4, #0x17]
    // add r0, #0x32
    // strb r1, [r0]
    // ldrb r0, [r4, #9]
    // bl MaskOfFlagNo
    // ldrb r1, [r4, #0x18]
    // tst r0, r1
    // bne _0225F796
    // ldrb r0, [r4, #9]
    // add r0, r4, r0
    // ldrb r1, [r0, #0xc]
    // b _0225F798
    // mov r1, #6
    // ldr r0, [r4, #4]
    // strb r1, [r0, #0x14]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // beq _0225F7B0
    // ldr r0, [r4, #4]
    // mov r1, #6
    // strb r1, [r0, #0x15]
    // b _0225F7DA
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // bl MaskOfFlagNo
    // ldrb r1, [r4, #0x18]
    // tst r0, r1
    // bne _0225F7D4
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r0, r4, r0
    // ldrb r1, [r0, #0xc]
    // ldr r0, [r4, #4]
    // strb r1, [r0, #0x15]
    // b _0225F7DA
    // ldr r0, [r4, #4]
    // mov r1, #6
    // strb r1, [r0, #0x15]
    // ldr r0, [r4, #4]
    // bl ov10_0221BE20
    // ldrb r0, [r4, #0xa]
    // add sp, #0x24
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // add r0, #0x36
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225F8A6
    // ldr r0, [r4]
    // bl ov12_02237BB8
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // ldr r1, [r4, #4]
    // add r1, #0x32
    // ldrb r1, [r1]
    // bl BattleInput_SetKeyPressed
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0
    // mov r1, #5
    // str r0, [sp, #4]
    // mov r2, #3
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // lsl r2, r2, #0xa
    // sub r3, #0xd
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // mov r1, #0xa
    // str r0, [sp, #4]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // ldr r2, _0225F870 ; =0x0000FFFF
    // add r0, r5, #0
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0xa]
    // add sp, #0x24
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // pop {r4, r5, r6, r7, pc}
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0225F8A6
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #0
    // bl sub_0201649C
    // ldr r3, [r4, #4]
    // ldr r0, [r4]
    // ldrb r2, [r3, #0x11]
    // cmp r2, #6
    // bne _0225F874
    // ldrb r1, [r4, #9]
    // mov r2, #0xff
    // bl ov12_02263360
    // b _0225F882
    // nop
    // _0225F870: .word 0x0000FFFF
    // add r2, r3, r2
    // add r2, #0x2c
    // ldrb r2, [r2]
    // ldrb r1, [r4, #9]
    // add r2, r2, #1
    // bl ov12_02263360
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #8]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // ldr r0, [r4, #4]
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov12_0225F8AC(void) {
    // str r0, [sp]
    BattleSystem_GetBattleType(*((u32*)r1));
    // tst r1, r0
    // tst r0, r1
    // str r6, [sp, #4]
    BattleSystem_GetBattlerIdPartner(*((u32*)r5), *((u8*)(r5 + 9)));
    // str r0, [sp, #4]
    ov12_02258BA0(*((u32*)r5), r6);
    ov12_02258800(*((u32*)r5), r6);
    BattleSystem_GetParty(*((u32*)r5), *((u8*)(r5 + 9)));
    // str r0, [sp, #8]
    Party_GetCount();
    // ldr r0, [sp, #4]
    // add r7, r5, r6
    // add r6, r5, r0
    BattleSystem_GetPartyMon(*((u32*)r5), *((u8*)(r5 + 9)), r4);
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #8]
    Party_GetCount(*((u8*)(r6 + 0xc)));
    ov12_02263360(*((u32*)r5), *((u8*)(r5 + 9)), (r4 + 1));
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 9)), *((u8*)(r5 + 8)));
    Heap_Free(r5);
    // ldr r0, [sp]
    SysTask_Destroy();
}



void ov12_0225F960(void) {
}



void ov12_0225F980(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r1, #0
    // ldrb r1, [r4, #9]
    // add r6, r0, #0
    // ldr r0, [r4]
    // add r2, sp, #0
    // bl ov12_0223BE0C
    // cmp r0, #1
    // bne _0225F99C
    // ldr r0, [r4]
    // bl ov12_02261ED4
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0225F9A8
    // cmp r0, #6
    // bls _0225F9B0
    // ldr r0, [r4]
    // bl ov12_02261EB8
    // b _0225FA18
    // ldrb r1, [r4, #9]
    // sub r5, r0, #1
    // ldr r0, [r4]
    // bl BattleSystem_GetParty
    // ldrb r1, [r4, #9]
    // add r1, r4, r1
    // ldrb r1, [r1, #0xc]
    // cmp r5, r1
    // beq _0225F9CA
    // ldrb r1, [r4, #0x16]
    // cmp r5, r1
    // bne _0225F9D2
    // ldr r0, [r4]
    // bl ov12_02261EB8
    // b _0225FA18
    // add r1, sp, #0
    // ldrb r5, [r1]
    // bl Party_GetCount
    // cmp r5, r0
    // ldr r0, [r4]
    // ble _0225F9E6
    // bl ov12_02261EB8
    // b _0225FA18
    // ldrb r1, [r4, #9]
    // sub r2, r5, #1
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r5, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0225FA02
    // ldr r0, [r4]
    // bl ov12_02261EB8
    // add r0, r5, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0225FA40 ; =0x000001EE
    // cmp r0, r1
    // bne _0225FA18
    // ldr r0, [r4]
    // bl ov12_02261EB8
    // add r2, sp, #0
    // ldrb r1, [r4, #9]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_02263360
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #8]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225FA40: .word 0x000001EE
    // TODO: decompile
}



void ov12_0225FA44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBgConfig
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleInput
    // add r5, r0, #0
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetOpponentData
    // str r0, [sp, #0xc]
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldrb r0, [r4, #0xd]
    // cmp r1, r0
    // beq _0225FA7E
    // ldr r0, [r4]
    // bl BattleSystem_GetHpBar
    // add r7, r0, #0
    // b _0225FA80
    // mov r7, #0
    // ldrb r0, [r4, #0xe]
    // cmp r0, #4
    // bhi _0225FB00
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FA92: ; jump table
    // add r0, r5, #0
    // bl BattleInput_CheckFeedbackDone
    // cmp r0, #0
    // beq _0225FB00
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _0225FAE4
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageLoader
    // add r5, r0, #0
    // ldrb r0, [r4, #0xf]
    // cmp r0, #5
    // add r0, sp, #0x10
    // bne _0225FAC6
    // mov r1, #0x82
    // strb r1, [r0, #5]
    // ldr r0, [r4, #0x14]
    // str r0, [sp, #0x18]
    // b _0225FACA
    // mov r1, #0
    // strb r1, [r0, #5]
    // ldr r1, [r4, #0x10]
    // add r0, sp, #0x10
    // strh r1, [r0, #6]
    // ldr r0, [r4]
    // bl BattleSystem_GetTextFrameDelay
    // add r3, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // add r2, sp, #0x14
    // bl BattleSystem_PrintBattleMessage
    // strh r0, [r4, #0x1a]
    // mov r0, #1
    // add sp, #0x38
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r4, #0x1a]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // beq _0225FB02
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _0225FB02
    // b _0225FC76
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // add r7, r0, #0
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r6, r0, #0
    // add r0, r5, #0
    // bl BattleInput_DisableBallGauge
    // ldrh r1, [r4, #0x18]
    // add r0, sp, #0x10
    // strh r1, [r0]
    // ldrb r0, [r4, #0xf]
    // cmp r0, #5
    // bhi _0225FBAE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FB34: ; jump table
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // mov r3, #0xd
    // bl BattleInput_ChangeMenu
    // b _0225FBB2
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // mov r3, #0xe
    // bl BattleInput_ChangeMenu
    // b _0225FBB2
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // mov r3, #0xf
    // bl BattleInput_ChangeMenu
    // b _0225FBB2
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // mov r3, #0x10
    // bl BattleInput_ChangeMenu
    // b _0225FBB2
    // mov r0, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // mov r3, #0x11
    // bl BattleInput_ChangeMenu
    // b _0225FBB2
    // bl GF_AssertFail
    // mov r0, #2
    // strb r0, [r4, #0xe]
    // add r0, r7, #0
    // bl NARC_Delete
    // add r0, r6, #0
    // bl NARC_Delete
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleInput_CheckTouch
    // mov r1, #0
    // mvn r1, r1
    // str r0, [r4, #8]
    // cmp r0, r1
    // beq _0225FC76
    // ldr r0, _0225FC7C ; =0x000005DD
    // bl PlaySE
    // mov r0, #3
    // add sp, #0x38
    // strb r0, [r4, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleInput_CheckFeedbackDone
    // cmp r0, #1
    // bne _0225FC76
    // mov r0, #7
    // mov r1, #5
    // bl NARC_New
    // str r0, [sp, #8]
    // mov r0, #8
    // mov r1, #5
    // bl NARC_New
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // bl ov12_02264EB4
    // ldr r0, [sp, #0xc]
    // bl ov12_02262014
    // add r0, r7, #0
    // bl ov12_02265D74
    // add r0, r5, #0
    // bl BattleInput_DisableBallGauge
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, [sp, #8]
    // str r3, [sp, #4]
    // add r1, r6, #0
    // add r2, r5, #0
    // bl BattleInput_ChangeMenu
    // ldr r0, [r4, #8]
    // cmp r0, #1
    // bne _0225FC38
    // add r0, r5, #0
    // mov r1, #0
    // bl BattleInput_Deadstriped_022698AC
    // mov r0, #4
    // strb r0, [r4, #0xe]
    // ldr r0, [sp, #8]
    // bl NARC_Delete
    // add r0, r6, #0
    // bl NARC_Delete
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov12_022698B0
    // cmp r0, #1
    // bne _0225FC76
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4]
    // ldr r2, [r4, #8]
    // bl ov12_02262F24
    // ldrb r1, [r4, #0xd]
    // ldrb r2, [r4, #0xc]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0225FC7C: .word 0x000005DD
    // TODO: decompile
}



void ov12_0225FC80(void) {
}



void ov12_0225FCA0(void) {
}



void ov12_0225FCC0(void) {
    // add r2, sp, #0
    ov12_0223BE0C(*((u32*)r1), *((u8*)(r1 + 0xd)));
    ov12_02261ED4(*((u32*)r4));
    // add r0, sp, #0
    // ldrb r0, [r0]
    ov12_02261EB8(*((u32*)r4));
    // add r2, sp, #0
    // ldrb r2, [r2]
    ov12_02262F24(*((u32*)r4), *((u8*)(r4 + 0xd)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_0225FD14(void) {
    // add r0, #0x6a
    // ldrb r0, [r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FD36: ; jump table
    Pokepic_GetAttr(*((u32*)(r1 + 8)), 6);
    // add r0, #0x69
    // ldrb r1, [r0]
    // add r2, sp, #0x1b8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x1b8
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0xc)));
    // add r4, #0x6a
    // strb r0, [r4]
    // add r4, #0x6a
    // strb r0, [r4]
    // add r3, #0x69
    // ldrb r3, [r3]
    // add r1, #0x10
    // add r2, sp, #0x168
    ov12_02261CA8(*((u32*)r4), r4);
    // add r0, sp, #0x168
    ov07_0223494C(5);
    // add r0, #0x69
    // ldrb r1, [r0]
    // add r2, sp, #0x110
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x110
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0xc)));
    // str r2, [r1, r0]
    // add r0, #0x6a
    // ldrb r0, [r0]
    // add r4, #0x6a
    // strb r0, [r4]
    BattleSystem_SetCriticalHpMusicFlag(*((u32*)r4), 2, 0);
    // add r0, #0x6b
    // ldrb r0, [r0]
    BattleSystem_SetHpBarDisabled(*((u32*)r4));
    // add r0, #0x6c
    // ldrb r0, [r0]
    ov12_0223A8D4(*((u32*)r4));
    PokepicManager_SetG3UpdateFlagsMask(1);
    // add r3, #0x10
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0xc)), r4);
    // add r0, #0x6a
    // ldrb r0, [r0]
    // add r4, #0x6a
    // strb r0, [r4]
    BattleSystem_SetCriticalHpMusicFlag(*((u32*)r4), 0);
    // add r0, #0x6b
    // ldrb r0, [r0]
    BattleSystem_SetHpBarEnabled(*((u32*)r4));
    // add r0, #0x6c
    // ldrb r0, [r0]
    ov12_0223A8D4(*((u32*)r4));
    PokepicManager_ResetG3UpdateFlagsMask(1);
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 6);
    // add r0, #0x69
    // ldrb r1, [r0]
    // add r2, sp, #0xb8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0xb8
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0xc)));
    // add r4, #0x6a
    // strb r0, [r4]
    // add r4, #0x6a
    // strb r0, [r4]
    // add r3, #0x69
    // ldrb r3, [r3]
    // add r1, #0x10
    // add r2, sp, #0x68
    ov12_02261CA8(*((u32*)r4), r4);
    // add r0, sp, #0x68
    ov07_02234A20(5);
    // add r0, #0x69
    // ldrb r1, [r0]
    // add r2, sp, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x10
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 0xc)));
    // str r2, [r1, r0]
    // add r0, #0x6a
    // ldrb r0, [r0]
    // add r4, #0x6a
    // strb r0, [r4]
    // add r1, #0x69
    // add r2, #0x68
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    ov12_0226430C(*((u32*)r4), *((u32*)(r4 + 4)), r4);
    Heap_Free(r4);
    SysTask_Destroy(r5);
    ov07_0221C394(*((u32*)(r4 + 0xc)));
    ov07_0221C3B0(*((u32*)(r4 + 0xc)));
    ov07_0221C3C0(*((u32*)(r4 + 0xc)));
    // add r0, #0x6a
    // ldrb r0, [r0]
    // add r4, #0x6a
    // strb r0, [r4]
}



void ov12_0225FF80(void) {
    *((u8*)(r1 + 0xa)) = 2;
    *((u8*)(r1 + 9)) = (*((u8*)(r1 + 9)) + 1);
    Pokepic_GetAttr(*((u32*)(r1 + 4)), 6);
    // eor r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 4)), 6, 1, r0);
    *((u8*)(r4 + 0xa)) = (r0 - 1);
    Pokepic_SetAttr(*((u32*)(r4 + 4)), 6, 0);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 8)), 0x17);
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_0225FFDC(void) {
    // ldrb r0, [r4]
    ov12_02264DCC(r1, *((u32*)(r1 + 0x30)));
    // ldrb r0, [r4]
    // strb r0, [r4]
    ov12_02264E00(r4);
    // mvn r1, r1
    // ldrb r0, [r4]
    // strb r0, [r4]
    // add r1, #0x24
    // add r2, #0x4c
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    ov12_0226430C(*((u32*)(r4 + 0xc)), 0, r4);
    *((u32*)(r4 + 0x10)) = 0;
    SysTask_Destroy(r5);
}



void ov12_02260030(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0
    // beq _02260046
    // cmp r0, #1
    // beq _02260062
    // cmp r0, #2
    // beq _022600A8
    // b _022600CE
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4e
    // strb r1, [r0]
    // ldr r0, _022600EC ; =0x0000070B
    // bl PlaySE
    // ldr r1, [r4, #0x40]
    // add r0, r4, #0
    // bl ov12_02264E34
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // cmp r0, #8
    // bhs _0226007A
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, r4, #0
    // bl ov12_02264E68
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _022600E8
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // cmp r0, #8
    // blo _022600A0
    // ldr r0, _022600EC ; =0x0000070B
    // mov r1, #0
    // bl StopSE
    // mov r0, #0x64
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // cmp r0, #8
    // blo _022600E8
    // ldr r0, _022600EC ; =0x0000070B
    // mov r1, #0
    // bl StopSE
    // mov r0, #0x64
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // add r2, r4, #0
    // add r1, #0x24
    // add r2, #0x4c
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4, #0xc]
    // bl ov12_0226430C
    // mov r0, #0
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _022600EC: .word 0x0000070B
    // TODO: decompile
}



void ov12_022600F0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x114
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223A8DC
    // add r1, r4, #0
    // add r1, #0x66
    // ldrb r1, [r1]
    // add r5, r0, #0
    // cmp r1, #0xa
    // bls _0226010C
    // b _02260374
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02260118: ; jump table
    // add r0, r4, #0
    // add r0, #0x70
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _02260170
    // add r0, r4, #0
    // add r0, #0x65
    // ldrb r1, [r0]
    // mov r0, #0xf
    // add r2, sp, #0xbc
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0xbc
    // bl ov12_02261B80
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r4, #0x66
    // add sp, #0x114
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #4
    // add r4, #0x66
    // add sp, #0x114
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r3, r4, #0
    // add r3, #0x65
    // ldrb r3, [r3]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0xc
    // add r2, sp, #0x6c
    // bl ov12_02261CA8
    // add r0, sp, #0x6c
    // mov r1, #5
    // bl ov07_0223494C
    // add r0, r4, #0
    // add r0, #0x65
    // ldrb r1, [r0]
    // mov r0, #0x10
    // add r2, sp, #0x14
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // ldr r0, [r4]
    // mov r3, #1
    // bl ov12_022643C8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // add r2, r5, #0
    // add r3, sp, #0x14
    // bl ov12_02261B80
    // mov r0, #0x1a
    // ldr r1, [r4, #4]
    // mov r2, #0
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r4, #0x66
    // add sp, #0x114
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // bl ov07_0221C394
    // add r0, r5, #0
    // bl ov07_0221C3B0
    // cmp r0, #0
    // bne _02260254
    // add r0, r5, #0
    // bl ov07_0221C3C0
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r4, #0x66
    // add sp, #0x114
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x67
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _02260208
    // mov r5, #0x75
    // b _0226020C
    // mov r5, #0x74
    // mvn r5, r5
    // add r1, r4, #0
    // add r1, #0x65
    // ldrb r1, [r1]
    // ldr r0, [r4]
    // bl BattleSystem_GetChatotVoice
    // str r5, [sp]
    // mov r1, #0x7f
    // str r1, [sp, #4]
    // add r1, r4, #0
    // add r1, #0x72
    // ldrh r1, [r1]
    // add r3, r4, #0
    // mov r2, #0
    // str r1, [sp, #8]
    // mov r1, #5
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r2, r4, #0
    // add r2, #0x68
    // add r3, #0x6b
    // ldrh r2, [r2]
    // ldrb r3, [r3]
    // bl sub_0207204C
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x66
    // strb r1, [r0]
    // bl IsCryFinished
    // cmp r0, #0
    // beq _02260256
    // b _02260374
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r4, #0x66
    // add sp, #0x114
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x67
    // ldrb r0, [r0]
    // cmp r0, #2
    // ldr r0, _02260378 ; =0x00000703
    // bne _0226027A
    // mov r1, #0x75
    // bl sub_0200602C
    // b _02260282
    // mov r1, #0x74
    // mvn r1, r1
    // bl sub_0200602C
    // ldr r0, [r4, #8]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // cmp r0, #0
    // ble _02260298
    // mov r0, #7
    // add r4, #0x66
    // add sp, #0x114
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #8
    // add r4, #0x66
    // add sp, #0x114
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #8]
    // mov r1, #0x29
    // bl Pokepic_GetAttr
    // add r5, r0, #0
    // sub r5, #8
    // bpl _022602B2
    // mov r5, #0
    // ldr r0, [r4, #8]
    // mov r1, #0x29
    // add r2, r5, #0
    // bl Pokepic_SetAttr
    // cmp r5, #0
    // bne _02260374
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x66
    // strb r1, [r0]
    // ldr r0, [r4, #0x6c]
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r2, r4, #0
    // add r3, r4, #0
    // add r0, #0x68
    // add r1, #0x6a
    // add r2, #0x67
    // add r3, #0x6b
    // ldrh r0, [r0]
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldrb r3, [r3]
    // bl GetMonPicHeightBySpeciesGenderForm
    // mov r3, #0x50
    // sub r0, r3, r0
    // str r0, [sp]
    // mov r1, #0
    // ldr r0, [r4, #8]
    // add r2, r1, #0
    // bl Pokepic_SetVisible
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r4, #0x66
    // add sp, #0x114
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl Pokepic_GetAttr
    // add r2, r0, #0
    // ldr r0, [r4, #8]
    // mov r1, #1
    // add r2, #8
    // bl Pokepic_SetAttr
    // ldr r0, [r4, #8]
    // mov r1, #0x12
    // bl Pokepic_GetAttr
    // add r5, r0, #0
    // sub r5, #8
    // bpl _02260332
    // mov r5, #0
    // ldr r0, [r4, #8]
    // mov r1, #0x12
    // add r2, r5, #0
    // bl Pokepic_SetAttr
    // cmp r5, #0
    // bne _02260374
    // ldr r0, [r4, #8]
    // bl Pokepic_Delete
    // add r0, r4, #0
    // add r0, #0x66
    // ldrb r0, [r0]
    // add r4, #0x66
    // add sp, #0x114
    // add r0, r0, #1
    // strb r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // add r1, r4, #0
    // add r2, r4, #0
    // add r1, #0x65
    // add r2, #0x64
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x114
    // pop {r3, r4, r5, r6, pc}
    // _02260378: .word 0x00000703
    // TODO: decompile
}



void ov12_0226037C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // bl BattleSystem_GetPaletteData
    // add r4, r0, #0
    // ldr r0, [r5]
    // bl ov12_0223A8D4
    // add r7, r0, #0
    // ldrb r0, [r5, #6]
    // cmp r0, #0
    // beq _022603A6
    // cmp r0, #1
    // beq _022603E4
    // cmp r0, #2
    // beq _022603F8
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, _02260414 ; =0x0000FFFF
    // add r0, r4, #0
    // mov r1, #0xf
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r1, #0
    // add r0, r7, #0
    // mov r2, #0x10
    // add r3, r1, #0
    // str r1, [sp]
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0
    // mov r1, #0x10
    // bl GF_SndStartFadeOutBGM
    // ldrb r0, [r5, #6]
    // add r0, r0, #1
    // strb r0, [r5, #6]
    // add r0, r4, #0
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _0226040E
    // ldrb r0, [r5, #6]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r5, #6]
    // pop {r4, r5, r6, r7, pc}
    // ldrb r1, [r5, #5]
    // ldrb r2, [r5, #4]
    // ldr r0, [r5]
    // bl ov12_0226430C
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02260414: .word 0x0000FFFF
    // TODO: decompile
}



void ov12_02260418(void) {
    ov12_0223A8DC(*((u32*)r1));
    // add r1, #0x62
    // ldrb r1, [r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02260440: ; jump table
    // add r2, #0x63
    // ldrb r2, [r2]
    Pokepic_SetAttr(*((u32*)(*((u32*)(r4 + 4)) + 0x20)), 6, r4);
    // add r0, #0x63
    // ldrb r0, [r0]
    // add r4, #0x62
    // strb r0, [r4]
    // add r0, #0x62
    // ldrb r0, [r0]
    // add r4, #0x62
    // strb r0, [r4]
    // add r4, #0x62
    // strb r0, [r4]
    // ldr r0, [r1, r0]
    // add r0, #0x61
    // ldrb r1, [r0]
    // add r2, sp, #0xb8
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0xb8
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // add r0, #0x62
    // ldrb r0, [r0]
    // add r4, #0x62
    // strb r0, [r4]
    // add r4, #0x62
    // strb r0, [r4]
    // add r3, #0x61
    // ldrb r3, [r3]
    // add r1, #8
    // add r2, sp, #0x68
    ov12_02261CA8(*((u32*)r4), r4, r4);
    // add r0, sp, #0x68
    ov07_02234A20(5);
    // add r0, #0x61
    // ldrb r1, [r0]
    // add r2, sp, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    ov12_022643C8(*((u32*)r4), 0, 1);
    // add r3, sp, #0x10
    ov12_02261B80(*((u32*)r4), *((u32*)(r4 + 4)), r5);
    // str r2, [r1, r0]
    // add r0, #0x62
    // ldrb r0, [r0]
    // add r4, #0x62
    // strb r0, [r4]
    ov07_0221C394((r4 + 1), *((u32*)(r4 + 4)), 1);
    ov07_0221C3B0(r5);
    ov07_0221C3C0(r5);
    // add r0, #0x62
    // ldrb r0, [r0]
    // add r4, #0x62
    // strb r0, [r4]
    // add r1, #0x61
    // add r2, #0x60
    // ldrb r1, [r1]
    // ldrb r2, [r2]
    ov12_0226430C(*((u32*)r4), r4, r4);
    Heap_Free(r4);
    SysTask_Destroy(r6);
}



void ov12_02260584(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // beq _02260596
    // cmp r0, #1
    // beq _022605AC
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // add r1, #0xb
    // bl BattleHpBar_BeginExpBarFullFlashEffect
    // ldr r0, _022605CC ; =0x0000070C
    // bl PlaySE
    // ldrb r0, [r4, #0xa]
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #0xb]
    // cmp r0, #1
    // bne _022605C8
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #8]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _022605CC: .word 0x0000070C
    // TODO: decompile
}



void ov12_022605D0(void) {
    ov12_0223BB78(*((u32*)r1));
    ov12_0223BB78(*((u32*)r4));
    sub_0200F450();
    ov12_0223BB80(*((u32*)r4), 0);
    TextPrinterCheckActive(*((u8*)(r4 + 6)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 5)), *((u8*)(r4 + 4)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_02260614(void) {
    TextPrinterCheckActive(*((u8*)(r1 + 6)));
    *((u8*)(r4 + 7)) = (*((u8*)(r4 + 7)) + 1);
    *((u8*)(r4 + 8)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov12_02263A00(*((u32*)r4), *((u8*)(r4 + 5)));
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 5)), *((u8*)(r4 + 4)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_02260668(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBgConfig
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // add r7, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetTerrainId
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetBackgroundId
    // lsl r1, r0, #2
    // ldr r0, _022609DC ; =ov12_0226D18C
    // ldr r0, [r0, r1]
    // str r0, [sp, #0xc]
    // ldrb r0, [r4, #0x15]
    // add r0, r0, #1
    // strb r0, [r4, #0x15]
    // ldrb r0, [r4, #0x14]
    // cmp r0, #5
    // bls _022606A2
    // b _022609D8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022606AE: ; jump table
    // mov r0, #5
    // mov r1, #0
    // bl ov07_0223458C
    // str r0, [r4, #4]
    // ldr r0, _022609E0 ; =ov12_0226D350
    // add r1, sp, #0x10
    // ldrb r5, [r0, r5]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // str r5, [sp, #0x10]
    // ldr r0, [r4, #4]
    // bl ov07_022345C8
    // str r0, [r4, #8]
    // add r0, r5, #1
    // str r0, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #4]
    // add r1, sp, #0x10
    // bl ov07_022345C8
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // bl ov07_02234694
    // ldr r0, _022609E4 ; =0x0000084F
    // bl PlaySE
    // mov r0, #1
    // strb r0, [r4, #0x14]
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0xa
    // bne _02260734
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r2, _022609E8 ; =0x0000F3FF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r7, #0
    // mov r1, #1
    // bl PaletteData_BeginPaletteFade
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r2, _022609EC ; =0x00003FFF
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r7, #0
    // mov r1, #4
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0xa
    // blo _0226077E
    // ldrb r0, [r4, #0x16]
    // cmp r0, #0x10
    // bhs _0226077E
    // add r0, r0, #1
    // strb r0, [r4, #0x16]
    // ldrb r0, [r4, #0x16]
    // cmp r0, #0x10
    // bls _0226074E
    // mov r0, #0x10
    // strb r0, [r4, #0x16]
    // add r0, r7, #0
    // mov r1, #1
    // bl PaletteData_GetFadedBuf
    // add r6, r0, #0
    // mov r0, #1
    // mov r5, #0
    // lsl r0, r0, #8
    // ldrb r2, [r4, #0x16]
    // mov r1, #0x1f
    // mul r1, r2
    // lsl r1, r1, #0xc
    // lsr r3, r1, #0x10
    // lsl r1, r3, #5
    // lsl r2, r3, #0xa
    // orr r1, r3
    // orr r2, r1
    // lsl r1, r5, #1
    // strh r2, [r6, r1]
    // add r1, r5, #1
    // lsl r1, r1, #0x10
    // lsr r5, r1, #0x10
    // cmp r5, r0
    // blo _0226075E
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0x14
    // bne _0226078A
    // ldr r0, [r4, #0xc]
    // bl ov07_02234694
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0x17
    // bne _02260798
    // mov r0, #0x85
    // lsl r0, r0, #4
    // bl PlaySE
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0x1c
    // bne _0226088A
    // add r0, r7, #0
    // mov r1, #0
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAE0
    // add r1, r5, #0
    // mov r2, #0xe0
    // bl MIi_CpuCopy16
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // cmp r0, #0x4a
    // bne _022607DA
    // add r0, r7, #0
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0xa0
    // bl MIi_CpuCopy16
    // b _0226083C
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _022607FE
    // add r0, r7, #0
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0xe0
    // bl MIi_CpuCopy16
    // b _0226083C
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // tst r0, r1
    // beq _02260824
    // add r0, r7, #0
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0xa0
    // bl MIi_CpuCopy16
    // b _0226083C
    // add r0, r7, #0
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0x80
    // bl MIi_CpuCopy16
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // mov r3, #0
    // lsl r0, r0, #0x10
    // str r3, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r2, _022609E8 ; =0x0000F3FF
    // add r0, r7, #0
    // mov r1, #1
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // mov r3, #0
    // lsl r0, r0, #0x10
    // str r3, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r2, _022609EC ; =0x00003FFF
    // add r0, r7, #0
    // mov r1, #4
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // mov r3, #0
    // lsl r0, r0, #0x10
    // str r3, [sp, #4]
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r2, _022609F0 ; =0x0000FFFF
    // add r0, r7, #0
    // mov r1, #0xa
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0x32
    // blo _022608BA
    // mov r0, #0x10
    // str r0, [sp]
    // mov r3, #0
    // str r3, [sp, #4]
    // mov r2, #3
    // str r3, [sp, #8]
    // add r0, r7, #0
    // mov r1, #1
    // lsl r2, r2, #0xa
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0x14]
    // add sp, #0x18
    // add r0, r0, #1
    // strb r0, [r4, #0x14]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0xc]
    // bl ov07_022346BC
    // cmp r0, #0
    // beq _022608BC
    // b _022609D8
    // ldr r0, [r4, #4]
    // bl ov07_02234604
    // ldrb r0, [r4, #0x14]
    // add sp, #0x18
    // add r0, r0, #1
    // strb r0, [r4, #0x14]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #0
    // bl sub_0201649C
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // bl ov07_02234628
    // ldr r0, [r4, #4]
    // bl ov07_02234604
    // ldrb r0, [r4, #0x14]
    // add r0, r0, #1
    // strb r0, [r4, #0x14]
    // add r0, r7, #0
    // mov r1, #0
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAE0
    // add r1, r5, #0
    // mov r2, #0xe0
    // bl MIi_CpuCopy16
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // cmp r0, #0x4a
    // bne _02260936
    // add r0, r7, #0
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0xa0
    // bl MIi_CpuCopy16
    // b _02260998
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _0226095A
    // add r0, r7, #0
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0xe0
    // bl MIi_CpuCopy16
    // b _02260998
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // tst r0, r1
    // beq _02260980
    // add r0, r7, #0
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0xa0
    // bl MIi_CpuCopy16
    // b _02260998
    // add r0, r7, #0
    // mov r1, #2
    // bl PaletteData_GetUnfadedBuf
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl ov12_0223BAEC
    // add r1, r5, #0
    // mov r2, #0x80
    // bl MIi_CpuCopy16
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022609F4 ; =0x00007FFF
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, _022609F0 ; =0x0000FFFF
    // add r0, r7, #0
    // mov r1, #1
    // bl PaletteData_BeginPaletteFade
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, _022609F0 ; =0x0000FFFF
    // str r3, [sp, #4]
    // str r2, [sp, #8]
    // add r0, r7, #0
    // mov r1, #4
    // lsr r2, r2, #2
    // bl PaletteData_BeginPaletteFade
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _022609F4 ; =0x00007FFF
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, _022609F0 ; =0x0000FFFF
    // add r0, r7, #0
    // mov r1, #0xa
    // bl PaletteData_BeginPaletteFade
    // mov r0, #3
    // strb r0, [r4, #0x14]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _022609DC: .word ov12_0226D18C
    // _022609E0: .word ov12_0226D350
    // _022609E4: .word 0x0000084F
    // _022609E8: .word 0x0000F3FF
    // _022609EC: .word 0x00003FFF
    // _022609F0: .word 0x0000FFFF
    // _022609F4: .word 0x00007FFF
    // TODO: decompile
}



void ov12_022609F8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetPaletteData
    // ldrb r1, [r4, #0xa]
    // add r6, r0, #0
    // cmp r1, #3
    // bls _02260A10
    // b _02260B28
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02260A1C: ; jump table
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0x10
    // str r1, [sp, #4]
    // mov r1, #0xa
    // str r2, [sp, #8]
    // add r3, r1, #0
    // ldr r2, _02260B2C ; =0x0000FFFF
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0xa]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, pc}
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _02260B28
    // ldr r0, [r4]
    // bl ov12_02237B0C
    // mov r0, #5
    // mov r1, #0x38
    // bl Heap_Alloc
    // str r0, [r4, #4]
    // ldrb r1, [r4, #9]
    // ldr r0, [r4]
    // bl BattleSystem_GetParty
    // ldr r1, [r4, #4]
    // mov r2, #3
    // str r0, [r1]
    // ldr r1, [r4]
    // ldr r0, [r4, #4]
    // str r1, [r0, #8]
    // ldr r0, [r4, #4]
    // mov r1, #5
    // str r1, [r0, #0xc]
    // ldrb r1, [r4, #0xe]
    // ldr r0, [r4, #4]
    // strb r1, [r0, #0x11]
    // ldrh r1, [r4, #0xc]
    // ldr r0, [r4, #4]
    // strh r1, [r0, #0x24]
    // ldr r1, [r4, #4]
    // mov r0, #0
    // add r1, #0x36
    // strb r0, [r1]
    // ldr r1, [r4, #4]
    // strb r0, [r1, #0x12]
    // ldr r1, [r4, #4]
    // add r1, #0x35
    // strb r2, [r1]
    // ldr r1, [r4, #4]
    // strh r0, [r1, #0x22]
    // ldrb r2, [r4, #9]
    // ldr r1, [r4, #4]
    // str r2, [r1, #0x28]
    // ldr r1, [r4, #4]
    // add r1, #0x32
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // bl ov10_0221BE20
    // ldrb r0, [r4, #0xa]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // add r0, #0x36
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02260B28
    // ldr r0, [r4]
    // bl ov12_02237BB8
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // mov r1, #0xa
    // str r0, [sp, #4]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // ldr r2, _02260B2C ; =0x0000FFFF
    // add r0, r6, #0
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // ldrb r0, [r4, #0xa]
    // add sp, #0xc
    // add r0, r0, #1
    // strb r0, [r4, #0xa]
    // pop {r3, r4, r5, r6, pc}
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _02260B28
    // ldr r0, [r4, #4]
    // add r0, #0x34
    // ldrb r2, [r0]
    // ldr r0, [r4]
    // cmp r2, #4
    // bne _02260B04
    // ldrb r1, [r4, #9]
    // mov r2, #0xff
    // bl ov12_02263360
    // b _02260B0C
    // ldrb r1, [r4, #9]
    // add r2, r2, #1
    // bl ov12_02263360
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #8]
    // ldr r0, [r4]
    // bl ov12_0226430C
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _02260B2C: .word 0x0000FFFF
    // TODO: decompile
}



void ov12_02260B30(void) {
    *((u8*)(r1 + 0xc)) = 0;
    Pokepic_GetAttr(*((u32*)(r1 + 4)), 0x28);
    Pokepic_SetAttr(*((u32*)(r5 + 4)), 0x28, ((r0 - 1) + 1));
    *((u8*)(r5 + 0xa)) = (*((u8*)(r5 + 0xa)) + 1);
    *((u8*)(r5 + 0xc)) = (r1 + 1);
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 9)), *((u8*)(r5 + 8)));
    Heap_Free(r5);
    SysTask_Destroy(r4);
}



void ov12_02260BA0(void) {
    BattleSystem_GetFieldSide(*((u32*)r1), *((u8*)(r1 + 5)));
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r7, [sp, #8]
    BattleSystem_GetSpriteSystem(*((u32*)r5));
    BattleSystem_GetSpriteManager(*((u32*)r5));
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r0, #8
    ov12_0226AEE0(r5, r6, r7);
    ov12_0223A914(*((u32*)r5), r6, r0);
    *((u8*)(r5 + 7)) = (*((u8*)(r5 + 7)) + 1);
    ov12_0223A908(*((u32*)r5), r6);
    ov12_0226AF48();
    *((u8*)(r5 + 7)) = (*((u8*)(r5 + 7)) + 1);
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    Heap_Free(r5);
    SysTask_Destroy(r4);
}



void ov12_02260C58(void) {
    BattleSystem_GetFieldSide(*((u32*)r1), *((u8*)(r1 + 5)));
    ov12_0223A908(*((u32*)r5), 1);
    ov12_0226AF6C(r0, 1, 1);
    *((u8*)(r5 + 7)) = (*((u8*)(r5 + 7)) + 1);
    ov12_0226AFA4((*((u8*)(r5 + 7)) + 1));
    ov12_0226AFC8(r6);
    ov12_0223A914(*((u32*)r5), r4, 0);
    *((u8*)(r5 + 7)) = (*((u8*)(r5 + 7)) + 1);
    ov12_0226430C(*((u32*)r5), *((u8*)(r5 + 5)), *((u8*)(r5 + 4)));
    Heap_Free(r5);
    SysTask_Destroy(r7);
}



void ov12_02260CDC(void) {
    // add r0, #0x8c
    GF_AssertFail(*((u32*)*((u32*)(r1 + 4))));
    ov07_0221FB90(*((u32*)r4), 5, *((u8*)(r4 + 0xd)));
    // add r1, #0x8c
    // str r0, [r1]
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_02260D28(void) {
    // add r0, #0x8c
    GF_AssertFail(*((u32*)*((u32*)(r1 + 4))));
    // add r0, #0x8c
    ov07_0221FE70(*((u32*)*((u32*)(r4 + 4))));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) + 1);
    // add r0, #0x8c
    ov07_0221FE3C(*((u32*)*((u32*)(r4 + 4))), *((u8*)(r4 + 0xd)));
    // add r0, #0x8c
    // str r1, [r0]
    ov12_0226430C(*((u32*)r4), *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xc)));
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_02260D84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // bl BattleSystem_GetPaletteData
    // add r4, r0, #0
    // ldr r0, [r5]
    // bl ov12_0223A8D4
    // add r7, r0, #0
    // ldrb r0, [r5, #6]
    // cmp r0, #0
    // beq _02260DAE
    // cmp r0, #1
    // beq _02260DE0
    // cmp r0, #2
    // beq _02260E84
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #7]
    // cmp r0, #0
    // bne _02260DD2
    // ldr r0, [r5]
    // bl BattleSystem_GetMessageIcon
    // mov r1, #1
    // bl sub_0201649C
    // ldr r0, _02260EA0 ; =0x0000FFFF
    // mov r1, #0
    // str r0, [sp]
    // add r0, r7, #0
    // mov r2, #0x10
    // add r3, r1, #0
    // bl Pokepic_StartPaletteFadeAll
    // b _02260DDA
    // mov r0, #0
    // mov r1, #0x10
    // bl GF_SndStartFadeOutBGM
    // ldrb r0, [r5, #6]
    // add r0, r0, #1
    // strb r0, [r5, #6]
    // ldrb r0, [r5, #7]
    // cmp r0, #0
    // ldrb r0, [r5, #8]
    // bne _02260E24
    // str r0, [sp]
    // ldr r0, _02260EA0 ; =0x0000FFFF
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0xa0
    // bl PaletteData_BlendPalette
    // ldrb r0, [r5, #8]
    // mov r1, #0
    // mov r2, #0xc0
    // str r0, [sp]
    // ldr r0, _02260EA0 ; =0x0000FFFF
    // mov r3, #0x40
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl PaletteData_BlendPalette
    // ldrb r0, [r5, #8]
    // mov r1, #2
    // mov r2, #0
    // str r0, [sp]
    // ldr r0, _02260EA0 ; =0x0000FFFF
    // mov r3, #0xe0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl PaletteData_BlendPalette
    // b _02260E62
    // str r0, [sp]
    // ldr r0, _02260EA0 ; =0x0000FFFF
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0xa0
    // mov r3, #0x20
    // bl PaletteData_BlendPalette
    // ldrb r0, [r5, #8]
    // mov r1, #1
    // add r3, r1, #0
    // str r0, [sp]
    // ldr r0, _02260EA0 ; =0x0000FFFF
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r3, #0xff
    // bl PaletteData_BlendPalette
    // ldrb r0, [r5, #8]
    // mov r1, #3
    // add r3, r1, #0
    // str r0, [sp]
    // ldr r0, _02260EA0 ; =0x0000FFFF
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r3, #0xfd
    // bl PaletteData_BlendPalette
    // ldrb r1, [r5, #8]
    // add r0, r1, #1
    // strb r0, [r5, #8]
    // cmp r1, #0x10
    // bne _02260E9A
    // ldrb r0, [r5, #7]
    // cmp r0, #0
    // bne _02260E7A
    // mov r0, #0
    // add r1, r0, #0
    // bl ToggleBgLayer
    // ldrb r0, [r5, #6]
    // add sp, #8
    // add r0, r0, #1
    // strb r0, [r5, #6]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r5, #5]
    // ldrb r2, [r5, #4]
    // ldr r0, [r5]
    // bl ov12_0226430C
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02260EA0: .word 0x0000FFFF
    // TODO: decompile
}



void ov12_02260EA4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // bl BattleSystem_GetBattleType
    // add r4, r0, #0
    // add r0, r6, #0
    // bl BattleSystem_GetBattleSpecial
    // mov r1, #0x40
    // tst r1, r4
    // beq _02260F2C
    // mov r2, #0x65
    // lsl r2, r2, #2
    // ldrb r1, [r5, r2]
    // cmp r1, #0
    // beq _02260EE6
    // ldr r0, _022611E8 ; =ov12_0225E104
    // mov r1, #1
    // str r0, [r5]
    // ldr r0, _022611EC ; =ov12_0225E404
    // str r0, [r5, #4]
    // ldr r0, _022611F0 ; =ov12_0225E6FC
    // str r0, [r5, #8]
    // ldr r0, _022611F4 ; =ov12_0225F3A4
    // str r0, [r5, #0xc]
    // ldr r0, _022611F8 ; =ov12_0225F8AC
    // str r0, [r5, #0x10]
    // ldr r0, _022611FC ; =ov12_0225FC80
    // str r0, [r5, #0x14]
    // add r0, r2, #2
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #0x10
    // tst r0, r1
    // beq _02260F0C
    // ldr r0, _02261200 ; =ov12_0225E1FC
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _02261204 ; =ov12_0225E4EC
    // str r0, [r5, #4]
    // ldr r0, _02261208 ; =ov12_0225E760
    // str r0, [r5, #8]
    // ldr r0, _0226120C ; =ov12_0225F434
    // str r0, [r5, #0xc]
    // ldr r0, _02261210 ; =ov12_0225F980
    // str r0, [r5, #0x10]
    // ldr r0, _02261214 ; =ov12_0225FCC0
    // str r0, [r5, #0x14]
    // add r0, r2, #2
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, _02261218 ; =ov12_0225DAD4
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _0226121C ; =ov12_0225E250
    // str r0, [r5, #4]
    // ldr r0, _02261220 ; =ov12_0225E568
    // str r0, [r5, #8]
    // ldr r0, _02261224 ; =ov12_0225E830
    // str r0, [r5, #0xc]
    // ldr r0, _02261228 ; =ov12_0225F4E0
    // str r0, [r5, #0x10]
    // ldr r0, _0226122C ; =ov12_0225FA44
    // str r0, [r5, #0x14]
    // add r0, r2, #2
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #0x88
    // and r1, r4
    // cmp r1, #0x88
    // bne _02261006
    // ldr r2, _02261230 ; =0x00000195
    // mov r1, #1
    // ldrb r3, [r5, r2]
    // tst r1, r3
    // beq _02260F88
    // add r0, r6, #0
    // bl ov12_0223B688
    // cmp r0, #0
    // beq _02260F68
    // ldr r0, _022611E8 ; =ov12_0225E104
    // mov r1, #1
    // str r0, [r5]
    // ldr r0, _022611EC ; =ov12_0225E404
    // str r0, [r5, #4]
    // ldr r0, _022611F0 ; =ov12_0225E6FC
    // str r0, [r5, #8]
    // ldr r0, _022611F4 ; =ov12_0225F3A4
    // str r0, [r5, #0xc]
    // ldr r0, _022611F8 ; =ov12_0225F8AC
    // str r0, [r5, #0x10]
    // ldr r0, _022611FC ; =ov12_0225FC80
    // str r0, [r5, #0x14]
    // ldr r0, _02261234 ; =0x00000196
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, _02261238 ; =ov12_0225E134
    // mov r1, #2
    // str r0, [r5]
    // ldr r0, _0226123C ; =ov12_0225E4CC
    // str r0, [r5, #4]
    // ldr r0, _02261240 ; =ov12_0225E740
    // str r0, [r5, #8]
    // ldr r0, _02261244 ; =ov12_0225F3FC
    // str r0, [r5, #0xc]
    // ldr r0, _02261248 ; =ov12_0225F960
    // str r0, [r5, #0x10]
    // ldr r0, _0226124C ; =ov12_0225FCA0
    // str r0, [r5, #0x14]
    // ldr r0, _02261234 ; =0x00000196
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #0x10
    // tst r0, r1
    // beq _02260FAE
    // ldr r0, _02261200 ; =ov12_0225E1FC
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _02261204 ; =ov12_0225E4EC
    // str r0, [r5, #4]
    // ldr r0, _02261208 ; =ov12_0225E760
    // str r0, [r5, #8]
    // ldr r0, _0226120C ; =ov12_0225F434
    // str r0, [r5, #0xc]
    // ldr r0, _02261210 ; =ov12_0225F980
    // str r0, [r5, #0x10]
    // ldr r0, _02261214 ; =ov12_0225FCC0
    // str r0, [r5, #0x14]
    // add r0, r2, #1
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // add r0, r6, #0
    // bl ov12_0223BFC0
    // add r1, r0, #0
    // add r0, r6, #0
    // lsl r1, r1, #1
    // bl ov12_0223AB0C
    // ldr r1, _02261230 ; =0x00000195
    // ldrb r2, [r5, r1]
    // cmp r2, r0
    // beq _02260FE6
    // ldr r0, _02261238 ; =ov12_0225E134
    // mov r2, #2
    // str r0, [r5]
    // ldr r0, _0226123C ; =ov12_0225E4CC
    // str r0, [r5, #4]
    // ldr r0, _02261240 ; =ov12_0225E740
    // str r0, [r5, #8]
    // ldr r0, _02261244 ; =ov12_0225F3FC
    // str r0, [r5, #0xc]
    // ldr r0, _02261248 ; =ov12_0225F960
    // str r0, [r5, #0x10]
    // ldr r0, _0226124C ; =ov12_0225FCA0
    // str r0, [r5, #0x14]
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, _02261218 ; =ov12_0225DAD4
    // mov r2, #0
    // str r0, [r5]
    // ldr r0, _0226121C ; =ov12_0225E250
    // str r0, [r5, #4]
    // ldr r0, _02261220 ; =ov12_0225E568
    // str r0, [r5, #8]
    // ldr r0, _02261224 ; =ov12_0225E830
    // str r0, [r5, #0xc]
    // ldr r0, _02261228 ; =ov12_0225F4E0
    // str r0, [r5, #0x10]
    // ldr r0, _0226122C ; =ov12_0225FA44
    // str r0, [r5, #0x14]
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #8
    // tst r1, r4
    // beq _02261088
    // mov r1, #0x10
    // tst r0, r1
    // beq _02261032
    // ldr r0, _02261200 ; =ov12_0225E1FC
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _02261204 ; =ov12_0225E4EC
    // str r0, [r5, #4]
    // ldr r0, _02261208 ; =ov12_0225E760
    // str r0, [r5, #8]
    // ldr r0, _0226120C ; =ov12_0225F434
    // str r0, [r5, #0xc]
    // ldr r0, _02261210 ; =ov12_0225F980
    // str r0, [r5, #0x10]
    // ldr r0, _02261214 ; =ov12_0225FCC0
    // str r0, [r5, #0x14]
    // ldr r0, _02261234 ; =0x00000196
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // add r0, r6, #0
    // bl ov12_0223BFC0
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov12_0223AB0C
    // ldr r1, _02261230 ; =0x00000195
    // ldrb r2, [r5, r1]
    // cmp r2, r0
    // beq _02261068
    // ldr r0, _02261238 ; =ov12_0225E134
    // mov r2, #2
    // str r0, [r5]
    // ldr r0, _0226123C ; =ov12_0225E4CC
    // str r0, [r5, #4]
    // ldr r0, _02261240 ; =ov12_0225E740
    // str r0, [r5, #8]
    // ldr r0, _02261244 ; =ov12_0225F3FC
    // str r0, [r5, #0xc]
    // ldr r0, _02261248 ; =ov12_0225F960
    // str r0, [r5, #0x10]
    // ldr r0, _0226124C ; =ov12_0225FCA0
    // str r0, [r5, #0x14]
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, _02261218 ; =ov12_0225DAD4
    // mov r2, #0
    // str r0, [r5]
    // ldr r0, _0226121C ; =ov12_0225E250
    // str r0, [r5, #4]
    // ldr r0, _02261220 ; =ov12_0225E568
    // str r0, [r5, #8]
    // ldr r0, _02261224 ; =ov12_0225E830
    // str r0, [r5, #0xc]
    // ldr r0, _02261228 ; =ov12_0225F4E0
    // str r0, [r5, #0x10]
    // ldr r0, _0226122C ; =ov12_0225FA44
    // str r0, [r5, #0x14]
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #4
    // add r2, r4, #0
    // tst r2, r1
    // beq _02261100
    // mov r1, #0x10
    // tst r0, r1
    // beq _022610B6
    // ldr r0, _02261200 ; =ov12_0225E1FC
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _02261204 ; =ov12_0225E4EC
    // str r0, [r5, #4]
    // ldr r0, _02261208 ; =ov12_0225E760
    // str r0, [r5, #8]
    // ldr r0, _0226120C ; =ov12_0225F434
    // str r0, [r5, #0xc]
    // ldr r0, _02261210 ; =ov12_0225F980
    // str r0, [r5, #0x10]
    // ldr r0, _02261214 ; =ov12_0225FCC0
    // str r0, [r5, #0x14]
    // ldr r0, _02261234 ; =0x00000196
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, _02261230 ; =0x00000195
    // mov r1, #1
    // ldrb r2, [r5, r0]
    // tst r1, r2
    // beq _022610E0
    // ldr r1, _02261238 ; =ov12_0225E134
    // add r0, r0, #1
    // str r1, [r5]
    // ldr r1, _0226123C ; =ov12_0225E4CC
    // str r1, [r5, #4]
    // ldr r1, _02261240 ; =ov12_0225E740
    // str r1, [r5, #8]
    // ldr r1, _02261244 ; =ov12_0225F3FC
    // str r1, [r5, #0xc]
    // ldr r1, _02261248 ; =ov12_0225F960
    // str r1, [r5, #0x10]
    // ldr r1, _0226124C ; =ov12_0225FCA0
    // str r1, [r5, #0x14]
    // mov r1, #2
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r1, _02261218 ; =ov12_0225DAD4
    // add r0, r0, #1
    // str r1, [r5]
    // ldr r1, _0226121C ; =ov12_0225E250
    // str r1, [r5, #4]
    // ldr r1, _02261220 ; =ov12_0225E568
    // str r1, [r5, #8]
    // ldr r1, _02261224 ; =ov12_0225E830
    // str r1, [r5, #0xc]
    // ldr r1, _02261228 ; =ov12_0225F4E0
    // str r1, [r5, #0x10]
    // ldr r1, _0226122C ; =ov12_0225FA44
    // str r1, [r5, #0x14]
    // mov r1, #0
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // lsl r1, r1, #7
    // tst r1, r4
    // beq _0226113C
    // ldr r0, _02261230 ; =0x00000195
    // mov r1, #1
    // ldrb r2, [r5, r0]
    // tst r2, r1
    // beq _02261126
    // ldr r2, _02261250 ; =ov12_0225E1D4
    // add r0, r0, #1
    // str r2, [r5]
    // mov r2, #0
    // str r2, [r5, #4]
    // str r2, [r5, #8]
    // str r2, [r5, #0xc]
    // str r2, [r5, #0x10]
    // str r2, [r5, #0x14]
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r1, _02261218 ; =ov12_0225DAD4
    // add r0, r0, #1
    // str r1, [r5]
    // mov r1, #0
    // str r1, [r5, #4]
    // str r1, [r5, #8]
    // str r1, [r5, #0xc]
    // str r1, [r5, #0x10]
    // str r1, [r5, #0x14]
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #0x20
    // tst r1, r4
    // beq _0226117A
    // ldr r0, _02261230 ; =0x00000195
    // mov r1, #1
    // ldrb r2, [r5, r0]
    // tst r2, r1
    // beq _02261162
    // ldr r2, _02261254 ; =ov12_0225E154
    // add r0, r0, #1
    // str r2, [r5]
    // mov r2, #0
    // str r2, [r5, #4]
    // str r2, [r5, #8]
    // str r2, [r5, #0xc]
    // str r2, [r5, #0x10]
    // str r2, [r5, #0x14]
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r1, _02261218 ; =ov12_0225DAD4
    // mov r2, #0
    // str r1, [r5]
    // str r2, [r5, #4]
    // str r2, [r5, #8]
    // str r2, [r5, #0xc]
    // ldr r1, _0226122C ; =ov12_0225FA44
    // str r2, [r5, #0x10]
    // str r1, [r5, #0x14]
    // add r0, r0, #1
    // strb r2, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r2, _02261230 ; =0x00000195
    // mov r1, #1
    // ldrb r3, [r5, r2]
    // tst r3, r1
    // beq _022611A2
    // ldr r0, _022611E8 ; =ov12_0225E104
    // str r0, [r5]
    // ldr r0, _022611EC ; =ov12_0225E404
    // str r0, [r5, #4]
    // ldr r0, _022611F0 ; =ov12_0225E6FC
    // str r0, [r5, #8]
    // ldr r0, _022611F4 ; =ov12_0225F3A4
    // str r0, [r5, #0xc]
    // ldr r0, _022611F8 ; =ov12_0225F8AC
    // str r0, [r5, #0x10]
    // ldr r0, _022611FC ; =ov12_0225FC80
    // str r0, [r5, #0x14]
    // add r0, r2, #1
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #0x10
    // tst r0, r1
    // beq _022611C8
    // ldr r0, _02261200 ; =ov12_0225E1FC
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _02261204 ; =ov12_0225E4EC
    // str r0, [r5, #4]
    // ldr r0, _02261208 ; =ov12_0225E760
    // str r0, [r5, #8]
    // ldr r0, _0226120C ; =ov12_0225F434
    // str r0, [r5, #0xc]
    // ldr r0, _02261210 ; =ov12_0225F980
    // str r0, [r5, #0x10]
    // ldr r0, _02261214 ; =ov12_0225FCC0
    // str r0, [r5, #0x14]
    // add r0, r2, #1
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, _02261218 ; =ov12_0225DAD4
    // mov r1, #0
    // str r0, [r5]
    // ldr r0, _0226121C ; =ov12_0225E250
    // str r0, [r5, #4]
    // ldr r0, _02261220 ; =ov12_0225E568
    // str r0, [r5, #8]
    // ldr r0, _02261224 ; =ov12_0225E830
    // str r0, [r5, #0xc]
    // ldr r0, _02261228 ; =ov12_0225F4E0
    // str r0, [r5, #0x10]
    // ldr r0, _0226122C ; =ov12_0225FA44
    // str r0, [r5, #0x14]
    // add r0, r2, #1
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // _022611E8: .word ov12_0225E104
    // _022611EC: .word ov12_0225E404
    // _022611F0: .word ov12_0225E6FC
    // _022611F4: .word ov12_0225F3A4
    // _022611F8: .word ov12_0225F8AC
    // _022611FC: .word ov12_0225FC80
    // _02261200: .word ov12_0225E1FC
    // _02261204: .word ov12_0225E4EC
    // _02261208: .word ov12_0225E760
    // _0226120C: .word ov12_0225F434
    // _02261210: .word ov12_0225F980
    // _02261214: .word ov12_0225FCC0
    // _02261218: .word ov12_0225DAD4
    // _0226121C: .word ov12_0225E250
    // _02261220: .word ov12_0225E568
    // _02261224: .word ov12_0225E830
    // _02261228: .word ov12_0225F4E0
    // _0226122C: .word ov12_0225FA44
    // _02261230: .word 0x00000195
    // _02261234: .word 0x00000196
    // _02261238: .word ov12_0225E134
    // _0226123C: .word ov12_0225E4CC
    // _02261240: .word ov12_0225E740
    // _02261244: .word ov12_0225F3FC
    // _02261248: .word ov12_0225F960
    // _0226124C: .word ov12_0225FCA0
    // _02261250: .word ov12_0225E1D4
    // _02261254: .word ov12_0225E154
    // TODO: decompile
}



void ov12_02261258(void) {
    // ldr r1, _02261260 ; =0x00000195
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _02261260: .word 0x00000195
    // TODO: decompile
}



void ov12_02261264(void) {
    // ldr r1, _0226126C ; =0x00000196
    // ldrb r0, [r0, r1]
    // bx lr
    // nop
    // _0226126C: .word 0x00000196
    // TODO: decompile
}



void ov12_02261270(void) {
    // ldr r1, [r0, #0x20]
    // cmp r1, #0
    // bne _02261278
    // ldr r1, [r0, #0x1c]
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}



void OpponentData_GetHpBar(void) {
    // add r0, #0x28
}



void ov12_02261280(void) {
    // add r0, #0x80
}



void ov12_02261284(void) {
    // ldr r3, _02261290 ; =MI_CpuFill8
    // add r0, #0x80
    // mov r1, #0
    // mov r2, #8
    // bx r3
    // nop
    // _02261290: .word MI_CpuFill8
    // TODO: decompile
}



void ov12_02261294(void) {
}



void ov12_022612A4(void) {
    // ldr r4, [sp, #0x50]
    // str r1, [sp, #0x14]
    // str r3, [sp, #0x18]
    ov12_0223A99C();
    ov12_0223BB94(r4);
    // str r0, [sp, #0x20]
    ov12_0223AB0C(r7, r4);
    // and r0, r6
    // str r0, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrh r0, [r5]
    sub_02014540(*((u16*)(r5 + 6)), *((u16*)(r5 + 2)), 5);
    ov12_0223A99C(r7);
    // ldrh r2, [r5]
    ov12_0223BBA8(r4);
    ov12_0223A99C(r7);
    ov12_0223BBC0(r4, *((u16*)(r5 + 4)));
    ov12_0223A99C(r7);
    // ldr r2, [sp, #0x40]
    ov12_0223BBD8(r4);
    // ldr r0, [sp, #0x3c]
    // ldr r3, [sp, #0x40]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // ldr r0, [sp, #0x54]
    // ldr r4, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r3, r4, r3
    PokepicManager_CreatePokepicAt(r5);
    // ldr r0, [sp, #0x1c]
    // asr r6, r6, #1
    Pokepic_SetAttr(r0, 0x2a, r6);
    // ldr r2, [sp, #0x4c]
    Pokepic_SetAttr(r4, 0x2e);
    // ldr r2, [sp, #0x38]
    // add r2, #0x24
    Pokepic_SetAttr(r4, 0x14);
    // ldr r2, [sp, #0x48]
    Pokepic_SetAttr(r4, 0x15);
    // ldr r3, [sp, #0x40]
    // sub r2, r2, r3
    Pokepic_SetAttr(r4, 0x16, 0x24);
    // ldr r2, [sp, #0x44]
    Pokepic_SetAttr(r4, 0x29);
}



void ov12_02261390(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // ldr r1, _0226144C ; =0x00000195
    // add r6, r2, #0
    // ldrb r2, [r5, r1]
    // mov r1, #1
    // add r7, r0, #0
    // add r4, r3, #0
    // tst r1, r2
    // beq _022613EA
    // bl BattleSystem_GetBattleType
    // mov r1, #4
    // tst r0, r1
    // beq _022613CA
    // ldr r0, _02261450 ; =0x000003DE
    // strh r0, [r4, #2]
    // mov r0, #0x1b
    // strb r0, [r4, #1]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // str r1, [r4, #4]
    // ldrb r1, [r5, r0]
    // ldrb r0, [r6, #1]
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02261454 ; =0x000003DD
    // strh r0, [r4, #2]
    // mov r0, #0x32
    // strb r0, [r4, #1]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // str r1, [r4, #4]
    // ldrb r1, [r5, r0]
    // str r1, [r4, #8]
    // ldrb r1, [r5, r0]
    // ldrb r0, [r6, #1]
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // bne _02261434
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #4
    // tst r0, r1
    // bne _02261434
    // ldrh r0, [r6, #2]
    // cmp r0, #0
    // bne _0226140E
    // mov r0, #0xf6
    // lsl r0, r0, #2
    // strh r0, [r4, #2]
    // b _02261438
    // cmp r0, #0x19
    // bhs _02261418
    // ldr r0, _02261458 ; =0x000003D9
    // strh r0, [r4, #2]
    // b _02261438
    // cmp r0, #0x32
    // bhs _02261424
    // mov r0, #0xf7
    // lsl r0, r0, #2
    // strh r0, [r4, #2]
    // b _02261438
    // cmp r0, #0x4b
    // bhs _0226142E
    // ldr r0, _0226145C ; =0x000003DA
    // strh r0, [r4, #2]
    // b _02261438
    // ldr r0, _02261460 ; =0x000003DB
    // strh r0, [r4, #2]
    // b _02261438
    // ldr r0, _02261458 ; =0x000003D9
    // strh r0, [r4, #2]
    // mov r0, #2
    // strb r0, [r4, #1]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // ldrb r0, [r6, #1]
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0226144C: .word 0x00000195
    // _02261450: .word 0x000003DE
    // _02261454: .word 0x000003DD
    // _02261458: .word 0x000003D9
    // _0226145C: .word 0x000003DA
    // _02261460: .word 0x000003DB
    // TODO: decompile
}



void ov12_02261464(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // ldr r1, _02261524 ; =0x00000195
    // add r6, r2, #0
    // ldrb r2, [r5, r1]
    // mov r1, #1
    // add r7, r0, #0
    // add r4, r3, #0
    // tst r1, r2
    // beq _022614C0
    // bl BattleSystem_GetBattleType
    // mov r1, #4
    // tst r0, r1
    // bne _022614A4
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // strh r0, [r4, #2]
    // mov r0, #0x32
    // strb r0, [r4, #1]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // str r1, [r4, #4]
    // ldrb r1, [r5, r0]
    // str r1, [r4, #8]
    // ldrb r1, [r5, r0]
    // ldrb r0, [r6, #1]
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02261528 ; =0x000003CE
    // strh r0, [r4, #2]
    // mov r0, #0x1b
    // strb r0, [r4, #1]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // str r1, [r4, #4]
    // ldrb r1, [r5, r0]
    // ldrb r0, [r6, #1]
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // bne _0226150C
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #4
    // tst r0, r1
    // bne _0226150C
    // ldrh r1, [r6, #2]
    // cmp r1, #0x64
    // bhs _022614E2
    // ldr r0, _0226152C ; =0x000003D6
    // strh r0, [r4, #2]
    // b _02261510
    // ldr r0, _02261530 ; =0x00000145
    // cmp r1, r0
    // bhs _022614EE
    // ldr r0, _02261534 ; =0x000003D7
    // strh r0, [r4, #2]
    // b _02261510
    // add r0, #0xe1
    // cmp r1, r0
    // bhs _022614FA
    // ldr r0, _02261538 ; =0x000003D5
    // strh r0, [r4, #2]
    // b _02261510
    // ldr r0, _0226153C ; =0x00000307
    // cmp r1, r0
    // bhs _02261506
    // add r0, #0xcd
    // strh r0, [r4, #2]
    // b _02261510
    // add r0, #0xcc
    // strh r0, [r4, #2]
    // b _02261510
    // ldr r0, _02261540 ; =0x000003D3
    // strh r0, [r4, #2]
    // mov r0, #2
    // strb r0, [r4, #1]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // ldrb r0, [r6, #1]
    // lsl r0, r0, #8
    // orr r0, r1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02261524: .word 0x00000195
    // _02261528: .word 0x000003CE
    // _0226152C: .word 0x000003D6
    // _02261530: .word 0x00000145
    // _02261534: .word 0x000003D7
    // _02261538: .word 0x000003D5
    // _0226153C: .word 0x00000307
    // _02261540: .word 0x000003D3
    // TODO: decompile
}



void ov12_02261544(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r2, #0
    // bl BattleSystem_GetBattleType
    // add r4, r0, #0
    // mov r0, #2
    // tst r0, r4
    // beq _0226156A
    // add r0, r7, #0
    // mov r1, #3
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r6, r0, #0
    // add r0, r7, #0
    // mov r1, #5
    // bl BattleSystem_GetBattlerFromBattlerType
    // b _02261574
    // add r0, r7, #0
    // mov r1, #1
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r6, r0, #0
    // mov r1, #4
    // tst r1, r4
    // beq _022615B4
    // mov r1, #0x80
    // tst r1, r4
    // beq _02261594
    // mov r1, #0x3e
    // lsl r1, r1, #4
    // strh r1, [r5, #2]
    // mov r1, #0x3b
    // strb r1, [r5, #1]
    // str r6, [r5, #4]
    // str r6, [r5, #8]
    // str r0, [r5, #0xc]
    // str r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #8
    // add r2, r4, #0
    // tst r2, r1
    // beq _022615AA
    // ldr r1, _022615E4 ; =0x000003CB
    // strh r1, [r5, #2]
    // mov r1, #0x1a
    // strb r1, [r5, #1]
    // str r6, [r5, #4]
    // str r0, [r5, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _022615E8 ; =0x000003CA
    // strh r0, [r5, #2]
    // strb r1, [r5, #1]
    // str r6, [r5, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0x10
    // tst r1, r4
    // bne _022615C0
    // mov r1, #8
    // tst r1, r4
    // beq _022615D4
    // mov r1, #0x3e
    // lsl r1, r1, #4
    // strh r1, [r5, #2]
    // mov r1, #0x3b
    // strb r1, [r5, #1]
    // str r6, [r5, #4]
    // str r6, [r5, #8]
    // str r0, [r5, #0xc]
    // str r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _022615EC ; =0x000003C9
    // strh r0, [r5, #2]
    // mov r0, #0x1e
    // strb r0, [r5, #1]
    // str r6, [r5, #4]
    // str r6, [r5, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022615E4: .word 0x000003CB
    // _022615E8: .word 0x000003CA
    // _022615EC: .word 0x000003C9
    // TODO: decompile
}



void ov12_022615F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp, #4]
    // str r0, [sp]
    // add r6, r2, #0
    // add r4, r3, #0
    // bl BattleSystem_GetBattleType
    // str r0, [sp, #0x14]
    // ldr r2, _02261904 ; =0x00000195
    // ldr r0, [sp, #4]
    // ldrb r1, [r0, r2]
    // mov r0, #1
    // tst r0, r1
    // bne _02261610
    // b _02261758
    // ldr r0, [sp, #0x14]
    // mov r1, #2
    // and r0, r1
    // str r0, [sp, #0x10]
    // beq _0226162C
    // ldr r0, [sp, #4]
    // sub r1, r2, #1
    // ldrb r5, [r0, r1]
    // ldr r0, [sp]
    // add r1, r5, #0
    // bl BattleSystem_GetBattlerIdPartner
    // add r7, r0, #0
    // b _02261634
    // ldr r0, [sp, #4]
    // sub r1, r2, #1
    // ldrb r5, [r0, r1]
    // add r7, r5, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #4
    // tst r0, r1
    // beq _022616DA
    // ldr r0, [sp, #0x14]
    // mov r1, #0x80
    // tst r0, r1
    // beq _0226166C
    // ldr r0, _02261908 ; =0x000003DF
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #0x3c
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // str r5, [r4, #8]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #0xc]
    // str r7, [r4, #0x10]
    // str r7, [r4, #0x14]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #0x18]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // mov r1, #8
    // tst r0, r1
    // beq _0226169A
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // strh r0, [r4, #2]
    // mov r0, #0x38
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // add sp, #0x18
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #8]
    // str r7, [r4, #0xc]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _022616C2
    // ldr r0, _0226190C ; =0x000003CF
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #0x31
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #8]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02261910 ; =0x000003CE
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #0x1b
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // mov r1, #0x10
    // tst r0, r1
    // bne _022616EA
    // ldr r0, [sp, #0x14]
    // mov r1, #8
    // tst r0, r1
    // beq _02261712
    // ldr r0, _02261908 ; =0x000003DF
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #0x3c
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // str r5, [r4, #8]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #0xc]
    // str r7, [r4, #0x10]
    // str r7, [r4, #0x14]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #0x18]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _0226173C
    // ldr r0, _02261914 ; =0x000003CD
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #0x39
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // str r5, [r4, #8]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #0xc]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // strh r0, [r4, #2]
    // mov r0, #0x32
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // str r5, [r4, #8]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // add sp, #0x18
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // mov r1, #4
    // and r0, r1
    // str r0, [sp, #0xc]
    // beq _022617EC
    // ldr r0, [sp]
    // bl ov12_0223BFC0
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // ldr r0, [sp, #0x14]
    // mov r1, #8
    // and r0, r1
    // str r0, [sp, #8]
    // beq _022617C2
    // ldr r0, [sp]
    // add r1, r2, #0
    // bl ov12_0223BFCC
    // cmp r0, #3
    // bhi _02261832
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226178E: ; jump table
    // ldr r0, [sp]
    // mov r1, #4
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r5, r0, #0
    // ldr r0, [sp]
    // mov r1, #2
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r7, r0, #0
    // b _02261832
    // ldr r0, [sp]
    // mov r1, #2
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r5, r0, #0
    // ldr r0, [sp]
    // mov r1, #4
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r7, r0, #0
    // b _02261832
    // ldr r0, [sp, #0x14]
    // mov r1, #2
    // tst r0, r1
    // beq _022617DE
    // ldr r0, [sp]
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r5, r0, #0
    // ldr r0, [sp]
    // mov r1, #4
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r7, r0, #0
    // b _02261832
    // ldr r0, [sp]
    // mov r1, #0
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r5, r0, #0
    // add r7, r5, #0
    // b _02261832
    // ldr r0, [sp, #0x14]
    // mov r1, #8
    // and r0, r1
    // str r0, [sp, #8]
    // beq _0226180E
    // ldr r1, [sp, #4]
    // sub r2, r2, #1
    // ldrb r1, [r1, r2]
    // ldr r0, [sp]
    // bl BattleSystem_GetBattlerIdPartner
    // add r5, r0, #0
    // mov r1, #0x65
    // ldr r0, [sp, #4]
    // lsl r1, r1, #2
    // ldrb r7, [r0, r1]
    // b _02261832
    // ldr r0, [sp, #0x14]
    // mov r1, #2
    // tst r0, r1
    // beq _0226182A
    // ldr r0, [sp]
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r5, r0, #0
    // ldr r0, [sp]
    // mov r1, #4
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r7, r0, #0
    // b _02261832
    // ldr r0, [sp, #4]
    // sub r1, r2, #1
    // ldrb r5, [r0, r1]
    // add r7, r5, #0
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _0226189C
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _02261860
    // ldr r0, _02261918 ; =0x000003D1
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #0x31
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #8]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // mov r1, #2
    // tst r0, r1
    // beq _02261888
    // ldr r0, _0226191C ; =0x000003D2
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #9
    // strb r0, [r4, #1]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #4]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02261920 ; =0x000003D3
    // add sp, #0x18
    // strh r0, [r4, #2]
    // strb r1, [r4, #1]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _022618C6
    // ldr r0, _02261924 ; =0x000003E1
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #0x39
    // strb r0, [r4, #1]
    // str r5, [r4, #4]
    // str r5, [r4, #8]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #0xc]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // mov r1, #2
    // tst r0, r1
    // beq _022618EE
    // ldr r0, _0226191C ; =0x000003D2
    // add sp, #0x18
    // strh r0, [r4, #2]
    // mov r0, #9
    // strb r0, [r4, #1]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #4]
    // add r0, r6, r7
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r7
    // str r0, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02261920 ; =0x000003D3
    // strh r0, [r4, #2]
    // strb r1, [r4, #1]
    // add r0, r6, r5
    // ldrb r0, [r0, #4]
    // lsl r0, r0, #8
    // orr r0, r5
    // str r0, [r4, #4]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02261904: .word 0x00000195
    // _02261908: .word 0x000003DF
    // _0226190C: .word 0x000003CF
    // _02261910: .word 0x000003CE
    // _02261914: .word 0x000003CD
    // _02261918: .word 0x000003D1
    // _0226191C: .word 0x000003D2
    // _02261920: .word 0x000003D3
    // _02261924: .word 0x000003E1
    // TODO: decompile
}



void ov12_02261928(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r5, r2, #0
    // bl BattleSystem_GetBattleType
    // add r6, r0, #0
    // ldr r0, [sp]
    // bl BattleSystem_GetBattleOutcomeFlags
    // add r7, r0, #0
    // mov r0, #2
    // tst r0, r6
    // beq _02261956
    // ldr r0, [sp]
    // mov r1, #3
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r4, r0, #0
    // ldr r0, [sp]
    // mov r1, #5
    // bl BattleSystem_GetBattlerFromBattlerType
    // b _02261960
    // ldr r0, [sp]
    // mov r1, #1
    // bl BattleSystem_GetBattlerFromBattlerType
    // add r4, r0, #0
    // cmp r7, #1
    // beq _0226196E
    // cmp r7, #2
    // beq _0226198E
    // cmp r7, #3
    // beq _022619B0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #8
    // add r2, r6, #0
    // tst r2, r1
    // beq _02261984
    // ldr r1, _022619D0 ; =0x00000312
    // strh r1, [r5, #2]
    // mov r1, #0x1a
    // strb r1, [r5, #1]
    // str r4, [r5, #4]
    // str r0, [r5, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _022619D4 ; =0x00000311
    // strh r0, [r5, #2]
    // strb r1, [r5, #1]
    // str r4, [r5, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #8
    // add r2, r6, #0
    // tst r2, r1
    // beq _022619A6
    // mov r1, #0xc5
    // lsl r1, r1, #2
    // strh r1, [r5, #2]
    // mov r1, #0x1a
    // strb r1, [r5, #1]
    // str r4, [r5, #4]
    // str r0, [r5, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _022619D8 ; =0x00000313
    // strh r0, [r5, #2]
    // strb r1, [r5, #1]
    // str r4, [r5, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #8
    // add r2, r6, #0
    // tst r2, r1
    // beq _022619C6
    // ldr r1, _022619DC ; =0x00000316
    // strh r1, [r5, #2]
    // mov r1, #0x1a
    // strb r1, [r5, #1]
    // str r4, [r5, #4]
    // str r0, [r5, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _022619E0 ; =0x00000315
    // strh r0, [r5, #2]
    // strb r1, [r5, #1]
    // str r4, [r5, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // _022619D0: .word 0x00000312
    // _022619D4: .word 0x00000311
    // _022619D8: .word 0x00000313
    // _022619DC: .word 0x00000316
    // _022619E0: .word 0x00000315
    // TODO: decompile
}



void ov12_022619E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r6, #0
    // add r5, r0, #0
    // str r2, [sp]
    // add r7, r3, #0
    // str r6, [sp, #4]
    // add r4, r6, #0
    // bl BattleSystem_GetMaxBattlers
    // cmp r0, #0
    // ble _02261A2C
    // add r0, r4, #0
    // bl MaskOfFlagNo
    // ldr r1, [sp]
    // ldrb r1, [r1, #1]
    // tst r0, r1
    // beq _02261A20
    // add r0, r5, #0
    // add r1, r4, #0
    // bl BattleSystem_GetFieldSide
    // cmp r0, #0
    // beq _02261A1E
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // b _02261A20
    // add r6, r6, #1
    // add r0, r5, #0
    // add r4, r4, #1
    // bl BattleSystem_GetMaxBattlers
    // cmp r4, r0
    // blt _022619FC
    // cmp r6, #0
    // beq _02261A4A
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02261A4A
    // ldr r0, _02261ACC ; =0x0000030D
    // mov r1, #0xc3
    // strh r0, [r7, #2]
    // mov r0, #0
    // strb r0, [r7, #1]
    // add r0, r5, #0
    // bl BattleSystem_SetBattleOutcomeFlags
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r6, #0
    // beq _02261A62
    // ldr r0, _02261ACC ; =0x0000030D
    // mov r1, #0xc2
    // strh r0, [r7, #2]
    // mov r0, #0
    // strb r0, [r7, #1]
    // add r0, r5, #0
    // bl BattleSystem_SetBattleOutcomeFlags
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // beq _02261A8E
    // mov r0, #0xc6
    // lsl r0, r0, #2
    // strh r0, [r7, #2]
    // mov r0, #0x1a
    // strb r0, [r7, #1]
    // add r0, r5, #0
    // mov r1, #3
    // bl BattleSystem_GetBattlerFromBattlerType
    // str r0, [r7, #4]
    // add r0, r5, #0
    // mov r1, #5
    // bl BattleSystem_GetBattlerFromBattlerType
    // str r0, [r7, #8]
    // b _02261ABE
    // add r0, r5, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // ldr r0, _02261AD0 ; =0x00000317
    // beq _02261AAE
    // strh r0, [r7, #2]
    // mov r0, #8
    // strb r0, [r7, #1]
    // add r0, r5, #0
    // mov r1, #3
    // bl BattleSystem_GetBattlerFromBattlerType
    // str r0, [r7, #4]
    // b _02261ABE
    // strh r0, [r7, #2]
    // mov r0, #8
    // strb r0, [r7, #1]
    // add r0, r5, #0
    // mov r1, #1
    // bl BattleSystem_GetBattlerFromBattlerType
    // str r0, [r7, #4]
    // add r0, r5, #0
    // mov r1, #0xc1
    // bl BattleSystem_SetBattleOutcomeFlags
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02261ACC: .word 0x0000030D
    // _02261AD0: .word 0x00000317
    // TODO: decompile
}



void ov12_02261AD4(void) {
    *((u16*)(r2 + 2)) = (0xef << 2);
    *((u8*)(r2 + 1)) = 8;
    BattleSystem_GetBattleType(8);
    // tst r0, r1
    ov12_0223BFC0(r5, 4);
    ov12_0223BFCC(r5, r0);
    BattleSystem_GetBattlerFromBattlerType(r5, 4);
    *((u32*)(r4 + 4)) = r0;
    BattleSystem_GetBattlerFromBattlerType(r5, 2);
    *((u32*)(r4 + 4)) = r0;
    // ldrb r0, [r6, r0]
    *((u32*)(r4 + 4)) = (0x65 << 2);
    BattleSystem_SetBattleOutcomeFlags(r5, 0xc2);
}



void ov12_02261B2C(void) {
    BattleSystem_GetSpriteSystem();
    // str r0, [sp, #0x1c]
    BattleSystem_GetSpriteManager(r5);
    // str r0, [sp, #0x18]
    BattleSystem_GetPaletteData(r5);
    // tst r0, r4
    // add r3, sp, #0x28
    // ldrsh r0, [r3, r0]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0xc]
    // str r7, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldrsh r3, [r3, r4]
    // ldr r0, [sp, #0x1c]
    sub_02070C24(5, 0, r0);
}



void ov12_02261B80(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    BattleSystem_GetBgConfig(*((u32*)(r3 + 0x50)));
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    BattleSystem_GetPaletteData();
    // str r0, [sp, #0x24]
    // ldr r0, [sp]
    BattleSystem_GetSpriteSystem();
    // add r5, sp, #0x1c
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r5, [sp, #0x10]
    // ldr r0, [sp]
    ov12_0223BB88(0);
    *((u32*)(r5 + 0xc)) = r0;
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    *((u16*)(r0 + 0x34)) = *((u16*)(r0 + 0x18));
    // ldr r0, [sp, #0xc]
    // add r0, r0, r4
    // add r0, #0x20
    // ldrb r1, [r0]
    // add r0, #0x3c
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r4
    // add r0, #0x24
    // ldrb r1, [r0]
    // add r0, #0x40
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r4
    // add r0, #0x28
    // ldrb r1, [r0]
    // add r0, #0x44
    // strb r1, [r0]
    *((u32*)(r5 + 0x48)) = *((u32*)(r7 + 0x2c));
    *((u32*)(r5 + 0x58)) = *((u32*)(r7 + 0x3c));
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // add r1, sp, #0x38
    ov12_0223C1C4(((*((u32*)(r7 + 0x3c)) + 2) + 2), *((u16*)(r0 + 0x18)));
    // ldr r0, [sp]
    // add r1, sp, #0x3c
    ov12_0223C1F4();
    // ldr r0, [sp]
    BattleSystem_GetBattleType();
    // str r0, [sp, #0x4c]
    // ldr r1, [sp, #4]
    // ldrb r1, [r1, r2]
    // ldr r0, [sp]
    BattleSystem_GetChatotVoice((0x65 << 2));
    // str r0, [sp, #0xa0]
    // ldr r0, [sp]
    ov12_0223BAD0();
    // str r0, [sp, #0xa4]
    // ldr r0, [sp]
    ov12_0223BAD8();
    // str r0, [sp, #0xa8]
    // str r0, [sp, #0x88]
    // ldr r0, [sp]
    BattleSystem_GetBackgroundId(7);
    // str r0, [sp, #0x8c]
    // ldr r0, [sp]
    ov12_0223B52C((r0 + 3));
    // ldr r0, [sp]
    BattleSystem_GetBackgroundId();
    // add r0, r0, r1
    // add r0, #0xb0
    // add r0, r4, r0
    // str r0, [sp, #0x90]
    // str r0, [sp, #0x94]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x98]
    // str r0, [sp, #0x9c]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r3, sp, #0x1c
    ov07_0221C01C(8, (r0 << 1), ((r2 << 0x10) >> 0x10));
}



void ov12_02261CA8(void) {
    // str r3, [r6]
    // str r0, [sp]
    *((u32*)(r2 + 4)) = r3;
    // str r7, [sp, #0xc]
    // str r6, [sp, #8]
    // str r7, [sp, #4]
    // ldr r0, [sp]
    ov12_0223BB88(0);
    *((u32*)(r5 + 8)) = r0;
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    *((u16*)(r0 + 0x28)) = *((u16*)(r0 + 0x18));
    // add r0, r7, r4
    // add r0, #0x20
    // ldrb r1, [r0]
    // add r0, r6, r4
    // add r0, #0x30
    // strb r1, [r0]
    // add r0, r7, r4
    // add r0, #0x24
    // ldrb r1, [r0]
    // add r0, r6, r4
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, r7, r4
    // add r0, #0x28
    // ldrb r1, [r0]
    // add r0, r6, r4
    // add r0, #0x38
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    *((u32*)(r5 + 0x3c)) = *((u32*)(r0 + 0x2c));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, #0x4c
    ov12_0223C1C4((((*((u32*)(r0 + 0x2c)) + 2) + 2) + 4), r6);
    // add r6, #0x18
    // ldr r0, [sp]
    ov12_0223C1F4(r6);
}



void ov12_02261D30(void) {
    // add r0, sp, #0
    GetMoveAttr(*((u16*)(r0 + 0x10)), 9);
    // tst r0, r1
    // strb r0, [r4]
    GetMoveAttr(r6, 9);
    // tst r0, r1
    // strb r0, [r5]
    // strb r0, [r5]
    // sub r3, #0x12
    // add r0, r3, r3
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261D80: ; jump table
    // strb r0, [r4]
    // strb r0, [r5]
    // strb r0, [r4]
    // strb r0, [r5]
    // strb r0, [r4]
    // strb r0, [r5]
}



void ov12_02261DC8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r4, #0
    // bl ManagedSprite_GetUserAttrForCurrentAnimFrame
    // cmp r0, #1
    // beq _02261DE0
    // ldr r1, _02261E38 ; =0x00000FFF
    // cmp r0, r1
    // beq _02261E0A
    // b _02261E0E
    // ldrh r1, [r5, #0x16]
    // lsl r0, r1, #0x1f
    // lsr r0, r0, #0x1f
    // bne _02261E34
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strh r0, [r5, #0x16]
    // mov r0, #5
    // mov r1, #8
    // bl Heap_Alloc
    // add r1, r0, #0
    // add r2, r4, #0
    // str r2, [r1]
    // ldr r0, _02261E3C ; =ov12_02261E40
    // str r2, [r1, #4]
    // bl SysTask_CreateOnMainQueue
    // b _02261E34
    // mov r4, #1
    // b _02261E34
    // sub r1, #0xff
    // add r2, r0, #0
    // and r2, r1
    // mov r1, #1
    // lsl r1, r1, #8
    // cmp r2, r1
    // bne _02261E34
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // beq _02261E34
    // ldr r0, [r5, #0xc]
    // add r1, r4, #0
    // bl ManagedSprite_SetAnimationFrame
    // ldr r0, [r5, #0xc]
    // sub r1, r6, #1
    // bl ManagedSprite_SetAnim
    // mov r4, #1
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02261E38: .word 0x00000FFF
    // _02261E3C: .word ov12_02261E40
    // TODO: decompile
}



void ov12_02261E40(void) {
    IsBrightnessTransitionActive(1);
    // str r0, [r4]
    // str r0, [sp]
    StartBrightnessTransition(4, 0x10, 0, 0x3d);
    // str r0, [r4]
    IsBrightnessTransitionActive(1);
    // str r0, [sp]
    StartBrightnessTransition(4, 0, 0x10, 0x3d);
    // str r0, [r4]
    IsBrightnessTransitionActive(1);
    Heap_Free(r4);
    SysTask_Destroy(r5);
}



void ov12_02261EB8(void) {
}



void ov12_02261ED4(void) {
}



void ov12_02261EF0(void) {
    BattleSystem_GetBattleType();
    // tst r0, r1
    BattleSystem_GetPlayerProfile(r5, r6);
    PlayerProfile_GetVersion();
    // add r4, #0x7d
    // add r4, #0x7f
}



void ov12_02261F38(void) {
    // add r1, sp, #0x14
    // strb r2, [r1]
    BattleSystem_AreBattleAnimationsOn(0);
    Pokepic_StartAnim(r6, 1);
    ov12_0223B750(r7);
    // ldr r0, [sp, #0x3c]
    // ldr r3, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r5, [sp, #8]
    sub_0207294C(0, r0, r6, ((r3 << 0x10) >> 0x10));
    // ldr r2, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // add r1, sp, #0x14
    sub_020729A4(((r2 << 0x10) >> 0x10), ((r4 << 0x10) >> 0x10));
    // ldr r0, [sp, #0x3c]
    // mvn r4, r4
    // add r0, sp, #0x14
    // ldrb r1, [r0]
    // strb r1, [r0]
    BattleSystem_GetChatotVoice(r7, r5);
    // ldr r2, [sp, #0x34]
    // str r4, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, sp, #0x14
    // ldrb r1, [r1]
    // ldr r3, [sp, #0x38]
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x40]
    sub_0207204C(5, ((r2 << 0x10) >> 0x10));
}


