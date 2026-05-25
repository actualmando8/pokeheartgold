/* Decompiled from asm/overlay_80_02238034.s */
#include "global.h"

void ov80_02238034(void) {
    // push {r3, r4, r5, lr}
    // cmp r0, #0
    // bne _02238054
    // mov r0, #7
    // add r3, r2, #1
    // mul r0, r1
    // add r0, r3, r0
    // cmp r0, #0x15
    // bne _0223804A
    // ldr r0, _0223808C ; =0x00000137
    // pop {r3, r4, r5, pc}
    // cmp r0, #0x31
    // bne _02238054
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // pop {r3, r4, r5, pc}
    // cmp r1, #8
    // blo _0223805A
    // mov r1, #7
    // cmp r2, #6
    // beq _02238062
    // cmp r2, #0xd
    // bne _02238070
    // ldr r0, _02238090 ; =ov80_0223D518
    // lsl r1, r1, #3
    // ldrh r4, [r0, r1]
    // ldr r0, _02238094 ; =ov80_0223D51A
    // ldrh r0, [r0, r1]
    // sub r5, r0, r4
    // b _0223807C
    // ldr r0, _02238098 ; =ov80_0223D514
    // lsl r1, r1, #3
    // ldrh r4, [r0, r1]
    // ldr r0, _0223809C ; =ov80_0223D516
    // ldrh r0, [r0, r1]
    // sub r5, r0, r4
    // bl LCRandom
    // add r1, r5, #0
    // bl _s32_div_f
    // add r0, r4, r1
    // pop {r3, r4, r5, pc}
    // nop
    // _0223808C: .word 0x00000137
    // _02238090: .word ov80_0223D518
    // _02238094: .word ov80_0223D51A
    // _02238098: .word ov80_0223D514
    // _0223809C: .word ov80_0223D516
    // TODO: decompile
}


void ov80_022380A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r2, #0
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r7, r3, #0
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, r4, #0
    // bl ov80_02238034
    // mov r1, #0
    // strh r0, [r5]
    // cmp r4, #0
    // ble _022380D6
    // lsl r0, r4, #1
    // ldrh r3, [r6, r0]
    // add r2, r6, #0
    // ldrh r0, [r2]
    // cmp r0, r3
    // beq _022380D6
    // add r1, r1, #1
    // add r2, r2, #2
    // cmp r1, r4
    // blt _022380C8
    // cmp r1, r4
    // bne _022380DE
    // add r5, r5, #2
    // add r4, r4, #1
    // cmp r4, r7
    // blt _022380B0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void BattleArcade_GetMonCount(void) {
    // push {r3, lr}
    // cmp r0, #3
    // bhi _02238112
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022380FA: ; jump table
    // mov r0, #3
    // pop {r3, pc}
    // cmp r1, #0
    // bne _0223810E
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #4
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #3
    // pop {r3, pc}
    // TODO: decompile
}


void BattleArcade_GetOpponentMonCount(void) {
    // push {r3, lr}
    // cmp r0, #3
    // bhi _02238146
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223812E: ; jump table
    // mov r0, #3
    // pop {r3, pc}
    // cmp r1, #0
    // bne _02238142
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #4
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #3
    // pop {r3, pc}
    // TODO: decompile
}


