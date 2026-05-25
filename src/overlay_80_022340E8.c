/* Decompiled from asm/overlay_80_022340E8.s */
#include "global.h"

void BattleArcadeData_Alloc(void) {
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    Heap_Alloc(0xb, 0x00000A88);
    // str r0, [r1]
    MI_CpuFill8(0, 0x00000A88);
    sub_02030E88(r4);
    *((u32*)(r5 + 8)) = r0;
    *((u32*)(r5 + 4)) = r4;
    // str r0, [r5]
    SaveArray_Party_Alloc(0xb, ov80_0223DD4C);
    *((u32*)(r5 + 0x70)) = r0;
    SaveArray_Party_Alloc(0xb);
    *((u32*)(r5 + 0x74)) = r0;
    // ldr r1, [sp, #0x38]
    // str r1, [r5, r0]
    *((u8*)(r5 + 0x13)) = 0x20;
    sub_02030FA0(r4);
    // ldr r0, [sp, #4]
    *((u8*)(*((u32*)ov80_0223DD4C) + 0x10)) = ov80_0223DD4C;
    *((u8*)(*((u32*)ov80_0223DD4C) + 0x11)) = 0;
    *((u8*)(*((u32*)ov80_0223DD4C) + 0x1c)) = 3;
    *((u8*)(*((u32*)ov80_0223DD4C) + 0x12)) = 0;
    sub_02030E7C(r6, 0, *((u32*)ov80_0223DD4C));
    Save_VarsFlags_Get(*((u32*)(*((u32*)ov80_0223DD4C) + 4)), *((u8*)(*((u32*)ov80_0223DD4C) + 0x10)));
    Save_VarsFlags_GetVar4052();
    // str r3, [sp]
    sub_02030FE4(r4, 8, 0);
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD4C) + 4)));
    sub_0205C2C0(*((u8*)(*((u32*)ov80_0223DD4C) + 0x10)));
    sub_0205C2C0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r6, r0);
    *((u16*)(r5 + 0x18)) = r0;
    *((u16*)(*((u32*)ov80_0223DD4C) + 0x18)) = 0;
    _s32_div_f(*((u16*)(*((u32*)ov80_0223DD4C) + 0x18)), 7);
    *((u16*)(r4 + 0x1a)) = r0;
    *((u32*)(r4 + 0x24)) = 0;
    // ldr r0, [sp, #8]
    // add r1, #0x2c
    // strb r0, [r1]
    // add r1, sp, #0x20
    // add r0, #0x2d
    // add r4, #0x2e
    // strb r2, [r0]
    // strb r0, [r4]
    // str r1, [sp]
    sub_02030F34(r6, 0, 0, 0);
    *((u8*)(*((u32*)ov80_0223DD4C) + 0x10)) = r0;
    // str r2, [sp]
    sub_02030F34(r6, 2, 0, 0);
    *((u8*)(*((u32*)ov80_0223DD4C) + 0x11)) = r0;
    // str r2, [sp]
    sub_02030F34(r6, 3, 0, 0);
    *((u8*)(r4 + 0x1c)) = r0;
    // str r2, [sp]
    sub_02030F34(r6, 1, 0, 0);
    *((u8*)(r4 + 0x12)) = r0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD4C) + 4)));
    sub_0205C2C0(*((u8*)(*((u32*)ov80_0223DD4C) + 0x10)));
    // str r0, [sp, #0x10]
    sub_0205C2C0(*((u8*)(r4 + 0x10)));
    sub_0205C268();
    // ldr r1, [sp, #0x10]
    FrontierSave_GetStat(r7, r0);
    *((u16*)(r5 + 0x18)) = r0;
    _s32_div_f(*((u16*)(r5 + 0x18)), 7);
    *((u16*)(r5 + 0x1a)) = r0;
    // str r7, [sp]
    sub_02030F34(r6, 6, ((0 << 0x18) >> 0x18), 0);
    // add r1, r5, r4
    // add r1, #0x2c
    // strb r0, [r1]
    SaveArray_Party_Get(*((u32*)(*((u32*)ov80_0223DD4C) + 4)));
    // add r1, r4, r5
    // add r1, #0x2c
    Party_GetMonByIndex(*((u8*)r1));
    GetMonData(6, 0);
    // add r1, r4, r1
    // strh r0, [r1, r7]
    SaveArray_Party_Get(*((u32*)(r4 + 4)), (r5 << 1));
    // str r0, [sp, #0xc]
    BattleArcade_GetMonCount(*((u8*)(*((u32*)ov80_0223DD4C) + 0x10)), 0);
    // ldr r0, [sp, #0xc]
    // add r1, r1, r5
    // add r1, #0x2c
    Party_GetMonByIndex(*((u8*)*((u32*)ov80_0223DD4C)));
    Party_AddMon(*((u32*)(*((u32*)r6) + 0x70)), r0);
    Party_GetMonByIndex(*((u32*)(*((u32*)r6) + 0x70)), r5);
    // str r1, [sp, #0x18]
    // add r2, sp, #0x18
    SetMonData(6);
    GetMonData(r4, 0xa1, 0);
    GetMonData(r4, 5, 0);
    GetMonExpBySpeciesAndLevel(0x32);
    // str r0, [sp, #0x14]
    // add r2, sp, #0x14
    SetMonData(r4, 8);
    CalcMonLevelAndStats(r4);
    BattleArcade_MultiplayerCheck(*((u8*)(*((u32*)ov80_0223DD4C) + 0x10)));
    ov80_0222A840(*((u32*)(*((u32*)ov80_0223DD4C) + 4)));
}





