/* Decompiled from asm/unk_02014DA0.s */
#include "global.h"

void sub_02014DA0(void) {
    // stmia r2!, {r0}
}




SPLEmitter * sub_02014DB4(void) {
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    Heap_Alloc(0, 0xdc);
    GF_AssertFail();
    memset(r4, 0, 0xdc);
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x18)) = r7;
    *((u32*)(r4 + 0x1c)) = r0;
    // ldmia r3!, {r0, r1}
    // add r2, #0x34
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, #0x40
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, #0x4c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r2, [sp, #0xc]
    memset(r6, 0, r4, _020F6084);
    // ldr r0, [sp, #0xc]
    *((u32*)(r4 + 0xc)) = r6;
    *((u32*)(r4 + 0x10)) = r6;
    // add r0, r6, r0
    *((u32*)(r4 + 0x14)) = r0;
    // add r0, #0xda
    // strb r5, [r0]
    // str r4, [r0, r5]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    Camera_New(_021D10A8);
    *((u32*)(r4 + 0x20)) = r0;
    *((u32*)(r4 + 0x24)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    *((u16*)(r4 + 0x30)) = (2 << 0xc);
    // str r3, [sp]
    // str r0, [sp, #4]
    Camera_Init_FromTargetAndPos(_020F6084, _020F6090, *((u16*)(r4 + 0x30)), 0);
    // add r0, #0xdb
    // strb r1, [r0]
    Camera_SetStaticPtr(*((u32*)(r4 + 0x20)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    SPL_Init(*((u32*)(_020F609C + r5)), 0x14, 0xc8, 5);
    // str r0, [r4]
    sub_020154E4(r4, _020F6078);
}




void sub_02014EBC(void) {
    sub_020154B8();
    // add r0, #0xd8
    // tst r0, r1
    // add r0, #0x58
    NNS_GfdSetFrmTexVramState(r5, *((u8*)r5));
    // tst r0, r1
    NNS_GfdFreeLnkTexVram(*((u32*)(r5 + 0x58)));
    *((u32*)(r4 + 0x58)) = r7;
    // add r0, #0xd8
    // tst r0, r1
    // add r0, #0x98
    NNS_GfdSetFrmPlttVramState(r5, *((u8*)r5));
    // tst r0, r1
    // add r0, #0x98
    NNS_GfdFreeLnkPlttVram(*((u32*)r5));
    // add r0, #0x98
    // str r7, [r0]
    // add r0, #0xd8
    // strb r1, [r0]
    *((u32*)(r5 + 8)) = 0;
    Heap_Free(*((u32*)(r5 + 4)), 0);
    *((u32*)(r5 + 4)) = 0;
    // str r2, [r0, r1]
    Camera_Delete(*((u32*)(r5 + 0x20)), ((0 << 2) + 1), (0 + 4));
    Heap_Free(r5);
}




void sub_02014F84(void) {
}




void sub_02014FA4(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 8)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 8)) + 0x14)), 4, r0);
}




void sub_02014FD0(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0xc)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0xc)) + 0x14)), 4, r0);
}




void sub_02014FFC(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x10)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x10)) + 0x14)), 4, r0);
}




void sub_02015028(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x14)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x14)) + 0x14)), 4, r0);
}




void sub_02015054(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x18)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x18)) + 0x14)), 4, r0);
}




void sub_02015080(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x1c)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x1c)) + 0x14)), 4, r0);
}




void sub_020150AC(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x20)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x20)) + 0x14)), 4, r0);
}




void sub_020150D8(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x24)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x24)) + 0x14)), 4, r0);
}




void sub_02015104(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x28)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x28)) + 0x14)), 4, r0);
}




void sub_02015130(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x2c)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x2c)) + 0x14)), 4, r0);
}




void sub_0201515C(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x30)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x30)) + 0x14)), 4, r0);
}




void sub_02015188(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x34)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x34)) + 0x14)), 4, r0);
}




void sub_020151B4(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x38)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x38)) + 0x14)), 4, r0);
}




void sub_020151E0(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x3c)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x3c)) + 0x14)), 4, r0);
}




void sub_0201520C(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x40)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x40)) + 0x14)), 4, r0);
}




void sub_02015238(void) {
    // add r0, r4, r0
    // and r3, r2
    // sub r2, r2, r3
    // add r0, r0, r2
    *((u32*)(*((u32*)(_021D10A0 + 0x44)) + 0x10)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)(_021D10A0 + 0x44)) + 0x14)), 4, r0);
}




void sub_02015264(void) {
}




