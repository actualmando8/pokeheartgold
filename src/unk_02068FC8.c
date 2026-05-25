/* Decompiled from asm/unk_02068FC8.s */
#include "global.h"

void sub_02068FC8(void) {
    // str r0, [sp, #0x10]
    // ldr r6, [sp, #0xb8]
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r5, [sp, #0xbc]
    FieldSystem_GetSaveData(r6);
    // str r0, [sp, #0x20]
    Save_PlayerData_GetProfile();
    // ldr r0, [sp, #0x20]
    Save_GameStats_Get();
    memset(r5, 0, 0x0000066C);
    // ldr r0, [sp, #0x1c]
    *((u8*)(r5 + 5)) = r0;
    sub_020691E8(r6);
    // str r0, [sp, #0x24]
    PlayerProfile_GetLanguage(r7);
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x18]
    // mov r1, #GAME_VERSION
    sub_020692A0();
    PlayerProfile_GetTrainerID_VisibleHalf(r7);
    // str r0, [sp, #0x28]
    PlayerProfile_GetTrainerGender(r7);
    // str r0, [sp, #0x2c]
    PlayerProfile_GetNamePtr(r7);
    // str r0, [sp, #0x30]
    PlayerProfile_GetMoney(r7);
    // str r0, [sp, #0x34]
    Save_Pokedex_Get(*((u32*)(r6 + 0xc)));
    Pokedex_CountDexOwned();
    // str r0, [sp, #0x38]
    Save_Pokedex_Get(*((u32*)(r6 + 0xc)));
    Pokedex_IsEnabled();
    // str r0, [sp, #0x3c]
    GameStats_GetScore(r4);
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0x30]
    // str r1, [sp]
    // ldr r1, [sp, #0x3c]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // str r5, [sp, #0xc]
    sub_020692C4(((r1 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x20]
    Save_PlayerData_GetIGTAddr();
    // str r0, [sp, #0x40]
    // add r1, sp, #0x94
    // add r2, sp, #0x78
    sub_02055624(r6);
    // add r1, sp, #0x84
    // add r2, sp, #0x78
    FieldSystem_GetGameClearTime(r6);
    Save_VarsFlags_Get(*((u32*)(r6 + 0xc)));
    CheckGameClearFlag();
    // add r1, sp, #0x78
    // str r1, [sp]
    // ldr r1, [sp, #0x14]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x40]
    // str r5, [sp, #8]
    // add r2, sp, #0x94
    // add r3, sp, #0x84
    sub_02069308(((r0 << 0x18) >> 0x18));
    Save_TrainerCard_Get(*((u32*)(r6 + 0xc)));
    // str r0, [sp, #0x44]
    GameStats_GetCapped(r4, 0x21);
    // str r0, [sp, #0x48]
    GameStats_GetCapped(r4, 0x1a);
    // str r0, [sp, #0x4c]
    GameStats_GetCapped(r4, 0x15);
    // str r0, [sp, #0x50]
    GameStats_GetCapped(r4, 0x19);
    // str r0, [sp, #0x54]
    GameStats_GetCapped(r4, 0x5c);
    // str r0, [sp, #0x58]
    GameStats_GetCapped(r4, 0x14);
    // ldr r1, [sp, #0x58]
    // add r1, r1, r0
    // ldr r0, [sp, #0x54]
    // add r1, r0, r1
    // ldr r0, [sp, #0x50]
    // add r1, r0, r1
    // ldr r0, [sp, #0x4c]
    // add r0, r0, r1
    // str r0, [sp, #0x5c]
    GameStats_GetCapped(r4, 0x16);
    // str r0, [sp, #0x60]
    GameStats_GetCapped(r4, 0x1b);
    // str r0, [sp, #0x64]
    GameStats_GetCapped(r4, 0x17);
    // str r0, [sp, #0x68]
    GameStats_GetCapped(r4, 0x1c);
    // str r0, [sp, #0x6c]
    GameStats_GetCapped(r4, 0x14);
    // str r0, [sp, #0x70]
    GameStats_GetCapped(r4, 0x19);
    // ldr r0, [sp, #0x44]
    TrainerCard_SignatureExists();
    // str r0, [sp, #0x74]
    // ldr r0, [sp, #0x44]
    TrainerCard_GetSignature();
    // ldr r1, [sp, #0x74]
    // ldr r2, [sp, #0x60]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x48]
    // ldr r0, [sp, #0x5c]
    // ldr r3, [sp, #0x68]
    // add r0, r1, r0
    // ldr r1, [sp, #0x64]
    // str r5, [sp, #8]
    // add r1, r2, r1
    // ldr r2, [sp, #0x6c]
    // add r2, r3, r2
    // ldr r3, [sp, #0x70]
    // add r3, r3, r4
    sub_020693AC(((r1 << 0x18) >> 0x18));
    sub_0206940C(r7, r6, r5);
    // eor r3, r1
    // strh r3, [r5, r0]
    // strh r1, [r5, r0]
}




void * sub_020691A8(void) {
    Heap_Alloc(0x0000066C);
    memset(0, 0x0000066C);
}




void * sub_020691C4(void) {
    Heap_Alloc(0x0000067C);
    memset(0, 0x0000067C);
}




void sub_020691E0(void) {
}




u32 sub_020691E8(void) {
}




void sub_020692A0(void) {
    // ldr r5, [sp, #0x14]
    // and r0, r6
    // strb r1, [r5]
    // add r0, sp, #0
}




void sub_020692C4(void) {
    // ldr r4, [sp, #0x1c]
    // add r0, #8
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x18]
}




