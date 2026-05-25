/* Decompiled from asm/overlay_42.s */
#include "global.h"

void ov42_02227060(void) {
    // str r2, [sp]
    Heap_Alloc(r3, 0x0000230C);
    memset(0, 0x0000230C);
    // str r4, [r7]
    *((u32*)(r7 + 4)) = r5;
    NARC_New(0xb3, r6);
    // str r0, [r7, r1]
    NARC_New(0xba, r6);
    // str r0, [r7, r1]
    Create2DGfxResObjMan(0x9a, 0, r6);
    // str r0, [r5, r1]
    Create2DGfxResObjMan(0x17, (0 + 2), r6);
    // str r0, [r4, r1]
    ov42_02227570(r7, 0, r6);
    // ldr r0, [sp]
    // ldr r2, [sp]
    *((u32*)(r7 + 0xc)) = r0;
    Heap_Alloc(r6, (0x18 * r2));
    *((u32*)(r7 + 8)) = r0;
    memset(0, (0x18 * *((u32*)(r7 + 0xc))), *((u32*)(r7 + 0xc)));
}




void ov42_02227114(void) {
    // add r0, r0, r4
    ov42_02227E68(*((u32*)(r0 + 8)));
    // add r0, r0, r4
    ov42_0222740C(*((u32*)(r5 + 8)));
    // add r4, #0x18
    ov42_02227604(r5, 0);
    ov42_022271F8(r5);
    NARC_Delete(*((u32*)(r5 + 0x00002304)));
    NARC_Delete(*((u32*)(r5 + 0x00002308)));
    Destroy2DGfxResObjMan(*((u32*)(r5 + 0x000022F0)));
    Heap_Free(*((u32*)(r5 + 8)));
    Heap_Free(r5);
}




void ov42_02227194(void) {
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov42_022271D0(void) {
}




void ov42_022271E4(void) {
}




void ov42_022271F8(void) {
    // ldr r1, [r4, r1]
}




void ov42_02227228(void) {
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    GF_AssertFail(r2);
    // ldr r1, [sp, #8]
    ov42_02227B6C(r7, r6);
    ov42_02227C18(r7, r6);
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #0xc]
    ov42_022276DC(r7, *((u8*)ov42_02229B10));
}




void ov42_02227274(void) {
    ov42_02227BE0();
    ov42_02227CA8(r6);
    ov42_02227948(r6, *((u8*)ov42_02229B10));
}




void ov42_0222729C(void) {
}




void ov42_022272B4(void) {
}




void ov42_022272BC(void) {
    // str r3, [sp]
    ov42_02227CF8();
    ov42_02227654(r7);
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov42_022279E8(r5);
    GF_AssertFail();
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #4]
    // add r1, #0x24
    // add r1, r1, r7
    // str r1, [sp, #0x10]
    // ldrsh r0, [r6, r0]
    // str r0, [sp, #0x14]
    // ldrsh r1, [r6, r0]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // ldrsh r1, [r6, r1]
    // str r1, [sp, #0x30]
    // ldr r1, [sp]
    // str r1, [sp, #0x38]
    // str r1, [sp, #8]
    // add r1, #0x1c
    // str r1, [sp, #8]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // add r0, sp, #0xc
    Sprite_CreateAffine(1, *((u32*)(r5 + (*((u32*)r5) * 0x38))), 0x38);
    *((u32*)(r4 + 4)) = r0;
    // ldrsh r1, [r6, r1]
    Sprite_SetPriority(((6 << 0x18) >> 0x18));
    // add r0, r5, r7
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 4)), 6);
    Sprite_SetAnimCtrlSeq(1);
    *((u32*)(r4 + 0xc)) = 9;
    *((u16*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x10)) = 1;
    // add r0, #0x10
    // add r0, r0, r7
    // str r0, [r4]
    // add r0, r5, r0
    ov42_02227B5C(0x000022B8);
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r1, [sp, #0xc]
    // add r2, r5, r1
    // str r2, [sp, #0x10]
    // ldrsh r0, [r6, r0]
    // add r1, #0x24
    // str r0, [sp, #0x14]
    // ldrsh r2, [r6, r0]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // str r1, [sp, #0x30]
    // ldr r1, [sp]
    // str r1, [sp, #0x38]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // add r0, sp, #0xc
    Sprite_CreateAffine(1, *((u32*)(*((u32*)(r5 + 0x000022C8)) + r7)), (2 << 0xb));
    *((u32*)(r4 + 8)) = r0;
    // ldrsh r1, [r6, r1]
    Sprite_SetPriority(((6 << 0x18) >> 0x18));
    *((u32*)(r4 + 8)) = 0;
}