void BattleArcadeData_Init(void) {
}





void ov80_02234390(void) {
    ov80_02238498();
    // add r2, #0x78
    ov80_022380A0(*((u8*)(r5 + 0x10)), r0, r5, 0xe);
    BattleArcade_GetOpponentMonCount(*((u8*)(r5 + 0x10)), 1);
    BattleArcade_MultiplayerCheck(*((u8*)(r5 + 0x10)));
    // add r1, r5, r3
    // str r1, [sp]
    // sub r1, #0x14
    // add r1, r5, r1
    // str r1, [sp, #4]
    // sub r1, #0x10
    // add r1, r5, r1
    // str r1, [sp, #8]
    // add r1, r5, r1
    // add r2, r5, r2
    // str r0, [sp, #0xc]
    // add r1, #0x78
    // add r2, #0x78
    // sub r3, #0x1c
    // add r3, r5, r3
    ov80_0222A6B8(r6, *((u16*)(r4 << 1)), *((u16*)((r4 + 7) << 1)), (0x33 << 4));
    ov80_02238498(r5);
    *((u8*)(r5 + 0x1c)) = *((u8*)(ov80_0223BE98 + (0 << 1)));
}





void ov80_02234424(void) {
    // str r7, [sp]
    // add r1, #0x78
    // strh r0, [r1]
    // add r4, sp, #0x30
    // str r0, [sp]
    // strh r0, [r4]
    // strh r1, [r7, r0]
    // add r0, sp, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x3c
    // add r1, sp, #0x30
    // add r2, sp, #0x10
    // add r4, sp, #0x3c
    // add r4, #0x38
}





void ov80_022344D4(void) {
    // str r0, [sp]
    // add r1, sp, #4
    // strh r0, [r1]
    // add r2, sp, #4
}





void BattleArcadeData_Free(void) {
    Heap_Free(*((u32*)(r0 + 0x70)));
    Heap_Free(*((u32*)(r4 + 0x74)));
    MI_CpuFill8(r4, 0, 0x00000A88);
    Heap_Free(r4);
}





void ov80_02234550(void) {
    ov80_02234574(r1, ((0 << 0x18) >> 0x18));
    // strh r0, [r5, r7]
}





void ov80_02234574(void) {
}





