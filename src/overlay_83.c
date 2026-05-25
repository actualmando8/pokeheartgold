/* Decompiled from asm/overlay_83.s */
#include "global.h"

void ov83_0223DD60(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov83_0223F1C8();
    Heap_Create(3, 0x6b, (3 << 0x10));
    OverlayManager_CreateAndGetData(r4, 0x0000086C, 0x6b);
    memset(0, 0x0000086C);
    BgConfig_Alloc(0x6b);
    *((u32*)(r5 + 0x4c)) = r0;
    // str r4, [r5]
    OverlayManager_GetArgs(r4);
    // str r1, [r5, r0]
    sub_02030CC8(*((u32*)(r5 + 0x0000050C)), *((u32*)r0));
    // str r0, [r5, r1]
    sub_02030E08(*((u32*)(r5 + ((0x51 << 4) - 4))), (0x51 << 4));
    // str r0, [r5, r1]
    // add r2, #0x20
    // sub r1, #8
    *((u8*)(r5 + 9)) = *((u8*)(r4 + 4));
    // str r2, [r5, r0]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 0x00000514)), 0x00000514, r4);
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    *((u8*)(r5 + 0x12)) = 0xff;
    // add r0, #0x5e
    // strh r2, [r5, r0]
    Save_Frontier_GetStatic(*((u32*)(r5 + (0x00000508 + 4))), 0x00000508, *((u16*)(r4 + 0x28)));
    *((u32*)(r5 + 4)) = r0;
    // add r1, r5, r3
    // strb r2, [r1, r0]
    ov80_02237D8C(*((u8*)(r5 + 9)), 1, (0 + 1));
    *((u8*)(r5 + 0x14)) = 4;
    *((u8*)(r5 + 0x15)) = 4;
    *((u8*)(r5 + 0xc)) = (*((u8*)(r5 + 0x15)) - 1);
    // add r0, r5, r0
    ov83_022477E4(0x00000868);
    ov83_0223F200(r5);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    sub_02096910(r5);
}




void ov83_0223DE60(void) {
    OverlayManager_GetData();
    // strb r2, [r4, r1]
    ov83_022412A0(0x000007FE, 0);
    ov83_0224753C(*((u32*)(r4 + 0x0000075C)));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(4));
    Options_GetFrame(*((u32*)(r4 + 0x00000508)), (*((u8*)(r4 + 0xe)) & ~(4)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov80_0222A7CC(*((u32*)(r4 + 0x24)), 0);
    ov83_0223FD14(r4, 8, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02240DA8(r4, r5, 3);
    // strb r1, [r4, r0]
    ov83_022412A0(r4, 0);
    ov83_02240DA8(r4, r5, 2);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223DEFE: ; jump table
    ov83_0223E008(r4);
    ov83_02240DA8(r4, r5, 1);
    ov83_0223E14C(r4);
    ov83_02240DA8(r4, r5, 2);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_02240DA8(r4, r5, 3);
    ov83_02240DA8(r4, r5, 4);
    ov83_0223EEA0(r4);
    ov83_02240DA8(r4, r5, 1);
    ov83_0223EFA4(r4);
    ov83_02240DA8(r4, r5, 4);
    ov83_0223F010(r4);
    ov83_02241B30(r4);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x00000518)));
}




void ov83_0223DFBC(void) {
    OverlayManager_GetData();
    // strh r1, [r0]
    // strh r1, [r0]
    GF_DestroyVramTransferManager(0x04000050, 0);
    ov83_0223F058(r4);
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x6b);
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void ov83_0223E008(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223E020: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov83_0223E10C(void) {
}




void ov83_0223E14C(void) {
    _0223EE86(*((u8*)(r0 + 8)));
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E168: ; jump table
    ov83_02240348(((*((u8*)(r4 + 0xe)) << 0x19) >> 0x1e));
    ov83_02247630(*((u32*)(r4 + 0x00000778)), 0xcc, 0x64);
    *((u8*)(r4 + 8)) = 2;
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(0x60));
    ov83_02240384(0, (*((u8*)(r4 + 0xe)) & ~(0x60)));
    ov83_02247630(*((u32*)(r4 + 0x00000778)), 0xd3, 0x6a);
    *((u8*)(r4 + 8)) = 8;
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(0x60));
    ov83_02247AD4(*((u32*)(r4 + 0x00000838)), (*((u8*)(r4 + 0xe)) & ~(0x60)));
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E200: ; jump table
    // mvn r1, r1
    _0223EE86(1);
    ov83_022402F4(r4);
    ov83_02240300(r4);
    *((u8*)(r4 + 8)) = 1;
    _0223EE86(1);
    PlaySE(0x000005DC);
    ov83_02247B04(*((u32*)(r4 + 0x00000838)), *((u8*)(r4 + 0xd)));
    ov83_02242AB4(r4, 4, *((u8*)(r4 + 0xd)));
    _0223EE86();
    TouchscreenListMenu_HandleInput(*((u32*)(r4 + (0x21 << 6))));
    ov83_022477B0(0x000005DC);
    ov83_02242DAC(r4);
    _0223EE86();
    _0223EE86();
    // mvn r0, r0
    _0223EE86((1 + 1));
    ov83_02240334(r4);
    ov83_02240348(r4);
    *((u8*)(r4 + 8)) = 2;
    _0223EE86(2);
    ov83_02240334(r4);
    ov83_02240384(r4);
    *((u8*)(r4 + 8)) = 8;
    _0223EE86(8);
    ov83_02240334(r4);
    ov83_02240290(r4);
    *((u8*)(r4 + 8)) = 0;
    _0223EE86(0);
    TouchscreenListMenu_HandleInput(*((u32*)(r4 + (0x21 << 6))));
    ov83_022477B0(0x000005DC);
    ov83_02242DFC(r4);
    // mvn r0, r0
    _0223EE86(1);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223E30A: ; jump table
    // mvn r0, r0
    _0223EE86(0);
    *((u8*)(r4 + 0x13)) = r5;
    ov83_0224037C(r4);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 0);
    ov83_0223FD14(r4, 0x21, 1, (*((u32*)(r4 + 0x00000848)) * 0xc));
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 7;
    _0223EE86(7);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(ov83_02247D18 + (r2 << 1))), 3);
    ov83_0223FD14(r4, 0x37, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02240514(r4);
    *((u8*)(r4 + 8)) = 3;
    _0223EE86(3);
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 0);
    StopSE(0x000005DC, 0);
    PlaySE(0x000005F3);
    _0223EE86();
    *((u8*)(r4 + 0x13)) = r5;
    ov83_0224037C(r4);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(ov83_02247D48 + (r6 << 1))), 4);
    ov83_0223FD14(r4, 0x26, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02240514(r4);
    *((u8*)(r4 + 8)) = 4;
    _0223EE86(4);
    ov83_0224037C(r4);
    ov83_02240300(r4);
    *((u8*)(r4 + 8)) = 1;
    _0223EE86(1);
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000084C)));
    _0223EE86();
    // add r0, r4, r0
    ov83_022478B4(0x0000084C);
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x000007A4)), r0);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r6, r0);
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 0);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)), *((u32*)(r4 + 0x00000848)), *((u32*)(ov83_02247F4C + (*((u32*)(r4 + 0x00000848)) * 0xc))), (*((u32*)(r4 + 0x00000848)) * 0xc));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_0223FD14(r4, 0x21, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 7;
    _0223EE86(7);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)), (r1 << 1));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_0223FD14(r4, 0x20, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 7;
    _0223EE86(7);
    GetMonData(r5, 0xa3, 0);
    GetMonData(r5, 0xa4, 0);
    ov83_0223FD14(r4, 0x25, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 7;
    _0223EE86(7);
    ov83_022412DC(r5);
    ov83_0223FD14(r4, 0x25, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 7;
    _0223EE86(7);
    GetMonData(r5, 0xa3, 0);
    GetMonData(r5, 0xa4, 0);
    ov83_022412DC(r5);
    ov83_0223FD14(r4, 0x25, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 7;
    _0223EE86(7);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), *((u16*)(ov83_02247D18 + ((*((u8*)(r4 + 0x13)) - 1) << 1))), ((*((u8*)(r4 + 0x13)) - 1) << 1));
    // add r1, #0x50
    ov83_02241770(r4, r4);
    ov83_022415F4(r4, *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 0x13;
    _0223EE86(0x13);
    *((u8*)(r4 + 0xe)) = (2 | *((u8*)(r4 + 0xe)));
    // add r0, r4, r0
    ov83_022478B4(0x0000084C, *((u8*)(r4 + 0xe)));
    ov83_02240348(r4);
    *((u8*)(r4 + 8)) = 2;
    _0223EE86(2);
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000084C)));
    _0223EE86();
    // add r0, r4, r0
    ov83_022478B4(0x0000084C);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 0);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)), (r0 << 1));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_0223FD14(r4, 0x29, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 7;
    _0223EE86(7);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_02241BC4(r4, *((u8*)(r4 + 0xd)), 4);
    *((u8*)(r4 + 8)) = 5;
    *((u8*)(r4 + 0xe)) = (2 | *((u8*)(r4 + 0xe)));
    // add r0, r4, r0
    ov83_022478B4(0x0000084C, *((u8*)(r4 + 0xe)));
    ov83_02240348(r4);
    *((u8*)(r4 + 8)) = 2;
    ov83_02240FAC(2, *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 6;
    ov83_02247CF0(6);
    PlaySE(0x000005DC);
    ov83_02240348(r4);
    ov83_02247630(*((u32*)(r4 + 0x00000778)), 0xcc, 0x64);
    *((u8*)(r4 + 8)) = 2;
    ov83_02247CF0(2);
    PlaySE(0x000005DC);
    // add r0, #0xb0
    ov83_02241354(r4);
    ov83_02240348(r4);
    *((u8*)(r4 + 8)) = 2;
    // add r2, r4, r2
    ov83_022477EC(2, 0, 0x00000868);
    TouchscreenListMenu_HandleInput(*((u32*)(r4 + (0x21 << 6))));
    ov83_022477B0(0x000005DC);
    ov83_02242E88(r4);
    // mvn r0, r0
    ov83_022403B8(r4);
    ov83_02240300(r4);
    *((u8*)(r4 + 8)) = 1;
    *((u8*)(r4 + 0x13)) = r5;
    ov83_022403B8(r4);
    ov83_022403C0(r4, 6);
    *((u8*)(r4 + 8)) = 9;
    *((u8*)(r4 + 0x13)) = r5;
    ov83_022403B8(r4);
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 1);
    ov83_0223FD14(r4, 0x36, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0xf;
    ov83_022403C0(r4, 7);
    *((u8*)(r4 + 8)) = 9;
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 1);
    StopSE(0x000005DC, 0);
    PlaySE(0x000005F3);
    *((u8*)(r4 + 0x13)) = r5;
    ov83_022403B8(r4);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(ov83_02247D4E + (r6 << 1))), 4);
    ov83_0223FD14(r4, 0x26, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02240514(r4);
    *((u8*)(r4 + 8)) = 0xc;
    ov83_02247BC4(*((u32*)(r4 + 0x0000085C)));
    // mvn r0, r0
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223E838: ; jump table
    // mvn r0, r0
    // ldrsh r2, [r4, r0]
    // add r2, r5, r1
    // strb r2, [r4, r1]
    PlaySE(0x000005DD, *((u8*)(r4 + (0x00000862 - 2))));
    ov83_02242F18(r4, ((r5 << 0x10) >> 0x10));
    *((u8*)(r4 + 8)) = 0xa;
    PlaySE((0x5e << 4));
    ov83_02242F18(r4, 6);
    *((u8*)(r4 + 8)) = 0xa;
    PlaySE((0x5e << 4));
    ov83_02242F18(r4, 7);
    *((u8*)(r4 + 8)) = 0xa;
    PlaySE(0x000005DC);
    PlaySE(0x000005DD);
    ov83_02242F18(r4, 8);
    *((u8*)(r4 + 8)) = 0xa;
    ov83_02242F2C(0xa);
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0223E924: ; jump table
    ov83_022428A8(r4, *((u16*)(r4 + 0x00000864)), (*((u16*)(r2 + 6)) << 0x10));
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_02240EC4(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    // str r1, [sp]
    ov83_02240C48(r4, 0, r0, 3);
    ov83_0223FD14(r4, 0x37, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02240514(r4);
    *((u8*)(r4 + 8)) = 0xb;
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    _s32_div_f((*((u8*)(r4 + (0xb - 3))) - 1), 6, ((0xb - 2) - 1));
    // strh r0, [r4, r1]
    ov83_02240664(r4, 0x00000862);
    ov83_02240748(r4);
    ov83_022407FC(r4);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x0000085C)));
    ov83_022408E0(r4, r0);
    *((u8*)(r4 + 8)) = 9;
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    _s32_div_f((*((u8*)(r4 + (9 - 3))) - 1), 6, ((9 - 2) + 1));
    // ldrsh r2, [r4, r1]
    // strh r0, [r4, r1]
    ov83_02240664(r4, 0x00000862);
    ov83_02240748(r4);
    ov83_022407FC(r4);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x0000085C)));
    ov83_022408E0(r4, r0);
    *((u8*)(r4 + 8)) = 9;
    ov83_0224042C(r4);
    ov83_02240384(r4);
    *((u8*)(r4 + 8)) = 8;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000084C)));
    // add r0, r4, r0
    ov83_022478B4(0x0000084C);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_02240EC4(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_0223FD14(r4, 0x20, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0x10;
    GetMonData(*((u32*)(r4 + 0x00000804)), 6, 0);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_0224042C(r4);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_02240EC4(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), r0);
    // add r1, #0x50
    ov83_02241770(r4, r4);
    ov83_02240F48(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    ov83_022416A0(r4, *((u8*)(r4 + 0xd)), r0);
    *((u8*)(r4 + 8)) = 0x13;
    ov83_02240F48(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    *((u16*)(r4 + 0x10)) = r0;
    ov83_0224042C(r4);
    // add r0, #0xb0
    ov83_02241354(r4);
    *((u8*)(r4 + 0xe)) = (2 | *((u8*)(r4 + 0xe)));
    Mon_GetBoxMon(r5, *((u8*)(r4 + 0xe)));
    ov83_02240C60(r4, 0, r0);
    GetMonData(r5, 6, 0);
    BufferItemNameWithIndefArticle(*((u32*)(r4 + 0x24)), 1, r0);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_0223FD14(r4, 0x3c, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0x11;
    // add r0, r4, r0
    ov83_022478B4(0x0000084C);
    ov83_0224175C(r4);
    *((u8*)(r4 + 8)) = 9;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000084C)));
    // add r0, r4, r0
    ov83_022478B4(0x0000084C);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 1);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)), (r0 << 1));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_0223FD14(r4, 0x29, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0xf;
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_02241BC4(r4, *((u8*)(r4 + 0xd)), 8);
    *((u8*)(r4 + 8)) = 0xd;
    *((u8*)(r4 + 0xe)) = (2 | *((u8*)(r4 + 0xe)));
    // add r0, r4, r0
    ov83_022478B4(0x0000084C, *((u8*)(r4 + 0xe)));
    ov83_02240384(r4);
    *((u8*)(r4 + 8)) = 8;
    ov83_02240FAC(8, *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 0xe;
    ov83_02247CF0(0xe);
    PlaySE(0x000005DC);
    ov83_02240384(r4);
    ov83_02247630(*((u32*)(r4 + 0x00000778)), 0xd3, 0x6a);
    *((u8*)(r4 + 8)) = 8;
    ov83_02247CF0(8);
    PlaySE(0x000005DC);
    // add r0, #0xb0
    ov83_02241354(r4);
    ov83_02240384(r4);
    *((u8*)(r4 + 8)) = 8;
    ov83_02247CF0(8);
    PlaySE(0x000005DC);
    ov83_0224175C(r4);
    *((u8*)(r4 + 8)) = 9;
    ov83_02247CF0(9);
    PlaySE(0x000005DC);
    ov83_0223FD14(r4, 0x3d, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02240514(r4);
    *((u8*)(r4 + 8)) = 0x12;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000084C)));
    // add r0, r4, r0
    ov83_022478B4(0x0000084C);
    ov83_02240664(r4);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_0224042C(r4);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    ov83_02240EC4(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), r0);
    // add r1, #0x50
    ov83_02241770(r4, r4);
    ov83_02240F48(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    ov83_022416A0(r4, *((u8*)(r4 + 0xd)), r0);
    *((u8*)(r4 + 8)) = 0x13;
    ov83_02240F48(r4, *((u8*)(r4 + (0x86 << 4))), *((u8*)(r4 + 0x13)));
    *((u16*)(r4 + 0x10)) = r0;
    ov83_0224042C(r4);
    // add r0, #0xb0
    ov83_02241354(r4);
    *((u8*)(r4 + 0xe)) = (2 | *((u8*)(r4 + 0xe)));
    // add r0, r4, r0
    ov83_022478B4(0x0000084C, *((u8*)(r4 + 0xe)));
    ov83_0224175C(r4);
    *((u8*)(r4 + 8)) = 9;
    // add r2, r4, r2
    ov83_022477EC(2, 0, 0x00000868);
    ov83_02240FAC(r4, *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 0x14;
    ov83_02247CF0(0x14);
    PlaySE(0x000005DC);
    // add r0, #0xb0
    ov83_02241354(r4);
    ov83_02240290(r4);
    *((u8*)(r4 + 8)) = 0;
    // tst r2, r1
    // sub r1, #0x21
    ov83_02241208(0, 0x20, *((u32*)(gSystem + 0x48)), *((u32*)(gSystem + 0x48)));
    // tst r1, r3
    ov83_02241208(1);
    ov83_02247CF0();
    PlaySE(0x000005DC);
    ov83_02241B18(r4);
    ov83_02240300(r4);
    *((u8*)(r4 + 8)) = 1;
    // tst r2, r1
    // sub r1, #0x21
    ov83_02241254(1, 0x20, *((u32*)(gSystem + 0x48)), *((u32*)(gSystem + 0x48)));
    // tst r1, r3
    ov83_02241254(1);
    ov83_02247CF0();
    PlaySE(0x000005DC);
    ov83_02241B18(r4);
    ov83_02240300(r4);
    *((u8*)(r4 + 8)) = 1;
}




void ov83_0223EEA0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223EEB6: ; jump table
    *((u8*)(r0 + 0xe)) = (*((u8*)(r0 + 0xe)) & ~(0x60));
    // add r2, r4, r2
    ov83_022477EC(2, 0, 0x00000868);
    ov83_02241368(r4, 0xb, *((u8*)(r4 + 0xd)));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(2));
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0xf)) = 0;
    ov83_02241BC4(r4, *((u8*)(r4 + 0x12)), *((u8*)(r4 + 0x13)));
    ov83_022418E8(*((u8*)(r4 + 0x12)));
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov83_0224776C(*((u8*)(r4 + 0x15)), *((u8*)(r4 + 0x12)));
    ov83_02240FAC(r4, r0, *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 0xb)) = 0x1e;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) - 1);
    sub_02037BEC(*((u8*)(r4 + 0xb)));
    sub_02037AC0(0x82);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    sub_02037B38(0x82);
    sub_02037BEC();
    sub_020379A0(0x6b);
    *((u8*)(r4 + 0x12)) = 0xff;
    // add r0, #0xb0
    ov83_02241354(r4);
    ov83_02240290(r4);
    // strb r1, [r4, r0]
}




void ov83_0223EFA4(void) {
    // add r4, #0xb0
}




