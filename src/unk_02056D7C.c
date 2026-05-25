/* Decompiled from asm/unk_02056D7C.s */
#include "global.h"

void sub_02056D7C(void) {
    // str r0, [r1]
    MI_CpuFill8(0, 0, 0xf4);
    *((u32*)(*((u32*)_021D41C4) + 0x30)) = r4;
    // add r6, r6, r5
    // add r6, #0x78
    // strb r3, [r6]
    // add r6, r6, r5
    // add r6, #0x74
    // strh r2, [r6]
    // add r6, r6, r5
    // add r6, #0x76
    // strh r2, [r6]
    // add r6, r6, r5
    // add r6, #0x79
    // strb r7, [r6]
    // add r6, r6, r5
    // add r6, #0x38
    // strb r3, [r6]
    // add r6, r6, r5
    *((u16*)(*((u32*)_021D41C4) + 0x34)) = 0x0000FFFF;
    // add r6, r6, r5
    *((u16*)(*((u32*)_021D41C4) + 0x36)) = 0x0000FFFF;
    // add r6, r6, r5
    // add r6, #0x39
    // strb r7, [r6]
    // add r5, #8
    // add r6, r6, r4
    // add r6, #0xb4
    // strb r1, [r6]
    // add r6, r6, r4
    // add r6, #0xbc
    // strb r1, [r6]
    // add r0, #0xed
    // strb r1, [r0]
    // add r0, #0xef
    // strb r1, [r0]
    SysTask_CreateOnMainQueue(sub_020572DC, *((u32*)(*((u32*)_021D41C4) + 0x30)), 0xc8, (0 - 1));
    *((u32*)(*((u32*)_021D41C4) + 0x2c)) = r0;
    sub_020374E4(*((u32*)_021D41C4));
    sub_02056EF4();
}




void sub_02056E38(void) {
    sub_0205724C(((0 << 0x18) >> 0x18), 1, 1);
}




void sub_02056E60(void) {
    // add r2, #0xec
    // strb r1, [r2]
    // add r0, #0xee
    // strb r1, [r0]
    sub_02056EF4(*((u32*)_021D41C4), 0, *((u32*)_021D41C4));
    sub_0205701C(1);
    PlayerAvatar_GetXCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
}




void sub_02056EA0(void) {
    sub_0205724C(((0 << 0x18) >> 0x18), 0, r0);
    SysTask_Destroy(*((u32*)(*((u32*)_021D41C4) + 0x2c)));
    Heap_Free(*((u32*)_021D41C4));
    // str r1, [r0]
}




void sub_02056EE0(void) {
    // ldr r0, _02056EF0 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02056EEC
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02056EF0: .word _021D41C4
    // TODO: decompile
}