void ov80_02234588(void) {
    sub_02030FA0(*((u32*)(r0 + 4)));
    // str r0, [sp, #4]
    BattleArcade_GetOpponentMonCount(*((u8*)(r5 + 0x10)), 1);
    // add r0, sp, #8
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 0x10));
    // add r0, sp, #0x10
    // str r0, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 0, 0, 0);
    sub_02030EA0(*((u32*)(r5 + 8)), 1);
    // add r0, sp, #8
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 0x11));
    // add r0, sp, #0x10
    // str r0, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 2, 0, 0);
    // add r0, sp, #8
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 0x1c));
    // add r0, sp, #0x10
    // str r0, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 3, 0, 0);
    // add r0, sp, #8
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 0x12));
    // add r0, sp, #0x10
    // str r0, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 1, 0, 0);
    Save_Frontier_GetStatic(*((u32*)(r5 + 4)));
    sub_0205C2C0(*((u8*)(r5 + 0x10)));
    sub_0205C2C0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    sub_02031108(r6, r7, r0, *((u16*)(r5 + 0x18)));
    Save_Frontier_GetStatic(*((u32*)(r5 + 4)));
    sub_0205C2E8(*((u8*)(r5 + 0x10)));
    sub_0205C2E8(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    sub_0203126C(r4, r6, r0, *((u16*)(r5 + 0x18)));
    // add r0, #0x2f
    // add r0, sp, #8
    *((u8*)(r5 + 8)) = *((u8*)r5);
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #4]
    sub_02030FB0(r5, 8, *((u8*)(r5 + 0x10)), 0);
    Save_Frontier_GetStatic(*((u32*)(r5 + 4)));
    sub_0205C268(0x6e);
    // add r3, #0x2f
    sub_02031108(r4, 0x6e, r0, *((u8*)r5));
    // add r6, sp, #8
    // add r7, sp, #8
    // add r0, r5, r0
    // add r0, #0x78
    // strh r0, [r7]
    // str r6, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 5, ((0 << 0x18) >> 0x18), 0);
    // add r6, sp, #0x10
    // add r7, sp, #8
    // add r0, r5, r4
    // add r0, #0x2c
    *((u8*)(r7 + 8)) = *((u8*)((r4 + 1) << 0x10));
    // str r6, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 6, ((0 << 0x18) >> 0x18), 0);
    Party_GetCount(*((u32*)(r5 + 0x70)));
    // add r7, sp, #8
    Party_GetMonByIndex(*((u32*)(r5 + 0x70)), 0x00000000);
    GetMonData(6, 0);
    // add r1, sp, #8
    // strh r0, [r1]
    // str r7, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 4, ((r4 << 0x18) >> 0x18), 0);
    Party_GetCount(*((u32*)(r5 + 0x74)));
    // add r7, sp, #8
    Party_GetMonByIndex(*((u32*)(r5 + 0x74)), 0x00000000);
    // add r1, r5, r0
    // add r0, sp, #8
    // strh r1, [r0]
    // str r7, [sp]
    sub_02030EB4(*((u32*)(r5 + 8)), 7, ((r4 << 0x18) >> 0x18), 0);
}





void ov80_02234764(void) {
}





void ov80_02234770(void) {
}





void ov80_02234774(void) {
    // add r1, r4, r1
    // add r1, #0x78
    // add r0, sp, #0
    // add r0, sp, #0
}





void ov80_022347A8(void) {
    // add r0, r2, r0
}





void ov80_022347B8(void) {
}





void ov80_022347C4(void) {
    // add r1, #0x2f
    // strb r2, [r1]
    *((u16*)(r0 + 0x1a)) = (*((u16*)(r0 + 0x1a)) + 1);
    *((u8*)(r0 + 0x11)) = 0;
}





void BattleArcade_SetPartyBeforeBattle(void) {
}





void BattleArcade_SetPartyAfterBattle(void) {
    // add r1, r5, r3
    // str r1, [sp]
    // sub r1, #0x14
    // add r1, r5, r1
    // str r1, [sp, #4]
    // sub r1, #0x10
    // add r1, r5, r1
    // str r1, [sp, #8]
    // add r1, r5, r1
    // add r2, r5, r2
    // str r0, [sp, #0xc]
    // add r1, #0x78
    // add r2, #0x78
    // sub r3, #0x1c
    // add r3, r5, r3
}





