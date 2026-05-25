/* Decompiled from asm/overlay_96.s */
#include "global.h"

void ov96_021E604C(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    NARC_New(0xa9, *((u32*)(r1 + (0xa1 << 2))), (0xa1 << 2));
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r4, [sp]
    // ldr r5, [sp, #4]
    ov96_021E679C(*((u16*)(r4 + (0x3f << 4))), *((u16*)(r4 + 0x000003F2)));
    NARC_ReadWholeMember(r7, r0, r5);
    // add r4, #0x28
    // add r5, #0x14
    // ldr r0, [sp]
    // add r0, #0x7c
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, #0x3c
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    NARC_Delete(r7);
}




void ov96_021E60C0(void) {
    // add r3, r0, r3
    // add r1, r3, r0
    // add r0, r1, r0
}




void ov96_021E60D8(void) {
    // add r1, r6, r0
    // add r1, r1, r0
    // add r0, r1, r0
}




u8 ov96_021E6104(void) {
}




void ov96_021E6108(void) {
}




void ov96_021E6138(void) {
}




void ov96_021E6168(void) {
    // add r1, r0, r3
    // strh r0, [r4]
    // strh r0, [r4]
    // add r0, sp, #0
    // add r0, sp, #0
}




void ov96_021E61D8(void) {
    // str r0, [sp]
    ov96_021EA214(r2, r3, 0, 1);
    // str r0, [r5, r1]
    ov96_021EA4D4(r6, r7, 0, *((u32*)(r5 + (0xa1 << 2))));
    // str r0, [r5, r1]
    ov96_021EA584(r6, r7, 0, *((u32*)(r5 + (0xa1 << 2))));
    // str r0, [r5, r1]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x10]
    // add r0, #0x60
    // sub r1, #0xc
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    Sprite_SetMatrix(*((u32*)(r5 + 0x00000714)), 0x00000714);
    // strh r4, [r5, r0]
    // str r1, [sp, #0xc]
    // str r1, [sp, #4]
    // add r1, #0x48
    // str r1, [sp, #8]
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)(r5 + (0x0000070E + 6))), (*((u16*)(r5 + 0x0000070E)) << 0xc));
    // strb r1, [r5, r0]
    // add r4, #0x82
    // str r1, [sp, #0x14]
    // add r1, sp, #0x10
    Sprite_SetMatrix(*((u32*)(r5 + (0x0000070D + 3))), (r4 << 0xc));
    // add r0, r5, r0
}




void ov96_021E6290(void) {
}




void ov96_021E62AC(void) {
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #4]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // str r2, [sp, #8]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x34]
    // str r3, [sp, #0xc]
    // strb r0, [r7, r1]
    // ldr r0, [sp, #0x34]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x30]
    // add r5, r7, r6
    ov96_021EA6E4(*((u32*)(r0 + (0xa1 << 2))), 0x00000728, 0);
    // str r0, [r5, r1]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x38]
    // ldr r0, [sp, #0x38]
    // add r0, r0, r6
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    Sprite_SetMatrix(*((u32*)(r5 + 0x0000071C)), *((u16*)(0 + 2)));
    // ldr r0, [sp, #0x34]
    // add r1, r7, r1
    // str r2, [r1, r0]
    // strb r1, [r7, r0]
}




void ov96_021E634C(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
}




void ov96_021E637C(void) {
    PlaySE(0x0000089A, 0x00000729, *((u8*)(r0 + 0x00000729)));
    ov96_021E65D8(r5);
    // strb r1, [r5, r0]
    ov96_021E661C(0x00000729, (*((u8*)(r5 + 0x00000729)) + 1));
    // strb r1, [r5, r0]
    sub_020053A8(7, r4);
    // sub r1, #0x1d
    PlaySE(0x0000089D);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000708)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000708)), r4);
    PlaySE(0x0000089D);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000708)), 1);
    PlaySE(0x0000089D);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000708)), 2);
    // strb r1, [r5, r0]
    PlaySE(0x00000892, (*((u8*)(r5 + 0x0000070C)) + 1));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000708)), 0);
    // strb r1, [r5, r0]
}




void ov96_021E6454(void) {
    // add r1, #0x1d
    _s32_div_f(r1, 0x1e);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000714)), 0);
    PlaySE(0x00000897);
    // strb r4, [r5, r0]
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000714)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00000714)), (r4 + 1));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000714)), 0);
}




void ov96_021E64B8(void) {
    // str r4, [r7, r0]
    // add r5, r7, r0
    GF_AssertFail(*((u32*)(r5 + 0x00000D34)));
    // str r6, [r5, r0]
    // str r6, [r5, r0]
    // str r6, [r5, r0]
}




void ov96_021E64F8(void) {
    GF_AssertFail(r2, *((u32*)(r0 + (0xd3 << 4))), (0xd3 << 4));
    // add r6, r4, r3
    // str r2, [r6, r3]
    // add r5, r6, r3
    *((u32*)(r5 + 4)) = r1;
    // ldr r2, [sp, #0x18]
    ov96_021EA7A4(0, r7, 1, *((u32*)(r4 + (0xa1 << 2))));
    *((u32*)(r5 + 8)) = r0;
    SysTask_CreateOnMainQueue(ov96_021E81D8, r5, 1);
    *((u32*)(r5 + 0xc)) = r0;
    // str r1, [r4, r0]
}




void ov96_021E6550(void) {
    // add r5, r7, r0
    // str r6, [r5, r0]
    // str r6, [r5, r0]
    // str r6, [r5, r0]
    SysTask_Destroy(*((u32*)(r5 + (0x00000D3C + 4))));
    // str r1, [r5, r0]
}




void ov96_021E658C(void) {
    // add r1, r0, r1
}




void ov96_021E65A4(void) {
    // add r5, r6, r0
    GF_AssertFail(*((u32*)(r5 + 0x00000D34)));
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x00000D3C)), 0);
}




void ov96_021E65D8(void) {
    // add r6, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x0000071C)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r6 + 0x0000071C)), 0);
}




void ov96_021E661C(void) {
    // sub r0, #0xc
    Sprite_IsAnimated(*((u32*)(r0 + 1)), *((u8*)(r0 + 0x00000728)));
    // add r6, #0xc
    // add r0, r5, r0
    Sprite_SetDrawFlag(*((u32*)((0 << 2) + 0x0000071C)), 0);
}




void ov96_021E6670(void) {
    // str r1, [r0, r2]
}




void ov96_021E667C(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E6696: ; jump table
    Sprite_SetDrawFlag(*((u32*)(r0 + (0x0000070D + 7))), 0, (*((u16*)(*((u8*)(r0 + 0x0000070D)) + 6)) << 0x10));
    PlaySE(0x00000899);
    // str r0, [sp, #8]
    // str r0, [sp]
    // add r1, #0x48
    // str r1, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r4 + (0x0000070E - 6))), (*((u16*)(r4 + 0x0000070E)) << 0xc));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000708)), 3);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000708)), 1);
    // strb r1, [r4, r0]
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
    // strb r0, [r4, r1]
    // blx r1
    ov96_021E839C(r4, *((u32*)(r4 + 0x00000D6C)), 0);
    PlaySE(0x00000898);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x71 << 4))), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x71 << 4))), 1);
    GfGfx_EngineATogglePlanes(((*((u32*)(r4 + 0x00000718)) << 0x18) >> 0x18), 1);
    // str r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
    // strb r0, [r4, r1]
}




void ov96_021E679C(void) {
    // add r0, r1, r0
}




void ov96_021E67AC(void) {
    // sub r2, #0x14
    // blx r2
}




void ov96_021E67C4(void) {
    ov96_021E5F24();
    // sub r2, #0x10
    // add r2, r4, r2
    ov96_021E811C(*((u32*)(r4 + (0x7e << 2))), *((u8*)(r4 + 0x0000072A)), (0x7e << 2));
    ov96_021E99F4();
    // add r1, r4, r3
    // add r3, #0xa0
    ov96_021E87B4(0x16, r0, *((u32*)(r4 + (0x7a << 2))));
    PokeathlonCourse_SetStateField07_IfDifferent(r4, 0x26, 1);
}




void ov96_021E6814(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r1]
    // ldr r1, [r4, r1]
}




void ov96_021E6870(void) {
    // add r1, r2, r2
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E6888: ; jump table
    // str r1, [r4, r0]
    // add r0, #0xd
    // strb r1, [r4, r0]
    // add r1, r4, r1
    PokeathlonCourse_InitStateInfo(ov96_0221DA68, (0xf3 << 2), *((u8*)r1));
    // strb r0, [r5]
    PokeathlonCourse_RunSubStateLoop((*((u8*)r5) + 1));
    // strb r0, [r5]
    // add r1, r4, r0
    // strb r0, [r5]
    // sub r2, #0x18
    // sub r2, #8
    // add r2, r4, r2
    // sub r2, #0x18
    // str r1, [r4, r2]
    // sub r0, #0xc
    // str r1, [r4, r0]
    // add r1, r4, r3
    // blx r2
    PokeathlonCourse_SetField1F4(r4, 0, *((u32*)(*((u32*)(r4 + (0x000003D1 - 5))) + (*((u8*)(r4 + (0x000003D1 + 1))) << 2))), (*((u8*)(r4 + (0x000003D1 + 1))) << 2));
    // add r2, r4, r0
    // sub r1, #0x10
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    // strb r0, [r5]
    // blx r2
    GF_AssertFail(*((u32*)(r4 + (0x79 << 2))), 0, *((u32*)(*((u32*)(r4 + (0x1e << 4))) + 0xc)));
    PokeathlonCourse_SetStateField07(r4, 3);
}




void ov96_021E695C(void) {
    // str r1, [r4, r0]
    // add r1, r4, r3
    // add r3, #0x88
}




void ov96_021E6990(void) {
}




void ov96_021E69C4(void) {
    ov96_021E5F24();
    ov96_021E9A04();
    ov96_021E87EC(0x19, *((u32*)(r4 + 0x000005DC)), r0, *((u32*)(r4 + (0xa2 << 2))));
    PokeathlonCourse_SetStateField07_IfDifferent(r4, 0x26, 6);
}




void ov96_021E6A00(void) {
    // add r3, r4, r0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, r4, r1
}




void ov96_021E6A54(void) {
    // str r2, [r4, r1]
    PokeathlonCourse_ResetDataCopyArea(0x00000D2C, 1);
    // str r1, [r4, r0]
    // add r0, #0xd
    // strb r1, [r4, r0]
    // add r1, r4, r1
    PokeathlonCourse_InitStateInfo(ov96_0221DA50, (0xf3 << 2));
    PokeathlonCourse_SetStateField07(r4, 8);
}




void ov96_021E6A94(void) {
    PokeathlonCourse_RunSubStateLoop();
    PokeathlonCourse_GetDataCopyArea(r4);
    // add r1, #0x24
    // strb r2, [r1]
    // add r0, #0x4c
    // strb r1, [r0]
    PokeathlonCourse_GetSystem(r4, 1, 0);
    ov96_021E87B0(1);
    PokeathlonCourse_SetStateTransitionType(r4, 6);
    PokeathlonCourse_SetStateField07(r4, 9);
    Sound_SetScene(0);
    Sound_SetSceneAndPlayBGM(0x19, 0x0000046F, 0);
}




void ov96_021E6AE8(void) {
    // add r2, r4, r1
    PokeathlonCourse_SetStateField07(0xa, *((u32*)r2));
    // sub r0, #0x18
    // sub r0, #8
    // add r0, r4, r0
    // sub r0, #0x18
    // str r2, [r4, r0]
    // sub r1, #0xc
    // str r0, [r4, r1]
    // add r1, r4, r3
    // blx r2
    PokeathlonCourse_SetField1F4(r4, 0, *((u32*)(*((u32*)(r4 + (0x000003D1 - 5))) + (*((u8*)(r4 + (0x000003D1 + 1))) << 2))), (*((u8*)(r4 + (0x000003D1 + 1))) << 2));
    // add r2, r4, r0
    // sub r1, #0x10
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    PokeathlonCourse_SetStateField07(r4, 0xa);
    ov96_021E5F24(r4);
    ov96_021E9A14();
    // add r1, r4, r3
    // sub r3, #0x2c
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + (0xad << 2))));
    // add r0, r4, r0
    ov96_021E8A20((0xb7 << 2));
    // add r0, r4, r0
    ov96_021E8A20((0xa3 << 2));
    // strb r1, [r5]
    ov96_021E9A14((r0 + 1), *((u8*)r0), (0x28 - 1));
    // add r1, r4, r3
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + ((0xa3 << 2) - 4))));
}




void ov96_021E6BC0(void) {
    // blx r2
}




void ov96_021E6BEC(void) {
    // str r1, [r4, r0]
    // add r0, #0xd
    // strb r1, [r4, r0]
    // add r1, r4, r1
    PokeathlonCourse_InitStateInfo(ov96_0221DA6C, (0xf3 << 2));
    PokeathlonCourse_SetStateField07(r4, 0xc);
}




void ov96_021E6C20(void) {
}




void ov96_021E6C40(void) {
    // add r2, r4, r1
    PokeathlonCourse_SetStateField07(0xe, *((u32*)r2));
    // sub r0, #0x18
    // sub r0, #8
    // add r0, r4, r0
    // sub r0, #0x18
    // str r2, [r4, r0]
    // sub r1, #0xc
    // str r0, [r4, r1]
    // add r1, r4, r3
    // blx r2
    PokeathlonCourse_SetField1F4(r4, 0, *((u32*)(*((u32*)(r4 + (0x000003D1 - 5))) + (*((u8*)(r4 + (0x000003D1 + 1))) << 2))), (*((u8*)(r4 + (0x000003D1 + 1))) << 2));
    // add r2, r4, r0
    // sub r1, #0x10
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    PokeathlonCourse_SetStateField07(r4, 0xe);
}




void ov96_021E6CB8(void) {
    // blx r2
}




void ov96_021E6CE4(void) {
    // add r2, r4, r1
    // strb r1, [r4, r2]
    // strh r6, [r4, r3]
    // strb r1, [r4, r2]
    // add r3, #0x42
    // str r1, [r4, r3]
    PokeathlonCourse_ResetDataCopyArea(0, (0x00000728 + 3), 0x00000D2A);
    // str r1, [r4, r0]
    // add r0, #0xd
    // strb r1, [r4, r0]
    // add r1, r4, r1
    PokeathlonCourse_InitStateInfo(*((u32*)(_0221DA00 + (r5 >> 0x16))), (0xf3 << 2), (r5 >> 0x16));
    PokeathlonCourse_SetStateField07(r4, 0x10);
}




void ov96_021E6D54(void) {
    PokeathlonCourse_RunSubStateLoop();
    PokeathlonCourse_GetDataCopyArea(r4);
    // add r1, #0x24
    // strb r2, [r1]
    // add r0, #0x4c
    // strb r1, [r0]
    PokeathlonCourse_GetSystem(r4, 1, 0);
    ov96_021E87B0(1);
    PokeathlonCourse_SetStateTransitionType(r4, 8);
    Sound_SetScene(0, *((u32*)(r4 + (0x1f << 4))));
    Sound_SetSceneAndPlayBGM(0x18, 0x00000472, 0);
    Sound_SetScene(0);
    Sound_SetSceneAndPlayBGM(0x18, 0x00000471, 0);
    sub_020053A8(7, 1);
    PokeathlonCourse_SetStateField07(r4, 0x11);
    GF_heap_c_dummy_return_true(0x5c);
    GF_AssertFail();
}




void ov96_021E6DE8(void) {
    // add r2, #8
}




void ov96_021E6E38(void) {
    // add r2, r4, r1
    PokeathlonCourse_SetStateField07(0x18, *((u32*)r2));
    // sub r0, #0x18
    // sub r0, #8
    // add r0, r4, r0
    // sub r0, #0x18
    // str r2, [r4, r0]
    // sub r1, #0xc
    // str r0, [r4, r1]
    // add r1, r4, r3
    // blx r2
    PokeathlonCourse_SetField1F4(r4, 0, *((u32*)(*((u32*)(r4 + (0x000003D1 - 5))) + (*((u8*)(r4 + (0x000003D1 + 1))) << 2))), (*((u8*)(r4 + (0x000003D1 + 1))) << 2));
    // add r2, r4, r0
    // sub r1, #0x10
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    PokeathlonCourse_SetStateTransitionType(r4, 0x10);
    PokeathlonCourse_SetStateField07(r4, 0x13);
    ov96_021E5F24(r4);
    ov96_021E9A14();
    // add r1, r4, r3
    // sub r3, #0x2c
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + (0xad << 2))));
    // add r0, r4, r0
    ov96_021E8A20((0xb7 << 2));
    // add r0, r4, r0
    ov96_021E8A20((0xa3 << 2));
    // strb r1, [r5]
    ov96_021E9A14((r0 + 1), *((u8*)r0), (0x28 - 1));
    // add r1, r4, r3
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + ((0xa3 << 2) - 4))));
}




u32 ov96_021E6F18(void) {
}




void ov96_021E6F2C(void) {
    // add r1, #0xac
    // add r0, r7, r1
    // add r2, r7, r0
    // strh r1, [r4]
    // add r1, r7, r3
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r1, r7, r0
    // ldr r0, [sp]
    // add r4, r1, r0
    // ldr r0, [sp]
    // add r0, r7, r0
    // add r0, r0, r5
    // ldr r0, [sp]
    // add r5, r5, r6
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov96_021E6FFC(void) {
    // add r4, #0x28
}




void ov96_021E7030(void) {
    // add r0, r4, r0
    // add r3, r4, r1
    // strh r1, [r3]
    // blx r2
}




void ov96_021E7080(void) {
    GF_heap_c_dummy_return_true(0x5c);
    GF_AssertFail();
    // blx r2
    GF_AssertFail(*((u32*)(r4 + (0x79 << 2))), 0, *((u32*)(*((u32*)(r4 + (0x1e << 4))) + 0xc)));
    // sub r0, #0x10
    PokeathlonCourse_SetStateField07(r4, 0x19, *((u32*)(r4 + (0x1f << 4))));
    PokeathlonCourse_SetStateField07(r4, 0x18);
    // str r1, [r4, r0]
    PokeathlonCourse_SetStateField07(r4, 0x1d);
}




void ov96_021E70F0(void) {
    // str r2, [r0, r1]
    PokeathlonCourse_SetStateField07(0x1d, *((u32*)(r0 + (0x1f << 4))));
    PokeathlonCourse_SetStateField07(0xb);
}




void ov96_021E711C(void) {
    // str r1, [r4, r0]
    // add r0, #0xd
    // strb r1, [r4, r0]
    // add r1, r4, r1
    PokeathlonCourse_InitStateInfo(ov96_0221DC24, (0xf3 << 2));
    PokeathlonCourse_SetStateField07(r4, 0x1a);
}




void ov96_021E7150(void) {
    // add r1, #0x24
    // strb r2, [r1]
    // add r0, #0x4c
    // strb r1, [r0]
}




void ov96_021E7190(void) {
    // add r2, r4, r1
    PokeathlonCourse_SetStateField07(0x1c, *((u32*)r2));
    // sub r0, #0x18
    // sub r0, #8
    // add r0, r4, r0
    // sub r0, #0x18
    // str r2, [r4, r0]
    // sub r1, #0xc
    // str r0, [r4, r1]
    // add r1, r4, r3
    // blx r2
    PokeathlonCourse_SetField1F4(r4, 0, *((u32*)(*((u32*)(r4 + (0x000003D1 - 5))) + (*((u8*)(r4 + (0x000003D1 + 1))) << 2))), (*((u8*)(r4 + (0x000003D1 + 1))) << 2));
    // add r2, r4, r0
    // sub r1, #0x10
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    PokeathlonCourse_SetStateField07(r4, 0x1c);
    ov96_021E5F24(r4);
    ov96_021E9A14();
    // add r1, r4, r3
    // sub r3, #0x2c
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + (0xad << 2))));
    // add r0, r4, r0
    ov96_021E8A20((0xb7 << 2));
    // add r0, r4, r0
    ov96_021E8A20((0xa3 << 2));
    // strb r1, [r5]
    ov96_021E9A14((r0 + 1), *((u8*)r0), (0x28 - 1));
    // add r1, r4, r3
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + ((0xa3 << 2) - 4))));
}




void ov96_021E7268(void) {
    // blx r2
}




void ov96_021E7294(void) {
    PokeathlonCourse_ResetDataCopyArea();
    // str r1, [r4, r0]
    // add r0, #0xd
    // strb r1, [r4, r0]
    // add r1, r4, r1
    PokeathlonCourse_InitStateInfo(ov96_0221DA5C, (0xf3 << 2));
    PokeathlonCourse_SetStateField07(r4, 0x20);
}




void ov96_021E72CC(void) {
    PokeathlonCourse_RunSubStateLoop();
    PokeathlonCourse_GetDataCopyArea(r4);
    // add r1, #0x24
    // strb r2, [r1]
    // add r0, #0x4c
    // strb r1, [r0]
    PokeathlonCourse_GetSystem(r4, 1, 0);
    ov96_021E87B0(1);
    PokeathlonCourse_SetStateTransitionType(r4, 0xc);
    PokeathlonCourse_SetStateField07(r4, 0x21);
    Sound_SetScene(0);
    Sound_SetSceneAndPlayBGM(0x19, 0x00000474, 0);
}




void ov96_021E7320(void) {
    // add r2, r4, r1
    PokeathlonCourse_SetStateField07(0x22, *((u32*)r2));
    // sub r0, #0x18
    // sub r0, #8
    // add r0, r4, r0
    // sub r0, #0x18
    // str r2, [r4, r0]
    // sub r1, #0xc
    // str r0, [r4, r1]
    // add r1, r4, r3
    // blx r2
    PokeathlonCourse_SetField1F4(r4, 0, *((u32*)(*((u32*)(r4 + (0x000003D1 - 5))) + (*((u8*)(r4 + (0x000003D1 + 1))) << 2))), (*((u8*)(r4 + (0x000003D1 + 1))) << 2));
    // add r2, r4, r0
    // sub r1, #0x10
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    PokeathlonCourse_SetStateField07(r4, 0x22);
    ov96_021E5F24(r4);
    ov96_021E9A14();
    // add r1, r4, r3
    // sub r3, #0x2c
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + (0xad << 2))));
    // add r0, r4, r0
    ov96_021E8A20((0xb7 << 2));
    // add r0, r4, r0
    ov96_021E8A20((0xa3 << 2));
    // strb r1, [r5]
    ov96_021E9A14((r0 + 1), *((u8*)r0), (0x28 - 1));
    // add r1, r4, r3
    ov96_021E87B4(0x1b, r0, *((u32*)(r4 + ((0xa3 << 2) - 4))));
}




void ov96_021E73F8(void) {
    // blx r2
    GF_AssertFail(*((u32*)(r0 + (0x79 << 2))), 0, *((u32*)(*((u32*)(r0 + (0x1e << 4))) + 0xc)));
    Save_ApricornBox_Get(*((u32*)*((u32*)(r5 + (0x7e << 2)))));
    Save_PlayerData_GetProfile(*((u32*)*((u32*)(r5 + (0x7e << 2)))));
    // str r0, [sp]
    Save_Pokeathlon_Get(*((u32*)*((u32*)(r5 + (0x7e << 2)))));
    PokeathlonSave_GetUnkB00();
    sub_02031B10();
    Heap_AllocAtEnd(*((u32*)(r5 + (0xa1 << 2))), (r0 << 2));
    // str r0, [r5, r1]
    memset(*((u32*)(r5 + 0x00000D68)), 0, r4);
    // ldr r1, [sp]
    sub_020320E0(r7, *((u32*)(r6 + 0x70)), *((u32*)(r5 + (0xa1 << 2))));
    // str r0, [r5, r1]
    PokeathlonCourse_SetStateTransitionType(r5, 0xe);
    PokeathlonCourse_SetStateField07(r5, 0x23);
    PokeathlonCourse_SetStateField07(r5, 0x25);
}




void ov96_021E74AC(void) {
    ov96_021E5F24();
    ov96_021E9A18();
    // add r1, r4, r1
    ov96_021E87EC(0x1f, 0x00000B44, r0, *((u32*)(r4 + (0xa2 << 2))));
    PokeathlonCourse_SetStateField07(r4, 0x26);
}




void ov96_021E74E0(void) {
}




void ov96_021E7514(void) {
    sub_02031B10();
    ov96_021E87EC(0x21, *((u32*)(r4 + 0x00000D64)), r0, *((u32*)(r4 + (0xa2 << 2))));
    PokeathlonCourse_SetStateField07(r4, 0x26);
}




void ov96_021E7544(void) {
    Save_ApricornBox_Get(*((u32*)*((u32*)(r0 + (0x7e << 2)))));
    PokeathlonCourse_GetParticipantCount(r5);
    sub_0203769C();
    sub_020321A0(r4, *((u32*)(r5 + 0x00000D68)), r6, r0);
    GF_heap_c_dummy_return_true(0x5c);
    GF_AssertFail();
    PokeathlonCourse_SetStateField07(r5, 0x25);
}




void ov96_021E7590(void) {
    // ldr r0, [r4, r0]
}




u8 ov96_021E75B8(void) {
}




void ov96_021E75BC(void) {
    OamManager_ApplyAndResetBuffers();
    DoScheduledBgGpuUpdates(r4);
    GF_RunVramTransferTasks();
    // str r0, [r3, r1]
}




void ov96_021E75E4(void) {
    // str r0, [sp]
    // add r5, r7, r0
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x28
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // ldr r1, [sp]
    // add r1, #0x28
    // str r1, [sp]
}




void ov96_021E7658(void) {
    // str r1, [sp]
    ov96_021E5F24();
    // ldr r0, [sp]
    // add r6, r5, r0
    ov96_021E9370(*((u32*)(r5 + 0x00000614)), 0);
    // add r2, r6, r0
    // strh r1, [r2, r0]
    // add r0, #0x20
    // strh r1, [r2, r0]
    ov96_021E94EC(*((u32*)(r5 + 0x00000614)), 0, r0);
    GF_AssertFail(((r4 + 1) << 0x18));
    // ldr r0, [sp]
    // add r2, r5, r0
    // strb r1, [r2, r0]
    // strb r1, [r2, r0]
    // ldr r0, [sp]
    // add r1, r5, r0
    // strb r2, [r1, r0]
    ov96_021E94EC(*((u32*)(r5 + 0x00000614)), 3, 0);
    // ldr r0, [sp]
    // add r1, r5, r0
    // strb r2, [r1, r0]
    // ldr r0, [sp]
    // add r1, r5, r0
    // strb r2, [r1, r0]
}




void ov96_021E7718(void) {
    Save_Pokeathlon_Get(*((u32*)*((u32*)(r0 + (0x7e << 2)))));
    PokeathlonCourse_GetFieldData(r5);
    Save_VarsFlags_Get(*((u32*)*((u32*)(r5 + (0x7e << 2)))));
    // str r0, [sp]
    ov96_021E7FA8(r5);
    // ldr r0, [sp]
    Save_VarsFlags_CheckFlagInArray(0xf0);
    ov96_021E8084(r5);
    // ldr r0, [sp]
    Save_VarsFlags_SetFlagInArray(0xf0);
    // add r0, #0x26
    PokeathlonSave_AddAthletePoints(r6, ((*((u16*)(r4 + 0x000001D2)) << 0x11) >> 0x10));
    PokeathlonSave_GetRecordsLink2(r6);
    ov96_021E7A2C(r5, r0);
    PokeathlonSave_GetRecordsSolo(r6);
    // str r0, [sp, #4]
    PokeathlonSave_GetUnkAEC(r6);
    // ldr r1, [sp, #4]
    ov96_021E7BA8(r5, r0);
    PokeathlonSave_dummy2(r6);
    ov96_021E786C(r5, r0);
    // ldr r0, [sp]
    Save_VarsFlags_CheckFlagInArray(0xef);
    PokeathlonSave_dummy2(r6);
    ov96_021E8060();
    // ldr r0, [sp]
    Save_VarsFlags_SetFlagInArray(0xef);
    PokeathlonSave_GetRecordsSolo2(r6);
    ov96_021E7938(r5, r0);
    PokeathlonSave_GetAgainUnkB00(r6);
    ov96_021E7D6C(r5, r0);
    // ldr r0, [sp]
    Save_VarsFlags_CheckFlagInArray(*((u32*)(*((u32*)(r5 + (0x7e << 2))) + 4)), 0xf1);
    ov96_021E80C4(r5);
    // ldr r0, [sp]
    Save_VarsFlags_SetFlagInArray(0xf1);
    // add r0, #0x26
    *((u16*)(*((u32*)(r5 + 0x000001D2)) + 0xa)) = *((u16*)(r4 + 0x000001D2));
    // add r0, #0x26
    *((u16*)(*((u32*)(r5 + 0x000001D2)) + 8)) = r7;
    // add r1, #0x26
    *((u8*)(*((u32*)(r5 + 0x000001D2)) + 0xd)) = ((*((u16*)(r4 + (0x000001D2 - 2))) << 0x1c) >> 0x1e);
}




void ov96_021E786C(void) {
    // str r0, [sp]
    // add r4, r1, r0
    // ldr r0, [sp]
    *((u16*)(r4 + 6)) = *((u16*)((0x2c * *((u8*)(*((u32*)(r0 + (0x7e << 2))) + 0xc))) + 0x000008FE));
    *((u16*)(r4 + 6)) = 0x000003E7;
    // ldr r5, [sp]
    // strh r2, [r6]
    // strh r1, [r6]
    // ldr r0, [sp]
    ov96_021E5F24(0x000003E7, 0x000003E7, *((u16*)(r5 + 0x000008B4)), (0 + 1));
    // ldr r0, [sp]
    PokeathlonCourse_GetParticipantUnk04(r0);
    // add r1, #8
    // and r5, r6
    // and r6, r7
    // str r6, [r1]
    // and r5, r6
    // str r6, [r1]
    // and r5, r6
    // str r5, [r1]
    // and r5, r3
    // str r5, [r1]
    // add r0, #0x28
    *((u32*)(r4 + 0xc)) = *((u32*)(r0 + 4));
    // add r1, #0xc
    // add r4, #0xc
}




void ov96_021E7938(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, r0, r1
    // ldr r1, [sp, #4]
    // add r7, r1, r2
    *((u32*)(r7 + 0x28)) = (*((u32*)(r7 + 0x28)) + 1);
    // add r2, sp, #0x30
    // str r0, [sp, #0xc]
    // add r5, r7, r0
    // add r6, r2, r1
    // strh r0, [r2, r1]
    // add r0, r5, r1
    // add r1, r6, r1
    *((u16*)((0 << 1) + 2)) = *((u16*)(*((u16*)(r7 + (0 << 3))) + 2));
    // ldr r0, [sp]
    ov96_021E5F24(((0 + 1) << 0x18), (0 << 1), *((u32*)(r7 + 0x28)), (((0 + 1) << 0x18) >> 0x18));
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, r0, r2
    // add r1, r1, r0
    // add r0, sp, #0x10
    // strh r1, [r0]
    // ldr r0, [sp]
    ov96_021E5F24(0x000008D4, *((u16*)(((r0 << 0x18) << 1) + 0x000008D4)), ((r0 << 0x18) >> 0x15));
    // ldr r0, [sp]
    // add r1, r0, r1
    // add r0, r1, r0
    // add r3, sp, #0x10
    // add r4, r0, r5
    // add r4, r4, r5
    // add r5, r3, r5
    *((u16*)((0 << 1) + 2)) = (*((u16*)(r4 + 2)) << 0xa);
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x30
    ov96_021E7C04((0x7c * ((r0 << 0x18) >> 0x18)), r3, 0x28);
    // ldr r0, [sp]
    // add r2, sp, #0x30
    ov96_021E7C94(r7);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_021E7A2C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    ov96_021E5F24();
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, r0, r1
    // ldr r1, [sp, #4]
    // add r1, r1, r2
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    *((u32*)(0x0098967F + 0x28)) = (*((u32*)(0xa4 + 0x28)) + 1);
    // add r4, sp, #0x40
    // str r0, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // add r6, r2, r3
    // add r0, r4, r5
    // strh r2, [r4, r5]
    // add r2, r6, r3
    // add r3, r0, r3
    *((u16*)((0 << 1) + 2)) = *((u16*)(*((u16*)((*((u32*)(0xa4 + 0x28)) + 1) + (0 << 3))) + 2));
    // ldr r2, [sp, #0x14]
    // add r6, r2, r3
    *((u32*)(*((u8*)(_0221A7D8 + ((*((u32*)((0 << 2) + (0xf6 << 2))) << 0x18) >> 0x18))) + 8)) = *((u32*)(r6 + 0x2c));
    // add r2, r6, r3
    // add r3, r0, r3
    *((u16*)((0 << 1) + 0xc)) = *((u16*)(*((u32*)(r6 + 0x2c)) + 0x30));
    // add r6, #0x40
    *((u8*)(*((u8*)(_0221A7D8 + ((*((u32*)((0 << 2) + (0xf6 << 2))) << 0x18) >> 0x18))) + 0x1c)) = *((u8*)r6);
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r5, sp, #0x20
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r7
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // ldr r0, [sp, #0xc]
    // add r2, r0, r2
    // add r0, sp, #0x20
    // strh r2, [r0]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r2
    // add r3, r0, r6
    // add r3, r3, r6
    // add r6, r5, r6
    *((u16*)((0 << 1) + 2)) = (*((u16*)((0 << 1) + 2)) << 0xa);
    // ldr r0, [sp]
    PokeathlonCourse_GetPlayerProfileFromData(0x7c, ((0x1e << 0x18) >> 0x18), (((0 + 1) << 0x18) >> 0x18), (*((u16*)((0 << 1) + 2)) << 0xa));
    PlayerProfile_GetTrainerID();
    // str r0, [sp, #0x28]
    PlayerProfile_GetNamePtr(r6);
    // add r2, r5, r2
    *((u16*)((0 << 1) + 0xc)) = *((u16*)(r0 + (0 << 1)));
    PlayerProfile_GetLanguage(r6, (((0 + 1) << 0x18) >> 0x18), (0 << 1), *((u16*)(r0 + (0 << 1))));
    // add r1, sp, #0x20
    *((u8*)(r1 + 0x1c)) = r0;
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x40
    ov96_021E7C04(r5);
    // ldr r0, [sp]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x40
    ov96_021E7CC8(((r7 + 1) << 0x18));
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_021E7BA8(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r1, r7, r0
    // add r6, r7, r0
    // ldr r0, [sp]
    ov96_021E7D18(*((u16*)(0x2c + (((*((u32*)(r1 + (0xf6 << 2))) << 0x18) >> 0x18) * 0x2c))), *((u16*)(r6 + 0x000008D4)), *((u8*)(_0221A7D8 + ((*((u32*)(r1 + (0xf6 << 2))) << 0x18) >> 0x18))));
    // ldr r0, [sp, #4]
    // strh r2, [r0, r1]
}




void ov96_021E7C04(void) {
    // add r0, #0x80
    // add r6, #0x80
    // ldmia r4!, {r0, r1}
    // stmia r6!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r6!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r6!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r6!, {r0, r1}
    // sub r0, #0x20
    // sub r3, #0x20
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r2, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // sub r5, #0x20
    // stmia r2!, {r0, r1}
}




void ov96_021E7C94(void) {
    // strh r0, [r5]
    // add r4, #0x20
    // add r5, #8
}




void ov96_021E7CC8(void) {
    // strh r4, [r1]
    // add r4, #0x40
    // strb r5, [r4]
    // add r2, #0x20
    // add r1, #8
    // add r3, #0x18
}




void ov96_021E7D18(void) {
}




void ov96_021E7D30(void) {
    GF_AssertFail(0x0000FFFF);
}




void ov96_021E7D6C(void) {
    // str r1, [sp]
    // add r7, r5, r1
    ov96_021E5F24(0x0000072C);
    // str r0, [sp, #8]
    // ldr r2, [sp]
    // add r2, #0x38
    ov96_021E7F98(1, 0x0098967F);
    // ldr r2, [sp]
    // add r2, #0x3c
    ov96_021E7F98(1, 0x0098967F);
    ov96_021E7F48(r5);
    // ldr r2, [sp]
    // add r2, #0x40
    ov96_021E7F98(1, 0x0098967F);
    // ldr r2, [sp]
    ov96_021E7F98(1, (r2 + 4));
    // ldr r2, [sp]
    // add r2, #8
    ov96_021E7F98(1, 0x0098967F);
    ov96_021E7F48(r5);
    // ldr r2, [sp]
    // add r2, #0xc
    ov96_021E7F98(1, 0x0098967F);
    // ldr r0, [sp]
    // ldr r6, [sp]
    // str r0, [sp, #0xc]
    // add r0, #0x6c
    // str r0, [sp, #0xc]
    // add r6, #0x44
    // add r0, r7, r4
    // add r3, r5, r2
    // add r2, r6, r2
    ov96_021E7F98(1, 0x0098967F, ((*((u32*)(r3 + (0xf6 << 2))) << 0x18) >> 0x16));
    // ldr r2, [sp, #0xc]
    ov96_021E7F98(1, 0x0098967F);
    // ldr r0, [sp, #8]
    // add r0, r7, r1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // str r0, [sp, #0x14]
    // add r0, #0x1c
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // str r0, [sp, #0x18]
    // add r0, #0x20
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    // str r0, [sp, #0x1c]
    // add r0, #0x24
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // str r0, [sp, #0x20]
    // add r0, #0x28
    // str r0, [sp, #0x20]
    // ldr r0, [sp]
    // str r0, [sp, #0x24]
    // add r0, #0x2c
    // str r0, [sp, #0x24]
    // ldr r0, [sp]
    // str r0, [sp, #0x28]
    // add r0, #0x30
    // str r0, [sp, #0x28]
    // ldr r0, [sp]
    // str r0, [sp, #0x2c]
    // add r0, #0x34
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #4]
    // add r5, r0, r1
    // ldr r2, [sp, #0x10]
    ov96_021E7F98(*((u32*)(*((u8*)(r5 + 0x0000072A)) + (0 << 5))), 0x0098967F);
    // ldr r2, [sp, #0x14]
    ov96_021E7F98(*((u32*)(r5 + 4)), r4);
    // ldr r2, [sp, #0x18]
    ov96_021E7F98(*((u32*)(r5 + 8)), r4);
    // ldr r2, [sp, #0x1c]
    ov96_021E7F98(*((u32*)(r5 + 0xc)), r4);
    // ldr r2, [sp, #0x20]
    ov96_021E7F98(*((u32*)(r5 + 0x10)), r4);
    // ldr r2, [sp, #0x24]
    ov96_021E7F98(*((u32*)(r5 + 0x14)), r4);
    // ldr r2, [sp, #0x28]
    ov96_021E7F98(*((u32*)(r5 + 0x18)), r4);
    // ldr r2, [sp, #0x2c]
    ov96_021E7F98(*((u32*)(r5 + 0x1c)), r4);
    // ldr r2, [sp]
    // add r2, #0x10
    ov96_021E7F98(*((u32*)(r7 + (6 << 6))), 0x0098967F);
    // ldr r2, [sp]
    // add r2, #0x14
    // str r2, [sp]
    ov96_021E7F98(*((u32*)(r7 + (0x61 << 2))), 0x0098967F);
}




void ov96_021E7F48(void) {
    // add r1, r5, r0
    // add r3, r1, r0
    // add r1, r3, r6
    // add r0, r4, r7
    // strh r6, [r4, r7]
}




void ov96_021E7F98(void) {
    // add r0, r3, r0
    // str r1, [r2]
    // str r0, [r2]
}




void ov96_021E7FA8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E7FC2: ; jump table
}




void ov96_021E8028(void) {
    // add r3, r5, r2
}




void ov96_021E8060(void) {
    // add r1, r0, r1
}




void ov96_021E8084(void) {
    // add r1, r6, r0
}




void ov96_021E80C4(void) {
    Save_Pokeathlon_Get(*((u32*)*((u32*)(r0 + (0x7e << 2)))), (0x7e << 2));
    PokeathlonSave_GetRecordsSolo2();
    ov96_021E7D30(*((u16*)(ov96_0221A894 + (0 << 1))), *((u16*)(r0 + (0x2c * 0))), *((u8*)(_0221A7D8 + 0)));
}




void ov96_021E811C(void) {
    // strb r1, [r5]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8140: ; jump table
    GF_AssertFail((*((u16*)(*((u32*)(r0 + 4)) + 6)) << 0x10), 0xa);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8170: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    LCRandom();
    _s32_div_f(0xa);
    // add r1, r1, r0
    // strb r0, [r5, r2]
    // add r1, r1, r0
    // strb r0, [r5, r2]
}




void ov96_021E81D8(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r1, sp, #8
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
}




void ov96_021E8228(void) {
    // str r3, [sp]
    // ldr r6, [sp, #0x18]
    ov96_021E5F24(r3);
    GF_AssertFail();
    GF_AssertFail();
    // str r1, [r5, r0]
    GF_AssertFail((0x8b << 4), (*((u32*)(r5 + (0x8b << 4))) + 1), *((u32*)(r5 + (0x8b << 4))));
    ov96_021E5F24(r5);
    GF_AssertFail();
    // add r3, r5, r2
    // add r3, r3, r2
    // ldr r0, [sp]
    // add r2, r3, r2
    ov96_021E8340(((r6 << 0x18) >> 0x18), (r7 << 5));
    ov96_021E5F24(r5);
    PokeathlonCourse_GetParticipantCount(r5);
    // add r3, r5, r2
    // add r3, r3, r2
    // ldr r0, [sp]
    // add r2, r3, r2
    ov96_021E8340(((r6 << 0x18) >> 0x18), (r7 << 5));
    ov96_021E5F24(r5);
    GF_AssertFail();
    // add r3, r5, r2
    // ldr r0, [sp]
    // add r2, r3, r2
    ov96_021E8340(((r6 << 0x18) >> 0x18), (r7 << 5));
    ov96_021E5F24(r5);
    GF_AssertFail();
    // add r3, r5, r2
    // ldr r0, [sp]
    // add r2, r3, r2
    ov96_021E8340(((r6 << 0x18) >> 0x18), (r7 << 5));
}




void ov96_021E8318(void) {
    // strh r1, [r0, r2]
}




void ov96_021E8324(void) {
}




void ov96_021E8340(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8352: ; jump table
    // add r2, #8
    // add r2, #0xc
    // add r2, #0x10
    // add r2, #0x14
    // add r2, #0x18
    // add r2, #0x1c
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10), (r2 + 4));
    // add r1, r0, r1
    // str r1, [r2]
    // str r0, [r2]
}




void ov96_021E839C(void) {
    Save_Pokeathlon_Get(*((u32*)*((u32*)(r0 + (0x7e << 2)))));
    GF_AssertFail(0x0000FFFF, *((u16*)(r5 + 0x00000D2A)));
    PokeathlonCourse_GetField3D8_ForCurrentParticipant(r5);
    PokeathlonSave_GetRecordsLink2(r6);
    PokeathlonSave_GetRecordsSolo2(r6, 0xa4);
    // add r0, r0, r1
}




void ov96_021E8424(void) {
}




void ov96_021E8448(void) {
    // add r2, sp, #0
    // add r0, sp, #0
}




void ov96_021E8484(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapID();
    NewMsgDataFromNarc(1, 0x1b, 0x00000136, r0);
    // str r0, [sp, #0x14]
    // sub r0, r0, r4
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r3, sp, #0x2c
    ov96_021E860C(r4, *((u8*)(*((u32*)(4 + (0x7e << 2))) + 0xc)), *((u8*)(*((u32*)(4 + (0x7e << 2))) + 0xf)));
    // ldr r0, [sp]
    PokeathlonCourse_GetHeapID();
    NARC_New(0xa9, r0);
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    PokeathlonCourse_GetHeapID();
    NARC_New((0x41 << 2), r0);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r0, sp, #0x2c
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    PokeathlonCourse_GetParticipantData(0);
    // ldr r0, [sp, #8]
    // str r0, [r5]
    GF_AssertFail(*((u8*)r0));
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x24
    NARC_ReadWholeMember((*((u32*)r5) - 1));
    // add r1, sp, #0x24
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u8*)(r1 + 6)));
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    PokeathlonCourse_GetPlayerProfileFromData();
    String_cstr(r4);
    Save_Profile_PlayerName_Set(r6, r0);
    String_Delete(r4);
    // str r0, [sp, #0x18]
    // add r4, sp, #0x24
    // add r6, #0x16
    // add r7, sp, #0x24
    *((u16*)(r5 + 4)) = *((u16*)r4);
    *((u16*)(r5 + 6)) = 0;
    *((u8*)(r5 + 0x14)) = 0;
    *((u32*)(r5 + 8)) = 0;
    GetMonBaseStat(*((u16*)(r5 + 4)), 0x12);
    *((u8*)(r5 + 0x15)) = 0;
    ov96_021E679C(*((u16*)(r5 + 4)), 0);
    // add r2, sp, #0x2c
    // ldr r0, [sp, #0x10]
    // add r2, #3
    NARC_ReadWholeMember(r0);
    *((u8*)(r5 + 0xc)) = *((u8*)(r7 + 0xb));
    *((u8*)(r5 + 0xd)) = *((u8*)(r7 + 0xc));
    *((u8*)(r5 + 0xe)) = *((u8*)(r7 + 0xd));
    *((u8*)(r5 + 0xf)) = *((u8*)(r7 + 0xe));
    *((u8*)(r5 + 0x10)) = *((u8*)(r7 + 0xf));
    // ldr r0, [sp]
    PokeathlonCourse_GetHeapID(*((u8*)(r7 + 0xf)));
    GetSpeciesName(*((u16*)r4), r0);
    // str r0, [sp, #0x20]
    String_cstr();
    CopyU16StringArrayN(r6, r0, 0xb);
    // ldr r0, [sp, #0x20]
    String_Delete();
    // ldr r0, [sp, #0x18]
    // add r5, #0x28
    // add r6, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    NARC_Delete(((((r0 + 1) + 1) + 1) + 1));
    // ldr r0, [sp, #0x10]
    NARC_Delete();
    // ldr r0, [sp, #0x14]
    DestroyMsgData();
}




void ov96_021E860C(void) {
    // str r2, [sp]
    // strb r2, [r4, r1]
    // add r1, sp, #0xc
    // add r1, #1
    // strb r2, [r1, r2]
    // add r1, sp, #0xc
    // add r1, #1
    // strb r1, [r4, r6]
    // add r1, #0x19
    // strb r1, [r4, r6]
    // add r1, sp, #0xc
    // add r1, #1
    // strb r2, [r1, r0]
    // add r1, sp, #8
    // strb r2, [r1, r2]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // add r1, sp, #8
    // ldr r1, [sp, #4]
    // strb r2, [r4, r6]
    // add r1, r2, r1
    // strb r1, [r4, r6]
    // add r1, sp, #8
    // strb r2, [r1, r0]
    // ldr r0, [sp]
    // add r0, #0x32
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
}




void ov96_021E86FC(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + 0x00000D68)));
    sub_02031B10();
    // add r0, r2, r1
}




void ov96_021E872C(void) {
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x14]
    // add r0, sp, #0x18
    // add r1, sp, #0xc
    // add r2, sp, #0
    // add r0, sp, #0
    // ldr r1, [sp, #0x2c]
    // str r0, [r1]
    // ldr r1, [sp, #0x28]
}




void ov96_021E8770(void) {
    // ldr r0, [sp, #0x18]
    // str r2, [sp]
    // strh r5, [r4]
    // ldr r2, [sp]
    // ldr r2, [sp]
    // ldr r3, [sp, #0x18]
}




void ov96_021E87B0(void) {
}




void ov96_021E87B4(void) {
    // ldrh r0, [r4]
}




void ov96_021E87EC(void) {
    // ldrh r3, [r6]
}




void ov96_021E8810(void) {
    // ldrh r0, [r4]
}




void ov96_021E8828(void) {
}




void ov96_021E883C(void) {
    Heap_Alloc(r3, (0x1d << 4));
    memset(0, (0x1d << 4));
    // str r5, [r4, r1]
    // str r6, [r4, r0]
    // add r1, #8
    // str r7, [r4, r1]
    SysTask_CreateOnVWaitQueue(ov96_021E8884, r4, 0x00001388);
    // str r0, [r4, r1]
}




void ov96_021E8884(void) {
    // str r0, [sp]
    // str r4, [sp, #4]
    // ldr r4, [sp, #4]
    // add r2, #8
    // blx r4
    // mov ip, r4
    // str r5, [sp, #8]
    // ldr r4, [sp, #8]
    // mov r5, ip
    // blx r4
    // ldr r0, [sp]
    // add r6, #0x38
    // str r0, [sp]
}




void ov96_021E88FC(void) {
    // ldr r0, [r4, r0]
}




void ov96_021E8914(void) {
    // str r2, [sp]
    // add r4, r6, r1
    // add r2, #0x38
    // sub r1, #0x16
    // add r0, r2, r0
    // blx r0
    // sub r7, #0x16
    // ldr r1, [sp]
    // add r0, #8
    // str r0, [r4]
}




void ov96_021E8988(void) {
    // str r2, [sp, #4]
    // str r1, [sp]
    // add r4, r5, r0
    // add r2, #0x38
    GF_AssertFail((0x38 * 0), (0 + 1), r0);
    // ldr r1, [sp]
    // sub r1, #0x16
    // add r0, r0, r7
    // blx r0
    GF_AssertFail(*((u32*)(*((u32*)(r5 + (7 << 6))) + 4)), 0x0000FFFF);
    // add r0, r0, r7
    // add r1, #8
    // blx r3
    // ldr r1, [sp, #4]
    memcpy(0, *((u32*)(r5 + (7 << 6))), r6, *((u32*)(*((u32*)(r5 + (7 << 6))) + 8)));
    *((u32*)(r4 + 0x34)) = r5;
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x34)) = r0;
    // ldr r0, [sp]
    // sub r0, #0x16
    *((u32*)(r4 + 4)) = r0;
    // str r0, [sp]
    *((u32*)(r4 + 0x30)) = r6;
    // str r0, [r4]
}




void ov96_021E8A20(void) {
}




void ov96_021E8A24(void) {
    // _021E8A28: .word ov96_0221AEC4
}




u8 ov96_021E8A2C(void) {
}




void ov96_021E8A30(void) {
}




void ov96_021E8A44(void) {
    // str r0, [r6, r1]
    // add r1, #0x1c
    // str r0, [r5, r7]
}




void ov96_021E8AAC(void) {
    // add r0, r0, r6
    // add r0, r5, r0
}




void ov96_021E8B1C(void) {
    Heap_AllocAtEnd(*((u32*)r0), (0x55 << 2));
    // strh r7, [r0]
    // mov ip, r0
    *((u32*)(r0 + 0xc)) = r5;
    // add r2, #0x10
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // mov r0, ip
    *((u32*)(*((u32*)r4) + 8)) = 0;
    // ldr r1, [sp, #0x1c]
    // mov r0, ip
    *((u32*)(*((u32*)r4) + 4)) = r1;
    // mov r0, ip
    *((u16*)(*((u32*)r4) + 2)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
    // mov r5, ip
    // add r2, #0x54
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r6, #0x10
    // add r5, #0x10
    // ldr r2, [sp, #0x18]
    // mov r1, ip
    SysTask_CreateOnMainQueue(ov96_021E8FB4, r5, r6);
}




void ov96_021E8B88(void) {
}




void ov96_021E8B8C(void) {
}




void ov96_021E8BAC(void) {
}




void ov96_021E8BB0(void) {
    // add r0, #0x14
}




void ov96_021E8BB4(void) {
    // add r0, r0, r1
    // add r0, #0x20
}




void ov96_021E8BF4(void) {
    // str r4, [sp]
    // str r4, [sp]
    // str r0, [sp]
    // add r0, r0, r5
    // ldr r0, [sp]
}




void ov96_021E8C70(void) {
    // ldr r0, [sp, #0x64]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // add r0, sp, #0x50
    // str r7, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
    // str r7, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x44]
    // str r0, [sp, #8]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x40]
    // str r0, [sp, #8]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // sub r7, r0, r1
    // add r6, r5, r1
    // ldr r0, [sp, #0x3c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x3c]
    // add r0, r0, r4
    // ldr r0, [sp, #0x64]
    // ldr r0, [sp, #0x10]
    // add r2, r6, r0
    // add r2, r5, r0
    // strb r3, [r2, r1]
    // add r3, r5, r0
    // strb r1, [r3, r2]
    // ldr r1, [sp, #0x14]
    // add r0, r5, r0
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x14]
    // add r0, r5, r0
    // add r1, r1, r4
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x14]
    // add r0, r5, r0
    // add r1, r1, r4
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r5, r0
    // add r1, r1, r4
    // ldr r0, [sp, #0x14]
    // add r4, r4, r0
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x2c]
    // add r4, r0, r1
    // ldr r0, [sp, #0x10]
    // add r4, #0x20
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x34]
}




void ov96_021E8EE4(void) {
    // add r0, sp, #0x80
    // mvn r0, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #8
    // add r1, #0xc
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x58]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // str r5, [sp, #0x54]
    // add r0, sp, #0x80
    // str r1, [sp, #0x50]
    // add r0, sp, #0x2c
    // add r2, r2, r5
    // add r0, r0, r5
    // add r0, r0, r5
    // add r0, r0, r5
    // add r0, r0, r5
}




void ov96_021E8FB4(void) {
}




void ov96_021E8FE0(void) {
    // add r0, r1, r0
    // str r7, [sp]
    // add r2, #0x54
    // str r1, [sp, #4]
    // add r1, r1, r4
    // add r2, r2, r6
    // add r3, r5, r6
    // add r3, #0x54
    // add r2, r0, r4
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r0, r4
    // add r1, r1, r4
    // add r0, r5, r6
    // add r0, #0x58
    // add r2, r2, r0
    // add r0, r1, r0
    // add r1, #0x24
    // add r0, #8
    // str r0, [r1, r4]
    // add r6, r0, r4
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021E90FC(void) {
}




void ov96_021E9104(void) {
    // str r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r5, r7
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r7, r7, r6
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
}




void ov96_021E9180(void) {
    // add r0, r0, r1
}




void ov96_021E91B8(void) {
    SpeciesToOverworldModelIndexOffset(0x000001ED);
    // add r4, r0, r1
    OverworldModelLookupHasFemaleForm(r5, 0x00000129);
    OverworldModelLookupFormCount(r5);
    // add r4, r4, r6
}




void ov96_021E9204(void) {
    // add r2, sp, #0
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    ov96_021E8BAC(0);
    _fgr(r5, 0);
    _fmul(0x45800000, r5);
    _fadd((0x3f << 0x18), r0);
    _fmul(r5);
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    _fgr(r4, 0);
    _fmul(0x45800000, r4);
    _fadd((0x3f << 0x18), r0);
    _fmul(r4);
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetAffineScale(r6);
}




void ov96_021E9290(void) {
}




void ov96_021E92AC(void) {
}




void ov96_021E92B0(void) {
    // ldr r2, [sp, #0x10]
}




void ov96_021E92D0(void) {
}




void ov96_021E92E0(void) {
    // str r0, [sp]
    // ldr r4, [sp]
    // add r4, #0x18
    // ldr r0, [sp]
}




void ov96_021E9320(void) {
    // add r5, #0x18
}




void ov96_021E9344(void) {
    // add r4, #0x24
    // add r0, r4, r0
}




void ov96_021E9370(void) {
    // add r5, #0x24
    // add r0, r5, r0
}




void ov96_021E9394(void) {
    // str r3, [r0]
    // str r2, [r0, r1]
}




void ov96_021E93B4(void) {
    // str r0, [sp]
    // add r0, sp, #0x14
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x24
    // mov ip, r0
    // add r1, sp, #8
    // add r0, r1, r2
    // mov r3, ip
    // str r7, [r1, r2]
    // ldr r2, [sp, #4]
    // str r2, [r0]
    // str r0, [r1]
    // str r2, [r0]
    // str r0, [r1]
    // str r2, [r0]
    // str r0, [r1]
    // str r2, [r0]
    // str r0, [r1]
    // str r1, [r0]
    // mov r0, ip
    // add r0, #0x18
    // mov ip, r0
    // ldr r0, [sp]
    // mvn r1, r1
    // add r0, sp, #8
    // ldr r4, [sp]
    // str r6, [r4, r7]
    // ldr r6, [sp]
}




void ov96_021E94EC(void) {
    // add r1, r5, r0
}




void ov96_021E9510(void) {
}




void ov96_021E9524(void) {
}




void ov96_021E9528(void) {
}




void ov96_021E952C(void) {
    // add r0, r4, r0
    // add r1, r6, r1
}




void ov96_021E9570(void) {
    // str r1, [sp]
    // add r1, sp, #4
    // str r0, [r1]
    // ldr r0, [sp]
    // add r6, sp, #4
    // add r2, r3, r2
    // str r2, [r6, r5]
    // ldr r1, [sp]
    // add r4, r4, r1
    // add r3, sp, #4
    // str r2, [r4, r1]
}




void ov96_021E95D8(void) {
    // add r1, r5, r0
    // add r1, r1, r0
}




void ov96_021E95F8(void) {
    PokeathlonCourse_GetHeapID();
    // str r0, [sp, #8]
    // ldr r3, [sp, #8]
    NewMsgDataFromNarc(1, 0x1b, 0x00000135);
    ov96_021E9344(r4);
    // str r6, [r4]
    // ldr r0, [sp, #8]
    *((u32*)(r0 + 0xc)) = r5;
    MessageFormat_New();
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r3, sp, #0x10
    BufferIntegerAsString(*((u8*)(r3 + 0x10)), r5, *((u8*)(r3 + 0x14)));
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #8]
    ReadMsgData_ExpandPlaceholders(r6, r7);
    MessageFormat_Delete(r6);
    String_Copy(*((u32*)(r4 + 0x10)), r5);
    String_Delete(r5);
    DestroyMsgData(r7);
}




void ov96_021E966C(void) {
    PokeathlonCourse_GetHeapID();
    // str r0, [sp, #8]
    // ldr r3, [sp, #8]
    NewMsgDataFromNarc(1, 0x1b, 0x00000135);
    ov96_021E9344(r4);
    // str r5, [r4]
    // ldr r0, [sp, #8]
    *((u32*)(r0 + 0xc)) = r6;
    MessageFormat_New();
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, sp, #0x10
    // add r3, sp, #0x30
    // ldr r2, [sp, #0x20]
    BufferIntegerAsString(*((u8*)(1 + 0x18)), *((u8*)r3));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x10
    // add r3, sp, #0x34
    // ldr r2, [sp, #0x24]
    BufferIntegerAsString(r5, *((u8*)(r1 + 0x1c)), *((u8*)r3));
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #8]
    ReadMsgData_ExpandPlaceholders(r5, r7);
    MessageFormat_Delete(r5);
    String_Copy(*((u32*)(r4 + 0x10)), r6);
    String_Delete(r6);
    DestroyMsgData(r7);
}




void ov96_021E96F8(void) {
}




void ov96_021E9718(void) {
    // sub r1, r1, r0
}




void ov96_021E9784(void) {
}




void ov96_021E97B8(void) {
}




void ov96_021E97EC(void) {
}




void ov96_021E9820(void) {
    // add r1, #0x24
    // add r0, #0xf0
    // add r0, #0x50
    // add r0, r0, r1
}




void ov96_021E9858(void) {
}




void ov96_021E9870(void) {
    // str r2, [sp]
    // add r7, #0x28
    // add r0, r0, r1
    // ldr r1, [sp]
}




void ov96_021E98D0(void) {
}




void ov96_021E98F4(void) {
    // str r3, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r3, r7, r4
    // add r0, r1, r0
    // str r0, [r5, r4]
    // add r2, r5, r4
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // add r0, r1, r0
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov96_021E9994(void) {
}




void ov96_021E99B8(void) {
}




u8 ov96_021E99F4(void) {
}




u8 ov96_021E99F8(void) {
}




void ov96_021E99FC(void) {
}




void ov96_021E9A04(void) {
}




u8 ov96_021E9A10(void) {
}




u8 ov96_021E9A14(void) {
}




u8 ov96_021E9A18(void) {
}




void ov96_021E9A1C(void) {
}




void ov96_021E9A24(void) {
}




void ov96_021E9A2C(void) {
}




void ov96_021E9A38(void) {
    // bx r3
    // nop
    // _021E9A44: .word PokeathlonCourse_GetField974_AtIndex
}




void ov96_021E9A48(void) {
}




void ov96_021E9A54(void) {
}




void ov96_021E9A68(void) {
    // bx r3
    // _021E9A74: .word ov96_021E86FC
}




void ov96_021E9A78(void) {
    // add r2, sp, #0
    // strb r0, [r2]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // tst r0, r4
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, sp, #0
    // str r5, [r7]
    // add r4, sp, #0
}




void ov96_021E9C0C(void) {
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // add r0, #0xac
    // add r0, #0xb0
}




void ov96_021E9CF4(void) {
    // and r0, r1
}




void ov96_021E9D08(void) {
    // add r0, r0, r1
}




void ov96_021E9D10(void) {
    // tst r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x80
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x84
    // str r0, [r1]
    // tst r0, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x8c
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x90
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x88
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x94
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x98
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x9c
    // str r0, [r1]
    // tst r0, r1
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0xa0
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0xa4
    // str r0, [r1]
    // tst r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0xa8
    // str r0, [r1]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xac
    // str r0, [r1]
    // add r0, #0xac
    // add r0, #0xb0
    // str r1, [r0]
    // tst r0, r1
    // add r0, #0xf8
    // tst r0, r2
    // tst r0, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xb0
    // add r4, #0xb0
    // str r0, [r1]
}




void ov96_021EA214(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x15
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0xa0]
    // str r4, [sp, #0x38]
    // str r0, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
    // str r7, [sp, #0x60]
}




void ov96_021EA2C4(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x1a
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // str r7, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // str r0, [sp, #0x60]
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
}




void ov96_021EA374(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x1d
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // str r7, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // str r0, [sp, #0x60]
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
}




void ov96_021EA424(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x1b
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // str r7, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // str r0, [sp, #0x60]
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
}




void ov96_021EA4D4(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x1c
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // str r7, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // str r0, [sp, #0x60]
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
}




void ov96_021EA584(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x1e
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // str r7, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // str r0, [sp, #0x60]
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
}




void ov96_021EA634(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x1f
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // str r7, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // str r0, [sp, #0x60]
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
}




void ov96_021EA6E4(void) {
    // str r3, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r1, [sp]
    // sub r2, #0x20
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x38]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x6c
    // add r0, sp, #0x6c
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0xa8]
    // str r7, [sp, #0x3c]
    // str r0, [sp, #0x68]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r1, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x3c
    // str r0, [sp, #0x60]
    // add r0, sp, #0x3c
    // str r4, [sp, #0x64]
}




void ov96_021EA7A4(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp]
    // sub r2, #0x21
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r3, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r3, [sp, #0x30]
    // str r3, [sp, #0x18]
    // ldr r3, [sp, #0x34]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x68
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r4, [sp, #0x38]
    // str r7, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // add r0, sp, #0x38
}




void ov96_021EA854(void) {
    // str r3, [sp]
    // str r5, [r4]
    // ldr r0, [sp]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x18]
}




void ov96_021EA894(void) {
}




void ov96_021EA8A8(void) {
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #8]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r2, [sp, #0xc]
    // str r7, [sp, #0x10]
    *((u32*)(r0 + 0x30)) = 0x10;
    *((u32*)(r0 + 0x34)) = 0x10;
    // ldr r0, [sp, #0x10]
    *((u32*)(r0 + 0x2c)) = 3;
    *((u32*)(r0 + 0x2c)) = 4;
    *((u32*)(r0 + 0x2c)) = 5;
    GF_AssertFail(5);
    *((u32*)(r5 + 0x2c)) = 3;
    ov96_021E9CF4(*((u32*)(r6 + 0x18)), 2);
    ov96_021EAA88(r6, *((u32*)(r7 + 4)), *((u32*)(r7 + 0x10)), 0x16);
    *((u32*)(r5 + 0x20)) = r0;
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x20)), 1);
    Sprite_SetAnimCtrlSeq(0);
    // add r0, r1, r0
    *((u32*)(r5 + 0x5c)) = 1;
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x20)), 0);
    *((u32*)(r5 + 0x5c)) = 0;
    ov96_021E9CF4(*((u32*)(r6 + 0x18)), 4);
    ov96_021EAA88(r6, *((u32*)(r7 + 4)), *((u32*)(r7 + 0x10)), 0x15);
    *((u32*)(r5 + 0x24)) = r0;
    GF_AssertFail(*((u32*)(r4 + 8)));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x24)), *((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x10]
    *((u32*)(r5 + 0x28)) = 3;
    *((u32*)(r5 + 0x28)) = 4;
    *((u32*)(r5 + 0x28)) = 5;
    GF_AssertFail(5);
    *((u32*)(r5 + 0x28)) = 3;
    *((u32*)(r5 + 0x58)) = 0xc;
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r4, #0x10
    // add r5, #0x44
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #4]
    ov96_021E8B1C(*((u32*)(r6 + 0x14)), *((u32*)(r6 + 4)), r7);
    // ldr r2, [sp, #0x14]
    SysTask_CreateOnMainQueue(ov96_021EAA24, r6);
}




void ov96_021EAA00(void) {
}




void ov96_021EAA04(void) {
}




void ov96_021EAA20(void) {
}




void ov96_021EAA24(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r5, [sp, #4]
    // add r6, #0x1c
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r5, #0x44
    // add r6, #0x44
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
}




void ov96_021EAA88(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r7, [sp]
    // mvn r1, r1
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x2c]
    // str r6, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    // str r2, [sp, #0x18]
    // ldr r2, [sp, #0x34]
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r0, sp, #0x68
    // str r0, [sp, #0x38]
    // add r0, sp, #0x68
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x64]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x38
    // add r0, sp, #0x38
    // str r1, [sp, #0x5c]
    // str r4, [sp, #0x60]
}




void ov96_021EAB38(void) {
}




void ov96_021EAB74(void) {
}




void ov96_021EAB94(void) {
}




void ov96_021EABA8(void) {
    // add r1, r4, r1
    // add r1, r4, r1
}




void ov96_021EABDC(void) {
}




void ov96_021EABE0(void) {
}




void ov96_021EABF4(void) {
}




void ov96_021EAC08(void) {
}




void ov96_021EAC0C(void) {
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EAC2A: ; jump table
}




void ov96_021EAC5C(void) {
    // sub r1, #0xc
    // bmi _021EAD04
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EAC94: ; jump table
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EACCE: ; jump table
}




void ov96_021EAD08(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EAD4C: ; jump table
}




void ov96_021EAD78(void) {
}




void ov96_021EAD88(void) {
    // add r1, sp, #4
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // add r0, r6, r0
    // add r4, sp, #4
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0x10
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // sub r1, r3, r1
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // add r4, sp, #4
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0x10
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // sub r1, r3, r1
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, sp, #4
}




void ov96_021EAE4C(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // add r0, r6, r0
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov96_021EAE9C(void) {
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // str r1, [r5]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [r4]
}




void ov96_021EAEC8(void) {
    // str r3, [r1]
    // str r0, [r2]
}




void ov96_021EAED4(void) {
    // add r0, r0, r1
    // add r0, r0, r2
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, sp, #0xc
    // add r2, sp, #0
    // add r1, sp, #0
    // add r0, sp, #0xc
    // add r2, sp, #0
    // add r1, sp, #0
    // ldr r0, [sp, #0x28]
    // add r0, sp, #0xc
    // add r2, sp, #0
    // add r1, sp, #0
}




void ov96_021EAF60(void) {
}




void ov96_021EAF6C(void) {
}




void ov96_021EAF70(void) {
}




void ov96_021EAF78(void) {
}




void ov96_021EAF8C(void) {
}




void ov96_021EAF90(void) {
}




void ov96_021EAF94(void) {
    // add r1, sp, #4
    // str r0, [r1]
    // add r2, sp, #0x10
    // add r3, sp, #4
    // str r0, [sp]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    // add r1, r6, r0
    // sub r0, r1, r0
    // sub r2, r4, r1
    // add r1, r0, r1
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, sp, #4
}




void ov96_021EB01C(void) {
}




void ov96_021EB03C(void) {
    // sub r2, r5, r3
    // add r1, r2, r1
    // asr r1, r1, #1
    // add r1, r3, r1
    // sub r0, r0, r1
    // sub r1, r5, r1
    // add r1, r0, r1
    // ldr r0, [sp, #0x10]
    // str r7, [r6]
    // str r1, [r0]
}




void ov96_021EB06C(void) {
    // sub r2, r5, r3
    // add r1, r2, r1
    // asr r1, r1, #1
    // add r1, r3, r1
    // sub r0, r0, r1
    // add r1, r0, r5
    // sub r1, r1, r0
    // ldr r0, [sp, #0x18]
    // str r7, [r6]
    // str r1, [r0]
}




void ov96_021EB0A4(void) {
    // add r4, r2, r4
    // str r1, [r3]
    // sub r3, r0, r1
    // add r0, r3, r0
    // sub r2, r4, r2
    // asr r0, r0, #1
    // add r0, r2, r0
    // add r1, r1, r0
    // ldr r0, [sp, #8]
    // str r1, [r0]
}




void ov96_021EB0CC(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0xc]
    // str r0, [sp, #4]
    // str r2, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0x14]
    // add r0, sp, #0
    // add r1, sp, #0xc
    // add r2, sp, #0x18
    // add r0, sp, #0x18
}




void ov96_021EB10C(void) {
}




void ov96_021EB120(void) {
}




void ov96_021EB138(void) {
}




void ov96_021EB144(void) {
}




void ov96_021EB180(void) {
    // str r6, [r4]
    // ldmia r5!, {r0, r1}
    // add r2, #8
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // add r1, #0x18
    // add r0, r4, r5
    // str r0, [r6, r7]
}




void ov96_021EB21C(void) {
    // add r0, r0, r6
    // add r0, r0, r6
    // add r0, r5, r0
}




void ov96_021EB29C(void) {
    // str r6, [r1, r0]
}




void ov96_021EB2BC(void) {
    // str r3, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
}




void ov96_021EB2F4(void) {
    // str r3, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [r4]
}




void ov96_021EB334(void) {
    // str r3, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
}




void ov96_021EB36C(void) {
    // str r3, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
}




void ov96_021EB3A4(void) {
    // add r0, r0, r4
    // add r0, r0, r4
    // add r4, #0x14
}




void ov96_021EB3E4(void) {
    // add r6, sp, #8
    // str r6, [sp]
    // add r2, sp, #8
}




void ov96_021EB408(void) {
    // str r3, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r4, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r1, #8
    // add r2, #0xc
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // add r0, sp, #0x60
    // str r0, [sp, #0x30]
    // add r0, sp, #0x60
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x5c]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // add r0, sp, #0x30
    // add r0, sp, #0x30
    // str r1, [sp, #0x54]
    // str r6, [sp, #0x58]
    // strh r6, [r3, r2]
    // add r1, r3, r2
    // add r1, r3, r2
    // add r1, sp, #0x88
    // add r1, r3, r2
    // add r1, r2, r0
    // ldr r0, [sp, #0x2c]
}




void ov96_021EB4F4(void) {
    // strh r1, [r0]
    // add r0, #0xc
}




void ov96_021EB52C(void) {
    // ldrh r3, [r0]
}




void ov96_021EB564(void) {
}




void ov96_021EB570(void) {
}




void ov96_021EB57C(void) {
}




void ov96_021EB588(void) {
}




void ov96_021EB594(void) {
}




void ov96_021EB5A0(void) {
}




void ov96_021EB5AC(void) {
}




void ov96_021EB5B8(void) {
}




void ov96_021EB5BC(void) {
}




void ov96_021EB5C8(void) {
    // ldr r2, [sp, #0x10]
    // add r0, #0x18
    // add r5, #0x18
}




void ov96_021EB5E8(void) {
}




void ov96_021EB5EC(void) {
    // add r0, r1, r2
    // add r0, r1, r0
    // add r5, #0x14
}




void ov96_021EB630(void) {
}




void ov96_021EB63C(void) {
    // add r0, r1, r4
    // add r4, #0xc
}




void ov96_021EB678(void) {
}




void ov96_021EB680(void) {
}




void ov96_021EB688(void) {
}




void ov96_021EB690(void) {
}




void ov96_021EB698(void) {
}




void ov96_021EB6A0(void) {
}




void ov96_021EB6A8(void) {
}




void ov96_021EB6C8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // strb r0, [r4]
}




void ov96_021EB730(void) {
    // str r0, [sp, #0xc]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetMode();
    // ldr r0, [sp, #0xc]
    ov96_021EE324();
    ov96_021EE830(*((u32*)(r4 + 0xc)));
    ov96_021EEA80(*((u32*)(r4 + 0xc)));
    ov96_021EE97C(*((u32*)(r4 + 0xc)));
    // add r1, #0xb5
    // mvn r5, r5
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB78A: ; jump table
    // add r2, #0xb1
    BufferPokeathlonCourseName(0, *((u8*)r4));
    // add r0, #0xb5
    // strb r1, [r0]
    sub_0200FC20((r5 >> 0x11), 1);
    PlaySE(0x000008DC);
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb4
    // add r0, #0xb4
    // add r0, #0xb4
    // strb r1, [r0]
    // add r0, #0xb4
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, (r5 >> 0x11));
    // add r0, #0xb5
    // strb r1, [r0]
    IsPaletteFadeFinished(r4, 4);
    // add r0, #0xb5
    // strb r1, [r0]
    // add r1, #0xb2
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetParticipantData(r4, *((u8*)r4));
    // add r1, #0xb2
    // ldr r0, [sp, #0xc]
    ov96_021ED838(*((u32*)r0), *((u8*)r4));
    ov96_021EE908(*((u32*)(r4 + 0xc)), r0);
    // add r1, #0xb2
    // ldr r0, [sp, #0xc]
    ov96_021ED838(*((u8*)r4));
    // add r1, #0xb2
    // ldr r0, [sp, #0xc]
    ov96_021ED86C(*((u8*)r4));
    ov96_021EDF3C(r6, r0, 7, 1);
    // add r0, #0xb5
    // strb r1, [r0]
    // add r1, #0xb2
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetPlayerProfileFromData(r4, *((u8*)r4));
    BufferPlayersName(r6, 0, r0);
    // add r1, #0xb2
    // ldr r0, [sp, #0xc]
    ov96_021ED524(*((u8*)r4), ((0 << 0x18) >> 0x18), (0 + 1));
    // str r0, [sp]
    // add r2, #0xb2
    // ldr r1, [sp, #0xc]
    // add r0, #0x20
    ov96_021ECB38(r4, *((u8*)r4), 2);
    // add r0, #0xb2
    // add r0, r4, r0
    ManagedSprite_SetAnim(*((u32*)((*((u8*)r4) << 2) + 0x20)), 1);
    // add r1, #0xb2
    // ldr r0, [sp, #0xc]
    ov96_021ED8A4(*((u8*)r4));
    // asr r1, r1, #0x10
    PlaySE_SetPitch(((0x000008DD << 0x10) >> 0x10), (*((u32*)(ov96_0221B088 + (((r0 << 0x18) >> 0x18) << 2))) << 0x10), (((r0 << 0x18) >> 0x18) << 2));
    // add r0, #0xb0
    // strb r5, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb0
    // add r0, #0xb2
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetMode(r4, 5);
    // ldr r0, [sp, #0xc]
    ov96_021EE54C();
    ov96_021EC2E0(r4);
    // add r0, #0x88
    Heap_Free(*((u32*)r4));
    SysTask_Destroy(*((u32*)(r4 + 8)));
    ov96_021EE944(*((u32*)(r4 + 0xc)));
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_SetStateField07(2);
    GF_AssertFail(0);
    // mvn r0, r0
    ov96_021EE8CC(*((u32*)(r4 + 0xc)), r5);
    // add r0, #0xb7
    // add r0, #0xb7
    // strb r1, [r0]
    // add r0, #0xb0
    // add r0, #0xb2
    // add r2, #0x94
    // add r0, r1, r0
    // add r0, #0x94
    // add r2, #0x94
    // add r0, #0x94
    // str r3, [r2]
    ov96_021EAA04(*((u32*)(r4 + 0x14)), (((((*((u8*)r4) << 1) << 0x18) >> 0x18) << 0x18) >> 0x18), r4, (*((u32*)r4) + 1));
    ov96_021EAC0C(2);
    ov96_021EAC5C(r7, 0x10);
    // add r1, #0x94
    // str r1, [r0]
    // str r5, [sp, #0x10]
    ov96_021EAA04(*((u32*)(r4 + 0x14)), (((r6 + 1) << 0x18) >> 0x18), *((u32*)r4));
    ov96_021EAC0C(1);
    ov96_021EAC5C(r7, 0);
    ov96_021EAA20(r7);
    ov96_021E8BAC();
    Sprite_GetCellAnim();
    *((u32*)(r0 + 0x10)) = (r5 << 0xc);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r2, #0xb2
    // ldr r1, [sp, #0xc]
    // add r0, #0x20
    ov96_021ECB38(r4, (r5 << 0xc), *((u8*)r4), 1);
    // add r0, #0xb0
    // strb r2, [r0]
    // add r0, #0xb2
    // add r0, #0xb2
    // strb r1, [r0]
    // add r4, #0x94
    // str r2, [r4]
}




void ov96_021EBA98(void) {
    PokeathlonCourse_GetHeapID(*((u8*)r1));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    GF_SndStartFadeOutBGM(0, 0x5a);
    PlaySE(0x000008DD);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    GF_AssertFail(1);
}




void ov96_021EBAFC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // strb r0, [r4]
}




void ov96_021EBB64(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r0, #0x8c
    ov96_021ECBFC(*((u32*)r0));
    // add r0, #0x90
    ov96_021ED0C8(*((u32*)r4));
    PokeathlonCourse_GetMode(r6);
    ov96_021EE440(r6);
    ov96_021EE830(*((u32*)(r4 + 0xc)));
    ov96_021EEA80(*((u32*)(r4 + 0xc)));
    ov96_021EE97C(*((u32*)(r4 + 0xc)));
    // add r1, #0xb5
    // mvn r7, r7
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EBBD0: ; jump table
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021ED6F8(r6, ((0 << 0x18) >> 0x18));
    // add r0, #0x8c
    ov96_021ECC38(*((u32*)r4), ((r5 << 0x18) >> 0x18), r0);
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb2
    // add r0, #0xb2
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021ED6F8(r6, 4);
    // add r1, #0xb2
    ov96_021ED578(r6, *((u8*)r4), r0);
    // add r0, #0xb2
    // add r0, #0xb2
    // strb r1, [r0]
    ov96_021ED5E0(r6, (*((u8*)r4) + 1));
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021EC2E0(r4, 6);
    ov96_021ED754(r6);
    // add r1, #0xb4
    // add r0, #0xb2
    // strb r1, [r0]
    // add r0, #0xb3
    // strb r1, [r0]
    // add r0, #0xb4
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021ED748(r4, 6);
    ov96_021EDDA4(r6, ov96_021ED618, r0);
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021EC2E0(r4, 7);
    ov96_021ED78C(r6);
    // add r1, #0xb4
    // add r0, #0xb2
    // strb r1, [r0]
    // add r0, #0xb3
    // strb r1, [r0]
    // add r0, #0xb4
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021ED74C(r4, 8);
    ov96_021EDDA4(r6, ov96_021ED660, r0);
    ov96_021EDCB4(r6);
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021EDCB4(r6, 0xb);
    // add r0, #0xb5
    // add r7, #0xf
    // strb r1, [r0]
    ov96_021EC2E0(r4, 0xa);
    ov96_021ED7C4(r6);
    // add r1, #0xb4
    // add r0, #0xb2
    // strb r1, [r0]
    // add r0, #0xb3
    // strb r1, [r0]
    // add r0, #0xb4
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021ED750(r4, 0xb);
    ov96_021EDDA4(r6, ov96_021ED6A8, r0);
    // add r0, #0xb5
    // strb r1, [r0]
    GF_GetCurrentPlayingBGM(r4, 0xc);
    StopBGM(0x10);
    PlaySE(0x000006EE);
    // add r0, #0x8c
    ov96_021ECC14(*((u32*)r4));
    // add r1, #0x94
    // add r0, #0x94
    // add r1, #0x94
    // str r2, [r1]
    PokeathlonCourse_GetMode(r6, r4, (*((u32*)r4) + 1));
    // add r1, #0x94
    // str r3, [r1]
    // add r1, #0xb4
    // add r0, #0xb4
    // strb r3, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021EDF3C(r5, (0xd + 1), 1, 0);
    // add r2, #0xb4
    ov96_021ED728(r6, ((0 << 0x18) >> 0x18), *((u8*)r4));
    // add r0, #0x8c
    ov96_021ECC38(*((u32*)r4), ((r5 << 0x18) >> 0x18), ((r0 << 0x10) >> 0x10));
    // add r0, #0xb4
    // add r0, #0xb4
    // strb r1, [r0]
    // add r1, sp, #0x14
    ov96_021ED7FC(r6, (*((u8*)r4) + 1));
    // add r0, #0x8c
    // add r1, #0x9c
    // add r2, sp, #0x14
    ov96_021ECC7C(*((u32*)r4), r4);
    // add r0, #0x9c
    // add r0, #0xa0
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0x9c
    ov96_021EE290(r4, 0xf);
    // add r0, #0xb5
    // strb r1, [r0]
    // add r1, #0x9c
    // add r0, #0x8c
    ov96_021ECC4C(*((u32*)r4), ((((*((u32*)r4) << 4) >> 0x1c) << 0x18) >> 0x18));
    ov96_021EDF3C(r5, r0, 3, 0);
    // add r1, #0x8c
    ov96_021EDE64(r6, *((u32*)r4));
    // add r0, #0xb5
    // strb r1, [r0]
    ov96_021EC458(*((u32*)(r4 + 4)), *((u32*)r4));
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0x9c
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    PokeathlonCourse_GetPlayerProfileFromData(r6, 0x11);
    BufferPlayersName(r5, 0, r0);
    // ldr r1, [sp, #0xc]
    ov96_021ECA70(r6, ((r1 << 0x18) >> 0x18));
    // add r0, #0x90
    ov96_021ED158(*((u32*)r4), 1);
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // add r0, #0x20
    ov96_021ECB38(r4, r6, 2);
    // ldr r0, [sp, #0xc]
    // add r0, r4, r0
    ManagedSprite_SetAnim(*((u32*)((r0 << 2) + 0x20)), 1);
    StopSE(0x000006EE, 0);
    PlaySE(0x000008E2);
    PlaySE((0x8e << 4));
    PlayBGM(0x00000476);
    // add r0, #0xb1
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    // add r2, #0xb1
    BufferPokeathlonCourseName(r4, 0, *((u8*)r4));
    // add r0, #0xb5
    // strb r1, [r0]
    // add r1, #0x9c
    PokeathlonCourse_GetPlayerProfileFromData(r6, ((*((u32*)r4) << 4) >> 0x1c));
    BufferPlayersName(r5, 0, r0);
    // add r0, #0x80
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r0, #0xb1
    ov96_021EDC38(*((u8*)r4), 0);
    BufferPokeathlonMedalName(r5, 1, r0);
    // add r0, #0xb1
    // add r0, #0x84
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r0, #0xb1
    ov96_021EDC38(*((u8*)r4), 1);
    BufferPokeathlonMedalName(r5, 2, r0);
    // add r0, #0xb5
    // strb r1, [r0]
    // add r0, #0xb1
    // str r0, [sp, #8]
    PokeathlonCourse_GetMode(r6, 0x13);
    // add r0, #0x9c
    // str r0, [sp, #4]
    ov96_021E5F24(r6);
    // ldr r1, [sp, #4]
    GF_AssertFail(r1);
    PokeathlonCourse_GetSaveData(r6);
    Save_Pokeathlon_Get();
    PokeathlonSave_dummy2();
    // add r1, #0x9c
    // str r0, [sp, #0x10]
    // add r0, #0x8c
    ov96_021ECC4C(*((u32*)r4), ((((*((u32*)r4) << 4) >> 0x1c) << 0x18) >> 0x18));
    // ldr r2, [sp, #8]
    // ldr r2, [sp, #0x10]
    // add r1, r2, r1
    // add r1, #0x9c
    PokeathlonCourse_GetPlayerProfileFromData(r6, ((*((u32*)r4) << 4) >> 0x1c));
    BufferPlayersName(r5, 0, r0);
    // ldr r2, [sp, #8]
    BufferPokeathlonCourseName(r5, 1);
    // ldr r2, [sp, #8]
    BufferPokeathlonCourseName(r5, 0);
    // add r0, #0xb5
    // strb r1, [r0]
    StopSE(0x000008E2, 0x78);
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xb5
    // strb r1, [r0]
    PokeathlonCourse_GetMode(r6, 0x15);
    ov96_021EE580(r6);
    ov96_021EC2E0(r4);
    // add r0, #0x88
    Heap_Free(*((u32*)r4));
    SysTask_Destroy(*((u32*)(r4 + 8)));
    ov96_021EE944(*((u32*)(r4 + 0xc)));
    PokeathlonCourse_SetStateField07(r6, 2);
    GF_AssertFail(0);
    // mvn r0, r0
    ov96_021EE8CC(*((u32*)(r4 + 0xc)), r7);
    // add r0, #0xb7
    // add r4, #0xb7
    // strb r0, [r4]
}




void ov96_021EC1B0(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r0, #0x90
    ov96_021ED0C8(*((u32*)r0));
    PokeathlonCourse_GetHeapID(r5);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    GF_SndStartFadeOutBGM(0, 0x1e);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    GF_AssertFail(1);
}




void ov96_021EC218(void) {
    // strh r0, [r5]
    // strh r0, [r5]
    // str r1, [r0]
}




void ov96_021EC298(void) {
    Heap_AllocAtEnd(*((u32*)r0), 0x10);
    MI_CpuFill8(0, 0x10);
    // add r0, #0x88
    // str r4, [r0]
    ov96_021EAA04(*((u32*)(r5 + 0x14)), r6);
    *((u32*)(r4 + 8)) = r0;
    // add r0, #0x98
    // str r2, [r0]
    // add r0, #0x98
    *((u32*)(r4 + 0xc)) = r5;
    SysTask_CreateOnMainQueue(ov96_021EC218, r4, 1);
    *((u32*)(r5 + 8)) = r0;
}




void ov96_021EC2E0(void) {
    // add r0, #0x98
}




void ov96_021EC2E8(void) {
    // add r3, sp, #0x74
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x58
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // str r2, [sp]
    BG_FillCharDataRange(r4, 1, 0, 1);
    // add r3, sp, #0x3c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // str r2, [sp]
    BG_FillCharDataRange(r4, 1, 0, 1);
    // add r3, sp, #0x20
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
}




void ov96_021EC3D8(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r1, [sp]
    // str r4, [sp, #4]
}




void ov96_021EC458(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
}




void ov96_021EC490(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    SpriteSystem_Alloc(*((u32*)r0), ov96_0221AF74);
    *((u32*)(r4 + 0x18)) = r0;
    SpriteManager_New();
    *((u32*)(r4 + 0x1c)) = r0;
    // add r1, sp, #0x14
    // add r2, sp, #0
    SpriteSystem_Init(*((u32*)(r4 + 0x18)), 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x1c)), 0x80);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 0x1c)));
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0x18)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x83 << 0xe));
}




void ov96_021EC51C(void) {
    // add r5, r6, r0
}




void ov96_021EC550(void) {
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x64
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // add r0, sp, #0
    // strh r5, [r0]
    // strh r1, [r0]
    // add r2, sp, #0
    // add r5, #0x40
}




void ov96_021EC5C0(void) {
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp, #8]
    // str r0, [r2]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x38]
    // ldr r0, [sp]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x14]
    // add r1, sp, #0xc
    // strh r0, [r1]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // add r4, r5, r0
    // add r2, sp, #0xc
    // str r4, [sp, #0x18]
    // str r2, [sp, #0x38]
    // str r2, [sp, #0x14]
    // add r0, sp, #0xc
    // ldrsh r1, [r0, r4]
    // sub r1, #0x10
    // strh r1, [r0]
    // ldr r0, [sp, #4]
    // add r0, r7, r4
    // add r6, r5, r0
    // add r2, sp, #0xc
    // add r1, sp, #0xc
    // ldrsh r1, [r1, r0]
    // add r0, sp, #0xc
    // add r1, #0x10
    // strh r1, [r0]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x40
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_021EC68C(void) {
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // add r0, #0x6d
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x14]
    // add r0, sp, #4
    // strh r5, [r0]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // add r0, #0x15
    // add r6, r7, r0
    // add r2, sp, #4
    // ldr r1, [sp]
    // ldr r0, [sp]
    // add r5, #0x50
    // str r0, [sp]
}




void ov96_021EC70C(void) {
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x6b
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x2c]
    // str r1, [sp, #8]
    // add r1, sp, #0
    // strh r4, [r1]
    // add r1, #0xb1
    // add r0, #0x18
    // add r1, sp, #0
    // strh r2, [r1]
    // add r6, r5, r0
    // add r2, sp, #0
    // add r4, #0x40
}




void ov96_021EC790(void) {
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r7, sp, #0x1c
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // add r3, sp, #0x30
    // add r1, sp, #0x30
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #8]
    // add r0, sp, #0x20
    // add r2, sp, #0x1c
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}




void ov96_021EC82C(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, #0x64
    // str r5, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r0, #0xb1
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #0x17
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #0x17
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0x1c
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0x1c
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021ECA18(void) {
    // str r0, [sp]
    // str r7, [sp, #4]
    // add r0, #0x6d
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021ECA70(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
}




void ov96_021ECAC4(void) {
    // str r0, [sp]
    // add r0, #0x20
    // str r0, [sp]
    // ldr r0, [sp]
}




void ov96_021ECB38(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r3, [sp, #0x20]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
}




void ov96_021ECBB8(void) {
    // str r0, [sp]
    // ldr r3, [sp]
    // add r5, r7, r0
    // stmia r6!, {r0}
    // add r3, #0x1c
    // ldr r0, [sp]
}




void ov96_021ECBF4(void) {
}




void ov96_021ECBFC(void) {
}




void ov96_021ECC14(void) {
    // add r5, #0x1c
}




void ov96_021ECC38(void) {
}




void ov96_021ECC4C(void) {
    // add r0, r0, r2
}




void ov96_021ECC58(void) {
    // mvn r0, r0
}




void ov96_021ECC7C(void) {
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // and r1, r0
    // str r0, [r5]
    // ldr r0, [sp, #4]
    ov96_021ECC4C((((0 << 0x1c) >> 4) | *((u32*)r1)), ((0 << 0x18) >> 0x18));
    // and r1, r2
    // str r1, [r5]
    // and r0, r1
    // ldr r1, [sp, #8]
    // stmia r5!, {r0}
    // str r0, [sp]
    MATH_QSort(r7, 4, 4, ov96_021ECC58);
    // and r4, r3
    // str r0, [r1]
}




void ov96_021ECD24(void) {
    *((u32*)(r0 + 0x14)) = 0x000003E7;
    IsSEPlaying(0x000008E3, 0x000003E7);
    PlaySE(0x000008E3);
    ov98_0221F120(*((u32*)(r6 + 0x14)), 3);
    ov98_0221F120(*((u32*)(r6 + 0x14)), 2);
    ov98_0221F120(*((u32*)(r6 + 0x14)), 1);
    ManagedSprite_SetAnim(*((u32*)(r6 + 4)), (r7 + 1));
    ManagedSprite_SetAnim(*((u32*)(r6 + 8)), (r5 + 1));
    ManagedSprite_SetAnim(*((u32*)(r6 + 0xc)), (r4 + 1));
    _u32_div_f(*((u32*)(r6 + 0x14)), 0x14);
    // mvn r2, r2
    ManagedSprite_OffsetPositionXY(*((u32*)r6), 0, 0);
    *((u32*)(r6 + 0x18)) = 0;
}




void ov96_021ECDC4(void) {
    // cmp r0, #0
    // bne _021ECDCE
}




void ov96_021ECDD4(void) {
    // add r2, r2, r1
    *((u32*)(r0 + 0x10)) = 0x000003E7;
    *((u32*)(r0 + 0x18)) = 1;
}




void ov96_021ECDEC(void) {
    GF_AssertFail();
    MI_CpuFill8(r5, 0, 0x18);
    MTRandom();
    _u32_div_f(5);
    MTRandom();
    _u32_div_f(5);
    _ffltu((r1 << 0xc));
    _fadd((0x3f << 0x18), r0);
    MTRandom();
    _u32_div_f(5);
    _ffltu((r1 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r1, r0, #1
    // add r0, r1, r0
    *((u32*)(r5 + 8)) = (6 << 0xa);
    MTRandom((6 << 0xa));
    // tst r0, r1
    MTRandom(1);
    _ffltu(((r0 << 0x1f) >> 0x13));
    _fadd((0x3f << 0x18), r0);
    MTRandom();
    _ffltu(((r0 << 0x1f) >> 0x13));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r0, r1
    // asr r0, r0, #1
    *((u32*)(r5 + 4)) = r0;
    MTRandom(0x0000019A);
    MTRandom(((r0 << 0x18) >> 0x18));
    _ffltu(((r0 << 0x18) >> 0xc));
    _fadd((0x3f << 0x18), r0);
    MTRandom();
    _ffltu(((r0 << 0x18) >> 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r5 + 0xc)) = r0;
    MTRandom();
    _u32_div_f(5);
    // and r0, r2
    *((u32*)(r5 + 0x14)) = ((1 << 0x14) | ((((r1 + 1) << 0x1c) >> 0xc) | 0xFFF0FFFF));
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // asr r1, r0, #0xc
    // add r0, sp, #0
    // strh r1, [r0]
    MTRandom(*((u32*)(r5 + 0xc)), ((((r1 + 1) << 0x1c) >> 0xc) | 0xFFF0FFFF), (6 - 1));
    // tst r0, r1
    // add r0, sp, #0
    *((u16*)(r0 + 6)) = 0xc;
    // add r2, sp, #0
    SpriteSystem_NewSpriteWithYOffset(r4, r7, (0x83 << 0xe));
    // str r0, [r5]
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_021ECF48(void) {
    GF_AssertFail();
    GF_SinDeg((((((*((u32*)(r5 + 0x14)) << 0xc) >> 0x1c) * ((*((u32*)(r5 + 0x14)) << 0x10) >> 0x10)) << 0x10) >> 0x10), ((*((u32*)(r5 + 0x14)) << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r3, r0, r3
    // adc r1, r6
    // add r0, r2, r1
    *((u32*)(r5 + 0xc)) = (r1 << 0x14);
    // add r2, r1, r0
    *((u32*)(r5 + 0x10)) = *((u32*)(r5 + 0xc));
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), *((u32*)(r5 + 0xc)), *((u32*)(r5 + 0xc)), (0x83 << 0xe));
    // asr r0, r0, #0xc
    // and r0, r1
    *((u32*)(r5 + 0x14)) = 0xFFEFFFFF;
    Sprite_DeleteAndFreeResources(*((u32*)r5), *((u32*)(r5 + 0x14)));
    // str r0, [r5]
    *((u32*)(r5 + 0x14)) = ((2 << 0x14) | r1);
    MTRandom(((2 << 0x14) | r1));
    // and r1, r2
    // and r0, r2
    // add r0, r3, r0
    *((u32*)(r5 + 0x14)) = (((r0 << 0x10) >> 0x10) | 0xFFFF0000);
}




void ov96_021ECFF8(void) {
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    *((u32*)(r0 + 0x10)) = 0;
    ManagedSprite_GetActiveAnim(*((u32*)r0), (6 - 1));
    // sub r0, #0xb
    // add r1, sp, #0
    *((u16*)(r1 + 6)) = r0;
    // asr r0, r0, #0xc
    // strh r0, [r1]
    // asr r0, r0, #0xc
    *((u16*)(r1 + 2)) = *((u32*)(r5 + 0x10));
    Sprite_DeleteAndFreeResources(*((u32*)r5));
    // add r2, sp, #0
    SpriteSystem_NewSpriteWithYOffset(r4, r7, (0x83 << 0xe));
    // str r0, [r5]
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_021ED054(void) {
    // str r7, [r4]
    // str r5, [r4, r0]
    // str r6, [r4, r0]
    // str r0, [r4, r1]
}




void ov96_021ED09C(void) {
    // add r5, #0x18
}




void ov96_021ED0C8(void) {
    // sub r1, #8
    // sub r0, #8
    // sub r1, #8
    // str r3, [r5, r1]
    // and r1, r2
    // str r0, [r5, r1]
    // str r2, [r5, r0]
    // add r6, #0x18
    // add r6, #0x18
    // add r4, #0x18
}




void ov96_021ED158(void) {
    // str r1, [r0, r2]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r3, #0xc6
}




void ov96_021ED17C(void) {
    // str r1, [sp]
    GF_AssertFail();
    // str r0, [sp, #4]
    // add r4, #0x18
    ov96_021ECDEC((r6 + 4), *((u32*)(r6 + (0x5b << 2))), *((u32*)(r6 + (0x17 << 4))));
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #0x18
    // add r5, #0x18
    // str r0, [sp, #4]
}




void ov96_021ED1D0(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    PokeathlonCourse_GetField1ED();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021ED1F4: ; jump table
    Heap_Create(0x5c, 0x87, (6 << 0x10));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021EB6A8(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    // ldr r0, [sp, #8]
    PokeathlonCourse_AllocPtr4FromHeap(0xbc);
    MI_CpuFill8(0, 0xbc);
    // str r0, [r4]
    // ldr r0, [sp, #8]
    ov96_021E5E7C(0x87);
    // add r1, #0xb1
    // strb r0, [r1]
    BgConfig_Alloc(*((u32*)r4), r4);
    *((u32*)(r4 + 4)) = r0;
    ov96_021EE740(*((u32*)r4));
    *((u32*)(r4 + 0xc)) = r0;
    ov96_021EC490(r4);
    ov96_021E9A78(*((u32*)r4), 6, 1);
    *((u32*)(r4 + 0x10)) = r0;
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    // ldr r0, [sp, #8]
    PokeathlonCourse_IncrementField1ED();
    // add r2, sp, #0x14
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0xc]
    SpriteManager_GetSpriteList(*((u32*)(0 + 0x1c)), 0);
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0xc]
    ov96_021EA854(*((u32*)r0), 0xc, 3, *((u32*)(r3 + 0x10)));
    // ldr r1, [sp, #0xc]
    *((u32*)(r1 + 0x14)) = r0;
    // add r6, sp, #0x58
    // add r5, sp, #0x14
    _s32_div_f(0, 3);
    _s32_div_f(r4, 3);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    ov96_021E6168(r7, r6);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    ov96_021E60C0(r7);
    ov96_021E6108();
    *((u32*)(r5 + 0x14)) = r0;
    // add r6, #0x10
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x58
    // add r3, sp, #0x14
    ov96_021EA8A8(*((u32*)(1 + 0x14)), 0xc);
    // ldr r0, [sp, #8]
    PokeathlonCourse_IncrementField1ED();
    // ldr r0, [sp, #0xc]
    ov96_021EAA00(*((u32*)(r0 + 0x14)));
    // ldr r0, [sp, #8]
    ov96_021EC82C();
    // ldr r0, [sp, #0xc]
    ov96_021EC550();
    // ldr r0, [sp, #0xc]
    ov96_021EC5C0();
    // ldr r0, [sp, #0xc]
    ov96_021EC68C();
    // ldr r0, [sp, #0xc]
    ov96_021EC70C();
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r1, #0x20
    ov96_021ECBB8(*((u32*)r0));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // add r1, #0x8c
    // str r0, [r1]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    ov96_021ED054(*((u32*)r0), *((u32*)(r1 + 0x18)), *((u32*)(r2 + 0x1c)));
    // ldr r1, [sp, #0xc]
    // add r1, #0x90
    // str r0, [r1]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0xc]
    ov96_021ECAC4();
    // ldr r0, [sp, #8]
    PokeathlonCourse_IncrementField1ED();
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)(r0 + 4)));
    // ldr r0, [sp, #8]
    PokeathlonCourse_SetField1F4(1);
    // ldr r0, [sp, #0xc]
    ov96_021EAA04(*((u32*)(r0 + 0x14)), ((0 << 0x18) >> 0x18));
    ov96_021EAB38(1);
    ov96_021EAA20(r4);
    ov96_021E8BAC();
    Sprite_GetCellAnim();
    *((u32*)(r0 + 0x10)) = (r6 << 0xc);
    ov96_021EAC0C(r4, 1);
    _s32_div_f(r5, 3);
    _s32_div_f(r5, 3);
    // add r1, #0x20
    ov96_021EAF94(r4, (r7 << 6), (0x30 * (r1 + 1)), (r1 + 1));
    // ldr r0, [sp, #0xc]
    ov96_021EC2E8(*((u32*)(r0 + 4)));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    ov96_021EC3D8(*((u32*)(r0 + 4)), *((u32*)r1));
    // ldr r0, [sp, #8]
    PokeathlonCourse_GetMode();
    // ldr r0, [sp, #8]
    PokeathlonCourse_GetSaveData();
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    ov96_021EE75C(*((u32*)(r0 + 0xc)), *((u32*)(r1 + 4)), 4, r4);
    sub_0203A994(2);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    // ldr r0, [sp, #0xc]
    // add r0, #0xb5
    // str r0, [sp, #0xc]
    // strb r1, [r0]
    GF_AssertFail(1, 0);
}




u32 ov96_021ED47C(void) {
}




void ov96_021ED48C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    // add r0, #0x90
    ov96_021ED09C(*((u32*)r4));
    // add r0, #0x8c
    ov96_021ECBF4(*((u32*)r4));
    ov96_021EE808(*((u32*)(r4 + 0xc)));
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 5);
    Heap_Free(*((u32*)(r4 + 4)));
    ov96_021EA894(*((u32*)(r4 + 0x14)));
    ov96_021E9C0C(*((u32*)(r4 + 0x10)));
    sub_0203A914();
    ov96_021EC51C(r4);
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    UnloadOverlayByID(FS_OVERLAY_ID);
    Heap_Destroy(0x87);
}




void ov96_021ED524(void) {
    // str r3, [sp, #8]
    // add r1, r6, r1
    // add r1, #0x12
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
}




void ov96_021ED578(void) {
}




void ov96_021ED5AC(void) {
}




void ov96_021ED5E0(void) {
    // add r0, #0xf0
}




void ov96_021ED618(void) {
    // add r1, r1, r3
    // add r4, r2, r1
    // add r0, #0xf0
    // lsl r0, r4
    // and r0, r1
}




void ov96_021ED660(void) {
    // add r1, r1, r3
    // add r4, r2, r1
    // add r0, #0xf0
    // lsl r0, r4
    // and r0, r1
}




void ov96_021ED6A8(void) {
    // add r1, r1, r3
    // add r4, r2, r1
    // add r0, #0xf0
    // lsl r0, r4
    // and r0, r1
}




void ov96_021ED6E8(void) {
}




void ov96_021ED6F8(void) {
    // add r0, #0xf0
}




void ov96_021ED728(void) {
}




u8 ov96_021ED748(void) {
}




u8 ov96_021ED74C(void) {
}




u8 ov96_021ED750(void) {
}




void ov96_021ED754(void) {
    // add r0, #0xf0
}




void ov96_021ED78C(void) {
    // add r0, #0xf0
}




void ov96_021ED7C4(void) {
    // add r0, #0xf0
}




void ov96_021ED7FC(void) {
    // add r0, #0xf0
    // add r0, r4, r1
    // strb r0, [r5, r1]
}




void ov96_021ED838(void) {
    // add r0, #0xf0
}




void ov96_021ED86C(void) {
    // add r0, #0xf0
    // add r0, r4, r0
}




void ov96_021ED8A4(void) {
    // add r0, #0xf0
    // add r0, r4, r0
}




void ov96_021ED8DC(void) {
    // add r0, #0x28
    // add r4, #8
    // add r4, #8
}




void ov96_021ED954(void) {
    // str r0, [sp]
    // add r4, sp, #4
    // ldr r0, [sp]
    // add r2, sp, #4
    // add r5, #0x28
    // sub r1, r6, r0
    // sub r1, r1, r0
    // sub r1, r1, r0
    // sub r1, r1, r0
    // sub r6, r1, r0
    // ldr r0, [sp]
}




void ov96_021ED9CC(void) {
    // str r0, [sp, #4]
    // and r0, r1
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp]
}




void ov96_021EDA58(void) {
    // str r0, [sp]
    PokeathlonCourse_GetFieldData();
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0x28
    ov96_021E8A20();
    // and r1, r0
    // asr r0, r0, #0xc
    // and r0, r1
    *((u32*)(r0 + 4)) = 0xF8007FFF;
    // and r0, r1
    *((u32*)(r0 + 8)) = 0xF000FFFF;
    // ldr r0, [sp]
    ov96_021ED954(0xF000FFFF, ((0 << 0x18) >> 0x18));
    // strb r0, [r4, r5]
    // ldr r0, [sp]
    ov96_021ED9CC();
    // and r0, r1
    // str r0, [sp, #0x20]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    *((u32*)(r4 + 4)) = ((*((u32*)(r4 + 4)) & ~(7)) | r0);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // ldr r5, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x28]
    ov96_021EDCEC((((((((*((u32*)(r4 + 4)) & ~(7)) | r0) << 0x1d) >> 0x1d) << 0x18) >> 0x18) << 0x18), ((*((u32*)(r4 + 4)) & ~(7)) | r0), ((((((((*((u32*)(r4 + 4)) & ~(7)) | r0) << 0x1d) >> 0x1d) << 0x18) >> 0x18) << 0x18) >> 0x18), ((0 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #0xc]
    // add r5, #0x20
    // ldr r0, [sp, #8]
    // add r0, #0x60
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // str r0, [sp, #4]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x2c]
    // add r0, #8
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // ldr r5, [sp, #0x10]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x14]
    // add r0, r6, r0
    // and r1, r0
    // lsl r2, r7
    // add r0, r0, r2
    *((u32*)(r4 + 4)) = (((((*((u32*)(r4 + 4)) << 5) >> 0x14) << 0x14) >> 5) | *((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // and r1, r0
    // lsl r2, r7
    // add r0, r0, r2
    // ldr r0, [sp, #0x2c]
    // str r1, [r0]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    ov96_021EDCEC(((((*((u32*)(((((*((u32*)(r4 + 4)) << 5) >> 0x14) << 0x14) >> 5) | *((u32*)(r4 + 4)))) << 4) >> 0x14) << 0x14) >> 4), (*((u32*)(((((*((u32*)(r4 + 4)) << 5) >> 0x14) << 0x14) >> 5) | *((u32*)(r4 + 4)))) | ((((*((u32*)(((((*((u32*)(r4 + 4)) << 5) >> 0x14) << 0x14) >> 5) | *((u32*)(r4 + 4)))) << 4) >> 0x14) << 0x14) >> 4)), 1, ((0 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x20]
    // str r0, [sp, #0x18]
    GF_AssertFail();
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // and r1, r0
    // lsl r2, r7
    // add r0, r0, r2
    *((u32*)(r4 + 4)) = (((((*((u32*)(r4 + 4)) << 0x11) >> 0x14) << 0x14) >> 0x11) | *((u32*)(r4 + 4)));
    // add r5, #0x20
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x60
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // and r1, r0
    // ldr r0, [sp, #0x20]
    *((u32*)(r4 + 8)) = (((0xFFFF0000 << 0x10) >> 0x10) | *((u32*)(r4 + 8)));
    MTRandom((((0xFFFF0000 << 0x10) >> 0x10) | *((u32*)(r4 + 8))), *((u32*)(r4 + 8)), 1);
    // and r2, r1
    // add r1, r4, r2
    *((u8*)(3 + 0xd)) = 0;
    // sub r1, r1, r2
    // ror r1, r0
    // add r2, r2, r1
}




void ov96_021EDC38(void) {
    // add r2, r0, r0
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EDC48: ; jump table
}




void ov96_021EDCB4(void) {
    // add r0, #0xf0
}




void ov96_021EDCEC(void) {
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EDD1A: ; jump table
    // add r1, r6, r0
    // add r0, r1, r0
    // add r1, r6, r0
    // add r0, r1, r0
    // add r0, r6, r0
    // add r1, r6, r0
    // add r0, r1, r0
}




void ov96_021EDD64(void) {
    // add r1, #0xb3
    // add r1, #0xb3
    // strb r2, [r1]
    // add r1, #0xb3
    // add r1, #0xb3
    // strb r2, [r1]
    // add r1, #0xb2
    // add r1, #0xb2
    // strb r2, [r1]
    // add r0, #0xb2
}




void ov96_021EDDA4(void) {
    // add r1, #0xb2
    // add r2, #0xb3
    // blx r6
    // add r0, #0xb2
    // add r0, #0xb3
    // add r0, r1, r0
    // add r6, r2, r0
    // add r0, #0xac
    // strb r2, [r0, r1]
    // add r0, #0xb4
    // add r2, #0xb3
    // add r0, #0xb4
    // strb r1, [r0]
    // add r1, #0xb2
    // add r1, #0xb2
    // add r0, #0x8c
}




void ov96_021EDE64(void) {
    ov96_021E5F24();
    // str r0, [sp, #4]
    PokeathlonCourse_GetHeapAllocPtr4(r4);
    // str r0, [sp]
    PokeathlonCourse_GetFieldData(r4);
    // ldr r0, [sp]
    // add r0, #0x9c
    // ldr r0, [sp, #4]
    // strh r0, [r7, r1]
    ov96_021ECC4C(r6, ((0 << 0x18) >> 0x18), (*((u16*)(r0 + (0x1d << 4))) & ~(1)));
    // ldr r1, [sp, #4]
    ov96_021ECC4C(r6, ((r1 << 0x18) >> 0x18));
    // strh r0, [r7, r1]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // add r0, #0xac
    // str r1, [r7, r0]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, #0x8c
    ov96_021ECC4C(*((u32*)(6 << 6)), ((*((u8*)(2 | *((u16*)(r7 + (0x1d << 4))))) << 0x18) >> 0x18), *((u16*)(r7 + (0x1d << 4))));
    // strh r0, [r7, r1]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x9c
    // str r0, [sp]
    ov96_021EE264(((0x000001D2 << 0x18) >> 0x18));
    // mvn r0, r0
    GF_AssertFail(0);
    // strh r0, [r7, r2]
}




void ov96_021EDF3C(void) {
}




void ov96_021EDF5C(void) {
    // ble _021EDF6A
    // cmp r2, #0xc
    // blt _021EDF60
    // nop
    // _021EDF78: .word ov96_0221B058
}




void ov96_021EDF7C(void) {
    // add r0, #0x20
}




void ov96_021EDF84(void) {
    // add r4, r4, r2
    // str r2, [r0]
}




void ov96_021EDFFC(void) {
    GF_AssertFail(*((u32*)ov96_0221B124));
    MTRandom();
    _u32_div_f(3);
    // strb r1, [r6, r4]
    _u32_div_f(*((u32*)r7), *((u32*)r5));
    // add r0, r1, r0
    // strb r0, [r6, r4]
}




void ov96_021EE040(void) {
    // add r4, sp, #0
    // strb r2, [r4]
    // add r5, sp, #0
    // strb r6, [r5]
    // sub r0, r0, r5
    // strb r0, [r1]
    MTRandom(3, *((u8*)(r0 + 0)), (ov96_0221AF54 + 4));
    _u32_div_f(r4);
    // add r0, sp, #0
}




void ov96_021EE0AC(void) {
    // add r4, sp, #0x20
    // stmia r4!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r3, sp, #0
    // str r0, [r4]
    // add r3, #1
    // strb r0, [r3]
    PokeathlonCourse_GetSaveData(r1, (0x1d - 1), r1, ((7 - 1) + 1));
    Save_Pokeathlon_Get();
    PokeathlonSave_GetAgainUnkB00();
    // add r0, sp, #0x20
    ov96_021EDF84(r0);
    // add r0, sp, #0
    // add r0, #1
    // add r1, sp, #0x20
    ov96_021EDFFC();
    // add r0, sp, #0
    // add r0, #1
    // add r1, sp, #0
    ov96_021EE040();
    ov96_021EDF7C(((r0 << 0x18) >> 0x18));
    // add r1, sp, #0
    // add r0, r1, r0
    // str r0, [r5]
    // and r0, r1
    // add r1, sp, #0x20
    // and r1, r2
    *((u32*)(r5 + 4)) = ((0xff << 0x18) | 0x00FFFFFF);
    ov96_021EDF5C(*((u32*)(r6 + 0x70)), 0x00FFFFFF, *((u32*)(*((u32*)(r5 + 4)) + (r4 << 2))));
    // and r1, r2
    *((u32*)(r5 + 4)) = ((r0 << 0x18) | 0x00FFFFFF);
}




void ov96_021EE144(void) {
    // add r6, sp, #0x20
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // add r4, sp, #0
    // str r0, [r6]
    // add r4, #1
    // strb r0, [r4]
    PokeathlonCourse_GetField974_AtIndex(r1, r2, r1);
    // add r0, sp, #0x20
    ov96_021EDF84(r0);
    // add r0, sp, #0
    // add r0, #1
    // add r1, sp, #0x20
    ov96_021EDFFC();
    // add r0, sp, #0
    // add r0, #1
    // add r1, sp, #0
    ov96_021EE040();
    ov96_021EDF7C(((r0 << 0x18) >> 0x18));
    // add r1, sp, #0
    // add r0, r1, r0
    // str r0, [r5]
    // and r0, r1
    // add r1, sp, #0x20
    // and r1, r2
    *((u32*)(r5 + 4)) = ((0xff << 0x18) | 0x00FFFFFF);
    ov96_021EDF5C(*((u32*)(r6 + 0x70)), 0x00FFFFFF, *((u32*)(*((u32*)(r5 + 4)) + (r4 << 2))));
    // and r1, r2
    *((u32*)(r5 + 4)) = ((r0 << 0x18) | 0x00FFFFFF);
}




void ov96_021EE1D8(void) {
    // str r2, [sp, #4]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    PokeathlonCourse_GetParticipantData(r1);
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    ov96_021E60D8(r7, r5);
    // add r0, r1, r0
    // add r0, r2, r0
    // add r0, r3, r0
    // add r0, r6, r0
    // add r5, r5, r0
    _s32_div_f(r5, 3, *((u8*)(r0 + 1)), *((u8*)(r0 + 3)));
    // sub r4, #8
    // ldr r1, [sp, #8]
    ov96_021E8448(r7, ((*((u32*)r1) << 0x18) >> 0x18));
    // ldr r1, [sp]
    // str r0, [r1]
    // and r1, r0
    // ldr r0, [sp]
    *((u32*)((0xff << 0x18) + 4)) = *((u32*)(r1 + 4));
    // and r1, r0
    // ldr r0, [sp]
    *((u32*)((r4 << 0x18) + 4)) = (*((u32*)(r1 + 4)) | (r4 << 0x18));
}




void ov96_021EE264(void) {
    // mvn r0, r0
}




void ov96_021EE290(void) {
    // and r0, r7
    // str r0, [r6]
    // and r0, r2
    // str r0, [r4, r1]
    // and r0, r3
    // str r0, [r4, r1]
    // str r0, [sp]
    MATH_QSort(r0, 4, 4, ov96_021ECC58);
    // and r2, r0
    // str r0, [r4]
}




void ov96_021EE324(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0x28
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0xf0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r0, #0xb7
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, #0x20
    // strb r6, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x50
    // ldr r0, [sp, #0x10]
    // strb r1, [r4]
    // ldr r5, [sp, #0x10]
    // add r5, #0x50
    // str r1, [sp, #4]
    // str r0, [sp]
    // add r5, #0x28
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, #0x21
    // ldr r0, [sp, #0xc]
    // add r0, #0x21
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    // add r0, #0x21
    // ldr r1, [sp, #4]
    // and r1, r2
    // ldr r0, [sp, #0xc]
    // add r0, #0x21
    // str r0, [sp, #0xc]
    // strb r1, [r0]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // strb r6, [r4]
    // ldr r0, [sp, #0x14]
    // add r0, #0xb8
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r0, #0x21
    // ldr r0, [sp, #8]
    // add r0, #0x20
    // str r0, [sp, #8]
}




void ov96_021EE440(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x14]
    PokeathlonCourse_GetDataCopyArea(r7);
    // str r0, [sp, #0x10]
    // add r0, #0x28
    ov96_021E8A20();
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0xf0
    ov96_021E8A20();
    // str r0, [sp, #8]
    ov96_021E5F24(r7);
    // ldr r0, [sp, #0x14]
    // add r0, #0xb7
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    *((u8*)(1 + 0xc)) = *((u8*)(r0 << 0x18));
    // ldr r0, [sp, #0x10]
    // add r0, #0x50
    ov96_021E8A20(1, ((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    ov96_021E8A20();
    // strb r1, [r4]
    PokeathlonCourse_GetParticipantCount(r7, *((u8*)r0), (0x24 - 1));
    // ldr r5, [sp, #0x10]
    // add r5, #0x50
    ov96_021E8A20(r5);
    // str r1, [sp, #4]
    // str r0, [sp]
    // add r5, #0x28
    PokeathlonCourse_GetParticipantCount(r7, 1);
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    *((u32*)((2 << 0x1c) + 8)) = (*((u32*)(r0 + 8)) | (2 << 0x1c));
    // ldr r0, [sp, #0xc]
    // and r1, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    *((u32*)(((0xEFFFFFFF << 0x1f) >> 3) + 8)) = (*((u32*)((2 << 0x1c) + 8)) | ((0xEFFFFFFF << 0x1f) >> 3));
    // ldr r0, [sp, #0x10]
    ov96_021E8A20(((0xEFFFFFFF << 0x1f) >> 3), (*((u32*)((2 << 0x1c) + 8)) | ((0xEFFFFFFF << 0x1f) >> 3)));
    // ldr r0, [sp, #0x14]
    // strb r6, [r4]
    ov96_021EEA80(*((u32*)(r0 + 0xc)));
    *((u8*)(r4 + 1)) = r0;
    // ldr r0, [sp, #0x14]
    // add r0, #0xb8
    // str r0, [sp, #0x14]
    *((u8*)(r4 + 2)) = *((u32*)r0);
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
}




void ov96_021EE54C(void) {
    // add r0, #0xf0
    // add r4, #0x21
}




void ov96_021EE580(void) {
    // add r0, #0xf0
}




void ov96_021EE5B4(void) {
}




void ov96_021EE5E0(void) {
    // add r5, #0x10
    // add r5, #0x10
}




void ov96_021EE60C(void) {
    *((u32*)(r0 + 4)) = r1;
    // add r5, #0x10
    AddWindow(*((u32*)(r0 + 4)), r0, ov96_0221B19A);
    FillWindowPixelBuffer(r5, 0);
    ClearWindowTilemap(r5);
    // add r4, #8
    // add r5, #0x10
}




void ov96_021EE644(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r4, #0x16
    // str r0, [sp, #0xc]
}




void ov96_021EE6A0(void) {
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)r0));
    String_New((1 << 8), *((u32*)r5));
    // str r0, [sp]
    // add r0, #0x10
    // add r3, #0xa6
    ov96_021EE700(r5, r6, r0, r4);
    // add r4, #0xbb
    // add r5, #0x20
    // str r0, [sp]
    ov96_021EE700(r5, r6, r7, r4);
    String_Delete(r7);
    DestroyMsgData(r6);
}




void ov96_021EE700(void) {
    ReadMsgDataIntoString(r1, r3);
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, r4, 0);
    ScheduleWindowCopyToVram(r5);
}




void ov96_021EE740(void) {
}




void ov96_021EE75C(void) {
    // ldr r0, [sp, #0x18]
    Save_PlayerData_GetOptionsAddr(0x00000004);
    Options_GetTextFrameDelay();
    // str r4, [r5]
    // mvn r1, r1
    *((u32*)(r5 + 0x2c)) = 0;
    // and r2, r1
    *((u32*)(r5 + 0x34)) = (((r6 << 0x1d) >> 5) | *((u32*)(r5 + 0x34)));
    *((u32*)(r5 + 0x28)) = r7;
    // and r1, r2
    *((u32*)(r5 + 0x34)) = (((r0 << 0x18) >> 8) | 0xFF00FFFF);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 8)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 0x00000137, *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0xc)) = r0;
    MessageFormat_New(*((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 4)) = r0;
    ResetAllTextPrinters();
    ov96_021EE9D8(*((u32*)r5), ((((*((u32*)(r5 + 0x34)) << 5) >> 0x1d) << 0x18) >> 0x18), *((u32*)(r5 + 0x14)));
    LoadFontPal0(4, (0x1e << 4), *((u32*)(r5 + 0x14)));
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r5), ((*((u32*)(r5 + 0x34)) << 5) >> 0x1d), 0, 1);
}




void ov96_021EE808(void) {
}




void ov96_021EE830(void) {
    // mvn r0, r0
    TextPrinterCheckActive(((*((u32*)(r0 + 0x2c)) << 0x18) >> 0x18), *((u32*)(r0 + 0x2c)));
    // and r1, r0
    *((u32*)(r4 + 0x34)) = (0x14 | *((u32*)(r4 + 0x34)));
    String_Delete(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x2c)) = (0 - 1);
    *((u32*)(r4 + 0x34)) = ((1 << 0x1c) | *((u32*)(r4 + 0x34)));
    GF_AssertFail(((1 << 0x1c) | *((u32*)(r4 + 0x34))), *((u32*)(r4 + 0x34)));
    // and r0, r1
    *((u32*)(r4 + 0x34)) = 0xEFFFFFFF;
    // and r1, r0
    *((u32*)(r4 + 0x34)) = ((((((*((u32*)(r4 + 0x34)) << 0x10) >> 0x10) - 1) << 0x10) >> 0x10) | *((u32*)(r4 + 0x34)));
    // and r1, r0
    *((u32*)(r4 + 0x34)) = (((0 << 0x1f) >> 3) | *((u32*)(r4 + 0x34)));
    // and r0, r1
    *((u32*)(r4 + 0x34)) = 0xEFFFFFFF;
}




void ov96_021EE8CC(void) {
    // str r0, [sp]
    // add r2, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0x18
    // str r0, [sp, #0x10]
}




void ov96_021EE908(void) {
    // str r0, [sp]
    // add r2, #0x10
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0x18
    // str r0, [sp, #0x10]
}




void ov96_021EE944(void) {
    // mvn r0, r0
    // add r0, #0x18
    // add r0, #0x18
    // add r4, #0x18
}




void ov96_021EE97C(void) {
}




void ov96_021EE994(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r4 + 0x30)));
    // add r0, #0x18
    WaitingIcon_New(r4, 0x000003D2);
    *((u32*)(r4 + 0x30)) = r0;
}




void ov96_021EE9BC(void) {
}




void ov96_021EE9D8(void) {
    LoadFontPal0(4, (7 << 6));
    // str r0, [sp]
    // str r4, [sp, #4]
    LoadUserFrameGfx2(r5, r6, 0x000003D2, 0xd);
}




void ov96_021EEA08(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r2, sp, #0x18
    AddWindowParameterized(*((u8*)(1 + 0x1c)), 2);
    FillWindowPixelBuffer(r5, 0xf);
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x38]
    ReadMsgData_ExpandPlaceholders();
    // str r0, [r4]
    // str r3, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, *((u32*)r4), 0);
    DrawFrameAndWindow2(r5, 0, 0x000003D2, 0xd);
}




void ov96_021EEA80(void) {
}




void ov96_021EEA88(void) {
}




void ov96_021EEA94(void) {
    // str r3, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0x3c
    // add r1, #0x3d
    // add r1, #0x42
    // add r2, r0, r1
    // add r0, r2, r1
    // add r7, r5, r0
    // ldr r0, [sp, #0xc]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, r7, r4
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
}




void ov96_021EEB74(void) {
}




void ov96_021EEB84(void) {
}




void ov96_021EEBC8(void) {
}




void ov96_021EEBE4(void) {
}




void ov96_021EEBF8(void) {
}




void ov96_021EEC0C(void) {
    // str r2, [sp, #0x14]
    ManagedSprite_SetDrawFlag(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x28
    GetMonSpriteCharAndPlttNarcIdsEx(*((u32*)(r4 + 0xc)), *((u8*)(r4 + 7)), 2);
    // add r2, sp, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x50]
    Heap_AllocAtEnd((0x32 << 6), ov96_0221B1AC);
    // str r7, [sp]
    // add r1, sp, #0x18
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x50]
    // add r3, sp, #0x18
    // str r0, [sp, #0x10]
    sub_02014510(*((u16*)(r1 + 0x10)), *((u16*)(r1 + 0x12)));
    ov96_021EED64(*((u32*)r5), r7, (0x32 << 6));
    // ldr r0, [sp, #0x54]
    // ldr r0, [sp, #0x50]
    // str r6, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x18
    // ldr r3, [sp, #0x14]
    ov96_021EED70(r5, *((u16*)(r2 + 0x10)), *((u16*)(r2 + 0x14)));
    ManagedSprite_SetDrawFlag(r5, 1);
    Heap_Free(r7);
}




void ov96_021EECB8(void) {
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // add r3, sp, #4
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #0x20]
    // add r1, r6, r1
}




void ov96_021EED14(void) {
    // str r2, [sp]
    // ldr r1, [sp]
    // ldr r2, [sp]
    // add r1, r6, r5
    // ldr r2, [sp]
    // add r1, r6, r5
}




void ov96_021EED64(void) {
}




void ov96_021EED70(void) {
    // str r2, [sp, #8]
    Sprite_GetPaletteProxy(*((u32*)r0));
    NNS_G2dGetImagePaletteLocation(r5);
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #8]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(r7, r6, r0);
    // ldr r0, [sp, #0x20]
    // add r0, r5, r0
    TintPalette_GrayScale(0x05000600, 0x20);
}




void ov96_021EEDCC(void) {
    // add r5, #8
    GF_AssertFail(*((u32*)(ov96_0221B1D8 + (0 << 3))), (0 << 3), 0x0000FFFF, *((u32*)ov96_0221B1D4));
}




void ov96_021EEE0C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetField1ED(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EEE2E: ; jump table
    ov96_021EEFAC(r5);
    PokeathlonCourse_IncrementField1ED(r5);
    sub_0203A994(1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 0);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    PokeathlonCourse_IncrementField1ED(r5);
    IsPaletteFadeFinished();
    ov96_021EE8CC(*((u32*)(r4 + 8)), 0x00000136);
    PokeathlonCourse_IncrementField1ED(r5);
    ov96_021EE830(*((u32*)(r4 + 8)));
    ov96_021EE994(*((u32*)(r4 + 8)));
    PokeathlonCourse_SetStateTransitionType(r5, 0x11);
    GF_AssertFail(1);
}




u8 ov96_021EEEBC(void) {
}




void ov96_021EEEC0(void) {
}




void ov96_021EEECC(void) {
}




void ov96_021EEEEC(void) {
}




void ov96_021EEF0C(void) {
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r5, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r5, 0);
    BG_ClearCharDataRange(0, 0x40, 0, r4);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(1, 1);
    BG_SetMaskColor(0, 0);
    BG_SetMaskColor(4, 0);
}




void ov96_021EEF98(void) {
}




void ov96_021EEFAC(void) {
    Heap_Create(0x5c, 0x9f, (1 << 0x12));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021EEECC(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r5, 0x10);
    MI_CpuFill8(0, 0x10);
    // str r0, [r4]
    BgConfig_Alloc(0x9f);
    *((u32*)(r4 + 4)) = r0;
    ov96_021EEF0C(*((u32*)r4));
    ov96_021EE740(*((u32*)r4));
    *((u32*)(r4 + 8)) = r0;
    PokeathlonCourse_GetMode(r5);
    PokeathlonCourse_GetSaveData(r5);
    // str r0, [sp]
    ov96_021EE75C(*((u32*)(r4 + 8)), *((u32*)(r4 + 4)), 0, r6);
    Main_SetVBlankIntrCB(ov96_021EEEEC, r4);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
}




void ov96_021EF05C(void) {
}




void ov96_021EF094(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // strb r0, [r5]
}




void ov96_021EF0FC(void) {
    // add r0, #0x20
}




u32 ov96_021EF18C(void) {
}




void ov96_021EF19C(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    NARC_Delete(*((u32*)(r0 + 8)));
    sub_0203A914();
    ov96_021EE5E0(*((u32*)(r6 + 0x34)));
    ov98_0221EB84(*((u32*)(r6 + 0x30)), 0xc);
    FreeBgTilemapBuffer(*((u32*)(r6 + 4)), *((u8*)ov96_0221BA18));
    Heap_Free(*((u32*)(r6 + 4)));
    Sprite_DeleteAndFreeResources(*((u32*)(r6 + 0x38)));
    *((u32*)(r4 + 0x38)) = r7;
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r6 + 0x10)), *((u32*)(r6 + 0x14)));
    SpriteSystem_Free(*((u32*)(r6 + 0x10)));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    // ldr r0, [sp]
    PokeathlonCourse_FreePtr4HeapAlloc();
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    UnloadOverlayByID(FS_OVERLAY_ID);
    Heap_Destroy(0x88);
}




void ov96_021EF23C(void) {
    SpriteSystem_TransferOam();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 4)));
    // str r0, [r3, r1]
}




void ov96_021EF260(void) {
}




void ov96_021EF280(void) {
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
}




void ov96_021EF2A0(void) {
}




void ov96_021EF2AC(void) {
}




void ov96_021EF2C0(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    Heap_Create(0x5c, 0x88, (1 << 0x12));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021EF260(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r5, 0x48);
    MI_CpuFill8(0, 0x48);
    NARC_New(0xdd, r6);
    *((u32*)(r4 + 8)) = r0;
    BgConfig_Alloc(r6);
    *((u32*)(r4 + 4)) = r0;
    ov96_021EF2A0(r5);
    // add r1, #0x20
    // strb r0, [r1]
    PokeathlonCourse_GetCurrentParticipantIndex(r5, r4);
    // add r1, #0x22
    // strb r0, [r1]
    PokeathlonCourse_GetMode(r5, r4);
    *((u32*)(r4 + 0x24)) = 0;
    // str r5, [r4]
    *((u32*)(r4 + 0xc)) = 0x88;
    Main_SetVBlankIntrCB(ov96_021EF23C, r4);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    sub_0200FC20(0x00007FFF);
    *((u32*)(r4 + 0x28)) = 0;
    ov96_021EF2AC(r5);
    *((u32*)(r4 + 0x28)) = r0;
}




void ov96_021EF3A8(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
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




void ov96_021EF430(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0x2a
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r4, #0x34
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r3, [sp]
    // add r2, sp, #0x10
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
}




void ov96_021EF4D0(void) {
    // add r3, sp, #8
    // str r1, [sp]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp, #4]
    // add r6, sp, #0x18
    InitBgFromTemplate(r7, *((u8*)ov96_0221BA18), r6, *((u8*)ov96_0221BA10));
    BgClearTilemapBufferAndCommit(r7, *((u8*)r5));
    // ldr r3, [sp]
    BG_ClearCharDataRange(*((u8*)r5), 0x40, 0);
    // ldr r0, [sp, #4]
    // add r6, #0x1c
    // str r0, [sp, #4]
}




void ov96_021EF54C(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r0 + 8)), 4, 0, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 8)), 5, *((u32*)(r4 + 4)), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 8)), 6, *((u32*)(r4 + 4)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 8)), 5, *((u32*)(r4 + 4)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 8)), 8, *((u32*)(r4 + 4)), 1);
    ov96_021EF3A8(r4);
    // str r0, [sp]
    ov98_0221EABC(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 4)), 0xc, ov96_0221BB38);
    *((u32*)(r4 + 0x30)) = r0;
    ov96_021EF610(r4);
}




void ov96_021EF5F4(void) {
    // mul r1, r4
    // ldrh r0, [r0, r1]
}




void ov96_021EF610(void) {
    // add r0, #0x20
    // add r0, #0x22
    ov98_0221EEEC(*((u32*)(r0 + 0x30)), 5, 5);
    ov98_0221EBD8(*((u32*)(r5 + 0x30)), 0, 0xc5, 0);
    ov98_0221EBD8(*((u32*)(r5 + 0x30)), 2, 0xd0, 0);
    // str r3, [sp]
    // add r2, #0xc6
    ov98_0221EC08(*((u32*)(r5 + 0x30)), 1, r6, 0);
    // str r3, [sp]
    // add r2, r6, r2
    // add r2, #0xd1
    ov98_0221EC08(*((u32*)(r5 + 0x30)), 3, (r6 << 1), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov98_0221ECD0(*((u32*)(r5 + 0x30)), 5, 0xef, r4);
    // str r3, [sp]
    // str r1, [sp, #4]
    ov98_0221EBEC(*((u32*)(r5 + 0x30)), 4, 0xf0, 0);
    ov96_021EE6A0(*((u32*)(r5 + 0x34)));
    // add r1, #0x20
    ov96_021EF5F4(r5, *((u8*)r5));
    // add r0, #0x20
    ov98_0221EEFC(*((u32*)(r5 + 0x30)));
    _s32_div_f(r4, 0x1e);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r7, 0, r0, 3);
    _s32_div_f(r4, 0x1e);
    _s32_div_f((0xa * r1), 0x1e);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(r7, 1, r0, 1);
    ov98_0221EDA4(*((u32*)(r5 + 0x30)), (r4 >> 0xa), 2, 0);
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // asr r1, r3, #9
    // add r1, r3, r1
    // asr r1, r1, #0xa
    ov98_0221EDA4(*((u32*)(r5 + 0x30)), (0xa >> 0x16), 1, 1);
    ov98_0221EDA4(r4, 3, 0);
    ov98_0221EBD8(*((u32*)(r5 + 0x30)), 6, 0xb0, 0);
    // add r6, #0xb1
    ov98_0221ED3C(*((u32*)(r5 + 0x30)), 7, r6);
}




void ov96_021EF770(void) {
    // add r0, #0x20
    // add r4, r1, r0
    // add r4, #0xd2
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
}




void ov96_021EF7C4(void) {
    // add r0, #0x20
    // add r4, r1, r0
    // add r4, #0xd3
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
}




void ov96_021EF818(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    SpriteSystem_Alloc(*((u32*)(r0 + 0xc)), ov96_0221BA54);
    *((u32*)(r4 + 0x10)) = r0;
    SpriteManager_New();
    *((u32*)(r4 + 0x14)) = r0;
    // add r1, sp, #0x14
    // add r2, sp, #0
    SpriteSystem_Init(*((u32*)(r4 + 0x10)), 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)), 4);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0x10)));
    G2dRenderer_SetSubSurfaceCoords(0, (2 << 0x14));
    ov96_021EF8C0(r4);
    ov96_021EF99C(r4);
}




void ov96_021EF8C0(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021EF924(void) {
    // add r0, #0x21
    // add r0, #0x21
    // strb r1, [r0]
    // add r0, #0x21
    // add r0, #0x21
    // strb r1, [r0]
}




void ov96_021EF95C(void) {
    // add r4, r2, r0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r7]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x38)), 0, ov96_0221BA80, (2 << 0x14));
}




void ov96_021EF98C(void) {
    // add r1, #0x21
    // strb r2, [r1]
}




void ov96_021EF99C(void) {
    // str r0, [sp]
    // ldr r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp]
    // ldrsh r2, [r4, r2]
    // strh r2, [r5]
    // ldrsh r2, [r4, r2]
    *((u16*)(ov96_0221DA80 + 2)) = 2;
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(0 + 0x10)), *((u32*)(r1 + 0x14)), ov96_0221DA80, (2 << 0x14));
    *((u32*)(r6 + 0x38)) = r0;
    ManagedSprite_SetAnimateFlag(1);
    // ldr r0, [sp, #4]
    // add r5, #0x34
    // add r7, #0x34
    // str r0, [sp, #4]
    // ldr r0, [sp]
    ManagedSprite_SetAnimateFlag(*((u32*)((r0 + 1) + 0x40)), 0);
    // ldr r0, [sp]
    ov96_021EFA04();
}




void ov96_021EFA04(void) {
    // add r1, #0x20
    // add r2, #0x21
    // add r1, r3, r4
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x40)), *((u32*)((*((u8*)r0) << 2) + *((u8*)r0))), (*((u8*)r0) << 2), ov96_0221BAE8);
}




void ov96_021EFA28(void) {
}




void ov96_021EFA3C(void) {
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    OS_WaitVBlankIntr(0, 0x00000125);
    // str r0, [sp]
    // add r2, sp, #0xc
    SetBgAffine(*((u32*)(r5 + 4)), 7, 0x80);
    // str r0, [sp]
    // add r2, sp, #0xc
    SetBgAffine(*((u32*)(r5 + 4)), 6, 0x80);
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Bg_SetTextDimAndAffineParams(*((u32*)(r5 + 4)), 7, 5, r4);
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Bg_SetTextDimAndAffineParams(*((u32*)(r5 + 4)), 6, 5, r4);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    *((u32*)(r5 + 0x1c)) = 0;
    *((u32*)(r5 + 0x2c)) = 1;
}




void ov96_021EFACC(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r2, sp, #4
    // str r0, [sp]
    // add r2, sp, #4
}




void ov96_021EFB20(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    *((u32*)(r4 + 0x18)) = r5;
}




void ov96_021EFB50(void) {
}




void ov96_021EFB58(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r4, #0x20
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r3, [sp]
    // add r2, sp, #0x10
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_021EFC10(void) {
    // add r1, #0x20
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov96_021EFC8C(void) {
    // add r1, #0x20
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov96_021EFD08(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    BgClearTilemapBufferAndCommit(*((u32*)(r0 + 4)), 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 4)), 2);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 4)), 4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 4)), 5);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 4)), 6);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 4)), 7);
    ov96_021EF98C(r4);
    ov96_021EFB58(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    ov96_021EFC10(r4);
    ov96_021EFC8C(r4);
    GF_AssertFail();
    PokeathlonCourse_SetStateField07(r5, *((u32*)(r4 + 0x18)));
}




void ov96_021EFD9C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_021EF924();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EFDC0: ; jump table
    PlayBGM((0x47 << 4));
    // strb r0, [r4]
    ov96_021EF280(0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(4, 1, 1, 0x00007FFF);
    // strb r0, [r4]
    ov96_021EF280(0, 1);
    ov96_021EFA3C(r5);
    // strb r0, [r4]
    ov96_021EFACC(r5);
    ov96_021EF280(0, 3);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x00007FFF);
    ManagedSprite_SetAnimateFlag(*((u32*)(r5 + 0x40)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x44)), 0);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    *((u32*)(r5 + 0x1c)) = 0;
    // strb r0, [r4]
    PokeathlonCourse_SetStateField07(r6, 1);
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    PokeathlonCourse_SetStateField07(r6, 4);
    GF_AssertFail();
}




void ov96_021EFEB8(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_021EF924();
    IsPaletteFadeFinished(*((u8*)r4));
    TouchscreenHitbox_FindRectAtTouchNew(ov96_0221BA20);
    // mvn r1, r1
    PlaySE(0x000005DC, 0);
    ov96_021EFB20(r5, 2);
    PokeathlonCourse_SetStateField07(r5, 4);
    GF_AssertFail();
    // strb r0, [r4]
    ov96_021EFB50(r5);
    ov96_021EFD08(r5);
    GF_AssertFail();
}




void ov96_021EFF3C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_021EF924();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    TouchscreenHitbox_FindRectAtTouchNew(ov96_0221BA2C);
    PlaySE(0x000005DC);
    ov96_021EFB20(r5, 3);
    // strb r0, [r4]
    PlaySE(0x000005DC);
    ov96_021EFB20(r5, 1);
    // strb r0, [r4]
    ov96_021EFB50(r5);
    ov96_021EFD08(r5);
    GF_AssertFail();
}




void ov96_021EFFE4(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_021EF924();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    TouchscreenHitbox_FindRectAtTouchNew(ov96_0221BA38);
    PlaySE(0x000005DC);
    ov96_021EFB20(r5, 2);
    // strb r0, [r4]
    PlaySE(0x000005DC);
    ov96_021EFB20(r5, 1);
    // strb r0, [r4]
    ov96_021EFB50(r5);
    ov96_021EFD08(r5);
    GF_AssertFail();
}




void ov96_021F008C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_021EF924();
    PokeathlonCourse_GetCurrentParticipantIndex(r6);
    PlaySE(0x000008E4);
    PlaySE(0x000008D6);
    GF_SndStartFadeOutBGM(0, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    // strb r0, [r5]
    IsPaletteFadeFinished((*((u8*)r5) + 1));
}




void ov96_021F010C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetField1ED(r7);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F0130: ; jump table
    Heap_Create(0x5c, 0x8c, (5 << 0x10));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021F0A5C(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r7, 0x000007F4);
    MI_CpuFill8(0, 0x000007F4);
    Heap_Alloc(0x8c, 0x28);
    // str r0, [r4, r1]
    MI_CpuFill8(*((u32*)(r4 + (0x7f << 4))), 0, 0x28);
    BgConfig_Alloc(0x8c);
    // str r0, [r4]
    ov96_021E6670(r7, 8);
    // str r0, [sp, #0xe4]
    // str r0, [sp, #0xe8]
    // str r0, [sp, #0xec]
    // str r2, [sp, #0xf0]
    // str r0, [sp]
    // add r0, sp, #0xe4
    ov96_021E92B0(0x10, 0x16, 0x8c, 0x00300010);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    *((u32*)(r4 + 0x14)) = 0x8c;
    FontID_Alloc(4, 0x8c);
    ov96_021F0BD4(*((u32*)r4));
    ov96_021F2EC8(r4);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    PokeathlonCourse_IncrementField1ED(r7);
    ov96_021F3BF0(*((u32*)(r6 + 0x14)), *((u32*)r6), r7);
    // str r0, [r6, r1]
    PokeathlonCourse_GetParticipantCount(r7, 0x00000774);
    PokeathlonCourse_GetMode(r7);
    // sub r1, r1, r4
    ov96_021F3390(*((u32*)(r6 + 0x14)), 4, r0);
    // str r0, [r6, r1]
    ov96_021E9A78(*((u32*)(r6 + 0x14)), 0x00000AA7, 1);
    // str r0, [r6, r1]
    ov96_021F30A4(*((u32*)(r6 + 0x14)), 0x00000768);
    // str r0, [r6, r1]
    // add r0, #0xa0
    // add r1, #0x48
    // str r2, [r6, r0]
    ov96_021F3E58(*((u32*)(r6 + 0x0000072C)), 0x0000072C, *((u32*)(r6 + 0x0000072C)));
    ov96_021E64B8(r7);
    PokeathlonCourse_IncrementField1ED(r7);
    // add r3, sp, #0xd8
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov96_021EB180(*((u32*)(r6 + 0x14)), r3, r3);
    *((u32*)(r6 + 0x18)) = r0;
    // str r0, [sp]
    ov96_021EB5C8(*((u32*)(r6 + 0x18)), 0, 0, 0);
    ov96_021EB5E8(*((u32*)(r6 + 0x18)));
    // str r0, [sp]
    ov96_021EA854(*((u32*)(r6 + 0x14)), 0xc, 5, *((u32*)(r6 + 0x00000768)));
    // str r0, [r6, r1]
    ov96_021EB29C(*((u32*)(r6 + 0x18)), 0, 0x65);
    ov96_021EB29C(*((u32*)(r6 + 0x18)), 1, 0x68);
    ov96_021EB29C(*((u32*)(r6 + 0x18)), 2, 0x66);
    ov96_021EB29C(*((u32*)(r6 + 0x18)), 3, 0x67);
    ov96_021EB29C(*((u32*)(r6 + 0x18)), 4, 0x69);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r6 + 0x18)), 0xa7, 3, 0x65);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r6 + 0x18)), 0xa7, 0, 0x65);
    ov96_021EB334(*((u32*)(r6 + 0x18)), 0xa7, 2, 0x65);
    ov96_021EB36C(*((u32*)(r6 + 0x18)), 0xa7, 1, 0x65);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r6 + 0x18)), 0xa7, 0x1c, 0x68);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r6 + 0x18)), 0xa7, 0x19, 0x68);
    ov96_021EB334(*((u32*)(r6 + 0x18)), 0xa7, 0x1b, 0x68);
    ov96_021EB36C(*((u32*)(r6 + 0x18)), 0xa7, 0x1a, 0x68);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r6 + 0x18)), 0xa7, 0x20, 0x69);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r6 + 0x18)), 0xa7, 0x1d, 0x69);
    ov96_021EB334(*((u32*)(r6 + 0x18)), 0xa7, 0x1f, 0x69);
    ov96_021EB36C(*((u32*)(r6 + 0x18)), 0xa7, 0x1e, 0x69);
    ov96_021F3E60(*((u32*)(r6 + 0x18)), *((u32*)(r6 + 0x00000774)));
    ov96_021EB3A4(*((u32*)(r6 + 0x18)));
    // str r5, [sp]
    ov96_021EB408(*((u32*)(r6 + 0x18)), 2, 1, 0x65);
    // str r5, [sp]
    ov96_021EB408(*((u32*)(r6 + 0x18)), 1, 1, 0x68);
    // str r0, [sp]
    ov96_021EB408(*((u32*)(r6 + 0x18)), 1, 1, 0x68);
    ov96_021F30C4(*((u32*)(r6 + 0x0000072C)), *((u32*)(r6 + 0x18)));
    _s32_div_f(0, 3);
    _s32_div_f(r4, 3);
    // add r2, r6, r0
    // add r5, r2, r0
    ov96_021EB4F4(*((u32*)(r6 + 0x18)), 0x68, 4);
    *((u32*)(r5 + 0x24)) = r0;
    ov96_021EB5B8();
    Sprite_SetDrawPriority(2);
    ov96_021EB4F4(*((u32*)(r6 + 0x18)), 0x68, 7);
    *((u32*)(r5 + 0x28)) = r0;
    ov96_021EB5B8();
    Sprite_SetDrawPriority(4);
    ov96_021E6290(r7, 0, *((u32*)(r6 + 0x00000768)), *((u32*)(r6 + 0x18)));
    *((u32*)(r6 + 0x1c)) = *((u32*)r0);
    Sprite_SetDrawPriority(*((u32*)r0), 1);
    ov96_021F3EC0(*((u32*)(r6 + 0x18)), *((u32*)(r6 + 0x00000774)));
    ov96_021F3F80(*((u32*)(r6 + 0x18)), *((u32*)(r6 + 0x00000774)));
    PokeathlonCourse_IncrementField1ED(r7);
    // add r0, sp, #0x138
    // str r0, [sp, #0x28]
    // add r0, sp, #0xf4
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x4c]
    // add r0, #0x20
    // str r0, [sp, #0x4c]
    _s32_div_f(0, 3);
    _s32_div_f(r4, 3);
    // str r0, [sp, #0x48]
    // ldr r1, [sp, #0x48]
    // ldr r3, [sp, #0x28]
    ov96_021E6168(r7, r5);
    // ldr r1, [sp, #0x48]
    ov96_021E60C0(r7, r5);
    ov96_021E6108();
    // ldr r1, [sp, #0x24]
    *((u32*)(r1 + 0x14)) = r0;
    _s32_div_f(r4, 3);
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #0x4c]
    // add r5, r0, r2
    // str r0, [sp, #0x50]
    // ldr r2, [sp, #0x50]
    // ldr r0, [sp, #0x20]
    // add r2, r5, r2
    // add r2, #0x48
    ov96_021E8BB4((0x90 * r1), *((u32*)(r6 + 0x14)), (r5 * (0x1b << 4)));
    // ldr r0, [sp, #0x50]
    // ldr r1, [sp, #0x50]
    // add r0, r5, r0
    // add r1, r5, r1
    // add r0, #0x48
    // add r1, #0x68
    MI_CpuCopy8(0x20);
    // ldr r0, [sp, #0x50]
    // add r0, r5, r0
    // add r0, #0x68
    TintPalette_GrayScale(0x10);
    // ldr r0, [sp, #0x28]
    // add r0, #0x10
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, #0x10
    // str r0, [sp, #0x20]
    // str r1, [sp, #0xf4]
    // str r0, [sp, #0xf8]
    // str r1, [sp, #0xfc]
    // str r0, [sp, #0x100]
    // str r0, [sp, #0x104]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r2, sp, #0x138
    // add r3, sp, #0xf4
    ov96_021EA8A8(*((u32*)(r6 + 0x0000076C)), 0xc);
    PokeathlonCourse_IncrementField1ED(r7);
    ov96_021EAA00(*((u32*)(r6 + 0x0000076C)));
    ov96_021E5F24(r7);
    // str r0, [sp, #0x40]
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)r6));
    PokeathlonCourse_SetField1F4(r7, 1);
    // add r0, sp, #0xb4
    ReadWholeNarcMemberByIdPair(0xaa, 0xb);
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x58]
    // add r0, #0x20
    // str r0, [sp, #0x58]
    // ldr r1, [sp, #0x44]
    ov96_021EAA04(*((u32*)(r6 + 0x0000076C)), ((r1 << 0x18) >> 0x18));
    ov96_021EAB38(1);
    // ldr r0, [sp, #0x44]
    _s32_div_f(3);
    // ldr r0, [sp, #0x44]
    _s32_div_f(3);
    ov96_021E60C0(r7, r5, r1);
    ov96_021E6138();
    // add r0, sp, #0xb4
    // add r2, r0, r1
    // sub r1, #8
    ov96_021EAF70(r4, *((u32*)r2), *((u32*)(r2 - 4)));
    // ldr r1, [sp, #0x44]
    ov96_021EAA04(*((u32*)(r6 + 0x0000076C)), ((r1 << 0x18) >> 0x18));
    ov96_021EAA20();
    // str r0, [sp, #0x54]
    // add r0, sp, #0xa8
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldr r0, [sp, #0x44]
    _s32_div_f(3);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x44]
    _s32_div_f(3);
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x58]
    // add r0, r0, r2
    // ldr r2, [sp, #0x14]
    // add r5, r0, r1
    // str r4, [r0, r1]
    *((u32*)(r5 + 0x18)) = 1;
    // ldr r0, [sp, #0x54]
    ov96_021E90FC(1, (0x90 * (r1 * (0x1b << 4))), (r1 * (0x1b << 4)));
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x54]
    ov96_021E8BB0();
    // str r0, [sp, #0xa8]
    // ldr r0, [sp, #0x5c]
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r1, r0, #1
    // ldr r0, [sp, #0x5c]
    // add r0, r0, r1
    // str r0, [sp, #0xac]
    // str r0, [sp, #0xa8]
    // ldr r0, [sp, #0x5c]
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r1, r0, #1
    // ldr r0, [sp, #0x5c]
    // add r0, r0, r1
    // str r0, [sp, #0xac]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, r0, r2
    // ldr r2, [sp, #0x18]
    // add r1, r0, r1
    // str r0, [sp, #0x3c]
    // add r1, #0x40
    // str r0, [sp, #0x38]
    // strb r0, [r1]
    ov96_021EAC0C(r4, 2, (0x20 * 0xc));
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    ov96_021EAF94(r4);
    ov96_021E6104();
    ov96_021EAF6C(r4, r0);
    // add r0, sp, #0x64
    // str r0, [sp]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    // add r3, sp, #0x68
    ov96_021EB0A4(r4);
    // ldr r0, [sp, #0x68]
    *((u32*)(r5 + 0xc)) = (r0 << 0xc);
    // ldr r0, [sp, #0x64]
    *((u32*)(r5 + 0x10)) = ((r0 << 0xc) << 0xc);
    // ldr r0, [sp, #0x68]
    *((u32*)(r5 + 0x28)) = (((r0 << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x64]
    *((u32*)(r5 + 0x2c)) = ((((r0 << 0xc) << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x68]
    *((u32*)(r5 + 0x1c)) = (((((r0 << 0xc) << 0xc) << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x64]
    *((u32*)(r5 + 0x20)) = ((((((r0 << 0xc) << 0xc) << 0xc) << 0xc) << 0xc) << 0xc);
    ov96_021E5F24(r7);
    // ldr r1, [sp, #0x1c]
    ov96_021EABA8(r4, 5);
    ov96_021EABA8(r4, 6);
    // add r1, sp, #0xa8
    ov96_021EABF4(r4);
    ov96_021E5F24(r7);
    PokeathlonCourse_GetDataCopyArea(r7);
    // add r0, #0x28
    ov96_021E8A20();
    ov96_021F0F04(r6, r0);
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0xcc
    // add r0, r1, r0
    // ldr r3, [sp, #0x68]
    // ldr r1, [sp, #0x18]
    // strh r3, [r2, r1]
    // ldr r1, [sp, #0x64]
    *((u16*)(r0 + 2)) = r1;
    ov96_021EB5E8(*((u32*)(r6 + 0x18)), r1);
    // str r0, [sp]
    ov96_021E64F8(r7, r4, *((u32*)(r6 + 0x00000768)), r0);
    Sprite_SetDrawPriority(3);
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x44]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0xcc
    // str r0, [sp, #8]
    ov96_021E634C(r7, 0, *((u32*)(r6 + 0x00000768)), *((u32*)(r6 + 0x18)));
    // add r0, sp, #0x6c
    ReadWholeNarcMemberByIdPair(0xaa, 1);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x30]
    // add r0, #0x20
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x34]
    // add r2, r6, r0
    // strb r0, [r2, r1]
    // ldr r0, [sp, #0x34]
    // ldr r5, [sp, #0x30]
    // str r0, [sp, #0x60]
    // ldr r2, [sp, #0x60]
    // add r1, sp, #0x6c
    // str r5, [sp]
    ov96_021F2B24(r7, (0x72 << 4), ((0 << 0x18) >> 0x18));
    // add r0, #0x28
    // str r0, [sp]
    // add r0, #0x18
    // str r0, [sp, #4]
    // add r0, #0x1c
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // add r2, #0x8a
    // add r1, r4, r1
    // add r3, #0x8e
    ov96_021F33E0(*((u32*)(r6 + (0x77 << 4))), ((r1 << 0x18) >> 0x18), *((u16*)r5), r5);
    // add r5, #0x90
    // ldr r0, [sp, #0x30]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // strh r2, [r6, r1]
    // strh r2, [r6, r0]
    // add r0, #0xa4
    // str r2, [r6, r0]
    ov96_021F31F0(*((u32*)(r6 + ((0x73 << 4) - 4))), ((*((u16*)(r6 + (0x73 << 4))) << 0x18) >> 0x18), 0xc);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 1, 0xc);
    // strb r1, [r6, r0]
    ov96_021F0D60(r6, 0xc);
    ov96_021F424C(*((u32*)(r6 + 0x00000774)));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    sub_0203A994(1);
    PokeathlonCourse_IncrementField1ED(r7);
}




u32 ov96_021F08E4(void) {
}




void ov96_021F08F4(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetGraphicsSystem(r5);
    ov96_021E9510();
    PokeathlonCourse_GetField5F0_AtIndex(r5, ((0 << 0x18) >> 0x18));
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov96_021E95F8(r5, r6, r4, r0);
    ov96_021E93B4(r6, 1);
    ov96_0221A56C(r6, 2);
    ov96_021E952C(r6);
    ov96_021E9570(r6, 2);
}




void ov96_021F095C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    sub_0203A914();
    ov96_021E6550(r5);
    ov96_021F30BC(*((u32*)(r4 + 0x0000072C)));
    Heap_Free(*((u32*)(r4 + 0x00000734)));
    FreeBgTilemapBuffer(*((u32*)r4), 0);
    FreeBgTilemapBuffer(*((u32*)r4), 1);
    FreeBgTilemapBuffer(*((u32*)r4), 2);
    FreeBgTilemapBuffer(*((u32*)r4), 3);
    FreeBgTilemapBuffer(*((u32*)r4), 4);
    FreeBgTilemapBuffer(*((u32*)r4), 5);
    FreeBgTilemapBuffer(*((u32*)r4), 6);
    FreeBgTilemapBuffer(*((u32*)r4), 7);
    RemoveWindow((r4 + 4));
    Heap_Free(*((u32*)r4));
    ov96_021EB21C(*((u32*)(r4 + 0x18)));
    ov96_021EA894(*((u32*)(r4 + 0x0000076C)));
    ov96_021E9C0C(*((u32*)(r4 + 0x00000768)));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov96_021F3424(*((u32*)(r4 + (0x77 << 4))));
    ov96_021F3C38(*((u32*)(r4 + 0x00000774)));
    FontID_Release(4);
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    Heap_Free(*((u32*)(r4 + (0x7f << 4))));
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // strh r1, [r0]
    Heap_Destroy(0x8c, 0);
}




void ov96_021F0A5C(void) {
}




void ov96_021F0A7C(void) {
    // strb r0, [r4]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // strb r0, [r4]
}




void ov96_021F0AE0(void) {
    // strb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_021F0B58(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // strb r0, [r4]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r5, [sp, #4]
    // add r0, #0x62
    // add r6, r6, r0
    // ldr r0, [sp]
    // add r5, #0x90
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_021F0BD4(void) {
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
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
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
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 7, r3, 1);
    BgClearTilemapBufferAndCommit(r4, 7);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_021F0D60(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xa7, 5, *((u32*)r0), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xa7, 9, *((u32*)r5), 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xa7, 0xc, *((u32*)r5), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xa7, 0x16, *((u32*)r5), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0xa7, 0xf, *((u32*)r5), 6);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0xa7, 6, *((u32*)r5), 0);
    // str r0, [sp]
    // add r3, sp, #0x10
    GfGfxLoader_GetScrnData(0xa7, 0xa, 0);
    // ldr r3, [sp, #0x10]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r5), 2, r3, *((u32*)(r3 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 2);
    Heap_Free(r4);
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetScrnData(0xa7, 7, 0, 0x00000738);
    // str r0, [r5, r1]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r5), 1, *((u32*)(r5 + (0x00000734 + 4))), *((u32*)(*((u32*)(r5 + (0x00000734 + 4))) + 8)));
    // str r0, [sp]
    // add r2, #0xc
    BgCopyOrUncompressTilemapBufferRangeToVram(*((u32*)r5), 1, *((u32*)(r5 + 0x00000738)), *((u32*)(*((u32*)(r5 + 0x00000738)) + 8)));
    ov96_021F3CBC(*((u32*)(r5 + 0x00000774)));
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xa7, 4, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xa7, 8, 0, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xa7, 0x15, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xa7, 0xb, 4, 0x40);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0xa7, 0xe, 4, 0x60);
    // str r1, [r0]
}




void ov96_021F0F04(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, #0x20
    // str r0, [sp, #0x10]
    _s32_div_f(0, 3);
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #0x10]
    // add r2, r0, r2
    // add r6, r2, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r2, r0, #0xc
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r3, r0, #0xc
    // add r7, r5, r4
    // add r0, #0x40
    // add r6, #0x44
    // strb r2, [r5, r4]
    *((u8*)(r7 + 0xc)) = 0xff;
    // lsl r3, r2
    // ldr r0, [sp, #0xc]
    // lsl r1, r2
    // add r0, r0, r3
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // lsl r1, r4
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp]
    *((u32*)(r5 + 0x18)) = ((r4 + 1) << 0x18);
    // add r3, #0xc
    // ldr r1, [sp, #0xc]
    // add r1, r1, r2
    *((u32*)(r5 + 0x18)) = *((u8*)(*((u8*)r6) + 0x00000726));
    // ldr r1, [sp, #8]
    // ldr r2, [sp]
    // add r1, r7, r1
    *((u32*)(r5 + 0x1c)) = *((u8*)(*((u8*)r6) + 0x00000726));
    // add r3, #0x25
    // add r1, r1, r2
    // ldr r2, [sp]
    *((u32*)(r5 + 0x1c)) = *((u8*)(*((u8*)r6) + 0x00000726));
    // add r1, r1, r2
    *((u32*)(r5 + 0x1c)) = *((u8*)(*((u8*)r6) + 0x00000726));
    // ldr r1, [sp]
    // add r3, r1, r3
    // sub r1, #0x46
    // sub r4, r4, r6
    // ror r4, r3
    // add r6, r6, r4
    // ldr r3, [sp]
    // strb r6, [r3, r4]
    // ldr r3, [sp, #4]
    // add r6, r7, r3
    // ldr r3, [sp]
    *((u32*)(r5 + 0x20)) = ((*((u8*)(*((u8*)(*((u8*)r6) + 0x00000726)) + (0x00000726 - 2))) + 1) >> 0x1f);
    // add r4, #0x22
    // add r6, r6, r3
    // ldr r3, [sp]
    *((u32*)(r5 + 0x20)) = ((*((u8*)(*((u8*)(*((u8*)r6) + 0x00000726)) + (0x00000726 - 2))) + 1) >> 0x1f);
    // add r6, r6, r3
    // ldr r3, [sp]
    *((u32*)(r5 + 0x20)) = ((*((u8*)(*((u8*)(*((u8*)r6) + 0x00000726)) + (0x00000726 - 2))) + 1) >> 0x1f);
    // add r4, #0x24
    // add r4, #0x26
    // add r6, r6, r3
    // ldr r3, [sp]
    *((u32*)(r5 + 0x20)) = ((*((u8*)(*((u8*)(*((u8*)r6) + 0x00000726)) + (0x00000726 - 2))) + 1) >> 0x1f);
    // add r3, r6, r3
    // add r3, r3, r1
    // add r1, r3, r1
    // ldr r2, [sp]
    *((u32*)(r5 + 0x20)) = (*((u8*)(*((u8*)(*((u8*)r6) + 0x00000726)) + (0x00000726 - 2))) << 0x1a);
    // add r1, r1, r2
    *((u32*)(r5 + 0x20)) = (*((u8*)(*((u8*)(*((u8*)r6) + 0x00000726)) + (0x00000726 - 2))) << 0x1a);
    // ldr r1, [sp]
    // add r2, #0x22
    // strb r7, [r1, r2]
    // add r2, #0x25
    // strb r3, [r1, r2]
    // add r0, #0x26
    // strb r7, [r1, r0]
}




void ov96_021F107C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r5);
    ov96_021E8A20();
    // add r7, #0xf0
    // str r0, [r6]
    ov96_021E8A20(r7);
    // asr r0, r0, #0xc
    // and r0, r1
    ov96_021EB63C(*((u32*)(r4 + 0x18)), 1);
    ov96_021EB144(*((u32*)(r4 + 0x0000076C)), 1);
    ov96_021E65A4(r5);
    ov96_021F46B4(*((u32*)(r4 + 0x00000774)));
    ov96_021E8318(r5, r0);
    ov96_021F2EFC(r4, r6);
    ov96_021F30F8(((*((u16*)(r4 + 0x00000732)) << 0x18) >> 0x18), 3, *((u8*)(r4 + 0x0000072A)));
    // strh r0, [r4, r1]
    // sub r1, #8
    // strb r0, [r4, r1]
    System_GetTouchNew(0, 0x00000732);
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), 3, 0);
    System_GetTouchHeld();
    *((u8*)(r6 + 4)) = *((u16*)(gSystem + 0x20));
    *((u8*)(r6 + 5)) = *((u16*)(gSystem + 0x22));
    // str r0, [r6]
    ov96_021F1614(r5, *((u16*)(gSystem + 0x20)));
}




void ov96_021F1170(void) {
    // str r0, [sp, #4]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp, #4]
    ov96_021E5F24();
    // ldr r0, [sp, #0x14]
    // add r0, #0x28
    ov96_021E8A20();
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    PokeathlonCourse_GetParticipantCount(0x000007EC, *((u32*)(r4 + 0x000007EC)));
    // str r0, [sp, #0x10]
    // ldr r5, [sp, #0x14]
    // add r5, #0x50
    ov96_021E8A20(r5);
    // ldr r0, [sp, #0x10]
    // add r5, #0x28
    // ldr r0, [sp, #0x10]
    // strb r2, [r4, r1]
    // add r0, #0x24
    // strb r2, [r4, r0]
    // add r1, #0xc6
    // str r2, [r4, r1]
    // sub r1, #0xc4
    // sub r1, #0xc4
    // sub r1, #0xc4
    // strb r2, [r4, r1]
    // sub r1, #0xc4
    // str r1, [r4, r0]
    // sub r1, #0xc2
    // strb r2, [r4, r1]
    // sub r1, #0xc5
    // sub r0, #0xc5
    // strb r1, [r4, r0]
    // sub r1, #0xa2
    // sub r1, #0xc6
    // strb r2, [r4, r1]
    // sub r1, #0xa3
    // sub r1, #0x9f
    // sub r1, #0x9d
    // sub r1, #0x9e
    ov96_021F2A00(r4, *((u8*)(r4 + 0x00000726)), *((u8*)(r4 + 0x00000726)));
    // strb r1, [r4, r0]
    // add r2, r4, r2
    // sub r1, #0x9c
    // sub r1, #0xa1
    // strb r2, [r4, r1]
    // sub r1, #0x9d
    // sub r0, #0x90
    // add r1, r4, r1
    ov96_021F32C4(*((u8*)(*((u8*)(r4 + 0x00000728)) + 0x00000728)), *((u8*)(r4 + 0x00000728)), *((u8*)(r2 + 0x00000728)));
    // strb r0, [r4, r1]
    _s32_div_f(*((u8*)(r4 + (0x0000074C - 1))), 3);
    // add r0, #0x6f
    // add r6, r4, r1
    // add r2, r4, r0
    // add r0, #0x7c
    // add r0, r3, r0
    // str r0, [r6, r5]
    // add r0, #0x6f
    // add r0, #0x6f
    // strb r2, [r4, r0]
    // add r0, #0x6d
    // add r1, #0x6b
    // strb r2, [r4, r0]
    _s32_div_f(*((u8*)(r4 + (0x6e << 4))), 3, 6, *((u32*)(r6 + (((r0 << 0x18) >> 0x18) << 2))));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, r7, ((r1 << 0x18) >> 0x18), 3);
    // sub r1, #0x9f
    // sub r0, #0x9f
    // strb r1, [r4, r0]
    // sub r1, #0xa3
    // sub r0, #0xa3
    // strb r1, [r4, r0]
    // sub r0, #0xc5
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r3, [r4, r2]
    // strb r3, [r4, r2]
    // add r2, #0x23
    // strb r3, [r4, r2]
    // add r2, #0x25
    // strb r3, [r4, r2]
    // add r0, #0x24
    // strb r2, [r4, r0]
    // add r2, r4, r1
    // strb r3, [r2, r0]
    // str r0, [sp, #0x20]
    // add r0, #0x20
    // str r0, [sp, #0x20]
    _s32_div_f(0, 3, 0x14, 0xc);
    _s32_div_f(r5, 3);
    // ldr r0, [sp, #0x20]
    // add r2, r0, r2
    // add r6, r2, r0
    // add r3, #0x28
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r6 + 0x34)) = r7;
    *((u32*)(r6 + 0x38)) = r7;
    // add r0, #0x8c
    // add r0, #0x8e
    // strh r1, [r0]
    // add r0, #0x44
    // strb r7, [r0]
    // add r0, #0x45
    // strb r7, [r0]
    // add r0, #0x46
    // add r6, #0x47
    // strb r7, [r0]
    // strb r7, [r6]
    // strb r1, [r4, r0]
    // ldr r0, [sp, #0x14]
    // add r0, #0x50
    ov96_021E8A20((0x00000727 + 2), 0, r6, r6);
    // ldr r0, [sp, #0x14]
    ov96_021E8A20();
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // ldr r0, [sp, #0x14]
    // add r0, #0x50
    // str r0, [sp, #0x14]
    // add r7, #0x20
    // ldr r0, [sp, #0x14]
    ov96_021E8A20(*((u8*)(r4 + 0x0000074A)), (4 - 1), r0);
    // str r0, [sp, #0x18]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ov96_021F2A84(r4, r6);
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x18]
    ov96_021F20C4(r4, ((r6 << 0x18) >> 0x18), *((u8*)(r2 + 4)), *((u8*)(r3 + 5)));
    // str r0, [sp, #0x24]
    _s32_div_f(3);
    // ldr r1, [sp, #0x24]
    // add r2, r4, r6
    // strb r1, [r2, r0]
    // add r1, r7, r3
    // add r1, #0x46
    // strb r0, [r1]
    // add r1, r7, r3
    // add r1, #0x47
    // strb r0, [r1]
    // add r1, r4, r6
    // str r1, [sp, #0xc]
    _s32_div_f(*((u8*)(r1 + (0x72 << 4))), 3, (r1 * 0x90));
    // str r0, [sp, #0x28]
    // add r0, r7, r0
    // str r0, [sp, #8]
    // add r0, #0x1c
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #8]
    // add r2, #0x28
    ov96_021F208C(*((u8*)((0x90 * ((r1 << 0x18) >> 0x18)) + 4)), *((u8*)(((r1 << 0x18) >> 0x18) + 5)), 0);
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #8]
    ov96_021F2F7C(*((u32*)(r7 + r0)), *((u32*)(r1 + 0x1c)), *((u32*)(r2 + 0x20)));
    // ldr r1, [sp, #0xc]
    // add r2, r4, r0
    // strb r1, [r2, r0]
    // ldr r1, [sp, #0xc]
    // add r2, r4, r0
    // strb r1, [r2, r0]
    // add r0, r4, r6
    // strb r2, [r0, r1]
    // ldr r0, [sp, #0x14]
    // add r0, #0x28
    // str r0, [sp, #0x14]
    // add r5, #0xc
    // add r7, r7, r0
    // sub r1, #0x3e
    ov96_021F342C(*((u32*)(r4 + (0x77 << 4))), ((*((u16*)(r4 + (0x77 << 4))) << 0x18) >> 0x18), 0xc);
    _s32_div_f(3);
    // ldr r0, [sp, #4]
    PokeathlonCourse_GetParticipantCount((r0 << 0x18));
    _s32_div_f(r6, 3);
    // add r2, #0x20
    // add r0, r2, r0
    // add r1, r0, r3
    // add r0, r0, r3
    // add r1, #0x46
    // strb r2, [r1]
    // add r0, #0x47
    // strb r1, [r0]
    GF_AssertFail(((0x1b << 4) * r5), 3, 2, (r1 * 0x90));
    // ldr r0, [sp, #4]
    ov96_021F1CC0();
    ov96_021F21EC(r4);
    ov96_021F2834(r4);
    // ldr r1, [sp, #0x1c]
    ov96_021F0F04(r4);
}




void ov96_021F1614(void) {
    // str r0, [sp, #0xc]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0xf0
    ov96_021E8A20();
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x4c]
    // asr r0, r2, #0x1c
    // and r0, r1
    // str r0, [sp, #0x64]
    // asr r0, r2, #0x18
    // ldr r0, [sp, #0x4c]
    // and r5, r1
    // asr r0, r0, #0x18
    // ldr r0, [sp, #0x4c]
    // asr r3, r2, #0xd
    // and r3, r0
    // str r3, [sp, #0x60]
    // asr r3, r2, #0xe
    // and r0, r3
    // str r0, [sp, #0x5c]
    // asr r3, r2, #0xf
    // and r0, r3
    // str r0, [sp, #0x28]
    // asr r3, r2, #0x1a
    // and r0, r3
    // str r0, [sp, #0x58]
    // asr r0, r2, #0x12
    // str r0, [sp, #0x54]
    // asr r0, r2, #0x1c
    // and r0, r1
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x5c]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetDataCopyArea((((((((((3 << 0x18) >> 0x18) << 0x18) >> 0x18) << 0x18) >> 0x18) + 1) << 0x18) >> 0x18), 0xf, *((u32*)((*((u32*)(((r0 << 0x18) >> 0x18) + 0x18)) << 0x18) + 0x20)), ((r3 << 0x18) >> 0x18));
    ov96_021E8A20();
    *((u8*)(r0 + 8)) = 0;
    // strh r7, [r6, r0]
    // add r0, #0xc
    // add r2, r6, r5
    // strb r3, [r2, r0]
    // ldr r3, [sp, #0xc]
    // add r0, r6, r0
    ov96_021F2B68(0x000007AC, ((*((u16*)(r6 + (0x73 << 4))) << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18), 0);
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)r6), 1, *((u32*)(r6 + 0x00000738)), *((u32*)(*((u32*)(r6 + 0x00000738)) + 8)));
    ScheduleBgTilemapBufferTransfer(*((u32*)r6), 1);
    // str r1, [r6, r0]
    // ldr r1, [sp, #0x50]
    // sub r0, #0xd1
    PlaySE(0x000007A8, *((u32*)(r6 + 0x000007A8)));
    // str r1, [r6, r0]
    // ldr r0, [sp, #0x50]
    PlaySE(0x000006D7, 1);
    // str r1, [r6, r0]
    // ldr r0, [sp, #0x50]
    PlaySE(0x000006D7, 1);
    // str r1, [r6, r0]
    ov96_021F295C(r4, *((u32*)r6));
    // add r2, sp, #0x11c
    // strh r0, [r2]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r2, sp, #0x11c
    LoadRectToBgTilemapRect(*((u32*)r6), 1, (r2 + 2), 0xe);
    ov96_021F295C(0x2a, *((u32*)r6));
    // ldr r0, [sp, #0x60]
    PlaySE(0x000008CF);
    // ldr r1, [sp, #0x50]
    ov96_021F4364(*((u32*)(r6 + 0x00000774)));
    // add r0, sp, #0x12c
    // str r0, [sp, #0x30]
    // add r2, sp, #0xa4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x8c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp, #0x68]
    // add r0, #0x20
    // str r5, [sp, #0x34]
    // str r0, [sp, #0x68]
    _s32_div_f(0, 3, ov96_0221BCB4);
    // str r1, [sp, #0x14]
    _s32_div_f(r5, 3);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x68]
    // ldr r2, [sp, #0x14]
    // add r0, r0, r1
    // add r4, r0, r1
    ov96_021EAA20(*((u32*)(r0 + (0x90 * r2))), (0x90 * r2));
    ov96_021E8BAC();
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x4c]
    // ldr r0, [sp, #0x34]
    // asr r1, r0
    // and r0, r1
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x4c]
    // asr r1, r5
    // and r0, r1
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x38]
    // strh r1, [r7, r0]
    // add r2, sp, #0xa4
    // add r3, sp, #0xf8
    // mov ip, r3
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, sp, #0x8c
    // add r3, sp, #0xe0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r2, ip
    _fmul(0x45800000, *((u32*)(r2 + ((*((u16*)(r7 + 0x0000077A)) >> 1) << 2))));
    _ffix();
    // str r0, [sp, #0x110]
    // add r1, sp, #0xf8
    _fmul(0x45800000, *((u32*)((*((u16*)(r7 + 0x0000077A)) >> 1) + ((*((u16*)(r7 + 0x0000077A)) >> 1) << 2))), ((*((u16*)(r7 + 0x0000077A)) >> 1) << 2));
    _ffix();
    // str r0, [sp, #0x114]
    // add r1, sp, #0xf8
    _fmul(0x45800000, *((u32*)((*((u16*)(r7 + 0x0000077A)) >> 1) + ((*((u16*)(r7 + 0x0000077A)) >> 1) << 2))), ((*((u16*)(r7 + 0x0000077A)) >> 1) << 2));
    _ffix();
    // str r0, [sp, #0x118]
    // ldr r0, [sp, #0x4c]
    // ldr r1, [sp, #0x4c]
    // add r2, r0, r5
    // add r0, sp, #0x84
    // str r0, [sp]
    // add r3, sp, #0x88
    ov96_021EB06C(*((u32*)r4), *((u8*)(r1 + r5)), *((u8*)(r2 + 0xc)));
    // ldr r0, [sp, #0x84]
    // add r0, sp, #0xe0
    // str r0, [sp, #0x38]
    // strh r1, [r7, r0]
    ov96_021EABE0(*((u32*)r4), 1);
    // ldr r0, [sp, #0x3c]
    // add r1, sp, #0x110
    Sprite_SetAffineScale();
    // strh r1, [r7, r0]
    ov96_021EAB38(*((u32*)r4), 0);
    ov96_021EB52C(*((u32*)(r4 + 8)), 1, 0);
    ov96_021EAB74(*((u32*)r4), 0);
    // ldr r0, [sp, #0x4c]
    // ldr r1, [sp, #0x4c]
    // add r2, r0, r5
    // ldr r2, [sp, #0x38]
    // add r2, r2, r3
    ov96_021EB01C(*((u32*)r4), *((u8*)(r1 + r5)), 1);
    // ldr r0, [sp, #0x30]
    // strb r1, [r0]
    // strh r1, [r7, r0]
    // strh r1, [r7, r0]
    // str r0, [sp, #0xd4]
    // str r0, [sp, #0xd8]
    // str r0, [sp, #0xdc]
    ov96_021EABE0(*((u32*)r4), 0);
    // ldr r0, [sp, #0x40]
    ov96_021EB52C(*((u32*)(r4 + 8)), 1, 1);
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    IsSEPlaying((0x89 << 4));
    PlaySE((0x89 << 4));
    ov96_021EB52C(1, 0);
    // ldr r0, [sp, #0x3c]
    // add r1, sp, #0xd4
    Sprite_SetAffineScale();
    ov96_021EAB38(*((u32*)r4), 1);
    // ldr r0, [sp, #0x44]
    // add r0, r6, r5
    // strb r2, [r0, r1]
    // add r0, #0x30
    // add r3, #0x68
    ov96_021EAF60(*((u32*)(r6 + 0x0000073C)), ((r5 << 0x18) >> 0x18), 1, r4);
    // ldr r0, [sp, #0x44]
    // add r0, r6, r5
    // strb r2, [r0, r1]
    // add r0, #0x30
    // add r3, #0x48
    ov96_021EAF60(*((u32*)(r6 + 0x0000073C)), ((r5 << 0x18) >> 0x18), 1, r4);
    // ldr r0, [sp, #0x30]
    // strb r1, [r0]
    // ldr r0, [sp, #0x4c]
    // add r1, r0, r5
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x4c]
    // ldr r0, [sp, #0x34]
    // asr r1, r0
    // and r0, r1
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 0xc)) = (((3 << 0x18) >> 0x18) << 0xc);
    // ldr r0, [sp, #0x1c]
    *((u32*)(r4 + 0x10)) = ((((3 << 0x18) >> 0x18) << 0xc) << 0xc);
    // add r0, sp, #0xc8
    // str r1, [r0]
    *((u32*)(((((3 << 0x18) >> 0x18) << 0xc) << 0xc) + 4)) = 0;
    *((u32*)(((((3 << 0x18) >> 0x18) << 0xc) << 0xc) + 8)) = 0;
    // str r0, [sp, #0xc8]
    // str r0, [sp, #0xcc]
    ov96_021EB5B8(*((u32*)(r4 + 4)), 0);
    // add r1, sp, #0xc8
    Sprite_SetMatrix();
    // add r0, sp, #0xbc
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // str r0, [sp, #0xbc]
    // str r0, [sp, #0xc0]
    _s32_div_f(r5, 3);
    // str r1, [sp, #0x10]
    _s32_div_f(r5, 3);
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    ov96_021E60C0(r0);
    // ldr r1, [sp, #0xc0]
    // sub r0, r1, r0
    // str r0, [sp, #0xc0]
    // ldr r1, [sp, #0xc0]
    // sub r0, r1, r0
    // str r0, [sp, #0xc0]
    // ldr r1, [sp, #0xc0]
    // sub r0, r1, r0
    // str r0, [sp, #0xc0]
    GF_AssertFail((1 << 0x10));
    ov96_021EB5B8(*((u32*)(r4 + 8)));
    // add r1, sp, #0xbc
    Sprite_SetMatrix();
    ov96_021EAA04(*((u32*)(r6 + 0x0000076C)), ((r5 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x48]
    // str r0, [sp, #0x6c]
    // str r1, [sp, #0x20]
    ov96_021EAC0C((((r1 + 1) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x6c]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    ov96_021EB01C(1);
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x10]
    ov96_021E60D8();
    // str r0, [sp]
    // ldrsh r2, [r6, r2]
    // ldr r0, [sp, #0x6c]
    // ldr r3, [sp, #0x20]
    ov96_021EAED4(0, 0, (0x7d << 4));
    // ldr r0, [sp, #0x5c]
    ov96_021EAA04(*((u32*)(r6 + 0x0000076C)), ((r5 << 0x18) >> 0x18));
    // str r0, [sp, #0x70]
    // ldr r0, [sp, #0x3c]
    Sprite_SetAnimActiveFlag(0);
    // strb r1, [r6, r0]
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x70]
    // add r1, r6, r1
    ov96_021F2E80(0x000007AF, 0x000007AC, ((r5 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x3c]
    Sprite_SetAnimActiveFlag(1);
    // ldr r0, [sp, #0x64]
    // ldr r0, [sp, #0x28]
    ov96_021EB5B8(*((u32*)(r4 + 4)));
    // str r0, [sp, #0x74]
    ov96_021EB52C(*((u32*)(r4 + 4)), 1, 1);
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x74]
    Sprite_SetAnimCtrlSeq((r1 + 2));
    // ldr r0, [sp, #0x28]
    PlaySE(0x0000088D);
    PlaySE(0x0000088E);
    PlaySE(0x0000088F);
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    ov96_021F4390(*((u32*)(r6 + 0x00000774)), ((r1 << 0x18) >> 0x18));
    // add r0, r6, r0
    ov96_021F2E2C(0x000007AC, ((r5 << 0x18) >> 0x18));
    GF_AssertFail();
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // add r0, sp, #0x7c
    // str r0, [sp]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // add r3, sp, #0x80
    ov96_021EB06C(*((u32*)r4));
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x80]
    // ldr r2, [sp, #0x7c]
    // add r3, sp, #0x78
    ov96_021F3180(((*((u16*)(r6 + (0x73 << 4))) << 0x18) >> 0x18), ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10));
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    ov96_021E658C(((r1 << 0x18) >> 0x18), 1);
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    ov96_021E658C(((r1 << 0x18) >> 0x18), 0);
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x4c]
    ov96_021F2FEC(r6);
    // ldr r0, [sp, #0x5c]
    // add r0, r6, r0
    ov96_021F2D98((0x000007AF - 3), 0x000007AF);
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x58]
    ov96_021F4688(*((u32*)(r6 + 0x00000774)));
    // ldr r1, [sp, #0x5c]
    // add r2, sp, #0x12c
    ov96_021F45F4(*((u32*)(r6 + 0x00000774)));
}




void ov96_021F1CC0(void) {
    // str r0, [sp, #4]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x20
    // str r0, [sp, #0x10]
    _s32_div_f(0, 3);
    _s32_div_f(r6, 3);
    // ldr r0, [sp, #0x10]
    // add r1, r0, r1
    // add r4, r1, r0
    // add r0, #0x46
    // ldrsb r0, [r4, r0]
    // add r0, #0x47
    // strb r1, [r0]
    // ldrsb r0, [r4, r0]
    // add r1, #0x46
    // strb r0, [r1]
    ov96_021F2F7C(*((u32*)r4), *((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x2c)));
    *((u32*)(r4 + 0x18)) = 0;
    // add r1, #0x45
    // strb r0, [r1]
    // add r4, #0x44
    // strb r0, [r4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r7 << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18), 5);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r7 << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18), 1);
    // ldr r0, [sp, #0xc]
    // add r4, r0, r6
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r7 << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18), 8);
    // strb r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // add r0, #0x20
    // str r0, [sp, #0x14]
    _s32_div_f(0, 3);
    _s32_div_f(r6, 3);
    // ldr r0, [sp, #0x14]
    // add r2, r0, r2
    // add r7, r2, r0
    // str r0, [sp, #8]
    _s32_div_f(0, 3, (r4 * (0x1b << 4)));
    _s32_div_f(r5, 3);
    // ldr r0, [sp, #0x14]
    // add r2, r0, r2
    // add r1, r2, r0
    ov96_021F218C(r7, (r4 * (0x1b << 4)));
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    *((u32*)(r7 + 0x18)) = 1;
    // add r2, sp, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x18]
    // add r0, #0x20
    // str r0, [sp, #0x18]
    _s32_div_f(0, 3, ov96_0221BC64);
    _s32_div_f(r5, 3);
    // ldr r0, [sp, #0x18]
    // add r2, r0, r2
    // add r4, r2, r0
    // add r1, #0x41
    // strb r0, [r1]
    *((u32*)(r4 + 0x34)) = 0;
    *((u32*)(r4 + 0x38)) = 0;
    // add r3, sp, #0x5c
    // add r6, #0x28
    *((u32*)(r4 + 0x3c)) = 0;
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0x1c
    // add r2, sp, #0x74
    VEC_Subtract(r4, r3, r3);
    // add r0, sp, #0x74
    VEC_Mag();
    ov96_021F2AA4(r4);
    // add r0, sp, #0x74
    // add r1, sp, #0x68
    VEC_Normalize();
    // add r0, #0x44
    // add r0, #0x89
    _ffltu(*((u8*)r4));
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    _fflt(r7);
    // str r0, [sp, #0x1c]
    _fmul(0x45800000, r6);
    // ldr r0, [sp, #0x1c]
    _fleq(r0);
    // add r3, #0x1c
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x5c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0x50
    // str r1, [r0]
    *((u32*)(*((u32*)r4) + 4)) = 0;
    *((u32*)(*((u32*)r4) + 8)) = 0;
    _fmul(0x45800000, r6, r4);
    _ffix();
    // add r1, sp, #0x68
    // add r2, sp, #0x50
    // add r3, sp, #0x74
    VEC_MultAdd();
    // add r1, sp, #0x5c
    // add r0, sp, #0x74
    VEC_Add(r1);
    // add r6, sp, #0x20
    // ldmia r6!, {r0, r1}
    // add r3, sp, #0x44
    // stmia r3!, {r0, r1}
    // add r1, sp, #0x38
    // str r0, [r3]
    // ldr r0, [sp, #0x6c]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x68]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x3c]
    CalcAngleBetweenVecs(r3, r3);
    // add r1, #0x40
    // strb r0, [r1]
    // add r1, #0x40
    // strb r0, [r1]
    // add r1, #0x40
    // strb r0, [r1]
    // add r1, #0x40
    // strb r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r3, sp, #0x74
    ov96_021F22FC(*((u32*)(r4 + 0x18)), r4, ((r5 << 0x18) >> 0x18));
    // add r0, sp, #0x2c
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, #0x44
    // add r1, #0x41
    // strb r0, [r1]
    // add r0, #0x8a
    _ffltu(*((u16*)r4), r4);
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    // add r0, #0x46
    _ffltu(*((u8*)r4));
    _fadd(r6, r0);
    _fmul(0x45800000, r0);
    _ffix();
    // add r1, sp, #0x68
    // add r2, sp, #0x2c
    // add r3, #0x34
    VEC_MultAdd(r4);
    // add r0, #0x8e
    // add r0, #0x8e
    // add r4, #0x8e
    // strh r0, [r4]
    GF_AssertFail((*((u16*)r4) - 1));
    ov96_021F2AA4(r4);
    // add r2, sp, #0x5c
    // ldmia r2!, {r0, r1}
    // add r4, #0x28
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r1, #0x8e
    // add r2, sp, #0x5c
    // strh r0, [r1]
    // ldmia r2!, {r0, r1}
    // add r4, #0x28
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r0, [sp, #0xc]
    ov96_021F234C(*((u32*)r2), r4);
}




void ov96_021F208C(void) {
    // str r0, [sp, #8]
    // add r0, sp, #0
    // ldr r5, [sp, #0x20]
    // str r6, [sp]
    // str r4, [sp, #4]
    // add r0, sp, #0
    // str r6, [r5]
}




void ov96_021F20C4(void) {
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r7, #0x20
    // add r7, r7, r1
    // add r1, r7, r0
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // add r0, sp, #0x18
    // str r0, [sp, #4]
    // asr r2, r0, #0xb
    // add r2, r0, r2
    // asr r0, r2, #0xc
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, sp, #0x20
    // ldr r2, [sp, #0x18]
    // str r2, [r0, r1]
    // add r0, sp, #0x1c
    // strb r1, [r0, r4]
    // str r1, [r0, r2]
    // add r0, sp, #0x1c
    // strb r1, [r0, r4]
    // add r0, sp, #0x20
    // add r1, sp, #0x1c
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // add r0, r2, r0
}




void ov96_021F218C(void) {
    // add r0, sp, #0x20
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // add r3, sp, #0x1c
    // add r0, sp, #0x14
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // add r3, sp, #0x10
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x28
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x1c
    // add r1, sp, #0x10
    // add r0, sp, #0x28
}




void ov96_021F21EC(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r5, r2, r1
    _s32_div_f(0, 3, _0221DCA0);
    // ldr r0, [sp, #8]
    _s32_div_f(3);
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // add r0, #0x20
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // add r2, r0, r2
    // add r0, r2, r0
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r7, r1, r0
    // ldr r0, [sp, #8]
    // add r2, r5, r1
    // str r0, [r5, r1]
    *((u32*)((r6 * (0x1b << 4)) + 8)) = 0;
    _s32_div_f(r4, 3, (r6 * (0x1b << 4)));
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #0xc]
    // add r2, r0, r2
    // add r6, r2, r0
    // ldr r0, [sp, #4]
    // str r0, [r5, r2]
    // add r1, r5, r2
    // str r2, [r7, r3]
    *((u32*)(r1 + 8)) = 0;
    // add r0, r7, r3
    *((u32*)(0xc0 + 8)) = 0;
    // ldr r0, [sp, #4]
    ov96_021F218C(0xc0, r6, 0, (r4 * 0xc0));
    // str r0, [r5, r1]
    // add r2, r5, r1
    // str r0, [r7, r1]
    // ldr r0, [sp, #4]
    // add r3, r7, r1
    *((u32*)(r2 + 8)) = r6;
    *((u32*)(r3 + 8)) = 1;
    // str r0, [r5, r2]
    // add r1, r5, r2
    // str r2, [r7, r3]
    *((u32*)((r4 * 0xc0) + 8)) = 0;
    // add r0, r7, r3
    *((u32*)(0xc0 + 8)) = 0;
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_021F22FC(void) {
    // add r5, r3, r0
    // add r6, #0x28
    // add r1, r5, r0
    // add r0, #0x28
    // add r2, sp, #0
    VEC_Subtract(*((u32*)(r1 + 8)), r1, _0221DCA0);
    // add r1, sp, #0
    VEC_DotProduct(r7);
}




void ov96_021F234C(void) {
    // str r0, [sp]
    // str r5, [sp, #0x14]
    // add r7, sp, #0x70
    // add r6, #0x20
    _s32_div_f(0, 3);
    _s32_div_f(r5, 3);
    // add r2, r6, r0
    // add r1, r2, r0
    // add r0, #0x41
    // ldr r0, [sp, #0x14]
    // str r2, [sp, #0x14]
    // strb r5, [r7, r0]
    // add r2, sp, #0x7c
    // add r0, #0x1c
    // add r1, #0x28
    // add r2, r2, r3
    VEC_Subtract(r1, 0xc, (r5 * 0xc));
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x10c
    MIi_CpuClear32(0, (0x1b << 6));
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x70
    // str r1, [sp, #0x60]
    // add r0, sp
    MI_CpuFill8(0x000007CC, 0, (0x7b << 4));
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x10c
    // add r4, r2, r1
    // add r1, sp
    // add r3, r4, r2
    // str r3, [r1, r2]
    // add r0, sp, #0x64
    MI_CpuFill8(0xa4, 0, 0xc);
    _s32_div_f(r7, 3);
    _s32_div_f(r7, 3);
    // ldr r0, [sp]
    // add r0, r0, r3
    // add r3, r2, r0
    // add r3, #0x54
    // add r2, sp, #0x48
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x18]
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // str r0, [sp, #0x20]
    // add r0, #0x48
    // str r0, [sp, #0x20]
    _s32_div_f(r7, 3, (r1 * 0x90), (r4 * (0x1b << 4)));
    _s32_div_f(r7, 3);
    // ldr r0, [sp, #0x20]
    // add r0, r0, r2
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // add r0, sp, #0x64
    // strb r1, [r0, r7]
    // add r0, sp
    // add r4, r0, r1
    *((u16*)(r4 + 0x10)) = 0;
    *((u16*)(r4 + 0x12)) = 0;
    // add r6, #0x10
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #8]
    // add r1, r1, r0
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x24]
    // add r0, #0x28
    // add r1, r2, r1
    // add r2, sp, #0x3c
    VEC_Subtract(*((u32*)((r7 * 0xc0) + 8)), (r7 * 0xc0), (r4 * (0x1b << 4)));
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x3c
    VEC_DotProduct();
    // add r3, sp, #0x3c
    // add r0, r4, r0
    *((u8*)(*((u16*)(r4 + 0x10)) + 4)) = r5;
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // strh r0, [r6]
    // add r0, sp
    // ldr r1, [sp, #0x18]
    VEC_Add(*((u32*)(0x000007CC + (r7 * 0xa4))), (r7 * 0xa4), *((u32*)(0x000007CC + (r7 * 0xa4))));
    // add r0, sp
    // add r4, r0, r1
    // add r0, sp, #0x64
    // strb r1, [r0, r7]
    // add r0, sp, #0x54
    ov96_021F27A8(*((u16*)(r4 + 0x12)), 0);
    // add r1, r4, r0
    // add r1, sp, #0x64
    *((u16*)(r4 + 0x12)) = (r0 + 1);
    // add r0, sp, #0x54
    ov96_021F2780((r0 + 1), r0, *((u8*)(r1 + 4)));
    // add r3, #0x14
    // add r1, r3, r1
    ov96_021F2814(*((u32*)r4), (0xc * *((u16*)(r4 + 0x12))), *((u16*)(r4 + 0x12)), r4);
    // ldr r1, [sp, #0xc]
    // add r2, sp, #0x48
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x14
    // ldr r2, [sp, #0x18]
    // add r1, r3, r1
    ov96_021F27B8(*((u32*)r4), (0xc * *((u16*)(r4 + 0x12))), *((u16*)(r4 + 0x12)), r4);
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    // add r0, r4, r1
    // ldr r0, [sp, #0x10]
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r2, sp, #0x10c
    // str r0, [sp, #0x28]
    // add r0, #0x20
    // add r7, r2, r1
    // str r0, [sp, #0x28]
    _s32_div_f(0, 3);
    _s32_div_f(r5, 3);
    // ldr r0, [sp, #0x28]
    // add r4, r0, r2
    // str r0, [sp, #0x2c]
    // add r0, r4, r6
    // ldr r1, [sp, #0x2c]
    // add r0, #0x28
    // add r1, r7, r1
    VEC_Add((0xc * r5), (0xc * r5));
    // ldr r0, [sp, #0x2c]
    // add r0, r7, r0
    VEC_Mag();
    // add r0, r4, r6
    // add r0, #0x41
    // add r2, r4, r6
    // add r2, #0x28
    // add r3, r4, r6
    // ldmia r2!, {r0, r1}
    // add r3, #0x1c
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // add r1, sp, #0x70
    _s32_div_f(*((u8*)(r1 + ((r5 + 1) << 0x18))), 3);
    _s32_div_f(r4, 3);
    // ldr r2, [sp]
    // add r2, #0x20
    // add r2, r2, r0
    // add r5, r2, r0
    // add r0, #0x8e
    // ldr r0, [sp]
    // add r2, r0, r3
    // strb r1, [r2, r0]
    GF_AssertFail(*((u32*)(r5 + 0x18)), 0xc, (0 + 1));
    // add r0, #0x44
    // strb r1, [r0]
    // add r0, #0x45
    // add r3, #0x28
    // strb r1, [r0]
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r5 + 0x34)) = 0;
    *((u32*)(r5 + 0x38)) = 0;
    // add r5, #0x41
    // strb r0, [r5]
    // ldr r0, [sp, #4]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp]
    // add r0, #0x20
    // str r0, [sp]
    // add r7, sp, #0x30
    _s32_div_f(0, 3, r5, r5);
    _s32_div_f(r5, 3);
    // ldr r0, [sp]
    // add r4, r0, r2
    // add r0, r4, r6
    // add r1, r4, r6
    // add r0, #0x1c
    // add r1, #0x28
    VEC_Subtract(0x90, r7);
    // add r0, sp, #0x7c
    // add r0, r0, r1
    VEC_DotProduct(0xc, r7);
    // add r2, r4, r6
    // add r2, #0x28
    // add r3, r4, r6
    // ldmia r2!, {r0, r1}
    // add r3, #0x1c
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov96_021F2780(void) {
    // strb r4, [r5, r0]
}




void ov96_021F27A8(void) {
    // bpl _021F27B2
}




void ov96_021F27B8(void) {
    // add r1, sp, #0x18
    // add r1, sp, #0xc
    // add r0, sp, #0x18
    // add r1, sp, #0xc
    // add r1, sp, #0
    // str r0, [r1]
    // asr r1, r5, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r1, sp, #0xc
    // add r2, sp, #0
}




void ov96_021F2814(void) {
}




void ov96_021F2834(void) {
    // add r1, sp, #0x10
    // strb r5, [r1]
    // strb r5, [r4, r1]
    // add r0, #0x23
    // strb r5, [r4, r0]
    // add r1, #0x24
    // strb r5, [r4, r1]
    // add r7, #0x20
    _s32_div_f(0, 3);
    _s32_div_f(r5, 3);
    // add r2, r7, r0
    // add r6, r2, r0
    // add r0, sp, #8
    // str r0, [sp]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // add r3, sp, #0xc
    ov96_021EB06C(*((u32*)r6), *((u32*)(r6 + 0x28)), *((u32*)(r6 + 0x2c)), (r3 >> 0x14));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // add r3, sp, #4
    ov96_021F3180(((*((u16*)(r4 + (0x73 << 4))) << 0x18) >> 0x18), ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10));
    // add r0, #0x42
    // add r6, #0x42
    // add r3, sp, #0x10
    // add r0, r0, r2
    // strh r0, [r6]
    // add r0, sp, #4
    // add r0, sp, #0x10
    // strb r6, [r3, r1]
    // add r3, sp, #0x18
    // add r3, r3, r6
    // strb r5, [r0, r3]
    // add r0, sp, #0x14
    // strb r2, [r0, r1]
    // mov ip, r0
    // add r7, sp, #0x18
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // add r5, r4, r3
    // strb r6, [r5, r3]
    // add r5, r4, r3
    // strb r6, [r5, r3]
    // sub r3, #0xe
    // strb r5, [r4, r3]
    // mov r0, ip
    // add r7, #0xc
    // mov ip, r0
}




void ov96_021F295C(void) {
}




void ov96_021F2984(void) {
    // add r3, #0x12
    // sub r0, #0x10
    // sub r3, r0, r2
    // sub r0, #0x26
    // sub r0, #0x1d
    // sub r0, r0, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov96_021F2A00(void) {
    // str r0, [sp, #8]
    // add r0, #0x20
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r4, [sp, #8]
    // ldr r5, [sp, #4]
    *((u32*)(r4 + 0x18)) = 2;
    // add r0, sp, #0x10
    // str r0, [sp]
    // add r3, sp, #0x14
    ov96_021EB0A4(*((u32*)r4), *((u16*)r5), *((u16*)(r5 + 2)));
    // ldr r0, [sp, #0x14]
    *((u32*)(r4 + 0x28)) = (r0 << 0xc);
    // ldr r0, [sp, #0x10]
    // add r3, #0x28
    *((u32*)(r4 + 0x2c)) = ((r0 << 0xc) << 0xc);
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x40
    // strb r0, [r1]
    // add r4, #0x90
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_021F2A84(void) {
    // add r1, r0, r2
    // add r1, #0x90
}




void ov96_021F2AA4(void) {
    // add r1, #0x44
    // add r1, #0x45
    // add r1, #0x45
    // strb r2, [r1]
    // add r1, #0x45
    // add r1, #0x45
    // strb r2, [r1]
    // add r1, #0x44
    // strb r2, [r1]
    // add r1, #0x8c
    // add r0, #0x8e
    // strh r1, [r0]
    // add r1, #0x8e
    // add r1, #0x8e
    // strh r2, [r1]
    // add r1, #0x8c
    // add r1, #0x8e
    // add r1, #0x8e
    // strh r2, [r1]
    // add r1, #0x8e
    // add r1, #0x8c
    // add r1, #0x45
    // strb r2, [r1]
    // add r0, #0x44
    // strb r2, [r0]
}




void ov96_021F2B24(void) {
    // ldr r4, [sp, #0x10]
    // add r1, #0x8a
    // strh r2, [r1]
    // add r1, r5, r1
    // add r1, #0x8c
    // strh r2, [r1]
    // add r1, r5, r1
    // add r1, #0x8e
    // strh r2, [r1]
    // add r4, #0x89
    // add r0, r5, r0
    // strb r0, [r4]
}




void ov96_021F2B68(void) {
    *((u16*)(r0 + 0x1c)) = r1;
    *((u16*)(r0 + 0x1e)) = r2;
    // strb r2, [r4]
    SysTask_CreateOnMainQueue(ov96_021F2BB4, r0, 0);
    *((u32*)(r4 + 4)) = r0;
    SysTask_CreateOnMainQueue(ov96_021F2C04, r4, 1);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x30)) = r5;
    // str r1, [r0]
    SysTask_CreateOnMainQueue(ov96_021F2CD0, r4, 2);
    *((u32*)(r4 + 8)) = r0;
}




void ov96_021F2BB4(void) {
    SysTask_CreateOnMainQueue(ov96_021F2D68, 3);
    *((u32*)(r4 + 0x10)) = r0;
    // strb r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    // strb r0, [r4]
    PokeathlonCourse_GetDataCopyArea(*((u32*)(r4 + 0x30)));
    ov96_021E8A20();
    *((u8*)(r0 + 8)) = 1;
    SysTask_Destroy(r5, 1);
}




void ov96_021F2C04(void) {
    *((u16*)(r1 + 0x18)) = (*((u16*)(r1 + 0x18)) + 1);
    _s32_div_f((0xc * ((*((u16*)(r1 + 0x18)) << 0x18) >> 0x18)), 5);
    // str r0, [sp]
    // sub r3, r3, r4
    G2x_SetBlendAlpha_(0x04000050, 0, 1, 0xc);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    ov96_021F31F0(*((u32*)(r4 + 0x20)), ((*((u16*)(r4 + 0x1e)) << 0x18) >> 0x18));
    ov96_021F3298(*((u32*)(r4 + 0x20)), ((*((u16*)(r4 + 0x1c)) << 0x18) >> 0x18));
    *((u16*)(r4 + 0x18)) = 0;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    PlaySE(0x0000089F);
    *((u16*)(r4 + 0x18)) = (*((u16*)(r4 + 0x18)) + 1);
    _s32_div_f((0xc * ((*((u16*)(r4 + 0x18)) << 0x18) >> 0x18)), 5);
    // sub r0, r0, r3
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 1, ((r0 << 0x10) >> 0x10));
    *((u32*)(r4 + 0xc)) = 0;
    *((u16*)(r4 + 0x18)) = 0;
    *((u8*)(r4 + 1)) = 0;
    SysTask_Destroy(0);
}




void ov96_021F2CD0(void) {
    *((u16*)(r1 + 0x1a)) = (*((u16*)(r1 + 0x1a)) + 1);
    _s32_div_f((*((u16*)(r1 + 0x1a)) << 7), 5);
    // sub r0, r1, r0
    // and r1, r0
    // str r1, [r0]
    *((u16*)(r4 + 0x1a)) = 0;
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    *((u16*)(r4 + 0x1a)) = (*((u16*)(r4 + 0x1a)) + 1);
    *((u16*)(r4 + 0x1a)) = 0;
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    *((u16*)(r4 + 0x1a)) = (*((u16*)(r4 + 0x1a)) + 1);
    // neg r0, r0
    _s32_div_f((*((u16*)(r4 + 0x1a)) << 7), 5);
    // and r1, r0
    // str r1, [r0]
    *((u16*)(r4 + 0x1a)) = 0;
    *((u32*)(r4 + 8)) = 0;
    *((u8*)(r4 + 2)) = 0;
    SysTask_Destroy(r5, (r0 << 0x10));
}




void ov96_021F2D68(void) {
    // ldrsh r4, [r1, r2]
    // add r2, r4, r2
    *((u16*)(r1 + 0x24)) = *((u32*)(ov96_0221DB70 + (*((u16*)(r1 + 0x26)) << 2)));
    *((u16*)(r1 + 0x26)) = (*((u16*)(r1 + 0x26)) + 1);
    *((u16*)(r1 + 0x24)) = 0;
    *((u32*)(r1 + 0x10)) = 0;
    *((u16*)(r1 + 0x26)) = 0;
    SysTask_Destroy(0, (*((u16*)(r1 + 0x26)) << 2));
}




void ov96_021F2D98(void) {
    *((u8*)(r0 + 3)) = 0;
    PokeathlonCourse_GetDataCopyArea(*((u32*)(r0 + 0x30)));
    ov96_021E8A20();
    *((u8*)(r0 + 8)) = 1;
    SysTask_Destroy(*((u32*)(r4 + 4)), 1);
    *((u32*)(r4 + 4)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 8)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0xc)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x10)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x14)) = 0;
    // str r1, [r0]
    // strb r1, [r4]
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 2)) = 0;
    *((u16*)(r4 + 0x18)) = 0;
    *((u16*)(r4 + 0x1a)) = 0;
    *((u16*)(r4 + 0x26)) = 0;
    *((u16*)(r4 + 0x2e)) = 0;
    *((u16*)(r4 + 0x24)) = 0;
    *((u16*)(r4 + 0x2c)) = 0;
    *((u32*)(r4 + 0x28)) = 0xc;
    // str r2, [sp]
    // add r0, #0x38
    G2x_SetBlendAlpha_(0x04000018, 0, 1, 0xc);
}




void ov96_021F2E2C(void) {
}




void ov96_021F2E4C(void) {
    // ldrsh r4, [r1, r2]
    // add r2, r4, r2
    *((u16*)(r1 + 0x2c)) = *((u32*)(ov96_0221DB5C + (*((u16*)(r1 + 0x2e)) << 2)));
    *((u16*)(r1 + 0x2e)) = (*((u16*)(r1 + 0x2e)) + 1);
    *((u16*)(r1 + 0x2c)) = 0;
    *((u32*)(r1 + 0x14)) = 0;
    *((u16*)(r1 + 0x2e)) = 0;
    *((u32*)(r1 + 0x28)) = 0xc;
    SysTask_Destroy(0xc, (*((u16*)(r1 + 0x2e)) << 2));
}




void ov96_021F2E80(void) {
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // str r1, [sp]
    // ldrsh r2, [r5, r2]
    // ldr r3, [sp, #0x20]
}




void ov96_021F2EC8(void) {
    AddWindow(*((u32*)r0), (r0 + 4), ov96_0221BC5C);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r4), 3, 0, 1);
    LoadFontPal0(0, (0x1e << 4), *((u32*)(r4 + 0x14)));
}




void ov96_021F2EFC(void) {
    FillWindowPixelBuffer((r0 + 4), 0);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r5 + 0x14)));
    MessageFormat_New(*((u32*)(r5 + 0x14)));
    // str r1, [sp]
    // str r2, [sp, #4]
    BufferIntegerAsString(0, r7, 3);
    ReadMsgData_ExpandPlaceholders(r6, r4, 0x9e, *((u32*)(r5 + 0x14)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((r5 + 4), 4, r0, 0);
    String_Delete(r7);
    MessageFormat_Delete(r6);
    DestroyMsgData(r4);
    CopyWindowToVram((r5 + 4));
}




void ov96_021F2F7C(void) {
    // add r3, sp, #4
    // str r3, [sp]
    // asr r3, r1, #0xb
    // add r3, r1, r3
    // asr r1, r3, #0xc
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // add r3, sp, #8
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
}




void ov96_021F2FBC(void) {
    // mvn r0, r0
    // mvn r0, r0
}




void ov96_021F2FEC(void) {
    // add r0, sp, #0x14
    // add r7, r0, r1
    // strh r4, [r0, r1]
    // add r0, r6, r4
    // str r0, [sp, #4]
    _s32_div_f(0, 3);
    // str r0, [sp, #8]
    _s32_div_f(r4, 3);
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // add r0, r5, r0
    // add r0, r2, r0
    // ldr r2, [sp, #4]
    // add r3, sp, #0x10
    ov96_021EB06C(*((u32*)(((0x1b << 4) * r2) + 0x20)), *((u8*)(r6 + r4)), *((u8*)((0x90 * r1) + 0xc)));
    // ldr r0, [sp, #0xc]
    *((u16*)(r7 + 2)) = r0;
    // str r0, [sp]
    // add r0, sp, #0x14
    MATH_QSort(*((u32*)(r5 + (0x7f << 4))), 0xc, 4, ov96_021F2FBC);
    // add r0, sp, #0x14
    _s32_div_f(((*((u16*)(r0 + (0 << 2))) << 0x18) >> 0x18), 3);
    _s32_div_f(r7, 3);
    // add r0, r5, r3
    // add r0, r2, r0
    ov96_021EABA8(*((u32*)(0x90 + 0x20)), (r4 + 6), (r1 * 0x90), (r6 * (0x1b << 4)));
}




void ov96_021F30A4(void) {
}




void ov96_021F30BC(void) {
}




void ov96_021F30C4(void) {
    // add r5, #0x10
}




void ov96_021F30F8(void) {
    // sub r0, r5, r4
    // add r0, r0, r1
    // add r0, r0, r4
    // add r0, r4, r1
}




void ov96_021F3180(void) {
    // str r3, [sp, #4]
    // str r5, [sp, #0xc]
    // add r3, r1, r0
    // add r0, r0, r1
    // str r0, [sp, #8]
    // str r0, [sp]
    ov96_021F32FC(r1, r2, *((u16*)(r3 + 4)), *((u16*)(r3 + 6)));
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // strb r5, [r0]
    // ldr r0, [sp, #0xc]
}




void ov96_021F31F0(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // add r0, #0x80
    // add r6, r5, r0
    GF_AssertFail(*((u32*)(r0 + (*((u32*)r0) << 4))), (r0 << 2));
    // str r0, [r6]
    // ldr r0, [sp]
    *((u32*)(r6 + 8)) = 1;
    *((u32*)(r6 + 4)) = r4;
    // add r0, #0x80
    // add r0, r5, r0
    ov96_021EB5B8(*((u32*)((*((u32*)r5) << 4) + 0xc)));
    // add r0, #0x80
    // add r0, r5, r0
    ov96_021EB52C(*((u32*)((*((u32*)r5) << 4) + 0xc)), 1, 1);
    Sprite_SetAnimCtrlSeq(r6, (*((u32*)r4) - 1));
    // str r0, [sp, #0xc]
    // add r1, sp, #4
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Sprite_SetMatrix(r6);
    // add r0, #0x80
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // add r0, #0x80
    // str r1, [r0]
    // add r4, #8
}




void ov96_021F3298(void) {
    // str r0, [r5]
    // add r5, #0x10
}




void ov96_021F32C4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F32D8: ; jump table
}




void ov96_021F32FC(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // str r1, [sp, #0x14]
    // str r1, [sp, #8]
    // add r1, sp, #0
    // add r0, sp, #0xc
    // add r1, sp, #0x10
}




void ov96_021F333C(void) {
    // add r0, r6, r5
    // str r0, [r1]
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    // add r6, r6, r7
    // str r6, [r1]
    *((u16*)(r1 + 4)) = *((u16*)(0 + 4));
    *((u16*)(r1 + 6)) = *((u16*)(0 + 6));
    // add r5, #8
    // add r1, #8
}




void ov96_021F3390(void) {
    Heap_Alloc(0x000004EC);
    MI_CpuFill8(0, 0x000004EC);
    // sub r2, r1, r5
    // strb r5, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
}




void ov96_021F33E0(void) {
    // add r0, r5, r4
    *((u32*)(r0 + 4)) = r2;
    // ldr r2, [sp, #0x10]
    *((u32*)(r0 + 8)) = r3;
    *((u32*)(r0 + 0xc)) = r2;
    // ldr r2, [sp, #0x14]
    *((u32*)(r0 + 0x10)) = r2;
    // mvn r2, r2
    // str r2, [r5, r4]
    // ldr r2, [sp, #0x1c]
    *((u32*)(r0 + 0x14)) = r1;
    *((u32*)(r0 + 0x1c)) = 0;
    _s32_div_f(r1, 3, 0);
    // ldr r1, [sp, #0x18]
    // add r0, r5, r4
    *((u32*)(r0 + 0x18)) = *((u8*)(r5 + 0x000004E9));
    // add r0, r5, r4
    *((u32*)(r0 + 0x18)) = 0;
}




void ov96_021F3424(void) {
}




void ov96_021F342C(void) {
    // strb r2, [r5, r1]
    // sub r1, #0x3a
    // str r2, [r5, r1]
    // strb r1, [r5, r2]
    // add r3, #0x30
    // add r6, r5, r6
    // str r0, [r6, r2]
    // add r1, #0x39
    // add r1, #0x38
    // add r0, #0x35
    // sub r1, r1, r2
    // add r2, r4, r0
    // add r0, r2, r0
    // add r6, r1, r0
    _s32_div_f(*((u8*)(r0 + 0x000004B4)), 3, *((u8*)(r0 + (0x4b << 4))), 0x000004B4);
    GF_AssertFail();
    ov96_021F350C(r5, ((r6 << 0x18) >> 0x18), r7);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    _s32_div_f((*((u8*)(r5 + (0x000004E5 + 3))) + 1), 3, *((u8*)(r5 + 0x000004E5)));
    // strb r1, [r5, r0]
    // sub r0, #0x38
    // str r1, [r5, r0]
}




void ov96_021F350C(void) {
    // str r0, [sp, #8]
    // add r0, r0, r1
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    GF_AssertFail(*((u32*)(*((u32*)*((u32*)(r0 + 0x10))) + 0x18)), (r1 << 5));
    // ldr r0, [sp, #8]
    // sub r1, #0x34
    // ldr r0, [sp, #8]
    // add r0, r0, r2
    LCRandom(*((u32*)(*((u8*)(r0 + 0x000004E8)) + 0x000004E8)), 0x000004E8, (*((u8*)(r0 + 0x000004E8)) << 2));
    _s32_div_f(0x64);
    // ldr r0, [sp, #8]
    // add r2, r0, r1
    // add r1, #0x34
    // str r0, [r2, r1]
    // ldr r5, [sp, #8]
    // add r6, sp, #0x3c
    // add r7, sp, #0x38
    // add r3, sp, #0x40
    // str r6, [sp]
    // str r7, [sp, #4]
    // ldmia r2!, {r1, r2}
    ov96_021EAF78(*((u32*)(r5 + 0x1c)), (*((u8*)(r0 + 0x000004B4)) << 2), *((u32*)(r5 + 0xc)));
    // ldr r1, [sp, #0x40]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // ldr r1, [sp, #0x3c]
    // asr r0, r0, #0xc
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    ov96_021F38FC((r0 >> 0x14), (r2 >> 0x14));
    // mvn r0, r0
    // str r0, [r5]
    // add r5, #0x20
    // ldr r0, [sp, #0x20]
    // add r0, sp, #0x44
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // asr r1, r3, #0xb
    // add r1, r3, r1
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    // add r3, sp, #0x48
    ov96_021EB06C(*((u32*)(0 + 0x1c)), (r1 >> 0x14), (*((u32*)(0 + 0xc)) >> 0x14), *((u32*)(*((u32*)(0 + 0xc)) + 4)));
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x44]
    ov96_021F38FC();
    // ldr r1, [sp, #0x20]
    // str r0, [r1]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0xb0
    ov96_021F333C();
    // ldr r5, [sp, #8]
    // add r4, sp, #0xb0
    ov96_021F38FC(*((u16*)(r4 + 4)), *((u16*)(r4 + 6)));
    // str r0, [r5, r1]
    // str r7, [r5, r0]
    // add r4, #8
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x44]
    // add r2, sp, #0x24
    // add r2, #2
    // add r3, sp, #0x24
    ov96_021F3B04((((0x4a << 4) << 0x10) >> 0x10), (((0x4a << 4) << 0x10) >> 0x10));
    GF_AssertFail();
    // ldr r4, [sp, #8]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r5, r0, r1
    // add r0, sp, #0x24
    // ldrsh r1, [r0, r1]
    // add r7, sp, #0x134
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0x10]
    // str r6, [r4, r0]
    _s32_div_f(0, 5);
    // ldr r0, [sp, #0x14]
    // add r1, r1, r0
    // str r1, [r4, r0]
    _s32_div_f(r6, 5);
    // ldr r0, [sp, #0x10]
    // add r1, r1, r0
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x14]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x10]
    // str r5, [r7]
    // sub r0, r2, r0
    // mvn r2, r2
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // str r1, [sp, #0x1c]
    // add r1, sp, #0x8c
    // str r5, [r1, r0]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // str r1, [sp, #0x18]
    // add r1, sp, #0x4c
    // str r5, [r1, r0]
    // add r4, #0x20
    // add r5, #0x20
    // ldr r0, [sp, #0x1c]
    GF_AssertFail((((0x61 << 2) << 2) << 2), ((0 + 1) + 1), 0);
    // ldr r0, [sp, #0x18]
    GF_AssertFail();
    // add r1, sp, #0x8c
    ov96_021F380C(9);
    // ldr r1, [sp, #0x48]
    // ldr r0, [sp, #0x9c]
    // ldr r3, [sp, #0x20]
    *((u32*)(r0 + 8)) = r1;
    // ldr r1, [sp, #0x44]
    // ldr r0, [sp, #0x9c]
    // add r2, sp, #0xb0
    *((u32*)(r0 + 0xc)) = r1;
    // add r0, sp, #0x8c
    // str r0, [sp]
    // ldr r0, [sp, #8]
    ov96_021F3888(9);
    // add r1, sp, #0x8c
    // add r2, sp, #0xd0
    ov96_021F3B38(9);
    // ldr r0, [sp, #0xd0]
    LCRandom(*((u32*)(r0 + 0x18)));
    _s32_div_f(r4);
    // add r0, sp, #0xd0
    // add r0, sp, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // add r3, sp, #0x34
    ov96_021EB0A4(*((u32*)((r1 << 0x18) + 0x1c)), *((u32*)(*((u32*)((r1 << 0x18) + ((r1 << 0x18) >> 0x16))) + 8)), *((u32*)(*((u32*)((r1 << 0x18) + ((r1 << 0x18) >> 0x16))) + 0xc)));
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x20]
    // str r1, [r0]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x20]
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 0x18)) + 4)) = (*((u32*)(r0 + 0x18)) << 0xc);
    // ldr r0, [sp, #0x20]
    *((u32*)(*((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 0x18)) + 0x18)) + 8)) = 0;
    // add r1, sp, #0x4c
    ov96_021F380C(0x10, 0);
    // add r0, sp, #0x134
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // add r2, sp, #0xb0
    ov96_021F3888(0x19);
    // add r1, sp, #0x134
    // add r2, sp, #0xd0
    ov96_021F3B38(0x19);
    LCRandom();
    _s32_div_f(r4);
    // add r0, sp, #0xd0
    // add r0, sp, #0x28
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // add r3, sp, #0x2c
    ov96_021EB0A4(*((u32*)((r1 << 0x18) + 0x1c)), *((u32*)(*((u32*)((r1 << 0x18) + ((r1 << 0x18) >> 0x16))) + 8)), *((u32*)(*((u32*)((r1 << 0x18) + ((r1 << 0x18) >> 0x16))) + 0xc)));
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // str r1, [r0]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    *((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 0x18)) + 4)) = (*((u32*)(r0 + 0x18)) << 0xc);
    // ldr r0, [sp, #0x20]
    *((u32*)(*((u32*)(*((u32*)(*((u32*)(r0 + 0x18)) + 0x18)) + 0x18)) + 8)) = 0;
}




void ov96_021F380C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // sub r3, r3, r1
    // ror r3, r0
    // add r2, #0x10
    // add r0, r1, r3
    // add r0, r2, r0
    // sub r3, r3, r1
    // ror r3, r0
    // add r0, r1, r3
    // add r2, #0x10
    // add r0, r2, r0
    // add r1, r3, r1
    // mvn r0, r0
    // ldr r0, [sp]
}




void ov96_021F3888(void) {
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r5, [sp, #0x30]
    // mvn r0, r0
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp]
    // add r3, #8
    // ldr r0, [sp, #0xc]
}




void ov96_021F38FC(void) {
    // sub r0, #0x10
    // asr r2, r0, #4
    // add r2, r0, r2
    // sub r1, #0x10
    // asr r0, r1, #4
    // asr r3, r2, #5
    // add r0, r1, r0
    // asr r2, r0, #5
    // mvn r0, r0
    // add r0, r3, r0
    // sub r0, #8
}




void ov96_021F3930(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r7, [sp, #0x28]
    // str r4, [r7]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // ldr r0, [sp]
    // str r0, [r7]
    // ldr r0, [sp]
    // add r4, r4, r0
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [r7]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldmia r2!, {r1, r2}
}




void ov96_021F39F0(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r2, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r5, #0x20
}




void ov96_021F3A5C(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r4, [sp, #0x14]
    // add r6, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // str r7, [sp, #8]
    // add r5, #8
}




void ov96_021F3AB0(void) {
    // ldr r4, [r0, r2]
}




void ov96_021F3AD8(void) {
    // add r1, r1, r0
    // str r0, [r3]
    // ldr r0, [sp, #0x10]
    // str r1, [r0]
}




void ov96_021F3B04(void) {
    // sub r0, #0x10
    // asr r4, r0, #4
    // add r4, r0, r4
    // asr r0, r4, #5
    // sub r1, #0x10
    // strh r0, [r2]
    // asr r0, r1, #4
    // add r0, r1, r0
    // asr r0, r0, #5
    // strh r0, [r3]
    // ldrsh r1, [r2, r0]
    // ldrsh r0, [r3, r0]
}




void ov96_021F3B38(void) {
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // mov ip, r1
    // ldr r0, [sp]
    // add r2, sp, #4
    // mov r3, ip
    // add r2, r2, r1
    // add r3, sp, #4
    // str r4, [r3, r1]
    // str r4, [r2]
    // str r2, [r3]
    // str r3, [r2]
    // ldr r0, [sp, #8]
    // add r0, sp, #4
    // str r3, [r7, r4]
    // ldr r3, [sp]
    // str r3, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov96_021F3BF0(void) {
    Heap_Alloc((0x5d << 2));
    MI_CpuFill8(0, (0x5d << 2));
    // str r5, [r4]
    *((u32*)(r4 + 8)) = r6;
    *((u32*)(r4 + 4)) = r7;
    ov96_021F4558(r4);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, r5);
    *((u32*)(r4 + 0x5c)) = r0;
    MessageFormat_New(r5);
    *((u32*)(r4 + 0x60)) = r0;
}




void ov96_021F3C38(void) {
    // add r0, #0x98
    // add r0, #0x9c
    // add r5, #8
    // add r4, #0xc
    // add r4, #0x10
}




void ov96_021F3CBC(void) {
    // str r0, [sp]
    // add r3, sp, #0xc
    // ldr r3, [sp, #0xc]
    // add r2, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0xe9
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r1]
    // add r3, #0xec
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r1]
    // sub r1, #0x6c
    // add r2, #0xc
    // add r3, #0xfa
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r1]
    // add r3, #0xfd
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r1]
    // add r3, #0xf7
    // str r0, [sp]
    // add r3, r5, r3
    // str r0, [r5, r1]
    // str r0, [sp]
    // add r3, #0x6d
    // add r3, r5, r3
    // str r0, [r5, r1]
    // str r0, [sp]
    // add r3, #0x71
    // add r3, r5, r3
    // str r0, [r5, r1]
    // add r1, #0x8c
    // add r1, #0x90
    // add r1, #0x94
    // add r1, #0x88
    // add r1, #0x98
    // add r2, #0xc
    // add r0, #0x68
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_021F3E58(void) {
}




void ov96_021F3E60(void) {
    // add r4, sp, #8
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r7, [sp]
    ov96_021EB2BC(r0, 0x5d, 9, *((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(r5, 0x5d, 6, *((u32*)r4));
    ov96_021EB334(r5, 0x5d, 0xa, *((u32*)r4));
    ov96_021EB36C(r5, 0x5d, 0xa, *((u32*)r4));
}




void ov96_021F3EC0(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // add r5, sp, #0x1c
    // add r4, sp, #0x14
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021EB408(((*((u32*)r4) << 0x18) >> 0x18), 3, 2, ((*((u32*)r5) << 0x18) >> 0x18));
    // ldr r4, [sp, #8]
    // str r0, [sp, #0xc]
    // add r7, sp, #0x14
    // add r6, sp, #0x1c
    // ldr r0, [sp, #4]
    ov96_021EB4F4(0, ((*((u32*)(r6 + 1)) << 0x18) >> 0x18), ((*((u32*)r7) << 0x18) >> 0x18));
    // add r1, #0xf8
    // str r0, [r1]
    // add r0, #0xf8
    ov96_021EB5B8(*((u32*)r4), r4);
    // str r0, [sp, #0x10]
    Sprite_SetDrawPriority(2);
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x24
    Sprite_SetMatrix((0x26 << 0x10));
    // add r0, #0xf8
    ov96_021EB52C(*((u32*)r4), 1, 0);
    // ldr r0, [sp, #0xc]
    // add r5, #0x80
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov96_021F440C((r0 + 1));
}




void ov96_021F3F80(void) {
    // add r2, sp, #0x18
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    // add r2, sp, #0x10
    *((u8*)(r2 + 4)) = *((u8*)(ov96_0221BFF4 + 4));
    // add r4, #0x68
    *((u8*)(r2 + 5)) = *((u8*)(ov96_0221BFF4 + 5));
    *((u8*)(r2 + 6)) = *((u8*)(ov96_0221BFF4 + 6));
    *((u8*)(r2 + 7)) = *((u8*)(ov96_0221BFF4 + 7));
    // strb r6, [r2]
    *((u8*)(r2 + 1)) = *((u8*)(ov96_0221BFF4 + 1));
    *((u8*)(r2 + 2)) = *((u8*)(ov96_0221BFF4 + 2));
    *((u8*)(r2 + 3)) = *((u8*)(ov96_0221BFF4 + 3));
    // str r2, [sp]
    ov96_021EB408(0, 2, 0x69);
    // str r0, [sp]
    ov96_021EB408(r5, 0, 2, 0x69);
    // str r0, [sp]
    ov96_021EB408(r5, 1, 2, 0x69);
    // str r7, [sp]
    ov96_021EB408(r5, 0, 2, 0x69);
    // str r7, [sp]
    ov96_021EB408(r5, 1, 2, 0x69);
    // str r7, [sp]
    ov96_021EB408(r5, 1, 2, 0x69);
    ov96_021EB4F4(r5, 0x69, 8);
    // add r1, #0xb4
    // str r0, [r1]
    // add r0, #0xb4
    ov96_021EB5B8(*((u32*)r4), r4);
    Sprite_SetDrawPriority(4);
    Sprite_SetAnimCtrlSeq(r6, 0);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x18
    Sprite_SetMatrix(r6);
    // add r0, #0xb4
    ov96_021EB52C(*((u32*)r4), 1, 1);
    ov96_021EB4F4(r5, 0x69, 9);
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xb8
    ov96_021EB5B8(*((u32*)r4), r4);
    Sprite_SetDrawPriority(3);
    Sprite_SetAnimCtrlSeq(r6, 1);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x18
    Sprite_SetMatrix(r6);
    // add r0, #0xb8
    ov96_021EB52C(*((u32*)r4), 1, 1);
    ov96_021EB4F4(r5, 0x69, 0xa);
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, #0xc4
    ov96_021EB5B8(*((u32*)r4), r4);
    Sprite_SetDrawPriority(5);
    Sprite_SetAnimCtrlSeq(r6, 0xd);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x18
    Sprite_SetMatrix(r6);
    // add r0, #0xc4
    ov96_021EB52C(*((u32*)r4), 1, 0);
    ov96_021EB4F4(r5, 0x69, 0xb);
    // add r1, r4, r7
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, r4, r7
    // add r0, #0xbc
    ov96_021EB5B8(*((u32*)r0));
    // str r0, [sp, #4]
    Sprite_SetDrawPriority(6);
    // ldr r0, [sp, #4]
    // add r1, #0xb
    Sprite_SetAnimCtrlSeq(r6);
    // add r0, #0x30
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r1, sp, #0x18
    Sprite_SetMatrix((0x86 << 0xe));
    // add r0, r4, r7
    // add r0, #0xbc
    ov96_021EB52C(*((u32*)r0), 1, 1);
    ov96_021EB4F4(r5, 0x69, 0xc);
    // add r1, r4, r7
    // add r1, #0xc8
    // str r0, [r1]
    // add r0, r4, r7
    // add r0, #0xc8
    ov96_021EB5B8(*((u32*)r0));
    // str r0, [sp, #8]
    Sprite_SetDrawPriority(8);
    // ldr r0, [sp, #8]
    Sprite_SetAnimCtrlSeq(0xe);
    // add r0, sp, #0x14
    // str r0, [sp, #0x18]
    // add r0, sp, #0x10
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // add r1, sp, #0x18
    Sprite_SetMatrix((2 << 0x14), (*((u8*)((*((u8*)(r0 + r6)) << 0xc) + r6)) << 0xc));
    // add r0, r4, r7
    // add r0, #0xc8
    ov96_021EB52C(*((u32*)r0), 1, 1);
    ov96_021EB4F4(r5, 0x69, 0xd);
    // add r1, r4, r7
    // add r1, #0xd8
    // str r0, [r1]
    // add r0, r4, r7
    // add r0, #0xd8
    ov96_021EB5B8(*((u32*)r0));
    // str r0, [sp, #0xc]
    Sprite_SetDrawPriority(7);
    // ldr r0, [sp, #0xc]
    Sprite_SetAnimCtrlSeq(0x12);
    // add r0, sp, #0x14
    // str r0, [sp, #0x18]
    // add r0, sp, #0x10
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x18
    Sprite_SetMatrix((2 << 0x14), (*((u8*)((*((u8*)(r0 + r6)) << 0xc) + r6)) << 0xc));
    // add r0, r4, r7
    // add r0, #0xd8
    ov96_021EB52C(*((u32*)r0), 1, 0);
}




void ov96_021F424C(void) {
    // add r6, #0xc
    // add r0, r6, r0
    FillWindowPixelBuffer((0 << 4), 0);
    ov96_021E5F24(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    PokeathlonCourse_GetPlayerProfileFromData(*((u32*)(r5 + 4)));
    PlayerProfile_GetPlayerName_NewString(*((u32*)r5));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    ov96_021EB5B8(*((u32*)(r5 + (0x13 << 4))));
    // ldr r1, [sp, #0x10]
    // add r1, #0xe
    Sprite_SetAnimCtrlSeq();
    // ldr r0, [sp, #0x10]
    // add r1, r5, r0
    // strb r4, [r1, r0]
    // str r0, [sp, #0x14]
    // add r0, #0xc
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    PokeathlonCourse_GetPlayerProfileFromData(*((u32*)(r5 + 4)), 0);
    PlayerProfile_GetPlayerName_NewString(*((u32*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    AddTextPrinterParameterizedWithColor(0, 0, r0, 0);
    String_Delete(r7);
    // add r1, r5, r0
    ov96_021EB5B8(*((u32*)(r1 + (0x13 << 4))));
    // add r1, #0xe
    Sprite_SetAnimCtrlSeq(r4);
    // add r1, r5, r4
    // strb r6, [r1, r0]
    ov96_021F459C(r5, 1);
    // add r5, #0xc
    // add r0, r5, r0
    CopyWindowToVram((0 << 4));
}




void ov96_021F4364(void) {
    // add r5, #0x4c
}




void ov96_021F4390(void) {
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F43A6: ; jump table
    // add r4, r6, r0
    // add r1, r6, r7
    // add r0, #0x30
}




void ov96_021F43EC(void) {
    // add r1, r0, r3
    // add r1, #0x70
    // strb r2, [r1]
    *((u32*)(r0 + 0x6c)) = 0;
    // add r0, #0x68
}




void ov96_021F440C(void) {
    // str r0, [sp]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, sp, #0x10
    // ldr r0, [sp]
    ov96_021EB5EC(*((u32*)(ov96_0221BFF4 + 0x24)), *((u32*)(*((u32*)(ov96_0221BFF4 + 0x24)) + (0 << 2))), 0);
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ov96_021EB5EC(*((u32*)r0), r7, 1);
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    sub_0200AF00(*((u32*)r0));
    // ldr r0, [sp, #4]
    SpriteTransfer_GetPaletteProxy(r0);
    // str r0, [sp, #0xc]
    NNS_G2dGetImageLocation(r7, 2);
    // add r1, r6, r5
    // add r1, #0x88
    // str r0, [r1]
    // ldr r0, [sp, #0xc]
    NNS_G2dGetImagePaletteLocation(2);
    // add r1, r6, r5
    // add r1, #0x90
    // str r0, [r1]
}




void ov96_021F4484(void) {
    // add r7, sp, #0x10
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r3, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #8]
    // add r0, sp, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x1c]
    // add r1, #0x98
    // str r0, [r1]
    // add r1, #0x9c
    // add r5, #8
    // str r0, [r1]
}




void ov96_021F4504(void) {
    // add r7, #0x30
    // add r1, r5, r6
    // add r7, #0x34
    // add r1, r5, r6
}




void ov96_021F4558(void) {
    // add r6, #0xc
    // add r1, r6, r1
    // add r2, r7, r2
    AddWindow(*((u32*)(r0 + 8)), (0 << 4), (0 << 3));
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r5 + 8)), 4, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)r5));
}




void ov96_021F459C(void) {
    // add r0, #0x4c
    FillWindowPixelBuffer(0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + 0x60)), 0, r5, 2);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r4 + 0x60)), *((u32*)(r4 + 0x5c)), 0x98, *((u32*)r4));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r4, #0x4c
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    String_Delete(r5);
}




void ov96_021F45F4(void) {
    // add r4, #0x68
    ov96_021F46BC(r0, r2);
    ov96_021F43EC(r5);
    *((u32*)(r4 + 4)) = 1;
    ov96_021F47F0(r4, 1);
    GF_AssertFail();
    ov96_021F480C(r4, *((u32*)(r5 + 8)));
    ov96_021F47F0(r4, 2);
    PlaySE(0x0000089E);
    ov96_021F48A8(r4, *((u32*)(r5 + 8)), r7);
    ov96_021F4A60(r4, *((u32*)(r5 + 8)));
    // blx r1
    GF_AssertFail(r5, *((u32*)(r4 + 0x14)));
}




void ov96_021F4688(void) {
    // strb r6, [r5, r0]
}




void ov96_021F46B4(void) {
    // ldrb r0, [r0, r1]
}




void ov96_021F46BC(void) {
    // add r3, sp, #0
    // add r7, r0, r2
    // strb r5, [r3]
    // strb r4, [r3]
    // add r2, sp, #0
}




void ov96_021F4700(void) {
    // bne _021F470A
    // cmp r1, #1
    // bne _021F4712
    // cmp r1, #2
    // bne _021F471E
    // cmp r0, #1
    // beq _021F471E
}




void ov96_021F4724(void) {
    // str r4, [r0]
    // str r0, [sp]
    *((u16*)(r0 + 0x1a)) = 0;
    // add r0, #0x90
    ov96_021EB52C(*((u32*)r0), 1, 0);
    // strh r1, [r0]
    // ldr r0, [sp]
    ov96_021F4790(0x04001050, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(1, 0);
    // ldr r0, [sp]
    *((u32*)(r0 + 0x14)) = 0;
    // add r0, #0xea
    // strb r1, [r0]
    // ldr r0, [sp]
    // add r0, #0xea
    // str r0, [sp]
    // and r1, r0
    // str r1, [r0]
}




void ov96_021F4790(void) {
    // add r0, r5, r0
    // add r0, #0xbc
    // add r0, r5, r6
    // add r0, #0xc8
    // add r0, r5, r6
    // add r0, #0xd8
    // add r5, #0xc4
}




void ov96_021F47F0(void) {
}




void ov96_021F480C(void) {
    GfGfx_EngineBTogglePlanes(1, 1);
    // add r0, r5, r0
    // add r0, #0xbc
    ov96_021EB52C(*((u32*)(0 << 2)), 1, 1);
    // add r0, r5, r0
    // add r0, #0xc8
    ov96_021EB52C(*((u32*)(0 << 2)), 1, 1);
    // add r0, #0xa4
    // add r2, #0xc
    BG_LoadScreenTilemapData(r7, 6, *((u32*)r5), *((u32*)(*((u32*)r5) + 8)));
    ov96_021F4EF8(r5, r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r7, 6, 0, 0);
    ScheduleBgTilemapBufferTransfer(r7, 6);
    *((u32*)(r5 + 0x14)) = ov96_021F4A9C;
    *((u32*)(r5 + 0x1c)) = 1;
    // str r0, [r5]
}




void ov96_021F48A8(void) {
    ov96_021F4E5C(r2);
    // add r0, #0xac
    // add r2, #0xc
    BG_LoadScreenTilemapData(r4, 6, *((u32*)r5), *((u32*)(*((u32*)r5) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r4, 6, 0, 0);
    ScheduleBgTilemapBufferTransfer(r4, 6);
    *((u32*)(r5 + 0x14)) = ov96_021F4AE0;
    *((u32*)(r5 + 0x1c)) = 2;
    // str r0, [r5]
}




void ov96_021F48FC(void) {
    ov96_021F4CAC();
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    OS_WaitVBlankIntr(0, (1 << 0xc));
    // str r0, [sp]
    // add r2, sp, #0xc
    SetBgAffine(r4, 7, 0x80);
    // add r0, #0xa8
    // add r2, #0xc
    BG_LoadScreenTilemapData(r4, 6, *((u32*)r5), *((u32*)(*((u32*)r5) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r4, 6, 0, 0);
    ScheduleBgTilemapBufferTransfer(r4, 6);
    // add r0, #0x9c
    // add r2, #0xc
    BG_LoadScreenTilemapData(r4, 7, *((u32*)r5), *((u32*)(*((u32*)r5) + 8)));
    ScheduleBgTilemapBufferTransfer(r4, 7);
    *((u32*)(r5 + 0x14)) = ov96_021F4B34;
    *((u32*)(r5 + 0x1c)) = 3;
    // str r0, [r5]
}




void ov96_021F4990(void) {
    // add r1, sp, #0x1c
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, #0xc4
    ov96_021EB5B8(*((u32*)r0));
    // add r1, sp, #0x1c
    Sprite_SetMatrix();
    // add r3, #0xa8
    // add r2, #0xa0
    // add r2, #0xc
    BG_LoadScreenTilemapData(r4, 6, *((u32*)r5), *((u32*)(*((u32*)r5) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r4, 6, 0, 0);
    ScheduleBgTilemapBufferTransfer(r4, 6);
    // add r0, #0x98
    // add r2, #0xc
    BG_LoadScreenTilemapData(r4, 7, *((u32*)r5), *((u32*)(*((u32*)r5) + 8)));
    ScheduleBgTilemapBufferTransfer(r4, 7);
    _fmul(0x45800000, 0x3CCCCCCD);
    _ffix();
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    OS_WaitVBlankIntr(0);
    // str r0, [sp]
    // add r2, sp, #0xc
    SetBgAffine(r4, 7, 0x80);
    GfGfx_EngineBTogglePlanes(8, 1);
    *((u32*)(r5 + 0x14)) = ov96_021F4BB4;
    *((u32*)(r5 + 0x1c)) = 4;
    // str r0, [r5]
}




void ov96_021F4A60(void) {
    ov96_021F4724();
    ov96_021F48FC(r5, r4);
    ov96_021F4990(r5, r4);
    _s32_div_f((*((u16*)(r5 + 0x18)) + 1), 3);
    *((u16*)(r5 + 0x18)) = r1;
}




void ov96_021F4A9C(void) {
    // add r0, #0x68
    ov96_021F4EF8(r0, *((u32*)(r0 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 8)), 6, 3, 7);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 8)), 6);
}




void ov96_021F4AE0(void) {
    // add r4, #0x68
    *((u16*)(r0 + 0x1a)) = (*((u16*)(r0 + 0x1a)) + 1);
    ov96_021F4724(r0);
    // add r2, #0x90
    ov96_021F4E9C(((r0 << 0x18) >> 0x18), ov96_0221C01C, *((u32*)r4));
    // add r0, #0xea
    // add r0, #0xea
    // add r1, #0x20
    // add r4, #0xea
    // strb r1, [r0]
    // and r1, r0
    // str r1, [r0]
}




void ov96_021F4B34(void) {
    // add r4, #0x68
    *((u16*)(r0 + 0x1a)) = (*((u16*)(r0 + 0x1a)) + 1);
    ov96_021F4724(r0);
    GfGfx_EngineBTogglePlanes(8, 1);
    // sub r0, #0xf
    // asr r0, r1, #1
    // add r0, r1, r0
    // sub r3, r3, r5
    // str r5, [sp]
    G2x_SetBlendAlpha_(0x04001050, 8, 0x34, 0x10);
    // add r2, #0x90
    ov96_021F4DAC(((*((u16*)(r4 + 0x1a)) << 0x18) >> 0x18), ov96_0221C050, *((u32*)r4));
    // add r4, #0x94
    ov96_021F4DAC(((*((u16*)(r4 + 0x1a)) << 0x18) >> 0x18), ov96_0221C080, *((u32*)r4));
}




void ov96_021F4BB4(void) {
    // add r4, #0x68
    *((u16*)(r0 + 0x1a)) = (*((u16*)(r0 + 0x1a)) + 1);
    ov96_021F4724(r0);
    // add r0, #0xc4
    ov96_021EB52C(*((u32*)r4), 1, 1);
    // add r0, #0xc4
    ov96_021EB52C(*((u32*)r4), 1, 0);
    _ffltu(*((u16*)(r4 + 0x1a)));
    _fdiv(0x42200000);
    _fmul(0x45800000, r0);
    _ffix();
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    OS_WaitVBlankIntr(0);
    // str r0, [sp]
    // add r2, sp, #0x10
    SetBgAffine(*((u32*)(r5 + 8)), 7, 0x80);
    // str r1, [sp, #0xc]
    // sub r0, #0x28
    _s32_div_f((0x90 * r0), 0x14);
    // add r0, #0x38
    // str r0, [sp, #4]
    // add r4, #0xc4
    // str r0, [sp, #8]
    ov96_021EB5B8(*((u32*)r4));
    // add r1, sp, #4
    Sprite_SetMatrix();
    // add r0, #0xc4
    ov96_021EB52C(*((u32*)r4), 1, 0);
    // sub r0, #0x3c
    _s32_div_f((*((u16*)(r4 + 0x1a)) << 4), 0x14);
    // sub r3, r3, r4
    // str r4, [sp]
    G2x_SetBlendAlpha_(0x04001050, 8, 0x24, 0x10);
}




void ov96_021F4CAC(void) {
    LCRandom();
    // sub r1, r1, r2
    // ror r1, r0
    // add r5, r2, r1
    LCRandom(0x1e, (r0 << 0x1e), (r0 >> 0x1f));
    // sub r1, r1, r2
    // ror r1, r0
    // add r6, r2, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r6, r2, r1
    LCRandom(0x1e, ((r5 + 1) << 0x1e), ((r5 + 1) >> 0x1f));
    _s32_div_f(3);
    // add r0, r5, r0
    // add r5, r0, r1
    LCRandom((r5 << 1));
    _s32_div_f(3);
    // add r0, r6, r0
    // add r4, r0, r1
    ov96_021F4504(r7, 0, ((r5 << 0x18) >> 0x18));
    ov96_021F4504(r7, 1, ((r4 << 0x18) >> 0x18));
    // add r0, #0x90
    ov96_021EB5B8(*((u32*)r7));
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    Sprite_SetMatrix(r0, r4, r4, r0);
    // add r0, #0x94
    ov96_021EB5B8(*((u32*)r7));
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    Sprite_SetMatrix(r0, r4, r4, r0);
    // add r0, #0x90
    ov96_021EB52C(*((u32*)r7), 1, 1);
    // add r7, #0x94
    ov96_021EB52C(*((u32*)r7), 1, 1);
}




void ov96_021F4DAC(void) {
    // str r2, [sp]
    // sub r1, r0, r7
    // add r7, r7, r0
    // sub r1, r0, r6
    // add r4, r6, r0
    // sub r1, r0, r7
    // add r7, r7, r0
    // sub r1, r0, r6
    // add r4, r6, r0
    // sub r5, #0x2d
    // sub r1, r0, r7
    // add r7, r7, r0
    // sub r1, r0, r6
    // add r4, r6, r0
    // ldr r0, [sp]
    // add r1, r4, r1
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, sp, #4
    // str r7, [sp, #4]
}




void ov96_021F4E5C(void) {
    // add r0, #0x90
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
    // add r4, #0x90
}




void ov96_021F4E9C(void) {
    // sub r1, r1, r5
    // add r5, r5, r0
    // sub r0, #0x3c
    // sub r1, r1, r5
    // add r5, r5, r0
    // str r1, [sp]
    // add r1, r5, r1
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
}




void ov96_021F4EF8(void) {
    // add r0, #0xe8
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0]
    // sub r0, r0, r1
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // str r7, [sp]
    // str r0, [sp, #4]
    // add r0, #0xb0
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r0, #3
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xe8
    // add r5, #0xe9
    // strb r0, [r5]
}




void ov96_021F4FD8(void) {
    // add r3, #0xc
    // and r1, r6
    // sub r0, r0, r1
    // add r1, r1, r5
    // add r0, r0, r1
    // strh r0, [r3]
}




void ov96_021F5018(void) {
    // str r0, [sp, #0x14]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetField1ED();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F503C: ; jump table
    Heap_Create(0x5c, 0x8f, (5 << 0x10));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021F5630(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_AllocPtr4FromHeap(0x00001004);
    MI_CpuFill8(0, 0x00001004);
    BgConfig_Alloc(0x8f);
    // str r0, [r4]
    // ldr r0, [sp, #0x14]
    ov96_021E6670(8);
    // str r0, [sp, #0xcc]
    // str r0, [sp, #0xd0]
    // str r0, [sp, #0xd4]
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetHeapID(((1 << 0x12) >> 4));
    // str r0, [sp, #0xd8]
    // add r0, sp, #0xcc
    // str r3, [sp]
    ov96_021E92B0(0xf, 0x8f, 0x00300010);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    *((u32*)(r4 + 0x54)) = 0x8f;
    FontID_Alloc(4, *((u32*)(r4 + 0x54)));
    ov96_021F584C(*((u32*)r4));
    ov96_021F6138(r4);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    GF_CreateVramTransferManager(0xc, *((u32*)(r4 + 0x54)));
    sub_02020654(0xc, *((u32*)(r4 + 0x54)));
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED((1 << 0xc));
    ov96_021F74A4(*((u32*)(r4 + 0x54)));
    // add r1, #0x8c
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetParticipantCount(r4);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetMode();
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetDataCopyArea();
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // sub r1, r1, r5
    ov96_021F7684(*((u32*)(r4 + 0x54)), 4, r6, r0);
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED((0x4e << 2));
    // add r3, sp, #0xc0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov96_021EB180(*((u32*)(r4 + 0x54)), r3, r3);
    *((u32*)(r4 + 0x60)) = r0;
    // str r1, [sp]
    ov96_021EB5C8(*((u32*)(r4 + 0x60)), 0, (3 << 0x12), 0);
    ov96_021EB5E8(*((u32*)(r4 + 0x60)));
    // str r0, [sp]
    ov96_021EA854(*((u32*)(r4 + 0x54)), 3, 0xa, 0);
    // str r0, [r4, r1]
    ov96_021EB29C(*((u32*)(r4 + 0x60)), 0, 0x65);
    ov96_021F6C18(*((u32*)(r4 + 0x60)));
    ov96_021EB3A4(*((u32*)(r4 + 0x60)));
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    // ldr r0, [sp, #0x14]
    ov96_021E5F24();
    // str r0, [sp, #0x18]
    // add r7, sp, #0x90
    // add r6, sp, #0xdc
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    ov96_021E6168(((r0 << 0x18) >> 0x18), 0, r7);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    ov96_021E60C0(r5);
    ov96_021E6108();
    *((u32*)(r6 + 0x14)) = r0;
    // add r7, #0x10
    // str r2, [sp, #0xdc]
    // str r0, [sp, #0xe0]
    // str r0, [sp, #0xe4]
    // str r1, [sp, #0xe8]
    // str r1, [sp, #0xec]
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, sp, #0x90
    // add r3, sp, #0xdc
    ov96_021EA8A8(*((u32*)(r4 + (0x63 << 2))), 3, 0);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    ov96_021EAA00(*((u32*)(r4 + (0x63 << 2))));
    ov96_021E9A78(*((u32*)(r4 + 0x54)), 0x000003A1, 1);
    // str r0, [r4, r2]
    // ldr r0, [sp, #0x14]
    ov96_021E6290(0xc0, *((u32*)(r4 + (0x62 << 2))), *((u32*)(r4 + 0x60)));
    Sprite_SetDrawPriority(*((u32*)r0), 1);
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)r4));
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_SetField1F4(1);
    // add r0, sp, #0x78
    ReadWholeNarcMemberByIdPair(0xaa, 0x10);
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // add r0, #0x90
    // str r0, [sp, #0x1c]
    // add r7, sp, #0x6c
    // ldr r1, [sp, #0x24]
    ov96_021EAA04(*((u32*)(r4 + (0x63 << 2))), ((r1 << 0x18) >> 0x18));
    ov96_021EAB38(1);
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    // str r5, [r0]
    // ldr r0, [sp, #0x14]
    ov96_021E60C0(0);
    ov96_021E6138();
    // add r0, sp, #0x78
    // add r2, r0, r1
    // sub r1, #8
    ov96_021EAF70(r5, *((u32*)r2), *((u32*)(r2 - 4)));
    ov96_021EAC0C(r5, 2);
    ov96_021EAF94(r5, r6, (0x12 << 4));
    ov96_021E6104();
    ov96_021EAF6C(r5, r0);
    // ldr r1, [sp, #0x1c]
    *((u32*)(r1 + 8)) = (r6 << 0xc);
    *((u32*)(r1 + 0xc)) = (0x12 << 0x10);
    *((u32*)(r1 + 0x1c)) = (r6 << 0xc);
    // add r0, sp, #0x28
    // str r0, [sp]
    // add r3, sp, #0x2c
    ov96_021EB0A4(r5, r6, ((0x12 << 0x10) >> 0xc));
    // ldr r0, [sp, #0x2c]
    // add r6, #0x40
    // strh r0, [r7]
    // ldr r0, [sp, #0x28]
    *((u16*)(r7 + 2)) = r0;
    // ldr r0, [sp, #0x1c]
    // add r0, #0x38
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x6c
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    ov96_021E634C(3, 0, *((u32*)(r4 + (0x62 << 2))), *((u32*)(r4 + 0x60)));
    // strb r1, [r4, r0]
    ov96_021F5980(r4, 3);
    ov96_021F6C5C(r4, *((u32*)(r4 + 0x60)));
    ov96_021F7050(r4);
    // ldr r0, [sp, #0x14]
    ov96_021E5F24();
    ov96_021F6DA4(r4, ((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // add r0, sp, #0x30
    ReadWholeNarcMemberByIdPair(0xaa, 6);
    // add r6, #0x90
    // add r7, sp, #0x30
    // ldr r0, [sp, #0x14]
    ov96_021F715C(r7, ((0 << 0x18) >> 0x18), r4);
    // add r6, #0x38
    // ldr r0, [sp, #0x14]
    ov96_021E5F24();
    // str r0, [r4, r1]
    ov96_021F6F3C(r4, ((*((u32*)(r4 + (0x4f << 2))) << 0x10) >> 0x10));
    // ldr r0, [sp, #0x14]
    ov96_021F6F80(r4);
    // str r5, [r3, r6]
    // str r5, [r3, r6]
    // str r5, [r3, r6]
    // str r5, [r3, r6]
    // str r5, [r3, r7]
    // str r5, [r3, r0]
    // str r5, [r3, r1]
    // str r4, [sp, #0x20]
    // str r1, [r4, r0]
    // add r0, r6, r0
    // asr r1, r0, #1
    // str r1, [r7, r0]
    _fflt(0x40, 0, (0 + 1), (r4 + 4));
    _f2d();
    _ddiv(0, 0x40500000);
    _dsub(0, (1 << 0x1e));
    _dmul(0, 0x40B00000, r0, r1);
    _dfix();
    // str r0, [r4, r1]
    // ldr r1, [sp, #0x20]
    // add r1, #0xb8
    // strb r0, [r1]
    // ldr r0, [sp, #0x20]
    // add r0, #0x38
    // add r4, #0x1c
    // add r6, #0x40
    // str r0, [sp, #0x20]
    sub_0203A994(1, (0xfb << 4));
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    ov96_021F6E38(r4);
}




u32 ov96_021F54C0(void) {
}




void ov96_021F54D4(void) {
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_021F553C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    sub_0203A914();
    Camera_Delete(*((u32*)(r4 + (0x19 << 4))));
    // add r0, #0x8c
    ov96_021F74C8(*((u32*)r4));
    Heap_Free(*((u32*)(r4 + 0x58)));
    FreeBgTilemapBuffer(*((u32*)r4), 2);
    FreeBgTilemapBuffer(*((u32*)r4), 1);
    FreeBgTilemapBuffer(*((u32*)r4), 3);
    FreeBgTilemapBuffer(*((u32*)r4), 4);
    FreeBgTilemapBuffer(*((u32*)r4), 5);
    FreeBgTilemapBuffer(*((u32*)r4), 6);
    RemoveWindow((r4 + 4));
    // add r5, #0x10
    Heap_Free(*((u32*)r4));
    PokeathlonCourse_ResetField3A4(r7);
    ov96_021EB21C(*((u32*)(r4 + 0x60)));
    ov96_021EA894(*((u32*)(r4 + (0x63 << 2))));
    ov96_021E9C0C(*((u32*)(r4 + (0x62 << 2))));
    ov96_021F7738(*((u32*)(r4 + (0x4e << 2))));
    FontID_Release(4);
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    sub_0202067C(*((u32*)(r4 + (1 << 0xc))));
    GF_DestroyVramTransferManager();
    PokeathlonCourse_FreePtr4HeapAlloc(r7);
    // strh r1, [r0]
    Heap_Destroy(0x8f, 0);
}




void ov96_021F5630(void) {
}




void ov96_021F5650(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F5670: ; jump table
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_021F5730(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    IsPaletteFadeFinished(*((u8*)r6));
    // strb r0, [r6]
    ov96_021E5F24(r5);
    // add r0, #0xb0
    // add r4, #0x38
    // add r2, r2, r0
    PokeathlonCourse_SetField5E0_AtIndex(r5, ((r0 << 0x18) >> 0x18), ((0x000003E7 << 0x10) >> 0x10));
    PokeathlonCourse_GetParticipantCount(r5);
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r4, [sp, #4]
    // ldr r1, [sp, #8]
    ov96_021E60D8(r5, 0);
    LCRandom(*((u8*)(r0 + 2)));
    _s32_div_f(0x15);
    // add r1, #0x50
    // add r1, r1, r2
    // add r0, r0, r1
    // add r1, r0, r3
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #4]
    LCRandom((*((u8*)(r6 + 3)) << 1), (6 * *((u8*)(r6 + 2))), (*((u8*)(r6 + 4)) << 1), r1);
    // str r0, [sp]
    ov96_021E8228(r5, r7, ((r4 << 0x18) >> 0x18), 2);
    LCRandom();
    _s32_div_f(0x15);
    // str r6, [sp]
    ov96_021E8228(r5, r7, ((r4 << 0x18) >> 0x18), 4);
    // str r6, [sp]
    ov96_021E8228(r5, r7, ((r4 << 0x18) >> 0x18), 1);
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    PokeathlonCourse_SetField5E0_AtIndex(r5, ((r1 << 0x18) >> 0x18), ((r2 << 0x10) >> 0x10));
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_021F584C(void) {
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
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_021F5980(void) {
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
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r3, #0x5c
}




void ov96_021F5A88(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r6);
    ov96_021E8A20();
    // strb r0, [r4, r1]
    // str r2, [r4, r0]
    ov96_021EB63C(*((u32*)(r4 + 0x60)), 1, (*((u32*)(r4 + (0x00000142 - 6))) - 1));
    ov96_021EB144(*((u32*)(r4 + (0x63 << 2))), 1);
    // add r0, #0xb0
    // add r2, #0x38
    // add r5, r5, r0
    ov96_021E8318(r6, ((0x000003E7 << 0x10) >> 0x10), r4);
    ov96_021F70AC(r4, ((r5 << 0x10) >> 0x10));
    ov96_021F5B60(r6);
    ov96_021F6600(r6, r4);
    // add r0, r4, r0
    ov96_021F6424((0x1a << 4));
    ov96_021F6BB0(r4);
    ov96_021F7194(r6, r4);
    // add r0, #0x8c
    ov96_021F7598(*((u32*)r4));
    ov96_021F5B60(r6);
    // str r0, [r5]
}




void ov96_021F5B60(void) {
    // ldr r1, [r4, r1]
    // ldr r1, [r4, r1]
}




void ov96_021F5BA0(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetDataCopyArea();
    // ldr r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    System_GetTouchNew();
    // ldr r0, [sp, #8]
    ov96_021E5F24();
    // str r0, [sp]
    // ldr r0, [sp, #8]
    ov96_021E8228(1, ((r0 << 0x18) >> 0x18), 3, 0);
    ov96_021F5F68(r5, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // strb r0, [r5, r1]
    // add r0, #0x2c
    // str r3, [r5, r0]
    // add r2, r2, r0
    // add r0, #0x30
    // str r2, [r5, r0]
    // add r1, #0x34
    // str r0, [r5, r1]
    System_GetTouchHeld(0, (5 << 6), (*((u16*)(gSystem + 0x22)) << 0xc), (*((u16*)(gSystem + 0x20)) << 0xc));
    // strb r1, [r5, r0]
    // add r3, sp, #0x1c
    // str r0, [r3]
    *((u32*)(r3 + 4)) = 0;
    *((u32*)(r3 + 8)) = 0;
    // add r2, #0x2c
    // add r2, r5, r2
    ov96_021F5F34(((*((u16*)(gSystem + 0x20)) << 0x18) >> 0x18), ((*((u16*)(gSystem + 0x22)) << 0x18) >> 0x18), (5 << 6));
    // add r2, sp, #0x1c
    ov96_021F6088(r5, *((u8*)(r5 + (5 << 6))));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // add r3, sp, #0x10
    // str r0, [r3]
    *((u32*)(r3 + 4)) = 0;
    *((u32*)(r3 + 8)) = 0;
    // add r2, #0x2c
    // add r2, r5, r2
    ov96_021F5F34(((*((u16*)(gSystem + 0x20)) << 0x18) >> 0x18), ((*((u16*)(gSystem + 0x22)) << 0x18) >> 0x18), (5 << 6));
    // add r2, sp, #0x10
    ov96_021F6088(r5, *((u8*)(r5 + (5 << 6))));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // ldr r0, [sp, #8]
    ov96_021E5F24(((5 << 6) + 1), 0);
    // add r0, #0x28
    ov96_021E8A20(r4);
    // add r0, #0x50
    ov96_021E8A20(r4);
    // str r0, [sp, #4]
    ov96_021E8A20(r4);
    // ldr r2, [sp, #4]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r2, [sp, #4]
    // str r1, [r0]
    // ldr r0, [sp, #8]
    ov96_021F7740(r2, *((u32*)(r5 + (0x4e << 2))), r0);
    // add r4, #0x50
    // add r5, sp, #0xc
    ov96_021E8A20(r4);
    // strb r0, [r5]
    // add r4, #0x28
    // add r1, sp, #0xc
    // strb r0, [r7, r2]
}




void ov96_021F5D3C(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #4]
    // ldr r4, [sp, #4]
    // ldr r6, [sp, #4]
    // str r0, [sp, #0x10]
    // add r4, #0x90
    // sub r0, r0, r1
    *((u32*)(r4 + 0xc)) = (0x12 << 0x10);
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0x1c));
    *((u32*)(r4 + 8)) = (2 << 0x10);
    *((u32*)(r4 + 8)) = (0xdf << 0xc);
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // add r0, r1, r0
    // str r1, [r7, r0]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0xc]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    ov96_021EAF94(*((u32*)r4), *((u32*)(r4 + 0xc)));
    // add r0, sp, #0x14
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    ov96_021E5F24(((r0 << 0xc) << 0xc), 0);
    // ldr r0, [sp]
    // ldr r2, [sp, #0x10]
    ov96_021E60C0(r0);
    // ldr r1, [sp, #0x18]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, sp, #0x14
    ov96_021EB588(*((u32*)(r4 + 4)));
    // add r0, #0x26
    ov96_021EB52C(*((u32*)(r4 + 4)), 1, 1);
    ov96_021EAD08(*((u32*)r4), 0x14);
    sub_02006190(*((u8*)r5));
    sub_0200606C((0x89 << 4), *((u8*)r5));
    ov96_021EB52C(1, 0);
    ov96_021EAD08(*((u32*)r4), 0);
    ov96_021EAC0C(*((u32*)r4), 1);
    ov96_021EAC0C(2);
    // ldr r0, [sp, #0x10]
    // add r4, #0x38
    // add r6, #0x1c
    // str r0, [sp, #0x10]
    // ldr r4, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp, #4]
    // add r0, r0, r5
    // strb r7, [r0, r1]
    ov96_021EB52C(*((u32*)(r4 + 0x78)), 1, 1);
    ov96_021EB588(*((u32*)(r4 + 0x78)), r6);
    ov96_021EB564(*((u32*)(r4 + 0x78)), 9);
    // add r6, #0xc
}




void ov96_021F5EC4(void) {
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0xf0
    ov96_021E8A20();
    PokeathlonCourse_GetHeapAllocPtr4(r6);
    // str r0, [sp]
    ov96_021E5F24(r6);
    // ldr r1, [sp]
    ov96_021EB57C(*((u32*)(r5 + 0x68)));
    // add r1, #0xd
    ov96_021EB564(*((u32*)(r5 + 0x68)), r4);
    ov96_021EB57C(*((u32*)(r5 + 0x68)));
    // add r1, #0xd
    ov96_021EB564(*((u32*)(r5 + 0x68)), r4);
}




void ov96_021F5F34(void) {
    // str r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0
}




void ov96_021F5F68(void) {
    // str r1, [sp, #0xc]
    // str r0, [sp, #8]
    // str r2, [sp, #0x10]
    ov96_021E6104();
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x14]
    // add r0, #0x90
    // add r7, sp, #0x24
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r1, r0, r1
    // add r0, #0x26
    // strb r0, [r7, r4]
    // add r0, sp, #0x28
    // str r1, [r0, r2]
    // add r0, sp, #0x18
    // str r0, [sp]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // ldr r2, [sp, #8]
    // add r3, r2, r3
    // sub r2, r2, r3
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // add r3, sp, #0x1c
    ov96_021EB0A4(*((u32*)0), *((u32*)(0 + 0x1c)), (6 << 0x10), ((*((u32*)((0 * 0x1c) + 0x00000FB4)) << 6) >> 0x14));
    ov96_021E6104();
    // str r0, [sp]
    // add r0, sp, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    ov96_021E872C();
    // add r0, sp, #0x28
    // ldr r2, [sp, #0x20]
    // str r2, [r0, r1]
    // strb r0, [r7, r4]
    // str r1, [r0, r2]
    // strb r0, [r7, r4]
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    GF_AssertFail(0, 0, (r4 << 2), (((0 + 1) << 0x18) >> 0x18));
}




void ov96_021F6060(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r1, r5, r4
}




void ov96_021F6088(void) {
    // add r2, r6, r1
    // add r7, r2, r1
    // asr r1, r0, #5
    // add r1, r0, r1
    // asr r0, r1, #6
    _dflt(*((u32*)(r2 + 4)), (*((u32*)(r7 + 0x14)) >> 0x1a));
    _ddiv(0, 0x40040000);
    _dfix();
    // str r0, [sp]
    // neg r1, r0
    // asr r0, r1, #1
    // add r0, r1, r0
    // asr r0, r0, #2
    // bmi _021F60DC
    // str r1, [sp, #4]
    // add r1, #0xa8
    // str r0, [r1, r4]
    // str r1, [sp, #4]
    // add r0, r6, r4
    // add r0, #0xc4
    _s32_div_f((*((u32*)r6) * *((u32*)(r6 + (r5 * 0x38)))), 0xc);
    // ldr r1, [sp, #4]
    // str r0, [r1, r4]
    // ldr r0, [sp]
    // neg r0, r0
    // str r0, [r7]
    *((u32*)(r7 + 0x18)) = r0;
    *((u32*)(r7 + 0x14)) = 1;
    sub_0200606C(0x000008C2, *((u8*)(ov96_0221DC18 + r5)));
}




void ov96_021F6138(void) {
    NNS_G3dInit();
    G3X_InitMtxStack();
    // str r3, [r0]
    // strh r1, [r0]
    // add r0, #0x58
    // and r1, r2
    // strh r1, [r0]
    // and r1, r3
    // strh r1, [r0]
    // add r1, #0xc
    // and r1, r5
    // strh r1, [r0]
    // add r1, #8
    // sub r3, #0x10
    // and r1, r5
    // strh r1, [r0]
    // and r1, r3
    // strh r1, [r0]
    // str r0, [sp]
    G3X_SetClearColor(0, 0, (0xFFFFCFFD >> 0x11), 0x3f);
    // str r1, [r0]
    Camera_New(*((u32*)(r4 + 0x54)), 0xBFFF0000);
    // str r0, [r4, r1]
    ov96_021F6398(r4, (0x19 << 4));
}




void ov96_021F61C8(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x40
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    NNS_G3dGeBufferOP_N(0x1b, r3, 3);
    // add r1, sp, #0x3c
    // str r0, [sp, #0x3c]
    NNS_G3dGeBufferOP_N(0x29, 1);
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    NNS_G3dGeBufferOP_N(0x20, 1);
    NNS_G3dGlbFlushP();
    // str r0, [sp, #0x34]
    // add r1, sp, #0x34
    NNS_G3dGeBufferOP_N(0x40, 1);
    // str r2, [r0]
    *((u32*)(ov96_0221DC10 + 4)) = 0xa;
    // str r1, [r0]
    // str r0, [sp, #0x2c]
    // str r2, [sp, #0x30]
    // add r1, sp, #0x2c
    NNS_G3dGeBufferOP_N(0x23, 0x14, 2);
    // add r1, sp, #0x24
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    NNS_G3dGeBufferOP_N(0x23, 2);
    _fflt(1);
    _f2d();
    _dsub(0, 0x40500000);
    _dmul(0, 0x40100000, r0, r1);
    _ddiv(0, 0x40600000);
    _d2f();
    _fmul(0x45800000, r0);
    _ffix();
    // asr r1, r1, #0x10
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r1, sp, #0x1c
    NNS_G3dGeBufferOP_N(0x23, ((((*((u32*)(r5 + (0x67 << 2))) << 0x10) << 0x10) >> 0x10) << 0x10), 2);
    _fmul(0x45800000, r7);
    _ffix();
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r1, sp, #0x14
    NNS_G3dGeBufferOP_N(0x23, ((r0 << 0x10) >> 0x10), 2);
    // str r0, [sp, #0x10]
    // add r1, sp, #0x10
    NNS_G3dGeBufferOP_N(0x20, ((*((u32*)(r4 + 4)) << 5) | *((u32*)ov96_0221E5A0)), 1);
    _s32_div_f((*((u32*)ov96_0221E5A0) + 1), 0x1f);
    // str r1, [r0]
    _s32_div_f((*((u32*)(r4 + 4)) + 1), 0x1f);
    *((u32*)(r4 + 4)) = r1;
    _s32_div_f((*((u32*)r4) + 1), 0x1f);
    // str r1, [r4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #8
    NNS_G3dGeBufferOP_N(0x23, 2);
    // add r1, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    NNS_G3dGeBufferOP_N(0x23, 2);
    NNS_G3dGeBufferOP_N(0x41, 0, 0);
}




void ov96_021F637C(void) {
}




void ov96_021F6398(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // add r0, #8
    // str r2, [r4, r0]
    // add r0, sp, #0xc
    // strh r2, [r0]
    *((u16*)((0x65 << 2) + 2)) = 0;
    *((u16*)((0x65 << 2) + 4)) = 0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0xc
    // str r0, [sp, #8]
    // add r0, r4, r1
    Camera_Init_FromTargetDistanceAndAngle(*((u32*)(r0 + ((0x65 << 2) - 4))), (0x19 << 0xe), 0, 0xa4);
    // add r0, sp, #0x14
    Camera_OffsetLookAtPosAndTarget(*((u32*)(r4 + (0x19 << 4))));
    Camera_SetPerspectiveClippingPlane((1 << 0xe), ((1 << 0xe) << 6), *((u32*)(r4 + (0x19 << 4))));
    // str r0, [sp, #0x24]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x28]
    // add r0, sp, #0x20
    Camera_SetLookAtCamUp((1 << 0xc), *((u32*)(r4 + (0x19 << 4))));
    Camera_SetStaticPtr(*((u32*)(r4 + (0x19 << 4))));
}




void ov96_021F6424(void) {
    // str r7, [r4]
    // str r1, [r4]
    // str r7, [r4]
    // str r7, [r4]
    // str r7, [r4]
    // str r7, [r4]
}




void ov96_021F64A0(void) {
    // and r4, r1
    // and r5, r1
    // and r1, r6
    // str r6, [r2]
    // str r7, [r2]
    // str r7, [r2]
    // str r7, [r2]
    // str r7, [r2]
    // str r7, [r2]
    // str r7, [r2]
}




void ov96_021F6524(void) {
    // add r3, sp, #0x20
    // add r1, r2, r1
    // add r7, r1, r5
    // add r6, r1, r4
    // add r5, sp, #0x28
    // add r1, sp, #0x2c
    // add r7, r1, r4
    // add r5, sp, #0x2c
    // add r1, sp, #0x28
    // add r3, r2, r0
    // mov ip, r1
    // str r3, [sp]
    // str r4, [r3, r0]
    // add r3, r2, r1
    // add r3, r3, r1
    // mov r3, ip
    // add r3, r2, r3
    // add r3, r3, r2
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // sub r7, r2, r5
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    _s32_div_f(((0 + 1) * r7), *((u32*)r7), *((u32*)((*((u8*)(*((u32*)((0xe << 8) + (*((u8*)(r3 + 8)) << 2))) + 4)) << 9) + (2 << 8))), (*((u8*)(*((u32*)((0xe << 8) + (*((u8*)(r3 + 8)) << 2))) + 4)) << 9));
    // add r0, r5, r0
    // add r1, r1, r4
    // ldr r1, [sp]
    // add r2, r1, r2
    // str r0, [r2, r1]
    // ldr r0, [sp, #8]
}




void ov96_021F65D8(void) {
    *((u16*)(r0 + 0x24)) = (*((u16*)(r0 + 0x24)) + 1);
    // add r1, r2, r1
    *((u16*)(r0 + 0x20)) = *((u16*)(r0 + 0x24));
    *((u16*)(r0 + 0x20)) = 0x000003E7;
}




void ov96_021F6600(void) {
    // str r0, [sp, #8]
    ov96_021E5F24();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    ov96_021F6798(((r0 << 0x18) >> 0x18), r5, ((0 << 0x18) >> 0x18));
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // add r0, #0x90
    // str r5, [sp, #0x1c]
    // str r5, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // add r0, #0x90
    // add r0, sp, #0x24
    // str r0, [sp]
    // add r1, #0xac
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // ldr r2, [sp, #0x18]
    // asr r1, r1, #0xc
    // sub r2, r2, r3
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // add r3, sp, #0x28
    ov96_021EB0A4(*((u32*)r5), (r1 >> 0x14), (0x12 << 0x10), ((*((u32*)(*((u32*)r1) + 0x00000FB4)) << 6) >> 0x14));
    // add r0, sp, #0x34
    // str r0, [sp]
    // add r0, sp, #0x2c
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x24]
    // add r3, sp, #0x30
    ov96_021EAF78(r4, (r1 << 0xc), (r2 << 0xc));
    // ldr r0, [sp, #0xc]
    // str r4, [sp, #0x38]
    // str r0, [sp, #0x20]
    // add r0, #0x8c
    ov96_021F75E0(*((u32*)r5), ((0 << 0x18) >> 0x18));
    // add r0, #0x8c
    ov96_021F75D4(*((u32*)r5), ((r4 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x2c]
    // add r0, sp, #0x30
    ov96_021F6060((r1 << 0xc), r0, (2 << 0xe));
    // add r0, #0x8c
    ov96_021F75BC(*((u32*)r5), ((r4 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    ov96_021F65D8();
    // add r0, #0x8c
    ov96_021F75E8(*((u32*)r5), ((r4 << 0x18) >> 0x18), r0);
    // strb r1, [r5, r0]
    sub_0200606C(0x0000088D, *((u8*)r7));
    // add r2, r2, r3
    sub_02005944(*((u8*)r7), 0x0000FFFF, *((u32*)(ov96_0221C110 - 4)), (r6 << 2));
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x20]
    ov96_021E8228(1, 3);
    // ldr r0, [sp, #0x1c]
    // add r0, #0x38
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r0, #0x1c
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0x38
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r2, #0xb6
    // add r2, #0xb7
    // add r2, #0xb7
    // strb r3, [r2]
    // add r2, #0xb7
    // add r2, #0xb7
    // strb r0, [r2]
    // add r2, #0xb6
    // strb r0, [r2]
    // add r5, #0x38
}




void ov96_021F6798(void) {
    // add r2, r6, r1
    // add r4, r2, r1
    // str r0, [sp, #4]
    ov96_021E5F24(*((u32*)(r4 + 0x14)));
    // str r0, [sp, #0xc]
    // add r1, r6, r0
    GF_AssertFail((0xfa << 4), 3);
    // add r0, r6, r0
    // add r2, sp, #0x1c
    ov96_021F64A0((0x1a << 4));
    GF_AssertFail(*((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0x10)) = 0;
    // add r0, sp, #0x1c
    *((u32*)(r4 + 8)) = *((u32*)(r0 + (r7 << 2)));
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    // add r1, r6, r1
    // str r3, [r4]
    // add r1, #0xb8
    // strb r0, [r1]
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), 0);
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = *((u32*)r4);
    // str r0, [sp, #8]
    // add r0, r6, r0
    // add r0, #0xa8
    // ldr r0, [sp, #8]
    // add r1, #0x90
    // add r0, r1, r0
    ov96_021F6B28(*((u32*)(0x38 * r5)), r4);
    // add r3, sp, #0x1c
    _dflt(*((u32*)r4), *((u32*)(r3 + (r7 << 2))), (r7 << 2));
    _dsub(0, 0x40600000);
    _dfix();
    // str r0, [r4]
    // neg r0, r0
    // neg r0, r1
    // str r0, [r4]
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 8)) = *((u32*)(r3 + r2));
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), 0);
    *((u32*)(r4 + 0x10)) = 0;
    // ldr r0, [sp, #8]
    // add r1, #0x90
    // add r0, r1, r0
    ov96_021F7130(0, r6);
    _dflt(*((u32*)r4));
    _dgr(0, 0xC0600000);
    // mvn r0, r0
    // str r0, [r4]
    *((u32*)(r4 + 0x18)) = *((u32*)r4);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 8)) = *((u32*)(r3 + r2));
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    // str r0, [r4]
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), 0);
    GF_AssertFail();
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = *((u32*)r4);
    _dflt(*((u32*)r4), *((u32*)(r4 + 8)));
    _dls(0, 0xC0B80000);
    *((u32*)(r4 + 8)) = 0xFFFFE800;
    // str r0, [r4]
    // add r1, sp, #0x1c
    // str r0, [sp, #0x10]
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), 0);
    // str r1, [sp, #0x18]
    // add r1, #0xb8
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, r6, r0
    // add r0, #0xbc
    _s32_div_f((*((u32*)*((u8*)(r6 + (0x38 * r5)))) * *((u32*)r4)), 0xc);
    // str r0, [r4]
    // str r0, [r4]
    // add r0, r1, r0
    _s32_div_f((*((u32*)r4) << 3), 0xa);
    // str r0, [r4]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    sub_0200606C(0x000005F3, *((u8*)(ov96_0221DC18 + 3)));
    // ldr r0, [sp, #0x10]
    *((u32*)(r4 + 0x10)) = 0;
    // add r1, sp, #0x1c
    *((u32*)(r4 + 8)) = *((u32*)(r1 + r0));
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), 0);
    _dflt();
    _dleq(0, 0x40960000);
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    *((u32*)(r4 + 0x10)) = 0;
    // add r1, sp, #0x1c
    *((u32*)(r4 + 8)) = *((u32*)(r1 + *((u8*)(r1 + r0))));
    *((u32*)(r4 + 0x18)) = 0;
    // str r3, [r4]
    *((u32*)(r4 + 0x14)) = 0;
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), 0);
    *((u32*)(r4 + 0x10)) = 1;
    // ldr r1, [sp, #0x18]
    *((u32*)(r4 + 0x18)) = *((u32*)r4);
    // ldr r0, [sp, #0x14]
    // strb r2, [r1, r0]
    sub_0200606C(0x00000656, *((u8*)(ov96_0221DC18 + 3)), 0);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    ov96_021E8228(1, r5, 2);
    _dflt(*((u32*)r4));
    _dadd(0x9999999A, 0x40899999);
    _dfix();
    // str r0, [r4]
    // str r0, [r4]
    _dflt(0);
    _dadd(0x55555555, 0x40755555);
    _dfix();
    // str r0, [r4]
    GF_AssertFail(*((u32*)(r4 + 0x18)));
    // ldr r0, [sp, #0x10]
    *((u32*)(r4 + 0x10)) = 0;
    // add r1, sp, #0x1c
    *((u32*)(r4 + 8)) = *((u32*)(r1 + r0));
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    // str r3, [r4]
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), 0);
    // neg r1, r0
    // str r1, [r4]
    // add r1, r6, r1
    // add r1, #0xb4
    // strh r0, [r1]
    ov96_021F6BE4(r6, r5, ((r7 << 0x18) >> 0x18), *((u32*)(r4 + 8)));
    // add r0, r6, r0
    // add r0, #0xb8
    // strb r1, [r0]
}




void ov96_021F6B28(void) {
    // add r2, r2, r1
}




void ov96_021F6B50(void) {
    // neg r0, r1
    // str r0, [sp, #4]
    // str r2, [sp]
    // sub r4, r0, r7
    // ldr r1, [sp, #4]
    // neg r0, r0
    // stmia r5!, {r0}
    // sub r0, r4, r5
    // ldr r1, [sp, #4]
    // add r1, r6, r5
    // ldr r1, [sp]
    // neg r0, r0
    // str r0, [r1, r2]
}




void ov96_021F6BB0(void) {
    // add r2, r0, r1
    // add r0, r0, r3
    *((u32*)(r0 + 8)) = *((u32*)(r2 + (*((u32*)(r2 + (0xe << 8))) << 2)));
    // add r0, #0x1c
}




void ov96_021F6BE4(void) {
    // add r5, r4, r6
    // str r2, [r5, r1]
    // add r1, r4, r1
    // add r2, r1, r6
    // str r7, [r2, r1]
}




void ov96_021F6C18(void) {
    // str r2, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021F6C5C(void) {
    // str r0, [sp, #4]
    // add r0, #0x8c
    ov96_021F74D0(*((u32*)r0), 2);
    // str r2, [sp]
    ov96_021EB3E4(r5, 1, 3, 0x65);
    // ldr r1, [sp, #4]
    *((u32*)(r1 + 0x64)) = r0;
    ov96_021EB564(0xc);
    // ldr r0, [sp, #4]
    ov96_021EB52C(*((u32*)(r0 + 0x64)), 1, 1);
    // ldr r4, [sp, #4]
    // str r7, [sp]
    ov96_021EB3E4(r5, 1, 3, 0x65);
    *((u32*)(r4 + 0x68)) = r0;
    // add r1, #0xd
    ov96_021EB564(r6);
    ov96_021EB52C(*((u32*)(r4 + 0x68)), 1, 1);
    // ldr r4, [sp, #4]
    // str r7, [sp]
    ov96_021EB3E4(r5, 1, 3, 0x65);
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    ov96_021EB564(*((u32*)r4), 0xb);
    // add r0, #0x94
    ov96_021EB630(*((u32*)r4), 9);
    // add r4, #0x38
    // ldr r4, [sp, #4]
    // str r7, [sp]
    ov96_021EB3E4(r5, 1, 3, 0x65);
    *((u32*)(r4 + 0x78)) = r0;
    ov96_021EB564(9);
    ov96_021EB630(*((u32*)(r4 + 0x78)), 6);
    // ldr r4, [sp, #4]
    // str r0, [sp, #8]
    ov96_021EB5E8(r5);
    // ldr r3, [sp, #4]
    // ldr r2, [sp, #4]
    ov96_021EA634(*((u32*)(r2 + (0x62 << 2))), r0, 1, *((u32*)(r3 + 0x54)));
    // add r1, #0x84
    // str r0, [r1]
    // add r0, #0x84
    Sprite_SetDrawFlag(*((u32*)r4), 1);
    // add r1, sp, #0xc
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x84
    Sprite_SetMatrix(*((u32*)r4));
    // add r0, #0x84
    Sprite_SetAnimCtrlSeq(*((u32*)r4), *((u8*)r6));
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_021F6DA4(void) {
    // str r1, [sp]
    // add r0, #0x8c
    ov96_021F7544(*((u32*)r0));
    // add r3, sp, #0x28
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov96_021EB588(*((u32*)(r5 + 0x64)), r3, r3);
    // add r3, sp, #0x1c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp]
    // add r0, r5, r0
    ov96_021EB588(*((u32*)((*((u32*)ov96_0221C0DC) << 2) + 0x68)), r3, r3);
    // ldmia r3!, {r0, r1}
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, sp, #4
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x10
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    ov96_021EB588(*((u32*)(r5 + 0x68)), r2, ov96_0221C0D0);
}




void ov96_021F6E38(void) {
    // add r4, #0xb0
    // add r3, #0x38
    // add r1, r1, r4
    ov96_021F6E68(0x000003E7, 0x000003E7, r0);
}




void ov96_021F6E68(void) {
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0]
    // sub r0, r6, r0
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r0, #3
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov96_021F6F3C(void) {
    // add r0, #0x84
    // add r5, #0x88
}




void ov96_021F6F80(void) {
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    FillWindowPixelBuffer((0 << 4), 0);
    // ldr r0, [sp, #0x10]
    ov96_021E5F24(((r4 + 1) << 0x18));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    PokeathlonCourse_GetPlayerProfileFromData(((r0 << 0x18) >> 0x18));
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r7 + 0x54)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((r7 + 4), 0, r0, 0);
    String_Delete(r4);
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    PokeathlonCourse_GetPlayerProfileFromData((r7 + 4), 0);
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r7 + 0x54)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    AddTextPrinterParameterizedWithColor(0, 0, r0, 0);
    String_Delete(r6);
    // add r0, r5, r0
    CopyWindowToVram((0 << 4));
}




void ov96_021F7050(void) {
    // add r1, r6, r1
    // add r2, r7, r2
    AddWindow(*((u32*)r0), (0 << 4), (0 << 3));
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r5), 6, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)(r5 + 0x54)));
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r5), 3, 0, 1);
    LoadFontPal0(0, (0x1e << 4), *((u32*)(r5 + 0x54)));
}




void ov96_021F70AC(void) {
    // add r0, #0x44
    FillWindowPixelBuffer(0);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r5 + 0x54)));
    MessageFormat_New(*((u32*)(r5 + 0x54)));
    // str r1, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(0, r7, 3);
    ReadMsgData_ExpandPlaceholders(r6, r4, 0xa1, *((u32*)(r5 + 0x54)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x44
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r0, 0);
    String_Delete(r7);
    MessageFormat_Delete(r6);
    DestroyMsgData(r4);
    // add r5, #0x44
    CopyWindowToVram(r5);
}




void ov96_021F7130(void) {
    // sub r1, r2, r1
    // bpl _021F715A
    // add r1, r2, r1
}




void ov96_021F715C(void) {
    // add r1, r5, r1
    // add r0, r5, r0
}




void ov96_021F7194(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r4, #0x90
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r5, [sp, #0xc]
    // add r6, r0, r1
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x1c
    // add r5, #0x90
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    ov96_021E5F24(r1, 0x00000FAC);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x2c
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // ldr r2, [sp, #0x14]
    // sub r3, r2, r3
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r3, sp, #0x30
    ov96_021EB0A4(*((u32*)r5), *((u32*)(r4 + 0x1c)), ((0x12 << 0x10) >> 0x14), (*((u32*)((r2 >> 0x14) + 8)) << 6));
    // add r0, sp, #0x58
    // str r0, [sp]
    // add r0, sp, #0x38
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // add r3, sp, #0x54
    ov96_021EAF78((r1 << 0xc), (r2 << 0xc));
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x2c
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // sub r3, r2, r3
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r3, sp, #0x30
    ov96_021EB0A4(0, *((u32*)(r5 + 0x1c)), ((0x12 << 0x10) >> 0x14), (*((u32*)(r6 + 8)) << 6));
    // add r0, sp, #0x4c
    // str r0, [sp]
    // add r0, sp, #0x34
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // add r3, sp, #0x48
    ov96_021EAF78((r1 << 0xc), (r2 << 0xc));
    // ldr r1, [sp, #0x38]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #0x50]
    // add r0, sp, #0x54
    // add r2, sp, #0x48
    ov96_021F6060(0, (r1 << 0xc), (r3 << 0xc));
    // add r1, r4, r7
    // add r1, #0x29
    // strb r0, [r1]
    // ldr r0, [sp, #0x10]
    // add r1, r0, r5
    // add r1, #0x29
    // strb r0, [r1]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r5
    // add r0, #0x29
    // add r1, #0x26
    // strb r0, [r1]
    // add r1, #0x26
    // strb r0, [r1]
    _s32_div_f((0x1e * *((u32*)(r4 + 0x30))), 0x1e);
    // add r1, #0x27
    // strb r0, [r1]
    _s32_div_f((0x1e * *((u32*)(r5 + 0x30))), 0x1e);
    // add r1, #0x27
    // strb r0, [r1]
    // add r0, sp, #0x3c
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x48
    // add r1, sp, #0x54
    // add r2, sp, #0x3c
    VEC_Subtract(0);
    // add r0, sp, #0x3c
    VEC_Normalize(r0);
    // ldr r0, [sp, #0x38]
    // add r1, sp, #0x3c
    // add r2, sp, #0x54
    VEC_MultAdd((r0 << 0xc), r1);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // add r1, r0, r2
    // add r2, sp, #0x3c
    // add r3, r1, r0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r1, [sp, #0xc]
    // str r0, [r3]
    // ldr r0, [sp, #0xc]
    // add r2, r0, r1
    // strb r1, [r2, r0]
    // ldr r1, [sp, #0xc]
    // sub r0, #0x25
    _s32_div_f((*((u8*)(1 + (0x5a << 2))) + 1), 3, (*((u8*)(r1 + 0x00000143)) * 0xc));
    // ldr r2, [sp, #0xc]
    // strb r1, [r2, r0]
    sub_0200606C(0x000008A3, *((u8*)(ov96_0221DC18 + 3)));
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x24]
    ov96_021E8228(1, 4);
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    ov96_021E8228(1, ((r7 << 0x18) >> 0x18), 4);
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x24]
    ov96_021E8228(1, 1);
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    ov96_021E8228(1, ((r7 << 0x18) >> 0x18), 1);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r0, r4, r7
    // add r0, #0x29
    // ldr r0, [sp, #0x10]
    // add r0, r0, r5
    // add r0, #0x29
    // add r1, r4, r7
    // add r1, #0x29
    // strb r0, [r1]
    // ldr r0, [sp, #0x10]
    // add r1, r0, r5
    // add r1, #0x29
    // strb r0, [r1]
    // ldr r1, [sp, #0x14]
    // str r1, [r6]
    // ldr r1, [sp, #0x14]
    // str r0, [r1]
    *((u32*)(r5 + 0x18)) = *((u32*)(r4 + 0x18));
    // ldr r0, [sp, #0x14]
    *((u32*)(r4 + 0x18)) = *((u32*)(r5 + 0x18));
    // ldr r0, [sp, #0x14]
    // str r1, [r0]
    // str r0, [r6]
    // ldr r0, [sp, #0x28]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x28]
    // str r1, [r0]
    // add r0, r1, r0
    // ldr r0, [sp, #0x28]
    // add r1, r1, r0
    // ldr r0, [sp, #0x28]
    // str r1, [r0]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x1c)) = (1 << 0x10);
    *((u32*)(r4 + 0x1c)) = (2 << 0x10);
    *((u32*)(r4 + 0x1c)) = (0xdf << 0xc);
    *((u32*)(r5 + 0x1c)) = (2 << 0x10);
    *((u32*)(r5 + 0x1c)) = (0xdf << 0xc);
    // add r5, #0x38
    // add r6, #0x1c
    // ldr r0, [sp, #0x14]
    // add r4, #0x38
    // add r0, #0x1c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void ov96_021F74A4(void) {
    // str r1, [r4, r0]
}




void ov96_021F74C8(void) {
}




void ov96_021F74D0(void) {
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // add r5, #0x1c
}




void ov96_021F7544(void) {
    // add r7, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov96_021EB588(*((u32*)(r0 + 0x10)), r7);
    ov96_021EB588(*((u32*)(r5 + 0x14)), r7);
    ov96_021EB588(*((u32*)(r5 + 0x18)), r7);
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r5, #0x1c
}




void ov96_021F7598(void) {
    // str r1, [r4, r0]
    // str r0, [r4, r1]
}




void ov96_021F75BC(void) {
    // str r1, [r0, r2]
    // add r0, r0, r2
}




void ov96_021F75D4(void) {
    // add r0, r0, r2
}




void ov96_021F75E0(void) {
    // mul r2, r1
    // ldr r0, [r0, r2]
}




void ov96_021F75E8(void) {
    // add r6, #0x18
    // add r5, #0x14
}




void ov96_021F7620(void) {
    // add r1, sp, #0
    // str r0, [r1, r2]
    // add r0, #0x1c
    // add r0, sp, #0
    // add r5, r0, r1
    // add r0, sp, #0
    // str r0, [r1]
    // add r0, sp, #0
    // add r0, sp, #0
    // str r1, [r0, r6]
}




void ov96_021F7684(void) {
    // ldr r1, [sp, #0x28]
    // str r1, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // sub r1, r0, r5
    // ldr r0, [sp, #8]
    // add r0, #0x21
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // add r0, #0x21
    // ldr r0, [sp, #8]
    // add r0, #0x20
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, #0x20
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r1, r0, r1
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp]
    // add r6, #8
    // add r7, #0xc
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #4]
    // add r1, r2, r1
    // strb r1, [r6]
    // add r0, r1, r0
    // strb r0, [r7]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
}




void ov96_021F7738(void) {
}




void ov96_021F7740(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x21
    // add r0, #0x20
    // add r0, #0x50
    // add r0, r0, r4
    // add r4, #0x28
    // str r7, [r0]
    // str r0, [r5]
    // add r0, #0x20
    // add r4, r1, r0
    // add r0, #0x20
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // str r0, [r5]
    // ldr r0, [sp, #4]
}




void ov96_021F77EC(void) {
    // str r0, [sp, #4]
    // add r1, #0x50
    // add r0, r1, r0
    // add r4, #8
    // add r0, r6, r5
    // add r0, r0, r2
    // add r0, r0, r1
    // str r0, [r7]
    // add r1, r5, r1
    // add r1, r6, r1
    // add r2, r1, r4
    // str r0, [sp]
    // ldr r0, [sp, #4]
}




void ov96_021F7878(void) {
    GF_AssertFail();
    AddWindow(r5, r6, ov96_0221C2A0);
    // str r2, [sp]
    BG_FillCharDataRange(r5, 1, 0, 1);
    LoadFontPal0(0, (0x1e << 4), r4);
    LoadFontPal0(6, (1 << 0xe), r4);
}




void ov96_021F78C4(void) {
    FillWindowPixelBuffer(0);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, r5);
    MessageFormat_New(r5);
    ReadMsgData_ExpandPlaceholders(r7, 0x0000012F, r5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    String_Delete(r5);
    MessageFormat_Delete(r6);
    DestroyMsgData(r7);
    CopyWindowToVram(r4);
}




void ov96_021F7934(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetField1ED(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F7958: ; jump table
    Heap_Create(0x5c, 0x89, (1 << 0x12));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021F7D10(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r5, 0xac);
    MI_CpuFill8(0, 0xac);
    // str r1, [r4]
    FontID_Alloc(4, 0x89);
    BgConfig_Alloc(0x89);
    *((u32*)(r4 + 0xc)) = r0;
    ov96_021EE740(*((u32*)r4));
    *((u32*)(r4 + 0x18)) = r0;
    // add r0, #0x1c
    ov96_021F8094(r4, 0x89, *((u32*)(r4 + 0xc)), r5);
    PokeathlonCourse_GetField3D8_ForCurrentParticipant(r5);
    ov96_021EE5B4(*((u32*)r4));
    // add r1, #0x80
    // str r0, [r1]
    ov96_021F8448(r4, r4);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    PokeathlonCourse_IncrementField1ED(r5);
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov96_021EB180(*((u32*)r4), r3, r3);
    *((u32*)(r4 + 0x10)) = r0;
    // str r0, [sp]
    ov96_021EB5C8(*((u32*)(r4 + 0x10)), 0, 0, 0);
    PokeathlonCourse_GetGraphicsSystem(r5);
    ov96_021E9524();
    ov96_021E9528(r7);
    // add r0, #0x1c
    ov96_021F80A8(r4, r5, ((r6 << 0x18) >> 0x18), r0);
    ov96_021F8EB0(*((u32*)r4), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x14)) = r0;
    ov96_021F8F44(2);
    ov96_021EB3A4(*((u32*)(r4 + 0x10)));
    ov96_021F8F94(*((u32*)(r4 + 0x14)), r5, (0x4b << 2));
    ov96_021F8528(r4);
    ov96_021F85A0(r4);
    ov96_021EEBC8(2);
    // add r0, #0x9c
    ov96_021EEA88(*((u32*)r4), r0, 0xb, *((u32*)r4));
    PokeathlonCourse_IncrementField1ED(r5);
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)(r4 + 0xc)));
    ov96_021F7D30(*((u32*)(r4 + 0xc)), *((u32*)r4));
    // add r0, #0x80
    ov96_021EE60C(*((u32*)r4), *((u32*)(r4 + 0xc)));
    ov96_021F7DA8(r4);
    // add r0, #0x80
    ov96_021EE644(*((u32*)r4));
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    PokeathlonCourse_GetMode(r5);
    PokeathlonCourse_GetSaveData(r5);
    // str r0, [sp]
    ov96_021EE75C(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 0xc)), 5, r6);
    // add r0, #0x80
    ov96_021EE6A0(*((u32*)r4));
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    OS_WaitVBlankIntr(0, (1 << 0xc));
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Bg_SetTextDimAndAffineParams(*((u32*)(r4 + 0xc)), 7, 1, 0);
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Bg_SetTextDimAndAffineParams(*((u32*)(r4 + 0xc)), 7, 5, 0x10);
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Bg_SetTextDimAndAffineParams(*((u32*)(r4 + 0xc)), 6, 1, 0);
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Bg_SetTextDimAndAffineParams(*((u32*)(r4 + 0xc)), 6, 5, 0x10);
    // add r0, #0x84
    ov96_021F7878(r4, *((u32*)(r4 + 0xc)), *((u32*)r4));
    // add r0, #0x84
    ov96_021F78C4(r4, *((u32*)r4));
    PokeathlonCourse_IncrementField1ED(r5);
    ov96_021E5F24(r5);
    PokeathlonCourse_GetDataCopyArea(r5);
    // add r0, #0x28
    ov96_021E8A20();
    MTRandom();
    _u32_div_f(5);
    // strb r1, [r4]
    PokeathlonCourse_GetMode(r5);
    sub_0203A994(1);
    sub_0203A9C8();
    sub_0203A86C();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    PokeathlonCourse_SetField1F4(r5, 1);
    PokeathlonCourse_IncrementField1ED(r5);
    PlayBGM(0x00000473);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    PokeathlonCourse_IncrementField1ED(r5);
    IsPaletteFadeFinished();
    GF_AssertFail(1);
}




u32 ov96_021F7C4C(void) {
}




void ov96_021F7C70(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    FontID_Release(4);
    G2x_SetBlendBrightness_(0x04000050, 0x3f, 0);
    // add r0, #0x80
    ov96_021EE5E0(*((u32*)r4));
    // add r0, #0x84
    RemoveWindow(r4);
    ov96_021EE808(*((u32*)(r4 + 0x18)));
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), *((u8*)ov96_0221C290));
    ov96_021F8F0C(*((u32*)(r4 + 0x14)));
    ov96_021F8728(*((u32*)(r4 + 0x1c)));
    ov96_021EB21C(*((u32*)(r4 + 0x10)));
    ov96_021F84E4(r4);
    Heap_Free(*((u32*)(r4 + 0xc)));
    PokeathlonCourse_FreePtr4HeapAlloc(r7);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    Heap_Destroy(0x89);
    sub_0203A914();
}




void ov96_021F7D10(void) {
}




void ov96_021F7D30(void) {
    // add r3, sp, #8
    // str r1, [sp]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #4]
    // add r6, sp, #0x18
    InitBgFromTemplate(r7, *((u8*)ov96_0221C290), r6, *((u8*)ov96_0221C298));
    BgClearTilemapBufferAndCommit(r7, *((u8*)r5));
    // ldr r3, [sp]
    BG_ClearCharDataRange(*((u8*)r5), 0x40, 0);
    // ldr r0, [sp, #4]
    // add r6, #0x1c
    // str r0, [sp, #4]
}




void ov96_021F7DA8(void) {
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
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
}




void ov96_021F7E64(void) {
}




void ov96_021F7E74(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    IsFanfarePlaying(r4);
    PokeathlonCourse_GetMode(r6);
    ov96_021F85F4(r6);
    // ldr r0, [sp, #0x14]
    ov96_021EE830(*((u32*)(r0 + 0x18)));
    // ldr r0, [sp, #0x14]
    ov96_021EEA80(*((u32*)(r0 + 0x18)));
    // ldr r0, [sp, #0x14]
    ov96_021EE97C(*((u32*)(r0 + 0x18)));
    // str r0, [sp, #0x10]
    // mvn r0, r0
    // str r0, [sp, #0xc]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F7EDA: ; jump table
    ov96_021F83DC(r6);
    // str r0, [sp, #0xc]
    // strb r0, [r7]
    // ldr r0, [sp, #0x14]
    // add r0, #0x1c
    ov96_021F81CC((*((u8*)r7) + 1), r6);
    // add r5, sp, #0x1c
    PokeathlonCourse_GetGraphicsSystem(r6);
    ov96_021E94EC(((r4 << 0x18) >> 0x18));
    // stmia r5!, {r0}
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0xc]
    PokeathlonCourse_GetPlayerProfileFromData(r6, *((u32*)r2));
    // ldr r0, [sp, #0x10]
    BufferPlayersName(0, r0);
    // str r0, [sp, #0xc]
    // strb r0, [r7]
    // str r0, [sp]
    // sub r1, #0x18
    StartBrightnessTransition(0x10, 0x10, 0, 0x3f);
    UpdateMainScreenBrightnessSurface(0x3f, 0x3f);
    // strh r1, [r0]
    // strb r0, [r7]
    IsBrightnessTransitionActive(1, 0x10);
    // str r0, [sp, #0xc]
    // strb r0, [r7]
    PokeathlonCourse_GetField3D8_ForCurrentParticipant(r6);
    PokeathlonCourse_GetGraphicsSystem(r6);
    ov96_021E95D8(r4, r5);
    // ldr r0, [sp, #0x14]
    ov96_021F910C(*((u32*)(0x000003E7 + 0x14)), 0x000003E7, ((r5 << 0x18) >> 0x18));
    // str r0, [sp]
    StartBrightnessTransition(0x10, 0, 0x10, 0x3f);
    // strb r0, [r7]
    IsBrightnessTransitionActive(2);
    // strb r0, [r7]
    ov96_021F83FC(r6);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r0, #0xa8
    // str r1, [r0]
    // strb r0, [r7]
    PokeathlonCourse_GetMode(r6, 1);
    ov96_021F7E64(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    GF_SndStartFadeOutBGM(0, 0xc);
    // strb r0, [r7]
    IsPaletteFadeFinished((*((u8*)r7) + 1));
    // ldr r0, [sp, #0x14]
    ov96_021EE944(*((u32*)(r0 + 0x18)));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // mvn r1, r1
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    ov96_021EE8CC(*((u32*)(1 + 0x18)), 0);
    // ldr r0, [sp, #0x14]
    // add r0, #0xa4
    // ldr r0, [sp, #0x14]
    // add r0, #0xa4
    // str r0, [sp, #0x14]
    // str r1, [r0]
    // ldr r0, [sp, #0x18]
}




void ov96_021F8094(void) {
}




void ov96_021F80A8(void) {
    // str r2, [sp, #4]
    // str r1, [sp]
    // ldr r0, [sp, #4]
    // add r1, #0x59
    // strb r0, [r1]
    // str r5, [sp, #0xc]
    // ldr r1, [sp]
    // sub r3, r3, r6
    // add r4, #0xa
    // str r0, [sp, #8]
    // add r4, #0xa
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r5, #0xa
    // add r6, #0x28
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // add r7, #0x58
    // strb r0, [r7]
}




void ov96_021F8128(void) {
    ov96_021F895C(*((u32*)(r0 + 4)));
    ov96_021F8978(*((u32*)(r4 + 4)));
    PlaySE(0x000008D7);
    *((u32*)(r4 + 0xc)) = 1;
    *((u32*)(r4 + 8)) = (1 - 1);
}




void ov96_021F8160(void) {
}




void ov96_021F8180(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp, #4]
    // ldr r2, [sp]
    // ldr r0, [sp]
}




void ov96_021F81C0(void) {
    // add r2, #0x58
    // strb r3, [r2]
}




void ov96_021F81CC(void) {
    // add r1, #0x58
    // add r5, #0x58
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F81EC: ; jump table
    // add r0, #0x44
    // mvn r1, r1
    ov96_021F8128(0x4f, 0);
    // add r0, #0x44
    ov96_021F8180(r4, 0);
    ov96_021F82E4(r4, *((u32*)(r4 + 0x48)), 0);
    // add r0, #0x44
    ov96_021F8354(r4);
    ov96_021F8360(r4);
    ov96_021F8378(r4, r6, (1 << 8), 0x28);
    ov96_021F8334(r4, r0, 0);
    ov96_021F81C0(r4, 0xa);
    // mvn r1, r1
    ov96_021F8160(0x4f, 0);
    ov96_021F8180((r4 + 4), 0);
    ov96_021F8978(*((u32*)(r5 + 4)));
    PlayFanfare(0x000004B9);
    *((u32*)(r4 + 0x60)) = r7;
    // add r5, #0x10
    ov96_021F81C0(r4, 0xa);
    ov96_021F8160(0, 8);
    ov96_021F83D0(r4);
    ov96_021F8180(1);
    ov96_021F83BC(r4, r6);
    // strb r0, [r5]
    *((u32*)(r4 + 0x54)) = (*((u32*)(r4 + 0x54)) - 1);
    ov96_021F8360(0, (*((u32*)(r4 + 0x54)) - 1), *((u32*)(r4 + 0x54)));
    // strb r0, [r5]
}




void ov96_021F82E4(void) {
    // add r1, #0x5b
    // add r4, r0, r1
    // str r0, [r4]
    // add r0, #0x5b
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // add r0, #0x5b
    // strb r1, [r0]
    // add r0, #0x5a
    // add r5, #0x5a
    // strb r0, [r5]
}




void ov96_021F8334(void) {
}




void ov96_021F8354(void) {
}




void ov96_021F8360(void) {
    // add r1, #0x59
    // add r0, #0x5a
}




void ov96_021F8378(void) {
    // add r2, #0x5c
    // sub r1, r1, r2
    // add r0, #0x5c
    // add r0, #0x5c
    // strb r1, [r0]
}




void ov96_021F83BC(void) {
}




void ov96_021F83D0(void) {
    // add r0, #0x5b
    // add r0, r1, r0
}




void ov96_021F83DC(void) {
    // add r4, #0xf6
    // add r4, #0xf9
}




void ov96_021F83FC(void) {
    PokeathlonCourse_GetCurrentParticipantIndex();
    PokeathlonCourse_GetDataCopyArea(r6);
    // add r0, #0xf0
    ov96_021E8A20();
    GF_AssertFail(*((u8*)r0));
    PokeathlonCourse_GetMode(r6);
    // add r1, r4, r0
    // add r0, r1, r0
    // add r0, r2, r0
    // add r1, r4, r0
    // add r0, r1, r0
    // add r0, r2, r0
}




void ov96_021F8448(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    SpriteSystem_Alloc(*((u32*)r0), ov96_0221C2C4);
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    SpriteManager_New(*((u32*)r4), r4);
    // add r1, #0x98
    // str r0, [r1]
    // add r0, #0x94
    // add r1, sp, #0x14
    // add r2, sp, #0
    SpriteSystem_Init(*((u32*)r4), r4, 0x20);
    // add r0, #0x94
    // add r1, #0x98
    SpriteSystem_InitSprites(*((u32*)r4), *((u32*)r4), 2);
    // add r0, #0x94
    // add r4, #0x98
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)r4), *((u32*)r4));
}




void ov96_021F84E4(void) {
    // add r0, r5, r6
    // add r0, #0x9c
    // add r0, r5, r6
    // add r0, #0x9c
    // str r7, [r0]
    // add r0, #0x94
    // add r1, #0x98
    // add r5, #0x94
}




void ov96_021F8528(void) {
    // add r1, #0x94
    // add r0, #0x98
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021F85A0(void) {
    // add r2, sp, #0
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0
    // strh r1, [r0]
    // add r0, #0x94
    // add r1, #0x98
    // add r4, #0x9c
    // str r0, [r4]
}




void ov96_021F85F4(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0x28
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0xf0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r0, #0xa4
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0x50
    // ldr r0, [sp, #0x10]
    // strb r1, [r4]
    // ldr r5, [sp, #0x10]
    // add r5, #0x50
    // str r1, [sp, #4]
    // str r0, [sp]
    // add r5, #0x28
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // strb r6, [r4]
    // ldr r0, [sp, #0x14]
    // add r0, #0xa8
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
}




void ov96_021F86E8(void) {
    // str r7, [r4]
    // add r1, #0x48
}




void ov96_021F8728(void) {
    // str r0, [sp]
    // add r6, #0x24
    // add r4, #0x34
    // add r6, #0x48
    // add r4, #0x48
    // add r5, #0x48
    // ldr r0, [sp]
    // add r5, r0, r1
    // add r5, #0x18
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov96_021F87D0(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021F87DC: .word SpriteList_RenderAndAnimateSprites
}




void ov96_021F87E0(void) {
    // add r5, #0x14
    // add r5, #0x48
    // add r0, r6, r0
    // add r0, r6, r0
}




void ov96_021F8830(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x14
    // add r4, r2, r0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, #0x44
    // strh r1, [r0]
    // add r0, #0x44
    // str r1, [r5, r0]
    // ldr r0, [sp, #8]
    // str r1, [r5, r0]
}




void ov96_021F8918(void) {
    // add r0, #0x10
    // add r4, #0x20
}




void ov96_021F893C(void) {
    // str r3, [r1]
    // str r0, [r2]
}




void ov96_021F8948(void) {
    *((u32*)(r0 + 0x38)) = r1;
    *((u32*)(r0 + 0x3c)) = r2;
}




void ov96_021F895C(void) {
    // add r0, r0, r1
    *((u32*)(r0 + 0x38)) = *((u32*)(r0 + 0x38));
    // add r0, r0, r2
    *((u32*)(r0 + 0x3c)) = *((u32*)(r0 + 0x3c));
}




void ov96_021F8978(void) {
    // add r0, #0x44
}




void ov96_021F8980(void) {
    // add r1, r5, r1
    // str r0, [r5, r1]
    // str r0, [r4, r7]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // sub r1, #0x14
    // str r0, [sp, #0xc]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // sub r1, #0xc
}




void ov96_021F8A50(void) {
    // str r1, [sp]
    // sub r2, #0x68
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r3, #8
    // str r3, [sp, #0x1c]
    // add r3, #0xc
    // add r4, #0x30
    // str r3, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, r0, r4
}




void ov96_021F8A98(void) {
    // str r2, [r0]
    // add r2, r1, r2
}




void ov96_021F8ACC(void) {
}




void ov96_021F8AFC(void) {
    // add r0, sp, #0x14
    // add r2, r3, r2
    // add r0, sp, #0x14
    // str r0, [r4]
    // add r0, sp, #0x14
    // add r0, sp, #0x14
    // add r0, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #4]
    // ldr r2, [sp, #8]
    // add r2, r3, r2
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r3, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp]
    // add r2, r3, r2
    // ldr r1, [sp]
}




void ov96_021F8BC0(void) {
    // mvn r0, r0
    // str r0, [sp]
    // add r0, #0x28
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r4, #0x10
    // add r1, r5, r1
    // str r4, [sp, #0xc]
}




void ov96_021F8C04(void) {
    // mvn r1, r1
    // str r1, [sp]
    // str r3, [sp, #4]
    // add r2, #0x20
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // add r1, r0, r1
}




void ov96_021F8C2C(void) {
}




void ov96_021F8C54(void) {
}




void ov96_021F8C88(void) {
    // add r2, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, #0x80
    // str r0, [sp]
    Sprite_SetMatrix(*((u32*)r2), r2, r1);
    // add r0, #0x10
    // str r0, [sp]
    Sprite_SetMatrix(*((u32*)(r5 + 4)), r7);
    // add r4, #0x30
    // str r0, [sp]
    Sprite_SetMatrix(*((u32*)(r5 + 8)), r7);
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 0xc)), r7);
    sub_02013728(*((u32*)(r5 + 0x10)));
    sub_02013728(*((u32*)(r5 + 0x20)));
}




void ov96_021F8CFC(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // mov r1, ip
    // add r0, r0, r6
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, r5
    // str r0, [sp, #4]
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // add r0, r0, r6
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, r5
    // str r0, [sp, #4]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // add r0, r0, r6
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, r5
    // str r0, [sp, #4]
}




void ov96_021F8D98(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021F8DD4(void) {
    // add r1, r4, r1
    // add r1, r4, r1
}




void ov96_021F8DF4(void) {
    // str r3, [sp, #0x18]
    // ldr r6, [sp, #0x7c]
    FillWindowPixelBufferText_AssumeTileSize32(r1, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    AddTextPrinterParameterizedWithColorAndSpacing(r4, 0, r7);
    // add r3, sp, #0x1c
    sub_02021AC8(*((u32*)(r4 + 0x14)), 1, 1);
    // str r0, [sp, #0x28]
    // str r4, [sp, #0x2c]
    // str r0, [sp, #0x30]
    SpriteTransfer_GetPaletteProxy(*((u32*)(r5 + (0xb1 << 2))), 0);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x78]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x70]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x74]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x28
    sub_020135D8(*((u32*)r5));
    TextOBJ_SetPaletteNum(0);
    // str r4, [r6]
    // add r3, sp, #0x1c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov96_021F8E94(void) {
    // str r0, [r4]
}




void ov96_021F8EB0(void) {
    // str r6, [r4]
    // add r5, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021F8F0C(void) {
    // add r5, #0x34
    // add r5, #0x28
    // add r4, #0xc
}




void ov96_021F8F44(void) {
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021F8F94(void) {
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // add r0, #0x10
    // str r0, [sp, #0x20]
    // add r0, #0x18
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r1, [sp, #0x40]
    // ldr r1, [sp, #0x28]
    // str r1, [sp, #0x38]
    // ldr r1, [sp, #0x20]
    // str r1, [sp, #0x3c]
    // add r1, sp, #0x38
    // ldr r1, [sp, #0x34]
    // ldr r5, [sp, #0x24]
    // str r0, [sp]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x38]
    // ldr r1, [sp, #0x1c]
    // str r1, [sp, #0x3c]
    // add r1, sp, #0x38
    // add r5, #0x10
    // ldr r0, [sp, #0x28]
    // add r0, #0x40
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // add r0, #0x40
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x30]
    // add r0, #0x24
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    // add r0, #0x34
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x30]
    // str r0, [r1]
    // ldr r4, [sp, #0x30]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // str r1, [sp]
    // sub r1, #0x10
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // add r1, #0xc
    // ldr r0, [sp, #0x14]
    // add r0, #0x10
    // ldr r0, [sp, #0x30]
    // add r7, #0x28
    // add r0, #0x28
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x28
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}




void ov96_021F910C(void) {
    // add r0, r5, r1
    // add r5, #0x24
    // add r0, r5, r1
}




void ov96_021F9134(void) {
    // str r3, [sp, #0x18]
    // ldr r6, [sp, #0x7c]
    FillWindowPixelBufferText_AssumeTileSize32(r1, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    AddTextPrinterParameterizedWithColorAndSpacing(r4, 0, r7);
    // add r3, sp, #0x1c
    sub_02021AC8(*((u32*)(r4 + 0x14)), 1, 2);
    // str r4, [sp, #0x2c]
    // str r0, [sp, #0x28]
    ov96_021EB5E8(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x30]
    ObjPlttTransfer_GetPlttProxyByID(0x68);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x78]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x70]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x74]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // add r0, sp, #0x28
    sub_020135D8(*((u32*)r5));
    sub_02013880(4);
    // str r4, [r6]
    // add r3, sp, #0x1c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov96_021F91CC(void) {
    // str r0, [r4]
}




void ov96_021F91E8(void) {
    // sub r6, r4, r0
    // sub r1, r6, r1
}




void ov96_021F9234(void) {
}




void ov96_021F9240(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F9262: ; jump table
    ov96_021E637C(r7, (*((u16*)(*((u8*)r6) + 6)) << 0x10));
    // strb r1, [r4, r0]
    // strb r0, [r6]
    ov96_021FBDBC((*((u8*)r6) + 1), 1);
    ov96_021FA6D0(r7, r4);
    ov96_021FB630(r7);
    // add r2, r4, r2
    // add r2, #0xe2
    // add r5, r5, r2
    ov96_021E8318(r7, ((0 << 0x10) >> 0x10), *((u16*)(0 * 0x6c)));
    ov96_021FB808(r4, r5);
    // strb r0, [r6]
    ov96_021E667C(r7);
    ov96_021FB60C(r4);
    // strb r0, [r6]
    ov96_021FBDBC(r4);
    ov96_021FA6D0(r7, r4);
    ov96_021FB630(r7);
    ov96_021FBDBC();
    ov96_021FB630(r7);
    PokeathlonCourse_GetDataCopyArea(r7);
    ov96_021E8A20();
    *((u8*)(r0 + 9)) = 1;
    PokeathlonCourse_GetDataCopyArea(r7, 1);
    // add r0, #0xf0
    ov96_021E8A20();
    // strb r0, [r6]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    PokeathlonCourse_SetStateField07(r7, 2);
    ov96_021FAF1C(r7);
}




void ov96_021F9380(void) {
    // str r0, [sp]
    // strb r0, [r4]
    // ldr r0, [sp]
    // add r1, #0xe2
    // add r3, #0x6c
    // add r0, r0, r1
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #8]
    // sub r1, r1, r0
    // add r6, r1, r0
    // add r5, r7, r0
    // sub r0, r0, r1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r1, r0, r4
    // str r1, [r5, r0]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void ov96_021F94A8(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetField1ED(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F94CC: ; jump table
    Heap_Create(0x5c, 0x8a, (0x12 << 0xe));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021F9E3C(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r6, (0xf2 << 2));
    MI_CpuFill8(0, (0xf2 << 2));
    BgConfig_Alloc(0x8a);
    *((u32*)(r4 + 4)) = r0;
    ov96_021FC028(*((u32*)r4));
    // add r1, #0xd8
    // str r0, [r1]
    ov96_021FC618(*((u32*)r4), r4);
    // add r1, #0xdc
    // str r0, [r1]
    // add r0, #0xd8
    ov96_021FC0E4(*((u32*)r4), r4);
    // add r0, #0xd8
    ov96_021FC0E8(*((u32*)r4));
    // add r0, #0xd8
    ov96_021FC0F4(*((u32*)r4));
    PokeathlonCourse_SetField3A4(r6, r5, r7, r0);
    ov96_021E6670(r6, 8);
    // str r0, [sp, #0xdc]
    // str r0, [sp, #0xe0]
    // str r0, [sp, #0xe4]
    // str r2, [sp, #0xe8]
    // add r0, sp, #0xdc
    // str r3, [sp]
    ov96_021E92B0(((1 << 0x12) >> 4), 0x12, 0x8a, 0x00300010);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    // str r1, [r4]
    FontID_Alloc(4, 0x8a);
    ov96_021F9E5C(*((u32*)(r4 + 4)));
    ov96_021FB7C8(r4);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    PokeathlonCourse_IncrementField1ED(r6);
    // add r3, sp, #0xd0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov96_021EB180(*((u32*)r4), r3, r3);
    // str r0, [r4, r2]
    // str r1, [sp]
    ov96_021EB5C8(*((u32*)(r4 + (0x89 << 2))), 0, (0x11 << 0x10), 0);
    ov96_021EB29C(*((u32*)(r4 + (0x89 << 2))), 0, 0x65);
    ov96_021EB29C(*((u32*)(r4 + (0x89 << 2))), 1, 0x66);
    ov96_021EB29C(*((u32*)(r4 + (0x89 << 2))), 2, 0x67);
    ov96_021EB29C(*((u32*)(r4 + (0x89 << 2))), 3, 0x68);
    ov96_021EB29C(*((u32*)(r4 + (0x89 << 2))), 4, 0x69);
    ov96_021EB29C(*((u32*)(r4 + (0x89 << 2))), 5, 0x6a);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r4 + (0x89 << 2))), 0x9c, 9, 0x65);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r4 + (0x89 << 2))), 0x9c, 6, 0x65);
    ov96_021EB334(*((u32*)(r4 + (0x89 << 2))), 0x9c, 8, 0x65);
    ov96_021EB36C(*((u32*)(r4 + (0x89 << 2))), 0x9c, 7, 0x65);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x10, 0x66);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0xd, 0x66);
    ov96_021EB334(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0xf, 0x66);
    ov96_021EB36C(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0xe, 0x66);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0xc, 0x67);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r4 + (0x89 << 2))), 0x9c, 6, 0x67);
    ov96_021EB334(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0xb, 0x67);
    ov96_021EB36C(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0xa, 0x67);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x14, 0x69);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x11, 0x69);
    ov96_021EB334(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x13, 0x69);
    ov96_021EB36C(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x12, 0x69);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x1c, 0x68);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x19, 0x68);
    ov96_021EB334(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x1b, 0x68);
    ov96_021EB36C(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x1a, 0x68);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x20, 0x6a);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x1d, 0x6a);
    ov96_021EB334(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x1f, 0x6a);
    ov96_021EB36C(*((u32*)(r4 + (0x89 << 2))), 0x9c, 0x1e, 0x6a);
    ov96_021EB3A4(*((u32*)(r4 + (0x89 << 2))));
    ov96_021E9A78(*((u32*)r4), 0x000002E7, 1);
    // str r0, [r4, r1]
    ov96_021EB5E8(*((u32*)(r4 + (0x89 << 2))), (0x3a << 4));
    // str r0, [sp]
    ov96_021EA854(*((u32*)r4), 3, 4, *((u32*)(r4 + (0x3a << 4))));
    // str r0, [r4, r1]
    PokeathlonCourse_IncrementField1ED(r6, (0xe9 << 2));
    // str r7, [sp]
    ov96_021EB408(*((u32*)(r4 + (0x89 << 2))), 1, 3, 0x65);
    Sprite_SetDrawPriority(0x1b);
    // str r0, [sp]
    ov96_021EB408(*((u32*)(r4 + (0x89 << 2))), 1, 1, 0x67);
    Sprite_SetDrawPriority(0x1b);
    // str r7, [sp]
    ov96_021EB408(*((u32*)(r4 + (0x89 << 2))), 1, 1, 0x66);
    // str r0, [sp]
    ov96_021EB408(*((u32*)(r4 + (0x89 << 2))), 1, 1, 0x68);
    // str r0, [sp]
    ov96_021EB408(*((u32*)(r4 + (0x89 << 2))), 1, 1, 0x69);
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)(r4 + (0x89 << 2))), 1, 1, 0x6a);
    // str r0, [r4, r1]
    ov96_021EB564(*((u32*)(r4 + (0xea << 2))), 0);
    // str r0, [sp, #0xcc]
    // str r0, [sp, #0xc4]
    // str r0, [sp, #0xc8]
    // add r1, sp, #0xc4
    ov96_021EB588(*((u32*)(r4 + (0xea << 2))));
    ov96_021EB52C(*((u32*)(r4 + (0xea << 2))), 1, 1);
    ov96_021EB630(*((u32*)(r4 + (0xea << 2))), 1);
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov96_021EB5E8(*((u32*)(r4 + (0x89 << 2))));
    ov96_021EA374(*((u32*)(r4 + (0x3a << 4))), r0, 0, *((u32*)r4));
    // str r0, [r5, r1]
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xeb << 2))), 1);
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0xb8
    // str r0, [sp, #0xb8]
    // str r0, [sp, #0xbc]
    // str r0, [sp, #0xc0]
    Sprite_SetMatrix(*((u32*)(r5 + (0xeb << 2))));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0xeb << 2))), *((u8*)r7));
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // add r0, #0xdc
    ov96_021FC630(*((u32*)r4), *((u32*)(r4 + (0x89 << 2))), 1);
    ov96_021FC188(*((u32*)r4));
    // str r0, [r4, r1]
    // add r5, sp, #0x88
    PokeathlonCourse_GetParticipantUnk04(r6, 0);
    // strh r2, [r5]
    // add r0, #0x28
    *((u16*)(r5 + 2)) = *((u16*)(r0 + 2));
    // add r1, sp, #0x88
    ov96_021FC214(*((u32*)(r4 + (0x8a << 2))), (0 + 1), *((u16*)(r0 + 2)));
    ov96_021FC2B4(*((u32*)(r4 + (0x8a << 2))), 0);
    // add r0, sp, #0x58
    // str r0, [sp, #0x1c]
    // add r7, sp, #0x13c
    ov96_021E5F24(r6);
    // ldr r3, [sp, #0x1c]
    ov96_021E6168(r6, r0, r5);
    ov96_021E5F24(r6);
    ov96_021E60C0(r6, r0, r5);
    ov96_021E6108();
    *((u32*)(r7 + 0x14)) = r0;
    // ldr r0, [sp, #0x1c]
    // add r0, #0x10
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0x13c]
    // str r0, [sp, #0x140]
    // str r1, [sp, #0x144]
    // str r0, [sp, #0x148]
    // str r0, [sp, #0x14c]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r2, sp, #0x58
    // add r3, sp, #0x13c
    ov96_021EA8A8(*((u32*)(r4 + (0xe9 << 2))), 3);
    PokeathlonCourse_IncrementField1ED(r6);
    ov96_021EAA00(*((u32*)(r4 + (0xe9 << 2))));
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)(r4 + 4)));
    ov96_021F9FE8(*((u32*)(r4 + 4)), *((u32*)r4));
    PokeathlonCourse_IncrementField1ED(r6);
    ov96_021FA020(*((u32*)(r4 + 4)), *((u32*)r4));
    // str r1, [r0]
    *((u32*)(0x04000010 + 4)) = (5 << 0x16);
    *((u32*)(0x04000010 + 8)) = (5 << 0x16);
    // str r1, [r0]
    *((u32*)(0x04001010 + 4)) = (3 << 0x14);
    *((u32*)(0x04001010 + 8)) = (3 << 0x14);
    PokeathlonCourse_IncrementField1ED(r6, (3 << 0x14));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    PokeathlonCourse_SetField1F4(r6, 1);
    ov96_021EAA04(*((u32*)(r4 + (0xe9 << 2))), ((0 << 0x18) >> 0x18));
    ov96_021EAB38(1);
    PokeathlonCourse_IncrementField1ED(r6);
    ov96_021E5F24(r6);
    // add r4, #0xd8
    ov96_021FC144(*((u32*)r4));
    PokeathlonCourse_IncrementField1ED(r6);
    // add r0, #0xd8
    ov96_021FC07C(*((u32*)r4), *((u32*)(r4 + (0x89 << 2))));
    ov96_021E6290(r6, (0x11 << 4), *((u32*)(r4 + (0x3a << 4))), *((u32*)(r4 + (0x89 << 2))));
    Sprite_SetDrawPriority(*((u32*)r0), 1);
    // add r2, sp, #0x4c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0x28
    ReadWholeNarcMemberByIdPair(*((u32*)ov96_0221C410), 0xaa, 0xa, ov96_0221C410);
    // add r0, sp, #0xec
    ReadWholeNarcMemberByIdPair(0xaa, 0);
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // add r0, #0xe0
    // str r0, [sp, #0x20]
    // add r7, sp, #0x4c
    // add r5, sp, #0x40
    // str r0, [sp]
    // add r3, #0xd8
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // add r1, sp, #0xec
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x28
    // str r0, [sp, #0xc]
    ov96_021FA0E8(r6, *((u32*)r4));
    // strh r0, [r5]
    *((u16*)(r5 + 2)) = (0x62 << 2);
    // ldr r0, [sp, #0x20]
    // add r0, #0x6c
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x40
    // str r0, [sp, #8]
    ov96_021E634C(r6, 0, *((u32*)(r4 + (0x3a << 4))), *((u32*)(r4 + (0x89 << 2))));
    ov96_021E5F24(r6);
    // add r1, sp, #0xec
    ov96_021FBBB4(r6);
    PokeathlonCourse_GetDataCopyArea(r6);
    // add r0, #0xf0
    ov96_021E8A20();
    // add r2, r0, r3
    *((u8*)(r2 + 0x1c)) = 0x11;
    ov96_021E5F24(r6, 0x11, ((0 + 1) << 0x18), (((0 + 1) << 0x18) >> 0x18));
    // add r5, #0x28
    ov96_021E8A20(r5);
    // add r1, r0, r3
    *((u8*)(r1 + 0x1c)) = 0x11;
    sub_0203A994(1, ((0 + 1) << 0x18), 0x11, (((0 + 1) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(2, 3, 3, 0);
    PokeathlonCourse_IncrementField1ED(r6);
    IsPaletteFadeFinished();
}




void ov96_021F9CA4(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov96_021F9CC4(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetGraphicsSystem(r6);
    // str r0, [sp, #0x1c]
    ov96_021E9510();
    PokeathlonCourse_GetField5F0_AtIndex(r6, ((0 << 0x18) >> 0x18));
    _s32_div_f(0x1e);
    _s32_div_f(r4, 0x1e);
    _s32_div_f((0xa * r1), 0x1e);
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    ov96_021E966C(r6, r5, ((r4 << 0x10) >> 0x10));
    // ldr r0, [sp, #0x1c]
    ov96_021E93B4(2);
    // ldr r0, [sp, #0x1c]
    ov96_0221A56C(0);
    // ldr r0, [sp, #0x1c]
    ov96_021E952C();
    // ldr r0, [sp, #0x1c]
    ov96_021E9570(0);
}




void ov96_021F9D58(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    sub_0203A914();
    PokeathlonCourse_GetSystem(r5);
    ov96_021E87B0(0);
    ov96_021FC1A8(*((u32*)(r4 + (0x8a << 2))));
    PokeathlonCourse_ResetField3A4(r5);
    // add r0, #0xdc
    ov96_021FC690(*((u32*)r4));
    // add r0, #0xd8
    ov96_021FC05C(*((u32*)r4));
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 5);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 6);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 7);
    // add r0, #8
    RemoveWindow(r4);
    Heap_Free(*((u32*)(r4 + 4)));
    ov96_021EA894(*((u32*)(r4 + (0xe9 << 2))));
    ov96_021E9C0C(*((u32*)(r4 + (0x3a << 4))));
    ov96_021EB21C(*((u32*)(r4 + (0x89 << 2))));
    ov96_021E92D0();
    FontID_Release(4);
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    Heap_Destroy(0x8a);
}




void ov96_021F9E3C(void) {
}




void ov96_021F9E5C(void) {
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
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
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
    BgClearTilemapBufferAndCommit(r4, 7);
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_021F9FE8(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
}




void ov96_021FA020(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp]
    // str r4, [sp, #4]
}




void ov96_021FA0E8(void) {
    // ldr r5, [sp, #0x60]
    // str r0, [sp]
    // ldr r4, [sp, #0x64]
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = 0;
    *((u16*)(r4 + 4)) = 0x30;
    *((u16*)(r4 + 6)) = (5 << 6);
    // str r2, [sp, #4]
    *((u8*)(r4 + 0x18)) = r5;
    // add r1, #0x68
    // strh r2, [r1]
    *((u32*)(r4 + 0x64)) = (0xfe << 0x16);
    *((u8*)(r4 + 8)) = 0;
    ov96_021FC0D0(r3, r5, 1);
    *((u32*)(r4 + 0x20)) = r0;
    *((u16*)(r4 + 0x14)) = 0;
    *((u16*)(r4 + 0x16)) = 4;
    *((u16*)(r4 + 0x14)) = 1;
    *((u16*)(r4 + 0x16)) = 5;
    *((u16*)(r4 + 0x14)) = 2;
    *((u16*)(r4 + 0x16)) = 6;
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    GF_AssertFail(0xd0, 2);
    // ldr r0, [sp, #0x5c]
    ov96_021EAA04(((r1 << 0x18) >> 0x18));
    // str r0, [sp, #0xc]
    ov96_021EAA20();
    // ldr r1, [sp, #0xc]
    *((u32*)(r4 + 0x24)) = r1;
    ov96_021E8BB0();
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    ov96_021E5F24();
    // ldr r0, [sp]
    ov96_021E60D8(r0, r5);
    // add r0, #0x5c
    // strh r1, [r0]
    // add r0, r6, r0
    // add r0, #0x5e
    // strh r1, [r0]
    // add r0, #0x58
    // strb r1, [r0]
    // ldr r0, [sp]
    ov96_021E5F24(r4, *((u8*)(r0 + 2)));
    // ldr r0, [sp]
    ov96_021E60C0(r0, r5);
    ov96_021E6138();
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #4]
    // add r2, r3, r2
    // ldr r0, [sp, #0xc]
    ov96_021EAF70((r0 - 1), *((u32*)(r1 + ((r0 - 1) << 3))), *((u32*)(((r0 - 1) << 3) + 4)));
    ov96_021E6104();
    // ldr r0, [sp, #0xc]
    ov96_021EAF6C(r0);
    // add r0, r6, r0
    _fflt(*((u32*)((*((u8*)(r7 + 1)) << 2) + 0x3c)));
    _fdiv(0x41200000);
    *((u32*)(r4 + 0x50)) = r0;
    // add r0, r6, r0
    _fflt(*((u32*)((*((u8*)(r7 + 4)) << 2) + 0x28)));
    _fdiv(0x42C80000);
    *((u32*)(r4 + 0x54)) = r0;
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    *((u32*)(r4 + 0x3c)) = 0x78;
    // add r3, #0x98
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    // add r2, r2, r3
    ov96_021EAF94((1 << 0x10), 0x78, 0x78);
    // ldr r0, [sp, #0xc]
    ov96_021EAC0C(1);
    // ldr r0, [sp, #0xc]
    ov96_021EABA8(4);
    // ldr r0, [sp, #0xc]
    ov96_021EABE0(2);
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x38
    ov96_021EABF4();
    // ldr r0, [sp, #0x58]
    ov96_021EB4F4(0x66, 5);
    *((u32*)(r4 + 0x44)) = r0;
    ov96_021EB5B8();
    // add r1, r2, r1
    *((u32*)(r4 + 0x40)) = (0x12 << 4);
    // str r1, [sp, #0x34]
    // ldr r1, [sp, #8]
    // str r5, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // add r1, sp, #0x2c
    Sprite_SetMatrix((*((u32*)(r4 + 0x40)) << 0xc), *((u32*)(r4 + 0x3c)));
    ov96_021EB52C(*((u32*)(r4 + 0x44)), 1, 0);
    Sprite_SetDrawPriority(r6, 3);
    // ldr r0, [sp, #0x58]
    ov96_021EB4F4(0x68, 7);
    *((u32*)(r4 + 0x48)) = r0;
    ov96_021EB5B8();
    Sprite_SetAnimCtrlSeq(0);
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // add r1, sp, #0x20
    // str r5, [sp, #0x20]
    Sprite_SetMatrix(r6);
    Sprite_SetDrawPriority(r6, 4);
    Sprite_SetAffineOverwriteMode(r6, 2);
    // ldr r0, [sp, #0x58]
    ov96_021EB4F4(0x69, 8);
    *((u32*)(r4 + 0x4c)) = r0;
    ov96_021EB5B8();
    Sprite_SetAnimCtrlSeq(0);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // str r5, [sp, #0x14]
    // add r1, sp, #0x14
    Sprite_SetMatrix(r6);
    ov96_021EB52C(*((u32*)(r4 + 0x4c)), 1, 1);
    Sprite_SetDrawPriority(r6, 2);
    *((u32*)(r4 + 0xc)) = (0xfe << 0x16);
}




void ov96_021FA340(void) {
}




void ov96_021FA34C(void) {
    // str r1, [sp, #4]
    _fls(*((u32*)(r2 + 0xc)), *((u32*)(r2 + 0x50)));
    _fadd(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x54)));
    *((u32*)(r4 + 0xc)) = r0;
    _fgr(*((u32*)(r4 + 0x50)));
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x50));
    // add r3, #0x24
    ov96_021FA7BC(r5, *((u32*)(r6 + 4)), *((u8*)(r4 + 0x18)), r4);
    // str r0, [sp, #8]
    // add r0, #0x58
    // ldr r6, [sp, #8]
    ov96_021FA340(r4, r6);
    ov96_021FBEA0();
    // add r1, sp, #0x1c
    ov96_021FBF5C(r7);
    ov96_021EAF8C(*((u32*)(r4 + 0x24)));
    // add r1, r2, r1
    // sub r0, r1, r0
    // add r1, sp, #0x1c
    ov96_021FAB04((0x11 << 4), *((u32*)(r4 + 0x3c)));
    // str r0, [sp, #8]
    ov96_021FBCB8(r5, r4);
    ov96_021EB5B8(*((u32*)(r4 + 0x44)));
    Sprite_SetDrawFlag(1);
    // ldr r0, [sp, #8]
    Sprite_SetAnimCtrlSeq(r6, 0);
    Sprite_SetAnimCtrlSeq(r6, 1);
    // add r0, #0x58
    // add r0, #0x60
    // strh r1, [r0]
    // add r0, #0x62
    // add r0, #0x62
    // strh r1, [r0]
    _fadd(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
    _ffix();
    _fflt();
    _fsub(r6, r0);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, r0, r7
    // strh r0, [r4]
    // ldr r0, [sp, #4]
    ov96_021FB6B4(*((u16*)r4), *((u16*)r4), *((u8*)(r4 + 0x18)));
    // ldr r0, [sp, #4]
    ov96_021FB6C8(r4);
    // sub r0, r0, r7
    *((u16*)(r4 + 4)) = *((u16*)(r4 + 4));
    // add r0, r1, r0
    *((u16*)(r4 + 4)) = (2 << 8);
    // add r1, r1, r0
    *((u16*)(r4 + 6)) = *((u16*)(r4 + 4));
    // add r0, #0xf0
    // add r0, r1, r0
    *((u16*)(r4 + 6)) = (0x11 << 4);
    ov96_021FA340(r4, 0);
    ov96_021FBEFC(r7);
    // ldr r0, [sp, #4]
    // add r0, #0xdc
    ov96_021FC6EC(*((u32*)r0), *((u8*)(r4 + 0x18)), r7);
    // add r1, #0x24
    // add r2, #0xc
    ov96_021FA83C(*((u8*)(r4 + 0x18)), r4, r4);
    *((u32*)(r4 + 0x28)) = 3;
    *((u32*)(r4 + 0x28)) = 4;
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    // sub r0, #0x80
    *((u32*)(r4 + 0xc)) = (0xfe << 0x16);
    *((u32*)(r4 + 0x10)) = 0;
    ov96_021EAC0C(*((u32*)(r4 + 0x24)), 1, *((u32*)(r4 + 0x3c)));
    ov96_021EB5B8(*((u32*)(r4 + 0x4c)));
    Sprite_SetAnimCtrlSeq(0);
    // ldr r0, [sp, #4]
    ov96_021FAB24(*((u32*)(r0 + 4)), r4);
    // add r1, #0x60
    // add r1, #0x62
    ov96_021FA340(r4, 0);
    // str r0, [sp, #0xc]
    ov96_021FBEA0();
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x14
    ov96_021FBF5C();
    ov96_021EAF90(r7);
    // str r0, [sp, #0x10]
    ov96_021EAF8C(r7);
    // add r2, r2, r0
    // ldr r0, [sp, #0x10]
    // sub r0, r2, r0
    // add r2, sp, #0x14
    ov96_021FAAE0((0x11 << 4), ((r0 << 0x18) >> 0x18), *((u32*)(r4 + 0x3c)));
    // ldr r0, [sp, #0xc]
    ov96_021FBEA4();
    sub_0200606C(0x000008A5, *((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), *((u8*)(r4 + 0x18)));
    // ldrsb r1, [r1, r2]
    sub_020061D0(*((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), ov96_0221DC28, *((u8*)(r4 + 0x18)));
    // add r0, #0x60
    // add r0, #0x62
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), *((u8*)(r4 + 0x18)), 2);
    // add r1, #0x30
    // strb r0, [r1]
    *((u32*)(r4 + 0x2c)) = 1;
    ov96_021FBCB8(r5, r4);
    *((u32*)(r4 + 0xc)) = (0x3f << 0x18);
    *((u8*)(r4 + 9)) = 0;
    *((u32*)(r4 + 0x28)) = 2;
    // add r1, #0x31
    // strb r0, [r1]
    // add r1, #0x32
    // strb r0, [r1]
    *((u32*)(r4 + 0x2c)) = 4;
    ov96_021EB5B8(*((u32*)(r4 + 0x4c)), r4);
    Sprite_SetAnimCtrlSeq(0);
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), *((u8*)(r4 + 0x18)), 1);
    // add r1, #0x60
    // strh r0, [r1]
    // add r1, #0x62
    // strh r0, [r1]
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #4]
    *((u16*)(r4 + 2)) = *((u32*)(1 + (0x23 << 4)));
    sub_0200606C(0x000008AB, *((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), *((u8*)(r4 + 0x18)));
    // ldr r0, [sp, #4]
    // strh r2, [r0, r1]
    // ldr r0, [sp, #4]
    ov96_021FAB24(*((u32*)(r0 + 4)), r4, 0x1e);
}




void ov96_021FA6D0(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    System_GetTouchNew((0 - 1));
    // ldr r0, [sp, #4]
    ov96_021E5F24();
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r0 << 0x18) >> 0x18), 3, 0);
    ov96_021FB784(r6, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // add r5, #0xe0
    // ldr r0, [sp, #8]
    // add r3, sp, #0x10
    // ldr r0, [sp, #4]
    ov96_021FA34C(((0 + 1) << 0x18), r6, r6, 0);
    // add r5, #0x6c
    // add r0, #0xe6
    // and r0, r1
    // str r0, [r2]
    // and r3, r1
    *((u32*)(0x04000010 + 4)) = (*((u16*)(r6 + 0x00000152)) << 0x10);
    // add r3, #0x6c
    // and r3, r1
    *((u32*)(0x04000010 + 8)) = (*((u16*)(r6 + 0x00000152)) << 0x10);
    // add r2, #0xe4
    // and r3, r1
    // str r3, [r2]
    // add r0, #0x6a
    // and r3, r1
    *((u32*)(0x04001010 + 4)) = (*((u16*)(r6 + (0x00000152 - 2))) << 0x10);
    // and r0, r1
    *((u32*)(0x04001010 + 8)) = (*((u16*)(r6 + 0x00000152)) << 0x10);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}




void ov96_021FA7BC(void) {
    // add r0, #0x34
    // add r6, r1, r5
    sub_0200606C(0x0000060A, *((u8*)(ov96_0221DC2C + r2)));
    ov96_021E5F24(r7);
    // str r0, [sp]
    ov96_021E8228(r7, ((r0 << 0x18) >> 0x18), r5, 2);
    // add r6, r1, r5
    sub_0200606C(0x000008AA, *((u8*)(ov96_0221DC2C + r5)));
    // ldrsb r1, [r1, r5]
    sub_020061D0(*((u8*)r6), ov96_0221DC28);
    *((u32*)(r4 + 4)) = 1;
    *((u8*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 8)) = 1;
    // add r4, #0x14
    // add r1, #0x10
    ov96_021EAE9C(*((u32*)r4), r4, r4);
}




void ov96_021FA83C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FA856: ; jump table
    *((u8*)(r1 + 0xc)) = (*((u8*)(r1 + 0xc)) + 1);
    // add r0, #0x34
    // add r5, r0, r1
    // add r1, r3, r5
    // ldrsb r1, [r2, r1]
    // sub r5, r2, r1
    ov96_021FB8FC(r1, 0, *((u32*)(r1 + 0x14)), ov96_0221C55C);
    ov96_021EAE4C(*((u32*)r4), *((u32*)(r4 + 0x10)), r5);
    ov96_021FB8B4(r4);
    ov96_021EAD88(*((u32*)r4), *((u32*)(r4 + 0x10)), r5, 0);
    *((u32*)(r4 + 8)) = 2;
    *((u8*)(r4 + 0xc)) = 0;
    // add r0, #0x34
    ov96_021EAB94(*((u32*)r4), 0);
    *((u32*)(r4 + 8)) = 3;
    *((u8*)(r4 + 0xc)) = 0;
    // add r0, #0x34
    ov96_021EAB94(*((u32*)r4), 1);
    sub_0200606C(0x000008AA, *((u8*)(ov96_0221DC2C + r5)));
    // ldrsb r1, [r1, r5]
    sub_020061D0(*((u8*)(r6 + r5)), ov96_0221DC28);
    // add r0, #0x34
    // add r6, r0, r1
    // add r1, r3, r6
    // ldrsb r1, [r2, r1]
    // sub r6, r2, r1
    ov96_021FB8FC(r4, 1, *((u32*)(r4 + 0x14)), ov96_0221C589);
    ov96_021EAE4C(*((u32*)r4), *((u32*)(r4 + 0x10)), r6);
    ov96_021FB8B4(r4);
    ov96_021EAD88(*((u32*)r4), *((u32*)(r4 + 0x10)), r6, 0);
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 8)) = 0;
    *((u8*)(r4 + 0xc)) = 0;
    ov96_021EAD88(*((u32*)r4), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)), 0);
    // add r0, #0x34
    sub_0200606C(0x000008A8, *((u8*)(ov96_0221DC2C + r5)));
    // ldrsb r1, [r1, r5]
    sub_020061D0(*((u8*)(r6 + r5)), ov96_0221DC28);
    ov96_021FB8B4(r4, 0);
    *((u16*)(r4 + 0x3c)) = 0;
    *((u16*)(r4 + 0x3e)) = 0;
    *((u16*)(r4 + 0x3c)) = 0;
    GF_AssertFail(0);
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FA9CC: ; jump table
    *((u8*)(r4 + 0xe)) = 3;
    *((u8*)(r4 + 0xe)) = 2;
    *((u8*)(r4 + 0xe)) = 4;
    *((u8*)(r4 + 0xe)) = 1;
    ov96_021EAC0C(*((u32*)r4), *((u8*)(r4 + 0xe)));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u8*)(r4 + 0xd)) = 0x1e;
    *((u8*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 8)) = 0;
    ov96_021EAC0C(*((u32*)r4), 1, ((*((u8*)(r4 + 0xd)) + 1) >> 0x1f));
    // sub r2, #0x78
    // sub r2, r0, r1
    // add r0, r0, r2
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x18));
    // add r0, r0, r2
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x1c));
    // str r3, [sp]
    ov96_021EAED4(*((u32*)r4), 0, (1 - 1), 1);
    *((u16*)(r4 + 0x3c)) = 0;
    *((u16*)(r4 + 0x3e)) = 0;
    ov96_021EB5B8(*((u32*)(r4 + 0x20)));
    Sprite_GetMatrixPtr();
    // add r3, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp, #0x1c]
    Sprite_SetMatrix(r5, r3, r3);
    // add r1, sp, #8
    // add r2, sp, #4
    ov96_021EAE9C(*((u32*)r4));
    ov96_021EB5B8(*((u32*)(r4 + 0x28)));
    Sprite_GetMatrixPtr();
    // add r3, sp, #0xc
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    Sprite_SetMatrix(r4, r3, r3);
}




void ov96_021FAAE0(void) {
    // add r4, r0, r1
    // sub r1, r0, r1
    // ldrsh r3, [r2, r3]
    // ldrsh r0, [r2, r0]
    // add r0, r3, r0
}




void ov96_021FAB04(void) {
    // ldrsh r3, [r1, r2]
    // ldrsh r1, [r1, r2]
    // add r1, r3, r1
    // sub r0, #0x18
}




void ov96_021FAB24(void) {
    // add r1, r2, r1
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(((*((u16*)(r1 + 0x14)) << 0x18) >> 0x18), 2, ((((0xa * *((u8*)(r1 + 0x18))) + 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), 3, ((((0xa * *((u8*)(r4 + 0x18))) + 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #9
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), r7, (((0xa * *((u8*)(r4 + 0x18))) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), 2, ((((0xa * *((u8*)(r4 + 0x18))) + 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), 3, ((((0xa * *((u8*)(r4 + 0x18))) + 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #9
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), r7, (((0xa * *((u8*)(r4 + 0x18))) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x1c)) = 1;
    *((u8*)(r4 + 0x1a)) = 0xff;
    // sub r1, #0x10
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // sub r0, r0, r1
    // ror r0, r2
    // add r1, r1, r0
    // sub r0, r0, r1
    // sub r0, r0, r1
    // ror r0, r2
    // add r0, r1, r0
    // bpl _021FACA0
    // add r0, #0x40
    *((u8*)(r4 + 0x1b)) = ((0x40 << 0x1a) - 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), 0x60, ((((0xa * *((u8*)(r4 + 0x18))) + 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), 0x61, ((((0xa * *((u8*)(r4 + 0x18))) + 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #9
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), 0x62, (((0xa * *((u8*)(r4 + 0x18))) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), 0x60, ((((0xa * *((u8*)(r4 + 0x18))) + 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), 0x61, ((((0xa * *((u8*)(r4 + 0x18))) + 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #9
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), 0x62, (((0xa * *((u8*)(r4 + 0x18))) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x1c)) = 2;
    // sub r1, #0x10
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // sub r0, r0, r1
    // ror r0, r2
    // add r1, r1, r0
    // sub r0, r0, r1
    // sub r0, r0, r1
    // ror r0, r2
    // add r0, r1, r0
    // bpl _021FADF2
    // add r0, #0x40
    *((u8*)(r4 + 0x1b)) = ((0x40 << 0x1a) - 2);
    // add r0, r2, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), 2, ((((0xa * *((u8*)(r4 + 0x18))) + 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), 3, ((((0xa * *((u8*)(r4 + 0x18))) + 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #9
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18), r7, (((0xa * *((u8*)(r4 + 0x18))) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), 2, ((((0xa * *((u8*)(r4 + 0x18))) + 2) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), 3, ((((0xa * *((u8*)(r4 + 0x18))) + 3) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, #9
    FillBgTilemapRect(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18), r7, (((0xa * *((u8*)(r4 + 0x18))) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(r5, ((*((u16*)(r4 + 0x14)) << 0x18) >> 0x18));
    ScheduleBgTilemapBufferTransfer(r5, ((*((u16*)(r4 + 0x16)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x1c)) = 3;
}




void ov96_021FAF1C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r6, #0xe0
    // strh r6, [r3]
    // add r6, #0xe8
    // add r2, #0x6c
    // ldr r0, [sp]
    // add r0, #0x28
    // str r0, [sp, #8]
    // add r0, #0x50
    // strh r1, [r5]
    // ldr r5, [sp, #8]
    // str r0, [sp, #4]
    // add r4, #0x50
    // ldr r0, [sp, #4]
    // add r4, #0x28
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // str r1, [r0]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov96_021FAFFC(void) {
    // str r0, [sp]
    // add r1, sp, #0x10
    // str r1, [sp, #8]
    // str r0, [sp, #4]
    // add r1, sp, #4
    // add r3, sp, #4
    // add r2, r3, r1
    // add r1, r0, r1
    // add r1, r7, r1
    // sub r4, r4, r5
    // ror r4, r1
    // add r1, r5, r4
    // asr r4, r1
    // and r1, r4
    // str r4, [r2]
    // str r2, [r3]
    // str r4, [r2]
    // str r2, [r3]
    // str r3, [r2]
    // ldr r0, [sp]
    // add r4, sp, #4
    // ldr r1, [sp]
    // ldr r1, [sp]
    // ldr r1, [sp]
    // add r5, #0x20
}




void ov96_021FB0F4(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #4]
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0xf0
    ov96_021E8A20();
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // strh r3, [r0, r1]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
    // strh r3, [r1, r2]
    // strb r2, [r1, r0]
    // ldr r1, [sp, #8]
    ov96_021FAFFC(*((u16*)(*((u8*)((0x000003C7 - 3) + 0x000003C6)) + (0x000003C6 - 2))), *((u16*)(*((u8*)((0x000003C7 - 3) + 0x000003C6)) + (0x000003C6 - 2))), 1, 0);
    // ldr r0, [sp, #4]
    // add r5, r0, r1
    ov96_021EB5B8(*((u32*)(r5 + (0x4a << 2))), (0 * 0x6c));
    ov96_021EB52C(*((u32*)(r5 + (0x4a << 2))), 1, 1);
    // ldr r0, [sp]
    ov96_021E5F24();
    // add r0, r0, r1
    // add r1, r4, r0
    // add r0, r1, r0
    // ldr r0, [sp]
    ov96_021E5F24((((r0 << 1) >> 0x1f) << 0x17), (r0 << 1));
    // add r0, r0, r1
    // add r0, r4, r0
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // ldr r0, [sp, #8]
    // add r0, r0, r6
    // asr r1, r0
    // and r0, r1
    GF_AssertFail((0xf << 0x18), *((u8*)(0x1f + 0x1c)), *((u8*)(0x1f + 0x1c)));
    // str r1, [r5, r0]
    _fmul(0x45800000, *((u32*)(r5 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x30]
    _fmul(0x45800000, *((u32*)(r5 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x34]
    _fmul(0x45800000, *((u32*)(r5 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x38]
    // strh r6, [r5, r0]
    // add r1, sp, #0x30
    Sprite_SetAffineScale(r7);
    Sprite_SetAnimCtrlSeq(r7, (r6 - 1));
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // strh r2, [r0, r1]
    // ldr r1, [sp, #8]
    ov96_021FAFFC(((r4 + 1) << 0x18), (((r4 + 1) << 0x18) - 2), 0);
    // ldr r0, [sp, #4]
    // add r4, r0, r1
    ov96_021EB5B8(*((u32*)(r4 + (0x4a << 2))), (0 * 0x6c));
    // ldr r0, [sp]
    ov96_021E5F24();
    // add r0, r0, r1
    // add r1, r7, r0
    // add r0, r1, r0
    // ldr r0, [sp]
    ov96_021E5F24((((r0 << 1) >> 0x1f) << 0x17), (r0 << 1));
    // add r0, r0, r1
    // add r0, r7, r0
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // ldr r0, [sp, #8]
    // add r0, r0, r5
    // asr r1, r0
    // and r0, r1
    GF_AssertFail((0xf << 0x18), *((u8*)(0x1f + 0x1c)), *((u8*)(0x1f + 0x1c)));
    // add r0, #0xe8
    Sprite_GetMatrixPtr(r6);
    // add r2, sp, #0x24
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // mov r1, ip
    // str r0, [r2]
    // str r0, [sp, #0x28]
    Sprite_SetMatrix(r6, r0);
    // add r1, #0xb
    Sprite_SetAnimCtrlSeq(r6, r5);
    // ldrsh r0, [r4, r0]
    // strh r5, [r4, r0]
    // add r0, #0xe8
    // str r1, [r4, r0]
    _fmul(0x45800000, *((u32*)(r4 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x18]
    _fmul(0x45800000, *((u32*)(r4 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x1c]
    _fmul(0x45800000, *((u32*)(r4 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x20]
    // add r1, sp, #0x18
    Sprite_SetAffineScale(r6);
    Sprite_SetAnimCtrlSeq(r6, (r5 - 1));
    // ldr r0, [sp, #4]
    // add r4, r0, r1
    ov96_021EB5B8(*((u32*)(r4 + (0x4a << 2))), (0 * 0x6c));
    Sprite_GetScalePtr();
    _f2d(*((u32*)(r4 + (0x51 << 2))), *((u32*)r0));
    _dsub(0x9999999A, 0x3FB99999);
    _d2f();
    // str r0, [r4, r1]
    // str r1, [r4, r0]
    _fmul(r7, *((u32*)(r4 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0xc]
    _fmul(r7, *((u32*)(r4 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x10]
    _fmul(r7, *((u32*)(r4 + (0x51 << 2))));
    _ffix();
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    Sprite_SetAffineScale(r6);
    // ldr r0, [sp, #4]
    ov96_021FB994(((r5 + 1) << 0x18));
}




void ov96_021FB400(void) {
    // str r0, [sp, #8]
    // add r0, #0x28
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x18
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // add r0, #0x50
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r5, sp, #0x18
    // add r7, r1, r0
    // add r0, sp, #0x18
    // add r4, r0, r2
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r5, [r4]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x28
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // add r5, sp, #0x18
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // add r0, r7, r4
    // ldr r0, [sp, #0x14]
}




void ov96_021FB514(void) {
    // str r2, [r0]
    // str r0, [r1]
    // str r2, [r0]
    // str r0, [r1]
    // str r2, [r0]
    // str r0, [r1]
}




void ov96_021FB56C(void) {
    // str r2, [r0]
    // str r0, [r1]
    // str r2, [r0]
    // str r0, [r1]
    // str r2, [r0]
    // str r0, [r1]
}




void ov96_021FB5C8(void) {
    // sub r3, r3, r7
    // ror r3, r2
    // add r2, r7, r3
    // lsl r3, r2
    // add r5, #0x1c
    // strb r0, [r5, r1]
}




void ov96_021FB60C(void) {
    // add r0, #0x6c
}




void ov96_021FB630(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r4, #0x50
    // add r0, r4, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // sub r1, r1, r0
    // add r5, r1, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r0, #0x28
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void ov96_021FB6B4(void) {
    // add r1, r1, r3
    // add r0, #0xd8
}




void ov96_021FB6C8(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FB702: ; jump table
    GF_AssertFail(4, *((u32*)(r1 + 0x28)), ov96_0221C428);
    // add r1, #0x6a
    // add r1, #0x6a
    // strh r2, [r1]
    // add r1, #0x6a
    // add r0, sp, #0
    // str r1, [r0]
    *((u32*)(8 + 4)) = 0;
    *((u32*)(8 + 8)) = 0;
    // add r0, #0x6a
    // strh r1, [r0]
    LCRandom(r4, 0, (*((u16*)r4) + 1));
    _s32_div_f(7);
    // add r5, #0xdc
    // add r0, sp, #0xc
    // add r0, r2, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0
    ov96_021FC698(*((u32*)r5), *((u8*)(r4 + 0x18)), *((u32*)(*((u8*)(r4 + 0x18)) + (*((u8*)(r4 + 0x18)) << 2))));
}




void ov96_021FB784(void) {
    // ldmia r6!, {r0, r1}
    // add r5, sp, #0
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // sub r1, #0x18
    // add r1, #0x30
}




void ov96_021FB7C8(void) {
    // add r1, #8
    AddWindow(*((u32*)(r0 + 4)), r0, ov96_0221C3FC);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 4)), 3, 0, 1);
    LoadFontPal0(0, (0x1e << 4), *((u32*)r4));
    // add r4, #8
    FillWindowPixelBuffer(r4, 0);
}




void ov96_021FB808(void) {
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)r0));
    MessageFormat_New(*((u32*)r5));
    _s32_div_f(r6, 0x1e);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r4, 0, r0, 3);
    _s32_div_f(r6, 0x1e);
    _s32_div_f((0xa * r1), 0x1e);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(r4, 1, r0, 1);
    ReadMsgData_ExpandPlaceholders(r4, r7, 0x9c, *((u32*)r5));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #8
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r0, 0);
    String_Delete(r6);
    MessageFormat_Delete(r4);
    DestroyMsgData(r7);
    // add r5, #8
    CopyWindowToVram(r5);
}




void ov96_021FB8B4(void) {
    _dflt(0, 0);
    _dmul(0, (1 << 0x1e), r0, r1);
    _dadd(0, 0x40590000, r0, r1);
    _ddiv(0, 0x40590000);
    _d2f();
    ov96_021EB10C(*((u32*)r4), r0, r0);
}




void ov96_021FB8FC(void) {
    // sub r0, r1, r0
    _dflt((((*((u8*)(r0 + 0xc)) - 1) << 0x18) >> 0x18), *((u16*)(r0 + 0x38)));
    _dmul(0, 0x40240000, r0, r1);
    _dsub(0, 0x40590000, r0, r1);
    _d2f();
    _dfltu((((*((u8*)(r4 + 0xc)) - 1) << 0x18) >> 0x18));
    _dmul(0, 0x40240000, r0, r1);
    _dsub(0, 0x40590000, r0, r1);
    _d2f();
    _fls(0);
    _f2d(0x41200000);
    _ddiv(0, 0x40590000);
    _d2f();
    ov96_021EB10C(*((u32*)r4), r0, r0);
}




void ov96_021FB994(void) {
    // ldr r0, [r5, r0]
    // mul r0, r1
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}




void ov96_021FBA3C(void) {
    // str r3, [sp, #8]
    // add r1, sp, #0x18
    // str r2, [sp, #4]
    // add r0, r6, r0
    // add r4, r0, r1
    // ldr r5, [sp, #0x28]
    _fls(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x10)), *((u8*)(r1 + 0x14)));
    _fadd(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 8)) = r0;
    _fgr(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0x10));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) - 1);
    // strb r0, [r4]
    // add r0, #0xd8
    ov96_021FC164(*((u32*)r6), r5, *((u32*)(r4 + 0x20)));
    // mvn r1, r1
    // str r0, [sp, #0xc]
    LCRandom(*((u32*)(r4 + 0x24)));
    _s32_div_f(0x64);
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    _fadd(*((u32*)(r4 + 0x10)), *((u32*)(ov96_0221C444 + ((*((u8*)(r4 + 2)) - 1) << 2))), ((*((u8*)(r4 + 2)) - 1) << 2));
    *((u32*)(r4 + 8)) = r0;
    // str r0, [sp]
    // ldr r1, [sp, #8]
    ov96_021E8228(r7, r5, 6);
    // str r0, [sp]
    // ldr r1, [sp, #8]
    ov96_021E8228(r7, r5, 2);
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = 0x1e;
    *((u8*)(r4 + 2)) = 0;
    *((u32*)(r4 + 8)) = (0x3f << 0x18);
    // str r3, [sp]
    // ldr r1, [sp, #8]
    ov96_021E8228(r7, r5, 1);
    // str r0, [sp]
    // ldr r1, [sp, #8]
    ov96_021E8228(r7, r5, 2);
    // ldr r0, [sp, #0xc]
    *((u32*)(r4 + 0x24)) = r0;
    _fadd(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)));
    // str r0, [sp, #0x10]
    _ffix();
    _fflt();
    // ldr r0, [sp, #0x10]
    _fsub(r0);
    *((u32*)(r4 + 0xc)) = r0;
    // add r2, r0, r7
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x20)) = r2;
    // strh r2, [r0, r1]
    // ldr r2, [sp, #4]
    // add r3, r2, r1
    *((u16*)(r3 + 0x10)) = 1;
    *((u16*)(r3 + 0xa)) = *((u32*)(r6 + (0x23 << 4)));
    *((u32*)(r4 + 0x1c)) = *((u32*)(r6 + (0x23 << 4)));
    *((u32*)(r4 + 0x18)) = 1;
    PlaySE(0x000008A1, *((u32*)(r6 + (0x23 << 4))), *((u32*)(r6 + (0x23 << 4))));
}




void ov96_021FBBB4(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    PokeathlonCourse_GetParticipantCount();
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // sub r1, r1, r0
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r0, r5, r0
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #4]
    // add r4, r0, r2
    // ldr r0, [sp]
    ov96_021E60D8(0x28, (((r1 << 1) << 0x18) >> 0x18), 0);
    // add r0, r6, r0
    _fflt(*((u32*)((*((u8*)(r0 + 1)) << 2) + 0x3c)));
    _fdiv(0x41200000);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, r6, r0
    _fflt(*((u32*)((*((u8*)(r7 + 4)) << 2) + 0x28)));
    _fdiv(0x42C80000);
    *((u32*)(r4 + 0x14)) = r0;
    LCRandom();
    _s32_div_f(6);
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FBC48: ; jump table
    *((u8*)(r4 + 3)) = 0xa;
    *((u8*)(r4 + 4)) = 0x32;
    *((u8*)(r4 + 3)) = 0x14;
    *((u8*)(r4 + 4)) = 0x32;
    *((u8*)(r4 + 3)) = 0x1e;
    *((u8*)(r4 + 4)) = 0x3c;
    *((u8*)(r4 + 3)) = 0x14;
    *((u8*)(r4 + 4)) = 0x46;
    *((u8*)(r4 + 3)) = 0x1e;
    *((u8*)(r4 + 4)) = 0x46;
    *((u8*)(r4 + 3)) = 0x28;
    *((u8*)(r4 + 4)) = 0x50;
    GF_AssertFail(0x50);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov96_021FBCB8(void) {
    ov96_021EB5B8(*((u32*)(r1 + 0x4c)));
    *((u8*)(r4 + 9)) = (*((u8*)(r4 + 9)) + 1);
    sub_0200606C(0x000008A6, *((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), *((u8*)(r4 + 0x18)));
    // ldrsb r1, [r1, r2]
    sub_020061D0(*((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), ov96_0221DC28, *((u8*)(r4 + 0x18)));
    ov96_021EAC0C(*((u32*)(r4 + 0x24)), 5);
    Sprite_SetAnimCtrlSeq(r6, 1);
    sub_0200606C(0x000008A9, *((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), *((u8*)(r4 + 0x18)));
    // ldrsb r1, [r1, r2]
    sub_020061D0(*((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), ov96_0221DC28, *((u8*)(r4 + 0x18)));
    ov96_021EAC0C(*((u32*)(r4 + 0x24)), 6);
    Sprite_SetAnimCtrlSeq(r6, 2);
    // add r0, #0xfe
    sub_0200606C(0x000008A7, *((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), *((u8*)(r4 + 0x18)));
    // ldrsb r1, [r1, r2]
    sub_020061D0(*((u8*)(ov96_0221DC2C + *((u8*)(r4 + 0x18)))), ov96_0221DC28, *((u8*)(r4 + 0x18)));
    _f2d(*((u32*)(r4 + 0xc)));
    _dls(0, 0x40240000);
    _fadd(*((u32*)(r4 + 0x50)), *((u32*)(ov96_0221C444 + ((*((u8*)(r4 + 9)) - 1) << 2))), ((*((u8*)(r4 + 9)) - 1) << 2));
    *((u32*)(r4 + 0xc)) = r0;
    GF_AssertFail();
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), *((u8*)(r4 + 0x18)), 6);
}




void ov96_021FBDBC(void) {
    // str r2, [r0, r1]
    // add r1, #0xe8
    // str r2, [r0, r1]
    // add r3, #0x6c
}




void ov96_021FBDEC(void) {
    // add r0, r1, r0
}




void ov96_021FBE20(void) {
}




void ov96_021FBE3C(void) {
}




void ov96_021FBE44(void) {
    // add r0, r0, r1
}




void ov96_021FBE4C(void) {
}




void ov96_021FBE54(void) {
    // str r1, [r4]
    // str r1, [r4]
}




void ov96_021FBE9C(void) {
}




void ov96_021FBEA0(void) {
}




void ov96_021FBEA4(void) {
}




void ov96_021FBEDC(void) {
}




void ov96_021FBEFC(void) {
    // str r0, [sp]
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
}




void ov96_021FBF5C(void) {
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // sub r1, #0x20
    // strh r1, [r4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // sub r0, #0x10
}




void ov96_021FBF90(void) {
    // add r1, r6, r4
    // str r2, [sp]
    ov96_021FBE44(*((u32*)(r0 + (r1 << 3))), ((*((u32*)(r1 + 4)) << 0x18) >> 0x18));
    ov96_021FBE9C();
    GF_AssertFail();
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // str r1, [r0, r4]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // add r1, sp, #4
    ov96_021FBEDC(r7, 0x1e, ((*((u32*)((r6 + 4) + r4)) + 1) << 0x1e), ov96_0221C5B8);
    ov96_021FBE54(r7, 1);
}




void ov96_021FC028(void) {
    Heap_Alloc(0x00000C24);
    // str r0, [sp]
    MI_CpuFill8(0, 0x00000C24);
    // ldr r5, [sp]
    ov96_021FBE20(4, r6);
    // str r0, [r5]
    // add r5, #8
    // ldr r0, [sp]
}




void ov96_021FC05C(void) {
    // add r5, #8
}




void ov96_021FC07C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, #8
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov96_021FC0D0(void) {
}




void ov96_021FC0E4(void) {
    // add r0, #0x18
}




void ov96_021FC0E8(void) {
    // add r0, r0, r1
}




void ov96_021FC0F4(void) {
}




void ov96_021FC0FC(void) {
    // asr r2, r1, #2
    // add r2, r1, r2
    // asr r4, r2, #3
    // sub r2, r1, r2
    // add r4, r0, r4
    // add r5, r4, r1
    // add r6, r0, r4
    // str r1, [r6, r5]
    ov96_021FBF90(r2, (r4 << 3), r2);
}




void ov96_021FC144(void) {
    // add r4, #0x18
}




void ov96_021FC164(void) {
    // asr r3, r2, #2
    // add r3, r2, r3
    // asr r2, r3, #3
    // add r0, r0, r1
    // add r1, r0, r2
    // mvn r2, r2
}




void ov96_021FC188(void) {
    // str r5, [r4]
}




void ov96_021FC1A8(void) {
    // str r0, [sp]
    // add r5, #0x10
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov96_021FC214(void) {
    // add r0, #8
    // add r5, #8
}




void ov96_021FC248(void) {
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r5, r4
    // add r1, sp, #0
    // add r1, r5, r4
    // add r1, sp, #0
    // add r1, r5, r4
    // add r1, sp, #0
}




void ov96_021FC28C(void) {
    // add r1, r5, r0
    // add r4, #0xf
}




void ov96_021FC2B4(void) {
    // add r5, #0x10
}




void ov96_021FC2E0(void) {
    // add r1, r5, r4
    // add r1, r5, r4
    // add r1, r5, r4
}




void ov96_021FC314(void) {
}




void ov96_021FC320(void) {
    // add r1, #8
    // str r0, [r4, r7]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xb0
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0xb4
    // str r0, [sp, #0xc]
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xb8
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, #0xbc
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // sub r1, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021FC404(void) {
    // str r1, [sp]
    // sub r2, #0x81
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r3, #0xb0
    // str r3, [sp, #0x14]
    // add r3, #0xb4
    // str r3, [sp, #0x18]
    // add r3, #0xb8
    // str r3, [sp, #0x1c]
    // add r3, #0xbc
    // str r3, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r2, #0xe0
    // add r0, r0, r2
}




void ov96_021FC450(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #0x10]
    // add r2, r2, r3
    // add r0, sp, #0x24
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r5, [sp]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x24
    // str r0, [r5, r1]
    // add r0, sp, #0x24
    // str r0, [r5, r1]
    // add r1, #0xc
    // add r0, sp, #0x24
    // str r0, [r5, r1]
    // add r1, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r2, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x20
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x20
    // add r5, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
}




void ov96_021FC5E0(void) {
    // str r2, [r0]
    // add r2, r1, r2
}




void ov96_021FC618(void) {
}




void ov96_021FC630(void) {
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r6, r0, r2
    // add r5, r6, r0
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_021FC690(void) {
}




void ov96_021FC698(void) {
    // add r4, r5, r0
    // add r5, r4, r0
    // str r0, [r5]
}




void ov96_021FC6EC(void) {
    // add r0, r5, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // add r5, r0, r1
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #8]
    // add r0, r0, r7
    // str r0, [sp, #8]
}




void ov96_021FC758(void) {
    // str r2, [r0]
}




void ov96_021FC768(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x34]
    PokeathlonCourse_GetField1ED(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FC78E: ; jump table
    Heap_Create(0x5c, 0x90, (0x1a << 0xe));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_021FCEE0(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r4, 0x00000648);
    MI_CpuFill8(0, 0x00000648);
    BgConfig_Alloc(0x90);
    // add r1, r5, r2
    // add r2, #0x78
    // str r0, [r5]
    // add r2, r5, r2
    PokeathlonCourse_SetField3A4(r4, (0xf9 << 2), 0x78);
    ov96_021E6670(r4, 8);
    // str r0, [sp, #0xa4]
    // str r0, [sp, #0xa8]
    // str r0, [sp, #0xac]
    // str r2, [sp, #0xb0]
    // str r0, [sp]
    // add r0, sp, #0xa4
    ov96_021E92B0(0x10, 0x16, 0x90, 0x00300010);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    *((u32*)(r5 + 0x14)) = 0x90;
    FontID_Alloc(4, 0x90);
    ov96_021FCF00(*((u32*)r5));
    ov96_021FFD4C(r5);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    PokeathlonCourse_IncrementField1ED(r4);
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x34]
    ov96_021FFF3C(*((u32*)(r0 + 0x14)), *((u32*)r1), r4);
    // ldr r1, [sp, #0x34]
    // str r0, [r1, r2]
    PokeathlonCourse_GetParticipantCount(r4, (0x3e << 4));
    PokeathlonCourse_GetMode(r4);
    // ldr r0, [sp, #0x34]
    // sub r1, r1, r5
    ov96_02200E3C(*((u32*)(r0 + 0x14)), 4, r0);
    // ldr r1, [sp, #0x34]
    // str r0, [r1, r2]
    ov96_021E9A78(*((u32*)(r1 + 0x14)), 0x000002BF, 1);
    // ldr r1, [sp, #0x34]
    // str r0, [r1, r2]
    PokeathlonCourse_IncrementField1ED(r4, (0xf1 << 2));
    // add r3, sp, #0x98
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #0x34]
    ov96_021EB180(*((u32*)(*((u32*)ov96_0221C5E4) + 0x14)), r3, r3);
    // ldr r1, [sp, #0x34]
    *((u32*)(r1 + 0x18)) = r0;
    // str r0, [sp]
    ov96_021EB5C8(*((u32*)(r1 + 0x18)), 0, 0, 0);
    // ldr r0, [sp, #0x34]
    ov96_021EB5E8(*((u32*)(r0 + 0x18)));
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    ov96_021EA854(*((u32*)(r0 + 0x14)), 0xc, 4, *((u32*)(r3 + (0xf1 << 2))));
    // ldr r1, [sp, #0x34]
    // str r0, [r1, r2]
    ov96_021EB29C(*((u32*)(r1 + 0x18)), 0, 0x65);
    // ldr r0, [sp, #0x34]
    ov96_021EB29C(*((u32*)(r0 + 0x18)), 1, 0x66);
    // ldr r0, [sp, #0x34]
    ov96_021EB29C(*((u32*)(r0 + 0x18)), 2, 0x67);
    // ldr r0, [sp, #0x34]
    ov96_021EB29C(*((u32*)(r0 + 0x18)), 3, 0x68);
    // ldr r0, [sp, #0x34]
    // add r1, #0x1c
    // ldr r1, [sp, #0x34]
    ov96_022000E4(*((u32*)(r0 + r5)), *((u32*)(r5 + 0x18)));
    // ldr r0, [sp, #0x34]
    ov96_021FD0E4(*((u32*)(r0 + 0x18)));
    // ldr r0, [sp, #0x34]
    ov96_021EB3A4(*((u32*)(r0 + 0x18)));
    // ldr r2, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    ov96_021E6290(r4, 0, *((u32*)(r2 + r5)), *((u32*)(r5 + 0x18)));
    Sprite_SetDrawPriority(*((u32*)r0), 1);
    // ldr r0, [sp, #0x34]
    ov96_021FD128(*((u32*)(r0 + 0x18)));
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x34]
    // add r3, #0x1c
    // ldr r2, [sp, #0x34]
    // sub r3, #0x1c
    ov96_02200180(*((u32*)(r0 + r5)), *((u32*)(r1 + 0x18)), *((u32*)(r2 + r5)), r5);
    PokeathlonCourse_IncrementField1ED(r4);
    // add r0, sp, #0x154
    // add r5, sp, #0x198
    // str r0, [sp, #0x1c]
    // add r6, sp, #0x68
    _s32_div_f(0, 3);
    // str r1, [sp, #0x18]
    _s32_div_f(r7, 3);
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0x18]
    ov96_021E6168(r4, r5);
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0x18]
    ov96_021E60C0(r4);
    ov96_021E6108();
    // ldr r1, [sp, #0x1c]
    *((u32*)(r1 + 0x14)) = r0;
    // strh r0, [r6]
    // add r5, #0x10
    *((u16*)(r6 + 2)) = *((u16*)(r5 + 2));
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x34]
    // add r1, sp, #0x68
    ov96_022002F8(*((u32*)((r1 + 4) + (0x3e << 4))), (0x3e << 4));
    ov96_021E5F24(r4);
    // ldr r0, [sp, #0x34]
    // add r1, r3, r1
    // add r2, sp, #0x198
    // add r1, r2, r1
    ov96_022003E8(*((u32*)((r0 << 0x18) + (0x3e << 4))), ((((r0 << 0x18) >> 0x18) << 1) << 4), ((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x34]
    ov96_02200454(*((u32*)(r0 + (0x3e << 4))), 0, 1);
    // ldr r0, [sp, #0x34]
    ov96_02200454(*((u32*)(r0 + (0x3e << 4))), 1, 2);
    // str r0, [sp, #0x158]
    // str r1, [sp, #0x154]
    // str r1, [sp, #0x15c]
    // str r0, [sp, #0x160]
    // str r0, [sp, #0x164]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x34]
    // add r2, sp, #0x198
    // add r3, sp, #0x154
    ov96_021EA8A8(*((u32*)(1 + (0xf2 << 2))), 0xc);
    ov96_021E5F24(r4);
    // ldr r0, [sp, #0x34]
    ov96_02200B04(*((u32*)(r0 + (0x3e << 4))), r0, (0x3e << 4));
    PokeathlonCourse_IncrementField1ED(r4);
    // ldr r0, [sp, #0x34]
    ov96_021EAA00(*((u32*)(r0 + (0xf2 << 2))), (0xf2 << 2));
    ov96_021E5F24(r4);
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)r0));
    PokeathlonCourse_SetField1F4(r4, 1);
    // add r0, sp, #0x50
    ReadWholeNarcMemberByIdPair(0xaa, 0xc);
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x40]
    // add r0, #0x30
    // str r0, [sp, #0x40]
    // ldr r1, [sp, #0x34]
    ov96_021EAA04(*((u32*)(r1 + (0xf2 << 2))), ((0 << 0x18) >> 0x18));
    _s32_div_f(r5, 3);
    // str r1, [sp, #0x14]
    ov96_021EAB38(r6, 1);
    _s32_div_f(r5, 3);
    _s32_div_f(r5, 3);
    ov96_021E60C0(r4, r7, r1);
    ov96_021E6138();
    // add r0, sp, #0x50
    // add r2, r0, r1
    // sub r1, #8
    ov96_021EAF70(r6, *((u32*)r2), *((u32*)(r2 - 4)));
    // ldr r1, [sp, #0x34]
    ov96_021EAA04(*((u32*)(r1 + (0xf2 << 2))), ((r5 << 0x18) >> 0x18));
    _s32_div_f(r5, 3);
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x40]
    // add r0, r0, r1
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x2c]
    // str r6, [r0, r1]
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x2c]
    // add r1, #0x88
    // strb r0, [r1]
    // add r7, #0x28
    ov96_021EAC0C(r6, 4);
    ov96_021EAF94(r6, 0x50, r7);
    ov96_021E6104();
    ov96_021EAF6C(r6, r0);
    // ldr r0, [sp, #0x2c]
    *((u32*)(r0 + 0x7c)) = 0;
    // add r0, #0x80
    // str r1, [r0]
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x3c]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x14]
    // add r0, sp, #0x44
    // str r0, [sp]
    // add r3, sp, #0x48
    ov96_021EB0A4(r6, 0x50, r7);
    // ldr r1, [sp, #0x48]
    // add r0, sp, #0x44
    *((u16*)(r0 + 8)) = r1;
    // ldr r1, [sp, #0x44]
    *((u16*)(r0 + 0xa)) = r1;
    // ldr r6, [sp, #0x34]
    // add r6, #0x30
    ov96_021E5F24(r4);
    // add r1, #0x80
    // asr r3, r1, #0xb
    // add r3, r1, r3
    // asr r1, r3, #0xc
    ov96_021FFB7C(r6, ((*((u32*)r6) << 0x18) >> 0x18), 0, (r3 >> 0x14));
    // add r6, #0xd4
    // add r0, sp, #0xb4
    ReadWholeNarcMemberByIdPair(0xaa, 2);
    // ldr r0, [sp, #0x34]
    // strh r1, [r0, r2]
    // ldr r1, [sp, #0x34]
    ov96_02200A64(*((u32*)(r0 + (0x3e << 4))), *((u16*)((0x3e << 4) + (0x19 << 6))), (0x19 << 6));
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x24]
    // add r6, #0x30
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0xb4
    // str r6, [sp]
    ov96_021FEFE8(r4, (((0x3b << 4) << 0x18) >> 0x18), ((0 << 0x18) >> 0x18));
    ov96_021E5F24(r4);
    // ldr r1, [sp, #0x34]
    // ldr r1, [sp, #0x28]
    ov96_02200E78(*((u32*)(r1 + (0xf7 << 2))), ((r1 << 0x18) >> 0x18), r6);
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x20]
    // strb r2, [r1, r0]
    // ldr r0, [sp, #0x24]
    // add r6, #0xd4
    // str r0, [sp, #0x24]
    // add r0, #0xd4
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x28]
    ov96_021E5F24(r4);
    PokeathlonCourse_GetDataCopyArea(r4);
    // add r0, #0x28
    ov96_021E8A20();
    // ldr r0, [sp, #0x34]
    ov96_021FDA30(r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x4c
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    ov96_021E634C(r4, 0, *((u32*)(r2 + (0xf1 << 2))), *((u32*)((0xf1 << 2) + 0x18)));
    // ldr r0, [sp, #0x34]
    ov96_021FD060();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    sub_0203A994(1);
    PokeathlonCourse_IncrementField1ED(r4);
    ov96_021E5F24(r4);
    LCRandom();
    _s32_div_f(0xa);
    // ldr r0, [sp, #0x34]
    // add r0, r0, r5
    ReadWholeNarcMemberByIdPair((r1 << 0x18), 0xe5, ((r1 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x34]
    // sub r1, #8
    // ldr r1, [sp, #0x34]
    // add r1, r1, r5
    ov96_02200E80(*((u32*)(r0 + r5)), r5);
    PokeathlonCourse_IncrementField1ED(r4);
    GF_heap_c_dummy_return_true(0x5c);
    GF_AssertFail();
}




u32 ov96_021FCD74(void) {
}




void ov96_021FCD84(void) {
    PokeathlonCourse_GetGraphicsSystem();
    ov96_021E9510();
    PokeathlonCourse_GetField5F0_AtIndex(r5, ((0 << 0x18) >> 0x18));
    // str r0, [sp]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // asr r0, r1, #9
    // add r0, r1, r0
    // asr r0, r0, #0xa
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    ov96_021E966C(r5, r6, r4, ((r0 << 0x10) >> 0x10));
    ov96_021E93B4(r6, 1);
    ov96_0221A56C(r6, 6);
    ov96_021E952C(r6);
    ov96_021E9570(r6, 6);
}




void ov96_021FCE10(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    sub_0203A914();
    PokeathlonCourse_ResetField3A4(r5);
    FreeBgTilemapBuffer(*((u32*)r4), 0);
    FreeBgTilemapBuffer(*((u32*)r4), 1);
    FreeBgTilemapBuffer(*((u32*)r4), 2);
    FreeBgTilemapBuffer(*((u32*)r4), 3);
    FreeBgTilemapBuffer(*((u32*)r4), 4);
    FreeBgTilemapBuffer(*((u32*)r4), 5);
    FreeBgTilemapBuffer(*((u32*)r4), 6);
    RemoveWindow((r4 + 4));
    Heap_Free(*((u32*)r4));
    ov96_021EB21C(*((u32*)(r4 + 0x18)));
    ov96_021EA894(*((u32*)(r4 + (0xf2 << 2))));
    ov96_021E9C0C(*((u32*)(r4 + (0xf1 << 2))));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov96_02200EEC(*((u32*)(r4 + (0xf7 << 2))));
    ov96_021FFFE8(*((u32*)(r4 + (0x3e << 4))));
    FontID_Release(4);
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // strh r1, [r0]
    Heap_Destroy(0x90, 0);
}




void ov96_021FCEE0(void) {
}




void ov96_021FCF00(void) {
    // add r3, sp, #0xc4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_021FD060(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
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
}




void ov96_021FD0E4(void) {
    // str r1, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_021FD128(void) {
    // str r6, [sp]
    ov96_021EB408(r1, 2, 1, 0x68);
    // str r6, [sp]
    ov96_021EB408(r5, 2, 1, 0x68);
    // str r0, [sp]
    ov96_021EB408(r5, 2, 1, 0x68);
    // str r0, [sp]
    ov96_021EB408(r5, 2, 1, 0x68);
    // str r0, [sp]
    ov96_021EB408(r5, 2, 1, 0x68);
    // str r6, [sp]
    ov96_021EB408(r5, 2, 1, 0x68);
    // str r0, [sp]
    ov96_021EB408(r5, 1, 1, 0x68);
    // str r0, [sp]
    ov96_021EB408(r5, 1, 1, 0x68);
    ov96_021EB4F4(r5, 0x68, 6);
    // str r0, [r4, r1]
    // add r4, #0xc
    ov96_021EB4F4(r5, 0x68, 7);
    // add r1, #0xa4
    // str r0, [r1]
    ov96_021EB4F4(r5, 0x68, 9);
    // add r1, #0x9c
    // str r0, [r1]
    ov96_021EB4F4(r5, 0x68, 0xb);
    // add r1, #0xa8
    // str r0, [r1]
    ov96_021EB4F4(r5, 0x68, 0xd);
    // add r1, #0xa0
    // str r0, [r1]
    // add r0, #0xa4
    ov96_021EB564(*((u32*)r4), 3);
    // add r0, #0xa0
    ov96_021EB564(*((u32*)r4), 8);
    // add r4, #0xd4
    ov96_021EB4F4(r5, 0x68, 0xe);
    // str r0, [r4, r1]
    ov96_021EB4F4(r5, 0x68, 0xc);
    *((u32*)(r7 + 0x1c)) = r0;
    ov96_021EB564(0xb);
    ov96_021EB52C(*((u32*)(r7 + 0x1c)), 1, 1);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #4
    ov96_021EB588(*((u32*)(r7 + 0x1c)));
    ov96_021EB4F4(r5, 0x68, 0xf);
    *((u32*)(r7 + 0x28)) = r0;
    ov96_021EB564(0xa);
    ov96_021EB5E8(*((u32*)(r7 + 0x18)));
    ov96_021EA424(*((u32*)(r7 + (0xf1 << 2))), r0, 0, *((u32*)(r7 + 0x14)));
    *((u32*)(r7 + 0x20)) = r0;
    ov96_021EB5E8(*((u32*)(r7 + 0x18)));
    ov96_021EA424(*((u32*)(r7 + (0xf1 << 2))), r0, 0, *((u32*)(r7 + 0x14)));
    *((u32*)(r7 + 0x24)) = r0;
}




void ov96_021FD2E0(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r7, r0, r1
    // ldr r1, [sp, #0x14]
    // asr r2, r0, #8
    // asr r0, r0, #0x10
    // str r2, [r5, r0]
    // add r0, #0xb
    // strb r1, [r5, r0]
    // strh r4, [r5, r0]
    // strb r6, [r5, r0]
    ov96_021EB564(*((u32*)(0 + 0x000004D8)), (((*((u32*)(0x000004D4 + 0x0000045C)) << 0x18) >> 0x18) - 1), 1);
    ov96_021EB52C(*((u32*)(r5 + 0x000004D8)), 1, 1);
    // add r4, #0x50
    // str r0, [sp, #0x28]
    // add r6, #0x20
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // add r1, sp, #0x20
    ov96_021EB588(*((u32*)(r5 + 0x000004D8)));
    ov96_021FFB44(r7);
    // ldr r0, [sp, #0x14]
    // add r5, #0xc
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // add r7, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    ov96_021FEAEC(((r0 + 4) + 1), 0);
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_SetStateTransitionType(*((u8*)r0), 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(2, 3, 3, 0);
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // strb r1, [r0]
    IsPaletteFadeFinished(*((u8*)r0), (*((u8*)r0) + 1));
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_SetStateField07(1);
}




void ov96_021FD3EC(void) {
    // strb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_021FD46C(void) {
    // strb r0, [r4]
    // add r5, #0x30
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // add r3, #0x9c
    // add r2, r2, r3
    // add r5, #0xd4
}




void ov96_021FD4D0(void) {
    // str r0, [sp, #4]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #4]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #4]
    ov96_021E5F24();
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x28
    // str r0, [sp, #0x2c]
    ov96_021E8A20(*((u8*)(r0 + (0xf << 6))), (0xf << 6));
    // ldr r0, [sp, #0x30]
    ov96_021FDA30(r0);
    // ldr r0, [sp, #0x2c]
    // add r0, #0x50
    ov96_021E8A20();
    // ldr r0, [sp, #0x2c]
    ov96_021E8A20();
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x30]
    // strh r2, [r0, r1]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x28
    ov96_021E8A20(*((u16*)(*((u32*)r0) + (0x19 << 6))), (0x19 << 6), (*((u16*)(*((u32*)r0) + (0x19 << 6))) - 1), r0);
    // ldr r4, [sp, #0x30]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x1c]
    // add r0, #0x50
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r0, #0x30
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, #0xe0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0xec
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xbc
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    ov96_021E8A20(r4);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x30]
    ov96_021FDE6C(((0xe << 6) + 4), *((u8*)(r0 + 4)), *((u8*)(r0 + 5)));
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    ov96_021FFE5C(((r1 << 0x18) >> 0x18), r0);
    // add r0, #0xcd
    // add r0, #0xce
    // add r0, #0xbb
    _s32_div_f((*((u8*)r5) + 1), 3);
    // add r0, #0xbb
    // strb r1, [r0]
    // add r1, #0xce
    // strb r0, [r1]
    // add r1, #0xce
    // strb r0, [r1]
    // add r1, #0xcd
    // strb r0, [r1]
    // add r1, #0xd3
    // strb r0, [r1]
    // str r1, [r7, r0]
    // add r1, #0xdc
    // str r0, [r1]
    // add r1, #0xe0
    // str r0, [r1]
    // add r1, #0xe4
    // str r0, [r1]
    // add r1, #0xe8
    // add r3, #0xe0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xec
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xbb
    // add r0, r5, r0
    // add r0, #0x60
    // str r1, [r7, r0]
    // add r1, #0xdc
    // str r0, [r1]
    // add r1, #0xe0
    // str r0, [r1]
    // add r1, #0xe4
    // str r0, [r1]
    // add r1, #0xe8
    // add r3, #0xe0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xec
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xd9
    // str r1, [r7, r0]
    // add r1, #0xdc
    // str r0, [r1]
    // add r1, #0xe0
    // str r0, [r1]
    // add r1, #0xe4
    // str r0, [r1]
    // add r1, #0xe8
    // add r3, #0xe0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xec
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    ov96_021FDE6C(*((u32*)(r4 + (0xe << 6))), *((u8*)(r6 + 4)), *((u8*)(r6 + 5)), r5);
    // add r1, #0xcd
    // strb r0, [r1]
    // add r1, #0xce
    // strb r0, [r1]
    // str r0, [sp]
    // add r2, #0xbb
    // ldr r0, [sp, #4]
    ov96_021E8228(1, *((u8*)(r5 + (1 << 8))), *((u8*)r5), 7);
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    ov96_021FDE08(((r1 << 0x18) >> 0x18), *((u8*)(r6 + 4)), *((u8*)(r6 + 5)));
    // str r1, [r7, r0]
    // add r0, #0xe0
    // str r1, [r0]
    // add r3, #0xe0
    // add r2, #0xec
    // add r0, #0xe4
    // str r1, [r0]
    // add r1, #0xe8
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xdc
    // add r0, #0xdc
    // add r0, #0xdc
    // str r1, [r0]
    // ldr r1, [sp, #0x30]
    // strb r2, [r1, r0]
    // add r0, #0xec
    // str r1, [r0]
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, #0xdc
    // add r1, #0xda
    // strb r0, [r1]
    // str r1, [r7, r0]
    // ldr r1, [sp, #0x30]
    // add r0, #0x12
    // strb r2, [r1, r0]
    // str r0, [sp, #0x28]
    // add r0, #0xda
    // add r0, sp, #0x44
    // str r1, [r0]
    *((u32*)(*((u8*)r5) + 4)) = 0;
    *((u32*)(*((u8*)r5) + 8)) = 0;
    // add r0, #0xbb
    // add r2, r5, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    ov96_021FF6DC(*((u32*)(0 + 0x48)), *((u8*)r5), 0, r5);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    _fmul(r6);
    _f2d();
    _ddiv(0, 0x40200000);
    _dmul(0, 0x40B00000, r0, r1);
    _dfix();
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x50
    VEC_Subtract();
    // ldr r1, [sp, #0x50]
    // add r1, #0xcd
    // strb r0, [r1]
    // add r1, #0xce
    // strb r0, [r1]
    // str r0, [sp]
    // add r2, #0xbb
    // ldr r0, [sp, #4]
    ov96_021E8228(1, *((u8*)(r5 + (1 << 8))), *((u8*)r5), 7);
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r1, sp, #0x50
    // add r2, sp, #0x44
    VEC_MultAdd(r6, r1);
    // add r0, sp, #0x50
    VEC_Mag();
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    _fflt((r1 >> 0x14));
    // add r3, #0xbc
    // add r2, sp, #0x5c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0x50
    // str r0, [r2]
    ov96_021FF72C(r2, r2, r5);
    VEC_Mag(r6);
    _fflt();
    // ldr r1, [sp, #0x20]
    _fmul(0x45800000);
    _fgr(r6, r0);
    // add r0, sp, #0x38
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x5c
    VEC_Normalize(r0);
    // ldr r1, [sp, #0x20]
    _fmul(0x45800000);
    _ffix();
    // ldr r3, [sp, #0xc]
    // add r1, sp, #0x5c
    // add r2, sp, #0x38
    VEC_MultAdd();
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // add r1, sp, #0x50
    ov96_021FF72C();
    // ldr r0, [sp, #0x18]
    // add r0, #0x8c
    VEC_Mag();
    // ldr r1, [sp, #0x18]
    // add r1, #0x8b
    // ldr r1, [sp, #0x18]
    // add r1, r1, r3
    // add r1, #0x2e
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // add r1, #0xd0
    // ldr r0, [sp, #4]
    ov96_021E8228(1, *((u8*)((*((u8*)0x1c) - 3) << 0xc)), *((u8*)r1), 6);
    // add r1, #0xda
    // strb r0, [r1]
    // ldr r0, [sp, #0x28]
    // add r1, #0xdc
    // str r0, [r1]
    // add r1, #0xe0
    // str r0, [r1]
    // add r1, #0xe4
    // str r0, [r1]
    // add r1, #0xe8
    // add r3, #0xe0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xec
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x1c]
    // add r4, #0xc
    // add r0, #0x28
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r5, #0xd4
    // add r0, #0xd4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0xd4
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0xd4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0xd4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0xd4
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // ldr r2, [sp, #0x30]
    // ldr r0, [sp, #4]
    ov96_02200EF4((*((u32*)r5) + 1), *((u32*)(r5 + (0xf7 << 2))), *((u16*)((0xf7 << 2) + (0x19 << 6))), (0x19 << 6));
    // ldr r0, [sp, #4]
    ov96_021FDE7C();
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x30]
    // strb r2, [r0, r1]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x28
    // str r0, [sp, #0x2c]
    ov96_021E8A20(*((u16*)(r0 + (0x19 << 6))), (0xf << 6), 0);
    // ldr r0, [sp, #0x30]
    ov96_021FDA30(r0);
}




void ov96_021FDA30(void) {
    // str r0, [sp]
    // mov lr, r2
    // str r0, [sp, #0x14]
    // ldr r3, [sp]
    // mov r0, lr
    // str r0, [sp, #0x10]
    // str r1, [sp, #4]
    // add r3, #0x30
    // str r0, [sp, #0xc]
    // mov r6, lr
    // add r0, #0x8b
    // add r4, #0xa2
    // add r0, r1, r0
    // add r0, r0, r4
    // mov ip, r0
    // add r0, #0x9e
    // ldr r0, [sp, #0x10]
    // lsl r4, r0
    // mov r0, lr
    // add r0, r0, r4
    // mov lr, r0
    // add r0, #0x9d
    // add r0, #0x9c
    // add r5, r4, r0
    // ldr r0, [sp, #4]
    // add r0, r0, r7
    // str r0, [sp, #8]
    // add r0, #0x80
    // asr r0, r4, #0xb
    // add r0, r4, r0
    // asr r4, r0, #0xc
    // ldr r0, [sp, #8]
    *((u8*)((r3 >> 0x14) + 8)) = *((u32*)r3);
    // asr r0, r4, #0xb
    // add r0, r4, r0
    // asr r4, r0, #0xc
    // ldr r0, [sp, #0xc]
    // strh r4, [r0]
    // ldr r0, [sp, #8]
    // mov r4, ip
    *((u8*)(((r3 >> 0x14) >> 0x14) + 0xc)) = *((u32*)(r3 + 0x7c));
    *((u8*)(((r3 >> 0x14) >> 0x14) + 0x10)) = r5;
    // add r0, #0x30
    // add r5, r1, r6
    // lsl r0, r5
    // add r2, r2, r0
    // add r4, #0x1c
    // ldr r0, [sp]
    // add r0, r0, r7
    // ldr r0, [sp, #8]
    *((u8*)(*((u8*)r3) + 0x1e)) = *((u8*)(*((u8*)r3) + 0x00000644));
    // add r0, #0xd1
    // add r3, #0xd4
    // lsl r1, r7
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // mov r1, lr
    *((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + 0x1d)) = *((u8*)r3);
    *((u32*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + 0x14)) = 0;
    // ldr r0, [sp]
    // sub r1, #8
    // add r2, r2, r0
    // ldr r0, [sp, #4]
    *((u32*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x14)) = 0;
    // ldr r0, [sp]
    // add r1, r2, r0
    // ldr r0, [sp, #4]
    *((u32*)((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) + 0x14)) = 0x00000644;
    // ldr r0, [sp, #0x14]
    // add r1, r1, r0
    // ldr r0, [sp, #4]
    *((u32*)(((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) << 0x1a) + 0x14)) = 0x00000644;
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    *((u16*)(((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) << 0x1a) + 0x1a)) = *((u16*)(((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) << 0x1a) + (0x00000644 - 6)));
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    *((u8*)(((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) << 0x1a) + 0x1c)) = *((u8*)(((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) << 0x1a) + (0x00000644 - 7)));
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    *((u16*)(((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) << 0x1a) + 0x18)) = *((u16*)(((*((u8*)((*((u8*)(((((*((u8*)r3) << 0x18) >> 0x18) + 2) + 2) + (0xf << 6))) << 0x18) + 0x00000644)) << 0x19) << 0x1a) + (0x00000644 - 4)));
}




void ov96_021FDB64(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #4]
    PokeathlonCourse_GetDataCopyArea(r7);
    ov96_021E8A20();
    // add r5, #0xf0
    // str r0, [r4]
    ov96_021E8A20(r5);
    // asr r0, r0, #0x18
    // and r0, r1
    // ldr r0, [sp, #4]
    ov96_021EB52C(*((u32*)(((*((u32*)(r0 + 0x14)) << 0x18) >> 0x18) + 0x28)), 1, 0);
    // ldr r0, [sp, #4]
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x20)), 0);
    // ldr r0, [sp, #4]
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x24)), 0);
    // ldr r0, [sp, #4]
    ov96_021EB63C(*((u32*)(r0 + 0x18)), 1);
    // ldr r0, [sp, #4]
    ov96_021EB144(*((u32*)(r0 + (0xf2 << 2))), 1);
    ov96_021E8324(r7, ov96_021FFEE8);
    ov96_021E5F24(r7);
    // ldr r0, [sp, #4]
    // add r6, r0, r1
    // add r0, r6, r0
    // asr r0, r1, #9
    // add r0, r1, r0
    // asr r1, r0, #0xa
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp]
    ov96_021E8228(r7, 0, 0, 3);
    System_GetTouchNew(1);
    ov96_021E5F24(r7);
    // str r0, [sp]
    ov96_021E8228(r7, ((r0 << 0x18) >> 0x18), 3, 0);
    System_GetTouchHeld();
    *((u8*)(r4 + 4)) = *((u16*)(gSystem + 0x20));
    *((u8*)(r4 + 5)) = *((u16*)(gSystem + 0x22));
    // str r0, [r4]
    ov96_021FDC7C(r7, *((u16*)(gSystem + 0x20)));
}




void ov96_021FDC7C(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #8]
    // add r0, #0xf0
    ov96_021E8A20();
    // ldr r0, [sp]
    ov96_021E5F24();
    // str r0, [sp, #4]
    ov96_0220050C(*((u32*)(r4 + (0x3e << 4))), ((0 << 0x18) >> 0x18), *((u16*)r7));
    // ldr r0, [sp, #4]
    ScheduleSetBgPosText(*((u32*)r4), 0, 0, *((u16*)(r7 + (r0 << 1))));
    ScheduleSetBgPosText(*((u32*)r4), 1, 0, (*((u16*)(r7 + r5)) >> 1));
    ScheduleSetBgPosText(*((u32*)r4), 2, 0, (*((u16*)(r7 + r5)) << 1));
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #8]
    // add r2, #0x30
    ov96_021FE550(r4);
    ov96_021FEAEC(r4, *((u16*)(r7 + r5)));
    // ldr r0, [sp, #4]
    // add r0, r7, r0
    // and r0, r1
    // asr r1, r0, #0x1a
    // and r0, r1
    // ldr r1, [sp, #4]
    // asr r0, r1
    // and r0, r1
    ov96_022005B4(*((u32*)(r4 + (0x3e << 4))), ((0x7f << 0x18) >> 0x18), *((u16*)(r7 + r5)));
    // asr r1, r0, #0x18
    // and r0, r1
    // add r0, #0x20
    ov96_021FFC34(r4, r6);
    ov96_02200A64(*((u32*)(r4 + (0x3e << 4))), *((u16*)(r7 + 0x18)));
    // ldr r0, [sp, #4]
    // add r0, r7, r0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FDD76: ; jump table
    // strh r1, [r4, r0]
    ov96_021EB570(*((u32*)(r4 + 0x1c)), 0xb);
    // strh r1, [r4, r0]
    ov96_021EB570(*((u32*)(r4 + 0x1c)), 0xd);
    // strh r1, [r4, r0]
    PlaySE(0x0000089B, 1);
    ov96_021EB570(*((u32*)(r4 + 0x1c)), 0xc);
    // strh r1, [r4, r0]
    PlaySE(0x0000089C, 1);
    ov96_021EB570(*((u32*)(r4 + 0x1c)), 0xe);
    // strh r1, [r4, r0]
    ov96_021EB570(*((u32*)(r4 + 0x1c)), 0xf);
    ov96_021FFBD8(*((u32*)r4), *((u16*)(r7 + r5)));
    // ldr r0, [sp]
    ov96_021E6454(*((u16*)(r7 + 0x18)));
}




void ov96_021FDE08(void) {
    // add r0, #0x30
    // add r4, r0, r2
    // add r0, #0x8b
    // add r0, #0x8b
    // add r0, sp, #4
    // str r0, [sp]
    // add r4, #0x80
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // add r3, sp, #8
    // str r6, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
}




void ov96_021FDE6C(void) {
    // cmp r1, #0x40
    // bhs _021FDE78
    // cmp r2, #0x20
    // bhs _021FDE78
}




void ov96_021FDE7C(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x14]
    // strb r7, [r0, r1]
    // add r4, sp, #0x1c
    // add r5, #0x30
    // strb r0, [r4]
    // add r0, #0xd9
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    ov96_021FE538(*((u8*)r0), 0x0000063C, r0);
    // strb r0, [r4]
    // add r6, #0xd4
    // add r5, #0xd4
    // ldr r5, [sp, #0x14]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // add r5, #0x30
    // ldr r0, [sp, #0x10]
    // add r3, #0x7c
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x44
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x7c
    // add r1, #0x8c
    VEC_Add(r5, r5, r5, r5);
    // add r0, #0x8b
    // add r2, r5, r0
    // add r0, #0x8c
    // add r0, r1, r0
    *((u32*)(r2 + 0xc)) = *((u32*)r5);
    // add r0, #0x80
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x8b
    ov96_021EAF8C(*((u32*)(r5 + (*((u8*)r5) << 2))), (0x2a << 0xe));
    // add r0, #0x7c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0xcc
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x44
    ov96_021FF5A8(r5, *((u32*)r5), r0);
    // asr r1, r0, #8
    // add r1, #0xa5
    // strb r2, [r1]
    // add r1, #0xcc
    // str r0, [r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FDF80: ; jump table
    // add r0, #0x90
    // add r0, #0x90
    // mvn r0, r0
    // add r0, #0x90
    // str r2, [r0]
    // add r0, #0x8c
    // add r0, #0x8c
    // mvn r0, r0
    // add r0, #0x8c
    // str r2, [r0]
    // add r0, #0x90
    // add r0, #0x90
    // mvn r0, r0
    // add r0, #0x90
    // str r2, [r0]
    // add r0, #0x8c
    // add r0, #0x8c
    // mvn r0, r0
    // add r0, #0x8c
    // str r2, [r0]
    // add r0, #0x8c
    // add r0, #0x8c
    // mvn r0, r0
    // add r0, #0x8c
    // str r2, [r0]
    // add r0, #0x90
    // add r0, #0x90
    // mvn r0, r0
    // add r0, #0x90
    // str r2, [r0]
    // add r0, #0x8c
    // add r0, #0x8c
    // mvn r0, r0
    // add r0, #0x8c
    // str r2, [r0]
    // add r0, #0x90
    // add r0, #0x90
    // mvn r0, r0
    // add r0, #0x90
    // str r2, [r0]
    // add r0, #0x8c
    // add r0, #0x8c
    // mvn r0, r0
    // add r0, #0x8c
    // str r2, [r0]
    // add r0, #0x90
    // add r0, #0x90
    // mvn r0, r0
    // add r0, #0x90
    // str r2, [r0]
    // add r0, #0x8c
    // add r0, #0x8c
    // mvn r0, r0
    // add r0, #0x8c
    // str r2, [r0]
    // add r0, #0x90
    // add r0, #0x90
    // mvn r0, r0
    // add r0, #0x90
    // str r2, [r0]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, #0x30
    // add r2, sp, #0x50
    ov96_021FF764(r5, *((u32*)r5), (*((u32*)r5) * 0));
    // ldr r2, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // strb r2, [r0, r1]
    // ldr r2, [sp, #0x50]
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r3, r0, #0xc
    // ldr r0, [sp, #0x14]
    // strh r3, [r0, r2]
    // ldr r2, [sp, #0x54]
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r2, r0, #0xc
    // ldr r0, [sp, #0x14]
    // strb r2, [r0, r1]
    _dflt(*((u32*)(r5 + 0x7c)), (0x0000063C + 1), (0x0000063C + 2));
    _dgeq(0, 0x41500000);
    _dflt(r4);
    _dsub(0, 0x41500000);
    _dfix();
    *((u32*)(r5 + 0x7c)) = r0;
    // add r0, #0xd1
    // add r0, #0x9c
    // add r0, #0x9c
    // add r0, #0x9c
    // strb r1, [r0]
    // add r0, #0x9c
    // add r0, #0xa8
    // add r0, #0xa8
    // strb r1, [r0]
    // add r0, #0xd1
    // strb r1, [r0]
    _dflt(r4, 0);
    _dadd(0, 0x41500000, r0, r1);
    _dfix();
    *((u32*)(r5 + 0x7c)) = r0;
    // add r0, #0x9c
    // add r0, #0x9c
    // add r0, #0x9c
    // strb r1, [r0]
    // add r0, #0xd1
    // strb r1, [r0]
    // add r4, #0x8c
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0x38
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    VEC_Mag(r3, 1, r3);
    // add r1, #0x9d
    // add r1, #0xa5
    // add r1, #0x8b
    // add r1, r5, r1
    // add r1, #0x2c
    // add r1, sp, #0x2c
    // str r0, [r1]
    *((u32*)(*((u8*)(0x1c * *((u8*)r5))) + 4)) = 0;
    // add r3, sp, #0x20
    // add r4, #0x8c
    *((u32*)(*((u8*)(0x1c * *((u8*)r5))) + 8)) = 0;
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    VEC_Normalize(r3, r3, r3);
    // add r1, sp, #0x20
    // add r2, sp, #0x2c
    VEC_MultAdd(r6, r1);
    // add r3, sp, #0x20
    // add r2, #0x8c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x38
    // str r0, [r2]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    VEC_Mag(r3, r3);
    _f2d((0xfe << 0x16));
    _dmul(0x9999999A, 0x3FD99999, r0, r1);
    _dmul(0, 0x40B00000, r0, r1);
    _dfix();
    // ldr r0, [sp, #0x14]
    // add r4, r4, r0
    // add r0, sp, #0x38
    VEC_Normalize((3 << 0xc), (3 << 0xc));
    // ldr r0, [sp, #0x38]
    // asr r6, r4, #0x1f
    // asr r1, r0, #0x1f
    _ll_mul(r4, r6);
    // add r0, r2, r0
    // adc r1, r3
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x3c]
    // asr r1, r0, #0x1f
    _ll_mul((((2 << 0xa) >> 0xc) | (r1 << 0x14)), (r1 << 0x14), r4, r6);
    // add r2, r0, r2
    // adc r1, r3
    // add r0, sp, #0x38
    // str r1, [sp, #0x3c]
    VEC_Mag((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    // add r0, #0x8c
    VEC_Mag(r5);
    // add r0, #0x8c
    // add r1, sp, #0x38
    VEC_Subtract(r5, r5);
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, #0x90
    // str r1, [r0]
    // add r0, #0x8c
    VEC_Mag(r5, 0);
    // add r1, #0x8b
    // add r1, r5, r1
    // add r1, #0x2e
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0x9d
    // str r0, [sp, #0x18]
    // add r0, #0xa4
    // str r0, [sp, #0x18]
    // add r0, #0x8b
    // add r0, #0x30
    // add r0, #0xa2
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FE3D4: ; jump table
    _f2d(*((u32*)(r5 + 0x24)), 1, *((u8*)(0x1c * *((u8*)r5))));
    _dadd(0, 0x3FE00000);
    _d2f();
    _f2d(r0);
    _dsub(0, 0x3FE00000);
    _d2f();
    // add r0, #0xa3
    _f2d(r0);
    _dgr(0, 0x40440000);
    _fgr(0x42200000, *((u32*)(r4 + 0x28)));
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // strb r1, [r0]
    // add r0, #0xa4
    // add r1, #0x30
    // strb r0, [r1]
    _f2d(0x42200000, r4);
    _dadd(0, 0x3FE00000);
    _d2f();
    _fgr(*((u32*)(r4 + 0x28)));
    _fleq(*((u32*)(r4 + 0x28)), 0);
    // add r0, #0x8b
    GF_AssertFail(*((u8*)r5));
    *((u32*)(r4 + 0x24)) = 0;
    // add r0, #0x30
    // add r1, #0x30
    // strb r0, [r1]
    // add r1, #0xa3
    // strb r0, [r1]
    // add r0, #0x2f
    // add r0, #0xa4
    // strb r1, [r0]
    // str r0, [sp]
    // add r1, #0xd0
    // add r2, #0x8b
    // ldr r0, [sp, #8]
    ov96_021E8228(1, *((u8*)r5), *((u8*)r5), 1);
    _f2d(r6);
    _dleq(0, 0x40440000);
    *((u32*)(r4 + 0x24)) = r6;
    // add r1, #0x30
    // strb r0, [r1]
    // add r1, #0x30
    // strb r0, [r1]
    // add r4, #0x1c
    // ldr r0, [sp, #0x10]
    // add r5, #0xd4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_021FE538(void) {
    // add r0, #0xa9
    // add r0, #0xa9
    // add r2, #0xa9
    // strb r0, [r2]
}




void ov96_021FE550(void) {
    // str r0, [sp, #0x18]
    // add r0, #0xf0
    // str r1, [sp, #0x1c]
    // str r3, [sp, #0x20]
    ov96_021E8A20(r3);
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x18]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x58]
    // add r1, sp, #0x7c
    // str r0, [sp, #0x60]
    // str r0, [r1]
    *((u32*)((r0 << 1) + 4)) = 0;
    *((u32*)((r0 << 1) + 8)) = 0;
    // ldr r0, [sp, #0x58]
    // asr r1, r0, #0x19
    // and r0, r1
    // ldr r0, [sp, #0x58]
    // ldr r0, [sp, #0x60]
    // sub r4, r0, r1
    _dflt(r4, *((u16*)(((1 << 0x18) >> 0x18) + 0x1a)));
    _dgeq(0, 0x40880000);
    _dflt(r4);
    _dsub(0, 0x40900000, r0, r1);
    _dadd(0, 0x40540000, r0, r1);
    _dfix();
    // sub r4, r0, r4
    // str r0, [sp, #0x7c]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x80]
    // ldr r0, [sp, #0x5c]
    // add r1, #9
    // ldr r0, [sp, #0x5c]
    // add r0, r0, r2
    // add r1, sp, #0x7c
    ov96_021EB588(*((u32*)(*((u8*)((*((u8*)((r0 << 0xc) + 0x1c)) << 0xc) + 0x000003C3)) + 0x000003C3)), 0x000003C3, (*((u8*)((*((u8*)((r0 << 0xc) + 0x1c)) << 0xc) + 0x000003C3)) << 2));
    // ldr r0, [sp, #0x5c]
    // add r1, #9
    // ldr r0, [sp, #0x5c]
    // add r0, r0, r2
    ov96_021EB52C(*((u32*)(*((u8*)(r0 + 0x000003C3)) + 0x000003C3)), 1, 1);
    // ldr r0, [sp, #0x5c]
    // add r1, #9
    // ldr r0, [sp, #0x5c]
    // add r0, r0, r2
    ov96_021EB564(*((u32*)(*((u8*)(r0 + 0x000003C3)) + 0x000003C3)), 9, (*((u8*)(r0 + 0x000003C3)) << 2));
    // ldr r1, [sp, #0x5c]
    // sub r1, r1, r3
    // ror r1, r2
    // add r3, r3, r1
    // ldr r1, [sp, #0x5c]
    // strb r3, [r1, r0]
    // add r2, #0xe2
    sub_0200606C(0x000008A3, 5, 0x1e, ((*((u8*)(r1 + 0x000003C3)) + 1) >> 0x1f));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x3c]
    // add r0, #0x50
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x58]
    // ldr r0, [sp, #0x30]
    // add r0, r1, r0
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x38]
    // and r0, r1
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x44]
    // ldr r0, [sp, #0x60]
    // sub r6, r4, r0
    _dflt(((*((u8*)(0 + 0xc)) << 0x18) >> 0x18), 3);
    _dgr(0, 0x4086A000);
    // ldr r0, [sp, #0x60]
    _dflt((0x4b << 2));
    _dsub(0, 0x40900000, r0, r1);
    _dfltu(r4);
    _dadd(r7, r6, r0, r1);
    _dfix();
    // ldr r0, [sp, #0x60]
    _dfltu(r4);
    _dgr(0, 0x408CE000);
    // ldr r0, [sp, #0x60]
    _dflt();
    _dfltu(r4);
    _dsub(0, 0x40900000, r0, r1);
    _dadd(r7, r6, r0, r1);
    _dsub(0, 0, r0, r1);
    _dfix();
    // ldr r1, [sp, #0x58]
    // ldr r0, [sp, #0x30]
    // add r6, #0x50
    // add r1, r1, r0
    // asr r2, r0, #7
    // and r0, r2
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x58]
    // ldr r3, [sp, #0x34]
    // ldr r2, [sp, #0x40]
    // add r2, r3, r2
    // asr r0, r2
    // and r0, r2
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x38]
    // asr r0, r0, #2
    // and r0, r2
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // str r0, [sp, #0x78]
    // ldr r0, [sp, #0x18]
    PokeathlonCourse_GetParticipantCount(0, 3);
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x3c]
    ov96_021E8A20();
    // ldr r0, [sp, #0x20]
    ov96_021E8A20();
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x30]
    // add r2, sp, #0x70
    // str r1, [sp]
    // ldr r1, [sp, #0x34]
    // ldr r3, [sp, #0x58]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x5c]
    ov96_021FEECC(*((u32*)(0 + (0x3e << 4))), r5);
    // str r1, [sp]
    // ldr r1, [sp, #0x34]
    // ldr r3, [sp, #0x58]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x5c]
    // str r4, [sp, #0x14]
    ov96_021FEECC(*((u32*)(0 + (0x3e << 4))), r5);
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // ldr r1, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    // ldr r3, [sp, #0x50]
    ov96_02200950(*((u32*)(r0 + (0x3e << 4))), (((0x3e << 4) << 0x18) >> 0x18));
    // add r0, #0xc8
    // mvn r0, r0
    // ldr r0, [sp, #0x54]
    ov96_021EAB38((0x12 << 4), 1);
    // ldr r0, [sp, #0x54]
    ov96_021EAB38(0);
    // ldr r2, [sp, #0x2c]
    ov96_021EAF94(*((u32*)r5), r6, *((u8*)(r2 + 8)));
    // ldr r0, [sp, #0x18]
    ov96_021E5F24();
    // ldr r1, [sp, #0x30]
    // ldr r1, [sp, #0x2c]
    ov96_021FFB7C(r5, *((u8*)(r1 + 8)), 0);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    ov96_021E60C0();
    // add r1, sp, #0x70
    ov96_021FFAEC(*((u32*)(r5 + 0x6c)));
    // add r4, sp, #0x70
    // add r3, sp, #0x64
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x68]
    // sub r0, r1, r0
    // str r0, [sp, #0x68]
    ov96_021EB588(*((u32*)(r5 + 0x78)), r3, r3);
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x4c]
    // add r0, #0xa7
    // ldr r0, [sp, #0x4c]
    ov96_021EB52C(*((u32*)(r5 + 0x78)), 1, 1);
    ov96_021EB564(*((u32*)(r5 + 0x78)), 4);
    // ldr r0, [sp, #0x54]
    ov96_021EAC5C(8);
    // add r0, #0xd2
    // add r0, #0xd3
    // ldr r2, [sp, #0x24]
    ov96_021FFE38(r6, 0x000008A7);
    // add r0, #0xd2
    // strb r1, [r0]
    // add r0, #0xd3
    // strb r1, [r0]
    // add r0, #0xa7
    // ldr r0, [sp, #0x4c]
    ov96_021EB52C(*((u32*)(r5 + 0x78)), 1, 1);
    ov96_021EB564(*((u32*)(r5 + 0x78)), 5);
    // ldr r0, [sp, #0x54]
    ov96_021EAC5C(8);
    // add r0, #0xd2
    // add r0, #0xd3
    // ldr r2, [sp, #0x24]
    ov96_021FFE38(r6, 0x000008A7);
    // add r0, #0xd2
    // strb r1, [r0]
    // add r0, #0xd3
    // strb r1, [r0]
    ov96_021EB52C(*((u32*)(r5 + 0x78)), 1, r4);
    // ldr r0, [sp, #0x4c]
    // add r1, #0xd2
    // strb r0, [r1]
    // add r0, #0xd3
    // strb r1, [r0]
    // ldr r0, [sp, #0x48]
    ov96_021EB52C(*((u32*)(r5 + 0x6c)), 1, 1);
    ov96_021EB570(*((u32*)(r5 + 0x6c)), 6);
    // add r0, #0xa6
    // ldr r0, [sp, #0x48]
    ov96_021EB52C(*((u32*)(r5 + 0x6c)), 1, 1);
    ov96_021EB564(*((u32*)(r5 + 0x6c)), 7);
    // ldr r0, [sp, #0x54]
    ov96_021EAC5C(0x15);
    // ldr r0, [sp, #0x24]
    sub_02006190(3);
    // ldr r2, [sp, #0x24]
    ov96_021FFE38(r6, (0x89 << 4));
    sub_02006190(4);
    // ldr r2, [sp, #0x24]
    ov96_021FFE38(r6, (0x89 << 4));
    ov96_021EB52C(*((u32*)(r5 + 0x6c)), 1, 0);
    // ldr r0, [sp, #0x54]
    ov96_021EAC5C(0);
    ov96_021EB52C(*((u32*)(r5 + 0x78)), 1, 0);
    ov96_021EB52C(*((u32*)(r5 + 0x6c)), 1, 0);
    // ldr r0, [sp, #0x4c]
    // add r1, #0xa7
    // strb r0, [r1]
    // ldr r0, [sp, #0x48]
    // add r1, #0xa6
    // strb r0, [r1]
    // ldr r0, [sp, #0x44]
    // add r5, #0xd4
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x3c]
    // add r0, #0x28
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x5c]
    ov96_02200BC8(*((u32*)((((r0 + 2) + 3) + 1) + (0x3e << 4))), 0);
    // ldr r0, [sp, #0x5c]
    ov96_02200BC8(*((u32*)(r0 + (0x3e << 4))), 1);
    // ldr r0, [sp, #0x58]
    // ldr r0, [sp, #0x1c]
    // add r3, r0, r1
    // ldr r0, [sp, #0x5c]
    // add r1, r4, r3
    // add r3, r6, r3
    // asr r4, r1
    // and r1, r2
    // asr r4, r3
    // and r2, r4
    ov96_02200A18(*((u32*)(r0 + (0x3e << 4))), ((*((u32*)(r0 + 0x14)) << 0x18) >> 0x18), ((3 << 0x18) >> 0x18), ((r3 << 0x18) >> 0x17));
}




void ov96_021FEAEC(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    // add r4, r0, r1
    // ldr r0, [sp, #4]
    // sub r5, r0, r1
    _dflt(r5, *((u16*)(r4 + (0x000004DE - 2))));
    _dgeq(0, 0x40880000);
    _dflt(r5);
    _dsub(0, 0x40900000, r0, r1);
    _dadd(0, 0x40540000, r0, r1);
    _dfix();
    _dflt(r0);
    _dleq(0, 0xC0880000);
    _dflt(r5);
    _dadd(0, 0x40900000, r0, r1);
    _dsub(0, 0x40540000, r0, r1);
    _dfix();
    // sub r5, r0, r5
    // str r0, [sp, #0x10]
    // add r7, #0x20
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #8
    ov96_021EB588(*((u32*)(r4 + 0x000004D8)));
    // mvn r0, r0
    ov96_021EB52C(*((u32*)(r4 + 0x000004D8)), 1, 1);
    ov96_021EB52C(*((u32*)(r4 + 0x000004D8)), 1, 0);
}




void ov96_021FEBF0(void) {
    // add r1, #0xa0
    // ldr r6, [sp, #0x24]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021FEC10: ; jump table
    ov96_021EB588(*((u32*)(r1 + 0x74)), r2);
    ov96_021EB588(*((u32*)(r4 + 0x70)), r5);
    ov96_021EB52C(*((u32*)(r4 + 0x70)), 1, 1);
    ov96_021EB564(*((u32*)(r4 + 0x70)), 8);
    ov96_021EB52C(*((u32*)(r4 + 0x74)), 1, 1);
    // add r0, sp, #0x10
    ov96_021EAB38(*((u32*)(r4 + (*((u8*)(r0 + 0x10)) << 2))), 0);
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, #0xa1
    // strb r1, [r0]
    // ldr r2, [sp, #0x2c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    ov96_021FFE38((r4 >> 0x14), 0x000008B4);
    // add r0, #0xa0
    // add r4, #0xa0
    // strb r0, [r4]
    ov96_021EB594(*((u32*)(r4 + 0x74)));
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // str r0, [sp]
    ov96_021EB588(*((u32*)(r4 + 0x74)), r3, r3);
    ov96_021EB588(*((u32*)(r4 + 0x70)), r5);
    // add r0, #0xa1
    // add r0, #0xa1
    // strb r1, [r0]
    // add r0, #0xa1
    // add r0, #0xa0
    // add r4, #0xa0
    // strb r0, [r4]
    // ldr r1, [sp, #0x2c]
    // add r1, sp, #0x10
    ov96_022006BC((*((u8*)r4) + 1), *((u8*)((*((u8*)r4) + 1) + 0x10)));
    *((u8*)(r6 + 8)) = 1;
    // add r0, #0xa0
    // add r4, #0xa0
    // strb r0, [r4]
    // ldr r1, [sp, #0x28]
    ov96_02200900((*((u8*)r4) + 1), r3);
    *((u8*)(r6 + 8)) = 1;
    // add r0, #0xa0
    // add r4, #0xa0
    // strb r0, [r4]
    // add r0, #0xa0
    // add r4, #0xa0
    // strb r0, [r4]
}




void ov96_021FED3C(void) {
    // add r0, #0xa0
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FED5C: ; jump table
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #0x10]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    ov96_021EB588(*((u32*)(r0 + 0x74)), r2, r1);
    ov96_021EB52C(*((u32*)(r4 + 0x74)), 1, 1);
    ov96_021EAB38(*((u32*)(r4 + (r6 << 2))), 0);
    // add r0, #0xa1
    // strb r1, [r0]
    // ldr r2, [sp, #0x38]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    ov96_021FFE38((r4 >> 0x14), 0x000008B5);
    // add r0, #0xa0
    // add r4, #0xa0
    // strb r0, [r4]
    ov96_021EB594(*((u32*)(r4 + 0x74)));
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // str r0, [sp]
    ov96_021EB588(*((u32*)(r4 + 0x74)), r3, r3);
    // add r0, #0xa1
    // add r0, #0xa1
    // strb r1, [r0]
    // add r0, #0xa1
    ov96_021EB588(*((u32*)(r4 + 0x70)), r5);
    // add r0, #0xa0
    // add r4, #0xa0
    // strb r0, [r4]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    *((u8*)((*((u8*)r4) + 1) + 8)) = 2;
    ov96_021EB588(*((u32*)(r4 + 0x74)), r5);
    ov96_021EB588(*((u32*)(r4 + 0x70)), r5);
    // add r0, #0xa0
    // add r0, #0xa0
    // strb r1, [r0]
    ov96_021EB588(*((u32*)(r4 + 0x74)), r5);
    ov96_021EB588(*((u32*)(r4 + 0x70)), r5);
}




void ov96_021FEE60(void) {
    ov96_021EAB38(*((u32*)(r0 + (r2 << 2))), 1);
    // add r0, #0xc8
    // str r1, [r0]
    ov96_021EB52C(*((u32*)(r5 + 0x70)), 1, 1);
    ov96_021EB564(*((u32*)(r5 + 0x70)), 8);
    ov96_021EB52C(*((u32*)(r5 + 0x74)), 1, 0);
    // ldr r0, [sp, #0x18]
    *((u8*)(r4 + 8)) = 0;
    ov96_021EB594(*((u32*)(r5 + 0x70)));
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp]
    // ldr r2, [sp, #0x1c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    ov96_021FFE38((*((u32*)r0) >> 0x14), 0x000008B6, r0);
}




void ov96_021FEECC(void) {
    // ldr r7, [sp, #0x40]
    // str r0, [sp, #0x10]
    // ldr r6, [sp, #0x44]
    // str r0, [sp, #0x14]
    // mov ip, r2
    // asr r0, r1
    // and r0, r1
    // add r1, #0x9f
    // ldr r5, [sp, #0x50]
    // add r1, #0x9f
    // strb r0, [r1]
    // ldr r0, [sp, #0x14]
    // add r1, #0xa0
    // strb r0, [r1]
    // str r0, [sp, #0x14]
    // add r0, sp, #0x18
    // str r0, [sp]
    // mov r1, ip
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // mov r2, ip
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    // add r3, sp, #0x1c
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x9f
    // ldr r0, [sp, #0x4c]
    // ldr r0, [sp, #0x54]
    // ldr r0, [sp, #0x48]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x20
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x4c]
    // ldr r0, [sp, #0x54]
    // ldr r0, [sp, #0x48]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x20
    // str r5, [sp, #8]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x4c]
    // ldr r0, [sp, #0x54]
    // str r0, [sp]
    // ldr r3, [sp, #0x48]
    // str r5, [sp, #4]
    // add r1, sp, #0x20
}




void ov96_021FEFE8(void) {
    // str r3, [sp]
    // ldr r2, [sp]
    // ldr r6, [sp, #0x18]
    ov96_021E60D8(r2);
    // ldr r0, [sp]
    _fflt(*((u32*)(r5 + (*((u8*)r0) << 2))), 0x1c);
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    // add r1, r6, r7
    *((u32*)(r1 + 0x20)) = r0;
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)(r4 + 3)) << 2) + 0x14)));
    // add r1, r6, r7
    *((u32*)(r1 + 0x28)) = r0;
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)(r4 + 3)) << 2) + 0x14)));
    // add r1, r6, r7
    *((u32*)(r1 + 0x24)) = r0;
    // add r0, r5, r0
    // add r0, #0x2e
    // strb r2, [r0]
    // add r0, r5, r0
    // add r0, #0x8c
    // add r0, #0x2c
    // strb r2, [r0]
    // add r1, #0x2d
    // add r0, r5, r0
    // strb r0, [r1]
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)(r4 + 4)) << 2) + 0x28)), *((u32*)(*((u8*)(r4 + 1)) << 2)));
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    // add r1, r6, r7
    *((u32*)(r1 + 0x18)) = r0;
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)(r4 + 1)) << 2) + 0x3c)));
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    // add r1, r6, r7
    *((u32*)(r1 + 0x1c)) = r0;
    // add r1, #0x2f
    // add r0, r5, r0
    // strb r0, [r1]
}




void ov96_021FF0BC(void) {
    // ldr r0, [sp, #0x28]
    // str r2, [sp]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #4]
    // str r0, [sp, #0x2c]
    // stmia r2!, {r7}
    // stmia r3!, {r7}
    // ldr r0, [sp, #0x28]
    // str r5, [sp, #8]
    // strb r7, [r0]
    // ldr r0, [sp, #0x2c]
    // strb r7, [r0]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x10]
    // add r6, r5, r0
    // ldr r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // sub r4, r0, r1
    _dflt(r4, *((u16*)(r0 + 0x000004DC)));
    _dgeq(0, 0x40880000);
    _dflt(r4);
    _dsub(0, 0x40900000, r0, r1);
    _dadd(0, 0x40540000, r0, r1);
    _dfix();
    _dflt(r4);
    _dleq(0, 0xC0880000);
    _dflt(r4);
    _dadd(0, 0x40900000, r0, r1);
    _dsub(0, 0x40540000, r0, r1);
    _dfix();
    // sub r0, r0, r4
    // mvn r1, r1
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    // str r6, [r0, r1]
    // ldr r0, [sp, #0x28]
    // strb r1, [r0]
    // ldr r0, [sp]
    // str r6, [r0, r1]
    // ldr r0, [sp, #8]
    // add r5, #0xc
    // str r0, [sp, #8]
}




void ov96_021FF1E0(void) {
    // asr r1, r3, #8
    // asr r3, r3, #0x10
    // add r1, #0x20
    // str r4, [r2]
    // sub r5, #0x20
    // sub r1, #0x20
    // sub r5, r5, r4
    // sub r4, r1, r4
    // add r1, r5, r3
    // add r1, r4, r3
    // sub r1, r1, r0
    // sub r1, r1, r0
    // add r1, r1, r0
    // add r1, r1, r0
    // add r1, r1, r0
    // add r1, r1, r0
    // sub r1, r1, r0
    // sub r0, r1, r0
}




void ov96_021FF2A0(void) {
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xb8]
    // str r1, [sp, #8]
    // str r0, [sp, #0xb8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r0, [sp, #4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // add r3, sp, #0x34
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // add r7, #0x2c
    // add r6, #0x24
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x20]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r3, sp, #0x34
    // add r2, sp, #0x94
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, sp, #0x2c
    // str r0, [sp]
    // add r2, sp, #0x24
    // add r3, sp, #0x1c
    sub_02020F4C(r3, r3, ov96_0221C5FC);
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0xb8]
    // str r1, [r0]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0xb8]
    *((u32*)(r0 + 4)) = (r0 << 0xc);
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x94
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x24]
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // ldr r2, [sp, #4]
    // ldmia r2!, {r0, r1}
    // str r2, [sp, #4]
    // ldr r2, [sp, #0xb8]
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #4]
    // str r2, [sp, #0xb8]
    // str r1, [r0]
    // add r0, sp, #0x94
    // add r7, #0x10
    // add r6, #0x10
    // add r5, #0x10
    // add r2, sp, #0x44
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0xc]
    // ldr r4, [sp, #0x10]
    // add r7, sp, #0x6c
    // add r3, sp, #0x44
    // add r2, sp, #0x84
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0x78
    // str r0, [sp, #0x78]
    // str r0, [sp, #0x7c]
    // str r0, [sp, #0x80]
    // ldr r0, [sp, #8]
    VEC_Subtract(0, (r4 << 2), r7, ov96_0221C60C);
    VEC_Mag(r7);
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, sp, #0x78
    ov96_021FF67C((r3 << 0xc));
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x60
    VEC_Subtract();
    // ldr r2, [sp, #4]
    // add r1, sp, #0x60
    // add r3, sp, #0x54
    VEC_MultAdd(r4);
    // ldr r1, [sp, #0x54]
    // ldr r0, [sp, #0xb8]
    // str r1, [r0]
    // ldr r1, [sp, #0x58]
    *((u32*)(r0 + 4)) = r1;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x84
    // add r4, #8
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #8]
    // ldr r2, [sp, #0xb8]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // str r3, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // sub r0, r0, r2
    // sub r3, r3, r2
    // mov ip, r1
    // mvn r2, r2
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #8]
    // ldr r4, [sp, #0x10]
    // sub r3, r3, r5
    // sub r4, r4, r5
    // mvn r5, r5
    // mvn r5, r5
    // mov ip, r0
    // mov r3, ip
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r1, [sp, #0xb8]
    // str r2, [r1]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // add r1, r2, r1
    // ldr r1, [sp, #0xb8]
    // str r2, [r1]
    // ldr r1, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r1, [sp, #0xb8]
    *((u32*)(1 + 4)) = (1 << 0xc);
    // ldr r1, [sp, #0xc]
    // add r1, r7, r1
    // ldr r1, [sp, #0xb8]
    *((u32*)(1 + 4)) = (1 << 0xc);
}




void ov96_021FF574(void) {
    // add r3, r3, r1
    // add r1, r4, r1
}




void ov96_021FF5A8(void) {
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x1f0]
    // str r1, [sp, #0x1f0]
    // ldr r1, [sp, #0x1f4]
    // str r1, [sp, #0x1f4]
    // add r1, sp, #0x14
    // add r1, #1
    // str r1, [sp]
    // add r1, sp, #0x14
    // str r1, [sp, #4]
    // add r2, sp, #0x164
    // add r3, sp, #0xec
    // str r4, [sp, #0x10]
    // add r0, sp, #0x14
    // add r5, sp, #0xec
    // add r2, sp, #0x88
    // add r1, sp, #0x88
    // str r0, [sp, #0x10]
    // add r0, sp, #0x14
    // str r5, [sp, #0xc]
    // add r0, sp, #0x14
    // add r4, sp, #0x164
    // add r2, sp, #0x24
    // add r0, sp, #0x18
    // str r0, [sp]
    // ldr r1, [sp, #0x1f0]
    // add r3, sp, #0x24
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x1f4]
    // str r2, [r1]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x1f4]
    // str r2, [r1]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x14
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
}




void ov96_021FF67C(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // sub r0, r1, r0
    // sub r0, r4, r0
    // sub r0, r7, r4
    // add r0, r4, r7
    // neg r0, r0
}




void ov96_021FF6DC(void) {
    // add r0, #0xa5
    // add r0, r5, r0
    // add r0, #0x2c
    _ffltu(*((u8*)(0x1c * r1)));
    // add r0, r5, r4
    _f2d(*((u32*)(0x1c + 0x24)));
    _dleq(0, 0x40440000);
    // add r0, r5, r4
    // add r0, #0x2d
    _ffltu(*((u8*)r0));
    // add r0, r5, r4
    // add r0, #0x2e
    _ffltu(*((u8*)r0));
}




void ov96_021FF72C(void) {
    // add r2, r3, r2
    // str r2, [r5]
    // asr r3, r4, #0x1f
    // asr r1, r6, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // bmi _021FF760
    // add r0, r6, r4
}




void ov96_021FF764(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x9c]
    // str r0, [sp, #0x90]
    // str r0, [sp, #0x18]
    // add r0, #0x8b
    // str r0, [sp, #0x14]
    // add r0, #0x9d
    // add r0, #0xa9
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x3c
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // add r2, #0x80
    // asr r1, r1, #0xc
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r3, sp, #0x40
    ov96_021EB0A4(*((u32*)(r1 + (*((u8*)r1) << 2))), (r1 >> 0x14), (r1 >> 0x14), *((u32*)r1));
    // str r0, [sp, #0x30]
    // add r0, #0x8c
    // ldr r5, [sp, #0xc]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x18]
    // add r0, #0x9d
    // add r0, #0x8b
    // ldr r7, [sp, #0x40]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x34
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // add r2, #0x80
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r3, sp, #0x38
    ov96_021EB0A4(*((u32*)(r5 + (*((u8*)r5) << 2))), *((u32*)(r5 + 0x7c)), (r5 >> 0x14), *((u32*)r5));
    // str r0, [sp, #0x1c]
    _dflt(*((u32*)(r4 + 0x7c)));
    _dgr(0, 0x41480000);
    // ldr r0, [sp, #0x38]
    _dflt((1 << 0x14), *((u32*)(r5 + 0x7c)));
    _dadd(0, 0x40900000);
    _dfix();
    // str r0, [sp, #0x38]
    _dflt(*((u32*)(r5 + 0x7c)));
    _dgr(0, 0x41480000);
    // ldr r1, [sp, #0x1c]
    _dflt(r7);
    _dadd(0, 0x40900000);
    _dfix();
    // add r0, sp, #0x8c
    // str r0, [sp]
    // add r0, sp, #0x44
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0x34]
    // ldr r0, [sp, #0x28]
    // add r3, sp, #0x88
    ov96_021EAF78((r1 << 0xc), (r2 << 0xc));
    // add r0, sp, #0x98
    // str r0, [sp]
    // add r0, sp, #0x48
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x3c]
    // ldr r0, [sp, #0x2c]
    // add r3, sp, #0x94
    ov96_021EAF78((r7 << 0xc), (r2 << 0xc));
    // add r0, sp, #0x88
    // add r1, sp, #0x94
    // add r2, sp, #0x7c
    VEC_Subtract();
    // add r0, sp, #0x7c
    VEC_Mag();
    // ldr r2, [sp, #0x44]
    // ldr r1, [sp, #0x48]
    // add r1, r2, r1
    // add r0, r4, r6
    // add r0, #0x98
    // add r0, sp, #0x70
    // str r1, [r0]
    *((u32*)(*((u8*)r0) + 4)) = 0;
    *((u32*)(*((u8*)r0) + 8)) = 0;
    // ldr r1, [sp, #0x30]
    // add r0, sp, #0x7c
    VEC_DotProduct(*((u8*)r0), 0);
    // add r0, #0x8c
    VEC_Mag(r4);
    // add r0, #0x8b
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    // add r1, r4, r2
    _fmul(0x45800000, *((u32*)(r1 + 0x20)), (0x1c * r1));
    _ffix();
    // add r1, #0x8c
    // add r2, sp, #0x70
    // add r3, #0x8c
    VEC_MultAdd(r4, r5);
    // add r0, #0x8c
    VEC_Mag(r5);
    // add r1, sp, #0x64
    // str r0, [r1]
    *((u32*)((0xb << 0xc) + 4)) = 0;
    *((u32*)((0xb << 0xc) + 8)) = 0;
    // add r0, #0x8c
    VEC_Normalize(r5, r5);
    // add r1, #0x8c
    // add r2, sp, #0x64
    VEC_MultAdd((0xb << 0xc), r5, r5);
    // ldr r0, [sp, #0x14]
    // add r0, r5, r1
    // add r1, #0x30
    *((u32*)(r0 + 0x24)) = 0;
    // add r1, #0x30
    // strb r2, [r1]
    // add r0, #0x2f
    // add r0, #0xa4
    // strb r1, [r0]
    // str r3, [sp]
    // add r1, #0xd0
    // add r2, #0x8b
    // ldr r0, [sp, #8]
    ov96_021E8228(r5, *((u8*)r5), *((u8*)r5), 1);
    // add r3, sp, #0x58
    // str r7, [r3]
    *((u32*)(r3 + 4)) = 0;
    *((u32*)(r3 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // add r2, #0x8c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x20]
    // add r0, r4, r1
    // add r1, #0x30
    *((u32*)(*((u32*)r3) + 0x24)) = 0;
    // add r1, #0x30
    // strb r2, [r1]
    // add r0, #0x2f
    // add r0, #0xa4
    // strb r1, [r0]
    // str r3, [sp]
    // add r1, #0xd0
    // add r2, #0x8b
    // ldr r0, [sp, #8]
    ov96_021E8228(r4, *((u8*)r4), *((u8*)r4), 1);
    // add r0, r4, r6
    // add r0, #0x98
    GF_AssertFail(*((u8*)r0));
    // ldr r0, [sp, #0x18]
    // add r0, r5, r0
    // add r0, #0x98
    GF_AssertFail(*((u8*)r0));
    // add r1, r5, r6
    // add r1, #0x98
    // strb r0, [r1]
    // ldr r1, [sp, #0x18]
    // add r1, r4, r1
    // add r1, #0x98
    // strb r0, [r1]
    // ldr r1, [sp, #0x24]
    // add r2, sp, #0x4c
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    // str r0, [sp, #0x24]
    // add r0, sp, #0x88
    // add r1, sp, #0x94
    VEC_Subtract(1, 0);
    // add r0, sp, #0x4c
    VEC_Normalize(r0);
    // ldr r0, [sp, #0x48]
    // add r1, sp, #0x4c
    // add r2, sp, #0x94
    VEC_MultAdd((r0 << 0xc), r1);
    // ldr r6, [sp, #0x4c]
    _dflt(r6);
    _dgeq(0, 0x41500000);
    _dflt(r6);
    _dsub(0, 0x41500000);
    _dfix();
    // str r0, [sp, #0x4c]
    // add r3, sp, #0x4c
    // ldr r2, [sp, #0x10]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xa9
    // strb r1, [r0]
    // add r0, #0xa9
    // strb r1, [r0]
    // str r0, [sp]
    // add r1, #0xd0
    // add r5, #0x8b
    // ldr r0, [sp, #8]
    ov96_021E8228(1, *((u8*)r5), *((u8*)r5), 4);
    // str r0, [sp]
    // add r1, #0xd0
    // add r2, #0x8b
    // ldr r0, [sp, #8]
    ov96_021E8228(1, *((u8*)r4), *((u8*)r4), 4);
    // add r1, r4, r6
    // add r1, #0x98
    // strb r0, [r1]
    // ldr r0, [sp, #0x18]
    // add r1, r0, r5
    // add r1, #0x98
    // strb r0, [r1]
    // add r5, #0xd4
    // ldr r0, [sp, #0x18]
    // add r4, #0xd4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
}




void ov96_021FFAEC(void) {
    // ldmia r5!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov96_021FFB44(void) {
    // add r2, #0x20
    // sub r2, r1, r2
    // bpl _021FFB64
    // asr r1, r2, #2
    // add r1, r2, r1
    // asr r1, r1, #3
}




void ov96_021FFB7C(void) {
    // sub r1, r0, r1
    // bpl _021FFB88
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r1, r0, #3
}




void ov96_021FFBD8(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov96_021FFC34(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u16*)(r0 + 0xe)) = r1;
    _s32_div_f(r1, 0xa, ov96_0221C5F0);
    _s32_div_f(r5, 0xa);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    Sprite_SetAnimCtrlSeq(*((u32*)r4), (r6 + 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 4)), (r5 + 1));
    // str r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    Sprite_SetAnimCtrlSeq(*((u32*)r4), (r5 + 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 4)), 0);
    // add r1, sp, #0x18
    ov96_021EB588(*((u32*)(r4 + 8)));
    // add r1, sp, #0xc
    Sprite_SetMatrix(*((u32*)r4));
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r4 + 4)));
    ov96_021EB52C(*((u32*)(r4 + 8)), 1, 1);
    Sprite_SetDrawFlag(*((u32*)r4), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 4)), 1);
    *((u16*)(r4 + 0xc)) = 0x3c;
    PlaySE(0x0000088F);
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 0xc)) - 1);
    *((u16*)(r4 + 0xc)) = 0;
    ov96_021EB52C(*((u32*)(r4 + 8)), 1, 0);
    Sprite_SetDrawFlag(*((u32*)r4), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
}




void ov96_021FFD4C(void) {
    AddWindow(*((u32*)r0), (r0 + 4), ov96_0221C5C4);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r4), 3, 0, 1);
    LoadFontPal0(0, (0x1e << 4), *((u32*)(r4 + 0x14)));
}




void ov96_021FFD80(void) {
    // str r1, [sp, #0x10]
    FillWindowPixelBuffer((r0 + 4), 0);
    _dflt((0xa * r4));
    _ddiv(0, 0x40900000);
    _dfix();
    GF_AssertFail();
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r5 + 0x14)));
    MessageFormat_New(*((u32*)(r5 + 0x14)));
    // str r3, [sp]
    // str r1, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(0, 2);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(r4, 1, r7, 1);
    ReadMsgData_ExpandPlaceholders(r4, r6, 0xa2, *((u32*)(r5 + 0x14)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((r5 + 4), 4, r0, 0);
    String_Delete(r7);
    MessageFormat_Delete(r4);
    DestroyMsgData(r6);
    CopyWindowToVram((r5 + 4));
}




void ov96_021FFE38(void) {
}




void ov96_021FFE5C(void) {
    // add r3, r0, r1
    // add r2, r0, r1
    // add r1, #0xbb
    // add r6, #0xcd
    // add r1, r2, r1
    // add r1, #0x60
    // add r2, #0xd9
    // strb r4, [r3, r5]
    // add r2, r0, r1
    // strb r0, [r3, r5]
    // strb r0, [r3, r5]
    GF_AssertFail(4, *((u32*)(*((u8*)r2) + (0xe << 6))), *((u8*)r2));
    // strb r4, [r3, r5]
}




void ov96_021FFEE8(void) {
    // add r0, #0xf0
    // add r1, r4, r0
    // and r1, r2
    // add r1, r4, r1
}




void ov96_021FFF3C(void) {
    // str r2, [sp]
    Heap_Alloc((0x1a << 4));
    MI_CpuFill8(0, (0x1a << 4));
    // str r6, [r7]
    // ldr r0, [sp]
    *((u32*)(r7 + 8)) = r4;
    *((u32*)(r7 + 4)) = r0;
    ov96_02200DF8(r7);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, r6);
    *((u32*)(r7 + 0x2c)) = r0;
    MessageFormat_New(r6);
    *((u32*)(r7 + 0x30)) = r0;
    String_New(0xb, r6);
    // str r0, [r5, r1]
    // ldr r0, [sp]
    ov96_021E5F24((0x17 << 4));
    // ldr r0, [sp]
    PokeathlonCourse_GetParticipantUnk04(r0);
    // add r1, #0x12
    CopyU16ArrayToString(*((u32*)(r7 + (0x17 << 4))), r0);
    // add r4, #0x28
    ov96_02200BD8(r7, 1);
    ov96_02200C40(r7);
    // strh r1, [r7, r0]
    // strh r1, [r7, r0]
}




void ov96_021FFFE8(void) {
    // str r0, [sp]
    // add r5, #8
    // ldr r4, [sp]
    // add r0, #0xbc
    // ldr r0, [sp]
    // ldr r4, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, #0xc
    // ldr r0, [sp]
    // add r0, #0x1c
    // ldr r0, [sp]
}




void ov96_02200068(void) {
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
    // str r0, [sp]
    // add r3, #0x38
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_022000E4(void) {
    // add r4, sp, #8
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r7, [sp]
    ov96_021EB2BC(r1, 0x5d, 9, *((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(r5, 0x5d, 6, *((u32*)r4));
    ov96_021EB334(r5, 0x5d, 0xa, *((u32*)r4));
    ov96_021EB36C(r5, 0x5d, 0xa, *((u32*)r4));
    // str r0, [sp]
    ov96_021EB2BC(r5, 0xb2, 0xd, 0x65);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(r5, 0xb2, 0xa, 0x65);
    ov96_021EB334(r5, 0xb2, 0xc, 0x65);
    ov96_021EB36C(r5, 0xb2, 0xb, 0x65);
}




void ov96_02200180(void) {
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp]
    ov96_021EB408(r1, 3, 2, 0x65);
    // str r0, [sp]
    ov96_021EB408(r5, 3, 2, 0x65);
    // str r6, [sp]
    ov96_021EB408(r5, 3, 2, 0x65);
    // str r7, [sp]
    ov96_021EB408(r5, 3, 2, 0x65);
    // str r6, [sp]
    ov96_021EB408(r5, 3, 2, 0x65);
    // ldr r4, [sp, #4]
    ov96_021EB4F4(r5, 0x65, 2);
    *((u32*)(r4 + 0x48)) = r0;
    ov96_021EB4F4(r5, 0x65, 3);
    *((u32*)(r4 + 0x54)) = r0;
    ov96_021EB4F4(r5, 0x65, 8);
    *((u32*)(r4 + 0x50)) = r0;
    ov96_021EB4F4(r5, 0x65, 0xa);
    *((u32*)(r4 + 0x4c)) = r0;
    ov96_021EB564(*((u32*)(r4 + 0x48)), r6);
    ov96_021EB564(*((u32*)(r4 + 0x54)), (r6 + 4));
    ov96_021EB564(*((u32*)(r4 + 0x50)), 0xa);
    // add r4, #0x20
    // str r0, [sp]
    ov96_021EB3E4(r5, 3, 2, 0x65);
    ov96_021EB52C(1, 1);
    ov96_021EB564(r4, 0xb);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    ov96_021EB588(r4);
    // ldr r1, [sp, #4]
    ov96_02200C8C(r5);
    // ldr r4, [sp, #4]
    // str r0, [sp, #0xc]
    ov96_021EB5E8(r5);
    // ldr r3, [sp, #4]
    // ldr r0, [sp, #8]
    ov96_021EA2C4(r0, 3, *((u32*)r3));
    // str r0, [r4, r1]
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x5f << 2))), 1);
    // add r1, sp, #0x1c
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    Sprite_SetMatrix(*((u32*)(r4 + (0x5f << 2))));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x5f << 2))), *((u8*)r6));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_022002F8(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #0x10]
    // add r0, #0xec
    // str r0, [sp, #0x10]
    // add r1, #0xbc
    // str r0, [r1]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #8]
    // add r2, #0xbc
    // ldr r0, [sp, #0x14]
    // add r0, #0xbc
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r1, r6, r7
    // strb r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r7, sp, #0x18
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r4, #0x20
}




void ov96_022003E8(void) {
    // str r0, [sp, #0xc]
    // add r7, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // ldr r0, [sp, #0xc]
    // add r5, #0x10
    // add r4, #8
    // str r0, [sp, #0xc]
}




void ov96_02200454(void) {
    // add r7, r5, r0
    // add r2, r5, r6
    // add r7, r5, r0
    // add r2, r5, r6
}




void ov96_022004B4(void) {
    // add r0, r5, r0
    // str r0, [sp]
    // add r0, r4, r0
    // add r6, r6, r0
    // add r7, #0xec
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r1, r2, r1
    // add r2, r5, r6
    // ldr r0, [sp]
}




void ov96_0220050C(void) {
    // sub r1, r1, r3
    // ror r1, r0
    // add r0, r3, r1
    // asr r0, r1, #9
    // add r0, r1, r0
    // sub r0, r0, r1
    // ldmia r6!, {r0, r1}
    // add r3, sp, #0x30
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldmia r6!, {r0, r1}
    // add r3, sp, #0x24
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // asr r0, r2, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotZ33_(*((u32*)ov96_0221C754), ((*((u32*)ov96_0221C754) << 1) << 1), (((*((u32*)ov96_0221C754) << 1) + 1) << 1), FX_SinCosTable_);
    // add r0, sp, #0x30
    // add r1, sp, #0
    MTX_MultVec33(r0);
    // add r0, sp, #0x24
    // add r1, sp, #0x30
    // add r2, sp, #0x3c
    VEC_Add();
    // add r0, r5, r4
    // add r1, sp, #0x3c
    ov96_021EB588(*((u32*)(r0 + 0x48)));
    // add r0, r5, r4
    // add r1, sp, #0x3c
    ov96_021EB588(*((u32*)(r0 + 0x54)));
    // add r0, r5, r4
    // add r1, sp, #0x3c
    ov96_021EB588(*((u32*)(r0 + 0x4c)));
    // add r0, r5, r4
    // add r1, sp, #0x3c
    ov96_021EB588(*((u32*)(r0 + 0x50)));
}




void ov96_022005B4(void) {
    _ffltu(r2);
    _f2d();
    _ddiv(0x9999999A, 0x40599999);
    _dfixu();
    // str r0, [sp, #0x1c]
    _s32_div_f(r4, 0xa);
    _s32_div_f(((r0 << 0x18) >> 0x18), 5);
    // add r0, sp, #0x20
    *((u8*)(r0 + 2)) = (r1 << 2);
    _s32_div_f(r6, 5);
    // add r0, sp, #0x20
    // strb r1, [r0]
    _s32_div_f(r4, 0xa);
    _s32_div_f(((r1 << 0x18) >> 0x18), 5);
    // add r0, sp, #0x20
    *((u8*)(r0 + 3)) = (r1 << 2);
    _s32_div_f(r4, 5);
    // add r0, sp, #0x20
    *((u8*)(r0 + 1)) = (r0 << 3);
    // str r7, [sp]
    // str r6, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x20
    // add r0, #2
    // add r2, #0xe
    // str r0, [sp, #0xc]
    // add r0, sp, #0x20
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyRectToBgTilemapRect(*((u32*)(r5 + 8)), 5, (((0 << 2) << 0x18) >> 0x18), 8);
    // ldr r0, [sp, #0x1c]
    _s32_div_f(((r4 + 1) << 0x18), 5);
    // ldr r0, [sp, #0x1c]
    _s32_div_f(5);
    // str r1, [sp]
    // str r3, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyRectToBgTilemapRect(*((u32*)(r5 + 8)), 5, 0x18, 8);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 8)), 5);
}




void ov96_022006BC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022006DA: ; jump table
    // add r1, r4, r0
    // sub r0, #0x14
    // add r3, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // sub r0, #0x18
    // add r1, r4, r1
    // sub r0, #0x10
    // add r1, r4, r1
    // add r1, sp, #0x18
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // sub r0, #0x18
    // add r1, r4, r1
    // add r1, sp, #0x18
    // sub r0, #0x10
    // add r1, r4, r1
    // add r1, sp, #0x18
    // str r0, [r4, r5]
    // add r0, r4, r1
    // add r1, #8
    // strh r1, [r0, r2]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4, r3]
    // str r0, [r4, r5]
    // add r1, r4, r0
    // sub r0, #0x14
    // add r3, sp, #0xc
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // sub r0, #0x18
    // add r1, r4, r1
    // sub r0, #0x10
    // add r1, r4, r1
    // add r1, sp, #0xc
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x10]
    // sub r0, #0x18
    // add r1, r4, r1
    // add r1, sp, #0xc
    // sub r0, #0x10
    // add r1, r4, r1
    // add r1, sp, #0xc
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4, r3]
    // str r0, [r4, r5]
    // add r1, r4, r0
    // sub r0, #0x14
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // sub r0, #0x18
    // add r1, r4, r1
    // sub r0, #0x10
    // add r1, r4, r1
    // ldr r1, [sp, #4]
    // str r0, [sp, #4]
    // sub r0, #0x18
    // add r1, r4, r1
    // sub r0, #0x10
    // add r1, r4, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4, r3]
    // str r0, [r4, r5]
}




void ov96_02200900(void) {
    GF_AssertFail();
    // add r3, r4, r1
    // add r2, #0x20
    // strh r2, [r3, r0]
    // strh r2, [r3, r0]
    // add r2, r4, r1
    // strh r1, [r2, r0]
    // add r2, r4, r1
    // strh r1, [r2, r0]
}




void ov96_02200950(void) {
    // str r3, [sp]
    // add r7, r5, r3
    // ldr r6, [sp, #0x18]
    // strb r2, [r7, r4]
    // ldr r0, [sp]
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, #0x58
    // add r7, #0x4c
    // add r0, r5, r4
    // add r0, #0x58
    // add r7, #0x4c
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, #0x58
    // strb r6, [r0]
}




void ov96_02200A18(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}




void ov96_02200A64(void) {
    // mul r0, r1
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}




void ov96_02200B04(void) {
    // add r1, sp, #4
    // strb r2, [r1]
    // add r4, sp, #4
    // add r3, sp, #4
    // strb r2, [r4, r1]
    // add r4, sp, #4
    // str r0, [sp]
    // add r0, r5, r0
    // add r0, r5, r0
    // ldr r1, [sp]
    // add r0, r5, r0
    // add r1, #0xb
    // add r0, r5, r0
    // ldr r0, [sp]
    // str r0, [sp]
}




void ov96_02200BC8(void) {
    // add r1, r0, r1
}




void ov96_02200BD8(void) {
    // add r0, #0xc
    FillWindowPixelBuffer(0);
    // add r5, r4, r2
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferString(*((u32*)(r4 + 0x30)), 0, *((u32*)(r5 + (0x17 << 4))), 2);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r4 + 0x30)), *((u32*)(r4 + 0x2c)), 0x9a, *((u32*)r4));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    String_Delete(r5);
    // add r4, #0xc
    CopyWindowToVram(r4);
}




void ov96_02200C40(void) {
    // add r0, #0x1c
    FillWindowPixelBuffer(0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x2c)), 0x00000131);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x1c
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    // add r5, #0x1c
    CopyWindowToVram(r5);
}




void ov96_02200C8C(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r5, sp, #0x14
    // add r4, sp, #0xc
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021EB408(((*((u32*)r4) << 0x18) >> 0x18), 3, 2, ((*((u32*)r5) << 0x18) >> 0x18));
    // ldr r4, [sp, #8]
    // add r7, sp, #0xc
    // add r6, sp, #0x14
    // ldr r0, [sp, #4]
    ov96_021EB4F4(((*((u32*)(r6 + 1)) << 0x18) >> 0x18), ((*((u32*)r7) << 0x18) >> 0x18));
    // str r0, [r4, r1]
    ov96_021EB5B8(*((u32*)(r4 + (0x15 << 4))), (0x15 << 4));
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x1c]
    // sub r2, r1, r5
    // add r1, #0x30
    // add r1, r2, r1
    // str r1, [sp, #0x20]
    // add r1, sp, #0x1c
    Sprite_SetMatrix((2 << 0x14), ((0x58 * r2) << 0xc));
    ov96_021EB52C(*((u32*)(r4 + (0x15 << 4))), 1, 1);
    // ldr r0, [sp, #4]
    ov96_021EB4F4(0x65, 0x10);
    // str r0, [r4, r1]
    ov96_021EB564(*((u32*)(r4 + (0x56 << 2))), 8);
    // add r1, sp, #0x1c
    ov96_021EB588(*((u32*)(r4 + (0x56 << 2))));
    ov96_021EB52C(*((u32*)(r4 + (0x56 << 2))), 1, 0);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov96_02200D7C();
}




void ov96_02200D7C(void) {
    // str r1, [sp]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0xc
    // str r0, [sp, #4]
    ov96_021EB5EC(r0, *((u32*)(*((u32*)(ov96_0221C728 + 0x18)) + (0 << 2))), 0);
    ov96_021EB5EC(r7, r5, 1);
    sub_0200AF00(r6);
    SpriteTransfer_GetPaletteProxy(r5, r0);
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r5, r1, r0
    NNS_G2dGetImageLocation(r6, 2);
    // str r0, [r5, r1]
    // ldr r0, [sp, #8]
    NNS_G2dGetImagePaletteLocation(2);
    // str r0, [r5, r1]
}




void ov96_02200DF8(void) {
    // add r1, #0xc
    AddWindow(*((u32*)(r0 + 8)), r0, ov96_0221C760);
    // add r1, #0x1c
    AddWindow(*((u32*)(r4 + 8)), r4, ov96_0221C768);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 8)), 4, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)r4));
}




void ov96_02200E3C(void) {
    // sub r2, r1, r5
    // strb r5, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r1, [r4, r0]
}




void ov96_02200E78(void) {
    // str r2, [r0, r1]
}




void ov96_02200E80(void) {
    // asr r6, r3, #8
    // asr r3, r3, #0x10
    // add r6, #0x20
    // add r4, r7, r4
    // asr r4, r4, #1
    // sub r3, r3, r4
    // add r3, r4, r3
    // asr r3, r3, #1
    // sub r3, r6, r3
    // add r0, #0x14
}




void ov96_02200EEC(void) {
}




void ov96_02200EF4(void) {
    // strb r3, [r5, r1]
    // sub r1, #9
    // str r3, [r5, r1]
    // strb r1, [r5, r0]
    // add r0, #8
    // add r4, r0, r1
    GF_AssertFail(*((u8*)(r1 + (0xf7 << 2))), *((u8*)(r1 + ((0xf7 << 2) + 5))), 4, 1);
    ov96_02200F84(r6, r5, ((r4 << 0x18) >> 0x18), r7);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // str r1, [r5, r0]
}




void ov96_02200F84(void) {
    // str r2, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    // str r0, [sp, #0x14]
    // str r3, [sp, #0x10]
    // add r1, #0x9d
    // add r1, #0x8b
    // add r1, r0, r1
    // add r1, #0x30
    // add r0, #0xa9
    // add r2, sp, #0x4c
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // stmia r2!, {r0}
    // ldr r7, [sp, #8]
    // add r5, sp, #0x5c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, sp, #0x44
    // str r0, [sp]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // add r0, #0x8b
    // add r2, #0x80
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r3, sp, #0x48
    ov96_021EB0A4(*((u32*)(*((u32*)r5) + (*((u8*)*((u32*)r5)) << 2))), *((u32*)(*((u32*)r5) + 0x7c)), (*((u32*)r5) >> 0x14), *((u32*)*((u32*)r5)));
    // add r0, sp, #0x3c
    // str r0, [sp]
    // add r0, #0x8b
    // ldr r1, [sp, #0x48]
    // ldr r2, [sp, #0x44]
    // add r3, sp, #0x40
    ov96_021EB03C(*((u32*)(r4 + (*((u8*)r4) << 2))), (r1 << 0xc), (r2 << 0xc));
    // ldr r1, [sp, #0x40]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // ldr r1, [sp, #0x3c]
    *((u32*)(r5 + 8)) = (r0 >> 0x14);
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // ldr r1, [sp, #8]
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0xc)) = ((r0 >> 0x14) >> 0x14);
    // add r4, r1, r6
    // sub r0, #0x20
    _s32_div_f(((r0 >> 0x14) >> 0x14), 0x28);
    // strb r0, [r4, r1]
    GF_AssertFail(*((u8*)(r4 + (0xa6 << 2))), (0xa6 << 2));
    // add r7, #0x10
    // add r5, #0x10
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x5c
    // add r0, r1, r0
    // ldr r2, [sp, #8]
    // str r0, [sp, #0x28]
    // add r3, sp, #0x9c
    // add r6, #0x40
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r2, #0x14
    // add r3, #0x14
    // ldr r0, [sp, #0x28]
    // add r4, sp, #0x5c
    // sub r6, #0xa0
    // add r0, #8
    ov96_0220144C((0 + 1), 0);
    // add r4, #0x10
    // add r4, sp, #0x9c
    ov96_0220144C((r4 + 4), 0x50);
    // add r4, #0x14
    // ldr r4, [sp, #8]
    // strh r5, [r4, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // ldr r0, [sp, #0x28]
    // add r0, #0x14
    // add r1, r0, r6
    // str r1, [r4, r0]
    // asr r0, r5, #1
    // add r0, r5, r0
    // asr r1, r0, #2
    // add r1, #0x34
    // str r1, [r4, r0]
    LCRandom((0x2a << 4), ((0 << 0x1e) * 0x28), (0 >> 0x1f));
    _s32_div_f(0x28);
    // ldr r0, [sp, #0x28]
    // add r0, r0, r6
    // add r1, r0, r1
    // str r1, [r4, r0]
    LCRandom((0xa9 << 2));
    _s32_div_f(0x28);
    // add r7, #0x20
    // add r1, r7, r1
    // str r1, [r4, r0]
    // add r4, #0x14
    // ldr r3, [sp, #8]
    // strh r1, [r3, r0]
    // add r3, #0x14
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // add r4, sp, #0x4c
    // str r6, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // add r7, sp, #0x5c
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x28]
    // add r1, #0xa0
    // sub r0, r0, r2
    // bmi _022011F2
    // ldr r1, [sp, #8]
    // add r2, r1, r5
    // ldr r2, [sp, #0x1c]
    // str r1, [r4]
    // str r1, [r4]
    _s32_div_f(*((u32*)(r7 + 8)), 0x28, *((u32*)((0x14 * 0x20) + 8)));
    GF_AssertFail((r0 << 0x18), ((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // ldrsh r1, [r0, r1]
    // strh r2, [r0, r1]
    // mvn r1, r1
    // ldr r0, [sp, #8]
    // add r1, r0, r5
    // ldr r1, [sp, #0x1c]
    // str r0, [r4]
    // add r7, #0x10
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x9c
    // add r0, #0x28
    // mov ip, r0
    // ldr r0, [sp, #0x28]
    // add r3, sp, #0x4c
    // add r0, #0xa0
    // sub r0, r1, r5
    // add r1, r7, r0
    // ldr r0, [sp, #0x20]
    // mov r0, ip
    // str r0, [r3]
    // str r0, [r3]
    // ldr r0, [sp, #0x30]
    // add r2, #0x14
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, #0x28
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #8]
    // add r1, sp, #0x4c
    // asr r6, r4, #1
    // add r6, r4, r6
    // asr r6, r6, #2
    // ldrsh r2, [r3, r5]
    // add r2, r2, r6
    // strh r2, [r3, r0]
    // add r3, #0x14
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, r0, r6
    // add r0, r0, r3
    // ldrsh r6, [r0, r4]
    *((u16*)((0xab << 2) + 0x28)) = ((0 * 0x14) + 3);
    // ldrsh r6, [r0, r5]
    *((u16*)((0xab << 2) + 0x3c)) = (((0 * 0x14) + 3) + 3);
    // ldr r0, [sp, #0x28]
    // add r0, #0x8b
    // add r0, r2, r0
    _fleq(*((u32*)((0x1c * *((u8*)*((u32*)(0xab << 2)))) + 0x24)), 0x41A00000, *((u32*)(0xab << 2)), (0xab << 2));
    // ldr r0, [sp, #8]
    // add r0, r0, r6
    // add r0, r0, r3
    // ldrsh r6, [r0, r4]
    *((u16*)(r0 + 0x28)) = ((0 * 0x14) - 2);
    // ldrsh r6, [r0, r5]
    *((u16*)(r0 + 0x3c)) = (((0 * 0x14) - 2) - 2);
    // ldr r0, [sp, #0x2c]
    // add r0, #8
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // add r0, #0x8b
    _s32_div_f((*((u8*)*((u32*)r0)) + 1), 3, (0 + 1), (0xab << 2));
    // add r0, r4, r0
    // add r0, #0x30
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #8]
    ov96_0220146C((*((u8*)(0x1c * ((r1 << 0x18) >> 0x18))) - 5), ((r1 << 0x18) >> 0x18));
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x28]
    // add r0, sp, #0x34
    // str r0, [sp]
    // add r0, #0x8b
    // add r3, sp, #0x38
    // ldr r1, [sp, #0x28]
    ov96_021EB0A4(*((u32*)(*((u32*)0x10) + (*((u8*)*((u32*)0x10)) << 2))), *((u32*)(*((u32*)0x10) + 8)), *((u32*)(r2 + 0xc)));
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #0x28]
    // add r0, #0xb0
    // str r1, [r0]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x28]
    // add r0, #0xb4
    // str r1, [r0]
    // ldr r1, [sp, #0x28]
    // add r1, #0xb8
    // str r0, [r1]
    // ldr r1, [sp, #0x28]
    // add r1, #0xbc
    // str r2, [r1]
    // ldr r1, [sp, #0x28]
    // add r1, #0xc0
    // str r2, [r1]
    // ldr r1, [sp, #0x28]
    // add r1, #0xc4
    // str r0, [r1]
    // ldr r0, [sp, #0x28]
    // add r0, #0xaa
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // add r0, #0x9d
    // strb r1, [r0]
    // ldr r0, [sp, #0x28]
    // add r0, #0x9e
    // strb r1, [r0]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #4]
    // str r1, [sp]
    // add r1, #0xd0
    // add r2, #0x8b
    ov96_021E8228(*((u32*)*((u32*)*((u32*)0))), *((u8*)*((u32*)*((u32*)*((u32*)*((u32*)0))))), *((u8*)*((u32*)*((u32*)*((u32*)*((u32*)0))))), 7);
}




void ov96_0220144C(void) {
    // add r2, r2, r1
    // str r2, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
    // add r1, r2, r1
    // str r1, [r0]
}




void ov96_0220146C(void) {
    // add r0, r0, r1
    // add r1, sp, #0
    // stmia r1!, {r0}
    // add r0, #0x14
    // add r0, sp, #0
    // add r1, sp, #0x40
    // add r0, sp, #0x40
}




void ov96_022014A4(void) {
    // mov ip, r0
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r2, sp, #4
    // mov r3, ip
    // add r2, r2, r1
    // add r3, sp, #4
    // str r4, [r3, r1]
    // ldrsh r4, [r5, r4]
    // ldrsh r5, [r5, r6]
    // str r4, [r2]
    // str r2, [r3]
    // str r3, [r2]
    // ldr r0, [sp, #8]
    // ldrsh r2, [r1, r0]
    // add r1, sp, #4
    // str r4, [r7, r5]
    // ldrsh r4, [r4, r0]
    // ldr r4, [sp]
    // str r4, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov96_02201558(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetField1ED(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220157C: ; jump table
    Heap_Create(0x5c, 0x92, (1 << 0x12));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_02201C90(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r6, 0x000005F4);
    MI_CpuFill8(0, 0x000005F4);
    Heap_Alloc(0x92, 0x28);
    // str r0, [r4, r1]
    MI_CpuFill8(*((u32*)(r4 + 0x00000598)), 0, 0x28);
    BgConfig_Alloc(0x92);
    // str r0, [r4]
    ov96_021E6670(r6, 8);
    // str r0, [sp, #0x98]
    // str r0, [sp, #0x9c]
    // str r0, [sp, #0xa0]
    PokeathlonCourse_GetHeapID(r6);
    // str r0, [sp, #0xa4]
    // add r0, sp, #0x98
    // str r3, [sp]
    ov96_021E92B0(0x16, 0x92, 0x00300010);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    *((u32*)(r4 + 0x44)) = 0x92;
    FontID_Alloc(4, 0x92);
    ov96_02201CB0(*((u32*)r4));
    ov96_02203310(r4);
    ov96_0220382C(r4, r6);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    PokeathlonCourse_IncrementField1ED(r6);
    ov96_02203A00(*((u32*)(r7 + 0x44)), *((u32*)r7), r6);
    // str r0, [r7, r1]
    PokeathlonCourse_GetParticipantCount(r6, (0x5e << 4));
    PokeathlonCourse_GetMode(r6);
    // sub r1, r1, r4
    ov96_02204364(*((u32*)(r7 + 0x44)), 4, r0);
    // str r0, [r7, r1]
    PokeathlonCourse_IncrementField1ED(r6, 0x000005DC);
    // add r3, sp, #0x8c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov96_021EB180(*((u32*)(r7 + 0x44)), r3, r3);
    *((u32*)(r7 + 0x48)) = r0;
    // str r0, [sp]
    ov96_021EB5C8(*((u32*)(r7 + 0x48)), 0, 0, 0);
    ov96_021EB29C(*((u32*)(r7 + 0x48)), 0, 0x6a);
    ov96_021EB29C(*((u32*)(r7 + 0x48)), 1, 0x65);
    ov96_021EB29C(*((u32*)(r7 + 0x48)), 2, 0x69);
    ov96_02201E70(*((u32*)(r7 + 0x48)));
    ov96_02203B44(*((u32*)(r7 + (0x5e << 4))), *((u32*)(r7 + 0x48)));
    ov96_021EB3A4(*((u32*)(r7 + 0x48)));
    ov96_021E9A78(*((u32*)(r7 + 0x44)), 0x000004E7, 1);
    // str r0, [r7, r1]
    ov96_021EB5E8(*((u32*)(r7 + 0x48)), 0x000005D4);
    // str r0, [sp]
    ov96_021EA854(*((u32*)(r7 + 0x44)), 9, 0x20, *((u32*)(r7 + 0x000005D4)));
    // str r0, [r7, r2]
    ov96_021E6290(r6, 0, *((u32*)(r7 + (0x000005D8 - 4))), *((u32*)(r7 + 0x48)));
    Sprite_SetDrawPriority(*((u32*)r0), 1);
    ov96_021E5F24(r6);
    ov96_02201EF0(r7, *((u32*)(r7 + 0x48)), ((r0 << 0x18) >> 0x18));
    PokeathlonCourse_IncrementField1ED(r6);
    ov96_021E5F24(r6);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x1c]
    // add r0, r1, r0
    _s32_div_f(((0 + 1) << 1), 0xc);
    // str r0, [sp, #0x24]
    // add r5, sp, #0x13c
    // add r4, sp, #0xf8
    // ldr r0, [sp, #0x24]
    _s32_div_f(((r1 << 0x18) >> 0x18), 0xc);
    // str r0, [sp, #0x20]
    _s32_div_f(((r1 << 0x18) >> 0x18), 3);
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    _s32_div_f(3);
    // str r0, [sp, #0x58]
    // ldr r1, [sp, #0x58]
    // ldr r2, [sp, #0x14]
    ov96_021E6168(r6, r5);
    // ldr r1, [sp, #0x58]
    // ldr r2, [sp, #0x14]
    ov96_021E60C0(r6);
    ov96_021E6108();
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r0, [sp, #0x24]
    // add r5, #0x10
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // add r2, sp, #0x1cc
    ov96_02203B8C(*((u32*)(r7 + (0x5e << 4))), *((u32*)(r7 + 0x48)));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r1
    // add r4, r7, r0
    // add r0, sp, #0x80
    // str r1, [r0]
    *((u32*)((0 << 5) + 4)) = 0;
    *((u32*)((0 << 5) + 8)) = 0;
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x13c
    // add r0, #9
    // add r3, r1, r0
    // str r1, [sp]
    // add r1, sp, #0x13c
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(*((u32*)(r3 + 0xc)) + ((0 << 5) << 4))), *((u8*)(r3 + 7)), 0, ((*((u16*)(r3 + 2)) << 0x18) >> 0x18));
    // str r1, [sp, #0x80]
    // add r0, r0, r1
    // str r1, [sp, #0x84]
    // sub r0, r1, r0
    // str r0, [sp, #0x84]
    // add r1, sp, #0x80
    ov96_021EB588(*((u32*)(r4 + 0x00000418)), (r0 << 0xc));
    // ldr r0, [sp, #0x18]
    // add r5, #0x32
    // add r4, #0x20
    // str r0, [sp, #0x18]
    // str r0, [sp, #0xfc]
    // str r1, [sp, #0xf8]
    // str r1, [sp, #0x100]
    // str r0, [sp, #0x104]
    // str r0, [sp, #0x108]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r2, sp, #0x13c
    // add r3, sp, #0xf8
    ov96_021EA8A8(*((u32*)(r7 + 0x000005D8)), 9);
    PokeathlonCourse_IncrementField1ED(r6);
    ov96_021EAA00(*((u32*)(r7 + 0x000005D8)));
    // add r2, sp, #0x74
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)r7), ov96_0221C7D0);
    PokeathlonCourse_SetField1F4(r6, 1);
    ov96_021E5F24(r6);
    // str r1, [sp, #0x50]
    // add r0, r1, r0
    _s32_div_f(((r0 + 1) << 1), 0xc);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x50]
    ov96_021EAA04(*((u32*)(r7 + 0x000005D8)), ((r1 << 0x18) >> 0x18));
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    // str r0, [sp, #0x4c]
    ov96_021EAB38(*((u32*)r5), 1);
    // ldr r0, [sp, #0x34]
    _s32_div_f(0xc);
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x50]
    _s32_div_f(*((u32*)((r1 << 0x18) >> 0x18)), 3);
    // add r1, sp, #0x74
    // ldr r0, [sp, #0x4c]
    ov96_021EAC0C(*((u32*)(r0 + (r0 << 2))), (r0 << 2));
    // ldr r0, [sp, #0x4c]
    // ldr r1, [sp, #0x44]
    ov96_021EAF94(r4);
    // add r0, sp, #0x68
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldr r0, [sp, #0x4c]
    ov96_021EAA20(0);
    ov96_021E8BB0();
    // ldr r0, [sp, #0x44]
    // sub r4, #0x28
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x44]
    // sub r4, #0x19
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x48]
    // add r1, r7, r0
    // add r1, sp, #0x68
    ov96_021EB588(*((u32*)(r1 + 0x00000418)));
    // add r1, sp, #0x68
    ov96_021EB588(*((u32*)(r5 + 0x70)));
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x4c]
    // add r1, #0x20
    ov96_021EABA8(*((u8*)r1));
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x50]
    // add r0, sp, #0xa8
    ReadWholeNarcMemberByIdPair((((((r0 + 1) + 4) + 4) + 1) + 1), 0xaa, 3);
    // strh r1, [r7, r0]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x64]
    // add r0, #0xb8
    // str r0, [sp, #0x64]
    // add r0, r7, r0
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x40]
    // add r2, r7, r0
    // strb r1, [r2, r0]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0x38]
    // add r5, r4, r0
    // ldr r0, [sp, #0x5c]
    // add r0, r0, r1
    // ldr r2, [sp, #0x60]
    // str r0, [sp, #0x3c]
    // str r0, [sp]
    // add r1, sp, #0xa8
    ov96_0220329C(r6, (r5 << 5), ((0 << 0x18) >> 0x18));
    ov96_021E5F24(r6);
    // ldr r5, [sp, #0x64]
    // ldr r2, [sp, #0x3c]
    // add r3, r5, r3
    ov96_022043AC(*((u32*)(r7 + 0x000005DC)), ((r5 << 0x18) >> 0x18), (0x48 * r5));
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    ov96_021E5F24(r6);
    PokeathlonCourse_GetDataCopyArea(r6);
    // add r0, #0x28
    ov96_021E8A20();
    ov96_02202738(r7, r0);
    // sub r2, #0xc
    ov96_02203D74(*((u32*)(r7 + (0x5e << 4))), *((u32*)(r7 + 0x48)), *((u32*)(r7 + (0x5e << 4))));
    ov96_021E5F24(r6);
    ov96_02201E10(r7, ((r0 << 0x18) >> 0x18));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    sub_0203A994(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(2, 3, 3, 0);
    PokeathlonCourse_IncrementField1ED(r6);
    IsPaletteFadeFinished();
    GF_heap_c_dummy_return_true(0x5c);
    GF_AssertFail();
}




void ov96_02201B18(void) {
    // ldr r0, [r4, r0]
}




void ov96_02201B34(void) {
    PokeathlonCourse_GetGraphicsSystem();
    ov96_021E9510();
    PokeathlonCourse_GetField5F0_AtIndex(r5, ((0 << 0x18) >> 0x18));
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov96_021E95F8(r5, r6, r4, r0);
    ov96_021E93B4(r6, 1);
    ov96_0221A56C(r6, 8);
    ov96_021E952C(r6);
    ov96_021E9570(r6, 8);
}




void ov96_02201B98(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    sub_0203A914();
    PokeathlonCourse_ResetField3A4(r7);
    FreeBgTilemapBuffer(*((u32*)r4), 0);
    FreeBgTilemapBuffer(*((u32*)r4), 1);
    FreeBgTilemapBuffer(*((u32*)r4), 3);
    FreeBgTilemapBuffer(*((u32*)r4), 4);
    FreeBgTilemapBuffer(*((u32*)r4), 5);
    FreeBgTilemapBuffer(*((u32*)r4), 6);
    FreeBgTilemapBuffer(*((u32*)r4), 7);
    RemoveWindow((r4 + 4));
    // add r5, #0x14
    RemoveWindow(r4);
    // add r5, #0x10
    Heap_Free(*((u32*)r4));
    ov96_021EB21C(*((u32*)(r4 + 0x48)));
    ov96_021EA894(*((u32*)(r4 + 0x000005D8)));
    ov96_021E9C0C(*((u32*)(r4 + 0x000005D4)));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov96_022043B8(*((u32*)(r4 + 0x000005DC)));
    ov96_02203A30(*((u32*)(r4 + (0x5e << 4))));
    FontID_Release(4);
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    Heap_Free(*((u32*)(r4 + 0x00000598)));
    PokeathlonCourse_FreePtr4HeapAlloc(r7);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // strh r1, [r0]
    Heap_Destroy(0x92, 0);
}




void ov96_02201C90(void) {
}




void ov96_02201CB0(void) {
    // add r3, sp, #0xc4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
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
    BgClearTilemapBufferAndCommit(r4, 7);
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_02201E10(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_02201E70(void) {
    // str r1, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_02201EF0(void) {
    // str r2, [sp, #4]
    // str r0, [sp, #0x10]
    ov96_021EB5E8(r1);
    ov96_021EA374(*((u32*)(r6 + 0x000005D4)), r0, 3, *((u32*)(r6 + 0x44)));
    *((u32*)(r5 + 0x50)) = r0;
    Sprite_SetDrawFlag(1);
    // add r0, r1, r0
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r1, sp, #0x50
    Sprite_SetMatrix(*((u32*)(r5 + 0x50)), (r7 << 0xc));
    Sprite_SetDrawPriority(*((u32*)(r5 + 0x50)), 2);
    // ldr r0, [sp, #0x10]
    // add r7, #0x10
    // str r0, [sp, #0x10]
    ov96_022038A0(r6, 0x3c);
    // add r0, #0xf9
    // strb r7, [r0]
    // str r0, [sp]
    ov96_021EB3E4(r4, 3, 3, 0x6a);
    // add r1, #0xb8
    // str r0, [r1]
    // str r0, [sp]
    ov96_021EB3E4(r4, 3, 3, 0x6a);
    // add r1, #0xbc
    // str r0, [r1]
    // str r0, [sp]
    ov96_021EB3E4(r4, 3, 3, 0x6a);
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, #0xbc
    ov96_021EB564(*((u32*)r5), 1);
    // add r0, #0xb8
    ov96_021EB630(*((u32*)r5), 0x14);
    // add r0, #0xbc
    ov96_021EB630(*((u32*)r5), (0xfa << 2));
    // add r0, #0xc0
    ov96_021EB630(*((u32*)r5), 5);
    // add r5, #0x48
    // str r0, [sp]
    ov96_021EB3E4(r4, 3, 3, 0x6a);
    // str r0, [r5, r1]
    ov96_021EB564(*((u32*)(r5 + 0x00000418)), 2);
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // add r1, sp, #0x44
    ov96_021EB588(*((u32*)(r5 + 0x00000418)));
    ov96_021EB630(*((u32*)(r5 + 0x00000418)), 4);
    // add r5, #0x20
    // str r0, [sp]
    ov96_021EB3E4(r4, 2, 1, 0x69);
    *((u32*)(r5 + 0x64)) = r0;
    ov96_021EB564(6);
    ov96_021EB630(*((u32*)(r5 + 0x64)), 2);
    // str r0, [sp]
    ov96_021EB3E4(r4, 3, 1, 0x69);
    *((u32*)(r6 + 0x4c)) = r0;
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // add r1, sp, #0x38
    ov96_021EB588(*((u32*)(r6 + 0x4c)));
    ov96_021EB564(*((u32*)(r6 + 0x4c)), 5);
    ov96_021EB52C(*((u32*)(r6 + 0x4c)), 1, 1);
    ov96_021EB630(*((u32*)(r6 + 0x4c)), 2);
    // add r3, sp, #0x14
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r0, [sp, #0xc]
    // str r0, [sp]
    ov96_021EB3E4(r4, 3, 1, 0x69);
    // ldr r1, [sp, #0xc]
    *((u32*)(r5 + 0x58)) = r0;
    ov96_021EB588();
    ov96_021EB564(*((u32*)(r5 + 0x58)), (r7 + 1));
    ov96_021EB52C(*((u32*)(r5 + 0x58)), 1, 1);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    ov96_021EB630(*((u32*)(r5 + 0x58)), 3, ((r7 + 1) >> 0x1f));
    // ldr r0, [sp, #0xc]
    // add r0, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // str r7, [sp]
    ov96_021EB3E4(r4, 3, 1, 0x69);
    *((u32*)(r6 + 0x70)) = r0;
    ov96_021EB564(0);
    ov96_021EB630(*((u32*)(r6 + 0x70)), 4);
}




void ov96_02202154(void) {
    // strb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_022021D4(void) {
    PokeathlonCourse_GetDataCopyArea();
    PokeathlonCourse_GetHeapAllocPtr4(r6);
    IsPaletteFadeFinished(*((u8*)r4));
    // strb r0, [r4]
    ov96_021E5F24(r6);
    // add r5, #0x28
    ov96_021E8A20(r5);
    // and r2, r7
    PokeathlonCourse_SetField5E0_AtIndex(r6, ((0 << 0x18) >> 0x18), ((*((u16*)r0) << 0x10) >> 0x10));
}




void ov96_0220223C(void) {
    // str r0, [sp, #4]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #4]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp, #4]
    ov96_021E5F24();
    // ldr r0, [sp, #0x24]
    // add r0, #0x28
    // str r0, [sp, #0x24]
    ov96_021E8A20(*((u8*)(r4 + (0x5d << 4))));
    ov96_02202738(r4, r0);
    // ldr r0, [sp, #0x24]
    // add r0, #0x50
    ov96_021E8A20();
    // ldr r0, [sp, #0x24]
    ov96_021E8A20();
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // strh r1, [r4, r0]
    // ldr r0, [sp, #0x24]
    // add r0, #0x28
    ov96_021E8A20(0x000005E8, (*((u16*)(r4 + 0x000005E8)) - 1), (4 - 1), r0);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // add r0, #0x50
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x34]
    // add r0, #0xd4
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x2c]
    // add r0, #0xe0
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, #0xec
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x1c]
    ov96_021E8A20(r4);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, sp, #0x94
    // str r0, [sp]
    // ldr r1, [sp, #0x28]
    ov96_022031A8(r4, ((0 << 0x18) >> 0x18), *((u8*)(r0 + 4)), *((u8*)(r0 + 5)));
    // add r1, r4, r0
    // add r0, r4, r0
    // add r0, #0xc4
    // ldr r0, [sp, #0x28]
    // add r1, r4, r0
    // strb r6, [r1, r0]
    // add r0, sp, #0x94
    // mov ip, r0
    // add r0, r4, r3
    // str r0, [sp, #0x48]
    // add r0, #0xe0
    // mov r2, ip
    // str r0, [sp, #0x48]
    // ldmia r2!, {r0, r1}
    // mov ip, r2
    // ldr r2, [sp, #0x48]
    // stmia r2!, {r0, r1}
    // mov r0, ip
    // str r1, [r0]
    // str r2, [sp, #0x48]
    // add r2, r4, r3
    // str r0, [sp, #0x88]
    // add r7, sp, #0x88
    // add r2, #0xec
    // str r0, [sp, #0x90]
    // str r0, [sp, #0x8c]
    // ldmia r7!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r4, r3
    // add r0, #0xc4
    // add r2, r4, r3
    // add r6, r0, r1
    // ldmia r6!, {r0, r1}
    // add r2, #0xc8
    // stmia r2!, {r0, r1}
    // add r1, r4, r3
    // str r0, [r2]
    // add r1, #0xc4
    // str r0, [r1]
    // add r1, r4, r3
    // add r1, #0xfc
    // strh r0, [r1]
    // add r1, r4, r3
    // add r1, #0xfe
    // strh r0, [r1]
    // strb r1, [r4, r0]
    // ldr r0, [sp, #0x28]
    // add r1, r4, r0
    _dfltu(*((u8*)(r4 + 0x000005EA)), 0, (r0 * 0x48));
    _dls(0, 0x403E0000);
    // strb r1, [r4, r0]
    // ldr r0, [sp, #0x28]
    // add r1, r4, r0
    // str r1, [sp, #0x18]
    // add r0, sp, #0x7c
    // str r0, [sp]
    // ldr r1, [sp, #0x28]
    ov96_022031A8(r4, (((*((u8*)(r4 + 0x000005EA)) + 1) << 0x18) >> 0x18), *((u8*)(r7 + 4)), *((u8*)(r7 + 5)));
    // ldr r2, [sp, #0x18]
    // add r0, r4, r1
    // add r0, #0xfc
    // add r0, r4, r1
    // add r0, #0xfc
    // add r0, r4, r1
    // add r0, #0xfc
    // strh r2, [r0]
    // add r0, r4, r1
    // add r0, #0xfc
    // add r1, r4, r1
    // add r1, #0xfe
    // strh r0, [r1]
    // add r1, r4, r1
    // add r1, #0xfe
    // strh r0, [r1]
    // add r1, r4, r1
    // add r1, #0xfe
    // strh r0, [r1]
    // add r1, r4, r1
    // add r1, #0xfe
    // strh r0, [r1]
    // add r0, sp, #0x70
    // str r1, [r0]
    *((u32*)(3 + 4)) = 0;
    *((u32*)(3 + 8)) = 0;
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x64
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x2c]
    // add r0, sp, #0x7c
    // add r1, r1, r6
    VEC_Subtract(0x48, *((u8*)(0 + 0x000005CC)), (*((u16*)*((u16*)r0)) + 1));
    // ldr r1, [sp, #0x30]
    // add r2, sp, #0x58
    // str r0, [sp, #0x4c]
    // add r1, r1, r6
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x50]
    // add r0, sp, #0x4c
    VEC_Subtract(0);
    // ldr r0, [sp, #0x60]
    // add r3, sp, #0x64
    // add r2, r4, r6
    // ldmia r3!, {r0, r1}
    // add r2, #0xd4
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x10]
    // add r1, r4, r0
    // str r1, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x34]
    // add r0, r0, r6
    VEC_Mag((0xfe << 0x16));
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    _fflt((r1 >> 0x14));
    _f2d();
    _dgr(0, (1 << 0x1e));
    _f2d((1 << 0x1e));
    _dls(0, 0x3FF00000);
    _ffltu(*((u8*)(r4 + 0x000005EA)));
    _f2d();
    _ddiv(0, 0x403E0000);
    _dadd(0, 0x3FF00000, r0, r1);
    _d2f();
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x20]
    _f2d();
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0xc]
    _f2d(r7);
    // str r0, [sp, #0x40]
    // ldr r1, [sp, #0x14]
    _f2d(*((u32*)(r1 + 0x0000041C)));
    _dsub(0, (1 << 0x1e), r0, r1);
    // ldr r0, [sp, #0x40]
    _dmul(r7, r0, r1);
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0xc]
    _dmul(r0, r1);
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x38]
    _f2d();
    // ldr r0, [sp, #0x44]
    _ddiv(r7, r0, r1);
    _d2f();
    _f2d();
    _dgr(0, 0x40080000);
    _f2d(0x40400000);
    _dls(0, 0x3FF00000);
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x34]
    // add r0, r0, r6
    // add r1, r1, r6
    VEC_Normalize();
    _fmul(0x45800000, r7);
    _ffix();
    // ldr r1, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    // add r1, r1, r6
    // add r2, sp, #0x70
    // add r3, r3, r6
    VEC_MultAdd();
    // ldr r1, [sp, #0x14]
    // ldr r1, [sp, #0x34]
    // add r1, r1, r6
    ov96_02204320(((*((u32*)(r1 + 0x00000428)) << 0x18) >> 0x18));
    // add r1, r4, r6
    // add r1, #0xc4
    // str r0, [r1]
    // ldr r1, [sp, #0x18]
    // strb r2, [r1, r0]
    // strb r1, [r4, r0]
    // ldr r0, [sp, #0x1c]
    // add r5, #0xc
    // add r0, #0x28
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // add r1, #0xc
    // sub r1, r1, r2
    ov96_022043C0(*((u32*)(r4 + 0x000005DC)), 0x00000708, *((u16*)(r4 + 0x000005DC)));
    // ldr r0, [sp, #4]
    ov96_022033FC();
    // ldr r0, [sp, #4]
    ov96_02203468();
    ov96_02203754(r4);
    // ldr r0, [sp, #4]
    ov96_02203544(r4);
    // sub r0, #0x18
    // strb r1, [r4, r0]
    // ldr r0, [sp, #0x24]
    // add r0, #0x28
    // str r0, [sp, #0x24]
    ov96_021E8A20(0x000005E8, 0);
    ov96_02202738(r4, r0);
}




void ov96_02202738(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r0, sp, #0x2c
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    // add r0, sp, #0x24
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 6)) = 0;
    // ldr r4, [sp]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r1, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, #0xc4
    // ldr r0, [sp, #0xc]
    // lsl r1, r0
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x10]
    // add r0, #0xfb
    // str r0, [sp, #0x14]
    // add r1, #0xfb
    // strb r0, [r1]
    // add r0, #0xc8
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r7, r0, #0xc
    // add r0, #0xd0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r6, r0, #0xc
    // ldr r0, [sp, #0x1c]
    _s32_div_f((r4 >> 0x14), 3);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    _s32_div_f(3);
    // ldr r0, [sp, #0x20]
    // add r2, sp, #0x2c
    // add r0, #0xfe
    // lsl r0, r1
    // add r2, r2, r0
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0x2c
    // strb r2, [r1, r0]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r3
    // add r0, r1, r0
    // add r1, r2, r0
    // add r1, r1, r0
    // ldr r0, [sp, #8]
    *((u16*)((*((u8*)(r5 + 0x00000431)) << 0xe) + 8)) = (*((u16*)r4) << 0xc);
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0x24
    // add r2, r2, r1
    // add r1, sp, #0x24
    // strh r2, [r1, r0]
    // add r1, sp, #0x24
    // strh r2, [r1, r0]
    // ldr r0, [sp, #0xc]
    // add r4, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r5, #0x20
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r2, [sp, #4]
    // add r0, sp, #0x24
    // add r1, sp, #0x2c
    // add r4, r5, r4
    // strh r4, [r2]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #4]
    *((u32*)(((((((*((u8*)(r5 + 0x00000431)) << 0xe) << 1) + 2) + 2) + 1) + 2) + 0x20)) = (0x000003E7 + 1);
    // ldr r0, [sp]
    // add r1, #0x18
    // ldr r0, [sp, #0x18]
    // add r2, r0, r2
    // ldr r0, [sp, #4]
    *((u32*)(*((u8*)(((((((*((u8*)(r5 + 0x00000431)) << 0xe) << 1) + 2) + 2) + 1) + 2) + (0x5d << 4))) + 0x20)) = (*((u8*)(((((((*((u8*)(r5 + 0x00000431)) << 0xe) << 1) + 2) + 2) + 1) + 2) + (0x5d << 4))) << 0x18);
    // ldr r0, [sp]
    // add r0, #0x1e
    _s32_div_f(*((u16*)(*((u8*)(((((((*((u8*)(r5 + 0x00000431)) << 0xe) << 1) + 2) + 2) + 1) + 2) + (0x5d << 4))) + (0x5d << 4))), 0x1e, (*((u8*)(((((((*((u8*)(r5 + 0x00000431)) << 0xe) << 1) + 2) + 2) + 1) + 2) + (0x5d << 4))) << 0x18), (0 + 1));
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // ldr r0, [sp, #4]
    *((u32*)((r0 << 0x19) + 0x20)) = *((u32*)(r1 + 0x20));
}




void ov96_022028BC(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r5);
    ov96_021E8A20();
    // add r7, #0xf0
    // str r0, [r4]
    ov96_021E8A20(r7);
    // asr r0, r0, #0x18
    // and r0, r1
    ov96_021EB63C(*((u32*)(r6 + 0x48)), 1);
    ov96_021EB144(*((u32*)(r6 + 0x000005D8)), 1);
    ov96_021E8324(r5, ov96_022038D4);
    System_GetTouchNew(1);
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), 3, 0);
    System_GetTouchHeld();
    *((u8*)(r4 + 4)) = *((u16*)(gSystem + 0x20));
    *((u8*)(r4 + 5)) = *((u16*)(gSystem + 0x22));
    // str r0, [r4]
    ov96_02202958(r5, *((u16*)(gSystem + 0x20)));
}




void ov96_02202958(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0xf0
    ov96_021E8A20();
    // str r0, [sp, #0x58]
    // ldr r0, [sp]
    ov96_021E5F24();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x58]
    // asr r1, r0, #0x19
    // and r0, r1
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x54]
    ov96_022038A0(r4, (((((0x7f << 0x18) >> 0x18) - 1) << 0x18) >> 0x18));
    // ldr r1, [sp, #0x2c]
    // ldr r1, [sp, #0x58]
    // and r1, r2
    ov96_02203BD0(*((u32*)(r4 + (0x5e << 4))), ((0x000003FF << 0x10) >> 0x10), *((u16*)(r1 + (r1 << 1))));
    // ldr r0, [sp, #0x2c]
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // asr r1, r1, #4
    // add r0, r0, r1
    // ldr r5, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // asr r1, r0, #0xd
    // and r0, r1
    _s32_div_f(0, 3);
    // ldr r1, [sp, #0x2c]
    _s32_div_f(r6, 3);
    // add r0, r4, r0
    // str r0, [sp, #0x30]
    ov96_021EB52C(*((u32*)(((r1 << 0x18) >> 0x16) + 0x64)), 1, 1);
    // ldr r0, [sp, #0x30]
    ov96_021EB564(*((u32*)(r0 + 0x64)), 6);
    // asr r1, r1, #6
    // and r1, r0
    // and r2, r0
    // ldr r1, [sp, #0x2c]
    // str r2, [sp, #0x108]
    // str r1, [sp, #0x104]
    // sub r1, r1, r2
    // str r1, [sp, #0x104]
    // ldr r2, [sp, #0x5c]
    // str r0, [sp, #0x10c]
    // sub r0, r0, r1
    // str r0, [sp, #0x10c]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0x110
    MTX_RotY43_(((*((u16*)(r5 + 8)) + 1) << 0xc), 0, 2, (0x21 << 0xc));
    // add r0, sp, #0x104
    // add r1, sp, #0x110
    // add r2, sp, #0xf8
    MTX_MultVec43();
    // ldr r1, [sp, #0xf8]
    // add r0, r1, r0
    // ldr r2, [sp, #0x100]
    // add r1, r2, r1
    // asr r2, r0, #0xb
    // add r2, r0, r2
    // str r0, [sp, #0xf8]
    // asr r0, r2, #0xc
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // str r1, [sp, #0x100]
    // asr r7, r2, #0xc
    _fflt((0x21 << 0xc), (0x21 << 0xc), ((r2 >> 0x14) >> 0x14));
    // str r0, [sp, #0x60]
    _fflt(r7);
    // ldr r0, [sp, #0x60]
    // add r2, sp, #0x88
    // add r3, sp, #0x84
    ov96_02204134(r0);
    // ldr r0, [sp, #0x88]
    // ldr r7, [sp, #0x84]
    // str r0, [sp, #0x140]
    // str r0, [sp, #0x144]
    // str r0, [sp, #0x148]
    _s32_div_f(r7, 0x14);
    // sub r7, #8
    // sub r0, r7, r0
    // str r0, [sp, #0x144]
    // ldr r0, [sp, #0x30]
    // add r1, sp, #0x140
    ov96_021EB588(*((u32*)((r0 << 0xc) + 0x64)));
    PlaySE(0x0000088F);
    // ldr r0, [sp, #0x2c]
    // add r0, r0, r1
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x58]
    // add r0, r0, r1
    // str r0, [sp, #0x28]
    // asr r1, r0, #0xe
    // and r0, r1
    // str r0, [sp, #0x50]
    // add r6, r4, r0
    ov96_021EB52C(*((u32*)((r6 + 1) + 0x00000418)), 1, 1);
    ov96_02203BC0(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18), 0);
    // ldr r0, [sp, #0x50]
    // add r6, r4, r0
    ov96_021EB52C(*((u32*)(r6 + 0x00000418)), 1, 0);
    ov96_02203BC0(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18), 1);
    // add r6, r4, r0
    ov96_021EB52C(*((u32*)(r6 + 0x00000418)), 1, 0);
    ov96_02203BC0(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18), 0);
    // ldr r0, [sp, #0x28]
    // asr r1, r0, #0xc
    // and r0, r1
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x58]
    // asr r1, r0
    // and r0, r1
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x50]
    ov96_02203CA4(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18), 0xa);
    // strh r1, [r6, r0]
    IsSEPlaying((0x89 << 4), 0xa);
    PlaySE((0x89 << 4));
    // ldr r0, [sp, #0x4c]
    PlaySE((0x8b << 4));
    // ldr r0, [sp, #0x4c]
    ov96_02203CA4(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18), 7);
    // strh r1, [r6, r0]
    PlaySE((0x8b << 4), 7);
    ov96_02203CD4(*((u32*)(r4 + (0x5e << 4))));
    // ldr r0, [sp, #0x48]
    // ldr r0, [sp, #0x50]
    GF_AssertFail(*((u16*)(r6 + 0x00000436)));
    ov96_02203CA4(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18), 4);
    // add r0, r4, r0
    // strh r2, [r0, r1]
    // strh r2, [r0, r1]
    // add r1, r4, r5
    PlaySE(0x000008AC, (0x00000434 + 2), 1);
    ov96_02203CC4(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18));
    ov96_02203CA4(*((u32*)(r4 + (0x5e << 4))), ((r5 << 0x18) >> 0x18), 1);
    // strh r1, [r6, r0]
    // ldr r0, [sp, #0x48]
    // strh r1, [r6, r0]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x2c]
    // add r0, r1, r0
    _s32_div_f(((0 + 1) << 1), 0xc);
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x38]
    _s32_div_f(((r1 << 0x18) >> 0x18), 0xc);
    // ldr r0, [sp, #0x58]
    // add r0, r0, r1
    // asr r1, r0, #0xe
    // and r0, r1
    // str r0, [sp, #0x10]
    // add r6, r4, r0
    ov96_021EB52C(*((u32*)(r6 + 0x00000418)), 1, 1);
    ov96_021EB52C(*((u32*)(r5 + 0x70)), 1, 0);
    // ldr r0, [sp, #0x10]
    // add r6, r4, r0
    ov96_021EB52C(*((u32*)(r6 + 0x00000418)), 1, 0);
    ov96_021EB52C(*((u32*)(r5 + 0x70)), 1, 1);
    // add r6, r4, r0
    ov96_021EB52C(*((u32*)(r6 + 0x00000418)), 1, 0);
    ov96_021EB52C(*((u32*)(r5 + 0x70)), 1, 0);
    // ldr r0, [sp, #0x58]
    // add r0, r0, r2
    // str r0, [sp, #0x64]
    // asr r1, r0, #0xc
    // and r0, r1
    // ldr r1, [sp, #0x58]
    // asr r1, r2
    // and r1, r2
    // ldr r2, [sp, #0x64]
    // and r1, r2
    // str r1, [sp, #0x78]
    // asr r2, r1, #6
    // and r1, r2
    // mov ip, r1
    // ldr r1, [sp, #0x10]
    // add r0, #0x94
    ov96_021EAC5C(*((u32*)r5), 0x14, 3, ((*((u32*)(r1 + 0x20)) << 0x18) >> 0x18));
    // strh r1, [r6, r0]
    IsSEPlaying((0x89 << 4), 0x14);
    PlaySE((0x89 << 4));
    // add r0, #0x94
    ov96_021EAC5C(*((u32*)r5), 0x16);
    // strh r1, [r6, r0]
    // ldr r2, [sp, #0x78]
    // add r1, r1, r0
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r0, r0, #0xc
    // mov r0, ip
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // ldr r0, [sp, #0x10]
    GF_AssertFail((((0xc * r7) >> 0x14) + 1), (ov96_0221C98C >> 0x14), *((u32*)(ov96_0221C98C + 8)), (r2 + 1));
    // add r0, #0x94
    ov96_021EAC5C(*((u32*)r5), 0x10);
    // strh r1, [r6, r0]
    // add r0, #0x94
    ov96_021EAD78(*((u32*)r5), 0x10);
    // add r0, #0x94
    ov96_021EAC5C(*((u32*)r5), 0);
    // strh r1, [r6, r0]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x3c]
    // add r2, sp, #0x8c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [sp, #0x1c]
    // str r0, [r2]
    // asr r1, r1, #4
    // add r0, r0, r1
    // str r6, [sp, #0x40]
    // str r0, [sp, #0x68]
    // ldr r0, [sp, #0x58]
    // ldr r0, [sp, #0x40]
    // asr r1, r0
    // and r0, r1
    // add r0, #0xff
    // add r1, #0xfa
    // strb r0, [r1]
    // add r0, #0xbc
    ov96_021EB52C(*((u32*)r4), 1, 1, ov96_0221C7C4);
    // add r0, #0xbc
    ov96_021EB52C(*((u32*)r5), 1, 0);
    // add r0, #0xb8
    ov96_021EB52C(*((u32*)r5), 1, 1);
    _s32_div_f(r6, 3);
    // str r0, [sp, #0x24]
    _s32_div_f(r6, 3);
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // asr r1, r0, #0xa
    // and r0, r1
    // ldr r0, [sp, #0xc]
    // asr r1, r0
    // and r0, r1
    // ldr r0, [sp, #0x3c]
    // and r0, r1
    // asr r2, r1, #6
    // and r1, r2
    // str r1, [sp, #0x44]
    // ldr r1, [sp, #0x2c]
    // str r2, [sp, #0xb4]
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #0xb0]
    // sub r1, r1, r2
    // str r1, [sp, #0xb0]
    // ldr r2, [sp, #0x68]
    // str r0, [sp, #0xb8]
    // sub r0, r0, r1
    // str r0, [sp, #0xb8]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0xbc
    MTX_RotY43_(((0x3f + 1) << 0xc), 0, 2, (0x21 << 0xc));
    // add r0, sp, #0xb0
    // add r1, sp, #0xbc
    // add r2, sp, #0xa4
    MTX_MultVec43();
    // ldr r1, [sp, #0xa4]
    // add r0, r1, r0
    // ldr r2, [sp, #0xac]
    // add r1, r2, r1
    // asr r2, r0, #0xb
    // add r2, r0, r2
    // str r0, [sp, #0xa4]
    // asr r0, r2, #0xc
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // str r1, [sp, #0xac]
    // asr r1, r2, #0xc
    // str r1, [sp, #0x44]
    _fflt((0x21 << 0xc), (0x21 << 0xc), ((r2 >> 0x14) >> 0x14));
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x44]
    _fflt();
    // ldr r0, [sp, #0x6c]
    // add r2, sp, #0x80
    // add r3, sp, #0x7c
    ov96_02204134(r0);
    // ldr r0, [sp, #0x80]
    // add r1, sp, #0xec
    // str r0, [sp, #0xec]
    // ldr r0, [sp, #0x7c]
    // str r0, [sp, #0xf0]
    // str r0, [sp, #0xf4]
    // add r0, #0xbc
    ov96_021EB588(*((u32*)r5));
    // ldr r0, [sp, #0x7c]
    // str r0, [sp, #0x18]
    _s32_div_f(0x14);
    // ldr r1, [sp, #0x18]
    // sub r1, #8
    // sub r0, r1, r0
    // str r0, [sp, #0xf0]
    // add r0, #0xb8
    // str r1, [sp, #0x18]
    // add r1, sp, #0xec
    ov96_021EB588(*((u32*)r5));
    // add r3, sp, #0x8c
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x98
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x7c]
    _fflt(*((u32*)r3));
    _f2d();
    _dadd(0, 0x40738000, r0, r1);
    _ddiv(0, 0x40878000);
    // str r0, [sp, #0x70]
    // str r1, [sp, #8]
    _ffltu(r7);
    _f2d();
    _ddiv(0, 0x40080000);
    _dadd(0, 0x3FF00000, r0, r1);
    // ldr r0, [sp, #0x70]
    // ldr r1, [sp, #8]
    _dmul(r0, r1);
    _d2f();
    // str r0, [sp, #0x74]
    // ldr r1, [sp, #0x74]
    _fmul(0x45800000);
    _ffix();
    // str r0, [sp, #0x98]
    // ldr r1, [sp, #0x74]
    _fmul(0x45800000);
    _ffix();
    // str r0, [sp, #0x9c]
    // add r0, #0xbc
    // add r1, sp, #0x98
    ov96_021EB5A0(*((u32*)r5), 2);
    // add r0, #0xb8
    // add r1, sp, #0x98
    ov96_021EB5A0(*((u32*)r5), 2);
    // add r0, #0xc0
    // add r1, sp, #0x98
    ov96_021EB5A0(*((u32*)r5), 2);
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0xc]
    // add r1, r4, r0
    // str r1, [sp, #0x20]
    PlaySE(0x000008B1);
    // ldr r1, [sp, #0x20]
    // strb r7, [r1, r0]
    // add r0, #0xbc
    ov96_021EB52C(*((u32*)r5), 1, 0);
    // add r0, #0xb8
    ov96_021EB52C(*((u32*)r5), 1, 0);
    // add r0, #0xfa
    // add r1, #0xfa
    // strb r0, [r1]
    // add r0, #0xb8
    ov96_021EB594(*((u32*)r5), r5);
    // add r0, #0xc0
    ov96_021EB588(*((u32*)r5), r0);
    // add r0, #0xc0
    ov96_021EB564(*((u32*)r5), 3);
    // add r0, #0xc0
    ov96_021EB52C(*((u32*)r5), 1, 1);
    _s32_div_f(r6, 3);
    // ldr r1, [sp, #0x2c]
    PlaySE(0x000008B3);
    _s32_div_f(r6, 3);
    // add r0, r4, r1
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x3c]
    // add r5, #0x48
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x2c]
    ov96_02203970(r4, (0x000005EF - 3), 0);
    // ldr r2, [sp, #0x54]
    // ldr r0, [sp]
    ov96_021E6454((0x1e * r2));
}




void ov96_022031A8(void) {
    // add r1, r3, r1
    // add r2, sp, #4
    // add r3, sp, #0
    ov96_0220404C(r2, (0x12 << 4));
    // ldr r1, [sp, #4]
    _fmul(0x45800000);
    _ffix();
    // str r0, [sp, #0x5c]
    // ldr r1, [sp]
    _fmul(0x45800000);
    _ffix();
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x60]
    // add r3, sp, #0x5c
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #0x20]
    // sub r1, r1, r0
    // str r1, [sp, #0x20]
    // ldr r1, [sp, #0x28]
    // sub r0, r1, r0
    // str r0, [sp, #0x28]
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0x2c
    MTX_RotY43_((r5 << 0xe), (((r5 << 0xe) << 1) << 1), ((((r5 << 0xe) << 1) + 1) << 1), FX_SinCosTable_);
    // add r0, sp, #0x20
    // add r1, sp, #0x2c
    // add r2, sp, #0x14
    MTX_MultVec43();
    // ldr r1, [sp, #0x14]
    // add r1, r1, r0
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    // add r3, sp, #0x14
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x5c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r2, sp, #0x5c
    // ldr r3, [sp, #0x80]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r4, r5, r0
    // add r6, r1, r0
    // add r5, r1, r0
    // add r7, sp, #8
    // add r1, sp, #0x5c
    VEC_Subtract(r5, ov96_0221C98C, r7);
    VEC_Mag(r7);
    // add r5, #0xc
}




void ov96_0220329C(void) {
    // ldr r4, [sp, #0x10]
    ov96_021E60D8(r2, r3);
    _fflt(*((u32*)(r5 + (*((u8*)(r0 + 4)) << 2))));
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    *((u32*)(r4 + 4)) = r0;
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)r6) << 2) + 0x14)));
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    *((u32*)(r4 + 8)) = r0;
    // add r0, r5, r0
    *((u32*)(r4 + 0x10)) = *((u32*)((*((u8*)(r6 + 4)) << 2) + 0x28));
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)(r6 + 3)) << 2) + 0x3c)));
    *((u32*)(r4 + 0xc)) = r0;
    *((u16*)(r4 + 0x14)) = 0;
    *((u8*)(r4 + 0x18)) = 0;
    *((u8*)(r4 + 0x19)) = 0;
    *((u16*)(r4 + 0x16)) = 0x78;
}




void ov96_02203310(void) {
    AddWindow(*((u32*)r0), (r0 + 4), ov96_0221C7B0);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r6), 3, 0, 1);
    FillWindowPixelBuffer((r6 + 4), 0);
    // add r5, #0x14
    AddWindow(*((u32*)r6), r6, ov96_0221C7EC);
    FillWindowPixelBuffer(r5, 0);
    // add r4, #8
    // add r5, #0x10
    // str r1, [sp]
    BG_FillCharDataRange(*((u32*)r6), 0, 0, 1);
    LoadFontPal0(0, (0x1e << 4), *((u32*)(r6 + 0x44)));
}




void ov96_0220337C(void) {
    FillWindowPixelBuffer((r0 + 4), 0);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r5 + 0x44)));
    MessageFormat_New(*((u32*)(r5 + 0x44)));
    // str r1, [sp]
    // str r2, [sp, #4]
    BufferIntegerAsString(0, r7, 3);
    ReadMsgData_ExpandPlaceholders(r6, r4, 0xa4, *((u32*)(r5 + 0x44)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((r5 + 4), 4, r0, 0);
    String_Delete(r7);
    MessageFormat_Delete(r6);
    DestroyMsgData(r4);
    CopyWindowToVram((r5 + 4));
}




void ov96_022033FC(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // strb r7, [r0, r6]
    // ldrsh r6, [r0, r6]
    // ldrsh r6, [r0, r6]
    // strh r7, [r0, r6]
    // strb r4, [r0, r6]
    // ldrsh r6, [r0, r6]
    // strb r3, [r0, r6]
    // strb r2, [r0, r6]
    // add r0, #0x20
}




void ov96_02203468(void) {
    // str r5, [sp]
    // add r5, #0xc8
    // str r0, [sp, #8]
    // str r5, [sp]
    // add r7, #0xd4
    // str r0, [sp, #4]
    // add r0, #0xc4
    // ldr r3, [sp]
    // add r0, #0xf8
    // add r0, #0xf8
    // strb r1, [r0]
    // add r0, #0xf8
    // add r1, #0xf8
    // strb r0, [r1]
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, #0xc8
    // add r0, #0xd0
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r0, #0xc4
    // str r6, [r0]
    // add r0, #0xd4
    // str r6, [r0]
    // add r0, #0xdc
    // str r6, [r0]
    // add r0, #0xd8
    // str r6, [r0]
    // add r0, #0xe0
    // str r6, [r0]
    // add r0, #0xe8
    // str r6, [r0]
    // add r0, #0xe4
    // str r6, [r0]
    // ldr r0, [sp]
    // add r4, #0x48
    // add r0, #0x48
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r5, #0x48
    // add r7, #0x48
    // str r0, [sp, #8]
}




void ov96_02203544(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0x20]
    // str r1, [sp, #8]
    // str r0, [sp, #0x18]
    // ldr r5, [sp, #8]
    // str r0, [sp, #0x1c]
    // strb r0, [r4, r1]
    // str r0, [sp, #0x14]
    // add r0, #0xc8
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0xd4
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    _s32_div_f(r5, 3);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    _s32_div_f(3);
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0xc4
    // ldr r0, [sp, #0x1c]
    _s32_div_f(*((u32*)r5), 3);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x2c
    VEC_Subtract();
    // add r0, sp, #0x2c
    VEC_Mag();
    // add r1, #0xc4
    // str r0, [r1]
    // ldr r0, [sp, #0x1c]
    _s32_div_f(3, 3);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r7 << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18), 3);
    // strh r1, [r6, r0]
    // sub r0, #0x45
    // add r0, #0x45
    // strh r1, [r6, r0]
    // add r1, #0xfb
    // strb r0, [r1]
    // strb r1, [r4, r0]
    // add r0, #0xfe
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220362A: ; jump table
    GF_AssertFail((*((u16*)(*((u16*)r5) + 6)) << 0x10), 1);
    // add r1, #0xfe
    // strh r0, [r1]
    // add r1, #0xfc
    // strh r0, [r1]
    // ldr r0, [sp, #0x10]
    VEC_Mag(0, r5);
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    _fflt((r1 >> 0x14));
    _fmul(r7);
    _fmul(*((u32*)(r6 + (0x42 << 4))));
    _fmul(*((u32*)(r4 + 0x00000424)), r0);
    _ffix();
    // bpl _02203692
    GF_AssertFail();
    // ldrsh r0, [r4, r0]
    // sub r1, r0, r7
    // sub r1, #0x1e
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // sub r0, r0, r1
    // strb r0, [r4, r1]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    ov96_021E8228(1, (0x43 << 4), 1);
    // ldr r2, [sp, #0x28]
    // add r1, r1, r0
    // strb r1, [r4, r0]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x24]
    ov96_021E8228(1, *((u8*)(r4 + (0x43 << 4))), 1);
    // ldr r0, [sp, #0x14]
    // add r5, #0x48
    // add r0, #0x48
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r6, #0x20
    // add r0, #0x48
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r4, #0x20
    // add r0, #0xc
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
}




void ov96_02203754(void) {
    // str r0, [sp]
    // add r2, sp, #0x28
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // strb r0, [r2]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xc8
    // str r0, [sp, #0xc]
    // add r0, sp, #0x28
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, #0xc4
    // ldr r7, [sp]
    // ldr r6, [sp, #0x14]
    // ldr r5, [sp, #0x18]
    // ldr r0, [sp, #4]
    // add r0, #0xc4
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x1c
    // add r0, sp, #0x1c
    // ldr r0, [sp, #8]
    // strb r1, [r0]
    // strb r0, [r5]
    // add r7, #0x48
    // add r6, #0x48
    // ldr r0, [sp, #0x10]
    // add r0, #0x48
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // add r2, sp, #0x28
    // ldr r4, [sp]
    // add r4, #0xc4
    // str r1, [r4]
    // ldr r4, [sp]
    // add r4, #0xfe
    // strh r0, [r4]
    // ldr r4, [sp]
    // add r4, #0xfc
    // strh r0, [r4]
    // ldr r4, [sp]
    // add r4, #0x48
    // str r4, [sp]
}




void ov96_0220382C(void) {
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    ov96_021E5F24(r1);
    // ldr r5, [sp, #0x10]
    // add r5, #0x14
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetPlayerProfileFromData(((r0 << 0x18) >> 0x18), ((0x1e << 0x18) >> 0x18), ((((r0 << 0x18) >> 0x18) + 1) << 0x1e), ((((r0 << 0x18) >> 0x18) + 1) >> 0x1f));
    // ldr r1, [sp, #0x10]
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r1 + 0x44)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r6);
    CopyWindowToVram(r5);
    // add r5, #0x10
}




void ov96_022038A0(void) {
}




void ov96_022038D4(void) {
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0xf0
    ov96_021E8A20();
    PokeathlonCourse_GetHeapAllocPtr4(r4);
    ov96_021E5F24(r4);
    // and r1, r0
    // sub r1, #0x18
    // sub r5, #0x18
    ov96_021E8318(r4, 0x000003FF);
    ov96_0220337C(r6, r5);
}




void ov96_02203924(void) {
    // mvn r2, r2
    // add r3, r4, r3
    // sub r2, #0xd
}




void ov96_02203970(void) {
    // add r0, r5, r6
    // add r0, #0xbc
    ov96_021EB594(*((u32*)0x48));
    // add r3, r5, r6
    // add r3, #0xf9
    // add r2, sp, #4
    // add r2, r2, r1
    *((u16*)(r2 + 2)) = *((u8*)r3);
    *((u32*)(r2 + 4)) = *((u32*)(r0 + 4));
    // add r0, sp, #4
    // strh r7, [r0, r1]
    // str r0, [sp]
    // add r0, sp, #4
    MATH_QSort(*((u32*)(r5 + 0x00000598)), 0xc, 8, ov96_02203924);
    // add r7, sp, #4
    // add r0, r7, r0
    // add r0, r5, r6
    // add r0, #0xb8
    // add r1, #0x14
    ov96_021EB630(*((u32*)0x48), 0);
    // add r0, r5, r6
    // add r0, #0xc0
    ov96_021EB630(*((u32*)r0), (r4 + 5));
}




void ov96_02203A00(void) {
}




void ov96_02203A30(void) {
    // add r5, #8
    // add r0, #0xc
}




void ov96_02203A64(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
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
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r3, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov96_02203B44(void) {
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_02203B8C(void) {
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r6, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
}




void ov96_02203BC0(void) {
    // add r0, r0, r1
}




void ov96_02203BD0(void) {
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0]
    // sub r0, r6, r0
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r0, #3
    // add r2, #0x13
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov96_02203CA4(void) {
    // add r0, r5, r0
    // add r1, r6, r4
}




void ov96_02203CC4(void) {
    // add r0, r0, r1
}




void ov96_02203CD4(void) {
    // add r1, #0x70
    // strb r2, [r1]
    // add r0, #0x71
    // strb r1, [r0]
}




void ov96_02203CE4(void) {
    // add r0, #0x70
    // add r0, #0x71
    // add r0, #0x71
    // strb r1, [r0]
    // add r0, #0x71
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // neg r4, r1
    // add r0, #0x70
    // strb r4, [r0]
    // add r0, #0x71
    // strb r4, [r0]
}




void ov96_02203D74(void) {
    // add r5, sp, #0x18
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r5, [sp, #0x14]
    // ldr r3, [sp, #0xc]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // strh r1, [r5]
    // ldr r2, [sp, #0x10]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
}




void ov96_02203DCC(void) {
    // str r0, [sp, #0xc]
    // add r7, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r5, #0x10
    // add r4, #8
    // str r0, [sp, #0xc]
}




void ov96_02203E30(void) {
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r5, [sp]
    // ldr r6, [sp, #8]
    // ldr r4, [sp, #4]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    // sub r1, r1, r5
    // ldr r1, [sp, #0x14]
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // add r1, sp, #0x10
    // ldr r0, [sp, #0xc]
    // add r0, #0x32
    // add r6, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov96_02203F0C(void) {
    // add r5, r6, r0
    // add r7, r6, r0
}




void ov96_02203F50(void) {
    // str r0, [sp]
    // add r5, r6, r0
    // add r1, r2, r1
    // add r0, r1, r0
    // ldr r0, [sp]
    // add r1, #0x20
    // add r0, r1, r0
}




void ov96_02203FBC(void) {
    // add r1, #0xc
    AddWindow(*((u32*)(r0 + 8)), r0, ov96_0221CA28);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 8)), 4, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)r4));
    // add r4, #0xc
    FillWindowPixelBuffer(r4, 0);
}




void ov96_02203FFC(void) {
    ov96_021E5F24(*((u32*)(r0 + 4)));
    PokeathlonCourse_GetPlayerProfileFromData(*((u32*)(r5 + 4)), ((r0 << 0x18) >> 0x18));
    PlayerProfile_GetPlayerName_NewString(*((u32*)r5));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    // add r5, #0xc
    CopyWindowToVram(r5);
}




void ov96_0220404C(void) {
    _fflt();
    // str r0, [sp, #0x10]
    _fflt(r6);
    _f2d();
    _dmul(0, 0x40140000, r0, r1);
    _ddiv(0, 0x404A0000);
    _dadd(0x9D89D89E, 0x403689D8, r0, r1);
    _d2f();
    // ldr r0, [sp, #0x10]
    _f2d();
    _dmul(0xCCCCCCCD, 0x3FC8CCCC, r0, r1);
    // str r0, [sp, #0x14]
    // str r1, [sp, #4]
    _f2d(r6);
    _ddiv(0, 0x40200000);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #4]
    _dadd(r0, r1);
    _dsub(0, 0x402F0000);
    _dsub(0, 0x40240000);
    // str r0, [sp, #0x18]
    // str r1, [sp, #0xc]
    _f2d(r6);
    _ddiv(0, 0x40800000);
    _dadd(0xF4DE9BD3, 0x3FD937A6, r0, r1);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    _ddiv(r0, r1);
    _d2f();
    // str r7, [r4]
    // str r0, [r5]
}




void ov96_02204134(void) {
    // str r2, [sp]
    _f2d(r1);
    _dsub(0, 0x404C8000);
    // str r0, [sp, #0x1c]
    _f2d(r4);
    _dsub(0, 0x404C8000);
    // ldr r0, [sp, #0x1c]
    _dmul(r7, r0, r1);
    _dadd(0, 0x3FF00000, r0, r1);
    _ddiv(0, 0x40100000, r0, r1);
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x18]
    _fmul(r4, r4);
    _fmul(r4, r0);
    _f2d();
    _ddiv(0, 0x40BDB000);
    _dadd(0, 0x40260000, r0, r1);
    // str r0, [sp, #0x24]
    // str r1, [sp, #0x10]
    _f2d(r4);
    _dsub(0, 0x40380000, r0, r1);
    // str r0, [sp, #0x28]
    // str r1, [sp, #8]
    _f2d(r4);
    _dsub(0, 0x40380000, r0, r1);
    // str r0, [sp, #0x2c]
    _f2d(r4);
    _dsub(0, 0x40380000, r0, r1);
    // ldr r0, [sp, #0x2c]
    _dmul(r7, r0, r1);
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    _dmul(r0, r1);
    _ddiv(0, 0x40B13000);
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x10]
    _dsub(r0, r1);
    _dsub(0, 0x3FF00000);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    _dadd(r0, r1);
    _d2f();
    _f2d();
    _dmul(0, 0x40200000);
    _d2f();
    _ffix();
    // str r0, [r6]
    _f2d(r5);
    _dmul(0x590B2164, 0x3FD642C8, r0, r1);
    _dadd(0, 0x40240000, r0, r1);
    // str r0, [sp, #0x30]
    _f2d(r4);
    _ddiv(0, 0x40200000);
    _dsub(0, 0x40240000);
    _dmul(0x4A5294A5, 0x3FE4A529, r0, r1);
    _f2d(r5);
    _dsub(0, 0x40500000, r0, r1);
    _dmul(r6, r4, r0, r1);
    _ddiv(0, 0x40500000);
    // ldr r0, [sp, #0x30]
    _dsub(r7, r0, r1);
    _d2f();
    _f2d();
    _dmul(0, 0x40200000);
    _d2f();
    _ffix();
    // ldr r1, [sp]
    // str r0, [r1]
}




void ov96_02204320(void) {
    LCRandom();
    _s32_div_f((r5 << 1));
    // sub r1, r5, r1
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotY43_((((0xb6 * r1) << 0x10) >> 0x10), (((((0xb6 * r1) << 0x10) >> 0x10) << 1) << 1), ((((((0xb6 * r1) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_MultVec43(r4, r4);
}




void ov96_02204364(void) {
    // add r0, #0xc4
    // strb r5, [r0]
    // sub r1, r0, r5
    // add r0, #0xc9
    // strb r1, [r0]
    // add r0, #0xc9
    // add r0, #0xc8
    // strb r1, [r0]
    // add r0, #0xc7
    // strb r1, [r0]
    // add r0, #0xc7
    // add r0, #0xc6
    // strb r1, [r0]
}




void ov96_022043AC(void) {
    // str r2, [r0, r1]
    // add r0, r0, r1
}




void ov96_022043B8(void) {
}




void ov96_022043C0(void) {
    // add r0, #0xc9
    // add r0, #0xc6
    // add r0, #0xc6
    // strb r1, [r0]
    // add r0, #0xc6
    // add r0, #0xc7
    // add r0, #0xc0
    // str r1, [r0]
    // add r0, #0xc6
    // strb r1, [r0]
    // add r0, #0xc0
    // add r0, #0xc8
    // add r1, #0xc5
    // add r6, r0, r1
    // add r1, #0xca
    // add r1, r6, r1
    // add r4, r2, r1
    // add r1, r5, r0
    // add r0, #0xc5
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, #0xc5
    // add r0, #0xc4
    // add r0, #0xc5
    // strb r1, [r0]
    // add r0, #0xca
    // add r0, #0xca
    // strb r1, [r0]
    // add r5, #0xc0
    // str r0, [r5]
}




void ov96_022044A0(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // ldr r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0x14]
    LCRandom((r0 << 2));
    _s32_div_f(0x33);
    // ldr r0, [sp, #0x14]
    // ldrsh r0, [r2, r0]
    // add r0, r0, r1
    // ldr r0, [sp, #0x14]
    // add r0, r7, r0
    // add r1, #0x44
    // ldr r1, [sp, #4]
    // add r7, #0x30
    // add r0, #0x44
    // strh r1, [r0]
    *((u32*)(*((u32*)(r7 + (*((u32*)(*((u32*)(0x16 + 0x30)) + 0xc)) << 2))) + 0xc)) = 2;
    // ldr r0, [sp, #4]
    // add r3, r0, r1
    // ldmia r3!, {r0, r1}
    // add r2, #0x10
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    GF_AssertFail(*((u32*)r3), (0xc * *((u32*)(r7 + (*((u32*)(*((u32*)(0x16 + 0x30)) + 0xc)) << 2)))), *((u32*)(r7 + (*((u32*)(*((u32*)(0x16 + 0x30)) + 0xc)) << 2))));
    // ldr r0, [sp, #0x14]
    // add r7, #0x30
    // add r0, #0x44
    // add r1, #0x44
    // strh r0, [r1]
    // ldr r0, [sp, #0x14]
    // add r0, #0x44
    // add r1, #0x46
    // strh r0, [r1]
    // add r1, #0x46
    // strh r0, [r1]
    // add r1, #0x46
    // strh r0, [r1]
    // add r1, #0x46
    // strh r0, [r1]
    *((u32*)(r7 + 0x60)) = *((u32*)r7);
    // add r0, #0x64
    // strh r6, [r0]
    LCRandom(r7, *((u32*)(r7 + (*((u16*)*((u32*)(r7 + r0))) + 1))));
    // str r0, [sp, #0x18]
    _s32_div_f(*((u16*)(*((u32*)r4) + 0x14)), 0x14);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    _s32_div_f(0x15);
    // ldr r0, [sp, #0x1c]
    // add r1, r0, r1
    // add r0, #0x66
    // strh r1, [r0]
    // add r0, #0x66
    // add r0, #0x66
    // strh r1, [r0]
    // ldrsh r1, [r1, r0]
    // sub r0, r0, r1
    _s32_div_f(0x78, 0x14);
    // add r1, #0x66
    // add r1, r1, r0
    // add r0, #0x66
    // add r5, #8
    // strh r1, [r0]
    // add r0, #0x60
    // add r1, sp, #0x64
    // stmia r1!, {r0}
    // add r0, #8
    // ldr r0, [sp]
    // add r1, sp, #0x64
    // add r2, sp, #0x40
    ov96_0220472C(r7, *((u16*)r5), (0 + 1));
    LCRandom();
    _s32_div_f(r4);
    // add r1, sp, #0x28
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // ldr r1, [sp, #4]
    // add r1, sp, #0x40
    // add r4, r0, r4
    // add r0, r0, r2
    // add r2, sp, #0x34
    VEC_Subtract(ov96_0221CA30, (r1 * 0xc), (((*((u16*)(*((u32*)(r1 + ((r1 << 0x18) >> 0x16))) + 4)) << 0x18) >> 0x18) * 0xc), 0xc);
    // add r0, sp, #0x34
    VEC_Normalize(r0);
    // add r1, sp, #0x34
    ov96_02204320(3);
    // ldr r0, [sp, #4]
    // add r1, sp, #0x34
    ov96_02204320(((*((u32*)(*((u32*)(r7 + (r0 << 2))) + 0x10)) << 0x18) >> 0x18));
    LCRandom();
    // ldr r0, [sp, #8]
    _fflt();
    _f2d();
    _ddiv(0, 0x40440000);
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x20]
    // ldrsh r0, [r1, r0]
    _fflt(0x16, *((u32*)(r7 + r5)));
    _f2d();
    _ddiv(0, 0x40490000);
    // str r0, [sp, #0x24]
    _s32_div_f(r6, 0x33);
    _fflt(r1);
    _f2d();
    // ldr r0, [sp, #0x24]
    _dadd(r5, r0, r1);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x10]
    _dadd(r0, r1);
    _d2f();
    _f2d();
    _dgr(0, (1 << 0x1e));
    _f2d((1 << 0x1e));
    _dls(0, 0x3FF00000);
    // add r7, #0x30
    _fmul(0x45800000, (0xfe << 0x16));
    _ffix();
    // ldr r3, [sp, #0x14]
    // add r1, sp, #0x34
    // add r2, sp, #0x28
    // add r3, #0x1c
    VEC_MultAdd(*((u32*)(r7 + r3)));
    // ldr r0, [sp, #0x14]
    *((u32*)(*((u32*)(r7 + r0)) + 0xc)) = 1;
    // ldr r0, [sp, #0x14]
    // ldmia r4!, {r0, r1}
    // add r2, #0x10
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov96_0220472C(void) {
    // str r0, [sp]
    // add r0, sp, #0x18
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0x14]
    // ldr r4, [sp, #8]
    // str r1, [sp, #4]
    // ldr r1, [sp]
    // add r3, sp, #0xc
    // ldr r1, [sp, #4]
    // add r2, r3, r0
    // str r1, [r3, r0]
    // str r0, [r2]
    // str r2, [r3]
    // str r3, [r2]
    // ldr r0, [sp, #0x10]
    // add r0, sp, #0xc
    // str r3, [r7, r4]
    // ldr r3, [sp, #8]
    // str r3, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
}




void ov96_022047EC(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x38]
    PokeathlonCourse_GetField1ED(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02204812: ; jump table
    Heap_Create(0x5c, 0x8b, (0x1a << 0xe));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_02204F20(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    PokeathlonCourse_AllocPtr4FromHeap(r4, (0x1b << 6));
    MI_CpuFill8(0, (0x1b << 6));
    BgConfig_Alloc(0x8b);
    // add r1, r5, r2
    // str r0, [r5]
    // add r2, r5, r2
    PokeathlonCourse_SetField3A4(r4, ((0xdd << 2) + 4), 4);
    ov96_021E6670(r4, 8);
    // str r0, [sp, #0xa8]
    // str r0, [sp, #0xac]
    // str r0, [sp, #0xb0]
    // str r2, [sp, #0xb4]
    // str r0, [sp]
    // add r0, sp, #0xa8
    ov96_021E92B0(0x10, 0x16, 0x8b, 0x00300010);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    *((u32*)(r5 + 0x14)) = 0x8b;
    FontID_Alloc(4, 0x8b);
    ov96_02204F40(*((u32*)r5));
    ov96_02207740(r5);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    PokeathlonCourse_IncrementField1ED(r4);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x38]
    ov96_02207CCC(*((u32*)(r0 + 0x14)), *((u32*)r1), r4);
    // ldr r1, [sp, #0x38]
    // str r0, [r1, r2]
    PokeathlonCourse_GetParticipantCount(r4, (0x37 << 4));
    PokeathlonCourse_GetMode(r4);
    // ldr r0, [sp, #0x38]
    // sub r1, r1, r5
    ov96_02208AA8(*((u32*)(r0 + 0x14)), 4, r0);
    // ldr r2, [sp, #0x38]
    // str r0, [r2, r1]
    // sub r1, #0xad
    ov96_021E9A78(*((u32*)(r2 + 0x14)), (0xdb << 2), 1);
    // ldr r1, [sp, #0x38]
    // str r0, [r1, r2]
    PokeathlonCourse_IncrementField1ED(r4, (0xd1 << 2));
    // add r3, sp, #0x9c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #0x38]
    ov96_021EB180(*((u32*)(*((u32*)ov96_0221CAD4) + 0x14)), r3, r3);
    // ldr r1, [sp, #0x38]
    *((u32*)(r1 + 0x20)) = r0;
    // str r0, [sp]
    ov96_021EB5C8(*((u32*)(r1 + 0x20)), 0, 0, 0);
    // ldr r0, [sp, #0x38]
    ov96_021EB5E8(*((u32*)(r0 + 0x20)));
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // ldr r3, [sp, #0x38]
    ov96_021EA854(*((u32*)(r0 + 0x14)), 0xc, 2, *((u32*)(r3 + (0xd1 << 2))));
    // ldr r1, [sp, #0x38]
    // str r0, [r1, r2]
    ov96_021EB29C(*((u32*)(r1 + 0x20)), 0, 0x65);
    // ldr r0, [sp, #0x38]
    ov96_021EB29C(*((u32*)(r0 + 0x20)), 1, 0x66);
    // ldr r0, [sp, #0x38]
    ov96_021EB29C(*((u32*)(r0 + 0x20)), 2, 0x67);
    // ldr r0, [sp, #0x38]
    ov96_021EB29C(*((u32*)(r0 + 0x20)), 3, 0x68);
    // ldr r0, [sp, #0x38]
    // add r1, #0x2c
    // ldr r1, [sp, #0x38]
    ov96_02207E7C(*((u32*)(r0 + r5)), *((u32*)(r5 + 0x20)));
    // ldr r0, [sp, #0x38]
    ov96_022050B4(*((u32*)(r0 + 0x20)));
    // ldr r0, [sp, #0x38]
    ov96_021EB3A4(*((u32*)(r0 + 0x20)));
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x38]
    ov96_021E6290(r4, 0, *((u32*)(r2 + r5)), *((u32*)(r5 + 0x20)));
    Sprite_SetDrawPriority(*((u32*)r0), 1);
    // ldr r0, [sp, #0x38]
    ov96_022050F8(*((u32*)(r0 + 0x20)));
    // ldr r1, [sp, #0x38]
    // ldr r0, [sp, #0x38]
    // add r3, #0x2c
    // ldr r2, [sp, #0x38]
    // sub r3, #0x2c
    ov96_02207F18(*((u32*)(r0 + r5)), *((u32*)(r1 + 0x20)), *((u32*)(r2 + r5)), r5);
    PokeathlonCourse_IncrementField1ED(r4);
    // add r0, sp, #0x11c
    // add r5, sp, #0x160
    // str r0, [sp, #0x24]
    // add r6, sp, #0x6c
    _s32_div_f(0, 3);
    // str r1, [sp, #0x18]
    _s32_div_f(r7, 3);
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x18]
    ov96_021E6168(r4, r5);
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x18]
    ov96_021E60C0(r4);
    ov96_021E6108();
    // ldr r1, [sp, #0x24]
    *((u32*)(r1 + 0x14)) = r0;
    // strh r0, [r6]
    // add r5, #0x10
    *((u16*)(r6 + 2)) = *((u16*)(r5 + 2));
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x38]
    // add r1, sp, #0x6c
    ov96_022080F4(*((u32*)((r1 + 4) + (0x37 << 4))), (0x37 << 4));
    ov96_021E5F24(r4);
    // ldr r0, [sp, #0x38]
    // add r1, r3, r1
    // add r2, sp, #0x160
    // add r1, r2, r1
    ov96_02208250(*((u32*)((r0 << 0x18) + (0x37 << 4))), ((((r0 << 0x18) >> 0x18) << 1) << 4), ((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x38]
    ov96_022082BC(*((u32*)(r0 + (0x37 << 4))), 0, 1);
    // ldr r0, [sp, #0x38]
    ov96_022082BC(*((u32*)(r0 + (0x37 << 4))), 1, 2);
    // str r0, [sp, #0x120]
    // str r1, [sp, #0x11c]
    // str r1, [sp, #0x124]
    // str r0, [sp, #0x128]
    // str r0, [sp, #0x12c]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x38]
    // add r2, sp, #0x160
    // add r3, sp, #0x11c
    ov96_021EA8A8(*((u32*)(1 + (0xd2 << 2))), 0xc);
    ov96_021E5F24(r4);
    // ldr r0, [sp, #0x38]
    ov96_02208784(*((u32*)(r0 + (0x37 << 4))), r0, (0x37 << 4));
    PokeathlonCourse_IncrementField1ED(r4);
    // ldr r0, [sp, #0x38]
    ov96_021EAA00(*((u32*)(r0 + (0xd2 << 2))), (0xd2 << 2));
    ov96_021E5F24(r4);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)r0));
    PokeathlonCourse_SetField1F4(r4, 1);
    // add r0, sp, #0x54
    ReadWholeNarcMemberByIdPair(0xaa, 0xe);
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x44]
    // add r0, #0x24
    // str r0, [sp, #0x44]
    // ldr r1, [sp, #0x38]
    ov96_021EAA04(*((u32*)(r1 + (0xd2 << 2))), ((0 << 0x18) >> 0x18));
    _s32_div_f(r5, 3);
    // str r1, [sp, #0x14]
    ov96_021EAB38(r6, 1);
    _s32_div_f(r5, 3);
    _s32_div_f(r5, 3);
    ov96_021E60C0(r4, r7, r1);
    ov96_021E6138();
    // add r0, sp, #0x54
    // add r2, r0, r1
    // sub r1, #8
    ov96_021EAF70(r6, *((u32*)r2), *((u32*)(r2 - 4)));
    // ldr r1, [sp, #0x38]
    ov96_021EAA04(*((u32*)(r1 + (0xd2 << 2))), ((r5 << 0x18) >> 0x18));
    _s32_div_f(r5, 3);
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // add r7, r0, r1
    // ldr r0, [sp, #0x14]
    // str r6, [r7, r0]
    // ldr r0, [sp, #0x40]
    // add r1, #0xb0
    // str r0, [sp, #0x20]
    // strb r0, [r1]
    ov96_021EAC0C(r6, 1);
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // add r0, #0x80
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    ov96_021EAF94(r6, 0x60);
    ov96_021E6104();
    ov96_021EAF6C(r6, r0);
    // ldr r0, [sp, #0x20]
    // add r0, #0xd0
    // str r0, [sp, #0x20]
    *((u32*)(r7 + 0x58)) = (r0 << 0xc);
    *((u32*)(r7 + 0x5c)) = (0x1a << 0x10);
    ov96_021EABDC(r6, 0x00000BB8);
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x14]
    // add r0, sp, #0x48
    // str r0, [sp]
    // ldr r1, [sp, #0x1c]
    // add r3, sp, #0x4c
    ov96_021EB0A4(r6, 0x60);
    // add r0, sp, #0x48
    *((u16*)(r0 + 8)) = 0x80;
    // ldr r1, [sp, #0x48]
    *((u16*)(r0 + 0xa)) = 0x80;
    // add r0, sp, #0xb8
    ReadWholeNarcMemberByIdPair(0xaa, 4);
    // ldr r0, [sp, #0x38]
    // strh r1, [r0, r2]
    // ldr r1, [sp, #0x38]
    ov96_02208740(*((u32*)(r0 + (0x37 << 4))), *((u16*)((0x37 << 4) + 0x0000050C)), 0x0000050C);
    // ldr r0, [sp, #0x38]
    ov96_022077F4();
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x2c]
    // add r6, #0x24
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x30]
    // add r1, sp, #0xb8
    // str r6, [sp]
    ov96_02206E88(r4, (((0xcd << 2) << 0x18) >> 0x18), ((0 << 0x18) >> 0x18));
    ov96_021E5F24(r4);
    // ldr r1, [sp, #0x38]
    // ldr r1, [sp, #0x30]
    ov96_02208AE8(*((u32*)(r1 + (0xdb << 2))), ((r1 << 0x18) >> 0x18), r6);
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // add r1, #0xbc
    // str r0, [r1]
    // ldr r0, [sp, #0x2c]
    // add r6, #0xb8
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // add r0, #0xb8
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    ov96_021E5F24(r4);
    PokeathlonCourse_GetDataCopyArea(r4);
    // add r0, #0x28
    ov96_021E8A20();
    // ldr r0, [sp, #0x38]
    ov96_02205AFC(r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x50
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x38]
    ov96_021E634C(r4, 0, *((u32*)(r2 + (0xd1 << 2))), *((u32*)((0xd1 << 2) + 0x20)));
    // ldr r0, [sp, #0x38]
    ov96_02205048();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // ldr r2, [sp, #0x38]
    // ldr r0, [sp, #0x34]
    // add r2, #0x24
    // add r3, r2, r1
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r6, r3, #0xb
    // asr r5, r0, #0xc
    // ldr r0, [sp, #0x38]
    // add r6, r3, r6
    // asr r3, r6, #0xc
    // sub r3, #0x80
    ScheduleSetBgPosText(*((u32*)(r0 >> 0x14)), 0, 0, *((u32*)(r3 + 0x58)));
    // ldr r0, [sp, #0x38]
    // sub r5, #0x60
    ScheduleSetBgPosText(*((u32*)r0), 0, 3, r5);
    sub_0203A994(1);
    PokeathlonCourse_IncrementField1ED(r4);
    ov96_021E5F24(r4);
    LCRandom();
    _s32_div_f(0x14);
    // ldr r0, [sp, #0x38]
    // str r1, [r0, r2]
    PokeathlonCourse_IncrementField1ED(r4, (0xdd << 2));
}




u32 ov96_02204DE8(void) {
}




void ov96_02204DF8(void) {
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_02204E58(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    sub_0203A914();
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    PokeathlonCourse_ResetField3A4(r5);
    Heap_Free(*((u32*)(r4 + 0x18)));
    FreeBgTilemapBuffer(*((u32*)r4), 0);
    FreeBgTilemapBuffer(*((u32*)r4), 3);
    FreeBgTilemapBuffer(*((u32*)r4), 4);
    FreeBgTilemapBuffer(*((u32*)r4), 5);
    FreeBgTilemapBuffer(*((u32*)r4), 6);
    RemoveWindow((r4 + 4));
    Heap_Free(*((u32*)r4));
    ov96_021EB21C(*((u32*)(r4 + 0x20)));
    ov96_021EA894(*((u32*)(r4 + (0xd2 << 2))));
    ov96_021E9C0C(*((u32*)(r4 + (0xd1 << 2))));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov96_02208B2C(*((u32*)(r4 + (0xdb << 2))));
    ov96_02207D64(*((u32*)(r4 + (0x37 << 4))));
    FontID_Release(4);
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // strh r1, [r0]
    Heap_Destroy(0x8b, 0);
}




void ov96_02204F20(void) {
}




void ov96_02204F40(void) {
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_02205048(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp]
    // add r1, #0x1c
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_022050B4(void) {
    // str r1, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_022050F8(void) {
    // str r0, [sp, #4]
    // str r7, [sp]
    ov96_021EB3E4(r1, 2, 1, 0x68);
    // str r0, [r4, r1]
    ov96_021EB564(*((u32*)(r4 + (0xe << 6))), 1);
    // add r4, #0xc
    // ldr r4, [sp, #4]
    // str r7, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    // str r0, [r4, r1]
    ov96_021EB564(*((u32*)(r4 + (0x47 << 4))), 6);
    // str r0, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    // str r0, [r4, r1]
    ov96_021EB564(*((u32*)(r4 + 0x00000474)), 5);
    // add r4, #0x10
    // ldr r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    *((u32*)(r7 + 0x6c)) = r0;
    ov96_021EB564(2);
    // add r5, r7, r0
    // str r0, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    *((u32*)(r5 + 0x70)) = r0;
    ov96_021EB564(3);
    ov96_021EB630(*((u32*)(r5 + 0x70)), 2);
    // str r0, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    *((u32*)(r7 + 0x78)) = r0;
    ov96_021EB564(8);
    // ldr r0, [sp, #8]
    // add r7, #0xb8
    // str r0, [sp, #8]
    // ldr r4, [sp, #4]
    // str r7, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    // str r0, [r4, r1]
    ov96_021EB564(*((u32*)(r4 + (0xd3 << 2))), 7);
    ov96_021EB630(*((u32*)(r4 + (0xd3 << 2))), 4);
    // ldr r4, [sp, #4]
    // str r7, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    // str r0, [r4, r1]
    ov96_021EB564(*((u32*)(r4 + (0xd7 << 2))), 4);
    // str r5, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    // ldr r2, [sp, #4]
    // str r0, [r2, r1]
    // str r7, [sp]
    ov96_021EB3E4(r6, 2, 1, 0x68);
    // ldr r2, [sp, #4]
    // str r0, [r2, r1]
    ov96_021EB564(*((u32*)(r2 + 0x00000568)), 0);
    // ldr r1, [sp, #4]
    ov96_021EB564(*((u32*)(r1 + 0x0000056C)), 4);
    // ldr r0, [sp, #4]
    // add r0, #0x14
    // str r0, [sp, #4]
}




void ov96_022052B0(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetDataCopyArea(*((u8*)r0));
    // add r0, #0xf0
    ov96_021E8A20();
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x20
    ReadWholeNarcMemberByIdPair(0xe3, *((u32*)(r2 + (0xde << 2))), (0xde << 2));
    // add r0, sp, #0x5c
    // ldr r7, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r6, sp, #0x20
    // str r0, [sp, #0x1c]
    // add r4, sp, #0x34
    // strh r0, [r7, r2]
    // strh r3, [r7, r2]
    // str r3, [r5, r2]
    // add r2, #8
    // strh r0, [r5, r2]
    // strh r1, [r5, r0]
    ov96_021EB52C(*((u32*)(r7 + (0x00000386 - 6))), 1, 1, 1);
    // ldr r0, [sp, #0x1c]
    // add r5, #0xc
    // str r0, [sp, #0x1c]
    // ldr r5, [sp, #0x18]
    // strh r0, [r5, r2]
    // strh r3, [r5, r2]
    // str r3, [r4, r2]
    // add r2, #0xc
    // strh r0, [r4, r2]
    // strh r1, [r4, r0]
    // sub r0, #0xa
    ov96_021EB52C(*((u32*)(r5 + 0x0000047A)), 1, 1, 1);
    ov96_021EB52C(*((u32*)(r4 + 0x00000474)), 1, 1);
    // add r4, #0x10
    // ldr r2, [sp, #0x18]
    // ldr r4, [sp, #0x14]
    // strh r4, [r2, r0]
    // ldr r4, [sp, #0x14]
    // strh r4, [r2, r1]
    // ldr r4, [sp, #0x14]
    // str r4, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    ov96_021E5F24(0x000005C8, (0x000005C8 + 2), (r2 + 4), (0 + 1));
    // ldr r0, [sp, #0x18]
    ov96_02207870();
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x34
    ov96_02208AF8(*((u32*)(r0 + (0xdb << 2))), (0xdb << 2));
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x20
    ov96_02208AF8(*((u32*)(r0 + (0xdb << 2))), (0xdb << 2));
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r1, r1, r2
    ov96_02208AF0(*((u32*)(r0 + (0xdb << 2))), (0xdb << 2), 0x00000564);
    // ldr r0, [sp, #0x18]
    ov96_0220764C();
    GF_heap_c_dummy_return_true(0x5c);
    GF_AssertFail();
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // strb r1, [r0]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_SetStateTransitionType(*((u8*)r0), 0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(2, 3, 3, 0);
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // strb r1, [r0]
    IsPaletteFadeFinished(*((u8*)r0), (*((u8*)r0) + 1));
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_SetStateField07(1);
    // ldr r0, [sp, #0xc]
    ov96_02205D30();
}




void ov96_0220549C(void) {
    // strb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_02205520(void) {
    PokeathlonCourse_GetDataCopyArea();
    PokeathlonCourse_GetHeapAllocPtr4(r7);
    IsPaletteFadeFinished(*((u8*)r4));
    // strb r0, [r4]
    ov96_021E5F24(r7);
    // add r5, #0x28
    ov96_021E8A20(r5);
    // and r0, r1
    // asr r2, r1, #0xb
    // and r1, r2
    // add r0, r0, r1
    PokeathlonCourse_SetField5E0_AtIndex(r7, ((0 << 0x18) >> 0x18), 0x000003E7);
}




void ov96_022055AC(void) {
    // str r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #0x28]
    // ldr r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp]
    ov96_021E5F24();
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // add r0, #0x28
    // str r0, [sp, #0x28]
    ov96_021E8A20(*((u8*)(r0 + 0x0000050E)), 0x0000050E);
    // ldr r0, [sp, #0x2c]
    ov96_02205AFC(r0);
    // ldr r0, [sp, #0x28]
    // add r0, #0x50
    ov96_021E8A20();
    // ldr r0, [sp, #0x28]
    ov96_021E8A20();
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // strh r2, [r0, r1]
    // ldr r0, [sp, #0x2c]
    ov96_02208B34(*((u32*)(*((u16*)(*((u32*)r0) + 0x0000050C)) + (0xdb << 2))), (0xdb << 2), (*((u16*)(*((u32*)r0) + 0x0000050C)) - 1), r0);
    // ldr r5, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // strb r1, [r0, r2]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x18]
    // add r0, #0x50
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, #0x24
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, #0xa0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xac
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0x88
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    ov96_021E8A20(r5, 0, 0x0000051B);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r0, #0xc0
    // add r0, #0xc1
    // add r0, #0xd5
    _s32_div_f((*((u8*)r4) + 1), 3);
    // add r0, #0xd5
    // strb r1, [r0]
    // add r1, #0xc1
    // strb r0, [r1]
    // add r1, #0xd4
    // strb r0, [r1]
    // add r1, #0xc1
    // strb r0, [r1]
    // add r1, #0xc0
    // strb r0, [r1]
    // add r1, #0xcf
    // strb r0, [r1]
    // add r1, #0xd4
    // strb r0, [r1]
    // str r1, [r6, r0]
    // add r1, #0x9e
    // strh r0, [r1]
    // add r1, #0xa0
    // str r0, [r1]
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, #0xa8
    // add r3, #0xa0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xac
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xca
    // str r1, [r6, r0]
    // add r1, #0x9e
    // strh r0, [r1]
    // add r1, #0xa0
    // str r0, [r1]
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, #0xa8
    // add r3, #0xa0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xac
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xc8
    // str r1, [r6, r0]
    // add r1, #0x9e
    // strh r0, [r1]
    // add r1, #0xa0
    // str r0, [r1]
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, #0xa8
    // add r3, #0xa0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xac
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xcf
    // str r1, [r6, r0]
    // add r1, #0x9e
    // strh r0, [r1]
    // add r1, #0xa0
    // str r0, [r1]
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, #0xa8
    // add r3, #0xa0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xac
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    ov96_02205DD4(*((u32*)(r5 + (0xc1 << 2))), ((r4 << 0x18) >> 0x18), *((u8*)(r7 + 4)), *((u8*)(r7 + 5)));
    // str r1, [r6, r0]
    // add r0, #0xa0
    // str r1, [r0]
    // add r3, #0xa0
    // add r2, #0xac
    // add r0, #0xa4
    // str r1, [r0]
    // add r1, #0xa8
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x9e
    // add r0, #0x9e
    // add r0, #0x9e
    // strh r1, [r0]
    // ldr r1, [sp, #0x2c]
    // strb r2, [r1, r0]
    // add r0, #0xac
    // str r1, [r0]
    // add r0, #0xb0
    // str r1, [r0]
    // add r0, #0x9e
    // add r1, #0xc9
    // strb r0, [r1]
    // str r1, [r6, r0]
    // ldr r1, [sp, #0x2c]
    // strb r2, [r1, r0]
    // str r0, [sp, #0x24]
    // add r0, #0xc9
    // add r0, sp, #0x54
    // str r1, [r0]
    *((u32*)(*((u8*)r4) + 4)) = 0;
    *((u32*)(*((u8*)r4) + 8)) = 0;
    // add r0, #0xd5
    // add r2, r4, r0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    ov96_022073F0(*((u32*)(0 + 0x34)), *((u8*)r4), 0, r4);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    _fmul();
    _f2d();
    _ddiv(0, 0x40200000);
    _dmul(0, 0x40B00000, r0, r1);
    _dfix();
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r2, sp, #0x60
    VEC_Subtract();
    // add r1, sp, #0x60
    // ldr r0, [sp, #0x34]
    // add r2, sp, #0x54
    VEC_MultAdd(r1);
    // add r0, sp, #0x60
    VEC_Mag();
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    _fflt((r1 >> 0x14));
    // add r2, #0x88
    // add r3, sp, #0x6c
    // ldmia r2!, {r0, r1}
    // mov ip, r3
    // stmia r3!, {r0, r1}
    // add r1, sp, #0x60
    // str r0, [r3]
    // mov r0, ip
    // mov r2, ip
    ov96_02207400(*((u32*)r4), r4);
    // add r0, sp, #0x6c
    VEC_Mag();
    _fflt();
    // str r0, [sp, #0x38]
    _fmul(0x45800000, r7);
    // ldr r0, [sp, #0x38]
    _fgr(r0);
    // add r0, sp, #0x3c
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x6c
    VEC_Normalize(r0);
    _fmul(0x45800000, r7);
    _ffix();
    // ldr r3, [sp, #8]
    // add r1, sp, #0x6c
    // add r2, sp, #0x3c
    VEC_MultAdd();
    _fmul(0x45800000, r7);
    _ffix();
    // add r1, sp, #0x6c
    // add r2, sp, #0x3c
    // add r3, sp, #0x48
    VEC_MultAdd();
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #8]
    // add r1, sp, #0x60
    ov96_02207400();
    // add r3, sp, #0x60
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x48
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #4]
    ov96_022079B8(*((u32*)r3));
    // add r1, #0xd4
    // strb r0, [r1]
    // ldr r1, [sp, #0x2c]
    // strb r2, [r1, r0]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r2, r0, #0xc
    // ldr r1, [sp, #0x2c]
    // strh r2, [r1, r0]
    // add r0, #0x80
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r2, r0, #0xc
    // ldr r1, [sp, #0x2c]
    // strh r2, [r1, r0]
    // add r1, #0xc9
    // strb r0, [r1]
    // ldr r0, [sp, #0x24]
    // add r1, #0x9e
    // strh r0, [r1]
    // add r1, #0xa0
    // str r0, [r1]
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, #0xa8
    // add r3, #0xa0
    // str r0, [r1]
    // ldmia r3!, {r0, r1}
    // add r2, #0xac
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x18]
    // add r5, #0xc
    // add r0, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r4, #0xb8
    // add r0, #0xb8
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0xb8
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0xb8
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0xb8
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0xb8
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp]
    ov96_02205E30((*((u32*)r4) + 1), r4, r4, r4);
    // ldr r0, [sp, #0x2c]
    ov96_02207870();
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // strb r2, [r0, r1]
    // ldr r0, [sp, #0x28]
    // add r0, #0x28
    // str r0, [sp, #0x28]
    ov96_021E8A20(*((u16*)(r0 + 0x0000050C)), ((0x0000050C + 2) + 2), 0);
    // ldr r0, [sp, #0x2c]
    ov96_02205AFC(r0);
}




void ov96_02205AFC(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // str r1, [sp]
    *((u16*)(r1 + 0x18)) = *((u32*)(r3 + (0x57 << 4)));
    // add r3, #0x14
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp]
    // add r0, #0x24
    // add r4, #0xaa
    // str r4, [sp, #0x10]
    // add r4, #0xac
    // mov lr, r4
    // asr r4, r6, #0xb
    // add r4, r6, r4
    // asr r7, r4, #0xc
    // mov ip, r4
    // asr r4, r4, #0xb
    // mov r4, ip
    // add r6, r4, r6
    // asr r4, r6, #0xc
    // mov r6, lr
    // ldr r4, [sp, #0x10]
    // stmia r1!, {r4}
    // add r6, #0xb1
    *((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) = (*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) | (*((u8*)(0x57 << 4)) << 5));
    // add r6, #0xb0
    *((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) = (*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) | ((*((u8*)(0x57 << 4)) - 1) << 7));
    // add r6, #0xa6
    *((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) = (*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) | (*((u8*)(0x57 << 4)) << 9));
    // add r6, #0xa7
    *((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) = (*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x18)) | (*((u8*)(0x57 << 4)) << 0xb));
    // add r4, #0xab
    // lsl r6, r3
    // ldr r4, [sp, #8]
    // str r4, [sp, #8]
    // add r4, #0x9d
    // add r0, #0xb8
    // lsl r6, r5
    // ldr r4, [sp, #0xc]
    // str r4, [sp, #0xc]
    // ldr r4, [sp, #0x14]
    // add r6, r4, r3
    // lsl r6, r3
    // ldr r4, [sp, #4]
    // str r4, [sp, #4]
    // ldr r0, [sp]
    *((u32*)((0x57 << 4) + 0x14)) = 0;
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp]
    *((u32*)((0 + 1) + 0x14)) = (*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0);
    // ldr r3, [sp, #0x14]
    // ldr r3, [sp]
    *((u32*)((*((u16*)((0 + 1) + (0x0000051E - 2))) << 9) + 0x14)) = ((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9));
    // ldr r3, [sp, #0x14]
    // ldr r1, [sp]
    *((u32*)(((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) + 0x14)) = ((*((u8*)((*((u16*)((0 + 1) + (0x0000051E - 2))) << 9) + (0x0000051E - 5))) << 0x12) | ((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)));
    // ldr r1, [sp, #4]
    // ldr r1, [sp]
    *((u32*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + 0x14)) = (((*((u8*)((*((u16*)((0 + 1) + (0x0000051E - 2))) << 9) + (0x0000051E - 5))) << 0x12) | ((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9))) | (((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13));
    *((u32*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + 0x10)) = 0;
    // ldr r1, [sp, #0x14]
    // ldr r1, [sp]
    *((u32*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + 0x10)) = (0 | *((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))));
    // ldr r1, [sp, #0x14]
    // ldr r1, [sp]
    *((u32*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + 0x10)) = ((0 | *((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4)))) | (*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9));
    // ldr r1, [sp, #0x14]
    // ldr r1, [sp]
    *((u32*)((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) + 0x10)) = (((0 | *((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4)))) | (*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9)) | (*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12));
    // ldr r1, [sp, #8]
    // ldr r1, [sp]
    *((u32*)(((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13) + 0x10)) = ((((0 | *((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4)))) | (*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9)) | (*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12)) | ((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13));
    // ldr r1, [sp, #0xc]
    // sub r2, #0x10
    // ldr r1, [sp]
    // sub r0, #0x12
    *((u32*)((((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13) << 0x17) + 0x10)) = (((((0 | *((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4)))) | (*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9)) | (*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12)) | ((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13)) | (((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13) << 0x17));
    // ldr r1, [sp, #0x14]
    // ldr r1, [sp]
    *((u32*)((*((u8*)((((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13) << 0x17) + 0x0000051E)) << 0x1f) + 0x10)) = ((((((0 | *((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4)))) | (*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9)) | (*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12)) | ((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13)) | (((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13) << 0x17)) | (*((u8*)((((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13) << 0x17) + 0x0000051E)) << 0x1f));
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp]
    *((u16*)(0x0000051E + 0x22)) = *((u16*)((*((u8*)((((*((u8*)((*((u16*)(*((u16*)((((*((u16*)(*((u32*)(r3 + (0x57 << 4))) + 0x0000051E)) | 0) | (*((u16*)((0 + 1) + (0x0000051E - 2))) << 9)) << 0x13) + (0x0000051E + 4))) + (0x0000051E + 2))) << 9) + (0x0000051E - 3))) << 0x12) << 0x13) << 0x17) + 0x0000051E)) << 0x1f) + 0x0000051E));
}




void ov96_02205C94(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r5);
    ov96_021E8A20();
    // add r7, #0xf0
    // str r0, [r4]
    ov96_021E8A20(r7);
    // and r0, r1
    ov96_021EB63C(*((u32*)(r6 + 0x20)), 1);
    ov96_021EB144(*((u32*)(r6 + (0xd2 << 2))), 1);
    ov96_021E8324(r5, ov96_02207C64);
    System_GetTouchNew(1);
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), 3, 0);
    System_GetTouchHeld();
    *((u8*)(r4 + 4)) = *((u16*)(gSystem + 0x20));
    *((u8*)(r4 + 5)) = *((u16*)(gSystem + 0x22));
    // str r0, [r4]
    ov96_02205D30(r5, *((u16*)(gSystem + 0x20)));
}




void ov96_02205D30(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #8]
    // add r0, #0xf0
    ov96_021E8A20();
    // ldr r0, [sp]
    ov96_021E5F24();
    // str r0, [sp, #4]
    // and r7, r0
    // and r6, r0
    // sub r3, #0x80
    ScheduleSetBgPosText(*((u32*)r5), 0, 0, *((u32*)(r4 + (((r0 << 0x18) >> 0x18) << 2))));
    // sub r3, #0x60
    ScheduleSetBgPosText(*((u32*)r5), 0, 3, r6);
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #8]
    // add r2, #0x24
    ov96_02206380(r5);
    ov96_02206A24(r5, r7, r6);
    ov96_02206AC0(r5, r7, r6);
    ov96_02206B80(r5, r4, r7, r6);
    ov96_02207BE4(r5);
    ov96_02208740(*((u32*)(r5 + (0x37 << 4))), *((u16*)(r4 + 0x22)));
    // ldr r0, [sp]
    ov96_021E6454(*((u16*)(r4 + 0x22)));
}




void ov96_02205DD4(void) {
    // add r0, #0x24
    // add r5, r0, r2
    // add r0, #0xb1
    // add r0, #0xb1
    // add r0, sp, #4
    // str r0, [sp]
    // add r3, sp, #8
    // str r4, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
}




void ov96_02205E30(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x14]
    // strb r0, [r6, r1]
    // add r4, sp, #0x24
    // add r5, #0x24
    // strb r0, [r4]
    // add r0, #0xc8
    // ldr r0, [sp, #8]
    ov96_02206368(*((u8*)r0), r0, r0);
    // strb r0, [r4]
    // ldr r0, [sp, #0x14]
    // add r7, #0xb8
    // add r5, #0xb8
    // str r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x24
    // str r0, [sp, #0x10]
    // add r5, #0x24
    // add r0, r6, r0
    // str r5, [sp, #0x18]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    ov96_02207B8C(r6);
    // add r0, #0xaa
    ov96_02207BD4(*((u8*)r5));
    // add r1, #0xa7
    // strb r0, [r1]
    // add r1, #0xaa
    // strb r0, [r1]
    // add r1, #0xab
    // strb r0, [r1]
    *((u32*)(r5 + 0x64)) = 0;
    *((u32*)(r5 + 0x68)) = 0;
    *((u32*)(r5 + 0x6c)) = 0;
    // add r1, #0xb0
    // strb r0, [r1]
    // add r1, #0xa9
    // strb r0, [r1]
    // add r0, #0xa7
    // add r1, #0x98
    // str r0, [sp]
    // add r2, #0xb1
    // ldr r0, [sp, #8]
    ov96_021E8228(*((u8*)r5), ((*((u32*)r5) << 0x18) >> 0x18), *((u8*)r5), 3);
    // add r0, #0xa9
    // add r0, #0xab
    // add r0, #0xa8
    // add r0, #0xa7
    // add r0, #0xac
    // add r0, #0xac
    // strh r1, [r0]
    // add r0, #0xac
    // add r1, #0xac
    // strh r0, [r1]
    // add r0, #0xa7
    // add r0, #0xa7
    // strb r1, [r0]
    // add r0, #0xa9
    // add r0, #0xa9
    // strb r1, [r0]
    // add r0, #0xa9
    // add r1, #0xa9
    // strb r0, [r1]
    // add r1, #0x9c
    // strb r0, [r1]
    // add r1, #0x9d
    // strb r0, [r1]
    // str r0, [sp]
    // add r1, #0x98
    // add r2, #0xb1
    // ldr r0, [sp, #8]
    ov96_021E8228(1, ((*((u32*)r5) << 0x18) >> 0x18), *((u8*)r5), 7);
    // add r1, #0xa8
    // strb r0, [r1]
    // add r0, #0xa8
    // add r0, #0xa8
    // strb r1, [r0]
    // add r0, #0xab
    // add r3, #0x58
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x58
    // add r1, #0x64
    VEC_Add(r5, r5, r5, r5);
    *((u32*)(r5 + 0x5c)) = (0x1a << 0xe);
    *((u32*)(r5 + 0x5c)) = (0x62 << 0xe);
    *((u32*)(r5 + 0x5c)) = (0x1a << 0xe);
    *((u32*)(r5 + 0x5c)) = (0x1a << 0x10);
    *((u32*)(r5 + 0x58)) = (0xd << 0x10);
    *((u32*)(r5 + 0x58)) = (0x13 << 0x10);
    *((u32*)(r5 + 0x58)) = (9 << 0x10);
    *((u32*)(r5 + 0x58)) = (0x17 << 0x10);
    // add r0, #0xb1
    ov96_021EAF8C(*((u32*)(r5 + (*((u8*)r5) << 2))), *((u32*)(r5 + 0x58)));
    // add r0, #0x58
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, sp, #0x34
    ov96_02207300(r6, *((u32*)(r5 + 0x74)), r0);
    *((u32*)(r5 + 0x74)) = ((r0 << 0x18) >> 0x18);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02206092: ; jump table
    _dflt(*((u32*)(r5 + 0x68)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x68)) = r0;
    _dflt(*((u32*)(r5 + 0x64)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x64)) = r0;
    _dflt(*((u32*)(r5 + 0x68)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x68)) = r0;
    _dflt(*((u32*)(r5 + 0x64)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x64)) = r0;
    _dflt(*((u32*)(r5 + 0x64)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x64)) = r0;
    _dflt(*((u32*)(r5 + 0x68)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x68)) = r0;
    _dflt(*((u32*)(r5 + 0x64)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x64)) = r0;
    _dflt(*((u32*)(r5 + 0x68)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x68)) = r0;
    _dflt(*((u32*)(r5 + 0x64)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x64)) = r0;
    _dflt(*((u32*)(r5 + 0x68)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x68)) = r0;
    _dflt(*((u32*)(r5 + 0x64)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x64)) = r0;
    _dflt(*((u32*)(r5 + 0x68)));
    _dmul(r7, 0xBFD33333);
    _dfix();
    *((u32*)(r5 + 0x68)) = r0;
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x40
    ov96_02207418();
    // strb r1, [r6, r0]
    // ldr r1, [sp, #0x40]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // strh r1, [r6, r0]
    // ldr r1, [sp, #0x44]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // strh r1, [r6, r0]
    // add r3, #0x64
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x28
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    VEC_Mag(r2, 1, r5);
    _f2d(0x40C00000);
    _dmul(0x9999999A, 0x3FB99999, r0, r1);
    _dmul(0, 0x40B00000, r0, r1);
    _dfix();
    // add r4, r4, r0
    // add r0, sp, #0x28
    VEC_Normalize((3 << 0xc), (3 << 0xc));
    // asr r0, r4, #0x1f
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x1c]
    // asr r1, r0, #0x1f
    _ll_mul(r4);
    // add r2, r0, r2
    // ldr r3, [sp, #0x1c]
    // adc r1, r0
    // ldr r0, [sp, #0x2c]
    // str r1, [sp, #0x28]
    // asr r1, r0, #0x1f
    _ll_mul((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), r4);
    // add r0, r0, r2
    // adc r1, r2
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x28
    VEC_Mag(((r0 >> 0xc) | (r1 << 0x14)), (r1 << 0x14), 0x00000000);
    // add r0, #0x64
    VEC_Mag(r5);
    // add r0, #0x64
    // add r1, sp, #0x28
    VEC_Subtract(r5, r5);
    *((u32*)(r5 + 0x64)) = 0;
    *((u32*)(r5 + 0x68)) = 0;
    // add r0, #0x9c
    // add r0, #0xa6
    // add r0, #0xa2
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa2
    // add r1, #0xa6
    // strb r0, [r1]
    // ldr r3, [sp, #0x20]
    // ldr r2, [sp, #0xc]
    // add r0, r6, r0
    // add r2, r3, r2
    ov96_022078B0(0x00000564, r5);
    // ldr r0, [sp, #0x10]
    // add r5, #0xb8
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_02206368(void) {
    // add r0, #0xa4
    // add r0, #0xa4
    // add r2, #0xa4
    // strb r0, [r2]
}




void ov96_02206380(void) {
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r3, [sp, #0x1c]
    ov96_021E5F24();
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xf0
    ov96_021E8A20(((r0 << 0x18) >> 0x18));
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x5c]
    // and r1, r0
    // str r1, [sp, #0x68]
    // and r1, r0
    // str r1, [sp, #0x64]
    // ldr r1, [sp, #0x5c]
    // and r3, r1
    // and r6, r0
    // and r5, r0
    // ldr r2, [sp, #0x60]
    // ldr r2, [sp, #0x60]
    // add r3, r2, r3
    // add r2, #0xc
    // str r6, [r3, r2]
    // ldr r2, [sp, #0x60]
    // ldr r2, [sp, #0x60]
    // add r3, r2, r3
    // add r2, #0x1c
    // str r5, [r3, r2]
    // ldr r2, [sp, #0x60]
    // ldr r0, [sp, #0x60]
    // add r2, r0, r2
    ov96_021EB52C(*((u32*)((*((u8*)(0x00000518 + 0x00000518)) << 2) + (0xd3 << 2))), 1, 1, (*((u8*)(0x00000518 + 0x00000518)) << 2));
    // ldr r0, [sp, #0x60]
    // ldr r0, [sp, #0x60]
    // add r1, r0, r1
    ov96_021EB564(*((u32*)((*((u8*)(r0 + 0x00000518)) << 2) + (0xd3 << 2))), 7);
    // ldr r1, [sp, #0x60]
    // add r6, #0x80
    // add r5, #0x60
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // ldr r1, [sp, #0x60]
    // strb r2, [r1, r0]
    // ldr r0, [sp, #0x68]
    // ldr r1, [sp, #0x64]
    // sub r0, r6, r0
    // sub r1, r5, r1
    ov96_02207C38(0x00000518, 0x1e, 0x000008A3, 1);
    // ldr r0, [sp, #0x5c]
    // and r0, r1
    // ldr r0, [sp, #0x34]
    // asr r1, r0
    // and r0, r1
    sub_0200606C(0x000008CE, 3);
    // ldr r0, [sp, #0x5c]
    // and r2, r1
    // and r6, r2
    // and r5, r2
    // ldr r2, [sp, #0x60]
    // ldr r2, [sp, #0x60]
    // add r3, r2, r3
    // add r2, #0x2a
    // str r6, [r3, r2]
    // ldr r2, [sp, #0x60]
    // ldr r2, [sp, #0x60]
    // add r3, r2, r3
    // add r2, #0x3a
    // str r5, [r3, r2]
    // ldr r2, [sp, #0x60]
    // ldr r0, [sp, #0x60]
    // add r2, r0, r2
    ov96_021EB52C(*((u32*)((*((u8*)(0x0000051A + 0x0000051A)) << 2) + (0xd7 << 2))), 1, 1, (*((u8*)(0x0000051A + 0x0000051A)) << 2));
    // ldr r0, [sp, #0x60]
    // ldr r0, [sp, #0x60]
    // add r1, r0, r1
    ov96_021EB564(*((u32*)((*((u8*)(r0 + 0x0000051A)) << 2) + (0xd7 << 2))), 4);
    // ldr r1, [sp, #0x60]
    // add r6, #0x80
    // add r5, #0x60
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // ldr r1, [sp, #0x60]
    // strb r2, [r1, r0]
    // ldr r0, [sp, #0x68]
    // ldr r1, [sp, #0x64]
    // sub r0, r6, r0
    // sub r1, r5, r1
    ov96_02207C38(0x0000051A, 0x1e, 0x000008CD, 1);
    // ldr r5, [sp, #0x60]
    // add r6, sp, #0x90
    // str r0, [r6]
    *((u32*)(r6 + 4)) = 0;
    *((u32*)(r6 + 8)) = 0;
    // ldr r0, [sp, #0x64]
    // add r1, #0x60
    // sub r0, r1, r0
    // ldr r1, [sp, #0x68]
    // add r2, #0x80
    // sub r1, r2, r1
    // str r0, [sp, #0x94]
    // str r1, [sp, #0x90]
    ov96_021EB588(*((u32*)(r5 + (0xd3 << 2))), r6, *((u32*)(r5 + 0x00000524)));
    // ldr r5, [sp, #0x60]
    // add r6, sp, #0x84
    // str r0, [r6]
    *((u32*)(r6 + 4)) = 0;
    *((u32*)(r6 + 8)) = 0;
    // ldr r0, [sp, #0x64]
    // add r1, #0x60
    // sub r0, r1, r0
    // ldr r1, [sp, #0x68]
    // add r2, #0x80
    // sub r1, r2, r1
    // str r0, [sp, #0x88]
    // str r1, [sp, #0x84]
    ov96_021EB588(*((u32*)((r5 + 4) + (0xd7 << 2))), r6, *((u32*)((r5 + 4) + 0x00000544)));
    // ldr r0, [sp, #0x60]
    ov96_022076E4();
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x5c]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x3c]
    // add r0, #0x50
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x44]
    // and r7, r0
    // and r0, r1
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x40]
    // asr r1, r0, #5
    // and r1, r2
    // str r1, [sp, #0x30]
    // asr r1, r0, #7
    // and r1, r2
    // str r1, [sp, #0x54]
    // asr r1, r0, #9
    // and r1, r0
    // str r1, [sp, #0x4c]
    // ldr r1, [sp, #0x5c]
    // and r1, r2
    // asr r1, r6
    // and r0, r1
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetParticipantCount(*((u32*)(r4 + (((1 << 0x18) >> 0x18) << 2))), ((0xf << 0x18) >> 0x18), (*((u32*)(((((((((((*((u32*)0) >> 9) << 0x18) >> 0x18) << 0x18) >> 0x18) + 1) << 0x18) >> 0x18) << 0x18) >> 0x18) + 0x10)) >> 0x13));
    // ldr r0, [sp, #0x3c]
    ov96_021E8A20();
    // ldr r0, [sp, #0x1c]
    ov96_021E8A20();
    // ldr r1, [sp, #0x18]
    // ldr r1, [sp, #0x30]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x60]
    // ldr r2, [sp, #0x5c]
    ov96_02206DEC(*((u32*)(0 + (0x37 << 4))), r4, ((r6 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x30]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x60]
    // str r5, [sp, #0x10]
    // ldr r2, [sp, #0x5c]
    ov96_02206DEC(*((u32*)(0 + (0x37 << 4))), r4, ((r6 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x68]
    // ldr r1, [sp, #0x48]
    // sub r0, r7, r0
    // str r0, [sp, #0x38]
    // add r0, #0x80
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x64]
    // sub r1, r1, r0
    // ldrsh r0, [r4, r0]
    // add r1, #0x60
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x78]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x7c]
    // str r0, [sp, #0x80]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp]
    // ldr r0, [sp, #0x60]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x50]
    ov96_02208658(*((u32*)(0 + (0x37 << 4))), ((r6 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x38]
    // mvn r1, r1
    // ldr r0, [sp, #0x24]
    // mvn r1, r1
    // ldr r0, [sp, #0x58]
    ov96_021EAB38(1);
    // ldr r0, [sp, #0x58]
    ov96_021EAB38(0);
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0x24]
    ov96_021EAF94(*((u32*)r4));
    // add r1, sp, #0x6c
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x6c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x70]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    ov96_021E60C0(0, r6);
    // ldr r1, [sp, #0x70]
    // sub r0, r1, r0
    // str r0, [sp, #0x70]
    // ldr r1, [sp, #0x70]
    // sub r0, r1, r0
    // str r0, [sp, #0x70]
    // add r1, sp, #0x6c
    ov96_021EB588(*((u32*)(r4 + 0x48)));
    // ldr r1, [sp, #0x24]
    ov96_02207718(r4);
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x4c]
    // add r0, #0xa3
    // ldr r0, [sp, #0x4c]
    ov96_021EB52C(*((u32*)(r4 + 0x48)), 1, 1);
    // ldr r0, [sp, #0x58]
    ov96_021EAC5C(0x15);
    // add r0, #0x72
    // strb r1, [r0]
    // ldr r0, [sp, #0x34]
    sub_02006190(3, 0);
    // ldr r1, [sp, #0x78]
    // ldr r2, [sp, #0x7c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r1, r1, #0xc
    ov96_02207C38((r0 >> 0x14), (r1 >> 0x14), (0x89 << 4), r5);
    sub_02006190(4);
    // ldr r1, [sp, #0x78]
    // ldr r2, [sp, #0x7c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r1, r1, #0xc
    ov96_02207C38((r0 >> 0x14), (r1 >> 0x14), (0x89 << 4), 0);
    ov96_021EB52C(*((u32*)(r4 + 0x48)), 1, r5);
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0x54]
    ov96_021EAC08();
    // add r0, #0x72
    // ldr r0, [sp, #0x58]
    ov96_021EAC5C(*((u8*)r4), 0x1a);
    // add r0, #0x72
    // add r0, #0x72
    // strb r1, [r0]
    // ldr r0, [sp, #0x58]
    ov96_021EAC5C(r4, 0);
    ov96_021EB52C(*((u32*)(r4 + 0x48)), 1, 0);
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0x54]
    ov96_021EAC0C();
    // ldr r0, [sp, #0x4c]
    // add r1, #0xa3
    // strb r0, [r1]
    // ldr r0, [sp, #0x44]
    // and r0, r1
    // ldr r0, [sp, #0x60]
    ov96_02208840(*((u32*)((0xf << 0x18) + (0x37 << 4))), r6, ((0xf << 0x18) >> 0x18));
    // add r0, #0x73
    // add r0, #0x72
    // strb r1, [r0]
    ov96_021EB564(*((u32*)(r4 + 0x54)), 8);
    ov96_021EB52C(*((u32*)(r4 + 0x54)), 1, 1);
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x78]
    // ldr r2, [sp, #0x7c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r1, r1, #0xc
    ov96_02207C38((r0 >> 0x14), (r1 >> 0x14), 0x000005E2, 1);
    // ldr r1, [sp, #0x78]
    // ldr r2, [sp, #0x7c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r1, r1, #0xc
    ov96_02207C38((r0 >> 0x14), (r1 >> 0x14), 0x000005EB, 0);
    // ldr r0, [sp, #0x50]
    ov96_021EB564(*((u32*)(r4 + 0x54)), 9);
    ov96_021EB52C(*((u32*)(r4 + 0x54)), 1, 1);
    // add r0, #0x73
    // strb r5, [r0]
    // add r1, sp, #0x78
    ov96_021EB588(*((u32*)(r4 + 0x54)));
    // ldr r0, [sp, #0x44]
    // and r0, r1
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x60]
    // sub r1, #0x8f
    ov96_02208374(*((u32*)(((*((u32*)r0) >> 0x12) << 0x10) + 0x000003FF)), (((*((u32*)r0) >> 0x12) << 0x10) >> 0x10));
    // add r0, #0xae
    // add r0, #0x78
    // add r0, r4, r0
    ov96_021EB564(*((u32*)((*((u16*)r4) << 2) + 0x4c)), 3);
    // add r0, #0x78
    // add r0, r4, r0
    ov96_021EB52C(*((u32*)((*((u16*)r4) << 2) + 0x4c)), 1, 1);
    // add r0, #0x78
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // add r0, #0x78
    // strh r1, [r0]
    // ldr r0, [sp, #0x60]
    ov96_02208864(*((u32*)(r4 + (0x37 << 4))), r6, ((*((u16*)r4) + 1) >> 0x1f));
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x78]
    // ldr r2, [sp, #0x7c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r1, r1, #0xc
    ov96_02207C38((r0 >> 0x14), (r1 >> 0x14), 0x0000088F, 1);
    // ldr r1, [sp, #0x78]
    // ldr r2, [sp, #0x7c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r1, r1, #0xc
    ov96_02207C38((r0 >> 0x14), (r1 >> 0x14), 0x0000088F, 0);
    // add r0, r4, r0
    // add r1, sp, #0x78
    ov96_021EB588(*((u32*)((0 << 2) + 0x4c)));
    // add r0, #0xae
    // strh r7, [r0]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x40]
    // add r4, #0xb8
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x3c]
    // add r0, #0x28
    // str r0, [sp, #0x3c]
}




void ov96_02206A24(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // ldr r0, [sp]
    // add r5, r0, r1
    // ldr r0, [sp, #4]
    // sub r6, r1, r0
    // add r6, #0x80
    // ldr r0, [sp, #8]
    // sub r4, r1, r0
    // str r0, [sp, #0x14]
    // add r4, #0x60
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0xc
    ov96_021EB588(*((u32*)(r5 + (0xe << 6))), *((u16*)(r5 + 0x00000386)));
    // mvn r0, r0
    // mvn r0, r0
    ov96_021EB52C(*((u32*)(r5 + (0xe << 6))), 1, 1);
    ov96_021EB52C(*((u32*)(r5 + (0xe << 6))), 1, 0);
}




void ov96_02206AC0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // ldr r0, [sp]
    // add r5, r0, r1
    // ldr r0, [sp, #4]
    // sub r6, r1, r0
    // add r6, #0x80
    // ldr r0, [sp, #8]
    // sub r4, r1, r0
    // str r0, [sp, #0x14]
    // add r4, #0x60
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0xc
    ov96_021EB588(*((u32*)(r5 + (0x47 << 4))), *((u16*)(r5 + 0x0000047A)));
    // add r1, sp, #0xc
    ov96_021EB588(*((u32*)(r5 + 0x00000474)));
    // mvn r0, r0
    // mvn r0, r0
    ov96_021EB52C(*((u32*)(r5 + (0x47 << 4))), 1, 1);
    ov96_021EB52C(*((u32*)(r5 + 0x00000474)), 1, 1);
    ov96_021EB52C(*((u32*)(r5 + (0x47 << 4))), 1, 0);
    ov96_021EB52C(*((u32*)(r5 + 0x00000474)), 1, 0);
}




void ov96_02206B80(void) {
    // str r1, [sp]
    // add r0, r5, r0
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0x18]
    // ldr r0, [sp]
    // add r0, r0, r1
    // and r0, r1
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    // ldr r1, [sp, #4]
    // sub r7, r2, r1
    // add r7, #0x80
    // ldr r0, [sp, #8]
    // sub r6, r1, r0
    // str r0, [sp, #0x24]
    // add r6, #0x60
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r1, r5, r0
    // str r0, [sp, #0x10]
    // str r1, [sp, #0xc]
    // add r1, sp, #0x1c
    ov96_021EB588(*((u32*)(*((u16*)((0x1f << 2) + 0x000005CA)) + 0x00000568)), *((u16*)((0x1f << 2) + 0x000005CA)), *((u16*)((0x1f << 2) + 0x000005C8)));
    // ldr r1, [sp, #0xc]
    // add r1, sp, #0x1c
    ov96_021EB588(*((u32*)(r1 + 0x0000056C)));
    // mvn r0, r0
    // mvn r0, r0
    // add r7, r5, r0
    ov96_021EB52C(*((u32*)(r7 + 0x00000568)), 1, 1);
    ov96_021EB52C(*((u32*)(r7 + 0x0000056C)), 1, 1);
    // add r7, r5, r0
    ov96_021EB52C(*((u32*)(r7 + 0x00000568)), 1, 0);
    ov96_021EB52C(*((u32*)(r7 + 0x0000056C)), 1, 0);
    // add r7, r5, r4
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    ov96_021EB564(*((u32*)(*((u8*)(r7 + 0x00000513)) + 0x0000056C)), 4);
    // ldr r1, [sp, #0x14]
    // strb r1, [r7, r0]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    ov96_022076C0(0x00000513, r6);
}




void ov96_02206C90(void) {
    // add r1, #0x9f
    // ldr r5, [sp, #0x10]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02206CAA: ; jump table
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
    // ldrsh r1, [r4, r0]
    // add r0, #0x70
    // add r1, #8
    // strh r1, [r0]
    // add r0, #0xa0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0xa0
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
    // ldr r1, [sp, #0x18]
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
    // ldr r1, [sp, #0x14]
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
}




void ov96_02206D58(void) {
    // add r0, #0x9f
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02206D70: ; jump table
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
    // ldrsh r1, [r4, r0]
    // add r0, #0x70
    // sub r1, #8
    // strh r1, [r0]
    // add r0, #0xa0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0xa0
    // add r0, #0x70
    // strh r1, [r0]
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
    // ldr r0, [sp, #8]
    // add r0, #0x9f
    // add r4, #0x9f
    // strb r0, [r4]
}




void ov96_02206DEC(void) {
    // asr r4, r2
    // and r2, r4
    // add r2, #0x9e
    // add r2, #0x9e
    // strb r4, [r2]
    // add r2, #0x9f
    // strb r4, [r2]
    // add r2, #0x9e
    // ldr r2, [sp, #0x20]
    // ldr r2, [sp, #0x28]
    // ldr r2, [sp, #0x1c]
    // str r2, [sp]
    // ldr r2, [sp, #0x24]
    // str r4, [sp, #4]
    // str r2, [sp, #8]
    // add r3, sp, #8
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // add r2, sp, #8
    // ldr r3, [sp, #0x1c]
}




void ov96_02206E88(void) {
    // str r3, [sp]
    // ldr r2, [sp]
    // ldr r6, [sp, #0x18]
    ov96_021E60D8(r2);
    // ldr r0, [sp]
    _fflt(*((u32*)(r5 + (*((u8*)r0) << 2))), 0x14);
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    // add r1, r6, r7
    *((u32*)(r1 + 0x14)) = r0;
    // add r0, r5, r0
    *((u8*)(r1 + 0x1c)) = *((u32*)((*((u8*)(r4 + 1)) << 2) + 0x50));
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)(r4 + 4)) << 2) + 0x14)));
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    // add r1, r6, r7
    *((u32*)(r1 + 0xc)) = r0;
    // add r0, r5, r0
    _fflt(*((u32*)((*((u8*)(r4 + 1)) << 2) + 0x28)));
    _f2d();
    _ddiv(0, 0x40240000);
    _d2f();
    // add r1, r6, r7
    *((u32*)(r1 + 0x10)) = r0;
    // add r0, r5, r0
    *((u32*)(r1 + 0x18)) = *((u32*)((*((u8*)(r4 + 3)) << 2) + 0x3c));
}




void ov96_02206F1C(void) {
    // mov ip, r3
    // ldr r6, [sp, #0x18]
    // mov r5, ip
    // stmia r5!, {r4}
    // asr r3, r1, #0xb
    // add r3, r1, r3
    // asr r1, r3, #0xc
    // mov lr, r1
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r7, r1, #0xc
    // strb r4, [r6]
    // add r3, r0, r1
    // mov r1, lr
    // sub r2, r2, r1
    // add r2, #0x80
    // mvn r5, r5
    // sub r1, r1, r7
    // add r1, #0x60
    // mvn r2, r2
    // strb r1, [r6]
    // mov r1, ip
    // str r3, [r1, r2]
    // add r0, #0xc
}




void ov96_02206FA4(void) {
    // sub r3, #0x10
    // str r3, [r2]
    // sub r1, #0x10
    // add r5, #0x10
    // add r4, #0x10
    // sub r1, r1, r0
    // sub r1, r1, r0
    // add r1, r1, r0
    // add r1, r1, r0
    // add r1, r1, r0
    // add r1, r1, r0
    // sub r1, r1, r0
    // add r2, #0x58
    // sub r0, r1, r0
    // str r0, [r2]
}




void ov96_0220703C(void) {
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xb8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0xb8]
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // str r3, [sp, #0x10]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // add r3, sp, #0x34
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x20]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r7, #0x28
    // add r6, #0x20
    // add r3, sp, #0x34
    // add r2, sp, #0x94
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, sp, #0x2c
    // str r0, [sp]
    // add r2, sp, #0x24
    // add r3, sp, #0x1c
    sub_02020F4C(r3, r3, ov96_0221CB00);
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0xb8]
    // str r1, [r0]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0xb8]
    *((u32*)(r0 + 4)) = (r0 << 0xc);
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x94
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x24]
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // ldr r2, [sp, #4]
    // ldmia r2!, {r0, r1}
    // str r2, [sp, #4]
    // ldr r2, [sp, #0xb8]
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #4]
    // str r2, [sp, #0xb8]
    // str r1, [r0]
    // add r0, sp, #0x94
    // add r7, #0x10
    // add r6, #0x10
    // add r5, #0x10
    // add r2, sp, #0x44
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0xc]
    // ldr r4, [sp, #0x10]
    // add r7, sp, #0x6c
    // add r3, sp, #0x44
    // add r2, sp, #0x84
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0x78
    // str r0, [sp, #0x78]
    // str r0, [sp, #0x7c]
    // str r0, [sp, #0x80]
    // ldr r0, [sp, #8]
    VEC_Subtract(0, (r4 << 2), r7, ov96_0221CAE0);
    VEC_Mag(r7);
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, sp, #0x78
    ov96_02207390((r3 << 0xc));
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x60
    VEC_Subtract();
    // ldr r2, [sp, #4]
    // add r1, sp, #0x60
    // add r3, sp, #0x54
    VEC_MultAdd(r4);
    // ldr r1, [sp, #0x54]
    // ldr r0, [sp, #0xb8]
    // str r1, [r0]
    // ldr r1, [sp, #0x58]
    *((u32*)(r0 + 4)) = r1;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x84
    // add r4, #8
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #8]
    // ldr r2, [sp, #0xb8]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // str r3, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // sub r0, r0, r2
    // sub r3, r3, r2
    // mov ip, r1
    // mvn r2, r2
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #8]
    // ldr r4, [sp, #0x10]
    // sub r3, r3, r5
    // sub r4, r4, r5
    // mvn r5, r5
    // mvn r5, r5
    // mov ip, r0
    // mov r3, ip
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r1, [sp, #0xb8]
    // str r2, [r1]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    // add r1, r2, r1
    // ldr r1, [sp, #0xb8]
    // str r2, [r1]
    // ldr r1, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r1, [sp, #0xb8]
    *((u32*)(1 + 4)) = (1 << 0xc);
    // ldr r1, [sp, #0xc]
    // add r1, r7, r1
    // ldr r1, [sp, #0xb8]
    *((u32*)(1 + 4)) = (1 << 0xc);
}




void ov96_02207300(void) {
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xe0]
    // str r1, [sp, #0xe0]
    // ldr r1, [sp, #0xe4]
    // str r1, [sp, #0xe4]
    // add r1, sp, #0xc
    // str r1, [sp]
    // add r3, sp, #0x7c
    // str r4, [sp, #8]
    // add r0, sp, #0xc
    // add r5, sp, #0x7c
    // add r2, sp, #0x1c
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r1, [sp, #0xe0]
    // add r3, sp, #0x1c
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0xe4]
    // str r2, [r1]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0xe4]
    // str r2, [r1]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // ldr r0, [sp, #8]
}




void ov96_02207390(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // sub r0, r1, r0
    // sub r0, r4, r0
    // sub r0, r7, r4
    // add r0, r4, r7
    // neg r0, r0
}




void ov96_022073F0(void) {
    // add r0, r0, r2
}




void ov96_02207400(void) {
    // add r3, r4, r3
    // str r3, [r2]
    // add r0, r3, r0
}




void ov96_02207418(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x80]
    // str r0, [sp, #0x74]
    // add r0, #0xb1
    // add r0, #0xab
    // str r0, [sp, #0x20]
    // add r0, sp, #0x2c
    // str r0, [sp]
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // ldr r0, [sp, #0x20]
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    // add r3, sp, #0x30
    // ldr r5, [sp, #0xc]
    // add r0, #0xab
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x14]
    // add r0, #0xb1
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x24
    // str r0, [sp]
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // ldr r0, [sp, #0x1c]
    // asr r2, r2, #0xc
    // add r3, sp, #0x28
    // add r0, sp, #0x70
    // str r0, [sp]
    // add r0, sp, #0x34
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // add r3, sp, #0x6c
    // add r0, sp, #0x7c
    // str r0, [sp]
    // add r0, sp, #0x38
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // add r3, sp, #0x78
    // add r0, sp, #0x78
    // add r1, sp, #0x6c
    // add r2, sp, #0x60
    // add r0, sp, #0x60
    // ldr r2, [sp, #0x34]
    // ldr r1, [sp, #0x38]
    // add r1, r2, r1
    // add r0, r6, r4
    // add r0, #0x94
    // ldr r0, [sp, #8]
    // add r0, #0xa4
    // strb r1, [r0]
    // add r0, #0xa4
    // strb r1, [r0]
    // add r0, #0x64
    // add r1, sp, #0x54
    // str r0, [r1]
    // add r0, #0x64
    // add r1, #0x64
    // add r2, sp, #0x54
    // add r0, #0x64
    // add r1, sp, #0x48
    // str r0, [r1]
    // add r0, #0x64
    // add r1, #0x64
    // add r2, sp, #0x48
    // add r0, r6, r4
    // add r0, #0x94
    // add r0, r5, r7
    // add r0, #0x94
    // add r1, r6, r4
    // add r1, #0x94
    // strb r0, [r1]
    // add r1, r5, r7
    // add r1, #0x94
    // strb r0, [r1]
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x3c
    // str r1, [r2]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x6c
    // add r1, sp, #0x78
    // add r0, sp, #0x3c
    // ldr r0, [sp, #0x38]
    // add r1, sp, #0x3c
    // add r2, sp, #0x78
    // add r3, sp, #0x3c
    // ldr r2, [sp, #0x10]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // add r1, #0x98
    // add r2, #0xb1
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // add r1, #0x98
    // add r5, #0xb1
    // ldr r0, [sp, #8]
    // add r1, r6, r4
    // add r1, #0x94
    // strb r0, [r1]
    // add r1, r7, r5
    // add r1, #0x94
    // strb r0, [r1]
    // add r5, #0xb8
    // add r6, #0xb8
    // ldr r0, [sp, #0x18]
}




void ov96_0220764C(void) {
    ov96_021EB630(*((u32*)(r0 + 0x00000474)), 3);
    ov96_021EB594(*((u32*)(r4 + (0x47 << 4))));
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    ov96_02207BD8((r0 >> 0x14), *((u32*)(r0 + 4)));
    ov96_021EB630(*((u32*)(r4 + r7)), (r0 + 7));
    // add r4, #0x10
    ov96_021EB594(*((u32*)(r5 + (0xe << 6))));
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    ov96_02207BD8((r0 >> 0x14), *((u32*)(r0 + 4)));
    ov96_021EB630(*((u32*)(r5 + r6)), (r0 + 1));
    // add r5, #0xc
}




void ov96_022076C0(void) {
}




void ov96_022076E4(void) {
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
}




void ov96_02207718(void) {
}




void ov96_02207740(void) {
    AddWindow(*((u32*)r0), (r0 + 4), ov96_0221CAC0);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)r4), 3, 0, 1);
    LoadFontPal0(0, (0x1e << 4), *((u32*)(r4 + 0x14)));
}




void ov96_02207774(void) {
    FillWindowPixelBuffer((r0 + 4), 0);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r5 + 0x14)));
    MessageFormat_New(*((u32*)(r5 + 0x14)));
    // str r1, [sp]
    // str r2, [sp, #4]
    BufferIntegerAsString(0, r7, 3);
    ReadMsgData_ExpandPlaceholders(r6, r4, 0x9d, *((u32*)(r5 + 0x14)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((r5 + 4), 4, r0, 0);
    String_Delete(r7);
    MessageFormat_Delete(r6);
    DestroyMsgData(r4);
    CopyWindowToVram((r5 + 4));
}




void ov96_022077F4(void) {
    // strh r2, [r0, r1]
}




void ov96_02207800(void) {
}




void ov96_02207818(void) {
    // add r0, #0xb4
    // add r0, r5, r4
    // add r1, #0xb4
    // add r1, r5, r1
    // add r1, #0x64
    // add r1, #0xb4
    // add r1, r5, r1
    // add r1, #0x66
    // str r0, [r5, r4]
    // add r2, #0x14
}




void ov96_02207870(void) {
    // sub r6, r0, r1
    // add r0, r5, r0
    ov96_02207818(0x00000564, *((u16*)(r0 + 0x0000061A)));
    // strh r0, [r5, r7]
    GF_AssertFail(*((u16*)(r5 + 0x0000061A)));
}




void ov96_022078B0(void) {
    // strb r6, [r0]
    // str r0, [sp, #4]
    // add r0, #0x58
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r7, r0
    // add r0, #0x64
    // str r0, [sp, #8]
    // add r0, r7, r0
    // add r0, #0x66
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0xb1
    // ldr r0, [sp, #4]
    // add r1, sp, #8
    // add r0, #0xaa
    // add r5, #0xb3
    // ldr r0, [sp]
    // strb r1, [r0]
    // strb r1, [r5, r6]
    // add r0, r5, r6
    // add r0, #0xb3
    // strb r1, [r0]
    // str r1, [r7, r0]
    // add r0, #0xaa
    // add r5, #0xaa
    // strb r0, [r5]
    // add r0, #0xb6
    // add r0, #0xb6
    // add r7, #0xb6
    // strh r0, [r7]
    // add r1, r5, r6
    // add r1, #0xb3
    // strb r0, [r1]
    // add r1, r5, r6
    // add r1, #0xb3
    // strb r0, [r1]
    // add r4, #0x14
}




void ov96_02207990(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r1, r5, r4
}




void ov96_022079B8(void) {
    // add r1, sp, #0x18
    VEC_Normalize();
    // add r0, sp, #0x18
    VEC_Mag();
    // add r3, sp, #0xc
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r3]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    CalcAngleBetweenVecs(r3, r3);
}




void ov96_02207A34(void) {
    // add r0, #0x64
    VEC_Mag(r1);
    // add r0, #0x64
    VEC_Mag(r5);
    // add r0, #0xb0
    // add r0, #0xb0
    // add r0, #0x64
    ov96_022079B8(r5, *((u8*)r5));
    // add r1, #0xb0
    // add r0, #0xa6
    // add r0, #0xaa
    // add r0, #0xaa
    // add r0, #0xaa
    // strb r1, [r0]
    // add r0, #0xaa
    // add r0, #0xaa
    // add r1, r0, r1
    // add r0, #0xaa
    // strb r1, [r0]
    // add r0, #0xaa
    // strb r1, [r0]
    // add r0, #0xaa
    // add r0, #0xaa
    // strb r1, [r0]
    // add r0, #0xa6
    // strb r3, [r0]
    // str r3, [sp]
    // add r1, #0x98
    // add r2, #0xb1
    ov96_021E8228(r7, ((*((u32*)r5) << 0x18) >> 0x18), *((u8*)r5), 1);
    // add r0, #0xb1
    // add r0, #0x64
    VEC_Mag(r6);
    // asr r3, r0, #0xb
    // add r3, r0, r3
    // add r2, r5, r2
    // asr r0, r3, #0xc
    // add r2, r2, r0
    // add r0, #0xa2
    // strb r2, [r0]
    // add r2, sp, #4
    // str r0, [r2]
    *((u32*)(*((u32*)((r4 * 0x14) + 0x18)) + 4)) = 0;
    *((u32*)(*((u32*)((r4 * 0x14) + 0x18)) + 8)) = 0;
    // add r2, #0xb1
    // add r1, r6, r1
    _fmul(0x45800000, *((u32*)((0x14 * *((u8*)r6)) + 0x14)), *((u8*)r6), (r3 >> 0x14));
    _ffix();
    // add r1, #0x64
    // add r2, sp, #4
    // add r3, #0x64
    VEC_MultAdd(r6, r5);
    // add r3, sp, #4
    // ldmia r3!, {r0, r1}
    // add r2, #0x64
    // stmia r2!, {r0, r1}
    // add r6, #0xa4
    // str r0, [r2]
    // strb r0, [r6]
    // add r5, #0xa4
    // strb r0, [r5]
}




void ov96_02207B8C(void) {
    // add r1, #0xaa
    // add r0, #0xa6
}




void ov96_02207BD4(void) {
}




void ov96_02207BD8(void) {
    // sub r0, r1, r0
}




void ov96_02207BE4(void) {
    // add r0, r4, r6
    DC_FlushRange(*((u8*)(r0 + (0x00000512 - 1))), (2 << 0xa));
    // add r0, r4, r6
    GX_LoadBG0Char((6 << 0xa), (2 << 0xa));
    // strb r1, [r5, r0]
    _s32_div_f((*((u8*)(r5 + (0x00000512 - 1))) + 1), 6);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
}




void ov96_02207C38(void) {
}




void ov96_02207C64(void) {
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0xf0
    ov96_021E8A20();
    PokeathlonCourse_GetHeapAllocPtr4(r4);
    ov96_021E5F24(r4);
    // add r1, r5, r1
    // asr r3, r1, #0xb
    // and r0, r2
    // and r1, r3
    // add r0, r0, r1
    // sub r0, #0x18
    // sub r5, #0x18
    ov96_021E8318(r4, 0x000003FF, 0x000003FF);
    ov96_02207774(r6, r5);
}




void ov96_02207CCC(void) {
    // str r2, [sp]
    Heap_Alloc((0x72 << 2));
    MI_CpuFill8(0, (0x72 << 2));
    // str r6, [r7]
    // ldr r0, [sp]
    *((u32*)(r7 + 8)) = r4;
    *((u32*)(r7 + 4)) = r0;
    ov96_02208A4C(r7);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, r6);
    *((u32*)(r7 + 0x1c)) = r0;
    MessageFormat_New(r6);
    *((u32*)(r7 + 0x20)) = r0;
    String_New(0xb, r6);
    // str r0, [r5, r1]
    // ldr r0, [sp]
    ov96_021E5F24((0x6a << 2));
    // ldr r0, [sp]
    PokeathlonCourse_GetParticipantUnk04(r0);
    // add r1, #0x12
    CopyU16ArrayToString(*((u32*)(r7 + (0x6a << 2))), r0);
    // add r4, #0x28
    ov96_022088AC(r7, 1);
}




void ov96_02207D64(void) {
    // str r0, [sp]
    // add r5, #8
    // ldr r4, [sp]
    // add r0, #0x9c
    // ldr r0, [sp]
    // ldr r4, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, #0xc
    // ldr r0, [sp]
}




void ov96_02207DDC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r3, #0x28
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_02207E7C(void) {
    // add r4, sp, #8
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r7, [sp]
    ov96_021EB2BC(r1, 0x5d, 9, *((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(r5, 0x5d, 6, *((u32*)r4));
    ov96_021EB334(r5, 0x5d, 0xa, *((u32*)r4));
    ov96_021EB36C(r5, 0x5d, 0xa, *((u32*)r4));
    // str r0, [sp]
    ov96_021EB2BC(r5, 0xe2, 0xd, 0x65);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(r5, 0xe2, 0xa, 0x65);
    ov96_021EB334(r5, 0xe2, 0xc, 0x65);
    ov96_021EB36C(r5, 0xe2, 0xb, 0x65);
}




void ov96_02207F18(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // add r7, r0, r1
    // add r1, #0x40
    // str r0, [sp, #0x14]
    // add r0, r0, r1
    // str r2, [sp, #8]
    // str r0, [sp, #0x10]
    // str r2, [sp]
    ov96_021EB3E4(r1, 3, 2, 0x65);
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x38)) = r0;
    // str r1, [sp]
    ov96_021EB3E4(r5, 3, 2, 0x65);
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x40)) = r0;
    // str r0, [sp]
    ov96_021EB3E4(r5, 3, 2, 0x65);
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x3c)) = r0;
    // str r0, [sp]
    ov96_021EB3E4(r5, 2, 2, 0x65);
    *((u32*)(r7 + 8)) = r0;
    ov96_021EB564(0);
    ov96_021EB52C(*((u32*)(r7 + 8)), 1, 1);
    // str r0, [sp]
    ov96_021EB3E4(r5, 2, 2, 0x65);
    *((u32*)(r7 + 4)) = r0;
    ov96_021EB564(9);
    ov96_021EB52C(*((u32*)(r7 + 4)), 1, 1);
    // str r0, [sp]
    ov96_021EB3E4(r5, 2, 2, 0x65);
    // str r0, [r7]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // add r1, #0x13
    ov96_021EB564(*((u32*)(r0 + 0x38)));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    ov96_021EB564(*((u32*)(r0 + 0x40)), (r1 + 5));
    ov96_021EB564(*((u32*)r7), 3);
    ov96_021EB52C(*((u32*)r7), 1, 1);
    // ldr r4, [sp, #0x10]
    // str r0, [sp]
    ov96_021EB3E4(r5, 2, 2, 0x65);
    // stmia r4!, {r0}
    ov96_021EB564(2);
    // ldr r0, [sp, #0x14]
    // add r7, #0x10
    // add r0, #0x1c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #8
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r2, sp, #0x1c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    ov96_021EB3E4(r5, 3, 2, 0x65);
    // ldr r1, [sp, #4]
    // str r0, [r1, r2]
    ov96_021EB564(*((u32*)(r1 + (0x4e << 2))), 4, (0x4e << 2));
    // ldr r0, [sp, #4]
    ov96_021EB52C(*((u32*)(r0 + (0x4e << 2))), 1, 1);
    // ldr r0, [sp, #4]
    // add r1, sp, #0x1c
    ov96_021EB588(*((u32*)(r0 + (0x4e << 2))), (0x4e << 2));
    // ldr r1, [sp, #4]
    ov96_02208914(r5);
    // ldr r4, [sp, #4]
    // str r0, [sp, #0xc]
    ov96_021EB5E8(r5);
    // ldr r3, [sp, #4]
    // ldr r0, [sp, #8]
    ov96_021EA2C4(r0, 3, *((u32*)r3));
    // str r0, [r4, r1]
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x6d << 2))), 1);
    // add r1, sp, #0x28
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    Sprite_SetMatrix(*((u32*)(r4 + (0x6d << 2))));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x6d << 2))), *((u8*)r6));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_022080F4(void) {
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r4, [sp, #8]
    // add r6, #0xcc
    // ldr r0, [sp, #8]
    // add r1, #0x9c
    // str r0, [r1]
    // str r0, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r2, #0x9c
    // ldr r0, [sp, #0x20]
    // add r0, #0x9c
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r0, r0, r7
    // add r0, #0xfc
    // strb r1, [r0]
    // ldr r0, [sp, #0x20]
    // ldr r6, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x24
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r1, sp, #0x24
    // add r1, sp, #0x24
    // ldr r5, [sp, #0x18]
    // add r1, sp, #0x24
    // ldr r1, [sp, #0x28]
    // sub r0, r1, r0
    // str r0, [sp, #0x28]
    // add r1, sp, #0x24
    // add r1, sp, #0x24
    // add r1, sp, #0x24
    // ldr r0, [sp, #0x1c]
    // add r6, #0x1c
    // add r0, #0x28
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r7, #0x10
    // add r0, #8
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_02208250(void) {
    // str r0, [sp, #0xc]
    // add r7, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // ldr r0, [sp, #0xc]
    // add r5, #0x10
    // add r4, #8
    // str r0, [sp, #0xc]
}




void ov96_022082BC(void) {
    // add r7, r5, r0
    // add r2, r5, r6
    // add r7, r5, r0
    // add r2, r5, r6
}




void ov96_0220831C(void) {
    // add r0, r5, r0
    // str r0, [sp]
    // add r0, r4, r0
    // add r6, r6, r0
    // add r7, #0xcc
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r1, r2, r1
    // add r1, r5, r6
    // add r1, #0xfc
    // ldr r0, [sp]
}




void ov96_02208374(void) {
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0]
    // sub r0, r6, r0
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r0, #3
    // add r2, #0xe
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov96_02208448(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02208466: ; jump table
    // add r1, r4, r0
    // sub r0, #0x6c
    // add r3, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // sub r0, #0x70
    // add r1, r4, r1
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // sub r0, #0x70
    // add r1, r4, r1
    // add r1, sp, #0x18
    // str r0, [r4, r5]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r4, r3]
    // str r0, [r4, r5]
    // add r1, r4, r0
    // sub r0, #0x6c
    // add r3, sp, #0xc
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // sub r0, #0x70
    // add r1, r4, r1
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x10]
    // sub r0, #0x70
    // add r1, r4, r1
    // add r1, sp, #0xc
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r4, r3]
    // str r0, [r4, r5]
    // add r1, r4, r0
    // sub r0, #0x6c
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // sub r0, #0x70
    // add r1, r4, r1
    // ldr r1, [sp, #4]
    // str r0, [sp, #4]
    // sub r0, #0x70
    // add r1, r4, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r4, r3]
    // str r0, [r4, r5]
}




void ov96_02208608(void) {
    GF_AssertFail();
    // add r3, r4, r1
    // add r2, #0x20
    // strh r2, [r3, r0]
    // strh r2, [r3, r0]
    // add r2, r4, r1
    // strh r1, [r2, r0]
    // add r2, r4, r1
    // strh r1, [r2, r0]
}




void ov96_02208658(void) {
    // add r6, r5, r3
    // strb r2, [r6, r4]
    ov96_0220831C(*((u8*)(r6 + r1)));
    // str r0, [sp, #0x18]
    // add r0, #0x70
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r5, r6
    // add r1, sp, #0x10
    ov96_021EB588(*((u32*)(0x1c + 0x38)));
    // add r0, r5, r6
    // add r1, sp, #0x10
    ov96_021EB588(*((u32*)(r0 + 0x40)));
    // add r1, r5, r0
    // add r0, r1, r0
    ov96_02208A80((r4 << 4), 0);
    // str r0, [sp, #0xc]
    // add r0, #0x70
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r6
    // add r1, sp, #4
    ov96_021EB588(*((u32*)(0x1c + 0x38)));
    // add r0, r5, r6
    // add r1, sp, #4
    ov96_021EB588(*((u32*)(r0 + 0x40)));
    // add r1, r5, r0
    // add r0, r1, r0
    ov96_02208A80((r4 << 4), 1);
    // ldr r1, [sp, #0x30]
    // add r0, r5, r6
    // add r0, #0x44
    // add r7, #0x3c
    // str r0, [sp]
    ov96_021EB52C(*((u32*)(r5 + (0x1c * r4))), 1, 1);
    // ldr r0, [sp]
    ov96_021EB564(*((u32*)(r7 + r0)), 1);
    // add r0, r5, r6
    ov96_021EB52C(*((u32*)(r0 + 0x3c)), 1, 0);
    // add r0, r5, r6
    // ldr r1, [sp, #0x30]
    // add r0, #0x44
    // strb r1, [r0]
}




void ov96_02208740(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}




void ov96_02208784(void) {
    // add r1, sp, #4
    // strb r2, [r1]
    // add r4, sp, #4
    // add r3, sp, #4
    // strb r2, [r4, r1]
    // str r0, [sp]
    // add r4, sp, #4
    // add r0, r5, r0
    // ldr r1, [sp]
    // add r0, r5, r0
    // add r0, r5, r0
    // add r1, #0xb
    // ldr r0, [sp]
    // str r0, [sp]
}




void ov96_02208840(void) {
    // add r1, r5, r0
    // add r6, #9
}




void ov96_02208864(void) {
    // add r2, r5, r0
    // add r0, #0x26
    // add r4, r2, r1
    ov96_021EB564(*((u32*)(r4 + (*((u16*)(r0 + (0x5f << 2))) << 2))), 2);
    ov96_021EB52C(*((u32*)(r4 + (*((u16*)(r5 + 0x000001A2)) << 2))), 1, 1);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r5, r3]
}




void ov96_022088AC(void) {
    // add r0, #0xc
    FillWindowPixelBuffer(0);
    // add r5, r4, r2
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferString(*((u32*)(r4 + 0x20)), 0, *((u32*)(r5 + (0x6a << 2))), 2);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x1c)), 0x9a, *((u32*)r4));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r0, 0);
    String_Delete(r5);
    // add r4, #0xc
    CopyWindowToVram(r4);
}




void ov96_02208914(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r5, sp, #0x14
    // add r4, sp, #0xc
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021EB408(((*((u32*)r4) << 0x18) >> 0x18), 3, 2, ((*((u32*)r5) << 0x18) >> 0x18));
    // ldr r4, [sp, #8]
    // add r7, sp, #0xc
    // add r6, sp, #0x14
    // ldr r0, [sp, #4]
    ov96_021EB4F4(((*((u32*)(r6 + 1)) << 0x18) >> 0x18), ((*((u32*)r7) << 0x18) >> 0x18));
    // str r0, [r4, r1]
    ov96_021EB5B8(*((u32*)(r4 + (0x13 << 4))), (0x13 << 4));
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x1c]
    // sub r2, r1, r5
    // add r1, #0x30
    // add r1, r2, r1
    // str r1, [sp, #0x20]
    // add r1, sp, #0x1c
    Sprite_SetMatrix((0xaf << 0xe), ((0x58 * r2) << 0xc));
    ov96_021EB52C(*((u32*)(r4 + (0x13 << 4))), 1, 1);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov96_022089D0();
}




void ov96_022089D0(void) {
    // str r1, [sp]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #0xc
    // str r0, [sp, #4]
    ov96_021EB5EC(r0, *((u32*)(*((u32*)(ov96_0221CBCC + 0x18)) + (0 << 2))), 0);
    ov96_021EB5EC(r7, r5, 1);
    sub_0200AF00(r6);
    SpriteTransfer_GetPaletteProxy(r5, r0);
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r5, r1, r0
    NNS_G2dGetImageLocation(r6, 2);
    // str r0, [r5, r1]
    // ldr r0, [sp, #8]
    NNS_G2dGetImagePaletteLocation(2);
    // str r0, [r5, r1]
}




void ov96_02208A4C(void) {
    // add r1, #0xc
    AddWindow(*((u32*)(r0 + 8)), r0, ov96_0221CBEC);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 8)), 4, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)r4));
}




void ov96_02208A80(void) {
}




void ov96_02208AA8(void) {
    Heap_Alloc(0x0000055C);
    MI_CpuFill8(0, 0x0000055C);
    // sub r2, r1, r5
    // strb r5, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r1, [r4, r0]
}




void ov96_02208AE8(void) {
    // str r2, [r0, r1]
}




void ov96_02208AF0(void) {
    // str r1, [r0, r2]
}




void ov96_02208AF8(void) {
    // add r0, #0xc
}




void ov96_02208B2C(void) {
}




void ov96_02208B34(void) {
    // strb r3, [r4, r2]
    // sub r2, #9
    // str r3, [r4, r2]
    // strb r2, [r4, r1]
    // add r0, #8
    // add r5, r2, r0
    GF_AssertFail(*((u8*)(r0 + ((0x55 << 4) + 5))), (0x55 << 4), *((u8*)(r0 + (0x55 << 4))), 1);
    ov96_02208BB8(r4, ((r5 << 0x18) >> 0x18));
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // str r2, [r4, r1]
}




void ov96_02208BB8(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #4]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0xab
    // ldr r0, [sp, #0x14]
    // add r0, #0xa6
    // ldr r0, [sp, #0x14]
    // add r0, #0xa4
    // add r5, sp, #0x38
    // str r1, [r5]
    *((u32*)(r5 + 4)) = *((u32*)(r1 + 4));
    // add r0, sp, #0x30
    // str r0, [sp]
    // asr r2, r1, #0xb
    // add r0, #0xb1
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // add r3, sp, #0x34
    ov96_021EB0A4(*((u32*)(*((u32*)r5) + (*((u8*)*((u32*)r5)) << 2))), *((u32*)(*((u32*)r5) + 0x58)), *((u32*)(*((u32*)r5) + 0x5c)), (r3 >> 0x14));
    // add r0, sp, #0x28
    // str r0, [sp]
    // add r0, #0xb1
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x30]
    // add r3, sp, #0x2c
    ov96_021EB03C(*((u32*)(r4 + (*((u8*)r4) << 2))), (r1 << 0xc), (r2 << 0xc));
    // ldr r1, [sp, #0x2c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // ldr r1, [sp, #0x28]
    *((u16*)(r5 + 4)) = (r0 >> 0x14);
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    *((u16*)(r5 + 6)) = ((r0 >> 0x14) >> 0x14);
    // add r6, #8
    // add r5, #8
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x38
    // add r0, r1, r0
    // ldr r2, [sp, #4]
    // str r0, [sp, #0x1c]
    // add r3, sp, #0xd0
    // add r6, #0x20
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r2, #0xc
    // add r3, #0xc
    // ldr r4, [sp, #4]
    // add r5, sp, #0x58
    // add r3, r4, r7
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r4, #0xc
    // add r5, #0xc
    // ldr r0, [sp, #4]
    // ldr r4, [sp, #4]
    // str r0, [sp, #0x18]
    // strh r5, [r4, r0]
    _s32_div_f(0, 6, r3);
    // ldr r0, [sp, #0x1c]
    // sub r0, #0x50
    // add r1, r0, r7
    // str r1, [r4, r0]
    _s32_div_f(r5, 6);
    // ldr r0, [sp, #0x1c]
    // sub r0, #0x30
    // add r1, r0, r6
    // str r1, [r4, r0]
    LCRandom((0x65 << 2));
    // ldr r1, [sp, #0x1c]
    // sub r1, #0x60
    // add r2, r1, r7
    // sub r3, r3, r1
    // ror r3, r0
    // add r0, r1, r3
    // add r1, r2, r0
    // str r1, [r4, r0]
    LCRandom((0x66 << 2), (r0 >> 0x1f), (r0 << 0x1b));
    // ldr r1, [sp, #0x1c]
    // sub r2, r2, r3
    // sub r1, #0x80
    // ror r2, r0
    // add r1, r1, r6
    // add r0, r3, r2
    // add r1, r1, r0
    // str r1, [r4, r0]
    // add r4, #0x14
    // ldr r1, [sp, #4]
    // strh r5, [r1, r0]
    // add r1, #0x14
    // add r3, #0x13
    // ldr r6, [sp, #4]
    // add r3, r6, r3
    // ldrsh r6, [r3, r1]
    // strh r6, [r3, r2]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r4, r0, r1
    // ldr r5, [sp, #0x18]
    // add r6, #0x10
    ov96_022090A8((0 + 1), *((u16*)((0 + 1) + 0x10)), *((u16*)((0 + 1) + 0x12)), (((0 << 0x18) >> 0x18) * 0x14));
    // ldrsh r0, [r6, r0]
    // strh r0, [r6]
    // add r5, #0x14
    // add r6, sp, #0x38
    // add r7, #0x10
    // ldr r0, [sp, #8]
    ov96_022090A8(r4, *((u16*)(r6 + 4)), *((u16*)(r6 + 6)));
    // ldrsh r0, [r7, r0]
    // strh r0, [r7]
    // add r6, #8
    // add r5, sp, #0xd0
    // add r6, #0x10
    ov96_022090A8(r4, ((*((u32*)((r5 + 1) + 4)) << 0x10) >> 0x10), ((*((u32*)((r5 + 1) + 8)) << 0x10) >> 0x10));
    // ldrsh r0, [r6, r0]
    // strh r0, [r6]
    // add r5, #0xc
    // add r5, sp, #0x58
    // add r6, #0x10
    ov96_022090A8(r4, ((*((u32*)(r5 + 4)) << 0x10) >> 0x10), ((*((u32*)(r5 + 8)) << 0x10) >> 0x10));
    // ldrsh r0, [r6, r0]
    // strh r0, [r6]
    // add r5, #0xc
    ov96_022090D8(r4);
    // ldrsh r0, [r4, r0]
    // sub r0, #0x64
    *((u16*)(r4 + 0x10)) = 0x10;
    // ldr r0, [sp, #0xc]
    // add r4, #0x14
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r3, #0xa0
    // add r0, r1, r3
    // ldrsh r6, [r0, r4]
    // add r1, #0x14
    // strh r6, [r0, r5]
    // ldr r3, [sp, #4]
    // add r0, #0xa0
    // ldrsh r2, [r3, r0]
    // strh r2, [r3, r1]
    // add r3, #0x14
    // ldr r0, [sp, #0x14]
    // add r0, #0xaa
    // ldr r2, [sp, #4]
    // add r4, #0xb8
    // add r6, #0xb8
    // ldr r5, [sp, #0x14]
    // add r1, r2, r7
    // add r5, #0xaa
    // ldrsh r0, [r1, r4]
    // add r2, #0x14
    // add r0, r0, r5
    // strh r0, [r1, r6]
    // ldr r0, [sp, #0x14]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // ldr r1, [sp, #4]
    // add r3, #0xa0
    // add r0, r1, r3
    // ldrsh r6, [r0, r4]
    // add r1, #0x14
    // strh r6, [r0, r5]
    // ldr r1, [sp, #4]
    // add r3, #0xa0
    // add r0, r1, r3
    // ldrsh r6, [r0, r4]
    // add r1, #0x14
    // strh r6, [r0, r5]
    // ldr r0, [sp, #4]
    ov96_02208FB8((1 << 8), (((*((u8*)(1 << 8)) >> 0x14) << 4) >> 0x10), (0 + 1), (1 << 8));
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x1c]
    // add r0, sp, #0x20
    // str r0, [sp]
    // add r0, #0xb1
    // add r3, sp, #0x24
    // ldr r1, [sp, #0x1c]
    ov96_021EB0A4(*((u32*)(*((u32*)r0) + (*((u8*)*((u32*)r0)) << 2))), *((u16*)(*((u32*)r0) + 4)), *((u16*)(r2 + 6)));
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    *((u32*)(*((u32*)r0) + 0x7c)) = (r0 << 0xc);
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, #0x80
    // str r1, [r0]
    // ldr r1, [sp, #0x1c]
    // add r1, #0x84
    // str r0, [r1]
    // ldr r1, [sp, #0x1c]
    // add r1, #0x88
    // str r2, [r1]
    // ldr r1, [sp, #0x1c]
    // add r1, #0x8c
    // str r2, [r1]
    // ldr r1, [sp, #0x1c]
    // add r1, #0x90
    // str r0, [r1]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xa5
    // strb r1, [r0]
}




void ov96_02208FB8(void) {
    // add r0, r0, r1
    // add r1, sp, #0
    // stmia r1!, {r0}
    // add r0, #0x14
    // add r0, sp, #0
    // add r1, sp, #0xc0
    // add r0, sp, #0xc0
}




void ov96_02208FF0(void) {
    // mov ip, r0
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r2, sp, #4
    // mov r3, ip
    // add r2, r2, r1
    // add r3, sp, #4
    // str r4, [r3, r1]
    // ldrsh r4, [r5, r4]
    // ldrsh r5, [r5, r6]
    // str r4, [r2]
    // str r2, [r3]
    // str r3, [r2]
    // ldr r0, [sp, #8]
    // ldrsh r2, [r1, r0]
    // add r1, sp, #4
    // str r4, [r7, r5]
    // ldrsh r4, [r4, r0]
    // ldr r4, [sp]
    // str r4, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov96_022090A8(void) {
    // sub r5, #0x10
    // add r4, #0x10
    // sub r0, #0x10
    // add r3, #0x10
}




void ov96_022090D8(void) {
    // tst r0, r2
    // tst r0, r2
}




void ov96_02209130(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_0220A840(*((u32*)(r0 + 0x40)));
    ov96_0220AD34(*((u32*)(r4 + 0x40)));
    // add r0, sp, #0xc
    // strh r2, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov96_0221CC00 + 2));
    SpriteManager_GetSpriteList(*((u32*)(r4 + 0xc)), *((u16*)(ov96_0221CC00 + 2)), *((u16*)ov96_0221CC00));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // str r0, [sp, #8]
    ov96_021E62AC(r6, 0, *((u32*)(r4 + 0x14)), r0);
    // strb r0, [r5]
    ov96_021E637C(r6);
    ov96_021EB144(*((u32*)(r4 + 0x10)), 0);
    PokeathlonCourse_SetStateField07(r6, 1);
    GF_AssertFail();
}




void ov96_022091B4(void) {
    // add r0, #0xf0
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    // ldr r0, [sp, #0xc]
    // str r1, [r4, r0]
    // add r0, #0x28
}




void ov96_0220935C(void) {
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_022093D0(void) {
    // add r0, #0x50
    // add r0, r0, r5
    // add r5, #0x28
}




void ov96_02209448(void) {
    // str r0, [sp, #0xc]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetField1ED();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220946C: ; jump table
    Heap_Create(0x5c, 0x8d, (6 << 0x10));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_02209820(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_AllocPtr4FromHeap((0x27 << 4));
    MI_CpuFill8(0, (0x27 << 4));
    // str r0, [r4]
    // str r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_IncrementField1ED((0x26 << 4), (0xe1 << 2));
    // ldr r0, [sp, #0x14]
    BgConfig_Alloc(*((u32*)r0));
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 4)) = r0;
    // ldr r0, [sp, #0xc]
    ov96_021E6670(4);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    ov96_02209C14(*((u32*)(r0 + 4)), *((u32*)r1));
    // ldr r0, [sp, #0xc]
    ov96_02209DE4();
    // ldr r0, [sp, #0x14]
    ov96_02209D14();
    // ldr r0, [sp, #0x14]
    ov96_02209840();
    // ldr r0, [sp, #0x14]
    SpriteManager_GetSpriteList(*((u32*)(r0 + 0xc)));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x14]
    ov96_021EA854(*((u32*)r0), 9, 0x20, *((u32*)(r3 + 0x14)));
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x10)) = r0;
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_IncrementField1ED();
    // add r6, sp, #0x18
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r5, [sp, #0x10]
    // add r7, sp, #0x5c
    // ldr r0, [sp, #0xc]
    ov96_021E5F24(0, 0, r6);
    // ldr r1, [sp, #0x10]
    GF_AssertFail();
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    ov96_021E6168(r4, r7);
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    ov96_021E60C0(r4);
    ov96_021E6108();
    *((u32*)(r6 + 0x14)) = r0;
    // add r7, #0x10
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r2, sp, #0x5c
    // add r3, sp, #0x18
    ov96_021EA8A8(*((u32*)(0 + 0x10)), 9);
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_IncrementField1ED();
    // ldr r0, [sp, #0x14]
    ov96_021EAA00(*((u32*)(r0 + 0x10)));
    // ldr r0, [sp, #0x14]
    ov96_02209A14();
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    ov96_02209B04(*((u32*)(r0 + 8)), *((u32*)(r1 + 0xc)));
    // ldr r0, [sp, #0x14]
    SpriteManager_GetSpriteList(*((u32*)(r0 + 0xc)));
    // ldr r2, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    ov96_021E61D8(0, *((u32*)(r2 + 0x14)), r0);
    Sprite_SetDrawPriority(*((u32*)r0), 0);
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_IncrementField1ED();
    // ldr r0, [sp, #0x14]
    ov96_02209910();
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0xc]
    ov96_0220A744(*((u32*)r0), *((u32*)(r1 + 8)), *((u32*)(r2 + 0xc)));
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x40)) = r0;
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_IncrementField1ED();
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0xc]
    ov96_0220B374(*((u32*)r0), *((u32*)(r1 + 8)), *((u32*)(r2 + 0xc)));
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x14]
    *((u32*)(r1 + 0x4c)) = r0;
    // ldr r3, [sp, #0xc]
    // str r0, [sp]
    ov96_0220B7F4(*((u32*)r1), *((u32*)(r1 + 8)), *((u32*)(r2 + 0xc)));
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x44)) = r0;
    ov96_021EB144(*((u32*)(r1 + 0x10)), 1);
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    ov96_0220C93C(*((u32*)r1));
    // ldr r1, [sp, #0x14]
    *((u32*)(r1 + 0x48)) = r0;
    // ldr r0, [sp, #0x14]
    ov96_02209F14();
    // ldr r0, [sp, #0xc]
    ov96_02209F8C();
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)(r0 + 4)));
    sub_0203A994(1);
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_SetField1F4(1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // ldr r0, [sp, #0x14]
    ov96_0220C9CC(*((u32*)(r0 + 0x48)));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_IncrementField1ED();
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // ldr r0, [sp, #0xc]
    ov96_0220A424();
    // ldr r0, [sp, #0xc]
    ov96_0220A4DC();
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_IncrementField1ED();
    IsPaletteFadeFinished();
    GF_AssertFail(1);
}




u32 ov96_02209738(void) {
}




void ov96_02209748(void) {
    PokeathlonCourse_GetGraphicsSystem();
    ov96_021E9510();
    PokeathlonCourse_GetField5F0_AtIndex(r5, ((0 << 0x18) >> 0x18));
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov96_021E95F8(r5, r6, r4, r0);
    ov96_021E93B4(r6, 1);
    ov96_0221A56C(r6, 3);
    ov96_021E952C(r6);
    ov96_021E9570(r6, 3);
}




void ov96_022097AC(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_0220A0E0();
    ov96_021E5F24(r5);
    ov96_0220C998(*((u32*)(r4 + 0x48)));
    ov96_0220A7F8(*((u32*)(r4 + 0x40)));
    ov96_0220B8A0(*((u32*)(r4 + 0x44)));
    ov96_0220B500(*((u32*)(r4 + 0x4c)));
    ov96_022099EC(r4);
    ov96_022098E8(r4);
    ov96_02209CA8(r4);
    sub_0203A914();
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    Heap_Destroy(0x8d);
}




void ov96_02209820(void) {
}




void ov96_02209840(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    SpriteSystem_Alloc(*((u32*)r0), ov96_0221CC1C);
    *((u32*)(r4 + 8)) = r0;
    SpriteManager_New();
    *((u32*)(r4 + 0xc)) = r0;
    // add r1, sp, #0x14
    // add r2, sp, #0
    SpriteSystem_Init(*((u32*)(r4 + 8)), 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), (1 << 8));
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)));
    SpriteSystem_GetRenderer(*((u32*)(r4 + 8)));
    G2dRenderer_SetSubSurfaceCoords(0, (1 << 0x14));
    ov96_021E9A78(*((u32*)r4), 0x000002E7, 1);
    *((u32*)(r4 + 0x14)) = r0;
    NARC_New(0x14, *((u32*)r4));
    *((u32*)(r4 + 0x50)) = r0;
}




void ov96_022098E8(void) {
}




void ov96_02209910(void) {
    // add r0, sp, #0x14
    // str r7, [r0]
    // str r6, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r1, sp, #0x14
    // add r6, r6, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #8
    // str r1, [r0]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, sp, #8
    // add r6, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_022099EC(void) {
}




void ov96_02209A14(void) {
    // str r7, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + 8)), *((u32*)(r0 + 0xc)), 0xea, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r4, r5, 0xea, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, r5, 0xea, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, r5, 0xea, 0xa);
    // str r0, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r4, r5, 0xea, 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r4, r5, 0xea, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, r5, 0xea, 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, r5, 0xea, 0xe);
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r4, r5, 0x14, r0);
    // strh r0, [r6, r1]
}




void ov96_02209B04(void) {
    // str r4, [sp]
    // str r4, [sp, #4]
    // str r2, [sp, #8]
    SpriteSystem_LoadCharResObj(0xea, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r5, r6, 0xea, 0xf);
    // str r0, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r5, r6, 0xea, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r0, r4, r0
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r5, r6, 0xea, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r5, r6, 0xea, 0x11);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r5, r6, 0xea, 0x12);
}




void ov96_02209BB0(void) {
    // sub r0, r7, r4
    // add r0, r6, r0
}




void ov96_02209BF8(void) {
}




void ov96_02209C14(void) {
    // add r3, sp, #4
    // str r1, [sp]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r4, sp, #0x14
    InitBgFromTemplate(r6, ((*((u32*)ov96_0221CC48) << 0x18) >> 0x18), ov96_0221CCF8, 0);
    BgClearTilemapBufferAndCommit(r6, ((*((u32*)r5) << 0x18) >> 0x18));
    // ldr r3, [sp]
    BG_ClearCharDataRange(((*((u32*)r5) << 0x18) >> 0x18), 0x20, 0);
    // add r4, #0x1c
    // ldr r1, [sp]
    FontID_Alloc(4);
    GfGfx_EngineATogglePlanes(4, 0);
    BgSetPosTextAndCommit(r6, 0, 3, 0x10);
}




void ov96_02209CA8(void) {
    String_Delete(*((u32*)(r0 + 0x18)));
    MessageFormat_Delete(*((u32*)(r6 + (0x97 << 2))));
    DestroyMsgData(*((u32*)(r6 + (0x96 << 2))));
    // add r4, r6, r0
    RemoveWindow(r4);
    // add r4, #0x10
    FreeBgTilemapBuffer(*((u32*)(r6 + 4)), ((*((u32*)ov96_0221CC48) << 0x18) >> 0x18));
    FontID_Release(4);
    Heap_Free(*((u32*)(r6 + 4)));
}




void ov96_02209D14(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
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
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov96_02209DE4(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)r0));
    // str r0, [r6, r1]
    MessageFormat_New(*((u32*)r6), (0x96 << 2));
    // str r0, [r6, r1]
    // sub r1, #0x44
    // add r5, r6, r1
    AddWindow(*((u32*)(r6 + 4)), r5, ov96_0221CC60);
    FillWindowPixelBuffer(r5, 0);
    ClearWindowTilemap(r5);
    // add r4, #8
    // add r5, #0x10
    // ldr r0, [sp]
    ov96_021E5F24();
    // ldr r0, [sp]
    PokeathlonCourse_GetParticipantUnk04(r0);
    String_New(0xb, *((u32*)r6));
    // add r1, #0x12
    *((u32*)(r4 + 0x18)) = r0;
    CopyU16ArrayToString(r5);
    // add r5, #0x28
}




void ov96_02209E70(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r2, r5, r2
    // str r0, [sp]
    // add r0, r5, r2
    // add r1, #0x14
    // add r2, #0x10
}




void ov96_02209F14(void) {
    // str r0, [sp]
    // add r1, #0x44
    // add r2, #0x40
    // add r0, r4, r3
    // sub r3, #0xeb
}




void ov96_02209F40(void) {
    FillWindowPixelBuffer(0);
    // ldr r3, [sp, #0x28]
    ReadMsgData_ExpandPlaceholders(r4, r6, r7);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    CopyWindowToVram(r5);
}




void ov96_02209F8C(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r7 + 8)));
    GF_AssertFail(*((u32*)(r7 + 0xc)));
    GF_AssertFail(*((u32*)(r7 + 0x44)));
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r0, #0x54
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // asr r4, r0, #0x10
    // ldr r0, [sp, #0x1c]
    // add r0, #0xd
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_0220D1A0(*((u32*)(r7 + 8)), *((u32*)(r7 + 0xc)), r4, 0x98);
    // ldr r1, [sp, #0x18]
    *((u32*)(r1 + 4)) = r0;
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #8]
    ov96_0220A254(((r1 << 0x18) >> 0x18), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_0220D1A0(*((u32*)(r7 + 8)), *((u32*)(r7 + 0xc)), r4, 0x98);
    // ldr r1, [sp, #0x18]
    *((u32*)(r1 + 8)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #0x10
    // asr r0, r0, #0x10
    // ldr r5, [sp, #0x18]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // sub r3, r3, r4
    // str r0, [sp]
    // sub r0, r0, r6
    // str r0, [sp, #4]
    // asr r3, r3, #0x10
    // sub r3, #0x14
    // ldr r2, [sp, #0x20]
    // asr r3, r3, #0x10
    ov96_0220D1A0(*((u32*)(r7 + 8)), *((u32*)(r7 + 0xc)), ((0x88 << 0x10) << 0x10));
    *((u32*)(r5 + 0x5c)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // add r4, #0x10
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #0x10
    // ldr r4, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // sub r3, r3, r6
    // str r0, [sp]
    // sub r0, r0, r5
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // asr r3, r3, #0x10
    ov96_0220D1A0(*((u32*)(r7 + 8)), *((u32*)(r7 + 0xc)), (0x88 << 0x10));
    *((u32*)(r4 + 0xc)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // ldr r0, [sp, #0x18]
    // add r0, #0x70
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
}




void ov96_0220A0E0(void) {
    // add r6, #0x54
    // add r6, #0x70
}




void ov96_0220A14C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, #0xf0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r7, #0x54
    // ldr r0, [sp, #4]
    // sub r6, #0x14
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // strb r0, [r7]
    // ldr r0, [sp, #4]
    // add r7, #0x70
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_0220A254(void) {
    // str r2, [sp, #8]
    // ldr r2, [sp, #8]
    // add r3, sp, #0xc
    // add r4, #0x50
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // add r1, sp, #0xc
}




void ov96_0220A298(void) {
    ov96_0220B730(*((u32*)(r0 + 0x4c)));
    System_GetTouchNew();
    // add r0, sp, #0xc
    // add r1, sp, #8
    System_GetTouchNewCoords();
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // and r1, r0
    // ldr r0, [sp, #8]
    // str r0, [r5, r4]
    // and r1, r0
    // ldr r0, [sp, #8]
    // str r0, [r5, r4]
    // str r1, [r5, r4]
    // str r0, [r5, r4]
    System_GetTouchHeld(((*((u32*)(r5 + r4)) << 7) >> 0x1f), *((u32*)(r5 + r4)), 1, 1);
    // sub r0, r1, r0
    ov96_0220B744(*((u32*)(r5 + 0x4c)), ((*((u32*)(r5 + r4)) << 0x10) >> 0x18));
    ov96_0220B6EC(*((u32*)(r5 + 0x4c)));
    // and r0, r1
    // str r0, [r5, r4]
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchHeldCoords(((*((u32*)(r5 + r4)) << 7) >> 0x1f), *((u32*)(r5 + r4)));
    // and r1, r0
    // ldr r0, [sp]
    // str r0, [r5, r4]
    // str r0, [r5, r4]
    // and r0, r1
    // str r0, [r5, r4]
    System_GetTouchNew(0xFEFFFFFF, *((u32*)(r5 + r4)), *((u32*)(r5 + r4)));
    System_GetTouchHeld();
    TouchscreenHitbox_FindRectAtTouchNew(ov96_0221CC04);
    // mvn r1, r1
    ov96_0220B744(*((u32*)(r5 + 0x4c)), 0);
    PlaySE(0x0000089B);
    ov96_0220B6EC(*((u32*)(r5 + 0x4c)));
    PlaySE(0x0000089C);
    ov96_0220B744();
    ov96_0220B788(*((u32*)(r5 + 0x4c)));
    ManagedSprite_SetAnimNoRestart(*((u32*)(r5 + 0x28)), 0x13);
}




void ov96_0220A424(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r5);
    ov96_021E8A20();
    ov96_0220B758(*((u32*)(r4 + 0x4c)));
    ov96_0220B730(*((u32*)(r4 + 0x4c)));
    ov96_0220AD4C(*((u32*)(r4 + 0x40)));
    // str r1, [r5]
    // and r0, r1
    // str r0, [r5]
    ov96_0220B79C(*((u32*)(r4 + 0x4c)), ((((*((u32*)r6) << 6) >> 0x18) << 0x18) >> 0x10), 0xff);
    // and r1, r2
    // str r0, [r5]
    ov96_0220B774(*((u32*)(r4 + 0x4c)), 0xFF00FFFF, *((u32*)r5));
    // and r1, r2
    // str r0, [r5]
    // and r1, r0
    // str r0, [r5]
    ov96_0220B7B4(*((u32*)(r4 + 0x4c)), *((u32*)r5), 0);
    // and r1, r2
    // str r0, [r5]
}




void ov96_0220A4DC(void) {
    // str r0, [sp]
    ov96_021E5F24();
    // ldr r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + 0x4c)));
    GF_AssertFail(*((u32*)(r5 + 0x40)));
    // add r0, #0x28
    ov96_021E8A20(r4);
    // add r0, #0x50
    ov96_021E8A20(r4);
    ov96_021E8A20(r4);
    // ldmia r3!, {r0, r1}
    // stmia r6!, {r0, r1}
    // add r4, #0x50
    // str r0, [r6]
    ov96_021E8A20(r4, (4 - 1), r0);
    // str r2, [r5]
    // and r1, r2
    // str r2, [r5]
    // and r1, r2
    // add r4, #0x28
    // str r2, [r5]
    // and r1, r2
    // str r2, [r5]
    // and r1, r2
    // str r2, [r5]
    // and r1, r2
    // stmia r5!, {r0}
    // ldr r0, [sp]
    ov96_0220A424((((((*((u32*)r0) << 3) >> 0x1f) << 0x1f) >> 4) | 0xF7FFFFFF), 0xF7FFFFFF, (((((*((u32*)r0) << 5) >> 0x1f) << 0x1f) >> 5) | 0xFBFFFFFF));
}




void ov96_0220A5DC(void) {
    // str r0, [sp, #0x10]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp, #0x10]
    ov96_021E8318(((0x97 << 2) - 4), ((r5 << 0x10) >> 0x10));
    // add r0, r4, r0
    FillWindowPixelBuffer((0x8e << 2), 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r5, 3);
    ReadMsgData_ExpandPlaceholders(r6, r7, 0x9f, *((u32*)r4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0x8e << 2), 4, r0, 0);
    String_Delete(r5);
    // add r0, r4, r0
    CopyWindowToVram((0x8e << 2));
}




void ov96_0220A660(void) {
    // mvn r1, r1
    // ldrsb r0, [r5, r0]
    ScheduleSetBgPosText(*((u32*)(r1 + 4)), 0, 3, ((0x9b << 2) * 0));
    ScheduleSetBgPosText(*((u32*)(r5 + 4)), 1, 3, r4);
    SpriteSystem_GetRenderer(*((u32*)(r5 + 8)));
    // neg r2, r4
    G2dRenderer_SetMainSurfaceCoords(0, (r2 << 0xc));
    // ldrsb r2, [r5, r1]
    // sub r0, r2, r0
    // strb r0, [r5, r1]
    // eor r2, r0
    // strb r2, [r5, r0]
    // ldrsb r0, [r5, r1]
    ScheduleSetBgPosText(*((u32*)(r5 + 4)), 0, 3, 0x10);
    ScheduleSetBgPosText(*((u32*)(r5 + 4)), 1, 3, 0);
    SpriteSystem_GetRenderer(*((u32*)(r5 + 8)));
    G2dRenderer_SetMainSurfaceCoords(0, 0);
    // str r1, [r5, r0]
    SysTask_Destroy(r6, 0);
}




void ov96_0220A704(void) {
    SysTask_Destroy(*((u32*)(r0 + (0x9a << 2))));
    // strb r1, [r5, r0]
    // strb r4, [r5, r1]
    // strb r6, [r5, r0]
    SysTask_CreateOnMainQueue(ov96_0220A660, r5, 2);
    // str r0, [r5, r1]
}




void ov96_0220A744(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // str r3, [r2, r0]
    // ldr r3, [sp, #0xc]
    // str r2, [r3, r0]
    // str r4, [r0]
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // ldr r5, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [r5, r1]
    // ldr r0, [sp, #0xc]
    // add r0, #0x14
    // ldr r0, [sp, #0xc]
}




void ov96_0220A7F8(void) {
    // add r0, #0x14
}




void ov96_0220A840(void) {
    // add r4, #0x14
}




void ov96_0220A87C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r5, [sp]
    // ldr r0, [sp]
    // add r0, #0x14
    // str r0, [sp]
}




void ov96_0220A8CC(void) {
    // sub r0, #0x30
    // add r1, r5, r1
}




void ov96_0220A910(void) {
    GF_AssertFail();
    GF_AssertFail(((0 << 0x18) >> 0x1c), ((*((u32*)(r4 + (6 << 6))) << 0x1c) >> 0x1c));
    // sub r0, #0x30
    // add r1, r4, r1
    // add r1, sp, #0x10
    // add r1, #2
    // add r2, sp, #0x10
    ov96_0220B148(*((u32*)((((*((u32*)(r4 + (6 << 6))) << 0x18) >> 0x1c) << 2) + (6 << 6))), (((*((u32*)(r4 + (6 << 6))) << 0x18) >> 0x1c) << 2));
    // add r0, sp, #0x18
    // add r1, sp, #0x14
    System_GetTouchNewCoords();
    // add r1, sp, #0x10
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp, #0x14]
    // sub r0, #0x12
    // ldr r0, [sp]
    // add r0, #0xc
    // ldr r0, [sp, #0x18]
    _ffltu((0 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffltu((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #0xc]
    _ffltu((r4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _ffltu((r4 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #8]
    // add r1, sp, #0x10
    // ldrsh r0, [r1, r0]
    // add r5, sp, #0x1c
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    _fflt((0 << 0xc));
    _fadd(r6, r0);
    _fflt((r0 << 0xc));
    _fsub(r6);
    _ffix();
    // str r0, [r5]
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp]
    // add r0, r0, r1
    _fflt((2 << 0xc));
    _fadd(r6, r0);
    _fflt((r0 << 0xc));
    _fsub(r6);
    _ffix();
    *((u32*)(r5 + 4)) = r0;
    // add r5, #0xc
    // ldr r4, [sp, #0x1c]
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // sub r2, r2, r4
    // sub r0, r1, r0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // add r0, r0, r2
    // adc r1, r3
    // ldr r1, [sp, #0x28]
    // sub r1, r1, r4
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (r1 << 0x14), (2 << 0xa), 0);
    // ldr r1, [sp, #0x20]
    // ldr r5, [sp, #0x34]
    // add r4, r0, r1
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp, #0x44]
    // ldr r0, [sp, #0x38]
    // sub r2, r2, r5
    // sub r0, r1, r0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // add r0, r0, r2
    // adc r1, r3
    // ldr r1, [sp, #0x40]
    // sub r1, r1, r5
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (r1 << 0x14), (2 << 0xa), 0);
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0xc]
    // add r0, r0, r1
    // ldr r1, [sp, #0x28]
    // ldr r3, [sp, #0x34]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #0x1c]
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x40]
}




void ov96_0220AAEC(void) {
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    GF_AssertFail(0);
    // add r0, sp, #0x20
    // add r1, sp, #0x1c
    System_GetTouchNewCoords(0);
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0xc)), (r1 << 0x10), (r2 << 0x10));
    // ldr r0, [sp, #0x38]
    ManagedSprite_SetAnim(*((u32*)(r5 + 0xc)), 0x12);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 1);
    // ldr r0, [sp, #0x38]
    // add r6, #0x96
    // asr r6, r0, #0x10
    PlaySE(0x000008BB);
    // add r6, #0xa0
    // asr r6, r0, #0x10
    PlaySE(0x000008BB);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x14
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r1
    // add r1, r5, r0
    // ldrsh r0, [r4, r0]
    // sub r0, r0, r6
    *((u16*)(*((u32*)((0 + 1) + (0x55 << 2))) + 8)) = 8;
    // ldrsh r0, [r4, r0]
    // ldr r1, [sp, #0x14]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ManagedSprite_SetAnim(*((u32*)*((u32*)((0 + 1) + (0x55 << 2)))), 0, *((u32*)(r5 + (6 << 6))));
    // add r1, sp, #0x18
    // add r1, #2
    // add r2, sp, #0x18
    ManagedSprite_GetPositionXY(*((u32*)r4));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
    // ldrsh r0, [r4, r0]
    // add r3, sp, #0x18
    // neg r0, r0
    // asr r6, r0, #0x10
    // ldr r0, [sp, #8]
    // ldrsh r2, [r3, r2]
    // str r0, [sp, #8]
    // ldrsh r3, [r4, r3]
    // ldr r0, [sp, #0x10]
    ov96_0220B1D8(((8 << 0x10) + 1), 4, 2, 0);
    ov96_021E5F24(*((u32*)r5));
    // str r0, [sp]
    // ldr r2, [sp, #4]
    ov96_021E8228(*((u32*)r5), ((r0 << 0x18) >> 0x18), 3);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    PlaySE(0x000008B9);
    PlaySE(0x000008B8);
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x10)), (r1 << 0x10), (r2 << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x10)), 6);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 1);
    // ldr r0, [sp, #8]
    // add r1, r5, r1
    // sub r0, #0x30
    // ldrsh r0, [r1, r0]
    ManagedSprite_SetAnim(*((u32*)*((u32*)((((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x1c) << 2) + (6 << 6)))), 3);
    ManagedSprite_SetAnim(*((u32*)r1), 2);
    PlaySE(0x000008B8);
    LCRandom();
    // sub r3, r3, r4
    // ror r3, r2
    // add r3, r4, r3
    // sub r2, r2, r3
    sub_0200592C(0x000008B8, 0x0000FFFF, 0x40, (r0 << 0x19));
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // str r1, [r0]
    // ldr r0, [sp, #8]
}




void ov96_0220AD34(void) {
}




void ov96_0220AD4C(void) {
}




void ov96_0220AD64(void) {
    // sub r7, #0x2c
    ov96_0220B164(*((u32*)(r0 + (6 << 6))), ((*((u32*)(r0 + (6 << 6))) << 0x18) >> 0x1c));
    PlaySE(0x000008BD);
    // str r0, [r5, r1]
    // and r1, r4
    // str r6, [r5, r1]
    // and r1, r4
    // str r1, [r5, r3]
    // sub r0, #0x2c
    // add r1, r5, r1
    ov96_0220AED4(*((u32*)((((*((u32*)(r5 + (2 | (*((u32*)(r5 + (6 << 6))) & ~(0xf))))) << 0x18) >> 0x1c) << 2) + (2 | (*((u32*)(r5 + (6 << 6))) & ~(0xf))))), (((*((u32*)(r5 + (2 | (*((u32*)(r5 + (6 << 6))) & ~(0xf))))) << 0x18) >> 0x1c) << 2), ((*((u32*)(r5 + ((2 | (*((u32*)(r5 + (6 << 6))) & ~(0xf))) - 4))) << 0x10) >> 0x10), ((2 | (*((u32*)(r5 + (6 << 6))) & ~(0xf))) - 4));
    PlaySE(0x000008C1);
    // str r0, [r5, r2]
    ov96_0220AF64(*((u32*)(r5 + (0x55 << 2))), (((((*((u32*)(r5 + (6 << 6))) << 0x18) >> 0x1c) + 1) << 0x1c) >> 0x18), (6 << 6), *((u32*)(r5 + (6 << 6))));
}




void ov96_0220AE28(void) {
    // str r1, [r0, r2]
}




void ov96_0220AE40(void) {
    GF_AssertFail();
    GF_AssertFail();
    Heap_Alloc(r4, 0x14);
    MI_CpuFill8(0, 0x14);
    // and r1, r0
    *((u32*)(r4 + 0x10)) = (((r5 << 0x19) >> 5) | *((u32*)(r4 + 0x10)));
    // sub r0, r0, r1
    // str r0, [sp]
    // str r5, [sp, #4]
    ov96_0220D13C(r6, r7, 0, 0);
    *((u32*)(r4 + 4)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_0220D13C(r6, r7, 0x78, 0);
    // str r0, [r4]
    ManagedSprite_SetDrawFlag(0);
    ManagedSprite_SetAnimateFlag(*((u32*)r4), 1);
}




void ov96_0220AED4(void) {
    GF_AssertFail();
    *((u16*)(r4 + 8)) = 0x64;
    // and r1, r0
    // and r1, r0
    *((u32*)(r4 + 0x10)) = (((1 << 0xc) << 0xf) | (*((u32*)(r4 + 0x10)) | (1 << 0xc)));
    ManagedSprite_SetAnim(*((u32*)r4), 1);
    ManagedSprite_SetPositionXY(*((u32*)r4), 0x78, 0);
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    ov96_0220AFF8(r4);
    ov96_0220B068(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 1);
}




void ov96_0220AF30(void) {
}




void ov96_0220AF64(void) {
    // sub r4, r0, r2
    // and r0, r1
    // add r1, #0x14
    *((u32*)(r0 + 0x10)) = (0xFFFFF00F | ((((*((u32*)(r0 + 0x10)) << 0x14) >> 0x18) << 0x18) >> 0x14));
    ManagedSprite_OffsetPositionXY(*((u32*)r0), 0, (((0xFFFFF00F | ((((*((u32*)(r0 + 0x10)) << 0x14) >> 0x18) << 0x18) >> 0x14)) << 0x14) >> 0x18));
    ManagedSprite_OffsetPositionXY(*((u32*)(r5 + 4)), 0, ((*((u32*)(r5 + 0x10)) << 0x14) >> 0x18));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 4)));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)r5));
    // add r3, sp, #0
    // ldrsh r0, [r3, r2]
    // strh r4, [r3]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)r5), 2, 0);
    ov96_0220B068(r5);
    // and r1, r0
    *((u32*)(r5 + 0x10)) = ((2 << 0xc) | *((u32*)(r5 + 0x10)));
}




void ov96_0220AFF8(void) {
    GF_AssertFail();
    MTRandom();
    _u32_div_f(3);
    // and r0, r1
    *((u32*)(r4 + 0x10)) = ((((((r1 << 0x18) >> 0x18) + 1) << 0x18) >> 0x18) | (*((u32*)(r4 + 0x10)) & ~(0xf)));
    MTRandom(((((((r1 << 0x18) >> 0x18) + 1) << 0x18) >> 0x18) | (*((u32*)(r4 + 0x10)) & ~(0xf))), 0xf, (*((u32*)(r4 + 0x10)) & ~(0xf)));
    // ldrsh r2, [r1, r2]
    // and r0, r1
    // add r0, r2, r0
    *((u16*)(r4 + 0xa)) = r0;
    MTRandom(0xf, ((*((u32*)(r4 + 0x10)) << 0x1c) >> 0x1a));
    _u32_div_f(0xc);
    // ldrsh r0, [r0, r2]
    // add r0, r0, r1
    *((u16*)(r4 + 0xc)) = ov96_0221CDCA;
}




void ov96_0220B068(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // ldrsh r0, [r4, r0]
    // add r0, r3, r0
    // ldrsh r5, [r2, r3]
    // ldrsh r0, [r4, r0]
    // add r0, r5, r0
    // strh r0, [r2]
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
}




void ov96_0220B0A4(void) {
    // add r1, sp, #4
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    *((u8*)(r1 + 2)) = 0;
    *((u8*)(r1 + 3)) = 0;
    *((u8*)(r1 + 4)) = 0;
    *((u8*)(r1 + 5)) = 0;
    *((u8*)(r1 + 6)) = 0;
    *((u8*)(r1 + 7)) = 0;
    *((u8*)(r1 + 8)) = 0;
    *((u8*)(r1 + 9)) = 0;
    *((u8*)(r1 + 0xa)) = 0;
    *((u8*)(r1 + 0xb)) = 0;
    GF_AssertFail(0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r6 + 4)), (r5 << 2));
    // add r6, sp, #0
    // ldrsh r2, [r6, r0]
    // ldrsh r3, [r6, r3]
    // add r1, sp, #4
    // add r6, r2, r6
    // strb r6, [r1]
    // add r6, r2, r6
    *((u8*)(r1 + 1)) = *((u8*)(r4 + 1));
    // add r6, r3, r6
    *((u8*)(r1 + 2)) = *((u8*)(r4 + 2));
    // add r6, r3, r6
    *((u8*)(r1 + 3)) = *((u8*)(r4 + 3));
    // add r0, sp, #4
    // strb r2, [r0, r1]
    TouchscreenHitbox_FindRectAtTouchNew((0 + 1), (r5 << 2), 0xff, 2);
    // mvn r1, r1
}




void ov96_0220B148(void) {
}




void ov96_0220B164(void) {
}




void ov96_0220B178(void) {
    // add r1, #0x1c
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [r5]
    // add r5, #0x14
}




void ov96_0220B1B8(void) {
    // add r5, #0x14
}




void ov96_0220B1D8(void) {
    // str r1, [sp]
    // str r3, [sp, #4]
    // ldr r0, [sp, #4]
    // and r0, r1
    // and r0, r1
    // and r0, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #8]
    // mvn r0, r0
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // and r0, r1
    // add r0, #8
    // and r0, r1
    // add r0, #8
    // and r0, r1
    // add r0, #8
    // ldr r2, [sp, #4]
    // ldr r0, [sp]
    // add r5, #0x14
}




void ov96_0220B2D4(void) {
    // ldrsh r1, [r4, r0]
    // asr r0, r0, #0xc
    // add r0, r1, r0
    // ldrsh r1, [r4, r2]
    // asr r0, r0, #0xc
    // sub r0, r1, r0
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r0]
    // add r0, #0xf0
}




void ov96_0220B324(void) {
    // add r5, #0x14
}




void ov96_0220B354(void) {
    // add r5, #0x14
}




void ov96_0220B374(void) {
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r7, [r4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // add r0, #0x34
    // add r0, #0x10
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // add r3, sp, #0x10
    // ldrsh r0, [r3, r7]
    // sub r0, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r7]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // add r3, sp, #0x10
    // ldrsh r0, [r3, r7]
    // sub r0, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r7]
    // add r1, sp, #0x10
    // add r1, #2
    // add r2, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r7, sp, #0x10
    // ldrsh r2, [r7, r2]
    // ldrsh r3, [r7, r3]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r7, r2]
    // ldrsh r3, [r7, r3]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r7, r2]
    // ldrsh r3, [r7, r3]
    // ldrsh r0, [r3, r7]
    // sub r0, #0x18
    // strh r0, [r3]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r7]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
}




void ov96_0220B500(void) {
}




void ov96_0220B528(void) {
    GF_AssertFail();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220B54E: ; jump table
    ov96_0220B940(r4, r5);
    ov96_0220B95C(r4);
    ov96_0220B988(r4);
    ov96_0220B9A8(r4);
    GF_AssertFail();
    // str r1, [r0]
    ov96_0220C680(r4, (*((u32*)ov96_0221E5A4) + 1));
    ov96_0220BD38(r4);
    // add r0, #0x34
    ov96_0220D2AC(r4, ((*((u32*)(r4 + 0x40)) << 0xb) >> 0x15), ((((*((u32*)(r4 + 0x40)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    // and r0, r1
    *((u32*)(r4 + 0x40)) = (0xFFE003FF | (((((*((u32*)(r4 + 0x40)) << 0xb) >> 0x15) + 1) << 0x15) >> 0xb));
    ManagedSprite_IsAnimated(*((u32*)(r4 + 0x10)), (((((*((u32*)(r4 + 0x40)) << 0xb) >> 0x15) + 1) << 0x15) >> 0xb));
    Sprite_GetCellAnim(*((u32*)*((u32*)(r4 + 0x10))));
    NNS_G2dGetAnimCtrlCurrentElement();
    GF_AssertFail(*((u32*)(r6 + 0xc)));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x10)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r1]
    // ldrsh r0, [r5, r0]
    // add r0, r2, r0
    *((u16*)(r3 + 2)) = 4;
    // ldrsh r0, [r3, r2]
    // ldrsh r5, [r5, r6]
    // add r0, r0, r5
    // strh r0, [r3]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x14)), 2, 0);
    // add r3, sp, #0
    // ldrsh r0, [r3, r2]
    // sub r0, #0x18
    // strh r0, [r3]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x18)), 2, 0);
}




void ov96_0220B634(void) {
    // str r2, [sp, #4]
    // str r1, [r0]
    GF_AssertFail(((*((u32*)(r0 + 0x40)) << 0x16) >> 0x18), 0);
    // add r4, #0x34
    ov96_0220D33C(((*((u32*)(r5 + (((*((u32*)(r5 + 0x40)) << 0x1e) >> 0x1e) << 2))) << 6) >> 0x18), ((((*((u32*)(r5 + 0x44)) << 8) >> 0x18) << 0x10) >> 0x10));
    // and r1, r2
    // str r0, [r4, r6]
    ov96_0220C578(r5, 2, *((u32*)(r4 + r6)));
    // ldr r2, [sp, #4]
    ov96_0220C714(r5, r7);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x10)), 2);
    ov96_021E5F24(*((u32*)(r5 + 0xc)));
    // str r0, [sp]
    ov96_021E8228(*((u32*)(r5 + 0xc)), ((r0 << 0x18) >> 0x18), ((((*((u32*)(r5 + 0x40)) << 0x1e) >> 0x1e) << 0x18) >> 0x18), 4);
    ov96_0220C578(r5, 1);
}




void ov96_0220B6EC(void) {
}




void ov96_0220B708(void) {
}




void ov96_0220B730(void) {
}




void ov96_0220B744(void) {
    // beq _0220B754
    // cmp r0, #1
    // beq _0220B754
}




void ov96_0220B758(void) {
}




void ov96_0220B774(void) {
}




void ov96_0220B788(void) {
}




void ov96_0220B79C(void) {
}




void ov96_0220B7B4(void) {
}




void ov96_0220B7CC(void) {
}




void ov96_0220B7F4(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0xc]
    // str r4, [r0]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x80]
    // ldr r1, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r0, #0x14
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r5, sp, #0x20
    // add r0, sp, #0x2c
    // add r0, r0, r1
    // stmia r5!, {r0}
    // str r0, [sp]
    // str r7, [sp, #4]
    // add r0, sp, #0x20
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r0, #0x3c
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
}




void ov96_0220B8A0(void) {
    // str r0, [sp]
    // ldr r6, [sp]
    // add r6, #0x3c
    // ldr r0, [sp]
}




void ov96_0220B8D8(void) {
}




void ov96_0220B8F0(void) {
    // str r1, [sp]
    // add r6, #0x14
    // add r0, r6, r0
    // ldr r0, [sp]
    // add r6, #0x3c
    // str r0, [sp]
}




void ov96_0220B940(void) {
}




void ov96_0220B95C(void) {
    // and r1, r2
    *((u32*)(r0 + 0x44)) = (0xFF00FFFF | (((((*((u32*)(r0 + 0x44)) << 8) >> 0x18) + 1) << 0x18) >> 8));
    ov96_0220C578(0, (((((*((u32*)(r0 + 0x44)) << 8) >> 0x18) + 1) << 0x18) >> 8));
}




void ov96_0220B988(void) {
}




void ov96_0220B9A8(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0220B9C6: ; jump table
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x44)), (*((u16*)(((*((u32*)(r0 + 0x44)) << 0x10) >> 0x1a) + 6)) << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x1c)), 1);
    PlaySE(0x000008B4);
    // and r2, r0
    *((u32*)(r4 + 0x44)) = ((((((*((u32*)(r4 + 0x44)) << 0x10) >> 0x1a) + 1) << 0x1a) >> 0x10) | *((u32*)(r4 + 0x44)));
    // and r2, r0
    *((u32*)(r4 + 0x44)) = ((((*((u32*)(r4 + 0x44)) >> 0x18) + 1) << 0x18) | *((u32*)(r4 + 0x44)));
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x44)));
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x20)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x20)), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x18)), 0);
    // and r2, r0
    // and r1, r0
    *((u32*)(r4 + 0x44)) = ((((((*((u32*)(r4 + 0x44)) << 0x10) >> 0x1a) + 1) << 0x1a) >> 0x10) | *((u32*)(r4 + 0x44)));
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x44)));
    // add r1, sp, #4
    // ldrsh r5, [r1, r3]
    // sub r0, #0x48
    // sub r2, r0, r5
    // asr r0, r2, #1
    // add r0, r2, r0
    // asr r2, r0, #0x10
    // sub r0, #0x3c
    // asr r5, r0, #0x18
    // bpl _0220BAA6
    ov96_021E5F24(*((u32*)(r4 + 0xc)), 8);
    // str r0, [sp]
    ov96_0220C54C(r4, 6, ((r0 << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18));
    // add r0, sp, #4
    *((u16*)(r0 + 0xa)) = 0x28;
    // sub r3, #0x50
    *((u16*)(r0 + 8)) = 0x28;
    ov96_0220C90C(r4, 6, 0x28, 0x28);
    // and r2, r0
    *((u32*)(r4 + 0x44)) = ((((((*((u32*)(r4 + 0x44)) << 0x10) >> 0x1a) + 1) << 0x1a) >> 0x10) | *((u32*)(r4 + 0x44)));
    // add r2, r5, r2
    // ldrsh r1, [r1, r6]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x44)), (*((u32*)(r4 + 0x44)) << 0x10), (r3 << 0x11));
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x28)), (1 << 0x14));
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // sub r2, r0, r1
    // bpl _0220BB22
    // neg r2, r2
    // add r1, sp, #4
    // ldrsh r3, [r1, r0]
    // asr r2, r2, #2
    // add r2, r3, r2
    *((u16*)(r1 + 8)) = r2;
    // ldrsh r0, [r1, r0]
    // add r5, sp, #4
    *((u16*)(r5 + 8)) = 0xd8;
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    ov96_0220C90C(r4, 6, 0xa, 8);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x24)), (1 << 0x14));
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // sub r0, r0, r1
    // bpl _0220BB6C
    // neg r0, r0
    // asr r5, r0, #0x10
    // add r6, sp, #4
    // ldrsh r0, [r6, r3]
    // add r0, r0, r5
    *((u16*)(r6 + 4)) = (0x88 << 0xf);
    // ldrsh r2, [r6, r2]
    // ldrsh r3, [r6, r3]
    ov96_0220C90C(r4, 5, 6, 4);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x28)), (1 << 0x14));
    // ldrsh r0, [r6, r3]
    // add r0, r0, r5
    *((u16*)(r6 + 4)) = r0;
    // ldrsh r2, [r6, r1]
    // ldrsh r3, [r6, r3]
    ov96_0220C90C(r4, 6, 4);
    // and r2, r0
    *((u32*)(r4 + 0x44)) = ((((*((u32*)(r4 + 0x44)) >> 0x18) + 1) << 0x18) | *((u32*)(r4 + 0x44)));
    *((u32*)(r4 + 0x24)) = *((u32*)(r4 + 0x28));
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x24));
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x30));
    *((u32*)(r4 + 0x30)) = *((u32*)(r4 + 0x2c));
    ov96_0220C90C(r4, 5, 0x28, 0x30);
    ov96_0220C90C(r4, 6, 0x28, 0x88);
    // sub r2, #0x90
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x20)), 0x88, 0x88, (1 << 0x14));
    PlaySE(0x000008B5);
    // and r2, r0
    // and r1, r0
    *((u32*)(r4 + 0x44)) = ((((((*((u32*)(r4 + 0x44)) << 0x10) >> 0x1a) + 1) << 0x1a) >> 0x10) | *((u32*)(r4 + 0x44)));
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x44)));
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // sub r0, #0x18
    // sub r0, r0, r1
    // bpl _0220BC48
    // neg r0, r0
    // asr r2, r0, #0x10
    // add r0, r2, r0
    // asr r2, r0, #0x10
    // add r1, sp, #4
    // ldrsh r3, [r1, r0]
    // add r2, r3, r2
    // strh r2, [r1]
    // ldrsh r2, [r1, r0]
    PlaySE(0x000008B6, (r2 + 2));
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x20)), 0x88, 0x70);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x20)), 1);
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r4 + 0x1c)));
    // and r2, r0
    *((u32*)(r4 + 0x44)) = ((((((*((u32*)(r4 + 0x44)) << 0x10) >> 0x1a) + 1) << 0x1a) >> 0x10) | *((u32*)(r4 + 0x44)));
    // ldrsh r1, [r1, r3]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x44)), (2 << 0x13));
    // and r2, r0
    *((u32*)(r4 + 0x44)) = ((((r1 >> 0x18) + 1) << 0x18) | r1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x20)), 0, r1);
    ov96_021E5F24(*((u32*)(r4 + 0xc)));
    // str r0, [sp]
    ov96_0220C54C(r4, 0, ((r0 << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x40)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    // and r2, r0
    // and r1, r0
    *((u32*)(r4 + 0x44)) = ((((((*((u32*)(r4 + 0x44)) << 0x10) >> 0x1a) + 1) << 0x1a) >> 0x10) | *((u32*)(r4 + 0x44)));
    ov96_0220C578(((((((*((u32*)(r4 + 0x44)) << 0x10) >> 0x1a) + 1) << 0x1a) >> 0x10) | *((u32*)(r4 + 0x44))), 0, *((u32*)(r4 + 0x44)));
    GF_AssertFail();
}




void ov96_0220BD38(void) {
    // str r0, [sp]
    // add r0, #0x34
    // str r0, [sp]
    // add r7, #0x44
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // and r0, r1
    // str r0, [r7]
    // add r0, r6, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    ManagedSprite_SetAnimNoRestart(*((u32*)((0 << 2) + 0x2c)), ((*((u32*)0x11) << 6) >> 0x18), *((u32*)0x11));
    ManagedSprite_GetDrawFlag(r4);
    ManagedSprite_SetDrawFlag(r4, 1);
    IsSEPlaying((0x89 << 4));
    PlaySE((0x89 << 4));
    ov96_0220C768(r4, (r1 << 0xc), (((r2 << 0xe) >> 0x17) << 0xc));
    // ldr r1, [sp, #4]
    ManagedSprite_SetAnimNoRestart(r4);
    ManagedSprite_SetDrawFlag(r4, 1);
    // str r0, [r7]
    ManagedSprite_SetDrawFlag(r4, 0);
    ManagedSprite_SetAnimSpeed(r4, (1 << 0xc));
    // ldr r0, [sp]
    // str r0, [sp]
}




void ov96_0220BE28(void) {
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    MI_CpuFill8(0, 0x3c);
    // add r0, sp, #0x20
    // str r0, [sp, #0x14]
    // and r1, r0
    // ldr r0, [sp, #0x14]
    *((u32*)(r5 + 0x38)) = (((0xF9FFFFFF << 0x1e) >> 5) | *((u32*)(r5 + 0x38)));
    // ldr r0, [sp, #0x34]
    // str r0, [r5]
    // and r2, r1
    *((u32*)(r5 + 0x38)) = (((0xF9FFFFFF << 0x1e) >> 3) | *((u32*)(r5 + 0x38)));
    ov96_021E5F24((((0xF9FFFFFF << 0x1e) >> 5) | *((u32*)(r5 + 0x38))), (((0xF9FFFFFF << 0x1e) >> 3) | *((u32*)(r5 + 0x38))), *((u32*)(r5 + 0x38)), (0xF9FFFFFF << 0x1e));
    // and r1, r0
    *((u32*)(r5 + 0x38)) = ((((((*((u32*)(r5 + 0x38)) << 3) >> 0x1e) - 1) << 0x1e) >> 3) | *((u32*)(r5 + 0x38)));
    // ldr r6, [sp, #0x38]
    // ldr r0, [sp, #0x10]
    // add r1, r2, r1
    // add r1, r7, r1
    ov96_021EAA04(((((((*((u32*)(r5 + 0x38)) << 3) >> 0x1e) - 1) << 0x1e) >> 3) | *((u32*)(r5 + 0x38))), (((((*((u32*)(r5 + 0x38)) << 3) >> 0x1e) << 1) << 0x18) >> 0x18), ((*((u32*)(r5 + 0x38)) << 3) >> 0x1e));
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 0x10)) = *((u32*)r6);
    // ldr r0, [sp, #0x34]
    PokeathlonCourse_GetDataCopyArea(*((u32*)r6));
    // ldr r1, [sp, #0x14]
    // add r0, #0x50
    // add r0, r0, r2
    ov96_021E8A20((0x28 * r1));
    // and r2, r1
    // ldr r1, [sp, #0x38]
    // str r1, [r0]
    // ldr r1, [sp, #0xc]
    // add r4, #0x48
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // asr r2, r2, #0x10
    ov96_0220D13C(0x1d, (((*((u32*)0xFFFF00FF) << 0x18) >> 0x10) | *((u32*)r0)), ((((*((u32*)(r5 + 0x38)) << 3) >> 0x1e) << 6) << 0x10), 0x38);
    *((u32*)(r5 + 0x1c)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    ov96_0220D13C(0x1c, (r4 << 0x10), 0x38);
    *((u32*)(r5 + 0x20)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    ov96_0220D13C(0x1f, (r4 << 0x10), 0x28);
    *((u32*)(r5 + 0x28)) = r0;
    ManagedSprite_SetAffineOverwriteMode(1);
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 0x28)), 0x3F333333, 0x3F333333);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x28)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    ov96_0220D13C(0x1f, (r4 << 0x10), 0x28);
    *((u32*)(r5 + 0x24)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    ov96_0220D13C(0x1e, (r4 << 0x10), 0x28);
    *((u32*)(r5 + 0x2c)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // asr r2, r2, #0x10
    ov96_0220D13C(0x1e, (r4 << 0x10), 0x28);
    *((u32*)(r5 + 0x30)) = r0;
    ManagedSprite_SetDrawFlag(0);
}




void ov96_0220BFB4(void) {
    // add r1, #0x48
    // asr r6, r1, #0x10
    // add r0, r0, r1
    // sub r4, #0x10
    // asr r4, r0, #0x10
}




void ov96_0220C004(void) {
    // add r0, r5, r0
    // add r2, r5, r2
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
}




void ov96_0220C0DC(void) {
    _u32_div_f(((*((u32*)r1) << 0x18) >> 0x18), 0xa);
    // sub r2, r0, r4
    ManagedSprite_SetAnimNoRestart(*((u32*)(r5 + 0x1c)), r2);
    ManagedSprite_SetAnimNoRestart(0xd);
    // add r2, r4, r2
    // add r1, #0x48
    // add r2, #0x30
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x20)), ((((*((u32*)(r5 + 0x38)) << 3) >> 0x1e) << 6) << 0x10), ((r4 << 1) << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x20)), 5);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x20)), 1);
    // and r1, r0
    *((u32*)(r5 + 0x38)) = (((((*((u32*)r6) << 0x18) >> 0x18) << 0x18) >> 9) | *((u32*)(r5 + 0x38)));
}




void ov96_0220C15C(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0220C17A: ; jump table
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r1 + 0x2c)), *((u32*)(r1 + 0x38)), (*((u16*)(((*((u32*)(r1 + 0x38)) << 0x1a) >> 0x1c) + 6)) << 0x10));
    ManagedSprite_SetDrawFlag(r5, 1);
    *((u32*)(r4 + 0x38)) = ((*((u32*)(r4 + 0x38)) & ~(0x3c)) | (((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a));
    // and r0, r1
    *((u32*)(r4 + 0x38)) = (((((((((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a) << 0x12) >> 0x18) + 1) << 0x18) >> 0x12) | 0xFFFFC03F);
    // add r0, r4, r0
    ov96_021EAB38(*((u32*)(((((((((((((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a) << 0x12) >> 0x18) + 1) << 0x18) >> 0x12) | 0xFFFFC03F) << 7) >> 0x1e) << 2) + 4)), 0, *((u32*)(r4 + 0x38)));
    ManagedSprite_SetAnim(r5, 0x1b);
    ManagedSprite_SetAnimateFlag(r5, 0);
    ManagedSprite_SetDrawFlag(r5, 1);
    // and r2, r0
    *((u32*)(r4 + 0x38)) = ((((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a) | (*((u32*)(r4 + 0x38)) & ~(0x3c)));
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)), (*((u32*)(r4 + 0x38)) & ~(0x3c)), *((u32*)(r4 + 0x38)));
    // add r1, sp, #0
    // ldrsh r5, [r1, r3]
    // sub r0, #0x44
    // sub r2, r0, r5
    // asr r0, r2, #1
    // add r0, r2, r0
    // asr r2, r0, #0x10
    // sub r0, #0x44
    *((u32*)(r4 + 0x38)) = ((*((u32*)(r4 + 0x38)) & ~(0x3c)) | (((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a));
    // add r2, r5, r2
    // ldrsh r1, [r1, r4]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x30)), (((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a), (*((u32*)(r4 + 0x38)) << 0x10), (4 << 0x12));
    // and r0, r3
    *((u32*)(r4 + 0x38)) = (r1 | (((((r1 << 0x12) >> 0x18) + 1) << 0x18) >> 0x12));
    // add r2, #0x38
    // and r3, r0
    // str r0, [r2]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x30)), (0xFFFFC03F & ~(0x3c)), r4, 0xFFFFC03F);
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    // sub r0, #0x18
    // sub r0, r0, r1
    // bpl _0220C2CC
    // neg r0, r0
    // asr r1, r0, #0x10
    // add r0, r1, r0
    // asr r1, r0, #0x10
    // add r5, sp, #0
    // ldrsh r2, [r5, r0]
    // add r1, r2, r1
    // strh r1, [r5]
    // ldrsh r2, [r5, r0]
    // add r0, #0x48
    *((u16*)(r5 + 2)) = (((*((u32*)(r4 + 0x38)) << 3) >> 0x1e) << 6);
    // strh r2, [r5]
    // ldrsh r1, [r5, r1]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x30)), 2, 0x30);
    ManagedSprite_SetAnimateFlag(*((u32*)(r4 + 0x30)), 1);
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r4 + 0x2c)));
    *((u32*)(r4 + 0x38)) = ((*((u32*)(r4 + 0x38)) & ~(0x3c)) | (((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a));
    // ldrsh r1, [r5, r3]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x30)), (((((*((u32*)(r4 + 0x38)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a), *((u32*)(r4 + 0x38)), (2 << 0x13));
    // and r0, r1
    *((u32*)(r4 + 0x38)) = (0xFFFFC03F | (((((r1 << 0x12) >> 0x18) + 1) << 0x18) >> 0x12));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x30)), 0);
    // add r0, r4, r0
    ov96_021EAB38(*((u32*)((((*((u32*)(r4 + 0x38)) << 0x1e) >> 0x1e) << 2) + 4)), 1);
    // add r0, r4, r0
    ov96_021EAB74(*((u32*)((((*((u32*)(r4 + 0x38)) << 0x1e) >> 0x1e) << 2) + 4)), 0);
    // and r2, r0
    // and r2, r0
    *((u32*)(r4 + 0x38)) = (((((((*((u32*)(r4 + 0x38)) | ((((*((u32*)(r4 + 0x38)) << 0x1e) >> 0x1e) << 0x1e) >> 7)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a) | ((*((u32*)(r4 + 0x38)) | ((((*((u32*)(r4 + 0x38)) << 0x1e) >> 0x1e) << 0x1e) >> 7)) & ~(0x3c)));
    *((u32*)(r4 + 0x34)) = 0;
    // and r1, r2
    *((u32*)(r4 + 0x38)) = 0xFFFFBFFF;
    SysTask_Destroy((((((((*((u32*)(r4 + 0x38)) | ((((*((u32*)(r4 + 0x38)) << 0x1e) >> 0x1e) << 0x1e) >> 7)) << 0x1a) >> 0x1c) + 1) << 0x1c) >> 0x1a) | ((*((u32*)(r4 + 0x38)) | ((((*((u32*)(r4 + 0x38)) << 0x1e) >> 0x1e) << 0x1e) >> 7)) & ~(0x3c))), 0xFFFFBFFF, *((u32*)(r4 + 0x38)));
    GF_AssertFail();
}




void ov96_0220C3E0(void) {
    // and r1, r0
    *((u32*)(r0 + 0x38)) = ((1 << 0xe) | (*((u32*)(r0 + 0x38)) & ~(0x3c)));
    SysTask_CreateOnMainQueue(ov96_0220C15C, r0, 1);
    *((u32*)(r4 + 0x34)) = r0;
}




void ov96_0220C40C(void) {
    // add r0, #0xf0
    // add r1, r6, r4
    // add r1, r6, r4
    // and r1, r2
}




void ov96_0220C490(void) {
    // str r2, [sp]
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    GF_AssertFail(0, 0);
    // ldr r0, [sp]
    GF_AssertFail();
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, sp, #4
    // strh r1, [r0]
    *((u16*)(1 + 2)) = 0x70;
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x30]
    // ldr r1, [sp]
    // add r2, sp, #4
    SpriteSystem_NewSpriteWithYOffset(r7, 0x70, (2 << 0x13));
    // str r0, [r5]
    ManagedSprite_SetAnimateFlag(1);
    // add r0, r4, r0
    // str r0, [sp, #0x18]
    // add r0, r4, r0
    // str r0, [sp, #0x1c]
    // add r2, sp, #4
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x14]
    // add r0, sp, #4
    // strh r1, [r0]
    *((u16*)(2 + 2)) = 0x30;
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    SpriteSystem_NewSpriteWithYOffset(r7, 0x28, (1 << 0x14));
    *((u32*)(r5 + 0x14)) = r0;
    ManagedSprite_SetAnimateFlag(1);
    // add r6, #0x58
}




void ov96_0220C54C(void) {
    // add r1, r0, r1
    // add r3, sp, #4
    // ldr r2, [sp, #0x20]
    // add r1, sp, #4
    // str r4, [sp]
}




void ov96_0220C578(void) {
    ov96_021E5F24(*((u32*)(r0 + 0xc)));
    // str r3, [sp]
    ov96_021E8228(*((u32*)(r5 + 0xc)), ((r0 << 0x18) >> 0x18), ((((*((u32*)(r5 + 0x40)) << 0x1e) >> 0x1e) << 0x18) >> 0x18), 1);
    // add r0, #0x34
    // and r1, r2
    // str r1, [r0, r3]
    // and r0, r1
    *((u32*)(r5 + 0x40)) = 0xFFE003FF;
    ov96_021E5F24(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0x40)), *((u32*)(r5 + (((*((u32*)(r5 + 0x40)) << 0x1e) >> 0x1e) << 2))), (((*((u32*)(r5 + 0x40)) << 0x1e) >> 0x1e) << 2));
    // str r0, [sp]
    ov96_021E8228(*((u32*)(r5 + 0xc)), ((r0 << 0x18) >> 0x18), ((((*((u32*)(r5 + 0x40)) << 0x1e) >> 0x1e) << 0x18) >> 0x18), 7);
    // and r0, r1
    *((u32*)(r5 + 0x44)) = 0x00FFFFFF;
    // sub r2, #0xa
    *((u32*)(r5 + 0x44)) = (((0 << 0x18) >> 0x18) | (*((u32*)(r5 + 0x44)) & ~(0xff)));
    ov96_0220C7FC(r5, (*((u32*)(r5 + 0x44)) & ~(0xff)), 0);
    // and r3, r6
    *((u32*)(r5 + 0x40)) = ((*((u32*)(r5 + 0x40)) & ~(3)) | 3);
    // add r1, #0x40
    // str r0, [r1]
    // and r1, r0
    *((u32*)(r5 + 0x40)) = (((r4 << 0x18) >> 0x16) | *((u32*)(r5 + 0x40)));
    // and r1, r0
    // and r0, r1
    *((u32*)(r5 + 0x44)) = 0xFF00FFFF;
}




void ov96_0220C680(void) {
    // and r2, r1
    *((u32*)(r0 + 0x40)) = ((((*((u32*)(r0 + 0x40)) >> 0x15) + 1) << 0x15) | *((u32*)(r0 + 0x40)));
    ov96_0220C7FC((((((*((u32*)(r0 + 0x40)) >> 0x15) + 1) << 0x15) | *((u32*)(r0 + 0x40))) >> 0x15), *((u32*)(r0 + 0x40)), *((u32*)(r0 + 0x40)));
    // and r1, r4
    *((u32*)(r0 + 0x40)) = (r3 | (((r3 >> 0x15) + 1) << 0x15));
    // add r2, #0x40
    // and r1, r4
    // str r1, [r2]
    *((u32*)(r0 + 0x44)) = ((*((u32*)(r0 + 0x44)) & ~(0xff)) | (((((*((u32*)(r0 + 0x44)) << 0x18) >> 0x18) - 1) << 0x18) >> 0x18));
    ov96_0220C8B8(*((u32*)(r0 + 0x14)), ((((*((u32*)(r0 + 0x44)) << 0x18) >> 0x18) << 0x10) >> 0x10), 1, *((u32*)(r0 + 0x44)));
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x14)), 0);
}




void ov96_0220C714(void) {
    // add r1, #0x1e
}




void ov96_0220C768(void) {
    // asr r0, r2, #0xc
    // sub r0, r1, r0
}




void ov96_0220C7C4(void) {
    *((u32*)(r0 + 0x44)) = ((1 << 8) | *((u32*)(r0 + 0x44)));
    // and r0, r1
    *((u32*)(r0 + 0x40)) = 0x001FFFFF;
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x14)), 0x10);
    ManagedSprite_SetAnimSpeed(*((u32*)(r4 + 0x14)), (1 << 0xc));
    PlaySE(0x000008BF);
}




void ov96_0220C7FC(void) {
    // and r2, r1
    *((u32*)(r0 + 0x44)) = *((u32*)(r0 + 0x44));
    // and r1, r2
    *((u32*)(r0 + 0x40)) = (0xFFFFFEFF >> 0xb);
    *((u32*)(r0 + 0x44)) = (*((u32*)(r0 + 0x44)) & ~(0xff));
    // add r2, #0x34
    // and r4, r3
    // str r3, [r2, r1]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x14)), 0, r0, ((0xa << 0x12) | *((u32*)(r0 + (((*((u32*)(r0 + 0x40)) << 0x1e) >> 0x1e) << 2)))));
}




void ov96_0220C844(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r5, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r6, r5
    // ldr r0, [sp]
    // add r7, #0x40
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov96_0220C8B8(void) {
    // sub r1, #0x32
    _s32_div_f((r1 << 0xc), 0xa, 0);
    ManagedSprite_SetAnimSpeed(r5, 0x0000099A, 0x0000099A);
    ManagedSprite_SetAnimNoRestart(r5, 0x11);
    ManagedSprite_GetDrawFlag(r5);
    PlaySE((0x23 << 6));
    ManagedSprite_SetDrawFlag(r5, 1);
}




void ov96_0220C90C(void) {
    // add r0, r5, r6
    // add r0, r5, r6
    // sub r4, #0x18
    // asr r2, r2, #0x10
}




void ov96_0220C93C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // str r4, [r6]
    // sub r0, r0, r5
    // add r4, #8
    // ldr r2, [sp]
    // add r4, #0x24
}




void ov96_0220C998(void) {
}




void ov96_0220C9A0(void) {
    // add r4, #8
    // add r4, #0x24
}




void ov96_0220C9CC(void) {
    // add r4, #8
    // add r4, #0x24
}




void ov96_0220C9F4(void) {
    MI_CpuFill8(0, 0x24);
    // str r6, [r5]
    // and r1, r0
    *((u32*)(r5 + 0x18)) = ((r4 << 0x1e) | *((u32*)(r5 + 0x18)));
    *((u32*)(r5 + 0x10)) = 0x64;
    ov96_0220D200((r5 + 4), r4, r6);
}




void ov96_0220CA28(void) {
    GF_AssertFail();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220CA4A: ; jump table
    ov96_0220CAC4(r4);
    ov96_0220CBC0(r4);
    ov96_0220CC18(r4);
    ov96_0220CBEC(r4);
    GF_AssertFail();
    ov96_0220D07C(r4);
    ov96_0220D2AC((r4 + 4), ((*((u32*)(r4 + 0x18)) << 0x15) >> 0x15), (((*((u32*)(r4 + 0x14)) >> 0x1e) << 0x18) >> 0x18));
    // and r0, r1
    // and r1, r2
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) | (0xFFFFF800 >> 0x15));
}




void ov96_0220CAC4(void) {
    // and r1, r2
    *((u32*)(r0 + 0x14)) = (0xFFFF00FF | (((((*((u32*)(r0 + 0x14)) << 0x10) >> 0x18) + 1) << 0x18) >> 0x10));
    ov96_0220CD00(((*((u32*)(r0 + 0x18)) << 2) >> 0x18), (((0xFFFF00FF | (((((*((u32*)(r0 + 0x14)) << 0x10) >> 0x18) + 1) << 0x18) >> 0x10)) << 0x10) >> 0x18));
    ov96_0220D0F8(r5);
    // str r0, [sp]
    ov96_021E8228(*((u32*)r5), (((*((u32*)(r5 + 0x18)) >> 0x1e) << 0x18) >> 0x18), (((*((u32*)(r5 + 0x14)) >> 0x1e) << 0x18) >> 0x18), 7);
    ov96_0220CD84(r5, 1);
    ov96_0220CCBC(r5);
    ov96_0220CC38(r5, ((*((u32*)(r5 + 0x1c)) << 0x17) >> 0x1f));
    // and r1, r4
    ov96_0220CE04(r5, 2);
    // and r1, r4
    ov96_0220CE04(r5, 2);
    // and r0, r1
    *((u32*)(r5 + 0x14)) = 0xFFFF00FF;
    MTRandom(0xFFFF00FF, *((u32*)(r5 + 0x14)));
    _u32_div_f(3);
    // and r2, r0
    *((u32*)(r5 + 0x18)) = ((((r1 + 4) << 0x18) >> 2) | *((u32*)(r5 + 0x18)));
    *((u32*)(r5 + 0x1c)) = ((*((u32*)(r5 + 0x1c)) & ~(0xff)) | (((((*((u32*)(r5 + 0x1c)) << 0x18) >> 0x18) + 1) << 0x18) >> 0x18));
    // add r1, #0x1c
    // and r0, r3
    // str r0, [r1]
}




void ov96_0220CBC0(void) {
    // and r1, r2
    *((u32*)(r0 + 0x14)) = (0xFFFF00FF | (((((*((u32*)(r0 + 0x14)) << 0x10) >> 0x18) + 1) << 0x18) >> 0x10));
    ov96_0220CD84(0, (((((*((u32*)(r0 + 0x14)) << 0x10) >> 0x18) + 1) << 0x18) >> 0x10));
}




void ov96_0220CBEC(void) {
    // and r1, r2
    *((u32*)(r0 + 0x14)) = (0xFFFF00FF | (((((*((u32*)(r0 + 0x14)) << 0x10) >> 0x18) + 1) << 0x18) >> 0x10));
    ov96_0220CD84(0, (((((*((u32*)(r0 + 0x14)) << 0x10) >> 0x18) + 1) << 0x18) >> 0x10));
}




void ov96_0220CC18(void) {
}




void ov96_0220CC38(void) {
    MTRandom();
    _u32_div_f(0x64);
    GF_AssertFail((r1 << 0x18));
    // add r2, r5, r2
    // add r4, r4, r0
    // add r4, r4, r0
}




void ov96_0220CCBC(void) {
    MTRandom();
    _u32_div_f(0x64);
    // add r0, r5, r0
    GF_AssertFail(((*((u32*)(((*((u32*)(r5 + 0x14)) >> 0x1e) << 2) + 4)) >> 0x1a) << 0x18));
    // add r0, r6, r0
}




void ov96_0220CD00(void) {
    MTRandom();
    _u32_div_f(0x64);
    GF_AssertFail((r1 << 0x18));
    // add r2, r5, r2
    // ldrsh r0, [r0, r1]
    // add r4, r4, r0
    // ldrsh r0, [r0, r1]
    // add r4, r4, r0
}




void ov96_0220CD84(void) {
    // and r2, r3
    *((u32*)(r0 + 0x18)) = 0xFFFFF800;
    // sub r5, #0xa
    // and r4, r3
    // and r5, r3
    *((u32*)(r0 + 0x14)) = (((((*((u32*)(r0 + 0x14)) | ((0 << 0x18) >> 8)) >> 0x1e) + 1) << 0x1e) | (*((u32*)(r0 + 0x14)) | ((0 << 0x18) >> 8)));
    // add r2, #0x14
    // and r3, r4
    // str r3, [r2]
    // and r2, r3
    // and r1, r2
    *((u32*)(r0 + 0x14)) = 0xFFFF00FF;
}




void ov96_0220CE04(void) {
    // str r1, [sp, #4]
    GF_AssertFail();
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r7, #0xa0
    // asr r7, r0, #0x10
    // add r4, #0x10
    // sub r0, r0, r7
    // str r0, [r4]
    // neg r0, r0
    // asr r7, r0, #0x10
    *((u32*)(r5 + 0x10)) = 0x64;
    // str r0, [sp]
    ov96_021E8228(*((u32*)r5), (((*((u32*)(r5 + 0x18)) >> 0x1e) << 0x18) >> 0x18), (((*((u32*)(r5 + 0x14)) >> 0x1e) << 0x18) >> 0x18), 3);
    // add r1, r1, r6
    *((u32*)(r5 + 0x14)) = ((*((u32*)(r5 + 0x14)) & ~(0xff)) | ((((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18) << 0x18) >> 0x18));
    // ldr r2, [sp, #8]
    // ldr r0, [sp, #0xc]
    ov96_0220D33C(((*((u32*)(*((u32*)(r5 + 0x14)) + ((*((u32*)(r5 + 0x1c)) << 0x17) >> 0x1f))) << 6) >> 0x18), ((((*((u32*)(r5 + 0x1c)) << 0x18) >> 0x18) << 0x10) >> 0x10), *((u32*)(r5 + 0x14)));
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // and r1, r2
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r2, [r1, r0]
    // str r3, [sp]
    ov96_021E8228(*((u32*)r5), (((*((u32*)(r5 + 0x18)) >> 0x1e) << 0x18) >> 0x18), (((*((u32*)(r5 + 0x14)) >> 0x1e) << 0x18) >> 0x18), 1);
    ov96_0220CD84(r5, 2);
    // ldr r1, [sp, #4]
    ov96_0220D014(r5, r6);
    _u32_div_f(((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18), 0xa);
    ov96_0220CD84(r5, 3);
    *((u32*)(r5 + 0x1c)) = ((*((u32*)(r5 + 0x1c)) | (1 << 8)) & ~(0xff));
    // str r0, [sp]
    ov96_021E8228(*((u32*)r5), (((*((u32*)(r5 + 0x18)) >> 0x1e) << 0x18) >> 0x18), (((*((u32*)(r5 + 0x14)) >> 0x1e) << 0x18) >> 0x18), 4);
}




void ov96_0220CF50(void) {
    PokeathlonCourse_GetDataCopyArea(r2);
    // add r0, #0x50
    // add r0, r0, r1
    ov96_021E8A20((0x28 * (*((u32*)(r5 + 0x18)) >> 0x1e)), (*((u32*)(r5 + 0x18)) >> 0x1e));
    // str r6, [r0]
    // and r1, r6
    // str r2, [r0]
    // and r1, r2
    // str r2, [r0]
    // and r1, r2
    // and r2, r1
    // and r1, r4
    // str r2, [r0]
    // and r2, r1
    // str r1, [r0]
    // and r2, r1
    // str r1, [r0]
}




void ov96_0220D014(void) {
    GF_AssertFail(((*((u32*)(r0 + 0x1c)) << 0x16) >> 0x1f));
    // and r2, r0
    // add r0, #0x1e
    *((u32*)(r5 + 0x14)) = (((((*((u32*)(r5 + 0x14)) << 8) >> 0x18) << 0x18) >> 8) | *((u32*)(r5 + 0x14)));
    // and r1, r0
    *((u32*)(r5 + 0x14)) = ((0x19 << 0x12) | *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x1c)) = ((2 << 8) | *((u32*)(r5 + 0x1c)));
    // and r0, r1
    *((u32*)(r5 + 0x18)) = 0xFFC007FF;
}




void ov96_0220D07C(void) {
    // and r1, r2
    *((u32*)(r0 + 0x18)) = (0xFFC007FF | (((((*((u32*)(r0 + 0x18)) << 0xa) >> 0x15) + 1) << 0x15) >> 0xa));
    ov96_0220D0F8((((0xFFC007FF | (((((*((u32*)(r0 + 0x18)) << 0xa) >> 0x15) + 1) << 0x15) >> 0xa)) << 0xa) >> 0x15), (((((*((u32*)(r0 + 0x18)) << 0xa) >> 0x15) + 1) << 0x15) >> 0xa));
    // and r1, r3
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) | (((((*((u32*)(r0 + 0x18)) << 0xa) >> 0x15) + 1) << 0x15) >> 0xa));
    // add r2, #0x18
    // and r1, r3
    // str r1, [r2]
    // and r3, r1
    *((u32*)(r0 + 0x14)) = ((((((*((u32*)(r0 + 0x14)) << 8) >> 0x18) - 1) << 0x18) >> 8) | *((u32*)(r0 + 0x14)));
}




void ov96_0220D0F8(void) {
    // and r3, r4
    *((u32*)(r0 + 0x1c)) = 0xFFFFFDFF;
    // and r3, r4
    *((u32*)(r0 + 0x18)) = 0xFFC007FF;
    // and r3, r4
    *((u32*)(r0 + 0x14)) = 0xFF00FFFF;
    // and r3, r0
    // str r0, [r2, r1]
}




void ov96_0220D13C(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov96_0221CE84), (6 - 1));
    GF_AssertFail();
    // add r1, sp, #4
    // strh r7, [r1]
    // ldr r0, [sp]
    *((u16*)(r1 + 2)) = r0;
    // add r0, sp, #0x40
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x10));
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x30]
    SpriteSystem_NewSpriteWithYOffset(r5, r4, *((u16*)(r0 + 0x10)), (1 << 0x14));
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_0220D1A0(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov96_0221CEB8), (6 - 1));
    GF_AssertFail();
    // add r1, sp, #4
    // strh r7, [r1]
    // ldr r0, [sp]
    *((u16*)(r1 + 2)) = r0;
    // add r0, sp, #0x40
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x10));
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    SpriteSystem_NewSpriteWithYOffset(r5, r4, *((u16*)(r0 + 0x10)), (1 << 0x14));
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_0220D200(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, sp, #8
    ReadWholeNarcMemberByIdPair(0xaa, 5);
    // add r7, sp, #8
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    ov96_021E60D8(0);
    GF_AssertFail(*((u8*)r0));
    GF_AssertFail(*((u8*)(r4 + 3)));
    GF_AssertFail(*((u8*)(r4 + 4)));
    // and r0, r1
    // and r1, r2
    // str r1, [r5]
    // and r0, r1
    // add r1, r7, r1
    // str r1, [r5]
    // and r0, r1
    // add r1, r7, r1
    // str r1, [r5]
    // and r0, r1
    // stmia r5!, {r0}
}




void ov96_0220D2AC(void) {
    // str r2, [sp]
    _u32_div_f(r1, 0x3c);
    // str r1, [sp, #4]
    _u32_div_f(r7, 0x1e);
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // add r2, #8
    // and r0, r1
    // str r0, [r5]
    // and r0, r1
    // str r0, [r5]
    // and r0, r1
    // str r0, [r5]
}




void ov96_0220D33C(void) {
    GF_AssertFail();
    // sub r0, r4, r0
}




void ov96_0220D360(void) {
    // mvn r1, r1
    // ldrsb r0, [r5, r0]
    // add r3, #8
    // neg r2, r4
    // ldrsb r0, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // ldrsb r0, [r5, r0]
    // eor r0, r1
    // ldrsb r2, [r5, r0]
    // ldrsb r0, [r5, r0]
}




void ov96_0220D408(void) {
}




void ov96_0220D420(void) {
}




void ov96_0220D428(void) {
    GF_AssertFail(*((u32*)(r0 + 4)));
    GF_AssertFail(*((u32*)r5));
    SysTask_Destroy(*((u32*)(r5 + 8)));
    *((u32*)(r5 + 0x10)) = 0;
    *((u8*)(r5 + 0xc)) = r4;
    *((u8*)(r5 + 0xd)) = r6;
    SysTask_CreateOnMainQueue(ov96_0220D360, r5, 2);
    *((u32*)(r5 + 8)) = r0;
}




void ov96_0220D468(void) {
    _dfltu(*((u16*)(r1 + 0xc)));
    _dmul(0x33333333, 0x3FD33333, r0, r1);
    _dsub(0, 0x3FF00000, r0, r1);
    _d2f();
    *((u32*)(r4 + 8)) = r0;
    *((u16*)(r4 + 0xc)) = 0;
    *((u16*)(r4 + 0xe)) = (*((u16*)(r4 + 0xe)) + 1);
    ov96_021EB10C(*((u32*)r4), (0xfe << 0x16), *((u32*)(r4 + 8)));
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 0xc)) + 1);
    _dfltu(*((u16*)(r4 + 0xc)));
    _dmul(0x33333333, 0x3FD33333, r0, r1);
    _dadd(0, 0x3FF00000, r0, r1);
    _d2f();
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 4)) = 0;
    ov96_021EB10C(*((u32*)r4), (0xfe << 0x16), (0xfe << 0x16));
    SysTask_Destroy(r5);
    ov96_021EB10C(*((u32*)r4), (0xfe << 0x16), *((u32*)(r4 + 8)));
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 0xc)) + 1);
    GF_AssertFail((*((u16*)(r4 + 0xc)) + 1));
}




void ov96_0220D52C(void) {
    SysTask_Destroy(*((u32*)(r0 + 4)));
    // str r4, [r5]
    *((u16*)(r5 + 0xc)) = 0;
    *((u16*)(r5 + 0xe)) = 0;
    SysTask_CreateOnMainQueue(ov96_0220D468, r5, 0);
    *((u32*)(r5 + 4)) = r0;
}




void ov96_0220D554(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r0, r5, r0
    // asr r0, r0, #1
    // sub r1, r5, r4
    // str r0, [sp]
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, r4, r0
    // str r0, [sp, #4]
    // add r0, r5, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov96_0220D5D0(void) {
    // add r0, sp, #0x20
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // add r3, sp, #0x1c
    // add r0, sp, #0x14
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // add r3, sp, #0x10
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x28
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x1c
    // add r1, sp, #0x10
    // add r0, sp, #0x28
}




void ov96_0220D630(void) {
    // add r1, #0x45
    // add r2, #0x46
    ov96_0220F378(*((u32*)r0), *((u8*)r0), *((u8*)r0));
    // str r0, [sp]
    // add r1, #0x45
    // add r2, #0x46
    ov96_021E8228(*((u32*)r4), *((u8*)r4), *((u8*)r4), 2);
    ov96_0220F3B4(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x40)) = (((r0 << 0x18) >> 0x18) | (*((u32*)(r4 + 0x40)) & ~(0xff)));
    *((u32*)(r4 + 0xc)) = 1;
    // and r1, r0
    *((u32*)(r4 + 0x40)) = ((0xa << 8) | *((u32*)(r4 + 0x40)));
}




void ov96_0220D694(void) {
}




void ov96_0220D6B0(void) {
    // ldrsh r2, [r1, r2]
    // ldrsh r1, [r1, r2]
}




void ov96_0220D6CC(void) {
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0xc
    // stmia r4!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r4]
    // str r4, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r4, [sp, #4]
    CalcAngleBetweenVecs(r4, r4, r0);
}




void ov96_0220D744(void) {
    // add r0, #0x10
    // add r1, #0x1c
    // add r2, sp, #0x54
    VEC_Subtract(r0, r0);
    // add r0, sp, #0x54
    VEC_Mag();
    // and r1, r0
    *((u32*)(r5 + 0x40)) = (((0 << 0x1f) >> 3) | *((u32*)(r5 + 0x40)));
    // add r0, sp, #0x24
    // str r2, [r0]
    // add r1, sp, #0x30
    *((u32*)((((((0 << 0x1f) >> 3) | *((u32*)(r5 + 0x40))) << 5) >> 0x1f) + 4)) = 0;
    // str r2, [r1]
    *((u32*)((((((0 << 0x1f) >> 3) | *((u32*)(r5 + 0x40))) << 5) >> 0x1f) + 8)) = 0;
    *((u32*)(*((u32*)(r5 + 0x40)) + 4)) = 0;
    // add r0, #0x34
    *((u32*)(*((u32*)(r5 + 0x40)) + 8)) = 0;
    VEC_Normalize(r5, *((u32*)(r5 + 0x40)), 0);
    // add r1, sp, #0x30
    // add r2, sp, #0x24
    // add r3, sp, #0x18
    VEC_MultAdd(0x00000CCD);
    // ldr r0, [sp, #0x18]
    // neg r0, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // neg r0, r0
    // str r0, [sp, #0x1c]
    _s32_div_f(*((u32*)(*((u32*)(r5 + 8)) + 4)), 0x64);
    // add r0, sp, #0x54
    // add r1, sp, #0x48
    VEC_Normalize();
    // add r1, #0x28
    // add r2, sp, #0x24
    // add r3, sp, #0xc
    VEC_MultAdd(r6, r5);
    // ldr r1, [sp, #0xc]
    // neg r1, r1
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x18]
    // neg r1, r1
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r1
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // add r0, #0x34
    ov96_0220E960(r5);
    // add r0, #0x1c
    // add r1, #0x34
    VEC_Add(r5, r5, r5);
    // add r3, #0x1c
    // ldmia r3!, {r0, r1}
    // add r2, #0x10
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // and r0, r1
    *((u32*)(r5 + 0x40)) = 0xFBFFFFFF;
    // add r0, sp, #0x54
    // add r1, sp, #0x48
    VEC_Normalize(((*((u32*)(r5 + 0x40)) << 3) >> 0x1f), *((u32*)(r5 + 0x40)), r5, r5);
    // add r0, sp, #0x48
    ov96_0220D6CC(((*((u32*)(r5 + 0x40)) << 5) >> 0x1f));
    // and r1, r2
    *((u32*)(r5 + 0x40)) = (((r0 << 0x1c) >> 8) | 0xFF0FFFFF);
    // add r3, sp, #0x54
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x3c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r2, sp, #0
    // str r1, [r2]
    *((u32*)(*((u32*)(r5 + 0x40)) + 4)) = 0;
    *((u32*)(*((u32*)(r5 + 0x40)) + 8)) = 0;
    // add r1, sp, #0x48
    // add r3, sp, #0x3c
    VEC_MultAdd(*((u32*)r3), 0, *((u32*)(r5 + 0x40)));
    // add r0, #0x1c
    // add r1, sp, #0x3c
    VEC_Add(r5, r5);
    // add r2, sp, #0x48
    // ldmia r2!, {r0, r1}
    // add r5, #0x28
    // stmia r5!, {r0, r1}
    // str r0, [r5]
}




void ov96_0220D8C4(void) {
    // add r3, sp, #4
    // str r3, [sp]
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    // add r3, sp, #8
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
}




void ov96_0220D910(void) {
    _s32_div_f(((((*((u32*)(r0 + 0x40)) << 0xc) >> 0x1c) << 0x18) >> 0x18), 3);
    _s32_div_f(r6, 3);
    // add r0, sp, #4
    // add r1, r1, r2
    // str r0, [sp]
    // add r2, r3, r2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // add r3, sp, #8
    ov96_021EB0A4(*((u32*)(r5 + 4)), ov96_0221CFBC, (r0 * 0xc), ov96_0221CFBE);
    // ldr r0, [sp, #8]
    *((u32*)(r5 + 0x1c)) = (r0 << 0xc);
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    *((u32*)(r5 + 0x20)) = ((r0 << 0xc) << 0xc);
    // ldr r0, [sp, #8]
    // add r2, #0x34
    *((u32*)(r5 + 0x10)) = (((r0 << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #4]
    *((u32*)(r5 + 0x14)) = ((((r0 << 0xc) << 0xc) << 0xc) << 0xc);
    // str r0, [r3]
    *((u32*)(r3 + 4)) = 0;
    *((u32*)(r3 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // and r1, r0
    // and r0, r1
    *((u32*)(r5 + 0x40)) = 0xFBFFFFFF;
}




void ov96_0220D9A4(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0220D9BC: ; jump table
    *((u32*)(r0 + 0xc)) = 2;
    // add r1, #0x44
    // add r1, #0x44
    // strb r2, [r1]
    // add r1, #0x44
    ov96_0220D910(2, *((u8*)r0), (*((u8*)r0) - 1));
    *((u32*)(r4 + 0xc)) = 4;
    ov96_0220D744(4);
    ov96_0220D8C4(r4, *((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x20)));
    // str r3, [sp]
    // add r1, #0x45
    // add r2, #0x46
    ov96_021E8228(*((u32*)r4), *((u8*)r4), *((u8*)r4), 1);
    // str r0, [sp]
    // add r1, #0x45
    // add r2, #0x46
    ov96_021E8228(*((u32*)r4), *((u8*)r4), *((u8*)r4), 5);
    // str r0, [sp]
    // add r1, #0x45
    // add r2, #0x46
    ov96_021E8228(*((u32*)r4), *((u8*)r4), *((u8*)r4), 8);
    // and r0, r1
    *((u32*)(r4 + 0x40)) = 0xDFFFFFFF;
    // add r0, #0x44
    // strb r1, [r0]
    *((u32*)(r4 + 0xc)) = 3;
    *((u32*)(r4 + 0x40)) = ((*((u32*)(r4 + 0x40)) & ~(0xff)) | (((((*((u32*)(r4 + 0x40)) << 0x18) >> 0x18) - 1) << 0x18) >> 0x18));
    *((u32*)(r4 + 0xc)) = 2;
    ov96_0220D744(r4, 0x5a, (((((*((u32*)(r4 + 0x40)) << 0x18) >> 0x18) - 1) << 0x18) >> 0x18), *((u32*)(r4 + 0x40)));
    GF_AssertFail();
}




void ov96_0220DAA0(void) {
    // str r1, [sp, #4]
    // str r0, [sp, #0x14]
    // str r2, [sp, #8]
    // add r2, sp, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r3, [sp, #4]
    ov96_021EB0CC(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x1c)), *((u32*)(r0 + 0x20)), ov96_0221CEF4);
    // add r0, sp, #0x18
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldr r0, [sp, #0x10]
    // sub r0, r0, r1
    // bpl _0220DAF6
    // neg r0, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r1
    // bpl _0220DB02
    // neg r0, r0
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x18
    VEC_Mag(*((u32*)(r5 + 0x20)));
    // str r0, [r4]
    // add r5, #0x48
    // add r1, sp, #0x24
    // str r2, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #0x18
}




void ov96_0220DB3C(void) {
}




void ov96_0220DBCC(void) {
}




void ov96_0220DBE8(void) {
}




void ov96_0220DC38(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220DC4A: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    PlaySE_SetPitch(0x0000088D, r4);
}




void ov96_0220DC7C(void) {
    ov96_021E5F24(r2);
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4(r6);
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r2, r0
    // asr r0, r0, #0x10
    // add r0, r0, r1
    // asr r0, r0, #0x10
    // sub r1, r7, r1
    // asr r7, r1, #0x10
    ov96_0220E6DC((((((*((u16*)r5) << 0x19) >> 0x16) >> 0x1f) << 0xf) << 0x10), ((*((u16*)r5) << 0x15) >> 0x1c), ((*((u16*)r5) << 0x19) >> 0x16));
    // str r0, [sp, #4]
    ov96_0220DB3C(r4, 2, 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    ov96_0220DB3C(r4, 2, 0);
    // sub r3, #0x28
    // ldr r2, [sp, #4]
    // asr r3, r3, #0x10
    ov96_0220DBE8(r4, ((*((u16*)r5) << 0x12) >> 0x1d), (r7 << 0x10));
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    ov96_0220D428(0x000006A8, 4, 4);
    ov96_0220DC38(((*((u16*)r5) << 0x12) >> 0x1d));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    PlaySE(0x000008C4);
    ov96_0220DB3C(r4, r6, 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 0);
    // and r0, r1
    *((u32*)(r4 + 0x18)) = *((u32*)(r4 + 0x18));
    ov96_0220DBCC(r4, 0x3F99999A);
    PlaySE(0x000008C3);
    // add r0, r1, r0
    // ldr r0, [sp, #4]
    // add r0, r4, r0
    ManagedSprite_SetAnimNoRestart(*((u32*)((r6 << 2) + 8)), 1);
    GF_SinDeg(((((*((u32*)(r4 + 0x18)) << 0x10) >> 0x10) << 0x10) >> 0x10));
    _s32_div_f(0x12);
    _fflt();
    _fdiv(0x45800000);
    _fadd(0x3F99999A, r0);
    // and r2, r0
    // add r0, #0xa
    *((u32*)(r4 + 0x18)) = (((((*((u32*)(r4 + 0x18)) << 0x10) >> 0x10) << 0x10) >> 0x10) | 0xFFFF0000);
    ov96_0220DBCC(r4, r0, 0xFFFF0000);
    // sub r2, #0x28
    // add r6, r4, r0
    // ldr r1, [sp, #4]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + (r6 << 2))), (r7 << 0x10), (0x1e << 0x10));
    // ldr r1, [sp, #4]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r6 + 8)), r7, (0x1e << 0x10));
    // and r0, r1
    *((u32*)(r4 + 0x18)) = (0xFF00FFFF | ((((*((u16*)r5) << 0x12) >> 0x1d) << 0x18) >> 8));
    // ldr r0, [sp, #8]
    // add r4, #0x1c
    // str r0, [sp, #8]
}




void ov96_0220DE90(void) {
    // mvn r0, r0
}




void ov96_0220DEAC(void) {
    // str r2, [sp, #8]
    // str r1, [sp, #4]
    // add r3, sp, #0x40
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4(0, 0, (6 - 1));
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x40
    // str r0, [sp, #0x14]
    // add r5, #0x3c
    // str r6, [sp, #0x10]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    ov96_021EAA04(*((u32*)(0xff + 0x20)), ((0 << 0x18) >> 0x18));
    GF_AssertFail();
    GF_AssertFail();
    // ldr r0, [sp, #4]
    // add r3, sp, #0x3c
    // add r0, r0, r6
    // str r0, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    ov96_021EB0A4(r4, *((u8*)(r1 + 4)), *((u8*)(r0 + 0x10)));
    // ldr r0, [sp, #0x14]
    // strb r7, [r0]
    *((u32*)(r0 + 4)) = r4;
    // ldr r0, [sp, #4]
    // lsr r1, r6
    // and r0, r1
    // str r0, [sp, #0x18]
    ov96_0220D554(r4, 1);
    // and r1, r0
    *((u32*)(r5 + 0x18)) = ((6 << 8) | (*((u32*)(r5 + 0x18)) | (1 << 0x12)));
    *((u32*)(r5 + 0x14)) = (1 << 0xc);
    PlaySE(0x0000089E, (*((u32*)(r5 + 0x18)) | (1 << 0x12)));
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), (r1 << 0x10), (r2 << 0x10), (0x1e << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)r5));
    ov96_0220D554(r4, 0);
    ov96_021EB10C(r4, (0xfe << 0x16), (0xfe << 0x16));
    ov96_021EAB38(r4, 1);
    // and r0, r1
    *((u32*)(r5 + 0x18)) = 0xFFFBFFFF;
    PlaySE(0x000008B6, *((u32*)(r5 + 0x18)));
    // and r1, r2
    // ldr r2, [sp, #0x18]
    // add r0, #0x18
    *((u32*)(r5 + 0x18)) = (0xFFF7FFFF | ((*((u32*)(r5 + 0x18)) << 0x1f) >> 0xc));
    // and r2, r1
    // str r1, [r0]
    ov96_021EAB38(r4, 0, 0xFFFF00FF);
    // sub r0, r1, r0
    *((u32*)(r5 + 0x14)) = 0x0000019A;
    _fflt(0x0000019A, *((u32*)(r5 + 0x14)));
    _fdiv(0x45800000);
    ov96_021EB10C(r4, r0, r0);
    // add r0, sp, #0x30
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x34
    ov96_021EB06C(r4, *((u8*)(r1 + 4)), *((u8*)(r2 + 0x10)));
    // ldr r0, [sp, #0x30]
    // sub r0, r0, r1
    // ldr r1, [sp, #0x3c]
    // add r2, r7, r2
    ov96_021EB01C(r4, ((*((u32*)(r5 + 0x18)) << 0x10) >> 0x18), (6 << 2), 1);
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // ldr r0, [sp, #0x10]
    // lsr r1, r0
    // and r0, r1
    // ldr r1, [sp, #0x3c]
    ov96_021EB01C(r4, ((*((u32*)(r0 + 0x1c)) << 8) >> 8), 1);
    ov96_021EAC0C(r4, (r7 + 1));
    // ldr r0, [sp, #4]
    // lsr r1, r6
    // tst r0, r1
    _s32_div_f(r6, 3);
    // str r0, [sp, #0x20]
    _s32_div_f(r6, 3);
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #8]
    ov96_0220F378(((r1 << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18));
    // ldr r0, [sp, #8]
    ov96_021E5F24();
    // ldr r1, [sp, #0x20]
    PlaySE(0x000005F3, ((*((u32*)(r5 + 0x18)) << 0xf) >> 0x1f));
    PlaySE(0x000008C5);
    ov96_0220D52C((r5 + 4), r4);
    *((u32*)(r5 + 0x18)) = ((2 << 0x10) | *((u32*)(r5 + 0x18)));
    *((u32*)(r5 + 0x18)) = ((1 << 0x10) | *((u32*)(r5 + 0x18)));
    // and r0, r1
    *((u32*)(r5 + 0x18)) = 0xFFFDFFFF;
    _s32_div_f(r6, 3);
    _s32_div_f(r6, 3);
    // ldr r0, [sp, #8]
    ov96_0220F378(((r7 << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18));
    // add r2, sp, #0x2c
    ov96_0220E8C0(((*((u32*)(r5 + 0x18)) << 0x18) >> 0x18));
    // ldr r2, [sp, #0x38]
    // ldr r1, [sp, #0x3c]
    // add r2, r2, r3
    ov96_021EB01C(r4, 0);
    // ldr r1, [sp, #0x2c]
    ov96_021EB10C(r4, r1);
    ov96_0220F3B4(r7);
    // ldr r0, [sp, #0x24]
    *((u32*)(r5 + 0x18)) = ((((((*((u32*)(r5 + 0x18)) << 0x18) >> 0x18) + 1) << 0x18) >> 0x18) | (*((u32*)(r5 + 0x18)) & ~(r0)));
    // add r2, #0x18
    // and r1, r0
    // ldr r0, [sp, #0x28]
    // str r1, [r2]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    ov96_021EB01C(r4, (*((u32*)r5) & ~(0xFFFEFFFF)), r5, 0);
    ov96_021EB10C(r4, (0xfe << 0x16), (0xfe << 0x16));
    // ldr r0, [sp, #0x14]
    // add r0, #8
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r5, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // add r0, sp, #0x40
    MATH_QSort(0, 0xc, 8, ov96_0220DE90);
    // add r4, sp, #0x40
    GF_AssertFail(*((u32*)(r4 + 4)));
    ov96_021EABA8(*((u32*)(r4 + 4)), (r5 + 7));
    // add r4, #8
}




void ov96_0220E22C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r0, r4, r0
    ov96_0220EFD0(0x000006A4, *((u32*)(r0 + 8)), *((u32*)r0));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    // strb r0, [r5]
    IsPaletteFadeFinished((*((u8*)r5) + 1));
    // strb r0, [r5]
    ov96_021E637C(r6);
    PokeathlonCourse_SetStateField07(r6, 1);
    GF_AssertFail();
}




void ov96_0220E2A8(void) {
    // add r0, #0xf0
    // add r0, #0xc4
}




void ov96_0220E2DC(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r0, r4, r0
    ov96_0220EFD0(0x000006A4, *((u32*)(r0 + 8)), *((u32*)r0));
    ov96_0220F03C(r5);
    ov96_0220F1CC(r5);
    // strb r0, [r6]
    ov96_0220F03C(r5);
    PokeathlonCourse_GetDataCopyArea(r5);
    // add r0, #0xf0
    ov96_021E8A20();
    // add r0, #0xc4
    ov96_02210324(*((u32*)r4), (((*((u32*)(r0 + 0x1c)) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r0 + 0x20)) << 0x19) >> 0x19) << 0x10) >> 0x10));
    ov96_021E667C(r5);
    // add r0, r4, r0
    ov96_0220D408(0x000006A8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    PokeathlonCourse_SetStateField07(r5, 2);
    GF_AssertFail();
}




void ov96_0220E394(void) {
    // add r5, r0, r1
    // add r5, #0xe4
}




void ov96_0220E3F0(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetField1ED(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220E414: ; jump table
    Heap_Create(0x5c, 0x8e, (6 << 0x10));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_0220E868(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    PokeathlonCourse_AllocPtr4FromHeap(r5, 0x000006BC);
    MI_CpuFill8(0, 0x000006BC);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = r5;
    // str r1, [r4, r0]
    PokeathlonCourse_IncrementField1ED(r5, 0x00000708);
    BgConfig_Alloc(*((u32*)r4));
    *((u32*)(r4 + 8)) = r0;
    ov96_021E6670(r5, 4);
    ov96_0220ED9C(r4);
    ov96_0220EE8C(r4);
    ov96_0221022C(r4);
    sub_0203A994(2);
    ov96_0220EA08(r4);
    ov96_0220F3FC(r4);
    PokeathlonCourse_IncrementField1ED(r5);
    ov96_021EAA00(*((u32*)(r4 + 0x20)));
    ov96_0220EB3C(r4);
    SpriteManager_GetSpriteList(*((u32*)(r4 + 0x10)));
    ov96_021E61D8(r5, 0, *((u32*)(r4 + 0x1c)), r0);
    Sprite_SetDrawPriority(*((u32*)r0), 0);
    PokeathlonCourse_IncrementField1ED(r5);
    ov96_021E5F24(r5);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    ov96_02210240(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x18)));
    // add r1, #0xc4
    // str r0, [r1]
    // add r3, #0xc4
    // add r0, r4, r0
    ov96_0221007C((0x51 << 4), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), *((u32*)r4));
    ov96_022107F0(r5, *((u32*)r4));
    // add r1, #0xc8
    // str r0, [r1]
    ov96_021E64B8(r5, r4);
    // add r0, r4, r0
    ov96_0220D420(0x000006A8, *((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)));
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)(r4 + 8)));
    PokeathlonCourse_SetField1F4(r5, 1);
    ov96_0220F4A0(r4);
    ov96_021E5F24(r5);
    PokeathlonCourse_GetDataCopyArea(r5);
    // add r0, #0x28
    ov96_021E8A20();
    // add r0, #0x1e
    _s32_div_f(*((u32*)(r4 + 0x0000050C)), 0x1e);
    // and r1, r2
    *((u32*)(r6 + 0x1c)) = (((r0 << 0x1a) >> 2) | 0xC0FFFFFF);
    // add r0, #0xcc
    ov96_0220FA18(r4, r5, *((u32*)(r6 + 0x1c)));
    // add r0, r4, r0
    // add r1, r4, r1
    ov96_0220FF64(0x000004EC, (0x57 << 2));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GF_AssertFail(1);
}




void ov96_0220E5F4(void) {
}




void ov96_0220E60C(void) {
    PokeathlonCourse_GetGraphicsSystem();
    ov96_021E9510();
    PokeathlonCourse_GetField5F0_AtIndex(r5, ((0 << 0x18) >> 0x18));
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov96_021E95F8(r5, r6, r4, r0);
    ov96_021E93B4(r6, 1);
    ov96_0221A56C(r6, 4);
    ov96_021E952C(r6);
    ov96_021E9570(r6, 4);
}




void ov96_0220E670(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_021E6550(r5);
    // add r0, #0xc8
    ov96_02210850(*((u32*)r4));
    // add r0, #0xc4
    ov96_022102D4(*((u32*)r4));
    // add r0, r4, r0
    ov96_022101D0((0x51 << 4));
    ov96_0220EAA4(r4);
    ov96_0220EE4C(r4);
    sub_0203A914();
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    Heap_Destroy(0x8e);
}




void ov96_0220E6DC(void) {
    // add r0, #0x80
    // asr r4, r0, #0x10
    // asr r0, r0, #0x10
    // add r0, r4, r0
    // asr r0, r0, #0x10
}




void ov96_0220E70C(void) {
    // add r3, r5, r1
    // add r1, r3, r1
    // add r2, #0x8c
}




void ov96_0220E74C(void) {
    // add r1, r5, r0
    // add r0, r1, r0
}




void ov96_0220E770(void) {
    // add r1, r5, r0
    // add r1, r1, r0
    // add r1, r1, r0
    // asr r0, r0, #0xc
    // strh r0, [r7]
    // asr r0, r0, #0xc
    // ldr r1, [sp, #0x18]
    // str r0, [r1]
}




void ov96_0220E7BC(void) {
    // add r1, r6, r1
    // add r2, r6, r2
    // add r2, #0xe4
}




void ov96_0220E818(void) {
}




void ov96_0220E834(void) {
    // add r3, r0, r3
    // add r1, r3, r0
    // add r0, r1, r0
}




void ov96_0220E850(void) {
    // add r1, r0, r2
}




void ov96_0220E868(void) {
}




void ov96_0220E888(void) {
    // mul r1, r0
}




void ov96_0220E890(void) {
    // neg r3, r2
    // str r1, [r0]
    // mvn r2, r2
    // sub r1, r3, r2
    // str r1, [r0]
}




void ov96_0220E8C0(void) {
    // str r2, [sp]
    GF_AssertFail();
    // str r0, [sp, #4]
    // sub r0, r4, r0
    ov96_0220E888(*((u8*)r5));
    // ldr r0, [sp, #4]
    ov96_0220E888();
    // sub r4, r4, r0
    _fflt((*((u8*)(r5 + 1)) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    _s32_div_f(0xa);
    // sub r0, r6, r0
    _s32_div_f((1 << 0xe), 0x64);
    _fflt();
    _fdiv(0x45800000);
    _fsub(r7, r0);
    // ldr r0, [sp]
    // str r7, [r0]
    // asr r0, r6, #0xc
}




void ov96_0220E960(void) {
}




void ov96_0220E974(void) {
    // neg r3, r1
    // str r1, [r0]
    // str r3, [r0]
}




void ov96_0220E9A0(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r0, #0x24
    FillWindowPixelBuffer(0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r5, 0, r7, 3);
    ReadMsgData_ExpandPlaceholders(r5, r6, 0xa0, *((u32*)r4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x24
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 4, r0, 0);
    String_Delete(r5);
    // add r4, #0x24
    CopyWindowToVram(r4);
}




void ov96_0220EA08(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    SpriteSystem_Alloc(*((u32*)r0), ov96_0221CF2C);
    *((u32*)(r4 + 0xc)) = r0;
    SpriteManager_New();
    *((u32*)(r4 + 0x10)) = r0;
    // add r1, sp, #0x14
    // add r2, sp, #0
    SpriteSystem_Init(*((u32*)(r4 + 0xc)), 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), 0x80);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)));
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0xc)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x1e << 0x10));
    ov96_021E9A78(*((u32*)r4), 0x00000AA7, 1);
    *((u32*)(r4 + 0x1c)) = r0;
}




void ov96_0220EAA4(void) {
}




void ov96_0220EAC4(void) {
    // str r0, [sp]
    ov96_021EB144(*((u32*)(r0 + 0x20)), 1);
    // ldr r0, [sp]
    // add r0, #0xc4
    ov96_0221031C(*((u32*)r0));
    // ldr r5, [sp]
    ManagedSprite_SetAnimateFlag(*((u32*)(r5 + 0x0000054C)), 0);
    // add r5, #0x1c
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r5, [sp, #8]
    ManagedSprite_SetAnimateFlag(*((u32*)r5), 0);
    ManagedSprite_SetAnimateFlag(*((u32*)(r5 + 8)), r7);
    // ldr r0, [sp, #8]
    // add r0, #0x1c
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov96_0220EB3C(void) {
    GF_AssertFail();
    GF_AssertFail();
    // str r6, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r4, r5, 0xed, 0x16);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r4, r5, 0xed, 0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, r5, 0xed, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, r5, 0xed, 0x14);
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r4, r5, 0xed, 0x1a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r4, r5, 0xed, 0x17);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, r5, 0xed, 0x19);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, r5, 0xed, 0x18);
    // str r6, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r4, r5, 0xed, 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r4, r5, 0xed, 0xf);
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r4, r5, 0xed, 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r4, r5, 0xed, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, r5, 0xed, 0x11);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, r5, 0xed, 0x10);
}




void ov96_0220ECA4(void) {
    // str r3, [sp]
    // add r3, sp, #0x38
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #0x88]
    // add r4, sp, #4
    // add r4, sp, #0x38
    GF_AssertFail(*((u32*)ov96_0221D020), (6 - 1));
    GF_AssertFail();
    // strh r7, [r4]
    // ldr r0, [sp]
    *((u16*)(r4 + 2)) = r0;
    // add r0, sp, #0x70
    *((u16*)(r4 + 6)) = *((u16*)(r0 + 0x10));
    *((u32*)(r4 + 8)) = *((u16*)(r0 + 0x14));
    SpriteSystem_NewSpriteWithYOffset(r5, r6, r4, (0x1e << 0x10));
    ManagedSprite_SetAffineOverwriteMode(2);
    ManagedSprite_SetAnimateFlag(r4, 1);
    ManagedSprite_SetDrawFlag(r4, 0);
}




void ov96_0220ED34(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov96_0221D054), (6 - 1));
    GF_AssertFail();
    // add r1, sp, #4
    // strh r7, [r1]
    // ldr r0, [sp]
    *((u16*)(r1 + 2)) = r0;
    // add r0, sp, #0x40
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x10));
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    SpriteSystem_NewSpriteWithYOffset(r5, r4, *((u16*)(r0 + 0x10)), (0x1e << 0x10));
    ManagedSprite_SetAnimateFlag(1);
    ManagedSprite_SetDrawFlag(r4, 0);
}




void ov96_0220ED9C(void) {
    // str r0, [sp]
    // add r3, sp, #8
    // str r0, [sp, #4]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r4, sp, #0x18
    InitBgFromTemplate(r6, ((*((u32*)ov96_0221CF58) << 0x18) >> 0x18), ov96_0221D088, 0);
    BgClearTilemapBufferAndCommit(r6, ((*((u32*)r5) << 0x18) >> 0x18));
    // ldr r3, [sp, #4]
    BG_ClearCharDataRange(((*((u32*)r5) << 0x18) >> 0x18), 0x20, 0);
    // add r4, #0x1c
    // ldr r3, [sp]
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)r3));
    // ldr r1, [sp]
    *((u32*)(r1 + 0x18)) = r0;
    MessageFormat_New(*((u32*)r1));
    // ldr r1, [sp]
    *((u32*)(r1 + 0x14)) = r0;
    FontID_Alloc(4, *((u32*)r1));
    GfGfx_EngineATogglePlanes(4, 0);
}




void ov96_0220EE4C(void) {
    // add r0, #0x24
    RemoveWindow();
    MessageFormat_Delete(*((u32*)(r6 + 0x14)));
    DestroyMsgData(*((u32*)(r6 + 0x18)));
    FreeBgTilemapBuffer(*((u32*)(r6 + 8)), ((*((u32*)ov96_0221CF58) << 0x18) >> 0x18));
    FontID_Release(4);
    Heap_Free(*((u32*)(r6 + 8)));
}




void ov96_0220EE8C(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
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
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov96_0220EFD0(void) {
    // strb r0, [r5]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // strb r0, [r5]
}




void ov96_0220F03C(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    ov96_021E5F24();
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, #0x28
    ov96_021E8A20(0);
    // str r0, [sp, #4]
    // add r7, #0xcc
    // ldr r1, [sp]
    ov96_0220FA18(r7);
    // str r1, [r7, r0]
    // add r0, #0x1e
    _s32_div_f(*((u32*)(r7 + 0x0000050C)), 0x1e);
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // and r1, r0
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    *((u32*)(((0xC0FFFFFF << 0x1a) >> 2) + 0x1c)) = (*((u32*)(r0 + 0x1c)) | ((0xC0FFFFFF << 0x1a) >> 2));
    // ldr r0, [sp, #0xc]
    // add r0, #0x50
    ov96_021E8A20(((0xC0FFFFFF << 0x1a) >> 2), (*((u32*)(r0 + 0x1c)) | ((0xC0FFFFFF << 0x1a) >> 2)));
    // ldr r0, [sp, #0xc]
    ov96_021E8A20();
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r4, [sp, #0xc]
    // add r4, #0x50
    // add r5, r7, r0
    ov96_021E8A20(r4, (4 - 1), r0);
    // and r0, r1
    *((u32*)(r5 + 4)) = 0xFFFFBFFF;
    *((u32*)(r5 + 4)) = (((1 << 0xe) << 1) | (*((u32*)(r5 + 4)) | (1 << 0xe)));
    // strh r0, [r5]
    *((u16*)(r5 + 2)) = ((*((u32*)r0) << 0x10) >> 0x18);
    // and r0, r1
    // and r1, r2
    *((u32*)(r5 + 4)) = (0xFFFFC000 | 0x00003FFF);
    // and r0, r1
    // and r1, r0
    // and r1, r0
    // and r0, r1
    *((u32*)(r5 + 4)) = 0xFFFF7FFF;
    // add r4, #0x28
    // add r5, #0xe4
    // add r0, #0xc8
    ov96_02210858(*((u32*)r7), (((((0x00003FFF << 0x12) >> 0x12) << 0x13) >> 3) | 0xE000FFFF), (((*((u32*)(r5 + 4)) << 0x12) >> 0x12) + 1), ((*((u32*)(r5 + 4)) << 0x11) >> 0x1f));
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #8]
    // add r0, r7, r0
    ov96_02210030(0x000004EC);
    // ldr r1, [sp]
    // add r0, r7, r0
    ov96_0220F8C8((0x57 << 2));
    // ldr r0, [sp, #4]
    // and r1, r0
    // ldr r0, [sp, #4]
    *((u32*)((0x7FFFFFFF + 1) + 0x20)) = (*((u32*)(*((u32*)(r7 + 0x0000050C)) + 0x20)) | (0x7FFFFFFF + 1));
    // add r7, #0xcc
    // ldr r1, [sp]
    ov96_0220FA18(r7, (*((u32*)(*((u32*)(r7 + 0x0000050C)) + 0x20)) | (0x7FFFFFFF + 1)));
}




void ov96_0220F1CC(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r5);
    // add r0, #0xf0
    ov96_021E8A20();
    ov96_021E8A20(r4);
    ov96_0220EAC4(r6);
    ov96_021E65A4(r5);
    ov96_0220E2A8(r5);
    System_GetTouchNew(1);
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), 3, 0);
    System_GetTouchHeld();
    // str r2, [r4]
    // and r1, r2
    // and r0, r1
    // str r0, [r4]
    // add r0, r6, r0
    ov96_0221013C((0x51 << 4), r5, (((*((u16*)(gSystem + 0x20)) << 0x18) >> 0x18) | (*((u32*)r4) & ~(0xff))));
}




void ov96_0220F280(void) {
    // add r0, sp, #8
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r1, [sp, #4]
    // add r0, sp, #8
    // strb r0, [r5]
    // add r0, sp, #8
    // add r0, r0, r1
    // add r0, sp, #8
    // add r0, r0, r1
    // add r0, sp, #8
    // add r0, r0, r1
    // ldr r0, [sp]
    // str r0, [sp]
}




void ov96_0220F378(void) {
    // add r0, r5, r0
    // add r1, r6, r0
    // add r4, #0x34
    // add r4, r4, r0
}




void ov96_0220F3B4(void) {
    // ldrb r0, [r0]
}




void ov96_0220F3BC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220F3D4: ; jump table
}




void ov96_0220F3FC(void) {
    // str r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #8]
    // ldr r1, [sp, #8]
    // add r5, sp, #0x14
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // add r6, sp, #0x58
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r6, #0x10
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x58
    // add r3, sp, #0x14
}




void ov96_0220F4A0(void) {
    // str r0, [sp, #0xc]
    // add r0, sp, #0x40
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    ReadWholeNarcMemberByIdPair(0xaa, 0x11);
    // ldr r0, [sp, #0xc]
    GF_AssertFail();
    // ldr r0, [sp, #0xc]
    GF_AssertFail(*((u32*)(r0 + 4)));
    // ldr r0, [sp, #0xc]
    ov96_0220F280(*((u32*)(r0 + 4)));
    // ldr r1, [sp, #0xc]
    // add r1, r1, r2
    // and r4, r3
    // str r4, [r1]
    // add r1, #0xe4
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // str r0, [sp, #0x20]
    _s32_div_f(0, 3, 3, 3);
    // str r1, [sp, #0x10]
    _s32_div_f(r6, 3);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // add r2, r0, r1
    // ldr r1, [sp, #0x10]
    // add r5, r2, r0
    // ldr r0, [sp, #0xc]
    ov96_021EAA04(*((u32*)((0x48 * (0xe4 * r0)) + 0x20)), ((r6 << 0x18) >> 0x18));
    // str r0, [sp, #0x24]
    ov96_021EAB38(1);
    _s32_div_f(r6, 3);
    _s32_div_f(r6, 3);
    ov96_021E60C0(r7, r4, r1);
    ov96_021E6138();
    // add r0, sp, #0x40
    // add r2, r0, r1
    // sub r1, #8
    // ldr r0, [sp, #0x24]
    ov96_021EAF70(*((u32*)r2), *((u32*)(r2 - 4)));
    // ldr r0, [sp, #0xc]
    ov96_021EAA04(*((u32*)(r0 + 0x20)), ((r6 << 0x18) >> 0x18));
    ov96_021EAA20();
    ov96_021E8BB0();
    // str r0, [sp, #0x28]
    ov96_0220D554(r4, 0);
    ov96_021EB10C(r4, (0xfe << 0x16), (0xfe << 0x16));
    // ldr r1, [sp, #0x1c]
    // add r1, r0, r2
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #0x18]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0x14]
    ov96_021EAC0C(r4, 2, (r1 * 0xc));
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    ov96_021EAF94(r4);
    ov96_021E6104();
    ov96_021EAF6C(r4, r0);
    // add r0, sp, #0x2c
    // str r0, [sp]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // add r3, sp, #0x30
    ov96_021EB0A4(r4);
    // str r7, [r5]
    // and r1, r0
    *((u32*)(r5 + 0x40)) = (((r6 << 0x1c) >> 0xc) | *((u32*)(r5 + 0x40)));
    // ldr r0, [sp, #0x1c]
    // add r0, #0x45
    // strb r1, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x46
    // strb r3, [r0]
    *((u32*)(r5 + 4)) = r4;
    // and r0, r2
    // ldr r2, [sp, #0x28]
    *((u32*)(r5 + 0x40)) = (0xFCFFFFFF | ((*((u16*)(*((u32*)(r5 + 0x40)) + 4)) << 0x1e) >> 6));
    ov96_0220F378(r7, (((((r6 << 0x1c) >> 0xc) | *((u32*)(r5 + 0x40))) << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18));
    *((u32*)(r5 + 8)) = r0;
    *((u32*)(r5 + 0xc)) = 2;
    // and r1, r0
    *((u32*)(r5 + 0x40)) = ((2 << 0x14) | *((u32*)(r5 + 0x40)));
    // ldr r0, [sp, #0x30]
    *((u32*)(r5 + 0x1c)) = (((2 << 0x14) | *((u32*)(r5 + 0x40))) << 0xc);
    // ldr r0, [sp, #0x2c]
    *((u32*)(r5 + 0x20)) = ((((2 << 0x14) | *((u32*)(r5 + 0x40))) << 0xc) << 0xc);
    // ldr r0, [sp, #0x30]
    *((u32*)(r5 + 0x10)) = (((((2 << 0x14) | *((u32*)(r5 + 0x40))) << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x2c]
    *((u32*)(r5 + 0x14)) = ((((((2 << 0x14) | *((u32*)(r5 + 0x40))) << 0xc) << 0xc) << 0xc) << 0xc);
    ov96_021E5F24(r7, *((u32*)(r5 + 0x40)));
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x18]
    // add r1, sp, #0x34
    // add r2, sp, #0x34
    // add r1, r1, r0
    // strh r3, [r2, r0]
    // ldr r0, [sp, #0x14]
    *((u16*)(r1 + 2)) = (r0 << 2);
    // ldr r0, [sp, #0xc]
    SpriteManager_GetSpriteList(*((u32*)((r0 << 2) + 0x10)));
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    ov96_021E64F8(r7, r4, *((u32*)(r2 + 0x1c)), r0);
    Sprite_SetDrawPriority(4);
    ov96_021EABA8(r4, 6);
    ov96_021EABA8(r4, 7);
    ov96_021E5F24(r7);
    PokeathlonCourse_GetDataCopyArea(r7);
    // add r0, #0x28
    ov96_021E8A20();
    // add r1, r0, r6
    // ldr r0, [sp, #0x30]
    *((u8*)(r1 + 4)) = r0;
    // ldr r0, [sp, #0x2c]
    *((u8*)(r1 + 0x10)) = r0;
    // ldr r0, [sp, #0xc]
    SpriteManager_GetSpriteList(*((u32*)(r0 + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x34
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    ov96_021E62AC(r7, 0, *((u32*)(r2 + 0x1c)), r0);
}




void ov96_0220F710(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r0, #0xcc
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    _s32_div_f(0, 3);
    // ldr r0, [sp, #0xc]
    _s32_div_f(3);
    // ldr r0, [sp, #8]
    // add r0, r0, r2
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r2, r0, r2
    // add r7, r2, r0
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // add r6, r1, r0
    // str r0, [sp, #0x14]
    // add r0, #0x1c
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0x28
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, #0x34
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, #0x40
    // str r0, [sp, #0x20]
    _s32_div_f(((0x48 * r1) + 1), 3, (r4 * 0xe4));
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #0x10]
    // add r2, r0, r2
    // add r5, r2, r0
    ov96_0220D694(r7, (r5 * 0xe4));
    ov96_0220D694(r5);
    ov96_0220D5D0(r7, r5);
    // ldr r0, [sp]
    // add r0, sp, #0x24
    // str r1, [r0]
    *((u32*)(*((u8*)(r0 + r4)) + 4)) = 0;
    *((u32*)(*((u8*)(r0 + r4)) + 8)) = 0;
    // strb r0, [r6]
    // ldr r0, [sp]
    // add r2, sp, #0x24
    // strb r1, [r0, r4]
    // ldr r0, [sp, #0x14]
    // add r1, #0x1c
    VEC_Subtract(1, r5);
    // add r0, sp, #0x24
    VEC_Normalize(r0);
    _s32_div_f((6 * *((u32*)(*((u32*)(r5 + 8)) + 4))), 5);
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r1, sp, #0x24
    VEC_MultAdd(r0, r0);
    _s32_div_f((6 * *((u32*)(*((u32*)(r7 + 8)) + 4))), 5);
    // add r1, sp, #0x24
    // add r2, #0x28
    // add r3, #0x34
    VEC_MultAdd(r0, r0, r5, r5);
    // mvn r0, r0
    *((u32*)(r5 + 0x34)) = (0 * *((u32*)(r5 + 0x34)));
    // mvn r0, r0
    *((u32*)(r5 + 0x38)) = (0 * *((u32*)(r5 + 0x38)));
    // ldr r0, [sp, #0x1c]
    ov96_0220E974((0 * *((u32*)(r5 + 0x38))), (2 << 0xe));
    // add r0, #0x34
    ov96_0220E974(r5, (2 << 0xe));
    // add r0, sp, #0x24
    ov96_0220D6CC();
    // and r1, r2
    *((u32*)(r5 + 0x40)) = ((1 << 0x1a) | (0xFF0FFFFF | ((r0 << 0x1c) >> 8)));
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r1, [r0]
    // strb r0, [r6]
    // ldr r0, [sp]
    // strb r1, [r0, r4]
    // add r6, #0xc
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov96_0220F8C8(void) {
    PokeathlonCourse_GetDataCopyArea(r1);
    // add r0, #0x28
    ov96_021E8A20();
    // str r0, [sp]
    // add r1, #0x48
    // and r3, r4
    // str r3, [r1, r0]
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // add r0, #8
    ov96_0220DAA0(r5, 0, 2, 0xF7FFFFFF);
    // and r1, r2
    *((u32*)(r5 + 4)) = ((((r0 << 0x18) >> 0x18) << 0x1e) | 0x3FFFFFFF);
    // add r3, #8
    // add r4, r3, r2
    // asr r0, r0, #0x10
    // asr r2, r2, #0x10
    // and r0, r1
    *((u32*)(r5 + 4)) = 0xDFFFFFFF;
    // ldrsh r1, [r5, r1]
    // sub r0, r1, r0
    // bpl _0220F964
    // neg r0, r0
    // ldrsh r0, [r5, r0]
    // sub r0, r0, r2
    // bpl _0220F972
    // neg r0, r0
    ov96_0220D6B0(r4, r5, (*((u32*)(r4 + 0x20)) << 4), *((u32*)(r4 + 0xc)));
    ov96_0220D8C4(r4, *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)));
    // and r1, r2
    *((u32*)(r4 + 0x40)) = (((r0 << 0x1f) >> 2) | 0xDFFFFFFF);
    // add r0, #8
    // add r4, r0, r2
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ov96_0220DAA0(r5, 0, 2);
    ov96_0220D630(r4, (*((u32*)(r5 + 4)) >> 0x1e), ((r0 << 0x18) >> 0x18));
    // and r0, r1
    *((u32*)(r5 + 4)) = 0xDFFFFFFF;
    // add r4, #8
    ov96_0220D9A4(r5, r7);
    // add r4, #0x48
    // ldr r0, [sp]
    // add r5, #0xe4
    // str r0, [sp]
    ov96_0220F710(r7);
}




void ov96_0220FA18(void) {
    // str r0, [sp, #4]
    PokeathlonCourse_GetDataCopyArea(r1);
    // add r0, #0x28
    ov96_021E8A20();
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // and r2, r0
    // ldr r0, [sp, #8]
    *((u32*)((((*((u32*)(r0 + 0x1c)) >> 0x1e) + 1) << 0x1e) + 0x1c)) = (*((u32*)(r0 + 0x1c)) | (((*((u32*)(r0 + 0x1c)) >> 0x1e) + 1) << 0x1e));
    // add r6, #0x20
    // ldr r1, [sp, #4]
    // add r2, #0x8c
    // add r1, r1, r3
    // and r2, r1
    // and r1, r2
    // ldr r0, [sp, #8]
    // and r2, r1
    *((u32*)((*((u32*)((((*((u32*)(r0 + 0x1c)) >> 0x1e) + 1) << 0x1e) + 0x20)) & ~(0x7f)) + 0x20)) = ((*((u32*)((((*((u32*)(r0 + 0x1c)) >> 0x1e) + 1) << 0x1e) + 0x20)) & ~(0x7f)) | 0x7f);
    // and r2, r0
    // ldr r0, [sp, #8]
    *((u32*)((0x8007FFFF << 0x18) + 0x1c)) = *((u32*)((*((u32*)((((*((u32*)(r0 + 0x1c)) >> 0x1e) + 1) << 0x1e) + 0x20)) & ~(0x7f)) + 0x1c));
    // asr r0, r1, #0xc
    // and r1, r0
    // ldr r0, [sp, #8]
    *((u32*)((0x8007FFFF << 0x18) + 0x20)) = *((u32*)((0x8007FFFF << 0x18) + 0x20));
    // ldr r0, [sp, #4]
    // add r0, #0x98
    // str r0, [sp, #4]
    _s32_div_f(0, 3, *((u32*)((0x8007FFFF << 0x18) + 0x20)), (((*((u32*)(r0 + 0x1c)) | (((*((u32*)(r0 + 0x1c)) >> 0x1e) + 1) << 0x1e)) >> 0x1e) * 0xe4));
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #4]
    // add r3, sp, #0x14
    // add r2, r0, r2
    // add r5, r2, r0
    // add r0, sp, #0x10
    // str r0, [sp]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov96_021EB06C(*((u32*)(r5 + 4)), (*((u32*)(r5 + 0x1c)) << 4), (*((u32*)(r5 + 0x20)) << 4));
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    *((u8*)(r0 + 4)) = 0;
    // ldr r1, [sp, #0x10]
    *((u8*)(r0 + 0x10)) = 0;
    // and r1, r0
    // lsl r2, r4
    // str r0, [r6]
    // and r0, r1
    *((u32*)(r5 + 0x40)) = (0xFFFF00FF | (((((*((u32*)(r5 + 0x40)) << 0x10) >> 0x18) - 1) << 0x18) >> 0x10));
    // and r1, r0
    // lsl r2, r4
    // str r0, [r6]
    // ldr r0, [sp, #0xc]
    // and r1, r0
    // lsl r2, r7
    // add r2, r0, r2
    // and r0, r2
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
}




void ov96_0220FB98(void) {
    *((u32*)(r0 + 4)) = (0x20 | *((u32*)(r0 + 4)));
    // strh r0, [r5]
    *((u16*)(r0 + 2)) = 0;
    // strh r0, [r5]
    *((u32*)(r0 + 4)) = (4 | (*((u32*)(r0 + 4)) & ~(0x1c)));
    *((u8*)(r0 + 8)) = r2;
    MTRandom((4 | (*((u32*)(r0 + 4)) & ~(0x1c))), (*((u32*)(r0 + 4)) & ~(0x1c)));
    _u32_div_f(0xf);
    *((u8*)(r5 + 9)) = r1;
    // and r0, r1
    *((u32*)(r5 + 4)) = 0xFFFFC03F;
    *((u8*)(r5 + 0xa)) = r4;
}




void ov96_0220FBDC(void) {
    // bic r2, r1
    // bic r2, r1
}




void ov96_0220FBEC(void) {
    // str r1, [sp, #8]
    // ldrsh r1, [r0, r1]
    // str r0, [sp, #4]
    // str r2, [sp, #0xc]
    // sub r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, sp, #0x20
    // str r1, [r0]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // add r1, #8
    // add r5, r1, r0
    // add r0, sp, #0x18
    // str r0, [sp]
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    // add r3, sp, #0x1c
    // ldr r1, [sp, #4]
    // ldrsh r0, [r1, r0]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // sub r2, r2, r0
    // ldr r0, [sp, #0x10]
    // str r2, [sp, #0x20]
    // sub r1, r1, r0
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x24]
    // add r0, sp, #0x20
    // add r0, #0xe
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // strh r1, [r0]
    // ldr r1, [sp, #0x18]
}




void ov96_0220FCB0(void) {
    // ldrsh r5, [r0, r5]
    // ldrsh r6, [r0, r4]
    // ldrsh r4, [r0, r6]
    // ldrsh r0, [r0, r3]
}




void ov96_0220FD28(void) {
    // ldrsh r1, [r4, r0]
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // add r1, sp, #4
    // strh r0, [r1]
    // ldrsh r2, [r4, r0]
    // asr r3, r2, #2
    // add r3, r2, r3
    // asr r2, r3, #3
    *((u16*)(r1 + 2)) = r2;
    // ldrsh r0, [r1, r0]
    *((u32*)(r0 + 4)) = (0xc | (*((u32*)(r0 + 4)) & ~(0x1c)));
    // add r0, sp, #4
    ov96_0220FCB0((0xc | (*((u32*)(r0 + 4)) & ~(0x1c))), 9, (r3 >> 0x1d));
    *((u32*)(r5 + 4)) = (0x10 | (*((u32*)(r5 + 4)) & ~(0x1c)));
    *((u32*)(r5 + 4)) = (0x10 | (*((u32*)(r5 + 4)) & ~(0x1c)));
    // add r0, sp, #4
    ov96_0220FCB0((0x10 | (*((u32*)(r5 + 4)) & ~(0x1c))), 0xf);
    *((u32*)(r5 + 4)) = (0x14 | (*((u32*)(r5 + 4)) & ~(0x1c)));
    *((u32*)(r5 + 4)) = ((*((u32*)(r5 + 4)) & ~(0x1c)) | 0x14);
    // add r0, sp, #4
    ov96_0220FCB0(((*((u32*)(r5 + 4)) & ~(0x1c)) | 0x14), 0x14, (*((u32*)(r5 + 4)) & ~(0x1c)));
    *((u32*)(r5 + 4)) = (0x18 | (*((u32*)(r5 + 4)) & ~(0x1c)));
    *((u32*)(r5 + 4)) = (0x18 | (*((u32*)(r5 + 4)) & ~(0x1c)));
    // add r6, r6, r0
    ov96_0220F3BC(r5, *((u8*)(r4 + 4)));
    // add r1, #0xe0
    // add r1, r1, r0
    // add r0, #0xe0
    // and r0, r2
    // add r6, #0xe0
    // str r0, [r6]
    // and r1, r3
    *((u32*)(r5 + 4)) = ((*((u32*)(r5 + 4)) & ~(3)) | *((u8*)(r4 + 4)));
    // str r0, [sp]
    ov96_021E8228(r7, *((u8*)(r4 + 4)), *((u8*)(r4 + 5)), 3);
}




void ov96_0220FE38(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0220FE60: ; jump table
    // add r2, sp, #0
    ov96_0220FBEC(r2, *((u32*)(r0 + 4)));
    // add r2, sp, #0
    ov96_0220FD28(r4, r6);
    // ldrsh r2, [r4, r0]
    *((u16*)(r4 + 2)) = 0;
    *((u32*)(r4 + 4)) = (8 | (*((u32*)(r4 + 4)) & ~(0x1c)));
    // add r1, r2, r1
    *((u16*)(r4 + 2)) = *((u8*)(r4 + 0xa));
    // ldrsh r0, [r4, r0]
    ov96_0220E6DC((8 | (*((u32*)(r4 + 4)) & ~(0x1c))), *((u8*)(r4 + 9)));
    // strh r0, [r4]
    // ldrsh r3, [r4, r1]
    // add r2, r3, r2
    *((u16*)(r4 + 2)) = *((u8*)(r4 + 0xa));
    // ldrsh r1, [r4, r1]
    ov96_0220FBDC(2, *((u8*)(r4 + 0xa)));
    // and r1, r2
    *((u32*)(r4 + 4)) = (0xFFFFC03F | (((((r2 << 0x12) >> 0x18) + 1) << 0x18) >> 0x12));
    ov96_0220FBDC((((0xFFFFC03F | (((((r2 << 0x12) >> 0x18) + 1) << 0x18) >> 0x12)) << 0x12) >> 0x18), (((((r2 << 0x12) >> 0x18) + 1) << 0x18) >> 0x12));
    GF_AssertFail();
    // ldrsh r1, [r4, r1]
    // asr r1, r2, #2
    // add r1, r2, r1
    // and r1, r2
    // strh r0, [r5]
    // and r1, r0
    // strh r0, [r5]
    // and r0, r1
    // strh r0, [r5]
    // and r0, r1
    // strh r0, [r5]
}




void ov96_0220FF64(void) {
}




void ov96_0220FF68(void) {
    // mvn r0, r0
}




void ov96_0220FF88(void) {
    ov96_0220FF68(r1);
    // and r1, r3
    *((u32*)(r5 + 0x1c)) = (((r0 << 0x1c) >> 0x14) | 0xFFFFF0FF);
    // add r2, #0x1c
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220FFBA: ; jump table
    // str r0, [r2]
    // str r1, [r2]
    MTRandom(((*((u32*)(r5 + 0x1c)) << 0x14) >> 0x1c), 4, r5, *((u32*)(r5 + 0x1c)));
    // and r0, r1
    // add r0, #8
    // add r0, r3, r0
    ov96_0220FB98((0xc * 0), (((r0 + 1) << 0x1a) >> 0x18), ((0 << 0x18) >> 0x18), (r5 + 4));
    // add r0, #0xc
}




void ov96_02210030(void) {
    // add r1, #0x28
    // add r5, #0xc
}




void ov96_0221007C(void) {
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [r0]
    // str r6, [sp]
    // ldr r1, [sp, #0x10]
    // str r6, [sp, #4]
    // add r4, #0x1c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r4, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // str r5, [sp, #8]
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // str r5, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // add r0, #0x1c
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}




void ov96_0221013C(void) {
    // str r1, [sp]
    // add r0, #0xf0
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp]
    // ldr r2, [sp]
    // add r6, r5, r0
    // strh r0, [r6, r7]
    // ldr r0, [sp, #4]
    // add r0, #0xc4
    // str r0, [sp, #4]
    // ldr r0, [sp]
}




void ov96_022101D0(void) {
    // add r5, #0x1c
    // add r6, #0x1c
}




void ov96_0221022C(void) {
    // add r1, #0x24
}




void ov96_02210240(void) {
    // ldr r0, [sp, #0x28]
    // str r3, [sp, #8]
    // add r0, sp, #0x10
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x2c]
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r3, #0x24
}




void ov96_022102D4(void) {
    // add r5, #0x28
    // add r5, #0x10
}




void ov96_0221031C(void) {
}




void ov96_02210324(void) {
    ov96_021E5F24(*((u32*)r0));
    // add r0, #0xe6
    // add r0, #0xe5
    // add r0, #0xe5
    // strb r1, [r0]
    // add r0, #0xe5
    // add r1, r4, r0
    ov96_0221058C(r5, ((0 << 0x18) >> 0x18));
    // add r0, #0xe6
    // add r5, #0xe6
    // sub r0, r4, r0
    // strh r4, [r5]
}




void ov96_02210390(void) {
    GF_AssertFail();
    GF_AssertFail();
    // add r0, r5, r0
    ManagedSprite_SetAnim(*((u32*)(((r4 + 3) << 2) + 0x68)), (r4 + 4));
    ov96_021E5F24(*((u32*)r5));
    // add r0, #0xe6
    ov96_02210324(r5, r4, r6);
    PlaySE_SetPitch(0x0000088D, 0x80);
    PlaySE_SetPitch(0x0000088D, (1 << 8));
    PlaySE_SetPitch((5 << 6));
}




void ov96_0221040C(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0xe4
    // add r0, #0xe4
    // add r0, #0xe4
    // strb r1, [r0]
    // add r0, #0xe4
    // add r0, #0xe4
    // strb r1, [r0]
    // ldr r1, [sp, #4]
    // add r1, #9
    // str r1, [sp, #4]
    // ldr r1, [sp]
    // add r1, #9
    // str r1, [sp]
}




void ov96_022104C4(void) {
    // add r0, #0xe5
    // add r1, #0xe6
    // add r0, r1, r0
}




void ov96_022104D8(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov96_0221D17C), (6 - 1));
    GF_AssertFail();
    // add r1, sp, #4
    // strh r7, [r1]
    // ldr r0, [sp]
    *((u16*)(r1 + 2)) = r0;
    // add r0, sp, #0x40
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x10));
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    SpriteSystem_NewSpriteWithYOffset(r5, r4, *((u16*)(r0 + 0x10)), (0x1e << 0x10));
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_02210538(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + 0x10)));
    // add r6, #0x28
    // add r1, r6, r1
    // add r2, r7, r2
    AddWindow(*((u32*)(r5 + 0x10)), (0 << 4), (0 << 3));
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r5 + 0x10)), 7, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)(r5 + 4)));
}




void ov96_0221058C(void) {
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0]
    // sub r0, r6, r0
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r0, #3
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov96_0221065C(void) {
    // add r0, #9
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    // add r4, #0x10
}




void ov96_0221069C(void) {
    // str r0, [sp, #0x1c]
    GF_AssertFail(0x00000000);
    // str r5, [sp, #0x10]
    // add r6, #0x28
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // add r1, r1, r0
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #0x18]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x14]
    // str r7, [sp, #0x1c]
    PokeathlonCourse_GetPlayerProfileFromData(*((u32*)r5), 0, ov96_0221D14C);
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x20]
    // add r0, r6, r7
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x20]
    // add r0, r6, r7
    AddTextPrinterParameterizedWithColor(0, 0, 0);
    // add r0, r6, r7
    CopyWindowToVram();
    // ldr r0, [sp, #0x20]
    String_Delete();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x14]
    ov96_022104D8(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)));
    // ldr r1, [sp, #0x10]
    *((u32*)(r1 + 0x74)) = r0;
    // str r0, [sp, #0x10]
}




void ov96_0221075C(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // asr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // add r0, r4, r7
    // mvn r2, r2
    // ldr r1, [sp, #8]
    // add r6, r5, r0
    // add r1, r1, r2
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r2, r1, #0x10
    // ldr r3, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void ov96_022107D4(void) {
}




void ov96_022107F0(void) {
    // str r0, [sp]
    // str r4, [r7]
    // ldr r0, [sp]
    // sub r1, r0, r5
    // add r0, #0xbc
    // strb r1, [r0]
    // add r0, #0xbc
    // add r6, #8
    // ldr r2, [sp]
    // add r0, #0xbc
    // add r6, #0x3c
}




void ov96_02210850(void) {
}




void ov96_02210858(void) {
    // str r0, [sp]
    // add r7, r7, r0
    // ldr r0, [sp]
    // add r0, #0xbc
    // asr r0, r7, #1
    // ldr r4, [sp]
    // add r0, r7, r0
    // add r4, #8
    // ldr r0, [sp]
    // add r0, #0xbc
    // add r4, #0x3c
}




void ov96_022108BC(void) {
    // add r4, r4, r0
    // add r5, #0x14
}




void ov96_022108EC(void) {
}




void ov96_0221090C(void) {
    MTRandom(((*((u32*)(r0 + 0xc)) << 0x19) >> 0x1e));
    _u32_div_f(*((u8*)(ov96_0221D1B1 + r5)));
    // add r0, r0, r1
    *((u16*)(r4 + 6)) = *((u8*)(ov96_0221D1B0 + r5));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = (6 << 3);
    // add r0, r2, r0
    // ldrsh r0, [r1, r0]
    *((u16*)(r4 + 8)) = (0xc * ((*((u32*)(r4 + 0xc)) << 0x1b) >> 0x1e));
    MTRandom((0xc * ((*((u32*)(r4 + 0xc)) << 0x1b) >> 0x1e)), (((*((u32*)(r4 + 0xc)) << 0x19) >> 0x1e) << 2), ov96_0221D1C4);
    _u32_div_f(5);
    // ldrsh r2, [r4, r0]
    // add r0, r2, r0
    *((u16*)(r4 + 8)) = ((r1 - 2) << 3);
    // and r0, r1
    *((u32*)(r4 + 0xc)) = 0xFFFFF87F;
}




void ov96_02210980(void) {
    _s32_div_f(r2, 3);
    _s32_div_f(r7, 3);
    // str r6, [r5]
    // add r0, r2, r0
    // and r2, r1
    *((u32*)(r5 + 0xc)) = ((((((r1 << 0x18) >> 0x18) << 3) << 0x18) >> 0xd) | 0xFFF807FF);
    *((u8*)(r5 + 0x10)) = (((r1 << 0x18) >> 0x18) << 3);
    ov96_0221090C(r5, ((((((r1 << 0x18) >> 0x18) << 3) << 0x18) >> 0xd) | 0xFFF807FF), 0xFFF807FF);
}




void ov96_022109D8(void) {
    PokeathlonCourse_GetHeapAllocPtr4(*((u32*)r0));
    ov96_0220E7BC(*((u32*)r6), ((((*((u32*)(r6 + 0xc)) << 0x1b) >> 0x1e) << 0x18) >> 0x18));
    GF_AssertFail(((*((u32*)(r6 + 0xc)) << 0x1f) >> 0x1f), ((*((u32*)(r6 + 0xc)) << 0x15) >> 0x1c));
    // ldrsh r0, [r6, r0]
    *((u16*)(r6 + 4)) = 8;
    // str r0, [sp, #4]
    // add r4, #0xc
    // str r0, [sp]
    ov96_0220E74C(r7, ((0 << 0x18) >> 0x18));
    ov96_02210BD0(r6, r5, 0x38);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // and r1, r0
    // str r0, [r4]
    GF_AssertFail((((0x80 | (((((r5 << 0x1e) >> 0x1d) | (*((u32*)r4) & ~(r1))) & ~((*((u32*)r4) & ~(r1)))) | 1)) << 0x1f) >> 0x1f), (((((r5 << 0x1e) >> 0x1d) | (*((u32*)r4) & ~(r1))) & ~((*((u32*)r4) & ~(r1)))) | 1));
    ov96_0220E74C(r7, ((((*((u32*)(r6 + 0xc)) << 0x1d) >> 0x1e) << 0x18) >> 0x18));
    // ldrsh r2, [r6, r0]
    // add r0, r2, r0
    // asr r0, r0, #0x10
    ov96_0220E6DC(((0x12 << 4) << 0x10), *((u8*)(r0 + 9)));
    *((u16*)(r6 + 4)) = r0;
    // and r0, r1
    *((u32*)(r6 + 0xc)) = 0xFFFFF87F;
    GF_AssertFail(0xFFFFF87F, (*((u32*)(r6 + 0xc)) & ~(1)));
    ov96_0220E818(r7, (r6 + 4), ((((*((u32*)(r6 + 0xc)) << 0x1b) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r6 + 0xc)) << 0x19) >> 0x1e) << 0x18) >> 0x18));
}




void ov96_02210AE0(void) {
    PokeathlonCourse_GetHeapAllocPtr4(*((u32*)r0));
    // str r0, [sp, #4]
    ov96_0220E70C(((((*((u32*)(r5 + 0xc)) << 0x1b) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r5 + 0xc)) << 0x19) >> 0x1e) << 0x18) >> 0x18));
    *((u8*)(r5 + 0x10)) = (*((u8*)(r5 + 0x10)) - 1);
    ov96_0221090C(r5);
    *((u8*)(r5 + 0x10)) = 0x5a;
    // and r0, r1
    *((u32*)(r5 + 0xc)) = (0xFFF807FF | (((((*((u32*)(r5 + 0xc)) << 0xd) >> 0x18) - 1) << 0x18) >> 0xd));
    ov96_022109D8(r5, (((((*((u32*)(r5 + 0xc)) << 0xd) >> 0x18) - 1) << 0x18) >> 0xd));
    // and r1, r0
    *((u32*)(r5 + 0xc)) = ((0xa << 0xc) | *((u32*)(r5 + 0xc)));
    ov96_02210BD0(r5, ((*((u32*)(r5 + 0xc)) << 0x1d) >> 0x1e), 0x10);
    MTRandom();
    _u32_div_f(0x64);
    // add r0, sp, #8
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    ov96_0220E770(((((*((u32*)(r5 + 0xc)) << 0x1b) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r5 + 0xc)) << 0x19) >> 0x1e) << 0x18) >> 0x18));
    // add r4, #0x14
    // ldr r0, [sp, #4]
    ov96_0220E834(*((u32*)(ov96_0221D1B8 + (((*((u32*)(r5 + 0xc)) << 0x19) >> 0x1e) << 2))), ((((*((u32*)(r5 + 0xc)) << 0x1b) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r5 + 0xc)) << 0x19) >> 0x1e) << 0x18) >> 0x18));
}




void ov96_02210BD0(void) {
    // ldrsh r1, [r5, r0]
    // add r0, sp, #8
    // str r0, [sp]
    // add r3, sp, #0xc
    // ldrsh r1, [r5, r0]
    // sub r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r6, [sp, #4]
    // add r2, sp, #8
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // ldrsh r3, [r5, r3]
    // ldr r2, [sp, #8]
}




void ov96_02210C48(void) {
    // add r5, sp
    // ldrsh r4, [r5, r4]
    // sub r4, r1, r4
    // bpl _02210C5A
    // neg r1, r4
    // neg r4, r4
    // sub r3, r0, r3
    // bpl _02210C6A
    // neg r0, r3
    // neg r3, r3
    // ldr r5, [sp, #0xc]
    // add r2, r2, r5
    // add r0, r2, r0
}




void ov96_02210C98(void) {
    // str r0, [sp, #0x14]
    PokeathlonCourse_GetHeapAllocPtr4();
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetField1ED();
    _02211626();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02210CC0: ; jump table
    Heap_Create(0x5c, 0x93, (5 << 0x10));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_022117CC(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_AllocPtr4FromHeap((0x82 << 4));
    MI_CpuFill8(0, (0x82 << 4));
    Heap_Alloc(0x93, 0x28);
    // str r0, [r5, r1]
    MI_CpuFill8(*((u32*)(r5 + 0x0000081C)), 0, 0x28);
    BgConfig_Alloc(0x93);
    *((u32*)(r5 + 4)) = r0;
    // ldr r0, [sp, #0x14]
    ov96_021E6670(8);
    // str r0, [sp, #0x108]
    // str r0, [sp, #0x10c]
    // str r0, [sp, #0x110]
    // str r2, [sp, #0x114]
    // add r0, sp, #0x108
    // str r1, [sp]
    ov96_021E92B0(((1 << 0x12) >> 4), 0x10, 0x93, 0x00300010);
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    *((u32*)(r5 + 0x58)) = 0x93;
    FontID_Alloc(4, 0x93);
    ov96_022118C4(*((u32*)(r5 + 4)));
    ov96_0221362C(r5);
    // ldr r0, [sp, #0x14]
    ov96_022140F4();
    ov96_02214044(r5, 0, 0);
    ov96_022141F8(r5);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    _02211626();
    // ldr r2, [sp, #0x14]
    ov96_0221464C(*((u32*)(r4 + 0x58)), *((u32*)(r4 + 4)));
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetParticipantCount((0x75 << 4));
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetMode();
    // sub r1, r1, r5
    ov96_02214A24(*((u32*)(r4 + 0x58)), 4, r0);
    // str r0, [r4, r1]
    ov96_021E9A78(*((u32*)(r4 + 0x58)), 0x00000AAF, 1);
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x14]
    ov96_021E64B8(0x00000744);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    _02211626();
    // add r3, sp, #0xfc
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov96_021EB180(*((u32*)(r4 + 0x58)), r3, r3);
    // str r0, [r4]
    // str r0, [sp]
    ov96_021EB5C8(*((u32*)r4), 0, 0, 0);
    ov96_021EB5E8(*((u32*)r4));
    // str r0, [sp]
    ov96_021EA854(*((u32*)(r4 + 0x58)), 0xc, 8, *((u32*)(r4 + 0x00000744)));
    // str r0, [r4, r1]
    ov96_021EB29C(*((u32*)r4), 0, 0x65);
    ov96_021EB29C(*((u32*)r4), 1, 0x66);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)r4), 0xec, 0x12, 0x65);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)r4), 0xec, 0xf, 0x65);
    ov96_021EB334(*((u32*)r4), 0xec, 0x11, 0x65);
    ov96_021EB36C(*((u32*)r4), 0xec, 0x10, 0x65);
    // str r0, [sp]
    ov96_021EB2BC(*((u32*)r4), 0xec, 0xe, 0x66);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_021EB2F4(*((u32*)r4), 0xec, 0xb, 0x66);
    ov96_021EB334(*((u32*)r4), 0xec, 0xd, 0x66);
    ov96_021EB36C(*((u32*)r4), 0xec, 0xc, 0x66);
    ov96_021EB3A4(*((u32*)r4));
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x54]
    _s32_div_f(0, 3);
    // ldr r0, [sp, #0x54]
    _s32_div_f(3);
    // add r2, r4, r0
    // add r5, r2, r0
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    *((u32*)(r5 + 0x60)) = r0;
    ov96_021EB630(5);
    // str r7, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    *((u32*)(r5 + 0x64)) = r0;
    ov96_021EB630(0x2f);
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // add r5, r4, r0
    // add r7, sp, #0xf0
    // str r0, [r7]
    *((u32*)(r7 + 4)) = 0;
    *((u32*)(r7 + 8)) = 0;
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    // str r0, [r5]
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    *((u32*)(r5 + 4)) = r0;
    ov96_021EB564(*((u32*)r5), 0xa);
    ov96_021EB564(*((u32*)(r5 + 4)), 0xd);
    ov96_021EB630(*((u32*)r5), 0x2e);
    ov96_021EB630(*((u32*)(r5 + 4)), 0x2d);
    ov96_02213444(r5);
    // add r1, #0x39
    // strb r0, [r1]
    // str r0, [sp, #0xf0]
    // str r0, [sp, #0xf4]
    ov96_021EB588(*((u32*)r5), r7);
    ov96_021EB588(*((u32*)(r5 + 4)), r7);
    // add r3, sp, #0xf0
    // ldmia r3!, {r0, r1}
    // add r2, #8
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x42
    // strb r0, [r1]
    ov96_021EB52C(*((u32*)r5), 1, 1);
    // add r1, #0x38
    // strb r0, [r1]
    // add r5, #0x4c
    // add r0, sp, #0x68
    // add r3, sp, #0xc0
    *((u16*)(1 + 8)) = *((u16*)(ov96_0221D1F4 + 0xc));
    *((u16*)(1 + 0xa)) = *((u16*)(ov96_0221D1F4 + 0xe));
    *((u16*)(1 + 0xc)) = *((u16*)(ov96_0221D1F4 + 0x10));
    *((u16*)(1 + 0xe)) = *((u16*)(ov96_0221D1F4 + 0x12));
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #0x20]
    // add r0, sp, #0xc0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x70
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x30]
    // str r4, [sp, #0x3c]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x28]
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    // ldr r1, [sp, #0x3c]
    // str r0, [r1, r2]
    ov96_021EB52C(*((u32*)(r1 + 0x000006C4)), 1, 1);
    // ldr r0, [sp, #0x3c]
    ov96_021EB564(*((u32*)(r0 + 0x000006C4)), 1);
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    ov96_021EB588(*((u32*)(r0 + 0x000006C4)), 0x000006C4);
    // ldr r0, [sp, #0x3c]
    // ldr r1, [sp, #0x34]
    ov96_021EB5AC(*((u32*)(r0 + 0x000006C4)), *((u16*)0x000006C4), 1);
    // ldr r0, [sp, #0x3c]
    ov96_021EB630(*((u32*)(r0 + 0x000006C4)), 3);
    // ldr r7, [sp, #0x2c]
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    ov96_021EB52C(1, 1);
    // ldr r1, [sp, #0x30]
    // add r1, r6, r1
    ov96_021EB564(r5);
    ov96_021EB588(r5, r7);
    ov96_021EB630(r5, 0x67);
    // add r7, #0xc
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    // ldr r1, [sp, #0x3c]
    // str r0, [r1, r2]
    // ldr r1, [sp, #0x28]
    ov96_021EB588(*((u32*)(r1 + 0x000006D4)), 0x000006D4);
    // ldr r0, [sp, #0x3c]
    ov96_021EB630(*((u32*)(r0 + 0x000006D4)), 2);
    // str r0, [sp]
    ov96_021EB3E4(*((u32*)r4), 1, 1, 0x65);
    // ldr r1, [sp, #0x3c]
    // str r0, [r1, r2]
    // ldr r1, [sp, #0x38]
    ov96_021EB588(*((u32*)(r1 + 0x000006E4)), 0x000006E4);
    // ldr r0, [sp, #0x3c]
    ov96_021EB630(*((u32*)(r0 + 0x000006E4)), 0x66);
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x38]
    // add r0, #0xc
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x2c]
    // add r0, #0x18
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // add r0, #0xc
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    ov96_021E6290(((((r0 + 4) + 2) + 2) + 1), 0, *((u32*)(r4 + 0x00000744)), *((u32*)r4));
    Sprite_SetDrawPriority(*((u32*)r0), 1);
    // sub r2, #0xc
    ov96_02214718(*((u32*)r4), *((u32*)(r4 + (0x75 << 4))), *((u32*)(r4 + (0x75 << 4))));
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    // add r7, sp, #0x1d4
    // add r6, sp, #0x190
    _s32_div_f(0, 3);
    // str r1, [sp, #0x1c]
    _s32_div_f(r5, 3);
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x58]
    // ldr r2, [sp, #0x1c]
    ov96_021E6168(r7);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x58]
    // ldr r2, [sp, #0x1c]
    ov96_021E60C0();
    ov96_021E6108();
    *((u32*)(r6 + 0x14)) = r0;
    // add r7, #0x10
    // str r1, [sp, #0x190]
    // str r0, [sp, #0x194]
    // str r1, [sp, #0x198]
    // str r0, [sp, #0x19c]
    // str r0, [sp, #0x1a0]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r2, sp, #0x1d4
    // add r3, sp, #0x190
    ov96_021EA8A8(*((u32*)(r4 + 0x00000748)), 0xc);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    ov96_021EAA00(*((u32*)(r4 + 0x00000748)));
    // ldr r0, [sp, #0x14]
    ov96_021E5F24();
    // str r0, [sp, #0x50]
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_SetField1F4(1);
    // add r0, sp, #0x9c
    ReadWholeNarcMemberByIdPair(0xaa, 0xb);
    // str r0, [sp, #0x60]
    // add r0, #0x5c
    // str r0, [sp, #0x60]
    ov96_021EAA04(*((u32*)(r4 + 0x00000748)), ((0 << 0x18) >> 0x18));
    ov96_021EAB38(1);
    _s32_div_f(r7, 3);
    _s32_div_f(r7, 3);
    // ldr r0, [sp, #0x14]
    ov96_021E60C0(r6, r1);
    ov96_021E6138();
    // add r0, sp, #0x9c
    // add r2, r0, r1
    // sub r1, #8
    ov96_021EAF70(r5, *((u32*)r2), *((u32*)(r2 - 4)));
    ov96_021EAA04(*((u32*)(r4 + 0x00000748)), ((r7 << 0x18) >> 0x18));
    ov96_021EAA20();
    // str r0, [sp, #0x5c]
    _s32_div_f(r7, 3);
    // str r1, [sp, #0x18]
    _s32_div_f(r7, 3);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x60]
    // ldr r2, [sp, #0x18]
    // add r0, r0, r1
    // add r6, r0, r1
    // str r5, [r0, r1]
    ov96_021EAF8C(r5, (0x7c * r2));
    *((u32*)(r6 + 0x20)) = r0;
    *((u32*)(r6 + 0x78)) = 0;
    // ldr r0, [sp, #0x5c]
    ov96_021E90FC(0);
    // ldr r1, [sp, #0x24]
    // ldr r1, [sp, #0x18]
    // add r0, r0, r2
    // add r1, r0, r2
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x48]
    // add r1, #0x5c
    // strh r0, [r1]
    ov96_021EAC0C(r5, 2, (r1 << 2));
    // ldr r1, [sp, #0x4c]
    // ldr r2, [sp, #0x48]
    ov96_021EAF94(r5);
    ov96_021E6104();
    ov96_021EAF6C(r5, r0);
    // add r0, sp, #0x68
    // str r0, [sp]
    // ldr r1, [sp, #0x4c]
    // ldr r2, [sp, #0x48]
    // add r3, sp, #0x6c
    ov96_021EB0A4(r5);
    // ldr r0, [sp, #0x6c]
    *((u32*)(r6 + 0x14)) = (r0 << 0xc);
    // ldr r0, [sp, #0x68]
    *((u32*)(r6 + 0x18)) = ((r0 << 0xc) << 0xc);
    // ldr r0, [sp, #0x6c]
    *((u32*)(r6 + 0x30)) = (((r0 << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x68]
    *((u32*)(r6 + 0x34)) = ((((r0 << 0xc) << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x6c]
    *((u32*)(r6 + 0x24)) = (((((r0 << 0xc) << 0xc) << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x68]
    *((u32*)(r6 + 0x28)) = ((((((r0 << 0xc) << 0xc) << 0xc) << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x14]
    ov96_021E5F24(((((((r0 << 0xc) << 0xc) << 0xc) << 0xc) << 0xc) << 0xc));
    // ldr r1, [sp, #0x24]
    ov96_021EABA8(r5, 8);
    ov96_021EABA8(r5, 0x10);
    ov96_021EABDC(r5, 0x14);
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x6c]
    // add r1, sp, #0xb4
    // add r2, sp, #0xb4
    // add r1, r1, r0
    // strh r3, [r2, r0]
    // ldr r0, [sp, #0x68]
    *((u16*)(r1 + 2)) = (r0 << 2);
    ov96_021EB5E8(*((u32*)r4));
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    ov96_021E64F8(1, r5, *((u32*)(r4 + 0x00000744)), r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0xb4
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    ov96_021E634C(3, 0, *((u32*)(r4 + 0x00000744)), *((u32*)r4));
    // ldr r0, [sp, #0x14]
    ov96_021E5F24();
    // add r0, sp, #0x118
    ReadWholeNarcMemberByIdPair(0xaa, 8);
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // add r0, #0x5c
    // ldr r7, [sp, #0x44]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // add r2, r4, r0
    // ldr r6, [sp, #0x40]
    // strb r1, [r2, r0]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x64]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x64]
    // add r1, sp, #0x118
    // str r6, [sp]
    ov96_0221359C(((0x00000734 << 0x18) >> 0x18), 0xc, ((0 << 0x18) >> 0x18));
    // add r1, r5, r7
    ov96_02214A6C(*((u32*)(r4 + 0x0000074C)), ((r1 << 0x18) >> 0x18), r6);
    // add r6, #0x7c
    // ldr r1, [sp, #0x40]
    // add r0, r1, r0
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x44]
    // add r1, r4, r1
    ov96_02214B74(*((u32*)(r4 + 0x0000074C)), 0x0000062C);
    ov96_02214A9C(*((u32*)(r4 + 0x0000074C)));
    // add r3, sp, #0x90
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    VEC_Normalize(r3, r3, r3);
    // add r2, sp, #0x84
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r5!, {r0, r1}
    // add r3, r4, r2
    // stmia r3!, {r0, r1}
    // mvn r7, r7
    // str r0, [r3]
    // add r0, #0xc
    // add r5, r4, r0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // str r1, [r3]
    // add r3, sp, #0x78
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0x18
    // add r3, r4, r0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r5, sp, #0x90
    // str r0, [r3]
    // add r0, #0x24
    // add r3, r4, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r6, sp, #0x90
    // str r0, [r3]
    // add r0, #0x28
    // add r0, #0x28
    // str r1, [r4, r0]
    // add r0, #0x30
    // add r3, r4, r0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0x3c
    // add r5, r4, r0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r5, sp, #0x90
    // add r0, #0x48
    // str r1, [r3]
    // add r3, r4, r0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0x4c
    // add r0, #0x4c
    // str r1, [r4, r0]
    // add r0, #0x54
    // add r5, r4, r0
    // add r6, sp, #0x90
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // str r1, [r3]
    // add r0, #0x58
    // add r2, #0x58
    // str r1, [r4, r2]
    // ldr r0, [sp, #0x14]
    ov96_021E5F24(*((u32*)(r4 + 0x00000754)), (*((u32*)(r4 + 0x00000754)) * 0), 0x00000754, r2);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_GetDataCopyArea();
    // add r0, #0x28
    ov96_021E8A20();
    ov96_02211DE4(r4, r0);
    ov96_02211A24(r4);
    ov96_022147FC(*((u32*)(r4 + (0x75 << 4))));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    // str r0, [r4, r1]
    // add r0, #0x18
    ov96_0221490C(*((u32*)(r4 + 0x00000738)), *((u32*)(r4 + 0x00000738)));
    sub_0203A994(2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(2, 3, 3, 0);
    // ldr r0, [sp, #0x14]
    PokeathlonCourse_IncrementField1ED();
    IsPaletteFadeFinished();
}




u32 ov96_02211650(void) {
}




void ov96_02211660(void) {
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_022116C8(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    sub_0203A914();
    ov96_021E6550(r7);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 5);
    FreeBgTilemapBuffer(*((u32*)(r4 + 4)), 6);
    ov96_02214234(r4);
    ov96_022141B0(r7);
    // add r0, #8
    RemoveWindow(r4);
    // add r5, #0x18
    RemoveWindow(r4);
    // add r5, #0x10
    Heap_Free(*((u32*)(r4 + 4)));
    ov96_021EB21C(*((u32*)r4));
    ov96_021EA894(*((u32*)(r4 + 0x00000748)));
    ov96_021E9C0C(*((u32*)(r4 + 0x00000744)));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov96_02214B7C(*((u32*)(r4 + 0x0000074C)));
    ov96_02214690(*((u32*)(r4 + (0x75 << 4))));
    FontID_Release(4);
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    Heap_Free(*((u32*)(r4 + 0x0000081C)));
    PokeathlonCourse_FreePtr4HeapAlloc(r7);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // strh r1, [r0]
    Heap_Destroy(0x93, 0);
}




void ov96_022117CC(void) {
}




void ov96_022117EC(void) {
    // strb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov96_02211870(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    IsPaletteFadeFinished(*((u8*)r4));
    // strb r0, [r4]
    ov96_021E5F24(r6);
    PokeathlonCourse_SetField5E0_AtIndex(r6, ((0 << 0x18) >> 0x18), ((*((u32*)(r5 + 0x000006F4)) << 0x10) >> 0x10));
}




void ov96_022118C4(void) {
    // add r3, sp, #0xc4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_02211A24(void) {
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
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov96_02211AF0(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r5);
    ov96_021E8A20();
    // add r7, #0xf0
    // str r0, [r4]
    ov96_021E8A20(r7);
    // asr r0, r0, #0x18
    // and r0, r1
    ov96_021EB63C(*((u32*)r6), 1);
    ov96_021EB144(*((u32*)(r6 + 0x00000748)), 1);
    ov96_021E65A4(r5);
    ov96_021E8324(r5, ov96_02214618);
    System_GetTouchNew(1);
    ov96_021E5F24(r5);
    // str r0, [sp]
    ov96_021E8228(r5, ((r0 << 0x18) >> 0x18), 3, 0);
    System_GetTouchHeld();
    *((u8*)(r4 + 4)) = *((u16*)(gSystem + 0x20));
    *((u8*)(r4 + 5)) = *((u16*)(gSystem + 0x22));
    // str r0, [r4]
    ov96_02211F38(r5, *((u16*)(gSystem + 0x20)));
}




void ov96_02211B94(void) {
    // str r0, [sp, #4]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r1, [r4, r0]
    // ldr r0, [sp, #4]
    ov96_021E5F24(0x00000738, (*((u32*)(r0 + 0x00000738)) - 1));
    // ldr r0, [sp, #0xc]
    // add r0, #0x28
    // str r0, [sp, #0xc]
    ov96_021E8A20(*((u8*)(r4 + 0x0000073E)));
    ov96_02211DE4(r4, r0);
    // ldr r0, [sp, #0xc]
    // add r0, #0x28
    ov96_021E8A20();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x50
    ov96_021E8A20();
    // ldr r0, [sp, #0xc]
    ov96_021E8A20();
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // ldr r0, [sp, #0xc]
    // add r0, #0x50
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0x5c
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    ov96_021E8A20(r4, (4 - 1), r0);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    ov96_02213364(r4, ((r6 << 0x18) >> 0x18), *((u8*)(r0 + 4)), *((u8*)(r0 + 5)));
    _s32_div_f(3);
    // ldr r0, [sp, #8]
    // add r1, r0, r2
    // add r1, r4, r6
    // strb r7, [r1, r0]
    // add r0, #0xe
    // strb r1, [r4, r0]
    // add r0, r4, r6
    // strb r2, [r4, r1]
    _s32_div_f(*((u8*)(*((u32*)(r5 + 0x00000708)) + 0x00000734)), 3, (*((u8*)(r4 + 0x00000742)) + 1));
    // ldr r2, [sp, #8]
    // add r2, r2, r3
    // add r2, #0x24
    ov96_02213354(*((u8*)(r7 + 4)), *((u8*)(r7 + 5)), ((r1 << 0x18) >> 0x18), (0x7c * ((r1 << 0x18) >> 0x18)));
    // add r7, r4, r6
    _s32_div_f(*((u8*)(r7 + 0x00000734)), 3);
    // ldr r0, [sp, #8]
    // add r0, r0, r2
    *((u32*)(0x7c + 0x78)) = 1;
    _s32_div_f(*((u8*)(r7 + 0x00000734)), 3, *((u32*)(0x7c + 0x28)));
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r6 << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18), 6);
    *((u32*)(r0 + 0x78)) = 0;
    // strb r1, [r4, r0]
    // sub r0, #0xe
    // strb r1, [r7, r0]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    // add r0, #0x28
    // str r0, [sp, #0xc]
    // add r0, r1, r0
    // add r5, #0xc
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    ov96_02214B84((0x5d << 2), *((u32*)(r4 + 0x0000074C)));
    // ldr r0, [sp, #4]
    ov96_022124F8();
    // ldr r0, [sp, #4]
    ov96_02212B94();
    // ldr r0, [sp, #4]
    ov96_022127F4();
    // ldr r0, [sp, #4]
    ov96_022130EC();
    // ldr r0, [sp, #4]
    ov96_022132FC();
    // strb r1, [r4, r0]
    // ldr r1, [sp, #0x10]
    ov96_02211DE4(r4, 0);
}




void ov96_02211DE4(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, #0x5c
    // str r0, [sp, #0x10]
    _s32_div_f(0, 3);
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #0x10]
    // add r2, r0, r2
    // add r0, r2, r0
    // add r3, #0x5c
    // asr r1, r2, #0xb
    // add r3, r5, r4
    // mov ip, r3
    // add r1, r2, r1
    // asr r2, r1, #0xc
    // asr r0, r3, #0xb
    // add r0, r3, r0
    // asr r0, r0, #0xc
    // strb r0, [r5, r4]
    // mov r0, ip
    *((u8*)(((0x7c * r1) >> 0x14) + 0xc)) = *((u32*)((0x7c * r1) + 0x34));
    // lsl r2, r6
    // ldr r0, [sp, #0xc]
    // lsl r1, r6
    // add r0, r0, r2
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r4, r0, r1
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x14]
    ov96_02213EC4((r4 + 1), *((u32*)((r4 + 1) + 8)), (((*((u16*)(0x7c * r1)) - 1) << 0x18) >> 0x18), *((u32*)((0x7c * r1) + 0x30)));
    // add r2, r5, r6
    // ldr r1, [sp, #0x14]
    *((u8*)(r2 + 0x18)) = r1;
    *((u8*)(r2 + 0x1a)) = r0;
    // add r0, #0x39
    // add r4, #0x4c
    // lsl r1, r7
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // add r3, r1, r3
    // sub r1, #0x48
    // sub r4, r4, r6
    // ror r4, r1
    // ldr r1, [sp]
    // add r4, r6, r4
    // strb r4, [r1, r0]
    // ldr r4, [sp, #4]
    // ldr r4, [sp, #0xc]
    // add r4, r4, r6
    // add r2, r4, r2
    *((u32*)(r5 + 0x1c)) = (*((u8*)(*((u8*)r4) + 0x0000073C)) << 0x1c);
    // ldr r2, [sp]
    // sub r0, #0xd8
    // add r1, #0x1c
    // add r0, r2, r0
    // str r0, [r1]
    // ldr r0, [sp]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x1c)) = (2 << 0x1e);
    // ldr r0, [sp, #8]
    // add r2, r1, r0
    // ldr r0, [sp]
    *((u32*)(r5 + 0x20)) = *((u32*)r5);
    // add r1, r2, r0
    // add r0, r1, r0
    *((u32*)(r5 + 0x20)) = (((*((u32*)((*((u8*)(*((u8*)r4) + 0x0000073C)) << 2) + 0x0000073C)) << 0x18) >> 0x18) << 0x19);
}




void ov96_02211F38(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #8]
    ov96_021E5F24();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    PokeathlonCourse_GetDataCopyArea(((r0 << 0x18) >> 0x18));
    // add r0, #0xf0
    ov96_021E8A20();
    // ldr r0, [sp, #0x38]
    ov96_02214418();
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // add r0, #0x5c
    // str r0, [sp, #0x40]
    _s32_div_f(0, 3);
    // str r0, [sp, #0x18]
    _s32_div_f(r4, 3);
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x40]
    // add r0, r0, r3
    // add r5, r0, r2
    ov96_021EAA20(*((u32*)((0x5d << 2) + (0x7c * r1))), (0x7c * r1), (r2 * (0x5d << 2)));
    ov96_021E8BAC();
    // asr r1, r7
    // and r0, r1
    // str r0, [sp, #0x28]
    ov96_021EB52C(*((u32*)(r5 + 4)), 1, 1);
    ov96_021EB570(*((u32*)(r5 + 4)), 0xc);
    // ldr r0, [sp, #0x28]
    ov96_021EB52C(*((u32*)(r5 + 4)), 1, 1);
    ov96_021EB570(*((u32*)(r5 + 4)), 0x10);
    IsSEPlaying((0x89 << 4));
    PlaySE((0x89 << 4));
    ov96_021EB52C(1, 0);
    // add r0, r6, r4
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x30]
    // asr r1, r7
    // and r0, r1
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x68
    // str r1, [r0]
    *((u32*)(((3 << 0x18) >> 0x18) + 4)) = 0;
    *((u32*)(((3 << 0x18) >> 0x18) + 8)) = 0;
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x68]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x6c]
    _s32_div_f(r4, 3);
    // str r0, [sp, #0x44]
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x44]
    ov96_021E60C0(r1);
    // ldr r1, [sp, #0x6c]
    // sub r0, r1, r0
    // str r0, [sp, #0x6c]
    // ldr r1, [sp, #0x6c]
    // sub r0, r1, r0
    // str r0, [sp, #0x6c]
    // ldr r1, [sp, #0x6c]
    // sub r0, r1, r0
    // str r0, [sp, #0x6c]
    GF_AssertFail((1 << 0x10));
    // add r1, sp, #0x68
    ov96_021EB588(*((u32*)(r5 + 4)));
    // ldr r0, [sp, #0x28]
    // add r0, #0x63
    // add r0, sp, #0x5c
    // str r1, [r0]
    *((u32*)(*((u8*)r5) + 4)) = 0;
    *((u32*)(*((u8*)r5) + 8)) = 0;
    // ldr r1, [sp, #0x38]
    ov96_021EAA04(*((u32*)(0 + 0x00000748)), ((r4 << 0x18) >> 0x18));
    // add r1, #0x62
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x4c
    // str r1, [sp, #0x24]
    // add r1, sp, #0x48
    // str r1, [sp]
    // ldr r1, [sp, #0xc]
    ov96_021EB06C(*((u8*)*((u8*)r5)), *((u8*)(r2 + 0xc)));
    // ldr r0, [sp, #0x4c]
    // add r1, sp, #0x5c
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0x24]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    ov96_021EB588(*((u32*)((((r0 << 0xc) << 0xc) << 2) + 8)));
    // ldr r0, [sp, #0x14]
    ov96_021EB52C(*((u32*)(r0 + 8)), 1, 1);
    // ldr r0, [sp, #0x14]
    ov96_021EB564(*((u32*)(r0 + 8)), 0xe);
    // add r0, #0x62
    _s32_div_f((*((u8*)r5) + 1), 3);
    // add r0, #0x62
    // strb r1, [r0]
    // add r5, #0x63
    // strb r0, [r5]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    PlaySE(0x000008CC);
    // add r0, #0x63
    // add r5, #0x63
    // strb r0, [r5]
    // ldr r1, [sp, #0x38]
    ov96_021EAA04(*((u32*)(r1 + 0x00000748)), ((r4 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x28]
    ov96_021EAC5C(0x14);
    // ldr r1, [sp, #0x2c]
    ov96_021EAC0C((((r1 + 1) << 0x18) >> 0x18));
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x30]
    ov96_021EB01C(r5, 1);
    // ldr r2, [sp, #0x38]
    // ldr r0, [sp, #0x10]
    // add r2, #0x5c
    // add r0, r2, r1
    // ldr r1, [sp, #0x10]
    // add r3, #0xc
    // add r1, r1, r2
    // add r1, r3, r1
    ov96_022144C0(((0x5d << 2) * r0), (((0x5d << 2) * r0) << 1), r6);
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x10]
    ov96_0221457C(r6);
    // asr r0, r2, #0x1e
    // and r0, r1
    // str r0, [sp, #0x1c]
    // asr r0, r2, #0x1f
    // and r0, r1
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x38]
    // str r5, [sp, #0x20]
    // add r4, r0, r1
    // add r0, sp, #0x50
    // str r1, [r0]
    *((u32*)(((((r0 << 0x18) >> 0x18) << 0x18) >> 0x18) + 4)) = 0;
    *((u32*)(((((r0 << 0x18) >> 0x18) << 0x18) >> 0x18) + 8)) = 0;
    // asr r0, r0, #0x18
    // ldr r0, [sp, #0x20]
    // asr r1, r0
    // and r0, r1
    ov96_021EB52C(*((u32*)r4), 1, 0);
    ov96_021EB52C(*((u32*)(r4 + 4)), 1, 0);
    // ldr r0, [sp, #0x1c]
    // add r3, r6, r5
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    ov96_022123B0(*((u8*)(r3 + 0x1a)), ((r5 << 0x18) >> 0x18), 0, *((u8*)(r3 + 0x18)));
    // add r1, #0x3f
    // strb r0, [r1]
    // ldr r0, [sp, #0x3c]
    ov96_021EB52C(*((u32*)r4), 1, 1);
    ov96_021EB52C(1, 0);
    ov96_021EB52C(*((u32*)r4), 1, 1);
    ov96_021EB52C(*((u32*)(r4 + 4)), 1, 1);
    // add r0, #0x44
    PlaySE(0x000008C7);
    ov96_021EB52C(1, 0);
    // ldr r0, [sp, #0x1c]
    ov96_021EB570(*((u32*)r4), 0xb);
    ov96_021EB570(*((u32*)r4), 0xa);
    // add r0, #0x44
    // strb r7, [r0]
    // add r7, r6, r5
    // str r0, [sp, #0x50]
    ov96_02213F5C(*((u8*)(r7 + 0x1a)));
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x1c]
    ov96_02213FF4(((r5 << 0x18) >> 0x18), *((u8*)(r7 + 0x1a)));
    // add r1, sp, #0x50
    ov96_021EB588(*((u32*)r4));
    // add r1, sp, #0x50
    ov96_021EB588(*((u32*)(r4 + 4)));
    ov96_021EB630(*((u32*)r4), 0x2e);
    ov96_021EB630(4);
    // ldr r0, [sp, #0x20]
    // add r4, #0x4c
    // str r0, [sp, #0x20]
    // ldr r4, [sp, #0x38]
    // sub r6, #0x10
    ov96_021EB57C(*((u32*)(r4 + 0x000006E4)));
    ov96_021EB52C(*((u32*)(r4 + r7)), 1, 0);
    // ldr r0, [sp, #8]
    ov96_0221236C();
    // ldr r0, [sp, #0x38]
    ov96_02214904(*((u32*)(r0 + (0x75 << 4))), (0x75 << 4));
    // ldr r0, [sp, #0x38]
    ov96_0221497C(*((u32*)(r0 + (0x75 << 4))), ((r0 << 0x18) >> 0x18), r0);
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x38]
    // sub r2, #0x18
    ov96_0221490C(*((u32*)(r0 + (0x75 << 4))), *((u32*)(r1 + (0x75 << 4))), (0x75 << 4));
    // ldr r0, [sp, #0x38]
    ov96_02214490();
}




void ov96_0221236C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r5);
    // add r0, #0xf0
    ov96_021E8A20();
    // asr r2, r1, #0x1c
    // and r1, r2
    // asr r1, r0, #0x19
    // and r0, r1
    // add r3, r4, r2
    // strb r1, [r3, r0]
    // sub r0, #0xc4
    ov96_022148E8(*((u32*)(r4 + 0x00000814)), ((0x7f << 0x18) >> 0x18), ((3 << 0x18) >> 0x18));
}




void ov96_022123B0(void) {
    // add r0, sp, #0x10
    // str r2, [sp]
    // add r2, r4, r0
    // add r1, r2, r0
    // add r1, #0x3f
    // add r0, r2, r0
    // add r0, #0x3f
    // sub r3, #0xd8
    // strb r1, [r0]
    GF_AssertFail((*((u8*)(r0 + 0x10)) << 0x18), 1, *((u8*)(r0 + 0x10)));
    // add r1, r4, r6
    ov96_021EB564(*((u32*)(r1 + 0x000006C4)), 0xf);
    // sub r2, r2, r1
    // ror r2, r0
    // add r0, r1, r2
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov96_02214258(r4, (r7 >> 0x1f), 1, 1);
    ov96_02214258(r4, r5, 0, 0);
    ov96_02214258(r4, r5, 0, 0);
    _s32_div_f(r7, 5);
    _s32_div_f(r7, 5);
    // add r1, sp, #0x10
    PlaySE(0x000008C6, *((u8*)(r1 + 0x14)));
    // add r0, sp, #0x10
    // ldr r0, [sp, #4]
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02212480: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10), *((u8*)(r0 + 0x14)));
    // add r0, r4, r0
    // str r0, [sp, #8]
    ov96_021EB52C(*((u32*)(0x000006D4 + r6)), 1, 1);
    // ldr r0, [sp, #8]
    ov96_021EB564(*((u32*)(r0 + r6)), r7);
    // add r4, r4, r0
    ov96_021EB52C(*((u32*)(r4 + r6)), 1, 1);
    // add r5, #0x13
    ov96_021EB564(*((u32*)(r4 + r6)), r5);
    PlaySE(0x000008CB);
    PlaySE(0x000008C6);
}




void ov96_022124F8(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #8]
    // add r0, sp, #0x70
    // str r4, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x10
    // stmia r2!, {r0, r1}
    // add r7, sp, #0x7c
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x5c
    // str r0, [sp, #0xc]
    _s32_div_f(0, 3, ov96_0221D25C);
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #0xc]
    // add r3, sp, #0x70
    // add r2, r0, r2
    // add r5, r2, r0
    // ldmia r3!, {r0, r1}
    // add r2, #0x3c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x30
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x30
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x4c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    *((u32*)(r5 + 0x48)) = 0;
    // add r1, #0x5a
    // strh r0, [r1]
    // add r2, sp, #0x4c
    // add r1, #0x4c
    VEC_MultAdd((r5 << 0xc), r5, r7, r7);
    // add r6, sp, #0x4c
    // add r3, #0x30
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldmia r2!, {r0, r1}
    // add r3, #0x24
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0x58
    // strh r1, [r0]
    ov96_02213FB4(r5, (0x58 - 1), r5, r5);
    // add r0, #0x60
    // add r0, #0x60
    // add r0, #0x60
    // strb r1, [r0]
    // add r0, #0x60
    *((u32*)(r5 + 0x78)) = 0;
    // add r0, #0x70
    // add r5, #0x71
    // strb r0, [r5]
    // add r0, #0x24
    // add r1, sp, #0x4c
    // add r2, sp, #0x64
    VEC_Subtract(r5, (*((u8*)r5) - 1));
    // add r0, sp, #0x64
    VEC_Mag();
    ov96_02213558(r5);
    // add r0, sp, #0x64
    // add r1, sp, #0x58
    VEC_Normalize();
    // add r3, sp, #0x58
    // ldmia r3!, {r0, r1}
    // add r2, #0x3c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x24
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x4c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, sp, #0x40
    // str r2, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r1, sp, #0x58
    // add r2, sp, #0x40
    // add r3, sp, #0x64
    VEC_MultAdd(*((u32*)r5), 0, r5);
    // add r1, sp, #0x4c
    // add r0, sp, #0x64
    VEC_Add(r1);
    // add r6, sp, #0x10
    // ldmia r6!, {r0, r1}
    // add r3, sp, #0x34
    // stmia r3!, {r0, r1}
    // add r1, sp, #0x28
    // str r0, [r3]
    // ldr r0, [sp, #0x5c]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    CalcAngleBetweenVecs(r3, r3);
    // add r1, #0x5c
    // strh r0, [r1]
    // add r1, #0x5c
    // strh r0, [r1]
    // add r1, #0x5c
    // strh r0, [r1]
    // add r1, #0x5c
    // strh r0, [r1]
    // add r2, sp, #0x4c
    // ldmia r2!, {r0, r1}
    // add r5, #0x30
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r7, #0xc
    // ldr r0, [sp, #8]
    // add r5, sp, #0x7c
    // add r0, #0x5c
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    _s32_div_f(0, 3);
    _s32_div_f(r6, 3);
    // ldr r0, [sp, #8]
    // add r2, r0, r2
    // add r4, r2, r0
    // add r0, sp, #0x1c
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, #0x30
    ov96_02213728(r4, *((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x20)), 1);
    // add r7, sp, #0x1c
    // add r3, #0x30
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldmia r2!, {r0, r1}
    // add r3, #0x24
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    *((u32*)(r4 + 0x78)) = 0;
    // ldr r0, [sp, #4]
    // add r0, #0xc
    // add r5, #0xc
    // str r0, [sp, #4]
}




void ov96_022127F4(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r5, r0, r1
    // add r0, #0x38
    // add r0, #0x39
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x28]
    // add r0, #8
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // add r0, #0x5c
    // str r0, [sp, #0x24]
    // add r0, sp, #0x54
    // str r1, [r0]
    *((u32*)(r5 + 4)) = 0;
    *((u32*)(r5 + 8)) = 0;
    _s32_div_f(0, 3);
    // str r1, [sp, #0x34]
    _s32_div_f(r6, 3);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x34]
    // add r1, r0, r1
    // add r2, sp, #0x58
    // str r2, [sp]
    // add r2, sp, #0x38
    // add r4, r1, r0
    // str r2, [sp, #4]
    // add r3, sp, #0x54
    ov96_021EAF78(*((u32*)(((0x5d << 2) * r0) + (0x7c * r2))), *((u32*)(r4 + 0x30)), *((u32*)(r4 + 0x34)));
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0xc]
    // add r0, sp, #0x54
    ov96_0221341C((r1 << 0xc));
    // add r0, r5, r6
    // add r0, #0x2c
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x54
    // add r2, sp, #0x48
    VEC_Subtract(*((u32*)(r4 + 0x48)));
    // add r0, sp, #0x48
    VEC_Normalize(r0);
    // add r0, #0x39
    // add r0, #0x3b
    // add r0, #0x71
    // add r0, #0x45
    // sub r1, r1, r0
    // add r1, #0x71
    // strb r0, [r1]
    *((u32*)(r4 + 0x78)) = 2;
    // add r3, #0x4c
    // add r1, #0x60
    // strb r0, [r1]
    *((u32*)(r4 + 0x48)) = 3;
    // add r1, #0x5a
    // strh r0, [r1]
    // add r0, sp, #0x48
    // str r0, [sp, #0x2c]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r2, [sp, #0x2c]
    // str r0, [r3]
    // ldr r2, [sp, #0x34]
    // mvn r0, r0
    // str r0, [r7]
    // mvn r0, r0
    *((u32*)(r4 + 0x50)) = (0 * *((u32*)(r4 + 0x50)));
    // ldr r1, [sp, #0x10]
    // add r4, #0x58
    // strh r0, [r4]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    ov96_021E8228(1, ((*((u32*)(r4 + 0x50)) << 0x18) >> 0x18), ((0x1e << 0x18) >> 0x18), 1);
    // add r0, #0x71
    // strb r1, [r0]
    *((u32*)(r4 + 0x48)) = 3;
    // add r3, #0x4c
    // add r1, #0x5a
    // strh r0, [r1]
    // add r1, #0x58
    // add r7, sp, #0x48
    // strh r0, [r1]
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // mvn r0, r0
    // str r0, [r2]
    // mvn r0, r0
    *((u32*)(r4 + 0x50)) = (0 * *((u32*)(r4 + 0x50)));
    // add r0, #0x3c
    VEC_Mag(r4, *((u32*)(r4 + 0x50)), r4, r4);
    // add r0, #0x6c
    _s32_div_f((*((u16*)r4) << 0x10), (0x5a << 2));
    // add r0, #0x3c
    // add r1, sp, #0x48
    ov96_02213534(r4, ((r0 << 0x10) >> 0x10));
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x3e
    // strb r0, [r1]
    // add r0, #0x73
    // add r0, #0x41
    // strb r1, [r0]
    // add r0, #0x72
    // add r0, #0x45
    // strb r1, [r0]
    // add r0, #0x75
    // add r0, #0x46
    // strh r1, [r0]
    // add r0, #0x41
    // add r2, #0x4c
    // str r0, [sp, #0x14]
    *((u32*)(r4 + 0x48)) = 1;
    // add r0, sp, #0x48
    // mov ip, r0
    // mov r3, ip
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r2, [sp, #0x34]
    // mvn r0, r0
    // str r0, [r7]
    // mvn r0, r0
    *((u32*)(r4 + 0x50)) = (0 * *((u32*)(r4 + 0x50)));
    // add r1, #0x58
    // strh r0, [r1]
    *((u32*)(r4 + 0x78)) = 0;
    // add r1, #0x3c
    // strb r0, [r1]
    // add r1, #0x3d
    // strb r0, [r1]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    ov96_021E8228(1, ((r5 << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 4);
    // add r1, #0x3e
    // strb r0, [r1]
    // add r4, #0x73
    // add r0, #0x41
    // strb r1, [r0]
    // add r0, #0x41
    // add r1, #0x3c
    // str r0, [sp, #0x14]
    // strb r0, [r1]
    // add r1, #0x3d
    // strb r0, [r1]
    // ldr r0, [sp, #0x14]
    // add r1, #0x40
    // strb r0, [r1]
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x48
    ov96_022134D4(0x1e, r5, (*((u8*)r5) * 0x1e));
    // add r0, #0x3b
    // strb r6, [r0]
    // add r1, r5, r6
    // add r1, #0x2c
    // strb r0, [r1]
    // add r1, r5, r6
    // add r1, #0x2c
    // strb r0, [r1]
    // add r7, #8
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // ldr r3, [sp, #0xc]
    // add r6, r0, r2
    // asr r0, r4, #1
    // add r0, r4, r0
    // asr r1, r0, #2
    // str r0, [sp, #0x30]
    // add r0, r6, r0
    ov96_0221341C((0xc * (0 << 0x1e)), (2 << 0xe), r5);
    // ldr r0, [sp, #0x30]
    // add r0, r6, r0
    // add r1, #8
    // add r2, sp, #0x3c
    VEC_Subtract(r5);
    // add r0, sp, #0x3c
    VEC_Normalize(r0);
    // add r0, #0x14
    // add r1, sp, #0x3c
    VEC_DotProduct(r5);
    // add r2, #0x14
    // neg r0, r0
    // add r1, sp, #0x3c
    VEC_MultAdd((r0 << 1), r5, r5);
    // add r0, #0x14
    // add r1, #0x20
    VEC_Normalize(r5, r5);
    // ldr r0, [sp, #0x20]
    // add r5, #0x4c
    // str r0, [sp, #0x20]
}




void ov96_02212B94(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r0, #0x88
    // strb r2, [r5, r0]
    // strb r0, [r5, r1]
    // add r4, r5, r0
    // add r0, #0x38
    // add r0, #0x39
    // add r0, #0x43
    // add r0, #0x43
    // strb r1, [r0]
    // add r0, #0x43
    // add r1, #0x43
    // strb r0, [r1]
    // add r1, #0x39
    // strb r0, [r1]
    // add r0, #0x3a
    // add r0, #0x3a
    // strb r1, [r0]
    // add r0, #0x3a
    ov96_02213444(r4, (*((u8*)r4) - 1), 3);
    ov96_02213E60(r5, r4);
    // add r0, r6, r0
    LCRandom((*((u8*)(r5 + 0x00000743)) << 0x18), (0x4b << 2));
    _s32_div_f(0x64);
    // add r1, #0x38
    // strb r0, [r1]
    // strb r1, [r5, r0]
    // add r1, #0x38
    // strb r0, [r1]
    // strb r1, [r5, r0]
    // add r1, #0x38
    // strb r0, [r1]
    // add r0, #0x40
    // add r3, #8
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0x14));
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x18));
    // add r0, #0x46
    // add r0, #0x3e
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x45
    // strb r0, [r1]
    // add r0, sp, #0x10
    // str r1, [r0]
    *((u32*)(0 + 4)) = 0;
    *((u32*)(0 + 8)) = 0;
    // add r1, #0x3e
    // add r0, #0x3c
    // add r1, #0x41
    // add r1, r1, r2
    // add r1, #0x41
    // add r1, r1, r2
    GF_AssertFail(*((u8*)r4), *((u8*)(*((u8*)r4) + ov96_0221D5AA)), (0x1e * *((u8*)r4)), r4);
    // add r0, #0x40
    // strb r1, [r0]
    // add r2, #0x20
    ov96_022134D4(r5, r4, r4);
    // add r0, #0x3c
    // add r0, #0x3c
    // strb r1, [r0]
    // add r0, #0x3c
    // add r0, #0x3d
    *((u32*)(r4 + 0x14)) = 0;
    // add r3, sp, #0x10
    *((u32*)(r4 + 0x18)) = 0;
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x3e
    // strb r0, [r1]
    // add r1, #0x40
    // strb r0, [r1]
    // add r0, #0x40
    // add r3, sp, #0x10
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, #0x3c
    // strb r0, [r1]
    // add r1, #0x3d
    // strb r0, [r1]
    // add r1, #0x3e
    // strb r0, [r1]
    *((u32*)(r4 + 0x48)) = 0;
    // add r0, sp, #4
    // str r0, [sp]
    // add r0, #8
    // add r1, sp, #0x1c
    ov96_02213728(r4, r4, 8, 0);
    // add r6, sp, #4
    // ldmia r6!, {r0, r1}
    // add r2, #8
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r4 + 0x48)) = 1;
    // add r0, r3, r3
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02212E20: ; jump table
    // mvn r0, r0
    *((u32*)(r4 + 0x24)) = (0 * *((u32*)(r4 + 0x24)));
    // mvn r0, r0
    *((u32*)(r4 + 0x18)) = (0 * *((u32*)(r4 + 0x18)));
    // mvn r0, r0
    *((u32*)(r4 + 0x20)) = (0 * *((u32*)(r4 + 0x20)));
    // mvn r0, r0
    *((u32*)(r4 + 0x14)) = (0 * *((u32*)(r4 + 0x14)));
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x45
    // strb r0, [r1]
    // add r1, #0x46
    // strh r0, [r1]
    // add r1, #0x3e
    // strb r0, [r1]
    // add r4, #0x4c
    // add r0, #0x4c
    // sub r6, #0x38
    // add r0, r5, r6
    // add r0, #0x39
    // add r4, #0x14
    // add r0, r5, r4
    // add r0, #0x39
    // add r0, r5, r6
    // add r0, #0x38
    GF_AssertFail(*((u8*)*((u8*)*((u8*)*((u8*)(r5 + 0x00000664))))), 0xc, r4, r0);
    // add r0, r5, r6
    // add r2, r5, r4
    // add r0, #8
    // add r2, #8
    ov96_0221341C((r1 << 0xc), (2 << 0xe));
    // add r0, r5, r6
    // add r1, r5, r4
    ov96_02212F0C();
}




void ov96_02212F0C(void) {
    // add r5, #0x14
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x14
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r5, #0x20
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x20
    // stmia r3!, {r0, r1}
    // add r1, sp, #0x20
    // str r0, [r3]
    // add r0, #0x39
    // add r5, #8
    // add r0, #0x3b
    // add r3, sp, #8
    // add r0, #0x3c
    // add r0, #0x3d
    // add r0, #0x3e
    // add r0, #0x40
    // add r1, sp, #0x40
    // strb r0, [r1]
    // add r0, #0x41
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, sp, #0
}




void ov96_02212F94(void) {
    // str r2, [sp]
    // add r1, sp, #0x1c
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r1, #0x40
    // add r1, #0x40
    // add r0, #0x39
    // add r0, #0x39
    // strb r1, [r0]
    // add r0, #0x3c
    // add r0, #0x3c
    // strb r1, [r0]
    // add r0, #0x3d
    // add r0, #0x3d
    // strb r1, [r0]
    // add r0, #0x3e
    // add r0, #0x3e
    // strb r1, [r0]
    // add r0, #0x40
    // add r0, #0x40
    // strb r1, [r0]
    // add r0, #0x41
    // add r0, #0x41
    // strb r1, [r0]
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x3c
    // strb r0, [r1]
    // add r1, #0x3d
    // strb r2, [r1]
    // add r1, #0x3e
    // strb r2, [r1]
    // add r1, #0x40
    // strb r2, [r1]
    // add r1, #0x41
    // strb r0, [r1]
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x3c
    // strb r0, [r1]
    // add r1, #0x3d
    // strb r2, [r1]
    // add r1, #0x3e
    // strb r2, [r1]
    // add r1, #0x40
    // strb r2, [r1]
    // add r1, #0x41
    // strb r0, [r1]
    // add r0, #8
    // add r1, #8
    // add r2, #0x20
    VEC_Subtract(r0, r1, r0);
    // add r0, #0x20
    VEC_Mag(r5);
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r7, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r7!, {r0, r1}
    // str r0, [r7]
    // ldr r0, [sp]
    // ldmia r6!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r2!, {r0, r1}
    // add r3, #0x20
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0x20
    VEC_Normalize(r5, r5, r5, r5);
    // add r0, #0x40
    // add r1, #0x20
    // add r2, sp, #0x1c
    // add r3, #0x14
    VEC_MultAdd((*((u8*)r5) << 0xc), r5, r5);
    // add r4, #0x3b
    // add r5, #0x3b
    // strb r0, [r5]
}




void ov96_022130EC(void) {
    // str r0, [sp, #4]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // add r5, r0, r1
    // add r0, #0x5c
    // str r0, [sp, #0x14]
    // add r0, #0x38
    // add r0, #0x39
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x18]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x1c]
    ov96_022143DC(r5, *((u32*)(r5 + 0xc)));
    // str r0, [sp, #8]
    // add r1, r1, r2
    // add r0, r0, r2
    // add r1, #8
    // add r2, sp, #0x18
    sub_02020E80(ov96_0221D474, ov96_0221D474, (r0 << 4));
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x3a
    // strb r0, [r1]
    // add r0, #0x3b
    _s32_div_f(*((u8*)r5), 3);
    _s32_div_f(r4, 3);
    // ldr r0, [sp, #0x14]
    // add r4, r0, r2
    // ldr r0, [sp, #8]
    // add r0, r4, r6
    // add r0, #0x5e
    // add r0, r4, r6
    // add r0, #0x5e
    // add r0, r4, r6
    // add r0, #0x5e
    // strh r1, [r0]
    // add r0, #0x3b
    _s32_div_f(*((u8*)r5), 3, (r7 * (0x5d << 2)));
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // str r2, [r0, r1]
    // add r0, #0x3b
    _s32_div_f(*((u8*)r5), 3, (*((u32*)(r0 + 0x000006F4)) - 1));
    _s32_div_f(r6, 3);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r4 << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18), 8);
    // add r0, #0x3b
    _s32_div_f(*((u8*)r5), 3);
    _s32_div_f(r6, 3);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r4 << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18), 1);
    // add r0, #0x38
    GF_AssertFail(*((u8*)r5));
    // add r0, r4, r6
    // add r0, #0x5e
    // add r0, r0, r7
    // add r0, r4, r6
    // add r0, #0x5e
    // add r1, r0, r7
    // add r0, r4, r6
    // add r0, #0x5e
    // strh r1, [r0]
    // add r0, #0x3b
    _s32_div_f(*((u8*)r5), 3);
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // add r1, r7, r1
    // add r2, r1, r7
    // str r2, [r0, r1]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // str r2, [r0, r1]
    // add r0, #0x3b
    _s32_div_f(*((u8*)r5), 3, (*((u32*)(r0 + 0x000006F4)) - 1));
    _s32_div_f(r6, 3);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    ov96_021E8228(1, ((r4 << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18), 3);
    // ldr r0, [sp, #0x10]
    // add r5, #0x4c
    // str r0, [sp, #0x10]
}




void ov96_022132FC(void) {
    // add r6, #0x5c
    // add r2, r6, r0
    // add r0, r2, r0
    // add r1, #0x71
}




void ov96_02213354(void) {
}




void ov96_02213364(void) {
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r7, #0x5c
    // add r7, r7, r1
    // add r1, r7, r0
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // add r0, sp, #0x18
    // str r0, [sp, #4]
    // asr r2, r0, #0xb
    // add r2, r0, r2
    // asr r0, r2, #0xc
    // asr r2, r1, #0xb
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, sp, #0x20
    // ldr r2, [sp, #0x18]
    // str r2, [r0, r1]
    // add r0, sp, #0x1c
    // strb r1, [r0, r4]
    // str r1, [r0, r2]
    // add r0, sp, #0x1c
    // strb r1, [r0, r4]
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
}




void ov96_0221341C(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r1, r5, r4
}




void ov96_02213444(void) {
    // add r2, sp, #0
    // str r3, [r2]
    // ldmia r6!, {r0, r1}
    // add r5, #0x14
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // ldmia r2!, {r0, r1}
    // add r5, #0x20
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r0, #0x38
    // strb r3, [r0]
    // add r0, #0x39
    // strb r1, [r0]
    // add r0, #0x3a
    // strb r3, [r0]
    // add r0, #0x3b
    // strb r1, [r0]
    // add r0, #0x3c
    // strb r3, [r0]
    // add r0, #0x3d
    // strb r3, [r0]
    // add r0, #0x3e
    // strb r3, [r0]
    // add r0, #0x40
    // strb r3, [r0]
    // add r0, #0x41
    // strb r3, [r0]
    // add r0, #0x43
    // strb r3, [r0]
    // add r0, #0x45
    // strb r3, [r0]
    // add r0, #0x46
    // strh r3, [r0]
    // add r0, r4, r3
    // add r0, #0x2c
    // strb r1, [r0]
}




void ov96_022134D4(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r1, #0x20
    // add r5, #0x20
    // add r2, #0x14
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r4, #0x40
    // str r0, [r2]
    // add r2, sp, #0
}




void ov96_02213514(void) {
}




void ov96_02213534(void) {
    ov96_02213514();
    // asr r1, r4, #4
    // ldrsh r1, [r1, r2]
}




void ov96_02213558(void) {
    // add r1, #0x61
    // add r1, #0x61
    // strb r2, [r1]
    // add r1, #0x61
    // add r1, #0x61
    // strb r2, [r1]
    // add r1, #0x71
    // add r1, #0x71
    // strb r2, [r1]
    // add r1, #0x70
    // add r1, #0x71
    // add r0, #0x71
    // strb r2, [r0]
}




void ov96_0221359C(void) {
    // ldr r5, [sp, #0x10]
    // add r0, #0x6c
    // strh r1, [r0]
    // add r0, r6, r0
    // add r0, #0x6e
    // strh r1, [r0]
    // add r0, r6, r0
    // add r0, #0x70
    // strb r1, [r0]
    // add r0, r6, r0
    // add r0, #0x71
    // strb r1, [r0]
    // add r0, r6, r0
    // add r0, r6, r0
    // add r0, r6, r0
    // add r0, #0x72
    // strb r1, [r0]
    // add r0, #0x73
    // strb r1, [r0]
    // add r0, #0x75
    // add r5, #0x74
    // strb r1, [r0]
    // strb r0, [r5]
}




void ov96_0221362C(void) {
    // add r1, #8
    AddWindow(*((u32*)(r0 + 4)), r0, ov96_0221D1F8);
    // add r5, #0x18
    AddWindow(*((u32*)(r7 + 4)), r7, ov96_0221D360);
    // add r4, #8
    // add r5, #0x10
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r7 + 4)), 3, 0, 1);
    // str r1, [sp]
    BG_FillCharDataRange(*((u32*)(r7 + 4)), 0, 0, 1);
    LoadFontPal0(0, (0x1e << 4), *((u32*)(r7 + 0x58)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xd4
    GfGfxLoader_GXLoadPal(0xec, 0x13, 0, 0xec);
}




void ov96_022136A4(void) {
    // add r0, #8
    FillWindowPixelBuffer(0);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r5 + 0x58)));
    MessageFormat_New(*((u32*)(r5 + 0x58)));
    // str r1, [sp]
    // str r2, [sp, #4]
    BufferIntegerAsString(0, r7, 3);
    ReadMsgData_ExpandPlaceholders(r6, r4, 0xa5, *((u32*)(r5 + 0x58)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #8
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r0, 0);
    String_Delete(r7);
    MessageFormat_Delete(r6);
    DestroyMsgData(r4);
    // add r5, #8
    CopyWindowToVram(r5);
}




void ov96_02213728(void) {
    // str r2, [sp, #4]
    // add r0, sp, #0xac
    // str r2, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0xa0
    // str r2, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x7c
    // str r2, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // add r0, sp, #0x70
    // str r3, [sp, #8]
    // str r2, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // add r6, sp, #0x64
    // stmia r6!, {r0, r1}
    // str r0, [r6]
    // ldmia r3!, {r0, r1}
    // add r6, sp, #0x58
    // stmia r6!, {r0, r1}
    // str r0, [r6]
    // ldmia r3!, {r0, r1}
    // add r6, sp, #0x4c
    // stmia r6!, {r0, r1}
    // str r0, [r6]
    // ldmia r3!, {r0, r1}
    // add r6, sp, #0x40
    // stmia r6!, {r0, r1}
    // ldr r4, [sp, #0xd0]
    // str r0, [r6]
    // str r2, [r4]
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 8)) = 0;
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [sp, #0x28]
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [sp, #0x2c]
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [sp, #0x20]
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // str r6, [sp, #0x14]
    // str r6, [sp, #0x10]
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02213802: ; jump table
    // str r0, [sp, #0x80]
    // str r0, [sp, #0x70]
    // asr r0, r1, #1
    // str r1, [sp, #0x7c]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x64
    // add r1, sp, #0x88
    VEC_Normalize((6 << 0x10), 0xFFFE0000, 3, ov96_0221D22C);
    // str r0, [sp, #0x7c]
    // add r1, sp, #0x88
    // str r0, [sp, #0x80]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x58
    VEC_Normalize((7 << 0x10));
    // str r0, [sp, #0x80]
    // str r1, [sp, #0x7c]
    // str r0, [sp, #0x70]
    // str r1, [sp, #0x74]
    // add r0, sp, #0x4c
    // add r1, sp, #0x88
    VEC_Normalize(0xFFFE0000, (6 << 0x10));
    // str r0, [sp, #0x7c]
    // str r0, [sp, #0x80]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x40
    // add r1, sp, #0x88
    VEC_Normalize((0xe << 0x10));
    GF_AssertFail();
    // ldr r0, [sp, #4]
    // add r2, sp, #0x7c
    // str r0, [sp, #0xc]
    // add r1, sp, #0x88
    VEC_MultAdd((r0 << 0xc), r2);
    // add r2, sp, #0x70
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x88
    VEC_MultAdd(r2);
    // ldr r1, [sp, #0x7c]
    // add r2, sp, #0x28
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // ldr r1, [sp, #0x80]
    // str r0, [sp, #0x38]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // ldr r1, [sp, #0x70]
    // str r0, [sp, #0x3c]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // ldr r1, [sp, #0x74]
    // str r0, [sp, #0x30]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x34]
    // add r0, sp, #0x18
    // str r0, [sp]
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r3, sp, #0x20
    sub_02020F4C(((((r0 >> 0x14) >> 0x14) >> 0x14) >> 0x14));
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r2, sp, #0x18
    sub_02020E80();
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [r4]
    // ldr r0, [sp, #0x1c]
    *((u32*)(r4 + 4)) = ((1 << 0xc) << 0xc);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #4]
    // add r1, #0x10
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0xac]
    // str r0, [sp, #0xa0]
    // str r2, [sp, #0xb0]
    // str r2, [sp, #0xa4]
    // add r0, sp, #0x94
    // str r0, [sp]
    // add r0, sp, #0xac
    // add r1, sp, #0xa0
    ov96_02213D2C((0xf7 << 0xc), 0x10, r5, r7);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x98]
    // ldr r0, [sp, #8]
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r2, sp, #0x28
    // add r3, sp, #0x94
    ov96_02213D00(r6, *((u32*)(r4 + 4)));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r2, sp, #0x94
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #4]
    // add r1, #8
    // str r1, [sp, #4]
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0xb0]
    // str r0, [sp, #0xa4]
    // str r1, [sp, #0xac]
    // str r1, [sp, #0xa0]
    // add r0, sp, #0x94
    // str r0, [sp]
    // add r0, sp, #0xac
    // add r1, sp, #0xa0
    ov96_02213D2C((1 << 0x10), ((2 << 0x12) << 0xc), r5, r7);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x94]
    // ldr r0, [sp, #8]
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r2, sp, #0x28
    // add r3, sp, #0x94
    ov96_02213D00(r6, *((u32*)r4));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r2, sp, #0x94
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #4]
    // sub r1, r2, r1
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0xb0]
    // str r0, [sp, #0xa4]
    // str r1, [sp, #0xac]
    // str r1, [sp, #0xa0]
    // add r0, sp, #0x94
    // str r0, [sp]
    // add r0, sp, #0xac
    // add r1, sp, #0xa0
    ov96_02213D2C((0xb7 << 0xc), (r1 << 0xc), r5, r7);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x94]
    // ldr r0, [sp, #8]
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r2, sp, #0x28
    // add r3, sp, #0x94
    ov96_02213D00(r6, *((u32*)r4));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r2, sp, #0x94
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #4]
    // sub r1, r2, r1
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0xac]
    // str r0, [sp, #0xa0]
    // str r1, [sp, #0xb0]
    // str r1, [sp, #0xa4]
    // add r0, sp, #0x94
    // str r0, [sp]
    // add r0, sp, #0xac
    // add r1, sp, #0xa0
    ov96_02213D2C((2 << 0xe), (r1 << 0xc), r5, r7);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x98]
    // ldr r0, [sp, #8]
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r2, sp, #0x28
    // add r3, sp, #0x94
    ov96_02213D00(r6, *((u32*)(r4 + 4)));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r2, sp, #0x94
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #4]
    // add r1, #8
    // str r1, [sp, #4]
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0xb0]
    // str r0, [sp, #0xa4]
    // str r1, [sp, #0xac]
    // str r1, [sp, #0xa0]
    // add r0, sp, #0x94
    // str r0, [sp]
    // add r0, sp, #0xac
    // add r1, sp, #0xa0
    ov96_02213D2C((1 << 0x10), ((2 << 0x12) << 0xc), r5, r7);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x94]
    // ldr r0, [sp, #8]
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r2, sp, #0x28
    // add r3, sp, #0x94
    ov96_02213D00(r6, *((u32*)r4));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r2, sp, #0x94
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r1, [sp, #4]
    // sub r1, r2, r1
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0xb0]
    // str r0, [sp, #0xa4]
    // str r1, [sp, #0xac]
    // str r1, [sp, #0xa0]
    // add r0, sp, #0x94
    // str r0, [sp]
    // add r0, sp, #0xac
    // add r1, sp, #0xa0
    ov96_02213D2C((0xb7 << 0xc), (r1 << 0xc), r5, r7);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x94]
    // ldr r0, [sp, #8]
    // add r0, sp, #0x38
    // add r1, sp, #0x30
    // add r2, sp, #0x28
    // add r3, sp, #0x94
    ov96_02213D00(r6, *((u32*)r4));
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // add r2, sp, #0x94
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void ov96_02213D00(void) {
    // asr r4, r5, #0xb
    // add r4, r5, r4
    // asr r4, r4, #0xc
    // str r4, [sp, #0xc]
    // asr r3, r4, #0xb
    // add r3, r4, r3
    // asr r3, r3, #0xc
    // str r3, [sp, #0x10]
    // add r3, sp, #4
    // str r3, [sp]
    // add r3, sp, #0xc
}




void ov96_02213D2C(void) {
    // add r1, sp, #0x2c
    // str r0, [r1]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x18]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x1c]
    // add r2, sp, #8
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x10]
    // add r3, sp, #0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0x14]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #8]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #0xc]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // add r1, sp, #0x10
    // add r2, sp, #0x20
    // add r0, sp, #0x20
    // sub r0, r1, r0
    // bpl _02213DDE
    // mvn r2, r2
    // sub r3, r1, r2
    // bpl _02213DEA
    // mvn r2, r2
    // str r1, [sp, #0x30]
    // add r1, r0, r3
    // str r2, [sp, #0x2c]
    // ldr r3, [sp, #0x50]
    // add r1, sp, #0x20
    // add r2, sp, #0x2c
    // sub r0, r1, r0
    // bpl _02213E24
    // mvn r2, r2
    // sub r3, r1, r2
    // bpl _02213E30
    // mvn r2, r2
    // str r1, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // add r1, r0, r3
    // ldr r3, [sp, #0x50]
    // add r1, sp, #0x20
    // add r2, sp, #0x2c
}




void ov96_02213E60(void) {
    // add r2, sp, #0
    // add r1, #0x4c
    // strb r3, [r2, r5]
    LCRandom(0x0000066E, (0 + 1));
    _s32_div_f(r4);
    // add r0, sp, #0
    // ldrsh r1, [r1, r2]
    *((u32*)(r7 + 8)) = (ov96_0221D438 << 0xc);
    // ldrsh r1, [r1, r2]
    *((u32*)(r7 + 0xc)) = (ov96_0221D43A << 0xc);
    // add r7, #0x42
    // strb r0, [r7]
}




void ov96_02213EC4(void) {
    // add r1, #0x39
    // add r5, #0x43
    // add r0, #0xc0
    // add r5, #0x43
    // add r0, #0xc8
    // add r5, #0x43
    // add r0, #0xd0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // add r1, #0x3b
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // add r5, #0x3b
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
}




void ov96_02213F5C(void) {
    // sub r4, #0xc0
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, #0x58
    // add r0, #0x68
    // add r0, #0x78
    GF_AssertFail((r0 << 0xc), ((0x1d << 0x18) >> 0x18), (r0 >> 0x1f));
}




void ov96_02213FB4(void) {
    // add r1, #0x5c
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02213FCA: ; jump table
    // add r0, #0x5c
    // strh r1, [r0]
    // add r0, #0x5c
    // strh r1, [r0]
    // add r0, #0x5c
    // strh r1, [r0]
    // add r0, #0x5c
    // strh r1, [r0]
}




void ov96_02213FF4(void) {
    // add r1, r0, r1
    // strb r2, [r1, r0]
    // add r3, r0, r3
    // strb r0, [r3, r1]
    PlaySE(0x000008CA, 0, 0x000007B4);
    PlaySE(0x000008C9);
    // add r1, r0, r1
    // strb r2, [r1, r0]
}




void ov96_02214044(void) {
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r4, #0x18
    // add r0, r4, r7
    FillWindowPixelBuffer(0);
    GF_AssertFail((0x1f << 6), *((u32*)(r5 + (0x1f << 6))));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r7
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 4, *((u32*)(r5 + 0x000007B8)), 0);
    // ldr r0, [sp, #0x10]
    // add r1, r5, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r0, r4, r7
    // add r5, r5, r2
    AddTextPrinterParameterizedWithColor(0xff, 4, *((u32*)(r5 + 0x000007C4)), 0);
    // add r0, r4, r7
    CopyWindowToVram();
}




void ov96_022140F4(void) {
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4();
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)(r0 + 0x58)));
    // str r0, [sp, #0xc]
    MessageFormat_New(*((u32*)(r5 + 0x58)));
    // ldr r0, [sp, #0xc]
    NewString_ReadMsgData(0x00000133);
    // str r0, [r5, r1]
    // ldr r0, [sp, #0xc]
    NewString_ReadMsgData((0x4d << 2));
    // str r0, [r5, r1]
    // ldr r0, [sp, #0xc]
    NewString_ReadMsgData(0x00000135);
    // str r0, [r5, r1]
    // ldr r0, [sp, #8]
    PokeathlonCourse_GetPlayerProfileFromData(0);
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r5 + 0x58)));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferString(r7, 0, r0, 2);
    // ldr r1, [sp, #0xc]
    ReadMsgData_ExpandPlaceholders(r7, 0x00000132, *((u32*)(r5 + 0x58)));
    // add r2, r5, r1
    // str r0, [r2, r1]
    String_Delete(r6, 0x000007C4);
    MessageFormat_Delete(r7);
    // ldr r0, [sp, #0xc]
    DestroyMsgData();
}




void ov96_022141B0(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    String_Delete(*((u32*)(r0 + 0x000007B8)));
    String_Delete(*((u32*)(r5 + 0x000007BC)));
    String_Delete(*((u32*)(r5 + (0x1f << 6))));
    // add r0, r5, r0
    String_Delete(*((u32*)((0 << 2) + 0x000007C4)));
}




void ov96_022141F8(void) {
    // add r7, r6, r0
    // add r5, r7, r1
    // strb r0, [r7, r1]
    *((u8*)(r5 + 1)) = 0;
    *((u8*)(r5 + 2)) = 0;
    *((u8*)(r5 + 3)) = (0 - 1);
    *((u32*)(r5 + 8)) = r0;
    SysTask_CreateOnMainQueue(ov96_02214278, r5, 1);
    *((u32*)(r5 + 4)) = r0;
}




void ov96_02214234(void) {
    // add r0, r5, r0
    SysTask_Destroy(*((u32*)((0 << 4) + 0x000007D8)));
}




void ov96_02214258(void) {
    // add r4, r0, r1
    // strb r5, [r4, r1]
    // add r0, #0xe
    // strb r2, [r4, r0]
    // add r1, #0xf
    // strb r3, [r4, r1]
}




void ov96_02214278(void) {
    ov96_02214044(*((u32*)(r1 + 8)), *((u8*)(r1 + 1)), 1);
    ov96_02214044(*((u8*)(r4 + 1)), 2);
    ov96_02214044(*((u32*)(r4 + 8)), *((u8*)(r4 + 1)), 3);
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 0xd)) = 0;
    *((u8*)(r4 + 0xc)) = 0;
    // strb r0, [r4]
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(*((u32*)(r4 + 8)) + 4)), 1, ((*((u8*)(r4 + 1)) << 0x1b) >> 0x18), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r4 + 8)) + 4)), 1);
    ov96_02214044(*((u32*)(r4 + 8)), *((u8*)(r4 + 1)), 0);
    // mvn r0, r0
    *((u8*)(r4 + 3)) = 0;
    // strb r0, [r4]
    // add r1, sp, #0xc
    // add r2, sp, #0xc
    // add r1, #2
    *((u8*)(r2 + 2)) = *((u8*)(ov96_0221D1F4 + 2));
    *((u8*)(r2 + 3)) = *((u8*)(ov96_0221D1F4 + 3));
    // add r0, sp, #0xc
    // strb r5, [r2]
    *((u8*)(r2 + 1)) = *((u8*)(ov96_0221D1F4 + 1));
    // sub r3, r3, r5
    // ror r3, r2
    // add r2, r5, r3
    *((u8*)(r4 + 0xd)) = 0x1f;
    *((u8*)(r4 + 0xc)) = 5;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(*((u32*)(r4 + 8)) + 4)), 1, ((*((u8*)(r4 + 1)) << 0x1b) >> 0x18), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(*((u32*)(r4 + 8)) + 4)), 1);
    *((u8*)(r4 + 0xc)) = (r0 - 1);
}




void ov96_02214394(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022143A6: ; jump table
    // add r0, r0, r1
}




void ov96_022143DC(void) {
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r1, r1, #0xc
}




void ov96_022143FC(void) {
    // cmp r0, #0x80
    // bge _0221440C
    // cmp r1, #0x70
    // bge _02214408
    // cmp r1, #0x70
    // bge _02214414
}




void ov96_02214418(void) {
    // add r2, r0, r5
    // strb r3, [r2, r1]
    // add r1, r0, r3
    // add r4, r0, r6
    // strb r3, [r4, r7]
    // add r7, r0, r6
    // strb r2, [r7, r4]
}




void ov96_02214490(void) {
    // add r0, r5, r0
    ov96_02214044(r0, 0, 0);
}




void ov96_022144C0(void) {
    // add r4, sp, #0xc
    // add r1, r6, r5
    // str r1, [r4, r2]
    // add r3, r4, r2
    // add r1, r0, r1
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r4, sp, #0x14
    // add r0, sp, #0x14
    // ldr r1, [sp, #0x1c]
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r1, sp, #0x1c
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r4, sp, #0
    // add r1, #8
}




void ov96_0221454C(void) {
    // mvn r0, r0
    // mvn r0, r0
}




void ov96_0221457C(void) {
    // str r0, [sp, #4]
    _s32_div_f(0, 3);
    // add r1, sp, #8
    // add r2, sp, #8
    // add r1, r1, r0
    // strh r4, [r2, r0]
    // add r0, r6, r4
    *((u16*)(r1 + 2)) = *((u8*)((r5 << 2) + 0xc));
    // ldr r0, [sp, #4]
    // str r0, [sp]
    // add r0, sp, #8
    MATH_QSort(*((u32*)(((r4 + 1) << 0x18) + 0x0000081C)), 9, 4, ov96_0221454C);
    // add r7, sp, #8
    _s32_div_f(((*((u16*)(r7 + (0 << 2))) << 0x18) >> 0x18), 3);
    _s32_div_f(r6, 3);
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // add r0, r2, r0
    // add r1, #0x10
    ov96_021EABA8(*((u32*)(((0x5d << 2) * r4) + 0x5c)), r5, (0x7c * r1));
}




void ov96_02214618(void) {
    // add r0, #0xf0
}




void ov96_0221464C(void) {
    Heap_Alloc(0x50);
    MI_CpuFill8(0, 0x50);
    // str r5, [r4]
    *((u32*)(r4 + 0x10)) = r6;
    *((u32*)(r4 + 4)) = r7;
    ov96_022148A4(r4);
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, r5);
    *((u32*)(r4 + 0x34)) = r0;
    MessageFormat_New(r5);
    *((u32*)(r4 + 0x38)) = r0;
}




void ov96_02214690(void) {
}




void ov96_022146C0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r3, #0x3c
}




void ov96_02214718(void) {
    // str r2, [sp, #4]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    ov96_021EB3E4(r0, 0, 2, 0x66);
    ov96_021EB52C(1, 1);
    // add r1, sp, #0x20
    ov96_021EB588(r4);
    ov96_021E5F24(*((u32*)(r6 + 4)));
    ov96_021EB564(r4, (r0 + 1));
    // str r0, [sp]
    ov96_021EB3E4(r7, 0, 2, 0x66);
    ov96_021EB52C(1, 1);
    // add r1, sp, #0x14
    ov96_021EB588(r4);
    ov96_021EB564(r4, 5);
    *((u32*)(r6 + 0x4c)) = r4;
    // add r5, r6, r0
    ov96_021EB5E8(r7);
    // ldr r0, [sp, #4]
    ov96_021EA2C4(r0, 0, *((u32*)r6));
    *((u32*)(r5 + 8)) = r0;
    Sprite_SetDrawFlag(1);
    // add r1, sp, #8
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    Sprite_SetMatrix(*((u32*)(r5 + 8)));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 8)), *((u8*)(ov96_0221D64C + r4)));
}




void ov96_022147FC(void) {
    // add r0, #0x14
    FillWindowPixelBuffer(0);
    ov96_021E5F24(*((u32*)(r5 + 4)));
    PokeathlonCourse_GetPlayerProfileFromData(*((u32*)(r5 + 4)), ((r0 << 0x18) >> 0x18));
    PlayerProfile_GetPlayerName_NewString(*((u32*)r5));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x14
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    // add r5, #0x14
    CopyWindowToVram(r5);
}




void ov96_02214854(void) {
    // add r0, #0x24
    FillWindowPixelBuffer(0);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x38)), *((u32*)(r5 + 0x34)), 0x00000137, *((u32*)r5));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x24
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    // add r5, #0x24
    CopyWindowToVram(r5);
}




void ov96_022148A4(void) {
    // add r1, #0x14
    AddWindow(*((u32*)(r0 + 0x10)), r0, ov96_0221D650);
    // add r1, #0x24
    AddWindow(*((u32*)(r4 + 0x10)), r4, ov96_0221D658);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 0x10)), 4, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)r4));
}




void ov96_022148E8(void) {
}




void ov96_02214904(void) {
}




void ov96_0221490C(void) {
}




void ov96_0221497C(void) {
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0]
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r0, #2
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov96_02214A24(void) {
    // add r0, #0x98
    // strb r5, [r0]
    // sub r1, r0, r5
    // add r0, #0x9e
    // strb r1, [r0]
    // add r0, #0x9e
    // add r0, #0x9d
    // strb r1, [r0]
    // add r0, #0x9b
    // strb r1, [r0]
    // add r0, #0x9b
    // add r0, #0x9a
    // strb r1, [r0]
}




void ov96_02214A6C(void) {
    // add r2, r5, r0
    // add r0, r2, r0
}




void ov96_02214A9C(void) {
}




void ov96_02214ABC(void) {
    // add r1, sp, #0
    // add r1, #3
    // add r0, sp, #0
    // add r2, r5, r2
    // add r2, #0x73
    // add r6, #0x70
    // add r3, #0x75
    // add r6, r2, r6
    // strb r6, [r1, r4]
    // add r2, r2, r3
    // strb r2, [r0, r4]
    // add r3, sp, #0
    // add r3, #3
    // add r1, r3, r4
    // add r1, sp, #0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
}




void ov96_02214B74(void) {
    // add r0, #0x90
    // str r1, [r0]
}




void ov96_02214B7C(void) {
}




void ov96_02214B84(void) {
    // add r1, #0x9e
    // add r1, #0x9a
    // add r1, #0x9a
    // strb r2, [r1]
    // add r1, #0x9a
    // add r1, #0x9b
    // add r1, #0x94
    // str r2, [r1]
    // add r1, #0x9a
    // strb r2, [r1]
    // add r1, #0x94
    // add r1, #0x9d
    // add r1, #0x99
    // add r2, r2, r1
    // add r2, r4, r1
    // add r1, #0x9c
    // add r2, r2, r3
    // str r0, [r2, r3]
    // add r0, #0x99
    // add r0, #0x99
    // strb r1, [r0]
    // add r0, #0x99
    // add r0, #0x98
    // add r0, #0x99
    // strb r1, [r0]
    // add r0, #0x9c
    // add r0, #0x9c
    // strb r1, [r0]
    // add r4, #0x94
    // str r0, [r4]
}




void ov96_02214C3C(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x38]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x38]
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r3, r4, #0xb
    // add r3, r4, r3
    // asr r2, r2, #0xc
    // asr r3, r3, #0xc
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r0, #0x30
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    // add r5, r0, r1
    // add r0, #0x39
    // add r0, #0x38
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // asr r3, r7, #0xb
    // add r3, r7, r3
    // asr r3, r3, #0xc
    // str r0, [sp, #0x18]
    // add r0, #0x38
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r3, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r2, #8
    // add r0, sp, #0x20
    // strb r1, [r0, r4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r1, r1, #0xc
    // asr r5, r3, #0xb
    // add r5, r3, r5
    // asr r2, r2, #0xc
    // asr r3, r5, #0xc
    // add r0, sp, #0x20
    // strb r1, [r0, r4]
    // strb r1, [r0, r4]
    // add r0, sp, #0x20
    // strb r1, [r0, r4]
    // add r0, sp, #0x20
    // strb r1, [r0, r4]
    // add r0, sp, #0x20
    // ldr r1, [sp, #0x38]
    // ldr r3, [sp, #0x14]
    // ldr r1, [sp, #0x38]
    // add r1, #0x4c
    // ldr r3, [sp, #0x14]
    // str r1, [sp, #0x38]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
}




void ov96_02214DBC(void) {
    LCRandom();
    _s32_div_f(0x64);
    // add r1, r6, r6
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02214DE4: ; jump table
    // add r4, #8
    // ldmia r4!, {r0, r1}
    // add r5, #0x24
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r4, #8
    // ldmia r4!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r5 + 0x78)) = 1;
    // add r4, #8
    // ldmia r4!, {r0, r1}
    // add r5, #0x24
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r4, #8
    // ldmia r4!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r5 + 0x78)) = 1;
    // add r4, #8
    // ldmia r4!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r5 + 0x78)) = 1;
    // sub r0, r0, r7
    *((u32*)(r5 + 0x24)) = (*((u16*)(ov96_0221D678 + (((3 << 0x18) >> 0x18) * 0xc))) << 0xc);
    *((u32*)(r5 + 0x28)) = (*((u16*)(ov96_0221D67A + (((3 << 0x18) >> 0x18) * 0xc))) << 0xc);
    GF_AssertFail((*((u16*)(ov96_0221D67A + (((3 << 0x18) >> 0x18) * 0xc))) << 0xc), ((3 << 0x18) >> 0x18), (((3 << 0x18) >> 0x18) * 0xc));
    GF_AssertFail();
}




void ov96_02214EB4(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x40]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x40]
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r3, r4, #0xb
    // add r3, r4, r3
    // asr r2, r2, #0xc
    // asr r3, r3, #0xc
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x40]
    // add r5, r0, r1
    // add r0, #0x39
    // add r0, #0x38
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // asr r3, r7, #0xb
    // add r3, r7, r3
    // asr r3, r3, #0xc
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r1, r1, #0xc
    // asr r5, r3, #0xb
    // add r5, r3, r5
    // asr r2, r2, #0xc
    // asr r3, r5, #0xc
    // add r0, sp, #0x18
    // strb r1, [r0, r4]
    // strb r1, [r0, r4]
    // add r0, sp, #0x18
    // strb r1, [r0, r4]
    // add r0, sp, #0x18
    // strb r1, [r0, r4]
    // add r0, sp, #0x18
    // ldr r1, [sp, #0x40]
    // add r0, #0x30
    // add r1, #8
    // add r2, sp, #0x1c
    // add r0, sp, #0x1c
    // ldr r1, [sp, #0x40]
    // add r0, #0x30
    // add r1, #0x54
    // add r2, sp, #0x1c
    // add r0, sp, #0x1c
    // add r2, sp, #0x18
    // ldr r1, [sp, #0x40]
    // ldr r3, [sp, #0xc]
    // ldr r1, [sp, #0x40]
    // ldr r3, [sp, #0xc]
    // add r1, #0x4c
    // str r1, [sp, #0x40]
    // add r0, sp, #0x18
    // ldr r1, [sp, #0x40]
    // ldr r3, [sp, #0xc]
    // ldr r1, [sp, #0x40]
    // ldr r3, [sp, #0xc]
    // add r1, #0x4c
    // str r1, [sp, #0x40]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
}




void ov96_02215058(void) {
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02215070: ; jump table
    // add r5, r0, r6
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    ov96_022156A8((ov96_0221D678 >> 0x14), (*((u32*)(r0 + 0x30)) >> 0x14), r5);
    LCRandom(0);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, sp, #0
    // strh r1, [r0]
    *((u16*)(0x1f + 2)) = *((u16*)(r5 + 2));
    LCRandom(0x1f, *((u16*)(r5 + 2)), (r0 >> 0x1f));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r2, r0, r6
    // add r0, sp, #0
    // strh r1, [r0]
    *((u16*)(ov96_0221D67C + 2)) = *((u16*)((r0 >> 0x1f) + 2));
    // add r2, r0, r6
    // add r0, sp, #0
    // strh r1, [r0]
    *((u16*)(ov96_0221D680 + 2)) = *((u16*)((r0 >> 0x1f) + 2));
    LCRandom(ov96_0221D680, *((u16*)((r0 >> 0x1f) + 2)), (r0 >> 0x1f));
    _s32_div_f(0x11);
    // add r2, sp, #0
    // sub r0, r0, r1
    // add r0, r3, r0
    // strh r0, [r2]
    LCRandom(8, *((u16*)r2));
    _s32_div_f(0x11);
    // add r2, sp, #0
    // sub r0, r0, r1
    // add r0, r3, r0
    *((u16*)(r2 + 2)) = 8;
    *((u32*)(r4 + 0x24)) = (*((u16*)r2) << 0xc);
    *((u32*)(r4 + 0x28)) = (*((u16*)(r2 + 2)) << 0xc);
    // add r3, #8
    // ldmia r3!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    LCRandom(*((u32*)r1), r4, r1);
    _s32_div_f(0x64);
    *((u32*)(r4 + 0x78)) = 1;
    GF_AssertFail(0xa);
}




void ov96_02215184(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x48]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x4c]
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r3, r4, #0xb
    // add r3, r4, r3
    // asr r2, r2, #0xc
    // asr r3, r3, #0xc
    // str r0, [sp, #0x14]
    // add r7, sp, #0x20
    // ldr r0, [sp, #0x48]
    // add r3, r0, r1
    // add r0, #0x39
    // add r0, #0x38
    // asr r6, r2, #0xb
    // add r6, r2, r6
    // asr r2, r6, #0xc
    // asr r6, r3, #0xb
    // add r6, r3, r6
    // asr r3, r6, #0xc
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // str r0, [sp, #0x1c]
    // add r0, #0x30
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x48]
    // add r6, r0, r1
    // add r0, sp, #0x20
    // add r0, #2
    // strb r1, [r0, r4]
    // add r0, sp, #0x20
    // str r0, [sp, #0x18]
    // add r0, #0x38
    // ldr r0, [sp, #0x1c]
    // add r2, #8
    // add r0, sp, #0x20
    // add r0, #2
    // strb r1, [r0, r4]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r0, r0, #0xc
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r1, r1, #0xc
    // asr r6, r3, #0xb
    // add r6, r3, r6
    // asr r2, r2, #0xc
    // asr r3, r6, #0xc
    // add r0, sp, #0x20
    // add r0, #2
    // strb r1, [r0, r4]
    // add r0, sp, #0x20
    // ldr r1, [sp, #0x48]
    // ldr r3, [sp, #0x14]
    // ldr r1, [sp, #0x48]
    // ldr r3, [sp, #0x14]
    // add r1, #0x4c
    // str r1, [sp, #0x48]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x4c]
    // add r0, r0, r1
    // add r0, #0x71
    // ldr r1, [sp, #0x4c]
    // ldr r2, [sp, #0xc]
    // add r6, sp, #0x20
    // add r6, #2
    // ldr r0, [sp, #0x48]
    // add r1, r0, r1
    // add r0, sp, #0x20
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r0, r0, #0xc
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r2, r3, #0xc
    // asr r3, r7, #0xb
    // add r3, r7, r3
    // asr r3, r3, #0xc
    // strb r0, [r6, r4]
    // strb r0, [r6, r4]
    // strb r0, [r6, r4]
    // strb r0, [r6, r4]
    // add r0, sp, #0x20
    // ldr r1, [sp, #0x48]
    // add r0, #0x30
    // add r1, #8
    // add r2, sp, #0x24
    // add r0, sp, #0x24
    // ldr r1, [sp, #0x48]
    // add r0, #0x30
    // add r1, #0x54
    // add r2, sp, #0x24
    // add r0, sp, #0x24
    // ldr r0, [sp, #0x4c]
    // add r2, sp, #0x20
    // str r0, [sp]
    // ldr r1, [sp, #0x48]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #0x4c]
    // ldr r1, [sp, #0x48]
    // str r0, [sp]
    // ldr r3, [sp, #0xc]
    // add r1, #0x4c
    // str r1, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // ldr r1, [sp, #0x48]
    // str r0, [sp]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #0x4c]
    // ldr r1, [sp, #0x48]
    // str r0, [sp]
    // ldr r3, [sp, #0xc]
    // add r1, #0x4c
    // str r1, [sp, #0x48]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
}




void ov96_02215460(void) {
    // ldr r1, [sp, #8]
}




void ov96_02215478(void) {
    // str r0, [sp]
    // str r2, [sp, #8]
    // add r7, sp, #0x10
    // str r0, [sp, #0xc]
    // strb r0, [r7]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #4]
    // add r6, r0, r2
    // add r0, r6, r0
    // asr r5, r2, #0xb
    // add r5, r2, r5
    // asr r2, r5, #0xc
    // asr r5, r3, #0xb
    // add r5, r3, r5
    // asr r3, r5, #0xc
    // strb r1, [r7, r0]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x10
    // add r2, r0, r1
    // ldr r2, [sp, #8]
    // sub r1, r1, r2
    // ror r1, r0
    // add r5, r2, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221553C: ; jump table
    // sub r1, r1, r5
    // ldr r1, [sp]
    // sub r0, r1, r0
    // ldr r0, [sp]
    // add r5, #0x80
    // ldr r1, [sp]
    // sub r0, r1, r0
    // ldr r0, [sp]
    // sub r1, r1, r5
    // ldr r1, [sp]
    // add r0, #0x60
    // ldr r0, [sp]
    // add r5, #0x80
    // ldr r1, [sp]
    // add r0, #0x60
    // ldr r0, [sp]
}




void ov96_022155A0(void) {
    // add r2, #0x9d
    // add r2, #0x99
    // add r2, r3, r2
    // add r2, #0x9c
    // add r1, #0x90
    // str r1, [sp]
    // str r0, [r4]
    // add r1, #0x90
    // str r1, [sp]
    // str r0, [r4]
    // add r5, #0x90
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r0, [r4]
}




void ov96_02215614(void) {
}




void ov96_02215650(void) {
    ov96_02215614();
    // add r1, sp
    // sub r1, r1, r2
}




void ov96_0221567C(void) {
    ov96_02215614();
    // add r1, sp
    // sub r1, r1, r2
}




void ov96_022156A8(void) {
    // sub r3, #8
    // sub r4, #8
    // add r6, r2, r5
    // sub r5, r0, r5
    // sub r6, r1, r6
}




void ov96_022156E8(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r1, r5, r4
}




void ov96_02215710(void) {
    // mvn r1, r1
    // asr r0, r0, #0xc
    // add r0, r6, r0
    // asr r4, r0, #1
    // ldrsb r0, [r5, r0]
    // mvn r0, r0
    // sub r0, r1, r0
    // eor r0, r1
    // ldrsb r1, [r5, r0]
    // ldrsb r1, [r5, r0]
}




void ov96_02215864(void) {
}




void ov96_0221587C(void) {
}




void ov96_02215884(void) {
    GF_AssertFail(*((u32*)(r0 + 4)));
    GF_AssertFail(*((u32*)r5));
    SysTask_Destroy(*((u32*)(r5 + 8)));
    *((u32*)(r5 + 0x18)) = 0;
    *((u8*)(r5 + 0x14)) = 0;
    *((u8*)(r5 + 0x15)) = r4;
    *((u32*)(r5 + 0xc)) = (r6 << 0xc);
    *((u8*)(r5 + 0x16)) = r6;
    FX_Div((r6 << 0xc), (r4 << 0xc));
    *((u32*)(r5 + 0x10)) = r0;
    SysTask_CreateOnMainQueue(ov96_02215710, r5, 2);
    *((u32*)(r5 + 8)) = r0;
}




void ov96_022158D4(void) {
    // cmp r0, #0x68
    // blt _022158E8
    // cmp r0, #0xa0
    // bge _022158E8
    // cmp r1, #0
    // blt _022158E8
    // cmp r1, #0x20
    // bge _022158E8
}




void ov96_022158EC(void) {
    // add r2, sp, #0
    // add r0, sp, #0
}




void ov96_02215914(void) {
    // neg r3, r2
    // str r1, [r0]
    // mvn r2, r2
    // sub r1, r3, r2
    // str r1, [r0]
}




void ov96_02215944(void) {
}




void ov96_02215958(void) {
    // neg r3, r1
    // str r1, [r0]
    // str r3, [r0]
}




void ov96_02215984(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0x00007FFF);
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r4) + 1));
    // strb r0, [r4]
    ov96_021E637C(r5);
    PokeathlonCourse_SetStateField07(r5, 1);
    GF_AssertFail();
}




void ov96_022159F0(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_02215FC8(r5);
    ov96_02216234(r5);
    // strb r0, [r4]
    ov96_02215FC8(r5);
    ov96_021E667C(r5);
    // add r0, r6, r0
    ov96_02215864(0x000007F8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    PokeathlonCourse_SetStateField07(r5, 2);
    GF_AssertFail();
}




void ov96_02215A70(void) {
    // add r5, r5, r0
    // add r5, #0xa8
}




void ov96_02215AC4(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetField1ED(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02215AE8: ; jump table
    Heap_Create(0x5c, 0x91, (6 << 0x10));
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    ov96_02215FA8(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    PokeathlonCourse_AllocPtr4FromHeap(r5, 0x00000814);
    MI_CpuFill8(0, 0x00000814);
    // str r0, [r4]
    // str r1, [r4, r0]
    PokeathlonCourse_IncrementField1ED(r5, 0x00000708);
    BgConfig_Alloc(*((u32*)r4));
    *((u32*)(r4 + 4)) = r0;
    ov96_021E6670(r5, 8);
    ov96_0221654C(r4);
    ov96_0221663C(r4);
    ov96_022193E4(r4);
    ov96_022162F4(r4);
    ov96_02217AE4(r4, r5);
    PokeathlonCourse_IncrementField1ED(r5);
    ov96_021EAA00(*((u32*)(r4 + 0x1c)));
    ov96_022163AC(r4);
    SpriteManager_GetSpriteList(*((u32*)(r4 + 0xc)));
    ov96_021E61D8(r5, 0, *((u32*)(r4 + 0x18)), r0);
    Sprite_SetDrawPriority(*((u32*)r0), 0);
    PokeathlonCourse_IncrementField1ED(r5);
    ov96_021E5F24(r5);
    ov96_02219F7C(r5, *((u32*)r4));
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r0, [sp, #0xc]
    // str r5, [sp, #0x10]
    ov96_022194C4(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x18)), *((u32*)(r4 + 4)));
    // str r0, [r4, r1]
    PokeathlonCourse_IncrementField1ED(r5, (6 << 6));
    ov96_02217B84(r4, r5);
    ov96_022195C8(*((u32*)(r4 + (6 << 6))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    ov96_02217544(0x0000043C, *((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), *((u32*)(r4 + (6 << 6))));
    PokeathlonCourse_SetVBlankIntrCB(*((u32*)(r4 + 4)));
    // add r0, r4, r0
    ov96_0221587C(0x000007F8, *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    PokeathlonCourse_SetField1F4(r5, 1);
    ov96_021E5F24(r5);
    PokeathlonCourse_GetDataCopyArea(r5);
    // add r0, #0x28
    ov96_021E8A20();
    // and r1, r2
    *((u32*)(r0 + 0x20)) = (0xFFF80007 | ((*((u32*)(r4 + 0x00000438)) << 0x10) >> 0xd));
    // add r0, r4, r0
    ov96_02218330((0x62 << 2), r5, ((*((u32*)(r4 + 0x00000438)) << 0x10) >> 0xd));
    sub_0203A994(2);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GF_AssertFail(1);
}




void ov96_02215CD0(void) {
}




void ov96_02215CE8(void) {
    PokeathlonCourse_GetGraphicsSystem();
    ov96_021E9510();
    PokeathlonCourse_GetField5F0_AtIndex(r5, ((0 << 0x18) >> 0x18));
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov96_021E95F8(r5, r6, r4, r0);
    ov96_021E93B4(r6, 1);
    ov96_0221A56C(r6, 7);
    ov96_021E952C(r6);
    ov96_021E9570(r6, 7);
}




void ov96_02215D4C(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    ov96_02219FDC(*((u32*)(r0 + (0x61 << 2))));
    ov96_022195E8(*((u32*)(r4 + (6 << 6))));
    // add r0, r4, r0
    ov96_022177D8(0x0000043C);
    ov96_02217DBC(r4);
    ov96_02216390(r4);
    ov96_022165FC(r4);
    sub_0203A914();
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    PokeathlonCourse_FreePtr4HeapAlloc(r5);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    Heap_Destroy(0x91);
}




void ov96_02215DBC(void) {
}




void ov96_02215DD4(void) {
}




void ov96_02215DEC(void) {
    // add r1, r0, r1
    // add r2, r1, r0
    // add r0, sp, #4
    // str r0, [sp]
    // asr r1, r1, #0xc
    // asr r2, r2, #0xc
    // add r3, sp, #8
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // ldr r0, [sp, #4]
}




void ov96_02215E2C(void) {
}




void ov96_02215E48(void) {
}




void ov96_02215E68(void) {
    // add r1, r0, r1
    // asr r0, r1, #0xc
}




void ov96_02215E94(void) {
}




void ov96_02215EB0(void) {
}




void ov96_02215ECC(void) {
    // add r1, r0, r1
    // add r0, r1, r0
}




void ov96_02215EE8(void) {
    // add r4, r7, r0
    // str r0, [r4, r5]
    // ldrsh r1, [r6, r0]
    // add r2, r7, r5
    // strh r1, [r2, r0]
    // ldrsh r1, [r6, r1]
    // strh r1, [r2, r0]
}




void ov96_02215F2C(void) {
    // add r5, r0, r1
    // str r0, [r5, r4]
}




void ov96_02215F64(void) {
    // add r1, r0, r1
    // add r0, r1, r0
}




void ov96_02215F80(void) {
    // add r1, r0, r1
    // add r0, r1, r0
}




void ov96_02215FA0(void) {
}




void ov96_02215FA8(void) {
}




void ov96_02215FC8(void) {
    // str r0, [sp]
    PokeathlonCourse_GetHeapAllocPtr4();
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    PokeathlonCourse_GetDataCopyArea();
    // str r0, [sp, #4]
    // add r0, #0x28
    ov96_021E8A20();
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ov96_021E5F24();
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r1, [sp]
    ov96_02218330((*((u32*)(r0 + 0x20)) >> 0x1f), (0x62 << 2));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r2, [r0, r1]
    // ldr r0, [sp, #8]
    // and r2, r0
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    *((u32*)(((*((u32*)(0xFFF80007 + 0x00000438)) << 0x10) >> 0xd) + 0x20)) = (*((u32*)(*((u32*)(r0 + 0x00000438)) + 0x20)) | ((*((u32*)(0xFFF80007 + 0x00000438)) << 0x10) >> 0xd));
    // ldr r0, [sp, #4]
    // add r0, #0x50
    ov96_021E8A20(((*((u32*)(0xFFF80007 + 0x00000438)) << 0x10) >> 0xd), (*((u32*)(*((u32*)(r0 + 0x00000438)) + 0x20)) | ((*((u32*)(0xFFF80007 + 0x00000438)) << 0x10) >> 0xd)), *((u32*)(*((u32*)(r0 + 0x00000438)) + 0x20)));
    // ldr r0, [sp, #4]
    ov96_021E8A20();
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r0, #0x50
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r6, r0, r1
    // ldr r0, [sp, #4]
    ov96_021E8A20(0, (0x66 << 2), (4 - 1), r0);
    // add r4, #8
    // add r5, #0xc
    // and r0, r1
    // str r0, [r4]
    // str r0, [r4]
    *((u16*)(r6 + 4)) = ((*((u32*)r0) << 0x18) >> 0x18);
    *((u16*)(r6 + 6)) = ((*((u32*)r0) << 0x10) >> 0x18);
    // strh r0, [r6]
    *((u16*)(r6 + 2)) = ((*((u32*)r0) << 0x10) >> 0x18);
    // and r0, r1
    // and r1, r2
    // str r0, [r4]
    // and r0, r1
    // and r1, r0
    // and r1, r0
    // and r0, r1
    // str r0, [r4]
    // ldrsh r0, [r6, r0]
    // ldrsh r1, [r6, r1]
    ov96_022158D4(0, 2, (((*((u32*)r6) << 0x12) >> 0x12) + 1));
    ov96_02219460(r5, r4, r0);
    ov96_02219398(r5, ((*((u32*)(r5 + 0x60)) << 6) >> 0x1e));
    ov96_02218A68(r5);
    // and r1, r0
    *((u32*)(r5 + 0x60)) = ((2 << 0x18) | *((u32*)(r5 + 0x60)));
    // and r1, r0
    // and r0, r1
    *((u32*)(r5 + 0x60)) = 0xFCFFFFFF;
    ov96_02218578(r5, 4);
    // ldr r0, [sp, #4]
    // add r6, #0xa8
    // add r0, #0x28
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    ov96_02219FE4(*((u32*)((r0 + 1) + (0x61 << 2))), (0x61 << 2));
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r1, [sp]
    ov96_022180CC((0x66 << 2));
    // ldr r0, [sp, #8]
    // and r1, r0
    // ldr r0, [sp, #8]
    *((u32*)((0x7FFFFFFF + 1) + 0x20)) = (*((u32*)(r0 + 0x20)) | (0x7FFFFFFF + 1));
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r1, [sp]
    ov96_02218330((0x7FFFFFFF + 1), (0x62 << 2));
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r1, [sp]
    ov96_0221768C(0x0000043C);
}




void ov96_02216200(void) {
    // add r0, #0xf0
}




void ov96_02216234(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    PokeathlonCourse_GetDataCopyArea(r6);
    ov96_021E8A20();
    // add r7, #0xf0
    ov96_021E8A20(r7);
    // add r0, r4, r0
    ov96_02217820(0x0000043C);
    ov96_021EB144(*((u32*)(r4 + 0x1c)), 1);
    ov96_0221964C(*((u32*)(r4 + (6 << 6))));
    ov96_021E8324(r6, ov96_02216200);
    System_GetTouchNew(1);
    ov96_021E5F24(r6);
    // str r0, [sp]
    ov96_021E8228(r6, ((r0 << 0x18) >> 0x18), 3, 0);
    System_GetTouchHeld();
    // str r2, [r5]
    // and r2, r0
    // and r0, r1
    // str r0, [r5]
}




void ov96_022162F4(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    SpriteSystem_Alloc(*((u32*)r0), ov96_0221D6F4);
    *((u32*)(r4 + 8)) = r0;
    SpriteManager_New();
    *((u32*)(r4 + 0xc)) = r0;
    // add r1, sp, #0x14
    // add r2, sp, #0
    SpriteSystem_Init(*((u32*)(r4 + 8)), 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), 0x80);
    // add r2, sp, #0x34
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)));
    SpriteSystem_GetRenderer(*((u32*)(r4 + 8)));
    G2dRenderer_SetSubSurfaceCoords(0, (0x1e << 0x10));
    ov96_021E9A78(*((u32*)r4), 0x000002E7, 1);
    *((u32*)(r4 + 0x18)) = r0;
}




void ov96_02216390(void) {
}




void ov96_022163AC(void) {
    GF_AssertFail();
    GF_AssertFail();
    // str r4, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r6, r5, 0xf2, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r6, r5, 0xf2, 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r6, r5, 0xf2, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r6, r5, 0xf2, 0xe);
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r6, r5, 0xf2, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r6, r5, 0xf2, 0x11);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r6, r5, 0xf2, 0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r6, r5, 0xf2, 0x12);
    // str r0, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r6, r5, 0xf2, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r0, r4, r0
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r6, r5, 0xf2, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r6, r5, 0xf2, 0x17);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r6, r5, 0xf2, 0x16);
}




void ov96_022164EC(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov96_0221D79C), (6 - 1));
    GF_AssertFail();
    // add r1, sp, #4
    // strh r7, [r1]
    // ldr r0, [sp]
    *((u16*)(r1 + 2)) = r0;
    // add r0, sp, #0x40
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x10));
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    SpriteSystem_NewSpriteWithYOffset(r5, r4, *((u16*)(r0 + 0x10)), (0x1e << 0x10));
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_0221654C(void) {
    // str r0, [sp]
    // add r3, sp, #8
    // str r0, [sp, #4]
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r4, sp, #0x18
    InitBgFromTemplate(r6, ((*((u32*)ov96_0221D738) << 0x18) >> 0x18), ov96_0221D834, 0);
    BgClearTilemapBufferAndCommit(r6, ((*((u32*)r5) << 0x18) >> 0x18));
    // ldr r3, [sp, #4]
    BG_ClearCharDataRange(((*((u32*)r5) << 0x18) >> 0x18), 0x20, 0);
    // add r4, #0x1c
    // ldr r3, [sp]
    NewMsgDataFromNarc(1, 0x1b, 0x00000135, *((u32*)r3));
    // ldr r1, [sp]
    *((u32*)(r1 + 0x14)) = r0;
    MessageFormat_New(*((u32*)r1));
    // ldr r1, [sp]
    *((u32*)(r1 + 0x10)) = r0;
    FontID_Alloc(4, *((u32*)r1));
    GfGfx_EngineATogglePlanes(8, 0);
}




void ov96_022165FC(void) {
    // add r0, #0x20
    RemoveWindow();
    MessageFormat_Delete(*((u32*)(r6 + 0x10)));
    DestroyMsgData(*((u32*)(r6 + 0x14)));
    FreeBgTilemapBuffer(*((u32*)(r6 + 4)), ((*((u32*)ov96_0221D738) << 0x18) >> 0x18));
    FontID_Release(4);
    Heap_Free(*((u32*)(r6 + 4)));
}




void ov96_0221663C(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
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
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
}




void ov96_02216770(void) {
    // add r0, #0xe4
    // add r3, r0, r0
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _02216796: ; jump table
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0x10)), 0, 2, (0x1e << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r4 + 0x10)));
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0xc)), 0, 2, (0x1e << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 1);
    ov96_021EAB38(*((u32*)r4), 0);
    // add r0, #0xe2
    // strb r1, [r0]
    // ldr r1, [sp, #0x20]
    ov96_022193CC(0x000008B4, 0);
    // add r0, #0xe4
    // and r2, r0
    // add r4, #0xe4
    // str r0, [r4]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0xc)), *((u32*)r4), *((u32*)r4));
    // add r3, sp, #0
    // ldrsh r0, [r3, r2]
    // sub r0, #0x28
    // strh r0, [r3]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0xc)), 2, 0, (0x1e << 0x10));
    // ldrsb r0, [r4, r1]
    // add r0, #0xe2
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0, (r0 + 1));
    // add r0, #0xe4
    // and r2, r0
    // add r4, #0xe4
    // str r0, [r4]
    // ldr r3, [sp, #0x20]
    ov96_02219794(*((u32*)r4), r6, ((((*((u32*)r4) << 0x10) >> 0x1e) << 0x18) >> 0x18));
    // ldr r2, [sp, #0x18]
    // and r1, r0
    // str r0, [r2]
    // add r0, #0xe4
    // and r2, r0
    // add r4, #0xe4
    // str r0, [r4]
    // ldr r3, [sp, #0x1c]
    ov96_02219940(*((u32*)r4), r6, ((((*((u32*)r4) << 0x10) >> 0x1e) << 0x18) >> 0x18));
    // ldr r2, [sp, #0x18]
    // and r1, r0
    // str r0, [r2]
    // add r0, #0xe4
    // and r2, r0
    // add r4, #0xe4
    // str r0, [r4]
    // add r1, #0xe4
    // and r1, r2
    // add r4, #0xe4
    // str r0, [r4]
    GF_AssertFail(((((((((((*((u32*)r4) << 0x14) >> 0x1c) + 1) << 0x1c) >> 0x14) | *((u32*)r4)) + 1) << 0x1c) >> 0x14) | 0xFFFFF0FF), 0xFFFFF0FF, *((u32*)r4));
}




void ov96_02216934(void) {
    // add r0, #0xe4
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02216954: ; jump table
    // ldrsh r3, [r2, r3]
    // ldrsh r1, [r2, r1]
    // sub r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r0 + 0xc)), 0, ((0x19 << 4) << 0x10), (0x1e << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 1);
    // add r0, #0xe2
    // strb r1, [r0]
    // ldr r1, [sp, #0x18]
    ov96_022193CC(0x000008B5, 0);
    // add r0, #0xe4
    // and r2, r0
    // add r4, #0xe4
    // str r0, [r4]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0xc)), *((u32*)r4), *((u32*)r4));
    // add r3, sp, #0
    // ldrsh r0, [r3, r2]
    // add r0, #0x28
    // strh r0, [r3]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0xc)), 2, 0, (0x1e << 0x10));
    // ldrsb r0, [r4, r1]
    // add r0, #0xe2
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    // add r0, #0xe4
    // and r2, r0
    // add r4, #0xe4
    // str r0, [r4]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // and r1, r0
    // str r0, [r2]
    // add r0, #0xe4
    // and r2, r0
    // add r4, #0xe4
    // str r0, [r4]
    GF_AssertFail(((((((*((u32*)r4) << 0x14) >> 0x1c) + 1) << 0x1c) >> 0x14) | *((u32*)r4)), *((u32*)r4), *((u32*)r4));
}




void ov96_02216A54(void) {
    ov96_021EAB38(*((u32*)r0), 1);
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + 0x10)), 0, 2, (0x1e << 0x10));
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r5 + 0x10)));
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    // ldr r1, [sp, #0x18]
    ov96_022193CC(0x000008B6);
    // and r0, r1
    // str r0, [r6]
}




void ov96_02216AA4(void) {
    // str r0, [sp, #0x18]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r4, [sp, #0x40]
    PokeathlonCourse_GetDataCopyArea(r3);
    // add r0, sp, #0x24
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = *((u8*)(r5 + 1));
    // ldr r0, [sp, #0x10]
    PokeathlonCourse_GetParticipantCount(*((u8*)(r5 + 1)));
    // str r0, [sp, #0x1c]
    // add r6, #0x50
    // add r0, r6, r0
    ov96_021E8A20((0x28 * r4));
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    ov96_021E8A20(r6);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    ov96_021E5F24();
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    ov96_021E5F24(0);
    // ldr r0, [sp, #0x14]
    // add r1, #0xe4
    // add r0, #0xe4
    // and r1, r0
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xe4
    // and r0, r1
    // add r0, #0xe4
    // str r1, [r0]
    // str r0, [sp, #0x18]
    // add r0, #0xe4
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    ov96_0221996C(((*((u32*)r7) << 0x12) >> 0x1e), r4, ((*((u8*)(r5 + 4)) << 0x18) >> 0x1e), 1);
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x24
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    ov96_02216770(r7, r4);
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r1, sp, #0x24
    // str r6, [sp, #8]
    ov96_02216934(r7, r4);
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    // str r6, [sp]
    // add r1, sp, #0x24
    ov96_02216A54(r7);
    // ldr r0, [sp, #0xc]
    ov96_0221996C(r4, ((*((u8*)(r5 + 4)) << 0x18) >> 0x1e), 0);
}




void ov96_02216C00(void) {
    // mvn r0, r0
}




void ov96_02216C1C(void) {
    // mvn r0, r0
}




void ov96_02216C38(void) {
    // str r0, [sp, #4]
    // str r2, [sp, #0xc]
    // str r1, [sp, #8]
    // add r2, sp, #0x88
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetHeapAllocPtr4(0, 0);
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    PlaySE(0x000008D4, 0x000003B9);
    // ldr r1, [sp, #4]
    // ldr r5, [sp, #8]
    // ldr r2, [sp, #8]
    // str r6, [sp, #0x3c]
    // and r2, r3
    // ldr r1, [sp, #4]
    // strb r2, [r1, r0]
    // add r4, #0x10
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // ldr r0, [sp, #0xc]
    PokeathlonCourse_GetParticipantCount(0xff, (*((u8*)(r1 + 0x000003B9)) & ~(1)), (1 | (*((u8*)(r1 + 0x000003B9)) & ~(1))), ((((*((u32*)(1 + 0x1c)) << 0x18) >> 0x1f) << 0x18) >> 0x18));
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x48]
    GF_AssertFail(1, 0);
    GF_AssertFail();
    // str r0, [sp, #0x34]
    // add r0, #0xe4
    // and r1, r0
    // ldr r0, [sp, #0x34]
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0x3c]
    // add r0, r1, r0
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0x30]
    ov96_021EAA04(*((u32*)((((*((u8*)(r5 + 4)) << 0x18) << 0x18) >> 0x18) + 0x1c)), ((*((u8*)(r5 + 4)) << 0x18) >> 0x1e));
    // str r0, [sp, #0x54]
    // str r0, [r4]
    GF_AssertFail();
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    _s32_div_f((*((u32*)(((*((u8*)(r5 + 4)) << 0x18) >> 0x1e) + 0x1c)) + 2), 3);
    // ldr r0, [sp, #0x3c]
    // add r0, r1, r0
    // lsr r1, r0
    // and r0, r1
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x38]
    _s32_div_f((0 + 1), 3);
    // ldr r0, [sp, #0x3c]
    // add r0, r1, r0
    // lsr r1, r0
    // and r0, r1
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x28]
    ov96_02219770(*((u32*)3), r7, 0);
    // add r0, #0xe4
    // str r1, [sp, #0x50]
    // ldr r0, [sp, #0xc]
    ov96_021E5F24(((*((u8*)(r5 + 2)) << 0x18) >> 0x1e), 0);
    // ldr r1, [sp, #0x58]
    // add r0, r1, r0
    ov96_02215884(0x000007F8, 4, 0xa);
    // str r0, [sp, #0x50]
    PlaySE((0x8d << 4));
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // ldr r1, [sp, #0x58]
    // add r0, r1, r0
    ov96_02215884(0x000007F8, 0xa, 0xf);
    // str r0, [sp, #0x50]
    PlaySE(0x000008D2);
    // ldr r0, [sp, #0x50]
    // ldr r1, [sp, #8]
    // add r1, r1, r0
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x74]
    // sub r1, r7, r0
    // bpl _02216E2E
    // neg r1, r1
    // str r0, [sp, #0x64]
    // add r0, r1, r0
    // str r0, [sp, #0x64]
    // asr r0, r0, #0x10
    // str r0, [sp, #0x44]
    // sub r1, r3, r2
    // bpl _02216E42
    // neg r1, r1
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x74]
    // ldr r0, [sp, #0x44]
    // add r0, r0, r7
    // asr r1, r0, #0x10
    // ldr r2, [sp, #0x40]
    // add r2, r2, r3
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x14)), (*((u8*)(r1 + 1)) << 0x10), (0x1e << 0x10));
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r4 + 0x14)));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 1);
    // add r0, #0xe4
    // and r0, r1
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xe4
    // and r0, r1
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0x54]
    ov96_021EAC0C(r4, (((*((u8*)(r5 + 5)) << 0x1b) >> 0x1e) + 1));
    // ldr r0, [sp, #0x58]
    // ldr r3, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // add r7, #0x3c
    // add r3, r7, r3
    ov96_021EAF60(*((u32*)(*((u32*)(r4 + 0x18)) + 0x1c)), ((*((u8*)(r5 + 4)) << 0x1c) >> 0x1c), 1, (r3 << 6));
    // ldr r0, [sp, #0x58]
    // ldr r3, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // add r7, #0x1c
    // add r3, r7, r3
    ov96_021EAF60(*((u32*)(*((u32*)(r4 + 0x18)) + 0x1c)), 1, (r3 << 6));
    // ldr r0, [sp, #0xc]
    ov96_021E5F24(*((u32*)(r4 + 0x18)), ((*((u8*)(r5 + 4)) << 0x1c) >> 0x1c));
    PlaySE_SetPitch(0x000008D1, (1 << 8));
    sub_02006118(0x000008D5, 0x40);
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x34]
    ov96_0221935C(*((u32*)(r4 + 0x18)), ((r6 << 0x18) >> 0x18));
    PlaySE(0x000008D3);
    // add r1, #0xb
    ManagedSprite_SetAnimNoRestart(*((u32*)(r4 + 4)), ((((*((u8*)(r5 + 5)) << 0x1b) >> 0x1e) << 0x10) >> 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 1);
    // add r1, #0xf
    ManagedSprite_SetAnim(*((u32*)(r4 + 4)), ((((*((u8*)(r5 + 5)) << 0x1b) >> 0x1e) << 0x10) >> 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 1);
    ManagedSprite_IsAnimated(*((u32*)(r4 + 4)));
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 4)), *((u8*)r5), *((u8*)(r5 + 1)), (0x1e << 0x10));
    // ldr r0, [sp, #0x54]
    ov96_021EAC5C(((*((u8*)(r5 + 4)) << 0x1c) >> 0x1c), 0xc);
    // ldr r0, [sp, #0x54]
    ov96_021EAB38(0, *((u8*)(r5 + 1)));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 8)), 0);
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // lsr r2, r0
    // and r0, r2
    // sub r2, r3, r2
    // sub r2, #0x18
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 8)), (((*((u8*)(r5 + 2)) << 0x1a) >> 0x1a) << 0x10), (0x1e << 0x10));
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    ManagedSprite_SetAnimNoRestart(*((u32*)(r4 + 8)), 1);
    IsSEPlaying((0x89 << 4));
    PlaySE((0x89 << 4));
    ManagedSprite_SetAnimNoRestart(*((u32*)(r4 + 8)), 9);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 8)), 0);
    // str r0, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #0xc]
    ov96_02216AA4(r5, r4, *((u32*)r2));
    // add r0, #0xe4
    // add r0, #0xe4
    // add r0, #0xe4
    // str r1, [r0]
    // add r1, #0xe1
    // strb r0, [r1]
    // add r1, #0xdc
    // str r0, [r1]
    PlaySE(0x0000089E, r4);
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    ov96_0221996C(*((u32*)r0), ((r6 << 0x18) >> 0x18), 1);
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    // ldr r0, [sp, #0x48]
    // add r0, #0xe4
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xe4
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x10)), *((u8*)r5), *((u8*)(r5 + 1)), (0x1e << 0x10));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    ManagedSprite_ResetSpriteAnimCtrlState(*((u32*)(r4 + 0x10)));
    // ldr r0, [sp, #0xc]
    ov96_021E5F24();
    ov96_022193CC(0x000008B6, 0);
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x34]
    ov96_0221996C(*((u32*)r0), ((r6 << 0x18) >> 0x18), 0);
    // ldr r0, [sp, #0x54]
    ov96_021EAB38(1);
    // add r0, #0xe4
    // and r1, r0
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xe4
    // and r1, r0
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0x54]
    ov96_021EB01C(r4, *((u8*)r5), *((u8*)(r5 + 1)), 1);
    // sub r2, r2, r3
    // ldr r0, [sp, #0x54]
    ov96_021EB01C(*((u8*)r5), *((u8*)(r5 + 1)), 0);
    // add r0, #0xe4
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x58]
    ov96_02219940(*((u32*)(r1 + (6 << 6))), ((r6 << 0x18) >> 0x18), ((((*((u32*)r4) << 0x10) >> 0x1e) << 0x18) >> 0x18));
    // add r0, #0xe4
    // and r1, r0
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r1, [sp, #0x58]
    ov96_02219794(*((u32*)(*((u32*)r4) + (6 << 6))), ((r6 << 0x18) >> 0x18), ((((r2 << 0x10) >> 0x1e) << 0x18) >> 0x18));
    // add r0, #0xe4
    // and r1, r0
    // add r0, #0xe4
    // str r1, [r0]
    // ldrsb r0, [r4, r0]
    // add r0, #0xe1
    // strb r1, [r0]
    // ldrsb r0, [r4, r0]
    // ldr r0, [sp, #0x54]
    ov96_021EAB38(0xe1, 0);
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x80]
    // add r0, #0xdc
    // sub r1, r1, r0
    // add r0, #0xdc
    // str r1, [r0]
    // add r0, #0xdc
    _fflt(*((u32*)r4), *((u32*)r4));
    _fdiv(0x45800000);
    // ldr r0, [sp, #0x54]
    ov96_021EB10C(r0, r0);
    // add r0, sp, #0x80
    // str r0, [sp]
    // ldr r0, [sp, #0x54]
    // ldr r1, [sp, #0x84]
    // ldr r2, [sp, #0x80]
    // add r3, sp, #0x84
    ov96_021EB06C();
    // ldr r0, [sp, #0x80]
    // ldrsb r1, [r4, r0]
    // sub r0, r0, r1
    // add r2, r3, r2
    // ldr r0, [sp, #0x54]
    ov96_021EB01C(6, *((u8*)r5), (6 << 2), 1);
    // sub r1, r0, r1
    _fflt((0xc * *((u8*)(r5 + 1))), *((u8*)(r5 + 1)));
    _fdiv(0x45800000);
    _fsub(0x3F99999A, r0);
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x2c]
    // add r1, #0xe4
    _f2d((*((u32*)r4) << 0x18));
    // str r0, [sp, #0x5c]
    // str r1, [sp, #0x1c]
    _dfltu(r7);
    _dmul(0x9999999A, 0x3FB99999, r0, r1);
    _dsub(0x9999999A, 0x3FE99999, r0, r1);
    // ldr r0, [sp, #0x5c]
    // ldr r1, [sp, #0x1c]
    _dmul(r0, r1);
    _d2f();
    // str r0, [sp, #0x4c]
    // add r0, #0xe4
    // ldr r1, [sp, #0x68]
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x34]
    ov96_0221935C(((*((u8*)(r5 + 4)) << 0x1c) >> 0x1c), ((r6 << 0x18) >> 0x18));
    // add r1, #0xe4
    // ldr r0, [sp, #0xc]
    ov96_021E5F24(*((u8*)(r0 + 0x18)), ((*((u32*)r4) << 0x18) >> 0x18));
    PlaySE(0x000005F3);
    PlaySE(0x0000060A);
    // add r0, #0xe4
    // ldr r0, [sp, #0x2c]
    _f2d((*((u32*)r4) << 0x18));
    // str r0, [sp, #0x60]
    // str r1, [sp, #0x14]
    _dfltu(r7);
    _dmul(0x9999999A, 0x3FB99999, r0, r1);
    _dsub(0x9999999A, 0x3FE99999, r0, r1);
    // ldr r0, [sp, #0x60]
    // ldr r1, [sp, #0x14]
    _dmul(r0, r1);
    _d2f();
    // str r0, [sp, #0x2c]
    // add r0, #0xe4
    // ldr r1, [sp, #0x6c]
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xe4
    // ldr r0, [sp, #0x54]
    ov96_02218510(((*((u32*)r4) << 0x18) >> 0x18), 1);
    // add r0, #0xe4
    // ldr r0, [sp, #0x70]
    // add r0, #0xe4
    // str r1, [r0]
    // ldr r0, [sp, #0x54]
    ov96_02218510(r4, 0);
    // ldr r0, [sp, #0x54]
    // ldr r1, [sp, #0x4c]
    // ldr r2, [sp, #0x2c]
    ov96_021EB10C();
    *((u32*)(r4 + 0x18)) = ((*((u8*)(r5 + 4)) << 0x1c) >> 0x1c);
    // ldr r0, [sp, #0x3c]
    // add r4, #0xe8
    // str r0, [sp, #0x3c]
    _02216CA6((((*((u8*)(r5 + 4)) << 0x1c) >> 0x1c) + 3));
    // add r5, sp, #0x88
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x58]
    // add r1, r1, r4
    ov96_021EAA04(*((u32*)(r0 + 0x1c)), ((((*((u8*)(r1 + 4)) << 0x18) >> 0x1e) << 0x18) >> 0x18));
    // ldr r1, [sp, #8]
    // add r3, sp, #0x7c
    // str r1, [sp, #0x7c]
    // ldr r1, [sp, #8]
    // str r1, [sp, #0x78]
    // add r1, sp, #0x78
    // str r1, [sp]
    // ldr r1, [sp, #0x7c]
    // ldr r2, [sp, #0x78]
    ov96_021EB06C(*((u8*)(*((u8*)r1) + 1)));
    // ldr r0, [sp, #0x78]
    // strb r0, [r5]
    // ldr r0, [sp, #8]
    *((u32*)(r5 + 4)) = r7;
    // str r0, [sp, #8]
    // add r5, #8
    // str r0, [sp]
    // add r0, sp, #0x88
    MATH_QSort(0, 4, 8, ov96_02216C00);
    // add r4, sp, #0x88
    ov96_021EABA8(*((u32*)(r4 + 4)), (0 + 7));
    // add r4, #8
}




void ov96_02217544(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x10]
    // str r3, [r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x1c]
    // add r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #8]
    // str r0, [r1]
    // add r4, #0x1c
    // add r5, #0x3c
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x14]
    // add r4, #0x40
    // add r5, #0x40
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, #0xe8
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
}




void ov96_0221768C(void) {
    PokeathlonCourse_GetDataCopyArea(r1);
    // add r0, #0xf0
    ov96_021E8A20();
    // str r0, [sp, #8]
    PokeathlonCourse_GetHeapAllocPtr4(r4);
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    ov96_02216C38(r7, r4);
    // ldr r1, [sp, #8]
    ov96_021E6454(r4, ((*((u32*)(r1 + 0x20)) << 0xd) >> 0x10));
    // ldr r0, [sp, #8]
    PlaySE(0x000006D7, ((*((u32*)(r0 + 0x20)) << 0xd) >> 0x10));
    ov96_021E5F24(r4);
    // ldr r0, [sp, #8]
    // add r0, r0, r2
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022176FC: ; jump table
    GF_AssertFail((*((u16*)((*((u8*)(r0 + 5)) << 0x1d) + 6)) << 0x10), 6, (r0 * 6));
    ManagedSprite_SetAnimNoRestart(*((u32*)(r7 + 0xc)), r5);
    PlaySE(0x0000089B);
    PlaySE(0x0000089C);
    // ldr r3, [sp, #8]
    // strb r4, [r7, r0]
    // add r2, sp, #0xc
    *((u8*)(r2 + 1)) = 0;
    // strb r0, [r2]
    // str r0, [sp]
    // add r0, sp, #0xc
    MATH_QSort(0, 4, 2, ov96_02216C1C);
    // ldr r5, [sp, #8]
    // add r3, sp, #0xc
    ov96_0221966C(*((u32*)r7), ((0 << 0x18) >> 0x18), *((u8*)(r5 + 3)));
    // strh r1, [r4, r0]
    // ldr r0, [sp, #8]
    _u32_div_f(((*((u32*)((0x3b << 4) + 0x20)) << 0xd) >> 0x10), 0x1e);
    // ldr r0, [sp, #4]
    ov96_022196E4(*((u32*)(r0 + (6 << 6))), r0, (6 << 6));
}




void ov96_022177D8(void) {
    // add r6, #0x10
    // add r6, #0xe8
}




void ov96_02217820(void) {
    // str r0, [sp]
    // ldr r7, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r7, #0xe8
    // str r0, [sp, #4]
    // ldr r0, [sp]
}




void ov96_0221785C(void) {
    // cmp r0, #0xb
    // bne _02217864
}




void ov96_02217868(void) {
    ov96_022186CC(r1);
    // and r1, r2
    *((u32*)(r4 + 0x60)) = (((r0 << 0x1c) >> 0xc) | 0xFFF0FFFF);
}




void ov96_02217890(void) {
    // cmp r0, #6
    // beq _02217898
    // cmp r0, #0xb
    // bne _0221789C
}




void ov96_022178A0(void) {
    // str r2, [sp, #4]
    ov96_0221785C(*((u32*)(r0 + 0x14)), *((u32*)(r1 + 0x14)));
    _fflt(r7);
    _fmul(0x40400000, r0);
    _ffix();
    _fflt(r6);
    _fmul((1 << 0x1e), r0);
    _ffix();
    // and r0, r2
    // and r1, r2
    *((u32*)(r4 + 0x60)) = (*((u32*)(r4 + 0x60)) | 0xc8);
    // str r0, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 3);
    // str r0, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 4);
    // and r0, r2
    // and r1, r2
    *((u32*)(r4 + 0x60)) = (*((u32*)(r4 + 0x60)) | 0xc8);
    // str r0, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 3);
    // str r0, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 4);
    // add r2, #0x44
    // ldr r1, [sp, #4]
    VEC_MultAdd((3 << 0xc), r5, r5);
    // add r0, #0x44
    ov96_02215958(r5, (3 << 0xe));
    // ldr r1, [sp, #4]
    ov96_02217868(r4);
    ov96_02217890(*((u32*)(r4 + 0x14)));
    // add r0, #0x5d
    // strb r1, [r0]
    // add r0, #0x5d
    // strb r1, [r0]
    ov96_02219174(r5, r6);
    ov96_02217890(*((u32*)(r4 + 0x14)));
    *((u32*)(r5 + 0x10)) = r4;
    *((u32*)(r5 + 0x10)) = *((u32*)(r4 + 0x10));
    *((u32*)(r5 + 0x60)) = ((2 << 0x1a) | *((u32*)(r5 + 0x60)));
    *((u32*)(r5 + 0x18)) = *((u32*)(r4 + 0x14));
    ov96_02217890(*((u32*)(r4 + 0x14)), *((u32*)(r5 + 0x60)));
    // and r1, r0
    *((u32*)(r5 + 0x60)) = ((1 << 0xe) | *((u32*)(r5 + 0x60)));
    // and r1, r0
    *((u32*)(r5 + 0x60)) = ((2 << 0xe) | *((u32*)(r5 + 0x60)));
    // and r1, r2
    *((u32*)(r5 + 0x60)) = ((((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) + 1) << 0x1e) >> 0x12) | 0xFFFFCFFF);
    *((u32*)(r5 + 0x64)) = 4;
    // and r1, r0
    *((u32*)(r5 + 0x60)) = ((0x7FFFFFFF + 1) | 0xFFFFCFFF);
    GF_AssertFail(*((u32*)(r4 + 0x14)), 1, *((u32*)(r5 + 0x60)));
    // lsl r1, r0
    // tst r0, r1
    GF_AssertFail(0x00000103, 1, 0);
}




void ov96_02217AE4(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #8]
    // ldr r1, [sp, #8]
    // add r5, sp, #0x14
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r6, sp, #0x58
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r6, #0x10
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x58
    // add r3, sp, #0x14
}




void ov96_02217B84(void) {
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r0, sp, #0x44
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    ReadWholeNarcMemberByIdPair(0xaa, 0x13);
    // ldr r0, [sp, #0xc]
    GF_AssertFail();
    // ldr r0, [sp, #0x10]
    ov96_0221918C();
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    _s32_div_f(0, 3);
    _s32_div_f(r4, 3);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // add r1, r0, r1
    // ldr r0, [sp, #0x24]
    // add r6, r1, r0
    // ldr r0, [sp, #0xc]
    ov96_021EAA04(*((u32*)((0xa8 << 4) + 0x1c)), ((r4 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x24]
    ov96_021EAB38(r0, ((0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x24]
    ov96_021E60C0(r7);
    ov96_021E6138();
    // add r0, sp, #0x44
    // add r2, r0, r1
    // sub r1, #8
    ov96_021EAF70(r5, *((u32*)r2), *((u32*)(r2 - 4)));
    // ldr r0, [sp, #0xc]
    ov96_021EAA04(*((u32*)(r0 + 0x1c)), ((r4 << 0x18) >> 0x18));
    ov96_021EAA20();
    ov96_021EABE0(r5, 2);
    ov96_02218510(r5, 1);
    // add r1, r1, r0
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #0x20]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    ov96_021E5F24(2, ov96_0221D6E4, ov96_0221D6E4);
    // ldr r1, [sp, #0x20]
    // add r0, sp, #0x30
    *((u16*)(r0 + 0x10)) = r1;
    // ldr r1, [sp, #0x1c]
    *((u16*)(r0 + 0x12)) = r1;
    ov96_021EAC0C(r5, 2);
    ov96_021EABA8(r5, 7);
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    ov96_021EAF94(r5);
    ov96_021E6104();
    ov96_021EAF6C(r5, r0);
    // add r0, sp, #0x38
    // str r0, [sp]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // add r3, sp, #0x3c
    ov96_021EB0A4(r5);
    // ldr r1, [sp, #0x2c]
    // and r1, r4
    *((u32*)(r6 + 0xc)) = ((*((u32*)(r6 + 0xc)) & ~(r1)) | 0xf);
    // str r5, [r6]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x24]
    ov96_0221935C(((*((u32*)(r6 + 0xc)) & ~(r1)) | 0xf), r7);
    *((u32*)(r6 + 4)) = r0;
    *((u32*)(r6 + 8)) = *((u32*)(r0 + 8));
    // ldr r0, [sp, #0xc]
    SpriteManager_GetSpriteList(*((u32*)(*((u32*)(r0 + 8)) + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x40
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    ov96_021E62AC(1, 0, *((u32*)(r2 + 0x18)), r0);
    // ldr r1, [sp, #0xc]
    // add r4, r1, r0
    // sub r2, #0xc
    // add r1, r1, r2
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // add r0, #0x68
    // add r7, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    *((u32*)(r4 + 8)) = r1;
    *((u32*)(r4 + 4)) = r7;
    *((u32*)(r4 + 0xc)) = *((u32*)(r1 + (6 << 6)));
    // ldr r0, [sp, #0x10]
    // str r0, [r4]
    // add r0, sp, #0x30
    // str r0, [sp]
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // add r3, sp, #0x34
    ov96_021EB0A4(*((u32*)*((u32*)(r4 + 4))), 0, 2);
    ov96_02218578(r4, 1);
    // add r7, #0xa8
    // and r1, r0
    *((u32*)(r4 + 0x60)) = ((2 << 0x10) | *((u32*)(r4 + 0x60)));
    // ldr r0, [sp, #0x34]
    *((u32*)(r4 + 0x2c)) = (((2 << 0x10) | *((u32*)(r4 + 0x60))) << 0xc);
    // ldr r0, [sp, #0x30]
    *((u32*)(r4 + 0x30)) = ((((2 << 0x10) | *((u32*)(r4 + 0x60))) << 0xc) << 0xc);
    // ldr r0, [sp, #0x34]
    *((u32*)(r4 + 0x20)) = (((((2 << 0x10) | *((u32*)(r4 + 0x60))) << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #0x30]
    *((u32*)(r4 + 0x24)) = ((((((2 << 0x10) | *((u32*)(r4 + 0x60))) << 0xc) << 0xc) << 0xc) << 0xc);
    // and r1, r0
    *((u32*)(r4 + 0x60)) = (((r5 << 0x1e) >> 0xa) | *((u32*)(r4 + 0x60)));
    *((u32*)(r4 + 0x54)) = 0;
    // add r1, #0x5f
    // strb r0, [r1]
    // ldr r1, [sp, #0x14]
    // str r5, [r1, r0]
    // ldr r0, [sp, #0x18]
    // add r0, #0xa8
    // str r0, [sp, #0x18]
    // add r0, #0xa8
    // add r4, #0xa8
    // str r0, [sp, #0x14]
}




void ov96_02217DBC(void) {
}




void ov96_02217DC8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02217DDC: ; jump table
    // add r4, #0x59
    // strb r0, [r4]
}




void ov96_02217E08(void) {
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02217E2C: ; jump table
}




void ov96_02217E7C(void) {
    // str r0, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r1, #0x1c
    // ldr r7, [sp, #4]
    // add r4, r0, r1
    // ldrsb r0, [r4, r0]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // add r5, r1, r0
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r0
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, #0x2c
    // str r0, [sp, #0x10]
    // add r0, sp, #0x24
    // str r1, [r0]
    // ldr r0, [sp]
    // strb r1, [r0]
    // strb r0, [r7, r6]
    // ldr r0, [sp, #0x10]
    // add r1, #0x2c
    // add r2, sp, #0x24
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // and r0, r1
    // sub r0, #0x20
    // str r0, [sp, #0x24]
    // and r0, r1
    // sub r0, #0x20
    // str r0, [sp, #0x28]
    // add r0, sp, #0x24
    // add r2, sp, #0x24
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // mvn r0, r0
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    // mvn r0, r0
    // str r0, [sp, #0x28]
    // add r2, sp, #0x24
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp]
    // strb r1, [r0]
    // strb r0, [r7, r6]
    // ldr r0, [sp]
    // add r5, #0xa8
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r4, #0xa8
    // str r0, [sp, #0xc]
}




void ov96_02217FD0(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r6, [sp, #4]
    // ldr r5, [sp, #4]
    // add r6, #0xc
    // str r0, [sp, #0x14]
    // add r0, #0x5c
    // add r5, #0x74
    // add r4, #0x60
    // str r0, [sp, #0x14]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldrsb r0, [r1, r0]
    // ldr r0, [sp, #0x14]
    // strb r1, [r0]
    // ldrsb r0, [r6, r0]
    // add r3, #0x2c
    *((u32*)(r5 + 8)) = (5 << 0xe);
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // and r0, r1
    // str r0, [r4]
    // add r1, #0x5c
    // strb r0, [r1]
    // and r1, r0
    // and r0, r1
    // str r0, [r4]
    // str r0, [sp]
    ov96_021E8228(*((u32*)r6), ((((*((u32*)(r6 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r6 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 1);
    // str r0, [sp, #8]
    _fflt(*((u32*)(r5 + 8)));
    // ldr r1, [sp, #8]
    _fadd();
    _ffix();
    // ldr r1, [sp, #0xc]
    *((u32*)(r5 + 8)) = r0;
    *((u32*)(r5 + 8)) = r1;
    // add r5, #0x10
    // ldr r0, [sp, #4]
    // add r0, #0xa8
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void ov96_022180CC(void) {
    // str r0, [sp]
    // ldr r5, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // str r1, [r0]
    *((u32*)(0 + 4)) = 0;
    *((u32*)(0 + 8)) = 0;
    // add r0, sp, #0xc
    // str r1, [r0]
    *((u32*)(0 + 4)) = 0;
    *((u32*)(0 + 8)) = 0;
    // ldrsh r0, [r5, r0]
    // add r6, #8
    // add r4, #0xc
    _fflt((0 << 0xc), 0);
    _fadd(r7, r0);
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // str r0, [sp, #0x18]
    // ldrsh r0, [r5, r0]
    _fflt((2 << 0xc));
    _fadd(r7, r0);
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // str r0, [sp, #0x1c]
    // ldrsh r0, [r5, r0]
    _fflt((4 << 0xc));
    _fadd(r7, r0);
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // str r0, [sp, #0xc]
    // ldrsh r0, [r5, r0]
    _fflt((6 << 0xc));
    _fadd(r7, r0);
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // str r0, [sp, #0x10]
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r1]
    ov96_022158D4(0, 2);
    ov96_0221862C(r4);
    ov96_0221910C(r4);
    ov96_021E6104();
    ov96_021E6104();
    _fflt((r0 << 0xc));
    _fadd(r7, r0);
    ov96_021E6104();
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // add r4, #0x2c
    // add r1, sp, #0x18
    ov96_022158EC(r4, r0);
    // str r0, [r6]
    // asr r3, r0, #0x10
    // asr r2, r0, #0x10
    // and r0, r1
    // str r0, [r6]
    // ldrsh r0, [r5, r0]
    // sub r0, r0, r3
    // bpl _02218258
    // neg r0, r0
    // ldrsh r0, [r5, r0]
    // sub r0, r0, r2
    // bpl _02218266
    // neg r0, r0
    ov96_022186B8(r4, r5);
    // add r0, sp, #0xc
    // add r1, sp, #0x18
    ov96_022158EC(((*((u32*)(r4 + 0x60)) << 5) >> 0x1f), ((*((u32*)(r4 + 0x60)) << 3) >> 0x1f), (1 << 0xe));
    // and r1, r0
    *((u32*)(r4 + 0x60)) = ((2 << 0x1c) | *((u32*)(r4 + 0x60)));
    // add r0, sp, #0xc
    // add r1, sp, #0x18
    ov96_022158EC(((2 << 0x1c) | *((u32*)(r4 + 0x60))), *((u32*)(r4 + 0x60)), (3 << 0xe));
    // and r0, r1
    *((u32*)(r4 + 0x60)) = 0xDFFFFFFF;
    *((u16*)(r4 + 0x1c)) = *((u16*)r5);
    *((u16*)(r4 + 0x1e)) = *((u16*)(r5 + 2));
    // and r0, r1
    // str r0, [r6]
    // ldr r1, [sp, #4]
    // add r0, #0xc
    ov96_02218B1C(r5, *((u32*)r6));
    // ldr r0, [sp, #8]
    // add r5, #0xa8
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    ov96_02217E7C((r0 + 1));
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov96_02217FD0();
}




void ov96_02218330(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    PokeathlonCourse_GetDataCopyArea(r1);
    // add r0, #0x28
    ov96_021E8A20();
    // str r0, [sp, #8]
    // str r2, [sp, #0x14]
    // ldr r0, [sp]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0xc]
    // mov ip, r2
    // str r2, [sp, #0x20]
    // str r2, [sp, #0x1c]
    // ldr r1, [sp, #8]
    // add r0, #0x1c
    // str r2, [sp, #0x18]
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    *((u32*)(r0 + 0x64)) = (*((u32*)(r0 + 0x64)) - 1);
    // and r5, r4
    // and r4, r5
    *((u32*)(r0 + 0x60)) = 0xFFFF3FFF;
    // ldr r5, [sp, #0x14]
    *((u8*)(r1 + 4)) = ((*((u8*)(r1 + 4)) & ~(*((u32*)(r0 + 0x60)))) | ((((((*((u32*)(r0 + 0x60)) << 0x12) >> 0x1e) << 0x18) >> 0x18) << 0x1e) >> 0x1a));
    // ldr r5, [sp, #0x10]
    *((u8*)(r1 + 2)) = ((*((u8*)(r1 + 2)) & ~(((((((*((u32*)(r0 + 0x60)) << 0x12) >> 0x1e) << 0x18) >> 0x18) << 0x1e) >> 0x1a))) | ((((((*((u32*)(r0 + 0x60)) << 0x10) >> 0x1e) << 0x18) >> 0x18) << 0x1e) >> 0x18));
    // ldr r5, [sp, #0xc]
    *((u8*)(r1 + 4)) = ((*((u8*)(r1 + 4)) & ~(((((((*((u32*)(r0 + 0x60)) << 0x10) >> 0x1e) << 0x18) >> 0x18) << 0x1e) >> 0x18))) | ((((((*((u32*)(r0 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18) << 0x1e) >> 0x18));
    *((u8*)(r1 + 5)) = ((*((u8*)(r1 + 5)) & ~(0x18)) | (((((((*((u32*)(r0 + 0x60)) << 0xc) >> 0x1c) - 1) << 0x18) >> 0x18) << 0x1e) >> 0x1b));
    // strb r2, [r1]
    *((u8*)(r1 + 1)) = 0;
    // mov r2, ip
    // asr r2, r2, #0xc
    // and r2, r3
    *((u8*)(r1 + 2)) = (0x3f | (*((u8*)(r1 + 2)) & ~(0)));
    // ldr r2, [sp, #0x20]
    // and r2, r3
    *((u8*)(r1 + 4)) = (0xf | (*((u8*)(r1 + 4)) & ~((0x3f | (*((u8*)(r1 + 2)) & ~(0))))));
    // ldr r3, [sp, #0x1c]
    *((u8*)(r1 + 3)) = ((*((u32*)(r0 + 0x60)) << 0x14) >> 0x14);
    *((u8*)(r1 + 5)) = ((*((u8*)(r1 + 5)) & ~(((*((u32*)(r0 + 0x14)) << 0x18) >> 0x18))) | ((((((*((u32*)(r0 + 0x60)) << 6) >> 0x1e) << 0x18) >> 0x18) << 0x1e) >> 0x19));
    // ldr r2, [sp, #0x18]
    // add r2, #0x5f
    // and r2, r3
    *((u8*)(r1 + 5)) = (7 | (*((u8*)(r1 + 5)) & ~(((*((u8*)(r1 + 5)) & ~(((*((u32*)(r0 + 0x14)) << 0x18) >> 0x18))) | ((((((*((u32*)(r0 + 0x60)) << 6) >> 0x1e) << 0x18) >> 0x18) << 0x1e) >> 0x19)))));
    // str r3, [sp, #4]
    // and r2, r3
    *((u32*)(r0 + 0x60)) = *((u32*)(r0 + 0x60));
    // add r0, #0xa8
    // ldr r0, [sp, #8]
    // ldr r6, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r6, #0x1c
    *((u32*)(((0x80 << 0x1f) >> 0x18) + 0x1c)) = ((*((u32*)(r0 + 0x1c)) & ~(0x80)) | ((0x80 << 0x1f) >> 0x18));
    // ldr r0, [sp, #8]
    *((u32*)((((*((u32*)(r0 + 0x1c)) & ~(0x80)) | ((0x80 << 0x1f) >> 0x18)) << 0x18) + 0x1c)) = ((((*((u32*)(r0 + 0x1c)) & ~(0x80)) | ((0x80 << 0x1f) >> 0x18)) << 0x18) >> 0x18);
    _s32_div_f(0, 3, *((u32*)(r0 + 0x60)), 0x7FFFFFFF);
    _s32_div_f(r5, 3);
    // ldr r1, [sp]
    // add r0, r1, r0
    // add r0, r2, r0
    // add r0, #0x8c
    // asr r0, r0, #0xc
    // lsl r1, r4
    // add r1, r2, r1
    // str r0, [r6]
}




void ov96_02218510(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r1, r0, r1
    // asr r1, r1, #1
    // str r1, [sp]
    // sub r1, r0, r4
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, r4, r0
    // str r0, [sp, #4]
    // add r1, r0, r1
    // asr r1, r1, #1
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov96_02218578(void) {
    // add r2, #0x5e
    // strb r3, [r2]
    // add r2, #0x59
    // strb r3, [r2]
}




void ov96_02218598(void) {
    // sub r1, r1, r0
    // bpl _022185AA
    // neg r1, r1
    // add r0, sp, #0x20
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // add r3, sp, #0x1c
    // add r0, sp, #0x14
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // add r3, sp, #0x10
    // ldr r0, [sp, #0xc]
    // add r0, #8
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #8
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x28
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x1c
    // add r1, sp, #0x10
    // add r0, sp, #0x28
}




void ov96_0221862C(void) {
    ov96_02218688();
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r4, #0x2c
    // ldrsh r0, [r0, r2]
    // str r0, [sp]
    // ldrsh r0, [r0, r2]
    // ldrsh r2, [r3, r2]
    // str r0, [sp, #4]
    ov96_022158EC(r4, ((((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18) * 6) << 0xc), ov96_0221D70C);
}




void ov96_02218688(void) {
    // beq _02218694
    // beq _0221869E
    // beq _022186A8
    // cmp r0, #1
    // bne _022186B2
}




void ov96_022186B8(void) {
    // ldrsh r2, [r1, r2]
    // ldrsh r1, [r1, r2]
}




void ov96_022186CC(void) {
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0xc
    // stmia r4!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r4]
    // str r4, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r4, [sp, #4]
    CalcAngleBetweenVecs(r4, r4, r0);
}




void ov96_02218744(void) {
}




void ov96_02218784(void) {
    // add r1, r0, r1
    // add r1, r1, r0
    // strb r0, [r1]
}




void ov96_022187A8(void) {
    // str r1, [sp]
    // add r0, #0x20
    // add r1, #0x2c
    // add r2, sp, #0x4c
    VEC_Subtract(r0);
    // add r0, sp, #0x4c
    VEC_Mag();
    GF_AssertFail(*((u32*)(r5 + 0x18)));
    // ldrsb r0, [r5, r0]
    // add r0, sp, #0x10
    // str r2, [r0]
    // add r1, sp, #0x1c
    *((u32*)(0x58 + 4)) = 0;
    // str r2, [r1]
    *((u32*)(0x58 + 8)) = 0;
    *((u32*)(r1 + 4)) = 0;
    // add r0, #0x44
    *((u32*)(r1 + 8)) = 0;
    VEC_Normalize(r5, 0);
    // add r1, sp, #0x1c
    // add r2, sp, #0x10
    // add r3, sp, #0x28
    VEC_MultAdd(r6);
    // ldr r0, [sp, #0x28]
    // neg r0, r0
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #0x28]
    // neg r2, r2
    // ldr r1, [sp, #0x28]
    // add r0, #0x44
    // str r2, [sp, #0x2c]
    ov96_02215944(r5);
    // add r0, #0x2c
    // add r1, #0x44
    VEC_Add(r5, r5, r5);
    // add r3, #0x2c
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    ov96_02218784(*((u32*)(r5 + 0x48)), ((((*((u32*)(r5 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), r5, r5);
    *((u32*)(r5 + 0x10)) = 0;
    // and r0, r1
    *((u32*)(r5 + 0x60)) = 0xF7FFFFFF;
    // ldrsb r0, [r5, r0]
    // add r0, sp, #0x4c
    // add r1, sp, #0x40
    VEC_Normalize(0x58, *((u32*)(r5 + 0x60)));
    // add r0, sp, #0x40
    ov96_022186CC(((*((u32*)(r5 + 0x60)) << 4) >> 0x1f));
    // and r1, r2
    *((u32*)(r5 + 0x60)) = (((r0 << 0x1c) >> 0xc) | 0xFFF0FFFF);
    // asr r1, r0, #0x1f
    // add r0, r3, r0
    // adc r1, r2
    // add r3, sp, #0x4c
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r2, sp, #4
    // str r1, [r2]
    *((u32*)(0 + 4)) = 0;
    *((u32*)(0 + 8)) = 0;
    // add r1, sp, #0x40
    // add r3, sp, #0x34
    VEC_MultAdd(*((u32*)(*((u32*)(*((u32*)(*((u32*)(r5 + 4)) + 4)) + 0xc)) << 0xb)), 0, 0, (*((u32*)(*((u32*)(*((u32*)(r5 + 4)) + 4)) + 0xc)) << 0xb));
    // add r0, #0x2c
    // add r1, sp, #0x34
    VEC_Add(r5, r5);
    // add r2, sp, #0x40
    // ldmia r2!, {r0, r1}
    // add r5, #0x38
    // stmia r5!, {r0, r1}
    // str r0, [r5]
}




void ov96_02218934(void) {
    // add r1, sp, #4
    // str r1, [sp]
    // asr r1, r3, #0xc
    // asr r2, r2, #0xc
    // add r3, sp, #8
    ov96_021EB06C(*((u32*)*((u32*)(1 + 4))), *((u32*)(r0 + 0x30)), *((u32*)(r0 + 0x2c)));
    // ldr r4, [sp, #4]
    // ldr r0, [sp, #8]
    _fflt((r0 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    _fflt((r4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r4 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r2, sp, #0xc
    // ldrsh r6, [r1, r3]
    // str r6, [r2]
    // ldrsh r6, [r1, r5]
    *((u32*)(r2 + 4)) = ((r6 << 0xc) << 0xc);
    // add r2, #0xc
    // ldr r5, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // sub r2, r7, r5
    // sub r0, r1, r0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul((0 + 1), (ov96_0221D6D4 + 4), 0);
    // add r0, r0, r2
    // adc r1, r3
    // ldr r1, [sp, #0x18]
    // sub r1, r1, r5
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (r1 << 0x14), (2 << 0xa), 0);
    // ldr r1, [sp, #0x10]
    // ldr r5, [sp, #0x24]
    // add r6, r0, r1
    // sub r2, r7, r5
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x28]
    // asr r3, r2, #0x1f
    // sub r0, r1, r0
    // asr r1, r0, #0x1f
    _ll_mul();
    // add r0, r0, r2
    // adc r1, r3
    // ldr r1, [sp, #0x30]
    // sub r1, r1, r5
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), (r1 << 0x14), (2 << 0xa), 0);
    // ldr r1, [sp, #0x28]
    // add r0, r0, r1
}




void ov96_02218A50(void) {
}




void ov96_02218A68(void) {
    // add r0, sp, #4
    // str r0, [sp]
    // ldrsh r1, [r1, r2]
    // ldrsh r2, [r3, r2]
    // add r3, sp, #8
    ov96_021EB0A4(*((u32*)*((u32*)(r0 + 4))), ov96_0221D6E4, (((*((u32*)(r0 + 0x60)) << 0xa) >> 0x1e) << 2), ov96_0221D6E6);
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x2c)) = (r0 << 0xc);
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    *((u32*)(r4 + 0x30)) = ((r0 << 0xc) << 0xc);
    // ldr r0, [sp, #8]
    // add r2, #0x44
    *((u32*)(r4 + 0x20)) = (((r0 << 0xc) << 0xc) << 0xc);
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x24)) = ((((r0 << 0xc) << 0xc) << 0xc) << 0xc);
    // str r0, [r3]
    *((u32*)(r3 + 4)) = 0;
    *((u32*)(r3 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // and r1, r0
    // and r1, r0
    // and r1, r0
    // and r0, r1
    *((u32*)(r4 + 0x60)) = 0xBFFFFFFF;
}




void ov96_02218AF0(void) {
    // sub r1, #9
    // sub r1, r2, r1
    // bpl _02218B10
    // add r1, r2, r1
}




void ov96_02218B1C(void) {
    // ldrsb r0, [r4, r2]
    // add r0, #0x5d
    // strb r3, [r0]
    // ldrsb r0, [r4, r2]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02218B4C: ; jump table
    ov96_02218F18(r0, 0x5d, (r0 - 1));
    ov96_022187A8(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02218B88: ; jump table
    GF_AssertFail(((*((u32*)(r4 + 0x60)) << 4) >> 0x1f));
    ov96_02218934(r4);
    ov96_02219030(r4);
    ov96_02218F58(r4, ((*((u32*)(r4 + 0x60)) << 2) >> 0x1f));
    // add r1, #0x1c
    ov96_02218DF8(r4, r4);
    // ldrsb r0, [r4, r1]
    // add r0, #0x5e
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    ov96_02218578(r4, 1, (r0 - 1));
    // ldrsb r0, [r4, r1]
    // add r0, #0x5b
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    ov96_02218A50(r4, 0x5b, (r0 - 1));
    ov96_02218578(r4, 4);
    ov96_02218934(r4);
    ov96_02219030(r4);
    // ldrsb r0, [r4, r1]
    // add r0, #0x58
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    ov96_02218578(r4, 1, (r0 - 1));
    ov96_02218934(r4);
    ov96_02219030(r4);
    ov96_02218F58(r4, *((u32*)(r4 + 0x60)));
    // add r1, #0x1c
    ov96_02218DF8(r4, r4);
    // ldrsb r0, [r4, r1]
    // add r0, #0x5a
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    // add r0, #0x5a
    // strb r1, [r0]
    ov96_02218578(r4, 9, (r0 - 1));
    // ldrsb r0, [r4, r1]
    // add r0, r3, r5
    // ldrsh r0, [r2, r0]
    *((u32*)(r4 + 0x50)) = (0x14 << 0xc);
    // ldrsb r0, [r4, r1]
    // add r0, #0x5a
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    // add r0, #0x5a
    // strb r1, [r0]
    ov96_02218578(r4, 0xa, ((0x14 << 0xc) + 1), ov96_0221D7D0);
    // ldrsb r0, [r4, r1]
    // add r0, #0x5a
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    // add r0, #0x5a
    // strb r1, [r0]
    ov96_02218578(r4, 0xb, (r0 - 1));
    ov96_02218FD4(r4);
    ov96_02218934(r4);
    ov96_02219030(r4);
    // sub r0, r0, r1
    *((u32*)(r4 + 0x50)) = r0;
    *((u32*)(r4 + 0x50)) = 0;
    // ldrsb r0, [r4, r1]
    // add r0, #0x5a
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    ov96_02218578(r4, 1, (0 - 1));
    // ldrsb r0, [r4, r1]
    // add r0, #0x59
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    // add r0, #0x59
    // strb r1, [r0]
    ov96_02218578(r4, 6, (r0 - 1));
    // ldrsb r0, [r4, r1]
    // add r0, #0x59
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    // add r3, #0x2c
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // add r3, sp, #0
    // str r0, [r2]
    // str r0, [r3]
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // add r2, #0x44
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ov96_02218578(r4, 7, r4, r4);
    // ldrsb r0, [r4, r1]
    // add r0, #0x59
    // strb r2, [r0]
    // ldrsb r0, [r4, r1]
    ov96_02218EB8(r4, 0x59, (r0 - 1));
    GF_AssertFail();
    ov96_02218AF0(r4);
}




void ov96_02218DF8(void) {
    // add r0, sp, #0
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    GF_AssertFail(*((u32*)(r0 + 0x14)), 0, 0);
    GF_AssertFail(((*((u32*)(r5 + 0x60)) << 3) >> 0x1f));
    GF_AssertFail(((*((u32*)(r5 + 0x60)) << 5) >> 0x1f));
    // and r0, r1
    *((u32*)(r5 + 0x60)) = 0xBFFFFFFF;
    // ldrsh r0, [r4, r0]
    // add r1, #0x2c
    // str r0, [sp]
    // ldrsh r0, [r4, r0]
    // add r2, #0x38
    // str r0, [sp, #4]
    // add r0, sp, #0
    VEC_Subtract((2 << 0xc), r5, r5);
    // add r0, #0x38
    VEC_Normalize(r5, r5);
    // add r1, #0x38
    // add r3, #0x44
    VEC_MultAdd((1 << 0xe), r5, r5, r5);
    // add r0, #0x38
    ov96_022186CC(r5);
    // and r1, r2
    *((u32*)(r5 + 0x60)) = (((r0 << 0x1c) >> 0xc) | 0xFFF0FFFF);
    // add r0, #0x59
    // strb r1, [r0]
    ov96_02218578(r5, 5, *((u32*)(r5 + 0x60)));
}




void ov96_02218EB8(void) {
    // add r3, sp, #0
    // str r0, [r3]
    // ldmia r3!, {r0, r1}
    // add r2, #0x44
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x2c
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov96_02218F18(void) {
    // add r2, sp, #0
    // str r0, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    // add r1, #0x38
    // add r3, sp, #0xc
    VEC_MultAdd(0x00000B33, r0);
    // add r0, #0x44
    // add r1, sp, #0xc
    VEC_Add(r4, r4);
    // add r0, #0x2c
    // add r4, #0x44
    VEC_Add(r4, r4, r4);
}




void ov96_02218F58(void) {
    GF_AssertFail(*((u32*)(r0 + 0x14)), 0);
    GF_AssertFail(((*((u32*)(r4 + 0x60)) << 3) >> 0x1f));
    GF_AssertFail(((*((u32*)(r4 + 0x60)) << 5) >> 0x1f));
    // and r0, r1
    *((u32*)(r4 + 0x60)) = 0xDFFFFFFF;
    // add r0, #0x5a
    // strb r1, [r0]
    // str r0, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 2);
    ov96_02218578(r4, 8);
}




void ov96_02218FD4(void) {
    // add r0, #0x5a
    // strb r1, [r0]
    // add r2, #0x2c
    // ldmia r2!, {r0, r1}
    // add r4, #0x20
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void ov96_02218FFC(void) {
    // sub r1, r1, r0
    // bpl _0221901C
    // asr r1, r0, #0xc
    // add r0, #0x58
    // strb r1, [r0]
}




void ov96_02219030(void) {
    // add r0, #0x5b
    // strb r1, [r0]
    // add r0, #0x58
    // strb r2, [r0]
    // sub r3, #0xa
    // bpl _02219056
    // and r1, r0
    // and r0, r3
    *((u32*)(r0 + 0x60)) = ((0xFFFFF000 >> 0x14) | *((u32*)(r0 + 0x60)));
    // str r0, [sp]
    ov96_021E8228(*((u32*)r0), ((((*((u32*)(r0 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r0 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 8);
    // add r3, #0xa
    // and r2, r0
    // and r0, r3
    *((u32*)(r1 + 0x60)) = ((0xFFFFF000 >> 0x14) | *((u32*)(r1 + 0x60)));
    // str r0, [sp]
    ov96_021E8228(*((u32*)r1), ((((*((u32*)(r1 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r1 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 3);
    *((u32*)(r4 + 0x10)) = 0;
    // str r0, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 5);
    // str r3, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 1);
    ov96_02218578(r4, 3);
}




void ov96_0221910C(void) {
    GF_AssertFail(((*((u32*)(r0 + 0x60)) << 5) >> 0x1f));
    GF_AssertFail(((*((u32*)(r4 + 0x60)) << 3) >> 0x1f));
    // and r1, r2
    // add r3, #0x2c
    *((u32*)(r4 + 0x60)) = (((1 << 0x1a) >> 2) | 0xFCFFFFFF);
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    ov96_021E8228(*((u32*)r4), ((((*((u32*)(r4 + 0x60)) << 0xa) >> 0x1e) << 0x18) >> 0x18), ((((*((u32*)(r4 + 0x60)) << 8) >> 0x1e) << 0x18) >> 0x18), 7);
}




void ov96_02219174(void) {
    // sub r1, r2, r1
}




void ov96_0221918C(void) {
    // str r0, [sp]
    // add r3, sp, #0xc
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, sp, #0xc
    // str r0, [r5]
    // add r0, sp, #0xc
    // add r0, r0, r1
    // add r0, sp, #0xc
    // add r0, r0, r1
    // add r0, sp, #0xc
    // add r0, r0, r1
    // add r0, sp, #0xc
    // add r0, r0, r1
    // add r0, sp, #0xc
    // add r0, r0, r1
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov96_0221935C(void) {
    // add r0, r5, r0
    // add r1, r6, r0
    // add r4, #0x30
    // add r4, r4, r0
}




void ov96_02219398(void) {
    _u32_div_f((((*((u32*)(r0 + 0x60)) << 8) >> 0x1e) + 1), 3);
    // and r2, r0
    *((u32*)(r4 + 0x60)) = (((r1 << 0x1e) >> 8) | *((u32*)(r4 + 0x60)));
    // add r1, #0x74
    // add r0, r1, r0
    *((u32*)(r4 + 4)) = ((((((r1 << 0x1e) >> 8) | *((u32*)(r4 + 0x60))) << 8) >> 0x1e) << 4);
}




void ov96_022193CC(void) {
    // cmp r1, #0
    // beq _022193D4
    // b _022193D6
    // bx r3
    // nop
    // _022193E0: .word sub_0200606C
}




void ov96_022193E4(void) {
    // add r1, #0x20
}




void ov96_022193F8(void) {
    PokeathlonCourse_GetHeapAllocPtr4();
    // add r0, #0x20
    FillWindowPixelBuffer(0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r5, 0, r7, 3);
    ReadMsgData_ExpandPlaceholders(r5, r6, 0xa3, *((u32*)r4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x20
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 4, r0, 0);
    String_Delete(r5);
    // add r4, #0x20
    CopyWindowToVram(r4);
}




void ov96_02219460(void) {
    // asr r1, r1, #0xc
    // add r4, #0x5f
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
}




void ov96_022194C4(void) {
    // str r3, [sp, #0x10]
    GF_AssertFail();
    GF_AssertFail();
    GF_AssertFail();
    // ldr r0, [sp, #0x10]
    GF_AssertFail();
    // ldr r0, [sp, #0x28]
    GF_AssertFail();
    // ldr r0, [sp, #0x2c]
    GF_AssertFail();
    // ldr r0, [sp, #0x34]
    Heap_Alloc(0xc8);
    MI_CpuFill8(0, 0xc8);
    *((u32*)(r4 + 8)) = r5;
    *((u32*)(r4 + 0xc)) = r6;
    *((u32*)(r4 + 0x10)) = r7;
    // add r0, sp, #0x18
    // add r0, #0x22
    // strb r1, [r0]
    // ldr r0, [sp, #0x34]
    *((u32*)(r4 + 4)) = r4;
    // ldr r0, [sp, #0x10]
    *((u32*)(r4 + 0x14)) = r4;
    // ldr r0, [sp, #0x28]
    *((u32*)(r4 + 0x18)) = r4;
    // ldr r0, [sp, #0x2c]
    *((u32*)(r4 + 0x1c)) = r4;
    // ldr r0, [sp, #0x38]
    // str r0, [r4]
    NARC_New(0x14, *((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x24)) = r0;
    // str r0, [sp]
    // add r3, #0x2c
    GfGfxLoader_GetScrnData(0xf2, 7, 1, r4);
    *((u32*)(r4 + 0x28)) = r0;
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(r5, r6, 0x14, r0);
    *((u16*)(r4 + 0x20)) = r0;
    // ldr r0, [sp, #0x38]
    ov96_021E5F24();
    // ldr r0, [sp, #0x38]
    PokeathlonCourse_GetParticipantUnk04(r0);
    String_New(0xb, *((u32*)(r4 + 4)));
    // add r1, #0xb0
    // str r0, [r1]
    // add r0, #0xb0
    // add r1, #0x12
    CopyU16ArrayToString(*((u32*)r5), r6);
    // add r6, #0x28
    ov96_02219A08(r4);
}




void ov96_022195C8(void) {
}




void ov96_022195E8(void) {
    // add r0, #0xb0
    // add r4, #0x30
    // add r4, #0x10
}




void ov96_0221964C(void) {
}




void ov96_0221966C(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // ldr r0, [sp]
    // add r0, r6, r0
    // add r0, #0x88
    // ldr r1, [sp]
    // add r0, #0xc2
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // add r6, #0xc2
    // strh r0, [r6]
}




void ov96_022196E4(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // add r0, #0x88
    // add r0, #0xa8
    // ldr r1, [sp, #4]
    // add r6, #0xac
    // ldr r1, [sp]
}




void ov96_02219770(void) {
}




void ov96_0221978C(void) {
    // add r0, #0xc2
}




void ov96_02219794(void) {
    // add r0, #0xc0
    // add r0, #0x9c
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    // add r0, sp, #4
    // ldrsh r1, [r0, r1]
    // sub r0, r0, r1
    // bpl _022197F0
    // neg r0, r0
    // add r2, sp, #4
    // ldrsh r3, [r2, r1]
    // asr r0, r0, #0x10
    // add r0, r3, r0
    // ldrsh r0, [r2, r1]
    // add r4, sp, #4
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // sub r3, #0x50
    // str r4, [sp]
    // add r2, #0x9c
    // add r0, #0xc0
    // add r5, #0xc0
    // strb r0, [r5]
    // add r0, #0x98
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // sub r2, r1, r0
    // bpl _02219878
    // neg r2, r2
    // add r2, r2, r1
    // asr r1, r2, #1
    // add r1, r2, r1
    // asr r4, r1, #0x10
    // add r6, sp, #4
    // ldrsh r0, [r6, r3]
    // add r0, r0, r4
    // strh r0, [r6]
    // ldrsh r2, [r6, r2]
    // ldrsh r3, [r6, r3]
    // add r0, #0x9c
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // ldrsh r0, [r6, r3]
    // add r0, r0, r4
    // strh r0, [r6]
    // ldrsh r2, [r6, r2]
    // ldrsh r3, [r6, r3]
    // add r0, #0x98
    // add r0, #0x9c
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0x9c
    // str r2, [r0]
    // add r0, #0xa0
    // add r0, #0xa4
    // add r0, #0xa0
    // str r1, [r0]
    // add r0, #0xa4
    // str r2, [r0]
    // add r0, #0xc0
    // add r5, #0xc0
    // strb r0, [r5]
    // add r5, #0xc0
    // strb r0, [r5]
}




void ov96_02219940(void) {
    // add r5, #0xbc
    // ldrsb r0, [r5, r4]
    // strb r0, [r5, r4]
    // ldrsb r0, [r5, r4]
    // strb r0, [r5, r4]
}




void ov96_0221996C(void) {
}




void ov96_022199A8(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov96_0221D910), (6 - 1));
    GF_AssertFail();
    // add r1, sp, #4
    // strh r7, [r1]
    // ldr r0, [sp]
    *((u16*)(r1 + 2)) = r0;
    // add r0, sp, #0x40
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x10));
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    SpriteSystem_NewSpriteWithYOffset(r5, r4, *((u16*)(r0 + 0x10)), (0x1e << 0x10));
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_02219A08(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + 0x14)));
    // add r6, #0x30
    // add r1, r6, r1
    // add r2, r7, r2
    AddWindow(*((u32*)(r5 + 0x14)), (0 << 4), (0 << 3));
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r5 + 0x14)), 5, 0, 1);
    LoadFontPal0(4, (0x1e << 4), *((u32*)(r5 + 4)));
}




void ov96_02219A5C(void) {
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // strb r1, [r0]
    // sub r0, r6, r0
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // add r0, sp, #0x1c
    // str r6, [sp]
    // str r7, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // add r0, #3
    // add r2, #0x10
    // str r0, [sp, #0xc]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov96_02219B30(void) {
    // add r0, #0x30
    FillWindowPixelBuffer(0);
    // add r1, #0x22
    PokeathlonCourse_GetPlayerProfileFromData(*((u32*)r5), *((u8*)r5));
    PlayerProfile_GetPlayerName_NewString(*((u32*)(r5 + 4)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x30
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x50
    ov96_02219BDC(r5, *((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x18)), (0x13 << 4));
    String_Delete(r4);
    // add r0, #0x30
    CopyWindowToVram(r5);
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r2, #0xb4
    BufferString(*((u32*)(r5 + 0x1c)), 0, *((u32*)r5), 2);
    // str r0, [sp]
    // add r0, #0x40
    ov96_02219BC4(r5, *((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x18)), 0x9a);
}




void ov96_02219BC4(void) {
}




void ov96_02219BDC(void) {
    FillWindowPixelBuffer(0);
    // ldr r3, [sp, #0x28]
    ReadMsgData_ExpandPlaceholders(r4, r6, r7);
    // add r3, sp, #0x18
    // ldrsh r0, [r3, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldrsh r3, [r3, r6]
    AddTextPrinterParameterizedWithColor(r5, 0, r0);
    String_Delete(r4);
    CopyWindowToVram(r5);
}




void ov96_02219C30(void) {
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x22
    // add r0, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    ov96_022199A8(*((u32*)(r0 + 8)), *((u32*)(r0 + 0xc)), 0x86, 0xa0);
    *((u32*)(r5 + 0x60)) = r0;
    ManagedSprite_SetPaletteOverride(1);
    // asr r0, r0, #0x10
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #8]
    ov96_022199A8(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)), 0x24);
    *((u32*)(r4 + 0x68)) = r0;
    ov96_02219DD0(r5, ((r7 << 0x18) >> 0x18), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #8]
    ov96_022199A8(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)), 0x24);
    *((u32*)(r4 + 0x78)) = r0;
    ManagedSprite_SetDrawFlag(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    ov96_022199A8(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)), (r6 << 0x10), 0x18);
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0x88
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    // add r6, #0x20
    // add r0, r4, r0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0xc
    // strh r1, [r0]
    *((u16*)(2 + 2)) = 0x30;
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x38]
    // add r2, sp, #0xc
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)), (0x1e << 0x10));
    // add r1, #0x98
    // str r0, [r1]
    // add r0, #0x98
    ManagedSprite_SetAnimateFlag(*((u32*)r6), 1);
    // add r7, #0x58
    // sub r0, r0, r6
    // str r0, [sp]
    // add r3, #0x22
    // add r2, #0x98
    ov96_02219DA8(*((u32*)r5), *((u32*)(r5 + 4)), *((u32*)r5), *((u8*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    // asr r3, r3, #0x10
    ov96_022199A8(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)), 0x28, (r7 << 0x10));
    // add r1, #0xa0
    // str r0, [r1]
    // add r0, #0xa0
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    // add r7, #0x58
    ov96_02219E60(r5);
}




void ov96_02219DA8(void) {
    // add r2, sp, #0x10
    // add r3, sp, #4
    // add r1, sp, #4
    // str r5, [sp]
}




void ov96_02219DD0(void) {
    // add r0, r5, r0
    // add r3, sp, #8
    // str r0, [sp]
    // add r1, sp, #8
    // str r0, [sp, #4]
}




void ov96_02219E00(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    GF_AssertFail(*((u32*)ov96_0221D944), (6 - 1));
    GF_AssertFail();
    // add r1, sp, #4
    // strh r7, [r1]
    // ldr r0, [sp]
    *((u16*)(r1 + 2)) = r0;
    // add r0, sp, #0x40
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x10));
    // add r2, sp, #4
    // str r0, [sp, #0xc]
    SpriteSystem_NewSpriteWithYOffset(r5, r4, *((u16*)(r0 + 0x10)), (0x1e << 0x10));
    ManagedSprite_SetAnimateFlag(1);
}




void ov96_02219E60(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #8
    // str r1, [r0]
    // add r1, #0xa8
    // str r0, [r1]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0xa8
    // add r1, sp, #8
    // add r0, #0xa8
    // add r5, #0x10
}




void ov96_02219EE0(void) {
    // add r2, r4, r2
    // str r0, [sp]
    // str r3, [sp, #4]
    // add r2, #0xb0
    // str r0, [sp]
    // add r0, #0x40
}




void ov96_02219F20(void) {
    // add r0, r5, r6
    // add r0, r5, r6
    // sub r4, #0x18
    // asr r2, r2, #0x10
}




void ov96_02219F50(void) {
    // add r0, r5, r0
    // add r0, r5, r0
}




void ov96_02219F7C(void) {
    // str r0, [sp]
    // str r4, [r7]
    // ldr r0, [sp]
    // sub r1, r0, r5
    // add r0, #0x2c
    // strb r1, [r0]
    // add r0, #0x2c
    // add r6, #8
    // ldr r2, [sp]
    // add r0, #0x2c
    // add r6, #0xc
}




void ov96_02219FDC(void) {
}




void ov96_02219FE4(void) {
    // add r0, #0x2c
    // add r5, #8
    // add r0, #0x2c
    // add r5, #0xc
}




void ov96_0221A00C(void) {
    // str r6, [r5]
    // and r0, r4
}




void ov96_0221A034(void) {
    // add r2, sp, #0
    // add r0, sp, #0
}




void ov96_0221A05C(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
}




void ov96_0221A08C(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x28
    // strb r0, [r1]
    // ldr r0, [sp, #0x10]
    *((u8*)(r1 + 1)) = 0;
    // ldr r0, [sp, #0x10]
    *((u8*)(r1 + 2)) = 0;
    // ldr r0, [sp, #0x10]
    *((u8*)(r1 + 3)) = 0;
    ov96_02215DD4(*((u32*)r0), ((((*((u32*)(r0 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    ov96_02215E2C(*((u32*)r5), ((((*((u32*)(r5 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    // add r4, sp, #0x28
    // str r0, [sp, #0x18]
    ov96_02215DD4(*((u32*)r5), ((0 << 0x18) >> 0x18));
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    ov96_0221A034(r6, (2 << 0x10));
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    ov96_0221A05C(r6);
    // strb r0, [r4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    ov96_0221A034(r6, (3 << 0x10));
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    ov96_0221A05C(r6);
    // strb r0, [r4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // add r0, sp, #0x24
    // strb r4, [r0]
    *((u8*)((((2 + 1) << 0x18) >> 0x18) + 1)) = 0;
    *((u8*)((((2 + 1) << 0x18) >> 0x18) + 2)) = 0;
    *((u8*)((((2 + 1) << 0x18) >> 0x18) + 3)) = 0;
    // add r0, sp, #0x28
    // add r2, sp, #0x1c
    *((u8*)(r2 + 8)) = 0;
    *((u8*)(r2 + 9)) = *((u8*)(((2 + 1) << 0x18) >> 0x18));
    MTRandom(((((2 + 1) << 0x18) >> 0x18) + 1), (0 + 1), *((u8*)(((2 + 1) << 0x18) >> 0x18)));
    _u32_div_f(0x64);
    // add r2, sp, #0x1c
    // add r0, r4, r0
    ov96_02215DD4(*((u32*)r5), *((u8*)(r2 + 8)), *((u8*)(r2 + 9)));
    // asr r2, r1, #0xc
    // add r1, sp, #0x1c
    *((u16*)(*((u32*)r0) + 4)) = r2;
    // add r2, sp, #0x20
    // asr r0, r0, #0xc
    *((u16*)(*((u32*)r0) + 6)) = *((u32*)(r0 + 4));
    ov96_02215EE8(*((u32*)r5), ((((*((u32*)(r5 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    *((u8*)(r5 + 4)) = 0x10;
    MTRandom(0x10);
    _u32_div_f(0x64);
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, r4, r0
    ov96_02215F2C(*((u32*)r5), ((((*((u32*)(r5 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18), (((r4 + 5) << 0x18) - 1));
    *((u8*)(r5 + 4)) = 0x14;
    MTRandom(0x14);
    _u32_div_f(0x64);
    MTRandom();
    _u32_div_f(0x64);
    // str r1, [sp]
    // mvn r7, r7
    // str r7, [sp, #8]
    // str r0, [sp, #4]
    ov96_02215E48(*((u32*)r5), ((0 << 0x18) >> 0x18));
    ov96_02215DBC(*((u32*)r5), ((r4 << 0x18) >> 0x18));
    ov96_02215E94(*((u32*)r5), *((u8*)(r5 + 7)));
    // ldr r0, [sp, #4]
    // str r7, [sp, #8]
    // asr r7, r0, #0x18
    // str r6, [sp, #4]
    // ldr r0, [sp]
    *((u8*)(r5 + 7)) = r7;
    // ldr r0, [sp, #8]
    *((u8*)(r5 + 7)) = (r4 << 0x18);
    GF_AssertFail((r4 << 0x18));
    // ldrsb r1, [r5, r0]
    // sub r0, #8
    *((u32*)(r5 + 8)) = (0x20 | *((u32*)(r5 + 8)));
    *((u8*)(r5 + 4)) = 0;
    *((u8*)(r5 + 4)) = 0xa;
    MTRandom(0xa, *((u32*)(r5 + 8)));
    _u32_div_f(0x91);
    // add r1, #0x38
    // add r0, sp, #0x1c
    // strh r1, [r0]
    MTRandom();
    _u32_div_f(0x50);
    // add r1, #0x48
    // add r0, sp, #0x1c
    *((u16*)(r0 + 2)) = r1;
    // add r2, sp, #0x1c
    ov96_02215F80(*((u32*)r5), ((((*((u32*)(r5 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    *((u8*)(r5 + 4)) = 0xa;
}




void ov96_0221A314(void) {
    // add r2, sp, #0xc
    // add r0, sp, #0
    // str r1, [r2]
    // str r1, [r0]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(((*((u32*)(r0 + 8)) << 0x1e) >> 0x1e) + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    *((u32*)(((*((u32*)(r0 + 8)) << 0x1e) >> 0x1e) + 8)) = 0;
    ov96_02215DEC(*((u32*)r0), ((((*((u32*)(r0 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    // add r2, r6, r4
    // ldrsh r0, [r0, r1]
    // str r0, [sp]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #4]
    ov96_02215F80(*((u32*)r5), ((((*((u32*)(r5 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    // add r0, sp, #0xc
    // add r1, sp, #0
    ov96_0221A034((1 << 0x12));
    ov96_02215F64(*((u32*)r5), ((((*((u32*)(r5 + 8)) << 0x1e) >> 0x1e) << 0x18) >> 0x18));
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) & ~(0x10));
}




void ov96_0221A3AC(void) {
}




void ov96_0221A400(void) {
    // asr r2, r1, #0xc
    // add r1, sp, #0
    // strh r2, [r1]
    // add r2, sp, #0
    // asr r0, r0, #0xc
    // asr r2, r1, #0xc
    // add r1, sp, #0
    // strh r2, [r1]
    // add r2, sp, #0
    // asr r0, r0, #0xc
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
}




void ov96_0221A56C(void) {
    // blx r2
}




void ov96_0221A57C(void) {
    ov96_021E94EC(r0, 0);
    // blx r6
    *((u16*)(r0 + 0xa)) = ((*((u32*)(r0 + 0xc)) << 0x10) >> 0x10);
    GF_AssertFail(((r5 + 1) << 0x18));
}




void ov96_0221A5B8(void) {
    ov96_0221A730(*((u32*)(ov96_0221D9C8 + (r1 << 2))), (r1 << 2));
    GF_AssertFail();
}




void ov96_0221A5D4(void) {
    _ffltu();
    _fmul(r4);
    _f2d();
    _dadd(0, 0x3FF00000, r0, r1);
    _ddiv(0, 0x405E0000, r0, r1);
    _dsub(0, 0x4062C000, r0, r1);
    _d2f();
}




void ov96_0221A61C(void) {
    _ffixu();
    _dfltu();
    _dgr(0, 0x40690000);
}




void ov96_0221A640(void) {
    _ffltu();
    _fdiv(0x41F00000);
    _f2d();
    _ddiv(0, 0x40C67600, r0, r1);
    _d2f();
    ov96_0221A61C();
}




void ov96_0221A670(void) {
    // add r0, r0, r1
}




void ov96_0221A680(void) {
    // add r0, r0, r1
}




void ov96_0221A690(void) {
}




void ov96_0221A69C(void) {
    ov96_0221A5D4(0x3DA3D70A);
    ov96_0221A61C();
}




void ov96_0221A6B0(void) {
    _ffltu();
    _f2d();
    _ddiv(0, 0x400C0000);
    _d2f();
    ov96_0221A61C();
}




void ov96_0221A6D0(void) {
    _ffltu();
    _f2d();
    _ddiv(0, 0x40900000);
    _dmul(0, 0x40240000, r0, r1);
    _d2f();
    ov96_0221A61C();
}




void ov96_0221A700(void) {
    _ffltu();
    _f2d();
    _dmul(0, 0x3FF80000);
    _d2f();
    ov96_0221A61C();
}




void ov96_0221A720(void) {
    // add r0, r0, r1
}




void ov96_0221A730(void) {
    // str r0, [sp]
    // add r0, sp, #8
    // strb r2, [r0]
    // add r6, sp, #0x10
    *((u8*)(r0 + 1)) = *((u8*)(ov96_0221D99C + 1));
    // add r7, sp, #0xc
    *((u8*)(r0 + 2)) = *((u8*)(ov96_0221D99C + 2));
    *((u8*)(r0 + 3)) = *((u8*)(ov96_0221D99C + 3));
    // ldr r0, [sp]
    ov96_021E94EC(0, *((u8*)(ov96_0221D99C + 2)));
    // strb r0, [r6, r4]
    // strb r5, [r7, r4]
    // add r7, sp, #0x10
    // add r6, sp, #0xc
    // ldr r0, [sp]
    ov96_021E94EC(((r4 + 1) << 0x18), r5);
    // str r0, [sp, #4]
    // strb r1, [r6, r5]
    // add r0, sp, #8
    // add r0, r0, r4
    // ldr r1, [sp, #4]
    // add r1, r2, r1
    // add r0, r0, r1
    _dfltu(((*((u8*)(*((u8*)(r6 + r5)) + (((0 + 1) << 0x18) >> 0x18))) << 0x10) >> 0x10), (*((u32*)(*((u8*)(r6 + r5)) + 0xc)) << 2), *((u32*)(*((u8*)(r6 + r5)) + 0xc)));
    _dgr(0, 0x40690000);
    // ldr r0, [sp, #4]
    *((u16*)(r0 + 0xa)) = 0xc8;
}



