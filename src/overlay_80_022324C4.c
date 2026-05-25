/* Decompiled from asm/overlay_80_022324C4.s */
#include "global.h"

void ov80_022324C4(void) {
    // str r3, [sp, #4]
    Heap_Alloc(0xb, 0x00000A28);
    // str r0, [r1]
    MI_CpuFill8(0, 0x00000A28);
    sub_02030CC8(r5);
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 4)) = r5;
    // str r0, [r4]
    SaveArray_Party_Alloc(0xb, ov80_0223DD48);
    *((u32*)(r4 + 0x28)) = r0;
    SaveArray_Party_Alloc(0xb);
    *((u32*)(r4 + 0x2c)) = r0;
    // ldr r1, [sp, #0x38]
    // str r1, [r4, r0]
    sub_02030E08(r5);
    *((u8*)(*((u32*)ov80_0223DD48) + 0x10)) = r6;
    *((u8*)(*((u32*)ov80_0223DD48) + 0x11)) = 0;
    sub_02030CBC(r4, *((u32*)ov80_0223DD48));
    Save_VarsFlags_Get(*((u32*)(*((u32*)ov80_0223DD48) + 4)), *((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    Save_VarsFlags_GetVar4052();
    // str r3, [sp]
    sub_02030E58(r5, 9, 0);
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD48) + 4)));
    sub_0205C1A0(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    sub_0205C1A0(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r5, r4, r0);
    *((u16*)(*((u32*)ov80_0223DD48) + 0x14)) = r0;
    *((u16*)(*((u32*)ov80_0223DD48) + 0x14)) = 0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD48) + 4)), *((u32*)ov80_0223DD48));
    sub_0205C1F0(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    sub_0205C1F0(*((u8*)(r4 + 0x10)));
    sub_0205C268();
    sub_02031108(r5, r7, r0, 0);
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD48) + 4)));
    sub_0205C218(r6);
    sub_0205C218(r6);
    sub_0205C268();
    sub_02031108(r4, r5, r0, 0);
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD48) + 4)));
    sub_0205C174(*((u8*)(*((u32*)r4) + 0x10)), ((r5 << 0x18) >> 0x18));
    sub_0205C174(*((u8*)(*((u32*)r4) + 0x10)), ((r5 << 0x18) >> 0x18));
    sub_0205C268();
    sub_02031108(r6, r7, r0, 1);
    _s32_div_f(*((u16*)(*((u32*)ov80_0223DD48) + 0x14)), 7);
    *((u16*)(r5 + 0x16)) = r0;
    *((u32*)(r5 + 0x18)) = 0;
    // ldr r0, [sp, #4]
    // add r1, #0x24
    // strb r0, [r1]
    // add r1, sp, #0x20
    // add r0, #0x25
    // strb r2, [r0]
    // add r0, #0x26
    // strb r1, [r0]
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD48) + 4)), *((u16*)(r5 + 0x14)), *((u16*)(r5 + 0x10)));
    sub_0205C1F0(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r6, r0);
    *((u16*)(r5 + 0x20)) = r0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD48) + 4)));
    sub_0205C1F0(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    sub_02031228(r4, r6, r0, 0xa);
    // str r1, [sp]
    sub_02030D84(r4, 0, 0, 0);
    *((u8*)(r5 + 0x10)) = r0;
    // str r2, [sp]
    sub_02030D84(r4, 1, 0, 0);
    *((u8*)(r5 + 0x11)) = r0;
    Save_Frontier_GetStatic(*((u32*)(*((u32*)ov80_0223DD48) + 4)));
    sub_0205C1A0(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    // str r0, [sp, #0xc]
    sub_0205C1A0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    // ldr r1, [sp, #0xc]
    FrontierSave_GetStat(r7, r0);
    *((u16*)(r6 + 0x14)) = r0;
    _s32_div_f(*((u16*)(r6 + 0x14)), 7);
    *((u16*)(r6 + 0x16)) = r0;
    // str r6, [sp]
    sub_02030D84(r4, 7, ((0 << 0x18) >> 0x18), 0);
    // add r1, r1, r5
    // add r1, #0x24
    // strb r0, [r1]
    SaveArray_Party_Get(*((u32*)(*((u32*)ov80_0223DD48) + 4)), *((u32*)r7));
    // add r1, r5, r4
    // add r1, #0x24
    Party_GetMonByIndex(*((u8*)r1));
    GetMonData(6, 0);
    // add r1, r5, r1
    // strh r0, [r1, r7]
    SaveArray_Party_Get(*((u32*)(r5 + 4)), (r4 << 1));
    // str r0, [sp, #8]
    ov80_02237B24(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)), 0);
    // ldr r0, [sp, #8]
    // add r1, r1, r5
    // add r1, #0x24
    Party_GetMonByIndex(*((u8*)*((u32*)ov80_0223DD48)));
    Party_AddMon(*((u32*)(*((u32*)r6) + 0x28)), r0);
    Party_GetMonByIndex(*((u32*)(*((u32*)r6) + 0x28)), r5);
    // str r1, [sp, #0x14]
    // add r2, sp, #0x14
    SetMonData(6);
    GetMonData(r4, 0xa1, 0);
    GetMonData(r4, 5, 0);
    GetMonExpBySpeciesAndLevel(0x32);
    // str r0, [sp, #0x10]
    // add r2, sp, #0x10
    SetMonData(r4, 8);
    CalcMonLevelAndStats(r4);
    ov80_02237D8C(*((u8*)(*((u32*)ov80_0223DD48) + 0x10)));
    ov80_0222A840(*((u32*)(*((u32*)ov80_0223DD48) + 4)));
}