void ov83_0223F010(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov83_0223F058(void) {
    // add r0, r5, r0
    ov83_02247858(0x0000084C);
    ov83_02247CC4(*((u32*)(r5 + 0x0000083C)));
    ov83_02247A18(*((u32*)(r5 + 0x00000838)));
    ov83_0224753C(*((u32*)(r5 + 0x00000734)));
    ov83_0224753C(*((u32*)(r5 + 0x00000738)));
    ov83_0224753C(*((u32*)(r5 + 0x00000778)));
    ov83_0224753C(*((u32*)(r5 + (0x76 << 4))));
    ov83_0224753C(*((u32*)(r5 + 0x00000764)));
    ov83_0224753C(*((u32*)(r5 + 0x0000077C)));
    ov83_0224753C(*((u32*)(r5 + (0x1e << 6))));
    ov83_0224753C(*((u32*)(r5 + 0x0000079C)));
    ov80_02237B24(*((u8*)(r5 + 9)), 1);
    ov83_0224753C(*((u32*)(r5 + 0x0000073C)));
    ov83_0224753C(*((u32*)(r4 + 0x0000074C)));
    ov83_0224753C(*((u32*)(r4 + 0x00000768)));
    ov83_0224753C(*((u32*)(r5 + 0x00000784)));
    sub_0203A914();
    PaletteData_FreeBuffers(*((u32*)(r5 + (5 << 8))), 2);
    PaletteData_FreeBuffers(*((u32*)(r5 + (5 << 8))), 0);
    PaletteData_Free(*((u32*)(r5 + (5 << 8))));
    // str r1, [r5, r0]
    // add r0, #0x18
    // add r0, r5, r0
    ov83_022471FC((5 << 8), 0);
    DestroyMsgData(*((u32*)(r5 + 0x20)));
    DestroyMsgData(*((u32*)(r5 + 0x1c)));
    MessageFormat_Delete(*((u32*)(r5 + 0x24)));
    String_Delete(*((u32*)(r5 + 0x28)));
    String_Delete(*((u32*)(r5 + 0x2c)));
    MessagePrinter_Delete(*((u32*)(r5 + 0x00000504)));
    FontID_Release(4);
    String_Delete(*((u32*)(r5 + 0x30)));
    // add r0, #0x50
    ov83_0224791C(r5, 0);
    ov83_0223F734(*((u32*)(r5 + 0x4c)));
    NARC_Delete(*((u32*)(r5 + 0x000007A8)));
}




void ov83_0223F1C8(void) {
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
}




void ov83_0223F200(void) {
    NARC_New(0xb7, 0x6b);
    // str r0, [r5, r1]
    ov83_0223F690(r5, 0x000007A8);
    ov83_0223F70C(r5);
    FontID_Alloc(4, 0x6b);
    NewMsgDataFromNarc(1, 0x1b, 0x1f, 0x6b);
    *((u32*)(r5 + 0x20)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 0xdd, 0x6b);
    *((u32*)(r5 + 0x1c)) = r0;
    MessageFormat_New(0x6b);
    *((u32*)(r5 + 0x24)) = r0;
    String_New((0x96 << 2), 0x6b);
    *((u32*)(r5 + 0x28)) = r0;
    String_New((0x96 << 2), 0x6b);
    *((u32*)(r5 + 0x2c)) = r0;
    String_New(0x20, 0x6b);
    *((u32*)(r4 + 0x30)) = r0;
    LoadFontPal0(0, (7 << 6), 0x6b);
    LoadFontPal1(0, (0x1a << 4), 0x6b);
    MessagePrinter_New(1, 2, 0, 0x6b);
    // str r0, [r5, r1]
    // add r1, #0x50
    ov83_022478D4(*((u32*)(r5 + 0x4c)), r5, 0);
    // add r0, sp, #0x30
    // add r1, sp, #0x34
    // add r3, sp, #0x30
    // str r0, [sp]
    // add r1, #2
    // add r2, sp, #0x34
    // add r3, #2
    ov83_02240F7C(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r5, r1]
    ov83_0224755C(*((u32*)(r5 + (0x00000738 - 4))), 0);
    ov83_0224755C(*((u32*)(r5 + 0x00000738)), 0);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    ov80_02237B24(*((u8*)(r5 + 9)), 1);
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    ov83_02247454(0x00000518, 1, 1, 1);
    // str r0, [r4, r1]
    // add r0, #0x58
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000074C)), r6);
    // str r0, [sp, #0x1c]
    GetMonData(6, 0);
    ov83_0224755C(*((u32*)(r4 + 0x0000074C)), 0);
    // ldr r0, [sp, #0x1c]
    GetMonData(0xa3, 0);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    GetMonData(0xa4, 0);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    CalculateHpBarColor(((r0 << 0x10) >> 0x10), ((r1 << 0x10) >> 0x10), 0x30);
    ov83_022411B0(r5, r0);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    CalculateHpBarColor(((r0 << 0x10) >> 0x10), ((r1 << 0x10) >> 0x10), 0x30);
    ov83_022411DC(r5, r0);
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xa
    // add r0, r5, r0
    ov83_02247454(0x00000518, r6, 0xa, 5);
    // str r0, [r4, r1]
    // add r0, #0x68
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000073C)), r6);
    ov83_022475EC(*((u32*)(r4 + 0x0000073C)), r0);
    // ldr r0, [sp, #0x18]
    // add r0, #0x40
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r7, #0x40
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r0, r5, r0
    ov83_022474C4(0x00000518, 3, 3, 3);
    // str r0, [r5, r1]
    ov83_0224755C(*((u32*)(r5 + 0x0000079C)), 0);
    // add r1, sp, #0x2c
    // add r1, #2
    // add r2, sp, #0x2c
    ov83_02242894(0);
    // str r7, [sp]
    // add r1, sp, #0x2c
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #4]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    // add r0, r5, r0
    // str r7, [sp, #0x10]
    ov83_02247454(0x00000518, (r4 + 4), (r4 + 4), 4);
    // str r0, [r6, r1]
    ov83_0224755C(*((u32*)(r6 + 0x00000784)), 0);
    // add r1, sp, #0x3c
    // add r2, sp, #0x38
    ov83_02240E70(r5, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // ldr r1, [sp, #0x3c]
    // asr r1, r1, #0x10
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x38]
    // asr r1, r1, #0x10
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r5, r1]
    ov80_02237D8C(*((u8*)(r5 + 9)), 0x00000764);
    ov83_0224755C(*((u32*)(r5 + 0x00000764)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r5, r1]
    ov83_0224755C(*((u32*)(r5 + 0x00000778)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r5, r1]
    ov83_0224755C(*((u32*)(r5 + 0x0000077C)), 0);
    ov83_02241E18(r5);
    ov83_02241FF0(r5);
    ov83_022421E0(r5, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r0, r5, r0
    ov83_022474C4(0x00000518, 2, 2, 2);
    // str r0, [r5, r3]
    // add r2, #0x8c
    // add r1, #0x88
    // add r3, #0x94
    ov83_02247668(*((u32*)(r5 + (0x1e << 6))), *((u32*)(r5 + (0x1e << 6))), *((u16*)(r5 + (0x1e << 6))), *((u32*)(r5 + (0x1e << 6))));
    ov83_02247A24(r5, 1, *((u8*)(r5 + 0x14)));
    // str r0, [r5, r1]
    // sub r1, #0x18
    ov83_02247CB8(*((u32*)(r5 + 0x00000518)), *((u32*)(r5 + 0x00000518)));
    // str r0, [r5, r1]
    // add r1, #0x10
    // add r0, r5, r1
    ov83_02247844(0x0000083C);
    sub_02037474();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    sub_0203A880();
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0xe, 6);
    Main_SetVBlankIntrCB(ov83_0223F7A0, r5);
}




void ov83_0223F690(void) {
    // and r0, r1
    // strh r0, [r2]
    ov83_0223F7E4(0xFFFF7FFF, *((u16*)0x04000304), 0x04000304);
    ov83_0223F804(*((u32*)(r4 + 0x4c)));
    PaletteData_Init(0x6b);
    // str r0, [r4, r1]
    PaletteData_AllocBuffers(*((u32*)(r4 + (5 << 8))), 2, (2 << 8), 0x6b);
    PaletteData_AllocBuffers(*((u32*)(r4 + (5 << 8))), 0, (2 << 8), 0x6b);
    ov83_0223FA00(r4, 3);
    ov83_0223FA74();
    ov83_0223FAA8(r4, 2);
    ov83_0223FAF0();
    // add r2, r4, r2
    ov83_022477EC(2, 0, 0x00000868);
    ov83_0223FBEC(r4, 4);
}




void ov83_0223F70C(void) {
    ov80_02237D8C(*((u8*)(r0 + 9)));
    // add r0, r4, r0
    ov83_02246E08(0x00000518, *((u32*)(r4 + 0x000007A4)), ((r0 << 0x18) >> 0x18));
}




void ov83_0223F734(void) {
    GfGfx_EngineATogglePlanes(0x1f, 0);
    GfGfx_EngineBTogglePlanes(0x1f, 0);
    FreeBgTilemapBuffer(r4, 3);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 0);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 6);
    FreeBgTilemapBuffer(r4, 7);
    Heap_Free(r4);
    // strh r0, [r2]
}




void ov83_0223F7A0(void) {
    PaletteData_PushTransparentBuffers(*((u32*)(r0 + (5 << 8))));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x4c)));
    // add r0, r4, r0
    ov83_0224780C(0x00000868);
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}




void ov83_0223F7E4(void) {
}




void ov83_0223F804(void) {
    // add r3, sp, #0xe0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0xc4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BG_ClearCharDataRange(2, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BG_ClearCharDataRange(3, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BG_ClearCharDataRange(5, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BG_ClearCharDataRange(6, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 6);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 7, r3, 0);
    BG_ClearCharDataRange(7, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 7);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(2, 1, (*((u16*)0x04000008) & ~(3)));
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
}




void ov83_0223FA00(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x000007A8)), 0x22, *((u32*)(r0 + 0x4c)), r1);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x000007A8)), 0x23, *((u32*)(r5 + 0x4c)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x000007A8)), 0x24, *((u32*)(r5 + 0x4c)), r4);
}




void ov83_0223FA74(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov83_0223FAA8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x000007A8)), 0x22, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x000007A8)), 0x2a, *((u32*)(r5 + 0x4c)), r4);
}




void ov83_0223FAF0(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov83_0223FB24(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x000007A8)), 0x22, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x000007A8)), 0x2b, *((u32*)(r5 + 0x4c)), r4);
}




void ov83_0223FB6C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x000007A8)), 0x22, *((u32*)(r0 + 0x4c)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x000007A8)), 0x26, *((u32*)(r4 + 0x4c)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x000007A8)), 0x28, *((u32*)(r4 + 0x4c)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x000007A8)), 0x29, *((u32*)(r4 + 0x4c)), 6);
}




void ov83_0223FBEC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + 0x000007A8)), 0x28, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + 0x000007A8)), 0x93, *((u32*)(r5 + 0x4c)), r4);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r5 + 0x000007A8)), 0xbe, 4, 0);
}




void ov83_0223FC48(void) {
    // add r1, sp, #0x38
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
}




void ov83_0223FCB4(void) {
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // add r0, sp, #0x30
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x34
}




void ov83_0223FD14(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r1, #0xb0
    // add r5, #0xb0
}




void ov83_0223FD4C(void) {
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r3, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
}




void ov83_0223FF20(void) {
    // add r4, sp, #0x10
    // str r4, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    // str r4, [sp, #0x10]
    // str r4, [sp, #0x14]
}




void ov83_0223FF44(void) {
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
}




void ov83_0223FFD8(void) {
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x38]
    // add r0, #0xc
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x40]
    // str r0, [sp]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r2, [sp, #0x30]
}




void ov83_02240080(void) {
}




void ov83_022400BC(void) {
    Party_GetMonByIndex(*((u32*)(r0 + 0x000007A4)), r2);
    // str r0, [sp, #0xc]
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // add r2, r0, r1
    // add r2, #0x18
    // add r2, r2, r1
    // add r0, #0x20
    // add r0, r0, r1
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    GetMonData(0x24, 0xa3, 0);
    // str r6, [sp]
    // str r7, [sp, #4]
    // str r4, [sp, #8]
    PrintUIntOnWindow(*((u32*)(r5 + 0x00000504)), r0, 3, 1);
    // str r4, [sp]
    // ldr r3, [sp, #0x10]
    sub_0200CDAC(*((u32*)(r5 + 0x00000504)), 0, r6);
    // ldr r0, [sp, #0xc]
    GetMonData(0xa4, 0);
    // str r6, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    PrintUIntOnWindow(*((u32*)(r5 + 0x00000504)), r0, 3, 0);
}




void ov83_02240170(void) {
}




void ov83_022401A4(void) {
    // str r3, [sp, #0x14]
    // str r1, [sp, #0x10]
    ov80_02237D8C(*((u8*)(r0 + 9)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x000007A4)), r6);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r6, r4, r0
    // add r7, r7, r0
    // ldr r0, [sp, #0x18]
    GetMonData((r6 << 6), 0xa1, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r4, [sp, #0xc]
    sub_0200CE7C(*((u32*)(r5 + 0x00000504)), 1, r0, 3);
    // ldr r0, [sp, #0x18]
    GetMonData(0x6f, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    ov83_02240D64(r5, 0, r7, r4);
}




void ov83_02240238(void) {
    ov80_02237D8C(*((u8*)(r0 + 9)));
    // add r4, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r6, 0, ((r4 << 0x10) >> 0x10), 0);
    // str r6, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    PrintUIntOnWindow(*((u32*)(r5 + 0x00000504)), r7, 3, 1);
    ScheduleWindowCopyToVram(r6);
}




void ov83_02240290(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r1, #0x60
    ov83_0223FC48(r0, 6, 0);
    *((u8*)(r4 + 0xa)) = r0;
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xc0
    ov83_02247944(r4, r0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xc0
    // str r3, [sp, #0x14]
    ov83_0223FC48(r4, r4, 5, 1);
    *((u8*)(r4 + 0xa)) = r0;
}




void ov83_022402F4(void) {
}




void ov83_02240300(void) {
    Options_GetFrame(*((u32*)(r0 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov83_02242BAC(r4, 1);
    ov83_02242DAC(r4);
}




void ov83_02240334(void) {
}




void ov83_02240348(void) {
    Options_GetFrame(*((u32*)(r0 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov83_02242BF0(r4, 1);
    ov83_02242DFC(r4);
}




void ov83_0224037C(void) {
}




void ov83_02240384(void) {
    Options_GetFrame(*((u32*)(r0 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    // mvn r1, r1
    // str r1, [r4, r0]
    ov83_02242CAC(r4, 1);
    ov83_02242E88(r4);
}




void ov83_022403B8(void) {
}




void ov83_022403C0(void) {
    *((u8*)(r0 + 0xe)) = (8 | *((u8*)(r0 + 0xe)));
    // add r0, #0xb0
    ov83_02241354(r0, *((u8*)(r0 + 0xe)));
    // add r0, #0xb0
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, #0xe0
    ClearWindowTilemapAndScheduleTransfer(r5);
    ov83_0223FB6C(r5);
    // add r2, r5, r2
    ov83_022477EC(2, 1, 0x00000868);
    // add r2, r5, r2
    ov83_022477EC(6, 1, 0x00000868);
    // add r2, r5, r2
    ov83_022477EC(7, 1, 0x00000868);
    // strb r1, [r5, r0]
    // strh r1, [r5, r0]
    ov83_02240B54(r5, r4);
}




void ov83_0224042C(void) {
    // add r6, #0x50
    // add r0, #0x30
    // add r0, r6, r0
    ClearWindowTilemapAndScheduleTransfer((0 << 4));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0x3b << 4));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0xf << 6));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0x3f << 4));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((1 << 0xa));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0x41 << 4));
    // add r2, r5, r2
    ov83_022477EC(2, 0, 0x00000868);
    // add r2, r5, r2
    ov83_022477EC(6, 0, 0x00000868);
    // add r2, r5, r2
    ov83_022477EC(7, 0, 0x00000868);
    ov83_02247A18(*((u32*)(r5 + 0x0000085C)));
    ListMenuItems_Delete(*((u32*)(r5 + 0x000004DC)));
    ov83_0224755C(*((u32*)(r5 + 0x0000077C)), 0);
    ov83_0224755C(*((u32*)(r5 + 0x0000079C)), 0);
    ov83_0224755C(*((u32*)(r5 + 0x00000784)), 0);
    ov83_0224759C(*((u32*)(r5 + (0x1e << 6))), 0x30, 0x28);
    *((u8*)(r5 + 0xe)) = (*((u8*)(r5 + 0xe)) & ~(8));
}




void ov83_02240514(void) {
    // add r0, r1, r0
}




void ov83_02240528(void) {
    // add r0, r5, r0
    FillWindowPixelBuffer((0x3f << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((1 << 0xa), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x41 << 4), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x3f << 4), *((u32*)(r5 + 0x20)), 0x6a, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x3f << 4), *((u32*)(r5 + 0x20)), 0x6b, 0);
    Save_PlayerData_GetProfile(*((u32*)(r5 + 0x0000050C)));
    String_New(8, 0x6b);
    PlayerProfile_GetNamePtr(r6);
    CopyU16ArrayToString(r4, r0);
    PlayerProfile_GetTrainerGender(r6);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r2, [sp, #8]
    ov83_02247998((1 << 0xa), r4, 0, 0);
    String_Delete(r4);
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r4, r0);
    // str r0, [sp]
    ov83_02240C48(r5, 0, r0, 4);
    // add r0, r5, r0
    GetWindowWidth((0x41 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    ov83_02241DD8(r5, (0x41 << 4), *((u32*)(r5 + 0x20)), 2);
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x3f << 4));
    // add r0, r5, r0
    ScheduleWindowCopyToVram((1 << 0xa));
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x41 << 4));
}




void ov83_02240664(void) {
    // ldrsh r1, [r5, r0]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r4, #0x50
    // add r0, #0x30
    // str r0, [sp, #0x1c]
    // add r0, r4, r0
    FillWindowPixelBuffer((0 << 4), 0);
    // ldr r0, [sp, #0x18]
    // add r1, r0, r6
    // add r0, #0x30
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // add r2, r2, r3
    // add r0, r4, r0
    AddTextPrinterParameterizedWithColor(0, 0, *((u32*)((r6 << 3) + 0x000004DC)), 4);
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    // add r1, r7, r1
    ov83_02240EC4(r5, ((*((u32*)(0x000004DC + 4)) << 0x10) >> 0x10), *((u8*)(r5 + 0x13)));
    // str r0, [sp]
    ov83_02240C48(r5, 0, r0, 2);
    // ldr r0, [sp, #0x20]
    // add r0, r4, r0
    GetWindowWidth();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x20]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r5, *((u32*)(r5 + 0x20)), 0x68);
    // ldr r0, [sp, #0x1c]
    // add r0, r4, r0
    ScheduleWindowCopyToVram();
}




void ov83_02240748(void) {
    // ldrsh r1, [r5, r0]
    // str r4, [sp, #4]
    // str r0, [sp]
    // ldr r1, [sp]
    // add r2, r1, r2
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    ov83_02240F48(r0, ((*((u32*)(0x000004DC + 4)) << 0x10) >> 0x10), *((u8*)(r0 + 0x13)));
    // str r0, [sp, #8]
    // ldr r2, [sp, #8]
    // add r0, r5, r0
    ov83_02247264(0x00000518, (r4 + 4));
    // ldr r2, [sp, #8]
    // add r0, r5, r0
    ov83_022472A0(0x00000518, (r4 + 4));
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    ov83_02242894(r4);
    // add r1, sp, #0xc
    // add r2, sp, #0xc
    ov83_02247568(*((u32*)(r6 + 0x00000784)), *((u16*)(r1 + 2)), *((u16*)r2));
    ov83_0224755C(*((u32*)(r6 + 0x00000784)), 1);
    ov83_0224755C(*((u32*)(r6 + 0x00000784)), 0);
    // ldr r0, [sp, #4]
    // add r0, #8
    // str r0, [sp, #4]
}




