/* Decompiled from asm/overlay_01_021EB1E8.s */
#include "global.h"

void ov01_021EB1E8(void) {
    // str r2, [r0, r1]
}




void ov01_021EB1F4(void) {
    // strb r0, [r2]
    // str r0, [r4]
}




void ov01_021EB234(void) {
    // strb r0, [r2]
}




void ov01_021EB260(void) {
}




void FieldWeatherUpdate_UsedFlash(void) {
    GF_AssertFail();
    *((u32*)(r5 + 0x10)) = r4;
    GF_AssertFail(*((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 8)) = r4;
    ov01_021EB4B4(*((u32*)(r5 + 4)), r4);
    *((u32*)(r5 + 0xc)) = 0;
    SysTask_CreateOnMainQueue(ov01_021EB320, r5, 0);
    *((u32*)(r5 + 0xc)) = 0;
    SysTask_CreateOnMainQueue(ov01_021EB3F0, r5, 0);
    *((u32*)(r5 + 0x14)) = r0;
}




void ov01_021EB31C(void) {
}




void ov01_021EB320(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB336: ; jump table
}




void ov01_021EB3F0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB406: ; jump table
}




u8 ov01_021EB4B4(void) {
}




void ov01_021EB4B8(void) {
    // add r0, #0x14
    GF_InitG2dRenderer(0xFFFFF000);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0xac
    // add r1, sp, #0xc
    // add r3, #0x14
    sub_0200B27C(r6, 1, r6);
    Create2DGfxResObjMan(0xe, 0, 4);
    // stmia r5!, {r0}
    GF2DGfxResHeader_sizeof();
    Heap_Alloc(4, (r0 << 2));
    *((u32*)(r6 + 0x10)) = r0;
    ov01_021EB578(0, 0x39);
    ov01_021EB578(*((u32*)(r6 + 0x10)), 1, 0x3a);
    ov01_021EB578(*((u32*)(r6 + 0x10)), 2, 0x37);
    ov01_021EB578(*((u32*)(r6 + 0x10)), 3, 0x38);
    // str r0, [sp]
    // add r0, #0x14
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0
    SpriteList_Create(4);
    // add r1, #0xf4
    // str r0, [r1]
    SysTask_CreateOnMainQueue(ov01_021EB56C, r6, 0xa);
    // add r6, #0xf8
    // str r0, [r6]
}




void ov01_021EB56C(void) {
}




void ov01_021EB578(void) {
    // str r0, [sp]
}




void ov01_021EB5A4(void) {
    // add r0, #0xf4
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, #0xf8
    // add r6, #0xf8
    // str r0, [r6]
}




void ov01_021EB5F4(void) {
    _s32_div_f(*((u32*)r1), 0x0013F000);
    // str r1, [r4]
    // add r0, r0, r1
    // str r0, [r4]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u32*)(r4 + 4)) = 0xc;
    // add r0, r3, r1
    *((u32*)(r4 + 4)) = 0xFFFC0000;
    Sprite_SetMatrix(r5, r4, (*((u32*)(r4 + 4)) >> 0x1f), *((u32*)(r4 + 4)));
}




void ov01_021EB64C(void) {
    Heap_Alloc(4, (0x43 << 2));
    // str r5, [r4, r0]
    // add r0, #8
    ov01_021EB4B8(r0);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = ov01_0220675C;
    NARC_New(0x3f, 4);
    // str r0, [r4, r1]
}




void ov01_021EB68C(void) {
    ov01_021EBB90(*((u32*)r0), 0);
    // str r2, [sp]
    // str r2, [sp, #4]
    ov01_021EA864(*((u32*)(*((u32*)(*((u32*)r4) + (0x41 << 2))) + 0x4c)), 1, 0, 0);
    // strh r0, [r1]
    GfGfx_EngineATogglePlanes(4, 0, (*((u16*)0x04000008) & ~(3)));
    // add r0, #8
    ov01_021EB5A4(*((u32*)r4));
    NARC_Delete(*((u32*)(*((u32*)r4) + (0x42 << 2))), *((u32*)r4));
    Heap_FreeExplicit(4, *((u32*)r4));
    // str r0, [r4]
}




void ov01_021EB700(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB720: ; jump table
    ov01_021EB9A8(0, r2);
    ov01_021EBA08(r4);
    ov01_021EBA44(r4, 0, r0);
    ov01_021EBA44(r4, 2, r0);
    ov01_021EA854(*((u32*)(*((u32*)(r5 + (0x41 << 2))) + 0x4c)));
    ov01_021EBA44(r5, r4, 0, 2);
    ov01_021EBA44(r5, r4, 0, r0);
    ov01_021EBB40(r4, r0);
    ov01_021EBB68(r4);
    ov01_021EBB40(r4, 0);
    ov01_021EBB90(r4);
    // add r0, r1, r0
    PlaySE(*((u16*)(*((u32*)((0x1c * r4) + 8)) + (0x00000F5C + 4))), *((u32*)(*((u32*)((0x1c * r4) + 8)) + 0x00000F5C)), *((u32*)((0x1c * r4) + 8)));
    // add r0, r1, r0
    StopSE(*((u16*)(*((u32*)((0x1c * r4) + 8)) + (0x00000F5C + 4))), 0, *((u32*)((0x1c * r4) + 8)));
}




void ov01_021EB804(void) {
    // add r0, r2, r0
}




void ov01_021EB818(void) {
}




void ov01_021EB830(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}




void ov01_021EB840(void) {
    // add r0, r0, r1
    // str r0, [r4]
}




void ov01_021EB86C(void) {
}