void ov80_02232824(void) {
}





void ov80_02232838(void) {
    Party_GetCount(*((u32*)(r0 + 0x28)));
    // str r0, [sp, #0x10]
    Party_GetMonByIndex(*((u32*)(r7 + 0x28)), 0);
    GetMonData(0x3a, 0);
    // strh r0, [r5, r1]
    GetMonData(r4, 0x3b, 0);
    // strh r0, [r5, r1]
    GetMonData(r4, 0x3c, 0);
    // strh r0, [r5, r1]
    GetMonData(r4, 0x3d, 0);
    // strh r0, [r5, r1]
    // ldr r0, [sp, #0x10]
    // add r5, #8
    ov80_02237ED8(r7, 0x0000039A);
    // add r2, #0x30
    ov80_02237ADC(*((u8*)(r7 + 0x10)), r0, r7, 0xe);
    ov80_02237B58(*((u8*)(r7 + 0x10)), 1);
    ov80_02237D8C(*((u8*)(r7 + 0x10)));
    // add r1, r7, r3
    // str r1, [sp]
    // sub r1, #0x14
    // add r1, r7, r1
    // str r1, [sp, #4]
    // sub r1, #0x10
    // add r1, r7, r1
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r7, r1
    // add r2, r7, r2
    // sub r3, #0x1c
    // add r3, r7, r3
    ov80_0222A6B8(r5, *((u16*)((r4 << 1) + 0x30)), *((u16*)(((r4 + 7) << 1) + 0x30)), (0xa2 << 2));
}





