/* Decompiled from asm/unk_02034B0C.s */
#include "global.h"

void sub_02034B0C(void) {
    Heap_Alloc(0xf, 0x00000D98);
    *((u32*)(_021D4134 + 8)) = r0;
    MI_CpuFill8(0, 0x00000D98);
    sub_020335B4();
    Heap_Alloc(0xf, r0);
    // str r0, [r2, r1]
    sub_020335B4(0x00000D64, *((u32*)(_021D4134 + 8)));
    MI_CpuFill8(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D64)), 0, r0);
    LinkBattleRuleset_sizeof();
    Heap_Alloc(0xf, r0);
    // str r0, [r2, r1]
    LinkBattleRuleset_sizeof(0x00000D7C, *((u32*)(_021D4134 + 8)));
    MI_CpuFill8(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D7C)), 0, r0);
    Heap_Alloc(0xf, 0x90);
    // str r0, [r3, r1]
    // and r3, r0
    // sub r0, r0, r3
    // add r3, r0, r5
    // str r3, [r6, r0]
    // str r5, [r3, r0]
    // sub r0, #0xc
    // str r4, [r3, r0]
    // sub r1, #0x1c
    // add r0, r0, r1
    MailMsg_Init(*((u32*)(_021D4134 + 8)), 0x00000D84, _021D4134, *((u32*)(_021D4134 + 8)));
    sub_02034DF0(r7);
    WM_GetNextTgid();
    // strh r0, [r1]
}




void sub_02034BE4(void) {
    // cmp r0, #0
    // beq _02034BF0
    // _02034BF4: .word _021D4134
}




void sub_02034BF8(void) {
    // ldrb r4, [r0]
    // ldrb r3, [r1]
}




void sub_02034C20(void) {
    sub_0203993C();
    sub_02039954();
    // add r4, #0x50
    sub_0203401C(*((u8*)(r6 + 4)));
    sub_0203401C(r5);
    // add r0, #0x54
    // add r1, #0x54
    MI_CpuCopy8(r6, *((u32*)(_021D4134 + 8)), 0xc0);
    // strb r0, [r3, r1]
}




void sub_02034C94(void) {
    // add r7, #0x54
    // strb r2, [r3, r1]
    // add r2, r0, r4
    // add r0, r0, r1
    // add r0, r0, r5
    sub_02034BF8(*((u32*)(_021D4134 + 8)), (*((u32*)(_021D4134 + 8)) + 4), 6, *((u32*)(_021D4134 + 8)));
    // add r3, r3, r0
    // strh r1, [r3, r0]
    // sub r1, #0x18
    // add r3, r2, r1
    // add r1, r3, r1
    MI_CpuCopy8(r7, (r6 * 0xc0), 0xc0, *((u32*)(_021D4134 + 8)));
    // add r5, #0xc0
    // add r2, r0, r2
    // strh r1, [r2, r0]
    // sub r1, #0x18
    // add r4, r2, r1
    // add r1, r4, r1
    MI_CpuCopy8(r7, ((0 + 1) * 0xc0), 0xc0, (0 + 1));
    // strb r2, [r1, r0]
}




void sub_02034D60(void) {
}




void sub_02034D78(void) {
    *((u32*)(_021D4134 + 4)) = 0;
}




void sub_02034D8C(void) {
    Sys_SetSleepDisableFlag(4);
    *((u32*)(_021D4134 + 4)) = 1;
    WVR_StartUpAsync(8, sub_02034D60, 0);
    OS_Terminate();
}




void sub_02034DB8(void) {
    // cmp r0, #2
    // bne _02034DC4
    // _02034DC8: .word _021D4134
}




void sub_02034DCC(void) {
    // cmp r0, #0
    // beq _02034DD8
    // _02034DDC: .word _021D4134
}




void sub_02034DE0(void) {
    // bx r3
    // _02034DE8: .word WVR_TerminateAsync
    // _02034DEC: .word sub_02034D78
}




void sub_02034DF0(void) {
    // str r4, [r3, r0]
    // sub r0, #0xc
    // and r2, r0
    // sub r0, r0, r2
    // add r0, r3, r0
    sub_02033528(0x20, r0, *((u32*)(*((u32*)(_021D4134 + 8)) + (0xd7 << 4))), *((u32*)(*((u32*)(_021D4134 + 8)) + (0xd7 << 4))));
    sub_02033234(*((u32*)(*((u32*)(_021D4134 + 8)) + (0x36 << 6))), *((u32*)(_021D4134 + 8)));
}