void ov83_022407FC(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer((0x3d << 4), 0);
    // str r1, [sp]
    // ldrsh r2, [r4, r2]
    ov83_02240C48(r4, 0, (0x00000862 + 1), 1);
    _s32_div_f((*((u8*)(r4 + 0x00000861)) - 1), 6);
    // str r0, [sp]
    ov83_02240C48(r4, 1, (r0 + 1), 1);
    // add r0, r4, r0
    GetWindowWidth((0x3d << 4));
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0x3d << 4), *((u32*)(r4 + 0x20)), 0x67);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x3d << 4));
}




void ov83_0224088C(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer((0x3e << 4), 0);
    // add r0, r4, r0
    GetWindowWidth((0x3e << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov83_022479E4((0x3e << 4), *((u32*)(r4 + 0x20)), 0x69, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x3e << 4));
}




void ov83_022408E0(void) {
    // add r0, r5, r0
    FillWindowPixelBuffer((0x42 << 4), 0);
    // ldrsh r2, [r5, r1]
    // sub r1, #0xc6
    // add r0, r4, r0
    ov83_0224755C(*((u32*)(r5 + 0x00000862)), 0);
    ov83_02240F48(r5, r6, *((u8*)(r5 + 0x13)));
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x42 << 4), *((u32*)(r5 + 0x1c)), r0, 0);
    // add r0, r5, r0
    ov83_02247264(0x00000518, 3, r4);
    // add r0, r5, r0
    ov83_022472A0(0x00000518, 3, r4);
    ov83_0224755C(*((u32*)(r5 + 0x0000079C)), 1);
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x42 << 4));
}




void ov83_02240984(void) {
    // add r4, r5, r0
    FillWindowPixelBuffer(r4, 0);
    // add r4, #0x10
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x45 << 4), *((u32*)(r5 + 0x20)), 0x58, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x49 << 4), *((u32*)(r5 + 0x20)), 0x46, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x47 << 4), *((u32*)(r5 + 0x20)), 0x59, 0);
    // str r1, [sp]
    ov83_02240C48(r5, 0, *((u16*)(r5 + 0x00000818)), 3);
    // str r0, [sp]
    ov83_02240C48(r5, 1, *((u16*)(r5 + 0x0000081A)), 3);
    // add r0, r5, r0
    GetWindowWidth((0x12 << 6));
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    ov83_02241DD8(r5, (0x12 << 6), *((u32*)(r5 + 0x20)), 0x5f);
    Mon_GetBoxMon(*((u32*)(r5 + 0x00000804)));
    BufferBoxMonNickname(*((u32*)(r5 + 0x24)), 0, r0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02241DD8(r5, (0x43 << 4), *((u32*)(r5 + 0x20)), 0x5b);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x11 << 6), *((u32*)(r5 + 0x20)), 0x56, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x11 << 6), *((u32*)(r5 + 0x20)), 0x57, 0);
    // str r1, [sp]
    ov83_02240C48(r5, 0, *((u8*)(r5 + 0x0000080F)), 3);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02241DD8(r5, (0x46 << 4), *((u32*)(r5 + 0x20)), 0x5e);
    BufferItemName(*((u32*)(r5 + 0x24)), 0, *((u16*)(r5 + 0x00000812)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02241DD8(r5, (0x4a << 4), *((u32*)(r5 + 0x20)), 0x47);
    // add r5, r5, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}




void ov83_02240B54(void) {
    // str r1, [sp]
    NewMsgDataFromNarc(1, 0x1b, 0xde, 0x6b);
    ov83_0224777C(*((u32*)(r5 + 0x0000050C)), *((u8*)(r5 + 9)), 1);
    // ldr r1, [sp]
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    ListMenuItems_New(*((u8*)(r5 + 0x00000861)), 0x6b);
    // str r0, [r5, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x000004DC)), r7, *((u16*)(r6 + (0 << 1))), 0);
    DestroyMsgData(r7);
    ov83_02247B7C(r5);
    // str r0, [r5, r1]
    // sub r1, #0xe0
    ov83_0224755C(*((u32*)(r5 + 0x0000085C)), 1);
    // ldr r1, [sp]
    ov83_02240528(r5);
    ov83_02240664(r5);
    ov83_02240748(r5);
    ov83_022407FC(r5);
    ov83_0224088C(r5);
    ov83_022408E0(r5, 0);
    ov83_02240984(r5);
    ov83_0224759C(*((u32*)(r5 + (0x1e << 6))), 0x30, 0x48);
}




void ov83_02240C48(void) {
}




void ov83_02240C60(void) {
}




void ov83_02240C6C(void) {
    Save_PlayerData_GetProfile(*((u32*)(r0 + 0x0000050C)));
    BufferPlayersName(*((u32*)(r5 + 0x24)), r4, r0);
}




void ov83_02240C8C(void) {
    // str r2, [sp, #0x10]
    Save_PlayerData_GetProfile(*((u32*)(r0 + 0x0000050C)), 0x0000050C);
    String_New(8, 0x6b);
    PlayerProfile_GetNamePtr(r7);
    CopyU16ArrayToString(r4, r0);
    PlayerProfile_GetTrainerGender(r7);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldr r3, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(r5, *((u8*)((0xc1 << 0xa) + 0x10)), r4);
    ScheduleWindowCopyToVram(r5);
    String_Delete(r4);
}




void ov83_02240CFC(void) {
    // str r2, [sp, #0x18]
    sub_0203769C();
    // eor r0, r1
    sub_02034818(1);
    // str r0, [sp, #0x1c]
    PlayerProfile_GetTrainerGender();
    // ldr r2, [sp, #0x1c]
    BufferPlayersName(*((u32*)(r5 + 0x24)), 0);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    ov83_0223FCB4(r5, r7, 1);
}




void ov83_02240D64(void) {
    // add r3, sp, #0x20
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r6, [sp, #0x10]
    // add r2, sp, #0x20
    // str r2, [sp, #0x14]
}




void ov83_02240DA8(void) {
}




void ov83_02240DB0(void) {
    PlaySE(0x000005DC);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_02241368(r4, 0xc, *((u8*)(r4 + 0xd)));
    ov83_02240DE0(r4, *((u8*)(r4 + 0xd)), 0);
}




void ov83_02240DE0(void) {
    ov83_022475D4(*((u32*)(r0 + 0x00000764)), 0x11, 2);
    ov83_02247568(r4, 0xe0, 0xa0);
    ov83_02242844(r5, 0);
    ov83_022475D4(r4, r2);
    // add r1, sp, #4
    // add r2, sp, #0
    ov83_02240E70(r5, r7);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov83_02247568(r4, ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10));
    ov83_02242844(r5, 1);
    ov83_02242814(r5, 0);
}




void ov83_02240E70(void) {
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r6]
}




void ov83_02240EC4(void) {
    ov83_0224777C(*((u32*)(r0 + 0x0000050C)), *((u8*)(r0 + 9)), 1, r0);
}




void ov83_02240EF8(void) {
    GF_AssertFail(*((u16*)(ov83_02247FC8 + (0 << 1))), (0 << 1), (ov83_02247F88 + 2), (0 + 1));
}




void ov83_02240F48(void) {
    ov83_0224777C(*((u32*)(r0 + 0x0000050C)), *((u8*)(r0 + 9)), 1, r0);
}




void ov83_02240F7C(void) {
    // ldr r4, [sp, #0x18]
    // strh r0, [r5]
    // strh r0, [r6]
    // strh r0, [r7]
    // strh r0, [r4]
    // strh r1, [r5]
    // strh r1, [r6]
    // strh r0, [r7]
    // strh r1, [r4]
}




void ov83_02240FAC(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x000007A4)), r0);
    // str r0, [sp, #0x14]
    GetMonData(0xa3, 0);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    GetMonData(0xa4, 0);
    // ldr r0, [sp, #0x1c]
    CalculateHpBarColor(((r0 << 0x10) >> 0x10), ((r0 << 0x10) >> 0x10), 0x30);
    ov83_022411B0(r4, r0);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    CalculateHpBarColor(((r0 << 0x10) >> 0x10), ((r7 << 0x10) >> 0x10), 0x30);
    ov83_022411DC(r4, r0);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241024: ; jump table
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(4));
    *((u8*)(r4 + 0xe)) = (4 | *((u8*)(r4 + 0xe)));
    ov80_02237D8C(*((u8*)(r4 + 9)), *((u8*)(r4 + 0xe)));
    // str r0, [sp]
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r4, r1]
    ov83_02247624(*((u32*)(r4 + 0x0000075C)), 0x0000075C);
    ov83_0224753C(*((u32*)(r4 + 0x0000075C)));
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x14]
    GetMonData(*((u32*)(r4 + 0x0000075C)), 0xa3, 0);
    // add r1, #0x80
    ov83_02240238(r4, r4, r5, r0);
    ov83_02241E18(r4);
    ov83_022421E0(r4, 0);
    // add r1, r4, r5
    ov83_022475D4(*((u32*)(r1 + 0x00000768)), r7);
    // add r1, r4, r5
    // ldr r1, [sp, #0x18]
    ov83_02247600(*((u32*)(r1 + 0x0000073C)), ((r1 << 0x18) >> 0x18));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(4));
    *((u8*)(r4 + 0xe)) = (4 | *((u8*)(r4 + 0xe)));
    ov80_02237D8C(*((u8*)(r4 + 9)), *((u8*)(r4 + 0xe)));
    // str r0, [sp]
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // str r1, [sp, #0x10]
    ov83_02247454(0x00000518, 0, 0, 0);
    // str r0, [r4, r1]
    ov83_02247624(*((u32*)(r4 + 0x0000075C)), 0x0000075C);
    ov83_0224753C(*((u32*)(r4 + 0x0000075C)));
    // str r1, [r4, r0]
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(4));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(4));
    *((u8*)(r4 + 0xe)) = (*((u8*)(r4 + 0xe)) & ~(4));
}




void ov83_022411B0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022411C0: ; jump table
}




void ov83_022411DC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022411EC: ; jump table
}




void ov83_02241208(void) {
    // ldrsb r0, [r4, r0]
    // add r0, r0, r1
    // asr r1, r0, #0x18
    // bpl _02241222
    // asr r1, r0, #0x18
    *((u8*)(r0 + 0xd)) = 0;
    ov83_02240DB0(r0, 0);
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x000007A4)), r0);
    // add r4, #0x90
    ov83_0223FD4C(r4, r4, r0);
}




void ov83_02241254(void) {
    // ldrsb r0, [r4, r0]
    // add r0, r0, r1
    // asr r1, r0, #0x18
    // bpl _0224126E
    // asr r1, r0, #0x18
    *((u8*)(r0 + 0xd)) = 0;
    ov83_02240DB0(r0, 0);
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x000007A4)), r0);
    // add r4, #0x90
    ov83_0223FF44(r4, r4, r0);
}




void ov83_022412A0(void) {
    ov83_02241730();
    ov83_0224042C(r4);
    // add r0, #0xb0
    ov83_02241354(r4);
    ov83_02241B18(r4);
    // add r2, r4, r2
    ov83_022477EC(2, 0, 0x00000868);
    ov83_0224755C(*((u32*)(r4 + 0x00000778)), 0);
}




void ov83_022412DC(void) {
}




void ov83_02241354(void) {
}




void ov83_02241368(void) {
    // sub r3, #0xa
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02241380: ; jump table
    ov83_022413C4((*((u16*)(r1 + 6)) << 0x10));
    ov83_0224143C();
    ov83_022414CC();
    ov83_02241504();
    // add r1, r5, r1
    sub_02037030(r4, 0x000007AC, 0x28);
}




void ov83_022413C4(void) {
    Save_PlayerData_GetProfile(*((u32*)(r0 + 0x0000050C)));
    // strh r4, [r6, r1]
    PlayerProfile_GetTrainerGender(0x000007AC);
    // strh r0, [r6, r1]
    ov83_0224777C(*((u32*)(r6 + 0x0000050C)), *((u8*)(r6 + 9)), ((0 << 0x18) >> 0x18));
    // strh r0, [r5, r7]
}




void ov83_0224140C(void) {
    *((u8*)(r3 + 0xf)) = (*((u8*)(r3 + 0xf)) + 1);
    sub_0203769C((*((u8*)(r3 + 0xf)) + 1));
    // add r1, r4, r3
    // strb r2, [r1, r0]
}




void ov83_0224143C(void) {
    // strh r1, [r5, r0]
    // strh r4, [r5, r0]
    sub_0203769C((0x000007AC + 2));
    *((u8*)(r5 + 0x12)) = r4;
    // strh r1, [r5, r0]
    // strh r2, [r5, r1]
    // strh r1, [r5, r0]
}




void ov83_02241474(void) {
    *((u8*)(r3 + 0xf)) = (*((u8*)(r3 + 0xf)) + 1);
    sub_0203769C((*((u8*)(r3 + 0xf)) + 1));
    // strb r1, [r4, r0]
    sub_0203769C(0x000007FD, *((u16*)(r5 + 2)));
    // strb r1, [r4, r0]
    // add r0, r1, r0
    *((u8*)(r4 + 0x12)) = *((u8*)(r4 + 0x15));
    *((u16*)(r4 + 0x10)) = *((u16*)(r5 + 8));
    *((u8*)(r4 + 0x13)) = *((u16*)(r5 + 0xa));
    *((u8*)(r4 + 0x12)) = *((u16*)(r5 + 4));
    *((u16*)(r4 + 0x10)) = *((u16*)(r5 + 8));
    *((u8*)(r4 + 0x13)) = *((u16*)(r5 + 0xa));
}




void ov83_022414CC(void) {
    // strh r1, [r0, r2]
    // strh r3, [r0, r1]
}




void ov83_022414DC(void) {
    sub_0203769C();
    // strb r0, [r4, r1]
    ov83_02240DE0(r4, *((u8*)(r4 + 0x000007FC)), 1);
}




void ov83_02241504(void) {
    // strh r2, [r0, r1]
}




void ov83_02241510(void) {
}




void ov83_0224152C(void) {
}




void ov83_0224153C(void) {
    // add r1, sp, #4
    // str r1, [sp]
    // add r1, sp, #8
    // add r3, sp, #4
    // add r1, #2
    // add r2, sp, #8
    // add r3, #2
    // str r0, [sp]
    // add r3, sp, #4
    // add r2, sp, #4
    // str r0, [sp]
    // str r0, [sp]
    // add r3, sp, #4
    // str r0, [sp]
    // str r0, [sp]
    // add r3, sp, #4
}




void ov83_022415F4(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x000007A4)), r0);
    ov83_0224777C(*((u32*)(r5 + 0x0000050C)), *((u8*)(r5 + 9)), 0);
    Mon_GetBoxMon(r6);
    ov83_02240C60(r5, 0, r0);
    Options_GetFrame(*((u32*)(r5 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r5, r0);
    ov83_0223FD14(r5, *((u16*)(_02247D0C + ((r4 - 1) << 1))), 1);
    *((u8*)(r5 + 0xa)) = r0;
    ov83_0224152C(r6, 0x18);
    ov83_0224152C(r6, 0x29);
    ov83_0224152C(r6, 0x18);
    ov83_0224152C(r6, 0x29);
    GF_AssertFail();
    PlaySE(0x000005EC);
}




void ov83_022416A0(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x000007A4)), r0);
    // add r2, sp, #0x18
    SetMonData(6);
    ov83_02241E18(r5);
    ov83_022421E0(r5, 0);
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    // add r1, r5, r0
    ov83_0224755C(*((u32*)(r1 + 0x0000074C)), 1);
    Mon_GetBoxMon(r6);
    ov83_02240C60(r5, 0, r0);
    // add r2, sp, #0x10
    BufferItemName(*((u32*)(r5 + 0x24)), 1, *((u16*)(r2 + 8)));
    ov83_0223FD14(r5, 0x3b, 1);
    *((u8*)(r5 + 0xa)) = r0;
    PlaySE(0x00000623);
}




void ov83_02241730(void) {
    TouchscreenListMenu_DestroyButtons(*((u32*)(r0 + (0x21 << 6))));
    ov83_02242D5C(r4);
    // add r0, r4, r0
    ov83_022478B4(0x0000084C);
}




void ov83_0224175C(void) {
}