void ov80_02232908(void) {
    // str r7, [sp]
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





void ov80_022329B4(void) {
    // str r0, [sp, #4]
    // add r7, sp, #8
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // str r0, [sp]
    // strb r0, [r7]
    // add r2, sp, #8
    // str r0, [sp]
    // strb r0, [r7]
    // add r2, sp, #8
    // str r0, [sp]
    // strb r0, [r7]
    // add r2, sp, #8
    // str r0, [sp]
    // strb r0, [r7]
    // add r2, sp, #8
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // add r2, sp, #0xc
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // ldr r0, [sp, #4]
}





void ov80_02232ABC(void) {
    Heap_Free(*((u32*)(r0 + 0x28)));
    Heap_Free(*((u32*)(r4 + 0x2c)));
    MI_CpuFill8(r4, 0, 0x00000A28);
    Heap_Free(r4);
}





void ov80_02232AEC(void) {
    ov80_02232B44(r1, ((0 << 0x18) >> 0x18));
    // strh r0, [r5, r1]
    // add r2, r6, r3
    // add r1, r7, r3
    // strb r5, [r1, r4]
    // strb r5, [r1, r4]
    // strb r5, [r1, r4]
    // strb r2, [r1, r0]
    // strh r1, [r7, r0]
}





void ov80_02232B44(void) {
}





void ov80_02232B58(void) {
    sub_02030E08(*((u32*)(r0 + 4)));
    // str r0, [sp, #4]
    Save_Frontier_GetStatic(*((u32*)(r5 + 4)));
    ov80_02237B58(*((u8*)(r5 + 0x10)), 1);
    // add r0, sp, #0x10
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 0x10));
    // add r0, sp, #0x18
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 0, 0, 0);
    sub_02030CE0(*((u32*)(r5 + 8)), 1);
    // add r0, sp, #0x10
    *((u8*)(r0 + 8)) = *((u8*)(r5 + 0x11));
    // add r0, sp, #0x18
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 1, 0, 0);
    sub_0205C1A0(*((u8*)(r5 + 0x10)));
    sub_0205C1A0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    sub_02031108(r4, r7, r0, *((u16*)(r5 + 0x14)));
    sub_0205C1C8(*((u8*)(r5 + 0x10)));
    sub_0205C1C8(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r6, r0);
    sub_0205C1C8(*((u8*)(r5 + 0x10)));
    sub_0205C1C8(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    sub_0203126C(r4, r7, r0, *((u16*)(r5 + 0x14)));
    sub_0205C1C8(*((u8*)(r5 + 0x10)));
    sub_0205C1C8(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r7, r0);
    // str r0, [sp, #0xc]
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r4, r7, r0);
    sub_0205C240(*((u8*)(r5 + 0x10)));
    sub_0205C240(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    sub_0203126C(r4, r6, r0, ((r7 << 0x10) >> 0x10));
    // ldr r0, [sp, #0xc]
    sub_0205C240(*((u8*)(r5 + 0x10)));
    sub_0205C240(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    sub_02031108(r4, r6, r0, ((r7 << 0x10) >> 0x10));
    // add r0, #0x27
    // add r0, sp, #0x10
    *((u8*)(r5 + 8)) = *((u8*)r5);
    // add r0, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #4]
    sub_02030E18(r5, 9, *((u8*)(r5 + 0x10)), 0);
    sub_0205C268(0x6c);
    // add r3, #0x27
    sub_02031108(r4, 0x6c, r0, *((u8*)r5));
    // add r6, sp, #0x10
    // add r7, sp, #0x10
    // add r0, r5, r0
    // strh r0, [r7]
    // str r6, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 6, ((0 << 0x18) >> 0x18), 0);
    // add r6, sp, #0x18
    // add r7, sp, #0x10
    // add r0, r5, r4
    // add r0, #0x24
    *((u8*)(r7 + 8)) = *((u8*)((r4 + 1) << 0x10));
    // str r6, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 7, ((0 << 0x18) >> 0x18), 0);
    Party_GetCount(*((u32*)(r5 + 0x28)));
    // str r0, [sp, #8]
    // add r7, sp, #0x10
    Party_GetMonByIndex(*((u32*)(r5 + 0x28)), 0);
    GetMonData(0xa3, 0);
    // strh r0, [r7]
    // add r0, sp, #0x10
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 2, ((r4 << 0x18) >> 0x18), 0);
    GetMonData(r6, 0x3a, 0);
    *((u8*)(r7 + 8)) = r0;
    // add r0, sp, #0x18
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 0);
    GetMonData(r6, 0x3b, 0);
    *((u8*)(r7 + 8)) = r0;
    // add r0, sp, #0x18
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 1);
    GetMonData(r6, 0x3c, 0);
    *((u8*)(r7 + 8)) = r0;
    // add r0, sp, #0x18
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 2);
    GetMonData(r6, 0x3d, 0);
    *((u8*)(r7 + 8)) = r0;
    // add r0, sp, #0x18
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 3, ((r4 << 0x18) >> 0x18), 3);
    GetMonData(r6, 0xa0, 0);
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x1c
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 4, ((r4 << 0x18) >> 0x18), 0);
    GetMonData(r6, 6, 0);
    // strh r0, [r7]
    // add r0, sp, #0x10
    // str r0, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 5, ((r4 << 0x18) >> 0x18), 0);
    // ldr r0, [sp, #8]
    Party_GetCount(*((u32*)(r5 + 0x2c)));
    // add r7, sp, #0x10
    Party_GetMonByIndex(*((u32*)(r5 + 0x2c)), 0x00000000);
    // add r1, r5, r0
    // add r0, sp, #0x10
    // strh r1, [r0]
    // str r7, [sp]
    sub_02030CF4(*((u32*)(r5 + 8)), 8, ((r4 << 0x18) >> 0x18), 0);
}





void ov80_02232E58(void) {
}





