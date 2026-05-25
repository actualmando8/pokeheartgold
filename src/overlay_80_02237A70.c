/* Decompiled from asm/overlay_80_02237A70.s */
#include "global.h"

void ov80_02237A70(void) {
    // push {r3, r4, r5, lr}
    // cmp r0, #0
    // bne _02237A8E
    // mov r0, #7
    // add r3, r2, #1
    // mul r0, r1
    // add r0, r3, r0
    // cmp r0, #0x15
    // bne _02237A86
    // ldr r0, _02237AC4 ; =0x00000139
    // pop {r3, r4, r5, pc}
    // cmp r0, #0x31
    // bne _02237A8E
    // ldr r0, _02237AC8 ; =0x0000013A
    // pop {r3, r4, r5, pc}
    // cmp r1, #8
    // blo _02237A94
    // mov r1, #7
    // cmp r2, #6
    // beq _02237A9C
    // cmp r2, #0xd
    // bne _02237AAA
    // ldr r0, _02237ACC ; =ov80_0223D4D8
    // lsl r1, r1, #3
    // ldrh r4, [r0, r1]
    // ldr r0, _02237AD0 ; =ov80_0223D4DA
    // ldrh r0, [r0, r1]
    // sub r5, r0, r4
    // b _02237AB6
    // ldr r0, _02237AD4 ; =ov80_0223D4D4
    // lsl r1, r1, #3
    // ldrh r4, [r0, r1]
    // ldr r0, _02237AD8 ; =ov80_0223D4D6
    // ldrh r0, [r0, r1]
    // sub r5, r0, r4
    // bl LCRandom
    // add r1, r5, #0
    // bl _s32_div_f
    // add r0, r4, r1
    // pop {r3, r4, r5, pc}
    // _02237AC4: .word 0x00000139
    // _02237AC8: .word 0x0000013A
    // _02237ACC: .word ov80_0223D4D8
    // _02237AD0: .word ov80_0223D4DA
    // _02237AD4: .word ov80_0223D4D4
    // _02237AD8: .word ov80_0223D4D6
    // TODO: decompile
}



void ov80_02237ADC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov80_02237A70(0);
    // strh r0, [r5]
    // ldrh r3, [r6, r0]
    // ldrh r0, [r2]
}



void ov80_02237B24(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237B36: ; jump table
    GF_AssertFail(4);
}



void ov80_02237B58(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237B6A: ; jump table
    GF_AssertFail(4);
}