void sub_0201526C(void) {
    GF_AssertFail(*((u32*)r0));
    GF_AssertFail(*((u32*)(r5 + 4)));
    // add r0, #0xd8
    // strb r4, [r0]
    // tst r0, r4
    // add r0, #0x58
    NNS_GfdGetFrmTexVramState(r5);
    // tst r0, r4
    *((u32*)(r5 + 0x58)) = 0;
    // tst r0, r4
    // add r0, #0x98
    NNS_GfdGetFrmPlttVramState(r5, (0 + 1), (r5 + 4));
    // tst r0, r4
    // add r0, #0x98
    // str r1, [r0]
    *((u32*)(r5 + 4)) = r6;
    sub_02015300(r5, 0, (0 + 1), (r5 + 4));
    SysTask_CreateOnVWaitQueue(sub_02015340, r5, 5);
}




void sub_02015300(void) {
    SPL_Load(*((u32*)r0), *((u32*)(r0 + 4)));
    // str r4, [r0]
    SPL_LoadTexByVRAMManager(*((u32*)r4), *((u32*)(r4 + 0x18)));
    SPL_LoadTexByCallbackFunction();
    SPL_LoadTexPlttByVRAMManager(*((u32*)r4), *((u32*)(r4 + 0x1c)));
    SPL_LoadTexPlttByCallbackFunction();
    // str r1, [r0]
}




void sub_02015340(void) {
}




void sub_02015354(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)_021D10A0));
    // add r0, r3, r0
    *((u32*)((0 << 2) + 0x58)) = r4;
    GF_AssertFail((0 << 2), (0 + 1), (*((u32*)_021D10A0) + 4), *((u32*)_021D10A0));
}




void sub_02015394(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)_021D10A0));
    // add r0, #0x98
    // add r0, r3, r0
    // add r0, #0x98
    // str r4, [r0]
    GF_AssertFail((0 << 2), (0 + 1), (*((u32*)_021D10A0) + 4), *((u32*)_021D10A0));
}




void sub_020153D8(void) {
    // add r0, #0xdb
    Camera_ApplyPerspectiveType(*((u8*)r0), *((u32*)(r0 + 0x20)));
    Camera_SetStaticPtr(*((u32*)(r4 + 0x20)));
    Camera_PushLookAtToNNSGlb();
    NNS_G3dGlbFlushP();
    SPL_Draw(*((u32*)r4), NNS_G3dGlb);
    Camera_UnsetStaticPtr(*((u32*)(r4 + 0x20)));
    NNS_G3dGlbFlushP();
}




void sub_02015414(void) {
}




void sub_02015420(void) {
    // cmp r1, #0
    // beq _0201542E
    // cmp r2, #0x10
    // blt _02015426
    // _02015438: .word _021D10A8
}




int sub_0201543C(void) {
    sub_020153D8(*((u32*)_021D10A8));
}




void sub_02015460(void) {
    sub_02015414(*((u32*)_021D10A8));
}




void sub_02015484(void) {
}




void sub_02015494(void) {
}




void sub_020154B0(void) {
}




void sub_020154B8(void) {
}




void sub_020154C4(void) {
}




void sub_020154D0(void) {
}




void sub_020154D4(void) {
    // add r2, #0x40
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void sub_020154E4(void) {
}




void sub_02015504(void) {
    // nop
    // _0201550C: .word _021D10A0
}




void sub_02015510(void) {
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void sub_02015524(void) {
}




void sub_02015528(void) {
    // add r0, #0xdb
    // strb r1, [r0]
}




void sub_02015530(void) {
    // add r0, #0xdb
}




void sub_02015538(void) {
    // add r2, #0x50
    // strh r2, [r1]
    // add r2, #0x52
    // add r0, #0x54
}




void sub_02015550(void) {
    // add r5, r4, r4
    // add r5, pc
    // asr r5, r5, #0x10
    // add pc, r5
    // _02015582: ; jump table
    // add r3, #8
}




void sub_0201560C(void) {
}




void sub_02015628(void) {
}




void sub_02015640(void) {
    // add r2, sp, #0
    // str r0, [r2]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void sub_02015674(void) {
}




void sub_0201568C(void) {
}




void sub_020156A8(void) {
}




void sub_020156BC(void) {
}




void sub_020156D8(void) {
}




void sub_020156EC(void) {
}




void sub_02015708(void) {
}




void sub_02015720(void) {
    // add r2, sp, #0
    // str r0, [r2]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void sub_02015754(void) {
}




void sub_0201576C(void) {
}




void ListMenuCursorNew(void) {
    Heap_Alloc(8);
    // str r0, [r4]
    String_New(4, r5);
    *((u32*)(r4 + 4)) = r0;
    CopyU16ArrayToString(_020F60DC);
}




void DestroyListMenuCursorObj(void) {
}




void ListMenuCursorSetColor(void) {
}




void ListMenuUpdateCursorObj(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}