void sub_02034E2C(void) {
    // add r3, r3, r5
    // strh r1, [r3, r0]
    // add r0, r2, r0
    MI_CpuFill8((0x45 << 2), 0, (3 << 0xa), *((u32*)(_021D4134 + 8)));
}




void sub_02034E64(void) {
    // strb r0, [r2, r4]
}




void sub_02034E8C(void) {
    // strb r2, [r3, r0]
    // add r3, #0x21
    // add r3, #0x21
    // strb r4, [r5, r3]
    // add r3, #0x21
    // add r3, #0x21
    // strb r4, [r5, r3]
    // add r3, #0x1e
    // strb r2, [r4, r3]
    // add r3, #0x21
    // add r3, #0x21
    // strb r4, [r5, r3]
    // add r3, #0x20
    // strb r2, [r4, r3]
    // add r0, #0x1f
    // strb r2, [r1, r0]
}




void sub_02034EF0(void) {
    sub_02034E8C();
    sub_02034E64(r5);
    sub_02033A68();
    sub_020337D0(sub_02036904, 0xe);
    // strb r2, [r1, r0]
    // strb r0, [r1, r3]
    sub_02033298(((*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D95)) & ~(0x20)) | ((((r4 << 0x18) >> 0x18) << 0x1f) >> 0x1a)), *((u32*)(_021D4134 + 8)), ((((r4 << 0x18) >> 0x18) << 0x1f) >> 0x1a), 0x00000D95);
    sub_020332C0();
}




void sub_02034F64(void) {
    sub_02034E8C();
    sub_02034E2C();
    sub_020337D0(sub_020367A8, 0xe);
    // strb r2, [r1, r0]
    sub_02033298(0x00000D93, *((u32*)(_021D4134 + 8)), 1);
    // add r0, sp, #0
    // add r1, sp, #0
    // strb r3, [r0]
    *((u8*)(r0 + 1)) = *((u8*)(_020F6A88 + 1));
    *((u8*)(r0 + 2)) = *((u8*)(_020F6A88 + 2));
    *((u8*)(r0 + 3)) = *((u8*)(_020F6A88 + 3));
    *((u8*)(r0 + 4)) = *((u8*)(_020F6A88 + 4));
    *((u8*)(r0 + 5)) = *((u8*)(_020F6A88 + 5));
    sub_02032C1C(sub_02034C20, 0, *((u8*)(_020F6A88 + 4)));
}




void sub_02034FE8(void) {
    sub_02033990(*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D94)), *((u32*)(_021D4134 + 8)));
    sub_02032E24();
    // strb r2, [r1, r0]
    sub_0203393C(0x00000D94, *((u32*)(_021D4134 + 8)), 1);
    sub_02033858();
    // strb r2, [r1, r0]
    sub_0203393C(0x00000D94, *((u32*)(_021D4134 + 8)), 2);
    sub_02033858();
    // strb r2, [r1, r0]
    sub_02033920(0x00000D94, *((u32*)(_021D4134 + 8)), 2);
    sub_02033958(1);
    // strb r2, [r1, r0]
}




void sub_0203507C(void) {
    // strb r1, [r2, r0]
    sub_02033858(0x00000D92, 1, *((u32*)(_021D4134 + 8)));
}




void sub_020350A8(void) {
    // strb r1, [r2, r0]
    // strb r1, [r2, r0]
    sub_02034DF0(1, 0, *((u32*)(_021D4134 + 8)));
}




void sub_020350D4(void) {
    Heap_Free(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D7C)), *((u32*)(_021D4134 + 8)));
    Heap_Free(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D64)), *((u32*)(_021D4134 + 8)));
    Heap_Free(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D84)), *((u32*)(_021D4134 + 8)));
    Heap_Free(*((u32*)(_021D4134 + 8)));
    *((u32*)(_021D4134 + 8)) = 0;
}




void sub_0203511C(void) {
    sub_02037474();
}