void ov80_02237B8C(void) {
    ov80_02237B24(*((u8*)(r0 + 0x10)), 0);
    // str r0, [sp, #0x10]
    ov80_02237B58(*((u8*)(r5 + 0x10)), 0);
    // str r0, [sp, #0xc]
    HealParty(*((u32*)(r5 + 0x2c)));
    ov80_02237D5C(*((u8*)(r5 + 0x10)));
    BattleSetup_New(0xb, r0);
    // str r1, [sp]
    // str r1, [sp, #4]
    sub_02051D18(0, *((u32*)(r6 + 8)), *((u32*)(r6 + 0x18)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r1, [sp, #0x10]
    Party_InitWithMaxSize(*((u32*)(r4 + 4)), 0x15);
    sub_0203769C();
    AllocMonZeroed(0xb);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    Party_GetMonByIndex(*((u32*)(r5 + 0x28)), r6);
    CopyPokemonToPokemon(r7);
    BattleSetup_AddMonToParty(r4, r7, 0);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    Heap_Free(r7, (r0 + 1));
    BattleSetup_SetAllySideBattlersToPlayer(r4);
    // add r0, sp, #0x18
    // add r1, r5, r1
    ov80_02229F04(*((u16*)((*((u8*)(r5 + 0x11)) << 1) + 0x30)), 0xb, 0xcc);
    Heap_Free();
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x18
    ov80_0222A480(r4, 1);
    ov80_02237B58(*((u8*)(r5 + 0x10)), 0);
    Party_InitWithMaxSize(*((u32*)(r4 + 8)), r0);
    ov80_02237E88(r5);
    *((u32*)(r6 + 0x34)) = r0;
    // add r6, #0x34
    AllocMonZeroed(0xb);
    // ldr r0, [sp, #0xc]
    Party_GetMonByIndex(*((u32*)(r5 + 0x2c)), 0);
    CopyPokemonToPokemon(r7);
    BattleSetup_AddMonToParty(r4, r7, 1);
    // ldr r0, [sp, #0xc]
    Heap_Free(r7);
    BattleSetup_SetAllySideBattlersToPlayer(r4);
    sub_0203769C();
    // sub r0, r1, r0
    sub_02034818(1);
    // ldr r1, [r4, r1]
    PlayerProfile_Copy((1 << 8));
    // add r0, sp, #0x18
    // add r1, r5, r1
    ov80_02229F04(*((u16*)(((*((u8*)(r5 + 0x11)) + 7) << 1) + 0x30)), 0xb, 0xcc);
    Heap_Free();
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x18
    ov80_0222A480(r4, 3);
    ov80_02237B58(*((u8*)(r5 + 0x10)), 0);
    Party_InitWithMaxSize(*((u32*)(r4 + 0x10)), r0);
    AllocMonZeroed(0xb);
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    Party_GetMonByIndex(*((u32*)(r5 + 0x2c)), 0);
    CopyPokemonToPokemon(r7);
    BattleSetup_AddMonToParty(r4, r7, 3);
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    Heap_Free(r7, (r0 + 1));
}



void ov80_02237D5C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237D6C: ; jump table
}



u8 ov80_02237D88(void) {
}



void ov80_02237D8C(void) {
    // cmp r0, #2
    // beq _02237D94
    // cmp r0, #3
    // bne _02237D98
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov80_02237D9C(void) {
    Party_GetCount();
    Party_GetMonByIndex(r7, 0);
    GetMonData(0xac, 0);
    GetMonData(r5, 0xa3, 0);
    // str r0, [sp]
    // add r2, sp, #0
    SetMonData(r5, 0xa3);
    // str r0, [sp]
    // add r2, sp, #0
    SetMonData(r5, 0xa0);
}



void ov80_02237DF4(void) {
    Save_PlayerData_GetProfile(*((u32*)(r0 + 4)));
    // str r3, [sp]
    // str r0, [sp, #4]
    sub_0207217C(r4, r0, 4, 0);
}



void ov80_02237E18(void) {
}



void ov80_02237E30(void) {
    SaveArray_Party_Init(*((u32*)(r0 + 0x2c)));
    ov80_02237B58(*((u8*)(r5 + 0x10)), 1);
    // str r0, [sp]
    AllocMonZeroed(0xb);
    // ldr r0, [sp]
    // add r4, r5, r0
    ov80_02237D88(r5);
    ov80_0222A140(r4, r6, r0);
    ov80_02237E18(r5, *((u32*)(r5 + 0x2c)), r6);
    // ldr r0, [sp]
    // add r4, #0x38
    Heap_Free(r6);
}



void ov80_02237E88(void) {
    // push {r3, lr}
    // ldrb r1, [r0, #0x10]
    // cmp r1, #0
    // bne _02237EA8
    // ldrb r1, [r0, #0x11]
    // lsl r1, r1, #1
    // add r1, r0, r1
    // ldrh r2, [r1, #0x30]
    // ldr r1, _02237ED4 ; =0x0000FEC7
    // add r1, r2, r1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // cmp r1, #1
    // bhi _02237EA8
    // mov r0, #7
    // pop {r3, pc}
    // bl ov80_02237ED8
    // add r0, r0, #1
    // mov r1, #7
    // cmp r0, #4
    // bhi _02237ED0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237EC0: ; jump table
    // mov r1, #0
    // b _02237ED0
    // mov r1, #1
    // add r0, r1, #0
    // pop {r3, pc}
    // _02237ED4: .word 0x0000FEC7
    // TODO: decompile
}



void ov80_02237ED8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x10]
    // ldrh r4, [r5, #0x16]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02237EF4
    // ldr r0, _02237EF8 ; =0x00000A12
    // ldrh r1, [r5, r0]
    // ldrh r0, [r5, #0x16]
    // cmp r1, r0
    // bls _02237EF4
    // add r4, r1, #0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02237EF8: .word 0x00000A12
    // TODO: decompile
}



void ov80_02237EFC(void) {
    ov80_02237ED8(r1);
    // add r0, sp, #0xc
    ov80_02237F3C(r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0xc
    LoadRectToBgTilemapRect(r5, ((r4 << 0x18) >> 0x18), 0xb);
    ScheduleBgTilemapBufferTransfer(r5, ((r4 << 0x18) >> 0x18));
}



void ov80_02237F3C(void) {
    // str r0, [sp]
    ov80_02237F9C(r1);
    // add r4, sp, #4
    // strb r3, [r4]
    // sub r2, r1, r3
    *((u8*)(r4 + 5)) = r2;
    // mul r1, r0
    // add r1, #0x10
    // ldr r4, [sp]
    // add r3, sp, #4
    // add r4, r4, r6
    // ldrb r6, [r3]
    // add r6, r6, r1
    // strh r6, [r4]
    // ldrh r6, [r4]
    // orr r6, r5
    // strh r6, [r4]
    // add r1, #0x20
    // add r2, #0xa
}



void ov80_02237F9C(void) {
    // cmp r0, #8
    // blo _02237FA2
    // mov r0, #7
    // bx lr
    // TODO: decompile
}



void ov80_02237FA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r6, r2, #0
    // bl sub_0205C1F0
    // add r7, r0, #0
    // add r0, r4, #0
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // add r3, r6, #0
    // bl sub_02031248
    // add r0, r4, #0
    // bl sub_0205C218
    // add r7, r0, #0
    // add r0, r4, #0
    // bl sub_0205C218
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // add r1, r0, r6
    // ldr r0, _02238030 ; =0x0000270F
    // cmp r1, r0
    // ble _0223800E
    // add r0, r4, #0
    // bl sub_0205C218
    // add r6, r0, #0
    // add r0, r4, #0
    // bl sub_0205C218
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r3, _02238030 ; =0x0000270F
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02031108
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205C218
    // add r7, r0, #0
    // add r0, r4, #0
    // bl sub_0205C218
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // add r3, r6, #0
    // bl sub_02031228
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02238030: .word 0x0000270F
    // TODO: decompile
}


