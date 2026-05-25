/* Decompiled from asm/unk_0205A44C.s */
#include "global.h"

void sub_0205A44C(void) {
    // add r0, #0x80
    // add r3, #0x80
}




void sub_0205A46C(void) {
    // add r3, #0x80
}




void sub_0205A478(void) {
}




void sub_0205A47C(void) {
}




void sub_0205A498(void) {
    sub_0203769C();
    // eor r0, r1
    sub_02034818(1);
    // strh r1, [r4, r0]
}




void sub_0205A4B4(void) {
    // add r1, #0x80
    // add r1, r1, r0
}




void sub_0205A4C4(void) {
    // add r3, #0x80
    // add r1, r1, r0
    // strb r2, [r1, r0]
}




BOOL sub_0205A4D8(void) {
    sub_0203769C();
    // add r1, r4, r0
    // eor r0, r1
    // add r0, r4, r0
}




void sub_0205A508(void) {
}




void sub_0205A51C(void) {
    // mvn r0, r0
}




void sub_0205A544(void) {
    sub_0205A51C(r1);
    // mvn r0, r0
    GF_AssertFail(0);
    // add r6, r6, r0
    sub_02035798(r4);
    // add r5, #0x50
    // add r5, #0x30
    // sub r4, #0xa
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r5, r0
    // asr r4, r0, #7
    PlayerProfile_GetTrainerGender(*((u8*)(0x1e + 0x18)), (r4 << 0x1e), (r4 >> 0x1f));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205A5BE: ; jump table
    LCRandom(*((u32*)(_020FC7FC + (r0 << 2))), (r0 << 2));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, r2
    LCRandom(*((u32*)((r4 << 2) + _020FC814)), (r4 << 2), (0x1f << 3));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, r2
    LCRandom(*((u32*)((r4 << 2) + _020FC8D4)), (r4 << 2), (0x1e << 3));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, r2
    LCRandom(*((u32*)((r4 << 2) + _020FC804)), (r4 << 2), (0x1f << 3));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, r2
    LCRandom(*((u32*)((r4 << 2) + _020FC8B4)), (r4 << 2), (0x1e << 3));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, r2
    LCRandom(*((u32*)((r4 << 2) + _020FC8F4)), (r4 << 2), (0x1e << 3));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, r2
}




int sub_0205A6AC(void) {
    // str r0, [sp]
    sub_0203769C();
    sub_020348A8();
    sub_0203769C((r0 << 0x18));
    // eor r0, r1
    sub_020348A8(1);
    sub_0203769C((r0 << 0x18));
    sub_020348CC();
    sub_0203769C((r0 << 0x18));
    // eor r0, r1
    sub_020348CC(1);
    // ldr r0, [sp]
    BufferCountryName(0xf, 3, r4);
    // ldr r0, [sp]
    BufferCityName(4, r4, r5);
}



void sub_0205A730(void) {
}




int sub_0205A750(void) {
    sub_0205A544((r1 - 1));
    sub_02035798((r1 - 1));
    sub_020398D4(1, 1);
    sub_02039AD8(1);
    PlayerProfile_GetTrainerGender(0);
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205A796: ; jump table
    sub_0205A730((*((u32*)(r5 + 0x34)) - 1), r0, r6);
    // add r0, r0, r2
    // sub r4, #0x13
    // add r0, r0, r2
    // add r0, r0, r2
    // sub r4, #0xa
    // add r0, r0, r2
    // sub r4, #0xd
    // add r0, r0, r2
    // sub r4, #0x10
    // add r0, r0, r2
    GF_AssertFail(*((u32*)(_020FC7F4 + (((((((((((r1 << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2))), (((((((((((r1 << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2) << 2), (r4 << 3));
}




u32 sub_0205A894(void) {
    // eor r0, r1
}




void sub_0205A8B4(void) {
    // str r0, [r5, r1]
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, r5, r4
    // str r0, [r5, r1]
    // add r1, r5, r4
}




void sub_0205A904(void) {
    // add r0, sp, #0
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205A924: ; jump table
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
}




int sub_0205A9A0(void) {
    // add r0, r5, r0
    MailMsg_IsInit((0x5e << 2), *((u32*)(r0 + (0x11 << 4))), (0 + 1), (0 + 1));
    // add r0, r5, r0
    MailMsg_GetMsgBank((0x5e << 2));
    PlayerProfile_GetAvatar(*((u32*)(r5 + 8)));
    PlayerProfile_GetTrainerGender(*((u32*)(r5 + 8)));
    GetUnionRoomAvatarAttrBySprite(r4, 2);
    BufferTrainerClassName(r6, 0, r0);
    // add r0, r5, r0
    MailMsg_GetMsgNo((0x5e << 2));
    // add r0, r5, r0
    MailMsg_GetFieldI((0x5e << 2), 0);
    BufferECWord(r6, 0, r0);
}




void sub_0205AA4C(void) {
    // stmia r4!, {r2}
    // add r1, r0, r3
}




void sub_0205AA6C(void) {
}




void sub_0205AA84(void) {
    // str r2, [r0, r1]
    // sub r1, #8
    // add r0, r0, r1
}




void sub_0205AA9C(void) {
    // str r3, [sp, #8]
    NewMsgDataFromNarc(1, 0x1b, 0x000002E2, 4);
    sub_02035798((r7 - 1));
    sub_0203769C();
    // eor r0, r1
    sub_02034818(1);
    DestroyMsgData(r6);
    BufferPlayersName(r5, 0, r4);
    // ldr r2, [sp, #8]
    BufferPlayersName(r5, 1);
    PlayerProfile_GetLanguage(r4);
    // ldr r0, [sp, #0x20]
    Save_EasyChat_SetGreetingFlag(_020FC898, *((u32*)(_020FC898 + ((((r0 - 1) << 0x10) >> 0x10) << 2))));
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205AB2C: ; jump table
    NewString_ReadMsgData(r6, 0xd9);
    // str r0, [sp]
    // str r4, [sp, #4]
    BufferString(r5, 2, r0, 0);
    Heap_Free(r7);
    DestroyMsgData(r6);
}




void sub_0205AB88(void) {
}




void sub_0205ABB0(void) {
}




void sub_0205ABBC(void) {
    // strh r2, [r0, r1]
    // add r1, #0xc
    // str r2, [r0, r1]
}




void sub_0205ABD8(void) {
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // eor r0, r1
    // add r1, r4, r0
}




void sub_0205AC4C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void sub_0205AC70(void) {
    // ldr r1, [r2, r1]
    // bx r3
    // _0205AC80: .word sub_02036FD8
    // _0205AC84: .word 0x0000066C
}