void sub_02035150(void) {
    GF_AssertFail(0, 0x00000D44, *((u16*)(*((u32*)(_021D4134 + 8)) + 0x00000D44)), (0 + 1));
}




void sub_02035184(void) {
    // ldrb r0, [r1, r0]
    // nop
    // _02035190: .word _021D4134
    // _02035194: .word 0x00000D74
}




void sub_02035198(void) {
    // strb r2, [r1, r0]
}




void sub_020351AC(void) {
    // add r2, r3, r1
    // add r0, r3, r2
    // add r1, #0xaa
}




void sub_020351DC(void) {
    sub_02035798(0, 0x00000D44, *((u16*)(*((u32*)(_021D4134 + 8)) + 0x00000D44)), 0);
    PlayerProfile_Copy(r4);
}




void sub_02035218(void) {
    sub_02033298();
    sub_02032E24();
    sub_02033298(0);
    sub_0203993C();
    // add r1, #0x8a
    // add r2, r3, r4
    // strb r2, [r3, r1]
    sub_0203401C((0xd9 << 4), *((u16*)(_021D4134 + 0xc0)), *((u32*)(_021D4134 + 8)));
    // add r1, r2, r1
    // add r1, r1, r4
    sub_02032B84(1, (0x46 << 2), 0);
    // add r1, r2, r1
    // add r1, r1, r4
    sub_0203373C(1, (0x45 << 2), *((u32*)(_021D4134 + 8)));
}




void sub_0203528C(void) {
    sub_02034C94();
    // add r3, r3, r5
    // strh r7, [r3, r6]
    // add r7, r3, r5
    // strb r2, [r3, r6]
}




void sub_020352D8(void) {
    sub_0203993C();
    sub_02035784();
    LinkBattleRuleset_sizeof(0x00000D88, *((u32*)(_021D4134 + 8)));
    GF_AssertFail();
    PlayerProfile_sizeof();
    GF_AssertFail();
    PlayerProfile_sizeof();
    // add r1, #0x10
    MI_CpuCopy8(r4, r5, r0);
    LinkBattleRuleset_sizeof();
    // add r1, #0x30
    MI_CpuCopy8(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D7C)), r5, r0);
    PlayerProfile_GetTrainerID(r4);
    // str r0, [r5]
    sub_0203993C();
    *((u8*)(r5 + 4)) = r0;
    sub_02039954();
    *((u8*)(r5 + 5)) = r0;
    // add r0, r1, r0
    // add r1, #8
    MI_CpuCopy8(0x00000D68, r5, 8);
    sub_02033AB8();
    // add r5, #0x54
    // strb r0, [r5]
    PlayerProfile_GetTrainerID(0x00000D88, *((u32*)(_021D4134 + 8)));
    // str r0, [r4]
    sub_0203993C();
    *((u8*)(r4 + 4)) = r0;
    sub_02039954();
    *((u8*)(r4 + 5)) = r0;
    // add r4, #8
    MI_CpuCopy8(*((u32*)(_021D4134 + 8)), r4, 0x54);
    DC_FlushRange(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), 0x5c);
    sub_02033240(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), 0x5c);
}




void sub_020353B8(void) {
    sub_02035610(0x00000D88, *((u32*)(_021D4134 + 8)));
    sub_02035610(*((u8*)(r4 + 6)));
    *((u8*)(r4 + 6)) = r0;
    DC_FlushRange(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), 0x5c);
    sub_02033240(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), 0x5c);
    // sub r2, #8
    sub_020339B4(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), 0x5c, *((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), *((u16*)_021D4134));
}