void ov83_02241770(void) {
    // add r1, sp, #0x1c
    // str r1, [sp]
    // add r1, sp, #0x20
    // add r3, sp, #0x1c
    // add r1, #2
    // add r2, sp, #0x20
    // add r3, #2
    ov83_02240F7C();
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // add r1, sp, #0x1c
    // add r0, #0x48
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0, ((*((u16*)(r1 + 6)) << 0x10) >> 0x10), (((*((u16*)(r1 + 4)) + 1) << 0x10) >> 0x10));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    // str r0, [sp, #0x18]
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    // ldr r1, [sp, #0x18]
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r0);
    // str r1, [sp]
    ov83_02240C48(r5, 0, r0, 4);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov83_0223FCB4(r5, r4, 2, r7);
    *((u8*)(r5 + 0xa)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0, 0x40, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0, 0xc0, 0);
    sub_0203769C();
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r6, r0);
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r7, r0);
    // str r1, [sp]
    ov83_02240C48(r5, 0, r6, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_02241DD8(r5, r4, *((u32*)(r5 + 0x20)), 2);
    // str r1, [sp]
    ov83_02240C48(r5, 0, r7, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_02241DD8(r5, r4, *((u32*)(r5 + 0x20)), 3);
    ScheduleWindowCopyToVram(r4);
}




void ov83_022418E8(void) {
    PlaySE(0x000005E3);
    // str r0, [sp]
    ov83_0224776C(*((u8*)(r4 + 0x15)), r7);
    // str r0, [sp, #4]
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241914: ; jump table
    ov83_02240EF8(*((u16*)(r4 + 0x10)), ((r5 - 1) << 1));
    sub_0203769C();
    // ldr r0, [sp]
    ov83_02240C6C(r4, 5);
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), r6);
    ov83_022477C4(*((u32*)(r4 + 0x24)), 5);
    // sub r1, r1, r6
    // strh r1, [r4, r0]
    // ldr r0, [sp]
    ov83_022477C4(*((u32*)(r4 + 0x24)), 5);
    // sub r1, r1, r6
    // strh r1, [r4, r0]
    ov83_02240C6C(r4, 5);
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), r6);
    // add r1, #0x50
    ov83_02241770(r4, r4);
    ov83_02241730(r4);
    ov83_02241B18(r4);
    ov83_0224042C(r4);
    // add r2, r4, r2
    ov83_022477EC(2, 0, 0x00000868);
    // add r0, #0xb0
    ov83_02241354(r4);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022419DE: ; jump table
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    // ldr r1, [sp, #4]
    ov83_022415F4(r4, r5);
    Options_GetFrame(*((u32*)(r4 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r4, r0);
    // ldr r1, [sp, #4]
    ov83_022416A0(r4, *((u16*)(r4 + 0x10)));
    // ldr r1, [sp, #4]
    ov83_02241A60(r4);
    // ldr r1, [sp, #4]
    ov83_02241ABC(r4);
}




void ov83_02241A60(void) {
    ov83_0223FAA8(2);
    // add r0, #0xb0
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, #0xa0
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((5 << 6));
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    Party_GetMonByIndex(*((u32*)(r5 + 0x000007A4)), r0);
    // add r1, #0x90
    ov83_0223FD4C(r5, r5, r0);
    // add r2, r5, r2
    ov83_022477EC(2, 1, 0x00000868);
}




void ov83_02241ABC(void) {
    ov83_0223FB24(2);
    // add r0, #0xb0
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, #0xa0
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((5 << 6));
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    Party_GetMonByIndex(*((u32*)(r5 + 0x000007A4)), r0);
    // add r1, #0x90
    ov83_0223FF44(r5, r5, r0);
    // add r2, r5, r2
    ov83_022477EC(2, 1, 0x00000868);
}




void ov83_02241B18(void) {
    // add r2, r3, r2
}




void ov83_02241B30(void) {
    ov80_02237B24(*((u8*)(r0 + 9)), 1);
    // str r0, [sp]
    Party_GetMonByIndex(*((u32*)(r6 + 0x000007A4)), 0);
    // str r0, [sp, #4]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #4]
    GetMonData(0xa4, 0);
    ov80_0222A43C(((r7 << 0x10) >> 0x10), ((r0 << 0x10) >> 0x10));
    ov83_02247600(*((u32*)(r5 + 0x0000073C)), r0);
    ov83_02247768(*((u8*)(r6 + 0x14)), *((u8*)(r6 + 0xd)));
    ov83_0224760C(*((u32*)(r5 + 0x0000073C)), 0);
    ov83_0224760C(*((u32*)(r5 + 0x0000073C)), 1);
    // ldr r0, [sp]
}




void ov83_02241BC4(void) {
    // str r2, [sp]
    ov80_02237B24(*((u8*)(r0 + 9)), 0);
    // ldr r0, [sp]
    ov83_0224776C(*((u8*)(r5 + 0x15)), r6);
    sub_0203769C();
    ov83_02240C6C(r5, 5);
    ov83_0224777C(*((u32*)(r5 + 0x0000050C)), *((u8*)(r5 + 9)), r4);
    // add r3, r3, r6
    ov80_02237FA4(*((u32*)(r5 + 4)), *((u8*)(r5 + 9)), *((u16*)((r0 << 1) + ov83_02247D48)), ov83_02247D48);
    ov83_0224777C(*((u32*)(r5 + 0x0000050C)), *((u8*)(r5 + 9)), r4);
    Save_Frontier_GetStatic(*((u32*)(r5 + 0x0000050C)));
    // str r0, [sp, #4]
    sub_0205C174(*((u8*)(r5 + 9)), r4);
    // str r0, [sp, #8]
    sub_0205C174(*((u8*)(r5 + 9)), r4);
    sub_0205C268();
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    sub_02031108(r0, (((r7 + 1) << 0x10) >> 0x10));
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // ldr r0, [sp]
    *((u8*)(r5 + 0xe)) = (0x20 | (*((u8*)(r5 + 0xe)) & ~(0x60)));
    *((u8*)(r5 + 0xe)) = (0x40 | ((*((u8*)(r5 + 0xe)) & ~(0x60)) & ~(0x60)));
    ov83_022477C4(*((u32*)(r5 + 0x24)), 5);
    // add r1, r5, r0
    // add r2, r2, r6
    // sub r0, r0, r2
    // strh r0, [r5, r2]
    // strb r0, [r1, r4]
    ov83_022477C4(*((u32*)(r5 + 0x24)), 5, (0x000007FF + 3), (*((u8*)(r1 + r4)) << 1));
    // add r1, r5, r0
    // add r2, r2, r6
    // sub r0, r0, r2
    // strh r0, [r5, r2]
    // strb r0, [r1, r4]
    ov83_02240C6C(r5, 5, (0x000007FF + 3), (*((u8*)(r1 + r4)) << 1));
    ov83_0224777C(*((u32*)(r5 + 0x0000050C)), *((u8*)(r5 + 9)), r4);
    // add r3, r3, r6
    ov80_02237FA4(*((u32*)(r5 + 4)), *((u8*)(r5 + 9)), *((u16*)((r0 << 1) + ov83_02247D48)), ov83_02247D48);
    ov83_0224777C(*((u32*)(r5 + 0x0000050C)), *((u8*)(r5 + 9)), r4);
    Save_Frontier_GetStatic(*((u32*)(r5 + 0x0000050C)));
    // str r0, [sp, #0xc]
    sub_0205C174(*((u8*)(r5 + 9)), r4);
    // str r0, [sp, #0x10]
    sub_0205C174(*((u8*)(r5 + 9)), r4);
    sub_0205C268();
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    sub_02031108(r0, (((r7 + 1) << 0x10) >> 0x10));
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // ldr r0, [sp]
    *((u8*)(r5 + 0xe)) = (0x20 | (*((u8*)(r5 + 0xe)) & ~(0x60)));
    *((u8*)(r5 + 0xe)) = (0x40 | ((*((u8*)(r5 + 0xe)) & ~(0x60)) & ~(0x60)));
    ov83_02241730(r5, ((*((u8*)(r5 + 0xe)) & ~(0x60)) & ~(0x60)));
    // add r1, #0x50
    ov83_02241770(r5, r5);
    Options_GetFrame(*((u32*)(r5 + 0x00000508)));
    // add r0, #0xb0
    ov83_02247944(r5, r0);
    // add r1, r1, r6
    ov83_0223FD14(r5, *((u16*)((r7 << 1) + ov83_02247D5A)), 1);
    *((u8*)(r5 + 0xa)) = r0;
}




void ov83_02241DD8(void) {
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
}




void ov83_02241E18(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)), *((u8*)(r0 + 0xd)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x000007A4)), r0);
    AcquireMonLock();
    // str r0, [sp, #4]
    // str r6, [r5, r0]
    Mon_GetBoxMon(r6);
    // str r0, [r5, r1]
    GetMonData(r6, 5, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa1, 0);
    // strb r0, [r5, r1]
    GetMonData(r6, 0xa, 0);
    // strb r0, [r5, r1]
    GetMonNature(r6, (0x81 << 4));
    // strb r0, [r5, r1]
    GetMonData(r6, 6, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa3, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa4, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa5, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa8, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa6, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa9, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa7, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0x70, 0);
    // strb r0, [r5, r1]
    GetMonData(r6, 0, 0);
    // str r0, [r5, r1]
    GetMonData(r6, 0xb0, 0);
    // strb r2, [r5, r1]
    // strb r0, [r5, r1]
    GetMonGender(r6, 0x0000080E, *((u8*)(r5 + 0x0000080E)));
    // and r0, r2
    // strb r0, [r5, r3]
    // add r0, r5, r0
    // str r0, [sp]
    // add r1, #0x36
    GetMonData(r6, 0, 0, 0x0000080E);
    // ldr r2, [sp]
    // add r7, r5, r4
    // strh r0, [r2, r1]
    // add r1, #0x3a
    GetMonData(r6, r4, 0);
    // strb r0, [r7, r1]
    // add r1, #0x3e
    GetMonData(r6, r4, 0);
    // ldr r2, [sp]
    GetMoveMaxPP(*((u16*)(r2 + 0x00000828)), ((((r0 << 0x10) >> 0x10) << 0x18) >> 0x18));
    // strb r0, [r7, r1]
    // ldr r1, [sp, #4]
    ReleaseMonLock(r6, 0x00000834);
}




void ov83_02241FF0(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer((0x19 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1b << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1d << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1f << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x21 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x23 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x25 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x27 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x29 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x2b << 4), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x19 << 4), *((u32*)(r4 + 0x20)), 0x58, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x1b << 4), *((u32*)(r4 + 0x20)), 0x4a, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x1d << 4), *((u32*)(r4 + 0x20)), 0x48, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x1f << 4), *((u32*)(r4 + 0x20)), 0x46, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x21 << 4), *((u32*)(r4 + 0x20)), 0x59, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x23 << 4), *((u32*)(r4 + 0x20)), 0x4c, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x25 << 4), *((u32*)(r4 + 0x20)), 0x50, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x27 << 4), *((u32*)(r4 + 0x20)), 0x4e, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x29 << 4), *((u32*)(r4 + 0x20)), 0x52, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x2b << 4), *((u32*)(r4 + 0x20)), 0x54, 0);
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x19 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1b << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1d << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1f << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x21 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x23 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x25 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x27 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x29 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x2b << 4));
}




void ov83_022421E0(void) {
    // str r1, [sp, #0x14]
    // add r0, r4, r0
    FillWindowPixelBuffer((0x17 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((6 << 6), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1a << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((7 << 6), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1e << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((2 << 8), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x22 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((9 << 6), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x26 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xa << 6), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x2a << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xb << 6), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x2d << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x2e << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x2f << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((3 << 8), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x31 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x32 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x33 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xd << 6), 0);
    Mon_GetBoxMon(*((u32*)(r4 + 0x00000804)));
    BufferBoxMonNickname(*((u32*)(r4 + 0x24)), 0, r0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0x17 << 4), *((u32*)(r4 + 0x20)), 0x5b);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((6 << 6), *((u32*)(r4 + 0x20)), 0x56, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((6 << 6), *((u32*)(r4 + 0x20)), 0x57, 0);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u8*)(r4 + 0x0000080F)), 3);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0x1a << 4), *((u32*)(r4 + 0x20)), 0x5e);
    BufferAbilityName(*((u32*)(r4 + 0x24)), 0, *((u8*)(r4 + (0x81 << 4))));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (7 << 6), *((u32*)(r4 + 0x20)), 0x4b);
    BufferNatureName(*((u32*)(r4 + 0x24)), 0, *((u8*)(r4 + 0x00000811)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0x1e << 4), *((u32*)(r4 + 0x20)), 0x49);
    BufferItemName(*((u32*)(r4 + 0x24)), 0, *((u16*)(r4 + 0x00000812)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (2 << 8), *((u32*)(r4 + 0x20)), 0x47);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(r4 + 0x00000818)), 3);
    // str r0, [sp]
    ov83_02240C48(r4, 1, *((u16*)(r4 + 0x0000081A)), 3);
    // add r0, r4, r0
    GetWindowWidth((0x22 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0x22 << 4), *((u32*)(r4 + 0x20)), 0x5f);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(r4 + 0x0000081C)), 3);
    // add r0, r4, r0
    GetWindowWidth((9 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (9 << 6), *((u32*)(r4 + 0x20)), 0x4d);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(r4 + 0x0000081E)), 3);
    // add r0, r4, r0
    GetWindowWidth((0x26 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0x26 << 4), *((u32*)(r4 + 0x20)), 0x51);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(r4 + (0x82 << 4))), 3);
    // add r0, r4, r0
    GetWindowWidth((0xa << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0xa << 6), *((u32*)(r4 + 0x20)), 0x4f);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(r4 + 0x00000822)), 3);
    // add r0, r4, r0
    GetWindowWidth((0x2a << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0x2a << 4), *((u32*)(r4 + 0x20)), 0x53);
    // str r1, [sp]
    ov83_02240C48(r4, 0, *((u16*)(r4 + 0x00000824)), 3);
    // add r0, r4, r0
    GetWindowWidth((0xb << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    ov83_02241DD8(r4, (0xb << 6), *((u32*)(r4 + 0x20)), 0x55);
    // str r4, [sp, #0x1c]
    // add r6, #0x50
    // ldr r3, [sp, #0x1c]
    BufferMoveName(*((u32*)(r4 + 0x24)), 0, *((u16*)(r3 + 0x00000828)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x28
    // add r1, r6, r1
    // add r3, #0x60
    ov83_02241DD8(r4, (r5 << 4), *((u32*)(r4 + 0x20)), r5);
    // ldr r1, [sp, #0x1c]
    // add r0, #0x2c
    // add r0, r6, r7
    GetWindowWidth(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r6, r7
    // add r7, r3, r7
    // asr r3, r7, #1
    ov83_022479E4(2, *((u32*)(r4 + 0x20)), 0x66, (r0 << 3));
    NewString_ReadMsgData(*((u32*)(r4 + 0x20)), 0x5a);
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x28]
    FontID_String_GetWidth(0, 0);
    // str r0, [sp, #0x24]
    // add r0, #0x2c
    // add r0, r6, r7
    GetWindowWidth(r5);
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x20]
    // add r0, r6, r7
    ov83_02247998(2, (r0 << 3), 0);
    // ldr r0, [sp, #0x28]
    String_Delete();
    // add r0, r4, r5
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    ov83_02240C48(r4, 0, *((u8*)(r3 + (0x83 << 4))), 2);
    NewString_ReadMsgData(*((u32*)(r4 + 0x20)), 0x65);
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0x2c]
    StringExpandPlaceholders(*((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x28)));
    FontID_String_GetWidth(0, *((u32*)(r4 + 0x28)), 0);
    // mov ip, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // sub r2, r3, r2
    // mov r3, ip
    // sub r2, r2, r3
    // add r0, r6, r7
    ov83_02247998(0, *((u32*)(r4 + 0x28)), 0);
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    ov83_02240C48(r4, 0, *((u8*)(r3 + 0x00000834)), 2);
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r6, r7
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_02241DD8(r4, *((u32*)(r4 + 0x20)), 0x65);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r4, r4, r0
    ScheduleWindowCopyToVram(r4);
    // add r4, #0x10
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x17 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((6 << 6));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1a << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((7 << 6));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1e << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((2 << 8));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x22 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((9 << 6));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x26 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0xa << 6));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x2a << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0xb << 6));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x2d << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x2e << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x2f << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((3 << 8));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x31 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x32 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x33 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0xd << 6));
}




void ov83_02242814(void) {
    // add r2, #0x8c
    // add r1, #0x88
    // add r3, #0x94
}




void ov83_02242844(void) {
    // add r5, r6, r0
    // add r5, #0x10
    // add r4, r6, r0
    // add r4, #0x10
}




void ov83_02242894(void) {
    // add r3, #0x14
    // strh r3, [r1]
    // add r0, #0x38
    // strh r0, [r2]
}




void ov83_022428A8(void) {
    // str r0, [sp, #0x14]
    // add r0, #0x50
    // str r0, [sp, #0x14]
    // add r0, #0x30
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    ClearWindowTilemapAndScheduleTransfer(0, (0 << 4));
    ov83_0224755C(*((u32*)(r5 + 0x00000784)), 0);
    ov83_02247568(*((u32*)(r5 + r0)), 0x44, 0x4c);
    ov83_0224755C(*((u32*)(r6 + 0x0000077C)), 0);
    // str r0, [sp]
    // add r3, sp, #0x18
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r6 + 0x000007A8)), 0x27, 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x18]
    // add r2, #0xc
    LoadRectToBgTilemapRect(*((u32*)(r6 + 0x4c)), 2, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 0x4c)), 2);
    Heap_Free(r4);
    // add r0, r6, r0
    FillWindowPixelBuffer((0x3b << 4), 0);
    // add r0, r6, r0
    FillWindowPixelBuffer((0xf << 6), 0);
    // ldrsh r1, [r6, r0]
    // add r0, r0, r7
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r6, r0
    AddTextPrinterParameterizedWithColor((0x3b << 4), 0, *((u32*)(*((u32*)(r6 + 0x000004DC)) + ((6 * r1) << 3))), 0);
    // add r1, r1, r4
    ov83_02240EC4(r6, ((*((u32*)(*((u32*)(r6 + 0x000004DC)) + 4)) << 0x10) >> 0x10), *((u8*)(r6 + 0x13)));
    // str r1, [sp]
    ov83_02240C48(r6, 0, r0, 2);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r6, r1
    ov83_02241DD8(r6, (0xf << 6), *((u32*)(r6 + 0x20)), 0x68);
    // add r0, r6, r0
    ScheduleWindowCopyToVram((0x3b << 4));
    // add r0, r6, r0
    ScheduleWindowCopyToVram((0xf << 6));
}




void ov83_022429E4(void) {
    // add r0, r6, r0
    ClearWindowTilemapAndScheduleTransfer((0x3b << 4));
    // add r0, r6, r0
    ClearWindowTilemapAndScheduleTransfer((0xf << 6));
    // str r0, [sp]
    // add r3, sp, #0x10
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r6 + 0x000007A8)), 0x26, 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x10]
    // add r2, #0xc
    LoadRectToBgTilemapRect(*((u32*)(r6 + 0x4c)), 2, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 0x4c)), 2);
    Heap_Free(r4);
    // ldrsh r1, [r6, r0]
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    ov83_02242894(0);
    // add r1, sp, #0xc
    // add r2, sp, #0xc
    ov83_02247568(*((u32*)(r5 + 0x00000784)), *((u16*)(r1 + 2)), *((u16*)r2));
    // add r1, r7, r4
    ov83_0224755C(*((u32*)(r5 + 0x00000784)), 1);
    ov83_0224755C(*((u32*)(r6 + 0x0000077C)), 1);
    ov83_02240664(r6);
    ov83_022407FC(r6);
    ov83_0224088C(r6);
}




void ov83_02242AB4(void) {
}




void ov83_02242AC0(void) {
    ov83_02247568(*((u32*)(r0 + 0x0000077C)));
    ov83_022475D4(*((u32*)(r5 + 0x0000077C)), r4);
}




void ov83_02242AE0(void) {
}




void ov83_02242AEC(void) {
    // add r0, sp, #4
    // add r0, #2
    // add r1, sp, #4
    ov83_02247988();
    // add r1, sp, #4
    // add r3, sp, #8
    *((u16*)(r1 + 0x1c)) = *((u16*)(_02247D0C + 0x1e));
    *((u16*)(r1 + 0x1e)) = *((u16*)(_02247D0C + 0x20));
    *((u16*)(r1 + 0x20)) = *((u16*)(_02247D0C + 0x22));
    *((u16*)(r1 + 0x22)) = *((u16*)(_02247D0C + 0x24));
    *((u16*)(r1 + 0x24)) = *((u16*)(_02247D0C + 0x26));
    *((u16*)(r1 + 0x26)) = *((u16*)(_02247D0C + 0x28));
    *((u16*)(r1 + 0x22)) = *((u16*)(r1 + 2));
    // add r0, r0, r2
    // sub r0, #0x1b
    *((u16*)(r1 + 0x24)) = *((u16*)(r1 + 2));
    *((u16*)(r1 + 0x26)) = *((u16*)r1);
    *((u16*)(r1 + 4)) = *((u16*)(r1 + 0x1c));
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 0x1e));
    *((u16*)(r1 + 8)) = *((u16*)(r1 + 0x20));
    *((u16*)(r1 + 0xa)) = *((u16*)(r1 + 0x22));
    *((u16*)(r1 + 0xc)) = *((u16*)(r1 + 0x24));
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 0x26));
    // sub r0, #8
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    *((u8*)(r1 + 0x18)) = r4;
    // add r1, sp, #0x30
    // str r1, [sp]
    ov83_02247CCC(*((u32*)(r5 + 0x00000844)), r3, r6, r7);
    // str r0, [r5, r1]
    *((u8*)(r5 + 0xe)) = (0x10 | *((u8*)(r5 + 0xe)));
    ov80_02237B24(*((u8*)(r5 + 9)), 1);
    // add r0, r5, r0
    ov83_0224773C(0x0000073C, r0, 1);
    // add r0, r5, r0
    ov83_0224773C(0x0000074C, r4, 1);
}




void ov83_02242BAC(void) {
    ListMenuItems_New(3, 0x6b);
    // str r0, [r6, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r6 + 0x00000844)), *((u32*)(r6 + 0x20)), *((u32*)ov83_02247D6C), *((u32*)(ov83_02247D6C + 4)));
    // add r5, #8
    // str r0, [sp]
    ov83_02242AEC(r6, 3, 0x11, 8);
}




void ov83_02242BF0(void) {
    ListMenuItems_New(5, 0x6b);
    // str r0, [r4, r1]
    ov83_0224777C(*((u32*)(r4 + 0x0000050C)), *((u8*)(r4 + 9)), 0);
    // add r2, r0, r1
    // add r0, r3, r3
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02242C2E: ; jump table
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x00000844)), *((u32*)(r4 + 0x20)), *((u32*)(r2 + 4)), *((u32*)(r2 + 8)));
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x00000844)), *((u32*)(r4 + 0x20)), *((u32*)(r2 + 4)));
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x00000844)), *((u32*)(r4 + 0x20)), *((u32*)(r2 + 4)));
    // str r0, [sp]
    ov83_02242AEC(r4, (((r5 + 1) << 0x18) >> 0x18), 0x11, *((u8*)(ov83_02248008 + (((r5 + 1) << 0x18) >> 0x18))));
}




