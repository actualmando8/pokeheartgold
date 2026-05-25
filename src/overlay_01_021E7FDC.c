/* Decompiled from asm/overlay_01_021E7FDC.s */
#include "global.h"

void UnkFieldSpriteRenderer_ov01_021E7FDC_Init(void) {
    // str r1, [sp, #0x10]
    G2dRenderer_Init(r2, (r0 + 4), r3);
    // str r0, [r5]
    // ldr r0, [sp, #0x10]
    // strh r4, [r5, r1]
    // strh r2, [r5, r0]
    GF2DGfxResHeader_sizeof((0x00000162 - 2), 0x00000162, 6);
    Heap_Alloc(r4, (*((u16*)(r5 + (0x16 << 4))) * r0), *((u16*)(r5 + (0x16 << 4))), r0);
    NARC_New(0xaf, r4);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r6, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    GF2DGfxResHeader_GetByIndex(r7);
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    GfGfxLoader_LoadFromOpenNarc(1, *((u16*)r6), 0, r4);
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    GF2DGfxResHeader_Init(r4);
    // ldr r0, [sp, #0x28]
    Heap_Free();
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // str r5, [sp, #0x18]
    GF2DGfxResHeader_GetByIndex(r7, 0);
    GF2dGfxResHeader_GetNumObjects();
    Create2DGfxResObjMan(r6, r4);
    // ldr r2, [sp, #0x18]
    // str r0, [r2, r1]
    // str r0, [sp, #0x18]
    // add r0, #0x30
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    GF2DGfxResHeader_GetByIndex(r7, 0);
    // str r0, [sp, #0x2c]
    GF2dGfxResHeader_GetNumObjects();
    Create2DGfxResObjList(r4);
    // str r0, [r6, r1]
    // sub r0, #0x18
    // ldr r1, [sp, #0x2c]
    LoadAll2DGfxResObjsFromHeader(*((u32*)(r6 + (0x52 << 2))), (0x52 << 2), *((u32*)(r6 + (0x52 << 2))), r4);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x14]
    GF2DGfxResHeader_GetByIndex(r7, 0);
    GF2DGfxResHeader_Reset();
    Heap_Free(r7);
    sub_0200ADE4(*((u32*)(r5 + (0x52 << 2))));
    sub_0200B050(*((u32*)(r5 + (0x53 << 2))));
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    GfGfxLoader_LoadFromOpenNarc(1, *((u16*)(r1 + 0xc)), 0, r4);
    // str r1, [sp]
    // sub r2, #8
    // str r1, [sp, #4]
    // add r1, #8
    // str r1, [sp, #8]
    // add r1, #0xc
    // str r1, [sp, #0xc]
    SpriteResourceHeaderList_Create(r4, *((u32*)(r5 + (0x4e << 2))), *((u32*)(r5 + ((0x4e << 2) - 4))));
    // str r0, [r5, r1]
    Heap_Free(r6, (0x4b << 2));
    // ldr r0, [sp, #0x20]
    NARC_Delete();
}




void UnkFieldSpriteRenderer_ov01_021E7FDC_Release(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldrh r0, [r5, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldrh r0, [r5, r7]
}




void ov01_021E81F0(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0xc
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldrsh r0, [r4, r0]
    // ldrsh r3, [r4, r3]
    // str r0, [sp]
    // ldrsh r0, [r4, r1]
    // str r3, [sp, #8]
    // str r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // str r0, [sp, #0x18]
    // add r0, r5, r0
    // add r6, sp, #0
    // str r0, [sp, #0x1c]
    // ldmia r6!, {r0, r1}
    // add r5, sp, #0x20
    // stmia r5!, {r0, r1}
    // add r6, sp, #0xc
    // str r0, [r5]
    // ldmia r6!, {r0, r1}
    // add r5, sp, #0x2c
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r0, sp, #0
    *((u16*)(*((u32*)r6) + 0x38)) = 0;
    // add r3, #0x36
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x18
    Sprite_CreateAffine(*((u16*)(r0 + (0x4b << 2))), 0, r0, (0x4b << 2));
    GF_AssertFail();
    Sprite_SetAnimCtrlSeq(r5, *((u16*)(r4 + 0xa)));
    Sprite_SetPalIndexRespectVramOffset(r5, *((u32*)(r4 + 0x10)));
}




void ov01_021E8298(void) {
    // str r1, [sp]
    // str r3, [sp, #4]
    G2dRenderer_Init(r2, (r0 + 4), r3);
    // str r0, [r7]
    // ldr r0, [sp, #4]
    // strh r0, [r7, r1]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // strh r0, [r7, r1]
    // sub r0, #0x20
    // str r2, [r7, r0]
    // sub r1, #0x1c
    // str r2, [r7, r1]
    // strh r2, [r7, r0]
    // ldr r5, [sp]
    // ldr r2, [sp, #4]
    Create2DGfxResObjMan(*((u32*)r5), 0, 6);
    // str r0, [r6, r1]
    // add r0, #0x30
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    Create2DGfxResObjList(*((u32*)0), *((u16*)(r7 + (0x13 << 4))));
    // str r0, [r5, r1]
    // str r4, [r0, r2]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
}




void ov01_021E8378(void) {
    // ldr r1, [sp, #0x30]
    GF2DGfxResObjExistsById(*((u32*)(r0 + (0x4d << 2))));
    GF_AssertFail();
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // sub r0, #0x2e
    // str r1, [sp, #0xc]
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x00000162)), r4, r6, r7);
    sub_0200B00C();
    GF_AssertFail();
    ov01_021E847C(*((u32*)(r5 + (0x53 << 2))), r4);
    // ldr r1, [sp, #0x2c]
    SpriteTransfer_GetPlttOffset(r4);
    GF_AssertFail();
}