void ov42_0222740C(void) {
    // strb r0, [r4]
}




void ov42_02227430(void) {
}




void ov42_02227434(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov42_02227474(void) {
}




void ov42_02227480(void) {
}




void ov42_02227490(void) {
}




void ov42_022274AC(void) {
}




void ov42_022274B8(void) {
}




void ov42_022274C0(void) {
}




void ov42_022274C4(void) {
}




void ov42_022274D0(void) {
}




void ov42_022274DC(void) {
    // add r1, #8
    // add r2, #0xe
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0
}




void ov42_02227504(void) {
    GF_AssertFail();
    GF_AssertFail();
    *((u32*)(r5 + 0xc)) = r4;
    *((u16*)(r5 + 0x14)) = 0;
    // blx r2
}




void ov42_02227538(void) {
    // ldrsh r1, [r4, r1]
    ov42_02227D30(r0, (0x14 + 1), *((u8*)(ov42_02229B04 + *((u32*)(r0 + 0xc)))));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x14)) = (0x14 + 1);
}




void ov42_02227570(void) {
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r0, r5
    // str r2, [sp, #0x14]
    GF_AssertFail(*((u32*)(r1 + 0x00002188)));
    // add r4, r0, r5
    // ldr r0, [sp, #0xc]
    // add r5, r0, r5
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // ldr r1, [sp, #0x18]
    // add r1, r2, r1
    // str r1, [sp]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // add r1, r0, r1
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(((0x1f + 2) << 2) + 0x000022F0)), *((u32*)(*((u8*)_02229AF8) + 0x00002304)), *((u32*)r4), 0);
    // str r0, [r5, r1]
}




void ov42_02227604(void) {
    // add r1, r6, r5
    GF_AssertFail(*((u32*)(r1 + 0x00002188)));
    // add r5, r6, r5
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r1, r6, r0
    DestroySingle2DGfxResObj(*((u32*)((0 << 0x1f) + 0x000022F0)), *((u32*)(r5 + 0x00002188)), (0 >> 0x1f));
    // str r7, [r5, r0]
}




void ov42_02227654(void) {
    GF_AssertFail(*((u16*)(ov42_02229BA2 + (0 << 2))), (0 << 2), (0 + 1), (ov42_02229BA0 + 4));
}




void ov42_02227680(void) {
    // sub r0, r0, r1
}




void ov42_022276AC(void) {
    GF_AssertFail();
    // add r0, r1, r0
    // add r0, r2, r0
}




void ov42_022276DC(void) {
    // add r0, r5, r0
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
}




void ov42_02227720(void) {
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x40]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x38]
    // str r3, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // str r2, [sp, #0x2c]
    // ldr r2, [sp, #0x3c]
    // str r0, [sp, #8]
    // add r1, #0x14
    // add r6, #0x14
    // add r2, #0xe
    AddCharResObjFromOpenNarc(*((u32*)(r0 + 0x000022F0)), *((u32*)(r0 + 0x000022F0)), 0);
    // str r0, [r6, r4]
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // add r2, #0xd
    // str r0, [sp, #0xc]
    // add r1, #0x10
    // add r7, #0x18
    // str r2, [sp, #0x3c]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + 0x000022F4)), *((u32*)(r5 + 0x000022F4)), 0);
    // str r0, [r7, r4]
    GF2DGfxResObj_GetCharDataPtr(*((u32*)(r6 + r4)));
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    *((u32*)(r0 + 0x10)) = (2 << 0xa);
    // ldr r1, [sp, #0x34]
    *((u32*)(r0 + 0x10)) = (5 << 0xa);
    *((u32*)(r0 + 0x10)) = (6 << 0xa);
    sub_0200AE18(*((u32*)(r6 + r4)), (6 << 0xa), *((u32*)(r0 + 0x10)));
    GF_AssertFail();
    sub_0200B00C(*((u32*)(r7 + r4)));
    GF_AssertFail();
    ov42_02227E78(r5, *((u32*)(r7 + r4)), 1);
    sub_0200A740(*((u32*)(r6 + r4)));
    sub_0200A740(*((u32*)(r7 + r4)));
    // ldr r0, [sp, #0x2c]
    // add r1, r5, r4
    *((u32*)(r1 + 0x1c)) = r0;
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    *((u32*)(r1 + 0x20)) = r0;
    *((u32*)(r1 + 0x10)) = 0;
    // ldr r0, [sp, #0x30]
    ov42_022276AC(0, 2);
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    ov42_022276AC(3);
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r1, #8
    // add r2, #0xc
    // str r1, [sp, #0x1c]
    // add r5, #0x24
    // str r1, [sp, #0x20]
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r5, r4
    CreateSpriteResourcesHeader(0, *((u32*)(r5 + 0x000022F0)), *((u32*)(r5 + 0x000022F0)), r6);
}