void BattleArcade_NewBattleSetup(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x50
    // add r7, r0, #0
    // ldrb r0, [r7, #0x10]
    // add r5, r1, #0
    // mov r1, #0
    // bl BattleArcade_GetMonCount
    // str r0, [sp, #0x10]
    // ldrb r0, [r7, #0x10]
    // mov r1, #0
    // bl BattleArcade_GetOpponentMonCount
    // str r0, [sp, #0xc]
    // ldrb r0, [r7, #0x10]
    // bl ov80_02238344
    // add r1, r0, #0
    // mov r0, #0xb
    // bl BattleSetup_New
    // ldr r1, [r5, #0xc]
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, [r5, #0x1c]
    // str r1, [sp, #4]
    // ldr r2, [r5, #8]
    // ldr r3, [r5, #0x18]
    // mov r1, #0
    // bl sub_02051D18
    // mov r1, #0x53
    // lsl r1, r1, #2
    // mov r2, #0x14
    // str r2, [r4, r1]
    // add r0, r1, #4
    // str r2, [r4, r0]
    // ldr r0, [r7, #0x14]
    // add r1, #0x28
    // str r0, [r4, r1]
    // ldr r0, [r7, #0x74]
    // ldr r1, [r7, #0x70]
    // str r0, [sp, #0x14]
    // ldrb r0, [r7, #0x13]
    // str r1, [sp, #0x18]
    // cmp r0, #0x1b
    // bne _022381B4
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x14]
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x10]
    // bl Party_InitWithMaxSize
    // bl sub_0203769C
    // cmp r0, #0
    // bne _022381C8
    // mov r5, #0
    // b _022381CA
    // mov r5, #2
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // ble _02238202
    // ldr r0, [sp, #0x18]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r1, r6, #0
    // bl CopyPokemonToPokemon
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl BattleSetup_AddMonToParty
    // ldr r0, [sp, #0x1c]
    // add r5, r5, #1
    // add r1, r0, #1
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x1c]
    // cmp r1, r0
    // blt _022381DC
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r4, #0
    // bl BattleSetup_SetAllySideBattlersToPlayer
    // ldrb r1, [r7, #0x11]
    // add r0, sp, #0x20
    // mov r2, #0xb
    // lsl r1, r1, #1
    // add r1, r7, r1
    // add r1, #0x78
    // ldrh r1, [r1]
    // mov r3, #0xcc
    // bl ov80_02229F04
    // bl Heap_Free
    // mov r0, #0xb
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r0, r4, #0
    // add r1, sp, #0x20
    // mov r3, #1
    // bl ov80_0222A480
    // ldrb r0, [r7, #0x10]
    // mov r1, #0
    // bl BattleArcade_GetOpponentMonCount
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl Party_InitWithMaxSize
    // mov r6, #0
    // add r5, r4, #0
    // add r0, r7, #0
    // bl ov80_02238444
    // str r0, [r5, #0x34]
    // add r6, r6, #1
    // add r5, #0x34
    // cmp r6, #4
    // blt _0223824A
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // ldr r0, [sp, #0xc]
    // mov r5, #0
    // cmp r0, #0
    // ble _0223828A
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r1, r6, #0
    // bl CopyPokemonToPokemon
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl BattleSetup_AddMonToParty
    // ldr r0, [sp, #0xc]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0223826A
    // add r0, r6, #0
    // bl Heap_Free
    // ldrb r0, [r7, #0x10]
    // cmp r0, #2
    // beq _0223829A
    // cmp r0, #3
    // bne _02238330
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
    // ldrb r1, [r7, #0x11]
    // add r0, sp, #0x20
    // mov r2, #0xb
    // add r1, r1, #7
    // lsl r1, r1, #1
    // add r1, r7, r1
    // add r1, #0x78
    // ldrh r1, [r1]
    // mov r3, #0xcc
    // bl ov80_02229F04
    // bl Heap_Free
    // mov r0, #0xb
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r0, r4, #0
    // add r1, sp, #0x20
    // mov r3, #3
    // bl ov80_0222A480
    // ldrb r0, [r7, #0x10]
    // mov r1, #0
    // bl BattleArcade_GetOpponentMonCount
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // bl Party_InitWithMaxSize
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // ble _0223832A
    // add r5, r0, #0
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // add r1, r6, #0
    // bl CopyPokemonToPokemon
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #3
    // bl BattleSetup_AddMonToParty
    // ldr r0, [sp, #8]
    // add r5, r5, #1
    // add r1, r0, #1
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    // cmp r1, r0
    // blt _02238304
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [r7, #0x70]
    // bl HealParty
    // ldr r0, [r7, #0x74]
    // bl HealParty
    // add r0, r4, #0
    // add sp, #0x50
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov80_02238344(void) {
    // cmp r0, #3
    // bhi _0223836C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02238354: ; jump table
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


u8 ov80_02238370(void) {
    return 0x32;
}


void BattleArcade_MultiplayerCheck(void) {
    // cmp r0, #2
    // beq _0223837C
    // cmp r0, #3
    // bne _02238380
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov80_02238384(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r0, [r0, #4]
    // add r4, r1, #0
    // bl Save_PlayerData_GetProfile
    // mov r3, #0
    // add r1, r0, #0
    // str r3, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #4
    // bl sub_0207217C
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov80_022383A8(void) {
    ov80_02238384(r2);
    Party_AddMon(r5, r4);
}


void ov80_022383C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x74]
    // bl SaveArray_Party_Init
    // ldrb r0, [r5, #0x10]
    // mov r1, #1
    // bl BattleArcade_GetOpponentMonCount
    // str r0, [sp]
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r7, r0, #0
    // ldr r0, [sp]
    // mov r6, #0
    // cmp r0, #0
    // ble _02238424
    // mov r0, #0x33
    // lsl r0, r0, #4
    // add r4, r5, r0
    // add r0, r5, #0
    // bl ov80_02238370
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov80_0222A140
    // ldr r1, [r5, #0x74]
    // add r0, r5, #0
    // add r2, r7, #0
    // bl ov80_022383A8
    // ldr r0, [r5, #0x74]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #0
    // str r1, [sp, #4]
    // mov r1, #6
    // add r2, sp, #4
    // bl SetMonData
    // ldr r0, [sp]
    // add r6, r6, #1
    // add r4, #0x38
    // cmp r6, r0
    // blt _022383EC
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov80_02238430(void) {
    ov80_02238498(1, 3);
}


void ov80_02238444(void) {
    // push {r3, lr}
    // ldrb r1, [r0, #0x10]
    // cmp r1, #0
    // bne _02238466
    // ldrb r1, [r0, #0x11]
    // lsl r1, r1, #1
    // add r1, r0, r1
    // add r1, #0x78
    // ldrh r2, [r1]
    // ldr r1, _02238494 ; =0x0000FEC9
    // add r1, r2, r1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // cmp r1, #1
    // bhi _02238466
    // mov r0, #7
    // pop {r3, pc}
    // bl ov80_02238498
    // add r0, r0, #1
    // mov r1, #7
    // cmp r0, #4
    // bhi _0223848E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223847E: ; jump table
    // mov r1, #0
    // b _0223848E
    // mov r1, #1
    // add r0, r1, #0
    // pop {r3, pc}
    // nop
    // _02238494: .word 0x0000FEC9
    // TODO: decompile
}


void ov80_02238498(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // ldrh r4, [r5, #0x1a]
    // bl BattleArcade_MultiplayerCheck
    // cmp r0, #1
    // bne _022384B4
    // ldr r0, _022384B8 ; =0x00000A76
    // ldrh r1, [r5, r0]
    // ldrh r0, [r5, #0x1a]
    // cmp r1, r0
    // bls _022384B4
    // add r4, r1, #0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _022384B8: .word 0x00000A76
    // TODO: decompile
}


void ov80_022384BC(void) {
    // cmp r0, #9
    // bhs _022384C4
    // mov r0, #0
    // bx lr
    // cmp r0, #0x12
    // bhs _022384CC
    // mov r0, #1
    // bx lr
    // cmp r0, #0x1b
    // bhs _022384D4
    // mov r0, #2
    // bx lr
    // mov r0, #3
    // bx lr
    // TODO: decompile
}