void ov83_02242CAC(void) {
    ListMenuItems_New(4, 0x6b);
    // str r0, [r5, r1]
    ov83_0224777C(*((u32*)(r5 + 0x0000050C)), *((u8*)(r5 + 9)), 1);
    // add r2, r0, r1
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x00000844)), *((u32*)(r5 + 0x20)), *((u32*)(r2 + 4)), *((u32*)(r2 + 8)));
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x00000844)), *((u32*)(r5 + 0x20)), *((u32*)(r2 + 4)));
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x00000844)), *((u32*)(r5 + 0x20)), *((u32*)(r2 + 4)));
    // str r0, [sp]
    ov83_02242AEC(r5, (((r4 + 1) << 0x18) >> 0x18), 0x11, *((u8*)(ov83_02248008 + (((r4 + 1) << 0x18) >> 0x18))));
}




void ov83_02242D5C(void) {
    ov80_02237B24(*((u8*)(r0 + 9)), 1);
    // add r0, r5, r0
    ov83_0224773C(0x0000073C, r0, 0);
    // add r0, r5, r0
    ov83_0224773C(0x0000074C, r4, 0);
    ov83_02247CE8(*((u32*)(r5 + (0x21 << 6))));
    ListMenuItems_Delete(*((u32*)(r5 + 0x00000844)));
    *((u8*)(r5 + 0xe)) = (*((u8*)(r5 + 0xe)) & ~(0x10));
}




void ov83_02242DAC(void) {
    // add r1, #8
    // add r2, #0x24
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, #0xb0
    // str r3, [sp, #0x14]
    ov83_0223FC48(r0, *((u16*)(ov83_02247D1E + (*((u8*)*((u32*)(r0 + (0x21 << 6)))) << 1))), 1);
    // add r0, #8
    // add r1, #0x24
    // str r1, [r4, r0]
}




void ov83_02242DFC(void) {
    // add r1, #0x24
    // add r1, #8
    // add r0, r1, r0
    // mvn r0, r0
    ov83_0224777C(*((u32*)(r0 + 0x0000050C)), *((u8*)(r0 + 9)), 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xb0
    // str r3, [sp, #0x14]
    ov83_0223FC48(r4, r4, 0x18, 1);
    // add r0, #8
    // add r1, #0x24
    // str r1, [r4, r0]
}




void ov83_02242E88(void) {
    // add r1, #0x24
    // add r1, #8
    // add r0, r1, r0
    ov83_0224777C(*((u32*)(r0 + 0x0000050C)), *((u8*)(r0 + 9)), 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xb0
    // str r3, [sp, #0x14]
    ov83_0223FC48(r4, r4, 0x35, 1);
    // add r0, #8
    // add r1, #0x24
    // str r1, [r4, r0]
}




void ov83_02242F18(void) {
    // strh r1, [r0, r2]
    // strb r3, [r0, r1]
    // strb r3, [r0, r1]
}




void ov83_02242F2C(void) {
    // add r3, r2, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r0 + 0x4c)), 2, *((u8*)r3), *((u8*)(r3 + 1)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x4c)), 2);
    // strb r1, [r4, r0]
    // strb r2, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 0x4c)), 2, *((u8*)r3), *((u8*)(r3 + 1)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x4c)), 2);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r2, [r4, r0]
}




void ov83_02242FE8(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov83_02243F9C();
    Heap_Create(3, 0x6b, (3 << 0x10));
    OverlayManager_CreateAndGetData(r4, 0x00000614, 0x6b);
    memset(0, 0x00000614);
    BgConfig_Alloc(0x6b);
    *((u32*)(r5 + 0x4c)) = r0;
    // str r4, [r5]
    OverlayManager_GetArgs(r4);
    // str r1, [r5, r0]
    sub_02030CC8(*((u32*)(r5 + (0xaf << 2))), *((u32*)r0));
    // str r0, [r5, r1]
    sub_02030E08(*((u32*)(r5 + ((0xb << 6) - 4))), (0xb << 6));
    // str r0, [r5, r1]
    // add r2, #0x20
    *((u8*)(r5 + 9)) = *((u8*)(r4 + 4));
    // sub r1, #8
    // str r2, [r5, r0]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + (0xb1 << 2))), (0xb1 << 2), r4);
    // str r0, [r5, r1]
    // add r3, #8
    // str r2, [r5, r0]
    // sub r2, #0x10
    // str r3, [r5, r2]
    // add r3, #0xc
    // sub r2, #0xc
    // str r3, [r5, r2]
    // add r3, #0x10
    // sub r2, #8
    // str r3, [r5, r2]
    // add r3, #0x14
    // str r3, [r5, r2]
    *((u8*)(r5 + 0x11)) = 0xff;
    // add r0, #0x5e
    // strh r2, [r5, r0]
    Save_Frontier_GetStatic(*((u32*)(r5 + ((0xae << 2) + 4))), (0xae << 2), *((u16*)(r4 + 0x28)), r4);
    *((u32*)(r5 + 4)) = r0;
    // add r1, r5, r3
    // strb r2, [r1, r0]
    ov80_02237D8C(*((u8*)(r5 + 9)), 1, (0 + 1));
    *((u8*)(r5 + 0x14)) = 4;
    *((u8*)(r5 + 0x15)) = 4;
    *((u8*)(r5 + 0xc)) = (*((u8*)(r5 + 0x15)) - 1);
    // strb r1, [r5, r0]
    ov83_02243FD4(r5, 0);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    sub_02096910(r5);
}




void ov83_02243108(void) {
    OverlayManager_GetData();
    // strb r2, [r4, r1]
    ov83_02245074(0x000005B6, 0);
    ov83_022459A0(r4);
    ov83_0224753C(*((u32*)(r4 + 0x00000504)));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    Options_GetFrame(*((u32*)(r4 + (0xae << 2))), (*((u8*)(r4 + 0xf)) & ~(1)));
    // add r0, #0xc0
    ov83_02247944(r4, r0);
    ov80_0222A7CC(*((u32*)(r4 + 0x24)), 0);
    ov83_022448AC(r4, 7, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02244CD4(r4, r5, 3);
    // strb r1, [r4, r0]
    ov83_02245074(r4, 0);
    ov83_022459A0(r4);
    ov83_02244CD4(r4, r5, 2);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022431B4: ; jump table
    ov83_022432B4(r4);
    ov83_02244CD4(r4, r5, 1);
    ov83_022433F8(r4);
    ov83_02244CD4(r4, r5, 2);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_02244CD4(r4, r5, 3);
    ov83_02244CD4(r4, r5, 4);
    ov83_02243C88(r4);
    ov83_02244CD4(r4, r5, 1);
    ov83_02243D7C(r4);
    ov83_02244CD4(r4, r5, 4);
    ov83_02243DE8(r4);
    ov83_022459AC(r4);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + (0xb2 << 2))));
}




void ov83_02243268(void) {
    OverlayManager_GetData();
    // strh r1, [r0]
    // strh r1, [r0]
    GF_DestroyVramTransferManager(0x04000050, 0);
    ov83_02243E30(r4);
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x6b);
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void ov83_022432B4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022432CC: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov83_022433B8(void) {
}




void ov83_022433F8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224340E: ; jump table
    *((u8*)(r0 + 0xb)) = 0;
    *((u8*)(r0 + 8)) = 1;
    // add r0, #0xc0
    ov83_02245094(r0, (*((u16*)(*((u8*)(r0 + 8)) + 6)) << 0x10));
    ov83_02244BEC(r4);
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02244C9C(r4);
    ov83_02247630(*((u32*)(r4 + (0x15 << 6))), 0xc8, 0x69);
    *((u8*)(r4 + 8)) = 6;
    *((u8*)(r4 + 8)) = 0xe;
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(0xf8));
    ov83_02247AD4(*((u32*)(r4 + (0x5f << 4))), (*((u8*)(r4 + 0xf)) & ~(0xf8)));
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022434A8: ; jump table
    // mvn r1, r1
    ov83_02244C4C(r4, 1);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    ov83_02247B04(*((u32*)(r4 + (0x5f << 4))), *((u8*)(r4 + 0xd)));
    ov83_022469D8(r4, 4, *((u8*)(r4 + 0xd)));
    TouchscreenListMenu_HandleInput(*((u32*)(r4 + 0x000005F8)));
    ov83_022477B0(0x000005DC);
    ov83_02246CC0(r4);
    // mvn r0, r0
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02243528: ; jump table
    // mvn r0, r0
    *((u8*)(r4 + 0x13)) = r5;
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    ov83_02244C88(r4, *((u32*)(r4 + 0x0000054C)));
    ov83_022453C0(r4);
    // str r1, [sp]
    ov83_02244A98(r4, 0, 1, 4);
    ov83_022448AC(r4, 0x10, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02244A74(r4);
    *((u8*)(r4 + 8)) = 3;
    ov83_02244C88(r4);
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x0000055C)), r0);
    ov83_022453C0(r4);
    Mon_GetBoxMon(r5);
    ov83_02244AB0(r4, 0, r0);
    ov83_022448AC(r4, 0x14, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0x10;
    *((u8*)(r4 + 0x13)) = r5;
    ov83_02244C88(r4);
    ov83_022453C0(r4);
    ov83_02244AB0(r4, 0, *((u32*)(r4 + (0x17 << 6))));
    ov83_022448AC(r4, 0x15, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02244A88(r4);
    *((u8*)(r4 + 8)) = 4;
    ov83_02244C88(r4);
    ov83_02244C9C(r4);
    *((u8*)(r4 + 8)) = 6;
    ov83_02244C88(r4);
    ov83_02244BEC(r4);
    *((u8*)(r4 + 8)) = 0;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x00000604)));
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    // add r0, #0xc0
    ov83_02245094(r4);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_022453C0(r4);
    ov83_022448AC(r4, 0x1c, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0x10;
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), 1);
    // add r1, #0x50
    ov83_022453DC(r4, r4);
    ov83_02245748(r4, *((u8*)(r4 + 0xd)));
    ov83_02246988(r4);
    ov83_02246114(r4, 0);
    *((u8*)(r4 + 8)) = 0xb;
    *((u8*)(r4 + 0x10)) = 1;
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
    TouchscreenListMenu_HandleInput(*((u32*)(r4 + 0x000005F8)));
    ov83_022477B0(0x000005DC);
    // mvn r0, r0
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02244A90(r4);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_02244A90(r4);
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    ov83_022453C0(r4, *((u32*)(r4 + (0x55 << 4))));
    ov83_022448AC(r4, 0x1d, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0x10;
    ov83_02245554(r4, 1);
    *((u8*)(r4 + 8)) = 5;
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_02244A90(r4);
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    ov83_022453C0(r4, *((u32*)(r4 + (0x55 << 4))));
    ov83_022448AC(r4, 0x1e, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0x10;
    ov83_02245554(r4, 2);
    *((u8*)(r4 + 8)) = 5;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x00000604)));
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_02245068(*((u8*)(r4 + 0xe)));
    ov83_022453C0(r4);
    ov83_022448AC(r4, 0x1c, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0x10;
    *((u8*)(r4 + 0x12)) = *((u8*)(r4 + 0xe));
    ov80_02237D8C(*((u8*)(r4 + 9)));
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02245068(*((u8*)(r4 + 0xe)));
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), r0);
    // add r1, #0x50
    ov83_022453DC(r4, r4);
    ov83_02245838(r4, *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0xe)));
    *((u8*)(r4 + 8)) = 0xc;
    *((u8*)(r4 + 0x10)) = 1;
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
    TouchscreenListMenu_HandleInput(*((u32*)(r4 + 0x000005F8)));
    ov83_022477B0(0x000005DC);
    ov83_02246D40(r4);
    // mvn r0, r0
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02244CCC(r4);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
    *((u8*)(r4 + 0x13)) = r5;
    ov83_02244CCC(r4);
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    ov83_022453C0(r4, *((u32*)(r4 + 0x00000554)));
    // str r1, [sp]
    ov83_02244A98(r4, 0, 2, 4);
    ov83_022448AC(r4, 0x2b, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02244A74(r4);
    *((u8*)(r4 + 8)) = 7;
    *((u8*)(r4 + 8)) = 0x11;
    *((u8*)(r4 + 0x13)) = r5;
    ov83_02244CCC(r4);
    ov83_0224777C(*((u32*)(r4 + (0xaf << 2))), *((u8*)(r4 + 9)), 2);
    ov83_022448AC(r4, 0x2a, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0xf;
    ov83_02247768(*((u8*)(r4 + 0x14)), *((u8*)(r4 + 0xd)));
    ov83_022453C0(r4, *((u32*)(r4 + 0x00000558)));
    // str r1, [sp]
    ov83_02244A98(r4, 0, 5, 4);
    ov83_022448AC(r4, 0x4f, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02244A74(r4);
    *((u8*)(r4 + 8)) = 8;
    *((u8*)(r4 + 8)) = 0x12;
    ov83_0224777C(*((u32*)(r4 + (0xaf << 2))), *((u8*)(r4 + 9)), 2);
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02244CCC(r4);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
    *((u8*)(r4 + 0x13)) = r5;
    ov83_02244CCC(r4);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    // str r1, [sp]
    ov83_02244A98(r4, 0, 0x32, 4);
    ov83_022448AC(r4, 0x5b, 1);
    *((u8*)(r4 + 0xa)) = r0;
    ov83_02244A74(r4);
    *((u8*)(r4 + 8)) = 9;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x00000604)));
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    ov83_02245A40(r4, 2, 0x2e);
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    ov83_02244C9C(r4);
    *((u8*)(r4 + 8)) = 6;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x00000604)));
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    ov83_02245A40(r4, 5, 0x52);
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    ov83_02244C9C(r4);
    *((u8*)(r4 + 8)) = 6;
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x00000604)));
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C1F0(*((u8*)(r4 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r4 + 4)), r5, r0);
    ov83_0224777C(*((u32*)(r4 + (0xaf << 2))), *((u8*)(r4 + 9)), 2);
    Options_GetFrame(*((u32*)(r4 + (0xae << 2))));
    // add r0, #0xc0
    ov83_02247944(r4, r0);
    ov83_022448AC(r4, 0x52, 1);
    *((u8*)(r4 + 0xa)) = r0;
    *((u8*)(r4 + 8)) = 0xf;
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_02245ACC(r4, *((u8*)(r4 + 0xd)), 5);
    *((u8*)(r4 + 8)) = 0xa;
    *((u8*)(r4 + 0x10)) = 1;
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
    ov83_02244C9C(r4);
    *((u8*)(r4 + 8)) = 6;
    ov83_02247CF0(6);
    ov83_02244C9C(r4);
    ov83_02246114(r4, 0);
    ov83_02247630(*((u32*)(r4 + (0x15 << 6))), 0xc8, 0x69);
    *((u8*)(r4 + 8)) = 6;
    // add r1, #0x80
    ov83_022448E4(6, r4);
    *((u8*)(r4 + 8)) = 0xc;
    ov83_02244E24(r4, *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 0x10;
    ov83_02244E24(0x10, *((u8*)(r4 + 0xd)), *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 0xe;
    *((u8*)(r4 + 8)) = 0x11;
    *((u8*)(r4 + 8)) = 0x12;
    ov83_02247CF0(0x12);
    PlaySE(0x000005DC);
    ov83_02244C9C(r4);
    *((u8*)(r4 + 8)) = 6;
    ov83_02247CF0(6);
    PlaySE(0x000005DC);
    // add r0, #0xc0
    ov83_02245094(r4);
    ov83_02244BEC(r4);
    *((u8*)(r4 + 8)) = 0;
    // tst r0, r1
    // tst r0, r1
    ov83_02247CF0(0x10, *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DC);
    ov83_022459A0(r4);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
    // tst r0, r1
    // tst r0, r1
    ov83_02247CF0(0x10, *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DC);
    ov83_022459A0(r4);
    ov83_02244C58(r4);
    *((u8*)(r4 + 8)) = 2;
}




void ov83_02243C88(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02243C9E: ; jump table
    *((u8*)(r0 + 0xf)) = (8 | (*((u8*)(r0 + 0xf)) & ~(0xf8)));
    ov83_022450A8(0x15, *((u8*)(r0 + 0xd)));
    *((u8*)(r4 + 0x10)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x17)) = 0;
    ov83_02245ACC((*((u8*)(r4 + 8)) + 1), *((u8*)(r4 + 0x11)), 5);
    ov83_0224563C();
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov83_0224776C(*((u8*)(r4 + 0x15)), *((u8*)(r4 + 0x11)));
    ov83_02244E24(r4, r0, *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 0x16)) = 0x1e;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x16)) = (*((u8*)(r4 + 0x16)) - 1);
    sub_02037BEC(*((u8*)(r4 + 0x16)));
    sub_02037AC0(0x85);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    sub_02037B38(0x85);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov83_0224776C(*((u8*)(r4 + 0x15)), *((u8*)(r4 + 0x11)));
    ov83_02244F60(r4, r0, *((u8*)(r4 + 0x13)));
    sub_02037BEC();
    sub_020379A0(0x6b);
    *((u8*)(r4 + 0x11)) = 0xff;
    // strb r1, [r4, r0]
}




void ov83_02243D7C(void) {
    // add r4, #0xc0
}




void ov83_02243DE8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov83_02243E30(void) {
    // str r0, [sp]
    // add r0, r0, r1
    ov83_02247858(0x00000604);
    // ldr r0, [sp]
    ov83_02247CC4(*((u32*)(r0 + 0x000005F4)), 0x000005F4);
    // ldr r0, [sp]
    ov83_02247A18(*((u32*)(r0 + (0x5f << 4))), (0x5f << 4));
    // ldr r0, [sp]
    ov83_0224753C(*((u32*)(r0 + 0x00000508)), 0x00000508);
    // ldr r0, [sp]
    ov83_0224753C(*((u32*)(r0 + 0x0000050C)), 0x0000050C);
    // ldr r0, [sp]
    ov83_0224753C(*((u32*)(r0 + (0x15 << 6))), (0x15 << 6));
    // ldr r0, [sp]
    ov83_0224753C(*((u32*)(r0 + 0x00000544)), 0x00000544);
    // ldr r7, [sp]
    // str r0, [sp, #4]
    ov83_0224753C(*((u32*)(r7 + (0x52 << 4))));
    // ldr r0, [sp, #4]
    // add r7, #8
    // str r0, [sp, #4]
    // ldr r0, [sp]
    ov80_02237B58(*((u8*)((r0 + 1) + 9)), 1);
    // ldr r4, [sp]
    ov83_0224753C(*((u32*)(r4 + 0x000004F4)));
    ov83_0224753C(*((u32*)(r4 + 0x000004E4)));
    ov83_0224753C(*((u32*)(r4 + r7)));
    sub_0203A914();
    // ldr r0, [sp]
    PaletteData_FreeBuffers(*((u32*)(r0 + (0x2b << 4))), 2);
    // ldr r0, [sp]
    PaletteData_FreeBuffers(*((u32*)(r0 + (0x2b << 4))), 0);
    // ldr r0, [sp]
    PaletteData_Free(*((u32*)(r0 + (0x2b << 4))), (0x2b << 4));
    // ldr r0, [sp]
    // str r2, [r0, r1]
    // add r1, #0x18
    // add r0, r0, r1
    ov83_022471FC((0x2b << 4), 0);
    // ldr r0, [sp]
    DestroyMsgData(*((u32*)(r0 + 0x20)));
    // ldr r0, [sp]
    MessageFormat_Delete(*((u32*)(r0 + 0x24)));
    // ldr r0, [sp]
    String_Delete(*((u32*)(r0 + 0x28)));
    // ldr r0, [sp]
    String_Delete(*((u32*)(r0 + 0x2c)));
    // ldr r0, [sp]
    MessagePrinter_Delete(*((u32*)(r0 + (0xad << 2))), (0xad << 2));
    FontID_Release(4);
    // ldr r4, [sp]
    String_Delete(*((u32*)(r4 + 0x30)));
    // ldr r0, [sp]
    // add r0, #0x50
    ov83_0224791C(1);
    // ldr r0, [sp]
    ov83_0224442C(*((u32*)(r0 + 0x4c)));
    // ldr r0, [sp]
    NARC_Delete(*((u32*)(r0 + (0x56 << 4))), (0x56 << 4));
}