void ov80_02232E64(void) {
    // ldrb r0, [r0, #0x11]
    // bx lr
    // TODO: decompile
}





void ov80_02232E68(void) {
    // add r1, r4, r3
    // add r1, r2, r1
    // add r0, sp, #0
    // add r0, sp, #0
}





void ov80_02232E9C(void) {
}





void ov80_02232EE0(void) {
    // add r1, #0x27
    // strb r2, [r1]
    *((u16*)(r0 + 0x16)) = (*((u16*)(r0 + 0x16)) + 1);
    *((u8*)(r0 + 0x11)) = 0;
}





void ov80_02232F00(void) {
}





void ov80_02232F08(void) {
    // add r1, r5, r3
    // str r1, [sp]
    // sub r1, #0x14
    // add r1, r5, r1
    // str r1, [sp, #4]
    // sub r1, #0x10
    // add r1, r5, r1
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, r5, r1
    // add r2, r5, r2
    // sub r3, #0x1c
    // add r3, r5, r3
}





void ov80_02232F60(void) {
    sub_0203769C();
    // str r0, [sp]
    // str r0, [sp]
    ov80_02237B24(*((u8*)(r6 + 0x10)), 0);
    Party_GetCount(*((u32*)(r6 + 0x28)));
    // ldr r4, [sp]
    // add r0, r5, r0
    // str r0, [sp, #4]
    Party_GetMonByIndex(*((u32*)(r6 + 0x28)), r4);
    // ldr r1, [sp]
    // sub r1, r4, r1
    // add r5, r6, r1
    GetMonData(0x3a, 0);
    // strh r0, [r5, r1]
    GetMonData(r7, 0x3b, 0);
    // strh r0, [r5, r1]
    GetMonData(r7, 0x3c, 0);
    // strh r0, [r5, r1]
    GetMonData(r7, 0x3d, 0);
    // strh r0, [r5, r1]
    // ldr r0, [sp, #4]
    ov80_02237D9C(*((u32*)(r6 + 0x28)), 0x0000039A);
    // add r2, #8
    // add r3, #0xc
    // add r5, r6, r7
    // strb r4, [r5, r0]
    // strb r4, [r5, r1]
    // strb r4, [r5, r2]
    // strb r4, [r5, r3]
}





void ov80_02233020(void) {
    // str r0, [sp, #0x10]
    // add r1, sp, #0x18
    // strb r4, [r1]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // add r0, r1, r0
    // ldr r1, [sp]
    // str r0, [sp, #0xc]
    // add r7, sp, #0x18
    // ldr r1, [sp]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // strb r1, [r7]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r4, r4, r0
    // add r4, r4, r0
    // add r4, r4, r0
    // add r4, r4, r0
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp]
    // ldr r1, [sp, #4]
    // add r3, sp, #0x18
    // add r1, r6, r0
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // add r3, r3, r1
    // ldr r1, [sp, #8]
    // add r6, #8
    // sub r0, r3, r4
    // add r0, sp, #0x18
    // add r0, sp, #0x18
    // add r0, sp, #0x18
    // add r1, sp, #0x18
    // add r2, r2, r0
    // ldr r0, [sp, #0x10]
    // add r3, r0, r2
    // add r0, r2, r0
    // add r2, r3, r0
    // add r2, r2, r0
    // add r2, r2, r0
    // add r2, r2, r0
    // add r3, r2, r0
    // add r2, r3, r0
    // add r2, r2, r0
    // add r0, r2, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
}





void ov80_022331E8(void) {
    Save_Frontier_GetStatic();
    sub_0205C1F0(r5);
    // str r0, [sp]
    sub_0205C1F0(r5);
    sub_0205C268();
    // ldr r1, [sp]
    FrontierSave_GetStat(r7, r0);
    // add r1, r0, r4
    Save_Frontier_GetStatic(r6);
    sub_0205C1F0(r5);
    // str r0, [sp, #4]
    sub_0205C1F0(r5);
    sub_0205C268();
    // ldr r1, [sp, #4]
    sub_02031108(r7, r0, 0x0000270F);
    Save_Frontier_GetStatic(r6);
    sub_0205C1F0(r5);
    // str r0, [sp, #8]
    sub_0205C1F0(r5);
    sub_0205C268();
    // ldr r1, [sp, #8]
    sub_02031228(r7, r0, r4);
    Save_GameStats_Get(r6);
    GameStats_Add(0x42, r4);
}