void ov42_02227874(void) {
    // str r0, [sp, #0x38]
    // add r0, r7, r0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x50]
    // str r2, [sp, #0x2c]
    // str r3, [sp, #0x30]
    // str r0, [sp, #8]
    // add r1, #0x18
    // add r6, #0x14
    AddCharResObjFromOpenNarc(*((u32*)(r0 + 0x000022F0)), *((u32*)(r0 + 0x000022F0)), (r1 - 1), 0);
    // str r0, [r6, r4]
    // ldr r0, [sp, #0x30]
    GF2DGfxResObj_GetCharDataPtr(*((u32*)(r6 + r4)));
    *((u32*)(r0 + 0x10)) = (2 << 0xa);
    GF2DGfxResObj_GetCharDataPtr(*((u32*)(r6 + r4)), (2 << 0xa));
    *((u32*)(r0 + 0x10)) = (5 << 0xa);
    sub_0200AE18(*((u32*)(r6 + r4)), (5 << 0xa));
    GF_AssertFail();
    sub_0200A740(*((u32*)(r6 + r4)));
    // add r2, r5, r4
    // ldr r1, [sp, #0x2c]
    *((u32*)(r2 + 0x18)) = 0;
    *((u32*)(r2 + 0x1c)) = r1;
    // ldr r1, [sp, #0x30]
    *((u32*)(r2 + 0x20)) = r1;
    *((u32*)(r2 + 0x10)) = 1;
    // ldr r1, [sp, #0x38]
    // add r3, r1, r2
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r1, #8
    // add r2, #0xc
    // str r1, [sp, #0x1c]
    // add r5, #0x24
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x34]
    // add r0, r5, r4
    CreateSpriteResourcesHeader(0, *((u32*)(r5 + 0x000022F0)), 0x00000402);
}




void ov42_02227948(void) {
    // add r0, r5, r4
    // add r0, r5, r4
}




void ov42_0222797C(void) {
    // add r6, #0x14
    sub_0200AEB0(*((u32*)(r0 + (r1 * 0x38))));
    // add r7, #0x18
    sub_0200B0A8(*((u32*)(r5 + r4)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + 0x000022F0)), *((u32*)(r6 + r4)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + 0x000022F4)), *((u32*)(r7 + r4)));
    // str r0, [r6, r4]
    // str r0, [r7, r4]
}




void ov42_022279C0(void) {
    // add r5, #0x14
    sub_0200AEB0(*((u32*)(r0 + (r1 * 0x38))));
    DestroySingle2DGfxResObj(*((u32*)(r6 + 0x000022F0)), *((u32*)(r5 + r4)));
    // str r0, [r5, r4]
}




void ov42_022279E8(void) {
    // add r0, r0, r2
}




void ov42_022279FC(void) {
    // str r1, [sp, #0x2c]
    GF_AssertFail(*((u32*)(r0 + 0x000022B8)));
    // str r4, [sp, #0x34]
    ov42_022279E8(r6, *((u8*)ov42_02229AFC));
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x34]
    GF_AssertFail(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r6 + 0x000022F8)), *((u32*)(r6 + 0x00002304)), 0, 0);
    // str r0, [r4, r1]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r1, #0x30
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r1, #0x14
    AddCharResObjFromOpenNarc(*((u32*)(r6 + (0x8b << 6))), *((u32*)(r6 + (0x8b << 6))), 2, 0);
    // str r0, [r6, r1]
    sub_0200AE18(*((u32*)(r6 + 0x000022B8)), 0x000022B8);
    GF_AssertFail();
    sub_0200A740(*((u32*)(r6 + 0x000022B8)));
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // sub r3, #0x28
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r6, r3
    // ldr r2, [sp, #0x30]
    // add r3, #0xe0
    // add r2, r2, r3
    CreateSpriteResourcesHeader(0, (0x12 << 4), *((u32*)(r6 + 0x000022F0)), (0x12 << 4));
}