void BattleArcade_GetWonBattlePoints(void) {
    // str r2, [sp]
    BattleArcade_GetMonCount(*((u8*)(r0 + 0x10)), 0);
    // ldr r2, [sp]
    ov80_02234894(r6, r7, r0);
    // add r4, r4, r0
    // add r4, r4, r0
}





void ov80_02234894(void) {
    // str r3, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // ldr r0, [sp, #4]
    Party_GetMonByIndex(0);
    GetMonData(0xac, 0);
    GetMonData(r7, 0xa3, 0);
    GetMonData(r7, 0xa0, 0);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    BattleArcade_MultiplayerCheck(*((u8*)(((r5 + 1) << 0x18) + 0x10)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    Party_GetMonByIndex(0);
    GetMonData(0xac, 0);
    GetMonData(r7, 0xa3, 0);
    GetMonData(r7, 0xa0, 0);
    // ldr r0, [sp, #0xc]
    // add r1, r0, r1
    // add r0, r1, r0
}





void ov80_02234968(void) {
    NARC_New(0xb7, 0x65);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u16*)(ov80_0223BF5A + (*((u8*)(r5 + 0x13)) * 6))), *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, *((u16*)(ov80_0223BF5C + (*((u8*)(r5 + 0x13)) * 6))), *((u32*)r4), 2);
    // add r2, sp, #0x10
    GfGfxLoader_GetPlttDataFromOpenNarc(r6, *((u16*)(ov80_0223BF5E + (*((u8*)(r5 + 0x13)) * 6))), *((u8*)(r5 + 0x13)), 0x65);
    // ldr r1, [sp, #0x10]
    DC_FlushRange(*((u32*)(r1 + 0xc)), *((u32*)(r1 + 8)));
    GX_BeginLoadBGExtPltt();
    // ldr r0, [sp, #0x10]
    GX_LoadBGExtPltt(*((u32*)(r0 + 0xc)), (1 << 0xe), ((1 << 0xe) >> 1));
    GX_EndLoadBGExtPltt();
    Heap_Free(r5);
    GfGfx_EngineATogglePlanes(4, 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    NARC_Delete(r6);
    GfGfx_EngineATogglePlanes(4, 0);
}





