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
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov80_02238034(0);
    // strh r0, [r5]
    // ldrh r3, [r6, r0]
    // ldrh r0, [r2]
}



void BattleArcade_GetMonCount(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022380FA: ; jump table
    GF_AssertFail(4);
}



void BattleArcade_GetOpponentMonCount(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223812E: ; jump table
    GF_AssertFail(4);
}



void BattleArcade_NewBattleSetup(void) {
    BattleArcade_GetMonCount(*((u8*)(r0 + 0x10)), 0);
    // str r0, [sp, #0x10]
    BattleArcade_GetOpponentMonCount(*((u8*)(r7 + 0x10)), 0);
    // str r0, [sp, #0xc]
    ov80_02238344(*((u8*)(r7 + 0x10)));
    BattleSetup_New(0xb, r0);
    // str r1, [sp]
    // str r1, [sp, #4]
    sub_02051D18(0, *((u32*)(r5 + 8)), *((u32*)(r5 + 0x18)));
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // add r1, #0x28
    // str r0, [r4, r1]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    Party_InitWithMaxSize(*((u32*)(r4 + 4)), *((u32*)(r7 + 0x70)), 0x14);
    sub_0203769C();
    AllocMonZeroed(0xb);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    Party_GetMonByIndex(0, r5);
    CopyPokemonToPokemon(r6);
    BattleSetup_AddMonToParty(r4, r6, 0);
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x1c]
    Heap_Free(r6, (r0 + 1));
    BattleSetup_SetAllySideBattlersToPlayer(r4);
    // add r0, sp, #0x20
    // add r1, r7, r1
    // add r1, #0x78
    // ldrh r1, [r1]
    ov80_02229F04((*((u8*)(r7 + 0x11)) << 1), 0xb, 0xcc);
    Heap_Free();
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x20
    ov80_0222A480(r4, 1);
    BattleArcade_GetOpponentMonCount(*((u8*)(r7 + 0x10)), 0);
    Party_InitWithMaxSize(*((u32*)(r4 + 8)), r0);
    ov80_02238444(r7);
    *((u32*)(r5 + 0x34)) = r0;
    // add r5, #0x34
    AllocMonZeroed(0xb);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(0);
    CopyPokemonToPokemon(r6);
    BattleSetup_AddMonToParty(r4, r6, 1);
    // ldr r0, [sp, #0xc]
    Heap_Free(r6);
    BattleSetup_SetAllySideBattlersToPlayer(r4);
    sub_0203769C();
    // sub r0, r1, r0
    sub_02034818(1);
    // ldr r1, [r4, r1]
    PlayerProfile_Copy((1 << 8));
    // add r0, sp, #0x20
    // add r1, r7, r1
    // add r1, #0x78
    // ldrh r1, [r1]
    ov80_02229F04(((*((u8*)(r7 + 0x11)) + 7) << 1), 0xb, 0xcc);
    Heap_Free();
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x20
    ov80_0222A480(r4, 3);
    BattleArcade_GetOpponentMonCount(*((u8*)(r7 + 0x10)), 0);
    Party_InitWithMaxSize(*((u32*)(r4 + 0x10)), r0);
    AllocMonZeroed(0xb);
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(0, 0);
    CopyPokemonToPokemon(r6);
    BattleSetup_AddMonToParty(r4, r6, 3);
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    Heap_Free(r6, (r0 + 1));
    HealParty(*((u32*)(r7 + 0x70)));
    HealParty(*((u32*)(r7 + 0x74)));
}



void ov80_02238344(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02238354: ; jump table
}



u8 ov80_02238370(void) {
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
    Save_PlayerData_GetProfile(*((u32*)(r0 + 4)));
    // str r3, [sp]
    // str r0, [sp, #4]
    sub_0207217C(r4, r0, 4, 0);
}



void ov80_022383A8(void) {
}



void ov80_022383C0(void) {
    SaveArray_Party_Init(*((u32*)(r0 + 0x74)));
    BattleArcade_GetOpponentMonCount(*((u8*)(r5 + 0x10)), 1);
    // str r0, [sp]
    AllocMonZeroed(0xb);
    // ldr r0, [sp]
    // add r4, r5, r0
    ov80_02238370(r5);
    ov80_0222A140(r4, r7, r0);
    ov80_022383A8(r5, *((u32*)(r5 + 0x74)), r7);
    Party_GetMonByIndex(*((u32*)(r5 + 0x74)), r6);
    // str r1, [sp, #4]
    // add r2, sp, #4
    SetMonData(6);
    // ldr r0, [sp]
    // add r4, #0x38
    Heap_Free(r7);
}



void ov80_02238430(void) {
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


