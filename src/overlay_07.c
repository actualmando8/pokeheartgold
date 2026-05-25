/* Decompiled from asm/overlay_07.s */
#include "global.h"

void ov07_0221BE20(void) {
    // add r1, #0x8d
    // add r0, #0xbc
    // str r1, [r0]
    // add r1, #0x8d
    // add r0, #0x8d
    // strb r1, [r0]
}




void ov07_0221BE44(void) {
    // blx r1
    // add r0, #0x8d
}




void ov07_0221BE68(void) {
    // add r0, #0x8e
    // add r1, #0x8e
    // strh r0, [r1]
    // add r0, #0x90
    // add r1, #0x90
    // strh r0, [r1]
    // ldr r2, [sp, #0x10]
}




void ov07_0221BEA4(void) {
    // add r0, #0x8e
    // add r1, #0x8e
    // strh r0, [r1]
    // add r0, #0x90
    // add r1, #0x90
    // strh r0, [r1]
}




void ov07_0221BEDC(void) {
    // str r5, [r4]
    // add r1, #0xc0
    // str r0, [r1]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // str r0, [r4, r2]
    // add r0, #0xc0
    // sub r2, #0xa8
    // add r0, #0xcc
    // str r3, [r0]
    // str r1, [r2, r0]
    // str r1, [r4, r0]
}




void ov07_0221BFC0(void) {
}




void ov07_0221BFD0(void) {
}




void ov07_0221BFE0(void) {
    // add r0, #0xc0
}




void ov07_0221C01C(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    ov07_0221C69C();
    ov07_0221C3DC(r4);
    // add r0, r4, r3
    // add r0, #0x6c
    // strb r2, [r0]
    // add r0, r4, r3
    // add r0, #0x7c
    // strb r1, [r0]
    // add r2, #0x94
    // str r0, [r2]
    *((u32*)(r4 + 0x30)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
    // add r1, #0x2c
    // strb r2, [r1]
    // add r1, #0x2d
    // add r3, #0xc
    // strb r2, [r1]
    // add r0, #0xc0
    // strb r1, [r0]
    // add r0, #0xc0
    *((u8*)(*((u32*)r4) + 1)) = *((u8*)(r5 + 1));
    // add r0, #0xc0
    *((u16*)(*((u32*)r4) + 2)) = *((u16*)(r5 + 2));
    // add r0, #0xc0
    *((u32*)(*((u32*)r4) + 4)) = *((u32*)(r5 + 4));
    // add r0, #0xc0
    *((u16*)(*((u32*)r4) + 8)) = *((u16*)(r5 + 8));
    // add r0, #0xc0
    *((u16*)(*((u32*)r4) + 0xa)) = *((u16*)(r5 + 0xc));
    // add r0, #0xc0
    *((u32*)(*((u32*)r4) + 0xc)) = *((u32*)(r5 + 0x10));
    // add r0, #0xc0
    *((u16*)(*((u32*)r4) + 0x10)) = *((u16*)(r5 + 0xa));
    // add r0, #0xc0
    *((u16*)(*((u32*)r4) + 0x12)) = *((u32*)(r5 + 0x54));
    // add r0, #0xc0
    *((u16*)(*((u32*)r4) + 0x14)) = *((u16*)(r5 + 0x14));
    // add r0, #0xc0
    *((u16*)(*((u32*)r4) + 0x16)) = *((u16*)(r5 + 0x16));
    // add r0, #0xc0
    // and r3, r6
    // str r1, [r2, r0]
    // add r1, #0xc0
    // str r1, [r2, r0]
    // add r1, #0xc0
    // str r1, [r2, r0]
    // ldr r0, [sp, #4]
    // add r0, #0xc0
    // add r0, #0xac
    // str r1, [r0]
    // ldr r0, [sp, #4]
    GF_AssertFail(*((u32*)*((u32*)r4)), *((u32*)(0x46 << 2)), *((u32*)r4), ((((*((u16*)(r5 + 0xe)) << 0x1c) >> 0x1f) << 0x1f) >> 0x1d));
    // ldr r0, [sp, #4]
    // add r0, #0xc4
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // add r0, #0xc8
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // add r0, #0xc0
    // add r0, #0xd4
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // mov ip, r3
    // add r5, #0xc0
    // add r5, r5, r1
    // add r5, #0xb0
    // str r3, [r5]
    // ldr r3, [sp, #4]
    // add r5, #0xc0
    // add r6, r3, r2
    // add r5, r5, r2
    // add r5, #0xc0
    // strb r3, [r5]
    // add r5, #0xc0
    // add r5, r5, r1
    // add r5, #0xc4
    // str r3, [r5]
    // add r5, #0xc0
    // mov r3, ip
    // add r5, r5, r7
    // add r5, #0xd8
    // strh r3, [r5]
    // add r5, #0xc0
    // add r3, #0x3c
    // add r5, r5, r2
    // add r5, #0xe0
    // strb r3, [r5]
    // add r5, #0xc0
    // add r3, #0x40
    // add r5, r5, r2
    // add r5, #0xe4
    // strb r3, [r5]
    // add r5, #0xc0
    // add r6, #0x44
    // add r5, r5, r2
    // add r5, #0xe8
    // strb r3, [r5]
    // add r5, #0xc0
    // add r5, r5, r1
    // add r5, #0xec
    // str r3, [r5]
    // add r5, #0xc0
    // add r5, r5, r1
    // add r5, #0xfc
    // str r3, [r5]
    // mov r3, ip
    // mov ip, r3
    // ldr r5, [sp, #4]
    // add r5, #0x6c
    // add r3, r4, r2
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #4]
    // add r0, #0x84
    // add r0, #0xc0
    // sub r0, #0x84
    // str r3, [r1, r0]
    // ldr r0, [sp, #4]
    // add r0, #0x8c
    // add r0, #0xc0
    // sub r0, #0x7c
    // str r3, [r1, r0]
    // ldr r0, [sp, #4]
    // add r0, #0x88
    // add r0, #0xc0
    // sub r0, #0x80
    // str r3, [r1, r0]
    // ldr r0, [sp]
    // sub r2, #0x6e
    // add r3, sp, #8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0xc0
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 4)) = *((u32*)(1 + 0x68));
    // ldr r1, [sp]
    AllocAndReadWholeNarcMemberByIdPair(*((u32*)(1 + 0x68)), 0x000001D3, *((u32*)r4), *((u32*)(0x19 << 4)));
    *((u32*)(r4 + 0x14)) = r0;
    GF_AssertFail();
    *((u32*)(r4 + 0x18)) = 0;
    // add r0, #0xc4
    GetBgPriority(*((u32*)r4), 0);
    // strb r0, [r4, r1]
    // add r0, #0xc4
    GetBgPriority(*((u32*)r4), 1);
    // strb r0, [r4, r1]
    // add r0, #0xc4
    GetBgPriority(*((u32*)r4), 2);
    // strb r0, [r4, r1]
    // add r0, #0xc4
    GetBgPriority(*((u32*)r4), 3);
    // strb r0, [r4, r1]
    // add r0, #0xdc
    // str r5, [r0]
    // add r1, #0x14
    // str r3, [r2, r0]
    // str r3, [r2, r1]
    // str r2, [r1, r0]
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, #0x8d
    // strb r2, [r0]
    // add r0, #0xa9
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x10)) = 1;
}




void ov07_0221C394(void) {
}




void ov07_0221C3B0(void) {
    // cmp r0, #1
    // bne _0221C3BA
}




void ov07_0221C3C0(void) {
}




void ov07_0221C3DC(void) {
    // cmp r0, #0
    // bne _0221C3E4
    // cmp r0, #1
    // bne _0221C3EE
}




void ov07_0221C3F4(void) {
}




void ov07_0221C410(void) {
}




void ov07_0221C42C(void) {
}




void ov07_0221C448(void) {
    // bx r3
    // _0221C454: .word ov07_0221BEA4
}




void ov07_0221C458(void) {
    // bx r3
    // _0221C464: .word ov07_0221BEA4
}




void ov07_0221C468(void) {
    // add r0, #0xc0
}




void ov07_0221C470(void) {
    // add r0, #0xc0
}




void ov07_0221C478(void) {
    // add r0, #0xc0
    // add r0, r1, r0
}




void ov07_0221C488(void) {
    // add r0, #0xc0
    // add r0, r2, r0
}




void ov07_0221C494(void) {
    // add r0, #0xc0
    // add r0, r2, r0
}




void ov07_0221C4A0(void) {
    // add r0, #0xc4
}




void ov07_0221C4A8(void) {
}




void ov07_0221C4C0(void) {
    // add r5, #0xdc
}




void ov07_0221C4E8(void) {
    // add r5, r5, r0
}




void ov07_0221C514(void) {
}




void ov07_0221C528(void) {
    // add r0, #0xcc
}




void ov07_0221C530(void) {
    // add r0, #0xc0
    // add r0, #0xac
}




void ov07_0221C53C(void) {
    // add r0, #0x90
    // add r5, #0x90
    // strh r0, [r5]
}




void ov07_0221C56C(void) {
    *((u32*)(r1 + 0x38)) = r0;
}




void ov07_0221C584(void) {
    // blx r1
    // add r1, #0x90
    // add r1, #0x90
    // add r0, #0x90
    // strh r1, [r0]
    Heap_Free(r1, (*((u16*)*((u32*)(r1 + 0x38))) - 1), (*((u8*)r1) << 2));
    SysTask_Destroy(r5);
}




u8 ov07_0221C5C4(void) {
}




void ov07_0221C5C8(void) {
    // add r1, r2, r1
}




void ov07_0221C624(void) {
}




void ov07_0221C62C(void) {
}




void ov07_0221C634(void) {
    *((u8*)(r0 + 4)) = (*((u8*)(r0 + 4)) + 1);
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 0x18)) = (*((u8*)(r0 + 0x18)) - 1);
    PlaySE(*((u16*)(r0 + 0x1a)), *((u8*)(r0 + 4)));
    sub_020061B4(*((u16*)(r5 + 0x1a)), 0x0000FFFF, *((u32*)(r5 + 0x14)));
}




void ov07_0221C674(void) {
    *((u8*)(r0 + 3)) = (*((u8*)(r0 + 3)) - 1);
    PlaySE(*((u16*)(r0 + 0x1a)), (*((u8*)(r0 + 3)) - 1), *((u8*)(r0 + 3)));
    sub_020061B4(*((u16*)(r4 + 0x1a)), 0x0000FFFF, *((u32*)(r4 + 0x14)));
}




void ov07_0221C69C(void) {
}




void ov07_0221C6B4(void) {
    // add r2, #0x8d
    // strb r1, [r2]
    // tst r2, r4
    // add r2, #0xff
    // tst r2, r4
    // tst r1, r2
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r0, #0x8d
    // strb r1, [r0]
}




void ov07_0221C6EC(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r1, #0x8d
    // strb r2, [r1]
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r0, #0xbc
    // str r1, [r0]
}




void ov07_0221C70C(void) {
    // add r1, #0x8e
    // add r0, #0x8d
    // strb r1, [r0]
    // add r0, #0x8d
    // strb r1, [r0]
}




void ov07_0221C72C(void) {
    // add r0, r0, r1
    // add r0, #0x94
    // str r2, [r0]
}




void ov07_0221C74C(void) {
    // add r1, #0x94
    // str r2, [r1]
}




void ov07_0221C768(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221C778: ; jump table
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
}




void ov07_0221C7B8(void) {
    // str r2, [sp]
    // mov ip, r0
    // add r2, #0xc0
    // add r2, r2, r6
    // add r2, #0xb0
    // add r2, #0xc0
    // add r2, r2, r6
    // add r2, #0xc4
    // add r2, #0xc0
    // mov r2, ip
    // add r2, r4, r2
    // add r2, #0xd8
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xe0
    // add r2, r1, r0
    // add r2, #0x30
    // strb r4, [r2]
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xe4
    // add r2, r1, r0
    // add r2, #0x34
    // strb r4, [r2]
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xe8
    // add r2, r1, r0
    // add r2, #0x38
    // strb r4, [r2]
    // add r2, #0xc0
    // add r2, r2, r6
    // add r2, #0xec
    // add r2, #0xc0
    // add r2, r2, r0
    // add r2, #0xc0
    // add r2, r1, r0
    // add r2, #0x4c
    // strb r4, [r2]
    // mov r2, ip
    // mov ip, r2
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C86E: ; jump table
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
    // add r0, #0xc0
    // add r3, #0xc0
    // str r0, [r1]
}




void ov07_0221C8CC(void) {
    // add r1, sp, #0
    // add r0, sp, #0
}




void ov07_0221C910(void) {
}




void ov07_0221C934(void) {
    // add r1, r0, r1
    // add r2, #0x2c
    // strb r3, [r2]
    // add r2, #0x2d
    // strb r3, [r2]
    // add r3, #0xc
}




void ov07_0221C974(void) {
    // add r3, #0x18
    // add r2, #0x2c
    // strb r1, [r2, r4]
    // add r2, r0, r4
    // add r1, #0x2d
    // sub r3, #0xc
    // bpl _0221C982
}




void ov07_0221C9C0(void) {
    // add r0, #0x8d
    // strb r2, [r0]
    // strb r0, [r5, r1]
    // add r0, #0xc0
    // add r0, r0, r4
    sub_020154B0(*((u32*)(*((u32*)r0) + 0x1c)), 0x0000017E, 1);
    // add r6, r6, r0
    // add r0, #0x8e
    // add r0, #0x90
    // add r0, #0x8d
    // strb r1, [r0]
    // strb r1, [r5, r0]
    GF_IsAnySEPlaying(0x0000017D, 0);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // add r0, #0x8d
    // strb r1, [r0]
    // add r5, #0x8d
    // strb r0, [r5]
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    *((u32*)(r5 + 0x1c)) = 0;
    *((u32*)(r5 + 0x28)) = 0;
    // add r0, #0x2c
    // strb r4, [r0]
    // add r0, #0x2d
    // strb r4, [r0]
    *((u32*)(r5 + 0x30)) = 0;
    // add r1, #0xc
    // add r0, #0xcc
    // add r0, #0xc0
    // add r0, #0xac
    SpriteSystem_FreeResourcesAndManager(*((u32*)*((u32*)r5)), *((u32*)r5), (0 + 1));
    // add r0, #0xcc
    // str r6, [r0]
    ov07_0221D55C(r5, r6);
    // add r0, #0xc0
    // add r0, r0, r4
    ov07_0221FF2C(*((u32*)(*((u32*)r5) + 0x1c)));
    // add r0, #0xc0
    // add r0, r0, r4
    *((u32*)(*((u32*)r5) + 0x1c)) = r7;
    // add r0, r5, r0
    ov07_0221DD14((6 << 6), 5);
    BattleSystem_SetDefaultBlend();
    ov07_0221FAEC(r5, 1);
    ov07_0221BFD0(r5);
    BG_ClearCharDataRange(((r4 << 0x18) >> 0x18), (1 << 0xe), 0, r0);
    ov07_0221C4A0(r5);
    ov07_0221FAEC(r5, 1);
    BgClearTilemapBufferAndCommit(r4, ((r0 << 0x18) >> 0x18));
    ToggleBgLayer(2, 1);
    SetBgPriority(0, *((u8*)(r5 + (0x6b << 2))));
    SetBgPriority(1, *((u8*)(r5 + 0x000001AD)));
    SetBgPriority(2, *((u8*)(r5 + 0x000001AE)));
    SetBgPriority(3, *((u8*)(r5 + 0x000001AF)));
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)r5), 2, 0, 0);
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)r5), 2, 3, 0);
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)r5), 3, 0, 0);
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)r5), 3, 3, 0);
    *((u32*)(r5 + 0x10)) = 0;
}




void ov07_0221CBC0(void) {
    // str r0, [sp]
    // add r0, #0xc0
    // add r0, r5, r4
    // add r0, #0x7c
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #4
    // ldr r1, [sp, #8]
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r0, #0xc0
    // add r1, sp, #4
    // add r0, r0, r6
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // add r0, #0xc0
    // ldr r1, [sp]
    // add r0, r0, r6
    // add r5, #0xc0
}




void ov07_0221CC54(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0xc0
    // add r0, r5, r4
    // add r0, #0x7c
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #8
    // ldr r1, [sp, #0xc]
    // mvn r0, r0
    // str r0, [sp, #0xc]
    // add r0, #0xc0
    // add r1, sp, #8
    // add r0, r0, r6
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // add r0, #0xc0
    // ldr r1, [sp, #4]
    // add r0, r0, r6
    // ldr r2, [sp]
    // add r5, #0xc0
    // add r1, r2, r1
}




void ov07_0221CCF4(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov07_0221C468(r0, (0x12 - 1));
    ov07_0221C470(r4);
    ov07_02231924(r4, r5);
    ov07_02231924(r4, r6);
    // add r2, sp, #0
    // add r0, r2, r3
    GF_AssertFail((r0 << 2), (r5 * 0x18));
}




void ov07_0221CD4C(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov07_0221C468(r0, (0x12 - 1));
    ov07_0221C470(r4);
    ov07_02231924(r4, r5);
    ov07_02231924(r4, r6);
    // add r2, sp, #0
    // add r0, r2, r3
    GF_AssertFail((r0 << 2), (r5 * 0x18));
}




void ov07_0221CDA4(void) {
    // add r0, #0x18
    // add r2, sp, #0x10
    // str r3, [r2]
    // str r3, [r0]
    // str r1, [sp]
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, r5, r4
    // add r0, #0x7c
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #4
    // ldr r1, [sp, #8]
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r0, #0xc0
    // add r1, sp, #4
    // add r0, r0, r6
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #0x10
    // ldr r2, [sp]
    // add r5, #0xc0
}




void ov07_0221CE5C(void) {
    // add r0, #0x18
    // add r2, sp, #0x10
    // str r3, [r2]
    // str r3, [r0]
    // str r1, [sp]
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, r5, r4
    // add r0, #0x7c
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #4
    // ldr r1, [sp, #8]
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r0, #0xc0
    // add r1, sp, #4
    // add r0, r0, r6
    // add r0, #0xc0
    // add r1, r5, r4
    // add r1, #0x6c
    // add r0, r0, r6
    // add r0, #0xc0
    // add r0, r0, r6
    // add r1, sp, #0x10
    // ldr r2, [sp]
    // add r5, #0xc0
}




void ov07_0221CF14(void) {
    // add r0, #0xc0
    // add r0, r0, r4
    // add r6, r6, r0
    // add r5, #0x8d
    // strb r0, [r5]
    // add r5, #0x8d
    // strb r0, [r5]
}




void ov07_0221CF54(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r0, #0xc0
    // add r0, r0, r4
    GF_AssertFail(*((u32*)(*((u32*)r0) + 0x1c)), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    ov07_0221FE88(*((u32*)r5), *((u32*)*((u32*)(r5 + 0x18))), 0);
    // add r1, #0xc0
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x1c)) = r0;
    // add r0, #0x8d
    // strb r1, [r0]
    // add r5, #0xbc
    // str r0, [r5]
}




void ov07_0221CFA8(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // add r0, #0xc0
    // add r0, r0, r4
    GF_AssertFail(*((u32*)(*((u32*)r0) + 0x1c)), *((u32*)(*((u32*)(r0 + 0x18)) + 4)));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    ov07_0221FEB0(*((u32*)r5), 0x60, *((u32*)*((u32*)(r5 + 0x18))), 0);
    // add r1, #0xc0
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x1c)) = r0;
    // add r0, #0x8d
    // strb r1, [r0]
    // add r5, #0xbc
    // str r0, [r5]
}




void ov07_0221D000(void) {
    // add r0, #0xc0
    // add r0, r0, r4
    // add r5, #0xc0
    // add r0, r0, r4
}




void ov07_0221D02C(void) {
    // add r1, r0, r1
    // add r1, r2, r1
}




void ov07_0221D05C(void) {
    // add r3, #8
    // add r3, #0x1c
    // str r0, [r3, r2]
    // bpl _0221D068
}




void ov07_0221D088(void) {
    // add r2, r0, r2
    // add r2, #0x94
    // add r1, #0x18
    // str r0, [r1]
}




void ov07_0221D0C0(void) {
    // add r0, #0xc0
}




void ov07_0221D0E8(void) {
    // add r2, #0x18
    // add r0, #0x94
    // str r1, [r0]
    // str r0, [r2]
    // add r2, r4, r0
    // add r0, #0x94
    // str r1, [r0]
    // blx r7
}




void ov07_0221D148(void) {
    // add r2, #0xc0
    // add r1, #0x18
    // tst r2, r3
    // str r2, [r1]
    // add r1, r2, r1
}




void ov07_0221D174(void) {
    // add r1, #0xc0
    // add r1, #0xc0
    // add r0, r1, r0
}




void ov07_0221D1B8(void) {
    // add r2, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r1, #0xc0
    // add r0, #0x18
    // str r2, [r0]
    // tst r5, r1
    // str r5, [r0]
    // add r0, r1, r0
    *((u32*)(r0 + 0x18)) = (*((u32*)*((u32*)(r0 + 0x18))) << 2);
}




void ov07_0221D214(void) {
    // add r0, r1, r0
}




void ov07_0221D23C(void) {
    // add r2, #0xc0
    // add r1, #0x18
    // asr r2, r2, #0x1f
    // add r0, r2, r0
    // str r0, [r1]
    // str r0, [r1]
}




void ov07_0221D270(void) {
    // add r1, #0xc0
    // add r1, #0xc0
    // add r0, r1, r0
}




void ov07_0221D2B0(void) {
    // add r2, #0xc0
    // add r1, #0x18
    // add r0, r2, r0
    // str r0, [r1]
    // str r0, [r1]
}




void ov07_0221D2E4(void) {
    // add r1, r2, r1
}




void ov07_0221D2F4(void) {
    // str r1, [sp]
    // str r1, [sp]
}




void ov07_0221D330(void) {
    // orr r0, r1
}




void ov07_0221D374(void) {
    Heap_Alloc(*((u32*)r0), 8);
    MI_CpuFill8(0, 8);
    // str r5, [r4]
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r4 + 4)) = ((*((u32*)(r4 + 4)) & ~(0xff)) | ((((*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18) >> 0x18) << 0x18) >> 0x18));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    ScreenBrightnessData_InitAll((*((u32*)(r5 + 0x18)) + 4), ((((*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18) >> 0x18) << 0x18) >> 0x18), (*((u32*)(r5 + 0x18)) + 4));
    ov07_0221D2F4(r4, 1);
    SysTask_CreateOnMainQueue(ov07_0221D330, r4, 0x00001001);
}




void ov07_0221D3CC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221D3E0: ; jump table
    // add r4, #0xc0
    // add r4, #0xc0
    // add r4, #0xc0
    // add r4, #0xc0
}




void ov07_0221D4B0(void) {
    // asr r6, r0, #0x10
    // asr r4, r0, #0x10
    // sub r0, r4, r0
    // asr r2, r0, #0x10
}




void ov07_0221D4FC(void) {
    // asr r6, r0, #0x10
    // asr r4, r0, #0x10
    // sub r0, r4, r0
    // asr r4, r0, #0x10
    // sub r6, #0x28
    // neg r3, r6
    // sub r4, #0x28
    // neg r3, r4
}




void ov07_0221D55C(void) {
    // str r1, [r4, r0]
    // add r4, r4, r0
    // str r0, [r4, r5]
}




void ov07_0221D5A8(void) {
}




void ov07_0221D5AC(void) {
}




void ov07_0221D5B0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    ov07_0221D3CC(*((u32*)(*((u32*)(r0 + 0x18)) + 4)), (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4));
    // add r0, #0xc0
    // add r0, r1, r0
    // add r0, #0xb0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    BgGetCharPtr(2, *((u32*)(r0 << 2)));
    MI_CpuFill8(0, (0x19 << 8));
    ToggleBgLayer(2, 0);
    // str r0, [sp]
    // add r0, #0xc4
    BG_LoadCharTilesData(*((u32*)r5), 2, r7, (0x32 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    PaletteData_LoadNarc(*((u32*)r5), *((u32*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    // sub r1, #0xa4
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + (0x1b << 4))), (0x1b << 4), *((u32*)r5), 2);
    Heap_Alloc(*((u32*)r5), 0x10);
    // str r0, [r5, r1]
    // add r0, #0xc4
    // str r2, [r0]
    ov07_0221FA48(r5, r6, *((u32*)r5));
    *((u32*)(*((u32*)(r5 + (0x5e << 2))) + 8)) = r0;
    *((u8*)(*((u32*)(r5 + (0x5e << 2))) + 4)) = 0;
    *((u8*)(*((u32*)(r5 + (0x5e << 2))) + 5)) = 0;
    SysTask_CreateOnMainQueue(ov07_0221D4FC, *((u32*)(r5 + (0x5e << 2))), 0x00001001);
    *((u32*)(*((u32*)(r5 + (0x5e << 2))) + 0xc)) = r0;
    ov07_0221FA48(r5, r6);
    Pokepic_GetAttr(0);
    // asr r7, r0, #0x10
    ov07_0221FA48(r5, r6);
    Pokepic_GetAttr(1);
    // asr r4, r0, #0x10
    ov07_0221FA48(r5, r6);
    Pokepic_GetAttr(0x29);
    // sub r0, r4, r0
    // asr r4, r0, #0x10
    // add r0, #0xc4
    // sub r7, #0x28
    // neg r3, r7
    BgSetPosTextAndCommit(*((u32*)r5), 2, 0);
    // add r0, #0xc4
    // sub r4, #0x28
    // neg r3, r4
    BgSetPosTextAndCommit(*((u32*)r5), 2, 3);
    ToggleBgLayer(2, 1);
    ov07_0221FAE8(r5);
    SetBgPriority(2, ((r0 << 0x18) >> 0x18));
}




void ov07_0221D718(void) {
}




void ov07_0221D740(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r0, #0xc0
    // add r0, #0xac
    SpriteManager_New(*((u32*)*((u32*)r0)), ov07_02234BF0);
    // str r0, [r4, r1]
    // add r0, #0xc0
    // add r0, #0xac
    SpriteSystem_InitSprites(*((u32*)*((u32*)r4)), *((u32*)(r4 + (0x4e << 2))), 5);
    // add r0, #0xc0
    // add r0, #0xac
    SpriteSystem_GetRenderer(*((u32*)*((u32*)r4)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x11 << 0x10));
    // add r0, #0xc0
    // add r0, #0xac
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(*((u32*)*((u32*)r4)), *((u32*)(r4 + (0x4e << 2))));
}




void ov07_0221D7B8(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // add r0, #0xc0
    // add r4, r2, r1
    // add r0, #0xac
    // add r4, r4, r2
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r4, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)*((u32*)r0)), *((u32*)(r0 + (0x00004E21 >> 6))), *((u32*)(r0 + (0x6d << 2))), 0x4c);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r4, [sp, #0x14]
    // add r2, #0xc0
    // add r0, #0xc8
    // add r2, #0xac
    // add r3, #0xed
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)r5), 2, *((u32*)*((u32*)r5)), *((u32*)(r5 + 0x4b)));
    // str r0, [sp]
    // str r4, [sp, #4]
    // add r0, #0xc0
    // add r0, #0xac
    // add r2, #0x7c
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)*((u32*)r5)), *((u32*)(r5 + (0x4e << 2))), *((u32*)(r5 + (0x4e << 2))), 0x4d);
    // str r0, [sp]
    // str r4, [sp, #4]
    // add r0, #0xc0
    // add r0, #0xac
    // add r2, #0x7c
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)*((u32*)r5)), *((u32*)(r5 + (0x4e << 2))), *((u32*)(r5 + (0x4e << 2))), 0x4e);
}




void ov07_0221D874(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // mov ip, r1
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // str r1, [sp, #0x10]
    *((u32*)(r0 + 0x18)) = ((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4);
    // str r1, [sp, #0xc]
    *((u32*)(r0 + 0x18)) = (((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4) + 4);
    // add r2, #0xc0
    // add r1, r1, r6
    // add r2, r1, r2
    // str r2, [sp, #0x58]
    // add r2, #0xc0
    // add r2, r1, r2
    // str r2, [sp, #0x5c]
    // add r2, #0xc0
    // add r2, r1, r2
    // str r2, [sp, #0x60]
    // add r2, #0xc0
    // add r1, r1, r3
    // str r1, [sp, #0x64]
    // str r1, [sp, #0x68]
    // str r1, [sp, #0x6c]
    // mov r1, ip
    ov07_0221D3CC(0, *((u16*)(*((u32*)r0) + 0x14)), ((0x00004E21 >> 2) * *((u16*)(*((u32*)r0) + 0x14))));
    // str r0, [sp, #0x1c]
    // add r0, #0xc0
    // ldr r0, [sp, #0x1c]
    // add r0, r1, r0
    // add r0, #0xb0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    ov07_0221FA48(r4, *((u32*)(r4 << 2)));
    Pokepic_GetAttr(0);
    // asr r7, r0, #0x10
    Pokepic_GetAttr(r6, 1);
    // asr r5, r0, #0x10
    Pokepic_GetAttr(r6, 0x29);
    // sub r0, r5, r0
    // asr r5, r0, #0x10
    // add r0, sp, #0x24
    // strh r7, [r0]
    *((u16*)((r0 << 0x10) + 2)) = r5;
    *((u16*)((r0 << 0x10) + 4)) = 0;
    *((u16*)((r0 << 0x10) + 6)) = 0;
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x50]
    // str r1, [sp, #0x54]
    // add r2, sp, #0x58
    // add r3, sp, #0x24
    *((u32*)(r3 + 0x14)) = *((u32*)r2);
    // add r0, #0xc0
    // add r0, #0xac
    // add r2, sp, #0x24
    SpriteSystem_NewSprite(*((u32*)*((u32*)r4)), *((u32*)(r4 + (0x4e << 2))), (r2 + 4), (r3 + 4));
    ManagedSprite_SetDrawFlag(0);
    Pokepic_GetAttr(r6, 6);
    ManagedSprite_SetDrawFlag(r7, 0);
    // ldr r1, [sp, #0x1c]
    ov07_0221FA48(r4);
    Sprite_GetImageProxy(*((u32*)r7));
    // ldr r2, [sp, #0x20]
    GF_CreateNewVramTransferTask(0x13, *((u32*)(r0 + 4)), (0x32 << 6));
    // ldr r1, [sp, #0x1c]
    ov07_0221FA48(r4);
    Sprite_GetPaletteProxy(*((u32*)r7));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    PaletteData_LoadNarc(*((u32*)r4), 0x20, *((u32*)r4));
    // ldr r0, [sp, #0xc]
    // add r6, r4, r0
    GF_AssertFail(*((u32*)(r6 + (r0 << 2))));
    // str r7, [r6, r5]
    // add r1, r4, r5
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    ov07_0221FA48(r4, 1);
    // add r6, r4, r0
    Heap_Alloc(*((u32*)r4), 0x10);
    // str r0, [r6, r5]
    // ldr r1, [sp, #0x1c]
    // str r7, [r0]
    ov07_0221FA48(r4);
    *((u32*)(*((u32*)(r6 + r5)) + 8)) = r0;
    *((u8*)(*((u32*)(r6 + r5)) + 4)) = 0;
    *((u8*)(*((u32*)(r6 + r5)) + 5)) = 0;
    SysTask_CreateOnMainQueue(ov07_0221D4B0, *((u32*)(r6 + r5)), 0x00001001);
    *((u32*)(*((u32*)(r6 + r5)) + 0xc)) = r0;
}




void ov07_0221DA74(void) {
    // add r0, #0xc0
    // add r0, #0xac
    // str r1, [r4, r0]
}




void ov07_0221DAA0(void) {
    // add r6, r5, r0
    // add r1, r5, r4
    // str r2, [r1, r0]
    // str r2, [r6, r4]
}




void ov07_0221DAD0(void) {
    // ldr r0, [r2, r0]
}




void ov07_0221DAF4(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    // add r6, #0x54
    // str r0, [sp]
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    *((u32*)(r0 + 0x18)) = ((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4);
    // str r0, [sp, #8]
    // add r0, #0x4c
    // str r0, [sp, #8]
    // str r5, [r0, r4]
    // add r2, r5, r4
    *((u32*)(*((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)) + 0x50)) = *((u32*)(r0 + (0x4e << 2)));
    // add r1, r5, r1
    // str r0, [r6, r4]
    *((u32*)(*((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)) + 0x58)) = 1;
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + (*((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)) << 4))), 0, *((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)), *((u32*)(r0 + (0x4e << 2))));
    ov07_0221FAB0(r5);
    ov07_0221C468(r5);
    ov07_02231924(r5, r0);
    // str r0, [sp, #4]
    ov07_0221C470(r5);
    ov07_02231924(r5, r0);
    // ldr r1, [sp]
    ov07_0221D3CC(r5);
    ov07_0221FA48(r5, r0);
    Pokepic_GetAttr(6);
    ManagedSprite_SetDrawFlag(*((u32*)(r6 + r4)), 0);
    ManagedSprite_SetDrawFlag(1);
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DBB4: ; jump table
    // ldr r0, [sp, #4]
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 1);
    // add r5, #0x54
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + r4)), 0);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + r4)), 0xff);
    // ldr r0, [sp, #4]
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 1);
    // add r5, #0x54
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + r4)), 0);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + r4)), 0xff);
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DC1A: ; jump table
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 0xff);
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 0xff);
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DC5E: ; jump table
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 0xff);
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 0xff);
    ManagedSprite_SetDrawPriority(*((u32*)(r6 + r4)), 1);
    // ldr r1, [sp, #8]
    // add r1, r1, r4
    SysTask_CreateOnMainQueue(ov07_0221DAD0, (1 << 0xc));
}




void ov07_0221DCA8(void) {
    // add r0, r0, r1
}




void ov07_0221DCC0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
}




void ov07_0221DCD4(void) {
    // add r0, r0, r3
    // add r0, #0x6c
    // strb r2, [r0]
}




void ov07_0221DCF0(void) {
    // add r0, r0, r3
    // add r0, #0x7c
    // strb r2, [r0]
}




void ov07_0221DD0C(void) {
}




void ov07_0221DD10(void) {
}




void ov07_0221DD14(void) {
}




void ov07_0221DD38(void) {
    GF_AssertFail(*((u32*)(*((u32*)(r0 + (0 << 2))) + 0x1c)));
    // str r7, [r5, r1]
    *((u32*)(*((u32*)(r5 + (0 << 2))) + 0x1c)) = r6;
    GF_AssertFail(_02237840, (0 << 2), (((0 + 1) << 0x18) >> 0x18));
}




void ov07_0221DD8C(void) {
    // ldr r3, [r0, r2]
}




void ov07_0221DDB0(void) {
    // add r1, #0xc0
    // add r4, #0xc0
    // add r1, r5, r1
}




void ov07_0221DE04(void) {
    // str r3, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // add r0, #0xc4
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r5, #0xc4
    // str r0, [sp, #0xc]
}




void ov07_0221DEB0(void) {
    // and r0, r1
}




void ov07_0221DEC0(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    ov07_0221DEB0(*((u32*)(r0 + 0x18)), *((u32*)r2), ov07_02234BA8);
    // add r0, r2, r0
    // asr r2, r0, #1
    // blx r1
}




void ov07_0221DF1C(void) {
    // str r0, [r4]
    // add r0, #0x94
    // strb r1, [r5, r0]
}




void ov07_0221DFB4(void) {
    ov07_0221EB98(*((u32*)(r1 + 0x48)), 2);
    ov07_0221FB04(*((u32*)(r5 + 0x48)), 2);
    ov07_0221FB04(*((u32*)(r5 + 0x48)), 1);
    SetBgPriority(3, ((r4 << 0x18) >> 0x18));
    SetBgPriority(2, ((r4 << 0x18) >> 0x18));
    ToggleBgLayer(2, 1);
    *((u8*)(r5 + 5)) = (*((u8*)(r5 + 5)) + 1);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)*((u32*)(r5 + 0x48))), 3, 2, 3);
    ov07_0221BFC0(*((u32*)(r5 + 0x48)));
    // add r0, #0xc4
    SetBgControlParam(*((u32*)*((u32*)(r5 + 0x48))), 3, 0, 0);
    ov07_0221DE04(r5, *((u32*)(r5 + 0x48)), 3, *((u32*)(r5 + 0x10)));
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 8, *((u8*)(r5 + 0xa)));
    ov07_0221DEC0(r5);
    *((u8*)(r5 + 5)) = (*((u8*)(r5 + 5)) + 1);
    *((u8*)(r5 + 9)) = (*((u8*)(r5 + 9)) + 2);
    *((u8*)(r5 + 0xa)) = (*((u8*)(r5 + 0xa)) - 2);
    *((u8*)(r5 + 9)) = *((u8*)(r5 + 0xb));
    *((u8*)(r5 + 0xa)) = *((u8*)(r5 + 0xc));
    *((u8*)(r5 + 5)) = (*((u8*)(r5 + 5)) + 1);
    // strh r1, [r0]
}




void ov07_0221E0B4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E0CE: ; jump table
    ToggleBgLayer(2, 1);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    ov07_0221FB04(*((u32*)(r4 + 0x48)), 2);
    ov07_0221FB04(*((u32*)(r4 + 0x48)), 1);
    SetBgPriority(3, ((r5 << 0x18) >> 0x18));
    SetBgPriority(2, ((r6 << 0x18) >> 0x18));
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 8, *((u8*)(r4 + 9)));
    ov07_0221DEC0(r4);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    *((u8*)(r4 + 9)) = (*((u8*)(r4 + 9)) + 2);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) - 2);
    *((u8*)(r4 + 9)) = (*((u8*)(r4 + 0xb)) + 2);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xc)) - 2);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    // strh r1, [r0]
    ov07_0221E664(r4, (*((u8*)(r4 + 9)) | (*((u8*)(r4 + 0xa)) << 8)), ((0 + 1) + 1));
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)*((u32*)(r4 + 0x48))), 3, 0, 0);
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)*((u32*)(r4 + 0x48))), 3, 3, 0);
    // add r0, #0xc4
    SetBgControlParam(*((u32*)*((u32*)(r4 + 0x48))), 3, 2, 4);
    ov07_0221BFC0(*((u32*)(r4 + 0x48)));
    // add r0, #0xc4
    SetBgControlParam(*((u32*)*((u32*)(r4 + 0x48))), 3, 0, 1);
    ov07_0221FB30(*((u32*)(r4 + 0x48)), 3);
    ov07_0221FB58(*((u32*)(r4 + 0x48)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    GfGfxLoader_LoadCharData(*((u32*)(*((u32*)(r4 + 0x48)) + (0x19 << 4))), *((u32*)(*((u32*)(r4 + 0x48)) + ((0x19 << 4) + 4))), *((u32*)*((u32*)(r4 + 0x48))), 3);
    // str r0, [sp]
    // sub r1, #0x14
    // str r0, [sp, #4]
    // sub r2, #0xc
    // str r0, [sp, #8]
    // add r0, #0xc8
    PaletteData_LoadNarc(*((u32*)*((u32*)(r4 + 0x48))), *((u32*)(*((u32*)(r4 + 0x48)) + (0x69 << 2))), *((u32*)(*((u32*)(r4 + 0x48)) + (0x69 << 2))), *((u32*)*((u32*)(r4 + 0x48))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xc
    // add r2, #0xc4
    GfGfxLoader_LoadScrnData(*((u32*)(*((u32*)(r4 + 0x48)) + (0x19 << 4))), *((u32*)(*((u32*)(r4 + 0x48)) + (0x19 << 4))), *((u32*)*((u32*)(r4 + 0x48))), 3);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    BattleSystem_SetDefaultBlend((*((u8*)(r4 + 5)) + 1));
    ToggleBgLayer(2, 0);
    ov07_0221EC7C(*((u32*)(r4 + 0x48)), 2);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
}




void ov07_0221E280(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)*((u32*)(r1 + 0x48))), 1, ((*((u32*)(*((u32*)(r1 + 0x48)) + (0x6a << 2))) << 0x10) >> 0x10), 0xe);
    // str r1, [sp]
    // add r0, #0xc8
    PaletteData_BlendPalettes(*((u32*)*((u32*)(r4 + 0x48))), 0, (2 << 8), 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)r2), 1, ((*((u32*)(r2 + (0x6a << 2))) << 0x10) >> 0x10), 0xe);
    // str r0, [sp]
    // add r0, #0xc8
    PaletteData_BlendPalettes(*((u32*)*((u32*)(r4 + 0x48))), 0, (2 << 8), 0x10);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    // add r0, #0xc8
    PaletteData_GetSelectedBuffersBitmask(*((u32*)*((u32*)(r4 + 0x48))));
    // add r0, #0xc4
    SetBgControlParam(*((u32*)*((u32*)(r4 + 0x48))), 3, 0, 0);
    ov07_0221DE04(r4, *((u32*)(r4 + 0x48)), 3, *((u32*)(r4 + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)*((u32*)(r4 + 0x48))), 1, (1 << 9), 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)*((u32*)(r4 + 0x48))), 1, (1 << 9), 0xe);
    ov07_0221DEC0(r4);
    // strb r2, [r1, r0]
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    // add r0, #0xc8
    PaletteData_GetSelectedBuffersBitmask(*((u32*)*((u32*)(r4 + 0x48))), *((u32*)(r4 + 0x48)), 2);
}




void ov07_0221E3B8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E3D2: ; jump table
    ov07_0221DEC0(r1);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)*((u32*)(r4 + 0x48))), 1, (1 << 9), 0xf);
    // str r1, [sp]
    // add r0, #0xc8
    PaletteData_BlendPalettes(*((u32*)*((u32*)(r4 + 0x48))), 0, ((*((u32*)(*((u32*)(r4 + 0x48)) + (0x6a << 2))) << 0x10) >> 0x10), 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)*((u32*)(r4 + 0x48))), 1, (1 << 9), 0xf);
    // str r0, [sp]
    // add r0, #0xc8
    PaletteData_BlendPalettes(*((u32*)*((u32*)(r4 + 0x48))), 0, ((*((u32*)(*((u32*)(r4 + 0x48)) + (0x6a << 2))) << 0x10) >> 0x10), 0x10);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    // add r0, #0xc8
    PaletteData_GetSelectedBuffersBitmask(*((u32*)*((u32*)(r4 + 0x48))));
    ov07_0221E664(r4);
    ToggleBgLayer(3, 0);
    ov07_0221BFC0(*((u32*)(r4 + 0x48)));
    // add r0, #0xc4
    SetBgControlParam(*((u32*)*((u32*)(r4 + 0x48))), 3, 0, 1);
    ov07_0221FB30(*((u32*)(r4 + 0x48)), 3);
    ov07_0221FB58(*((u32*)(r4 + 0x48)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    GfGfxLoader_LoadCharData(*((u32*)(*((u32*)(r4 + 0x48)) + (0x19 << 4))), *((u32*)(*((u32*)(r4 + 0x48)) + ((0x19 << 4) + 4))), *((u32*)*((u32*)(r4 + 0x48))), 3);
    // str r0, [sp]
    // sub r1, #0x14
    // str r0, [sp, #4]
    // sub r2, #0xc
    // str r0, [sp, #8]
    // add r0, #0xc8
    PaletteData_LoadNarc(*((u32*)*((u32*)(r4 + 0x48))), *((u32*)(*((u32*)(r4 + 0x48)) + (0x69 << 2))), *((u32*)(*((u32*)(r4 + 0x48)) + (0x69 << 2))), *((u32*)*((u32*)(r4 + 0x48))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xc
    // add r2, #0xc4
    GfGfxLoader_LoadScrnData(*((u32*)(*((u32*)(r4 + 0x48)) + (0x19 << 4))), *((u32*)(*((u32*)(r4 + 0x48)) + (0x19 << 4))), *((u32*)*((u32*)(r4 + 0x48))), 3);
    ToggleBgLayer(3, 1);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)*((u32*)(r4 + 0x48))), 3, 0, 0);
    // add r0, #0xc4
    BgSetPosTextAndCommit(*((u32*)*((u32*)(r4 + 0x48))), 3, 3, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)*((u32*)(r4 + 0x48))), 1, ((*((u32*)(*((u32*)(r4 + 0x48)) + (0x6a << 2))) << 0x10) >> 0x10), 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldrsb r3, [r4, r3]
    PaletteData_ForceBeginPaletteFade(*((u32*)r2), 1, ((*((u32*)(r2 + (0x6a << 2))) << 0x10) >> 0x10), 0xf);
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
    // add r0, #0xc8
    PaletteData_GetSelectedBuffersBitmask(*((u32*)*((u32*)(r4 + 0x48))));
    // strb r2, [r1, r0]
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) + 1);
}




void ov07_0221E5E0(void) {
}




u32 ov07_0221E5EC(void) {
}




void ov07_0221E600(void) {
    // ldrsh r2, [r4, r3]
    // ldrsh r0, [r4, r1]
    // add r0, r2, r0
    // ldrsh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r0
    // ldrsh r0, [r4, r1]
    // ldrsh r3, [r4, r3]
    // ldrsh r0, [r4, r0]
    // ldrsh r3, [r4, r3]
}




void ov07_0221E664(void) {
    // add r0, #0x44
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
}




void ov07_0221E6C8(void) {
    // ldr r0, [r0, r1]
}




u8 ov07_0221E6D0(void) {
}




void ov07_0221E6D4(void) {
    Heap_Alloc(*((u32*)*((u32*)(r0 + 0x48))), 0x28);
    // add r0, #0xc4
    // str r0, [r4]
    // add r0, #0x9c
    *((u16*)(r0 + 4)) = *((u32*)*((u32*)(r5 + 0x48)));
    // add r0, #0xa0
    *((u16*)(r0 + 6)) = *((u32*)*((u32*)(r5 + 0x48)));
    // add r0, #0x94
    *((u16*)(r0 + 8)) = *((u32*)*((u32*)(r5 + 0x48)));
    // add r0, #0x98
    *((u16*)(r0 + 0xa)) = *((u32*)*((u32*)(r5 + 0x48)));
    *((u32*)(r0 + 0xc)) = 3;
    *((u32*)(r0 + 0x10)) = 3;
    ov07_0221DDB0(r5, *((u32*)(r5 + 0x48)), 6);
    // ldrsh r1, [r4, r0]
    // sub r0, #9
    *((u16*)(r4 + 8)) = (8 * r1);
    // ldrsh r1, [r4, r0]
    // sub r0, #0xb
    *((u16*)(r4 + 0xa)) = (0xa * r1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 4)) = ((4 - 5) * r1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = ((6 - 7) * r1);
    *((u32*)(r4 + 0x14)) = 1;
    *((u32*)(r4 + 0x18)) = 0;
    // add r0, r1, r0
    ov07_0221DD38((6 << 6), r4, 1);
    // add r0, #0x44
    // add r5, #0x44
    // strh r0, [r5]
    SysTask_CreateOnMainQueue(ov07_0221E600, r4, 0x00001001);
}




void ov07_0221E788(void) {
    // str r0, [sp]
    Heap_Alloc(*((u32*)*((u32*)(r0 + 0x48))), 0x28);
    Heap_Alloc(*((u32*)r4), 0xc4);
    *((u32*)(r6 + 0x20)) = r0;
    // add r0, r4, r0
    ov07_0221DD38((6 << 6), r6, 2);
    // ldr r0, [sp]
    // add r0, #0x44
    // ldr r0, [sp]
    // add r0, #0x44
    // strh r2, [r0]
    *((u32*)(r6 + 0x18)) = 0;
    ov07_0221FAF8(r4, 2, (*((u16*)r0) | 2));
    ov07_02222D90();
    ov07_02222D88(0, 0);
    ov07_02222BE4(r5, r0, *((u32*)r4));
    // add r1, #0xc0
    // str r0, [r1]
    // str r4, [sp, #4]
    // strh r4, [r0, r5]
    // add r1, r0, r5
    // ldrsh r0, [r0, r5]
    // add r0, #8
    *((u16*)(*((u32*)(r6 + 0x20)) + 2)) = *((u32*)(r6 + 0x20));
    // ldrsh r1, [r7, r0]
    // add r0, r0, r5
    *((u16*)(*((u32*)(r6 + 0x20)) + 4)) = *((u32*)(r6 + 0x20));
    // add r1, r0, r5
    *((u16*)(*((u32*)(r6 + 0x20)) + 6)) = 0;
    ov07_02222D88(0, 0);
    // add r1, r1, r5
    *((u32*)(*((u32*)(r6 + 0x20)) + 8)) = r0;
    // ldr r0, [sp]
    ov07_0221DDB0(*((u32*)(r0 + 0x48)), 6);
    // add r0, r0, r5
    // ldrsh r2, [r0, r1]
    *((u16*)(*((u32*)(r6 + 0x20)) + 4)) = ((4 - 5) * r2);
    // ldr r0, [sp, #4]
    // add r4, #8
    // add r5, #0xc
    // str r0, [sp, #4]
    SysTask_CreateOnMainQueue(ov07_0221E87C, r6, (1 << 0xc));
}




void ov07_0221E868(void) {
    // add r1, #0x44
    // add r0, #0x44
    // strh r1, [r0]
}




void ov07_0221E87C(void) {
    // add r4, #0xc0
    // add r0, #0xc0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // ldrsh r6, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp]
    // add r5, r0, r1
    // asr r1, r1, #0x10
    // asr r1, r1, #0x10
    // ldrsh r2, [r4, r2]
    // asr r0, r0, #0x10
    // add r0, r0, r2
    // stmia r5!, {r0}
    // ldrsh r0, [r4, r7]
    // ldr r0, [sp, #4]
    // add r4, #0xc
    // str r0, [sp, #4]
}




void ov07_0221E914(void) {
    Heap_Free(*((u32*)(r1 + 0x24)));
    Heap_Free(r6);
    SysTask_Destroy(r5);
    // add r0, #0x8b
    // strb r2, [r4, r0]
    // strb r0, [r4, r1]
    // add r3, r4, r3
    // add r3, #0x88
    // strb r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // add r0, r4, r1
    // add r2, #0xf9
    // str r0, [sp, #0xc]
    PaletteData_LoadFromNarc(*((u32*)(r4 + 4)), 9, *((u8*)(r4 + 0x90)), *((u32*)r4));
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r2, [r4, r0]
}




void ov07_0221E9D4(void) {
    Heap_Alloc(*((u32*)*((u32*)(r0 + 0x48))), 0x28);
    MI_CpuFill8(0, 0x28);
    Heap_Alloc(*((u32*)r6), (0x19 << 4));
    *((u32*)(r4 + 0x24)) = r0;
    MI_CpuFill8(0, (0x19 << 4));
    // add r0, #0x44
    // add r0, #0x44
    // strh r1, [r0]
    *((u32*)(r4 + 0x18)) = 0;
    // str r1, [r0]
    // add r0, #0xc8
    *((u32*)(*((u32*)(r4 + 0x24)) + 4)) = *((u32*)r6);
    // add r0, r6, r0
    ov07_0221DD38((6 << 6), r4, 3);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EA4C: ; jump table
    GF_AssertFail(ov07_02237870, (*((u16*)(r1 + 6)) << 0x10));
    // str r0, [sp]
    GfGfxLoader_LoadFromNarc(9, 0, 0, *((u32*)r6));
    GF_AssertFail();
    // strb r2, [r1, r0]
    // add r2, r2, r1
    *((u8*)(*((u32*)(r4 + 0x24)) + 8)) = *((u8*)r7);
    // strb r1, [r2, r0]
    // add r0, #0x80
    // add r3, #0x80
    // add r1, r2, r1
    // add r1, #0x88
    // strh r5, [r1]
    Heap_Free(r7, ((0 + 1) << 0x10), *((u32*)(r4 + 0x24)), (r7 + 2));
    SysTask_CreateOnMainQueue(ov07_0221E914, r4, 0x00001001);
}




void ov07_0221EB84(void) {
    // add r1, #0x44
    // add r0, #0x44
    // strh r1, [r0]
}




void ov07_0221EB98(void) {
}




void ov07_0221EBA4(void) {
    // add r0, #0xc4
    // add r0, #0xc4
    // add r0, #0xc4
    // add r0, #0xc4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xc
    // add r5, #0xc4
}




void ov07_0221EC7C(void) {
    // add r0, #0xc4
    // add r0, #0xc4
    // add r0, #0xc4
    // add r5, #0xc4
}




void ov07_0221ECE8(void) {
    // add r1, #0x44
    // add r0, #0x44
    // strh r1, [r0]
}




void ov07_0221ED00(void) {
}




void ov07_0221ED14(void) {
    // blx r2
    // strb r2, [r1, r0]
    Heap_Free(r1, *((u32*)(r1 + 0x48)), 0, (*((u32*)(r1 + 0x14)) << 2));
    SysTask_Destroy(r5);
}




void ov07_0221ED44(void) {
    ov07_0221DF1C();
    ov07_0221C4A8(r5, 4);
    *((u8*)(r4 + 0xd)) = r0;
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r4 + 0x10)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r5 + 0x18)) = ((*((u32*)(r5 + 0x18)) + 4) + 4);
    *((u32*)(r4 + 0x14)) = ((*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x10) >> 0x10);
    // and r0, r1
    *((u32*)(r4 + 0x18)) = (0xFFFF0000 >> 0x10);
    SysTask_CreateOnMainQueue(ov07_0221ED14, r4, 0x0000044C);
}




void ov07_0221ED94(void) {
    ov07_0221DF1C();
    ov07_0221C4A8(r5, 4);
    *((u8*)(r4 + 0xd)) = r0;
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r4 + 0x10)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r5 + 0x18)) = ((*((u32*)(r5 + 0x18)) + 4) + 4);
    // and r0, r2
    *((u32*)(r4 + 0x14)) = ((*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x10) >> 0x10);
    *((u32*)(r4 + 0x18)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) >> 0x10);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // and r0, r2
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EDF2: ; jump table
    // ldrsb r1, [r4, r1]
    // add r0, r1, r0
    *((u8*)(r4 + 0xe)) = ((*((u32*)*((u32*)(r5 + 0x18))) >> 0x10) << 0x10);
    // ldrsb r1, [r4, r1]
    // sub r0, r1, r0
    *((u8*)(r4 + 0xe)) = ((*((u32*)*((u32*)(r5 + 0x18))) >> 0x10) << 0x10);
    // ldrsb r1, [r4, r1]
    // add r0, r1, r0
    *((u8*)(r4 + 0xf)) = ((*((u32*)*((u32*)(r5 + 0x18))) >> 0x10) << 0x10);
    // ldrsb r1, [r4, r1]
    // sub r0, r1, r0
    *((u8*)(r4 + 0xf)) = ((*((u32*)*((u32*)(r5 + 0x18))) >> 0x10) << 0x10);
    // ldrsb r1, [r4, r1]
    // add r1, r1, r0
    *((u8*)(r4 + 0xe)) = 0xe;
    // ldrsb r1, [r4, r1]
    // add r0, r1, r0
    *((u8*)(r4 + 0xf)) = ((*((u32*)*((u32*)(r5 + 0x18))) >> 0x10) << 0x10);
    // ldrsb r1, [r4, r1]
    // sub r1, r1, r0
    *((u8*)(r4 + 0xe)) = 0xe;
    // ldrsb r1, [r4, r1]
    // sub r0, r1, r0
    *((u8*)(r4 + 0xf)) = ((*((u32*)*((u32*)(r5 + 0x18))) >> 0x10) << 0x10);
    GF_AssertFail(ov07_0223789C, 0xf, 0xFFFF0000);
    SysTask_CreateOnMainQueue(ov07_0221ED14, r4, 0x0000044C);
}




void ov07_0221EE74(void) {
    // asr r4, r1, #0x10
    // add r0, r0, r1
    // add r1, r5, r5
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EEA8: ; jump table
}




void ov07_0221EEC0(void) {
    ov07_0221DF1C();
    ov07_0221C4A8(r5, 4);
    *((u8*)(r4 + 0xd)) = r0;
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r4 + 0x10)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r5 + 0x18)) = ((*((u32*)(r5 + 0x18)) + 4) + 4);
    *((u32*)(r4 + 0x14)) = (((*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x10) >> 0x10) + 3);
    // and r0, r1
    *((u32*)(r4 + 0x18)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) >> 0x10);
    SysTask_CreateOnMainQueue(ov07_0221ED14, r4, 0x0000044C);
}




void ov07_0221EF14(void) {
    // add r0, #0x8d
    // strb r1, [r0]
    // add r0, #0x8d
    // strb r1, [r0]
}




void ov07_0221EF34(void) {
    // add r0, #0x8d
    // strb r1, [r0]
    // add r0, #0x8d
    // strb r1, [r0]
}




void ov07_0221EF54(void) {
    // add r0, #0xc4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, #0xc4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    // add r0, #0xc4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r5, #0xc4
    // str r0, [sp, #0xc]
}




void ov07_0221F024(void) {
    ov07_0221DF1C();
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // str r0, [sp]
    *((u32*)(r5 + 0x18)) = ((*((u32*)(r5 + 0x18)) + 4) + 4);
    *((u32*)(r5 + 0x18)) = (((*((u32*)(r5 + 0x18)) + 4) + 4) + 4);
    *((u32*)(r5 + 0x18)) = ((((*((u32*)(r5 + 0x18)) + 4) + 4) + 4) + 4);
    ov07_0221BFC0(r5, (*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r4 + 0x10)) = r6;
    // add r5, #0xc0
    ov07_0223192C(r5, *((u16*)(*((u32*)r5) + 0x16)));
    *((u32*)(r4 + 0x10)) = r7;
    // ldr r0, [sp]
    *((u32*)(r4 + 0x10)) = r0;
    SysTask_CreateOnMainQueue(ov07_0221ED14, r4, 0x0000044C);
}




void ov07_0221F084(void) {
}




void ov07_0221F088(void) {
}




void ov07_0221F08C(void) {
}




void ov07_0221F090(void) {
}




void ov07_0221F094(void) {
}




void ov07_0221F098(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
}




void ov07_0221F0B0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
}




void ov07_0221F0CC(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // asr r1, r1, #0x18
    ov07_0221F8C8((*((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)) << 0x18), *((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)));
    PlaySE(r4);
    sub_020061B4(r4, 0x0000FFFF, r5);
}




void ov07_0221F104(void) {
    // asr r1, r1, #0x18
}




void ov07_0221F120(void) {
    ov07_0221C53C();
    memset(0, 0x3c);
    // strb r0, [r4]
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u16*)(r4 + 0x1a)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r4 + 8)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r4 + 0xc)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u32*)(r4 + 0x10)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u8*)(r4 + 3)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r1, r1, #0x18
    ov07_0221F8C8(r5, (*((u32*)(r4 + 8)) << 0x18));
    *((u32*)(r4 + 8)) = r0;
    // asr r1, r1, #0x18
    ov07_0221F8C8(r5, (*((u32*)(r4 + 0xc)) << 0x18));
    *((u32*)(r4 + 0xc)) = r0;
    // asr r0, r0, #0x18
    // asr r1, r1, #0x18
    // asr r2, r2, #0x18
    ov07_0221F980((*((u32*)(r4 + 8)) << 0x18), (*((u32*)(r4 + 0xc)) << 0x18), (*((u32*)(r4 + 0x10)) << 0x18));
    *((u32*)(r4 + 0x10)) = r0;
    PlaySE(*((u16*)(r4 + 0x1a)));
    sub_020061B4(*((u16*)(r4 + 0x1a)), 0x0000FFFF, *((u32*)(r4 + 8)));
    ov07_0221C56C(r5, r4);
}




void ov07_0221F1C0(void) {
    ov07_0221C53C();
    memset(0, 0x3c);
    // strb r0, [r4]
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u16*)(r4 + 0x1a)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 8)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 0xc)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 0x10)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u8*)(r4 + 3)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    PlaySE(*((u16*)(r4 + 0x1a)));
    sub_020061B4(*((u16*)(r4 + 0x1a)), 0x0000FFFF, *((u32*)(r4 + 8)));
    ov07_0221C56C(r5, r4);
}




void ov07_0221F238(void) {
    ov07_0221C53C();
    memset(0, 0x3c);
    // strb r0, [r4]
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u16*)(r4 + 0x1a)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 8)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 0xc)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r0, r0, #0x18
    *((u32*)(r4 + 0x10)) = (*((u32*)(*((u32*)(r5 + 0x18)) + 4)) << 0x18);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    *((u8*)(r4 + 3)) = *((u32*)(*((u32*)(r5 + 0x18)) + 4));
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 4);
    // asr r1, r1, #0x18
    ov07_0221F8C8(r5, (*((u32*)(r4 + 8)) << 0x18));
    *((u32*)(r4 + 8)) = r0;
    // asr r1, r1, #0x18
    ov07_0221F8C8(r5, (*((u32*)(r4 + 0xc)) << 0x18));
    *((u32*)(r4 + 0xc)) = r0;
    // asr r1, r1, #0x18
    ov07_0221F8C8(r5, (*((u32*)(r4 + 0x10)) << 0x18));
    *((u32*)(r4 + 0x10)) = r0;
    PlaySE(*((u16*)(r4 + 0x1a)));
    sub_020061B4(*((u16*)(r4 + 0x1a)), 0x0000FFFF, *((u32*)(r4 + 8)));
    ov07_0221C56C(r5, r4);
}




void ov07_0221F2DC(void) {
    // strb r0, [r4]
    // asr r0, r0, #0x18
    // asr r1, r1, #0x18
}




void ov07_0221F340(void) {
    // strb r0, [r4]
    // asr r0, r0, #0x18
    // asr r1, r1, #0x18
}




void ov07_0221F398(void) {
}




void ov07_0221F39C(void) {
    // add r0, #0x90
    // add r0, #0x8d
    // strb r1, [r0]
    // strb r1, [r4, r0]
    GF_IsAnySEPlaying(0x0000017D, 0);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // add r4, #0x8d
    // strb r0, [r4]
    // add r0, #0x8d
    // strb r1, [r0]
    // strb r1, [r4, r0]
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 4);
}




void ov07_0221F3F4(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 1, 2, ((*((u32*)(*((u32*)(r0 + 0x18)) + 4)) << 0x10) >> 0x10));
}




void ov07_0221F424(void) {
}




void ov07_0221F42C(void) {
}




void ov07_0221F430(void) {
    // add r6, #0xcc
    // add r0, #0xc0
    // add r0, #0xac
    // str r0, [r6, r4]
    // add r0, #0xc0
    // add r0, #0xac
    // add r0, #0xc0
    // add r0, #0xac
    // add r2, sp, #0
    // add r0, #0x18
    // str r3, [r2]
    // str r3, [r0]
    // add r5, #0xc0
    // add r0, #0xac
    // add r2, sp, #0
}




void ov07_0221F4CC(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r3, r0
    // str r0, [sp, #8]
    // add r0, #0xc0
    // add r1, r2, r1
    // add r0, #0xac
    // add r1, #0xcc
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)*((u32*)r0)), *((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 4)) << 2)), *((u32*)(r0 + (0x6e << 2))), *((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)));
}




void ov07_0221F514(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    *((u32*)(r0 + 0x18)) = ((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4) + 4);
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r2, #0xc0
    // add r3, r4, r3
    // add r0, #0xc8
    // add r2, #0xac
    // add r3, #0xcc
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)r0), 2, *((u32*)*((u32*)r0)), *((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 4)) << 2)));
}




void ov07_0221F574(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // str r0, [sp]
    // add r0, r3, r0
    // str r0, [sp, #4]
    // add r0, #0xc0
    // add r1, r2, r1
    // add r0, #0xac
    // add r1, #0xcc
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)*((u32*)r0)), *((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 4)) << 2)), *((u32*)(r0 + (7 << 6))), *((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)));
}




void ov07_0221F5BC(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // str r0, [sp]
    // add r0, r3, r0
    // str r0, [sp, #4]
    // add r0, #0xc0
    // add r1, r2, r1
    // add r0, #0xac
    // add r1, #0xcc
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)*((u32*)r0)), *((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 4)) << 2)), *((u32*)(r0 + (0x71 << 2))), *((u32*)((*((u32*)(r0 + 0x18)) + 4) + 4)));
}




void ov07_0221F604(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    // str r1, [sp]
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    ov07_0221C470((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4), ((*((u32*)(r0 + 0x18)) + 4) + 4));
    ov07_02221F80(r4, r0, 0);
    // add r1, sp, #0xc
    // strh r0, [r1]
    ov07_02221F80(r4, r6, 1);
    // add r2, sp, #0xc
    *((u16*)(r2 + 2)) = r0;
    *((u16*)(r2 + 4)) = 0;
    *((u16*)(r2 + 6)) = 0;
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x38]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x3c]
    // add r2, sp, #0xc
    // add r0, #0x18
    // add r6, r6, r3
    *((u32*)(r2 + 0x14)) = *((u32*)*((u32*)(r4 + 0x18)));
    // str r6, [r0]
    // add r3, sp, #0xc
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp, #8]
    // add r0, #0xcc
    // str r0, [sp, #8]
    // add r0, #0xc0
    // ldr r1, [sp, #8]
    // add r0, #0xac
    // add r2, sp, #0xc
    SpriteSystem_NewSprite(*((u32*)*((u32*)r4)), *((u32*)((0 + 1) + (r5 << 2))), (r2 + 4), 0x00001388);
    // str r0, [sp, #4]
    // add r2, #0x18
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 4);
    // add r0, #0x94
    // str r1, [r0]
    // str r0, [r2]
    // add r2, r4, r0
    // add r0, #0x94
    // str r1, [r0]
    // ldr r0, [sp]
    ov07_0222304C(r4, 0, (r4 + 4), *((u32*)*((u32*)(r4 + 0x18))));
    // add r4, #0xc0
    // ldr r2, [sp, #8]
    // add r1, #0xac
    // ldr r3, [sp, #4]
    // blx r5
}




void ov07_0221F710(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    ov07_0221C470((((*((u32*)(r0 + 0x18)) + 4) + 4) + 4));
    ov07_02221F80(r5, r0, 0);
    // add r1, sp, #0
    // strh r0, [r1]
    ov07_02221F80(r5, r6, 1);
    // add r2, sp, #0
    *((u16*)(r2 + 2)) = r0;
    *((u16*)(r2 + 4)) = 0;
    *((u16*)(r2 + 6)) = 0;
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x30]
    // add r2, sp, #0
    // add r0, #0x18
    // add r6, r6, r3
    *((u32*)(r2 + 0x14)) = *((u32*)*((u32*)(r5 + 0x18)));
    // str r6, [r0]
    // add r6, sp, #0
    // add r3, r5, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0xc0
    // add r1, r5, r1
    // add r0, #0xac
    // add r1, #0xcc
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)*((u32*)r5)), *((u32*)(r4 << 2)), (6 - 1), 0x00001388);
    // add r5, #0xdc
    GF_AssertFail(*((u32*)(r5 + (r7 << 2))));
    // str r6, [r5, r4]
}




void ov07_0221F7C4(void) {
    // add r5, #0xcc
    // add r0, #0xc0
    // add r0, #0xac
    // str r0, [r5, r4]
}




void ov07_0221F7F0(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) + 4);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 0x18)) + 4) + 4);
    *((u32*)(r0 + 0x18)) = (((*((u32*)(r0 + 0x18)) + 4) + 4) + 4);
    // add r2, r0, r2
}




void ov07_0221F814(void) {
}




void ov07_0221F81C(void) {
    // asr r1, r1, #0x10
    // asr r1, r1, #0x18
    // add r2, #0xc0
    // str r0, [sp]
    // add r2, r6, r2
    // add r3, r6, r3
    // str r1, [sp, #4]
    // add r2, #0xd8
    // asr r1, r1, #0x1f
    // str r1, [sp, #8]
    // add r3, #0xe8
    // str r1, [sp, #0xc]
    // sub r0, #0xc
}




void ov07_0221F880(void) {
    // add r4, #0x8d
    // strb r1, [r4]
    // add r4, #0x8d
    // strb r0, [r4]
}




void ov07_0221F8AC(void) {
}




void ov07_0221F8B0(void) {
    // cmp r0, #0x58
    // bls _0221F8B8
    // ldr r0, [r0, r1]
    // _0221F8C0: .word ov07_02234DE8
}




void ov07_0221F8C4(void) {
}




void ov07_0221F8C8(void) {
    // mvn r0, r0
    // mvn r0, r0
    // mvn r0, r0
    // mvn r0, r0
    // asr r0, r0, #0x18
}




void ov07_0221F980(void) {
    // asr r0, r0, #0x18
    // neg r0, r0
    // asr r0, r0, #0x18
}




void ov07_0221F9A8(void) {
    // add r3, #0x18
    // str r5, [r1]
    // str r5, [r3]
}




void ov07_0221F9E8(void) {
    // add r3, r1, r0
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void ov07_0221FA04(void) {
    // add r0, #0xc0
    // add r0, r0, r1
    // add r0, #0xc0
}




void ov07_0221FA10(void) {
    // add r0, #0xc0
    // add r0, r0, r1
    // add r0, #0xe0
}




void ov07_0221FA1C(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xd8
}




void ov07_0221FA2C(void) {
    // add r0, #0xc0
    // add r0, r0, r1
    // add r0, #0xe8
}




void ov07_0221FA38(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xec
}




void ov07_0221FA48(void) {
    // add r0, #0xc0
    // add r0, r0, r4
    // add r0, #0xc4
    // add r5, #0xc0
    // add r0, r0, r4
    // add r0, #0xc4
}




void ov07_0221FA78(void) {
    // add r0, #0xc8
}




void ov07_0221FA80(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xb0
}




void ov07_0221FA90(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xb0
}




void ov07_0221FAA0(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xb0
}




void ov07_0221FAB0(void) {
    // add r0, #0xc0
    // add r0, #0xd4
    // tst r0, r1
}




void ov07_0221FAC8(void) {
    // add r0, #0xc0
    // add r0, r2, r0
    // add r0, #0xfc
    // tst r0, r1
}




u8 ov07_0221FAE8(void) {
}




void ov07_0221FAEC(void) {
    // ldr r0, [r0, r1]
    // _0221FAF4: .word ov07_02234B8C
}




void ov07_0221FAF8(void) {
    // ldr r0, [r0, r1]
    // _0221FB00: .word _02234B80
}




void ov07_0221FB04(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221FB16: ; jump table
}




void ov07_0221FB30(void) {
    // str r0, [sp]
    // add r2, #0xc0
    // add r0, #0xc4
}




void ov07_0221FB58(void) {
    // str r2, [sp]
    // add r1, #0xc0
    // add r0, #0xc8
    // sub r2, #0xec
}




u8 ov07_0221FB78(void) {
}




void ov07_0221FB7C(void) {
    // add r0, r0, r2
}




void ov07_0221FB90(void) {
    // add r2, sp, #0x80
    // str r1, [sp, #0x18]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x18]
    Heap_Alloc(0x58, ov07_02234BD8);
    // ldr r0, [sp, #0x18]
    // str r0, [r4]
    *((u32*)(r0 + 4)) = r5;
    BattleSystem_GetSpriteSystem(r7);
    *((u32*)(r4 + 8)) = r0;
    BattleSystem_GetSpriteManager(r7);
    *((u32*)(r4 + 0xc)) = r0;
    BattleSystem_GetPaletteData(r7);
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x24)) = 0;
    ov12_0223BB88(r7, 0);
    *((u32*)(r5 + 0x34)) = r0;
    // add r1, #0x44
    ov12_0223C1C4(r7, r4);
    // add r1, #0x48
    ov12_0223C1F4(r7, r4);
    // ldr r1, [sp, #0x18]
    NARC_New(8);
    // str r4, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // add r2, r7, r1
    // str r0, [sp]
    // add r5, r2, r1
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), r0, 0x4c);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + 0x10)), 2, *((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)));
    // str r0, [sp]
    // str r5, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), r6, 0x4d);
    // str r0, [sp]
    // str r5, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), r6, 0x4e);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    NARC_Delete(r6);
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // add r0, r0, r2
    // add r1, r0, r3
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 4));
    // add r1, r0, r3
    // str r1, [sp, #0x68]
    // add r1, r0, r3
    // str r1, [sp, #0x6c]
    // add r1, r0, r3
    // str r1, [sp, #0x70]
    // add r0, r0, r2
    // str r0, [sp, #0x74]
    // str r1, [sp, #0x78]
    // str r1, [sp, #0x7c]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    Pokepic_GetAttr(*((u32*)(r4 + 0x48)), 0, *((u32*)(r4 + 0x34)), (*((u32*)(r4 + 4)) * 0x00001388));
    // str r0, [sp, #0x30]
    Pokepic_GetAttr(r5, 1);
    // asr r6, r0, #0x10
    Pokepic_GetAttr(r5, 0x29);
    // sub r2, r6, r0
    // ldr r0, [sp, #0x30]
    // add r1, sp, #0x34
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = r2;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    // ldr r1, [sp, #0x2c]
    // add r3, sp, #0x34
    // add r1, r4, r1
    // add r1, #0x44
    // add r1, sp, #0x80
    // str r0, [sp, #0x40]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x60]
    // str r0, [sp, #0x64]
    // add r2, sp, #0x68
    *((u32*)(r3 + 0x14)) = *((u32*)(*((u8*)r1) << 2));
    // add r2, sp, #0x34
    SpriteSystem_NewSprite(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), ((*((u8*)r1) << 2) + 4), (r3 + 4));
    ManagedSprite_TickFrame();
    *((u32*)(r7 + 0x24)) = r6;
    ManagedSprite_SetDrawFlag(r6, 0);
    Pokepic_IsActive(r5);
    ManagedSprite_SetDrawFlag(r6, 0);
    Pokepic_GetAttr(r5, 6);
    ManagedSprite_SetDrawFlag(r6, 0);
    Sprite_GetImageProxy(*((u32*)r6));
    // ldr r2, [sp, #0x20]
    GF_CreateNewVramTransferTask(0x13, *((u32*)(r0 + 4)), (0x32 << 6));
    Sprite_GetPaletteProxy(*((u32*)r6));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x24]
    PaletteData_LoadNarc(*((u32*)(r4 + 0x10)), 0x20, *((u32*)r4));
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
}




void ov07_0221FDFC(void) {
}




void ov07_0221FE08(void) {
}




void ov07_0221FE3C(void) {
}




void ov07_0221FE70(void) {
}




void ov07_0221FE84(void) {
}




void ov07_0221FE88(void) {
}




void ov07_0221FEB0(void) {
    // str r3, [sp]
    // ldr r3, [sp]
}




void ov07_0221FEDC(void) {
}




void ov07_0221FEE4(void) {
    // str r3, [sp]
    // ldr r3, [sp]
}




void ov07_0221FF18(void) {
}




void ov07_0221FF2C(void) {
}




void ov07_0221FF34(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221FF5A: ; jump table
}




void ov07_0221FF74(void) {
}




void ov07_0221FF78(void) {
    // add r2, sp, #0x28
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r1, sp, #0x28
    // ldr r0, [sp]
    // add r1, sp, #0x1c
    // ldr r1, [sp, #0x28]
    // add r0, r1, r0
    // ldr r1, [sp, #0x2c]
    // add r0, r1, r0
    // ldr r1, [sp, #0x30]
    // add r0, r1, r0
    // add r1, sp, #0x10
    // add r0, sp, #8
    // add r0, sp, #8
}




void ov07_02220030(void) {
    // add r2, sp, #0xc
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // add r1, sp, #0
    // add r1, sp, #0
}




void ov07_0222008C(void) {
    // add r2, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
}




void ov07_022200D0(void) {
    // add r2, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
}




void ov07_02220114(void) {
    // add r2, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
}




void ov07_02220160(void) {
    // add r1, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
}




void ov07_022201C8(void) {
    // add r1, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
}




void ov07_02220230(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    *((u16*)(r1 + 8)) = 0;
    *((u16*)(r1 + 0xa)) = 0;
    // add r2, sp, #0x54
    // strh r0, [r2]
    // add r2, sp, #0xc
    // strh r0, [r2]
    sub_02015504(*((u16*)ov07_02235488), (0x24 - 1), ((r2 + 2) + 2), (ov07_02235488 + 2));
    ov07_0221C468();
    ov07_0221C470(r4);
    ov07_02231924(r4, r6);
    ov07_02231924(r4, r7);
    // add r0, sp, #0x54
    // add r0, r0, r1
    // ldrsh r4, [r2, r0]
    // add r0, r0, r4
    *((u32*)(r5 + 0x28)) = (r4 * 0xac);
    // add r0, sp, #0xc
    // add r0, r0, r1
    // ldrsh r0, [r2, r0]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
}




void ov07_022202D8(void) {
    // add r3, #8
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022202EE: ; jump table
    // str r1, [r2]
    // str r1, [r3]
    // str r3, [r2]
    // str r4, [r2]
    // str r1, [r3]
    // str r1, [r3]
    // str r4, [r2]
    // str r1, [r3]
}




void ov07_0222036C(void) {
    // add r7, sp, #0x10
    // str r2, [r7]
    // ldr r3, [sp, #0x30]
    // ldr r4, [sp, #0x38]
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02220394: ; jump table
    // add r1, sp, #0x20
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // str r2, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x10]
    // add r1, sp, #0x20
    // ldrsb r1, [r1, r0]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r1, sp, #0
    // str r2, [r1]
    // ldr r0, [sp]
    // add r2, sp, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldrsb r1, [r2, r1]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x10
}




void ov07_0222043C(void) {
    // add r7, sp, #0x10
    // str r2, [r7]
    // ldr r3, [sp, #0x30]
    // ldr r4, [sp, #0x38]
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02220464: ; jump table
    // add r1, sp, #0x20
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // str r2, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x10]
    // add r1, sp, #0x20
    // ldrsb r1, [r1, r0]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r1, sp, #0
    // str r2, [r1]
    // ldr r0, [sp]
    // add r2, sp, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldrsb r1, [r2, r1]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x10
}




void ov07_0222050C(void) {
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r1, sp, #0x7c
    // add r1, sp, #0x70
    // add r1, sp, #0x58
    // add r1, sp, #0x64
    // add r1, sp, #0x40
    // add r1, sp, #0x34
    // add r1, sp, #0x4c
    // ldr r0, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02220588: ; jump table
    // ldr r1, [sp, #0x7c]
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x80]
    // ldr r1, [sp, #0x84]
    // ldr r0, [sp, #0x7c]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x80]
    // neg r1, r1
    // ldr r1, [sp, #0x84]
    // neg r1, r1
    // add r0, sp, #0x14
    // ldr r1, [sp, #0x70]
    // strh r1, [r0]
    // ldr r1, [sp, #0x74]
    // ldr r1, [sp, #0x78]
    // ldr r1, [sp, #0x58]
    // strh r1, [r0]
    // ldr r1, [sp, #0x5c]
    // ldr r1, [sp, #0x60]
    // ldr r1, [sp, #0x64]
    // strh r1, [r0]
    // ldr r1, [sp, #0x68]
    // ldr r1, [sp, #0x6c]
    // ldr r0, [sp, #0x70]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x74]
    // neg r1, r1
    // ldr r1, [sp, #0x78]
    // neg r1, r1
    // ldr r0, [sp, #0x64]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x68]
    // neg r1, r1
    // ldr r1, [sp, #0x6c]
    // neg r1, r1
    // ldr r0, [sp, #0x40]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x44]
    // neg r1, r1
    // ldr r1, [sp, #0x48]
    // neg r1, r1
    // add r0, sp, #0x14
    // ldr r1, [sp, #0x40]
    // strh r1, [r0]
    // ldr r1, [sp, #0x44]
    // ldr r1, [sp, #0x48]
    // ldr r1, [sp, #0x34]
    // strh r1, [r0]
    // ldr r1, [sp, #0x38]
    // ldr r1, [sp, #0x3c]
    // ldr r1, [sp, #0x4c]
    // strh r1, [r0]
    // ldr r1, [sp, #0x50]
    // ldr r1, [sp, #0x54]
    // ldr r0, [sp, #0x4c]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x50]
    // neg r1, r1
    // ldr r1, [sp, #0x54]
    // neg r1, r1
    // ldr r0, [sp, #0x58]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x5c]
    // neg r1, r1
    // ldr r1, [sp, #0x60]
    // neg r1, r1
    // ldr r0, [sp, #0x34]
    // neg r1, r0
    // add r0, sp, #0x14
    // strh r1, [r0]
    // ldr r1, [sp, #0x38]
    // neg r1, r1
    // ldr r1, [sp, #0x3c]
    // neg r1, r1
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x28
    // str r0, [r1]
    // add r2, sp, #0x1c
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // add r3, sp, #0x1c
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x88
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r1
    // ldr r0, [sp, #0x20]
    // add r0, r0, r1
    // ldr r0, [sp, #0x24]
    // add r0, r0, r1
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
    // str r2, [sp, #0x88]
    // str r1, [sp, #0x8c]
    // str r0, [sp, #0x90]
    // ldr r1, [sp, #0x88]
    // ldr r1, [sp, #0x8c]
    // ldr r1, [sp, #0x24]
    // str r2, [sp, #0x8c]
    // str r0, [sp, #0x88]
    // str r2, [sp, #0x90]
    // add r0, r0, r1
    // ldr r0, [sp, #0x8c]
    // add r0, r0, r1
    // ldr r0, [sp, #0x90]
    // add r0, r0, r1
    // ldr r0, [sp, #0xa8]
    // ldr r0, [sp, #0xac]
    // ldr r3, [sp, #0xc]
    // str r0, [sp]
    // str r5, [sp, #4]
    // add r0, sp, #0x88
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xac]
    // ldr r3, [sp, #0xc]
    // str r0, [sp]
    // str r5, [sp, #4]
    // add r0, sp, #0x88
    // str r0, [sp, #8]
    // add r1, sp, #0x14
    // add r0, #0x50
    // strh r2, [r0]
    // add r0, #0x52
    // add r4, #0x54
    // strh r2, [r0]
    // strh r0, [r4]
}




void ov07_022207D0(void) {
    // str r0, [sp, #8]
    // str r5, [sp]
    // ldr r2, [sp, #8]
    // str r4, [sp, #4]
}




void ov07_02220800(void) {
}




void ov07_0222080C(void) {
}




void ov07_02220818(void) {
}




void ov07_02220824(void) {
}




void ov07_02220830(void) {
}




void ov07_0222083C(void) {
}




void ov07_02220848(void) {
}




void ov07_02220854(void) {
}




void ov07_02220860(void) {
}




void ov07_0222086C(void) {
}




void ov07_02220878(void) {
}




void ov07_02220884(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov07_022208B4(void) {
}




void ov07_022208F8(void) {
}




void ov07_02220938(void) {
}




void ov07_02220978(void) {
    // add r3, r2, r2
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0222099A: ; jump table
    // add r2, sp, #0xb0
    ov07_02231B90(*((u32*)r1), *((u32*)(r1 + 0x24)), *((u32*)(r1 + 0x14)), (*((u16*)(r3 + 6)) << 0x10));
    // add r2, sp, #0xb0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231BC0(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231BC0(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231BF0(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231BF0(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231C20(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231C20(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231C50(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231C50(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231C80(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231C80(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231CB0(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231CB0(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231CE0(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231CE0(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231D10(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231D10(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231D40(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231D40(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02231DA0(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231DA0(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r1, sp, #0xa0
    ov07_0221F9A8(*((u32*)r4), 4);
    ov07_02221664(r4);
    *((u8*)(r4 + 8)) = r0;
    // ldr r0, [sp, #0xa4]
    // str r0, [sp, #0xb0]
    // ldr r0, [sp, #0xa8]
    // str r0, [sp, #0xb4]
    // ldr r0, [sp, #0xac]
    // str r0, [sp, #0xb8]
    // ldr r0, [sp, #0xa0]
    *((u8*)(r4 + 8)) = 1;
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp, #0xb0]
    // str r1, [sp, #0xb0]
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #0xb4]
    // str r0, [sp, #0xb4]
    // add r2, sp, #0xb0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r1, sp, #0xb0
    ov07_02221734(r4);
    // add r2, sp, #0xb0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r1, sp, #0xb0
    ov07_02221734(r4);
    // add r2, sp, #0xb0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_022216A8(r4, *((u32*)(r4 + 0x24)));
    // add r2, sp, #0xb0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_022216A8(r4, *((u32*)(r4 + 0x28)));
    // add r2, sp, #0xb0
    ov07_02220938();
    // add r1, sp, #0xb0
    ov07_02221734(r4);
    // add r2, sp, #0xb0
    ov07_022208F8();
    // add r1, sp, #0xb0
    ov07_02221734(r4);
    // str r0, [sp, #0xb0]
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // str r0, [sp, #0xb0]
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // add r2, sp, #0xb0
    ov07_02231B90(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r3, sp, #0x70
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov07_02231924(*((u32*)r4), *((u32*)(r4 + 0x24)), (6 - 1));
    // add r0, sp, #0x70
    // str r0, [sp, #0xb0]
    // add r0, sp, #0x74
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // add r3, sp, #0x38
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov07_0221BFC0(*((u32*)r4), (r0 << 3), (7 - 1));
    ov07_02231924(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r0, sp, #0x38
    // str r0, [sp, #0xb0]
    // add r0, sp, #0x3c
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov07_0221BFC0(*((u32*)r4), (r0 << 3), (7 - 1));
    ov07_02231924(*((u32*)r4), *((u32*)(r4 + 0x24)));
    // add r0, sp, #0
    // str r0, [sp, #0xb0]
    // add r0, sp, #4
    // str r0, [sp, #0xb4]
    // str r0, [sp, #0xb8]
    // add r2, sp, #0xb0
    // ldmia r2!, {r0, r1}
    // add r4, #0x2c
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #0xb0]
    // add r0, r1, r0
    *((u32*)(r5 + 0x28)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 4));
    // ldr r1, [sp, #0xb4]
    // add r0, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 8));
    // ldr r1, [sp, #0xb8]
    // add r0, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r5 + 0x20))) + 0xc));
}




void ov07_02220CAC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    ov07_02231924(*((u32*)r1), *((u32*)(r1 + 0x24)));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_02231924(*((u32*)r0), *((u32*)(r1 + 0x28)));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02220CE2: ; jump table
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)((*((u16*)(*((u32*)(r0 + 0x18)) + 6)) << 0x10) + 2)) = 0;
    *((u16*)((*((u16*)(*((u32*)(r0 + 0x18)) + 6)) << 0x10) + 4)) = 0;
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)(*((u16*)(*((u32*)(r0 + 0x18)) + 6)) << 0x10)), 0);
    // ldr r0, [sp, #4]
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(*((u32*)(r0 + 0x10)) + 2)) = (0x73 << 4);
    *((u16*)(*((u32*)(r0 + 0x10)) + 4)) = (0x2e << 4);
    // strh r1, [r0]
    *((u16*)(*((u32*)(r0 + 0x10)) + 2)) = 0xFFFFFA60;
    *((u16*)(*((u32*)(r0 + 0x10)) + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02235CE0 + 2)) = *((u32*)((0xc * *((u32*)(r0 + 0x10))) + ov07_02235CE4));
    // add r0, r3, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(ov07_02235CE0 + 4)) = (*((u32*)((0xc * *((u32*)(r0 + 0x10))) + (0x48 * r2))) >> 0x1f);
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)(*((u32*)((0xc * *((u32*)(r0 + 0x10))) + (0x48 * r2))) >> 0x1f)), *((u32*)((0xc * *((u32*)(r0 + 0x10))) + (0x48 * r2))), ov07_02235CE0, ov07_02235CE8);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // neg r3, r2
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(*((u32*)((0xc * r0) + ov07_02235CE0)) + 2)) = *((u32*)((0xc * r0) + ov07_02235CE4));
    // add r0, r3, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(*((u32*)((0xc * r0) + ov07_02235CE0)) + 4)) = (*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0223192C(*((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f)), *((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) + 0x24)), *((u32*)((0xc * r0) + ov07_02235CE0)), ov07_02235CE8);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0223192C(*((u32*)r0), *((u32*)(r1 + 0x28)));
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02235CE0 + 2)) = *((u32*)((0xc * r0) + ov07_02235CE4));
    // add r0, r3, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(ov07_02235CE0 + 4)) = (*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0223192C(*((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f)), *((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) + 0x24)), ov07_02235CE0, ov07_02235CE8);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x21 << 6);
    *((u16*)(r0 + 4)) = 0x000005FC;
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0xFFFFF558;
    *((u16*)(r0 + 4)) = 0x000005FC;
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)r0), 0x000005FC);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // neg r3, r2
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(*((u32*)((0xc * r0) + ov07_02235CE0)) + 2)) = *((u32*)((0xc * r0) + ov07_02235CE4));
    // add r0, r3, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(*((u32*)((0xc * r0) + ov07_02235CE0)) + 4)) = (*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0223192C(*((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f)), *((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) + 0x24)), *((u32*)((0xc * r0) + ov07_02235CE0)), ov07_02235CE8);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0223192C(*((u32*)r0), *((u32*)(r1 + 0x28)));
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02235CE0 + 2)) = *((u32*)((0xc * r0) + ov07_02235CE4));
    // add r0, r3, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(ov07_02235CE0 + 4)) = (*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0223192C(*((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f)), *((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) + 0x24)), ov07_02235CE0, ov07_02235CE8);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x21 << 6);
    *((u16*)(r0 + 4)) = 0x000005FC;
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0xFFFFF558;
    *((u16*)(r0 + 4)) = 0x000005FC;
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)r0), 0x000005FC);
    // ldr r0, [sp, #4]
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(*((u32*)(r0 + 0x10)) + 2)) = (0x5a << 4);
    *((u16*)(*((u32*)(r0 + 0x10)) + 4)) = (0x2e << 4);
    // strh r1, [r0]
    *((u16*)(*((u32*)(r0 + 0x10)) + 2)) = 0xFFFFFA60;
    *((u16*)(*((u32*)(r0 + 0x10)) + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02235620 + 2)) = *((u32*)((0xc * *((u32*)(r0 + 0x10))) + ov07_02235624));
    // add r0, r3, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(ov07_02235620 + 4)) = (*((u32*)((0xc * *((u32*)(r0 + 0x10))) + (0x48 * r2))) >> 0x1f);
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)(*((u32*)((0xc * *((u32*)(r0 + 0x10))) + (0x48 * r2))) >> 0x1f)), *((u32*)((0xc * *((u32*)(r0 + 0x10))) + (0x48 * r2))), ov07_02235620, ov07_02235628);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x5a << 4);
    *((u16*)(r0 + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_022357D0 + 2)) = *((u32*)((0xc * r0) + ov07_02235624));
    // add r0, r3, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(ov07_022357D0 + 4)) = (*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f);
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)(*((u32*)((0xc * r0) + (0x48 * r2))) >> 0x1f)), *((u32*)((0xc * r0) + (0x48 * r2))), ov07_022357D0, ov07_02235628);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x5a << 4);
    *((u16*)(r0 + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02235B30 + 2)) = *((u32*)((0xc * r0) + ov07_02235B34));
    // add r0, r3, r0
    *((u16*)(ov07_02235B30 + 4)) = *((u32*)((0xc * r0) + (0x48 * r2)));
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)*((u32*)((0xc * r0) + (0x48 * r2)))), (0xc * r0), ov07_02235B30, ov07_02235B38);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x5a << 4);
    *((u16*)(r0 + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02235E90 + 2)) = *((u32*)((0xc * r0) + ov07_02235E94));
    // add r0, r3, r0
    *((u16*)(ov07_02235E90 + 4)) = *((u32*)((0xc * r0) + (0x48 * r2)));
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)*((u32*)((0xc * r0) + (0x48 * r2)))), (0xc * r0), ov07_02235E90, ov07_02235E98);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x5a << 4);
    *((u16*)(r0 + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02235980 + 2)) = *((u32*)((0xc * r0) + ov07_02235984));
    // add r0, r3, r0
    *((u16*)(ov07_02235980 + 4)) = *((u32*)((0xc * r0) + (0x48 * r2)));
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)*((u32*)((0xc * r0) + (0x48 * r2)))), (0xc * r0), ov07_02235980, ov07_02235988);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x5a << 4);
    *((u16*)(r0 + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_02236040 + 2)) = *((u32*)((0xc * r0) + ov07_02236044));
    // add r0, r3, r0
    *((u16*)(ov07_02236040 + 4)) = *((u32*)((0xc * r0) + (0x48 * r2)));
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)*((u32*)((0xc * r0) + (0x48 * r2)))), (0xc * r0), ov07_02236040, ov07_02236048);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x5a << 4);
    *((u16*)(r0 + 4)) = (0x2e << 4);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r2, r2, r0
    // add r2, sp, #0x20
    // strh r3, [r2]
    // add r3, r3, r0
    *((u16*)(ov07_022361F0 + 2)) = *((u32*)((0xc * r0) + ov07_022361F4));
    // add r0, r3, r0
    *((u16*)(ov07_022361F0 + 4)) = *((u32*)((0xc * r0) + (0x48 * r2)));
    // add r3, sp, #0xd8
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, sp, #0x58
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0xc8
    // str r1, [sp, #0xc]
    // add r1, sp, #0xb8
    // mov ip, r0
    // str r1, [sp, #0x1c]
    // add r0, sp, #0xd8
    // add r7, sp, #0xa8
    // add r6, sp, #0x98
    // add r5, sp, #0x88
    // add r1, sp, #0x78
    // add r2, sp, #0x68
    // ldr r3, [sp, #0xc]
    // str r4, [r3]
    // ldr r3, [sp, #0x1c]
    // str r4, [r3]
    // stmia r7!, {r3}
    // stmia r6!, {r3}
    // stmia r5!, {r3}
    // stmia r1!, {r3}
    // stmia r2!, {r3}
    // ldr r3, [sp, #0xc]
    // str r3, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    // str r3, [sp, #0x1c]
    // mov r3, ip
    // mov ip, r3
    // ldr r0, [sp, #4]
    ov07_0221BFC0(*((u32*)(0 + 4)), (0xc * r0), (0xe - 1), (((*((u32*)(0 + 0x60)) + 4) + 4) + 1));
    // str r0, [sp, #8]
    // add r0, sp, #0x58
    // str r0, [sp, #0x10]
    // add r7, sp, #0xc8
    // add r6, sp, #0xb8
    // add r0, sp, #0xa8
    // add r1, sp, #0x98
    // add r2, sp, #0x88
    // add r3, sp, #0x78
    // add r4, sp, #0x68
    // ldr r5, [sp, #0x10]
    // stmia r7!, {r5}
    // stmia r6!, {r5}
    // stmia r0!, {r5}
    // stmia r1!, {r5}
    // stmia r2!, {r5}
    // stmia r3!, {r5}
    // stmia r4!, {r5}
    // ldr r5, [sp, #0x10]
    // str r5, [sp, #0x10]
    // ldr r5, [sp, #8]
    // str r5, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221238: ; jump table
    // ldr r1, [sp, #0xc8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xcc]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xd0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0xd4]
    // ldr r1, [sp, #0xc8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xcc]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xd0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0xc8]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xcc]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xd0]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xb8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xbc]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xc0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // add r0, sp, #0x20
    // ldr r1, [sp, #0x98]
    // strh r1, [r0]
    // ldr r1, [sp, #0x9c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xa0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r1, [sp, #0xa8]
    // strh r1, [r0]
    // ldr r1, [sp, #0xac]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xb0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc4]
    // ldr r1, [sp, #0xb8]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xbc]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xc0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0xb8]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0xbc]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xc0]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0xb4]
    // ldr r0, [sp, #0x88]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x90]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r1, [sp, #0x88]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x90]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x84]
    // ldr r1, [sp, #0x78]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x7c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x80]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x78]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x7c]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x80]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x78]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x7c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x80]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // add r0, sp, #0x20
    // ldr r1, [sp, #0x68]
    // strh r1, [r0]
    // ldr r1, [sp, #0x6c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x70]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r1, [sp, #0x88]
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x90]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc4]
    // ldr r1, [sp, #0x88]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x90]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x88]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x8c]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x90]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0xc4]
    // ldr r1, [sp, #0x98]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x9c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xa0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x98]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x9c]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0xa0]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0xc4]
    // ldr r1, [sp, #0x68]
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x6c]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x70]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // ldr r0, [sp, #0x68]
    // neg r1, r0
    // add r0, sp, #0x20
    // strh r1, [r0]
    // ldr r1, [sp, #0x6c]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = r1;
    // ldr r1, [sp, #0x70]
    // neg r1, r1
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = r1;
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = (0x4b << 4);
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = (0x7d << 2);
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = 0xFFFFF5AC;
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = 0;
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 2)) = (0x7a << 4);
    *((u16*)((*((u16*)(0 + 6)) << 0x10) + 4)) = 0;
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_0223192C(*((u32*)(*((u16*)(0 + 6)) << 0x10)), *((u32*)(0 + 0x24)));
    // add r0, sp, #0x20
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = (0x21 << 6);
    *((u16*)(r0 + 4)) = 0;
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0xFFFFF768;
    *((u16*)(r0 + 4)) = 0;
    // add r3, sp, #0x28
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov07_02231924(*((u32*)r0), *((u32*)(0 + 0x24)), (6 - 1));
    // add r0, sp, #0x28
    // add r0, sp, #0x20
    // strh r1, [r0]
    // add r1, sp, #0x2c
    *((u16*)(r0 + 2)) = *((u32*)(*((u32*)(r0 + (r0 << 3))) + (r0 << 3)));
    *((u16*)(r0 + 4)) = 0;
    // add r1, sp, #0x20
    // ldr r0, [sp]
    // add r0, #0x50
    // strh r2, [r0]
    // ldr r0, [sp]
    // add r0, #0x52
    // strh r2, [r0]
    // ldr r0, [sp]
    // add r0, #0x54
    // str r0, [sp]
    // strh r1, [r0]
}




void ov07_0222150C(void) {
    // and r1, r0
}




void ov07_02221540(void) {
    // bx r3
    // _0222154C: .word ov07_02221EEC
}




void ov07_02221550(void) {
    ov07_02231924(*((u32*)r1), *((u32*)(r1 + 0x24)));
    ov07_02231924(*((u32*)r4), *((u32*)(r4 + 0x28)));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221578: ; jump table
    sub_02015530(*((u32*)(r4 + 4)), (*((u16*)(*((u32*)(r4 + 0xc)) + 6)) << 0x10));
    // add r0, r5, r0
    *((u32*)(r6 + 0x30)) = *((u32*)(*((u32*)*((u32*)(r6 + 0x20))) + 0xc));
}




void ov07_022215B4(void) {
    // str r5, [r4]
    // add r1, #0xc
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022215F2: ; jump table
}




void ov07_02221664(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222168C: ; jump table
}




void ov07_022216A8(void) {
    // add r0, sp, #0x20
    // str r4, [r0]
    // add r1, sp, #0x10
    // add r1, sp, #0
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // ldrsb r0, [r5, r1]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldrsb r2, [r5, r1]
    // str r2, [sp, #0x24]
    // ldrsb r1, [r5, r1]
    // ldr r2, [sp, #0x28]
    // str r1, [sp, #0x28]
    // add r0, r1, r0
    // str r0, [r7]
    // ldr r0, [sp, #0x24]
    // add r0, r1, r0
    // ldr r0, [sp, #0x28]
    // add r0, r1, r0
}




void ov07_02221734(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r1, sp, #0xc
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldrsb r0, [r5, r1]
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // ldrsb r2, [r5, r1]
    // str r2, [sp, #4]
    // ldrsb r1, [r5, r1]
    // ldr r2, [sp, #8]
    // str r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // ldr r0, [sp, #8]
    // add r0, r1, r0
}




void ov07_022217A4(void) {
}




u8 ov07_022217B0(void) {
}




void ov07_022217B4(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #8
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022217F6: ; jump table
    // add r1, sp, #0
    // add r2, sp, #0
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // strh r0, [r2]
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0
    // strh r0, [r2]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // strh r0, [r2]
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // ldrsh r3, [r2, r0]
    // ldrsb r0, [r4, r1]
    // add r1, sp, #0
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    // ldrsh r2, [r1, r0]
    // sub r0, r2, r0
    // add r1, sp, #0
}




u8 ov07_02221898(void) {
}




u8 ov07_0222189C(void) {
}




void ov07_022218A0(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r1, sp, #0xc
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022218E2: ; jump table
    // add r1, sp, #0
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp]
    // str r1, [sp]
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp, #4]
    // str r1, [sp, #4]
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #8]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldrsb r6, [r4, r3]
    // str r6, [sp]
    // ldrsb r2, [r4, r3]
    // str r2, [sp, #4]
    // ldrsb r1, [r4, r3]
    // str r1, [sp, #8]
    // add r2, sp, #0
    // add r2, sp, #0
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov07_02221968(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022219A6: ; jump table
    // add r1, sp, #0
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // strh r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // strh r0, [r1]
    // add r1, sp, #0
}




void ov07_022219EC(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221A2A: ; jump table
    // add r1, sp, #0
    // add r1, sp, #0
    // ldrsb r0, [r4, r0]
    // strh r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsb r0, [r4, r0]
    // strh r0, [r1]
    // add r1, sp, #0
}




void ov07_02221A6C(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221AAA: ; jump table
    // add r1, sp, #0
    // ldr r1, [sp, #0xc]
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #0
}




u8 ov07_02221AD4(void) {
}




u8 ov07_02221AD8(void) {
}




u8 ov07_02221ADC(void) {
}




u8 ov07_02221AE0(void) {
}




void ov07_02221AE4(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r1, sp, #0xc
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221B26: ; jump table
    // add r1, sp, #0
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp]
    // str r1, [sp]
    // ldrsb r1, [r4, r0]
    // ldr r2, [sp, #4]
    // str r1, [sp, #4]
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #8]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldrsb r5, [r4, r3]
    // str r5, [sp]
    // ldrsb r2, [r4, r3]
    // str r2, [sp, #4]
    // ldrsb r1, [r4, r3]
    // str r1, [sp, #8]
    // add r2, sp, #0
    // ldr r1, [sp]
    // ldr r5, [sp, #0x14]
    // ldr r6, [sp, #0x18]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0
    // add r2, sp, #0
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
}




void ov07_02221BF0(void) {
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, sp, #4
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221C2E: ; jump table
    // add r1, sp, #0
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // strh r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r2, [r1, r0]
    // ldrsb r0, [r4, r0]
    // strh r0, [r1]
    // add r1, sp, #0
}




void ov07_02221C74(void) {
    // blx r2
}




void ov07_02221C8C(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, sp, #0
}




void ov07_02221CB4(void) {
    ov07_02221C8C(0);
}




void ov07_02221CE0(void) {
}




u32 ov07_02221CEC(void) {
}




void ov07_02221D10(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov07_02236414 + 0x22));
    *((u16*)(r0 + 4)) = *((u16*)(ov07_02236414 + 0x24));
    *((u16*)(r0 + 6)) = *((u16*)(ov07_02236414 + 0x26));
    sub_02015524(*((u32*)(r1 + 4)), *((u16*)(ov07_02236414 + 0x26)), *((u16*)(ov07_02236414 + 0x24)));
    sub_02015528(*((u32*)(r4 + 4)), 1);
    // add r0, sp, #0
    Camera_SetAnglePos(r5);
}




void ov07_02221D4C(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #8
    // ldr r1, [sp, #0xc]
    // add r0, sp, #0
    // strh r1, [r0]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0
}




void ov07_02221D88(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov07_02236414 + 0x1a));
    *((u16*)(r0 + 4)) = *((u16*)(ov07_02236414 + 0x1c));
    *((u16*)(r0 + 6)) = *((u16*)(ov07_02236414 + 0x1e));
    sub_02015524(*((u32*)(r1 + 4)), *((u16*)(ov07_02236414 + 0x1e)), *((u16*)(ov07_02236414 + 0x1c)));
    sub_02015528(*((u32*)(r4 + 4)), 1);
    // add r0, sp, #0
    Camera_SetAnglePos(r5);
}




void ov07_02221DC4(void) {
    // add r0, sp, #0
    *((u16*)(r0 + 8)) = *((u16*)(ov07_02236414 + 0x10));
    *((u16*)(r0 + 0xa)) = *((u16*)(ov07_02236414 + 0x12));
    *((u16*)(r0 + 0xc)) = *((u16*)(ov07_02236414 + 0x14));
    *((u16*)(r0 + 0xe)) = *((u16*)(ov07_02236414 + 0x16));
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov07_02236414 + 0x2a));
    *((u16*)(r0 + 4)) = *((u16*)(ov07_02236414 + 0x2c));
    *((u16*)(r0 + 6)) = *((u16*)(ov07_02236414 + 0x2e));
    sub_02015524(*((u32*)(r1 + 4)), *((u16*)(ov07_02236414 + 0x2e)), *((u16*)(ov07_02236414 + 0x2c)));
    sub_02015528(*((u32*)(r4 + 4)), 1);
    ov07_0221BFC0(*((u32*)r4));
    // add r0, sp, #8
    Camera_SetAnglePos(r5);
    // add r0, sp, #0
    Camera_SetAnglePos(r5);
}




void ov07_02221E24(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov07_02236414 + 2));
    *((u16*)(r0 + 4)) = *((u16*)(ov07_02236414 + 4));
    *((u16*)(r0 + 6)) = *((u16*)(ov07_02236414 + 6));
    sub_02015524(*((u32*)(r1 + 4)), *((u16*)(ov07_02236414 + 6)), *((u16*)(ov07_02236414 + 4)));
    sub_02015528(*((u32*)(r4 + 4)), 1);
    // add r0, sp, #0
    Camera_SetAnglePos(r5);
}




void ov07_02221E60(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov07_02236414 + 0xa));
    *((u16*)(r0 + 4)) = *((u16*)(ov07_02236414 + 0xc));
    *((u16*)(r0 + 6)) = *((u16*)(ov07_02236414 + 0xe));
    sub_02015524(*((u32*)(r1 + 4)), *((u16*)(ov07_02236414 + 0xe)), *((u16*)(ov07_02236414 + 0xc)));
    sub_02015528(*((u32*)(r4 + 4)), 1);
    // add r0, sp, #0
    Camera_SetAnglePos(r5);
}




u32 ov07_02221E9C(void) {
}




u32 ov07_02221EC4(void) {
}




void ov07_02221EEC(void) {
    // blx r2
}




void ov07_02221F04(void) {
    // add r4, r4, r6
    // ldrsh r4, [r5, r4]
    // strh r4, [r2]
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
    // strh r0, [r3]
}




void ov07_02221F38(void) {
}




void ov07_02221F80(void) {
    ov07_02231924();
    ov07_0221FAB0(r7);
    ov07_0221BFC0(r7);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221FB8: ; jump table
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
    GF_AssertFail(ov07_0223646A, ((r4 + 2) << 2), (r5 * 0x18));
}




void ov07_02221FF0(void) {
}




void ov07_02222004(void) {
}




void ov07_0222202C(void) {
}




void ov07_02222040(void) {
}




void ov07_0222204C(void) {
    // sub r0, r1, r0
    // add r1, sp, #0
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // neg r0, r0
    // str r0, [sp]
    // asr r0, r0, #0xc
}




void ov07_0222207C(void) {
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
}




void ov07_0222209C(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}




void ov07_022220B8(void) {
    // ldrsh r3, [r5, r1]
    // add r2, r2, r3
    // ldrsh r2, [r5, r2]
    // add r2, r6, r2
}




void ov07_022220DC(void) {
    // ldrsh r2, [r5, r2]
    // ldrsh r2, [r5, r2]
}




void ov07_022220FC(void) {
    // ldr r3, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // sub r0, r2, r1
    // add r0, sp, #0
    // ldr r1, [sp, #0x1c]
    // sub r0, r0, r4
}




void ov07_0222212C(void) {
    // str r3, [sp]
    // add r0, sp, #8
    // neg r1, r1
    // add r1, sp, #8
    // ldrsh r6, [r1, r0]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp]
    // ldr r0, [sp, #0x20]
    // add r0, sp, #8
    // ldr r0, [sp]
    // sub r0, r1, r0
}




void ov07_02222180(void) {
    GF_AssertFail();
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0x18));
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 0x1c));
    *((u32*)(r4 + 8)) = ((*((u32*)(r4 + 8)) << 0x10) >> 0x10);
    *((u32*)(r4 + 0x10)) = ((*((u32*)(r4 + 0x10)) << 0x10) >> 0x10);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    // asr r0, r0, #4
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (*((u32*)(r4 + 8)) << 2), *((u32*)(r4 + 0xc)));
    // add r2, r0, r2
    // adc r1, r3
    // asr r0, r1, #0xc
    // strh r0, [r4]
    // asr r0, r0, #4
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (((*((u32*)(r4 + 0x10)) << 1) + 1) << 1), *((u32*)(r4 + 0x14)), 0);
    // add r2, r0, r2
    // adc r1, r3
    // asr r0, r1, #0xc
    *((u16*)(r4 + 2)) = (r1 << 0x14);
}




void ov07_02222218(void) {
}




void ov07_02222240(void) {
}




void ov07_02222268(void) {
    // str r2, [sp]
    // strh r4, [r5]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // add r2, sp, #0x10
    // ldrsh r1, [r2, r1]
    // ldr r0, [sp, #4]
}




void ov07_022222B4(void) {
    // add r0, r1, r0
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // strh r0, [r4]
    // asr r0, r0, #0xc
}




void ov07_022222F0(void) {
}




void ov07_02222314(void) {
}




void ov07_02222338(void) {
    // add r4, sp, #0x10
    // ldrsh r1, [r4, r1]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldrsh r3, [r4, r3]
    ov07_02222268(r2, r3, 0x10);
    // strh r1, [r5]
    *((u16*)(r5 + 2)) = 0;
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov07_022220FC(r5, 0, 0, 0x00003FFF);
}




void ov07_02222384(void) {
    // ldrsh r3, [r5, r2]
    // ldrsh r1, [r4, r2]
    // add r1, r3, r1
    // strh r1, [r5]
    // ldrsh r3, [r5, r1]
    // ldrsh r1, [r4, r1]
    // add r1, r3, r1
}




void ov07_022223CC(void) {
}




void ov07_022223F0(void) {
    // str r6, [r5]
    // asr r0, r0, #0xc
}




void ov07_02222418(void) {
    // str r6, [r5]
}




void ov07_02222440(void) {
    // add r0, r1, r0
    // str r0, [r4]
}




void ov07_02222468(void) {
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [r4]
}




void ov07_02222494(void) {
}




void ov07_022224AC(void) {
    GF_AssertFail();
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = ((*((u32*)(r4 + 0x10)) << 0x10) >> 0x10);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    // asr r0, r0, #4
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (((*((u32*)(r4 + 8)) << 1) + 1) << 1), *((u32*)(r4 + 0xc)));
    // add r2, r0, r2
    // adc r1, r3
    // asr r0, r1, #0xc
    // str r0, [r4]
}




void ov07_02222508(void) {
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x18]
    // asr r0, r0, #0x10
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
}




void ov07_02222558(void) {
    // add r0, r1, r0
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // strh r0, [r4]
    // asr r0, r0, #0xc
}




void ov07_02222590(void) {
    // str r3, [sp]
    // ldr r0, [sp, #0x20]
    // add r1, sp, #8
    // ldrsh r4, [r1, r0]
    // ldr r2, [sp, #0x20]
    // ldr r0, [sp]
    // add r1, sp, #8
    // ldrsh r0, [r1, r0]
    // ldr r2, [sp, #0x20]
    // strh r6, [r5]
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
}




void ov07_0222260C(void) {
    // add r0, r1, r0
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // strh r0, [r4]
    // asr r0, r0, #0xc
}




void ov07_02222644(void) {
    // ldrsh r0, [r5, r0]
    _fflt(0);
    _fdiv(0x43800000);
    // str r0, [r4]
    // ldrsh r0, [r5, r0]
    _fflt(2);
    _fdiv(0x43800000);
    // str r0, [r6]
}




void ov07_02222674(void) {
    // sub r0, r0, r1
    // asr r1, r4, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // sub r0, r4, r0
    // add r1, sp, #0
    // add r0, r0, r1
    // ldr r1, [sp]
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // add r0, r1, r0
    // asr r0, r0, #0x10
}




void ov07_022226C4(void) {
    // ldr r0, [sp, #0x10]
    // mvn r0, r0
    // asr r2, r0, #0x10
    // sub r0, r4, r6
    // asr r4, r0, #0x10
    // add r2, r4, r2
}




void ov07_022226FC(void) {
    // ldr r0, [sp, #0x18]
    // mvn r0, r0
    // asr r4, r0, #0x10
    // sub r0, r5, r7
    // asr r5, r0, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // add r2, r5, r4
    // asr r2, r2, #0x10
}




void ov07_02222748(void) {
}




void ov07_02222768(void) {
}




void ov07_02222788(void) {
}




void ov07_022227A8(void) {
    // ldr r0, [sp, #0x18]
    // neg r0, r6
    // neg r0, r4
    // strh r1, [r5]
}




void ov07_022227D8(void) {
    // ldrsh r0, [r4, r2]
    // strh r2, [r4]
    // neg r0, r1
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // neg r0, r1
}




void ov07_0222283C(void) {
}




void ov07_02222864(void) {
    // str r1, [sp]
    // strh r3, [r7]
    // add r0, sp, #8
    // ldrsh r1, [r0, r1]
    // add r1, #0x94
    // str r2, [r1]
    // add r1, #0xa8
    // strh r2, [r1]
    // add r1, #0xaa
    // strh r6, [r1]
    // add r2, #0xac
    // mov ip, r1
    // strb r1, [r2]
    // add r1, #0xad
    // strb r6, [r1]
    // add r0, #0xae
    // strb r1, [r0]
    // mov r0, ip
    // ldr r4, [sp]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // mov r0, ip
    // add r5, #0x24
    // ldr r1, [sp, #0x28]
    // add r0, #0x98
    // str r1, [r0]
    // ldr r1, [sp, #0x2c]
    // add r0, #0x9c
    // str r1, [r0]
    // ldr r1, [sp, #0x30]
    // add r0, #0xa0
    // str r1, [r0]
    // ldr r1, [sp, #0x34]
    // add r0, #0xa4
    // str r1, [r0]
    // add r0, #0xac
    // add r0, #0x98
    // add r0, #0xac
}




void ov07_02222914(void) {
    // add r2, sp, #0x10
    // stmia r2!, {r1}
    // add r0, #0xa8
    // add r0, #0xaa
    // add r0, #0xad
    // add r0, r5, r0
    // add r0, #0x98
    // add r0, #0xad
    // add r0, #0xad
    // strb r1, [r0]
    // add r0, #0xaa
    // strh r1, [r0]
    // add r0, #0xad
    // add r0, #0xac
    // add r0, #0xaa
    // add r0, #0xaa
    // strh r1, [r0]
    // str r0, [sp]
    // add r0, #0xad
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r1, #0x94
    // blx r1
    // ldr r1, [sp, #4]
    // str r0, [r1]
    // add r0, #0xae
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r6, r2]
    // add r0, #0x98
    // add r1, r1, r2
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r6, r2]
    // add r2, r3, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r0, #0x98
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // add r0, #0x98
    // ldr r0, [sp, #4]
    // add r7, #0x24
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r6, #0x24
    // str r0, [sp]
    // add r0, #0xad
    // ldr r0, [sp]
    // add r5, #0xac
    // add r1, sp, #0x10
}




void ov07_02222A44(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    ov07_022220FC(0, 0x0000FFFF, 0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) * r4);
}




void ov07_02222A7C(void) {
    ov07_022222B4(r1);
    *((u32*)(r4 + 0x24)) = 1;
    SysTask_Destroy(r5);
    // ldrsh r1, [r4, r0]
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 2)) = 0;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // strh r1, [r0]
}




void ov07_02222AC4(void) {
    // add r6, sp, #8
    // ldrsh r5, [r6, r5]
    // str r5, [sp]
    // ldr r5, [sp, #0x1c]
    // str r5, [sp, #4]
    ov07_02222268();
    *((u32*)(r4 + 0x24)) = 0;
    SysTask_CreateOnMainQueue(ov07_02222A7C, r4, 0);
}




void ov07_02222AF4(void) {
}




void ov07_02222AF8(void) {
}




void ov07_02222B14(void) {
    // blx r1
}




void ov07_02222B30(void) {
    GF_AssertFail();
    *((u32*)(r5 + 8)) = 1;
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r5 + 0x18)) = r4;
    *((u32*)(r5 + 0x10)) = r6;
    *((u32*)(r5 + 0x14)) = r7;
    SysTask_CreateOnVWaitQueue(ov07_02222AF8, r5, 0);
    *((u32*)(r5 + 4)) = r0;
    SysTask_CreateOnVBlankQueue(ov07_02222B14, r5, 0);
    // str r0, [r5]
}




void ov07_02222B70(void) {
}




void ov07_02222B94(void) {
}




void ov07_02222BA4(void) {
    // ldr r1, [r4, r1]
}




void ov07_02222BC8(void) {
}




void ov07_02222BDC(void) {
}




void ov07_02222BE4(void) {
    Heap_Alloc(r2, 0x00000624);
    memset(0, 0x00000624);
    GF_AssertFail();
    // add r1, #0x20
    // add r2, r4, r2
    sub_02014A08(r7, r4, (0x32 << 4));
    *((u32*)(r4 + 0x1c)) = r0;
    GF_AssertFail();
    // str r5, [r4, r0]
    // add r1, #0x20
    MIi_CpuClear32(r6, r4, (3 << 8));
    // add r1, r4, r2
    // sub r2, #0x20
    MIi_CpuClear32(r6, (0x32 << 4));
    ov07_02222B30(r4, r4, ov07_02222BC8, ov07_02222BDC);
}




void ov07_02222C60(void) {
}




void ov07_02222C84(void) {
}




void ov07_02222C98(void) {
}




void ov07_02222CAC(void) {
}




void ov07_02222CC0(void) {
}




void ov07_02222CCC(void) {
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x40]
    // str r2, [sp, #0x18]
    Heap_Alloc(0x20);
    GF_AssertFail();
    memset(r4, 0, 0x20);
    // ldr r0, [sp, #0x34]
    ov07_02222D90();
    // ldr r0, [sp, #0x40]
    sub_02014AD8();
    *((u32*)(r4 + 0x1c)) = r0;
    // str r5, [sp]
    // add r1, sp, #0x20
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    sub_02014B08(*((u32*)(r4 + 0x1c)), r7);
    ov07_02222B30(r4, r4, ov07_02222CAC, ov07_02222CC0);
}




void ov07_02222D3C(void) {
}




void ov07_02222D60(void) {
}




void ov07_02222D74(void) {
}




void ov07_02222D88(void) {
    // orr r0, r1
}




void ov07_02222D90(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02222DA0: ; jump table
}




void ov07_02222DC8(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    // asr r2, r0, #1
    // ldr r0, [sp]
    // add r1, r1, r3
    // strh r2, [r0]
    // add r0, r1, r0
    // asr r1, r0, #1
    // ldr r0, [sp, #4]
    // strh r1, [r0]
}




void ov07_02222DE4(void) {
    // sub r1, r1, r3
    // neg r1, r1
    // sub r0, r0, r2
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // add r0, r2, r1
    // ldr r1, [sp, #8]
    // str r0, [r1]
}




void ov07_02222E0C(void) {
    // sub r0, r1, r3
    // neg r0, r0
    // sub r1, r6, r2
    // asr r4, r0, #0x10
    // ldr r5, [sp, #0x10]
    // asr r1, r1, #4
    FX_Atan2Idx((r4 << 0xc), (r1 << 0x10));
    // strh r0, [r5]
    // sub r1, r1, r0
    // strh r0, [r5]
}




void ov07_02222E48(void) {
    // add r2, r3, r2
    // str r2, [r0]
    // str r1, [r0]
    // add r2, r3, r2
    // str r2, [r0]
    // str r1, [r0]
}




void ov07_02222E74(void) {
    // ldrsb r1, [r4, r0]
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [r4]
    // ldrsb r2, [r4, r0]
    // add r1, r1, r2
    // asr r0, r0, #0x18
}




void ov07_02222EE8(void) {
}




void ov07_02222EF8(void) {
}




void ov07_02222F10(void) {
    Heap_Alloc(r1, 0x1c);
    GF_AssertFail();
    *((u32*)(r4 + 0x18)) = r5;
    *((u32*)(r4 + 8)) = r6;
    *((u16*)(r4 + 0xc)) = r7;
    // add r1, sp, #8
    *((u16*)(r4 + 0xe)) = *((u16*)(r1 + 0x10));
    *((u16*)(r4 + 0x10)) = *((u16*)(r1 + 0x24));
    // add r0, sp, #0x28
    *((u8*)(r4 + 0x12)) = *((u8*)(r1 + 0x1c));
    *((u8*)(r4 + 0x13)) = *((u8*)*((u16*)(r1 + 0x24)));
    *((u8*)(r4 + 0x14)) = *((u8*)(r1 + 0x1c));
    // ldrsb r0, [r1, r0]
    *((u8*)(r4 + 0x16)) = 0x14;
    *((u8*)(r4 + 0x17)) = 0x14;
    // ldrsb r0, [r1, r0]
    // ldrsb r0, [r1, r0]
    // neg r0, r0
    *((u8*)(r4 + 0x15)) = 0x18;
    // str r0, [r4]
    // ldr r2, [sp, #0x30]
    SysTask_CreateOnMainQueue(ov07_02222E74, r4, *((u8*)(r4 + 0x12)));
    *((u32*)(r4 + 4)) = r0;
}




void ov07_02222F7C(void) {
    // asr r4, r6, #0xa
    // and r4, r3
    // and r3, r6
    // asr r6, r6, #5
    // and r3, r6
    // add r3, r4, r6
    // add r3, r5, r3
    // asr r5, r3, #8
    // strh r3, [r0]
}




void ov07_02222FC4(void) {
}




void ov07_02222FF4(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
}




void ov07_02223038(void) {
    // cmp r0, #0x54
    // blo _02223040
    // ldr r0, [r0, r1]
    // _02223048: .word ov07_02236520
}




void ov07_0222304C(void) {
    // cmp r0, #0x21
    // blo _02223054
    // ldr r0, [r0, r1]
    // _0222305C: .word ov07_0223649C
}




void ov07_02223060(void) {
}




void ov07_02223064(void) {
    // strb r0, [r4]
}




void ov07_0222308C(void) {
    Heap_Alloc(5, 8);
    // strb r0, [r2]
    *((u32*)(r0 + 4)) = r4;
    ov07_0221C3F4(r4, ov07_02223064, r0, (1 << 0xc));
}




void ov07_022230B4(void) {
    // strb r0, [r4]
}




void ov07_022230DC(void) {
    Heap_Alloc(5, 8);
    // strb r0, [r2]
    *((u32*)(r0 + 4)) = r4;
    ov07_0221C42C(r4, ov07_022230B4, r0, (1 << 0xc));
}




void ov07_02223104(void) {
    // strb r0, [r4]
}




void ov07_02223128(void) {
    Heap_Alloc(5, 8);
    // strb r0, [r1]
    *((u32*)(r0 + 4)) = r4;
    SysTask_CreateOnMainQueue(ov07_02223104, r0, (1 << 0xc));
}




void ov07_0222314C(void) {
    // mvn r1, r1
}




void ov07_022231BC(void) {
    // str r0, [sp]
    Heap_Alloc(5, (0x73 << 2));
    GF_AssertFail();
    // strb r0, [r4]
    *((u32*)(r4 + 8)) = r6;
    *((u32*)(r4 + 0xc)) = r7;
    // ldr r0, [sp]
    *((u32*)(r4 + 0x10)) = r5;
    *((u32*)(r4 + 4)) = 0;
    // ldr r1, [sp]
    // add r0, sp, #4
    ov07_0221F9E8(0);
    *((u32*)(r4 + 0x14)) = r5;
    // add r7, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), r7);
    *((u32*)(r5 + 0x14)) = r0;
    // ldr r0, [sp]
    ov07_0221C3F4(ov07_0222314C, r4, (1 << 0xc));
}




void ov07_02223224(void) {
}




void ov07_02223240(void) {
    // ldrsh r0, [r5, r0]
    // str r0, [sp]
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x7c
    // add r0, #0x7c
    // and r0, r1
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r4, r3]
    // add r2, r2, r3
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r4, r7]
    // add r2, r3, r2
    // add r4, #0x14
    // and r2, r0
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r4, r2]
    // add r1, r1, r2
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r4, r7]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    // add r4, #0x14
    // and r1, r0
    // ldrsh r3, [r5, r3]
}




void ov07_02223350(void) {
    ov07_022324D8(0xa0);
    ov07_02231FE4(r5, (r0 + 4));
    ov07_0221C4A8(r5, 0);
    *((u16*)(r4 + 0x20)) = r0;
    ov07_0221C4A8(r5, 1);
    *((u16*)(r4 + 0x22)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u16*)(r4 + 0x24)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u16*)(r4 + 0x26)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u32*)(r4 + 0x28)) = r0;
    // and r0, r2
    // add r2, #0x2c
    ov07_02232020(r5, r0, r4, r4);
    // and r3, r0
    // add r2, #0x2c
    ov07_022323FC(r5, r4, r4);
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_02223240, r4);
}




void ov07_022233D8(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022233F0: ; jump table
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x39, *((u16*)(r1 + 0x16)));
    ToggleBgLayer(2, 1);
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    *((u16*)(r4 + 0x16)) = (*((u16*)(r4 + 0x16)) + 2);
    *((u16*)(r4 + 0x18)) = (*((u16*)(r4 + 0x18)) - 2);
    *((u16*)(r4 + 0x16)) = *((u16*)(r4 + 8));
    *((u16*)(r4 + 0x18)) = 7;
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    // strh r1, [r0]
    *((u8*)(r4 + 0x1c)) = (0x04000052 + 1);
    *((u16*)(r4 + 0x16)) = (*((u16*)(r4 + 0x16)) - 2);
    *((u16*)(r4 + 0x18)) = (*((u16*)(r4 + 0x18)) + 2);
    *((u16*)(r4 + 0x16)) = 0;
    *((u16*)(r4 + 0x18)) = 0x1f;
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    // strh r1, [r0]
    ToggleBgLayer(2, 0, *((u16*)(r4 + 0x16)));
    ov07_0221C448(*((u32*)(r4 + 0x20)), r5);
    Heap_Free(r4);
    // ldrsh r3, [r4, r1]
    // ldrsh r2, [r4, r0]
    // ldrsh r1, [r4, r0]
    *((u32*)(r4 + 4)) = 1;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r4 + 0xa)) = 0xe;
    // ldrsh r2, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r1, r2, r1
    *((u16*)(r4 + 0xc)) = 0x10;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x10)) = 0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0xe)) = 0;
    *((u16*)(r4 + 0x14)) = 0;
    *((u16*)(r4 + 0x14)) = (*((u16*)(r4 + 0x14)) + 1);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 0, 0xa);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 3, 0xc);
}




void ov07_02223550(void) {
    ov07_022324D8(0xb8);
    // add r1, #0x1c
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 1);
    *((u16*)(r4 + 0xa)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u16*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u16*)(r4 + 0xe)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u16*)(r4 + 0x10)) = r0;
    ov07_0221C4A8(r5, 5);
    // str r0, [r4]
    ov07_0221C4A8(r5, 6);
    *((u16*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 7);
    *((u16*)(r4 + 0x12)) = r0;
    *((u16*)(r4 + 0x14)) = 0;
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    // ldrsh r1, [r4, r0]
    // sub r0, #0xb
    *((u16*)(r4 + 0xa)) = (0xa * r1);
    // ldrsh r2, [r4, r1]
    // sub r0, #0xd
    *((u16*)(r4 + 0xc)) = (0xc * r2);
    // ldrsh r2, [r4, r0]
    // sub r0, #0xf
    *((u16*)(r4 + 0xe)) = (0xe * r2);
    // ldrsh r2, [r4, r0]
    // sub r0, #0x11
    *((u16*)(r4 + 0x10)) = (0x10 * r2);
    // ldrsh r0, [r4, r1]
    // sub r0, #0x54
    *((u16*)(r4 + 0xc)) = (0x10 * r2);
    // ldrsh r0, [r4, r0]
    // add r0, #0x54
    *((u16*)(r4 + 0xc)) = 0xc;
    *((u16*)(r4 + 0x16)) = 0;
    *((u16*)(r4 + 0x18)) = 0x1f;
    *((u32*)(r4 + 4)) = 0;
    ToggleBgLayer(2, 0);
    ov07_0221C4A8(r5, 0);
    ov07_0221FB7C(0);
    ov07_0221BFD0(r5);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(7, r6, *((u32*)(r4 + 0x30)), 2);
    ov07_0221FB7C(r7, 1);
    ov07_0221BFD0(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r4 + 0x34)), 7, r6, r0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x30)), 2);
    ov07_0221BFC0(r5);
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    ov07_0221FB7C(r7, 3);
    ov07_0221BFD0(r5);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(7, r6, *((u32*)(r4 + 0x30)), 2);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 0, 0xa);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 3, 0xc);
    ov07_0221C410(*((u32*)(r4 + 0x20)), ov07_022233D8, r4);
}




void ov07_022236F0(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02223708: ; jump table
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x39, *((u16*)(r1 + 0x16)));
    ToggleBgLayer(2, 1);
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    *((u16*)(r4 + 0x16)) = (*((u16*)(r4 + 0x16)) + 2);
    *((u16*)(r4 + 0x18)) = (*((u16*)(r4 + 0x18)) - 2);
    *((u16*)(r4 + 0x16)) = 0x10;
    *((u16*)(r4 + 0x18)) = 4;
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    // strh r1, [r0]
    *((u8*)(r4 + 0x1c)) = (0x04000052 + 1);
    *((u16*)(r4 + 0x16)) = (*((u16*)(r4 + 0x16)) - 2);
    *((u16*)(r4 + 0x18)) = (*((u16*)(r4 + 0x18)) + 2);
    *((u16*)(r4 + 0x16)) = 0;
    *((u16*)(r4 + 0x18)) = 0x1f;
    *((u8*)(r4 + 0x1c)) = (*((u8*)(r4 + 0x1c)) + 1);
    // strh r1, [r0]
    ToggleBgLayer(2, 0);
    ov07_0221C448(*((u32*)(r4 + 0x20)), r5);
    Heap_Free(r4);
    // ldrsh r3, [r4, r1]
    // ldrsh r2, [r4, r0]
    // ldrsh r1, [r4, r0]
    *((u32*)(r4 + 4)) = 1;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r4 + 0xa)) = 0xe;
    // ldrsh r2, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r1, r2, r1
    *((u16*)(r4 + 0xc)) = 0x10;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x10)) = 0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0xe)) = 0;
    *((u16*)(r4 + 0x14)) = 0;
    *((u16*)(r4 + 0x14)) = (*((u16*)(r4 + 0x14)) + 1);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 0, 0xa);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 3, 0xc);
}




void ov07_02223864(void) {
    ov07_022324D8(0xb8);
    // add r1, #0x1c
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 1);
    *((u16*)(r4 + 0xa)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u16*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u16*)(r4 + 0xe)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u16*)(r4 + 0x10)) = r0;
    ov07_0221C4A8(r5, 5);
    // str r0, [r4]
    ov07_0221C4A8(r5, 6);
    *((u16*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 7);
    *((u16*)(r4 + 0x12)) = r0;
    *((u16*)(r4 + 0x14)) = 0;
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    // ldrsh r1, [r4, r0]
    // sub r0, #0xb
    *((u16*)(r4 + 0xa)) = (0xa * r1);
    // ldrsh r2, [r4, r1]
    // sub r0, #0xd
    *((u16*)(r4 + 0xc)) = (0xc * r2);
    // ldrsh r2, [r4, r0]
    // sub r0, #0xf
    *((u16*)(r4 + 0xe)) = (0xe * r2);
    // ldrsh r2, [r4, r0]
    // sub r0, #0x11
    *((u16*)(r4 + 0x10)) = (0x10 * r2);
    // ldrsh r0, [r4, r1]
    // sub r0, #0x54
    *((u16*)(r4 + 0xc)) = (0x10 * r2);
    // ldrsh r0, [r4, r0]
    // add r0, #0x54
    *((u16*)(r4 + 0xc)) = 0xc;
    ov07_0221BFC0(r5, 0xc);
    // ldrsh r1, [r4, r0]
    // sub r0, #0xf
    *((u16*)(r4 + 0xe)) = (0xe * r1);
    *((u16*)(r4 + 0x16)) = 4;
    *((u16*)(r4 + 0x18)) = 0x10;
    *((u16*)(r4 + 0x16)) = 0;
    *((u16*)(r4 + 0x18)) = 0x10;
    *((u32*)(r4 + 4)) = 0;
    ToggleBgLayer(2, 0);
    ov07_0221C4A8(r5, 0);
    ov07_0221FB7C(0);
    ov07_0221BFD0(r5);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(7, r6, *((u32*)(r4 + 0x30)), 2);
    ov07_0221FB7C(r7, 1);
    ov07_0221BFD0(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r4 + 0x34)), 7, r6, r0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x30)), 2);
    ov07_0221BFC0(r5);
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    ov07_0221FB7C(r7, 3);
    ov07_0221BFD0(r5);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(7, r6, *((u32*)(r4 + 0x30)), 2);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 0, 0xa);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x30)), 2, 3, 0xc);
    ov07_0221C410(*((u32*)(r4 + 0x20)), ov07_022236F0, r4);
}




void ov07_02223A1C(void) {
    // add r0, #0xc
    // add r0, #0xc
    // strb r0, [r4]
}




void ov07_02223A94(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x2c);
    // strb r0, [r4]
    *((u32*)(r0 + 4)) = r5;
    ov07_0221C4A8(r5, 2);
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C4A8(r5, 0);
    *((u32*)(r4 + 0x20)) = r0;
    ov07_0221C4A8(r5, 3);
    ov07_0221C470(*((u32*)(r4 + 4)));
    // str r0, [sp]
    ov07_0221C468(*((u32*)(r4 + 4)));
    // str r0, [sp]
    ov07_0221C4A8(r5, 1);
    // add r0, #0xc
    ov07_022223F0(r4, *((u32*)(r4 + 0x20)), r0, *((u32*)(r4 + 0x24)));
    // ldr r1, [sp]
    ov07_02222004(r5);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) * r0);
    // mvn r0, r0
    // ldr r1, [sp]
    ov07_0221FA48(*((u32*)(r4 + 4)), (*((u32*)(r4 + 0x14)) * r0));
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 3);
    ov07_0221C4A8(r5, 4);
    *((u16*)(r4 + 0x28)) = r0;
    ov07_0221C4A8(r5, 5);
    *((u16*)(r4 + 0x28)) = (r6 * 0x28);
    *((u16*)(r4 + 0x2a)) = 0x28;
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xa, 0x28);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xb, 0x2a);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02223A1C, r4);
}




void ov07_02223B70(void) {
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // sub r2, #8
}




void ov07_02223BC0(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x30);
    // str r5, [r4]
    ov07_0221C4A8(r5, 0);
    ov07_0221C4A8(r5, 1);
    ov07_02222A44((r4 + 4), r6, r0);
    ov07_0221C4A8(r5, 2);
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x28)) = r0;
    // mvn r0, r0
    *((u32*)(r4 + 0x10)) = (0 * *((u32*)(r4 + 0x10)));
    ov07_0221C468(*((u32*)r4), *((u32*)(r4 + 0x10)));
    ov07_0223197C(*((u32*)r4), r0);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x28)) = r0;
    // mvn r0, r0
    *((u32*)(r4 + 0x10)) = (0 * *((u32*)(r4 + 0x10)));
    ov07_0221C470(r5, *((u32*)(r4 + 0x10)));
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C470(*((u32*)r4));
    ov07_0223197C(*((u32*)r4), r0);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x28)) = r0;
    GF_AssertFail();
    Pokepic_GetAttr(*((u32*)(r4 + 0x28)), 0);
    *((u16*)(r4 + 0x2c)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x28)), 1);
    *((u16*)(r4 + 0x2e)) = r0;
    // ldrsh r0, [r4, r0]
    // add r0, #8
    *((u16*)(r4 + 0x2e)) = 0x2e;
    ov07_0221C410(*((u32*)r4), ov07_02223B70, r4);
}




void ov07_02223CAC(void) {
    // add r5, #0x18
    // str r0, [sp]
}




void ov07_02223CE4(void) {
    // add r0, #0x18
    // add r4, #0x18
    // str r0, [sp]
}




void ov07_02223D28(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02223D40: ; jump table
    // ldrsh r3, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r1, r3, r1
    // sub r2, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bpl _02223DC0
    // ldrsh r3, [r4, r1]
    // ldrsh r2, [r4, r2]
    // sub r1, r3, r1
    // sub r2, #0x18
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}




void ov07_02223DC4(void) {
}




void ov07_02223E08(void) {
    // str r2, [sp]
    ov07_022324D8(0x50);
    // str r5, [r4]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 0x14)) = r6;
    ManagedSprite_SetDrawPriority(r6, 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x14)), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x14)), 2);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    *((u32*)(r4 + 0x44)) = 4;
    ov07_0221C468(*((u32*)r4));
    ov07_02222004(*((u32*)r4), r0);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C470(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    Pokepic_GetAttr(0);
    // add r1, #0x4c
    // strh r0, [r1]
    Pokepic_GetAttr(r5, 1);
    // add r1, #0x4e
    // strh r0, [r1]
    ov07_0221C410(*((u32*)r4), ov07_02223DC4, r4);
}




void ov07_02223E94(void) {
}




void ov07_02223EB4(void) {
    ov07_022324D8(8);
    // str r5, [r6]
    ov07_0221FA78(r5);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221C4A8(r5, 0);
    ov07_0221E6C8(r5);
    GF_AssertFail((r0 << 0x10));
    ov07_0221C4A8(r5, 1);
    ov07_0221C4A8(r5, 2);
    // str r0, [sp, #0xc]
    ov07_0221C4A8(r5, 3);
    // str r0, [sp, #0x10]
    ov07_0221C4A8(r5, 4);
    // ldr r1, [sp, #0xc]
    // str r1, [sp]
    // ldr r1, [sp, #0x10]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // asr r3, r3, #0x18
    PaletteData_BeginPaletteFade(*((u32*)(r6 + 4)), 1, r4, (r7 << 0x18));
    ov07_0221C410(*((u32*)r6), ov07_02223E94, r6);
}




void ov07_02223F5C(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02223F74: ; jump table
    // str r0, [sp]
    // str r0, [sp]
}




void ov07_02224008(void) {
    ov07_022324D8(0x20);
    // str r4, [r6]
    *((u32*)(r0 + 4)) = 0;
    ov07_0221C4A8(r4, 0);
    // add r2, #0xe
    ov07_0221C468(r4, (0x00000802 + 2), 0x00000802);
    ov07_0221FA48(*((u32*)r6), r0);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221FAB0(r4);
    ov07_0221C468(*((u32*)r6));
    ov07_0223197C(*((u32*)r6), r0);
    ov07_0221FA48(*((u32*)r6), r0);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221C470(r4);
    ov07_0221FA48(*((u32*)r6), r0);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221FAB0(r4);
    ov07_0221C470(*((u32*)r6));
    ov07_0223197C(*((u32*)r6), r0);
    ov07_0221FA48(*((u32*)r6), r0);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221FA04(r4, 0);
    ov07_0221FA48(*((u32*)r6), 0);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221FA04(r4, 0);
    ov07_0221FA48(*((u32*)r6), 0);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221FA04(r4, 0);
    ov07_0221FA48(*((u32*)r6), 0);
    *((u32*)(r6 + 4)) = r0;
    ov07_0221FA04(r4, 0);
    ov07_0221FA48(*((u32*)r6), 0);
    *((u32*)(r6 + 4)) = r0;
    GF_AssertFail();
    Heap_Free(r6);
    ov07_0221C4A8(r4, 1);
    *((u32*)(r6 + 0x10)) = r0;
    ov07_0221C4A8(r4, 2);
    *((u32*)(r6 + 0xc)) = r0;
    ov07_0221C4A8(r4, 3);
    *((u32*)(r6 + 0x14)) = r0;
    ov07_0221C4A8(r4, 4);
    *((u32*)(r6 + 0x18)) = r0;
    ov07_0221C4A8(r4, 5);
    *((u32*)(r6 + 0x1c)) = r0;
    ov07_0221C410(*((u32*)r6), ov07_02223F5C, r6);
}




void ov07_022241D8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022241F4: ; jump table
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, #0x14
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x14
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
}




void ov07_02224348(void) {
    ov07_022324D8(0x54);
    // str r5, [r4]
    ov07_0221C514(r5);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C4A8(r5, 0);
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    ov07_0221C468(*((u32*)r4));
    ov07_0221FAA0(*((u32*)r4), r0);
    ov07_0221C470(*((u32*)r4));
    ov07_0221FA48(*((u32*)r4), r0);
    ov07_0221C470(*((u32*)r4));
    ov07_0221FAA0(*((u32*)r4), r0);
    *((u16*)(r4 + 0xe)) = r0;
    Pokepic_GetAttr(r6, 1);
    *((u16*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(r6, 0x29);
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    *((u16*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(r5, 1);
    *((u32*)(r4 + 0x38)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u32*)(r4 + 0x40)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u32*)(r4 + 0x44)) = r0;
    ov07_0221C4A8(r5, 5);
    *((u32*)(r4 + 0x48)) = r0;
    ov07_0221C4A8(r5, 6);
    *((u32*)(r4 + 0x4c)) = r0;
    ov07_0221C4A8(r5, 7);
    ov07_0221C4E8(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    ManagedSprite_SetDrawPriority(0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x10)), 2);
    // sub r2, r2, r1
    ov07_02231E08(*((u32*)r4), *((u32*)(r4 + 0x38)), 0x10);
    ov07_0221C410(*((u32*)r4), ov07_022241D8, r4);
    ov07_0221C4A8(r5, 0);
    ov07_0221FB78(*((u32*)r4), 0);
    *((u32*)(r4 + 0x50)) = 1;
}




void ov07_0222446C(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02224488: ; jump table
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x10
    // add r0, #0x10
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x10
    // add r0, #0x10
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
}




void ov07_022245BC(void) {
    ov07_022324D8(0x54);
    // str r5, [r4]
    ov07_0221C4A8(r5, 0);
    // add r2, #8
    // add r2, #0xe
    ov07_0221C468(*((u32*)r4), ((0x42 << 2) + 2), (0x42 << 2));
    ov07_0221FAA0(*((u32*)r4), r0);
    *((u16*)(r4 + 0xa)) = r0;
    ov07_0221C4A8(r5, 0);
    // add r2, sp, #4
    // add r3, sp, #0
    ov07_02232020(*((u32*)r4), r0);
    // ldr r0, [sp, #0xc]
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221C470(*((u32*)r4));
    ov07_0221FAA0(*((u32*)r4), r0);
    *((u16*)(r4 + 0xa)) = r0;
    ov07_0221C4A8(r5, 0);
    // add r2, sp, #4
    // add r3, sp, #0
    ov07_02232020(*((u32*)r4), r0);
    // ldr r0, [sp, #0xc]
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221FA04(r5, 0);
    ov07_0221FA48(*((u32*)r4), 0);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221FA04(r5, 0);
    ov07_0221FA48(*((u32*)r4), 0);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221FA04(r5, 0);
    ov07_0221FA48(*((u32*)r4), 0);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221FA04(r5, 0);
    ov07_0221FA48(*((u32*)r4), 0);
    *((u32*)(r4 + 0xc)) = r0;
    Heap_Free(r4);
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 8)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 0x29);
    *((u16*)(r4 + 0xa)) = r0;
    // ldrsh r0, [r4, r0]
    // add r0, #0x10
    *((u16*)(r4 + 0xa)) = 0xa;
    ov07_0221C4A8(r5, 1);
    *((u32*)(r4 + 0x34)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u32*)(r4 + 0x38)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u32*)(r4 + 0x40)) = r0;
    ov07_0221C4A8(r5, 5);
    *((u32*)(r4 + 0x44)) = r0;
    ov07_0221C4A8(r5, 6);
    *((u32*)(r4 + 0x48)) = r0;
    ov07_0221C4A8(r5, 7);
    *((u32*)(r4 + 0x4c)) = r0;
    ov07_0221C4A8(r5, 6);
    *((u32*)(r4 + 0x48)) = ((r0 << 0x10) >> 0x10);
    ov07_0221C4A8(r5, 6);
    // asr r0, r0, #0x10
    *((u32*)(r4 + 0x50)) = r0;
    ov07_0221C410(*((u32*)r4), ov07_0222446C, r4);
    ov07_0222446C(r4);
}




void ov07_022247C8(void) {
    // add r0, #8
}




void ov07_022247F4(void) {
    ov07_022324D8(0x30);
    // str r7, [r4]
    ov07_0221C514(r7);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C4A8(r7, 0);
    // lsl r0, r5
    // tst r0, r6
    ov07_0221C4E8(*((u32*)r4), 0);
    ManagedSprite_SetOamMode(1);
    ov07_0221C4A8(r7, 1);
    ov07_0221C4A8(r7, 3);
    // str r0, [sp, #8]
    // ldr r2, [sp, #8]
    ov07_02231E08(*((u32*)r4), r5);
    ov07_0221C4A8(r7, 2);
    ov07_0221C4A8(r7, 4);
    // str r0, [sp, #0xc]
    ov07_0221C4A8(r7, 5);
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #8]
    // asr r1, r1, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222AC4(r4, (r5 << 0x10), (r6 << 0x10), (r3 << 0x10));
    ov07_0221C410(*((u32*)r4), ov07_022247C8, r4);
}




void ov07_022248A0(void) {
    // add r2, sp, #4
    // add r3, sp, #0
    // ldr r0, [sp]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
}




void ov07_022248F4(void) {
    // eor r2, r3
    // str r0, [r4]
}




void ov07_02224948(void) {
    ov07_022324D8(0x40);
    *((u32*)(r0 + 0x3c)) = r5;
    ov07_0221C4A8(r5, 0);
    // str r0, [r4]
    ov07_0221C4A8(r5, 1);
    *((u32*)(r4 + 8)) = r0;
    // add r1, #0x20
    ov07_02231FE4(r5, r4);
    ov07_0221C468(r5);
    ov07_0221FA48(r5, r0);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C410(*((u32*)(r4 + 0x3c)), ov07_022248F4, r4);
}




void ov07_02224998(void) {
    // add r0, #0x24
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x40
    // add r2, r1, r2
    // asr r2, r2, #0x10
    // add r0, #0x24
    // add r4, #0x24
    // strb r0, [r4]
    // add r0, #0x40
    // add r0, #0x24
    // add r0, #0x24
    // strb r1, [r0]
    // ldrsh r2, [r4, r2]
}




void ov07_02224A20(void) {
    ov07_022324D8(0x68);
    *((u32*)(r0 + 0x64)) = r5;
    ov07_0221C4A8(r5, 0);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 1);
    *((u16*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(r5, 2);
    // add r1, #9
    // add r1, #9
    // add r1, #0x11
    ov07_0221C468(r5, 0xff);
    ov07_0221FAB0(r5);
    ov07_0221C468(r5);
    ov07_0223197C(r5, r0);
    ov07_0221C470(r5);
    ov07_0221FAB0(r5);
    ov07_0221C470(r5);
    ov07_0223197C(r5, r0);
    GF_AssertFail();
    Heap_Free(r4);
    // add r1, #0x24
    ov07_02231FE4(r5, r4);
    ov07_0221FA48(r5, r6);
    // add r1, #0x14
    *((u32*)(r4 + 0x18)) = r0;
    ov07_02231FA0(r4);
    ov07_02222004(r5, r6);
    // ldrsh r1, [r4, r0]
    // sub r0, #0xd
    *((u16*)(r4 + 0xc)) = (0xc * r1);
    ov07_0221C410(*((u32*)(r4 + 0x64)), ov07_02224998, r4);
}




void ov07_02224B14(void) {
    // add r0, #0x20
    // add r4, #0x20
    // strb r0, [r4]
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x3c
    // add r2, r1, r2
    // asr r2, r2, #0x10
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x3c
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    // ldrsh r2, [r4, r2]
}




void ov07_02224BAC(void) {
    ov07_022324D8(0x68);
    *((u32*)(r0 + 0x60)) = r5;
    ov07_0221C4A8(r5, 0);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 1);
    // add r1, #0x64
    // strh r0, [r1]
    ov07_0221C4A8(r5, 2);
    // add r1, #0x20
    ov07_02231FE4(r5, r4);
    // add r0, #9
    // add r0, #9
    // add r0, #0x11
    ov07_0221C468(r5);
    ov07_0221FAB0(r5);
    ov07_0221C468(r5);
    ov07_0223197C(r5, r0);
    ov07_0221C470(r5);
    ov07_0221FAB0(r5);
    ov07_0221C470(r5);
    ov07_0223197C(r5, r0);
    GF_AssertFail();
    Heap_Free(r4);
    ov07_0221FA48(r5, r6);
    // add r1, #0x10
    *((u32*)(r4 + 0x14)) = r0;
    ov07_02231FA0(r4);
    ov07_02222004(r5, r6);
    // ldrsh r1, [r4, r0]
    // sub r0, #0x65
    // add r0, #0x64
    // strh r2, [r0]
    ov07_0221BFC0(r5, (r1 * 0x64));
    ov07_0221C410(*((u32*)(r4 + 0x60)), ov07_02224B14, r4);
    ov07_02224B14(r4);
}




void ov07_02224CB8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224CD4: ; jump table
    // add r0, #0x14
    // add r0, #0x38
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // strb r0, [r4]
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // strb r0, [r4]
    // add r0, #0x14
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // strb r0, [r4]
    // add r0, #0x14
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // add r2, #0xf4
    // add r2, #0xf3
    // ldrsh r2, [r4, r2]
    // strb r0, [r4]
}




void ov07_02224E58(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x5c);
    *((u8*)(r0 + 8)) = 0;
    // strb r0, [r4]
    *((u32*)(r0 + 0xc)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 0xc)), r0);
    *((u32*)(r4 + 0x10)) = r0;
    *((u8*)(r4 + 9)) = 0;
    ov07_0221C4A8(r5, 4);
    *((u8*)(r4 + 0xa)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    *((u16*)(r4 + 2)) = r0;
    ov07_0221C468(*((u32*)(r4 + 0xc)));
    ov07_0221FAA0(*((u32*)(r4 + 0xc)), r0);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C4A8(r5, 0);
    ov07_0221C4A8(r5, 2);
    // str r0, [sp]
    // add r0, #0x14
    // asr r3, r3, #0x10
    ov07_02222508(r4, 0x64, 0x64, (r6 << 0x10));
    // str r0, [sp]
    // add r0, #0x38
    ov07_022227A8(r4, 2, 0, 0);
    ov07_0221C410(*((u32*)(r4 + 0xc)), ov07_02224CB8, r4);
}




void ov07_02224EF4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224F10: ; jump table
    // add r0, #0x20
    // add r0, #0x44
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // strb r0, [r4]
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r1, r2, #0x10
    // str r0, [sp, #4]
    // asr r3, r3, #0x10
    // str r0, [sp, #8]
    // add r0, #0x20
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // strb r0, [r4]
    // add r0, #0x20
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // strb r0, [r4]
    // add r0, #0x20
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // add r2, #0xf4
    // add r2, #0xf3
    // ldrsh r2, [r4, r2]
    // strb r0, [r4]
}




void ov07_02225098(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x68);
    *((u8*)(r0 + 8)) = 0;
    // strb r0, [r4]
    *((u32*)(r0 + 0x18)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 0x18)), r0);
    *((u32*)(r4 + 0x1c)) = r0;
    *((u8*)(r4 + 9)) = 0;
    ov07_0221C4A8(r5, 6);
    *((u8*)(r4 + 0xa)) = r0;
    ov07_0221C4A8(*((u32*)(r4 + 0x18)), 3);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(*((u32*)(r4 + 0x18)), 4);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C4A8(*((u32*)(r4 + 0x18)), 5);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C468(*((u32*)(r4 + 0x18)));
    ov07_02221F38(r5, r0, 0, (r4 + 2));
    ov07_0221C468(*((u32*)(r4 + 0x18)));
    ov07_0221FAA0(*((u32*)(r4 + 0x18)), r0);
    *((u32*)(r4 + 4)) = r0;
    // ldrsh r1, [r4, r1]
    // add r0, r1, r0
    *((u16*)(r4 + 2)) = r0;
    ov07_0221C4A8(r5, 0);
    // asr r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x10]
    ov07_0221C4A8(r5, 0);
    // asr r7, r0, #0x10
    ov07_0221C4A8(r5, 1);
    // asr r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0xc]
    ov07_0221C4A8(r5, 1);
    // asr r6, r0, #0x10
    ov07_0221C4A8(r5, 2);
    // str r6, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // add r0, #0x20
    ov07_02222590(r4, 0x64, r7);
    // str r0, [sp]
    // add r0, #0x44
    ov07_022227A8(r4, 2, 0, 0);
    ov07_0221C410(*((u32*)(r4 + 0x18)), ov07_02224EF4, r4);
}




void ov07_0222519C(void) {
    // and r0, r1
    // str r0, [r2]
    ov07_0221EC7C(*((u32*)(r1 + 8)), 2, (1 << 0x1a));
    ov07_0221C448(*((u32*)(r4 + 8)), r5);
    Heap_Free(r4);
}




void ov07_022251CC(void) {
    ov07_022324D8(0x28);
    ov07_0221C4A8(r5, 0);
    ov07_02231FE4(r5, (r4 + 4));
    ov07_0221EB98(*((u32*)(r4 + 8)), 2);
    ov07_0221C4E8(*((u32*)(r4 + 8)), 0);
    *((u32*)(r4 + 0x24)) = r0;
    ManagedSprite_SetOamMode(2);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x24)), 2);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x24)), 0x3F99999A, 0x3F99999A);
    // and r2, r1
    // str r1, [r0]
    // add r0, #0x4a
    // strh r1, [r0]
    // and r2, r1
    // strh r1, [r0]
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_0222519C, r4);
}




void ov07_0222525C(void) {
    // add r0, #0x20
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x3c
    // add r2, r1, r2
    // asr r2, r2, #0x10
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x3c
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
}




void ov07_022252F8(void) {
    ov07_022324D8(0x68);
    *((u32*)(r0 + 0x60)) = r5;
    ov07_0221C4A8(r5, 0);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 1);
    // add r1, #0x64
    // strh r0, [r1]
    ov07_0221C4A8(r5, 2);
    // add r1, #0x66
    // strh r0, [r1]
    ov07_0221C4A8(r5, 3);
    // add r1, #0x20
    ov07_02231FE4(r5, r4);
    // add r0, #9
    // add r0, #9
    // add r0, #0x11
    ov07_0221C468(r5);
    ov07_0221FAB0(r5);
    ov07_0221C468(r5);
    ov07_0223197C(r5, r0);
    ov07_0221C470(r5);
    ov07_0221FAB0(r5);
    ov07_0221C470(r5);
    ov07_0223197C(r5, r0);
    GF_AssertFail();
    Heap_Free(r4);
    ov07_0221FA48(r5, r6);
    *((u32*)(r4 + 0x14)) = r0;
    Heap_Free(r4);
    // add r1, #0x10
    ov07_02231FA0(r4);
    ov07_02222004(r5, r6);
    // ldrsh r1, [r4, r0]
    // sub r0, #0x65
    // add r0, #0x64
    // strh r2, [r0]
    // ldrsh r1, [r4, r0]
    // sub r0, #0x67
    // add r0, #0x66
    // strh r2, [r0]
    ov07_0221BFC0(r5, (r1 * 0x66));
    // ldrsh r1, [r4, r0]
    // sub r0, #0x67
    // add r0, #0x66
    // strh r2, [r0]
    ov07_0221C410(*((u32*)(r4 + 0x60)), ov07_0222525C, r4);
    ov07_0222525C(r4);
}




void ov07_02225444(void) {
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x30
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // sub r2, #8
}




void ov07_0222548C(void) {
    ov07_022324D8(0x54);
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 0);
    // add r2, #0x1c
    // add r3, sp, #0
    ov07_02232020(r5, r0, r4);
    // ldrsh r0, [r4, r0]
    // add r0, #8
    *((u16*)(r4 + 0x22)) = 0x22;
    ov07_0221C4A8(r5, 1);
    ov07_0221C4A8(r5, 2);
    // add r0, #0x30
    ov07_02222A44(r4, r6, r0);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 0x3c)) = (*((u32*)(r4 + 0x3c)) >> 0x1f);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x44)) >> 0x1f);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225444, r4);
}




void ov07_02225504(void) {
    // add r0, #0x30
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
}




void ov07_0222554C(void) {
    ov07_022324D8(0x5c);
    ov07_02231FE4(r6, r0);
    ov07_0221C4A8(r6, 0);
    ov07_0221C4A8(r6, 1);
    ov07_0221C468(r6);
    // str r0, [sp, #8]
    ov07_0221C468(r6);
    ov07_0223197C(r6, r0);
    // str r0, [sp, #8]
    ov07_0221C470(r6);
    // str r0, [sp, #8]
    ov07_0221C470(r6);
    ov07_0223197C(r6, r0);
    // str r0, [sp, #8]
    GF_AssertFail();
    // ldr r1, [sp, #8]
    // add r2, #0x54
    ov07_02231A50(r6, r5);
    // add r2, #0x1c
    // add r3, sp, #0xc
    ov07_02232020(r6, r4, r5);
    // add r0, #0x58
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldr r1, [sp, #8]
    ov07_0223192C(*((u32*)(r5 + 4)), 0);
    // mvn r1, r1
    // add r0, #0x58
    // strh r1, [r0]
    // ldrsh r3, [r5, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // add r0, #0x30
    ov07_02222268(r5, 0x20, 0x58);
    ov07_0221C410(*((u32*)(r5 + 4)), ov07_02225504, r5);
}




void ov07_02225640(void) {
    ov07_022324D8(0x5c);
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 0);
    // str r0, [sp, #0xc]
    ov07_0221C4A8(r5, 1);
    ov07_0221C4A8(r5, 2);
    ov07_0221C468(r5);
    // str r0, [sp, #8]
    ov07_0221C468(r5);
    ov07_0223197C(r5, r0);
    // str r0, [sp, #8]
    ov07_0221C470(r5);
    // str r0, [sp, #8]
    ov07_0221C470(r5);
    ov07_0223197C(r5, r0);
    // str r0, [sp, #8]
    GF_AssertFail();
    // ldr r1, [sp, #8]
    // add r2, #0x54
    ov07_02231A50(r5, r4);
    // add r2, #0x1c
    // add r3, sp, #0x10
    ov07_02232020(r5, r6, r4);
    // add r0, #0x58
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldr r1, [sp, #8]
    ov07_0223192C(*((u32*)(r4 + 4)), 0);
    // mvn r1, r1
    // add r0, #0x58
    // strh r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldrsh r3, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x30
    ov07_02222268(r4, 0x20, 0x58);
    // ldr r1, [sp, #8]
    ov07_02221F80(r5, 0);
    // ldrsh r3, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x30
    ov07_02222268(r4, 0x58, r0);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225504, r4);
}




void ov07_02225768(void) {
    // add r2, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // asr r4, r0, #0x10
    // add r2, sp, #0
    // ldrsh r2, [r2, r1]
    // ldr r0, [sp, #0x10]
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [sp, #0x10]
    // add r2, r2, r4
}




void ov07_02225810(void) {
}




void ov07_02225838(void) {
    ov07_022324D8(0x34);
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 0);
    ov07_0221C4A8(r5, 1);
    ov07_0221C4A8(r5, 2);
    // str r0, [sp, #0x1c]
    ov07_0221C4A8(r5, 3);
    // str r0, [sp, #0x20]
    ov07_0221C4A8(r5, 4);
    // str r0, [sp, #0x24]
    ov07_0221C4A8(r5, 5);
    // str r0, [sp, #0x28]
    // add r2, #0x1c
    // add r3, sp, #0x2c
    ov07_022323FC(r5, r7, r4);
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0x28))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221BFD0(r5);
    // str r0, [sp]
    // asr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // asr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r4 + 0x18)), r0, 2, ((r7 << 0x14) >> 0x10));
    *((u32*)(r4 + 0x30)) = r0;
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225810, r4);
}




void ov07_02225904(void) {
    // strb r0, [r4]
    // strb r0, [r4]
    // ldrsh r1, [r4, r0]
    // sub r1, r2, r1
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
}




void ov07_02225990(void) {
    ov07_022324D8(0x58);
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 0);
    // add r2, #0x1c
    // add r3, sp, #4
    ov07_02232020(r5, r0, r4);
    ov07_0221C468(r5);
    ov07_0221C468(r5);
    ov07_0223197C(r5, r0);
    ov07_0221C470(r5);
    ov07_0221C470(r5);
    ov07_0223197C(r5, r0);
    GF_AssertFail();
    ov07_0221C4A8(r5, 1);
    *((u32*)(r4 + 0x48)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 1);
    *((u32*)(r4 + 0x50)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 0x12);
    // sub r0, r1, r0
    *((u32*)(r4 + 0x54)) = r0;
    ov07_0221C4A8(r5, 2);
    // add r1, #0x40
    // strh r0, [r1]
    ov07_0221C4A8(r5, 3);
    // add r1, #0x42
    // strh r0, [r1]
    // ldrsh r1, [r4, r0]
    // sub r0, #0x43
    // add r0, #0x42
    // strh r2, [r0]
    Pokepic_GetAttr(r4, 1, (r4 * 0x42));
    *((u32*)(r4 + 0x50)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 0x12);
    *((u32*)(r4 + 0x54)) = r0;
    ov07_0221C4A8(r5, 2);
    // add r1, #0x40
    // strh r0, [r1]
    ov07_0221C4A8(r5, 3);
    // add r1, #0x42
    // strh r0, [r1]
    *((u32*)(r4 + 0x30)) = 0;
    *((u32*)(r4 + 0x34)) = 0;
    *((u32*)(r4 + 0x38)) = 0x50;
    ov07_0221FAA0(r5, r7);
    // sub r0, r1, r0
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u32*)(r4 + 0x44)) = r0;
    *((u32*)(r4 + 0x4c)) = 0;
    // str r0, [sp]
    Pokepic_SetVisible(*((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x30)), *((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x38)));
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225904, r4);
}




void ov07_02225AE0(void) {
}




void ov07_02225B38(void) {
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    // ldrsh r0, [r4, r0]
    // sub r1, r1, r0
    // strb r0, [r4]
}




void ov07_02225BC4(void) {
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // bpl _02225C0E
    // strb r0, [r4]
}




void ov07_02225C50(void) {
    // ldrsh r2, [r4, r1]
    // sub r2, r3, r2
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    // strb r0, [r4]
    // str r0, [sp]
}




void ov07_02225CC4(void) {
    ov07_022324D8(0x50);
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 3);
    *((u16*)(r4 + 0x1c)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u32*)(r4 + 0x20)) = r0;
    ov07_0221C4A8(r5, 0);
    // add r2, #0x28
    // add r3, sp, #4
    ov07_02232020(r5, r0, r4);
    ov07_02225AE0(r5, r6);
    ov07_0221C4A8(r5, 5);
    ov07_0221FAA0(r5, r6);
    // sub r0, r3, r0
    *((u32*)(r4 + 0x3c)) = r0;
    *((u32*)(r4 + 0x40)) = 0;
    // str r1, [sp]
    Pokepic_SetVisible(*((u32*)(r4 + 0x30)), 0, *((u32*)(r4 + 0x3c)), 0x50);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225C50, r4);
    Pokepic_GetAttr(*((u32*)(r4 + 0x30)), 1);
    *((u32*)(r4 + 0x44)) = r0;
    *((u32*)(r4 + 0x48)) = r0;
    ov07_0221FAA0(r5, r6);
    // sub r0, r3, r0
    *((u32*)(r4 + 0x3c)) = r0;
    *((u32*)(r4 + 0x40)) = r0;
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    Pokepic_SetVisible(*((u32*)(r4 + 0x30)), 0, 0, 0x50);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225BC4, r4);
    *((u32*)(r4 + 0x3c)) = 0;
    // add r2, r1, r0
    *((u32*)(r4 + 0x44)) = r2;
    Pokepic_SetAttr(*((u32*)(r4 + 0x30)), 1);
    // str r0, [sp]
    Pokepic_SetVisible(*((u32*)(r4 + 0x30)), 0, 0, 0x50);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225B38, r4);
}




void ov07_02225DC4(void) {
    // str r0, [sp]
    // add r0, #0xd4
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // strb r0, [r4]
    // add r0, #0xd4
    // strb r0, [r4]
    // ldrsh r0, [r4, r3]
    // ldrsh r3, [r4, r3]
    // ldrsh r0, [r4, r3]
    // ldrsh r3, [r4, r3]
}




void ov07_02225E9C(void) {
    ov07_022324D8(0xf8);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 0x2c)) = r5;
    ov07_0221C514(r5);
    *((u32*)(r4 + 0x30)) = r0;
    ov07_0221C4A0(*((u32*)(r4 + 0x2c)));
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C4A8(r5, 0);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C4A8(r5, 1);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u32*)(r4 + 0x18)) = r0;
    ov07_0221C4A8(r5, 5);
    *((u32*)(r4 + 0x1c)) = 2;
    ov07_0221C410(*((u32*)(r4 + 0x2c)), ov07_02225DC4, r4);
}




void ov07_02225F18(void) {
    ov07_0221C448(*((u32*)(r1 + 4)), r0, r0, *((u32*)(r1 + 0x24)));
    Heap_Free(r4);
    // ldrsh r2, [r4, r1]
    // add r2, r3, r2
    *((u32*)(r4 + 0x24)) = r2;
    // ldrsh r0, [r4, r1]
    // add r0, r2, r0
    *((u32*)(r4 + 0x28)) = r0;
    *((u32*)(r4 + 0x24)) = r0;
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x2c));
    // add r2, r3, r2
    *((u32*)(r4 + 0x24)) = *((u32*)(r4 + 0x28));
    // ldrsh r0, [r4, r1]
    // add r0, r2, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x2c));
    *((u32*)(r4 + 0x24)) = *((u32*)(r4 + 0x2c));
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x2c));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x1c)), 0x20, *((u32*)(r4 + 0x28)));
    // strb r1, [r0]
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)), (*((u32*)(r4 + 0x24)) | (*((u32*)(r4 + 0x28)) << 4)));
}




void ov07_02225F94(void) {
    ov07_022324D8(0x30);
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(*((u32*)(r4 + 4)), 1);
    *((u16*)(r4 + 0x20)) = r0;
    ov07_0221C4A8(*((u32*)(r4 + 4)), 2);
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C4A8(*((u32*)(r4 + 4)), 3);
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C4A8(*((u32*)(r4 + 4)), 0);
    ov07_0221C4E8(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x1c)) = r0;
    ManagedSprite_SetDrawFlag(1);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x2c)) = 0xf;
    ManagedSprite_SetMosaicFlag(*((u32*)(r4 + 0x1c)), 1);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02225F18, r4);
    ov07_02225F18(r4);
}




void ov07_0222600C(void) {
    ov07_0221C4A8(0);
    // str r0, [r4]
    ov07_0221C4A8(r5, 1);
    *((u16*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u16*)(r4 + 0xe)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u16*)(r4 + 4)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u16*)(r4 + 6)) = r0;
    ov07_0221C4A8(r5, 5);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4A8(r5, 6);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C4A8(r5, 8);
    *((u32*)(r4 + 0x30)) = r0;
    ov07_0221C4A8(r5, 7);
    // and r2, r0
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x20)) = (0xFFFF0000 >> 0x10);
    *((u32*)(r4 + 0x24)) = ((r0 << 0x10) >> 0x10);
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x24)) = 0xff;
    ov07_0221C494(r5, *((u32*)r4), (0xFFFF0000 >> 0x10));
    *((u32*)(r4 + 0x38)) = r0;
    ov07_0221C478(r5);
    *((u32*)(r4 + 0x34)) = r0;
    ov07_0221C468(r5);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C470(r5);
    *((u32*)(r4 + 0x18)) = r0;
    ov07_0221C470(r5);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C468(r5);
    *((u32*)(r4 + 0x18)) = r0;
    GF_AssertFail(*((u32*)(r4 + 0x38)));
}




void ov07_022260DC(void) {
    // cmp r0, #0
    // beq _022260EE
    // cmp r0, #0
    // bne _022260E4
    // beq _022260F4
}




void ov07_022260F8(void) {
    // ldrsh r0, [r5, r0]
    // add r0, #0xa8
    // ldrsh r2, [r5, r0]
    // add r0, r0, r2
    // ldrsh r4, [r5, r0]
    // add r1, r1, r3
    // ldrsh r1, [r5, r1]
    // add r0, #0xbe
    // add r0, r1, r0
    // ldrsh r2, [r5, r1]
    // add r2, r1, r0
    // add r0, r2, r0
}




void ov07_022261B4(void) {
    ov07_022324D8((0x41 << 2));
    // add r1, #0x3c
    ov07_02231FE4(r6, r0);
    ov07_0222600C(r6, r4);
    ov07_0221C468(r6);
    ov07_02222004(r6, r0);
    // add r2, sp, #0x18
    ov07_02231B90(r6, *((u32*)(r4 + 0x14)));
    // add r2, sp, #0xc
    ov07_02231B90(r6, *((u32*)(r4 + 0x18)));
    // ldr r0, [sp, #0x18]
    _s32_div_f(0xac);
    // ldr r0, [sp, #0xc]
    _s32_div_f(0xac);
    // ldr r0, [sp, #0x1c]
    _s32_div_f(0xac);
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    _s32_div_f(0xac);
    // ldrsh r1, [r4, r1]
    // add r0, r0, r2
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0xa8
    // add r2, r7, r3
    // ldr r3, [sp, #8]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r4, (r6 << 0x10), (0xc << 0x10), ((0xc * r5) << 0x10));
    // add r0, #0xf0
    ov07_022223F0(r4, (0x00000E38 * r5), (0x00005C71 * r5), 0xa);
    // add r0, #0xf0
    ov07_022223F0(r4, (0x00003FFF * r5), (r2 * r5), 0xa);
    // add r6, #0xa8
    ov07_022222B4(r4);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x24)) + 1);
    // ldrsh r3, [r4, r0]
    // add r0, r0, r3
    *((u32*)(*((u32*)(r4 + 0x38)) + 0x28)) = (r3 * 0xac);
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    *((u32*)(*((u32*)(r4 + 0x38)) + 0x2c)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r4 + 0x38)) + 0x20))) + 8));
    ov07_0221C410(*((u32*)(r4 + 0x40)), ov07_022260F8, r4, *((u32*)(*((u32*)*((u32*)(*((u32*)(r4 + 0x38)) + 0x20))) + 4)));
}




void ov07_022262E8(void) {
    ov07_022324D8((0x41 << 2));
    // add r1, #0x3c
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 0);
    // str r0, [r4]
    ov07_0221C4A8(r5, 1);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C4A8(r5, 2);
    ov07_0221C4A8(r5, 3);
    *((u16*)(r4 + 6)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u16*)(r4 + 4)) = r0;
    *((u32*)(r4 + 0x28)) = 0;
    ov07_0221C4A8(r5, 5);
    // and r2, r0
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x20)) = (0xFFFF0000 >> 0x10);
    *((u32*)(r4 + 0x24)) = ((r0 << 0x10) >> 0x10);
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x24)) = 0xff;
    ov07_0221C494(r5, *((u32*)r4), (0xFFFF0000 >> 0x10));
    *((u32*)(r4 + 0x38)) = r0;
    ov07_0221C478(r5);
    *((u32*)(r4 + 0x34)) = r0;
    ov07_0221C468(r5);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C468(r5);
    ov07_0221C470(r5);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C470(r5);
    *((u32*)(r4 + 0x18)) = r0;
    GF_AssertFail(*((u32*)(r4 + 0x38)));
    // add r2, sp, #0x14
    ov07_02231B90(r5, *((u32*)(r4 + 0x14)));
    // add r2, sp, #8
    ov07_02231B90(r5, *((u32*)(r4 + 0x18)));
    // add r0, sp, #0x14
    ov07_02231DD0();
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x14]
    // add r0, sp, #8
    ov07_02231DD0();
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    _s32_div_f(0xac);
    // ldr r0, [sp, #8]
    _s32_div_f(0xac);
    // ldr r0, [sp, #0x18]
    _s32_div_f(0xac);
    // ldr r0, [sp, #0xc]
    _s32_div_f(0xac);
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xa8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r4, (r5 << 0x10), (r6 << 0x10), (r7 << 0x10));
    // add r6, #0xa8
    ov07_022222B4(r4);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x24)) + 1);
    // ldrsh r3, [r4, r0]
    // add r0, r0, r3
    *((u32*)(*((u32*)(r4 + 0x38)) + 0x28)) = (r3 * 0xac);
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    *((u32*)(*((u32*)(r4 + 0x38)) + 0x2c)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r4 + 0x38)) + 0x20))) + 8));
    ov07_0221C410(*((u32*)(r4 + 0x40)), ov07_022260F8, r4, *((u32*)(*((u32*)*((u32*)(*((u32*)(r4 + 0x38)) + 0x20))) + 4)));
}




void ov07_0222647C(void) {
    // add r0, #0xa8
    // add r1, #0xcc
    // ldrsh r1, [r5, r1]
    // add r1, r3, r1
    // ldrsh r1, [r5, r1]
    // add r1, r2, r1
}




void ov07_022264E0(void) {
    ov07_022324D8((0x41 << 2));
    // add r1, #0x3c
    ov07_02231FE4(r6, r0);
    ov07_0222600C(r6, r4);
    ov07_0221C468(r6);
    ov07_02222004(r6, r0);
    // add r2, sp, #0x20
    ov07_02231B90(r6, *((u32*)(r4 + 0x14)));
    // add r2, sp, #0x14
    ov07_02231B90(r6, *((u32*)(r4 + 0x18)));
    // ldr r0, [sp, #0x20]
    _s32_div_f(0xac);
    // ldr r0, [sp, #0x14]
    _s32_div_f(0xac);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    _s32_div_f(0xac);
    // ldr r0, [sp, #0x18]
    _s32_div_f(0xac);
    // asr r1, r1, #0x10
    // str r1, [sp]
    // ldrsh r1, [r4, r1]
    // add r0, r0, r2
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0xcc
    // neg r0, r0
    // str r0, [sp, #0xc]
    // ldrsh r6, [r4, r3]
    // add r0, #0xa8
    // ldr r6, [sp, #0x10]
    // add r3, r6, r3
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222338(r4, r4, (r6 << 0x10), ((r6 * r5) << 0x10));
    // add r0, #0xf0
    ov07_022223F0(r4, (0x00000E38 * r5), (0x00005C71 * r5), 0xa);
    // add r0, #0xf0
    ov07_022223F0(r4, (0x00003FFF * r5), (r2 * r5), 0xa);
    // add r6, #0xa8
    // add r7, #0xcc
    ov07_02222384(r4, r4);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x24)) + 1);
    // ldrsh r3, [r4, r0]
    // add r0, r0, r3
    *((u32*)(*((u32*)(r4 + 0x38)) + 0x28)) = (r3 * 0xac);
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    *((u32*)(*((u32*)(r4 + 0x38)) + 0x2c)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r4 + 0x38)) + 0x20))) + 8));
    ov07_0221C410(*((u32*)(r4 + 0x40)), ov07_0222647C, r4, *((u32*)(*((u32*)*((u32*)(*((u32*)(r4 + 0x38)) + 0x20))) + 4)));
}




void ov07_02226628(void) {
    // add r0, #0x58
    // add r0, #0x8c
    // ldrsh r0, [r5, r0]
    // add r1, r2, r1
    // add r2, #0x88
    // ldrsh r2, [r5, r2]
    // add r3, r4, r3
    // add r2, r3, r2
    // add r0, r1, r0
}




void ov07_02226698(void) {
    ov07_022324D8(0x94);
    // add r1, #0x3c
    ov07_02231FE4(r4, r0);
    ov07_0221C4A8(r4, 0);
    // str r0, [r5]
    ov07_0221C4A8(r4, 1);
    *((u32*)(r5 + 4)) = r0;
    ov07_0221C4A8(r4, 2);
    *((u32*)(r5 + 0xc)) = r0;
    ov07_0221C4A8(r4, 3);
    *((u32*)(r5 + 8)) = r0;
    ov07_0221C4A8(r4, 4);
    *((u32*)(r5 + 0x10)) = r0;
    ov07_0221C4A8(r4, 5);
    *((u32*)(r5 + 0x14)) = r0;
    ov07_0221C4A8(r4, 6);
    *((u32*)(r5 + 0x18)) = r0;
    ov07_0221C4A8(r4, 7);
    *((u32*)(r5 + 0x1c)) = r0;
    ov07_0221C4A8(r4, 8);
    *((u32*)(r5 + 0x20)) = r0;
    ov07_0221C468(r4);
    ov07_0221C470(r4);
    *((u32*)(r5 + 0x24)) = r0;
    // add r2, #0x88
    ov07_02231B90(r4, *((u32*)(r5 + 0x24)), r5);
    ov07_0221C494(r4, *((u32*)r5));
    *((u32*)(r5 + 0x38)) = r0;
    ov07_0221C4A8(r4, 9);
    ov07_0221C488(r4, r0);
    *((u32*)(r5 + 0x34)) = r0;
    _s32_div_f((0x0000FFFF * *((u32*)(r5 + 4))), (0x5a << 2));
    _s32_div_f((0x0000FFFF * *((u32*)(r5 + 0xc))), (0x5a << 2));
    _s32_div_f((0x0000FFFF * *((u32*)(r5 + 8))), (0x5a << 2));
    _s32_div_f((0x0000FFFF * *((u32*)(r5 + 0x10))), (0x5a << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x58
    ov07_022220FC(r5, ((r4 << 0x10) >> 0x10), ((r6 << 0x10) >> 0x10), ((r7 << 0x10) >> 0x10));
    // add r0, #0x58
    ov07_02222180(r5);
    // add r0, #0x8c
    // ldrsh r0, [r5, r0]
    // ldrsh r3, [r5, r3]
    // add r0, #0x88
    // add r2, r2, r1
    // add r3, r0, r4
    // add r0, r3, r0
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x28)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 4));
    // add r0, r2, r0
    *((u32*)(*((u32*)(r5 + 0x38)) + 0x2c)) = *((u32*)(*((u32*)*((u32*)(*((u32*)(r5 + 0x38)) + 0x20))) + 8));
    ov07_0221C410(*((u32*)(r5 + 0x40)), ov07_02226628, r5, 0x58);
}




void ov07_02226804(void) {
}




void ov07_02226838(void) {
    ov07_022324D8(0x20);
    ov07_02231FE4(r5, r0);
    *((u32*)(r7 + 0x1c)) = r4;
    ov07_0221C4A8(r5, 0);
    // asr r6, r0, #0x10
    ov07_0221C4A8(r5, 1);
    // asr r2, r0, #0x10
    ManagedSprite_OffsetPositionXY(r4, r6);
    ov07_0221C410(*((u32*)(r7 + 4)), ov07_02226804, r7);
}




void ov07_02226880(void) {
    // ldrsh r6, [r0, r2]
    *((u32*)(r1 + 0x34)) = (*((u32*)(r1 + 0x34)) + 1);
    ManagedSprite_GetPriority(*((u32*)(r1 + 0x1c)), *((u32*)(r1 + 0x34)), (*((u32*)(r1 + 0x34)) << 1));
    ov07_0221FAE8(*((u32*)(r4 + 4)));
    ov07_0221FB04(*((u32*)(r4 + 4)), 2);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r0);
    ov07_0221FAE8();
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r0);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), r6, 0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x1c)), 2);
    // add r0, #0x20
    ov07_022223F0(r4, 0, 0x00000E38, 4);
    // mvn r1, r1
    ManagedSprite_SetAffineTranslation(*((u32*)(r4 + 0x1c)), 7, 0x10);
    *((u32*)(r4 + 0x34)) = 0;
    // strb r0, [r4]
    // add r0, #0x20
    ov07_02222440(r4);
    ManagedSprite_SetAffineZRotation(*((u32*)(r4 + 0x1c)), ((*((u32*)(r4 + 0x20)) << 0x10) >> 0x10));
    // strb r0, [r4]
    *((u32*)(r4 + 0x34)) = ((*((u8*)r4) + 1) + 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222694C: ; jump table
    // add r0, #0x20
    ov07_022223F0(r4, 0x00000E38, 0xFFFFF1C8, 4);
    // add r0, #0x20
    ov07_022223F0(r4, 0xFFFFF1C8, 0x00000E38, 4);
    // add r0, #0x20
    ov07_022223F0(r4, 0x00000E38, 0xFFFFF1C8, 4);
    // add r0, #0x20
    ov07_022223F0(r4, 0xFFFFF1C8, 0x00000E38, 4);
    // add r0, #0x20
    ov07_022223F0(r4, 0x00000E38, 0, 2);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x1c)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x1c)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
}




void ov07_022269D8(void) {
    ov07_022324D8(0x38);
    ov07_02231FE4(r5, r0);
    *((u32*)(r4 + 0x1c)) = r6;
    *((u32*)(r4 + 0x34)) = 0;
    ov07_0221C470(r5);
    ov07_02221F80(r5, r0, 0);
    ov07_02221F80(r5, r7, 1);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x1c)), r6, r0);
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x1c)), 1);
    ManagedSprite_SetAnim(0);
    ov07_0221FAE8(*((u32*)(r4 + 4)));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r0);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 0xc);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02226880, r4);
}




void ov07_02226A68(void) {
}




void ov07_02226A9C(void) {
    ov07_022324D8(0x38);
    ov07_02231FE4(r5, r0);
    *((u32*)(r4 + 0x1c)) = r6;
    ov07_0221C470(r5);
    ov07_02221F80(r5, r0, 0);
    ov07_02221F80(r5, r7, 1);
    ov07_0221BFC0(r5);
    ov07_0223192C(*((u32*)(r4 + 4)), r7, 0x20);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x1c)), r6, 0x20);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x1c)), r5);
    ov07_0221FB04(*((u32*)(r4 + 4)), 2);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r0);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02226A68, r4);
}




void ov07_02226B2C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02226B46: ; jump table
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x24
    // add r1, #0x48
    // sub r2, #0x33
    ov07_02222338(r1, 0x15, 0x70);
    // strb r0, [r4]
    // add r0, #0x24
    // add r1, #0x48
    ov07_022223CC(r4, *((u32*)(r4 + 0x1c)));
    // strb r0, [r4]
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x1c)));
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x1c)), 1);
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x21
    // strb r1, [r0]
    // add r1, #0x20
    // add r2, #0x21
    ov07_02231E08(*((u32*)(r4 + 4)), *((u8*)r4), *((u8*)r4));
    // strb r0, [r4]
    // add r0, #0x20
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x21
    // add r0, #0x21
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, #0x20
    // add r0, #0x21
    // strh r1, [r0]
    // add r0, #0x20
    // strb r0, [r4]
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x1c)), (*((u8*)r4) | (*((u8*)r4) << 8)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x1c)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
}




void ov07_02226C4C(void) {
    ov07_022324D8(0x6c);
    ov07_02231FE4(r6, r0);
    *((u32*)(r4 + 0x1c)) = r5;
    // mvn r1, r1
    ManagedSprite_SetPositionXY(r5, 0x1d, 0xa0);
    ov07_0221FB04(*((u32*)(r4 + 4)), 2);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r0);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02226B2C, r4);
}




void ov07_02226C90(void) {
}




void ov07_02226CB0(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02226CCA: ; jump table
    // and r2, r1
    // str r1, [r0]
    // add r5, #0x48
    // strh r1, [r5]
    // add r5, #0x4a
    // strh r1, [r5]
    // add r1, #0x40
    // strh r2, [r1]
    // add r0, #0x44
    // strh r1, [r0]
    LCRandom((1 << 0x1a), 0x0000A0C0, 0x80, 0x20);
    _s32_div_f(5);
    // add r1, #0x23
    *((u32*)(r4 + 0x3c)) = r1;
    // and r2, r1
    // str r1, [r0]
    // add r5, #0x48
    // strh r1, [r5]
    // add r5, #0x4a
    // strh r1, [r5]
    // add r1, #0x40
    // strh r2, [r1]
    // add r0, #0x44
    // strh r1, [r0]
    LCRandom((1 << 0x1a), 0x000056C0, (0x20 << 0xa), 0x20);
    _s32_div_f(5);
    // add r1, #0x23
    *((u32*)(r4 + 0x3c)) = r1;
    LCRandom();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 4);
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 4);
    LCRandom();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 4);
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 4);
    LCRandom();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 4);
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 4);
    LCRandom();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 8);
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 8);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x1c)), 0, 4);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x1c)));
    // add r0, sp, #0
    // ldrsh r0, [r0, r1]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 0);
    *((u32*)(r4 + 0x38)) = (*((u32*)(r4 + 0x38)) + 1);
    ManagedSprite_SetDrawFlag((*((u32*)(r4 + 0x38)) + 1), 0);
}




void ov07_02226F04(void) {
    ov07_02226CB0(r1);
    // strb r0, [r4]
    // and r1, r2
    // str r1, [r0]
    // add r2, #0x48
    // strh r3, [r2]
    // add r2, #0x4a
    // strh r3, [r2]
    // add r2, #0x40
    // strh r1, [r2]
    // add r0, #0x44
    // strh r1, [r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 0, (1 << 0x1a), (*((u16*)(1 << 0x1a)) & ~(0x3f)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)));
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x1c)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0xc)));
}




void ov07_02226F80(void) {
    ov07_022324D8(0x40);
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 0);
    *((u32*)(r4 + 0x20)) = r0;
    ov07_0221C4A8(r5, 1);
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u32*)(r4 + 0x2c)) = r0;
    ov07_0221C4A8(r5, 5);
    *((u32*)(r4 + 0x30)) = r0;
    ov07_0221C4A8(r5, 6);
    *((u32*)(r4 + 0x34)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), *((u32*)(r4 + 0x20)));
    *((u32*)(r4 + 0x1c)) = r0;
    *((u32*)(r4 + 0x38)) = 0;
    ov07_0221FB04(r5, *((u32*)(r4 + 0x28)));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r0);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x2c)));
    ov07_0221FAB0(r5);
    ov07_0221C4A8(r5, 4);
    ov07_0221C4A8(r5, 4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 0);
    Heap_Free(r4);
    ov07_0221C4A8(r5, 4);
    ov07_0221C468(r5);
    ov07_0221C470(r5);
    // str r0, [sp]
    ov07_02231924(r5, r6);
    // ldr r1, [sp]
    ov07_02231924(r5);
    // add r1, r7, r7
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02227072: ; jump table
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222708C: ; jump table
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022270D0: ; jump table
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02227114: ; jump table
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02227158: ; jump table
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02226F04, r4);
}




void ov07_0222719C(void) {
}




void ov07_022271DC(void) {
    ov07_022324D8(0x34);
    ov07_02231FE4(r4, r0);
    ov07_0221C4A8(r4, 0);
    ov07_0221C4A8(r4, 0);
    *((u32*)(r7 + 0x2c)) = r0;
    ov07_0221C4E8(*((u32*)(r7 + 4)), 0);
    *((u32*)(r4 + 0x1c)) = r0;
    ManagedSprite_SetDrawPriority(*((u32*)r5));
    ov07_0221C410(*((u32*)(r7 + 4)), ov07_0222719C, r7);
    ov07_0222719C(r7);
}




void ov07_02227248(void) {
    // str r0, [r5]
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r1, [sp, #8]
    // str r6, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xb5
    // str r1, [r5]
}




void ov07_022272D0(void) {
    ov07_022324D8(0x28);
    // add r1, #8
    ov07_02231FE4(r5, r0);
    ov07_0221C4A8(r5, 0);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C410(*((u32*)(r4 + 0xc)), ov07_02227248, r4);
}




void ov07_02227300(void) {
    // str r0, [sp, #0xc]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222731C: ; jump table
    *((u8*)(r1 + 4)) = (*((u8*)(r1 + 4)) + 1);
    ov07_0221C4A8(*((u32*)(r1 + 8)), 0);
    // add r1, sp, #0x10
    // add r1, #2
    // add r2, sp, #0x10
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x14)));
    // add r0, r4, r7
    *((u8*)(*((u8*)r6) + 1)) = (*((u8*)(*((u8*)r6) + 1)) + 1);
    *((u8*)(*((u8*)r6) + 1)) = 0;
    ManagedSprite_GetDrawFlag(*((u32*)(r5 + 0x14)), 0, *((u8*)(*((u8*)r6) + 1)));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    ManagedSprite_SetDrawFlag(1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 1);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    *((u8*)(r4 + 4)) = 0;
    // strb r0, [r4]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x20
    ov07_02222590(r4, 0x64, 0x3c, 0x64);
    // strb r0, [r4]
    // add r0, #0x20
    ov07_0222260C(r4);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    // add r7, #0x20
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    ov07_02222644(r4);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    ManagedSprite_SetAffineScale(*((u32*)(r6 + 0x14)));
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strb r0, [r4]
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) - 1);
    *((u8*)(r4 + 6)) = (*((u8*)(r4 + 6)) + 1);
    // strb r0, [r4]
    // strh r1, [r0]
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x14)));
    ov07_0221C4A8(*((u32*)(r4 + 8)), r7);
    // ldr r1, [sp, #0xc]
    ov07_0221C448(*((u32*)(r4 + 8)));
    Heap_Free(r4);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    Sprite_TickFrame(*((u32*)*((u32*)(r4 + 0x14))));
    ov07_0221C4A8(*((u32*)(r4 + 8)), r7);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
}




void ov07_022274F8(void) {
    // str r0, [sp]
    ov07_0221BFD0();
    Heap_Alloc(0x44);
    GF_AssertFail();
    *((u8*)(r4 + 4)) = 0;
    // strb r0, [r4]
    *((u32*)(r4 + 0xc)) = r5;
    // ldr r0, [sp]
    *((u32*)(r4 + 0x10)) = r6;
    *((u32*)(r4 + 8)) = 0;
    // ldr r1, [sp]
    // add r0, sp, #8
    ov07_0221F9E8(0);
    // mvn r1, r1
    ov07_02231E08(*((u32*)(r4 + 8)), 0, 0);
    *((u8*)(r4 + 5)) = 0xf;
    *((u8*)(r4 + 6)) = 0;
    // strh r1, [r0]
    // ldr r0, [sp]
    *((u32*)(r4 + 0x14)) = r7;
    ov07_0221C470(0x04000052, (*((u8*)(r4 + 5)) | (*((u8*)(r4 + 6)) << 8)));
    // ldr r0, [sp]
    ov07_0223192C(r0);
    // ldr r0, [sp]
    ov07_0221BFC0();
    // add r2, sp, #4
    ov07_02231A20(0, r0);
    // ldr r0, [sp]
    ov07_0221BFC0();
    // add r2, sp, #4
    ov07_02231A20(1, r0);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    // add r7, sp, #4
    // add r2, sp, #8
    SpriteSystem_NewSprite(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0x14)) = r0;
    // ldrsh r1, [r7, r1]
    // ldrsh r2, [r7, r2]
    ManagedSprite_SetPositionXY(0, 2);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    // add r3, sp, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 0, 2);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    // add r1, r4, r6
    *((u8*)(r1 + 1)) = 0;
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x14)), 2);
    // sub r2, r2, r7
    // asr r2, r2, #0x10
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + 0x14)), 0, (0x20 << 0x10));
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x14)), 1);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    // ldr r0, [sp]
    ov07_0221C3F4(ov07_02227300, r4, (1 << 0xc));
}




void ov07_02227630(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222764C: ; jump table
    // add r0, #0x14
    // add r0, #0x38
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // strb r0, [r4]
    // str r0, [sp]
    // strb r0, [r4]
    // str r0, [sp]
    // strb r0, [r4]
    // str r0, [sp]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // strb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x14
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // strb r0, [r4]
    // add r0, #0x14
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // add r2, #0xf4
    // add r2, #0xf3
    // ldrsh r2, [r4, r2]
    // strb r0, [r4]
}




void ov07_02227824(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x5c);
    *((u8*)(r0 + 8)) = 0;
    // strb r0, [r4]
    *((u32*)(r0 + 0xc)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 0xc)), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 2)) = r0;
    ov07_0221C468(*((u32*)(r4 + 0xc)));
    ov07_0221FAA0(*((u32*)(r4 + 0xc)), r0);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C4A8(r5, 0);
    ov07_0221C4A8(r5, 2);
    // str r0, [sp]
    // add r0, #0x14
    // asr r3, r3, #0x10
    ov07_02222508(r4, 0x64, 0x64, (r6 << 0x10));
    // str r0, [sp]
    // add r0, #0x38
    ov07_022227A8(r4, 2, 0, 0);
    ov07_0221C410(*((u32*)(r4 + 0xc)), ov07_02227630, r4);
}




void ov07_022278B0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022278CC: ; jump table
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // strb r0, [r4]
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // strb r0, [r4]
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // strb r0, [r4]
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // strb r0, [r4]
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    // add r2, #0xf4
    // add r2, #0xf3
    // ldrsh r2, [r4, r2]
    // strb r0, [r4]
}




void ov07_02227AEC(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x58);
    // strb r0, [r4]
    *((u32*)(r0 + 8)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 8)), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 2)) = r0;
    ov07_0221C468(*((u32*)(r4 + 8)));
    ov07_0221FAA0(*((u32*)(r4 + 8)), r0);
    *((u32*)(r4 + 4)) = r0;
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r4, 0x64, 0x96, 0x64);
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_022278B0, r4);
}




void ov07_02227B58(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #0xc]
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldrsh r2, [r1, r0]
    // ldr r1, [sp, #8]
    // sub r7, r2, r1
    // ldrsh r3, [r5, r1]
    // ldrsh r6, [r1, r0]
    // ldrsh r2, [r5, r1]
    // ldrsh r4, [r1, r0]
    // str r3, [sp]
    // add r1, r2, r4
    // add r2, r2, r6
    // str r0, [sp, #4]
    // add r0, #0x28
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02222268(r1, (ov07_02236732 << 0x10), ((*((u8*)r1) >> 0x1f) << 0x10), *((u8*)r1));
    // ldrsh r3, [r5, r0]
    // ldrsh r2, [r5, r0]
    // sub r1, r2, r4
    // str r3, [sp]
    // sub r2, r2, r6
    // str r0, [sp, #4]
    // add r0, #0x4c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02222268(r5, (r1 << 0x10), (r2 << 0x10));
    // ldr r0, [sp, #0xc]
    // ldrsh r2, [r1, r0]
    // ldr r1, [sp, #8]
    // sub r7, r2, r1
    // ldrsh r3, [r5, r1]
    // ldrsh r6, [r1, r0]
    // ldrsh r2, [r5, r1]
    // ldrsh r4, [r1, r0]
    // str r3, [sp]
    // add r1, r2, r4
    // add r2, r2, r6
    // str r0, [sp, #4]
    // add r0, #0x70
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02222268(r5, (ov07_02236732 << 0x10), (r2 << 0x10));
    // ldrsh r3, [r5, r0]
    // ldrsh r2, [r5, r0]
    // sub r1, r2, r4
    // str r3, [sp]
    // sub r2, r2, r6
    // str r0, [sp, #4]
    // add r0, #0x94
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02222268(r5, (r1 << 0x10), (r2 << 0x10));
    // strb r0, [r5]
    *((u8*)(r5 + 1)) = (*((u8*)(r5 + 1)) + 1);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r7, #0x28
    ov07_022222B4(r5);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x18)), 0x28, 0x2a);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x18)));
    // ldr r0, [sp, #0x14]
    // add r7, #0x24
    // add r6, #0x24
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    *((u8*)(r5 + 1)) = (*((u8*)(r5 + 1)) + 1);
    *((u8*)(r5 + 1)) = 0;
    *((u8*)(r5 + 4)) = (*((u8*)(r5 + 4)) - 1);
    *((u8*)(r5 + 5)) = (*((u8*)(r5 + 5)) + 1);
    *((u8*)(r5 + 1)) = (*((u8*)(r5 + 1)) + 1);
    // strh r1, [r0]
    ov07_0221C448(*((u32*)(r5 + 0xc)), r2);
    Heap_Free(r5);
    SpriteSystem_DrawSprites(*((u32*)(r5 + 0x14)));
}




void ov07_02227D1C(void) {
    // str r0, [sp, #0x18]
    ov07_0221BFD0();
    Heap_Alloc(0xb8);
    *((u8*)(r0 + 1)) = 0;
    // strb r0, [r4]
    // ldr r0, [sp, #0x18]
    *((u32*)(r0 + 0xc)) = 0;
    ov07_0221C468(0);
    ov07_0221FA48(*((u32*)(r4 + 0xc)), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 8)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    *((u16*)(r4 + 0xa)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 0x29);
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    *((u16*)(r4 + 0xa)) = r0;
    ov07_0221C514(*((u32*)(r4 + 0xc)), 0xa);
    *((u32*)(r4 + 0x14)) = r0;
    *((u8*)(r4 + 4)) = 8;
    *((u8*)(r4 + 5)) = 6;
    ov07_02231E08(*((u32*)(r4 + 0xc)), (6 - 7), (6 - 7));
    // strh r1, [r0]
    ov07_0221C468(*((u32*)(r4 + 0xc)), (*((u8*)(r4 + 4)) | (*((u8*)(r4 + 5)) << 8)));
    ov07_0221FA80(*((u32*)(r4 + 0xc)), r0);
    // str r0, [sp, #0x20]
    ov07_0221FAE8(*((u32*)(r4 + 0xc)));
    ov07_0221C468(*((u32*)(r4 + 0xc)));
    ov07_0221FA90(*((u32*)(r4 + 0xc)), r0);
    // str r0, [sp, #0x1c]
    ov07_0221C4E8(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r5 + 0x18)) = r0;
    ManagedSprite_SetOamMode(1);
    ov07_0221C468(*((u32*)(r4 + 0xc)));
    ov07_0223192C(*((u32*)(r4 + 0xc)), r0);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x18)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x20)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x24)), 0x14);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x18)), r7);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r7);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x20)), r7);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x24)), r7);
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0x18))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221FA78(*((u32*)(r4 + 0xc)));
    // ldr r0, [sp, #0x18]
    ov07_0221BFD0();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    PaletteData_LoadNarc_CustomTint(r6, r0);
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0x20))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221FA78(*((u32*)(r4 + 0xc)));
    // ldr r0, [sp, #0x18]
    ov07_0221BFD0();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    PaletteData_LoadNarc_CustomTint(r6, r0);
    ManagedSprite_SetDrawPriority(0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0x14);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x20)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x24)), 0xa);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x18)), (r7 + 1));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), (r7 + 1));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x20)), (r7 + 1));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x24)), (r7 + 1));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x18)), r7);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), r7);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x20)), r7);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x24)), r7);
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0x18))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221FA78(*((u32*)(r4 + 0xc)));
    // ldr r0, [sp, #0x18]
    ov07_0221BFD0();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    PaletteData_LoadNarc_CustomTint(r6, r0);
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0x20))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221FA78(*((u32*)(r4 + 0xc)));
    // ldr r0, [sp, #0x18]
    ov07_0221BFD0();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    PaletteData_LoadNarc_CustomTint(r6, r0);
    ov07_0221C410(*((u32*)(r4 + 0xc)), ov07_02227B58, r4);
}




void ov07_02227FA4(void) {
    // add r3, r1, r0
    // str r0, [sp]
    // add r0, #0xc
    ov07_02222508(r1, *((u8*)(ov07_022366CC + r3)), 0x64, *((u8*)(ov07_022366CD + r3)));
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 8)), 0, 6, 0);
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 8)), 6, 0, 0);
    // eor r0, r1
    *((u8*)(r4 + 2)) = 1;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strb r0, [r4]
    // add r0, #0xc
    ov07_02222558(r4, *((u8*)(r4 + 2)));
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 8)));
    // strb r0, [r4]
    // strb r0, [r4]
    // ldrsh r2, [r4, r1]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xc);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xd, 0xe);
    ov07_0221C448(*((u32*)(r4 + 4)), r2);
    Heap_Free(r4);
}




void ov07_02228070(void) {
    ov07_022324D8(0x30);
    // strb r0, [r4]
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 4)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02227FA4, r4);
}




void ov07_022280A8(void) {
    // add r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r1, *((u8*)(ov07_02236713 + r3)), *((u8*)(ov07_02236714 + r3)), *((u8*)(ov07_02236715 + r3)));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // strb r0, [r4]
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r1]
    ov07_02222674(2, 4, *((u32*)(r4 + 0x24)));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 2, r0);
    ov07_0221C448(*((u32*)(r4 + 8)), r2);
    Heap_Free(r4);
}




void ov07_02228174(void) {
    ov07_022324D8(0x34);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 8)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 8)), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 2)) = r0;
    ov07_0221C468(*((u32*)(r4 + 8)));
    ov07_0221FAA0(*((u32*)(r4 + 8)), r0);
    *((u16*)(r4 + 4)) = r0;
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_022280A8, r4);
}




void ov07_022281C0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022281DC: ; jump table
    // add r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r1, *((u8*)(ov07_022366EB + r3)), *((u8*)(ov07_022366EC + r3)), *((u8*)(ov07_022366ED + r3)));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0xc)), 2, 6, *((u32*)(r4 + 0x24)));
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r4, 0, 0, (r0 << 0x10));
    // strb r0, [r4]
    // add r0, #0x10
    ov07_022222B4(r4);
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 0x12);
    // add r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r4, *((u8*)(ov07_022366EB + r3)), *((u8*)(ov07_022366EC + r3)), *((u8*)(ov07_022366ED + r3)));
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 1);
    *((u16*)(r4 + 2)) = r0;
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0xc)), 2, 6, *((u32*)(r4 + 0x24)));
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 1, 4);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 6, 1);
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0xd);
    ov07_0221C448(*((u32*)(r4 + 8)), r5);
    Heap_Free(r4);
}




void ov07_02228384(void) {
    ov07_022324D8(0x34);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 8)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 8)), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 2)) = r0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 2;
    ov07_0221C468(*((u32*)(r4 + 8)));
    ov07_0221FAA0(*((u32*)(r4 + 8)), r0);
    *((u16*)(r4 + 6)) = r0;
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_022281C0, r4);
}




void ov07_022283D8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022283F2: ; jump table
    ov07_0221E6C8(*((u32*)(r1 + 8)), r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 4)), 1, ((r0 << 0x10) >> 0x10), (1 - 3));
    // str r1, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x10)), 0, 0x10, 0);
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 4)));
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 0x10)));
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strb r0, [r4]
    ov07_0221E6C8(*((u32*)(r4 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 4)), 1, ((r0 << 0x10) >> 0x10), (1 - 3));
    // str r2, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x10)), 0x10, 0, 0);
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 4)));
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 0x10)));
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 8)), r2);
    Heap_Free(r4);
}




void ov07_022284D8(void) {
    ov07_022324D8(0x14);
    *((u32*)(r0 + 8)) = r5;
    ov07_0221FA78(r5);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C468(*((u32*)(r4 + 8)));
    ov07_0221FA48(*((u32*)(r4 + 8)), r0);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_022283D8, r4);
}




void ov07_02228510(void) {
    // add r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    ov07_02222590(r1, *((u8*)(ov07_022366F5 + r3)), *((u8*)(ov07_022366F6 + r3)), *((u8*)(ov07_022366F7 + r3)));
    // add r5, r1, r0
    // ldrsh r3, [r4, r0]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, r3, r5
    // add r0, #0x34
    // asr r3, r3, #0x10
    ov07_02222268(r4, 0, 0, (r3 << 0x10));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strb r0, [r4]
    // add r0, #0x10
    ov07_0222260C(r4);
    // add r0, #0x34
    ov07_022222B4(r4);
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    *((u8*)(r4 + 1)) = 0;
    // strb r0, [r4]
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xc, 0x10);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xd, 0x12);
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ov07_022226C4(*((u32*)(r4 + 0xc)), 0x36, 6, *((u32*)(r4 + 0x24)));
    ov07_0221C448(*((u32*)(r4 + 8)), r2);
    Heap_Free(r4);
}




void ov07_02228638(void) {
    ov07_022324D8(0x58);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 8)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 8)), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 4)) = r0;
    ov07_0221C468(*((u32*)(r4 + 8)));
    ov07_0221FAA0(*((u32*)(r4 + 8)), r0);
    *((u16*)(r4 + 6)) = r0;
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_02228510, r4);
}




void ov07_02228684(void) {
    *((u8*)(r1 + 1)) = (*((u8*)(r1 + 1)) + 1);
    *((u8*)(r1 + 1)) = 0;
    // strb r0, [r4]
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0xc)), 1, r0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x10)), 2);
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strh r2, [r0]
    // and r2, r3
    // strh r1, [r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0, 0xFFFFC0FF, *((u16*)0x0400004A));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    *((u8*)(r4 + 1)) = 0;
    // strb r0, [r4]
    // and r0, r1
    // str r0, [r3]
    ov07_0221C448(*((u32*)(r4 + 4)), r2, (1 << 0x1a));
    Heap_Free(r4);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0xc)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x10)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}




void ov07_02228750(void) {
    ov07_022324D8(0x14);
    *((u32*)(r0 + 4)) = r5;
    ov07_0221C514(r5);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), 0);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), 1);
    *((u32*)(r4 + 0x10)) = r0;
    // and r2, r1
    // str r1, [r0]
    // add r0, #0x4a
    // strh r1, [r0]
    // and r2, r1
    // strh r1, [r0]
    ov07_0221C468(*((u32*)(r4 + 4)), ((0x12 << 8) | *((u16*)(1 << 0x1a))), *((u16*)(1 << 0x1a)));
    ov07_0221FA80(*((u32*)(r4 + 4)), r0);
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0221FA90(*((u32*)(r4 + 4)), r0);
    // str r0, [sp, #0x18]
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0xc))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221FA78(*((u32*)(r4 + 4)));
    // str r0, [sp, #0x1c]
    ov07_0221BFD0(r5);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0xe0
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    PaletteData_LoadNarc_CustomTint(((r6 << 0x14) >> 0x10), 0x20, r7, r0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02228684, r4);
}




void ov07_02228834(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02228850: ; jump table
    Pokepic_SetAttr(*((u32*)(r1 + 0xc)), 0xe, 1);
    // strb r0, [r4]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r6, #0x20
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov07_02222590(r4, 0x64, 5, 0x64);
    *((u8*)(r5 + 0x18)) = (*((u8*)(r5 + 0x18)) + 1);
    ov07_0222260C(r6);
    *((u8*)(r5 + 0x18)) = (*((u8*)(r5 + 0x18)) + 1);
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    ov07_02222644(r6);
    // ldrsb r0, [r4, r0]
    _fflt(8);
    // ldr r0, [sp, #0x28]
    _fmul(r0);
    // ldr r2, [sp, #0x24]
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x1c)), r0);
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // asr r2, r2, #0x10
    ov07_022226FC(*((u32*)(r5 + 0x1c)), 2, (*((u32*)(r4 + 4)) << 0x10), *((u32*)(r5 + 0x34)));
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x1c)));
    // ldr r0, [sp, #0x14]
    // add r5, #0x2c
    // add r6, #0x2c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // add r1, sp, #0x18
    // add r1, #2
    // add r2, sp, #0x18
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x1c)));
    // add r2, sp, #0x18
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x1c)), 2, 2);
    // ldrsb r0, [r4, r0]
    _fflt(8);
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x1c)), r0, (0xfe << 0x16));
    *((u8*)(r5 + 0x18)) = r7;
    *((u8*)(r5 + 0x19)) = r7;
    // add r5, #0x2c
    // strb r0, [r4]
    // strb r0, [r4]
    // add r5, #0x20
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x1c)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov07_02222590(r5, 5, 0x64, 5);
    // add r6, #0x2c
    // add r5, #0x2c
    // strb r0, [r4]
    // str r7, [sp, #0xc]
    // add r6, #0x20
    ov07_0222260C(r4);
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    ov07_02222644(r6);
    // ldrsb r0, [r4, r0]
    _fflt(8);
    // ldr r0, [sp, #0x20]
    _fmul(r0);
    // ldr r2, [sp, #0x1c]
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x1c)), r0);
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // asr r2, r2, #0x10
    ov07_022226FC(*((u32*)(r5 + 0x1c)), 2, (*((u32*)(r4 + 4)) << 0x10), *((u32*)(r5 + 0x34)));
    // ldr r0, [sp, #0xc]
    // add r6, #0x2c
    // add r5, #0x2c
    // str r0, [sp, #0xc]
    // strb r0, [r4]
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xe, 0);
    ov07_0221C448(*((u32*)(r4 + 0x10)), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x14)));
}




void ov07_02228A50(void) {
    // str r0, [sp]
    ov07_022324D8(0x9c);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    // ldr r0, [sp]
    *((u32*)(r0 + 0x10)) = 0;
    ov07_0221C514(0);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_0221C468(*((u32*)(r4 + 0x10)));
    ov07_0221FA48(*((u32*)(r4 + 0x10)), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 2)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 0x29);
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    *((u16*)(r4 + 2)) = r0;
    ov07_0221C468(*((u32*)(r4 + 0x10)), 2);
    ov07_0221FAA0(*((u32*)(r4 + 0x10)), r0);
    *((u32*)(r4 + 4)) = r0;
    // mvn r1, r1
    ov07_02231E08(*((u32*)(r4 + 0x10)), 0, 0);
    // strh r1, [r0]
    *((u8*)(r4 + 0x18)) = 0;
    *((u8*)(r4 + 0x19)) = 0;
    ov07_0221C4E8(*((u32*)(r4 + 0x10)), 0);
    *((u32*)(r5 + 0x1c)) = r0;
    ManagedSprite_SetAffineOverwriteMode(2);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x1c)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x1c)), (r6 + 1));
    // add r5, #0x2c
    // ldr r0, [sp]
    ov07_0221FB78(0);
    // mvn r0, r0
    *((u8*)(r4 + 8)) = 1;
    // ldrsb r0, [r4, r7]
    _fflt(1);
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x1c)), r0, (0xfe << 0x16));
    // add r5, #0x2c
    ov07_0221C410(*((u32*)(r4 + 0x10)), ov07_02228834, r4);
}




void ov07_02228B38(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02228B54: ; jump table
    ov07_0221FA78(*((u32*)(r1 + 0xc)), r0);
    ov07_0221E6C8(*((u32*)(r4 + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 1, ((r0 << 0x10) >> 0x10), 1);
    // strb r0, [r4]
    ov07_0221FA78(*((u32*)(r4 + 0xc)));
    PaletteData_GetSelectedBuffersBitmask();
    // strb r0, [r4]
    // str r0, [sp]
    // add r0, #0xb4
    // ldrsh r1, [r1, r2]
    ov07_022227A8(r4, ov07_02236722, 0, 0);
    ov07_0221FA78(*((u32*)(r4 + 0xc)));
    // str r1, [sp]
    PaletteData_BlendPalettes(0, 0xff, 0xa);
    ov07_0221FA78();
    // str r1, [sp]
    PaletteData_BlendPalettes(0, 0xff, 0xa);
    *((u8*)(r4 + 3)) = 3;
    // eor r0, r1
    *((u8*)(r4 + 2)) = 1;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strb r0, [r4]
    // add r0, #0xb4
    ov07_022227D8(r4, *((u8*)(r4 + 2)));
    // strb r0, [r4]
    // strb r0, [r4]
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) - 1);
    ov07_0221FA78(*((u32*)(r4 + 0xc)));
    // str r1, [sp]
    PaletteData_BlendPalettes(0, 0xff, 0);
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r5, r7]
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0, 0xb4);
    // add r5, #0x14
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 8)), 3, 0, 0xb4);
    ov07_0221C448(*((u32*)(r4 + 0xc)), r2);
    Heap_Free(r4);
}




void ov07_02228C8C(void) {
    ov07_022324D8(0xd8);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 0xc)) = r5;
    ov07_0221C514(r5);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C4A0(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 8)) = r0;
    ov07_0221FAB0(*((u32*)(r4 + 0xc)));
    // add r2, #0x14
    ov07_02232020(r5, 0xa, r4, (r4 + 4));
    Pokepic_GetAttr(*((u32*)(r4 + 0x1c)), 0);
    *((u16*)(r5 + 0x14)) = r0;
    Pokepic_GetAttr(*((u32*)(r5 + 0x1c)), 1);
    *((u16*)(r5 + 0x16)) = r0;
    // add r5, #0x14
    ov07_0221C410(*((u32*)(r4 + 0xc)), ov07_02228B38, r4);
}




void ov07_02228D08(void) {
    // add r0, #0x40
    // strb r0, [r4]
    // add r0, #0x1c
    // add r0, #0x64
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
}




void ov07_02228D64(void) {
    ov07_022324D8(0x8c);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 0xc)) = r5;
    ov07_0221C514(r5);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C4A0(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x18)) = r0;
    ov07_0221C4A8(r5, 0);
    ov07_0221C470(*((u32*)(r4 + 0xc)));
    ov07_0221C468();
    ov07_0221FA48(*((u32*)(r4 + 0xc)), r0);
    *((u32*)(r4 + 0x14)) = r0;
    ov07_02231FA0((r4 + 4));
    Pokepic_GetAttr(*((u32*)(r4 + 0x14)), 0x29);
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    *((u16*)(r4 + 6)) = r0;
    ov07_02222004(*((u32*)(r4 + 0xc)), r6);
    ov07_0222202C(*((u32*)(r4 + 0xc)), r6);
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r2, [sp, #4]
    // sub r2, #0x28
    // add r2, r1, r2
    // add r0, #0x40
    // asr r2, r2, #0x10
    ov07_02222268(r4, ((0x14 * r7) << 0x10));
    ov07_0221FAF8(r5, 2);
    ov07_0221FAF8(r5, 1);
    // lsl r3, r6
    // lsl r3, r1
    // sub r2, #0x21
    ov07_02231E44(*((u32*)(r4 + 0xc)), (((1 | 0x20) | 1) | 1), 0x20, 0x20);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x64
    ov07_02222AC4(r4, 0x1f, 0, 0);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x18)), r5);
    ov07_0221C410(*((u32*)(r4 + 0xc)), ov07_02228D08, r4);
}




void ov07_02228E70(void) {
    // neg r1, r2
    // neg r2, r1
    // add r0, #0x5c
    ov07_022223F0(r1, *((u32*)(ov07_0223674C + (ov07_0223674C << 3))), *((u32*)(ov07_0223674C + (*((u8*)(r1 + 2)) << 3))), *((u32*)(ov07_02236750 + (ov07_0223674C << 3))));
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    // eor r0, r1
    *((u8*)(r4 + 1)) = 1;
    // strb r0, [r4]
    // add r0, #0x5c
    ov07_02222440(r4, *((u8*)(r4 + 1)));
    Pokepic_SetAttr(*((u32*)(r4 + 0x28)), 9, ((*((u32*)(r4 + 0x5c)) << 0x10) >> 0x10));
    // strb r0, [r4]
    // strb r0, [r4]
    Pokepic_SetAttr(*((u32*)(r4 + 0x28)), 9, 0);
    ov07_0221C448(*((u32*)(r4 + 4)), r5);
    Heap_Free(r4);
}




void ov07_02228F14(void) {
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x38
    // strb r0, [r4]
    // add r1, sp, #4
    // add r3, sp, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, #0x38
    // strb r0, [r4]
}




void ov07_02228F88(void) {
    ov07_022324D8(0x70);
    ov07_02231FE4(r5, r0);
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C470(*((u32*)(r4 + 4)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x2c)) = r0;
    Pokepic_SetAttr(*((u32*)(r4 + 0x28)), 0xb, 0x64);
    ov07_0221C4A8(r5, 0);
    ov07_0221C4A8(r5, 1);
    *((u16*)(r4 + 0x1c)) = r0;
    ov07_0221C4A8(r5, 2);
    *((u16*)(r4 + 0x1e)) = r0;
    ov07_0221C4A8(r5, 3);
    *((u16*)(r4 + 0x20)) = r0;
    ov07_0221C4A8(r5, 4);
    *((u16*)(r4 + 0x22)) = r0;
    ov07_0221C4A8(r5, 5);
    *((u32*)(r4 + 0x24)) = r0;
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_02228E70, r4);
    ov07_0221C410(ov07_02228F14, r4);
}




void ov07_02229024(void) {
    // str r0, [sp]
    // add r0, #0x4c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // strb r0, [r5]
    // add r0, #0x4c
    // strb r0, [r5]
    // ldrsh r3, [r5, r2]
    // ldrsh r2, [r4, r7]
    // add r2, r3, r2
    // ldrsh r3, [r5, r3]
    // ldrsh r3, [r5, r3]
}




void ov07_022290BC(void) {
    ov07_022324D8(0x70);
    ov07_02231FE4(r4, r0);
    ov07_0221C768(*((u32*)(r7 + 4)), 1);
    *((u32*)(r7 + 0x48)) = 6;
    *((u32*)(r7 + 0x48)) = 5;
    *((u32*)(r7 + 0x48)) = 4;
    *((u32*)(r7 + 0x48)) = 3;
    *((u32*)(r7 + 0x48)) = 2;
    *((u32*)(r7 + 0x48)) = 1;
    *((u32*)(r7 + 0x48)) = 0;
    // add r5, #0x28
    ov07_0221FA48(*((u32*)(r7 + 4)), 0);
    *((u32*)(r4 + 0x38)) = r0;
    ov07_02231FA0(r5);
    ov07_0221C410(*((u32*)(r7 + 4)), ov07_02229024, r7);
}




void ov07_0222915C(void) {
    // str r0, [sp]
    // add r0, #0x40
    // str r0, [sp]
    // add r0, #0x64
    // strb r0, [r4]
    // add r0, #0x40
    // strb r0, [r4]
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // sub r1, r2, r1
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
}




void ov07_02229220(void) {
    ov07_022324D8(0x88);
    ov07_02231FE4(r5, r0);
    ov07_0221C4E8(*((u32*)(r4 + 4)), 0);
    *((u32*)(r4 + 0x38)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), 1);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x30)) = r0;
    ov07_0221C470(*((u32*)(r4 + 4)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x34)) = r0;
    // add r1, #0x28
    ov07_02231FA0(*((u32*)(r4 + 0x30)), r4);
    // add r1, #0x2c
    ov07_02231FA0(*((u32*)(r4 + 0x34)), r4);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222915C, r4);
}




void ov07_0222928C(void) {
    // add r0, #0x8c
    // add r1, #0xb0
    // add r0, #0xd4
    // add r1, #0xd4
}




void ov07_022292E4(void) {
    ov07_022324D8(0xe8);
    // add r1, #0x10
    ov07_02231FE4(r6, r0);
    ov07_0221C4A8(r6, 0);
    *((u16*)(r4 + 0xc)) = r0;
    ov07_0221C4A8(r6, 1);
    *((u16*)(r4 + 0xe)) = r0;
    ov07_0221C4A8(r6, 2);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C4A8(r6, 3);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C468(r6);
    ov07_02222004(r6, r0);
    *((u32*)(r4 + 0x38)) = r7;
    ManagedSprite_SetAffineOverwriteMode(r7, 2);
    ov07_0221C468(r6);
    ov07_0221FA48(r6, r0);
    *((u32*)(r4 + 0x44)) = r0;
    ov07_0221C470(r6);
    ov07_0221FA48(r6, r0);
    *((u32*)(r4 + 0x58)) = r0;
    // add r1, #0x40
    ov07_02231FA0(*((u32*)(r4 + 0x44)), r4);
    // add r1, #0x54
    ov07_02231FA0(*((u32*)(r4 + 0x58)), r4);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r2, r1
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrsh r3, [r4, r3]
    // ldrsh r2, [r4, r2]
    // mov ip, r3
    // ldrsh r3, [r4, r3]
    // add r0, #0x8c
    // add r1, #0xb0
    // mov r3, ip
    // add r3, r3, r7
    // asr r3, r3, #0x10
    ov07_02222338(r4, r4, 0x40, (0xc << 0x10));
    ov07_0221C468(r6);
    ov07_0221FA04(r6, r0);
    ov07_0221C470(r6);
    ov07_0221FA04(r6, r0);
    // mvn r0, r0
    ov07_0221C468(r6);
    ov07_0221FA04(r6, r0);
    ov07_0221C470(r6);
    ov07_0221FA04(r6, r0);
    // mvn r0, r0
    // add r0, #0xd4
    ov07_022223F0(r4, (0x00000E38 * (r5 * 0)), (0x00005C71 * (r5 * 0)), 0xa);
    // add r0, #0xd4
    ov07_022223F0(r4, (0x00003FFF * r5), (r2 * r5), 0xa);
    // add r1, #0xd4
    ManagedSprite_SetAffineZRotation(*((u32*)(r4 + 0x38)), ((*((u32*)r4) << 0x10) >> 0x10));
    // add r0, #0x8c
    // add r1, #0xb0
    ov07_022223CC(r4, r4, *((u32*)(r4 + 0x38)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x38)));
    ov07_0221C410(*((u32*)(r4 + 0x14)), ov07_0222928C, r4);
}




void ov07_02229480(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222949C: ; jump table
    // ldrsh r2, [r4, r0]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x9c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02222590(r1, ((0x64 * r2) << 0x10), ((0x3c * r2) << 0x10), 5);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    // add r0, #0x9c
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x9c
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov07_02222590(r4, ((0x3c * r2) << 0x10), ((r2 * 0x96) << 0x10), 0x96);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    // add r0, #0x9c
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    ov07_02222644(r4);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x40)));
    // add r2, #0xb0
    // ldrsh r0, [r4, r0]
    ov07_02222674(0x16, 0x10, *((u32*)r4));
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // add r2, r2, r3
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x40)), 0x14, (0x16 << 0x10), r0);
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) - 1);
    // strh r1, [r0]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    // add r0, #0x9c
    ov07_0222260C(r4, (*((u8*)(r4 + 0xc)) | (*((u8*)(r4 + 0xd)) << 8)));
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    // add r0, #0x9c
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    ov07_02222644(r4);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x40)));
    // add r2, #0xb0
    // ldrsh r0, [r4, r0]
    ov07_02222674(0x16, 0x10, *((u32*)r4));
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // add r2, r2, r3
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x40)), 0x14, (0x16 << 0x10), r0);
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) - 1);
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 1);
    // strh r1, [r0]
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x44)), (*((u8*)(r4 + 0xc)) | (*((u8*)(r4 + 0xd)) << 8)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x48)));
    ov07_0221C448(*((u32*)(r4 + 0x1c)), r5);
    ov07_02232508(r4);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x40)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x28)));
}




void ov07_02229630(void) {
    ov07_022324D8(0xd4);
    // add r1, #0x18
    ov07_02231FE4(r5, r0);
    ov07_0221C4C0(r5, 0);
    *((u32*)(r4 + 0x44)) = r0;
    ov07_0221C4C0(r5, 1);
    *((u32*)(r4 + 0x48)) = r0;
    // mvn r1, r1
    ov07_02231E08(*((u32*)(r4 + 0x1c)), 0, 0);
    ov07_0221C4A8(r5, 0);
    *((u8*)(r4 + 0xc)) = 0;
    *((u8*)(r4 + 0xd)) = 0x1f;
    *((u8*)(r4 + 0xe)) = 0;
    *((u8*)(r4 + 0xf)) = 0x1f;
    *((u8*)(r4 + 0x10)) = 0x1f;
    *((u8*)(r4 + 0x11)) = 4;
    ov07_0221BFC0(r5, 0);
    *((u32*)(r4 + 0x40)) = *((u32*)(r4 + 0x44));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x48)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x40)), 0);
    *((u16*)(r4 + 0x14)) = 0xb3;
    *((u16*)(r4 + 0x16)) = 0x78;
    ov07_0221FAE8(r5);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x40)), (r0 + 1));
    // mvn r0, r0
    *((u16*)(r4 + 0x12)) = 0;
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    *((u32*)(r4 + 0x40)) = *((u32*)(r4 + 0x48));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x44)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x40)), 1);
    *((u16*)(r4 + 0x14)) = 0x90;
    *((u16*)(r4 + 0x16)) = 0x40;
    *((u32*)(r4 + 0x40)) = *((u32*)(r4 + 0x44));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x48)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x40)), 0);
    *((u16*)(r4 + 0x14)) = 0x4c;
    *((u16*)(r4 + 0x16)) = 0x78;
    ov07_0221FAE8(r5);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x40)), (r0 + 1));
    *((u16*)(r4 + 0x12)) = 1;
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x40)), 0x14, 0x16);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x40)), 2);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x40)), 1);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // asr r1, r1, #0x10
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x9c
    ov07_02222590(r4, ((0x12 * 0x64) << 0x10), ((0x12 * 0x64) << 0x10), 0x64);
    // add r0, #0x9c
    ov07_0222260C(r4);
    // add r0, #0x9c
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    ov07_02222644(r4);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x40)));
    // add r2, #0xb0
    // ldrsh r0, [r4, r0]
    ov07_02222674(0x16, 0x10, *((u32*)r4));
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // add r2, r2, r3
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x40)), 0x14, (0x16 << 0x10), r0);
    ov07_0221C410(*((u32*)(r4 + 0x1c)), ov07_02229480, r4);
}




void ov07_022297B8(void) {
    // str r0, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022297D4: ; jump table
    // add r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcc
    ov07_02222590(r1, *((u8*)(ov07_02236704 + r3)), *((u8*)(ov07_02236705 + r3)), *((u8*)(ov07_02236706 + r3)));
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    // strb r0, [r4]
    // add r0, #0xcc
    ov07_0222260C(r4);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xc, 0xcc);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xd, 0xce);
    // add r2, #0xe0
    // ldrsh r0, [r4, r0]
    ov07_02222674(0x20, *((u32*)(r4 + 0x24)), *((u32*)r4));
    // ldrsh r2, [r4, r2]
    // add r2, r2, r3
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 1, 0x20, r0);
    // strb r0, [r4]
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 0xc)) = 0;
    // strb r0, [r4]
    // add r1, sp, #0x2c
    // add r1, #2
    // add r2, sp, #0x2c
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)));
    // add r1, sp, #0x14
    // ldrsh r0, [r1, r0]
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x30)), 0, 2);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x7c)), 0, 2);
    // strb r0, [r4]
    // add r1, sp, #0x28
    // add r1, #2
    // add r2, sp, #0x28
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)));
    // add r1, sp, #0x14
    // ldrsh r0, [r1, r0]
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x30)), 0, 2);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x7c)), 0, 2);
    // strh r1, [r0]
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    ov07_02222E48((r4 + 4), 0x10, 0x10);
    // add r0, #8
    // sub r2, #0x10
    ov07_02222E48(r4, 0, 0);
    // strh r1, [r0]
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x30)), 0, 0x10);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x7c)), 0, 0x10);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 1)) = 0;
    // add r1, sp, #0x24
    // add r1, #2
    // add r2, sp, #0x24
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)));
    // add r1, sp, #0x20
    // add r1, #2
    // add r2, sp, #0x20
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x7c)));
    // add r0, #0xc8
    // str r0, [sp]
    // add r0, #0xca
    // str r0, [sp, #4]
    // add r3, sp, #0x14
    // ldrsh r0, [r3, r0]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
    ov07_02222DC8(0x12, 0x10, 0xe);
    // add r0, #0x2c
    // str r0, [sp]
    // add r2, sp, #0x14
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov07_02222DE4(0x12, 0x10, 0xc8, 0xca);
    // add r0, #0x28
    // str r0, [sp]
    // add r2, sp, #0x14
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov07_02222E0C(0x12, 0x10, 0xc8, 0xca);
    *((u32*)(r4 + 0x2c)) = (0xa << 0xe);
    // strb r0, [r4]
    // add r2, sp, #0x30
    // strb r0, [r2]
    // add r1, sp, #0x1c
    // add r1, #2
    // add r2, sp, #0x1c
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)), (0xa - 1), (r2 + 1), (ov07_022366E1 + 1));
    // add r1, sp, #0x18
    // add r1, #2
    // add r2, sp, #0x18
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x7c)));
    // add r3, sp, #0x14
    // ldrsh r0, [r3, r0]
    // str r0, [sp]
    // ldrsh r0, [r3, r0]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // add r1, sp, #0x30
    // ldrsb r1, [r1, r5]
    // str r1, [sp, #0xc]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
    // add r0, #0x34
    // add r1, #0x58
    ov07_02222338(r4, r4, 0xa);
    // add r3, sp, #0x14
    // ldrsh r0, [r3, r0]
    // str r0, [sp]
    // ldrsh r0, [r3, r0]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // add r1, sp, #0x30
    // add r1, #1
    // ldrsb r1, [r1, r2]
    // str r1, [sp, #0xc]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
    // add r0, #0x80
    // add r1, #0xa4
    ov07_02222338(r4, r4, 6);
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    // strb r0, [r4]
    // add r0, #0x34
    // add r1, #0x58
    ov07_022223CC(r4, *((u32*)(r4 + 0x30)));
    // add r0, #0x80
    // add r1, #0xa4
    ov07_022223CC(r4, r4, *((u32*)(r4 + 0x7c)));
    // strb r0, [r4]
    // strb r0, [r4]
    ov07_02222E48((r4 + 4), 0, (0 - 2));
    // add r0, #8
    ov07_02222E48(r4, 0x10, 2);
    // strh r1, [r0]
    // strb r0, [r4]
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x30)));
    // add r5, #0x4c
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), r7);
    // ldr r1, [sp, #0x10]
    ov07_0221C448(*((u32*)(r4 + 0x10)));
    Heap_Free(r4);
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    // add r7, sp, #0x14
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)));
    // ldrsh r0, [r7, r0]
    ov07_0221FAE8(*((u32*)(r4 + 0x10)));
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), r0);
    // ldrsh r0, [r7, r0]
    ov07_0221FAE8(*((u32*)(r4 + 0x10)));
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), r0);
    ov07_0221FAE8();
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), (r0 + 1));
    // add r5, #0x4c
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x30)));
    // add r6, #0x4c
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), r7);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x18)));
}




void ov07_02229BFC(void) {
    // str r0, [sp]
    ov07_022324D8(0xf0);
    // strb r1, [r4]
    // ldr r0, [sp]
    *((u8*)(r0 + 1)) = 0;
    *((u32*)(r0 + 0x10)) = r0;
    *((u32*)(r0 + 0x18)) = r6;
    *((u32*)(r0 + 0x14)) = r5;
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0x10;
    ov07_0221C468(*((u32*)(r0 + 0x10)), 0);
    ov07_0221FA48(*((u32*)(r4 + 0x10)), r0);
    *((u32*)(r4 + 0x1c)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 0x20)) = r0;
    ov07_0221C468(*((u32*)(r4 + 0x10)));
    ov07_0221FAA0(*((u32*)(r4 + 0x10)), r0);
    *((u32*)(r4 + 0x24)) = r0;
    // ldr r0, [sp]
    ov07_0221FAF8(2);
    // ldr r0, [sp]
    ov07_0221FAF8(1);
    // lsl r1, r5
    // lsl r5, r3
    ov07_02231E44(*((u32*)(r4 + 0x10)), ((1 | 1) | 1), (1 - 2), (1 - 2));
    // strh r1, [r0]
    // ldr r1, [sp]
    // add r0, sp, #4
    ov07_0221F9E8(0x04000052, (*((u32*)(r4 + 4)) | (*((u32*)(r4 + 8)) << 8)));
    *((u32*)(r4 + 0x30)) = r7;
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    // add r5, #0x4c
    // add r7, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x18)), r7);
    *((u32*)(r5 + 0x30)) = r0;
    // add r5, #0x4c
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x30)), 1);
    ov07_0221FAE8(*((u32*)(r4 + 0x10)));
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), (r0 + 1));
    // add r5, #0x4c
    ov07_0221C4A8(*((u32*)(r4 + 0x10)), 0);
    // ldr r0, [sp]
    ov07_0221BFC0();
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x30)), 0xa0, 0x36);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x7c)), 0x50, 0x27);
    ManagedSprite_SetPositionXY(0x64, 0x36);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x7c)), 0xb4, 0x27);
    ov07_0221C410(*((u32*)(r4 + 0x10)), ov07_022297B8, r4);
}




void ov07_02229D40(void) {
    *((u8*)(r1 + 6)) = (*((u8*)(r1 + 6)) + 1);
    *((u8*)(r1 + 7)) = (*((u8*)(r1 + 7)) - 1);
    // strh r1, [r0]
    *((u8*)(r1 + 4)) = (*((u8*)(r1 + 4)) + 1);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r1 + 0x14)), (*((u8*)(r1 + 6)) | (*((u8*)(r1 + 7)) << 8)));
    // add r0, r5, r6
    *((u8*)(*((u8*)r4) + 1)) = (*((u8*)(*((u8*)r4) + 1)) + 1);
    *((u8*)(*((u8*)r4) + 1)) = 0;
    // strb r0, [r5]
    *((u8*)(r5 + 6)) = (*((u8*)(r5 + 6)) - 1);
    *((u8*)(r5 + 7)) = (*((u8*)(r5 + 7)) + 1);
    // strb r0, [r5]
    // strh r1, [r0]
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x14)), (*((u8*)(r5 + 6)) | (*((u8*)(r5 + 7)) << 8)), *((u8*)(*((u8*)r4) + 1)));
    ov07_0221C448(*((u32*)(r5 + 8)), r7);
    Heap_Free(r5);
    Sprite_TickFrame(*((u32*)*((u32*)(r5 + 0x14))));
    SpriteSystem_DrawSprites(*((u32*)(r5 + 0x10)));
}




void ov07_02229E50(void) {
    // str r3, [sp]
    ov07_0221BFD0();
    Heap_Alloc(0x44);
    GF_AssertFail();
    *((u8*)(r4 + 4)) = 0;
    // strb r0, [r4]
    *((u32*)(r4 + 0xc)) = r5;
    *((u32*)(r4 + 0x10)) = r6;
    // add r0, sp, #4
    *((u32*)(r4 + 8)) = r7;
    ov07_0221F9E8(0, r7);
    // mvn r1, r1
    ov07_02231E08(*((u32*)(r4 + 8)), 0, 0);
    ov07_0221C4A8(*((u32*)(r4 + 8)), 0);
    *((u8*)(r4 + 5)) = r0;
    *((u8*)(r4 + 6)) = 0;
    *((u8*)(r4 + 7)) = 0xf;
    // strh r1, [r0]
    // ldr r0, [sp]
    *((u32*)(r4 + 0x14)) = 0x04000052;
    // add r2, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0x14)) = r0;
    ov07_0221C470(r7);
    ov07_0223192C(r7, r0);
    ov07_0221C470(r7);
    ov07_0223192C(r7, r0);
    ov07_0221C468(r7);
    ov07_0223192C(r7, r0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 1);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 0x80, 0x50);
    ov07_0221C470(r7);
    ov07_0223192C(r7, r0);
    ov07_0221C468(r7);
    ov07_0223192C(r7, r0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 0x80, 0x50);
    // add r1, r4, r6
    *((u8*)(r1 + 1)) = 0;
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x14)), 2);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x14)), 1);
    ov07_0221BFC0(*((u32*)(r4 + 8)));
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x14)), 0xBF800000, (0xfe << 0x16));
    ov07_0221C3F4(r7, ov07_02229D40, r4, 0x0000044C);
}




void ov07_02229FC4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229FE2: ; jump table
    *((u8*)(r1 + 9)) = (*((u8*)(r1 + 9)) + 1);
    *((u8*)(r1 + 0xa)) = (*((u8*)(r1 + 0xa)) - 1);
    // strb r0, [r4]
    // strh r1, [r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A030: ; jump table
    *((u32*)(r1 + 0x34)) = *((u32*)(r1 + 0x18));
    *((u32*)(r1 + 0x38)) = *((u32*)(r1 + 0x24));
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x34)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x38)), 1);
    *((u32*)(r4 + 0x34)) = *((u32*)(r4 + 0x1c));
    *((u32*)(r4 + 0x38)) = *((u32*)(r4 + 0x20));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x34)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x38)), 1);
    *((u32*)(r4 + 0x34)) = *((u32*)(r4 + 0x28));
    *((u32*)(r4 + 0x38)) = *((u32*)(r4 + 0x2c));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x34)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x38)), 1);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x34)));
    // ldrsh r0, [r0, r2]
    // add r3, sp, #8
    // str r0, [sp]
    // ldrsh r2, [r5, r2]
    // str r0, [sp, #4]
    // ldrsh r1, [r3, r1]
    // ldrsh r3, [r3, r5]
    // add r0, #0x3c
    ov07_02222268(r4, 2, (*((u32*)(r4 + 0x30)) << 3));
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x38)));
    // ldrsh r0, [r0, r2]
    // add r3, sp, #8
    // str r0, [sp]
    // ldrsh r2, [r5, r2]
    // str r0, [sp, #4]
    // ldrsh r1, [r3, r1]
    // ldrsh r3, [r3, r5]
    // add r0, #0x60
    ov07_02222268(r4, 2, (*((u32*)(r4 + 0x30)) << 3));
    *((u32*)(r4 + 0x30)) = (*((u32*)(r4 + 0x30)) + 1);
    // strb r0, [r4]
    // add r0, #0x3c
    ov07_022222F0(r4, *((u32*)(r4 + 0x34)));
    // add r0, #0x60
    ov07_022222F0(r4, *((u32*)(r4 + 0x38)));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x34)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x38)), 0);
    // strb r0, [r4]
    // strb r0, [r4]
    *((u8*)(r4 + 9)) = (*((u8*)(r4 + 9)) - 1);
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    // strb r0, [r4]
    // strh r1, [r0]
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x18)), (*((u8*)(r4 + 9)) | (*((u8*)(r4 + 0xa)) << 8)));
    ov07_0221C448(*((u32*)(r4 + 0xc)), r7);
    Heap_Free(r4);
    Sprite_TickFrame(*((u32*)*((u32*)(r4 + 0x18))));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x14)));
}




void ov07_0222A1F0(void) {
    // str r0, [sp]
    ov07_0221BFD0();
    Heap_Alloc(0x84);
    GF_AssertFail();
    *((u8*)(r4 + 7)) = 0;
    // strb r0, [r4]
    *((u32*)(r4 + 0x10)) = r5;
    *((u32*)(r4 + 0x14)) = r6;
    *((u32*)(r4 + 0x30)) = 0;
    // ldr r0, [sp]
    // ldr r1, [sp]
    *((u32*)(r4 + 0xc)) = 0;
    // add r0, sp, #4
    ov07_0221F9E8(0);
    // mvn r1, r1
    ov07_02231E08(*((u32*)(r4 + 0xc)), 0, 0);
    *((u8*)(r4 + 9)) = 0;
    *((u8*)(r4 + 0xa)) = 0xf;
    // strh r2, [r0]
    ov07_0221C4A8(*((u32*)(r4 + 0xc)), 0, (*((u8*)(r4 + 9)) | (*((u8*)(r4 + 0xa)) << 8)));
    *((u8*)(r4 + 8)) = r0;
    *((u32*)(r4 + 0x18)) = r7;
    // add r7, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)), r7);
    *((u32*)(r5 + 0x18)) = r0;
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x18)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x1c)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x20)), 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x24)), 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x28)), 2);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x2c)), 3);
    ManagedSprite_SetFlipMode(*((u32*)(r4 + 0x18)), 1);
    ManagedSprite_SetFlipMode(*((u32*)(r4 + 0x24)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x18)), 1);
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x18)), 0, 2);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x18)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x20)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x28)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x2c)), 0);
    // ldr r0, [sp]
    ov07_0221C3F4(ov07_02229FC4, r4, 0x0000044C);
}




void ov07_0222A328(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A344: ; jump table
    *((u8*)(r1 + 0xe)) = (*((u8*)(r1 + 0xe)) - 1);
    *((u8*)(r1 + 0xc)) = (*((u8*)(r1 + 0xc)) + 1);
    *((u8*)(r1 + 0xd)) = (*((u8*)(r1 + 0xd)) + 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x10)), 1);
    *((u8*)(r4 + 0xd)) = 0;
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 1);
    _fadd(*((u32*)(r4 + 0x38)), 0x3DCCCCCD);
    *((u32*)(r4 + 0x38)) = r0;
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x38)));
    *((u8*)(r4 + 0xd)) = 0;
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 1);
    _fsub(*((u32*)(r4 + 0x38)), 0x3DCCCCCD);
    *((u32*)(r4 + 0x38)) = r0;
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x38)));
    *((u8*)(r4 + 0xd)) = 0;
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) - 1);
    // str r1, [r0]
    *((u8*)(r4 + 0xd)) = 0;
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 0xd)) = (*((u8*)(r4 + 0xd)) + 1);
    *((u8*)(r4 + 0xd)) = 0;
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    LCRandom((*((u8*)(r4 + 0xc)) + 1), 1);
    _s32_div_f(0xa);
    // add r2, sp, #8
    // add r1, sp, #8
    // add r2, #2
    // add r5, #0xa
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x10)));
    // add r3, sp, #8
    // ldrsh r0, [r0, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r5, r2]
    // ldrsh r1, [r3, r1]
    // ldrsh r3, [r3, r5]
    // add r0, #0x14
    ov07_02222268(r4, 0, (*((u8*)(r4 + 0xf)) << 2));
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    // add r0, #0x14
    ov07_022222F0(r4, *((u32*)(r4 + 0x10)));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    // str r1, [r0]
    ov07_0221C448(*((u32*)r4), r5);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x10)));
}




void ov07_0222A4B4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A4CC: ; jump table
    // strb r0, [r4]
    // str r2, [r3, r0]
    // strb r0, [r4]
    // strb r0, [r4]
    Sprite_DeleteAndFreeResources(*((u32*)(r1 + 0x24)), *((u32*)(r1 + 0x00000514)), 0, (r1 + 4));
    // add r5, #0x40
    // strb r0, [r4]
    ov07_0221C448(*((u32*)(r4 + 8)), r2);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
}




void ov07_0222A58C(void) {
    // str r0, [sp]
    ov07_0221BFD0();
    Heap_Alloc(0x00000564);
    GF_AssertFail();
    *((u8*)(r6 + 1)) = 0;
    // strb r0, [r6]
    *((u32*)(r6 + 0xc)) = r4;
    // ldr r0, [sp]
    *((u32*)(r6 + 0x10)) = r5;
    *((u32*)(r6 + 8)) = 0;
    // ldr r1, [sp]
    // add r0, sp, #0x1c
    ov07_0221F9E8(0);
    // mvn r1, r1
    ov07_02231E08(*((u32*)(r6 + 8)), 0, 0);
    ov07_0221C4A8(*((u32*)(r6 + 8)), 0);
    *((u8*)(r6 + 2)) = r0;
    *((u8*)(r6 + 2)) = 0xc;
    *((u32*)(r6 + 0x24)) = r7;
    // str r4, [sp, #4]
    // add r0, r6, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // str r0, [sp, #0xc]
    // add r2, sp, #0x1c
    SpriteSystem_NewSprite(*((u32*)(r6 + 0xc)), *((u32*)(r6 + 0x10)));
    *((u32*)(r5 + 0x24)) = r0;
    // add r1, #0x20
    // strb r0, [r1]
    // add r1, #0x21
    // strb r0, [r1]
    LCRandom(0, r5);
    _s32_div_f(0xa);
    // add r1, #0xa
    // add r1, r4, r1
    // add r0, #0x22
    // strb r1, [r0]
    LCRandom(r5);
    _s32_div_f(6);
    // add r0, #0x23
    // strb r1, [r0]
    *((u32*)(r5 + 0x4c)) = (0xfe << 0x16);
    *((u32*)(r5 + 0x14)) = *((u32*)(r6 + 8));
    *((u32*)(r5 + 0x18)) = *((u32*)(r6 + 0xc));
    *((u32*)(r5 + 0x1c)) = *((u32*)(r6 + 0x10));
    // ldr r0, [sp, #0x10]
    *((u32*)(r5 + 0x50)) = *((u32*)(r6 + 0x10));
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #8]
    LCRandom((*((u32*)(r6 + 0x10)) << 3), ov07_022367CE);
    // ldr r2, [sp, #8]
    // ldrsh r1, [r2, r1]
    _s32_div_f(6);
    // ldr r2, [sp, #8]
    // ldrsh r0, [r2, r0]
    // add r0, r0, r1
    // asr r0, r0, #0x10
    // str r0, [sp, #0x14]
    LCRandom((2 << 0x10));
    // ldr r2, [sp, #8]
    // ldrsh r1, [r2, r1]
    _s32_div_f(4);
    // ldr r0, [sp, #0x18]
    // ldrsh r0, [r2, r0]
    // add r0, r0, r1
    // asr r2, r0, #0x10
    // ldr r1, [sp, #0x14]
    ManagedSprite_SetPositionXY(r7, ov07_022367CE);
    ManagedSprite_SetAffineOverwriteMode(r7, 2);
    ManagedSprite_SetAffineScale(r7, *((u32*)(r5 + 0x4c)), *((u32*)(r5 + 0x4c)));
    ManagedSprite_SetDrawFlag(r7, 0);
    // ldr r0, [sp]
    // ldr r2, [sp, #0xc]
    ov07_0221C3F4(ov07_0222A328, 0x0000044B);
    // ldr r0, [sp, #4]
    _s32_div_f((r0 + 1), 6);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // add r0, #0x40
    // str r0, [sp, #0xc]
    // add r5, #0x40
    // ldr r0, [sp]
    ov07_0221C3F4(*((u8*)(r6 + 2)), ov07_0222A4B4, r6, 0x0000044D);
}




void ov07_0222A710(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A72A: ; jump table
    ov07_0221C468(*((u32*)(r1 + 8)));
    ov07_0221FA48(*((u32*)(r4 + 8)), r0);
    Pokepic_SetAttr(6, 1);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x2c
    ov07_02222AF4(r4);
    // str r0, [r4]
    ov07_0221FAF8(*((u32*)(r4 + 8)), 1);
    ov07_02222D88(0, 0);
    ov07_0221BFD0(*((u32*)(r4 + 8)));
    // str r1, [sp]
    // str r5, [sp, #4]
    // str r1, [sp, #8]
    // str r6, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xcc
    ov07_02222CCC(0, 0xa0, 0xa0, (3 << 0xe));
    *((u32*)(r4 + 0x28)) = r0;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // str r0, [r4]
    ov07_02222D3C(*((u32*)(r4 + 0x28)));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, #0x2c
    ov07_02222AC4(r4, 2, 0x10, 0x10);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x2c
    ov07_02222AF4(r4);
    ov07_0221C468(*((u32*)(r4 + 8)));
    ov07_0221FA48(*((u32*)(r4 + 8)), r0);
    Pokepic_SetAttr(6, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // and r0, r1
    // str r0, [r2]
    ov07_0221EC7C(*((u32*)(r4 + 8)), 2, (1 << 0x1a));
    ov07_0221C448(*((u32*)(r4 + 8)), r5);
    Heap_Free(r4);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x24)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x20)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x10)));
}




void ov07_0222A838(void) {
    ov07_022324D8(0x54);
    ov07_02231FE4(r5, (r0 + 4));
    ov07_0221C4E8(*((u32*)(r4 + 8)), 0);
    *((u32*)(r4 + 0x20)) = r0;
    ManagedSprite_SetOamMode(2);
    // and r2, r1
    // str r1, [r0]
    // add r0, #0x4a
    // strh r1, [r0]
    // and r2, r1
    // strh r1, [r0]
    ov07_0221C4E8(*((u32*)(r4 + 8)), 1, *((u16*)(1 << 0x1a)));
    *((u32*)(r4 + 0x24)) = r0;
    ManagedSprite_SetOamMode(1);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x2c
    ov07_02222AC4(r4, 0x10, 2, 2);
    ov07_0221EB98(*((u32*)(r4 + 8)), 2);
    ToggleBgLayer(2, 1);
    ov07_0221C410(*((u32*)(r4 + 8)), ov07_0222A710, r4);
}




void ov07_0222A8D8(void) {
}




void ov07_0222A8EC(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldrsh r0, [r0, r1]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r4, [sp, #4]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r4, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov07_0222A988(void) {
    ov07_022324D8(0x38);
    *((u16*)(r0 + 0x1c)) = 0xa;
    ov07_02231FE4(r5, r0);
    // add r0, sp, #0
    ov07_0221F9E8(*((u32*)(r6 + 4)));
    *((u32*)(r6 + 0x28)) = r4;
    *((u16*)(r6 + 0x1e)) = 0;
    *((u16*)((r6 + 2) + 0x1e)) = 0;
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r6 + 8)), *((u32*)(r6 + 0x10)));
    *((u32*)(r5 + 0x28)) = r0;
    ManagedSprite_SetFlipMode(*((u32*)(r6 + 0x28)), 1);
    ManagedSprite_SetFlipMode(*((u32*)(r6 + 0x2c)), 1);
    // mvn r1, r1
    ManagedSprite_OffsetPositionXY(*((u32*)(r6 + 0x28)), 0x1f, 0);
    // mvn r1, r1
    ManagedSprite_OffsetPositionXY(*((u32*)(r6 + 0x2c)), 0x1f, 0x20);
    ManagedSprite_OffsetPositionXY(*((u32*)(r6 + 0x30)), 0x20, 0);
    ManagedSprite_OffsetPositionXY(*((u32*)(r6 + 0x34)), 0x20, 0x20);
    ov07_0221C410(*((u32*)(r6 + 4)), ov07_0222A8EC, r6);
}




void ov07_0222AA20(void) {
    // str r0, [sp, #0x1c]
    // str r4, [sp, #0x20]
    // ldrsh r0, [r6, r0]
    *((u16*)(r1 + 0x22)) = (0x22 + 1);
    // ldrsh r0, [r6, r0]
    ov07_0222A8D8(*((u32*)(r1 + 0x2c)));
    // ldrsh r0, [r5, r0]
    // mvn r1, r1
    ov07_02231E08(*((u32*)(r5 + 4)), 0, 0);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x2c)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x30)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x34)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x38)), 1);
    *((u32*)(r5 + 0x54)) = 0xf;
    *((u32*)(r5 + 0x58)) = 0;
    // ldrsh r0, [r5, r0]
    ov07_0221BFD0(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r5 + 0x18)), r0, 2, ((*((u32*)(r5 + 0x1c)) << 0x14) >> 0x10));
    *((u32*)(r5 + 0x3c)) = r0;
    // ldrsh r0, [r5, r0]
    ov07_0221BFD0(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r5 + 0x18)), r0, 2, ((*((u32*)(r5 + 0x1c)) << 0x14) >> 0x10));
    *((u32*)(r5 + 0x40)) = r0;
    // ldrsh r0, [r5, r0]
    ov07_0221BFD0(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r5 + 0x18)), r0, 2, ((*((u32*)(r5 + 0x1c)) << 0x14) >> 0x10));
    *((u32*)(r5 + 0x44)) = r0;
    // ldrsh r0, [r5, r0]
    ov07_0221BFD0(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r5 + 0x18)), r0, 2, ((*((u32*)(r5 + 0x1c)) << 0x14) >> 0x10));
    *((u32*)(r5 + 0x48)) = r0;
    // ldrsh r0, [r5, r0]
    ov07_0221BFD0(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r5 + 0x18)), r0, 2, ((*((u32*)(r5 + 0x1c)) << 0x14) >> 0x10));
    *((u32*)(r5 + 0x4c)) = r0;
    // ldrsh r0, [r5, r0]
    ov07_0221BFD0(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r5 + 0x18)), r0, 2, ((*((u32*)(r5 + 0x1c)) << 0x14) >> 0x10));
    *((u32*)(r5 + 0x50)) = r0;
    // ldrsh r0, [r5, r1]
    // sub r1, #0x23
    ov07_02231E08(*((u32*)(r5 + 4)), 0x22, 0x22);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x2c)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x30)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x34)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x38)), 1);
    *((u32*)(r5 + 0x54)) = 0xf;
    *((u32*)(r5 + 0x58)) = 0;
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x54)) = (*((u32*)(r5 + 0x54)) - 1);
    *((u32*)(r5 + 0x58)) = (*((u32*)(r5 + 0x58)) + 1);
    // strh r1, [r0]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x2c)), (*((u32*)(r5 + 0x54)) | (*((u32*)(r5 + 0x58)) << 8)));
    ov07_02222EF8(*((u32*)(r5 + 0x3c)));
    // ldr r1, [sp, #0x1c]
    ov07_0221C448(*((u32*)(r5 + 4)));
    Heap_Free(r5);
    SpriteSystem_DrawSprites(*((u32*)(r5 + 0x10)));
}




void ov07_0222ACAC(void) {
    // str r0, [sp]
    ov07_022324D8(0x5c);
    *((u16*)(r0 + 0x20)) = 0xa;
    // ldr r0, [sp]
    ov07_02231FE4(0xa, r0);
    // add r0, sp, #0xc
    ov07_0221F9E8(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x2c)) = r5;
    *((u16*)(r4 + 0x22)) = 0;
    // str r0, [sp, #8]
    LCRandom(1);
    // sub r2, r2, r1
    // ror r2, r0
    // add r0, r1, r2
    // add r0, r7, r0
    *((u16*)(r6 + 0x22)) = 0x1e;
    // add r2, sp, #0xc
    SpriteSystem_NewSprite(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x10)), (r0 << 0x1e));
    *((u32*)(r5 + 0x2c)) = r0;
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    ManagedSprite_SetFlipMode(*((u32*)(r4 + 0x30)), 1);
    ManagedSprite_SetFlipMode(*((u32*)(r4 + 0x34)), 1);
    // ldr r0, [sp]
    ov07_0221C468();
    // ldr r0, [sp]
    ov07_0221FA48(r0);
    Pokepic_GetAttr(0);
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    Pokepic_GetAttr(r5, 1);
    Pokepic_GetAttr(r5, 0x29);
    // ldr r0, [sp]
    ov07_0221C468();
    // ldr r0, [sp]
    ov07_0223192C(r0);
    // ldr r1, [sp, #4]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x2c)), 0x54);
    // ldr r0, [sp]
    ov07_0221C468();
    // ldr r0, [sp]
    ov07_0223192C(r0);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x2c)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x34)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x30)), 0x12);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x38)), 0x12);
    ManagedSprite_SetDrawPriority(0x12);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x34)), 0x12);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x30)), 0xa);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x38)), 0xa);
    // mvn r1, r1
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x2c)), 0x1f, 0);
    // mvn r1, r1
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x38)), 0x27, 4);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x34)), 0x20, 0);
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x30)), 0x28, 4);
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r4 + 0x2c)));
    *((u32*)(r4 + 0x1c)) = r0;
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222AA20, r4);
}




void ov07_0222AE14(void) {
    // add r0, #0x60
    // add r0, #0x60
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
}




void ov07_0222AEA0(void) {
    ov07_022324D8(0x84);
    ov07_02231FE4(r5, r0);
    ov07_0221C470(*((u32*)(r4 + 4)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x24)) = r0;
    Pokepic_GetAttr(1);
    // add r1, #0x58
    // strh r0, [r1]
    // ldrsh r1, [r4, r0]
    // add r0, #0x5c
    // strh r1, [r0]
    ov07_0221C470(*((u32*)(r4 + 4)), r4);
    ov07_0221FAA0(*((u32*)(r4 + 4)), r0);
    // add r1, #0x5a
    // strh r0, [r1]
    ov07_0221C4E8(r5, 0);
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C4E8(r5, 1);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C4E8(r5, 2);
    *((u32*)(r4 + 0x50)) = r0;
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x28)), 2);
    ov07_0221FAE8(r5);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x28)), r0);
    ov07_0221FAE8(r5);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x3c)), r0);
    ov07_0221FAE8(r5);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x50)), r0);
    ov07_0221C470(*((u32*)(r4 + 4)));
    ov07_0221FA04(*((u32*)(r4 + 4)), r0);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x28)), 0x1e);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x3c)), 0x32);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x50)), 0x46);
    ManagedSprite_SetDrawPriority(0x3c);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x3c)), 0x46);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x50)), 0x32);
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x60
    ov07_02222590(r4, 0x64, 0x14, 0x64);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222AE14, r4);
}




void ov07_0222AFAC(void) {
    // add r0, #0xa0
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // add r2, #0x30
    // str r0, [sp, #4]
    // add r0, #0x34
    // asr r2, r2, #0x10
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    // ldrsh r1, [r4, r0]
    // asr r3, r0, #0x10
    // add r2, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x58
    // asr r2, r2, #0x10
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r2, r1, r0
    // ldrsh r1, [r4, r0]
    // asr r3, r0, #0x10
    // add r2, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x7c
    // asr r2, r2, #0x10
    // ldrsh r3, [r4, r0]
    // ldrsh r2, [r4, r0]
    // str r3, [sp]
    // add r1, #0x30
    // str r0, [sp, #4]
    // add r0, #0x34
    // asr r1, r1, #0x10
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // ldrsh r2, [r4, r0]
    // asr r3, r0, #0x10
    // add r1, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x58
    // asr r1, r1, #0x10
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // ldrsh r2, [r4, r0]
    // asr r3, r0, #0x10
    // add r1, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x7c
    // asr r1, r1, #0x10
    // add r0, #0xa0
    // add r0, #0xa0
    // strb r1, [r0]
    // strb r0, [r4]
    // add r0, #0x58
    // add r0, #0x34
    // add r0, #0x7c
    // add r0, #0xa0
    // strb r0, [r4]
    // strb r0, [r4]
}




void ov07_0222B130(void) {
    ov07_022324D8(0xa8);
    ov07_02231FE4(r5, r0);
    // add r0, #0xa1
    // strb r1, [r0]
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa3
    // strb r1, [r0]
    // sub r1, #9
    ov07_02231E08(*((u32*)(r4 + 4)), 8, 8);
    // add r0, #0xa2
    // add r0, #0xa3
    // strh r1, [r0]
    ov07_0221C468(*((u32*)(r4 + 4)), (*((u8*)r4) | (*((u8*)r4) << 8)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x24)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x20)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 1);
    *((u16*)(r4 + 0x22)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), 0);
    *((u32*)(r4 + 0x28)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), 1);
    *((u32*)(r4 + 0x30)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 0x29);
    // neg r1, r0
    // add r0, #0xa4
    // strh r1, [r0]
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0221FA80(*((u32*)(r4 + 4)), r0);
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0221FA90(*((u32*)(r4 + 4)), r0);
    // str r0, [sp, #0x18]
    ov07_0221FAE8(*((u32*)(r4 + 4)));
    ManagedSprite_SetPriority(r5, (r0 + 1));
    Sprite_GetPaletteProxy(*((u32*)r5));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221FA78(*((u32*)(r4 + 4)));
    // str r0, [sp, #0x1c]
    ov07_0221BFD0(*((u32*)(r4 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    PaletteData_LoadNarc_CustomTint(0xc4, r7, r0);
    ManagedSprite_SetOamMode(r5, 1);
    ov07_0221FAE8(*((u32*)(r4 + 4)));
    ManagedSprite_SetPriority(r5, (r0 + 1));
    Sprite_GetPaletteProxy(*((u32*)r5));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221FA78(*((u32*)(r4 + 4)));
    // str r0, [sp, #0x20]
    ov07_0221BFD0(*((u32*)(r4 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    PaletteData_LoadNarc_CustomTint(0xc4, r7, r0);
    ManagedSprite_SetOamMode(r5, 1);
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222AFAC, r4);
}




void ov07_0222B2A8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r4, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov07_0222B320(void) {
    ov07_022324D8(0x74);
    *((u16*)(r0 + 0x1c)) = 0xa;
    ov07_02231FE4(r6, r0);
    // add r0, sp, #0x24
    ov07_0221F9E8(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x30)) = r5;
    // add r2, sp, #0x24
    SpriteSystem_NewSprite(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x10)));
    *((u32*)(r5 + 0x30)) = r0;
    // sub r0, r0, r1
    // ror r0, r7
    // add r0, r1, r0
    ManagedSprite_SetFlipMode(*((u32*)(r5 + 0x30)), 1);
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    Pokepic_GetAttr(0);
    // asr r7, r0, #0x10
    Pokepic_GetAttr(r5, 1);
    // asr r5, r0, #0x10
    ov07_0221C470(*((u32*)(r4 + 4)));
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    // str r0, [sp, #0x1c]
    Pokepic_GetAttr(0);
    // asr r6, r0, #0x10
    // ldr r0, [sp, #0x1c]
    Pokepic_GetAttr((r0 << 0x10), 1);
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x50
    ov07_02222268(r4, r7, r6, r5);
    // str r7, [sp, #0x14]
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0223192C(*((u32*)(r4 + 4)), r0);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // add r0, #0x50
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    ov07_022222B4(r4);
    // str r0, [sp, #0x18]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // ldr r0, [sp, #0x14]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x30)), 0x50, 0x52);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    ov07_0221FB04(*((u32*)(r4 + 4)), 1);
    // str r0, [sp, #0x10]
    ov07_0221FB04(*((u32*)(r4 + 4)), 2);
    // str r4, [sp, #0xc]
    // sub r0, r0, r6
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    *((u16*)(8 + 0x1e)) = (8 << 2);
    ov07_0221BFC0(*((u32*)(r4 + 4)), (8 << 2));
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0223192C(*((u32*)(r4 + 4)), r0);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), r7);
    // ldr r1, [sp, #0x10]
    ManagedSprite_SetPriority();
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), r7);
    // ldr r1, [sp, #0x10]
    ManagedSprite_SetPriority();
    // ldr r1, [sp, #8]
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x30)));
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x30)), r6);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), r7);
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222B2A8, r4);
}




void ov07_0222B4E0(void) {
    _fsub(*((u32*)(r1 + 0x30)), 0x3E4CCCCD);
    *((u32*)(r5 + 0x30)) = r0;
    _fadd(*((u32*)(r5 + 0x2c)), 0x3E4CCCCD);
    *((u32*)(r5 + 0x2c)) = r0;
    _f2d(*((u32*)(r5 + 0x30)));
    _dleq(0x9999999A, 0x3FC99999);
    // strb r0, [r5]
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x1c)), 0);
    // ldrsb r0, [r5, r0]
    _fflt(0x36);
    _fmul(*((u32*)(r5 + 0x2c)), r0);
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x1c)), r0, *((u32*)(r5 + 0x30)));
    // add r0, #0x34
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, #0x35
    // add r0, #0x35
    // strb r1, [r0]
    // add r0, #0x34
    // add r0, #0x35
    // strh r1, [r0]
    *((u32*)(r5 + 0x28)) = (*((u32*)(r5 + 0x28)) + 1);
    ov07_02222EE8(*((u32*)(r5 + 0x3c)), (*((u8*)r5) | (*((u8*)r5) << 8)));
    ov07_02222EF8(*((u32*)(r5 + 0x38)));
    ov07_02222EF8(*((u32*)(r5 + 0x3c)));
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r5 + 0x24))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221BFD0(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r5 + 0x18)), r0, 2, ((r4 << 0x14) >> 0x10));
    *((u32*)(r5 + 0x3c)) = r0;
    // strb r0, [r5]
    ov07_02222EE8(*((u32*)(r5 + 0x3c)));
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x20)));
    ov07_02222EF8(*((u32*)(r5 + 0x3c)));
    ov07_0221C448(*((u32*)(r5 + 4)), r4);
    Heap_Free(r5);
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x1c)));
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x20)));
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x24)));
    SpriteSystem_DrawSprites(*((u32*)(r5 + 0xc)));
}




void ov07_0222B640(void) {
    ov07_022324D8(0x40);
    ov07_02231FE4(r5, r0);
    ov07_0221C4E8(*((u32*)(r4 + 4)), 0);
    *((u32*)(r4 + 0x1c)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), 1);
    *((u32*)(r4 + 0x20)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 4)), 2);
    *((u32*)(r4 + 0x24)) = r0;
    *((u32*)(r4 + 0x28)) = 0;
    // sub r6, #0x20
    ov07_0221C468(r5);
    ov07_02222004(r5, r0);
    // asr r0, r0, #0x10
    *((u32*)(r4 + 0x2c)) = (0xfe << 0x16);
    *((u32*)(r4 + 0x30)) = (0xfe << 0x16);
    ov07_0221FB78(r5, 1);
    // mvn r1, r1
    // add r0, #0x36
    // strb r1, [r0]
    // add r1, sp, #0x24
    // add r1, #2
    // add r2, sp, #0x24
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x20)), 1);
    // add r2, sp, #0x24
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // add r1, r1, r6
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x1c)), (2 << 0x10), 0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x1c)), 2);
    // ldrsb r0, [r4, r0]
    _fflt(0x36);
    _fmul(*((u32*)(r4 + 0x2c)), r0);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x1c)), r0, *((u32*)(r4 + 0x30)));
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0x1c))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221BFD0(r5);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r4 + 0x18)), r0, 2, ((r6 << 0x14) >> 0x10));
    *((u32*)(r4 + 0x38)) = r0;
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + 0x24))));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    ov07_0221BFD0(r5);
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov07_02222F10(*((u32*)(r4 + 0x18)), r0, 2, ((r6 << 0x14) >> 0x10));
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_02231924(*((u32*)(r4 + 4)), ((r0 << 0x18) >> 0x18));
    ov07_0221BFC0(*((u32*)(r4 + 4)));
    // add r2, sp, #0x2c
    ov07_02231A20(r5, r0);
    // add r2, sp, #0x28
    // add r1, sp, #0x28
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x1c)));
    ov07_0223192C(*((u32*)(r4 + 4)), r6);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), r5);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), 2);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x1c)), 0);
    ov07_0221C470(*((u32*)(r4 + 4)));
    ov07_0221FA1C(*((u32*)(r4 + 4)), ((r0 << 0x18) >> 0x18));
    ov07_0221FA10(*((u32*)(r4 + 4)), r6);
    // str r0, [sp, #0x1c]
    ov07_0221FA2C(*((u32*)(r4 + 4)), r6);
    // str r0, [sp, #0x20]
    ov07_0221FA38(*((u32*)(r4 + 4)), r6);
    // ldr r1, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    GetMonPicHeightBySpeciesGenderForm(((r7 << 0x10) >> 0x10), ((r1 << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x18));
    // add r5, sp, #0x24
    // ldrsh r3, [r5, r3]
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x1c)), 4, (r0 << 0x10), 0xa);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 1);
    // add r0, #0x34
    // strb r1, [r0]
    // add r0, #0x35
    // strb r1, [r0]
    // sub r1, #0x10
    ov07_02231E08(*((u32*)(r4 + 4)), 0xf, 0xf);
    // add r0, #0x34
    // add r0, #0x35
    // strh r1, [r0]
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222B4E0, r4);
    ov07_0222B4E0(r4);
}




void ov07_0222B898(void) {
    // add r2, r4, r0
    // asr r3, r0, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x30
    // asr r2, r2, #0x10
    // add r2, r4, r2
    // add r2, #0x84
    // strb r0, [r4]
    // add r0, #0x30
    // strb r0, [r4]
    // add r1, sp, #8
    // add r0, sp, #8
    // add r0, sp, #8
    // strb r0, [r4]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
}




void ov07_0222B988(void) {
    ov07_022324D8(0x90);
    ov07_02231FE4(r5, r0);
    ov07_0221C468(*((u32*)(r4 + 4)));
    ov07_0221C468(*((u32*)(r4 + 4)));
    // add r2, #0x5c
    ov07_02231A50(*((u32*)(r4 + 4)), r0, r4);
    ov07_0221C470(*((u32*)(r4 + 4)));
    // add r2, #0x60
    ov07_02231A50(*((u32*)(r4 + 4)), r0, r4);
    ov07_0223192C(*((u32*)(r4 + 4)), r6);
    // mvn r1, r1
    // add r0, #0x54
    // strh r1, [r0]
    ov07_0221C468(*((u32*)(r4 + 4)), 0);
    ov07_0223192C(*((u32*)(r4 + 4)), r0);
    ov07_0221C470(*((u32*)(r4 + 4)));
    ov07_0223192C(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x58)) = 0;
    *((u32*)(r4 + 0x68)) = 0;
    ov07_0221C4A8(r5, 0);
    // add r2, #0x1c
    // add r3, sp, #0
    ov07_02232020(r5, r0, r4);
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 1);
    // ldrsh r2, [r4, r1]
    // sub r0, r0, r2
    // ldrsh r2, [r4, r3]
    // add r2, #0xfb
    *((u32*)(r4 + 0x6c)) = 0x54;
    // sub r3, #0xa4
    *((u32*)(r4 + 0x70)) = 0x54;
    // ldrsh r2, [r4, r2]
    *((u32*)(r4 + 0x74)) = 0x5c;
    // ldrsh r2, [r4, r1]
    // add r2, r2, r0
    *((u32*)(r4 + 0x78)) = 0x5c;
    // ldrsh r2, [r4, r2]
    // add r2, r2, r0
    *((u32*)(r4 + 0x7c)) = 0x62;
    // ldrsh r1, [r4, r1]
    // add r1, r1, r0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x84
    // str r1, [r0]
    // add r0, #0x88
    // str r1, [r0]
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 2, 0x62, 0x54);
    // sub r2, #0xa4
    *((u32*)(r4 + 0x6c)) = r3;
    // add r3, #0xfb
    *((u32*)(r4 + 0x70)) = r3;
    // ldrsh r2, [r4, r2]
    *((u32*)(r4 + 0x74)) = 0x5c;
    // ldrsh r2, [r4, r1]
    // add r2, r2, r0
    *((u32*)(r4 + 0x78)) = 0x5c;
    // ldrsh r2, [r4, r2]
    // add r2, r2, r0
    *((u32*)(r4 + 0x7c)) = 0x62;
    // ldrsh r1, [r4, r1]
    // add r1, r1, r0
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x84
    // str r1, [r0]
    // add r0, #0x88
    // str r1, [r0]
    Pokepic_GetAttr(*((u32*)(r4 + 0x24)), 2, 0x62);
    // add r1, #0x8c
    // str r0, [r1]
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222B898, r4);
}




void ov07_0222BADC(void) {
}




void ov07_0222BAF4(void) {
    // add r0, #0x20
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222BB14: ; jump table
    // add r2, #0x4f
    *((u32*)(r1 + 0x10)) = *((u32*)(r1 + 0x10));
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    // eor r0, r1
    *((u32*)(r1 + 0x14)) = 1;
    *((u32*)(r1 + 0x10)) = 0;
    // str r0, [sp]
    ov07_0222BADC(*((u32*)(r1 + 0x1c)), 0, *((u32*)(r1 + 0x10)), ((*((u32*)r1) + 2) << 1));
    // str r0, [sp]
    // sub r1, r1, r2
    ov07_0222BADC(*((u32*)(r4 + 0x1c)), 0x50, ((*((u32*)r4) + 2) << 1));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r6, #0x50
    // and r5, r3
    // and r3, r1
    // strh r5, [r0]
    *((u16*)(0x04000040 + 4)) = ((((*((u32*)(r4 + 0xc)) + 1) << 0x18) >> 0x18) | (0xff << 8));
    // add r0, #0x20
    // add r4, #0x20
    // strb r0, [r4]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r6, #0x50
    // and r5, r3
    // and r3, r1
    // strh r5, [r0]
    *((u16*)(0x04000040 + 4)) = ((((*((u32*)(r4 + 0xc)) + 1) << 0x18) >> 0x18) | (0xff << 8));
    // str r0, [r4]
    // add r0, #0x20
    // add r4, #0x20
    // strb r0, [r4]
    // add r4, #0x20
    // strb r0, [r4]
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xe, 0, (0xff << 8));
    // add r0, #0x20
    // add r4, #0x20
    // strb r0, [r4]
    // and r1, r3
    // str r1, [r0]
    // add r3, #0x48
    // strh r5, [r3]
    // add r3, #0x4a
    // strh r5, [r3]
    // add r1, #0x40
    // strh r3, [r1]
    // add r0, #0x44
    // strh r3, [r0]
    ov07_0221C448(*((u32*)(r4 + 0x24)), r2, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0x17, *((u32*)(r4 + 0x18)));
    Heap_Free(r4);
}




void ov07_0222BC7C(void) {
    ov07_022324D8(0x50);
    // add r1, #0x20
    ov07_02231FE4(r5, r0);
    ov07_0221C470(r5);
    ov07_0221FA48(r5, r0);
    *((u32*)(r4 + 0x1c)) = r0;
    // str r0, [r4]
    ov07_0221C470(r5);
    ov07_02231924(r5, r0);
    ov07_0221FAE8(r5);
    SetBgPriority(2, (((r0 - 1) << 0x18) >> 0x18));
    Pokepic_GetAttr(*((u32*)(r4 + 0x1c)), 0);
    // asr r6, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0x1c)), 1);
    // asr r5, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0x1c)), 0x29);
    // sub r0, r5, r0
    // asr r5, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0x1c)), 0x17);
    *((u32*)(r4 + 0x18)) = r0;
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0x17, 8);
    // sub r6, #0x28
    *((u32*)(r4 + 8)) = r6;
    // add r5, #0x28
    *((u32*)(r4 + 4)) = r5;
    *((u32*)(r4 + 0x10)) = 0;
    // add r3, #0x48
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 4));
    *((u32*)(r4 + 0x14)) = 0;
    // and r1, r0
    // str r0, [r6]
    // strh r0, [r3]
    // add r3, #0x4a
    // strh r0, [r3]
    // add r2, #0x50
    // and r1, r0
    // add r1, #0x40
    // strh r2, [r1]
    // and r1, r0
    // add r6, #0x44
    // strh r0, [r6]
    ov07_0221C410(*((u32*)(r4 + 0x24)), ov07_0222BAF4, r4, *((u32*)(r4 + 4)));
}




void ov07_0222BD90(void) {
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0xc
    // str r0, [sp]
    // add r0, #0x38
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // sub r2, #8
}




void ov07_0222BE00(void) {
    ov07_0221BFD0();
    Heap_Alloc(0xf0);
    // str r5, [r4]
    ov07_0221C514(r5);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C468(*((u32*)r4));
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 8)) = r0;
    Pokepic_GetAttr(0);
    // add r1, #0xe8
    // strh r0, [r1]
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    // add r1, #0xea
    // strh r0, [r1]
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0x29);
    // add r1, #0xec
    // strh r0, [r1]
    // ldrsh r1, [r4, r0]
    // add r0, #0xea
    // add r1, #8
    // strh r1, [r0]
    // add r0, #0xc
    ov07_02222A44(r4, 1, 8);
    // add r0, sp, #0x20
    ov07_02222A44(1, 0xa);
    ov07_0221C468(*((u32*)r4));
    ov07_02222004(*((u32*)r4), r0);
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) * r0);
    // ldr r1, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    ov07_0221C4E8(*((u32*)r4), 0, (*((u32*)(r4 + 0x18)) * r0));
    *((u32*)(r5 + 0x30)) = r0;
    ManagedSprite_SetDrawPriority(r7);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x30)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x30)), 1);
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // sub r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // ldrsh r3, [r4, r3]
    // add r0, #0x38
    // add r1, sp, #0x20
    ov07_02222864(r4, 0, ov07_02222180, 0xe8);
    // mvn r1, r1
    ov07_02231E08(*((u32*)r4), 0, 0);
    ov07_0221C410(*((u32*)r4), ov07_0222BD90, r4);
}




void ov07_0222BF18(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222BF34: ; jump table
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x10
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x10
    // add r0, #0x34
    // add r0, #0x34
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x10
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x34
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
}




void ov07_0222C074(void) {
    ov07_0221BFD0();
    Heap_Alloc(0xf0);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = 0;
    ov07_0221C468(*((u32*)r0));
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(0);
    // add r1, #0x48
    // strh r0, [r1]
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 1);
    // add r1, #0x4a
    // strh r0, [r1]
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, #0x10
    // sub r2, #0x23
    ov07_02222268(r4, 0, 3, 0);
    // add r0, #0x34
    ov07_022223F0(r4, 0, 0x00000E38, 8);
    ov07_0221C468(*((u32*)r4));
    ov07_02222004(*((u32*)r4), r0);
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) * r0);
    *((u32*)(r4 + 0x3c)) = (r0 * *((u32*)(r4 + 0x3c)));
    ov07_0221C470(*((u32*)r4), *((u32*)(r4 + 0x3c)), (*((u32*)(r4 + 0x18)) * r0));
    ov07_02222004(*((u32*)r4), r0);
    ov07_0221C468(*((u32*)r4));
    ov07_0223192C(r5, r0);
    ov07_0221C470(*((u32*)r4));
    ov07_0223192C(r5, r0);
    // sub r2, #0x32
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xa, 0xa);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xb, 0x28);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xa, 0x28);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xb, 0x28);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xa, (0x28 * r7));
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 0xb, 0x28);
    ov07_0221C410(*((u32*)r4), ov07_0222BF18, r4);
}




void ov07_0222C18C(void) {
    // ldr r4, [sp, #0x10]
    // str r0, [r5]
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r3, #0x28
    // ldmia r3!, {r0, r1}
    // add r2, #0x28
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0x40
    // strh r1, [r0]
}




void ov07_0222C1FC(void) {
}




void ov07_0222C208(void) {
}




void ov07_0222C214(void) {
    ov07_02222180((r0 + 4));
    // add r0, #0x28
    ov07_022224AC(r4);
    // ldrsh r1, [r4, r0]
    // add r0, r1, r0
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x28));
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)r4), (4 << 0x10), (6 << 0x10));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov07_0222212C((r4 + 4), ((*((u32*)(r4 + 0xc)) << 0x10) >> 0x10), 0x00007FFF, ((*((u32*)(r4 + 0xc)) << 0x10) >> 0x10));
    // str r0, [sp]
    // add r0, #0x28
    ov07_02222494(r4, 0, 0x0000FFFF, 0xFFFFF000);
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x44)) + 1);
}




void ov07_0222C2D4(void) {
    // add r0, #0xf0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222C2F0: ; jump table
    // add r0, #0xc
    ov07_0222C214(r1);
    // add r0, #0xf0
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, #0xfc
    // add r1, #0xa
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, #0xfc
    _s32_div_f(*((u32*)r4), 0xa);
    // sub r1, r1, r0
    // strh r1, [r0]
    // add r0, #0xfc
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0xc)), 0);
    // add r0, #0xf0
    // add r0, #0xf0
    // str r1, [r0]
    // strh r1, [r0]
    // add r0, #0xf0
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, #0xf4
    // add r0, #0xf8
    // add r0, r4, r3
    // add r0, #0xa0
    // str r1, [r0]
    // add r0, #0xf8
    // add r0, r4, r2
    ManagedSprite_SetDrawFlag(*((u32*)(*((u32*)r4) + 0x58)), 1, (0x4c * *((u32*)r4)), (*((u32*)r4) * 0x4c));
    // add r0, #0xf8
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, #0xf8
    // add r0, #0xf4
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, #0xc
    ov07_0222C214(r4, (*((u32*)r4) - 1));
    // add r5, #0x58
    ov07_0222C214(r4);
    // str r0, [sp]
    ov07_0222C208(r5, 0);
    // ldr r0, [sp]
    // add r5, #0x4c
    // add r0, #0xf0
    // add r0, #0xf0
    // str r1, [r0]
    ManagedSprite_TickFrame(*((u32*)(r4 + 0xc)), (*((u32*)r4) + 1));
    Sprite_IsAnimated(*((u32*)*((u32*)(r4 + 0xc))));
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0xc)), 1);
    // add r0, #0xf0
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, #0xfc
    // sub r1, #0xa
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, #0xfc
    _s32_div_f(*((u32*)r4), 0xa);
    // sub r1, r1, r0
    // strh r1, [r0]
    // add r0, #0xfc
    // add r0, #0xf0
    // add r0, #0xf0
    // str r1, [r0]
    // add r5, #0x58
    ov07_0222C1FC(r4, (*((u32*)r4) + 1));
    // add r5, #0x4c
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0xc)));
    ov07_0221C448(*((u32*)r4), r7);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}




void ov07_0222C4C0(void) {
    // str r3, [sp, #0x10]
    ov07_0221BFD0();
    Heap_Alloc((1 << 8));
    // str r5, [r4]
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 8)) = r7;
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, #0xf0
    // str r1, [r0]
    ov07_0221C468(r5, 0);
    ov07_02222004(r5, r0);
    // ldr r1, [sp, #0x10]
    *((u32*)(r4 + 0xc)) = r1;
    *((u32*)(r4 + 0x50)) = 0;
    // neg r0, r0
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x10
    ov07_0222212C(r4, (0xFFFF8000 >> 0x12), 0x0000BFFF, (0xFFFF8000 >> 0x12));
    // str r0, [sp]
    // add r0, #0x34
    ov07_02222494(r4, 0, 0x0000FFFF, 0xFFFFF000);
    // add r0, #0x48
    // strh r1, [r0]
    *((u32*)(r4 + 0x54)) = 1;
    ov07_02221F80(r5, r6, 0);
    // add r1, #0x4a
    // strh r0, [r1]
    ov07_02221F80(r5, r6, 1);
    // add r1, #0x4c
    // strh r0, [r1]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0xc)), 0x4a, 0x4c);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0xc)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0xc)), 1);
    // add r0, sp, #0x14
    ov07_0221F9E8(*((u32*)r4));
    // ldrsh r0, [r4, r0]
    // add r1, sp, #0x14
    // strh r0, [r1]
    // ldrsh r0, [r4, r0]
    *((u16*)(r1 + 2)) = 0x4c;
    // add r5, #0x58
    // add r7, #0xc
    // str r7, [sp]
    // add r3, sp, #0x14
    ov07_0222C18C(r4, *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // add r5, #0x4c
    // add r0, #0xfc
    // str r1, [r0]
    ov07_02231E08(*((u32*)r4), 0, 0x1f);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0xc)), 1);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x58)), 1);
    // add r5, #0x4c
    ov07_0221C410(*((u32*)r4), ov07_0222C2D4, r4);
}




void ov07_0222C610(void) {
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)(r0 + 0x5c)), 0, 0x10);
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // add r2, r3, r2
    Pokepic_SetAttr(*((u32*)(r4 + 0x5c)), 1, 0x12);
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // add r1, r2, r1
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // asr r1, r1, #0x10
    // add r3, r3, r2
    // ldrsh r2, [r4, r2]
    // sub r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x58)), (0x10 << 0x10), (0x66 << 0x10));
    // add r0, #0x34
    // add r1, sp, #4
    // add r2, sp, #0
    ov07_02222644(r4);
    // ldrsh r0, [r4, r0]
    _fflt(0x64);
    _fmul(0x3DCCCCCD, r0);
    // ldr r0, [sp, #4]
    _fadd(r0);
    // str r1, [sp, #4]
    // ldr r2, [sp]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x58)), r0);
    // ldrsh r1, [r4, r0]
    // sub r0, #0x65
    // add r4, #0x64
    // strh r0, [r4]
}




void ov07_0222C6A8(void) {
    // add r0, #0x10
    // add r0, #0x34
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x34
    // add r0, #0x10
    // add r0, #0x34
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // sub r2, r3, r2
    // asr r2, r2, #0x10
}




void ov07_0222C780(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x68);
    // str r5, [r4]
    ov07_0221C514(r5);
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = 0;
    ov07_0221C470(*((u32*)r4));
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x5c)) = r0;
    Pokepic_GetAttr(0);
    // add r1, #0x60
    // strh r0, [r1]
    Pokepic_GetAttr(*((u32*)(r4 + 0x5c)), 1);
    // add r1, #0x62
    // strh r0, [r1]
    Pokepic_GetAttr(*((u32*)(r4 + 0x5c)), 0x29);
    // add r1, #0x66
    // strh r0, [r1]
    // str r0, [sp]
    // add r0, #0x10
    ov07_022227A8(r4, 2, 0, 1);
    ov07_0221C4E8(*((u32*)r4), 0);
    *((u32*)(r4 + 0x58)) = r0;
    ManagedSprite_SetOamMode(1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x58)), 2);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x58)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x58)), 1);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x34
    ov07_02222590(r4, 0xa, 0xc, 0xa);
    // add r0, #0x64
    // strh r1, [r0]
    ov07_02231E08(*((u32*)r4), 0x1c, 0xf);
    ov07_0221C410(*((u32*)r4), ov07_0222C6A8, r4);
}




void ov07_0222C850(void) {
    // ldrsh r2, [r0, r2]
    // ldrsh r0, [r0, r3]
    // neg r2, r2
    // neg r0, r0
}




void ov07_0222C870(void) {
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r0, #0x1c
    // str r0, [sp, #8]
    // ldrsh r4, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldr r1, [sp, #0xc]
    // add r1, r1, r2
    // str r1, [sp]
    // ldr r1, [sp]
    // sub r0, r0, r4
    // asr r1, r1, #0x10
    // str r1, [sp, #4]
    // asr r7, r1, #0x10
    // ldrsh r1, [r5, r1]
    // sub r0, r7, r0
    // asr r7, r0, #0x10
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0x28
    // sub r0, r0, r4
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // bpl _0222C8EC
    // add r6, #0xc0
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [r1, r2]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldrsh r0, [r5, r0]
    // ldr r0, [sp, #8]
}




void ov07_0222C918(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222C932: ; jump table
    // str r1, [sp]
    // add r4, #0x40
    // str r0, [sp, #4]
    // add r0, #0x40
    // ldrsh r3, [r4, r3]
    // neg r3, r3
    // ldrsh r3, [r4, r3]
    // neg r3, r3
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x40
    // add r0, #0x40
}




void ov07_0222CA8C(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x68);
    memset(0, 0x68);
    // str r5, [r4]
    ov07_0221C410(r5, ov07_0222C918, r4);
    // str r0, [sp, #0x14]
    ov07_0221C468(*((u32*)r4));
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 1);
    *((u16*)(r4 + 0x12)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 0x29);
    // ldrsh r2, [r4, r1]
    // sub r0, r2, r0
    *((u16*)(r4 + 0x12)) = r0;
    // ldrsh r0, [r4, r0]
    // sub r0, #0x28
    *((u16*)(r4 + 0x10)) = 0x10;
    // ldrsh r0, [r4, r1]
    // sub r0, #0x28
    *((u16*)(r4 + 0x12)) = 0x10;
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 6, 1);
    ov07_0221C468(*((u32*)r4));
    ov07_02222004(*((u32*)r4), r0);
    // ldrsh r1, [r4, r0]
    // sub r1, #8
    *((u16*)(r4 + 0x14)) = r1;
    // ldrsh r0, [r4, r0]
    // add r0, #0x58
    *((u16*)(r4 + 0x16)) = 0x12;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x14)) = 0;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x16)) = 0xbf;
    ov07_0221FAF8(r5, 1);
    // ldr r0, [sp, #0x14]
    SysTask_GetPriority();
    // str r0, [sp, #0x18]
    ov07_02222D88(*((u16*)(r4 + 0x10)), *((u16*)(r4 + 0x12)));
    // str r0, [sp, #0x1c]
    ov07_0221BFD0(r5);
    // str r1, [sp]
    // ldr r1, [sp, #0x18]
    // str r7, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x1c]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r1]
    ov07_02222CCC(((0x14 << 0x18) >> 0x18), ((0x16 << 0x18) >> 0x18), 0x0000038E, (r6 << 0xf));
    *((u32*)(r4 + 0x18)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x1c
    ov07_02222268(r4, 0, 0x50, 0);
    *((u32*)(r4 + 0x24)) = (*((u32*)(r4 + 0x24)) * r6);
    ov07_0221C468(r5, (*((u32*)(r4 + 0x24)) * r6));
    ov07_02231924(*((u32*)r4), r0);
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(((r5 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(0, (((r0 + 1) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    ov07_0222C918(r4);
}




void ov07_0222CBFC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CC16: ; jump table
    // add r0, #0x38
    ov07_02222468(r1, r0);
    // sub r1, r1, r2
    // strh r2, [r1]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x14
    ov07_02222558(r4, 0x04000052, (*((u32*)(r4 + 0x38)) | (0x1f << 8)));
    // add r0, #0x14
    // add r1, sp, #4
    // add r2, sp, #0
    ov07_02222644(r4);
    // ldr r1, [sp, #4]
    _fsub(0);
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ov07_0221C448(*((u32*)r4), r2);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}




void ov07_0222CCBC(void) {
    // add r0, #0x14
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x14
    // ldrsh r4, [r5, r3]
    // sub r3, r4, r3
    // ldrsh r2, [r5, r2]
    // add r0, #0x14
    // asr r3, r3, #0x10
    // str r2, [sp]
    // lsl r4, r0
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x14
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x14
    // ldrsh r4, [r5, r3]
    // sub r3, r4, r3
    // ldrsh r2, [r5, r2]
    // add r0, #0x14
    // asr r3, r3, #0x10
    // ldrsh r2, [r5, r2]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r2]
    // sub r2, r3, r2
    // ldrsh r1, [r5, r1]
    // asr r2, r2, #0x10
}




void ov07_0222CE10(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x50);
    memset(0, 0x50);
    // str r5, [r4]
    ov07_0221C514(r5);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221BFC0(r5);
    *((u32*)(r4 + 0x4c)) = r0;
    ov07_0221C4E8(*((u32*)r4), 0);
    *((u32*)(r4 + 0x10)) = r0;
    // str r0, [sp]
    // add r0, #0x14
    ov07_02222508(r4, 0xe, 0xa, 0xa);
    // add r0, #0x38
    ov07_02222418(r4, 0, 0x10, 8);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x10)), 1);
    ov07_02231E08(*((u32*)r4), 0, 0x1f);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x10)), 2);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), 0xBFB33333, 0x3FB33333);
    ManagedSprite_SetAffineScale(0x3FB33333, 0x3FB33333);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x10)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x10)), 1);
    ov07_0221C410(*((u32*)r4), ov07_0222CBFC, r4);
}




void ov07_0222CEC0(void) {
    ov07_0221BFD0();
    Heap_Alloc(0x40);
    memset(0, 0x40);
    // str r5, [r4]
    ov07_0221C470(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 8)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x38)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    *((u16*)(r4 + 0x3a)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 0x29);
    *((u32*)(r4 + 0x3c)) = r0;
    // str r1, [sp]
    // add r0, #0x14
    ov07_022227A8(r4, 4, 0, 1);
    ov07_0221C470(*((u32*)r4));
    ov07_02222004(*((u32*)r4), r0);
    // ldrsh r1, [r4, r1]
    // add r0, r1, r0
    *((u16*)(r4 + 0x14)) = r0;
    // str r1, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 8)), 0, 0x10, 0);
    ov07_0221C4E8(*((u32*)r4), 1);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221C468(*((u32*)r4));
    ov07_02231924(*((u32*)r4), r0);
    ov07_0221C470(*((u32*)r4));
    ov07_02231924(*((u32*)r4), r0);
    ov07_02221FF0(*((u32*)(r4 + 0xc)));
    // lsl r5, r0
    ov07_0221FA78(*((u32*)r4), 1);
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    PaletteData_BeginPaletteFade(4, ((r5 << 0x10) >> 0x10), 0);
    *((u32*)(r4 + 0x10)) = 1;
    ov07_0221C470(*((u32*)r4));
    ov07_0221FAC8(*((u32*)r4), r0);
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 6, 1);
    ov07_0221C410(*((u32*)r4), ov07_0222CCBC, r4);
}




void ov07_0222CFCC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CFE6: ; jump table
    // add r0, #0x1c
    // bpl _0222D048
    // str r0, [sp]
    // add r4, #0x1c
    // str r0, [sp, #4]
    // add r0, #0x1c
}




void ov07_0222D050(void) {
}




void ov07_0222D148(void) {
    // str r0, [sp, #0x14]
    ov07_022324D8(0x4c);
    // ldr r0, [sp, #0x14]
    // str r0, [r4]
    ov07_0221FA78();
    *((u32*)(r4 + 0x18)) = r0;
    ov07_02231E74(*((u32*)r4), 0, 0x10);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, #0x1c
    ov07_02222AC4(r4, 0, 8, 0x10);
    ov07_0221C470(*((u32*)r4));
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(0);
    // asr r7, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    // asr r5, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 0x29);
    // sub r0, r5, r0
    // asr r0, r0, #0x10
    // sub r0, #0x28
    // asr r5, r0, #0x10
    ov07_0221C4E8(*((u32*)r4), 0);
    *((u32*)(r4 + 0x48)) = r0;
    ov07_0221C470(*((u32*)r4));
    ov07_02231924(*((u32*)r4), r0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x48)), 1);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x48)), 2);
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(((r6 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(0, (((r0 + 1) << 0x18) >> 0x18));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x48)), 0);
    // add r0, #0x50
    // asr r6, r0, #0x10
    // str r5, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    ov07_0221FAF8((r5 << 0x10), 1);
    // ldr r1, [sp, #0x18]
    // sub r7, #0x28
    // str r0, [sp, #0x1c]
    // asr r0, r0, #0x10
    // neg r0, r0
    // neg r1, r1
    ov07_02222D88((((r7 << 0x10) << 0x10) >> 0x10), ((r1 << 0x10) >> 0x10));
    // ldr r0, [sp, #0x14]
    ov07_0221BFD0();
    // str r1, [sp]
    // ldr r1, [sp, #0x1c]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r7, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov07_02222CCC(((r5 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x0000038E, (5 << 0xc));
    *((u32*)(r4 + 0x14)) = r0;
    // str r1, [sp]
    PaletteData_BlendPalettes(*((u32*)(r4 + 0x18)), 0, (1 << 8), 8);
    ov07_0221C410(*((u32*)r4), ov07_0222D050, r4);
}




void ov07_0222D2B0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D2CA: ; jump table
    // add r0, #0x14
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #4]
    // str r0, [sp]
    // add r0, #0x14
    // add r0, #0x38
    // add r0, #0x38
    // add r0, #0x14
    // add r0, #0x14
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #4]
}




void ov07_0222D3BC(void) {
    // str r3, [sp, #4]
    ov07_022324D8(0x58);
    // str r5, [r4]
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 8)) = r7;
    ov07_0221C468(*((u32*)r0));
    ov07_02222004(*((u32*)r4), r0);
    ov07_0221FB78(*((u32*)r4), 0);
    // mvn r0, r0
    *((u32*)(r4 + 0x54)) = 0;
    // neg r6, r7
    *((u32*)(r4 + 0x54)) = 1;
    ov07_0221C468(*((u32*)r4));
    ov07_02221F80(r5, r0, 0);
    // str r0, [sp, #8]
    ov07_0221C468(*((u32*)r4));
    ov07_02221F80(r5, r0, 1);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x10)) = r0;
    ManagedSprite_SetAffineOverwriteMode(2);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), (0xfe << 0x16), (0xfe << 0x16));
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0xc]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x10)));
    // asr r1, r1, #0x10
    ManagedSprite_OffsetPositionXY(*((u32*)(r4 + 0x10)), ((0x28 * r7) << 0x10), 0);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x10)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x10)), 1);
    // mvn r1, r1
    // asr r1, r1, #0x10
    ManagedSprite_SetAffineTranslation(*((u32*)(r4 + 0x10)), ((0xb * r6) << 0x10), 0xc);
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_SetAnim(0);
    // str r0, [sp]
    // add r0, #0x14
    ov07_02222508(r4, 1, 0xa, 0xa);
    // add r0, #0x38
    ov07_022223F0(r4, 0x0000FF48, 0x0000E38D, 4);
    // add r0, #0x38
    ov07_022223F0(r4, 0, 0x00001C71, 4);
    *((u32*)(r4 + 0x50)) = 0;
    ov07_0221C410(*((u32*)r4), ov07_0222D2B0, r4);
}




void ov07_0222D4F4(void) {
    // str r1, [r5]
    // str r3, [sp]
    ov07_02222508((r0 + 4), 0xa, 0xa, 8);
    *((u32*)(r5 + 0x2c)) = 3;
    *((u32*)(r5 + 0x30)) = 8;
    *((u32*)(r5 + 0x34)) = 0xa;
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x28)) = 0xa;
    ManagedSprite_SetPositionXY(*((u32*)r5), r4, r6);
    ManagedSprite_SetPositionXY(*((u32*)r5), r4, r6);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)r5), 2);
    ManagedSprite_SetDrawPriority(*((u32*)r5), 0x64);
    ManagedSprite_SetPriority(*((u32*)r5), 1);
    // ldr r0, [sp, #0x18]
    ManagedSprite_SetAffineScale(*((u32*)r5), 0xBF800000, (0xfe << 0x16));
    ManagedSprite_SetDrawFlag(*((u32*)r5), 0);
}




void ov07_0222D56C(void) {
}




void ov07_0222D578(void) {
}




void ov07_0222D590(void) {
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
}




void ov07_0222D60C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D624: ; jump table
    // add r2, #0x44
    // add r0, r2, r0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x20
    // add r6, #0x44
    // add r6, #0x38
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // add r5, #0x44
    // add r5, #0x38
}




void ov07_0222D6E0(void) {
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    ov07_022324D8((0x4a << 2));
    // ldr r0, [sp, #4]
    // str r4, [r7]
    *((u32*)(r0 + 4)) = r0;
    // ldr r0, [sp, #8]
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C470(r4);
    ov07_0221FA48(*((u32*)r7), r0);
    *((u32*)(r7 + 0x18)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r7 + 0x1c)) = r0;
    Pokepic_GetAttr(*((u32*)(r7 + 0x18)), 1);
    *((u16*)(r7 + 0x1e)) = r0;
    // add r0, #0x20
    // str r3, [sp]
    ov07_022227A8(r7, 4, 0, 1);
    // ldrsh r4, [r7, r0]
    // add r0, sp, #0x14
    // add r4, #0x10
    ov07_0221F9E8(0x1e, *((u32*)r7));
    // str r0, [sp, #0x10]
    // add r6, #0x44
    // ldr r0, [sp, #0x10]
    // str r5, [sp]
    // ldrsh r2, [r7, r2]
    // ldr r1, [sp, #0xc]
    // asr r3, r3, #0x10
    ov07_0222D4F4(r7, 0x1c, (r4 << 0x10));
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, sp, #0x14
    SpriteSystem_NewSprite();
    // str r5, [sp]
    // ldrsh r2, [r7, r2]
    // asr r3, r3, #0x10
    ov07_0222D4F4(r6, r0, 0x1c, (r4 << 0x10));
    // eor r5, r0
    // ldr r0, [sp, #0x10]
    // sub r4, #0xa
    // add r6, #0x38
    // str r0, [sp, #0x10]
    ov07_0221C410(*((u32*)r7), ov07_0222D60C, r7);
}




void ov07_0222D7A4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D7C0: ; jump table
    // add r0, #0x18
    ov07_022222B4(r1);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x18
    ov07_022220B8(r4, *((u32*)(r4 + 0x10)), 0x14, 0x16);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x18
    ov07_02222268(r4, 0x18, 0, 0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x18
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x18
    ov07_022220B8(r4, *((u32*)(r4 + 0x10)), 0x14, 0x16);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 0x16);
    // str r1, [sp]
    // str r0, [sp, #4]
    // neg r2, r2
    // add r0, #0x18
    // asr r2, r2, #0x10
    ov07_02222268(r4, 0, ((*((u32*)(r4 + 0x3c)) << 5) << 0x10), 0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x4c
    // add r1, #0x70
    ov07_022223CC(r4, *((u32*)(r4 + 0x48)));
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r0, [r4, r0]
    // add r1, #0x70
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x4c
    ov07_02222338(r4, r4, 0x44, 0x14);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x4c
    // add r1, #0x70
    ov07_022223CC(r4, *((u32*)(r4 + 0x48)));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x48)), 0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x18
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x18
    ov07_022220B8(r4, *((u32*)(r4 + 0x10)), 0x14, 0x16);
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, #0x18
    ov07_02222268(r4, 0x18, 0, 0);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // add r0, #0x18
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x18
    ov07_022220B8(r4, *((u32*)(r4 + 0x10)), 0x14, 0x16);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 0, 0x14);
    // ldrsh r2, [r4, r2]
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 1, 0x16);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x48)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}




void ov07_0222D974(void) {
    // str r2, [sp, #0x10]
    ov07_022324D8(0x94);
    // str r5, [r4]
    // ldr r0, [sp, #0x10]
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C468(*((u32*)r0));
    ov07_02222004(*((u32*)r4), r0);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x14)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    *((u16*)(r4 + 0x16)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // neg r2, r2
    // add r0, #0x18
    // asr r2, r2, #0x10
    ov07_02222268(r4, 0, ((*((u32*)(r4 + 0x3c)) << 4) << 0x10), 0);
    ov07_0221C470(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x40)) = r0;
    Pokepic_GetAttr(0);
    // add r1, #0x44
    // strh r0, [r1]
    Pokepic_GetAttr(*((u32*)(r4 + 0x40)), 1);
    // add r1, #0x46
    // strh r0, [r1]
    *((u32*)(r4 + 0x48)) = r6;
    ManagedSprite_SetAnimateFlag(r6, 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x48)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x48)), 1);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r0, [r4, r0]
    // add r1, #0x70
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x4c
    ov07_02222338(r4, r4, 0x14, 0x44);
    ov07_0221C410(*((u32*)r4), ov07_0222D7A4, r4);
}




void ov07_0222DA60(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222DA7A: ; jump table
    // ldrsh r3, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // sub r2, r3, r2
    // add r0, #0x1c
    // asr r2, r2, #0x10
    // bpl _0222DB0A
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x40
    // add r0, #0x40
}




void ov07_0222DB14(void) {
    ov07_022324D8(0x6c);
    // str r5, [r4]
    ov07_0221C514(r5);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C468(*((u32*)r4));
    ov07_02222004(*((u32*)r4), r0);
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x18)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    *((u16*)(r4 + 0x1a)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 0x29);
    // add r1, #0x68
    // strh r0, [r1]
    // ldrsh r0, [r4, r0]
    // add r0, #8
    *((u16*)(r4 + 0x1a)) = 0x1a;
    ov07_0221C4E8(*((u32*)r4), 0);
    *((u32*)(r4 + 0x14)) = r0;
    ManagedSprite_SetOamMode(1);
    Pokepic_SetAttr(*((u32*)(r4 + 0x10)), 6, 1);
    // add r0, #0x1c
    ov07_02222A44(r4, 2, 0x10);
    ov07_02231E08(*((u32*)r4), 0x10, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x40
    ov07_02222AC4(r4, 0x10, 0, 0);
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) * r6);
    ov07_0221C410(*((u32*)r4), ov07_0222DA60, r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 4)));
}




void ov07_0222DBD8(void) {
    // add r0, #0x14
    // ldrsh r2, [r5, r2]
    // add r5, #0x14
    // str r0, [sp]
    // add r0, #0x14
    // ldrsh r2, [r5, r2]
    // add r2, #0xf3
}




void ov07_0222DC54(void) {
    // add r0, #0x44
    // add r0, #0x68
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, #0x68
    // str r1, [sp]
    // add r5, #0x8c
    // str r0, [sp, #4]
    // add r0, #0x8c
}




void ov07_0222DCD8(void) {
}




void ov07_0222DD20(void) {
    // str r3, [sp, #8]
    ov07_022324D8(0xb8);
    // str r6, [r4]
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 8)) = r7;
    ov07_0221C468(*((u32*)r0));
    ov07_02222004(*((u32*)r4), r0);
    // str r0, [sp, #0xc]
    ov07_0221C468(*((u32*)r4));
    ov07_0222202C(*((u32*)r4), r0);
    ov07_0221C468(r6);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(0);
    // asr r7, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    // asr r6, r0, #0x10
    // str r0, [sp]
    // add r0, #0x14
    ov07_02222508(r4, 0xa, 0xa, 0xf);
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x3c)) = r0;
    ManagedSprite_SetAnimateFlag(1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x3c)), 2);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x3c)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x3c)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x3c)), 1);
    // ldr r0, [sp, #0xc]
    // add r1, r7, r0
    // add r0, #0xb4
    // strh r1, [r0]
    // add r0, #0xb6
    // strh r6, [r0]
    // mvn r1, r1
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x68
    ov07_02222268(r4, 0, 0, 0);
    // str r0, [sp]
    // add r0, #0x44
    ov07_02222508(r4, 5, 0xa, 0xc);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0x3f, 0x1f);
    ov07_0221C410(*((u32*)r4), ov07_0222DCD8, r4);
}




void ov07_0222DE30(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222DE46: ; jump table
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // sub r2, #0x50
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
    // mvn r2, r2
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x18
}




void ov07_0222DEEC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222DF08: ; jump table
    *((u32*)(r1 + 0x6c)) = (*((u32*)(r1 + 0x6c)) + 1);
    ov07_0222DE30(r1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x6c)) = 0;
    // add r0, #0x18
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x18
    ov07_0222207C(r4, *((u32*)(r4 + 0x14)), 0x64, 0x66);
    *((u32*)(r4 + 0x68)) = (*((u32*)(r4 + 0x68)) + 1);
    *((u32*)(r4 + 0xc)) = 0;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, #0x64
    // strh r1, [r0]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, #0x66
    // strh r1, [r0]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x14)), 1);
    // str r1, [sp]
    // add r0, #0x3c
    // str r1, [sp, #4]
    ov07_02222AC4(r4, 0x10, 0, 0);
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x10)), 0, 0xa, 0);
    // add r0, #0x3c
    ov07_02222AF4(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x10)), 0xa, 0, 0);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x14)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}




void ov07_0222E020(void) {
    // str r2, [sp]
    ov07_022324D8(0x70);
    // str r5, [r4]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C470(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x14)) = r6;
    ManagedSprite_SetDrawPriority(r6, 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x14)), 1);
    // add r1, #0x64
    // add r2, #0x66
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x14)), r4, r4);
    ov07_0221C410(*((u32*)r4), ov07_0222DEEC, r4);
}




void ov07_0222E07C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222E092: ; jump table
    // str r2, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
    // sub r2, #0x50
    // mvn r1, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x28
}




void ov07_0222E108(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E122: ; jump table
    *((u32*)(r1 + 0x54)) = (*((u32*)(r1 + 0x54)) + 1);
    ov07_0222E07C(r1);
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x54)) = 0;
    // add r0, #0x28
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x28
    ov07_0222207C(r4, *((u32*)(r4 + 0x24)), 0x4c, 0x4e);
    *((u32*)(r4 + 0x50)) = (*((u32*)(r4 + 0x50)) + 1);
    *((u32*)(r4 + 0xc)) = 0;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, #0x4c
    // strh r1, [r0]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r1, r1, r0
    // add r0, #0x4e
    // strh r1, [r0]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x54)) = 8;
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x24)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x24)), 1);
    *((u32*)(r4 + 0x54)) = (*((u32*)(r4 + 0x54)) - 1);
    // bpl _0222E212
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov07_0221FA78(*((u32*)r4));
    ov07_0221E6C8(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #9
    PaletteData_BeginPaletteFade(r5, 1, ((r0 << 0x10) >> 0x10), 1);
    // str r7, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x14)), 0xe, 0x10, 0);
    ov07_0221FA78(*((u32*)r4));
    PaletteData_GetSelectedBuffersBitmask();
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ov07_0221FA78(*((u32*)r4));
    ov07_0221E6C8(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #9
    PaletteData_BeginPaletteFade(r5, 1, ((r0 << 0x10) >> 0x10), 1);
    // str r7, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x14)), 2, 0, 0);
    ov07_0221FA78(*((u32*)r4));
    PaletteData_GetSelectedBuffersBitmask();
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0x54)) = 4;
    *((u32*)(r4 + 0x50)) = 4;
    *((u32*)(r4 + 0x58)) = 0;
    *((u32*)(r4 + 0x54)) = (*((u32*)(r4 + 0x54)) - 1);
    // bpl _0222E2DC
    *((u32*)(r4 + 0x54)) = 4;
    *((u32*)(r4 + 0x50)) = (*((u32*)(r4 + 0x50)) - 1);
    // bpl _0222E2B2
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x58)));
    // eor r0, r1
    *((u32*)(r4 + 0x58)) = 1;
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x58)));
    ov07_0221C448(*((u32*)r4), r5);
    Heap_Free(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 8)));
}




void ov07_0222E2EC(void) {
    // str r2, [sp, #4]
    ov07_022324D8(0x5c);
    // str r4, [r6]
    // ldr r0, [sp, #4]
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C470(r4);
    ov07_0221FA48(*((u32*)r6), r0);
    *((u32*)(r6 + 0x10)) = r0;
    ov07_0221FA48(*((u32*)r6), 0);
    *((u32*)(r5 + 0x14)) = r0;
    *((u32*)(r6 + 0x24)) = r7;
    ManagedSprite_SetDrawPriority(r7, 0x64);
    ManagedSprite_SetPriority(*((u32*)(r6 + 0x24)), 1);
    // add r1, #0x4c
    // add r2, #0x4e
    ManagedSprite_GetPositionXY(*((u32*)(r6 + 0x24)), r6, r6);
    // ldrsh r2, [r6, r1]
    // add r0, #0x4c
    // sub r2, #0x28
    // strh r2, [r0]
    // ldrsh r3, [r6, r2]
    // add r0, #0x4e
    // sub r3, #0x28
    // strh r3, [r0]
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r6 + 0x24)), 0x4c, 0x4e);
    ManagedSprite_SetOamMode(*((u32*)(r6 + 0x24)), 1);
    // mvn r0, r0
    *((u32*)(r6 + 0x54)) = 0xf;
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0x3f, 0x1f);
    ov07_0221C410(*((u32*)r6), ov07_0222E108, r6);
}




void ov07_0222E3A4(void) {
    // add r0, #0x10
    ov07_02222418(0, 0x00000AAA, 3);
    // mvn r0, r0
    *((u32*)(r4 + 0x18)) = (0 * *((u32*)(r4 + 0x18)));
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xa, 0x10);
    // sub r2, #0x1a
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xa, 0xa);
    *((u32*)(r4 + 0x4c)) = 0;
    *((u32*)(r4 + 0x50)) = 0;
}




void ov07_0222E3E8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E402: ; jump table
    // add r0, #0x10
    // bpl _0222E4F2
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r4, #0x24
    // str r0, [sp, #4]
    // add r0, #0x10
    // add r0, #0x24
    // add r0, #0x10
    // asr r1, r1, #0x10
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r4, #0x24
    // str r3, [sp]
    // str r0, [sp, #4]
    // asr r3, r3, #0x10
    // add r0, #0x24
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
}




void ov07_0222E4F8(void) {
    // eor r1, r0
    // str r0, [r4]
}




void ov07_0222E54C(void) {
    ov07_022324D8(0x58);
    *((u32*)(r0 + 4)) = r5;
    ov07_0221C468(r5);
    ov07_02222004(*((u32*)(r4 + 4)), r0);
    ov07_0221C4A8(r5, 0);
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 8)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    ov07_0221C470(r5);
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 8)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    *((u16*)(r4 + 0xe)) = r0;
    Pokepic_SetAttr(*((u32*)(r4 + 8)), 0xb, 0x32);
    *((u32*)(r4 + 0x54)) = 1;
    ov07_0222E3A4(r4, *((u32*)(r4 + 0x54)));
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222E4F8, r4);
}




void ov07_0222E5E8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E600: ; jump table
    // add r0, #0x10
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bpl _0222E6A4
    // add r4, #0x10
    // str r0, [sp]
    // add r0, #0x10
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r2, #0xf4
    // add r2, #0xf3
}




void ov07_0222E6A8(void) {
    // bpl _0222E6F2
}




void ov07_0222E6F4(void) {
    ov07_022324D8(0x44);
    // str r5, [r4]
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0xc)) = r0;
    // str r0, [sp]
    // add r0, #0x10
    ov07_02222508(r4, 0xa, 0xa, 0xf);
    *((u32*)(r4 + 0x34)) = 4;
    ov07_0221C468(*((u32*)r4));
    ov07_0221FAA0(*((u32*)r4), r0);
    *((u32*)(r4 + 0x40)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 1);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221C410(*((u32*)r4), ov07_0222E6A8, r4);
}




void ov07_0222E754(void) {
    // str r0, [sp]
    // add r0, #0x18
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
}




void ov07_0222E7BC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E7D4: ; jump table
    // add r0, #0x18
    // str r0, [sp]
    // add r0, #0x18
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x18
    // add r4, #0x18
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x3c
}




void ov07_0222E894(void) {
    // bmi _0222E8FC
    // sub r0, r1, r0
    // sub r0, r1, r0
    // sub r0, r1, r0
}




void ov07_0222E90C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222E928: ; jump table
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
    // str r0, [sp]
    // mvn r0, r0
    // mvn r0, r0
    // str r0, [sp]
    // mvn r0, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
    // add r0, #0x3c
}




void ov07_0222EA48(void) {
    // str r2, [sp]
    ov07_022324D8(0x80);
    // str r6, [r4]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 0x14)) = r5;
    ManagedSprite_SetDrawPriority(r5, 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x14)), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x14)), 2);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x14)), 1);
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x14)), 4);
    *((u32*)(r4 + 0x6c)) = 3;
    *((u32*)(r4 + 0x70)) = (0x19 << 4);
    *((u32*)(r4 + 0x74)) = 0x000005DC;
    *((u32*)(r4 + 0x78)) = (0xfa << 2);
    ov07_0221C410(*((u32*)r4), ov07_0222E90C, r4);
}




void ov07_0222EAB4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222EACA: ; jump table
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, #0x10
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, #0x10
}




void ov07_0222EB00(void) {
    // str r0, [r4]
    // add r0, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x10
    // str r0, [r4]
    // str r0, [r4]
}




void ov07_0222EB6C(void) {
    ov07_022324D8(0x38);
    *((u32*)(r0 + 4)) = r5;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 8)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 8)), 1);
    *((u16*)(r4 + 0xe)) = r0;
    *((u32*)(r4 + 0x34)) = 0;
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222EB00, r4);
}




void ov07_0222EBB0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222EBCA: ; jump table
    // add r0, #0x14
    // str r0, [r4]
    // ldrsh r2, [r4, r2]
    // add r2, #8
    // ldrsh r1, [r4, r1]
    // add r0, #0x14
    // asr r2, r2, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // add r2, #0x20
    // str r0, [sp, #4]
    // add r0, #0x14
    // asr r2, r2, #0x10
    // str r0, [r4]
    // add r0, #0x14
    // ldrsh r2, [r4, r2]
    // add r0, #0x14
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, r1, r2
    // add r0, #0x40
    // asr r2, r2, #0x10
    // str r0, [r4]
    // add r0, #0x40
    // ldrsh r2, [r4, r2]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x14
    // str r0, [r4]
    // add r0, #0x14
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x40
    // str r0, [r4]
    // add r0, #0x40
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // str r0, [r4]
}




void ov07_0222ED7C(void) {
    ov07_022324D8(0x64);
    *((u32*)(r0 + 4)) = r5;
    ov07_0221C468(r5);
    ov07_02222004(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 1);
    *((u16*)(r4 + 0x12)) = r0;
    ov07_0221C470(r5);
    ov07_0221FA48(*((u32*)(r4 + 4)), r0);
    *((u32*)(r4 + 0x38)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x3c)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x38)), 1);
    *((u16*)(r4 + 0x3e)) = r0;
    ov07_0221C410(*((u32*)(r4 + 4)), ov07_0222EBB0, r4);
}




void ov07_0222EDF0(void) {
}




void ov07_0222EE14(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222EE2E: ; jump table
    // add r0, #0x1c
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0x1c
    // str r0, [sp, #8]
    // add r0, #0x1c
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r4, #0x1c
    // str r0, [sp, #8]
    // add r0, #0x1c
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r2, #0xf4
    // add r2, #0xf3
}




void ov07_0222EF0C(void) {
    // str r2, [r1]
}




void ov07_0222EF58(void) {
    // str r0, [r5]
}




void ov07_0222EF88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222EFA2: ; jump table
    // add r0, r6, r2
    // add r1, #0x60
    // add r1, r1, r2
    // add r0, r6, r2
    // add r1, #0x60
    // add r1, r1, r2
    // add r0, r6, r0
    // add r2, #0x78
    // str r0, [r2, r1]
    // add r0, r6, r0
    // add r4, #0x60
    // add r4, #0x60
}




void ov07_0222F0B0(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    ov07_022324D8(0x90);
    // ldr r1, [sp]
    // str r4, [r0]
    *((u32*)(r0 + 4)) = r1;
    // ldr r1, [sp, #4]
    // str r0, [sp, #0x14]
    *((u32*)(r0 + 8)) = r1;
    ov07_0221C468(*((u32*)r0));
    // ldr r0, [sp, #0x14]
    ov07_0221FA48(*((u32*)r0), r0);
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x18)) = r0;
    Pokepic_GetAttr(0);
    // asr r7, r0, #0x10
    // ldr r0, [sp, #0x14]
    Pokepic_GetAttr(*((u32*)((r0 << 0x10) + 0x18)), 1);
    // ldr r1, [sp, #0x14]
    // asr r0, r0, #0x10
    // add r1, #0x44
    // str r0, [sp, #0xc]
    // strh r0, [r1]
    // ldr r0, [sp, #0x14]
    ov07_0221C468(*((u32*)(r0 << 0x10)));
    // ldr r0, [sp, #0x14]
    ov07_0221FAA0(*((u32*)r0), r0);
    // ldr r1, [sp, #0x14]
    // add r1, #0x46
    // strh r0, [r1]
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x1c
    ov07_0221F9E8(*((u32*)r1));
    // ldr r5, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x1c
    SpriteSystem_NewSprite();
    *((u32*)(r5 + 0x48)) = r0;
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x48)), 0);
    // add r0, r4, r0
    // asr r1, r0, #1
    // asr r0, r0, #4
    // str r0, [sp, #0x18]
    // add r1, r1, r0
    // ldrsh r0, [r1, r0]
    // asr r1, r0, #0x1f
    _ll_mul(2, FX_SinCosTable_, (3 << 0x10), 0);
    // add r2, r0, r2
    // adc r1, r0
    // asr r6, r0, #0x10
    // ldr r0, [sp, #0x18]
    // ldrsh r0, [r1, r0]
    // asr r1, r0, #0x1f
    _ll_mul(((((2 << 0xa) >> 0xc) | (r1 << 0x14)) << 4), FX_SinCosTable_, (3 << 0x10), 0);
    // add r0, r0, r2
    // adc r1, r2
    // asr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r7, r6
    // asr r6, r0, #0x10
    ManagedSprite_SetFlipMode(*((u32*)(r5 + 0x48)), 1, (r4 >> 0x1f));
    // sub r0, r7, r6
    // asr r6, r0, #0x10
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // sub r0, r1, r0
    // asr r2, r0, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x48)), r6);
    *((u32*)(r5 + 0x78)) = 0;
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    ov07_0221C410(*((u32*)0), ov07_0222EF88);
}




void ov07_0222F210(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F22A: ; jump table
    // str r0, [sp]
    // add r0, #0x14
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x38
    // add r0, #0x14
    // add r2, #0xf4
    // add r2, #0xf3
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldrsh r3, [r4, r3]
    // add r0, #0x60
    // add r0, #0x60
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
}




void ov07_0222F378(void) {
    // str r2, [sp]
    ov07_022324D8(0x8c);
    // str r5, [r4]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C468(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_SetAttr(6, 0);
    ov07_0221C468(r5);
    ov07_02221F80(r5, r0, 0);
    // add r1, #0x88
    // strh r0, [r1]
    ov07_0221C468(r5, r4);
    ov07_02221F80(r5, r0, 1);
    // add r1, #0x8a
    // strh r0, [r1]
    *((u32*)(r4 + 0x5c)) = r6;
    ManagedSprite_SetDrawPriority(r6, 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x5c)), 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x5c)), 0x88, 0x8a);
    ov07_0221C410(*((u32*)r4), ov07_0222F210, r4);
}




void ov07_0222F408(void) {
    // lsl r2, r0
    // add r4, #0xc4
    // str r0, [sp]
}




void ov07_0222F434(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x28
    ov07_02222590(r0, 0xa, 0xa, 0xa);
    // str r0, [sp]
    // add r0, #0x4c
    ov07_02222508(r4, 0xa, 0xa, 1);
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x98
    // str r1, [r0]
    ov07_0221C468(*((u32*)r4), 6);
    ov07_02231924(*((u32*)r4), r0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x20)), *((u16*)(ov07_02236800 + (r0 << 1))), (r0 << 1));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x18)), 1);
    // add r0, #0x28
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    ov07_02222644(r4);
    // add r0, #0xc8
    // ldr r1, [sp, #0x10]
    _fsub(0);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x18)));
    ov07_0222F408(r4, *((u32*)(r4 + 0x18)));
}




void ov07_0222F4D4(void) {
    // add r0, #0x94
    // add r0, #0x28
    // add r0, #0x28
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // add r0, #0xc8
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r0, #0x98
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0x98
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r5, #0x28
    // str r0, [sp, #8]
    // add r0, #0x28
    // add r0, #0x4c
    // ldrsh r0, [r5, r0]
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // add r0, #0x28
    // add r0, #0xc8
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r0, #0x94
    // add r0, #0x94
    // str r1, [r0]
}




void ov07_0222F600(void) {
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x1c)));
    // add r1, sp, #0xc
    // ldrsh r3, [r1, r0]
    // ldrsh r1, [r1, r0]
    // str r3, [sp]
    // sub r3, #0x40
    // str r0, [sp, #4]
    // add r0, #0x70
    // asr r3, r3, #0x10
    ov07_02222268(r4, r1, (r3 << 0x10));
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x28
    ov07_02222590(r4, 2, 0xa, 0x14);
    // add r0, #0x28
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    ov07_02222644(r4);
    // add r0, #0xcc
    // ldr r1, [sp, #0x14]
    _fsub(0);
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x1c)));
    // add r0, #0x70
    ov07_022222F0(r4, *((u32*)(r4 + 0x1c)));
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x98
    // str r1, [r0]
    ov07_0221C470(*((u32*)r4), 6);
    ov07_02231924(*((u32*)r4), r0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x24)), *((u16*)(ov07_02236800 + (r0 << 1))), (r0 << 1));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 1);
    ov07_0222F408(r4, *((u32*)(r4 + 0x1c)));
}




void ov07_0222F6C0(void) {
    // add r0, #0x94
    // add r0, #0x98
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0x70
    // add r0, #0x98
    // add r0, #0x94
    // add r5, #0x94
    // str r0, [r5]
    // add r0, #0x70
    // add r0, #0x28
    // add r0, #0x28
    // add r1, sp, #4
    // add r2, sp, #0
    // add r0, #0xcc
    // ldr r1, [sp, #4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r0, #0x94
    // add r5, #0x94
    // str r0, [r5]
}




void ov07_0222F764(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F77E: ; jump table
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r0, #0x9c
    // add r0, #0x9c
    // bpl _0222F83E
    // str r0, [sp]
    // add r0, #0x9c
    // str r1, [sp, #4]
    // add r0, #0x9c
}




void ov07_0222F848(void) {
    ov07_022324D8(0xd0);
    // str r6, [r4]
    ov07_0221C514(r6);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221FA78(*((u32*)r4));
    // add r1, #0xc4
    // str r0, [r1]
    ov07_0221C468(r6, r4);
    ov07_0221FA48(*((u32*)r4), r0);
    Pokepic_GetAttr(0);
    // asr r0, r0, #0x10
    // str r0, [sp]
    Pokepic_GetAttr(r7, 1);
    // asr r5, r0, #0x10
    Pokepic_GetAttr(r7, 0x29);
    // sub r0, r5, r0
    // asr r5, r0, #0x10
    ov07_0221C470(r6);
    ov07_0221FA48(*((u32*)r4), r0);
    // str r0, [sp, #4]
    Pokepic_GetAttr(0);
    // asr r7, r0, #0x10
    // ldr r0, [sp, #4]
    Pokepic_GetAttr((r0 << 0x10), 1);
    // asr r6, r0, #0x10
    // ldr r0, [sp, #4]
    Pokepic_GetAttr((r0 << 0x10), 0x29);
    // sub r0, r6, r0
    *((u32*)(r4 + 0x14)) = r5;
    // asr r6, r0, #0x10
    ov07_0221C468(*((u32*)r4));
    ov07_0221FAA0(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C4E8(*((u32*)r4), 0);
    *((u32*)(r4 + 0x18)) = r0;
    ManagedSprite_SetDrawPriority(0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x18)), 1);
    // ldr r1, [sp]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x18)), r5);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x18)), 0);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x18)), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x18)), 2);
    ov07_0221C4E8(*((u32*)r4), 1);
    *((u32*)(r4 + 0x1c)) = r0;
    ManagedSprite_SetDrawPriority(0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x1c)), 1);
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x1c)), r7, r6);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 0);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x1c)), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x1c)), 2);
    ManagedSprite_SetAffineTranslation(*((u32*)(r4 + 0x1c)), 0, 0x28);
    ov07_0221FB78(*((u32*)r4), 0);
    // add r1, #0xc8
    // str r0, [r1]
    ov07_0221FB78(*((u32*)r4), 1);
    // add r1, #0xcc
    // str r0, [r1]
    ov07_0221C4E8(*((u32*)r4), 2);
    *((u32*)(r4 + 0x20)) = r0;
    ov07_0221C4E8(*((u32*)r4), 3);
    *((u32*)(r4 + 0x24)) = r0;
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x20)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x24)), 0);
    ov07_0221C410(*((u32*)r4), ov07_0222F764, r4);
}




void ov07_0222F9B8(void) {
    // add r0, #0xf8
    // str r2, [sp]
    ov07_02222508(0x19, 0xa, 0xa);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xf8
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    ov07_02222864(r4, r4, ov07_02222558, 0x38);
}




void ov07_0222FA08(void) {
    // str r0, [sp]
    // add r0, #0xf8
    ov07_02222508(r0, 0xa, 0xa, 0x19);
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xf8
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    ov07_02222864(r4, r4, ov07_02222558, 0x38);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 1);
}




void ov07_0222FA64(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222FA7C: ; jump table
    // add r0, #0x48
    // str r0, [sp]
    // add r0, #0x14
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x14
    // add r0, #0x48
}




void ov07_0222FB24(void) {
    // str r2, [sp]
    ov07_022324D8((0x47 << 2));
    // str r5, [r4]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C470(r5);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x38)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    *((u16*)(r4 + 0x3a)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 0x29);
    // ldrsh r1, [r4, r1]
    // sub r0, r1, r0
    *((u16*)(r4 + 0x3a)) = r0;
    // add r0, sp, #4
    ov07_0221F9E8(r5);
    *((u32*)(r4 + 0x3c)) = r7;
    ManagedSprite_SetAnim(r7, 1);
    // add r2, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    *((u32*)(r5 + 0x3c)) = r0;
    ManagedSprite_SetOamMode(1);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x3c)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x3c)), 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x3c)), 0x38, 0x3a);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x3c)), 0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0x3c)), 2);
    ov07_0221C410(*((u32*)r4), ov07_0222FA64, r4);
}




void ov07_0222FBEC(void) {
    // str r1, [sp, #0x10]
    // add r6, #0x30
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov07_022220FC(r0, 0, 0x00007FFF, 0);
    // add r0, r0, r4
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x38));
    // ldr r0, [sp, #0x10]
    // add r6, #0x24
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x38)) * *((u32*)(r5 + 0x48)));
    // add r5, #0x24
    // add r4, r4, r0
}




void ov07_0222FC44(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // ldr r0, [sp]
    ov07_02222180(r0);
    // add r0, r1, r0
    // asr r0, r0, #4
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(FX_SinCosTable_, ((((*((u32*)(r5 + 0x38)) << 2) << 0x10) >> 0x10) << 2), ((0xa << 0xc) * *((u32*)(r6 + 0x14))), *((u32*)(r6 + 0x14)));
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r5, r2]
    // add r1, r1, r2
    // ldrsh r2, [r6, r2]
    // asr r1, r1, #0x10
    // mov ip, r2
    // add r7, r7, r2
    // adc r3, r2
    // asr r2, r2, #0x10
    // mov r3, ip
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x18)), ((0x13 << 4) << 0x10), ((((r0 >> 0xc) | (r1 << 0x14)) << 4) << 0x10), ((r0 >> 0xc) | (r1 << 0x14)));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x18)), 1);
    ov07_0221FAE8(*((u32*)r6));
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x18)), (r0 + 1));
    // ldr r0, [sp]
    // add r5, #0x24
    // add r0, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov07_0222FD14(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222FD2E: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    // add r0, r4, r0
    // bpl _0222FDFA
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    // add r0, r4, r0
}




void ov07_0222FE04(void) {
    // str r2, [sp]
    ov07_022324D8((0x4d << 2));
    // str r4, [r6]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C468(r4);
    ov07_0221FA48(*((u32*)r6), r0);
    Pokepic_GetAttr(0);
    // strh r0, [r6, r1]
    Pokepic_GetAttr(r5, 1);
    // strh r0, [r6, r1]
    // add r0, sp, #4
    ov07_0221F9E8(r4);
    *((u32*)(r6 + 0x18)) = r7;
    // add r2, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r6 + 4)), *((u32*)(r6 + 8)));
    *((u32*)(r5 + 0x18)) = r0;
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x18)), 0x64);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x18)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r5 + 0x18)), 1);
    ov07_0221C468(*((u32*)r6));
    ov07_02222004(*((u32*)r6), r0);
    *((u32*)(r6 + 0x14)) = r0;
    ov07_0221C410(*((u32*)r6), ov07_0222FD14, r6);
}




void ov07_0222FEB0(void) {
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    // add r0, sp, #8
    // ldrsh r3, [r0, r1]
    // ldrsh r2, [r0, r1]
    // neg r0, r0
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // add r2, r2, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
}




void ov07_0222FF04(void) {
    ov07_022222F0(r1, r0);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(r4);
    // add r1, sp, #8
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
    // ldr r0, [sp]
    // asr r0, r0, #4
    // ldrsh r0, [r0, r1]
    // asr r7, r0, #0x1f
    // str r0, [sp, #4]
    _ll_mul(FX_SinCosTable_, r7, (0xe << 0xc), 0);
    // add r6, sp, #8
    // ldrsh r2, [r6, r2]
    // add r6, r3, r6
    // ldr r1, [sp]
    // adc r5, r3
    // asr r3, r3, #0x10
    // add r2, r2, r3
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(r4, (0 << 0x10), ((((2 << 0xa) >> 0xc) | (r1 << 0x14)) << 4));
    // ldr r0, [sp, #4]
    _ll_mul(r7, (0xae << 2), 0);
    // add r2, r0, r2
    // adc r1, r3
    // neg r0, r1
    _fflt((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    _fdiv(0x45800000);
    _fadd((0xfe << 0x16), r0);
    ManagedSprite_SetAffineScale(r4, r0, r0);
}




void ov07_0222FFD0(void) {
    // str r2, [r7, r0]
    // str r2, [r7, r0]
    // add r0, r7, r0
    // add r3, #0x54
    // add r1, r3, r2
    // str r1, [r7, r0]
    // add r6, #0x54
    // str r0, [sp]
    // add r6, #0x24
    // ldr r0, [sp]
}




void ov07_02230058(void) {
}




void ov07_02230094(void) {
    // str r2, [sp]
    ov07_022324D8((0x9e << 2));
    // str r4, [r6]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C468(r4);
    ov07_0221FA48(*((u32*)r6), r0);
    Pokepic_GetAttr(0);
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    Pokepic_GetAttr(r5, 1);
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    ov07_0221F9E8((r0 << 0x10), r4);
    *((u32*)(r6 + 0x18)) = r7;
    // add r2, sp, #0xc
    SpriteSystem_NewSprite(*((u32*)(r6 + 4)), *((u32*)(r6 + 8)));
    *((u32*)(r5 + 0x18)) = r0;
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x18)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x18)), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0x18)), 2);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x18)), 0);
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x18)));
    _s32_div_f(r4, 3);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x18)));
    ov07_0221C468(*((u32*)r6));
    ov07_02222004(*((u32*)r6), r0);
    *((u32*)(r6 + 0x10)) = r0;
    ov07_0221C468(*((u32*)r6));
    ov07_0222202C(*((u32*)r6), r0);
    *((u32*)(r6 + 0x14)) = r0;
    ov07_0221C410(*((u32*)r6), ov07_02230058, r6);
}




void ov07_02230170(void) {
    *((u32*)(r0 + 0x18)) = 0x00007FFF;
    *((u32*)(r0 + 0x24)) = 5;
    *((u32*)(r0 + 0x1c)) = (1 << 0x10);
    *((u32*)(r0 + 0x28)) = 0x10;
    *((u32*)(r0 + 0x18)) = 0x00007FFF;
    // mvn r1, r1
    *((u32*)(r0 + 0x24)) = 4;
    *((u32*)(r0 + 0x1c)) = 0xFFFF0000;
    *((u32*)(r0 + 0x28)) = 0x10;
    *((u32*)(r0 + 0x18)) = 0x00007FFF;
    *((u32*)(r0 + 0x24)) = 0xa;
    *((u32*)(r0 + 0x1c)) = (0xa << 0xd);
    *((u32*)(r0 + 0x28)) = 0x10;
}




void ov07_022301C4(void) {
    ov07_02222C84(*((u32*)(r0 + 4)));
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x58
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp]
    // mvn r0, r0
    // ldr r4, [sp, #4]
    *((u32*)(r5 + 0x20)) = (0 * *((u32*)(r5 + 0x20)));
    // ldr r0, [sp]
    // tst r0, r4
    // add r2, r1, r0
    // sub r2, r1, r0
    // ldr r1, [sp, #4]
    // sub r3, r4, r1
    // add r0, r0, r1
    // asr r0, r0, #4
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (((*((u32*)(r5 + 0x18)) << 0x10) >> 0x10) << 2));
    // add r2, r0, r2
    // adc r1, r0
    // asr r7, r0, #0x10
    // sub r0, r4, r0
    _s32_div_f((*((u32*)(r5 + 0x14)) * *((u32*)(r5 + 0x24))), 0xa, (2 << 0xa));
    // add r0, r7, r0
    // asr r7, r0, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bpl _0223027A
    // add r6, #0xc0
    // add r0, r0, r7
    ov07_02222D88((((*((u32*)(r5 + 0x30)) << 0x10) << 0x10) >> 0x10), ((((*((u32*)(r5 + 0x30)) >> 0x10) << 0x10) << 0x10) >> 0x10));
    // ldr r1, [sp, #8]
    // str r0, [r1, r2]
    // ldr r0, [sp]
}




void ov07_022302A8(void) {
}




void ov07_022303A4(void) {
    ov07_022324D8(0x34);
    // str r7, [r4]
    ov07_0221C470(r7);
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0xc)) = r0;
    Pokepic_GetAttr(0);
    // asr r6, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 1);
    // asr r5, r0, #0x10
    Pokepic_GetAttr(*((u32*)(r4 + 0xc)), 0x29);
    // sub r0, r5, r0
    // asr r5, r0, #0x10
    ov07_0221C470(*((u32*)r4));
    ov07_0221FAC8(*((u32*)r4), r0);
    Pokepic_SetAttr(*((u32*)(r4 + 0xc)), 6, 1);
    // sub r6, #0x28
    *((u32*)(r4 + 0x14)) = r5;
    // sub r5, #0x28
    // asr r0, r0, #0x10
    // neg r0, r0
    // neg r1, r5
    *((u32*)(r4 + 0x10)) = r5;
    ov07_02222D88((((r6 << 0x10) << 0x10) >> 0x10), ((r1 << 0x10) >> 0x10));
    *((u32*)(r4 + 0x30)) = r0;
    ov07_0221FAF8(*((u32*)r4), 1);
    ov07_02222D90();
    ov07_0221BFD0(*((u32*)r4));
    ov07_02222BE4(r5, *((u32*)(r4 + 0x30)), r0);
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 0x20)) = 1;
    ov07_0221C470(r7);
    ov07_02231924(*((u32*)r4), r0);
    ov07_0221FAEC(*((u32*)r4), 1);
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(((r5 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    ov07_0221FAE8(*((u32*)r4));
    SetBgPriority(0, (((r0 + 1) << 0x18) >> 0x18));
    ov07_0221C410(*((u32*)r4), ov07_022302A8, r4);
}




void ov07_0223049C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022304B8: ; jump table
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc
    ov07_02222268(r1, 0x7f, 0, 0);
    // and r1, r0
    // str r0, [r2]
    ov07_02231EC0(*((u32*)r4), 0, 0);
    // strh r0, [r1]
    *((u16*)(0x04000040 + 4)) = 0xbf;
    *((u32*)(r4 + 8)) = 7;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) - 1);
    // bpl _022305F0
    ov07_0221FA78(*((u32*)r4), 0x04000040);
    ov07_0221E6C8(*((u32*)r4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 1, ((r0 << 0x10) >> 0x10), 0);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // add r0, #0xc
    ov07_022222B4(r4);
    // ldrsh r2, [r4, r0]
    // sub r0, r0, r2
    // add r2, #0x80
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04000040 + 4)) = 0xbf;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov07_0221FA78(*((u32*)r4), 0x04000040);
    PaletteData_GetSelectedBuffersBitmask();
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // and r0, r1
    // str r0, [r2]
    ov07_0221FA78(*((u32*)r4), *((u32*)(1 << 0x1a)), (1 << 0x1a));
    ov07_0221E6C8(*((u32*)r4));
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 1, ((r0 << 0x10) >> 0x10), 0);
    ov07_0221FA78(*((u32*)r4));
    PaletteData_GetSelectedBuffersBitmask();
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    Heap_Free(r4);
    ov07_0221C448(*((u32*)r4), r5);
}




void ov07_02230600(void) {
    ov07_022324D8(0x34);
    // str r4, [r2]
    ov07_0221C410(r4, ov07_0223049C, r0);
}




void ov07_0223061C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230636: ; jump table
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // add r0, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // add r0, #0x14
}




void ov07_022306D8(void) {
    // str r2, [sp]
    ov07_022324D8(0x3c);
    // str r6, [r4]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 8)) = r0;
    *((u32*)(r0 + 0x10)) = r5;
    ManagedSprite_SetAnimateFlag(r5, 1);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x10)), 1);
    ov07_0221C410(*((u32*)r4), ov07_0223061C, r4);
}




void ov07_02230714(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223072E: ; jump table
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    // add r0, #0x14
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    // add r0, #0x14
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // asr r0, r0, #0x10
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x14
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    // add r0, #0x14
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x38
    // add r0, #0x14
    // str r0, [sp]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
    // add r2, #0xf4
    // add r2, #0xf3
}




void ov07_022308E4(void) {
    ov07_022324D8(0x78);
    // str r5, [r4]
    ov07_0221C470(r5);
    ov07_0221FAA0(*((u32*)r4), r0);
    *((u16*)(r4 + 0xc)) = r0;
    ov07_0221C470(*((u32*)r4));
    ov07_0221FA48(*((u32*)r4), r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(1);
    *((u16*)(r4 + 8)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 0);
    *((u16*)(r4 + 0xa)) = r0;
    *((u32*)(r4 + 0x5c)) = 0xa;
    *((u32*)(r4 + 0x60)) = 7;
    *((u32*)(r4 + 0x64)) = 0xa;
    *((u32*)(r4 + 0x68)) = 0x1e;
    *((u32*)(r4 + 0x6c)) = 0xa;
    *((u32*)(r4 + 0x70)) = 1;
    *((u32*)(r4 + 0x74)) = 0x00040003;
    // str r1, [sp]
    // add r0, #0x38
    ov07_022227A8(r4, 2, 0, 1);
    ov07_0221C410(*((u32*)r4), ov07_02230714, r4);
}




void ov07_02230960(void) {
    // add r0, #8
}




void ov07_02230994(void) {
    ov07_022324D8(0x30);
    // str r5, [r4]
    ov07_0221C528(r5);
    *((u32*)(r4 + 4)) = r0;
    ov07_0221C468(r5);
    ov07_0223192C(r5, r0);
    ov07_0221C4C0(r5, 0);
    *((u32*)(r4 + 0x2c)) = r0;
    ov07_0221C4C0(r5, 1);
    Sprite_DeleteAndFreeResources();
    ov07_0221C4C0(r5, 1);
    *((u32*)(r4 + 0x2c)) = r0;
    ov07_0221C4C0(r5, 0);
    Sprite_DeleteAndFreeResources();
    ov07_02222004(r5, r6);
    ov07_0222202C(r5, r6);
    // str r0, [sp, #0xc]
    ov07_02221F80(r5, r6, 0);
    // str r0, [sp, #0x10]
    ov07_02221F80(r5, r6, 1);
    // ldr r1, [sp, #0x10]
    // add r6, r1, r2
    // ldr r1, [sp, #0xc]
    // neg r1, r1
    // add r5, r0, r1
    // str r1, [sp, #8]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x2c)), (r6 << 0x10), (r5 << 0x10));
    // ldr r0, [sp, #8]
    // add r0, r5, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r2, r6, r2
    // str r0, [sp, #4]
    // add r0, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov07_02222268(r4, (r6 << 0x10), ((0x30 * r7) << 0x10), (r5 << 0x10));
    ov07_0221C410(*((u32*)r4), ov07_02230960, r4);
}




void ov07_02230A70(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230A8C: ; jump table
    // str r1, [sp]
    // add r0, #0x40
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r0, #0x40
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // sub r0, #0x1f
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, r1, r2
    // add r0, #0x1c
    // asr r2, r2, #0x10
    // add r0, #0x1c
    // bpl _02230B9C
    // ldrsh r3, [r4, r0]
    // ldrsh r2, [r4, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r1, r2, r6
    // sub r5, #0x2f
    // add r3, r3, r5
    // add r0, #0x1c
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x1c
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
}




void ov07_02230BA0(void) {
    ov07_022324D8(0x64);
    // str r5, [r4]
    ov07_0221C468(r5);
    ov07_0221FA48(r5, r0);
    *((u32*)(r4 + 0x14)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x18)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x14)), 1);
    *((u16*)(r4 + 0x1a)) = r0;
    ov07_02222004(r5, r6);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0222202C(r5, r6);
    *((u32*)(r4 + 0x10)) = r0;
    ov07_0221C410(*((u32*)r4), ov07_02230A70, r4);
}




void ov07_02230BF8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230C14: ; jump table
    // ldrsh r3, [r4, r0]
    // ldrsh r1, [r4, r0]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r5, [sp, #4]
    // sub r5, #0x2c
    // add r2, r1, r5
    // add r0, #0x18
    // asr r2, r2, #0x10
    // add r0, #0x18
    // add r4, #0x3c
    // str r1, [sp]
    // asr r5, r0, #0x10
    // asr r2, r0, #0x10
    // add r0, #0x3c
    // ldrsh r3, [r4, r0]
    // ldrsh r2, [r4, r0]
    // add r0, #0x18
    // str r3, [sp]
    // str r5, [sp, #4]
    // sub r5, #0x2c
    // add r1, r2, r5
    // add r3, r3, r4
    // asr r1, r1, #0x10
    // asr r3, r3, #0x10
    // add r0, #0x18
    // ldrsh r2, [r4, r2]
    // ldrsh r2, [r4, r2]
}




void ov07_02230D1C(void) {
    ov07_022324D8(0x60);
    // str r5, [r4]
    ov07_0221C470(r5);
    ov07_0221FA48(r5, r0);
    *((u32*)(r4 + 0x10)) = r0;
    Pokepic_GetAttr(0);
    *((u16*)(r4 + 0x14)) = r0;
    Pokepic_GetAttr(*((u32*)(r4 + 0x10)), 1);
    *((u16*)(r4 + 0x16)) = r0;
    ov07_02222004(r5, r6);
    *((u32*)(r4 + 8)) = r0;
    ov07_0222202C(r5, r6);
    *((u32*)(r4 + 0xc)) = r0;
    ov07_0221C410(*((u32*)r4), ov07_02230BF8, r4);
}




void ov07_02230D74(void) {
    // str r3, [sp]
    ov07_022324D8(0xac);
    // str r4, [r0]
    // str r0, [sp, #4]
    *((u32*)(r0 + 0xc)) = r6;
    ov07_0221C468(r4);
    ov07_02222004(r4, r0);
    // ldr r1, [sp, #4]
    *((u32*)(r1 + 0x10)) = r0;
    // add r0, sp, #8
    ov07_0221F9E8(*((u32*)r1));
    ov07_02221F80(r4, r5, 0);
    // add r1, sp, #8
    // strh r0, [r1]
    ov07_02221F80(r4, r5, 1);
    // add r1, sp, #8
    // ldr r5, [sp, #4]
    *((u16*)(r1 + 2)) = r0;
    // add r2, sp, #8
    // ldr r0, [sp]
    *((u32*)(r5 + 0x14)) = r0;
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(0, 2, r2);
    SpriteSystem_NewSprite(r7, r6);
    *((u32*)(r5 + 0x14)) = r0;
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x14)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x14)), 1);
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #4]
    ov07_0221C410(*((u32*)r0), ov07_02230E20);
}




void ov07_02230E20(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230E38: ; jump table
    // add r1, #0x1c
    // add r2, #0x64
    // add r1, #0x1c
    // add r2, #0x64
    // add r1, #0x1c
    // add r2, #0x64
    // add r1, #0x40
    // add r2, #0x88
    // add r1, #0x40
    // add r2, #0x88
    // add r1, #0x1c
    // add r2, #0x64
    // add r1, #0x1c
    // add r2, #0x64
    // add r1, #0x40
    // add r2, #0x88
}




void ov07_02230F0C(void) {
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    // add r1, sp, #8
    // ldrsh r3, [r1, r0]
    // ldrsh r1, [r1, r0]
    // sub r0, #0x20
    // asr r0, r0, #0x10
    // add r2, r1, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    // str r0, [sp]
}




void ov07_02230F6C(void) {
}




void ov07_02230F98(void) {
    ov07_022324D8(0x3c);
    // str r6, [r4]
    *((u32*)(r0 + 0xc)) = r7;
    *((u32*)(r0 + 0x10)) = r5;
    ManagedSprite_SetDrawFlag(r5, 0);
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0x10)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 8)) = r0;
    ov07_0221C410(*((u32*)r4), ov07_02230FE8, r4);
}




void ov07_02230FE8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231002: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // add r0, #0x14
    // add r1, r2, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // add r0, #0x14
}




void ov07_022310E0(void) {
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    ov07_022324D8(0x54);
    // ldr r1, [sp, #8]
    // str r5, [r0]
    // str r0, [sp, #0x14]
    *((u32*)(r0 + 8)) = r1;
    ov07_0221C468(*((u32*)r0));
    ov07_02222004(r5, r0);
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, sp, #0x18
    ov07_0221F9E8(*((u32*)r1));
    ov07_02221F80(r5, r4, 0);
    // add r1, sp, #0x18
    // strh r0, [r1]
    ov07_02221F80(r5, r4, 1);
    // ldr r7, [sp, #0x14]
    // ldr r6, [sp, #0x14]
    // ldr r5, [sp, #0x14]
    // add r1, sp, #0x18
    // add r7, #0x3c
    // add r6, #0x24
    *((u16*)(r1 + 2)) = r0;
    // add r5, #0x14
    // add r7, #0x14
    // add r6, #0x14
    // add r2, sp, #0x18
    // ldr r0, [sp, #0xc]
    *((u32*)(r5 + 0xc)) = r0;
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(0, 2, r2);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    SpriteSystem_NewSprite();
    *((u32*)(r5 + 0xc)) = r0;
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0xc)), 0x64);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0xc)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    ov07_022311B0(*((u32*)(r5 + 0xc)), r6, r7, r4);
    // bpl _02231144
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    ov07_0221C410(*((u32*)r0), ov07_02231234);
}




void ov07_022311B0(void) {
    // add r1, r4, r1
    // asr r1, r1, #1
    // str r0, [r7]
    // add r1, sp, #0
    // str r0, [r6]
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // sub r6, #0xe
    // ldr r0, [sp, #0x18]
    // ldrsh r3, [r2, r1]
    // add r6, #0x28
    // add r0, r3, r4
    // ldrsh r0, [r2, r3]
    // add r0, #0x28
    // strh r0, [r2]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
}




void ov07_02231204(void) {
    // str r1, [r2]
    // str r0, [r1]
}




void ov07_02231234(void) {
    // str r1, [sp]
    // add r6, #0x3c
    // add r4, #0x24
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov07_022312A8(void) {
    // str r1, [sp, #0x10]
    // add r6, #0x30
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov07_022220FC(r0, 0, 0x00007FFF, 0);
    // add r0, r0, r4
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x38));
    // ldr r0, [sp, #0x10]
    // add r6, #0x24
    *((u32*)(r5 + 0x48)) = (*((u32*)(r5 + 0x38)) * *((u32*)(r5 + 0x48)));
    // add r5, #0x24
    // add r4, r4, r0
}




void ov07_02231300(void) {
    // str r0, [sp]
    // add r7, #0x30
    ov07_02222180(r0);
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r4, r2]
    // add r1, r1, r2
    // ldrsh r2, [r6, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x18)), ((0x13 << 4) << 0x10), 0x00000132);
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x18)), 1);
    ov07_0221FAE8(*((u32*)r6));
    ManagedSprite_SetPriority(*((u32*)(r5 + 0x18)), (r0 + 1));
    // ldr r0, [sp]
    // add r7, #0x24
    // add r4, #0x24
    // str r0, [sp]
}




void ov07_02231378(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231392: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    // add r0, r4, r0
    // bpl _0223145E
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xfe
    // add r0, r4, r0
    // add r0, r4, r0
}




void ov07_02231468(void) {
    // str r2, [sp]
    ov07_022324D8((0x4d << 2));
    // str r4, [r6]
    // ldr r0, [sp]
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 8)) = r0;
    ov07_0221C468(r4);
    ov07_0221FA48(*((u32*)r6), r0);
    Pokepic_GetAttr(0);
    // strh r0, [r6, r1]
    Pokepic_GetAttr(r5, 1);
    // strh r0, [r6, r1]
    // add r0, sp, #4
    ov07_0221F9E8(r4);
    *((u32*)(r6 + 0x18)) = r7;
    // add r2, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r6 + 4)), *((u32*)(r6 + 8)));
    *((u32*)(r5 + 0x18)) = r0;
    ManagedSprite_SetDrawPriority(*((u32*)(r5 + 0x18)), 0x64);
    ManagedSprite_SetOamMode(*((u32*)(r5 + 0x18)), 1);
    ManagedSprite_SetAnimateFlag(*((u32*)(r5 + 0x18)), 1);
    ov07_0221C468(*((u32*)r6));
    ov07_02222004(*((u32*)r6), r0);
    *((u32*)(r6 + 0x14)) = r0;
    ov07_0221C410(*((u32*)r6), ov07_02231378, r6);
}




void ov07_02231514(void) {
}




void ov07_0223151C(void) {
}




void ov07_02231524(void) {
    ov07_0221BFD0(*((u32*)(r0 + 0x1c)));
    ov07_0221FB04(*((u32*)(r5 + 0x1c)), 3);
    SetBgPriority(((r4 << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    GfGfxLoader_LoadCharData(*((u32*)r5), *((u32*)(ov07_0223680C + (*((u32*)(r5 + 4)) << 4))), *((u32*)(r5 + 0x2c)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x30)), *((u32*)r5), *((u32*)(ov07_02236810 + (*((u32*)(r5 + 4)) << 4))), r6);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x2c)), ((r4 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    GfGfxLoader_LoadScrnData(*((u32*)r5), *((u32*)(ov07_02236814 + (*((u32*)(r5 + 4)) << 4))), *((u32*)(r5 + 0x2c)), r4);
}




void ov07_022315C0(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022315D8: ; jump table
    ov07_02231524(r1, 2);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x39, *((u16*)(r4 + 0x14)));
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    // add r1, #0x40
    *((u8*)(r4 + 0x18)) = ((*((u8*)(r4 + 0x18)) + 1) + 1);
    // add r0, #0x40
    // add r0, #0x40
    // strb r1, [r0]
    *((u16*)(r4 + 0x14)) = (*((u16*)(r4 + 0x14)) - 1);
    *((u16*)(r4 + 0x16)) = (*((u16*)(r4 + 0x16)) + 1);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x2c)), 2);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x34)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x38)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 0);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    // strh r1, [r0]
    // strh r2, [r0]
    // and r2, r3
    // strh r1, [r0]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x2c)), 2, 0, 0);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x2c)), 2, 3, 0);
    // and r0, r1
    // str r0, [r2]
    ov07_0221C448(*((u32*)(r4 + 0x1c)), r5, (1 << 0x1a));
    ov07_02232508(r4);
    // ldrsh r1, [r4, r3]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r4 + 0x10)) = 0xc;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r4 + 0x12)) = 0xe;
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x2c)), 2, 0, 0x10);
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x2c)), 2, 3, 0x12);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x34)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x38)));
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x3c)));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x24)));
}




void ov07_0223172C(void) {
}




void ov07_0223174C(void) {
    ov07_022324D8(0x44);
    // add r1, #0x18
    ov07_02231FE4(r6, r0);
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    ov07_0221C4E8(*((u32*)(r4 + 0x1c)), 0, r4);
    *((u32*)(r4 + 0x34)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 0x1c)), 1);
    *((u32*)(r4 + 0x38)) = r0;
    ov07_0221C4E8(*((u32*)(r4 + 0x1c)), 2);
    *((u32*)(r4 + 0x3c)) = r0;
    ov07_0221FB04(*((u32*)(r4 + 0x1c)), 2);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x34)), 2);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x38)), 2);
    ov07_0221C468(r6);
    ov07_0221C470(r6);
    ov07_02231924(r6, r0);
    ov07_0221BFC0(r6);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 0);
    ov07_0221FB04(*((u32*)(r4 + 0x1c)), 2);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x34)), r0);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x38)), r5);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x3c)), 0);
    ManagedSprite_SetPriority(*((u32*)(r4 + 0x3c)), 3);
    ManagedSprite_SetPriority(1);
    // and r2, r1
    // strh r1, [r0]
    // strh r2, [r0]
    // and r2, r0
    // str r0, [r3]
    ManagedSprite_SetOamMode(*((u32*)(r4 + 0x38)), 2, *((u32*)(0x20 << 0x15)), (0x20 << 0x15));
    *((u16*)(r4 + 0x10)) = 0;
    *((u16*)(r4 + 0x12)) = 0;
    ov07_0221C410(*((u32*)(r4 + 0x1c)), ov07_022315C0, r4);
}




void ov07_02231874(void) {
}




void ov07_022318A0(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov07_022318CC(void) {
}




void ov07_022318F8(void) {
    // add r1, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov07_02231924(void) {
}




void ov07_0223192C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231942: ; jump table
}




void ov07_02231958(void) {
}




void ov07_0223197C(void) {
    // add r1, r5, r5
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022319A4: ; jump table
}




void ov07_022319E0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022319F2: ; jump table
}




void ov07_02231A20(void) {
    // add r4, sp, #0
    // strh r1, [r4]
    // add r0, sp, #0
    // add r1, r0, r3
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = *((u16*)(*((u16*)ov07_02236864) + 2));
}




void ov07_02231A50(void) {
}




void ov07_02231A70(void) {
    // add r6, sp, #0
    // ldmia r7!, {r0, r1}
    // stmia r6!, {r0, r1}
    // add r1, sp, #0
    // add r0, r1, r0
    // add r1, sp
    // add r3, r3, r1
    // add r1, r0, r4
    // str r0, [r2]
    *((u32*)(r1 + 4)) = *((u32*)(0xc + 4));
    *((u32*)(r1 + 8)) = *((u32*)(0xc + 8));
}




void ov07_02231AD0(void) {
}




void ov07_02231AE0(void) {
}




void ov07_02231AF0(void) {
}




void ov07_02231B00(void) {
}




void ov07_02231B10(void) {
}




void ov07_02231B20(void) {
}




void ov07_02231B30(void) {
}




void ov07_02231B40(void) {
}




void ov07_02231B50(void) {
}




void ov07_02231B60(void) {
}




void ov07_02231B70(void) {
}




void ov07_02231B80(void) {
}




void ov07_02231B90(void) {
}




void ov07_02231BC0(void) {
}




void ov07_02231BF0(void) {
}




void ov07_02231C20(void) {
}




void ov07_02231C50(void) {
}




void ov07_02231C80(void) {
}




void ov07_02231CB0(void) {
}




void ov07_02231CE0(void) {
}




void ov07_02231D10(void) {
}




void ov07_02231D40(void) {
}




void ov07_02231D70(void) {
}




void ov07_02231DA0(void) {
}




void ov07_02231DD0(void) {
    // str r2, [r0]
    *((u32*)(r0 + 4)) = 0x000068D0;
    *((u32*)(r0 + 8)) = 0;
}




void ov07_02231DE0(void) {
}




void ov07_02231DE8(void) {
}




void ov07_02231E08(void) {
    // mvn r1, r1
    // mvn r1, r1
    ov07_0221FAF8(2);
    // lsl r2, r0
    // str r4, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, (1 | 1), r5);
}




void ov07_02231E44(void) {
    // mvn r0, r0
    // mvn r0, r0
    // str r3, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, r1, 0x1a);
}




void ov07_02231E74(void) {
    // mvn r0, r0
    // mvn r0, r0
    ov07_0221FAF8(r0, 2);
    // lsl r2, r0
    ov07_0221FAF8(r6, 1, 1);
    // lsl r1, r0
    // str r4, [sp]
    G2x_SetBlendAlpha_(0x04000050, 1, r7, r5);
}




void ov07_02231EC0(void) {
    ov07_0221FAF8(1);
    ov07_0221FAF8(r5, 2);
    ov07_0221FAF8(r5, 0);
    // lsl r3, r7
    // lsl r0, r2
    // lsl r1, r6
    // strh r1, [r0]
    ov07_0221FAF8(0x04000048, 1, ((1 | (1 | 1)) | 0x11), 1);
    ov07_0221FAF8(r5, 2);
    ov07_0221FAF8(r5, 0);
    // lsl r0, r2
    // lsl r3, r7
    // lsl r1, r6
    // and r1, r0
    // strh r1, [r0]
    ov07_0221FAF8(r5, 0, 0x04000048, ((1 | (1 | 1)) | 0x11));
    ov07_0221FAF8(r5, 1);
    // lsl r1, r0
    // lsl r2, r4
    // strh r0, [r1]
}




void ov07_02231FA0(void) {
    // strh r0, [r4]
    // strh r0, [r4]
    // strh r0, [r4]
}




void ov07_02231FD8(void) {
}




void ov07_02231FE4(void) {
}




void ov07_02232020(void) {
    // str r1, [r4]
    // and r1, r7
    // add r0, r5, r1
    // add r1, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r5, r1
    // add r0, r5, r1
    // ldr r1, [sp, #4]
    // add r1, r5, r1
    // str r0, [r4]
    // add r0, r5, r1
    // add r1, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // add r2, r5, r3
    // add r2, r5, r2
    // add r1, r5, r1
    // str r0, [r4]
    // and r1, r7
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r0, r5, r1
    // add r0, r5, r1
    // ldr r1, [sp, #8]
    // add r1, r5, r1
    // str r0, [r4]
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, r5, r1
    // add r0, r5, r1
    // ldr r1, [sp]
    // add r1, r5, r1
    // str r0, [r4]
    // ldr r1, [sp]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r2, r5, r3
    // add r2, r5, r2
    // ldr r0, [sp, #0xc]
    // add r1, r5, r1
    // str r0, [r4]
    // and r1, r7
    // add r0, r5, r1
    // add r0, r5, r1
    // add r0, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // and r0, r7
    // add r0, r5, r1
    // add r0, r5, r1
    // add r0, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // and r0, r7
    // add r0, r5, r1
    // add r0, r5, r1
    // add r0, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // and r0, r7
    // add r2, r5, r3
    // add r0, r5, r1
    // add r2, r5, r3
    // add r1, r5, r1
    // str r0, [r4]
}




void ov07_022323FC(void) {
    // str r1, [r4]
    // and r1, r6
    // add r0, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // and r0, r6
    // add r0, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // and r0, r6
    // add r0, r5, r1
    // add r1, r5, r1
    // str r0, [r4]
    // and r0, r6
    // add r2, r5, r3
    // add r1, r5, r1
    // str r0, [r4]
}




void ov07_022324D8(void) {
}




void ov07_02232508(void) {
}




void ov07_0223251C(void) {
    // add r1, #0x1b
    // sub r0, r0, r2
}




void ov07_02232540(void) {
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r4, sp, #0
}




void ov07_02232580(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
}




void ov07_022325BC(void) {
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void ov07_022325F4(void) {
}




void ov07_02232608(void) {
}




void ov07_0223261C(void) {
}




void ov07_02232630(void) {
}




void ov07_02232644(void) {
}




void ov07_02232658(void) {
}




void ov07_02232670(void) {
    // str r4, [r0]
    // add r1, #0x88
    // str r2, [r1]
}




void ov07_02232694(void) {
}




void ov07_022326C0(void) {
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x9c
    // str r0, [r1]
    // add r0, #0x9c
    // add r0, #0x9c
    // add r0, #0x94
    // str r2, [r0]
    // add r4, #0x98
    // str r0, [r4]
    // add r4, #0x98
    // str r0, [r4]
    // add r0, #0x94
    // str r1, [r0]
    // add r4, #0xa0
}




void ov07_02232730(void) {
    // str r0, [sp]
    // add r0, #0x90
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02232750: ; jump table
    // add r1, #0x8c
    // str r0, [r1]
    // str r0, [sp, #0x14]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, #0x8c
    // ldr r2, [sp, #0x10]
    // add r1, r4, r1
    // add r0, r4, r0
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x90
    // str r0, [r4]
    // str r0, [sp, #0x18]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, #0x8c
    // ldr r2, [sp, #4]
    // add r1, r4, r1
    // add r0, r4, r0
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x90
    // str r0, [r4]
    // str r0, [sp, #0x1c]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, #0x8c
    // ldr r2, [sp, #8]
    // add r1, r4, r1
    // add r0, r4, r0
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x90
    // str r0, [r4]
    // str r0, [sp, #0x20]
    // add r0, #0xa0
    // add r6, #0x10
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0xc]
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, #0x8c
    // ldr r2, [sp, #0xc]
    // add r1, r4, r1
    // add r0, r4, r0
    // str r0, [r6]
    // add r0, #0x90
    // add r4, #0x8c
    // str r1, [r0]
    // ldr r0, [sp]
}




void ov07_022329B0(void) {
    // add r0, #0x94
    // add r0, #0x98
    ov07_022325F4(*((u32*)r0));
    *((u32*)(r4 + 0x10)) = 1;
    ov07_0221FEB0(*((u32*)r4), 0x5f, r0, 0);
    *((u32*)(r4 + 0x14)) = r0;
    // add r4, #0x90
    // str r0, [r4]
    *((u32*)(r4 + 0x10)) = 0;
    // add r0, #0x90
    // str r1, [r0]
    SysTask_CreateOnMainQueue(ov07_02232730, r4, (0xfa << 2));
    ov07_02232730(r4);
}




void ov07_02232A04(void) {
    // add r0, #0x90
}




void ov07_02232A14(void) {
    // add r0, #0x88
    // str r1, [r0]
    ov07_0221C69C(1);
    ov07_02232AFC(r5, r4);
    SysTask_CreateOnMainQueue(ov07_02232A5C, r5, (0xfa << 2));
    // add r5, #0x84
    // str r0, [r5]
}




void ov07_02232A44(void) {
    // bx r3
    // nop
    // _02232A4C: .word ov07_02232A14
    // _02232A50: .word ov07_02232C28
}




void ov07_02232A54(void) {
    // add r0, #0x88
}




void ov07_02232A5C(void) {
    // str r0, [sp]
    // add r6, #0x88
    // str r0, [r6]
    // ldr r0, [sp]
}




void ov07_02232AB8(void) {
}




void ov07_02232AC0(void) {
    // str r1, [r0]
}




void ov07_02232AFC(void) {
    // add r0, #0x94
    // add r0, #0x98
    ov07_02232608(*((u32*)r0));
    sub_02015494(*((u32*)(r6 + 0x14)), 0, r7, r6);
    *((u32*)(r6 + 0x5c)) = 1;
    sub_02015528(*((u32*)(r6 + 0x14)), 1);
    // str r0, [sp]
    // add r0, #0x5c
    // str r0, [sp]
    Heap_Alloc(*((u32*)r6), 0x1c);
    GF_AssertFail();
    // str r7, [r4]
    *((u32*)(r4 + 8)) = *((u32*)(r6 + 4));
    *((u32*)(r4 + 0x18)) = ov07_02232C64;
    *((u32*)(r5 + 0x5c)) = 0;
    // ldr r0, [sp]
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0x10)) = *((u32*)(r5 + 0x14));
    *((u32*)(r4 + 0x14)) = *((u32*)(r5 + 0x38));
    GF_AssertFail(*((u32*)(r5 + 0x38)));
    ov07_02234530(*((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 4)) = r0;
    SysTask_CreateOnMainQueue(ov07_02232AC0, r4, 0x000003E9);
    // ldr r0, [sp]
    // str r0, [sp]
}




void ov07_02232BB0(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02232BCE: ; jump table
    // sub r0, #0x10
    // mvn r5, r5
    // sub r0, #0xa
    // mvn r5, r5
    // mvn r5, r5
    // sub r0, #0xb
    // mvn r5, r5
    // mvn r5, r5
    // sub r0, #0xd
    // add r5, #0xa
    // sub r2, r3, r2
    // str r2, [r4]
    // add r0, #0x20
    // sub r0, r2, r1
}




void ov07_02232C28(void) {
    // add r1, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
}




void ov07_02232C64(void) {
    // add r1, sp, #0
    // sub r6, #0xbe
    // asr r3, r1, #0x10
    // ldr r2, [sp]
    // add r3, r2, r4
    // sub r0, r4, r0
    // asr r0, r0, #0x10
    // ldr r2, [sp, #4]
    // add r0, r2, r1
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r3, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
}




void ov07_02232CD8(void) {
    // ldrsh r2, [r0, r1]
    // sub r1, r1, r2
    // asr r2, r1, #0x10
    // ldrsh r0, [r0, r2]
    // sub r0, #0x81
    // asr r0, r0, #0x10
    // add r0, r2, r0
    // add r0, r1, r0
}




void ov07_02232D20(void) {
    Heap_Alloc(*((u32*)(r0 + 8)), 0x24);
    GF_AssertFail();
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ov07_0223261C(0x00000403, r4);
    *((u32*)(r4 + 0x20)) = r0;
    ov07_02232630(0x00000403);
    ov07_0223261C(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x20)) = r0;
    ov07_02232630(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x1c)) = r0;
    ov07_0221FEB0(*((u32*)(r4 + 8)), 0x5f, *((u32*)(r4 + 0x20)), 0);
    *((u32*)(r4 + 0x18)) = r0;
}




void ov07_02232D80(void) {
    sub_02015494(*((u32*)(r0 + 0x18)), 0, ov07_02232CD8, r0);
    ov07_02232644(*((u32*)(r5 + 4)));
    sub_02015494(*((u32*)(r5 + 0x18)), r4, r6, r5);
    sub_02015494(*((u32*)(r5 + 0x18)), ov07_02232CD8, r5);
    sub_02015528(*((u32*)(r5 + 0x18)), 1);
}




void ov07_02232DF4(void) {
}




void ov07_02232E10(void) {
}




void ov07_02232E18(void) {
}




void ov07_02232E40(void) {
}




void ov07_02232E68(void) {
}




void ov07_02232E90(void) {
}




void ov07_02232EB8(void) {
}




void ov07_02232EE0(void) {
}




void ov07_02232F08(void) {
}




void ov07_02232F30(void) {
}




void ov07_02232F58(void) {
}




void ov07_02232F60(void) {
    // blx r1
}




void ov07_02232F74(void) {
}




u8 ov07_02232F80(void) {
}




void ov07_02232F84(void) {
}




void ov07_02232F9C(void) {
}




void ov07_02232FA8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02232FC0: ; jump table
    // add r0, #0xa0
    // add r2, sp, #0
    // str r0, [sp, #4]
    // add r0, #0x94
    // add r1, sp, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #2
    // add r0, #0xb4
    // add r1, #0x94
    // add r1, #0xd8
    // str r0, [r1]
    // add r0, sp, #0
    // add r1, #0xd0
    // str r0, [r1]
    // add r0, #0xd0
    // add r0, #0xd8
    // add r0, #0xd0
    // add r0, #0xd0
}




u8 ov07_02233088(void) {
}




void ov07_0223308C(void) {
    // add r1, #0xb8
    // add r2, #0xba
    // add r0, #0xbc
    // strh r1, [r0]
    // add r0, #0xbe
    // strh r1, [r0]
    // add r0, #0xc0
    // str r1, [r0]
    // add r0, #0xc8
    // str r1, [r0]
}




u8 ov07_022330E0(void) {
}




void ov07_022330E4(void) {
}




void ov07_022330F0(void) {
}




void ov07_022330FC(void) {
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r0 + 0x30)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // lsl r5, r2
    // add r0, #0xb0
    PaletteData_BeginPaletteFade(*((u32*)r4), 4, ((1 << 0x10) >> 0x10), (1 - 2));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xb0
    PaletteData_GetSelectedBuffersBitmask(*((u32*)r4));
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r4 + 0x30)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // lsl r5, r2
    // add r0, #0xb0
    PaletteData_BeginPaletteFade(*((u32*)r4), 4, ((1 << 0x10) >> 0x10), (1 - 2));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xb0
    PaletteData_GetSelectedBuffersBitmask(*((u32*)r4));
    ov07_02232F74(r4, 0xa);
}




void ov07_022331A4(void) {
}




void ov07_022331B0(void) {
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    // add r1, sp, #8
    // ldrsh r3, [r1, r0]
    // ldrsh r1, [r1, r0]
    // add r0, #0x20
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x48
    // add r0, #0x48
}




u8 ov07_02233224(void) {
}




void ov07_02233228(void) {
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x30)), 1);
    ManagedSprite_SetAnimationFrame(*((u32*)(r5 + 0x30)), 0);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // ldrsh r0, [r0, r2]
    // str r0, [sp]
    ManagedSprite_SetAnimationFrame(*((u32*)(r5 + 0x30)), *((u16*)(ov07_02237310 + (*((u32*)(r5 + 0xc)) * 6))), (*((u32*)(r5 + 0xc)) * 6));
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    sub_0200602C(((*((u32*)(ov07_02237200 + 4)) << 0x10) >> 0x10), 0x75);
    // add r4, #8
    // ldr r0, [sp]
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // ldr r2, [sp]
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + 0x30)), 0);
    ov07_02232F74(0xe);
}




u8 ov07_022332C4(void) {
}




void ov07_022332C8(void) {
}




void ov07_022332E8(void) {
}




void ov07_022332F4(void) {
    GF_AssertFail(*((u32*)(r0 + 0x18)));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // add r0, r0, r3
    // ldrsh r4, [r2, r0]
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    *((u32*)(r5 + 0x18)) = (*((u32*)(r5 + 0x18)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(r5 + 0x30)), 0, (*((u32*)(r5 + 0xc)) << 1), (*((u32*)(r5 + 0x18)) * 0x18));
    ov07_02232F74(r5, 0x12);
    sub_0200602C(0x000005FD, 0x75);
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + 0x30)), r4, 0);
    _s32_div_f((0x0001FFFE * r4), (0x5a << 2));
    ManagedSprite_OffsetAffineZRotation(*((u32*)(r5 + 0x30)), r0);
}




u8 ov07_0223338C(void) {
}




void ov07_02233390(void) {
}




void ov07_0223339C(void) {
}




void ov07_022333A8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022333C0: ; jump table
    // lsl r5, r2
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0xb0
    // add r0, #0xb0
    // add r0, #0xa0
    // str r0, [sp, #0x10]
    // add r1, #0x94
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r2, sp, #0xc
    // add r1, sp, #0xc
    // add r2, #2
    // add r0, sp, #0xc
    // add r1, #0xd0
    // str r0, [r1]
    // add r0, #0xd0
    // add r0, #0xd0
    // add r0, #0xd0
    // add r0, #0xb0
}




u8 ov07_02233498(void) {
}




void ov07_0223349C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // lsl r5, r2
    // add r0, #0xb0
    // add r0, #0xb0
}




void ov07_02233500(void) {
}




void ov07_0223350C(void) {
    ManagedSprite_SetOamMode(*((u32*)(r0 + 0x30)), 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x20
    // add r0, #0x20
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x21
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x21
    // strb r2, [r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 0, 0xf);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x20
    // add r4, #0x21
    // strh r1, [r0]
    ov07_02232F74(0x04000052, 0x1a);
}




void ov07_02233590(void) {
}




u8 ov07_0223359C(void) {
}




void ov07_022335A0(void) {
    // blx r1
}




void ov07_022335B4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022335CE: ; jump table
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r0, [r4, r0]
    // add r1, #0x6c
    // str r0, [sp, #4]
    // add r0, #0xc0
    // str r0, [sp, #8]
    // add r0, #0xc8
    // str r0, [sp, #0xc]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    ov07_02222338(r0, r0, 0xb8, 0xbc);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, #0x90
    ov07_02232540(*((u32*)r4), 0);
    LCRandom();
    _s32_div_f(0x14);
    // add r1, #0xa
    ManagedSprite_OffsetAffineZRotation(*((u32*)(r4 + 0x30)), (r1 << 0xd));
    // add r0, #0x90
    ov07_02232540(*((u32*)r4));
    ManagedSprite_OffsetAffineZRotation(*((u32*)(r4 + 0x30)), (2 << 0xc));
    // add r0, #0xc4
    // add r0, #0xc0
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    ManagedSprite_OffsetAffineZRotation(*((u32*)(r4 + 0x30)), (2 << 0xc), *((u32*)r4));
    // add r0, #0x90
    ov07_02232580(*((u32*)r4));
    // add r0, #0xc4
    // add r0, #0xc0
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r4 + 0x30)), *((u32*)r4), *((u32*)r4));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xb0
    ov07_02222F10(*((u32*)r4), *((u32*)r4), 2, ((r0 << 0x14) >> 0x10));
    // add r1, #0xd4
    // str r0, [r1]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0x90
    // add r0, #0xc0
    // add r0, r1, r0
    // asr r2, r0, #1
    // add r0, #0xc4
    // add r0, #0x48
    // add r1, #0x6c
    ov07_022223CC(r4, r4, *((u32*)(r4 + 0x30)));
    ov07_022344B4(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x90
    ov07_02232580(*((u32*)r4));
    // add r0, #0xd4
    ov07_02222EE8(*((u32*)r4));
    // add r0, #0xd4
    ov07_02222EF8(*((u32*)r4));
    *((u32*)(r4 + 0x28)) = 1;
    // add r0, #0x90
    *((u32*)(r4 + 0x28)) = 1;
    // add r0, #0xa0
    sub_0200602C(0x000007E8, 0x75);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 1);
    ov07_022344C0(r4, 1);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xc4
    // add r0, #0x90
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r4 + 0x30)), 0);
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xb0
    ov07_02222F10(*((u32*)r4), *((u32*)r4), 2, ((r0 << 0x14) >> 0x10));
    // add r1, #0xd4
    // str r0, [r1]
    *((u32*)(r4 + 0x28)) = 1;
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0x90
    // add r0, #0xd4
    ov07_02222EE8(*((u32*)r4), (*((u32*)r4) + 1));
    // add r4, #0xd4
    ov07_02222EF8(*((u32*)r4));
}




void ov07_02233874(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223388E: ; jump table
    // ldrsh r0, [r4, r0]
    // str r0, [sp]
    // ldrsh r0, [r4, r0]
    // add r1, #0x6c
    // str r0, [sp, #4]
    // add r0, #0xc0
    // str r0, [sp, #8]
    // add r0, #0xc8
    // str r0, [sp, #0xc]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, #0x48
    ov07_02222338(r0, r0, 0xb8, 0xbc);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xd4
    // str r1, [r0]
    // add r0, #0x90
    ov07_02232540(*((u32*)r4), 0);
    LCRandom();
    _s32_div_f(0x14);
    // add r1, #0xa
    ManagedSprite_OffsetAffineZRotation(*((u32*)(r4 + 0x30)), (r1 << 0xd));
    // add r0, #0x90
    ov07_02232540(*((u32*)r4));
    ManagedSprite_OffsetAffineZRotation(*((u32*)(r4 + 0x30)), (2 << 0xc));
    // add r0, #0xc4
    // add r0, #0xc0
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    ManagedSprite_OffsetAffineZRotation(*((u32*)(r4 + 0x30)), (2 << 0xc), *((u32*)r4));
    // add r0, #0x90
    ov07_02232580(*((u32*)r4));
    // add r0, #0xc4
    // add r0, #0xc0
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, #0xa
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r4 + 0x30)), *((u32*)r4), *((u32*)r4));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xb0
    ov07_02222F10(*((u32*)r4), *((u32*)r4), 2, ((r0 << 0x14) >> 0x10));
    // add r1, #0xd4
    // str r0, [r1]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0x90
    // add r0, #0xc0
    // add r0, r1, r0
    // asr r2, r0, #1
    // add r0, #0xc4
    // add r0, #0x48
    // add r1, #0x6c
    ov07_022223CC(r4, r4, *((u32*)(r4 + 0x30)));
    ov07_022344B4(r4, 0);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0x90
    ov07_02232580(*((u32*)r4));
    // add r0, #0xd4
    ov07_02222EE8(*((u32*)r4));
    // add r0, #0xd4
    ov07_02222EF8(*((u32*)r4));
    *((u32*)(r4 + 0x28)) = 1;
    // add r0, #0x90
    *((u32*)(r4 + 0x28)) = 1;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 1);
    ov07_022344C0(r4, 0);
    // add r0, #0xc4
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // add r0, #0xc4
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 2);
    ManagedSprite_GetPaletteOverrideOffset(*((u32*)(r4 + 0x30)));
    // str r0, [sp]
    // sub r0, #0x12
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x94
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xb0
    ov07_02222F10(*((u32*)r4), *((u32*)r4), 2, ((r0 << 0x14) >> 0x10));
    // add r1, #0xd4
    // str r0, [r1]
    *((u32*)(r4 + 0x28)) = 1;
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xd4
    ov07_02222EE8(*((u32*)r4), (*((u32*)r4) + 1));
    // add r4, #0xd4
    ov07_02222EF8(*((u32*)r4));
}




void ov07_02233B04(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02233B1E: ; jump table
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xa0
    // add r2, sp, #0
    // str r0, [sp, #4]
    // add r0, #0x94
    // add r1, sp, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #2
    // add r0, sp, #0
    // add r1, #0xd0
    // str r0, [r1]
    // add r0, #0xd0
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xd0
    // add r0, #0xd0
}




void ov07_02233C98(void) {
    // add r0, #0x34
    ov07_022223F0(r0, 0xFFFFE001, (0xFFFFE001 >> 0x13), 0xa);
    // add r0, #0x34
    ov07_022223F0(r4, 0x00001FFF, 0xFFFFE001, 0xa);
    // eor r0, r1
    *((u32*)(r4 + 0x10)) = 1;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(r4 + 0x30)), ((*((u32*)(r4 + 0x34)) << 0x10) >> 0x10));
    // add r0, #0x34
    ov07_02222440(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 0xc)) = ((*((u32*)(r4 + 8)) + 1) + 1);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) - 1);
    // add r4, #0xc4
    // str r0, [r4]
}




void ov07_02233D24(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // add r0, #0xb8
    // strh r2, [r0]
    // ldrsh r0, [r1, r0]
    // add r4, #0xba
    // strh r0, [r4]
}




void ov07_02233D60(void) {
    // add r0, #0xdc
    // add r0, #0xdc
    // add r0, #0xdc
    // str r1, [r0]
    SpriteSystem_DrawSprites(*((u32*)(r1 + 0x2c)), (*((u32*)r1) - 1));
    // add r1, #0x98
    // blx r1
    *((u32*)(r4 + 0x1c)) = 0;
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x30)), *((u32*)(ov07_022371A0 + (*((u32*)r1) << 2))), (*((u32*)r1) << 2));
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x2c)));
}




void ov07_02233DB8(void) {
    Heap_Alloc(*((u32*)(r0 + 4)), 0xe0);
    MI_CpuFill8(0, 0xe0);
    GF_AssertFail();
    // add r3, #0x90
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    // add r0, #0xac
    SpriteManager_New(*((u32*)r4), (5 - 1), r4);
    *((u32*)(r4 + 0x2c)) = r0;
    // add r0, #0xdc
    // str r1, [r0]
    // add r0, #0x90
    ov07_022325BC(*((u32*)r4), 0);
    *((u32*)(r4 + 0x24)) = r0;
    // add r0, #0xc4
    // str r2, [r0]
    // add r0, #0x20
    // strb r1, [r0]
    // add r0, #0x21
    // strb r2, [r0]
    ov07_0221C69C(r4, 0x10, 0);
    LCRandom();
    // sub r0, r0, r1
    // ror r0, r2
    // add r0, r1, r0
    // add r0, #0x22
    // strb r1, [r0]
    // sub r2, #0x20
    // add r0, #0x22
    // strb r2, [r0]
    ov07_022342E4(r4, 1, 0x1f);
    ov07_0223441C(r4);
    ov07_02233F30(r4);
    *((u32*)(r4 + 0x1c)) = 1;
    *((u32*)(r4 + 0x28)) = 0;
    SysTask_CreateOnMainQueue(ov07_02233D60, r4, (0xfa << 2));
    // add r1, #0xcc
    // str r0, [r1]
}




void ov07_02233E88(void) {
}




void ov07_02233EA0(void) {
}




void ov07_02233EB8(void) {
}




void ov07_02233EBC(void) {
    // bne _02233EC6
}




void ov07_02233ECC(void) {
    // add r0, #0xac
    // add r0, #0xcc
}




void ov07_02233EFC(void) {
    // add r0, #0x98
    // str r1, [r0]
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x1c)) = 1;
    // add r1, #0xb8
    // add r2, #0xba
}




void ov07_02233F20(void) {
}




void ov07_02233F30(void) {
    // add r1, #0xb8
    // add r2, #0xba
    // add r0, #0x90
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233F5A: ; jump table
    // add r1, #0xbc
    // add r2, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r1, #0xb8
    // add r2, #0xba
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x10
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbc
    // sub r1, #0x14
    // strh r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x26
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r0, #0xbc
    // strh r1, [r0]
    // add r0, #0xbe
    // strh r1, [r0]
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #0x20
    // strh r1, [r0]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #8
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #8
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r2, #0xbc
    // add r3, #0xbe
    // add r0, #0xc8
    // str r1, [r0]
    // ldrsh r1, [r4, r0]
    // add r0, #0xbe
    // add r1, #8
    // strh r1, [r0]
    // add r4, #0xc0
    // str r0, [r4]
    // add r4, #0xc0
    // str r0, [r4]
}




void ov07_022341A4(void) {
    // add r0, #0x90
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022341C0: ; jump table
    // ldrsh r0, [r4, r0]
    // add r0, #0x28
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, #0x26
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, #0x28
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, #0x28
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, #0x26
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, #0x26
    // strh r0, [r4]
    // strh r0, [r3]
    // strh r0, [r4]
    // strh r0, [r3]
    // strh r0, [r4]
    // strh r0, [r3]
    // strh r0, [r4]
    // strh r0, [r3]
    // strh r0, [r4]
    // mvn r0, r0
    // strh r0, [r3]
    // strh r0, [r4]
}




void ov07_022342E4(void) {
    // add r0, #0xac
    SpriteSystem_InitSprites(*((u32*)r0), *((u32*)(r0 + 0x2c)), 0xa);
    // add r0, #0xa8
    // add r0, #0xac
    SpriteSystem_GetRenderer(*((u32*)r5));
    G2dRenderer_SetSubSurfaceCoords(0, (0x11 << 0x10));
    // add r2, sp, #0x20
    // stmia r2!, {r0}
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // add r0, #0xac
    // add r2, sp, #0x20
    SpriteSystem_InitManagerWithCapacities(*((u32*)r5), *((u32*)(r5 + 0x2c)));
    // add r0, #0xa0
    ov07_02232658(*((u32*)r5), 0);
    // add r0, #0xa0
    ov07_02232658(*((u32*)r5), 1);
    // add r0, #0xa0
    ov07_02232658(*((u32*)r5), 2);
    // str r0, [sp, #0x18]
    // add r0, #0xa0
    ov07_02232658(*((u32*)r5), 3);
    // add r1, #0x94
    // str r0, [sp, #0x1c]
    NARC_New(8, *((u32*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x9c
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0xac
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)r5), *((u32*)(r5 + 0x2c)), r0, r7);
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x9c
    // add r2, #0xac
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r0, #0xb0
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)r5), 2, *((u32*)r5), *((u32*)(r5 + 0x2c)));
    // str r0, [sp]
    // add r0, #0x9c
    // ldr r3, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, #0xac
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)r5), *((u32*)(r5 + 0x2c)), r4);
    // str r0, [sp]
    // add r0, #0x9c
    // ldr r3, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, #0xac
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)r5), *((u32*)(r5 + 0x2c)), r4);
    NARC_Delete(r4);
}




void ov07_0223441C(void) {
    // add r2, sp, #0
    // add r1, sp, #0
    // add r2, #2
    ov07_022341A4();
    // add r1, sp, #0
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    // str r1, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xa4
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r3, sp, #0
    // add r1, #0x9c
    // add r1, r1, r2
    *((u32*)(r3 + 0x14)) = *((u32*)r4);
    // add r0, #0xac
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)r4), *((u32*)(r4 + 0x2c)), 0x00001770, (r3 + 4));
    *((u32*)(r4 + 0x30)) = r0;
    ManagedSprite_SetDrawFlag(1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x30)), 2);
    ManagedSprite_SetAnimationFrame(*((u32*)(r4 + 0x30)), 0);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x30)), 0);
    ManagedSprite_TickFrame(*((u32*)(r4 + 0x30)));
    ov07_0221C69C();
}




void ov07_0223449C(void) {
}




void ov07_022344A8(void) {
}




void ov07_022344B4(void) {
}




void ov07_022344C0(void) {
}




void ov07_022344C4(void) {
}




void ov07_022344D0(void) {
}




void ov07_022344DC(void) {
    // add r0, #0xdc
    // str r1, [r0]
}




void ov07_022344E4(void) {
    // sub r1, r1, r3
    // neg r1, r1
    // sub r0, r0, r2
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // add r0, r2, r1
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
}




void ov07_02234510(void) {
}




void ov07_02234530(void) {
    // add r2, sp, #0
    // strb r0, [r2]
    SealOnCapsuleGetID(r0, (7 - 1), (r2 + 1), (ov07_0223777C + 1));
    sub_0209109C(((r0 << 0x18) >> 0x18));
    ov07_02234510(r4);
    _s32_div_f((3 + 1), 0x14);
    // add r1, sp, #0
    // add r0, sp, #0
}




void ov07_0223458C(void) {
    // str r6, [r4]
}




void ov07_022345C8(void) {
    // add r4, #8
    // str r0, [r4, r6]
    // str r5, [r4]
}




void ov07_02234604(void) {
}




void ov07_02234628(void) {
}




void ov07_02234658(void) {
}




void ov07_02234694(void) {
    *((u32*)(r0 + 0x20)) = 1;
    ov07_022346E4(ov07_02234710);
    SysTask_CreateOnMainQueue(ov07_022346C0, r4, (0xfa << 2));
    *((u32*)(r4 + 0x18)) = r0;
}




void ov07_022346BC(void) {
}




void ov07_022346C0(void) {
}




void ov07_022346E4(void) {
}




void ov07_02234710(void) {
}




void ov07_02234718(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    GF_AssertFail((r0 - 5), (0xb - 1));
    // add r0, sp, #0
}




void ov07_0223474C(void) {
}




void ov07_0223475C(void) {
}




void ov07_0223476C(void) {
    // add r0, r5, r0
    // str r3, [sp, #0x10]
    // add r1, r5, r1
    // add r1, r5, r0
    // add r1, #0x30
    // add r2, r5, r0
    // add r2, #0x38
    // str r1, [sp, #0x1c]
    // add r1, r5, r0
    // add r0, r5, r0
    // add r1, #0x34
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, r5, r4
    // add r0, #0x4c
    // tst r0, r2
    // add r0, r5, r4
    // add r0, #0x4c
    // tst r0, r2
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // add r0, sp, #0x28
    // add r0, r5, r0
    // add r3, sp, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, r0
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // ldr r3, [sp, #0x18]
    // add r1, r5, r1
    // add r1, r5, r1
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp]
    // add r1, r5, r1
    // add r1, r5, r1
    // add r0, r5, r0
    // add r0, #0x4c
    // asr r7, r1, #0x18
    // str r0, [sp, #0x20]
    // ldr r2, [sp, #0x20]
    // add r0, r5, r0
    // add r2, r2, r7
    // ldr r1, [sp, #0x10]
    // add r1, sp, #0x24
    // add r1, #2
    // add r1, sp, #0x24
    // add r1, #1
    // add r1, sp, #0x24
    // add r2, sp, #0x24
    // add r0, r5, r0
    // ldr r2, [sp, #0x20]
    // add r0, r5, r0
    // add r2, #0x24
    // str r2, [sp, #0x20]
    // add r3, sp, #0x24
    // add r0, r5, r0
    // ldrsb r2, [r3, r2]
    // add r0, r5, r0
    // sub r2, r2, r7
    // add r3, sp, #0x24
    // add r0, r5, r0
    // ldrsb r2, [r3, r2]
}




void ov07_0223494C(void) {
    // str r1, [sp, #0x10]
    // add r0, r5, r0
    // add r0, r5, r0
    // add r1, r5, r1
    // str r1, [sp, #0x1c]
    // add r1, r5, r0
    // add r1, #0x30
    // str r1, [sp, #0x18]
    // add r1, r5, r0
    // add r1, #0x38
    // add r0, r5, r0
    // add r0, #0x4c
    // str r1, [sp, #0x14]
    // add r1, r5, r3
    // tst r0, r1
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r3, r5, r3
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r1, r5, r1
    // ldr r3, [sp, #0x14]
    // add r1, r5, r1
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // str r7, [sp]
    // add r1, r5, r1
    // add r0, r5, r0
    // add r0, #0x4c
    // add r1, r5, r4
    // add r2, r3, r2
}




void ov07_02234A20(void) {
    // add r0, r5, r0
    // add r3, sp, #0
    // add r1, #0x90
    // str r1, [sp, #0x10]
    // add r2, r5, r1
    // add r2, #0x4c
    // tst r4, r2
    // add r0, #0x8f
    // add r2, #0xff
    // add r0, r5, r0
    // add r3, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, r0
    // add r3, r5, r3
    // add r1, sp, #0
    // add r2, r5, r2
    // add r0, r5, r0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, #0x4c
    // add r2, r5, r4
    // add r4, r1, r0
    // add r0, r5, r1
    // add r0, #0x4c
    // tst r0, r2
    // add r0, r5, r0
    // add r2, sp, #0
    // add r0, r5, r0
    // sub r2, r2, r3
    // add r2, r4, r2
    // add r0, r5, r0
    // add r2, sp, #0
    // add r0, r5, r0
    // sub r2, r2, r3
    // add r0, r5, r0
}




void ov07_02234B5C(void) {
    // ldrsh r0, [r0, r1]
    // add r0, r0, r2
    // ldrsh r0, [r1, r0]
}