void sub_02069308(void) {
    // ldr r4, [sp, #0x28]
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r7, [sp, #0x20]
    // ldr r0, [sp, #4]
    // add r1, #0x2e
    // strb r0, [r1]
    // add r0, #0x2f
    // strb r1, [r0]
    // add r0, #0x30
    // strb r1, [r0]
    // add r0, #0x31
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r0, #0x32
    // strb r1, [r0]
    // add r0, #0x33
    // strb r1, [r0]
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, #0x32
    // strb r1, [r0]
    // add r0, #0x33
    // strb r1, [r0]
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, #0x35
    // strb r1, [r0]
    // add r0, sp, #0x10
    // ldr r0, [sp, #4]
}




void sub_020693AC(void) {
    // ldr r4, [sp, #0x18]
    *((u32*)(r4 + 0x38)) = r0;
    *((u32*)(r4 + 0x38)) = 0x000F423F;
    *((u32*)(r4 + 0x3c)) = r1;
    *((u32*)(r4 + 0x40)) = r2;
    *((u32*)(r4 + 0x3c)) = 0x0000270F;
    *((u32*)(r4 + 0x40)) = 0x0000270F;
    *((u32*)(r4 + 0x44)) = r3;
    *((u32*)(r4 + 0x44)) = 0x0001869F;
    // add r0, sp, #0
    *((u8*)(r4 + 4)) = (((*((u8*)(0x10 + 0x10)) << 0x1f) >> 0x1b) | (*((u8*)(r4 + 4)) & ~(0x10)));
    // add r4, #0x68
    // ldr r0, [sp, #0x14]
    MI_CpuCopy8((((*((u8*)(0x10 + 0x10)) << 0x1f) >> 0x1b) | (*((u8*)(r4 + 4)) & ~(0x10))), r4, (6 << 8));
}




void sub_0206940C(void) {
    // add r1, #0x48
    // str r4, [r1, r0]
    // and r4, r5
    // str r4, [r1, r0]
}




void sub_02069464(void) {
    Heap_AllocAtEnd(0xb, 0x00000684);
    // str r0, [r4]
    // add r0, #0x80
    sub_0205ABD8(*((u32*)r5));
    *((u32*)(r4 + 4)) = r0;
    TaskManager_Call(*((u32*)(r5 + 0x10)), sub_02069498, r4);
}




BOOL sub_02069498(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r5);
    // add r4, #0x80
    sub_0205AC70(*((u32*)r4));
    // str r0, [r5]
    // str r0, [r5]
    // add r1, #8
    MI_CpuCopy8(*((u32*)(r5 + 4)), r5, 0x0000066C);
    // add r1, #8
    TrainerCard_LaunchApp(r4, r5);
    // str r0, [r5]
    FieldSystem_ApplicationIsRunning(r4);
    // add r4, #0x80
    sub_0205AC4C(*((u32*)r4));
    Heap_Free(r5);
}