void ov01_021EB898(void) {
    // ldr r5, [sp, #0x40]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // add r1, r6, r6
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB8E8: ; jump table
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x44]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
}




void ov01_021EB968(void) {
    sub_0200AEB0(*((u32*)r2));
    sub_0200B0A8(*((u32*)(r4 + 4)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + 8)), *((u32*)r4));
}




void ov01_021EB9A8(void) {
    // add r4, r3, r2
    ov01_021EBE4C(r4, (0x1c * r1), *((u32*)r0));
    ov01_021EBD34(r5, r4);
    Heap_Free(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(*((u32*)(r4 + 8)) + 8)) = *((u32*)(r4 + 0xc));
    ov01_021EC028(*((u32*)(r4 + 8)), *((u16*)r4));
    ov01_021EBD18(r5, *((u16*)(r4 + 2)));
    *((u16*)(r4 + 0x10)) = 2;
}




void ov01_021EBA08(void) {
    // add r4, r3, r2
    ov01_021EBE4C(1, r4, (0x1c * r1), *((u32*)r0));
    SysTask_CreateOnMainQueue(ov01_021EBD70, r4, 1);
    *((u32*)(r4 + 0x14)) = r0;
    *((u16*)(r4 + 0x10)) = 1;
    *((u16*)(r4 + 0x12)) = 0;
}




void ov01_021EBA44(void) {
    // add r4, r2, r0
    SysTask_CreateOnMainQueue(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 8)), 4);
    // str r0, [r1, r3]
    *((u16*)(r4 + 0x10)) = 3;
    // add r0, #0x1a
    // strh r5, [r1, r0]
    // add r0, #0x1e
    // strh r2, [r1, r0]
    // add r0, #0xc
    *((u32*)(*((u32*)(r4 + 8)) + 0x40)) = *((u32*)(r4 + 8));
    // add r0, #0xc
    *((u32*)(*((u32*)(r4 + 8)) + 0x44)) = *((u32*)(r4 + 8));
    // add r0, #0x1c
    // strh r6, [r1, r0]
    // add r0, #0x14
    // str r2, [r1, r0]
    // add r5, r1, r0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    Heap_Alloc(4, *((u32*)(r4 + 4)), 0, 0x00000F48);
    // str r0, [r2, r1]
    memset(*((u32*)(*((u32*)(r4 + 8)) + 0x00000F58)), 0, *((u32*)(r4 + 4)));
    // add r3, #0x10
    // str r2, [r0, r3]
    GfGfx_EngineATogglePlanes(4, 0);
    // strh r0, [r2]
    // strh r0, [r2]
}




void ov01_021EBB40(void) {
    // add r4, r3, r0
    // strh r3, [r1, r0]
    // strh r2, [r1, r0]
}




void ov01_021EBB68(void) {
    // add r4, r3, r2
    ov01_021EB804((0x1c * r1), *((u32*)r0));
    // strh r2, [r1, r0]
    // blx r2
}




void ov01_021EBB90(void) {
    // add r4, r2, r0
    GfGfx_EngineATogglePlanes(4, 0, *((u32*)r0));
    // strh r1, [r0]
    // add r0, #0x44
    // strh r1, [r3]
    // strh r1, [r0]
    ov01_021EB968(r5, *((u16*)r4), *((u32*)(r4 + 0xc)), (0x0400000C - 4));
    Heap_FreeExplicit(4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0xc)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x14)) = 0;
    // add r0, #0xc
    ov01_021EC2CC(*((u32*)(r4 + 8)));
    ov01_021EC058(*((u32*)(r4 + 8)), *((u16*)r4));
    ov01_021EDAE0(*((u32*)(r4 + 8)), *((u32*)(*((u32*)(r4 + 8)) + 0x00000F5C)));
    Heap_FreeExplicit(4, *((u32*)(*((u32*)(r4 + 8)) + 0x00000F58)));
    // str r2, [r1, r0]
    SysTask_Destroy(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 8)), 0);
    SysTask_Destroy(*((u32*)(*((u32*)(r4 + 8)) + 0x00000F48)), *((u32*)(r4 + 8)));
    SysTask_Destroy(*((u32*)(*((u32*)(r4 + 8)) + 0x00000F6C)), *((u32*)(r4 + 8)));
    Heap_FreeExplicit(4, *((u32*)(r4 + 8)));
    *((u32*)(r4 + 8)) = 0;
    // str r2, [sp]
    // str r2, [sp, #4]
    ov01_021EA864(*((u32*)(*((u32*)(r5 + (0x41 << 2))) + 0x4c)), 1, 0, 0);
}




void ov01_021EBCA4(void) {
    GfGfx_EngineATogglePlanes(4, 0);
    // strh r1, [r0]
    // add r0, #0x44
    // strh r1, [r3]
    // strh r1, [r0]
    // add r0, #0xc
    ov01_021EC2CC(*((u32*)(r4 + 8)), 0, 3, (0x0400000C - 4));
    ov01_021EDAE0(*((u32*)(r4 + 8)), *((u32*)(*((u32*)(r4 + 8)) + 0x00000F5C)));
    SysTask_Destroy(*((u32*)(*((u32*)(r4 + 8)) + 0x00000F48)), *((u32*)(r4 + 8)));
    *((u16*)(r4 + 0x10)) = 2;
}




void ov01_021EBD18(void) {
}




void ov01_021EBD34(void) {
    ov01_021EBEB8(r1, *((u16*)r1));
    ov01_021EB86C(r5, *((u16*)r4), *((u32*)(r4 + 0xc)));
    ov01_021EBFD0(r5, r4);
}