void ov80_02233280(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02233292: ; jump table
}





void ov80_022332D0(void) {
    FrontierSystem_GetFrontierMap();
    // add r0, #0xa8
    GF_AssertFail(*((u32*)r5));
    // add r0, #0xac
    GF_AssertFail(*((u32*)r5));
    ov80_02237D8C(*((u8*)(r6 + 0x10)));
    AllocWindows(0xb, 1);
    // add r1, #0xa8
    // str r0, [r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xa8
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), *((u32*)r5), 1, 1);
    // add r1, #0xa8
    ov80_022333D0(*((u32*)r4), *((u32*)r5));
    AllocWindows(0xb, 1);
    // add r1, #0xa8
    // str r0, [r1]
    AllocWindows(0xb, 1);
    // add r1, #0xac
    // str r0, [r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xa8
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), *((u32*)r5), 1, 1);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xac
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), *((u32*)r5), 1, 0x15);
    // add r1, #0xa8
    ov80_022333D0(*((u32*)r4), *((u32*)r5));
    // add r1, #0xac
    ov80_022333D0(*((u32*)r4), *((u32*)r5));
    ov80_02233490(r5, r6);
}





void ov80_022333D0(void) {
    DrawFrameAndWindow1(r1, 1, 0x000003D9, 0xc);
    FillWindowPixelBuffer(r4, 0xf);
}





void ov80_022333F0(void) {
    // add r0, #0xa8
    // add r0, #0xa8
    // add r0, #0xa8
    // add r0, #0xac
    // add r0, #0xa8
    // add r0, #0xac
    // add r0, #0xac
    // add r0, #0xa8
    // add r0, #0xa8
    // str r1, [r0]
    // add r5, #0xac
    // str r1, [r5]
}





void ov80_02233490(void) {
    ov80_02237D8C(*((u8*)(r1 + 0x10)));
    // add r0, #0xa8
    GF_AssertFail(*((u32*)r4));
    Save_Frontier_GetStatic(*((u32*)(r5 + 4)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r6, r7, r0);
    Save_PlayerData_GetProfile(*((u32*)(r5 + 4)));
    // add r4, #0xa8
    ov80_02233594(r4, *((u32*)r4), r0, r6);
    // add r0, #0xa8
    GF_AssertFail(*((u32*)r4));
    // add r0, #0xac
    GF_AssertFail(*((u32*)r4));
    sub_0203769C();
    Save_Frontier_GetStatic(*((u32*)(r5 + 4)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    FrontierSave_GetStat(r6, r7, r0);
    Save_Frontier_GetStatic(*((u32*)(*((u16*)(r5 + 0x00000A1C)) + 4)));
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    // str r0, [sp]
    sub_0205C1F0(*((u8*)(r5 + 0x10)));
    sub_0205C268();
    // ldr r1, [sp]
    FrontierSave_GetStat(r7, r0);
    sub_02034818(0);
    // add r1, #0xa8
    ov80_02233594(r4, *((u32*)r4), r0, r6);
    sub_02034818(1);
    // add r4, #0xac
    ov80_02233594(r4, *((u32*)r4), r0, r5);
}





void ov80_02233594(void) {
    // str r3, [sp, #0x14]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    // ldr r2, [sp, #0x10]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0xc]
}





void ov80_02233648(void) {
    // ldrb r3, [r0, #0x10]
    // ldrh r2, [r0, #0x16]
    // cmp r3, #1
    // bhi _0223365E
    // cmp r2, #8
    // blo _02233658
    // mov r1, #7
    // b _0223366A
    // ldr r1, _02233680 ; =ov80_0223BE54
    // ldrb r1, [r1, r2]
    // b _0223366A
    // cmp r2, #8
    // blo _02233666
    // mov r1, #0x12
    // b _0223366A
    // ldr r1, _02233684 ; =ov80_0223BE60
    // ldrb r1, [r1, r2]
    // cmp r3, #0
    // bne _0223367A
    // ldrh r0, [r0, #0x14]
    // cmp r0, #0x15
    // beq _02233678
    // cmp r0, #0x31
    // bne _0223367A
    // mov r1, #0x14
    // add r0, r1, #0
    // bx lr
    // nop
    // _02233680: .word ov80_0223BE54
    // _02233684: .word ov80_0223BE60
    // TODO: decompile
}




