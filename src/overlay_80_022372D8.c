/* Decompiled from asm/overlay_80_022372D8.s */
#include "global.h"

void ov80_022372D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r3, #0
    // add r0, r2, #0
    // str r1, [sp]
    // mov r4, #0
    // bl ov80_022379C0
    // lsl r1, r5, #0x19
    // lsl r0, r0, #0x18
    // ldr r2, [sp, #0x18]
    // lsr r1, r1, #0x17
    // add r5, r2, r1
    // ldr r1, _0223732C ; =ov80_0223C698
    // lsr r0, r0, #0x14
    // add r7, r1, r0
    // ldr r1, _02237330 ; =ov80_0223C608
    // lsl r0, r6, #3
    // add r6, r1, r0
    // bl LCRandom
    // mov r1, #0xc
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #8
    // bhs _02237316
    // lsl r0, r0, #1
    // ldrh r0, [r7, r0]
    // b _0223731E
    // lsl r0, r0, #1
    // add r0, r6, r0
    // sub r0, #0x10
    // ldrh r0, [r0]
    // strh r0, [r5]
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, r0
    // blt _022372FE
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223732C: .word ov80_0223C698
    // _02237330: .word ov80_0223C608
    // TODO: decompile
}


void ov80_02237334(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, [sp, #0x34]
    // str r1, [sp]
    // str r0, [sp, #0x34]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // add r0, sp, #0x20
    // ldrb r4, [r0, #0x10]
    // add r6, r2, #0
    // lsl r0, r4, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // add r0, r3, #0
    // bl ov80_022379C0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // cmp r5, #0
    // bne _0223738E
    // mov r0, #0xa
    // add r1, r4, #1
    // mul r0, r6
    // add r0, r1, r0
    // cmp r0, #0x32
    // bne _0223737A
    // ldr r0, [sp, #8]
    // ldr r2, _0223743C ; =0x00000133
    // lsl r1, r0, #1
    // ldr r0, [sp, #0x34]
    // add sp, #0x1c
    // strh r2, [r0, r1]
    // pop {r4, r5, r6, r7, pc}
    // cmp r0, #0xaa
    // bne _0223738E
    // ldr r0, [sp, #8]
    // mov r2, #0x4d
    // lsl r1, r0, #1
    // ldr r0, [sp, #0x34]
    // lsl r2, r2, #2
    // strh r2, [r0, r1]
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // lsl r1, r0, #1
    // ldr r0, [sp, #0x34]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // bl LCRandom
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // bl _u32_div_f
    // lsl r0, r1, #0x10
    // lsr r4, r0, #0x10
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r4, [sp, #0x14]
    // add r5, r1, r0
    // lsl r0, r5, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // lsl r1, r0, #4
    // ldr r0, _02237440 ; =ov80_0223C698
    // add r7, r0, r1
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // ldrh r6, [r1, r0]
    // ldr r0, _02237444 ; =ov80_0223C738
    // lsl r1, r4, #1
    // ldrh r0, [r0, r1]
    // cmp r6, r0
    // bne _022373F6
    // mov r1, #0
    // cmp r5, #0
    // ble _022373E2
    // ldr r2, [sp, #0x34]
    // ldrh r0, [r2]
    // cmp r4, r0
    // beq _022373E2
    // add r1, r1, #1
    // add r2, r2, #2
    // cmp r1, r5
    // blt _022373D4
    // cmp r1, r5
    // bne _022373F6
    // ldr r0, [sp, #0xc]
    // strh r4, [r0]
    // add r0, r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // b _0223742E
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // cmp r4, r0
    // blo _02237406
    // mov r4, #0
    // ldr r0, [sp, #0x14]
    // cmp r4, r0
    // bne _022373BC
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x1d
    // sub r2, r2, r1
    // mov r0, #0x1d
    // ror r2, r0
    // add r0, r1, r2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0xf
    // ldrh r2, [r7, r0]
    // cmp r6, r2
    // beq _0223740C
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // strh r2, [r1, r0]
    // b _022373BC
    // add r1, r0, #0
    // ldr r0, [sp]
    // cmp r1, r0
    // blt _02237398
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223743C: .word 0x00000133
    // _02237440: .word ov80_0223C698
    // _02237444: .word ov80_0223C738
    // TODO: decompile
}


void ov80_02237448(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x28]
    // mov r7, #0
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // ldr r6, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // lsl r0, r3, #0x19
    // lsr r4, r0, #0x18
    // add r0, r2, #0
    // str r7, [sp, #0xc]
    // bl ov80_022379C0
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // ldr r0, [sp, #0x30]
    // cmp r0, #0
    // beq _022374CE
    // ldr r3, _022375B8 ; =ov80_0223C990
    // add r2, r7, #0
    // lsl r0, r2, #1
    // ldrh r1, [r3, r0]
    // ldr r0, [sp, #0x28]
    // cmp r0, r1
    // bne _02237484
    // add r5, r2, #0
    // b _02237490
    // add r0, r2, #1
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // ldr r0, _022375BC ; =0x000001DD
    // cmp r2, r0
    // blo _02237476
    // ldr r0, _022375BC ; =0x000001DD
    // cmp r2, r0
    // bne _0223749A
    // add r5, r0, #0
    // sub r5, #0x65
    // ldr r0, _022375C0 ; =ov80_0223C5A8
    // mov r1, #0
    // lsl r2, r1, #2
    // add r2, r0, r2
    // ldrh r2, [r2, #2]
    // cmp r5, r2
    // blo _022374B2
    // add r1, r1, #1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // cmp r1, #4
    // blo _0223749E
    // cmp r1, #4
    // bne _022374B8
    // mov r1, #3
    // ldr r0, [sp, #0x30]
    // cmp r0, #2
    // bne _022374C4
    // ldr r0, _022375C4 ; =ov80_0223C5B4
    // str r0, [sp, #0x10]
    // b _022374D6
    // ldr r2, _022375C0 ; =ov80_0223C5A8
    // lsl r0, r1, #2
    // add r0, r2, r0
    // str r0, [sp, #0x10]
    // b _022374D6
    // ldr r1, _022375C8 ; =ov80_0223C5E0
    // lsl r0, r2, #2
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldrh r1, [r0, #2]
    // ldrh r0, [r0]
    // sub r0, r1, r0
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // bl LCRandom
    // add r1, r5, #0
    // bl _s32_div_f
    // ldr r0, [sp, #0x10]
    // ldrh r0, [r0]
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // sub r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // str r2, [sp, #8]
    // ldr r0, [sp]
    // cmp r0, #0
    // ble _022375B4
    // sub r0, r4, #2
    // lsl r0, r0, #1
    // mov ip, r0
    // lsl r0, r4, #1
    // add r5, r6, r0
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // bne _02237532
    // mov r0, #0
    // cmp r4, #0
    // ble _02237542
    // add r1, r2, #1
    // lsl r3, r0, #1
    // ldrh r3, [r6, r3]
    // cmp r1, r3
    // beq _02237542
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, r4
    // blt _0223751E
    // b _02237542
    // mov r1, ip
    // ldrh r1, [r6, r1]
    // add r0, r2, #1
    // cmp r0, r1
    // bne _02237540
    // mov r0, #0
    // b _02237542
    // add r0, r4, #0
    // cmp r0, r4
    // bne _0223758A
    // ldr r0, [sp, #0x30]
    // cmp r0, #0
    // beq _02237562
    // ldr r0, _022375B8 ; =ov80_0223C990
    // lsl r1, r2, #1
    // ldrh r1, [r0, r1]
    // ldr r0, [sp, #0x28]
    // cmp r0, r1
    // beq _0223758A
    // lsl r0, r7, #1
    // add r1, r2, #1
    // strh r1, [r5, r0]
    // add r7, r7, #1
    // b _0223758A
    // ldr r1, _022375CC ; =ov80_0223CD4A
    // lsl r0, r2, #2
    // add r3, r1, r0
    // ldrh r1, [r1, r0]
    // ldr r0, [sp, #4]
    // cmp r0, r1
    // beq _02237576
    // ldrh r1, [r3, #2]
    // cmp r0, r1
    // bne _0223758A
    // ldr r0, _022375B8 ; =ov80_0223C990
    // lsl r1, r2, #1
    // ldrh r1, [r0, r1]
    // ldr r0, [sp, #0x28]
    // cmp r0, r1
    // beq _0223758A
    // lsl r0, r7, #1
    // add r1, r2, #1
    // strh r1, [r5, r0]
    // add r7, r7, #1
    // ldr r1, [sp, #0x10]
    // add r0, r2, #1
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // ldrh r1, [r1, #2]
    // add r0, r2, #1
    // cmp r0, r1
    // blt _022375A4
    // ldr r0, [sp, #0x10]
    // ldrh r0, [r0]
    // sub r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // ldr r0, [sp, #8]
    // cmp r2, r0
    // bne _022375AE
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // cmp r7, r0
    // blt _02237510
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _022375B8: .word ov80_0223C990
    // _022375BC: .word 0x000001DD
    // _022375C0: .word ov80_0223C5A8
    // _022375C4: .word ov80_0223C5B4
    // _022375C8: .word ov80_0223C5E0
    // _022375CC: .word ov80_0223CD4A
    // TODO: decompile
}


void ov80_022375D0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x64
    // add r5, r0, #0
    // ldrb r0, [r5, #5]
    // add r6, r1, #0
    // lsl r0, r0, #0x19
    // lsr r7, r0, #0x18
    // ldrb r0, [r5, #4]
    // bl ov80_0223787C
    // str r0, [sp, #0x18]
    // ldrb r0, [r5, #4]
    // bl ov80_02237888
    // str r0, [sp, #0x10]
    // ldr r0, _02237818 ; =0x000006FC
    // ldr r0, [r5, r0]
    // bl SaveArray_Party_Get
    // str r0, [sp, #0x1c]
    // bl HealParty
    // ldrb r0, [r5, #4]
    // bl ov80_02237850
    // add r1, r0, #0
    // mov r0, #0xb
    // bl BattleSetup_New
    // ldr r1, [r6, #0xc]
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, [r6, #0x1c]
    // str r1, [sp, #4]
    // ldr r2, [r6, #8]
    // ldr r3, [r6, #0x18]
    // mov r1, #0
    // bl sub_02051D18
    // mov r0, #0x53
    // mov r1, #0x16
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x18]
    // bl Party_InitWithMaxSize
    // mov r0, #0xb
    // bl AllocMonZeroed
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // mov r6, #0
    // cmp r0, #0
    // ble _02237668
    // mov r1, #0x26
    // add r2, r5, r6
    // lsl r1, r1, #4
    // ldrb r1, [r2, r1]
    // ldr r0, [sp, #0x1c]
    // bl Party_GetMonByIndex
    // ldr r1, [sp, #0x20]
    // bl CopyPokemonToPokemon
    // ldr r1, [sp, #0x20]
    // add r0, r4, #0
    // mov r2, #0
    // bl BattleSetup_AddMonToParty
    // ldr r0, [sp, #0x18]
    // add r6, r6, #1
    // cmp r6, r0
    // blt _02237642
    // ldr r0, [sp, #0x20]
    // bl Heap_Free
    // add r0, r4, #0
    // bl BattleSetup_SetAllySideBattlersToPlayer
    // lsl r0, r7, #1
    // str r0, [sp, #0x28]
    // add r6, r5, #0
    // ldr r1, [sp, #0x28]
    // add r6, #0x18
    // ldrh r1, [r6, r1]
    // add r0, sp, #0x34
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_02229F04
    // bl Heap_Free
    // mov r0, #0xb
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // add r0, r4, #0
    // add r1, sp, #0x34
    // mov r3, #1
    // bl ov80_0222A480
    // ldr r0, [r4, #8]
    // ldr r1, [sp, #0x10]
    // bl Party_InitWithMaxSize
    // ldr r1, _0223781C ; =0x000006F5
    // ldrb r2, [r5, #4]
    // ldrb r0, [r5, r1]
    // add r1, #0xf
    // add r3, r5, r1
    // lsl r1, r2, #3
    // add r1, r2, r1
    // add r1, r3, r1
    // bl sub_02030BD0
    // str r0, [sp, #0x24]
    // ldrb r0, [r5, #4]
    // cmp r0, #2
    // bne _022376C6
    // mov r0, #9
    // str r0, [sp, #0x24]
    // ldr r2, [sp, #0x24]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov80_02237980
    // mov r2, #0
    // add r1, r4, #0
    // add r2, r2, #1
    // str r0, [r1, #0x34]
    // add r1, #0x34
    // cmp r2, #4
    // blt _022376D4
    // mov r0, #0x38
    // mul r0, r7
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // mov r3, #0x29
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #0xce
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x28]
    // lsl r3, r3, #4
    // add r1, r5, r3
    // ldr r0, [sp, #0x14]
    // ldrh r2, [r6, r2]
    // sub r3, #0x28
    // add r0, r1, r0
    // add r6, r5, r3
    // lsl r3, r7, #1
    // ldr r1, [sp, #0x24]
    // add r3, r6, r3
    // bl ov80_02237894
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // ble _0223776E
    // mov r0, #0x29
    // lsl r0, r0, #4
    // add r0, r5, r0
    // str r0, [sp, #0x2c]
    // mov r0, #0x38
    // mul r0, r7
    // str r0, [sp, #0x30]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov80_02237820
    // cmp r0, #0
    // bne _0223772C
    // ldr r1, [sp, #0x24]
    // add r0, r5, #0
    // bl ov80_022378F8
    // add r2, r0, #0
    // lsl r2, r2, #0x18
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // lsr r2, r2, #0x18
    // add r0, r1, r0
    // add r1, r6, #0
    // bl ov80_0222A140
    // add r0, r6, #0
    // bl UpdateMonAbility
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl BattleSetup_AddMonToParty
    // ldr r0, [sp, #0xc]
    // add r1, r0, #1
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    // cmp r1, r0
    // blt _0223772C
    // add r0, r6, #0
    // bl Heap_Free
    // ldrb r0, [r5, #4]
    // cmp r0, #2
    // beq _0223777E
    // cmp r0, #3
    // bne _02237810
    // add r0, r4, #0
    // bl BattleSetup_SetAllySideBattlersToPlayer
    // bl sub_0203769C
    // mov r1, #1
    // sub r0, r1, r0
    // bl sub_02034818
    // mov r1, #1
    // lsl r1, r1, #8
    // ldr r1, [r4, r1]
    // bl PlayerProfile_Copy
    // add r1, r7, #1
    // lsl r1, r1, #1
    // add r1, r5, r1
    // ldrh r1, [r1, #0x18]
    // add r0, sp, #0x34
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_02229F04
    // bl Heap_Free
    // mov r0, #0xb
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // add r0, r4, #0
    // add r1, sp, #0x34
    // mov r3, #3
    // bl ov80_0222A480
    // ldr r0, [r4, #0x10]
    // ldr r1, [sp, #0x10]
    // bl Party_InitWithMaxSize
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov80_02237820
    // cmp r0, #0
    // bne _022377D0
    // ldr r1, [sp, #0x24]
    // add r0, r5, #0
    // bl ov80_022378F8
    // add r2, r0, #0
    // mov r0, #0x29
    // lsl r0, r0, #4
    // add r1, r5, r0
    // ldr r0, [sp, #0x14]
    // lsl r2, r2, #0x18
    // add r0, r1, r0
    // add r1, r6, #0
    // lsr r2, r2, #0x18
    // bl ov80_0222A140
    // add r0, r6, #0
    // bl UpdateMonAbility
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #3
    // bl BattleSetup_AddMonToParty
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r4, #0
    // add sp, #0x64
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02237818: .word 0x000006FC
    // _0223781C: .word 0x000006F5
    // TODO: decompile
}