void ov01_021EBD70(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EBD8C: ; jump table
    ov01_021EBEB8(r1, (*((u16*)(*((u16*)(r1 + 0x12)) + 6)) << 0x10));
    GF_AssertFail();
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EBEF0((*((u16*)(r4 + 0x12)) + 1), *((u16*)r4), *((u32*)(r4 + 0xc)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EC078((*((u16*)(r4 + 0x12)) + 1), *((u16*)(r4 + 2)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EBF24((*((u16*)(r4 + 0x12)) + 1), *((u16*)r4), *((u32*)(r4 + 0xc)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EC0C0((*((u16*)(r4 + 0x12)) + 1), *((u16*)(r4 + 2)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EBF58((*((u16*)(r4 + 0x12)) + 1), *((u16*)r4), *((u32*)(r4 + 0xc)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EC114((*((u16*)(r4 + 0x12)) + 1), *((u16*)(r4 + 2)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EBF94((*((u16*)(r4 + 0x12)) + 1), *((u16*)r4), *((u32*)(r4 + 0xc)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov01_021EBFD0((*((u16*)(r4 + 0x12)) + 1));
    *((u32*)(*((u32*)(r4 + 8)) + 8)) = *((u32*)(r4 + 0xc));
    ov01_021EC028(*((u32*)(r4 + 8)), *((u16*)r4));
    *((u16*)(r4 + 0x10)) = 2;
    *((u16*)(r4 + 0x12)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    SysTask_Destroy(r5);
}




void ov01_021EBE4C(void) {
    Heap_Alloc(4, (0xf7 << 4));
    *((u32*)(r4 + 8)) = r0;
    memset(0, 0, (0xf7 << 4));
    // str r5, [r0]
    // strh r0, [r1, r2]
    // strh r0, [r3, r1]
    // add r1, #0xc
    *((u32*)(*((u32*)(r4 + 8)) + 0x40)) = *((u32*)(r4 + 8));
    // add r1, #0xc
    *((u32*)(*((u32*)(r4 + 8)) + 0x44)) = *((u32*)(r4 + 8));
    // sub r1, #0xa
    // str r0, [r3, r1]
    // add r2, #0xa
    *((u32*)(*((u32*)(r4 + 8)) + 4)) = r4;
    // str r0, [r1, r2]
}




void ov01_021EBEB8(void) {
    Heap_Alloc(4, 0x64);
    *((u32*)(r4 + 0xc)) = r0;
    memset(0, 0, 0x64);
}




void ov01_021EBEF0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    ov01_021EB898(*((u32*)(r0 + 0x18)), 2, r1, *((u32*)(r0 + 0x10)));
    *((u32*)(r4 + 8)) = r0;
}




void ov01_021EBF24(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    ov01_021EB898(*((u32*)(r0 + 0x18)), 3, r1, *((u32*)(r0 + 0x14)));
    *((u32*)(r4 + 0xc)) = r0;
}




void ov01_021EBF58(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    ov01_021EB898(*((u32*)(r0 + 0x18)), 0, r1, *((u32*)(r0 + 8)));
    // str r0, [r4]
    sub_0200ADA4();
    sub_0200A740(*((u32*)r4));
}




void ov01_021EBF94(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    ov01_021EB898(*((u32*)(r0 + 0x18)), 1, r1, *((u32*)(r0 + 0xc)));
    *((u32*)(r4 + 4)) = r0;
    sub_0200B00C();
    sub_0200A740(*((u32*)(r4 + 4)));
}




void ov01_021EBFD0(void) {
    // str r0, [sp]
    // add r0, #0x40
    ov01_021EC240(*((u32*)(r1 + 0xc)), r0, *((u32*)(r1 + 0xc)), 0);
    // add r0, #0x10
    memset(*((u32*)(r4 + 0xc)), 0, 0x30);
    // add r5, #0xfc
    *((u32*)(*((u32*)(r4 + 0xc)) + 0x10)) = *((u32*)r5);
    // add r0, #0x40
    *((u32*)(*((u32*)(r4 + 0xc)) + 0x14)) = *((u32*)(r4 + 0xc));
    *((u32*)(*((u32*)(r4 + 0xc)) + 0x24)) = (1 << 0xc);
    *((u32*)(*((u32*)(r4 + 0xc)) + 0x28)) = (1 << 0xc);
    *((u32*)(*((u32*)(r4 + 0xc)) + 0x2c)) = (1 << 0xc);
    *((u32*)(*((u32*)(r4 + 0xc)) + 0x38)) = 1;
}




void ov01_021EC028(void) {
    // add r0, #0x10
    // add r5, #0x3c
}




void ov01_021EC058(void) {
}




void ov01_021EC078(void) {
    NARC_AllocAndReadWholeMember(*((u32*)(r0 + (0x42 << 2))), *((u32*)(*((u32*)(r0 + 4)) + (0xc * r1))), 4, *((u32*)(r0 + 4)));
    // add r1, sp, #0x14
    // str r0, [sp]
    NNS_G2dGetUnpackedPaletteData();
    // ldr r1, [sp, #0x14]
    BG_LoadPlttData(2, *((u32*)(r1 + 0xc)), 0x20, 0xc0);
    // ldr r0, [sp]
    Heap_Free();
    // str r0, [sp]
}




void ov01_021EC0C0(void) {
    // add r1, r3, r2
    NARC_AllocAndReadWholeMember(*((u32*)(r0 + (0x42 << 2))), *((u32*)(r1 + 4)), 4, *((u32*)(r0 + 4)));
    // add r1, sp, #0x14
    // str r0, [sp, #8]
    NNS_G2dGetUnpackedCharacterData();
    // ldr r3, [sp, #0x14]
    // str r0, [sp]
    BG_LoadCharTilesData(*((u32*)(*((u32*)(r4 + (0x41 << 2))) + 8)), 2, *((u32*)(r3 + 0x14)), *((u32*)(r3 + 0x10)));
    // ldr r0, [sp, #8]
    Heap_Free();
    // str r0, [sp, #8]
}




void ov01_021EC114(void) {
    GfGfx_EngineATogglePlanes(4, 0);
    // add r1, r2, r1
    NARC_AllocAndReadWholeMember(*((u32*)(r4 + (0x42 << 2))), *((u32*)((0xc * r5) + 8)), 4);
    // str r0, [sp, #0x14]
    GF_AssertFail();
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x18
    NNS_G2dGetUnpackedScreenData();
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
    // add r2, #0xc
    BgCopyOrUncompressTilemapBufferRangeToVram(*((u32*)(*((u32*)(r4 + (0x41 << 2))) + 8)), 2, r3, *((u32*)(r3 + 8)));
    // ldr r3, [sp, #0x18]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)(*((u32*)(r4 + (0x41 << 2))) + 8)), 2, r3, *((u32*)(r3 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xfe
    BgTilemapRectChangePalette(*((u32*)(*((u32*)(r4 + 6)) + 8)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(*((u32*)(r4 + (0x41 << 2))) + 8)), 2);
    // ldr r0, [sp, #0x14]
    Heap_Free();
    // str r0, [sp, #0x14]
}




void ov01_021EC1BC(void) {
    // add r0, #0xc
}




void ov01_021EC1E4(void) {
    *((u32*)(r0 + 8)) = 0;
    // add r0, #0xc
}




void ov01_021EC1F4(void) {
    // str r6, [r4]
    // add r1, #0xc
}




void ov01_021EC240(void) {
    // str r0, [sp, #0x2c]
    // str r3, [sp, #0x30]
    // add r4, sp, #0x34
    // stmia r4!, {r0}
    // ldr r0, [sp, #0x40]
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x3c]
}




void ov01_021EC29C(void) {
}




void ov01_021EC2CC(void) {
}




void ov01_021EC2E4(void) {
    // blx r6
}




void ov01_021EC300(void) {
}




void ov01_021EC304(void) {
}




void ov01_021EC31C(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r2, [sp, #0x18]
    // add r0, #8
    // sub r6, r2, r1
    // ldr r1, [sp, #0x20]
    // sub r4, r1, r0
    FX_Div((1 << 0xe), (3 << 0xc), NNS_G3dGlb);
    Camera_GetPerspectiveAngle(*((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x24)), *((u32*)r5));
    // str r0, [sp, #0xc]
    Camera_GetDistance(*((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x24)), *((u32*)r5));
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r3, sp, #0x14
    sub_02020E10(r0, r7);
    // ldr r0, [sp, #0x14]
    FX_Div((1 << 0x14));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    FX_Div(0x000BE8D0);
    // ldr r0, [sp, #0x10]
    FX_Div(0x000BE811);
    // str r0, [sp, #0x10]
    // asr r1, r6, #0x1f
    // asr r3, r7, #0xc
    _ll_mul(r6, 0xFFFFF000);
    // add r2, r0, r2
    // adc r1, r3
    // ldr r1, [sp, #0x14]
    FX_Div((((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    // asr r1, r6, #0x1f
    // asr r3, r7, #0x1f
    _ll_mul(r7);
    // add r2, r0, r2
    // adc r1, r3
    // asr r1, r4, #0x1f
    // asr r3, r7, #0xc
    _ll_mul(r4, 0xFFFFF000, 0);
    // add r2, r0, r2
    // adc r1, r3
    // ldr r1, [sp, #0x10]
    FX_Div((((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    // asr r1, r3, #0x1f
    // asr r3, r7, #0x1f
    _ll_mul(r7, r0);
    // add r2, r0, r2
    // adc r1, r3
    // add r0, r6, r3
    // add r2, sp, #0x18
    // add r4, r5, r0
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r6, [r0]
    // ldr r0, [sp, #8]
    // str r3, [r0]
}




void ov01_021EC470(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp, #4]
    // asr r1, r0, #0xc
    // str r1, [r5]
    // bpl _021EC494
    // add r0, r1, r0
    // str r0, [r5]
    // ldr r0, [sp]
    // asr r0, r0, #0xc
    // str r0, [r4]
    // bpl _021EC4A4
    // str r0, [r4]
}




void ov01_021EC4A8(void) {
    // str r2, [sp]
    // add r0, sp, #8
    // add r1, sp, #4
    // add r5, #0xc
    // add r6, sp, #0xc
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [r7]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // str r1, [r0]
}




void ov01_021EC504(void) {
    // str r1, [r0]
    // ldr r1, [sp]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
}




void ov01_021EC52C(void) {
    // ldr r1, [sp]
}




void ov01_021EC538(void) {
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r1]
    // blx r2
    // ldrsh r1, [r5, r0]
    // tst r1, r4
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    // tst r0, r4
    // ldrsh r1, [r5, r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r0]
    // add r0, r1, r0
}




void ov01_021EC5FC(void) {
    // ldr r1, [sp, #0x1c]
    // str r2, [r4]
    // add r3, sp, #0
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // add r1, sp, #0
    // ldr r4, [sp, #0x18]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r3, [sp, #0x10]
}




void ov01_021EC650(void) {
}




void ov01_021EC678(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // mvn r1, r1
    // mvn r1, r1
}




void ov01_021EC6A4(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // str r7, [r5]
    // add r0, sp, #0x18
    // and r1, r2
    // add r0, #0x18
    // and r2, r7
    // asr r1, r6, #5
    // asr r2, r7, #5
    // add r0, #0x2c
    // and r1, r3
    // and r2, r3
    // asr r1, r6, #0xa
    // asr r3, r7, #0xa
    // and r1, r2
    // and r2, r3
    // add r0, #0x40
    // add r5, #0x54
    // ldr r1, [sp, #8]
    // ldr r2, [sp]
}




void ov01_021EC728(void) {
    // add r0, #0x18
    // add r0, #0x2c
    // add r0, #0x40
    // add r0, #0x54
}




void ov01_021EC774(void) {
    // add r0, r3, r2
    *((u8*)(r0 + 4)) = 0;
}




void ov01_021EC790(void) {
}




void ov01_021EC7AC(void) {
}




void ov01_021EC7C8(void) {
}




void ov01_021EC7E8(void) {
    // ldrsh r1, [r5, r1]
    // ldrsh r1, [r5, r1]
}




void ov01_021EC828(void) {
    // ldrsh r1, [r0, r1]
    // sub r2, r1, r2
    // asr r1, r2, #1
    // add r1, r2, r1
    // asr r4, r1, #2
    // sub r1, r3, r4
    // add r1, r0, r3
}




void ov01_021EC85C(void) {
    // ldr r1, [sp, #0x28]
    // str r0, [sp]
    // str r1, [sp, #0x28]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r7, [sp, #0x2c]
    // blx r4
    // ldr r0, [sp]
    // str r6, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp]
    // blx r7
    // ldr r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x28]
    // add r6, r6, r0
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // str r1, [sp, #0x10]
}




void ov01_021EC8D8(void) {
    // add r0, #0x48
    // add r0, r0, r1
    // add r3, #0x3c
}




void ov01_021EC8F8(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EC90E: ; jump table
    // strh r2, [r1, r0]
    // strh r2, [r1, r0]
    // strh r2, [r1, r0]
    // strh r2, [r1, r0]
    // strh r2, [r1, r0]
    ov01_021EBCA4(*((u32*)(r1 + 4)), 5);
}




void ov01_021EC94C(void) {
    // add r2, #0xa
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EC96C: ; jump table
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021EC504(*((u32*)(r1 + 0x00000F58)), 1, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x1c
    // str r0, [sp, #0xc]
    // add r0, #0x4c
    ov01_021EC5FC(r5, r5, *((u32*)(*((u32*)(*((u32*)r4) + (0x41 << 2))) + 0x4c)), 3);
    // add r5, #0xb4
    // str r0, [r5]
    SysTask_CreateOnMainQueue(ov01_021EDA7C, r4, 0x64);
    // str r0, [r4, r1]
    // str r2, [r4, r0]
    // sub r1, #0xa
    // strh r0, [r4, r1]
    ov01_021EC538(r5, 0x00000F6C, 0x1e);
    // add r0, #0xb4
    // add r0, #0xb4
    // add r5, #0xb4
    // str r0, [r5]
    // add r5, #0x1c
    // add r0, #0x4c
    ov01_021EC650(r5, r5, *((u16*)(r4 + 0x00000F64)));
    // strh r1, [r4, r0]
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021EC504(r5, 3, 0x14, 1);
    *((u32*)(r5 + 0x1c)) = *((u32*)(*((u32*)(*((u32*)r4) + (0x41 << 2))) + 0x4c));
    ov01_021EC678(*((u32*)(*((u32*)(*((u32*)r4) + (0x41 << 2))) + 0x4c)), 3, 0x0000726F, 0x00006B5A);
    // add r5, #0x1c
    ov01_021EC7C8(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov01_021EC85C(r4, ov01_021ECBB4, 0x14, 0xa);
    SysTask_CreateOnMainQueue(ov01_021EDA7C, r4, 0x64);
    // str r0, [r4, r1]
    // str r2, [r4, r0]
    // sub r1, #0xa
    // strh r0, [r4, r1]
    // ldrsh r1, [r5, r0]
    *((u16*)(r5 + 6)) = (0x00000F6C - 1);
    // ldrsh r1, [r5, r1]
    ov01_021ECBB4(r4, 4, 0x1e);
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 6)) = 8;
    // mvn r0, r0
    // str r0, [sp]
    ov01_021EC52C(r5, 0, 8, 1);
    // add r0, #0x1c
    ov01_021EC790(r5, 1, 0);
    // add r5, #0xb4
    // str r0, [r5]
    // strh r1, [r4, r0]
    ov01_021EDAE0(r4, 4);
    ov01_021EC538(r5);
    // add r0, #0xb4
    // add r0, #0xb4
    // add r5, #0xb4
    // str r0, [r5]
    // add r5, #0x1c
    ov01_021EC7AC(r5);
    // add r0, #0xc
    // strh r1, [r4, r0]
    // add r0, #0xc
    // str r2, [sp]
    // str r2, [sp, #4]
    ov01_021EA864(*((u32*)(r5 + 0x1c)), 1, 0, 0);
    ov01_021EBCA4(*((u32*)(r4 + 4)));
    // add r0, #0xc
    ov01_021EC2E4(r4, ov01_021ECC70);
    ov01_021EC470(r4, 0, 0);
    ov01_021EC300(r4);
}




void ov01_021ECBB4(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    ov01_021EC1F4(r1, 0x20);
    MTRandom();
    // str r1, [r4]
    _u32_div_f(3);
    Sprite_SetAnimationFrame(*((u32*)(r6 + 4)), ((r1 << 0x10) >> 0x10));
    _u32_div_f(r7, 0x14);
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (0xa * (r5 + 1));
    // add r0, #0xa
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 8));
    // mvn r1, r1
    _s32_div_f(r1, 4, (r5 + 1));
    // mvn r1, r1
    // add r0, r0, r1
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) - 5);
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 4)) = (r5 + 1);
    _u32_div_f(r7, 0x0000010E, (r5 + 1));
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021EB5F4(*((u32*)(r6 + 4)));
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
}




void ov01_021ECC70(void) {
    // add r0, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // str r0, [r5]
    // str r0, [r5]
    // add r1, sp, #0
    // str r0, [r5]
}




void ov01_021ECD08(void) {
    // add r2, #0xa
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021ECD28: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021EC504(*((u32*)(r1 + 0x00000F58)), 1, 0x1e);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x1c
    // str r0, [sp, #0xc]
    // add r0, #0x4c
    ov01_021EC5FC(r4, r4, *((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x4c)), 3);
    // add r0, #0xb4
    // str r1, [r0]
    // add r4, #0xb8
    // str r0, [r4]
    // strh r1, [r5, r0]
    ov01_021EC538(r4, 1);
    // add r0, #0xb4
    // add r0, #0xb4
    // add r4, #0xb4
    // str r0, [r4]
    // add r4, #0x1c
    // add r0, #0x4c
    ov01_021EC650(r4, r4, *((u16*)(r5 + 0x00000F64)));
    // strh r1, [r5, r0]
    // str r2, [sp]
    // str r3, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021EC504(r4, 3, 6, 3);
    *((u32*)(r4 + 0x1c)) = *((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x4c));
    ov01_021EC678(*((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x4c)), 3, 0x0000726F, 0x00006318);
    // add r0, #0x1c
    ov01_021EC7C8(r4);
    // add r4, #0xb8
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov01_021EC85C(r5, ov01_021ECF4C, 0x14, 2);
    // strh r1, [r5, r0]
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = (3 - 1);
    // ldrsh r1, [r4, r1]
    ov01_021ECF4C(r5, 4);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = 8;
    // mvn r0, r0
    // str r0, [sp]
    ov01_021EC52C(r4, 0, 0x1e, 5);
    // add r0, #0x1c
    ov01_021EC790(r4, 1, 0);
    // add r4, #0xb4
    // str r0, [r4]
    // strh r1, [r5, r0]
    ov01_021EC538(r4, 4);
    // add r0, #0xb4
    // add r0, #0xb4
    // add r4, #0xb4
    // str r0, [r4]
    // add r4, #0x1c
    ov01_021EC7AC(r4);
    // add r0, #0xc
    // strh r1, [r5, r0]
    // add r0, #0xc
    // str r2, [sp]
    // str r2, [sp, #4]
    ov01_021EA864(*((u32*)(r4 + 0x1c)), 1, 0, 0);
    ov01_021EBCA4(*((u32*)(r5 + 4)));
    // add r0, #0xc
    ov01_021EC2E4(r5, ov01_021ED070);
    ov01_021EC470(r5, 0, 0);
    ov01_021EC300(r5);
}




void ov01_021ECF4C(void) {
    // add r2, sp, #0x48
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x10]
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x38
    // str r2, [sp, #0x14]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x18]
    // add r0, #0xb8
    // str r0, [sp, #0x18]
    // mvn r0, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    ov01_021EC1F4((7 << 0xc), 0x20, ov01_0220674C);
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // str r1, [r0]
    // add r0, #0xb8
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xb8
    _s32_div_f(*((u32*)r6), 0xc8);
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #8]
    *((u32*)(r5 + 0x14)) = *((u32*)(r1 + (r0 << 2)));
    // str r0, [r5]
    MTRandom(0);
    _u32_div_f(0x2a);
    *((u32*)(r5 + 4)) = (r1 + 4);
    _s32_div_f(((r1 + 4) - 4), 0xf);
    Sprite_SetAnimationFrame(*((u32*)(r4 + 4)), ((r0 << 0x10) >> 0x10));
    // neg r1, r0
    *((u32*)(r5 + 0x10)) = r1;
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #8]
    *((u32*)(r5 + 8)) = (*((u32*)(r2 + r1)) * (r7 + 1));
    *((u32*)(r5 + 0xc)) = 0;
    // add r0, sp, #0x20
    ov01_021EC304(0, r4);
    // add r3, sp, #0x20
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x2c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    MTRandom(*((u32*)r3));
    _u32_div_f((0x69 << 2));
    // sub r2, r0, r7
    // sub r0, #0x15
    // add r1, r0, r1
    // mvn r0, r0
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x2c
    // str r0, [sp, #0x30]
    ov01_021EB5F4(*((u32*)(r4 + 4)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r1, [sp, #0xc]
}




void ov01_021ED070(void) {
    // add r0, sp, #0
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // str r0, [r4]
    // add r1, sp, #0xc
}




void ov01_021ED0F0(void) {
    // add r2, #0xa
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021ED110: ; jump table
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021EC504(*((u32*)(r1 + 0x00000F58)), 2, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x1c
    // str r0, [sp, #0xc]
    // add r0, #0x4c
    ov01_021EC5FC(r4, r4, *((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x4c)), 3);
    // add r4, #0xb4
    // str r0, [r4]
    // strh r1, [r5, r0]
    ov01_021EC538(r4, 1);
    // add r0, #0xb4
    // add r0, #0xb4
    // add r4, #0xb4
    // str r0, [r4]
    // add r4, #0x1c
    // add r0, #0x4c
    ov01_021EC650(r4, r4, *((u16*)(r5 + 0x00000F64)));
    // strh r1, [r5, r0]
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021EC504(r4, 3, 0x14, 2);
    *((u32*)(r4 + 0x1c)) = *((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x4c));
    ov01_021EC678(*((u32*)(*((u32*)(*((u32*)r5) + (0x41 << 2))) + 0x4c)), 3, 0x0000716F, 0x00006B5A);
    // add r4, #0x1c
    ov01_021EC7C8(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov01_021EC85C(r5, ov01_021ED31C, 0x14, 0xa);
    // strh r1, [r5, r0]
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = (3 - 1);
    // ldrsh r1, [r4, r1]
    ov01_021ED31C(r5, 4);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = 8;
    // mvn r0, r0
    // str r0, [sp]
    ov01_021EC52C(r4, 0, 0x10, 6);
    // add r0, #0x1c
    ov01_021EC790(r4, 1, 0);
    // add r4, #0xb4
    // str r0, [r4]
    // strh r1, [r5, r0]
    ov01_021EC538(r4, 4);
    // add r0, #0xb4
    // add r0, #0xb4
    // add r4, #0xb4
    // str r0, [r4]
    // add r4, #0x1c
    // add r0, #0x4c
    ov01_021EC650(r4, r4, *((u16*)(r5 + 0x00000F64)));
    // add r0, #0xc
    // strh r1, [r5, r0]
    // add r0, #0xc
    // str r2, [sp]
    // str r2, [sp, #4]
    ov01_021EA864(*((u32*)(r4 + 0x1c)), 1, 0, 0);
    ov01_021EBCA4(*((u32*)(r5 + 4)));
    // add r0, #0xc
    ov01_021EC2E4(r5, ov01_021ED44C);
    ov01_021EC470(r5, 0, 0);
    ov01_021EC300(r5);
}




void ov01_021ED31C(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // str r1, [sp, #4]
    // ldr r0, [sp]
    // str r0, [r5]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // mvn r0, r0
    // str r1, [sp, #8]
    // add r0, sp, #0x10
    // sub r1, #0x40
    // str r1, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // sub r1, #8
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r1, sp, #0x10
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // asr r1, r1, #0xc
    // asr r0, r0, #0xc
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // sub r6, r1, r0
    // sub r7, r1, r0
    // bpl _021ED406
    // neg r1, r7
    // sub r1, r6, r1
    // add r1, r6, r1
    // ldr r0, [sp, #0x14]
    // and r0, r1
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r1, [sp, #0xc]
}




void ov01_021ED44C(void) {
    // add r0, sp, #0
    // str r1, [r4]
}




void ov01_021ED474(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021ED492: ; jump table
    // str r3, [sp]
    // add r0, sp, #0x10
    // add r5, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov01_021EC5FC(r1, *((u32*)(*((u32*)(*((u32*)r0) + (0x41 << 2))) + 0x4c)), r2);
    // strh r1, [r4, r0]
    // add r5, #0x30
    ov01_021EC650(r5, 1, *((u16*)(r4 + (r2 + 2))));
    // strh r1, [r4, r0]
    // add r3, sp, #0x10
    // str r0, [r5]
    ov01_021EC678(*((u32*)(*((u32*)(*((u32*)r4) + (0x41 << 2))) + 0x4c)), r6, r3, *((u16*)(r3 + 0x10)));
    ov01_021EC7C8(r5);
    // strh r1, [r4, r0]
    // ldr r1, [sp, #0x28]
    ov01_021EC790(r5, 3, 0);
    // strh r1, [r4, r0]
    ov01_021EC7AC(r5, 4);
    // strh r1, [r4, r0]
    // str r2, [sp]
    // str r2, [sp, #4]
    ov01_021EA864(*((u32*)r5), 1, 0, 0);
    ov01_021EBCA4(*((u32*)(r4 + 4)));
}




void ov01_021ED584(void) {
    // add r1, #0xa
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED5A6: ; jump table
    // str r1, [sp]
    // add r0, #0xc
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x44
    // add r1, #0x14
    ov01_021EC5FC(*((u32*)(r1 + 0x00000F58)), *((u32*)(r1 + 0x00000F58)), *((u32*)(*((u32*)(*((u32*)r1) + (0x41 << 2))) + 0x4c)), 6);
    ov01_021EB830(r5, 0, 9, 0x1e);
    ov01_021EB818(0, 0x10);
    GfGfx_EngineATogglePlanes(4, 1);
    // strh r1, [r4, r0]
    // add r0, #0x14
    ov01_021EC7AC(r5, 1);
    ov01_021EB840(r5);
    // sub r1, r1, r0
    ov01_021EB818(*((u32*)r5), 0x10);
    // strh r1, [r4, r0]
    // add r0, #0xc
    *((u32*)(r5 + 0x14)) = *((u32*)(*((u32*)(*((u32*)r4) + (0x41 << 2))) + 0x4c));
    ov01_021EC678(*((u32*)(*((u32*)(*((u32*)r4) + (0x41 << 2))) + 0x4c)), 6, 0x00007555, 0x00007FFF);
    // add r5, #0x14
    ov01_021EC7C8(r5);
    ov01_021EB818(9, 7);
    GfGfx_EngineATogglePlanes(4, 1);
    // strh r1, [r4, r0]
    // add r1, #0xe
    // add r0, #0xc
    // add r0, #0x14
    ov01_021EC790(r5, 1, 0);
    ov01_021EB830(r5, 9, 0, 0x1e);
    // strh r1, [r4, r0]
    // add r0, #0xc
    // add r0, #0x14
    ov01_021EC7AC(r5, 4);
    ov01_021EB840(r5);
    // sub r1, r1, r0
    ov01_021EB818(*((u32*)r5), 0x10);
    // strh r1, [r4, r0]
    // add r0, #0xc
    // str r2, [sp]
    // str r2, [sp, #4]
    ov01_021EA864(*((u32*)(r5 + 0x14)), 1, 0, 0);
    ov01_021EBCA4(*((u32*)(r4 + 4)));
}




void ov01_021ED710(void) {
    // add r1, #0xa
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED73A: ; jump table
    PlayerAvatar_GetMapObject(*((u32*)(*((u32*)(*((u32*)r1) + (0x41 << 2))) + 0x40)), (*((u16*)(*((u16*)(r1 + 0x00000F58)) + 6)) << 0x10));
    ov01_02203EA0();
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    ov01_021EA864(*((u32*)(r5 + 0x4c)), (0 - 1), 1, 0);
    // mvn r1, r1
    ov01_021EA89C(*((u32*)(r5 + 0x4c)), 0, 0, 0);
    // add r2, sp, #0x2c
    // strb r0, [r2]
    // add r1, sp, #0x2c
    ov01_021EA8C4(*((u32*)(r5 + 0x4c)), (0 + 1), (r2 + 1));
    // strh r1, [r4, r0]
    // strh r1, [r6, r0]
    // add r0, #0xa
    // strh r1, [r6, r0]
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)), 3);
    ov01_02203EA0();
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    ov01_021EA864(*((u32*)(r5 + 0x4c)), (0 - 1), 1, 0);
    // mvn r1, r1
    ov01_021EA89C(*((u32*)(r5 + 0x4c)), 0, 0, 0);
    // add r2, sp, #0xc
    // strb r0, [r2]
    // add r1, sp, #0xc
    ov01_021EA8C4(*((u32*)(r5 + 0x4c)), (0 + 1), (r2 + 1));
    // strh r1, [r4, r0]
    // strh r1, [r6, r0]
    // add r1, #0xe
    // strh r2, [r4, r1]
    // add r0, #0xa
    // strh r1, [r6, r0]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED82E: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0x00007FFF);
    // strh r1, [r4, r0]
    IsPaletteFadeFinished(0x00000632, (*((u16*)(r4 + 0x00000632)) + 1));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x00007FFF);
    // strh r1, [r4, r0]
    IsPaletteFadeFinished(0x00000632, (*((u16*)(r4 + 0x00000632)) + 1));
    // strh r1, [r4, r0]
    // strh r2, [r4, r1]
    _dfltu(*((u16*)(r4 + (0x00000632 - 2))), (0x00000632 - 2), (*((u16*)(r4 + (0x00000632 - 2))) + 1));
    _dmul(0, 0x40080000, r0, r1);
    _ddiv(0, 0x40380000);
    _dadd(0, 0x3FF00000, r0, r1);
    _d2f();
    ov01_02203F2C(*((u32*)(r4 + 0x0000062C)), r0);
    _f2d(r5);
    _dgeq(0, 0x40100000);
    // strh r1, [r6, r0]
    ov01_021EBCA4(*((u32*)(r6 + 4)), 5);
}




void ov01_021ED924(void) {
    // add r1, #0xa
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED94C: ; jump table
    PlayerAvatar_GetMapObject(*((u32*)(*((u32*)(*((u32*)r1) + (0x41 << 2))) + 0x40)), (*((u16*)(*((u16*)(r1 + 0x00000F58)) + 6)) << 0x10));
    ov01_02203EA0();
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    ov01_021EA864(*((u32*)(r4 + 0x4c)), (0 - 1), 1, 0);
    // mvn r1, r1
    ov01_021EA89C(*((u32*)(r4 + 0x4c)), 0, 0, 0);
    // add r2, sp, #0x28
    // strb r0, [r2]
    // add r1, sp, #0x28
    ov01_021EA8C4(*((u32*)(r4 + 0x4c)), (0 + 1), (r2 + 1));
    ov01_02203F2C(*((u32*)(r6 + 0x0000062C)), 0x40800000);
    // strh r1, [r5, r0]
    // add r0, #0xa
    // strh r1, [r5, r0]
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)), 3);
    ov01_02203EA0();
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    ov01_021EA864(*((u32*)(r4 + 0x4c)), (0 - 1), 1, 0);
    // mvn r1, r1
    ov01_021EA89C(*((u32*)(r4 + 0x4c)), 0, 0, 0);
    // add r2, sp, #8
    // strb r0, [r2]
    // add r1, sp, #8
    ov01_021EA8C4(*((u32*)(r4 + 0x4c)), (0 + 1), (r2 + 1));
    ov01_02203F2C(*((u32*)(r6 + 0x0000062C)), 0x40800000);
    // strh r1, [r5, r0]
    // add r1, #0xe
    // add r0, #0xa
    // strh r1, [r5, r0]
    // add r0, #0xa
    // strh r1, [r5, r0]
    ov01_021EBCA4(*((u32*)(r5 + 4)), 5);
}




void ov01_021EDA50(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021ED474(r1, *((u32*)(r1 + 0x00000F58)), 1, 0x00004B6F);
}




void ov01_021EDA7C(void) {
    // str r1, [r4, r0]
    ov01_021EDAB4(r1, 0x00000638);
    SysTask_Destroy(r5);
    // str r1, [r4, r0]
}




void ov01_021EDAB4(void) {
    GF_AssertFail(*((u32*)(r0 + 0x00000F5C)));
    // str r0, [r5, r1]
    // strh r0, [r5, r1]
    PlaySE(((r4 << 0x10) >> 0x10), (0x00000F5C + 4));
}




void ov01_021EDAE0(void) {
}