void sub_02056EF4(void) {
    sub_0203769C();
    // add r0, r2, r0
    *((u32*)((r0 << 2) + 4)) = *((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40));
    sub_0203769C((r0 << 2), *((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)), *((u32*)_021D41C4));
    // add r0, r1, r0
    // add r0, #0x24
    // strb r2, [r0]
    sub_0203769C(*((u32*)_021D41C4), 1);
    PlayerAvatar_GetXCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    // add r1, r2, r1
    // add r1, #0x74
    // strh r0, [r1]
    sub_0203769C((r4 << 3), *((u32*)_021D41C4));
    PlayerAvatar_GetZCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    // add r1, r2, r1
    // add r1, #0x76
    // strh r0, [r1]
    sub_0203769C((r4 << 3), *((u32*)_021D41C4));
    PlayerAvatar_GetFacingDirection(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    // add r1, r2, r1
    // add r1, #0x78
    // strb r0, [r1]
    sub_0203769C((r4 << 3), *((u32*)_021D41C4));
    PlayerAvatar_GetXCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    // add r1, r2, r1
    *((u16*)((r4 << 3) + 0x34)) = r0;
    sub_0203769C((r4 << 3), *((u32*)_021D41C4));
    PlayerAvatar_GetZCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    // add r1, r2, r1
    *((u16*)((r4 << 3) + 0x36)) = r0;
    sub_0203769C((r4 << 3), *((u32*)_021D41C4));
    PlayerAvatar_GetFacingDirection(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    // add r1, r2, r1
    // add r1, #0x38
    // strb r0, [r1]
}




void sub_02056FD0(void) {
    PlayerAvatar_GetFacingDirection(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    // add r1, sp, #0
    // strb r4, [r1]
    // asr r2, r4, #8
    *((u8*)(r1 + 1)) = r2;
    // asr r2, r6, #8
    *((u8*)(r1 + 2)) = r6;
    *((u8*)(r1 + 3)) = r2;
    *((u8*)(r1 + 4)) = r0;
    *((u8*)(r1 + 4)) = (0x80 | *((u8*)(r1 + 4)));
    // add r1, sp, #0
    sub_020376E0(0x16, *((u8*)(r1 + 4)));
    // add r0, #0xec
    // strb r1, [r0]
}




void sub_0205701C(void) {
    PlayerAvatar_GetXCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    sub_02056FD0(r5, r4, r0);
}




void sub_0205704C(void) {
    // and r0, r4
    // add r4, sp, #0
    // strb r0, [r4]
    // asr r2, r2, #8
    // and r5, r0
    // asr r2, r3, #7
    // and r0, r2
    // add r0, r5, r0
    // ldrsb r2, [r1, r2]
    // add r5, sp, #0
    // sub r3, r3, r4
    // ror r3, r2
    // add r2, r4, r3
    // add r0, r0, r2
    // strb r0, [r5]
    // add r1, sp, #0
    // add r0, r2, r0
    // strb r0, [r5]
}




void sub_020570C8(void) {
    PlayerAvatar_GetUnk10(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    PlayerAvatar_GetUnk14(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    sub_0203769C();
    sub_020373B4();
    // add r0, #0xeb
    sub_0205701C(1);
    // add r0, #0xeb
    // strb r1, [r0]
    // add r0, #0xeb
    // strb r1, [r0]
}




void sub_0205712C(void) {
    // add r1, r0, r4
    // add r1, #0x24
    // add r2, r0, r4
    // add r2, #0xcc
    // add r1, #0x34
    // add r2, #0xec
    // add r0, r0, r4
    // add r0, #0xcc
    // strb r6, [r0]
    // add r1, r1, r5
    sub_0205704C(0, *((u32*)_021D41C4), *((u8*)*((u32*)_021D41C4)));
    // add r5, #8
    // add r0, #0xec
    // strb r1, [r0]
}




u8 sub_02057180(void) {
}




void sub_02057184(void) {
    // add r1, r2, r4
    // add r2, #0xee
    sub_02034818(*((u8*)*((u32*)_021D41C4)), *((u32*)_021D41C4));
    // str r0, [sp, #0x14]
    sub_0203769C();
    // add r1, r5, r1
    MapObjectManager_GetFirstActiveObjectByID(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x3c)), (1 << 8));
    MapObject_Remove();
    // ldr r0, [sp, #0x14]
    PlayerProfile_GetVersion();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    PlayerProfile_GetTrainerGender(_021D41C4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r3, r6, r1
    // add r1, #0x74
    // add r2, #0x76
    // ldrsb r3, [r3, r6]
    PlayerAvatar_CreateWithParams(*((u32*)(*((u32*)(r6 + 0x30)) + 0x3c)), *((u16*)r3), *((u16*)r3));
    GF_AssertFail();
    // add r0, r0, r4
    *((u32*)(*((u32*)_021D41C4) + 4)) = r6;
    PlayerAvatar_GetMapObject(r6);
    // add r1, r5, r1
    MapObject_SetID((1 << 8));
    // add r0, r0, r5
    // add r0, #0x24
    // strb r1, [r0]
}




void sub_0205724C(void) {
    // add r0, r1, r4
    PlayerAvatar_DeleteFromMap(*((u32*)(_021D41C4 + 4)), *((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)));
    PlayerAvatar_FreeToHeap();
    // add r0, r0, r4
    *((u32*)(*((u32*)_021D41C4) + 4)) = 0;
    // add r1, #0x24
    // strb r0, [r1, r5]
    // add r0, r0, r5
    // add r0, #0xcc
    // strb r1, [r0]
}




void sub_020572AC(void) {
    // tst r1, r4
    FieldSystem_GetPlayerAvatar(*((u32*)(gSystem + 0x44)));
    PlayerAvatar_CheckRunningShoesLock();
    sub_02037498(1);
}




void sub_020572DC(void) {
}




void sub_02057314(void) {
    // add r6, sp, #0
    sub_020373B4(((0 << 0x10) >> 0x10));
    sub_02057818(r5);
    // add r0, r3, r5
    // add r0, #0x24
    // strb r5, [r6]
    // add r2, sp, #0
    sub_0205776C(r7, 1, *((u32*)(*((u32*)r4) + 0x30)));
}




void sub_02057358(void) {
    // add r1, #0xed
    // add r2, #0xed
    // strb r0, [r2]
    // add r1, #0xed
    sub_020376E0(0x3e, *((u32*)_021D41C4), *((u32*)_021D41C4));
}




void sub_02057384(void) {
    // add r1, #0xed
    // add r3, #0xed
    // strb r0, [r3]
    // add r1, #0xed
    sub_020376E0(0x3e, *((u32*)_021D41C4), _021D41C4, *((u32*)_021D41C4));
}




void sub_020573AC(void) {
    GF_AssertFail(*((u32*)_021D41C4));
    GF_AssertFail();
    GF_AssertFail(*((u8*)r4), 0);
    sub_02057C5C(r5, *((u8*)r4));
}




void sub_020573F0(void) {
    sub_02057384(r1);
    // add r0, #0xf1
    // strb r4, [r0]
    sub_0203769C(*((u32*)_021D41C4));
    // add r0, r1, r0
    *((u32*)((r0 << 2) + 4)) = r4;
    sub_02037474((r0 << 2), *((u32*)_021D41C4));
    sub_0203769C();
    sub_02057550(0, *((u32*)_021D41C4));
    sub_02037474();
    sub_0203769C();
    sub_02057D74();
}




void sub_02057454(void) {
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r1, r0
    // sub r0, #0x81
}




void sub_02057480(void) {
    Field_GetNumObjectEvents(*((u32*)(*((u32*)_021D41C4) + 0x30)));
    Field_GetObjectEvents(*((u32*)(*((u32*)_021D41C4) + 0x30)));
    // add r0, #0x20
}




void sub_020574C4(void) {
    sub_02057B4C(0);
    sub_02057B9C(r4);
    sub_02057480(r5, r6);
    sub_020548C0(*((u32*)(*((u32*)_021D41C4) + 0x30)), r5, r6);
}




void sub_02057524(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    GF_AssertFail(*((u32*)_020FC7B8), _020FC7B8);
    // add r0, sp, #0
}




void sub_02057550(void) {
    // str r5, [sp]
    // add r1, r0, r5
    // add r1, #0x24
    // add r1, r0, r5
    // add r1, #0xb4
    // ldr r1, [sp]
    // add r2, #0x34
    // add r4, r2, r1
    // add r1, r0, r5
    // add r1, #0xd4
    // add r1, r0, r5
    // add r1, #0xd4
    // add r0, r0, r5
    // add r0, #0xd4
    // strb r1, [r0]
    // add r0, r0, r5
    // add r0, #0xbc
    sub_020374C0(0, (*((u8*)*((u8*)*((u8*)*((u8*)r1)))) - 1), *((u32*)_021D41C4));
    sub_020374AC(r5);
    *((u8*)(r4 + 5)) = r0;
    // add r1, r0, r5
    // add r1, #0xd4
    // add r1, r0, r5
    // add r1, #0xcc
    // strb r0, [r1]
    *((u8*)(r4 + 7)) = 0;
    // add r0, r1, r5
    // add r0, #0xc4
    // add r1, r1, r5
    // add r1, #0xc4
    // strb r0, [r1]
    sub_02057454(r7, r7);
    sub_02057BEC(r5);
    // str r0, [sp, #4]
    sub_02057C24(r5);
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #8]
    // mvn r0, r0
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 4)) = r7;
    // add r1, r0, r5
    // add r1, #0xd4
    // strb r0, [r1]
    // add r1, r0, r5
    // add r1, #0xcc
    // strb r0, [r1]
    // add r1, r0, r5
    // add r1, #0xc4
    // add r1, r0, r5
    // add r1, #0xc4
    // add r0, r0, r5
    // add r0, #0xc4
    // strb r1, [r0]
    // add r0, r0, r5
    // add r0, #0xc4
    // ldr r0, [sp, #4]
    sub_020574C4(*((u8*)*((u32*)r6)), (*((u8*)*((u8*)r1)) - 1), r5);
    *((u8*)(r4 + 7)) = 1;
    // add r1, r0, r5
    // add r1, #0xcc
    // strb r0, [r1]
    // add r1, r0, r5
    // add r1, #0xd4
    // strb r0, [r1]
    // add r1, r0, r5
    // add r1, #0xcc
    // strb r0, [r1]
    // ldr r0, [sp, #4]
    // strh r0, [r4]
    // ldr r0, [sp, #8]
    *((u16*)(r4 + 2)) = 1;
    *((u8*)(r4 + 4)) = r7;
    sub_02057524(*((u8*)(r4 + 5)));
    // add r1, r1, r5
    // add r1, #0xd4
    // strb r0, [r1]
    // ldr r0, [sp]
    // add r0, #8
    // str r0, [sp]
}




void sub_020576C0(void) {
    // add r5, #0x34
    // add r2, r5, r2
    // tst r5, r6
    // add r4, #0xec
    // strb r0, [r4]
    // ldrsb r5, [r2, r4]
    // add r6, r6, r5
    // add r6, #0xcc
    // strb r4, [r6]
    // strh r3, [r2]
    *((u16*)((r0 << 3) + 2)) = 0;
    // add r3, r4, r3
    // strh r3, [r2]
    // and r5, r4
    // add r3, r3, r5
    // strh r3, [r2]
    // add r3, r5, r3
    *((u16*)((r0 << 3) + 2)) = *((u8*)(1 + 2));
    // and r4, r5
    // add r3, r3, r4
    *((u16*)((r0 << 3) + 2)) = *((u16*)((r0 << 3) + 2));
    // and r0, r3
    *((u8*)((r0 << 3) + 4)) = 0xf;
    // add r3, r3, r1
    // add r3, #0x24
    // strb r0, [r3]
    // add r1, r3, r1
    // add r1, #0xcc
    // strb r0, [r1]
    sub_020548C0(*((u32*)(*((u32*)_021D41C4) + 0x30)), *((u16*)(r0 << 3)), *((u16*)((r0 << 3) + 2)), *((u32*)_021D41C4));
    GF_AssertFail();
}




void sub_0205776C(void) {
    sub_0203769C(*((u32*)_021D41C4));
    sub_0205724C(r4, 0, 0);
    sub_020346E8(r4);
}




u8 sub_02057798(void) {
}




void sub_0205779C(void) {
    // and r3, r0
    // add r1, #0x74
    // add r1, r1, r0
    // tst r0, r4
    *((u8*)(*((u32*)_021D41C4) + 7)) = 0;
    // strh r0, [r1]
    *((u16*)(*((u32*)_021D41C4) + 2)) = 0;
    // add r0, r4, r0
    // strh r0, [r1]
    // and r5, r4
    // add r0, r0, r5
    // strh r0, [r1]
    // add r0, r5, r0
    *((u16*)(*((u32*)_021D41C4) + 2)) = *((u8*)(r2 + 3));
    // and r4, r5
    // add r0, r0, r4
    *((u16*)(*((u32*)_021D41C4) + 2)) = *((u16*)(*((u32*)_021D41C4) + 2));
    // asr r4, r0, #4
    // and r4, r0
    *((u8*)(*((u32*)_021D41C4) + 4)) = (1 << 8);
    // asr r2, r2, #6
    // and r0, r2
    *((u8*)(*((u32*)_021D41C4) + 5)) = 3;
    sub_02057184(((*((u8*)r2) << 0x18) >> 0x18), *((u32*)_021D41C4), *((u8*)r2), *((u8*)r2));
}




void sub_02057818(void) {
    // add r2, #0x74
    // add r6, r2, r1
    // add r2, #0xdc
    // strb r0, [r2, r5]
    // add r0, #0xee
    sub_0203769C(*((u8*)(*((u8*)(*((u32*)_021D41C4) + r0)) - 1)), 0x0000FFFF, *((u16*)(r6 + 2)));
    // add r0, #0xf1
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    PlayerAvatar_GetXCoord(*((u32*)((r5 << 2) + 4)), *((u32*)_021D41C4));
    // sub r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    PlayerAvatar_GetZCoord(*((u16*)r6));
    // sub r7, r0, r1
    // ldr r0, [sp, #0x18]
    PlayerAvatar_GetFacingDirection(*((u16*)(r6 + 2)));
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    abs();
    abs(r7);
    // ldr r0, [sp, #0x10]
    abs(r7);
    // ldr r0, [sp, #0x10]
    abs();
    // str r0, [sp, #0x14]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020578F0: ; jump table
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // add r0, #0xf0
    sub_0203769C(*((u8*)*((u32*)_021D41C4)));
    // add r0, #0xf0
    // add r1, #0xf0
    // strb r0, [r1]
    // str r0, [sp, #0x14]
    // ldrsb r0, [r6, r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02057962: ; jump table
    // ldrsb r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    sub_0206234C(4, 0x24);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #8]
    sub_0205DF0C(0, r4, r4);
    // ldr r0, [sp, #0x18]
    sub_0205DFC8();
    // ldr r0, [sp, #0x18]
    sub_0205DE38();
    // ldr r0, [sp, #0x18]
    sub_0205DFD4(r7);
    // add r0, r0, r5
    // add r0, #0xdc
    // ldr r0, [sp, #0x14]
    sub_02057524(*((u8*)*((u32*)_021D41C4)));
    // add r1, r1, r5
    // add r1, #0xdc
    // strb r0, [r1]
    // add r1, #0xdc
    // strb r0, [r1, r5]
}




u8 sub_02057A08(void) {
}




int sub_02057A0C(void) {
    sub_0203769C(0);
    sub_020373B4();
}




void sub_02057A34(void) {
    sub_0203769C(0x0000FFFF);
    // add r0, r1, r0
    // add r0, #0x74
    sub_02057A0C(*((u16*)(r4 << 3)), *((u32*)_021D41C4));
    // add r0, r1, r4
    // add r0, #0x24
    // add r0, r1, r0
    // add r0, #0x74
}




void sub_02057A88(void) {
    sub_0203769C(0x0000FFFF);
    // add r0, r1, r0
    // add r0, #0x76
    sub_02057A0C(*((u16*)(r4 << 3)), *((u32*)_021D41C4));
    // add r0, r1, r4
    // add r0, #0x24
    // add r0, r1, r0
    // add r0, #0x76
}




void sub_02057ADC(void) {
    sub_02057A34();
    // add r1, r0, r4
    // ldrsb r0, [r1, r0]
    GetDeltaXByFacingDirection(0x78, 0x0000FFFF);
    // add r1, r1, r4
    // add r1, #0x74
    // add r0, r1, r0
}




void sub_02057B14(void) {
    sub_02057A88();
    // add r1, r0, r4
    // ldrsb r0, [r1, r0]
    GetDeltaYByFacingDirection(0x78, 0x0000FFFF);
    // add r1, r1, r4
    // add r1, #0x76
    // add r0, r1, r0
}




void sub_02057B4C(void) {
    sub_0203769C(0x0000FFFF);
    // add r0, r1, r0
    sub_02057A0C(*((u16*)((r4 << 3) + 0x34)), *((u32*)_021D41C4));
    // add r0, r1, r4
    // add r0, #0x24
    // add r0, r1, r0
}




void sub_02057B9C(void) {
    sub_0203769C(0x0000FFFF);
    // add r0, r1, r0
    sub_02057A0C(*((u16*)((r4 << 3) + 0x36)), *((u32*)_021D41C4));
    // add r0, r1, r4
    // add r0, #0x24
    // add r0, r1, r0
}




void sub_02057BEC(void) {
    sub_02057B4C();
    // add r1, r0, r4
    // ldrsb r0, [r1, r0]
    GetDeltaXByFacingDirection(0x38, 0x0000FFFF);
    // add r1, r1, r4
    // add r0, r1, r0
}




void sub_02057C24(void) {
    sub_02057B9C();
    // add r1, r0, r4
    // ldrsb r0, [r1, r0]
    GetDeltaYByFacingDirection(0x38, 0x0000FFFF);
    // add r1, r1, r4
    // add r0, r1, r0
}




void sub_02057C5C(void) {
    // add r4, #0xb4
    // strb r1, [r4, r0]
    // add r2, r2, r1
    // add r2, #0x3b
    // strb r4, [r2]
    // add r0, r2, r0
    // add r0, #0xcc
    // strb r4, [r0]
    // add r0, r0, r1
    // add r0, #0x39
    // strb r2, [r0]
}




void sub_02057C94(void) {
    // add r0, sp, #8
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(_020FC7A0 + 2));
    *((u16*)(r0 + 4)) = *((u16*)(_020FC7A0 + 4));
    *((u16*)(r0 + 6)) = *((u16*)(_020FC7A0 + 6));
    // add r2, sp, #0x20
    // strh r0, [r2]
    sub_0203993C(*((u16*)_020FC7A8), (8 - 1), (*((u16*)(_020FC7A0 + 4)) + 2), (_020FC7A8 + 2));
    sub_0203774C();
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r5, sp, #8
    // add r5, sp, #0x20
    sub_02057A34(0);
    sub_02057A88(r4, *((u16*)r5));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r7, [r0, r1]
    sub_0203769C((r0 + 1), (r4 << 2));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, sp, #0x10
    sub_02037894(*((u32*)(r4 + 1)), 0);
    // ldr r0, [sp]
}




void sub_02057D50(void) {
    // add r0, r1, r0
    // add r0, #0xbc
    // strb r2, [r0]
    // add r0, r1, r0
    // add r0, #0xe6
    // strb r2, [r0]
}




void sub_02057D74(void) {
    sub_0203993C();
    sub_0203774C();
    // str r0, [sp]
    // str r0, [sp]
    // add r0, sp, #4
    // strb r1, [r0]
    // add r6, sp, #4
    // add r0, r1, r0
    // add r0, #0xe6
    // ldr r5, [sp]
    sub_02057B4C(*((u8*)r6), *((u32*)_021D41C4));
    sub_02057B9C(*((u8*)r6), *((u16*)r5));
    // add r1, r1, r0
    // add r1, #0xbc
    // strb r0, [r1]
    // add r1, sp, #4
    sub_02037184(0x5f, *((u32*)_021D41C4));
    // add r0, sp, #4
    // strb r1, [r0]
}




void sub_02057E08(void) {
    sub_0203769C();
    sub_02057A34();
    sub_02057F28(2);
    sub_0206234C(2, 0x24);
    sub_02057F28(3);
    sub_0206234C(3, 0x24);
    // add r0, r2, r0
    sub_0205DFD4(*((u32*)((r4 << 2) + 4)), r0, *((u32*)_021D41C4));
    sub_02058024();
}




void sub_02057E50(void) {
    sub_0203993C();
    sub_0203774C();
    // str r0, [sp]
    // ldr r1, [sp]
    // add r1, #0x24
    // add r1, #0xcc
    // ldr r1, [sp]
    // ldr r0, [sp]
    // add r7, #0x34
    // add r6, r7, r4
    // ldrsb r0, [r6, r0]
    sub_02057EEC(4, *((u8*)*((u32*)_021D41C4)), (*((u32*)_021D41C4) + 1));
    // str r0, [sp, #4]
    GetDeltaXByFacingDirection();
    // add r0, r1, r0
    // strh r0, [r7, r4]
    // ldr r0, [sp, #4]
    GetDeltaYByFacingDirection(*((u16*)(r7 + r4)));
    // add r0, r1, r0
    *((u16*)(r6 + 2)) = r0;
    *((u8*)(r6 + 5)) = 2;
    // add r1, r0, r5
    // add r1, #0xcc
    // strb r0, [r1]
    sub_02057C5C(r5, 1);
    // ldr r0, [sp]
    // add r4, #8
}




void sub_02057EEC(void) {
}




void sub_02057F18(void) {
    // add r0, r1, r0
    // add r0, #0xdc
}




void sub_02057F28(void) {
    PlayerAvatar_SetFacingDirection(*((u32*)(*((u32*)(*((u32*)_021D41C4) + 0x30)) + 0x40)), r0);
    sub_0203769C();
    // add r0, r1, r0
    // add r0, #0x78
    // strb r4, [r0]
    sub_0205701C(0, *((u32*)_021D41C4));
}




void sub_02057F58(void) {
}




void sub_02057F70(void) {
}




void sub_02057F80(void) {
    // add r0, #0xef
    sub_02057F70(*((u8*)*((u32*)_021D41C4)));
    // add r0, #0xef
    // strb r1, [r0]
}




void sub_02057FA4(void) {
    // add r0, r0, r4
    sub_0203769C(*((u32*)(*((u32*)_021D41C4) + 4)));
    // add r0, r0, r4
    PlayerAvatar_GetMapObject(*((u32*)(*((u32*)_021D41C4) + 4)));
    // str r0, [sp, #0xc]
    // add r1, r1, r5
    // add r2, #0x74
    // str r2, [sp, #8]
    // add r2, #0x76
    // ldrsb r1, [r1, r2]
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    MapObject_SetCurrentX(*((u32*)_021D41C4), 0x78);
    // ldr r0, [sp, #0xc]
    MapObject_SetCurrentZ(r7);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    MapObject_SetPositionFromXYZAndDirection(0, r7);
    // add r5, #8
}




void sub_02058024(void) {
    // add r0, #0xf0
    // strb r1, [r0]
}