void ov83_02243F9C(void) {
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
}




void ov83_02243FD4(void) {
    NARC_New(0xb7, 0x6b);
    // str r0, [r5, r1]
    ov83_02244394(r5, (0x56 << 4));
    ov83_02244408(r5);
    FontID_Alloc(4, 0x6b);
    NewMsgDataFromNarc(1, 0x1b, 0x21, 0x6b);
    *((u32*)(r5 + 0x20)) = r0;
    MessageFormat_New(0x6b);
    *((u32*)(r5 + 0x24)) = r0;
    String_New((0x96 << 2), 0x6b);
    *((u32*)(r5 + 0x28)) = r0;
    String_New((0x96 << 2), 0x6b);
    *((u32*)(r5 + 0x2c)) = r0;
    String_New(0x20, 0x6b);
    *((u32*)(r4 + 0x30)) = r0;
    LoadFontPal0(0, (7 << 6), 0x6b);
    LoadFontPal1(0, (0x1a << 4), 0x6b);
    MessagePrinter_New(1, 2, 0, 0x6b);
    // str r0, [r5, r1]
    // add r1, #0x50
    ov83_022478D4(*((u32*)(r5 + 0x4c)), r5, 1);
    // add r0, sp, #0x28
    // add r1, sp, #0x2c
    // add r3, sp, #0x28
    // str r0, [sp]
    // add r1, #2
    // add r2, sp, #0x2c
    // add r3, #2
    ov83_02244DF4(r5);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    ov80_02237B58(*((u8*)(r5 + 9)), 1);
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    ov83_02247454((0xb2 << 2), 0, 0, 0);
    // str r0, [r4, r1]
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    ov83_02247454((0xb2 << 2), 0, 0, 0);
    // str r0, [r4, r1]
    // str r0, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    // add r1, #0xa
    ov83_02247454((0xb2 << 2), r6, 0xa, 5);
    // str r0, [r4, r1]
    // add r0, #0x78
    Party_GetMonByIndex(*((u32*)(r5 + 0x000004E4)), r6);
    ov83_022475EC(*((u32*)(r4 + 0x000004E4)), r0);
    ov83_0224755C(*((u32*)(r4 + 0x000004F4)), 1);
    ov83_0224755C(*((u32*)(r4 + 0x000004E4)), 0);
    ov83_0224755C(*((u32*)(r4 + (0x51 << 4))), 0);
    ov83_0224755C(*((u32*)(r4 + r0)), 0);
    ov83_0224755C(*((u32*)(r4 + 0x000004E4)), 1);
    ov83_0224755C(*((u32*)(r4 + (0x51 << 4))), 1);
    // ldr r0, [sp, #0x1c]
    // add r0, #0x40
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r7, #0x40
    // add r1, sp, #0x34
    // add r2, sp, #0x30
    ov83_02244DA0(r5, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454((0xb2 << 2), 0, 0, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // ldr r1, [sp, #0x34]
    // asr r1, r1, #0x10
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x30]
    // asr r1, r1, #0x10
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454((0xb2 << 2), 0, 0, 0);
    // str r0, [r5, r1]
    ov80_02237D8C(*((u8*)(r5 + 9)), 0x0000050C);
    ov83_0224755C(*((u32*)(r5 + 0x0000050C)), 0);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x24]
    // ldr r4, [sp, #0x24]
    // add r1, sp, #0x34
    // add r2, sp, #0x30
    ov83_02245CE8(r5);
    // str r0, [sp]
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x20]
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // add r0, r0, r6
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    ov83_02247454((0xb2 << 2), 0, 0, 0);
    // str r0, [r4, r1]
    ov83_0224755C(*((u32*)(r4 + (0x52 << 4))), 0);
    // add r6, #0xc
    // ldr r0, [sp, #0x20]
    // add r0, #0x40
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r0, #8
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    ov83_02245C80(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // str r1, [sp, #0x10]
    ov83_02247454((0xb2 << 2), 0, 0, 0);
    // str r0, [r5, r1]
    ov83_0224755C(*((u32*)(r5 + (0x15 << 6))), 0);
    ov83_02245D48(r5);
    ov83_02245F24(r5);
    ov83_02246114(r5, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r0, r5, r0
    ov83_022474C4((0xb2 << 2), 2, 2, 2);
    // str r0, [r5, r1]
    ov83_02246988(r5, 0x00000544);
    ov83_02247A7C(r5, 1, *((u8*)(r5 + 0x14)));
    // str r0, [r5, r1]
    // sub r1, #0x18
    ov83_02247CB8(*((u32*)(r5 + (0xb2 << 2))), *((u32*)(r5 + (0xb2 << 2))));
    // str r0, [r5, r1]
    // add r1, #0x10
    // add r0, r5, r1
    ov83_02247844(0x000005F4);
    sub_02037474();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    sub_0203A880();
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0xe, 6);
    Main_SetVBlankIntrCB(ov83_02244488, r5);
}




void ov83_02244394(void) {
    // and r0, r1
    // strh r0, [r2]
    ov83_022444C0(0xFFFF7FFF, *((u16*)0x04000304), 0x04000304);
    ov83_022444E0(*((u32*)(r4 + 0x4c)));
    PaletteData_Init(0x6b);
    // str r0, [r4, r1]
    PaletteData_AllocBuffers(*((u32*)(r4 + (0x2b << 4))), 2, (2 << 8), 0x6b);
    // sub r2, #0xb0
    PaletteData_AllocBuffers(*((u32*)(r4 + (0x2b << 4))), 0, (0x2b << 4), 0x6b);
    ov83_0224465C(r4, 3);
    ov83_022446D0();
    ov83_02244704(r4, 2);
    ov83_0224474C();
    GfGfx_EngineATogglePlanes(4, 0);
    ov83_02244780(r4, 4);
}




void ov83_02244408(void) {
    ov80_02237D8C(*((u8*)(r0 + 9)));
    // add r0, r4, r0
    ov83_02246E08((0xb2 << 2), *((u32*)(r4 + 0x0000055C)), ((r0 << 0x18) >> 0x18));
}




void ov83_0224442C(void) {
    GfGfx_EngineATogglePlanes(0x1f, 0);
    GfGfx_EngineBTogglePlanes(0x1f, 0);
    FreeBgTilemapBuffer(r4, 3);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 0);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 5);
    Heap_Free(r4);
    // strh r0, [r2]
}




void ov83_02244488(void) {
    PaletteData_PushTransparentBuffers(*((u32*)(r0 + (0x2b << 4))));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x4c)));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}




void ov83_022444C0(void) {
}




void ov83_022444E0(void) {
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BG_ClearCharDataRange(2, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BG_ClearCharDataRange(3, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BG_ClearCharDataRange(5, 0x20, 0, 0x6b);
    BgClearTilemapBufferAndCommit(r4, 5);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(2, 1, (*((u16*)0x04000008) & ~(3)));
}




void ov83_0224465C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov83_022446D0(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov83_02244704(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov83_0224474C(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov83_02244780(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov83_022447E0(void) {
    // add r1, sp, #0x38
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
}




void ov83_0224484C(void) {
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // add r0, sp, #0x30
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x34
}




void ov83_022448AC(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r1, #0xc0
    // add r5, #0xc0
}




void ov83_022448E4(void) {
    FillWindowPixelBuffer(r1, 0);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    ov80_02237B58(*((u8*)(r5 + 9)), 1);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // add r0, #0x18
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0x20
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0, ((r6 << 0x10) >> 0x10), 1);
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000055C)), r7);
    // str r0, [sp, #0x18]
    GetMonData(0xa3, 0);
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    PrintUIntOnWindow(*((u32*)(r5 + (0xad << 2))), r0, 3, 1);
    // str r0, [sp]
    // ldr r3, [sp, #0x14]
    sub_0200CDAC(*((u32*)(r5 + (0xad << 2))), 0, r4);
    // ldr r0, [sp, #0x18]
    GetMonData(0xa4, 0);
    // ldr r0, [sp, #0x10]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PrintUIntOnWindow(*((u32*)(r5 + (0xad << 2))), r0, 3, 0);
    // ldr r0, [sp, #0x14]
    // add r0, #0x40
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r6, #0x40
    // add r0, #0x40
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    ScheduleWindowCopyToVram(r4);
}




void ov83_022449D4(void) {
    // str r1, [sp, #0x10]
    FillWindowPixelBuffer(r1, 0);
    ov80_02237D8C(*((u8*)(r5 + 9)));
    ov80_02237B58(*((u8*)(r5 + 9)), 1);
    // str r0, [sp, #0x14]
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000055C)), 0);
    // str r0, [sp, #0x18]
    GetMonData(0xa1, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    sub_0200CE7C(*((u32*)(r5 + (0xad << 2))), 1, r0, 3);
    // ldr r0, [sp, #0x18]
    GetMonData(0x6f, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    ov83_02244BA8(r5, 0, r6, 1);
    // ldr r0, [sp, #0x14]
    // add r4, #0x40
    // add r6, #0x40
    // ldr r0, [sp, #0x10]
    ScheduleWindowCopyToVram();
}




void ov83_02244A74(void) {
    // add r0, r1, r0
}




void ov83_02244A88(void) {
}




void ov83_02244A90(void) {
}




void ov83_02244A98(void) {
}




void ov83_02244AB0(void) {
}




void ov83_02244ABC(void) {
    // ldr r0, [r5, r0]
}




void ov83_02244AD8(void) {
    // str r2, [sp, #0x10]
    Save_PlayerData_GetProfile(*((u32*)(r0 + (0xaf << 2))), (0xaf << 2));
    String_New(8, 0x6b);
    PlayerProfile_GetNamePtr(r6);
    CopyU16ArrayToString(r4, r0);
    PlayerProfile_GetTrainerGender(r6);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldr r3, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(r7, *((u8*)((0xc1 << 0xa) + 0x10)), r4);
    String_Delete(r4);
}




void ov83_02244B40(void) {
    // str r2, [sp, #0x18]
    sub_0203769C();
    // eor r0, r1
    sub_02034818(1);
    // str r0, [sp, #0x1c]
    PlayerProfile_GetTrainerGender();
    // ldr r2, [sp, #0x1c]
    BufferPlayersName(*((u32*)(r5 + 0x24)), 0);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    ov83_0224484C(r5, r7, 1);
}




void ov83_02244BA8(void) {
    // add r3, sp, #0x20
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r6, [sp, #0x10]
    // add r2, sp, #0x20
    // str r2, [sp, #0x14]
}




void ov83_02244BEC(void) {
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r1, #0x60
    // add r0, #0xd0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xd0
    // str r3, [sp, #0x14]
}




void ov83_02244C4C(void) {
}




void ov83_02244C58(void) {
    // add r0, #0xc0
    // mvn r1, r1
    // str r1, [r4, r0]
}




void ov83_02244C88(void) {
}




void ov83_02244C9C(void) {
    // add r0, #0xc0
    // mvn r1, r1
    // str r1, [r4, r0]
}




void ov83_02244CCC(void) {
}




void ov83_02244CD4(void) {
}




void ov83_02244CDC(void) {
    PlaySE(0x000005DC);
    ov80_02237D8C(*((u8*)(r4 + 9)));
    ov83_022450A8(r4, 0x16, *((u8*)(r4 + 0xd)));
    ov83_02244D0C(r4, *((u8*)(r4 + 0xd)), 0);
}




void ov83_02244D0C(void) {
    ov83_022475D4(*((u32*)(r0 + 0x0000050C)), 0x11, 2);
    ov83_02247568(r4, 0xe0, 0xa0);
    ov83_02246938(r5, 0);
    ov83_022475D4(r4, r2);
    // add r1, sp, #4
    // add r2, sp, #0
    ov83_02244DA0(r5, r7);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov83_02247568(r4, ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10));
    ov83_02246938(r5, 1);
    ov83_0224691C(r5, 0);
}




void ov83_02244DA0(void) {
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r6]
}




void ov83_02244DF4(void) {
    // ldr r4, [sp, #0x18]
    // strh r0, [r5]
    // strh r0, [r6]
    // strh r0, [r7]
    // strh r0, [r4]
    // strh r1, [r5]
    // strh r1, [r6]
    // strh r0, [r7]
    // strh r1, [r4]
}




void ov83_02244E24(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x0000055C)), r0);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244E50: ; jump table
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (1 | (*((u8*)(r4 + 0xf)) & ~(1)));
    ov80_02237D8C(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0xf)) & ~(1)));
    // add r0, r1, r0
    // str r5, [sp]
    // asr r0, r0, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // str r1, [sp, #0x10]
    ov83_02247454((0xb2 << 2), 0, 0, 0);
    // str r0, [r4, r1]
    ov83_02247624(*((u32*)(r4 + 0x00000504)), 0x00000504);
    ov83_0224753C(*((u32*)(r4 + 0x00000504)));
    // str r1, [r4, r0]
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    ov80_02237D8C(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0xf)) & ~(1)));
    ov83_02246114(r4, 0);
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    ov80_02237D8C(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0xf)) & ~(1)));
    ov83_02246114(r4, 0);
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
}




void ov83_02244F60(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x0000055C)), r0);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244F88: ; jump table
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    ov83_02246114(r4, 0);
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    ov80_02237D8C(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0xf)) & ~(1)));
    sub_0203769C();
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (0x18 | (*((u8*)(r4 + 0xf)) & ~(0xf8)));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    ov80_02237D8C(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0xf)) & ~(1)));
    sub_0203769C();
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
    *((u8*)(r4 + 0xf)) = (0x18 | (*((u8*)(r4 + 0xf)) & ~(0xf8)));
    *((u8*)(r4 + 0xf)) = (*((u8*)(r4 + 0xf)) & ~(1));
}




void ov83_02245068(void) {
    // cmp r0, #1
    // bne _02245070
    // mov r0, #1
    // bx lr
    // mov r0, #0xf
    // bx lr
    // TODO: decompile
}




void ov83_02245074(void) {
    // add r0, #0xc0
}




void ov83_02245094(void) {
}




void ov83_022450A8(void) {
    // sub r3, #0x14
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _022450C0: ; jump table
    ov83_02245104((*((u16*)(r1 + 6)) << 0x10));
    ov83_0224517C();
    ov83_02245210();
    ov83_02245248();
    // add r1, r5, r1
    sub_02037030(r4, 0x00000564, 0x28);
}




void ov83_02245104(void) {
    Save_PlayerData_GetProfile(*((u32*)(r0 + (0xaf << 2))));
    // strh r4, [r6, r1]
    PlayerProfile_GetTrainerGender(0x00000564);
    // strh r0, [r6, r1]
    ov83_0224777C(*((u32*)(r6 + (0xaf << 2))), *((u8*)(r6 + 9)), ((0 << 0x18) >> 0x18));
    // strh r0, [r5, r7]
}




void ov83_0224514C(void) {
    *((u8*)(r3 + 0x17)) = (*((u8*)(r3 + 0x17)) + 1);
    sub_0203769C((*((u8*)(r3 + 0x17)) + 1));
    // add r1, r4, r3
    // strb r2, [r1, r0]
}




void ov83_0224517C(void) {
    // strh r1, [r5, r0]
    // strh r4, [r5, r0]
    sub_0203769C((0x00000564 + 2));
    *((u8*)(r5 + 0x11)) = r4;
    // strh r1, [r5, r0]
    // strh r2, [r5, r1]
    // strh r1, [r5, r0]
}




void ov83_022451B8(void) {
    *((u8*)(r3 + 0x17)) = (*((u8*)(r3 + 0x17)) + 1);
    sub_0203769C((*((u8*)(r3 + 0x17)) + 1));
    // strb r1, [r4, r0]
    sub_0203769C(0x000005B5, *((u16*)(r5 + 2)));
    // strb r1, [r4, r0]
    // add r0, r1, r0
    *((u8*)(r4 + 0x11)) = *((u8*)(r4 + 0x15));
    *((u8*)(r4 + 0x12)) = *((u16*)(r5 + 8));
    *((u8*)(r4 + 0x13)) = *((u16*)(r5 + 0xa));
    *((u8*)(r4 + 0x11)) = *((u16*)(r5 + 4));
    *((u8*)(r4 + 0x12)) = *((u16*)(r5 + 8));
    *((u8*)(r4 + 0x13)) = *((u16*)(r5 + 0xa));
}




void ov83_02245210(void) {
    // strh r1, [r0, r2]
    // strh r3, [r0, r1]
}




void ov83_02245220(void) {
    sub_0203769C();
    // strb r0, [r4, r1]
    ov83_02244D0C(r4, *((u8*)(r4 + 0x000005B4)), 1);
}




void ov83_02245248(void) {
    // strh r2, [r0, r1]
}




void ov83_02245254(void) {
}




void ov83_02245270(void) {
}




void ov83_02245288(void) {
    Options_GetFrame(*((u32*)(r0 + (0xae << 2))));
    // add r0, #0xc0
    ov83_02247944(r5, r0);
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000055C)), r0);
    Mon_GetBoxMon();
    ov83_02244AB0(r5, 0, r0);
    ov83_022448AC(r5, 0x2f, 1);
    *((u8*)(r5 + 0xa)) = r0;
    ov83_02245270(r5, r4);
    ov83_02245C80(r5);
    ov83_02245D48(r5);
    ov83_02246114(r5, 0);
    PlaySE(0x00000623);
}




void ov83_02245300(void) {
}




void ov83_02245318(void) {
    Options_GetFrame(*((u32*)(r0 + (0xae << 2))));
    // add r0, #0xc0
    ov83_02247944(r5, r0);
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000055C)), r0);
    Mon_GetBoxMon();
    ov83_02244AB0(r5, 0, r0);
    ov83_022448AC(r5, 0x53, 1);
    *((u8*)(r5 + 0xa)) = r0;
    ov83_02245300(r5, r4);
    ov83_02245C80(r5);
    ov83_02245D48(r5);
    ov83_02246114(r5, 0);
    PlaySE(0x00000623);
}




void ov83_02245390(void) {
    TouchscreenListMenu_DestroyButtons(*((u32*)(r0 + 0x000005F8)));
    ov83_02246C70(r4);
    // add r0, r4, r0
    ov83_022478B4(0x00000604);
}




void ov83_022453C0(void) {
    // add r4, #0xc0
}