void ov80_02234A38(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov80_02234A74(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BattleArcade_GetMonCount(*((u8*)(r0 + 0x10)), 1);
    // ldr r0, [sp, #4]
    BattleArcade_GetOpponentMonCount(*((u8*)(r0 + 0x10)), 1);
    // str r0, [sp, #0xc]
    // ldr r6, [sp, #4]
    // ldr r0, [sp, #4]
    Party_GetMonByIndex(*((u32*)(r0 + 0x70)), 0);
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // ldrsh r3, [r5, r3]
    // ldr r0, [sp, #8]
    ov80_0222F29C(2, r0, r4, 0);
    *((u32*)(r6 + 0x30)) = r0;
    Sprite_SetAnimActiveFlag(*((u32*)r0), 0);
    // ldr r5, [sp, #4]
    // ldr r0, [sp, #4]
    Party_GetMonByIndex(*((u32*)(r0 + 0x74)), 0);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // ldr r0, [sp, #8]
    ov80_0222F29C(2, r0, r7, 0);
    *((u32*)(r5 + 0x40)) = r0;
    Sprite_SetAnimActiveFlag(*((u32*)r0), 0);
    // ldr r0, [sp, #0xc]
}





void ov80_02234B24(void) {
    // str r0, [sp]
    // ldr r0, [sp]
}





void ov80_02234B7C(void) {
    // add r0, r5, r0
    // add r0, r5, r0
}





void ov80_02234BB4(void) {
    // add r0, r5, r0
    // add r0, r5, r0
}





void ov80_02234BEC(void) {
    // str r1, [sp]
    BattleArcade_GetMonCount(*((u8*)(r0 + 0x10)), 1);
    // str r0, [sp, #8]
    BattleArcade_GetOpponentMonCount(*((u8*)(r7 + 0x10)), 1);
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [sp]
    // add r1, #8
    ov80_0222F3FC(0, (2 + 4));
    *((u32*)(r5 + 0x50)) = r0;
    Party_GetMonByIndex(*((u32*)(r7 + 0x70)), r6);
    GetMonData(6, 0);
    Sprite_SetDrawFlag(*((u32*)*((u32*)(r5 + 0x50))), 0);
    // ldr r0, [sp, #8]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [sp]
    // add r1, #8
    ov80_0222F3FC(0, (2 + 4));
    *((u32*)(r5 + 0x60)) = r0;
    Party_GetMonByIndex(*((u32*)(r7 + 0x74)), r6);
    GetMonData(6, 0);
    Sprite_SetDrawFlag(*((u32*)*((u32*)(r5 + 0x60))), 0);
    // ldr r0, [sp, #4]
}





void ov80_02234CB0(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}





void ov80_02234D04(void) {
    // add r1, sp, #8
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r1, sp, #8
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
}





void ov80_02234DC4(void) {
    // add r5, #0x7f
    // add r2, sp, #8
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
}





void ov80_02234E50(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02234E62: ; jump table
}





void ov80_02234E98(void) {
    BattleArcade_GetOpponentMonCount(*((u8*)(r0 + 0x10)), 1);
    BattleArcade_GetMonCount(*((u8*)(r5 + 0x10)), 1);
    // blx r3
}





void ov80_02234ECC(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    Party_GetMonByIndex(0);
    GetMonData(0xa4, 0);
    _dfltu();
    _dmul(0x33333333, 0x3FF33333, r0, r1);
    _dfixu();
    // str r0, [sp, #4]
    // sub r0, r0, r4
    // str r0, [sp, #4]
    // sub r0, r4, r0
    // str r0, [sp, #4]
    // add r2, sp, #4
    SetMonData(r6, 0xa3);
}





void ov80_02234F28(void) {
    // str r2, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r1, [sp, #4]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, sp, #0x10
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}





void ov80_02234FAC(void) {
    // str r2, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r1, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, sp, #0x10
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}





void ov80_02235024(void) {
    // str r2, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r1, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, sp, #0x10
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
}





void ov80_0223509C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r2, sp, #0xc
    // ldr r0, [sp]
}





void ov80_02235118(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r2, sp, #0x14
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
}





void ov80_022351AC(void) {
    ov80_02238498();
    _s32_div_f(*((u16*)(r7 + 0x20)), 0xa);
    // add r0, sp, #0
    // strh r1, [r0]
    Party_GetMonByIndex(r6, 0);
    // add r2, sp, #0
    SetMonData(r7);
}





void ov80_02235208(void) {
    ov80_02238498();
    _s32_div_f(*((u16*)(r7 + 0x20)), 0xb);
    // add r0, sp, #0
    // strh r1, [r0]
    Party_GetMonByIndex(r6, 0);
    // add r2, sp, #0
    SetMonData(r7);
}





void ov80_02235264(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #4
}





void ov80_022352BC(void) {
    *((u32*)(r0 + 0x14)) = 0x000003E9;
}





void ov80_022352C8(void) {
}





void ov80_022352D0(void) {
}





void ov80_022352D8(void) {
}





void ov80_022352E0(void) {
}





void ov80_022352E8(void) {
    *((u32*)(r0 + 0x14)) = 0x000003EA;
}





void ov80_022352F4(void) {
}





void ov80_02235300(void) {
}





void ov80_0223530C(void) {
}





void ov80_02235314(void) {
}





void ov80_02235318(void) {
}





void ov80_0223531C(void) {
}





void ov80_02235320(void) {
}





void ov80_02235324(void) {
    // cmp r3, #1
    // bhi _0223533A
    // cmp r2, #8
    // blo _02235334
    // b _02235346
    // ldrb r1, [r1, r2]
    // b _02235346
    // cmp r2, #8
    // blo _02235342
    // b _02235346
    // ldrb r1, [r1, r2]
    // cmp r3, #0
    // bne _02235356
    // cmp r0, #0x15
    // beq _02235354
    // cmp r0, #0x31
    // bne _02235356
    // nop
    // _0223535C: .word ov80_0223C01C
    // _02235360: .word ov80_0223C028
}





void ov80_02235364(void) {
}