void ov80_02237820(void) {
    // push {r4, lr}
    // mov r2, #0x38
    // mul r2, r1
    // mov r1, #0x2a
    // lsl r1, r1, #4
    // add r1, r0, r1
    // ldr r4, [r1, r2]
    // ldr r3, _0223784C ; =0x0003D0A9
    // cmp r4, r3
    // bls _02237838
    // sub r3, r4, r3
    // b _0223783A
    // add r3, r4, r3
    // str r3, [r1, r2]
    // add r3, r0, r2
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // ldr r1, [r1, r2]
    // bl CalcShininessByOtIdAndPersonality
    // pop {r4, pc}
    // _0223784C: .word 0x0003D0A9
    // TODO: decompile
}


void ov80_02237850(void) {
    // cmp r0, #3
    // bhi _02237878
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237860: ; jump table
    // mov r0, #0x81
    // bx lr
    // mov r0, #0x83
    // bx lr
    // mov r0, #0x8f
    // bx lr
    // mov r0, #0x8f
    // bx lr
    // mov r0, #0x81
    // bx lr
    // TODO: decompile
}


void ov80_0223787C(void) {
    // cmp r0, #1
    // bne _02237884
    // mov r0, #2
    // bx lr
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void ov80_02237888(void) {
    // cmp r0, #1
    // bne _02237890
    // mov r0, #2
    // bx lr
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void ov80_02237894(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // ldr r0, [sp, #0x2c]
    // add r5, r3, #0
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // ldr r7, [sp, #0x28]
    // str r0, [sp, #0x30]
    // ldr r0, _022378F4 ; =0x00000133
    // cmp r2, r0
    // bne _022378B0
    // mov r0, #0x1f
    // b _022378C0
    // add r0, r0, #1
    // cmp r2, r0
    // bne _022378BA
    // mov r0, #0x1f
    // b _022378C0
    // add r0, r1, #0
    // bl ov80_0223796C
    // mov r4, #0
    // cmp r7, #0
    // ble _022378EE
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // add r2, r4, #0
    // str r0, [sp, #8]
    // ldrh r1, [r5]
    // add r0, r6, #0
    // bl ov80_0222A4EC
    // add r4, r4, #1
    // add r5, r5, #2
    // add r6, #0x38
    // cmp r4, r7
    // blt _022378CC
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022378F4: .word 0x00000133
    // TODO: decompile
}


void ov80_022378F8(void) {
    // push {r3, lr}
    // ldrb r1, [r0, #5]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x17
    // add r1, r0, r1
    // ldrh r2, [r1, #0x18]
    // ldr r1, _0223791C ; =0x0000FECD
    // add r1, r2, r1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // cmp r1, #1
    // bhi _02237916
    // bl ov80_022379C8
    // pop {r3, pc}
    // ldrb r0, [r0, #7]
    // pop {r3, pc}
    // nop
    // _0223791C: .word 0x0000FECD
    // TODO: decompile
}


void ov80_02237920(void) {
    // ldr r1, _02237928 ; =ov80_0223D4C0
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _02237928: .word ov80_0223D4C0
    // TODO: decompile
}


void ov80_0223792C(void) {
    // cmp r0, #2
    // beq _02237934
    // cmp r0, #3
    // bne _02237938
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov80_0223793C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02237968 ; =0x000006FC
    // ldr r0, [r4, r0]
    // bl SaveArray_Party_Get
    // mov r1, #0x26
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // bl Party_GetMonByIndex
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0xa
    // bl _s32_div_f
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r4, pc}
    // nop
    // _02237968: .word 0x000006FC
    // TODO: decompile
}


void ov80_0223796C(void) {
    ov80_022379C0();
}


void ov80_02237980(void) {
    // add r2, r2, #1
    // cmp r2, #8
    // blt _0223798A
    // mov r2, #7
    // b _02237994
    // cmp r2, #4
    // blt _02237992
    // mov r2, #1
    // b _02237994
    // mov r2, #0
    // ldrb r3, [r0, #4]
    // cmp r3, #0
    // bne _022379B0
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x17
    // add r0, r0, r1
    // ldrh r1, [r0, #0x18]
    // ldr r0, _022379BC ; =0x0000FECD
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #1
    // bhi _022379B0
    // mov r2, #7
    // cmp r3, #2
    // bne _022379B6
    // mov r2, #7
    // add r0, r2, #0
    // bx lr
    // nop
    // _022379BC: .word 0x0000FECD
    // TODO: decompile
}


void ov80_022379C0(void) {
    // cmp r0, #0xa
    // blo _022379C6
    // mov r0, #9
    // bx lr
    // TODO: decompile
}


void ov80_022379C8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _02237A34 ; =0x000006FC
    // ldr r0, [r5, r0]
    // bl SaveArray_Party_Get
    // mov r1, #0x26
    // lsl r1, r1, #4
    // ldrb r1, [r5, r1]
    // add r6, r0, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldrb r0, [r5, #4]
    // bl ov80_0223787C
    // cmp r0, #2
    // bne _02237A16
    // ldr r1, _02237A38 ; =0x00000261
    // add r0, r6, #0
    // ldrb r1, [r5, r1]
    // bl Party_GetMonByIndex
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r4, r0
    // bhi _02237A12
    // add r4, r0, #0
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r5, #4]
    // bl ov80_0223792C
    // cmp r0, #1
    // bne _02237A2E
    // ldr r0, _02237A3C ; =0x00000D84
    // ldrh r0, [r5, r0]
    // cmp r4, r0
    // bhi _02237A2A
    // add r4, r0, #0
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02237A34: .word 0x000006FC
    // _02237A38: .word 0x00000261
    // _02237A3C: .word 0x00000D84
    // TODO: decompile
}


void ov80_02237A40(void) {
    // push {r3, lr}
    // cmp r0, #0
    // beq _02237A58
    // lsl r0, r0, #0xc
    // bl _ffltu
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _02237A66
    // lsl r0, r0, #0xc
    // bl _ffltu
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // bl FX_Sqrt
    // pop {r3, pc}
    // TODO: decompile
}