void ov83_022453DC(void) {
    // add r1, sp, #0x1c
    // str r1, [sp]
    // add r1, sp, #0x20
    // add r3, sp, #0x1c
    // add r1, #2
    // add r2, sp, #0x20
    // add r3, #2
    ov83_02244DF4();
    ov80_02237D8C(*((u8*)(r5 + 9)));
    // add r1, sp, #0x1c
    // add r0, #0x48
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0, ((*((u16*)(r1 + 6)) << 0x10) >> 0x10), (((*((u16*)(r1 + 4)) + 1) << 0x10) >> 0x10));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    // str r0, [sp, #0x18]
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    // ldr r1, [sp, #0x18]
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r0);
    // str r1, [sp]
    ov83_02244A98(r5, 0, r0, 4);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov83_0224484C(r5, r4, 2, r7);
    *((u8*)(r5 + 0xa)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0, 0x40, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0, 0xc0, 0);
    sub_0203769C();
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r6, r0);
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C1F0(*((u8*)(r5 + 9)));
    sub_0205C268();
    FrontierSave_GetStat(*((u32*)(r5 + 4)), r7, r0);
    // str r1, [sp]
    ov83_02244A98(r5, 0, r6, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_02245D08(r5, r4, *((u32*)(r5 + 0x20)), 2);
    // str r1, [sp]
    ov83_02244A98(r5, 0, r7, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_02245D08(r5, r4, *((u32*)(r5 + 0x20)), 3);
    ScheduleWindowCopyToVram(r4);
}




void ov83_02245554(void) {
    // str r1, [sp]
}




void ov83_02245584(void) {
    // add r1, sp, #4
    // str r1, [sp]
    // add r1, sp, #8
    // add r3, sp, #4
    // add r1, #2
    // add r2, sp, #8
    // add r3, #2
    // str r0, [sp]
    // add r3, sp, #4
    // add r2, sp, #4
    // str r0, [sp]
    // str r0, [sp]
    // add r3, sp, #4
    // str r0, [sp]
    // str r0, [sp]
    // add r3, sp, #4
}




void ov83_0224563C(void) {
    PlaySE(0x000005E3);
    // str r0, [sp]
    ov83_0224776C(*((u8*)(r4 + 0x15)), r7);
    // str r0, [sp, #4]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02245668: ; jump table
    ov83_02245068(*((u8*)(r4 + 0x12)));
    sub_0203769C();
    // ldr r0, [sp]
    ov83_02244ABC(r4, 5);
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), r5);
    ov83_022477C4(*((u32*)(r4 + 0x24)), 5);
    // sub r1, r1, r5
    // strh r1, [r4, r0]
    // ldr r0, [sp]
    ov83_022477C4(*((u32*)(r4 + 0x24)), 5);
    // sub r1, r1, r5
    // strh r1, [r4, r0]
    ov83_02244ABC(r4, 5);
    ov80_02237FA4(*((u32*)(r4 + 4)), *((u8*)(r4 + 9)), r5);
    // add r1, #0x50
    ov83_022453DC(r4, r4);
    ov83_02245390(r4);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02245704: ; jump table
    // ldr r1, [sp, #4]
    ov83_02245824(r4);
    // ldr r1, [sp, #4]
    ov83_02245838(r4, *((u8*)(r4 + 0x12)));
    // ldr r1, [sp, #4]
    ov83_02245288(r4);
    // ldr r1, [sp, #4]
    ov83_02245318(r4);
}




void ov83_02245748(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000055C)), r0);
    Options_GetFrame(*((u32*)(r5 + (0xae << 2))));
    // add r0, #0xc0
    ov83_02247944(r5, r0);
    Mon_GetBoxMon(r6);
    ov83_02244AB0(r5, 0, r0);
    ov83_022448AC(r5, 0x14, 1);
    *((u8*)(r5 + 0xa)) = r0;
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    // strb r2, [r1, r0]
    ov83_02247768(*((u8*)(r5 + 0x14)), r4, 1);
    // add r1, r5, r0
    ov83_0224755C(*((u32*)(r1 + 0x000004F4)), 0);
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    // add r1, r5, r0
    ov83_0224755C(*((u32*)(r1 + 0x000004E4)), 1);
    // add r1, #0x70
    ov83_022449D4(r5, r5);
    ov83_02245D48(r5);
    ov83_02246114(r5, 0);
    ov83_02246988(r5);
    ov83_02247768(*((u8*)(r5 + 0x14)), r4);
    // add r1, r5, r0
    ov83_0224755C(*((u32*)(r1 + (0x51 << 4))), 1);
    PlaySE(0x00000623);
}




void ov83_02245824(void) {
}




void ov83_02245838(void) {
    Options_GetFrame(*((u32*)(r0 + (0xae << 2))));
    // add r0, #0xc0
    ov83_02247944(r5, r0);
    ov83_02247768(*((u8*)(r5 + 0x14)), r6);
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000055C)), r0);
    Mon_GetBoxMon();
    ov83_02244AB0(r5, 0, r0);
    ov83_022448AC(r5, 0x1f, 1);
    *((u8*)(r5 + 0xa)) = r0;
    PlaySE(0x00000632);
    ov83_022448AC(r5, 0x20, 1);
    *((u8*)(r5 + 0xa)) = r0;
    PlaySE(0x00000633);
    ov83_02247768(*((u8*)(r5 + 0x14)), r6);
    ov83_02247768(*((u8*)(r5 + 0x14)), r6);
    // strb r7, [r1, r0]
    ov83_02247768(r6);
    // strb r2, [r1, r0]
    ov83_02247768(*((u8*)(r5 + 0x14)), r6, 0);
    GetMonData(r4, 5, 0);
    GetMonExpBySpeciesAndLevel(0x32);
    // str r0, [sp]
    // add r2, sp, #0
    SetMonData(r4, 8);
    CalcMonLevelAndStats(r4);
    ov83_02247768(*((u8*)(r5 + 0x14)), r6);
    GetMonData(r4, 5, 0);
    GetMonExpBySpeciesAndLevel(0x37);
    // str r0, [sp]
    // add r2, sp, #0
    SetMonData(r4, 8);
    CalcMonLevelAndStats(r4);
    GetMonData(r4, 5, 0);
    GetMonExpBySpeciesAndLevel(0x2d);
    // str r0, [sp]
    // add r2, sp, #0
    SetMonData(r4, 8);
    CalcMonLevelAndStats(r4);
    // add r1, #0x80
    ov83_022448E4(r5, r5);
    // add r1, #0x70
    ov83_022449D4(r5, r5);
    ov83_02245D48(r5);
    ov83_02246114(r5, 0);
}




void ov83_022459A0(void) {
}




void ov83_022459AC(void) {
    ov80_02237B24(*((u8*)(r0 + 9)), 1);
    // str r0, [sp]
    Party_GetMonByIndex(*((u32*)(r6 + 0x0000055C)), 0);
    // str r0, [sp, #4]
    GetMonData(0xa3, 0);
    // ldr r0, [sp, #4]
    GetMonData(0xa4, 0);
    ov80_0222A43C(((r7 << 0x10) >> 0x10), ((r0 << 0x10) >> 0x10));
    ov83_02247600(*((u32*)(r5 + 0x000004E4)), r0);
    ov83_02247768(*((u8*)(r6 + 0x14)), *((u8*)(r6 + 0xd)));
    ov83_0224760C(*((u32*)(r5 + 0x000004E4)), 0);
    ov83_0224760C(*((u32*)(r5 + 0x000004E4)), 1);
    // ldr r0, [sp]
}




void ov83_02245A40(void) {
    // add r0, #0xc0
    // add r1, #0x50
}




void ov83_02245ACC(void) {
    ov80_02237B24(*((u8*)(r0 + 9)), 0);
    GF_AssertFail();
    ov83_0224776C(*((u8*)(r5 + 0x15)), r4);
    sub_0203769C();
    ov83_02244ABC(r5, 5);
    ov83_0224777C(*((u32*)(r5 + (0xaf << 2))), *((u8*)(r5 + 9)), r6);
    ov80_02237FA4(*((u32*)(r5 + 4)), *((u8*)(r5 + 9)), 0x32);
    ov83_0224777C(*((u32*)(r5 + (0xaf << 2))), *((u8*)(r5 + 9)), r6);
    Save_Frontier_GetStatic(*((u32*)(r5 + (0xaf << 2))));
    sub_0205C174(*((u8*)(r5 + 9)), r6);
    // str r0, [sp]
    sub_0205C174(*((u8*)(r5 + 9)), r6);
    sub_0205C268();
    // ldr r1, [sp]
    sub_02031108(r7, r0, (((r4 + 1) << 0x10) >> 0x10));
    ov80_02237D8C(*((u8*)(r5 + 9)));
    *((u8*)(r5 + 0xf)) = (0x10 | (*((u8*)(r5 + 0xf)) & ~(0xf8)));
    ov83_022477C4(*((u32*)(r5 + 0x24)), 5);
    // add r0, r5, r1
    // sub r2, #0x32
    // strh r2, [r5, r1]
    // strb r1, [r0, r6]
    ov83_022477C4(*((u32*)(r5 + 0x24)), 5, *((u16*)(r5 + (0x000005B7 + 3))));
    // add r0, r5, r1
    // sub r2, #0x32
    // strh r2, [r5, r1]
    // strb r1, [r0, r6]
    ov83_02244ABC(r5, 5, *((u16*)(r5 + (0x000005B7 + 3))));
    ov83_0224777C(*((u32*)(r5 + (0xaf << 2))), *((u8*)(r5 + 9)), r6);
    ov80_02237FA4(*((u32*)(r5 + 4)), *((u8*)(r5 + 9)), 0x32);
    ov83_0224777C(*((u32*)(r5 + (0xaf << 2))), *((u8*)(r5 + 9)), r6);
    Save_Frontier_GetStatic(*((u32*)(r5 + (0xaf << 2))));
    sub_0205C174(*((u8*)(r5 + 9)), r6);
    // str r0, [sp, #4]
    sub_0205C174(*((u8*)(r5 + 9)), r6);
    sub_0205C268();
    // ldr r1, [sp, #4]
    sub_02031108(r7, r0, (((r4 + 1) << 0x10) >> 0x10));
    ov80_02237D8C(*((u8*)(r5 + 9)));
    *((u8*)(r5 + 0xf)) = (0x10 | (*((u8*)(r5 + 0xf)) & ~(0xf8)));
    ov83_02245390(r5, (*((u8*)(r5 + 0xf)) & ~(0xf8)));
    // add r1, #0x50
    ov83_022453DC(r5, r5);
    Options_GetFrame(*((u32*)(r5 + (0xae << 2))));
    // add r0, #0xc0
    ov83_02247944(r5, r0);
    // add r1, r1, r3
    ov83_022448AC(r5, *((u16*)((r4 << 1) + ov83_02248054)), 1, (r6 * 6));
    *((u8*)(r5 + 0xa)) = r0;
}




void ov83_02245C80(void) {
}




void ov83_02245CA8(void) {
    // add r1, r5, r1
    // sub r0, #0x34
    ov83_0224755C(*((u32*)((r1 << 3) + 0x00000554)), 1);
    // add r1, r5, r1
    // sub r0, #0x34
    ov83_0224755C(*((u32*)((r4 << 3) + 0x00000558)), 1);
}




void ov83_02245CE8(void) {
}




void ov83_02245D08(void) {
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
}




void ov83_02245D48(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)), *((u8*)(r0 + 0xd)));
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000055C)), r0);
    AcquireMonLock();
    // str r0, [sp, #4]
    // str r6, [r5, r0]
    Mon_GetBoxMon(r6);
    // str r0, [r5, r1]
    GetMonData(r6, 5, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa1, 0);
    // strb r0, [r5, r1]
    GetMonData(r6, 0xa, 0);
    // strb r0, [r5, r1]
    GetMonNature(r6, 0x000005C8);
    // strb r0, [r5, r1]
    GetMonData(r6, 6, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa3, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa4, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa5, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa8, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa6, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa9, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0xa7, 0);
    // strh r0, [r5, r1]
    GetMonData(r6, 0x70, 0);
    // strb r0, [r5, r1]
    GetMonData(r6, 0, 0);
    // str r0, [r5, r1]
    GetMonData(r6, 0xb0, 0);
    // strb r2, [r5, r1]
    // strb r0, [r5, r1]
    GetMonGender(r6, 0x000005C6, *((u8*)(r5 + 0x000005C6)));
    // and r0, r2
    // strb r0, [r5, r3]
    // add r0, r5, r0
    // str r0, [sp]
    // add r1, #0x36
    GetMonData(r6, 0, 0, 0x000005C6);
    // ldr r2, [sp]
    // strh r0, [r2, r1]
    // add r1, #0x3a
    // add r7, r5, r4
    GetMonData(r6, r4, 0);
    // strb r0, [r7, r1]
    // add r1, #0x3e
    GetMonData(r6, r4, 0);
    // ldr r2, [sp]
    GetMoveMaxPP(*((u16*)(r2 + (0x5e << 4))), ((((r0 << 0x10) >> 0x10) << 0x18) >> 0x18));
    // strb r0, [r7, r1]
    // ldr r1, [sp, #4]
    ReleaseMonLock(r6, 0x000005EC);
}




void ov83_02245F24(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer((0x13 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x15 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x17 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x19 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1b << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1d << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x1f << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x21 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x23 << 4), 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x25 << 4), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x13 << 4), *((u32*)(r4 + 0x20)), 0x42, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x15 << 4), *((u32*)(r4 + 0x20)), 0x34, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x17 << 4), *((u32*)(r4 + 0x20)), 0x32, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x19 << 4), *((u32*)(r4 + 0x20)), 0x30, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x1b << 4), *((u32*)(r4 + 0x20)), 0x43, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x1d << 4), *((u32*)(r4 + 0x20)), 0x36, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x1f << 4), *((u32*)(r4 + 0x20)), 0x3a, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x21 << 4), *((u32*)(r4 + 0x20)), 0x38, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x23 << 4), *((u32*)(r4 + 0x20)), 0x3c, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r0
    ov83_022479E4((0x25 << 4), *((u32*)(r4 + 0x20)), 0x3e, 0);
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x13 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x15 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x17 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x19 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1b << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1d << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x1f << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x21 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x23 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x25 << 4));
}




void ov83_02246114(void) {
    // str r1, [sp, #0x14]
    ov83_0224777C(*((u32*)(r0 + (0xaf << 2))), *((u8*)(r0 + 9)), 2);
    ov83_02247768(*((u8*)(r5 + 0x14)), *((u8*)(r5 + 0xd)));
    // add r0, r5, r0
    FillWindowPixelBuffer((0x11 << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x12 << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((5 << 6), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x16 << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((6 << 6), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x1a << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((7 << 6), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x1e << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((2 << 8), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x22 << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((9 << 6), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x26 << 4), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x27 << 4), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x12 << 4), *((u32*)(r5 + 0x20)), 0x40, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x12 << 4), *((u32*)(r5 + 0x20)), 0x41, 0);
    // str r1, [sp]
    ov83_02244A98(r5, 0, *((u8*)(r5 + 0x000005C7)), 3);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (5 << 6), *((u32*)(r5 + 0x20)), 0x48);
    // add r0, #0x70
    Mon_GetBoxMon(*((u32*)(r5 + 0x0000054C)), *((u8*)(*((u32*)(r5 + 0x0000054C)) + r4)));
    BufferBoxMonSpeciesName(*((u32*)(r5 + 0x24)), 0, r0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (0x11 << 4), *((u32*)(r5 + 0x20)), 0x45);
    // str r1, [sp]
    ov83_02244A98(r5, 0, *((u16*)(r5 + (0x5d << 4))), 3);
    // str r0, [sp]
    ov83_02244A98(r5, 1, *((u16*)(r5 + 0x000005D2)), 3);
    // add r0, r5, r0
    GetWindowWidth((7 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (7 << 6), *((u32*)(r5 + 0x20)), 0x4e);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x11 << 4), *((u32*)(r5 + 0x20)), 0x4b, 0);
    // add r0, r5, r0
    GetWindowWidth((7 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((7 << 6), *((u32*)(r5 + 0x20)), 0x4d, (r0 << 3));
    // add r2, #0x74
    BufferAbilityName(*((u32*)(r5 + 0x24)), 0, *((u8*)(r5 + 0x00000554)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (0x16 << 4), *((u32*)(r5 + 0x20)), 0x35);
    BufferNatureName(*((u32*)(r5 + 0x24)), 0, *((u8*)(r5 + 0x000005C9)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (6 << 6), *((u32*)(r5 + 0x20)), 0x33);
    BufferItemName(*((u32*)(r5 + 0x24)), 0, *((u16*)(r5 + 0x000005CA)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (0x1a << 4), *((u32*)(r5 + 0x20)), 0x31);
    // str r1, [sp]
    ov83_02244A98(r5, 0, *((u16*)(r5 + 0x000005D4)), 3);
    // add r0, r5, r0
    GetWindowWidth((0x1e << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (0x1e << 4), *((u32*)(r5 + 0x20)), 0x37);
    // str r1, [sp]
    ov83_02244A98(r5, 0, *((u16*)(r5 + 0x000005D6)), 3);
    // add r0, r5, r0
    GetWindowWidth((2 << 8));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (1 << 9), *((u32*)(r5 + 0x20)), 0x3b);
    // str r1, [sp]
    ov83_02244A98(r5, 0, *((u16*)(r5 + 0x000005D8)), 3);
    // add r0, r5, r0
    GetWindowWidth((0x22 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (0x22 << 4), *((u32*)(r5 + 0x20)), 0x39);
    // str r1, [sp]
    ov83_02244A98(r5, 0, *((u16*)(r5 + 0x000005DA)), 3);
    // add r0, r5, r0
    GetWindowWidth((9 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (9 << 6), *((u32*)(r5 + 0x20)), 0x3d);
    // str r1, [sp]
    ov83_02244A98(r5, 0, *((u16*)(r5 + 0x000005DC)), 3);
    // add r0, r5, r0
    GetWindowWidth((0x26 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    ov83_02245D08(r5, (0x26 << 4), *((u32*)(r5 + 0x20)), 0x3f);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x16 << 4), *((u32*)(r5 + 0x20)), 0x4b, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((6 << 6), *((u32*)(r5 + 0x20)), 0x4b, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x1a << 4), *((u32*)(r5 + 0x20)), 0x4b, 0);
    // add r0, r5, r0
    GetWindowWidth((0x1e << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x1e << 4), *((u32*)(r5 + 0x20)), 0x4a, (r0 << 3));
    // add r0, r5, r0
    GetWindowWidth((2 << 8));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((1 << 9), *((u32*)(r5 + 0x20)), 0x4a, (r0 << 3));
    // add r0, r5, r0
    GetWindowWidth((0x22 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x22 << 4), *((u32*)(r5 + 0x20)), 0x4a, (r0 << 3));
    // add r0, r5, r0
    GetWindowWidth((9 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((9 << 6), *((u32*)(r5 + 0x20)), 0x4a, (r0 << 3));
    // add r0, r5, r0
    GetWindowWidth((0x26 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x26 << 4), *((u32*)(r5 + 0x20)), 0x4a, (r0 << 3));
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x27 << 4), *((u32*)(r5 + 0x20)), 0x4c, 0);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x27 << 4), *((u32*)(r5 + 0x20)), 0x4b, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x20)), 0x44);
    FontID_String_GetWidth(0, r0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov83_02247998((0x27 << 4), r7, 0x78, r4);
    String_Delete(r7);
    NewString_ReadMsgData(*((u32*)(r5 + 0x20)), 0x49);
    FontID_String_GetWidth(0, r0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r2, r2, r6
    // sub r2, r2, r3
    // add r0, r5, r0
    ov83_02247998((0x27 << 4), r7, 0x78, r4);
    String_Delete(r7);
    // add r6, #0x78
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x27 << 4), *((u32*)(r5 + 0x20)), 0x49, r6);
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // add r7, r5, r0
    BufferMoveName(*((u32*)(r5 + 0x24)), 0, *((u16*)(r7 + (0x5e << 4))));
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r5, r1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r3, #0x54
    ov83_02245D08(r5, (0x27 << 4), *((u32*)(r5 + 0x20)), r4);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov83_022479E4((0x27 << 4), *((u32*)(r5 + 0x20)), 0x5a, 0x78);
    NewString_ReadMsgData(*((u32*)(r5 + 0x20)), 0x44);
    FontID_String_GetWidth(0, r0, 0);
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov83_02247998((0x27 << 4), r7, 0x78);
    String_Delete(r7);
    // add r0, r5, r4
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    ov83_02244A98(r5, 0, *((u8*)(r3 + 0x000005E8)), 2);
    NewString_ReadMsgData(*((u32*)(r5 + 0x20)), 0x59);
    StringExpandPlaceholders(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r0);
    FontID_String_GetWidth(0, *((u32*)(r5 + 0x28)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, r3, r6
    // sub r2, r3, r2
    // ldr r3, [sp, #0x1c]
    // add r0, r5, r0
    ov83_02247998((0x27 << 4), *((u32*)(r5 + 0x28)), r0, 0x78);
    String_Delete(r7);
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    ov83_02244A98(r5, 0, *((u8*)(r3 + 0x000005EC)), 2);
    // add r6, #0x78
    // ldr r0, [sp, #0x1c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r5, r1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov83_02245D08(r5, (0x27 << 4), *((u32*)(r5 + 0x20)), 0x59);
    // ldr r0, [sp, #0x14]
    // add r5, #0x50
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0xc << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x11 << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x12 << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((5 << 6));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x16 << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((6 << 6));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x1a << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((7 << 6));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x1e << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((2 << 8));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x22 << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((9 << 6));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x26 << 4));
    // add r0, r5, r0
    CopyWindowPixelsToVram_TextMode((0x27 << 4));
}




void ov83_0224691C(void) {
}




void ov83_02246938(void) {
    // add r5, r6, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
    ov83_0224755C(*((u32*)(r6 + 0x00000544)), 1);
    // add r4, r6, r0
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r4, #0x10
    ov83_0224755C(*((u32*)(r6 + 0x00000544)), 0);
}




void ov83_02246988(void) {
    ov83_02247768(*((u8*)(r0 + 0x14)), *((u8*)(r0 + 0xd)));
    // sub r0, #8
    // add r1, #0x74
    // add r3, #0x80
    ov83_02247668(*((u32*)(r4 + 0x0000054C)), *((u32*)(r4 + 0x0000054C)), 0, *((u32*)(r4 + 0x0000054C)));
    // add r2, #0x78
    // sub r0, #8
    // add r1, #0x74
    // add r3, #0x80
    ov83_02247668(*((u32*)(r4 + r3)), *((u32*)(r4 + r3)), *((u16*)(r4 + r3)), *((u32*)(r4 + r3)));
}




void ov83_022469D8(void) {
}




void ov83_022469E4(void) {
    // add r0, sp, #4
    // add r0, #2
    // add r1, sp, #4
    ov83_02247988();
    // add r1, sp, #4
    // add r3, sp, #8
    *((u16*)(r1 + 0x1c)) = *((u16*)ov83_02248018);
    *((u16*)(r1 + 0x1e)) = *((u16*)(ov83_02248018 + 2));
    *((u16*)(r1 + 0x20)) = *((u16*)(ov83_02248018 + 4));
    *((u16*)(r1 + 0x22)) = *((u16*)(ov83_02248018 + 6));
    *((u16*)(r1 + 0x24)) = *((u16*)(ov83_02248018 + 8));
    *((u16*)(r1 + 0x26)) = *((u16*)(ov83_02248018 + 0xa));
    *((u16*)(r1 + 0x22)) = *((u16*)(r1 + 2));
    // add r0, r0, r2
    // sub r0, #0x1b
    *((u16*)(r1 + 0x24)) = *((u16*)(r1 + 2));
    *((u16*)(r1 + 0x26)) = *((u16*)r1);
    *((u16*)(r1 + 4)) = *((u16*)(r1 + 0x1c));
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 0x1e));
    *((u16*)(r1 + 8)) = *((u16*)(r1 + 0x20));
    *((u16*)(r1 + 0xa)) = *((u16*)(r1 + 0x22));
    *((u16*)(r1 + 0xc)) = *((u16*)(r1 + 0x24));
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 0x26));
    // sub r0, #8
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    *((u8*)(r1 + 0x18)) = r4;
    // add r1, sp, #0x30
    // str r1, [sp]
    ov83_02247CCC(*((u32*)(r5 + 0x000005FC)), r3, r6, r7);
    // str r0, [r5, r1]
    *((u8*)(r5 + 0xf)) = (4 | *((u8*)(r5 + 0xf)));
    ov80_02237B24(*((u8*)(r5 + 9)), 1);
    // add r0, r5, r0
    ov83_0224773C(0x000004E4, r0, 1);
    // add r0, r5, r0
    ov83_0224773C(0x000004F4, r4, 1);
}