void ov42_02227B04(void) {
    // add r0, r5, r0
    ov42_02227B5C(0x000022B8);
    sub_0200AEB0(*((u32*)(r5 + 0x000022B8)));
    // sub r1, #0x38
    DestroySingle2DGfxResObj(*((u32*)(r5 + 0x000022F0)), *((u32*)(r5 + 0x000022F0)));
    // str r4, [r5, r0]
    // add r7, #8
    DestroySingle2DGfxResObj(*((u32*)(r5 + 0x000022F8)), *((u32*)(r5 + (0x8b << 6))));
    // str r6, [r5, r7]
}




void ov42_02227B5C(void) {
    // cmp r0, #0
    // beq _02227B66
}




void ov42_02227B6C(void) {
    GF_AssertFail(*((u32*)(r0 + (0x23 << 8))));
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0x14
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + 0x000022F4)), *((u32*)(r5 + 0x000022F4)), 0, 0);
    // str r0, [r5, r1]
    sub_0200B00C(*((u32*)(r5 + (0x23 << 8))), (0x23 << 8));
    GF_AssertFail();
    ov42_02227E78(r5, *((u32*)(r5 + (0x23 << 8))), 8);
    sub_0200A740(*((u32*)(r5 + (0x23 << 8))));
}




void ov42_02227BE0(void) {
    GF_AssertFail(*((u32*)(r0 + (0x23 << 8))));
    sub_0200B0A8(*((u32*)(r4 + (0x23 << 8))));
    // add r1, #0xc
    DestroySingle2DGfxResObj(*((u32*)(r4 + 0x000022F4)), *((u32*)(r4 + 0x000022F4)));
    // str r1, [r4, r0]
}




void ov42_02227C18(void) {
    // str r1, [sp, #0xc]
    GF_AssertFail(*((u32*)(r0 + 0x000021B8)));
    // str r0, [sp, #0x10]
    // add r0, r4, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x10]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x000022F8)), *((u32*)(r5 + 0x00002308)), 0);
    // str r0, [r6, r1]
    // add r0, r4, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x000022FC)), *((u32*)(r5 + 0x00002308)), r7, 0);
    // str r0, [r6, r1]
    // ldr r0, [sp, #0x10]
    // add r6, #0x10
    // str r0, [sp, #0x10]
}




void ov42_02227CA8(void) {
    GF_AssertFail(*((u32*)(r0 + 0x000021B8)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + 0x000022F8)), *((u32*)(r5 + 0x000021B8)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + 0x000022FC)), *((u32*)(r4 + 0x000021BC)));
    // str r7, [r4, r0]
    // str r7, [r4, r0]
    // add r4, #0x10
}




void ov42_02227CF8(void) {
    // add r0, r0, r4
    // add r0, r1, r0
    // add r4, #0x18
}




void ov42_02227D30(void) {
    // blx r1
}




void ov42_02227D48(void) {
}




void ov42_02227D54(void) {
    *((u32*)(r0 + 0x10)) = r1;
}




void ov42_02227D64(void) {
    *((u32*)(r0 + 0x10)) = r1;
}




void ov42_02227D74(void) {
}




void ov42_02227D88(void) {
    *((u32*)(r0 + 0x10)) = r1;
    // add r1, #9
}




void ov42_02227D98(void) {
    *((u32*)(r0 + 0x10)) = r1;
}




void ov42_02227DA8(void) {
    *((u32*)(r0 + 0x10)) = r1;
}




void ov42_02227DB8(void) {
    *((u32*)(r0 + 0x10)) = r1;
}




void ov42_02227DC8(void) {
    *((u32*)(r0 + 0x10)) = r1;
}




void ov42_02227DD8(void) {
    // bx r3
    // nop
    // _02227DE4: .word Sprite_UpdateAnim
}




void ov42_02227DE8(void) {
    // bx r3
    // nop
    // _02227DF4: .word Sprite_UpdateAnim
}




void ov42_02227DF8(void) {
    // ldrsh r0, [r1, r0]
}




void ov42_02227E18(void) {
    // bx r3
    // nop
    // _02227E24: .word Sprite_UpdateAnim
}




void ov42_02227E28(void) {
    // bx r3
    // nop
    // _02227E34: .word Sprite_UpdateAnim
}




void ov42_02227E38(void) {
    // bx r3
    // nop
    // _02227E44: .word Sprite_UpdateAnim
}




void ov42_02227E48(void) {
    // bx r3
    // nop
    // _02227E54: .word Sprite_UpdateAnim
}




void ov42_02227E58(void) {
    // bx r3
    // nop
    // _02227E64: .word Sprite_UpdateAnim
}




void ov42_02227E68(void) {
    // cmp r0, #0
    // bne _02227E72
}




void ov42_02227E78(void) {
    // str r0, [sp, #4]
    // mvn r0, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // mvn r0, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
}