void sub_0203540C(void) {
    sub_02033298();
    sub_020347CC();
    sub_020353B8();
    sub_020338F4();
    sub_0203567C();
    // strb r0, [r1, r3]
    // strh r4, [r2, r3]
    // strb r0, [r1, r3]
    // strb r1, [r0, r2]
    sub_020332AC(*((u32*)(_021D4134 + 8)), (1 | (*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D95)) & ~(1))), 0x00000D95, (*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D95)) & ~(1)));
    sub_020399DC(0);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020354B0: ; jump table
    sub_020350D4(0x00000D92, *((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D92)), *((u32*)(_021D4134 + 8)));
    // strb r1, [r2, r0]
    sub_020338D0(*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D92)), *((u32*)(_021D4134 + 8)));
    sub_020338D0(*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D92)), *((u32*)(_021D4134 + 8)));
    // strb r0, [r3, r1]
    sub_02033468((1 | (*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D95)) & ~(1))), 0x00000D95, (*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D95)) & ~(1)), *((u32*)(_021D4134 + 8)));
    // strh r0, [r4, r1]
    // strb r1, [r0, r2]
    // strb r0, [r4, r2]
    // add r0, #9
    WM_GetNextTgid(((*((u8*)(*((u32*)(_021D4134 + 8)) + 0x00000D8C)) << 0x1c) >> 0x1f), *((u32*)(_021D4134 + 8)), 0x00000D91, _021D4134);
    // strh r0, [r1]
    sub_020352D8(_021D4134);
    sub_0203993C();
    sub_02033FC4(((r0 << 0x10) >> 0x10));
    sub_0203993C();
    sub_02035724(((r0 << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02033668(0, *((u16*)_021D4134), r5, r4);
    // strb r5, [r1, r0]
}




void sub_020355C8(void) {
}




void sub_020355DC(void) {
    sub_02033298(0);
    sub_02033250(0);
    // lsl r1, r4
    // tst r0, r1
}




void sub_02035610(void) {
}




void sub_02035630(void) {
    // cmp r1, #0
    // beq _02035644
    // ldrb r0, [r1, r0]
    // cmp r0, #3
    // bne _02035644
    // _02035648: .word _021D4134
    // _0203564C: .word 0x00000D92
}




void sub_02035650(void) {
    // cmp r0, #0
    // beq _0203565C
    // _02035660: .word _021D4134
}




void sub_02035664(void) {
}




void sub_0203567C(void) {
}




void sub_0203569C(void) {
    // cmp r1, #0
    // beq _020356B2
    // ldrb r0, [r1, r0]
    // beq _020356B2
    // nop
    // _020356B8: .word _021D4134
    // _020356BC: .word 0x00000D95
}




void sub_020356C0(void) {
    // strb r0, [r2, r4]
}




void sub_020356EC(void) {
    // strb r0, [r2, r4]
    // strh r2, [r1, r0]
}




void sub_02035724(void) {
}




void sub_02035754(void) {
    // add r2, r3, r1
    // add r2, r3, r1
    // add r0, r2, r1
}




void sub_02035784(void) {
    // ldr r0, [r1, r0]
    // nop
    // _02035790: .word _021D4134
    // _02035794: .word 0x00000D78
}




void sub_02035798(void) {
    // add r2, r3, r1
    // add r2, r3, r1
    // add r0, r2, r1
    // add r0, #0x10
}




void sub_020357C4(void) {
    GF_AssertFail(*((u32*)(_021D4134 + 8)));
    // add r3, r2, r1
    // add r1, r3, r1
    MI_CpuCopy8(r5, (r4 * 6), 6);
}




void sub_020357FC(void) {
    // cmp r1, #0
    // beq _0203580E
    // ldrb r0, [r1, r0]
    // nop
    // _02035814: .word _021D4134
    // _02035818: .word 0x00000D95
}




void sub_0203581C(void) {
    // strb r0, [r3, r1]
}




void sub_02035838(void) {
    // add r1, r2, r1
}




void sub_02035854(void) {
    LinkBattleRuleset_sizeof();
    MI_CpuCopy8(r4, *((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D7C)), r0, *((u32*)(_021D4134 + 8)));
}




void sub_02035878(void) {
    // ldr r0, [r1, r0]
    // nop
    // _02035884: .word _021D4134
    // _02035888: .word 0x00000D7C
}




void sub_0203588C(void) {
    sub_020352D8();
    // sub r2, #8
    sub_020339B4(*((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), 0x5c, *((u32*)(*((u32*)(_021D4134 + 8)) + 0x00000D88)), *((u16*)_021D4134));
}




void sub_020358B0(void) {
}




void sub_020358B8(void) {
    MI_CpuCopy8(*((u32*)(_021D4134 + 8)), 0x54);
    sub_0203588C();
}




void sub_020358D0(void) {
    // add r2, r3, r1
    // add r2, r3, r1
    // add r0, r2, r1
    // add r0, #8
}