void ov83_02246AA4(void) {
    ListMenuItems_New(4, 0x6b);
    // str r0, [r5, r1]
    ov83_0224777C(*((u32*)(r5 + (0xaf << 2))), *((u8*)(r5 + 9)), 2);
    ov83_02247768(*((u8*)(r5 + 0x14)), *((u8*)(r5 + 0xd)));
    // add r0, #0xb0
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x0000054C)), *((u32*)(r5 + 0x20)), 8, r4);
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x000005FC)), *((u32*)(r5 + 0x20)), 9, 1);
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x000005FC)), *((u32*)(r5 + 0x20)), 0xa, 2);
    // sub r3, #0xd
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x000005FC)), *((u32*)(r5 + 0x20)), 0xb, 0xb);
    // str r0, [sp]
    ov83_022469E4(r5, (((((r4 + 1) << 0x10) >> 0x10) << 0x18) >> 0x18), 0x11, *((u8*)(ov83_02248010 + (((r4 + 1) << 0x10) >> 0x10))));
}




void ov83_02246B6C(void) {
    ListMenuItems_New(4, 0x6b);
    // str r0, [r5, r1]
    ov83_0224777C(*((u32*)(r5 + (0xaf << 2))), *((u8*)(r5 + 9)), 2);
    ov83_02247768(*((u8*)(r5 + 0x14)), *((u8*)(r5 + 0xd)));
    // add r0, #0xa8
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x00000554)), *((u32*)(r5 + 0x20)), 0x21, 3);
    // add r0, #0xa4
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x00000558)), *((u32*)(r5 + 0x20)), 0x22, 4);
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x000005FC)), *((u32*)(r5 + 0x20)), 0x23, 5);
    // sub r3, #0x26
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x000005FC)), *((u32*)(r5 + 0x20)), 0x24, 0x24);
    // str r0, [sp]
    ov83_022469E4(r5, (((((r4 + 1) << 0x10) >> 0x10) << 0x18) >> 0x18), 0x11, *((u8*)(ov83_02248010 + (((r4 + 1) << 0x10) >> 0x10))));
}




void ov83_02246C2C(void) {
    ListMenuItems_New(3, 0x6b);
    // str r0, [r5, r1]
    // add r2, #0x16
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x000005FC)), *((u32*)(r5 + 0x20)), 0, 0);
    // str r0, [sp]
    ov83_022469E4(r5, 3, 0x11, 8);
}




void ov83_02246C70(void) {
    ov80_02237B24(*((u8*)(r0 + 9)), 1);
    // add r0, r5, r0
    ov83_0224773C(0x000004E4, r0, 0);
    // add r0, r5, r0
    ov83_0224773C(0x000004F4, r4, 0);
    ov83_02247CE8(*((u32*)(r5 + 0x000005F8)));
    ListMenuItems_Delete(*((u32*)(r5 + 0x000005FC)));
    *((u8*)(r5 + 0xf)) = (*((u8*)(r5 + 0xf)) & ~(4));
}




void ov83_02246CC0(void) {
    // add r0, #0x24
    // add r3, #8
    // add r0, r1, r0
    // mvn r0, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xc0
    // str r3, [sp, #0x14]
    ov83_022447E0(r0, r0, 0xf, 1);
    // add r0, #8
    // add r1, #0x24
    // str r1, [r4, r0]
}




void ov83_02246D40(void) {
    // sub r0, #8
    // add r0, #0x24
    ov83_0224777C(*((u32*)(r0 + (0xaf << 2))), *((u8*)(r0 + 9)), 2);
    // add r2, #0x24
    // add r0, r0, r2
    // mvn r0, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xc0
    // str r3, [sp, #0x14]
    ov83_022447E0(r5, r5, *((u16*)(ov83_02248030 + ((((0 << 1) << 1) << 1) << 1))), 1);
    // add r0, #8
    // add r1, #0x24
    // str r1, [r5, r0]
}




void ov83_02246E08(void) {
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    GF_CreateVramTransferManager(0x20, 0x6b);
    ov83_022472DC();
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x80, 0, 0x20);
    G2dRenderer_Init(0x28, (r5 + 4), 0x6b);
    // str r0, [r5]
    Create2DGfxResObjMan(*((u8*)ov83_02248178), 0, 0x6b);
    // str r0, [r6, r1]
    ov83_022473BC(r5, (0x4b << 2));
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    AddCharResObjFromNarc(*((u32*)(r5 + 0x6b)), 0xb8, 0xf, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x6b)), 0xb8, 0x37, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x6b)), 0xb8, 0x11, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x6b)), 0xb8, 0x10, 1);
    // str r0, [r5, r1]
    NARC_New(0x12, 0x6b);
    // add r6, #0x40
    GetItemIndexMapping(0, 1);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    AddCharResObjFromOpenNarc(*((u32*)(r5 + 0x6b)), r7, r0, 0);
    // str r0, [r6, r1]
    GetItemIndexMapping(0, 2);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x6b)), 0x12, r0, 0);
    // str r0, [r6, r1]
    // add r6, #0x10
    GetItemIconCell((5 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x6b)), r7, r0, 0);
    // str r0, [r5, r1]
    GetItemIconAnim((0x61 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x6b)), r7, r0, 0);
    // str r0, [r5, r1]
    GetItemIndexMapping(0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x6b)), 0x12, r0, 0);
    // str r0, [r5, r1]
    NARC_Delete(r7, (0x17 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    AddCharResObjFromNarc(*((u32*)(r5 + 0x6b)), 0xb8, 0x24, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x6b)), 0xb8, 0x26, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x6b)), 0xb8, 0x25, 1);
    // str r0, [r5, r1]
    ov83_02247314(r5, (0x5e << 2));
    NARC_New(0x14, 0x6b);
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x6b)), 0x14, r0, 0);
    // str r0, [r5, r1]
    sub_02074498((0x1e << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x6b)), r7, r0, 0);
    // str r0, [r5, r1]
    sub_020744A4((0x79 << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x6b)), r7, r0, 0);
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(0);
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(r4);
    // ldr r0, [sp, #0x14]
    Party_GetMonByIndex(r4);
    Pokemon_GetIconNaix();
    // add r0, #0xa
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    AddCharResObjFromOpenNarc(*((u32*)(r5 + 0x6b)), r7, r0, 0);
    // str r0, [r6, r1]
    // add r6, #0x10
    NARC_Delete(r7, (0x77 << 2));
    sub_0200ACF0(*((u32*)(r5 + (0x4f << 2))));
    // add r4, #0x10
    sub_0200AF94(*((u32*)(r5 + (5 << 6))));
    // add r5, #0x10
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
}




void ov83_0224714C(void) {
    // str r3, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x98]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // str r6, [sp, #0x18]
    // add r6, #8
    // add r0, #0xc
    // str r6, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x24]
    // str r5, [sp, #0x28]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // ldr r0, [sp, #0x94]
    // str r0, [sp, #0x50]
    // add r0, sp, #0x80
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x80
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    // ldr r1, [sp, #0x90]
}




void ov83_022471FC(void) {
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
}




void ov83_02247264(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc1
}




void ov83_022472A0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc5
}




void ov83_022472DC(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_InitEx(r3, 0x10, 0x00100010);
    ObjPlttTransfer_Init(0x20, 0x6b);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov83_02247314(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    // str r0, [r5, r1]
}




void ov83_022473BC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc1
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xc5
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc9
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xcd
    // str r0, [r5, r1]
}




void ov83_02247454(void) {
    // str r3, [sp, #0x10]
    // strb r1, [r4]
    // add r0, sp, #0x28
    // ldrsh r2, [r0, r2]
    // ldr r3, [sp, #0x10]
    // strh r2, [r4]
    // ldrsh r0, [r0, r2]
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, sp, #0x28
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // add r1, sp, #0x14
    // str r0, [sp, #0x18]
}




void ov83_022474C4(void) {
    // str r3, [sp, #0x10]
    // strb r1, [r4]
    // add r0, sp, #0x28
    // ldrsh r2, [r0, r2]
    // ldr r3, [sp, #0x10]
    // strh r2, [r4]
    // ldrsh r0, [r0, r2]
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x28
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x14]
    // ldrsh r1, [r1, r0]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x14
}




void ov83_0224753C(void) {
}




void ov83_0224755C(void) {
}




void ov83_02247568(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov83_0224759C(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #4]
}




void ov83_022475D4(void) {
}




void ov83_022475EC(void) {
}




void ov83_02247600(void) {
}




void ov83_0224760C(void) {
}




void ov83_02247624(void) {
}




void ov83_02247630(void) {
    ov83_022475D4(0xb);
    ov83_02247568(r5, r4, r6);
    ov83_0224755C(r5, 1);
    PlaySE(0x000005E3);
    PlaySE(0x00000655);
}




void ov83_02247668(void) {
    // add r2, sp, #0x20
    // str r1, [sp, #0x14]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    Heap_AllocAtEnd(0x6b, (0x32 << 6), ov83_0224818C);
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x30
    GetBoxmonSpriteCharAndPlttNarcIds(2, 0);
    // str r4, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // add r1, sp, #0x1c
    // add r3, sp, #0x20
    sub_02014510(*((u16*)(r1 + 0x14)), *((u16*)(r1 + 0x16)), 0x6b);
    // add r0, sp, #0x1c
    // str r0, [sp]
    // add r3, sp, #0x1c
    GfGfxLoader_GetCharData(0xb8, 0x27, 1);
    // ldr r0, [sp, #0x1c]
    MIi_CpuCopy32(*((u32*)(r0 + 0x14)), r4, (0x32 << 6));
    Heap_Free(r6);
    Sprite_GetImageProxy(*((u32*)(r5 + 4)));
    NNS_G2dGetImageLocation(2);
    // str r0, [sp, #0x18]
    DC_FlushRange(r4, (0x32 << 6));
    // ldr r1, [sp, #0x18]
    GXS_LoadOBJ(r4, (0x32 << 6));
    Sprite_GetPaletteProxy(*((u32*)(r5 + 4)));
    NNS_G2dGetImagePaletteLocation(2);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(r7, r6, 5, r0);
    Heap_Free(r4);
}




void ov83_0224773C(void) {
}




void ov83_02247768(void) {
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}




void ov83_0224776C(void) {
    // sub r0, r1, r0
}




void ov83_0224777C(void) {
}




void ov83_022477B0(void) {
}




void ov83_022477C4(void) {
    // eor r0, r1
}




void ov83_022477E4(void) {
}




void ov83_022477EC(void) {
    // lsl r1, r5
    // sub r0, #0x10
    // eor r0, r1
    // lsl r4, r5
    // and r0, r3
    // str r0, [r2]
}




void ov83_0224780C(void) {
    // lsr r1, r0
    // and r0, r6
}




void ov83_02247844(void) {
}




void ov83_02247858(void) {
}




void ov83_02247864(void) {
    // add r0, sp, #0
    // add r0, #2
    // add r1, sp, #0
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, sp, #4
}




void ov83_022478B4(void) {
}




void ov83_022478D4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // ldr r0, [sp]
    // add r1, r5, r6
    // add r2, r2, r3
    AddWindow(ov83_0224819C, (r2 << 3), (0 << 3));
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
}




void ov83_0224791C(void) {
    // add r0, r6, r0
    RemoveWindow((0 << 4), (r1 << 3));
}




void ov83_02247944(void) {
    GetWindowBgId();
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), r0, 0x000003D9, 0xa);
    FillWindowPixelBuffer(r4, 0xf);
    DrawFrameAndWindow2(r4, 1, 0x000003D9, 0xa);
    ScheduleWindowCopyToVram(r4);
}




void ov83_02247988(void) {
    // strh r2, [r1]
    // strh r1, [r0]
}




void ov83_02247998(void) {
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    // sub r5, r5, r0
    // ldr r0, [sp, #0x28]
    // sub r5, r5, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov83_022479E4(void) {
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
}




void ov83_02247A18(void) {
}




void ov83_02247A20(void) {
    // bx lr
    // TODO: decompile
}




void ov83_02247A24(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov83_02248530, ov83_022485A8, ov83_02248500, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov83_02248558, ov83_022485E8, ov83_02248500);
}




void ov83_02247A7C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov83_02248530, ov83_022485A8, ov83_02248510, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov83_02248558, ov83_022485E8, ov83_02248510);
}




void ov83_02247AD4(void) {
    GridInputHandler_HandleInput_NoHold();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247AEC: ; jump table
}




void ov83_02247B04(void) {
}




void ov83_02247B1C(void) {
    // ldr r3, _02247B2C ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B30 ; =ov83_02242AB4
    // bx r3
    // nop
    // _02247B2C: .word ov83_02248544
    // _02247B30: .word ov83_02242AB4
    // TODO: decompile
}




void ov83_02247B34(void) {
    // ldr r3, _02247B44 ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B48 ; =ov83_02242AB4
    // bx r3
    // nop
    // _02247B44: .word ov83_02248544
    // _02247B48: .word ov83_02242AB4
    // TODO: decompile
}




void ov83_02247B4C(void) {
    // ldr r3, _02247B5C ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B60 ; =ov83_022469D8
    // bx r3
    // nop
    // _02247B5C: .word ov83_02248544
    // _02247B60: .word ov83_022469D8
    // TODO: decompile
}




void ov83_02247B64(void) {
    // ldr r3, _02247B74 ; =ov83_02248544
    // lsl r1, r1, #2
    // lsl r2, r2, #2
    // ldr r1, [r3, r1]
    // ldr r2, [r3, r2]
    // ldr r3, _02247B78 ; =ov83_022469D8
    // bx r3
    // nop
    // _02247B74: .word ov83_02248544
    // _02247B78: .word ov83_022469D8
    // TODO: decompile
}




void ov83_02247B7C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov83_022485C8, ov83_02248610, ov83_02248520, r0);
    ov83_02242AC0(r4, 0x40, 0x34, 3);
    ov83_02242AE0(r4, 0);
}




void ov83_02247BC4(void) {
    GridInputHandler_HandleInput_NoHold();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247BDE: ; jump table
    // tst r0, r1
    GridInputHandler_GetNextInput(r4, *((u32*)(gSystem + 0x48)));
    // tst r0, r1
    GridInputHandler_GetNextInput(r4, *((u32*)(gSystem + 0x48)));
    TouchscreenHitbox_FindRectAtTouchNew(ov83_022484F4, (7 << 2));
    // mvn r0, r0
}




void ov83_02247C58(void) {
    ov83_02242AC0(*((u8*)(ov83_02248610 + (r1 << 3))), *((u8*)(ov83_02248611 + (r1 << 3))), *((u32*)(ov83_02248570 + (r1 << 2))));
    ov83_02242AE0(r5, r4);
}




void ov83_02247C88(void) {
    ov83_02242AC0(*((u8*)(ov83_02248610 + (r1 << 3))), *((u8*)(ov83_02248611 + (r1 << 3))), *((u32*)(ov83_02248570 + (r1 << 2))));
    ov83_02242AE0(r5, r4);
}




void ov83_02247CB8(void) {
}




void ov83_02247CC4(void) {
}




void ov83_02247CCC(void) {
}




void ov83_02247CE8(void) {
}




void ov83_02247CF0(void) {
}