void ov42_02227EE0(void) {
    // strh r5, [r4]
}




void ov42_02227F28(void) {
}




void ov42_02227F40(void) {
    // ldrh r0, [r0]
}




void ov42_02227F44(void) {
}




void ov42_02227F48(void) {
    // ldrh r3, [r4]
    // mul r2, r3
}




void ov42_02227F68(void) {
    // str r0, [sp]
    GF_AssertFail(*((u32*)ov42_02229E04));
    // add r0, r4, r0
    // str r0, [sp]
    // ldr r0, [sp]
}




void ov42_02227FA4(void) {
    // mvn r1, r1
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov42_02227FDC(void) {
    // mvn r1, r1
    // str r0, [sp]
    // str r0, [sp, #4]
}




u32 ov42_02228010(void) {
    // str r0, [r4]
}




void ov42_02228050(void) {
}




void ov42_02228068(void) {
}




void ov42_0222807C(void) {
    ov42_022280A8();
    ov42_02228148(r6, ((0x00000000 << 0x10) >> 0x10));
    ov42_02228574();
}




void ov42_022280A8(void) {
}




s32 ov42_022280B8(void) {
    // ldrsh r2, [r4, r1]
    // ldrsh r3, [r4, r2]
    // ldrsh r1, [r4, r1]
    // ldrsh r1, [r4, r2]
    // str r1, [r0]
}




void ov42_02228100(void) {
    // strb r1, [r0]
}




void ov42_02228110(void) {
    // add r6, r4, r3
    // add r0, r4, r0
    // add r0, #0x18
    // add r3, #0x18
}




void ov42_02228148(void) {
    // add r0, r2, r1
}




void ov42_02228178(void) {
}




void ov42_02228180(void) {
}




s32 ov42_02228188(void) {
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022281A6: ; jump table
    // ldrsh r5, [r4, r0]
    // ldrsh r5, [r4, r0]
    // ldrsh r5, [r4, r0]
    // ldrsh r5, [r4, r0]
}




void ov42_022281F8(void) {
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02228218: ; jump table
}




void ov42_02228270(void) {
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // ldrsb r1, [r1, r0]
    // add r1, r3, r1
    // strh r1, [r2]
    // ldrsh r3, [r2, r1]
    // ldrsb r0, [r1, r0]
    // add r0, r3, r0
    *((u16*)(r2 + 2)) = (r1 << 1);
}




void ov42_022282A4(void) {
    // ldrb r0, [r1, r0]
    // nop
    // _022282AC: .word ov42_02229E08
}




void ov42_022282B0(void) {
    // add r0, r3, r0
    // add r2, #0x18
}




void ov42_022282DC(void) {
    // orr r0, r1
}




void ov42_022282E8(void) {
    // orr r0, r1
}




void ov42_022282F4(void) {
    // add r1, sp, #0
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r3, [r1, r0]
    // ldrsh r2, [r1, r2]
    // sub r2, r3, r2
    // ldrsh r5, [r1, r2]
    // ldrsh r2, [r1, r2]
    // sub r2, r2, r5
    // ldrsh r0, [r1, r0]
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // add r1, sp, #0
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    // ldrsh r0, [r1, r0]
    // add r0, r0, r5
}




void ov42_0222839C(void) {
    // add r1, sp, #0
}




void ov42_022283AC(void) {
    // add r1, sp, #0
}




void ov42_022283BC(void) {
    // str r1, [sp]
    // add r1, sp, #0x10
    // mov r2, sp
    // strh r0, [r2]
    // add r1, sp, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // add r4, sp, #0x10
    // ldrsh r7, [r4, r0]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #8]
}




void ov42_022284A4(void) {
    // add r2, sp, #0x30
    // str r0, [sp]
    // ldrsh r6, [r2, r1]
    // str r0, [sp, #8]
    // add r1, sp, #0x30
    // ldrsh r7, [r1, r0]
    // add r4, sp, #0xc
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
}




void ov42_02228548(void) {
    // mov r2, sp
    // strh r1, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r1 + 2));
    // blx r3
    *((u16*)(r0 + 0x16)) = 0;
}




void ov42_02228574(void) {
    ov42_02228188(5);
    // blx r1
    *((u16*)(r4 + 0x16)) = (*((u16*)(r4 + 0x16)) + 1);
    ov42_02228C40(r4, (*((u16*)(r4 + 0x16)) + 1), (r0 << 2));
    *((u16*)(r4 + 0x16)) = 0;
}




void ov42_022285A4(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_022285FC(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_02228668(void) {
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r3, sp
    // add r1, sp, #0x18
    // strh r2, [r3]
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_02228700(void) {
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r3, sp
    // add r1, sp, #0x18
    // strh r2, [r3]
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_02228798(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_022287F0(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_0222885C(void) {
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r3, sp
    // add r1, sp, #0x18
    // strh r2, [r3]
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_022288F4(void) {
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r3, sp
    // add r1, sp, #0x18
    // strh r2, [r3]
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_0222898C(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_022289F8(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_02228A64(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_02228AD0(void) {
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
}




u8 ov42_02228B3C(void) {
}




void ov42_02228B40(void) {
}




void ov42_02228B48(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r3, sp
    // strh r2, [r3]
}




void ov42_02228B88(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // mov r3, sp
    // strh r2, [r3]
}




u8 ov42_02228BC8(void) {
}




void ov42_02228BCC(void) {
}




void ov42_02228BD4(void) {
}




void ov42_02228BDC(void) {
    // add r0, sp, #8
    // mov r3, sp
    // strh r2, [r3]
    // add r1, sp, #0
    // strh r0, [r1]
}




void ov42_02228C0C(void) {
}




void ov42_02228C40(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // add r1, sp, #0
    // mov r4, sp
    // strh r3, [r4]
}




void ov42_02228C80(void) {
    GF_AssertFail();
    GF_AssertFail();
    GF_AssertFail();
    GF_AssertFail();
    ov42_02228178(r5, *((u8*)(r4 + 3)));
    // str r0, [sp, #4]
    GF_AssertFail();
    // str r6, [sp]
    // ldr r0, [sp, #4]
    // blx r4
}




void ov42_02228CDC(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
}




void ov42_02228D08(void) {
    // str r1, [sp]
    // ldr r0, [sp, #0x18]
}




void ov42_02228D44(void) {
    // str r2, [sp, #4]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
}




void ov42_02228DB8(void) {
}




void ov42_02228DC8(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
}




void ov42_02228DF0(void) {
}




void ov42_02228DFC(void) {
}




void ov42_02228E0C(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
}




void ov42_02228E34(void) {
    // add r1, sp, #0
    // mov r2, sp
    // strh r0, [r2]
    // add r2, sp, #0
    // strh r0, [r2]
    // ldrsh r3, [r2, r1]
    // asr r1, r3, #3
    // add r1, r3, r1
    // ldrsh r3, [r2, r3]
    // asr r2, r3, #3
    // add r2, r3, r2
}




void ov42_02228E9C(void) {
}




void ov42_02228EB0(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // strh r0, [r5]
    // ldr r0, [sp, #0x18]
}




u32 ov42_02228EDC(void) {
    // str r1, [sp]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp]
    // ldr r3, [sp, #0x18]
    // str r0, [r4]
    // ldr r0, [sp, #0x18]
}




void ov42_02228F24(void) {
    // ldr r5, [sp, #0x28]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    Heap_Alloc(r5, 0xc);
    // ldr r1, [sp, #4]
    ov42_02227060(r7, r6, r5);
    // str r0, [r4]
    *((u16*)(r4 + 8)) = r6;
    Heap_Alloc(r5, (0x14 * *((u16*)(r4 + 8))), *((u16*)(r4 + 8)));
    *((u32*)(r4 + 4)) = r0;
    memset(0, (0x14 * *((u16*)(r4 + 8))), *((u16*)(r4 + 8)));
    *((u8*)(r4 + 0xa)) = 2;
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #8]
    *((u8*)(r4 + 0xb)) = 2;
    // str r5, [sp]
    // ldr r3, [sp, #0x20]
    ov42_02227194(*((u32*)r4), *((u8*)(r4 + 0xb)));
    ov42_0222729C(*((u32*)r4), *((u8*)(r4 + 0xb)), 0x00009C41, r5);
}




void ov42_02228F94(void) {
    // add r0, r0, r4
    // add r0, r0, r4
    // add r4, #0x14
}




void ov42_02228FE0(void) {
    // str r4, [sp]
}




void ov42_02229004(void) {
}




void ov42_02229010(void) {
}




void ov42_0222901C(void) {
}




void ov42_02229028(void) {
}




u32 ov42_0222903C(void) {
    // str r3, [sp]
    // str r5, [r4]
    // add r1, sp, #4
    // strh r0, [r1]
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // add r1, sp, #4
    // ldr r3, [sp]
    // add r1, sp, #4
}




void ov42_022290C4(void) {
}




void ov42_022290DC(void) {
    // add r0, r0, r4
    // add r0, r0, r4
    // add r4, #0x14
}




void ov42_0222910C(void) {
    // asr r1, r0, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
}




void ov42_0222919C(void) {
}




void ov42_022291A0(void) {
}




void ov42_022291AC(void) {
}




void ov42_022291B8(void) {
}




void ov42_022291D8(void) {
}




void ov42_022291F4(void) {
}




void ov42_02229200(void) {
}




void ov42_0222920C(void) {
}




void ov42_02229218(void) {
}




void ov42_0222922C(void) {
    // sub r0, r0, r1
    // sub r0, r0, r1
}




void ov42_02229248(void) {
}




void ov42_02229258(void) {
}




void ov42_02229274(void) {
    // cmp r0, #0
    // bne _0222927E
}




void ov42_02229284(void) {
    // add r0, r0, r4
    // add r0, r1, r0
    // add r4, #0x14
}




void ov42_022292BC(void) {
}




void ov42_022292D8(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // ldrsh r0, [r1, r0]
    // strh r0, [r5]
    // ldrsh r0, [r1, r0]
    // strh r0, [r4]
}




void ov42_02229308(void) {
    // str r2, [sp]
    ov42_022274D0(*((u32*)(r0 + 4)));
    ov42_022274C0(*((u32*)(r5 + 4)));
    // ldr r2, [sp]
    ov42_02227504(*((u32*)(r5 + 4)), r4);
    ov42_022274C4(*((u32*)(r5 + 4)), *((u16*)(r5 + 0xe)));
    *((u16*)(r5 + 0x10)) = r6;
    *((u16*)(r5 + 0xe)) = r7;
}




void ov42_02229358(void) {
    // add r3, sp, #0
    // strh r0, [r3]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // sub r1, #0x60
    // sub r2, #0x70
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}




void ov42_02229394(void) {
}




void ov42_022293A0(void) {
}




void ov42_022293A8(void) {
    // ldrsh r0, [r0, r1]
}




void ov42_022293B0(void) {
    // ldrsh r0, [r0, r1]
}




void ov42_022293B8(void) {
    // str r3, [sp, #4]
    // strb r0, [r2]
    // str r6, [r4]
    // ldr r0, [sp, #4]
    // str r0, [sp]
    // add r3, #0xc
}




void ov42_0222940C(void) {
}




void ov42_02229420(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r2, r3, r2
}




void ov42_02229514(void) {
    // ldmia r6!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, sp, #0
    *((u8*)(*((u32*)ov42_02229EBC) + 0x11)) = *((u8*)(r2 + 2));
    *((u8*)(*((u32*)ov42_02229EBC) + 0x12)) = *((u8*)(r2 + 3));
    *((u8*)(*((u32*)ov42_02229EBC) + 0x13)) = *((u8*)(r2 + 4));
    *((u8*)(*((u32*)ov42_02229EBC) + 0x14)) = *((u8*)(r2 + 5));
    *((u8*)(*((u32*)ov42_02229EBC) + 0x15)) = *((u8*)(r2 + 6));
    *((u8*)(*((u32*)ov42_02229EBC) + 0x16)) = 0;
    // str r0, [sp, #0x18]
    FreeBgTilemapBuffer(r0, ((r1 << 0x18) >> 0x18));
    // add r2, sp, #0
    InitBgFromTemplate(r5, ((r4 << 0x18) >> 0x18), 0);
}




void ov42_02229570(void) {
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r3, r0, #0x10
    // asr r0, r2, #2
    // add r0, r2, r0
    // sub r6, r6, r4
    // ror r6, r1
    // add r4, r4, r6
    // asr r6, r4, #0x10
    // sub r2, r2, r4
    // ror r2, r1
    // add r1, r4, r2
    // asr r4, r1, #0x10
    // asr r0, r0, #0x10
    // neg r0, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // neg r3, r3
    // asr r3, r3, #0x10
}




void ov42_02229600(void) {
    // str r0, [sp, #0x1c]
    // ldr r4, [sp, #0x50]
    // asr r0, r0, #0x10
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x20]
    // str r2, [sp, #0x24]
    // asr r0, r0, #0x10
    // str r0, [sp, #0x30]
    // neg r0, r5
    // asr r0, r0, #0x10
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // neg r0, r4
    // asr r0, r0, #0x10
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // sub r0, r0, r5
    // asr r7, r0, #0x10
    // sub r0, r0, r4
    // asr r6, r0, #0x10
    // ldr r0, [sp, #0x2c]
    // add r1, r0, r7
    // ldr r0, [sp, #0x34]
    // sub r0, r1, r0
    // sub r0, r7, r0
    // asr r7, r0, #0x10
    // ldr r0, [sp, #0x28]
    // add r1, r0, r6
    // ldr r0, [sp, #0x30]
    // sub r0, r1, r0
    // sub r0, r6, r0
    // asr r6, r0, #0x10
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // add r0, #0xc
    // str r0, [sp, #0x24]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
}




void ov42_022296F0(void) {
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // ldr r0, [sp, #0x70]
    // str r3, [sp, #0x24]
    // str r0, [sp, #0x70]
    // ldr r0, [sp, #0x78]
    // str r0, [sp, #0x78]
    // ldr r0, [sp, #0x7c]
    // str r0, [sp, #0x7c]
    // ldr r0, [sp, #0x80]
    // str r0, [sp, #0x80]
    // ldr r0, [sp, #0x7c]
    // ldr r1, [sp, #0x80]
    // str r0, [sp, #0x40]
    // add r1, sp, #0x58
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x70]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x78]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x7c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x80]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // ldr r3, [sp, #0x24]
    // ldrsb r0, [r1, r0]
    // str r0, [sp, #0x48]
    // ldrsb r0, [r1, r0]
    // str r0, [sp, #0x3c]
    // ldrsb r0, [r1, r0]
    // str r0, [sp, #0x38]
    // asr r0, r0, #0x18
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x78]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // ldr r1, [sp, #0x48]
    // add r1, r0, r1
    // ldr r1, [sp, #0x48]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // sub r1, r1, r0
    // asr r1, r1, #0x18
    // str r1, [sp, #0x44]
    // ldr r2, [sp, #0x48]
    // sub r1, r2, r1
    // asr r1, r1, #0x18
    // str r1, [sp, #0x48]
    // ldr r1, [sp, #0x78]
    // ldr r4, [sp, #0x3c]
    // asr r2, r1, #0x18
    // ldr r5, [sp, #0x38]
    // ldr r7, [sp, #0x34]
    // str r1, [sp, #0x30]
    // ldr r1, [sp, #0x44]
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x4c]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp, #0x28]
    // add r0, r0, r4
    // ldr r0, [sp, #0x28]
    // sub r0, r1, r0
    // asr r6, r0, #0x18
    // sub r0, r4, r6
    // asr r4, r0, #0x18
    // ldr r0, [sp, #0x7c]
    // asr r1, r5, #4
    // str r0, [sp]
    // ldr r0, [sp, #0x80]
    // add r1, r5, r1
    // str r0, [sp, #4]
    // add r0, sp, #0x50
    // str r0, [sp, #8]
    // asr r1, r1, #0x18
    // ldr r0, [sp, #0x70]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x40]
    // str r1, [sp]
    // ldr r1, [sp, #0x2c]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x50
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #0x10]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x14]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // ldr r3, [sp, #0x24]
    // add r0, r5, r6
    // asr r5, r0, #0x18
    // add r0, r7, r6
    // asr r7, r0, #0x18
    // ldr r1, [sp, #0x78]
    // ldr r0, [sp, #0x44]
    // add r0, r1, r0
    // str r0, [sp, #0x78]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x44]
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x48]
}




void ov42_02229880(void) {
}




void ov42_022298B4(void) {
    // ldr r4, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r5, r5, r5
    // add r5, pc
    // asr r5, r5, #0x10
    // add pc, r5
    // _022298D0: ; jump table
    // strh r4, [r2]
    // sub r4, r4, r5
    // strh r4, [r2]
    // asr r2, r2, #0x10
    // add r0, r0, r2
    // strh r4, [r2]
    // sub r1, r3, r1
    // asr r1, r1, #0x10
    // add r0, r0, r1
    // sub r5, r4, r5
    // strh r5, [r2]
    // sub r5, r3, r5
    // add r1, r2, r1
    // add r1, r2, r1
    // add r0, r0, r2
}




void ov42_02229974(void) {
    // str r0, [r4]
}




void ov42_022299AC(void) {
}




void ov42_022299C0(void) {
    // add r1, sp, #0
    // add r1, r3, r2
    // strh r0, [r3, r2]
}




void ov42_02229A08(void) {
    // add r2, r3, r0
    // strh r0, [r1]
}




void ov42_02229A40(void) {
    // str r0, [r4]
}




void ov42_02229A78(void) {
}




void ov42_02229A8C(void) {
    // add r1, sp, #0
    // add r1, r3, r2
    // strh r0, [r3, r2]
}




void ov42_02229AC8(void) {
    // add r2, r3, r0
    // strh r0, [r1]
}