void ov01_021E83F0(void) {
}




void ov01_021E8404(void) {
}




void ov01_021E8418(void) {
    // ldr r1, [sp, #0x24]
    GF2DGfxResObjExistsById(*((u32*)(r0 + (0x13 << 4))));
    GF_AssertFail();
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // sub r0, #0x32
    // str r1, [sp, #8]
    AddCharResObjFromNarc(*((u32*)(r5 + 0x00000162)), r4, r6, r7);
    sub_0200ADA4();
    ov01_021E847C(*((u32*)(r5 + (0x52 << 2))), r4);
    GF_AssertFail();
}




void ov01_021E847C(void) {
    // str r1, [r5, r2]
}




void ov01_021E84B0(void) {
    // ldr r0, [sp, #0x28]
    // add r6, r5, r0
    // ldr r1, [sp, #0x2c]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    GF2DGfxResObjExistsById(*((u32*)(r6 + (r0 << 2))));
    GF_AssertFail();
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r6 + r4)), r7);
    // add r2, r5, r4
    ov01_021E847C(*((u32*)(r2 + (0x52 << 2))), r0);
    GF_AssertFail();
    GF_AssertFail();
}




void ov01_021E851C(void) {
    Heap_Alloc(*((u16*)(r0 + 0x00000162)), 0x10);
    Heap_Alloc(*((u16*)(r5 + 0x00000162)), 8);
    *((u32*)(r6 + 8)) = r0;
    Heap_Alloc(*((u16*)(r5 + 0x00000162)), 0x24);
    // str r0, [r1]
    // add r3, sp, #0x2c
    *((u32*)(r6 + 4)) = *((u32*)*((u32*)(r6 + 8)));
    // stmia r3!, {r0}
    // mvn r0, r0
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // ldr r1, [sp, #0x3c]
    // mvn r2, r2
    GF2DGfxResObjExistsById(0, *((u32*)(r5 + ((5 << 6) + 4))), 0);
    // mvn r0, r0
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x40]
    // mvn r0, r0
    GF2DGfxResObjExistsById(*((u32*)(r5 + (0x51 << 2))));
    // mvn r0, r0
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r1, #8
    // str r1, [sp, #0x1c]
    // add r1, #0xc
    // str r1, [sp, #0x20]
    // add r1, #0x10
    // add r0, #0x14
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x34]
    CreateSpriteResourcesHeader(*((u32*)(r6 + 4)), *((u32*)(r5 + (0x13 << 4))));
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // ldrsh r0, [r4, r0]
    _fflt((0 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #0x4c]
    // ldrsh r0, [r4, r0]
    _fflt((2 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #0x50]
    // ldrsh r0, [r4, r0]
    _fflt((4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #0x54]
    // ldr r1, [sp, #0x50]
    // add r0, r1, r0
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // add r0, sp, #0x2c
    *((u16*)((1 << 0xc) + 0x38)) = 0;
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x70]
    // add r0, sp, #0x44
    Sprite_CreateAffine(*((u16*)(r5 + 0x00000162)), 0);
    // str r0, [r6]
    Sprite_GetPalIndex();
    Sprite_SetAnimCtrlSeq(*((u32*)r6), *((u16*)(r4 + 6)));
    // add r1, r5, r1
    Sprite_SetPaletteOverride(*((u32*)r6), *((u32*)(r4 + 0xc)));
    GF_AssertFail();
}




void ov01_021E86F4(void) {
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldrh r0, [r6, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
    // ldrh r0, [r6, r7]
}



