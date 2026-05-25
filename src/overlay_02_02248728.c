/* Decompiled from asm/overlay_02_02248728.s */
#include "global.h"

void ov02_02248728(void) {
    // ldr r0, [sp, #0x1c]
    // strb r6, [r5]
    // ldr r4, [sp, #0x18]
    *((u8*)(r0 + 1)) = r3;
    *((u8*)(r0 + 2)) = r4;
    // str r0, [sp, #0x1c]
    *((u8*)(r0 + 3)) = r0;
    // ldr r0, [sp, #0x20]
    *((u8*)(r0 + 4)) = r0;
    // ldr r0, [sp, #0x24]
    *((u8*)(r0 + 5)) = r0;
    // ldr r0, [sp, #0x28]
    *((u8*)(r0 + 6)) = r0;
    // ldr r0, [sp, #0x2c]
    *((u8*)(r0 + 7)) = r0;
    // add r1, #0xc
    G2dRenderer_Init(r1, r0, 4);
    *((u32*)(r5 + 8)) = r0;
    // add r0, #0xc
    G2dRenderer_SetSubSurfaceCoords(r5, 0, (2 << 0x14));
    Create2DGfxResObjMan(r6, 0, 4);
    // str r0, [r5, r1]
    Create2DGfxResObjMan(r7, 1, 4);
    // str r0, [r5, r1]
    Create2DGfxResObjMan(r4, 2, 4);
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x1c]
    Create2DGfxResObjMan(3, 4);
    // str r0, [r5, r1]
    ov02_0224B690(4, (r6 << 3));
    // str r0, [r5, r1]
    ov02_0224B690(4, (r7 << 3));
    // str r0, [r5, r1]
    ov02_0224B690(4, (r4 << 3));
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x1c]
    ov02_0224B690(4, ((0x53 << 2) << 3));
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x20]
    // asr r0, r0, #0x10
    // ldr r3, [r5, r3]
    // strh r0, [r3, r2]
    // add r2, #8
    // ldr r0, [sp, #0x24]
    // asr r1, r0, #0x10
    // ldr r0, [r5, r6]
    // strh r1, [r0, r2]
    // add r2, #8
    // ldr r2, [sp, #0x28]
    // asr r6, r2, #0x10
    // ldr r3, [r5, r2]
    // strh r6, [r3, r0]
    // add r0, #8
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x2c]
    // asr r4, r2, #0x10
    // ldr r2, [r5, r3]
    // strh r4, [r2, r0]
    // ldr r2, [sp, #0x1c]
    // add r0, #8
}



void ov02_0224886C(void) {
    // ldrb r0, [r5]
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    sub_0200AEB0(*((u32*)((0x51 << 2) + 4)));
    // ldrb r0, [r5]
    // add r4, #8
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    sub_0200B0A8(*((u32*)((0x52 << 2) + 4)));
    // add r4, #8
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    sub_0200A740(*((u32*)((0x53 << 2) + 4)));
    // add r4, #8
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    sub_0200A740(*((u32*)((0x15 << 4) + 4)));
    // add r4, #8
    // ldr r0, [r5, r0]
    Destroy2DGfxResObjMan((0x4d << 2));
    // ldr r0, [r5, r0]
    Destroy2DGfxResObjMan((0x4e << 2));
    // ldr r0, [r5, r0]
    Destroy2DGfxResObjMan((0x4f << 2));
    // ldr r0, [r5, r0]
    Destroy2DGfxResObjMan((5 << 6));
    // ldr r0, [r5, r0]
    Heap_Free((0x51 << 2));
    // ldr r0, [r5, r0]
    Heap_Free((0x52 << 2));
    // ldr r0, [r5, r0]
    Heap_Free((0x53 << 2));
    // ldr r0, [r5, r0]
    Heap_Free((0x15 << 4));
    SpriteList_DeleteAllSprites(*((u32*)(r5 + 8)));
    SpriteList_Delete(*((u32*)(r5 + 8)));
}



void ov02_02248980(void) {
    // ldrb r5, [r6]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // ldr r3, [r6, r0]
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // ldrsh r1, [r3, r0]
    // mov r0, ip
    // strh r7, [r0, r4]
    // ldr r1, [r6, r0]
    // add r1, r1, r4
    *((u16*)(r1 + 2)) = 0;
    // str r7, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    AddCharResObjFromOpenNarc((0x51 << 2), 4, 0, 0);
    // ldr r1, [r6, r1]
    // add r1, r1, r4
    *((u32*)((0x51 << 2) + 4)) = r0;
    // add r3, #8
    GF_AssertFail((0x51 << 2), (r2 + 1));
}



void ov02_022489F0(void) {
    // ldrb r3, [r0]
    // ldr r0, [r0, r4]
    // ldrsh r5, [r6, r4]
    // add r0, r0, r1
    sub_0200ADA4(*((u32*)(r0 + 4)), (0 << 3), 0);
    // add r6, #8
    GF_AssertFail((r2 + 1));
}



void ov02_02248A24(void) {
    // ldrb r3, [r0]
    // ldr r0, [r0, r4]
    // ldrsh r5, [r6, r4]
    // add r0, r0, r1
    sub_0200A740(*((u32*)(r0 + 4)), (0 << 3), 0);
    // add r6, #8
    GF_AssertFail((r2 + 1));
}



void ov02_02248A58(void) {
    // ldrb r5, [r6]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x10]
    // ldr r3, [r6, r0]
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // ldrsh r1, [r3, r0]
    // mov r0, ip
    // strh r7, [r0, r4]
    // ldr r1, [r6, r0]
    // add r1, r1, r4
    *((u16*)(r1 + 2)) = 0;
    // str r7, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    AddPlttResObjFromOpenNarc((0x52 << 2), 4, 0, 0);
    // ldr r1, [r6, r1]
    // add r1, r1, r4
    *((u32*)((0x52 << 2) + 4)) = r0;
    // add r3, #8
    GF_AssertFail((0x52 << 2), (r2 + 1));
}



void ov02_02248AC8(void) {
    // ldr r0, [r0, r4]
    // ldrsh r5, [r6, r4]
    // add r0, r0, r1
    sub_0200B00C(*((u32*)(r0 + 4)), (0 << 3), 0, *((u8*)(r0 + 1)));
    // add r6, #8
    GF_AssertFail((r2 + 1));
}



void ov02_02248AFC(void) {
    // ldr r0, [r0, r4]
    // ldrsh r5, [r6, r4]
    // add r0, r0, r1
    sub_0200A740(*((u32*)(r0 + 4)), (0 << 3), 0, *((u8*)(r0 + 1)));
    // add r6, #8
    GF_AssertFail((r2 + 1));
}



void ov02_02248B30(void) {
    // ldrb r5, [r6]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // ldr r3, [r6, r0]
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // ldrsh r1, [r3, r0]
    // mov r0, ip
    // strh r7, [r0, r4]
    // ldr r1, [r6, r0]
    // add r1, r1, r4
    *((u16*)(r1 + 2)) = 0;
    // str r7, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    AddCellOrAnimResObjFromOpenNarc((0x53 << 2), 4, 0, 0);
    // ldr r1, [r6, r1]
    // add r1, r1, r4
    *((u32*)((0x53 << 2) + 4)) = r0;
    // add r3, #8
    GF_AssertFail((0x53 << 2), (r2 + 1));
}



void ov02_02248BA0(void) {
    // ldrb r5, [r6]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // ldr r3, [r6, r0]
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // ldrsh r1, [r3, r0]
    // mov r0, ip
    // strh r7, [r0, r4]
    // ldr r1, [r6, r0]
    // add r1, r1, r4
    *((u16*)(r1 + 2)) = 0;
    // str r7, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    AddCellOrAnimResObjFromOpenNarc((0x15 << 4), 4, 0, 0);
    // ldr r1, [r6, r1]
    // add r1, r1, r4
    *((u32*)((0x15 << 4) + 4)) = r0;
    // add r3, #8
    GF_AssertFail((0x15 << 4), (r2 + 1));
}



void ov02_02248C10(void) {
    // ldrsb r3, [r5, r0]
    // ldr r6, [sp, #0x84]
    // sub r0, #8
    // str r0, [sp, #0x84]
    // ldr r0, [sp, #0x84]
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x88]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r6, [r5, r0]
    // str r6, [sp, #0x14]
    // ldr r6, [r5, r6]
    // str r6, [sp, #0x18]
    // add r6, #8
    // ldr r6, [r5, r6]
    // add r0, #0xc
    // str r6, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    // str r3, [sp, #0x28]
    // ldr r3, [sp, #0x80]
    // add r0, sp, #0x4c
    CreateSpriteResourcesHeader((0x4d << 2), r2, r3, 0);
    // add r2, sp, #0x34
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x8c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    Sprite_Create(4);
    GF_AssertFail();
}



void ov02_02248C98(void) {
}



void ov02_02248CAC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // add r4, r0, #0
    // mov r2, #0
    // add r0, sp, #0x1c
    // str r2, [r0]
    // str r2, [r0, #4]
    // add r3, sp, #0x28
    // str r2, [r3]
    // str r2, [r3, #4]
    // ldr r6, _02248D14 ; =ov02_02253360
    // str r2, [r0, #8]
    // ldmia r6!, {r0, r1}
    // add r5, sp, #0x10
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // str r2, [r3, #8]
    // str r0, [r5]
    // add r1, r3, #0
    // str r2, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // mov r0, #0x84
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r3, r2, #0
    // bl ov02_02248C10
    // add r4, r0, #0
    // mov r1, #2
    // bl Sprite_SetAffineOverwriteMode
    // add r0, r4, #0
    // add r1, sp, #0x1c
    // bl Sprite_SetAffineMatrix
    // add r0, r4, #0
    // add r1, sp, #0x10
    // bl Sprite_SetAffineScale
    // mov r0, #0
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // add r0, r4, #0
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02248D14: .word ov02_02253360
    // TODO: decompile
}



void ov02_02248D18(void) {
    // add r2, sp, #0x10
    // str r3, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, sp, #0x10
    ov02_02248C10(0x83, 2, 1);
    Sprite_SetDrawFlag(0);
    Sprite_SetAnimCtrlSeq(r4, 6);
}



void ov02_02248D58(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r5, sp, #0x18
    // mov r4, #0
    // str r4, [r5]
    // str r4, [r5, #4]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x10]
    // str r4, [r5, #8]
    // str r1, [sp, #8]
    // add r0, sp, #8
    // str r0, [sp]
    // mov r0, #0x82
    // str r0, [sp, #4]
    // add r0, r1, #0
    // ldr r1, _02248D88 ; =ov02_02253454
    // add r2, r5, #0
    // add r3, r4, #0
    // bl sub_02068B0C
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _02248D88: .word ov02_02253454
    // TODO: decompile
}



void ov02_02248D8C(void) {
}



void ov02_02248D98(void) {
    sub_02068D98();
    // add r2, #0x58
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    ov02_02248CAC(*((u32*)(r4 + 0x64)), r4, r0);
    *((u32*)(r4 + 0x68)) = r0;
}



void ov02_02248DBC(void) {
    sub_02068D74();
    sub_02068B48(*((u32*)(r0 + 0x6c)));
    ov01_021FCD78(*((u32*)(r4 + 0x70)));
    sub_02068B48(r5);
}



void ov02_02248DE4(void) {
}



void ov02_02248DF0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldrb r0, [r5]
    // lsl r1, r0, #2
    // ldr r0, _02248E0C ; =ov02_02253320
    // ldr r4, [r0, r1]
    // ldrb r1, [r5, #1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _02248DFC
    // pop {r3, r4, r5, pc}
    // _02248E0C: .word ov02_02253320
    // TODO: decompile
}



void ov02_02248E10(void) {
}



void ov02_02248E20(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // ldr r4, _02248F74 ; =ov02_0225339C
    // add r2, r0, #0
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0x24
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // ldr r4, _02248F78 ; =ov02_022533CC
    // str r0, [r3]
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0x18
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // add r0, r2, #0
    // bl sub_02068D74
    // add r4, r0, #0
    // mov r3, #1
    // add r5, r4, #0
    // strb r3, [r4]
    // mov r2, #0
    // strb r2, [r4, #2]
    // strb r2, [r4, #1]
    // str r2, [r4, #4]
    // add r6, sp, #0x24
    // ldmia r6!, {r0, r1}
    // add r5, #8
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // str r0, [r5]
    // str r2, [r4, #0x14]
    // str r2, [r4, #0x18]
    // str r2, [r4, #0x1c]
    // ldr r0, _02248F7C ; =0x0015E000
    // add r2, r4, #0
    // add r5, sp, #0x18
    // str r0, [r4, #0x38]
    // ldmia r5!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r2]
    // lsl r0, r3, #0xa
    // str r0, [r4, #0x50]
    // mov r0, #0x2d
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x40]
    // mov r0, #3
    // lsl r0, r0, #0x12
    // str r0, [r4, #0x48]
    // lsl r0, r3, #0x11
    // str r0, [r4, #0x4c]
    // mov r0, #0x2d
    // bl GF_CosDeg
    // ldr r2, [r4, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r4, #0x14]
    // ldr r1, [r4, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r2, [r4, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r4, #0x18]
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x28]
    // ldr r0, [r4, #0x68]
    // add r1, sp, #0x24
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x68]
    // add r1, sp, #0x18
    // bl Sprite_SetAffineScale
    // ldr r1, [r4, #0x38]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // ldr r0, [r4, #0x68]
    // bl Sprite_SetAffineZRotation
    // ldr r0, [r4, #0x68]
    // mov r1, #0x84
    // bl Sprite_SetDrawPriority
    // ldr r0, [r4, #0x68]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x58]
    // ldr r1, [r4, #0x60]
    // bl ov02_0224B298
    // str r0, [r4, #0x6c]
    // ldr r0, [r4, #0x5c]
    // mov r1, #4
    // bl ov01_021FCD2C
    // ldr r2, _02248F80 ; =0xFFF88000
    // mov r1, #1
    // mov r3, #0xc
    // str r0, [r4, #0x70]
    // bl ov01_021FCD8C
    // add r1, sp, #0xc
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // ldr r3, _02248F84 ; =ov02_022533A8
    // str r0, [r1, #8]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #2
    // str r0, [r2]
    // ldr r4, [r4, #0x60]
    // add r0, r4, #0
    // bl Sprite_SetAffineOverwriteMode
    // add r0, r4, #0
    // add r1, sp, #0xc
    // bl Sprite_SetAffineMatrix
    // add r0, r4, #0
    // add r1, sp, #0
    // bl Sprite_SetAffineScale
    // mov r0, #0
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // add r0, r4, #0
    // mov r1, #2
    // bl Sprite_SetAnimCtrlSeq
    // bl ov02_022493FC
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // nop
    // _02248F74: .word ov02_0225339C
    // _02248F78: .word ov02_022533CC
    // _02248F7C: .word 0x0015E000
    // _02248F80: .word 0xFFF88000
    // _02248F84: .word ov02_022533A8
    // TODO: decompile
}



void ov02_02248F88(void) {
    // sub r0, r1, r0
    *((u32*)(r0 + 0x48)) = *((u32*)(r0 + 0x4c));
    // bpl _02248FA0
    *((u32*)(r0 + 0x48)) = 0;
    // sub r0, r1, r0
    *((u32*)(r0 + 0x4c)) = (7 << 0xa);
    *((u32*)(r0 + 0x4c)) = (1 << 0xc);
    GF_CosDeg(0x2d, *((u32*)(r0 + 0x4c)));
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    *((u32*)(r5 + 0x14)) = r0;
    // asr r0, r1, #0xb
    // add r0, r1, r0
    GF_SinDeg((((r0 >> 0x14) << 4) >> 0x10), *((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x48)));
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    *((u32*)(r5 + 0x18)) = r0;
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // add r0, r1, r0
    *((u32*)(r5 + 0x40)) = (1 << 0xe);
    // sub r1, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(r5 + 0x2c));
    *((u32*)(r5 + 0x2c)) = (1 << 0xc);
    // sub r1, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(r5 + 0x30));
    *((u32*)(r5 + 0x30)) = (1 << 0xc);
    // add r1, #0x2c
    Sprite_SetAffineScale(r6, r5, *((u32*)(r5 + 0x48)));
    // add r1, #0x2c
    Sprite_SetAffineScale(r4, r5);
    // add r0, r1, r0
    // str r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(r6, *((u32*)(r5 + 0xc)));
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(r4);
    *((u32*)(r5 + 4)) = 0;
    *((u8*)(r5 + 1)) = (*((u8*)(r5 + 1)) + 1);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
}



void ov02_02249088(void) {
    ov02_0224B314(*((u32*)(r0 + 0x6c)));
    ov01_021FCD8C(*((u32*)(r4 + 0x70)), 2, 0, 0xc);
    *((u32*)(r4 + 0x50)) = (1 << 0xa);
    *((u32*)(r4 + 0x40)) = ((1 << 0xa) << 9);
    *((u32*)(r4 + 0x48)) = 0;
    *((u32*)(r4 + 0x4c)) = (6 << 0xa);
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
}



void ov02_022490BC(void) {
    // add r0, r1, r0
    *((u32*)(r0 + 0x48)) = *((u32*)(r0 + 0x4c));
    // add r2, r1, r0
    *((u32*)(r0 + 0x4c)) = r2;
    *((u32*)(r0 + 0x4c)) = ((1 << 0xc) << 4);
    // asr r0, r1, #0xb
    // add r0, r1, r0
    GF_CosDeg((((((1 << 0xc) << 4) >> 0x14) << 4) >> 0x10), *((u32*)(r0 + 0x40)));
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    *((u32*)(r5 + 0x14)) = r0;
    GF_SinDeg(0x80, (r1 >> 0x14), *((u32*)(r5 + 0x48)));
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    *((u32*)(r5 + 0x18)) = r0;
    // add r0, r1, r0
    *((u32*)(r5 + 0x40)) = (1 << 0xc);
    // add r1, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x38));
    GF_DegreeToSinCosIdx(((((2 << 0xc) >> 0x14) << 4) >> 0x10), *((u32*)(r5 + 0x38)), *((u32*)(r5 + 0x48)));
    Sprite_SetAffineZRotation(r4, r0);
    // add r1, r1, r0
    *((u32*)(r5 + 0x2c)) = *((u32*)(r5 + 0x2c));
    *((u32*)(r5 + 0x2c)) = (1 << 0xc);
    // add r1, r1, r0
    *((u32*)(r5 + 0x30)) = *((u32*)(r5 + 0x30));
    *((u32*)(r5 + 0x30)) = (1 << 0xc);
    // add r1, #0x2c
    Sprite_SetAffineScale(r4, r5);
    // add r0, r1, r0
    // str r0, [sp]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(r4, *((u32*)(r5 + 0xc)));
    // ldr r1, [sp, #4]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // mvn r0, r0
    *((u8*)(r5 + 1)) = (*((u8*)(r5 + 1)) + 1);
}



u32 ov02_022491A8(void) {
}



void ov02_022491CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #0x14
    // bge _022491E2
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r3, _02249284 ; =ov02_022533D8
    // add r2, sp, #0xc
    // ldmia r3!, {r0, r1}
    // add r6, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r3, _02249288 ; =ov02_022533B4
    // str r0, [r2]
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // add r5, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r7, #0
    // str r0, [r2]
    // add r2, r4, #0
    // str r7, [r4, #4]
    // add r3, r6, #0
    // ldmia r3!, {r0, r1}
    // add r2, #8
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // str r7, [r4, #0x14]
    // str r7, [r4, #0x18]
    // str r7, [r4, #0x1c]
    // str r7, [r4, #0x38]
    // add r2, r4, #0
    // ldmia r5!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r2]
    // lsl r1, r1, #8
    // ldr r0, _0224928C ; =0x0013B000
    // str r1, [r4, #0x50]
    // str r0, [r4, #0x40]
    // lsl r0, r1, #0xa
    // str r0, [r4, #0x48]
    // lsl r0, r1, #4
    // str r0, [r4, #0x4c]
    // ldr r0, [r4, #0x68]
    // add r1, r6, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x68]
    // add r1, sp, #0
    // bl Sprite_SetAffineScale
    // ldr r1, [r4, #0x38]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // ldr r0, [r4, #0x68]
    // bl Sprite_SetAffineZRotation
    // ldr r0, [r4, #0x68]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x60]
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x60]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #1
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02249284: .word ov02_022533D8
    // _02249288: .word ov02_022533B4
    // _0224928C: .word 0x0013B000
    // TODO: decompile
}



void ov02_02249290(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r1, [r5, #0x48]
    // ldr r0, [r5, #0x4c]
    // ldr r4, [r5, #0x68]
    // sub r0, r1, r0
    // str r0, [r5, #0x48]
    // mov r0, #1
    // ldr r1, [r5, #0x4c]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bge _022492B0
    // lsr r0, r0, #3
    // add r0, r1, r0
    // str r0, [r5, #0x4c]
    // ldr r0, [r5, #0x48]
    // cmp r0, #0
    // bge _022492BA
    // mov r0, #0
    // str r0, [r5, #0x48]
    // ldr r0, _02249398 ; =0x0000013B
    // bl GF_CosDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x14]
    // ldr r1, [r5, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x18]
    // ldr r1, [r5, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // cmp r0, #0xb4
    // bge _02249302
    // mov r0, #1
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [r5, #0x40]
    // ldr r1, [r5, #0x2c]
    // ldr r0, [r5, #0x50]
    // sub r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xa
    // str r1, [r5, #0x2c]
    // cmp r1, r0
    // bge _02249314
    // str r0, [r5, #0x2c]
    // ldr r1, [r5, #0x30]
    // ldr r0, [r5, #0x50]
    // sub r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xa
    // str r1, [r5, #0x30]
    // cmp r1, r0
    // bge _02249326
    // str r0, [r5, #0x30]
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x2c
    // bl Sprite_SetAffineScale
    // mov r0, #6
    // ldr r1, [r5, #0x38]
    // lsl r0, r0, #0xc
    // add r1, r1, r0
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r1, [r5, #0x38]
    // cmp r0, #0x3c
    // ble _0224934C
    // mov r0, #0xf
    // lsl r0, r0, #0xe
    // str r0, [r5, #0x38]
    // ldr r1, [r5, #0x38]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0x14]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r5, #0x48]
    // cmp r0, #0
    // bgt _02249390
    // add r0, r4, #0
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02249398: .word 0x0000013B
    // TODO: decompile
}



void ov02_0224939C(void) {
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x60)), 1);
    ov02_02249444(*((u32*)(r4 + 0x5c)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x60)), 0);
    ov01_021FCD6C(*((u32*)(r4 + 0x70)));
    *((u32*)(r4 + 4)) = 0;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 2)) = 2;
}



u8 ov02_022493EC(void) {
}



void ov02_022493F0(void) {
}



void ov02_022493FC(void) {
}



void ov02_02249420(void) {
}



void ov02_02249444(void) {
}



void ov02_02249458(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov02_0224955C
    // add r4, r0, #0
    // str r6, [r4, #0x5c]
    // strh r7, [r4, #0xc]
    // ldrh r0, [r4, #0xc]
    // strh r0, [r4, #0xe]
    // str r5, [r4, #0x20]
    // ldr r0, [r4, #0x60]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetMapObject
    // mov r1, #0x82
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // cmp r5, #0
    // bne _02249490
    // ldr r0, _022494B8 ; =ov02_02249584
    // add r1, r4, #0
    // mov r2, #0x86
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #2
    // bne _022494AC
    // ldr r0, [sp]
    // bl FollowMon_GetMapObject
    // mov r1, #0x83
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, _022494BC ; =ov02_022499B8
    // add r1, r4, #0
    // mov r2, #0x86
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _022494C0 ; =ov02_02249984
    // add r1, r4, #0
    // mov r2, #0x86
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _022494B8: .word ov02_02249584
    // _022494BC: .word ov02_022499B8
    // _022494C0: .word ov02_02249984
    // TODO: decompile
}



void ov02_022494C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov02_0224955C
    // add r4, r0, #0
    // str r5, [r4, #0x5c]
    // mov r0, #0
    // strh r0, [r4, #0xc]
    // mov r0, #2
    // strh r0, [r4, #0xe]
    // mov r0, #3
    // str r0, [r4, #0x20]
    // mov r0, #0x82
    // lsl r0, r0, #2
    // str r6, [r4, r0]
    // add r0, r0, #4
    // str r7, [r4, r0]
    // ldr r0, [r4, #0x60]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetMapObject
    // add r1, sp, #0xc
    // bl MapObject_CopyPositionVector
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp]
    // ldr r0, [sp, #0xc]
    // sub r0, r1, r0
    // mov r1, #2
    // lsl r1, r1, #0xc
    // bl FX_Div
    // mov r1, #0xbb
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // add r0, r2, r0
    // str r0, [r4, r1]
    // ldr r2, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r1, #8
    // sub r0, r2, r0
    // str r0, [r4, r1]
    // ldr r0, _02249538 ; =ov02_022499B8
    // add r1, r4, #0
    // mov r2, #0x86
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02249538: .word ov02_022499B8
    // TODO: decompile
}



void ov02_0224953C(void) {
}



void ov02_02249548(void) {
}



void ov02_0224955C(void) {
    Heap_AllocAtEnd(4, (0xbe << 2));
    memset(0, (0xbe << 2));
    *((u32*)(r4 + 0x60)) = r5;
}



void ov02_0224957C(void) {
}



void ov02_02249584(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, _022495B4 ; =ov02_02253550
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _0224958A
    // ldr r0, [r5, #0x10]
    // cmp r0, #1
    // bne _022495B2
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _022495AC
    // bl sub_02068BAC
    // add r0, r5, #0
    // bl ov02_0224A32C
    // pop {r3, r4, r5, pc}
    // _022495B4: .word ov02_02253550
    // TODO: decompile
}



u32 ov02_022495B8(void) {
}



u32 ov02_022495D0(void) {
}



void ov02_022495E8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _022495FE
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r5, _02249650 ; =ov02_02253408
    // add r3, sp, #0xc
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // ldr r5, _02249654 ; =ov02_02253384
    // str r0, [r3]
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r2, #0
    // str r0, [r3]
    // add r0, r4, #0
    // bl ov02_0224A418
    // mov r1, #0x79
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov02_0224A9B8
    // mov r1, #0x7a
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov02_0224A9D8
    // add r0, r4, #0
    // bl ov02_02249D40
    // mov r0, #1
    // str r0, [r4, #0x10]
    // ldr r1, [r4]
    // add r1, r1, #1
    // str r1, [r4]
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _02249650: .word ov02_02253408
    // _02249654: .word ov02_02253384
    // TODO: decompile
}



void ov02_02249658(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov02_0224B72C
    // mov r0, #0
    // ldr r1, _0224968C ; =0xFFFC0000
    // str r0, [r4, #0x2c]
    // str r1, [r4, #0x54]
    // mov r1, #0xfe
    // lsl r1, r1, #0xc
    // str r1, [r4, #0x44]
    // mov r1, #0xff
    // lsl r1, r1, #0xc
    // str r1, [r4, #0x48]
    // mov r1, #0x5f
    // lsl r1, r1, #0xc
    // str r1, [r4, #0x4c]
    // mov r1, #0x61
    // lsl r1, r1, #0xc
    // str r1, [r4, #0x50]
    // mov r1, #1
    // str r1, [r4, #0x2c]
    // ldr r1, [r4]
    // add r1, r1, #1
    // str r1, [r4]
    // pop {r4, pc}
    // _0224968C: .word 0xFFFC0000
    // TODO: decompile
}



void ov02_02249690(void) {
    *((u32*)(r0 + 0x2c)) = 0;
    // add r0, r1, r0
    *((u32*)(r0 + 0x44)) = *((u32*)(r0 + 0x54));
    *((u32*)(r0 + 0x44)) = 0;
    *((u32*)(r0 + 0x54)) = (2 << 0xc);
    // str r0, [r4]
    // str r0, [sp]
    ov02_0224A69C(r0, *((u32*)(r0 + 0x44)), *((u32*)(r0 + 0x4c)), *((u32*)(r0 + 0x48)));
    *((u32*)(r4 + 0x2c)) = 1;
}



void ov02_022496D0(void) {
    *((u32*)(r0 + 0x2c)) = 0;
    // sub r0, r1, r0
    *((u32*)(r0 + 0x4c)) = *((u32*)(r0 + 0x54));
    // add r0, r1, r0
    *((u32*)(r0 + 0x50)) = *((u32*)(r0 + 0x54));
    // add r2, r1, r0
    *((u32*)(r0 + 0x54)) = r2;
    *((u32*)(r0 + 0x54)) = ((2 << 0xc) << 4);
    *((u32*)(r0 + 0x4c)) = (0xe << 0xe);
    *((u32*)(r0 + 0x50)) = (0x22 << 0xe);
    // str r0, [sp]
    ov02_0224A69C(r0, *((u32*)(r0 + 0x44)), *((u32*)(r0 + 0x4c)), *((u32*)(r0 + 0x48)));
    *((u32*)(r4 + 0x2c)) = 1;
    // ldr r0, [r4, r0]
    ov02_0224A450((0x79 << 2), *((u32*)(r4 + 0x50)));
    // str r0, [r4]
}



void ov02_02249754(void) {
    // ldr r1, [r0, #8]
    // add r1, r1, #1
    // str r1, [r0, #8]
    // cmp r1, #0xf
    // blt _0224976C
    // mov r1, #0
    // str r1, [r0, #8]
    // ldr r1, _02249770 ; =0xFFFC0000
    // str r1, [r0, #0x58]
    // ldr r1, [r0]
    // add r1, r1, #1
    // str r1, [r0]
    // mov r0, #0
    // bx lr
    // _02249770: .word 0xFFFC0000
    // TODO: decompile
}



void ov02_02249774(void) {
    // ldr r0, [r4, r0]
    Sprite_GetMatrixPtr((0x7a << 2));
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp]
    // add r1, r1, r0
    // str r1, [sp]
    // str r0, [sp]
    // str r0, [r4]
    // ldr r0, [r4, r0]
    // add r1, sp, #0
    Sprite_SetMatrix((0x7a << 2), r0);
}



void ov02_022497C0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r1, [r4, #0x58]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r1, r0, #1
    // ldr r0, _02249834 ; =0xFFFFE000
    // str r1, [r4, #0x58]
    // cmp r1, r0
    // ble _02249802
    // str r0, [r4, #0x58]
    // ldr r0, [r4]
    // mov r1, #5
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, [r4, #0x5c]
    // mov r2, #0
    // bl GetMonData
    // add r5, r0, #0
    // ldr r0, [r4, #0x5c]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r0, r5, #0x10
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x18
    // bl PlayCry
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // add r5, r0, #0
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // ldr r1, [sp]
    // ldr r0, [r4, #0x58]
    // add r0, r1, r0
    // str r0, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r2, #0
    // bl Sprite_SetMatrix
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02249834: .word 0xFFFFE000
    // TODO: decompile
}



void ov02_02249838(void) {
    // ldr r1, [r0, #8]
    // add r1, r1, #1
    // str r1, [r0, #8]
    // cmp r1, #8
    // blt _02249850
    // mov r1, #0
    // str r1, [r0, #8]
    // ldr r1, _02249854 ; =0xFFFFF000
    // str r1, [r0, #0x58]
    // ldr r1, [r0]
    // add r1, r1, #1
    // str r1, [r0]
    // mov r0, #0
    // bx lr
    // _02249854: .word 0xFFFFF000
    // TODO: decompile
}



void ov02_02249858(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x58]
    // lsl r1, r0, #1
    // ldr r0, _022498B4 ; =0xFFFC0000
    // str r1, [r4, #0x58]
    // cmp r1, r0
    // bge _0224986C
    // str r0, [r4, #0x58]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // add r5, r0, #0
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // ldr r1, [sp]
    // ldr r0, [r4, #0x58]
    // add r0, r1, r0
    // str r0, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r2, #0
    // bl Sprite_SetMatrix
    // ldr r1, [sp]
    // ldr r0, _022498B8 ; =0xFFFD8000
    // cmp r1, r0
    // bgt _022498AC
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x54]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _022498B4: .word 0xFFFC0000
    // _022498B8: .word 0xFFFD8000
    // TODO: decompile
}



void ov02_022498BC(void) {
    *((u32*)(r0 + 0x2c)) = 0;
    // add r0, r1, r0
    *((u32*)(r0 + 0x4c)) = *((u32*)(r0 + 0x54));
    // sub r0, r1, r0
    *((u32*)(r0 + 0x50)) = *((u32*)(r0 + 0x54));
    // add r2, r1, r0
    *((u32*)(r0 + 0x54)) = r2;
    *((u32*)(r0 + 0x54)) = ((1 << 0xe) << 2);
    *((u32*)(r0 + 0x4c)) = (0x5f << 0xc);
    *((u32*)(r0 + 0x50)) = (0x61 << 0xc);
    // str r0, [sp]
    ov02_0224A69C(r0, *((u32*)(r0 + 0x44)), *((u32*)(r0 + 0x4c)), *((u32*)(r0 + 0x48)));
    *((u32*)(r4 + 0x2c)) = 1;
    ov02_0224B768(r4, *((u32*)(r4 + 0x50)));
    *((u32*)(r4 + 0x34)) = 0x11;
    // str r0, [r4]
}



void ov02_02249940(void) {
}



void ov02_02249954(void) {
}



void ov02_02249968(void) {
}



void ov02_0224997C(void) {
}



void ov02_02249984(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, _022499B4 ; =ov02_02253588
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _0224998A
    // ldr r0, [r5, #0x10]
    // cmp r0, #1
    // bne _022499B2
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _022499AC
    // bl sub_02068BAC
    // add r0, r5, #0
    // bl ov02_0224A32C
    // pop {r3, r4, r5, pc}
    // _022499B4: .word ov02_02253588
    // TODO: decompile
}



void ov02_022499B8(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, _022499E8 ; =ov02_022534F0
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _022499BE
    // ldr r0, [r5, #0x10]
    // cmp r0, #1
    // bne _022499E6
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _022499E0
    // bl sub_02068BAC
    // add r0, r5, #0
    // bl ov02_0224A32C
    // pop {r3, r4, r5, pc}
    // _022499E8: .word ov02_022534F0
    // TODO: decompile
}



void ov02_022499EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02249A02
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r5, _02249A54 ; =ov02_022533FC
    // add r3, sp, #0xc
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // ldr r5, _02249A58 ; =ov02_02253414
    // str r0, [r3]
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r2, #0
    // str r0, [r3]
    // add r0, r4, #0
    // bl ov02_0224A418
    // mov r1, #0x79
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov02_0224A9B8
    // mov r1, #0x7a
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov02_0224A9D8
    // add r0, r4, #0
    // bl ov02_02249D40
    // mov r0, #1
    // str r0, [r4, #0x10]
    // ldr r1, [r4]
    // add r1, r1, #1
    // str r1, [r4]
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _02249A54: .word ov02_022533FC
    // _02249A58: .word ov02_02253414
    // TODO: decompile
}



void ov02_02249A5C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // mov r3, #0x85
    // add r4, r0, #0
    // lsl r3, r3, #2
    // ldr r0, [r4, r3]
    // cmp r0, #0
    // bne _02249A72
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // ldr r6, _02249AC0 ; =ov02_02253348
    // add r5, sp, #0
    // ldmia r6!, {r0, r1}
    // add r2, r5, #0
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // str r0, [r5]
    // add r0, r3, #0
    // add r0, #0xd8
    // ldr r1, [sp]
    // ldr r0, [r4, r0]
    // add r3, #0xe0
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [r4, r3]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, r2, #0
    // bl ov02_0224A418
    // mov r1, #0x79
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r4, #0
    // bl ov02_02249D40
    // mov r0, #1
    // str r0, [r4, #0x10]
    // ldr r1, [r4]
    // add r1, r1, #1
    // str r1, [r4]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _02249AC0: .word ov02_02253348
    // TODO: decompile
}



void ov02_02249AC4(void) {
}



u32 ov02_02249AD8(void) {
}



void ov02_02249AF0(void) {
}



u32 ov02_02249B10(void) {
}



void ov02_02249B38(void) {
    ov02_0224AB8C();
    // ldr r0, [r4, r0]
    Sprite_SetAnimCtrlSeq((0x79 << 2), 1);
    // str r0, [r4]
}



void ov02_02249B60(void) {
}



void ov02_02249B80(void) {
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    *((u32*)(r0 + 8)) = 0;
    // str r1, [r4]
    ov02_0224AB58((*((u32*)r0) + 1));
    ov02_0224ADF0(r4);
}



void ov02_02249BA8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov02_0224AB8C
    // cmp r0, #3
    // beq _02249BB8
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _02249BD4 ; =SEQ_SE_DP_FW019
    // bl PlaySE
    // mov r0, #2
    // lsl r0, r0, #0xa
    // str r0, [r4, #0x54]
    // mov r0, #2
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02249BD4: .word SEQ_SE_DP_FW019
    // TODO: decompile
}



void ov02_02249BD8(void) {
    *((u32*)(r0 + 0x2c)) = 0;
    // add r0, r1, r0
    *((u32*)(r0 + 0x4c)) = *((u32*)(r0 + 0x54));
    // sub r0, r1, r0
    *((u32*)(r0 + 0x50)) = *((u32*)(r0 + 0x54));
    // add r2, r1, r0
    *((u32*)(r0 + 0x54)) = r2;
    *((u32*)(r0 + 0x54)) = ((2 << 0xa) << 5);
    *((u32*)(r0 + 0x4c)) = (0x5f << 0xc);
    *((u32*)(r0 + 0x50)) = (0x61 << 0xc);
    // str r0, [sp]
    ov02_0224A69C(r0, *((u32*)(r0 + 0x44)), *((u32*)(r0 + 0x4c)), *((u32*)(r0 + 0x48)));
    *((u32*)(r4 + 0x2c)) = 1;
    ov02_0224AB8C(r4);
    *((u32*)(r4 + 0x18)) = 1;
    ov02_02249420(1);
    *((u32*)(r4 + 0x34)) = 0x11;
    *((u32*)(r4 + 0x14)) = 1;
    // str r0, [r4]
}



void ov02_02249C74(void) {
    ov02_0224AB8C(*((u32*)(r0 + 0x20)));
    ov02_0224AB9C(r4);
    // str r0, [r4]
    ov02_0224AB8C(0, *((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0x18)) = 1;
    ov02_02249420(1);
    ov02_0224AB8C(r4);
    *((u32*)(r4 + 0x18)) = 1;
    ov02_02249420(1);
    ov02_0224AB9C(r4);
    // str r0, [r4]
}



void ov02_02249CD8(void) {
}



void ov02_02249CF0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x21
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _02249D14 ; =ov02_02249D5C
    // add r1, r4, #0
    // mov r2, #0x80
    // bl SysTask_CreateOnVBlankQueue
    // mov r1, #0x22
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _02249D14: .word ov02_02249D5C
    // TODO: decompile
}



void ov02_02249D18(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x21
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _02249D3C ; =ov02_02249E58
    // add r1, r4, #0
    // mov r2, #0x80
    // bl SysTask_CreateOnVBlankQueue
    // mov r1, #0x22
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _02249D3C: .word ov02_02249E58
    // TODO: decompile
}



void ov02_02249D40(void) {
}



void ov02_02249D5C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r0, #0x21
    // add r6, r1, #0
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // bne _02249DD2
    // mov r7, #0x6b
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _02249D7C
    // bl sub_0200ADA4
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _02249D72
    // mov r7, #0x6f
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _02249D96
    // bl sub_0200B00C
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #3
    // blt _02249D8C
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // cmp r1, #0
    // beq _02249DAE
    // add r0, r6, #0
    // bl ov02_0224A834
    // mov r0, #0x87
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // cmp r1, #0
    // beq _02249DBE
    // add r0, r6, #0
    // bl ov02_0224A88C
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldr r1, [r6, r0]
    // mov r2, #0x80
    // add r1, r1, #1
    // str r1, [r6, r0]
    // ldr r0, _02249DD4 ; =ov02_02249DD8
    // add r1, r6, #0
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _02249DD4: .word ov02_02249DD8
    // TODO: decompile
}



void ov02_02249DD8(void) {
    // str r0, [sp]
    // ldr r0, [r6, r0]
    // ldr r0, [r5, r7]
    sub_0200A740((0x21 << 4));
    // ldr r0, [r4, r7]
    sub_0200A740();
    // ldr r0, [r6, r0]
    Heap_Free((0x86 << 2));
    // str r1, [r6, r0]
    // ldr r0, [r6, r0]
    Heap_Free((0x87 << 2), 0);
    // str r1, [r6, r0]
    // str r1, [r6, r0]
    // ldr r0, [sp]
    SysTask_Destroy((0x85 << 2), 1);
}



void ov02_02249E58(void) {
    // push {r4, lr}
    // mov r0, #0x67
    // add r4, r1, #0
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl SpriteResourceCollection_Find
    // mov r1, #0x21
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // bne _02249E8A
    // bl sub_0200ADA4
    // ldr r0, _02249E8C ; =ov02_02249E90
    // add r1, r4, #0
    // mov r2, #0x80
    // bl SysTask_CreateOnVWaitQueue
    // mov r0, #0x21
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _02249E8C: .word ov02_02249E90
    // TODO: decompile
}



void ov02_02249E90(void) {
    // ldr r0, [r4, r0]
    SpriteResourceCollection_Find((0x67 << 2), 0);
    // ldr r1, [r4, r1]
    sub_0200A740((0x21 << 4));
    // str r1, [r4, r0]
    SysTask_Destroy(r5, 1);
}



void ov02_02249EC0(void) {
    // TODO: decompile
}



void ov02_02249F6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov02_0224A074
    // add r4, r0, #0
    // ldr r0, [r5, #0x60]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // bl GetBgPriority
    // strh r0, [r5, #0x24]
    // ldr r0, [r5, #0x60]
    // mov r1, #3
    // ldr r0, [r0, #8]
    // bl GetBgPriority
    // strh r0, [r5, #0x26]
    // ldr r2, _02249FD0 ; =0x0400000A
    // mov r1, #3
    // ldrh r3, [r2]
    // mov r0, #1
    // bic r3, r1
    // orr r0, r3
    // strh r0, [r2]
    // ldrh r0, [r2, #4]
    // bic r0, r1
    // strh r0, [r2, #4]
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224A080
    // add r0, r4, #0
    // bl NARC_Delete
    // mov r0, #4
    // mov r1, #0x20
    // bl sub_020689C8
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // pop {r3, r4, r5, pc}
    // _02249FD0: .word 0x0400000A
    // TODO: decompile
}



void ov02_02249FD4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020689F8
    // ldr r0, [r4, #0x60]
    // ldr r0, [r0, #8]
    // bl ov02_0224A63C
    // add r0, r4, #0
    // bl ov02_0224A288
    // ldr r2, _0224A024 ; =0x04000008
    // ldrh r1, [r4, #0x24]
    // ldrh r3, [r2]
    // mov r0, #3
    // bic r3, r0
    // orr r1, r3
    // strh r1, [r2]
    // ldrh r1, [r2, #6]
    // bic r1, r0
    // ldrh r0, [r4, #0x26]
    // orr r0, r1
    // strh r0, [r2, #6]
    // mov r0, #0
    // mov r1, #1
    // bl sub_0205B4EC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // nop
    // _0224A024: .word 0x04000008
    // TODO: decompile
}



void ov02_0224A028(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020689F8
    // add r0, r4, #0
    // bl ov02_0224A288
    // ldr r2, _0224A070 ; =0x04000008
    // ldrh r1, [r4, #0x24]
    // ldrh r3, [r2]
    // mov r0, #3
    // bic r3, r0
    // orr r1, r3
    // strh r1, [r2]
    // ldrh r1, [r2, #6]
    // bic r1, r0
    // ldrh r0, [r4, #0x26]
    // orr r0, r1
    // strh r0, [r2, #6]
    // mov r0, #0
    // mov r1, #1
    // bl sub_0205B4EC
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // nop
    // _0224A070: .word 0x04000008
    // TODO: decompile
}



void ov02_0224A074(void) {
}



void ov02_0224A080(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r1, #0
    // mov r1, #0x7e
    // add r5, r0, #0
    // lsl r1, r1, #2
    // add r1, r5, r1
    // bl ov02_0224A7A8
    // add r1, r5, #0
    // mov r0, #0x20
    // add r1, #0x74
    // mov r2, #4
    // bl G2dRenderer_Init
    // str r0, [r5, #0x70]
    // add r0, r5, #0
    // mov r2, #2
    // add r0, #0x74
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r0, #4
    // mov r1, #0
    // add r2, r0, #0
    // bl Create2DGfxResObjMan
    // mov r1, #0x67
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #3
    // mov r1, #1
    // mov r2, #4
    // bl Create2DGfxResObjMan
    // mov r1, #0x1a
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #4
    // mov r1, #2
    // add r2, r0, #0
    // bl Create2DGfxResObjMan
    // mov r1, #0x69
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #2
    // mov r1, #3
    // mov r2, #4
    // bl Create2DGfxResObjMan
    // mov r1, #0x6a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #4
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // mov r2, #0xe
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x6b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldrh r2, [r5, #0xe]
    // sub r1, #0x10
    // ldr r0, [r5, r1]
    // lsl r3, r2, #1
    // ldr r2, _0224A278 ; =ov02_02253304
    // add r1, r6, #0
    // ldrh r2, [r2, r3]
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x1b
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov02_0224A810
    // mov r1, #0x6d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r4, #0
    // str r4, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #4
    // sub r1, #0x14
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // mov r2, #6
    // add r3, r4, #0
    // bl AddPlttResObjFromOpenNarc
    // mov r1, #0x6f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldrh r2, [r5, #0xe]
    // add r4, r4, #1
    // cmp r2, #0
    // beq _0224A196
    // mov r0, #1
    // sub r2, r2, #1
    // str r0, [sp]
    // lsl r3, r2, #1
    // ldr r2, _0224A27C ; =ov02_022532FC
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #4
    // ldrh r2, [r2, r3]
    // sub r1, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // mov r3, #0
    // bl AddPlttResObjFromOpenNarc
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0x6f
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // add r4, r4, #1
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov02_0224A868
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0x6f
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #4
    // sub r1, #0x18
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // mov r2, #0xf
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x72
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldrh r2, [r5, #0xe]
    // sub r1, #0x24
    // ldr r0, [r5, r1]
    // lsl r3, r2, #1
    // ldr r2, _0224A280 ; =ov02_02253310
    // add r1, r6, #0
    // ldrh r2, [r2, r3]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x73
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #4
    // sub r1, #0x28
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // mov r2, #0xa
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x1d
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #4
    // sub r1, #0x28
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r6, #0
    // mov r2, #0x10
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x76
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldrh r2, [r5, #0xe]
    // sub r1, #0x30
    // ldr r0, [r5, r1]
    // lsl r3, r2, #1
    // ldr r2, _0224A284 ; =ov02_0225330A
    // add r1, r6, #0
    // ldrh r2, [r2, r3]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x77
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r1, #0x1c
    // ldr r0, [r5, #0x5c]
    // add r1, r5, r1
    // mov r2, #4
    // bl ov02_0224A7B8
    // mov r1, #0x86
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // sub r1, #0x20
    // add r0, r5, r1
    // mov r1, #4
    // bl ov02_0224A800
    // mov r1, #0x87
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0224A278: .word ov02_02253304
    // _0224A27C: .word ov02_022532FC
    // _0224A280: .word ov02_02253310
    // _0224A284: .word ov02_0225330A
    // TODO: decompile
}



void ov02_0224A288(void) {
    // ldr r0, [r5, r7]
    sub_0200AEB0();
    // ldr r0, [r4, r7]
    sub_0200B0A8();
    // ldr r0, [r4, r7]
    sub_0200A740();
    // ldr r0, [r4, r7]
    sub_0200A740();
    // ldr r0, [r6, r0]
    Destroy2DGfxResObjMan((0x67 << 2));
    // ldr r0, [r6, r0]
    Destroy2DGfxResObjMan((0x1a << 4));
    // ldr r0, [r6, r0]
    Destroy2DGfxResObjMan((0x69 << 2));
    // ldr r0, [r6, r0]
    Destroy2DGfxResObjMan((0x6a << 2));
    SpriteList_DeleteAllSprites(*((u32*)(r6 + 0x70)));
    SpriteList_Delete(*((u32*)(r6 + 0x70)));
}



void ov02_0224A32C(void) {
}



void ov02_0224A33C(void) {
    // ldr r0, [sp, #0x84]
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x88]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r3, [r5, r6]
    // str r3, [sp, #0x14]
    // ldr r3, [r5, r3]
    // add r6, #8
    // str r3, [sp, #0x18]
    // ldr r3, [r5, r6]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r3, [sp, #0x80]
    // add r0, sp, #0x4c
    CreateSpriteResourcesHeader(0, r2, r3, ((0x67 << 2) + 4));
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x88]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r6, [r5, r0]
    // str r6, [sp, #0x14]
    // ldr r6, [r5, r6]
    // str r6, [sp, #0x18]
    // add r6, #8
    // ldr r6, [r5, r6]
    // add r0, #0xc
    // str r6, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    // str r3, [sp, #0x28]
    // ldr r3, [sp, #0x80]
    // add r0, sp, #0x4c
    CreateSpriteResourcesHeader((0x67 << 2), 0);
    // add r2, sp, #0x34
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x8c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    Sprite_Create(4);
    GF_AssertFail();
}



void ov02_0224A3F0(void) {
    // str r5, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r2, [sp, #0xc]
    ov02_0224A33C(1, 0);
    Sprite_SetAnimCtrlSeq(r4);
}



void ov02_0224A418(void) {
    // str r2, [sp]
    // str r4, [sp, #4]
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    ov02_0224A33C(2, 1);
    Sprite_SetDrawFlag(0);
    Sprite_SetAnimCtrlSeq(r4, 6);
}



void ov02_0224A450(void) {
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetAnimSpeed(r4, (1 << 0xc));
}



void ov02_0224A468(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r4, r0, #0
    // add r0, sp, #0x1c
    // mov r7, #0
    // str r7, [r0]
    // str r7, [r0, #4]
    // add r6, r2, #0
    // ldr r5, _0224A4CC ; =ov02_02253390
    // add r3, r1, #0
    // str r7, [r0, #8]
    // ldmia r5!, {r0, r1}
    // add r2, sp, #0x10
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r3, #0
    // str r0, [r2]
    // str r7, [sp]
    // sub r0, r7, #1
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r0, r4, #0
    // add r2, r7, #0
    // add r3, r7, #0
    // str r6, [sp, #0xc]
    // bl ov02_0224A33C
    // add r4, r0, #0
    // mov r1, #2
    // bl Sprite_SetAffineOverwriteMode
    // add r0, r4, #0
    // add r1, sp, #0x1c
    // bl Sprite_SetAffineMatrix
    // add r0, r4, #0
    // add r1, sp, #0x10
    // bl Sprite_SetAffineScale
    // add r0, r7, #0
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // add r0, r4, #0
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224A4CC: .word ov02_02253390
    // TODO: decompile
}



void ov02_0224A4D0(void) {
    ov02_0224A074();
    // ldr r1, [r2, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, r0]
    AddCharResObjFromOpenNarc((0x67 << 2), r0, 0xb, 0);
    // add r2, r4, r1
    // str r0, [r2, r1]
    GF_AssertFail((0x6b << 2), (r2 + 4));
    // ldr r1, [r2, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, r0]
    AddCellOrAnimResObjFromOpenNarc((0x69 << 2), r6, 0xc, 0);
    // add r2, r4, r1
    // str r0, [r2, r1]
    GF_AssertFail((0x72 << 2), (r2 + 4));
    NARC_Delete(r6);
}



void ov02_0224A570(void) {
    NARC_AllocAndReadWholeMember(4);
    NNS_G2dGetUnpackedPaletteData(r5);
    BG_LoadPlttData(3, *((u32*)(*((u32*)r5) + 0xc)), 0x20, (3 << 7));
    Heap_Free(r4);
}



void ov02_0224A598(void) {
    NARC_AllocAndReadWholeMember(r1, r2, 4);
    NNS_G2dGetUnpackedCharacterData(r4);
    // str r0, [sp]
    BG_LoadCharTilesData(r5, 3, *((u32*)(*((u32*)r4) + 0x14)), *((u32*)(*((u32*)r4) + 0x10)));
    Heap_Free(r6);
}



void ov02_0224A5D0(void) {
    BgSetPosTextAndCommit(3, 0, 0);
    BgSetPosTextAndCommit(r5, 3, 3, 0);
    NARC_AllocAndReadWholeMember(r6, r7, 4);
    NNS_G2dGetUnpackedScreenData(r4);
    // add r2, #0xc
    BG_LoadScreenTilemapData(r5, 3, *((u32*)r4), *((u32*)(*((u32*)r4) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r5, 3, 0, 0);
    BgCommitTilemapBufferToVram(r5, 3);
    Heap_Free(r6);
}



void ov02_0224A63C(void) {
}



void ov02_0224A648(void) {
}



void ov02_0224A66C(void) {
}



void ov02_0224A674(void) {
}



void ov02_0224A67C(void) {
}



void ov02_0224A690(void) {
}



void ov02_0224A69C(void) {
    *((u32*)(r0 + 0x44)) = r1;
    *((u32*)(r0 + 0x48)) = r3;
    // ldr r1, [sp]
    *((u32*)(r0 + 0x4c)) = r2;
    *((u32*)(r0 + 0x50)) = r1;
}



void ov02_0224A6A8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0224A6BA
    // bl GF_AssertFail
    // ldr r0, _0224A6CC ; =ov02_0224A700
    // add r1, r4, #0
    // mov r2, #0x81
    // bl SysTask_CreateOnVBlankQueue
    // mov r1, #0x89
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r4, pc}
    // _0224A6CC: .word ov02_0224A700
    // TODO: decompile
}



void ov02_0224A6D0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0224A6E2
    // bl GF_AssertFail
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SysTask_Destroy
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _0224A6FC ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // pop {r4, pc}
    // nop
    // _0224A6FC: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov02_0224A700(void) {
    // push {r3, r4, r5, r6}
    // ldr r0, [r1, #0x2c]
    // cmp r0, #0
    // beq _0224A796
    // mov r3, #1
    // lsl r3, r3, #0x1a
    // ldr r2, [r3]
    // ldr r0, _0224A79C ; =0xFFFF1FFF
    // and r2, r0
    // ldr r0, [r1, #0x30]
    // lsl r0, r0, #0xd
    // orr r0, r2
    // str r0, [r3]
    // add r3, #0x48
    // ldrh r2, [r3]
    // mov r0, #0x3f
    // bic r2, r0
    // ldr r0, [r1, #0x34]
    // orr r2, r0
    // ldr r0, [r1, #0x38]
    // cmp r0, #0
    // beq _0224A730
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, _0224A7A0 ; =0x04000048
    // strh r2, [r0]
    // ldrh r2, [r0, #2]
    // mov r0, #0x3f
    // bic r2, r0
    // ldr r0, [r1, #0x3c]
    // orr r2, r0
    // ldr r0, [r1, #0x40]
    // cmp r0, #0
    // beq _0224A748
    // mov r0, #0x20
    // orr r2, r0
    // ldr r5, _0224A7A4 ; =0x0400004A
    // strh r2, [r5]
    // ldr r2, [r1, #0x50]
    // ldr r6, [r1, #0x48]
    // asr r0, r2, #0xb
    // lsr r0, r0, #0x14
    // add r0, r2, r0
    // ldr r2, [r1, #0x4c]
    // asr r4, r0, #0xc
    // asr r0, r2, #0xb
    // lsr r0, r0, #0x14
    // add r0, r2, r0
    // ldr r2, [r1, #0x44]
    // asr r3, r0, #0xc
    // asr r0, r2, #0xb
    // lsr r0, r0, #0x14
    // asr r1, r6, #0xb
    // add r0, r2, r0
    // lsr r1, r1, #0x14
    // asr r0, r0, #0xc
    // add r1, r6, r1
    // lsl r2, r0, #8
    // mov r0, #0xff
    // asr r1, r1, #0xc
    // lsl r0, r0, #8
    // lsl r1, r1, #0x18
    // and r2, r0
    // lsr r1, r1, #0x18
    // orr r2, r1
    // add r1, r5, #0
    // sub r1, #0xa
    // strh r2, [r1]
    // lsl r1, r3, #8
    // and r1, r0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // orr r1, r0
    // sub r0, r5, #6
    // strh r1, [r0]
    // pop {r3, r4, r5, r6}
    // bx lr
    // nop
    // _0224A79C: .word 0xFFFF1FFF
    // _0224A7A0: .word 0x04000048
    // _0224A7A4: .word 0x0400004A
    // TODO: decompile
}



void ov02_0224A7A8(void) {
    // ldr r3, _0224A7B4 ; =GetPokemonSpriteCharAndPlttNarcIds
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2, #0x5c]
    // mov r2, #2
    // bx r3
    // _0224A7B4: .word GetPokemonSpriteCharAndPlttNarcIds
    // TODO: decompile
}



void ov02_0224A7B8(void) {
    Heap_Alloc(4, (0x32 << 6));
    GF_AssertFail();
    GetMonData(r6, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrh r0, [r5]
    sub_02014540(*((u16*)(r5 + 6)), *((u16*)(r5 + 2)), r7, r4);
}



void ov02_0224A800(void) {
    // add r3, r0, #0
    // add r2, r1, #0
    // ldrh r0, [r3]
    // ldrh r1, [r3, #4]
    // ldr r3, _0224A80C ; =sub_02014450
    // bx r3
    // _0224A80C: .word sub_02014450
    // TODO: decompile
}



void ov02_0224A810(void) {
}



void ov02_0224A834(void) {
    // ldr r0, [r0, r1]
    SpriteResourceCollection_Find(3);
    sub_0200AF00();
    NNS_G2dGetImageLocation(1);
    DC_FlushRange(r4, (0x32 << 6));
    GX_LoadOBJ(r4, r5, (0x32 << 6));
}



void ov02_0224A868(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r0, [r0, r2]
    AddPlttResObjFromOpenNarc(6, 0);
}



void ov02_0224A88C(void) {
    // ldr r0, [r5, r0]
    SpriteResourceCollection_Find((0x67 << 2), 3);
    sub_0200AF00();
    // ldr r0, [r5, r0]
    SpriteResourceCollection_Find((0x1a << 4), 3);
    SpriteTransfer_GetPaletteProxy(r6);
    NNS_G2dGetImagePaletteLocation(1);
    DC_FlushRange(r4, 0x20);
    GX_LoadOBJPltt(r4, r5, 0x20);
}



void ov02_0224A8D4(void) {
    // ldr r0, [r5, r0]
    SpriteResourceCollection_Find((0x67 << 2), 3);
    sub_0200AEB0();
    // ldr r0, [r5, r0]
    DestroySingle2DGfxResObj((0x67 << 2), r4);
    // ldr r2, [r3, r1]
    // add r2, r5, r1
    // str r3, [r2, r1]
    GF_AssertFail((0 + 1), (0x6b << 2), (0 + 4));
    // ldr r0, [r5, r0]
    SpriteResourceCollection_Find((0x1a << 4), 3);
    sub_0200B0A8();
    // ldr r0, [r5, r0]
    DestroySingle2DGfxResObj((0x1a << 4), r4);
    // ldr r2, [r3, r1]
    // add r2, r5, r1
    // str r3, [r2, r1]
    GF_AssertFail((0 + 1), (0x6f << 2), (0 + 4));
    // ldr r0, [r5, r0]
    SpriteResourceCollection_Find((0x69 << 2), 3);
    sub_0200A740();
    // ldr r0, [r5, r0]
    DestroySingle2DGfxResObj((0x69 << 2), r4);
    // ldr r2, [r3, r1]
    // add r2, r5, r1
    // str r3, [r2, r1]
    GF_AssertFail((0 + 1), (0x72 << 2), (0 + 4));
}



void ov02_0224A9B8(void) {
}



void ov02_0224A9D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // mov r0, #2
    // ldr r4, _0224AA40 ; =ov02_022535E4
    // add r6, r1, #0
    // str r0, [r5, #0x14]
    // mov r7, #0
    // ldr r0, [r4]
    // add r1, sp, #0x1c
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, #4]
    // add r2, sp, #0x10
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp, #0x24]
    // ldr r0, [r4, #8]
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x10]
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // str r6, [sp, #4]
    // add r0, r5, #0
    // bl ov02_0224AA44
    // mov r0, #1
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0x14
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0x1c
    // add r2, sp, #0x10
    // str r6, [sp, #4]
    // bl ov02_0224AA44
    // add r7, r7, #1
    // add r4, #0x14
    // cmp r7, #0xd
    // blt _0224A9E8
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224AA40: .word ov02_022535E4
    // TODO: decompile
}



void ov02_0224AA44(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // ldr r0, [sp, #0x34]
    // str r3, [sp, #8]
    // str r5, [sp, #0x10]
    // add r4, r1, #0
    // str r0, [sp, #0xc]
    // ldmia r2!, {r0, r1}
    // add r3, sp, #0x14
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // ldr r1, _0224AA7C ; =ov02_02253468
    // str r0, [r3]
    // add r0, sp, #8
    // str r0, [sp]
    // mov r0, #0x85
    // str r0, [sp, #4]
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r3, [sp, #0x30]
    // add r2, r4, #0
    // bl sub_02068B0C
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // nop
    // _0224AA7C: .word ov02_02253468
    // TODO: decompile
}



void ov02_0224AA80(void) {
    sub_02068D98();
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    sub_02068D90(r5, r4, r0);
    *((u32*)(r4 + 4)) = r0;
    // add r1, sp, #0
    sub_02068DB8(r5);
    // add r1, sp, #0
    ov02_0224A3F0(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0xc)), *((u32*)(r4 + 4)));
    *((u32*)(r4 + 8)) = r0;
    Sprite_SetDrawFlag(0);
}



void ov02_0224AAC8(void) {
}



void ov02_0224AAD4(void) {
    // add r1, sp, #0
    sub_02068DB8();
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp]
    // add r1, sp, #0
    sub_02068DA8(r5, (*((u32*)(r4 + 0x18)) << 0xb), (*((u32*)(r4 + 0x18)) >> 0x1f));
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r4 + 8)));
    // ldr r6, [sp, #4]
    // sub r5, r6, r3
    // add r3, r6, r3
    Sprite_SetDrawFlag(*((u32*)(r4 + 8)), 1, *((u32*)(*((u32*)(r4 + 0x14)) + 0x4c)), (2 << 0xc));
    Sprite_SetDrawFlag(*((u32*)(r4 + 8)), 0);
}



void ov02_0224AB54(void) {
    // bx lr
    // TODO: decompile
}



void ov02_0224AB58(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r2, sp, #0xc
    // mov r3, #0
    // add r4, r0, #0
    // str r3, [r2]
    // str r3, [r2, #4]
    // str r3, [r2, #8]
    // str r4, [sp, #8]
    // add r0, sp, #8
    // str r0, [sp]
    // mov r0, #0x82
    // str r0, [sp, #4]
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r1, _0224AB88 ; =ov02_0225347C
    // bl sub_02068B0C
    // mov r1, #0x7b
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add sp, #0x18
    // pop {r4, pc}
    // _0224AB88: .word ov02_0225347C
    // TODO: decompile
}



void ov02_0224AB8C(void) {
}



void ov02_0224AB9C(void) {
    // ldr r0, [r4, r0]
    sub_02068D74((0x7b << 2));
    sub_02068B48(*((u32*)(r0 + 0x60)));
    ov01_021FCD78(*((u32*)(r5 + 0x64)));
    // ldr r0, [r4, r0]
    sub_02068B48((0x7b << 2));
}



u32 ov02_0224ABCC(void) {
}



void ov02_0224ABF8(void) {
}



void ov02_0224AC04(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldrb r0, [r5]
    // lsl r1, r0, #2
    // ldr r0, _0224AC20 ; =ov02_022533C0
    // ldr r4, [r0, r1]
    // ldrb r1, [r5, #1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _0224AC10
    // pop {r3, r4, r5, pc}
    // _0224AC20: .word ov02_022533C0
    // TODO: decompile
}



void ov02_0224AC24(void) {
    // bx lr
    // TODO: decompile
}



void ov02_0224AC28(void) {
}



void ov02_0224AC38(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // ldr r4, _0224ACD8 ; =ov02_022533E4
    // add r2, r0, #0
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0xc
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // ldr r4, _0224ACDC ; =ov02_022533F0
    // str r0, [r3]
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // bl sub_02068D74
    // add r4, r0, #0
    // mov r3, #1
    // add r5, r4, #0
    // strb r3, [r4]
    // mov r2, #0
    // strb r2, [r4, #1]
    // strb r2, [r4, #2]
    // add r6, sp, #0xc
    // ldmia r6!, {r0, r1}
    // add r5, #8
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // add r6, sp, #0
    // str r0, [r5]
    // str r2, [r4, #0x14]
    // str r2, [r4, #0x18]
    // mov r0, #0xf
    // add r5, r4, #0
    // str r2, [r4, #0x1c]
    // lsl r0, r0, #0xe
    // str r0, [r4, #0x38]
    // ldmia r6!, {r0, r1}
    // add r5, #0x2c
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // add r1, sp, #0xc
    // str r0, [r5]
    // lsl r0, r3, #9
    // str r0, [r4, #0x50]
    // mov r0, #0x2d
    // lsl r0, r0, #0xe
    // str r0, [r4, #0x40]
    // str r2, [r4, #0x48]
    // lsl r0, r3, #0xd
    // str r0, [r4, #0x4c]
    // ldr r0, [r4, #0x58]
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x58]
    // add r1, sp, #0
    // bl Sprite_SetAffineScale
    // ldr r1, [r4, #0x38]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // ldr r0, [r4, #0x58]
    // bl Sprite_SetAffineZRotation
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // _0224ACD8: .word ov02_022533E4
    // _0224ACDC: .word ov02_022533F0
    // TODO: decompile
}



void ov02_0224ACE0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r1, [r5, #0x48]
    // ldr r0, [r5, #0x4c]
    // ldr r4, [r5, #0x58]
    // add r0, r1, r0
    // str r0, [r5, #0x48]
    // mov r0, #1
    // ldr r1, [r5, #0x4c]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bge _0224AD00
    // lsr r0, r0, #2
    // add r0, r1, r0
    // str r0, [r5, #0x4c]
    // ldr r0, _0224ADE0 ; =0x0000013B
    // bl GF_CosDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x14]
    // ldr r1, [r5, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x18]
    // ldr r1, [r5, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r2, r0, #0xc
    // ldr r0, _0224ADE4 ; =0x0000010E
    // cmp r2, r0
    // bge _0224AD4A
    // mov r0, #1
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [r5, #0x40]
    // ldr r1, [r5, #0x2c]
    // ldr r0, [r5, #0x50]
    // add r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [r5, #0x2c]
    // cmp r1, r0
    // ble _0224AD5C
    // str r0, [r5, #0x2c]
    // ldr r1, [r5, #0x30]
    // ldr r0, [r5, #0x50]
    // add r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [r5, #0x30]
    // cmp r1, r0
    // ble _0224AD6E
    // str r0, [r5, #0x30]
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x2c
    // bl Sprite_SetAffineScale
    // mov r0, #6
    // ldr r1, [r5, #0x38]
    // lsl r0, r0, #0xc
    // sub r1, r1, r0
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // str r1, [r5, #0x38]
    // asr r0, r0, #0xc
    // bpl _0224AD90
    // mov r0, #0
    // str r0, [r5, #0x38]
    // ldr r1, [r5, #0x38]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0x14]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r1, [sp, #4]
    // ldr r0, _0224ADE8 ; =0xFFFC0000
    // cmp r1, r0
    // bge _0224ADDA
    // add r0, r4, #0
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #2
    // strb r0, [r5, #2]
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0224ADE0: .word 0x0000013B
    // _0224ADE4: .word 0x0000010E
    // _0224ADE8: .word 0xFFFC0000
    // TODO: decompile
}



u8 ov02_0224ADEC(void) {
}



void ov02_0224ADF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // ldr r3, _0224AF5C ; =ov02_02253354
    // add r5, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x24
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r3, _0224AF60 ; =ov02_0225336C
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl sub_02068D74
    // add r4, r0, #0
    // mov r0, #2
    // strb r0, [r4]
    // mov r6, #0
    // mov r0, #0xbb
    // strb r6, [r4, #1]
    // mov r7, #1
    // strb r7, [r4, #2]
    // str r6, [r4, #4]
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // ldr r2, [sp, #0x24]
    // add r0, #8
    // add r1, r2, r1
    // str r1, [sp, #0x24]
    // add r2, r4, #0
    // ldr r1, [sp, #0x28]
    // ldr r0, [r5, r0]
    // add r3, sp, #0x24
    // add r0, r1, r0
    // str r0, [sp, #0x28]
    // ldmia r3!, {r0, r1}
    // add r2, #8
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r3, sp, #0x18
    // str r0, [r2]
    // str r6, [r4, #0x14]
    // str r6, [r4, #0x18]
    // str r6, [r4, #0x1c]
    // ldr r6, _0224AF64 ; =0x0013B000
    // add r2, r4, #0
    // str r6, [r4, #0x38]
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r7, #0
    // add r0, #0xff
    // str r0, [r4, #0x50]
    // mov r0, #0xe1
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x40]
    // mov r0, #3
    // lsl r0, r0, #0x12
    // str r0, [r4, #0x48]
    // lsl r0, r7, #0x11
    // str r0, [r4, #0x4c]
    // lsr r0, r6, #0xc
    // bl GF_CosDeg
    // ldr r2, [r4, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r4, #0x14]
    // ldr r1, [r4, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r2, [r4, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r4, #0x18]
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x28]
    // ldr r0, [r4, #0x58]
    // add r1, sp, #0x24
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x58]
    // add r1, sp, #0x18
    // bl Sprite_SetAffineScale
    // ldr r1, [r4, #0x38]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // ldr r0, [r4, #0x58]
    // bl Sprite_SetAffineZRotation
    // ldr r0, [r4, #0x58]
    // add r1, r7, #0
    // bl Sprite_SetDrawFlag
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl ov02_0224B298
    // str r0, [r4, #0x60]
    // add r0, r7, #0
    // str r0, [r5, #0x1c]
    // ldr r0, [r5, #0x60]
    // mov r1, #4
    // bl ov01_021FCD2C
    // ldr r2, _0224AF68 ; =0xFFF88000
    // add r1, r7, #0
    // mov r3, #0xc
    // str r0, [r4, #0x64]
    // bl ov01_021FCD8C
    // add r1, sp, #0xc
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // ldr r3, _0224AF6C ; =ov02_02253378
    // str r0, [r1, #8]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // mov r0, #0x79
    // ldr r1, [r4, #0x5c]
    // lsl r0, r0, #2
    // ldr r4, [r1, r0]
    // mov r1, #2
    // add r0, r4, #0
    // bl Sprite_SetAffineOverwriteMode
    // add r0, r4, #0
    // add r1, sp, #0xc
    // bl Sprite_SetAffineMatrix
    // add r0, r4, #0
    // add r1, sp, #0
    // bl Sprite_SetAffineScale
    // mov r0, #0
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224AF5C: .word ov02_02253354
    // _0224AF60: .word ov02_0225336C
    // _0224AF64: .word 0x0013B000
    // _0224AF68: .word 0xFFF88000
    // _0224AF6C: .word ov02_02253378
    // TODO: decompile
}



void ov02_0224AF70(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r1, [r5, #0x48]
    // ldr r0, [r5, #0x4c]
    // ldr r4, [r5, #0x58]
    // sub r0, r1, r0
    // str r0, [r5, #0x48]
    // bpl _0224AF86
    // mov r0, #0
    // str r0, [r5, #0x48]
    // mov r0, #2
    // ldr r1, [r5, #0x4c]
    // lsl r0, r0, #0xa
    // cmp r1, r0
    // ble _0224AF98
    // mov r0, #6
    // lsl r0, r0, #0xa
    // sub r0, r1, r0
    // str r0, [r5, #0x4c]
    // mov r0, #1
    // ldr r1, [r5, #0x4c]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bge _0224AFA4
    // str r0, [r5, #0x4c]
    // ldr r0, _0224B0D8 ; =0x0000013B
    // bl GF_CosDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x14]
    // ldr r1, [r5, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_SinDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x18]
    // ldr r1, [r5, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r2, r0, #0xc
    // ldr r0, _0224B0DC ; =0x0000010E
    // cmp r2, r0
    // bge _0224AFEE
    // mov r0, #1
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [r5, #0x40]
    // ldr r1, [r5, #0x2c]
    // ldr r0, [r5, #0x50]
    // add r1, r1, r0
    // mov r0, #6
    // lsl r0, r0, #0xa
    // str r1, [r5, #0x2c]
    // cmp r1, r0
    // ble _0224B000
    // str r0, [r5, #0x2c]
    // ldr r1, [r5, #0x30]
    // ldr r0, [r5, #0x50]
    // add r1, r1, r0
    // mov r0, #6
    // lsl r0, r0, #0xa
    // str r1, [r5, #0x30]
    // cmp r1, r0
    // ble _0224B012
    // str r0, [r5, #0x30]
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x2c
    // bl Sprite_SetAffineScale
    // mov r0, #2
    // ldr r1, [r5, #0x38]
    // lsl r0, r0, #0xe
    // add r1, r1, r0
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // str r1, [r5, #0x38]
    // asr r1, r0, #0xc
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // cmp r1, r0
    // ble _0224B03A
    // lsl r0, r0, #0xc
    // str r0, [r5, #0x38]
    // ldr r1, [r5, #0x38]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r1, sp, #0xc
    // bl Sprite_SetMatrix
    // ldr r0, [r5, #0x48]
    // cmp r0, #0
    // bne _0224B07C
    // mov r0, #0
    // str r0, [r5, #4]
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // b _0224B082
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // ldr r0, [r5, #4]
    // cmp r0, #0xc
    // bne _0224B08E
    // ldr r0, [r5, #0x60]
    // bl ov02_0224B2CC
    // mov r0, #0x79
    // ldr r1, [r5, #0x5c]
    // lsl r0, r0, #2
    // ldr r4, [r1, r0]
    // add r0, r4, #0
    // bl Sprite_GetScalePtr
    // add r3, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r1, [sp]
    // mov r0, #5
    // add r1, #0x80
    // lsl r0, r0, #0xa
    // str r1, [sp]
    // cmp r1, r0
    // ble _0224B0B8
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // mov r0, #5
    // add r1, #0x80
    // lsl r0, r0, #0xa
    // str r1, [sp, #4]
    // cmp r1, r0
    // ble _0224B0C8
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl Sprite_SetAffineScale
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _0224B0D8: .word 0x0000013B
    // _0224B0DC: .word 0x0000010E
    // TODO: decompile
}



void ov02_0224B0E0(void) {
    // ldr r5, [r1, r0]
    Sprite_SetAnimCtrlSeq(r5, 3);
    Sprite_SetDrawFlag(r5, 1);
    ov02_0224B6B0(*((u32*)(r4 + 0x5c)), 1);
    // ldr r0, [r1, r0]
    sub_0205F484((0x82 << 2), *((u32*)(r4 + 0x5c)));
    Sprite_GetMatrixPtr(r5);
    Sprite_GetMatrixPtr(*((u32*)(r4 + 0x58)));
    // sub r0, r5, r0
    *((u32*)(r4 + 0x54)) = *((u32*)(r0 + 4));
    ov02_0224B2C0(*((u32*)(r4 + 0x60)));
    ov01_021FCD8C(*((u32*)(r4 + 0x64)), 2, 0, 0xc);
    *((u32*)(r4 + 0x50)) = (1 << 8);
    *((u32*)(r4 + 0x40)) = ((1 << 8) << 0xb);
    *((u32*)(r4 + 0x48)) = 0;
    *((u32*)(r4 + 0x4c)) = ((1 << 8) << 3);
    *((u8*)(r4 + 2)) = 3;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
}



void ov02_0224B158(void) {
    // add r0, r1, r0
    *((u32*)(r0 + 0x48)) = *((u32*)(r0 + 0x4c));
    // add r2, r1, r0
    *((u32*)(r0 + 0x4c)) = r2;
    *((u32*)(r0 + 0x4c)) = ((1 << 0xc) << 4);
    // asr r0, r1, #0xb
    // add r0, r1, r0
    GF_CosDeg((((((1 << 0xc) << 4) >> 0x14) << 4) >> 0x10), *((u32*)(r0 + 0x40)));
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    *((u32*)(r4 + 0x14)) = r0;
    GF_SinDeg(0x80, (r1 >> 0x14), *((u32*)(r4 + 0x48)));
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    *((u32*)(r4 + 0x18)) = r0;
    // add r0, r1, r0
    *((u32*)(r4 + 0x40)) = (1 << 0xc);
    // add r1, r1, r0
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x2c));
    *((u32*)(r4 + 0x2c)) = (2 << 0xc);
    // add r1, r1, r0
    *((u32*)(r4 + 0x30)) = *((u32*)(r4 + 0x30));
    *((u32*)(r4 + 0x30)) = (2 << 0xc);
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // add r1, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r1, [sp, #0x1c]
    *((u8*)(r4 + 2)) = 2;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // ldr r7, [r1, r0]
    Sprite_GetScalePtr(r7, *((u32*)(r4 + 0x5c)), *((u32*)(r4 + 0x48)));
    // add r2, sp, #0xc
    // add r3, sp, #0x18
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r5!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // sub r1, r1, r0
    *((u32*)(r4 + 0x54)) = *((u32*)(r4 + 0x54));
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // mov r1, ip
    Sprite_SetMatrix(r7, *((u32*)(r4 + 0x54)));
    // ldr r1, [sp]
    // add r2, r1, r0
    // str r2, [sp]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, r1, r0
    // str r2, [sp, #4]
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetAffineScale(r7, ((1 << 8) << 5));
    // add r4, #0x2c
    Sprite_SetAffineScale(r6, r4);
    // add r1, sp, #0x18
    Sprite_SetMatrix(r6);
}



u8 ov02_0224B294(void) {
}



void ov02_0224B298(void) {
    // push {lr}
    // sub sp, #0x1c
    // add r2, sp, #0x10
    // mov r3, #0
    // str r3, [r2]
    // str r3, [r2, #4]
    // str r1, [sp, #0xc]
    // str r3, [r2, #8]
    // add r1, sp, #8
    // str r1, [sp]
    // mov r1, #0x81
    // str r1, [sp, #4]
    // ldr r1, _0224B2BC ; =ov02_022534A4
    // bl sub_02068B0C
    // add sp, #0x1c
    // pop {pc}
    // nop
    // _0224B2BC: .word ov02_022534A4
    // TODO: decompile
}



void ov02_0224B2C0(void) {
}



void ov02_0224B2CC(void) {
    sub_02068D74();
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x18)) = 0;
    Sprite_GetMatrixPtr(*((u32*)(r0 + 0x20)));
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    sub_02068DA8(r5, r3, r3);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x20)), 5);
}



void ov02_0224B314(void) {
}



void ov02_0224B350(void) {
}



void ov02_0224B364(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // bne _0224B3A8
    // ldr r1, [r4, #0xc]
    // lsl r2, r1, #2
    // ldr r1, _0224B3AC ; =ov02_02253520
    // ldr r1, [r1, r2]
    // str r1, [r4, #0x14]
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x20]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // cmp r0, #0xc
    // blt _0224B3A8
    // mov r0, #0
    // str r0, [r4, #0xc]
    // mov r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0224B3AC: .word ov02_02253520
    // TODO: decompile
}



void ov02_0224B3B0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // bne _0224B3F4
    // ldr r1, [r4, #0xc]
    // lsl r2, r1, #2
    // ldr r1, _0224B3F8 ; =ov02_02253430
    // ldr r1, [r1, r2]
    // str r1, [r4, #0x14]
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x20]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // cmp r0, #4
    // blt _0224B3F4
    // mov r0, #0
    // str r0, [r4, #0xc]
    // mov r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0224B3F8: .word ov02_02253430
    // TODO: decompile
}



void ov02_0224B3FC(void) {
    ov02_0224B364(*((u32*)r1));
    ov02_0224B3B0();
}



void ov02_0224B418(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // mov r1, #0x5f
    // add r5, r0, #0
    // mov r0, #4
    // lsl r1, r1, #2
    // bl ov02_0224B690
    // add r1, r0, #0
    // str r4, [r1, #0xc]
    // ldr r0, _0224B438 ; =ov02_0224B45C
    // mov r2, #0x86
    // str r5, [r1, #0x14]
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // _0224B438: .word ov02_0224B45C
    // TODO: decompile
}



void ov02_0224B43C(void) {
}



void ov02_0224B448(void) {
}



void ov02_0224B45C(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, _0224B490 ; =ov02_022534B8
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _0224B462
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // beq _0224B48E
    // mov r0, #0x17
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0224B484
    // bl sub_02068BAC
    // ldr r0, [r5, #0x20]
    // cmp r0, #0
    // beq _0224B48E
    // bl SpriteList_RenderAndAnimateSprites
    // pop {r3, r4, r5, pc}
    // _0224B490: .word ov02_022534B8
    // TODO: decompile
}



void ov02_0224B494(void) {
}



void ov02_0224B4AC(void) {
    sub_020689C8(4, 0x20);
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x18
    // str r2, [sp, #0x14]
    ov02_02248728(r5, 0x20, 2, 2);
    ov02_022493F0();
    // add r0, #0x18
    ov02_02248980(r5, r0, 0xb, 0);
    // add r0, #0x18
    ov02_02248A58(r5, r4, 6, 0);
    // add r0, #0x18
    ov02_02248B30(r5, r4, 0xc, 0);
    // add r0, #0x18
    ov02_022489F0(r5, 0);
    // add r0, #0x18
    ov02_02248AC8(r5, 0);
    // add r0, #0x18
    ov02_02248A24(r5, 0);
    // add r0, #0x18
    ov02_02248AFC(r5, 0);
    // add r0, #0x18
    ov02_02248980(r5, r4, 0x11, 2);
    // add r0, #0x18
    ov02_02248B30(r5, r4, 0x12, 2);
    // add r0, #0x18
    ov02_02248BA0(r5, r4, 0x13, 1);
    // add r0, #0x18
    ov02_022489F0(r5, 2);
    // add r0, #0x18
    ov02_02248A24(r5, 2);
    // add r0, #0x18
    ov02_02248980(r5, r4, 0x14, 2);
    // add r0, #0x18
    ov02_02248A58(r5, r4, 7, 1);
    // add r0, #0x18
    ov02_02248B30(r5, r4, 0x15, 2);
    // add r0, #0x18
    ov02_02248BA0(r5, r4, 0x16, 1);
    // add r0, #0x18
    ov02_022489F0(r5, 2);
    // add r0, #0x18
    ov02_02248AC8(r5, 1);
    // add r0, #0x18
    ov02_02248A24(r5, 2);
    // add r0, #0x18
    ov02_02248AFC(r5, 1);
    NARC_Delete(r4);
    // str r0, [r5]
}



void ov02_0224B5F0(void) {
    // add r0, #0x18
    ov02_02248D18(*((u32*)(r0 + 0xc)));
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    Sprite_SetDrawFlag(1);
    // ldr r1, [r4, r3]
    // ldr r3, [r4, r3]
    // add r2, #0x18
    ov02_02248D58(*((u32*)(r4 + 0x14)), r4, ((0x17 << 4) - 4));
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    ov02_02248E20((0x5d << 2));
    // str r0, [r4]
    *((u32*)(r4 + 0x10)) = 1;
}



void ov02_0224B638(void) {
    // ldr r0, [r4, r0]
    ov02_02248D8C((0x5d << 2));
    // ldr r0, [r4, r0]
    ov02_02248DBC((0x5d << 2));
    // str r0, [r4]
}



void ov02_0224B664(void) {
    // ldr r0, [r4, r0]
    sub_020689F8((0x17 << 4));
    // add r0, #0x18
    ov02_0224886C(r4);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 4)) = 1;
    // str r1, [r4]
}



u8 ov02_0224B68C(void) {
}



void ov02_0224B690(void) {
    Heap_AllocAtEnd();
    GF_AssertFail();
    memset(r4, 0, r5);
}



void ov02_0224B6B0(void) {
    // ldr r0, [r5, r0]
    MapObject_UnpauseMovement((0x82 << 2));
    // ldr r0, [r5, r0]
    MapObject_SetVisible((0x82 << 2), r4);
}



void ov02_0224B6D0(void) {
}



void ov02_0224B6E4(void) {
    Sprite_GetMatrixPtr(*((u32*)r1));
    // sub r2, r0, r1
    // add r0, r0, r1
    Sprite_SetDrawFlag(*((u32*)r4), 1, *((u32*)(*((u32*)(r4 + 4)) + 0x50)));
    Sprite_SetDrawFlag(*((u32*)r4), 0);
    Sprite_SetDrawFlag(*((u32*)r4), 1);
}



void ov02_0224B72C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r2, sp, #0x10
    // mov r3, #0
    // str r3, [r2]
    // add r4, r0, #0
    // str r3, [r2, #4]
    // mov r0, #0x79
    // str r3, [r2, #8]
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp, #8]
    // str r4, [sp, #0xc]
    // add r1, sp, #8
    // str r1, [sp]
    // mov r1, #0x87
    // str r1, [sp, #4]
    // ldr r0, [r4, r0]
    // ldr r1, _0224B764 ; =ov02_02253440
    // bl sub_02068B0C
    // mov r1, #0x7d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // nop
    // _0224B764: .word ov02_02253440
    // TODO: decompile
}



void ov02_0224B768(void) {
}



void ov02_0224B784(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r2, sp, #0xc
    // mov r1, #0
    // str r1, [r2]
    // add r4, r0, #0
    // str r1, [r2, #4]
    // str r1, [r2, #8]
    // str r4, [sp, #8]
    // bl ov02_0224B88C
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0xc
    // bl MapObject_CopyPositionVector
    // add r0, sp, #8
    // str r0, [sp]
    // mov r0, #0x83
    // str r0, [sp, #4]
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r1, _0224B7C8 ; =ov02_02253490
    // add r2, sp, #0xc
    // mov r3, #0
    // bl sub_02068B0C
    // mov r1, #0x1f
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add sp, #0x18
    // pop {r4, pc}
    // _0224B7C8: .word ov02_02253490
    // TODO: decompile
}



void ov02_0224B7CC(void) {
    sub_02068D98();
    // str r1, [r4]
    // add r1, sp, #0
    sub_02068DB8(r5, *((u32*)r0));
    // add r0, r4, r6
    // add r0, #0x24
    // add r1, sp, #0
    Field3dObject_SetPos();
    // add r0, r4, r6
    // add r0, #0x24
    Field3dObject_SetActiveFlag(0);
}



void ov02_0224B804(void) {
    // bx lr
    // TODO: decompile
}



void ov02_0224B808(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224B824: ; jump table
    *((u32*)(r1 + 4)) = 1;
    // add r0, r4, r6
    // add r0, #0x24
    Field3dObject_SetActiveFlag(1, 1);
    // add r0, r4, r6
    // add r0, #0x9c
    Field3dModelAnimation_FrameSet(0);
    // add r0, r4, r6
    // add r0, #0xb0
    Field3dModelAnimation_FrameSet(0);
    *((u32*)(r5 + 4)) = 2;
    // add r0, r4, r6
    // add r0, #0x9c
    Field3dModelAnimation_FrameAdvanceAndCheck(2, (1 << 0xc));
    // add r0, r4, r6
    // add r0, #0xb0
    Field3dModelAnimation_FrameAdvanceAndCheck((1 << 0xc));
    *((u32*)(r5 + 8)) = 1;
    *((u32*)(r5 + 4)) = 3;
}



void ov02_0224B87C(void) {
    // mov r0, #0x93
    // ldr r1, [r1]
    // lsl r0, r0, #2
    // ldr r3, _0224B888 ; =Field3dObject_Draw
    // add r0, r1, r0
    // bx r3
    // _0224B888: .word Field3dObject_Draw
    // TODO: decompile
}



void ov02_0224B88C(void) {
    // add r4, r0, r1
    HeapExp_FndInitAllocator(r4, 4, 0x20);
    AllocAtEndAndReadWholeNarcMemberByIdPair(0x67, 0x83, 4);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x14
    ov01_021FBD38(r4, *((u32*)(r4 + 0x10)));
    // add r0, #0x24
    // add r1, #0x14
    Field3dObject_InitFromModel(r4, r4);
    // str r0, [sp]
    // add r0, #0x9c
    // add r1, #0x14
    // str r4, [sp, #4]
    Field3dModelAnimation_LoadFromFilesystem(r4, r4, 0x67, 0xa7);
    // str r0, [sp]
    // add r0, #0xb0
    // add r1, #0x14
    // str r4, [sp, #4]
    Field3dModelAnimation_LoadFromFilesystem(r4, r4, 0x67, 0xa5);
    // add r0, #0x24
    // add r1, #0x9c
    Field3dObject_AddAnimation(r4, r4);
    // add r4, #0xb0
    // add r0, #0x24
    Field3dObject_AddAnimation(r4, r4);
}



void ov02_0224B90C(void) {
    // add r4, r0, r1
    // add r0, #0x14
    ov01_021FBDFC(r4, (0x8a << 2));
    ov01_021F1448(*((u32*)(r4 + 0x10)));
    // add r0, #0x9c
    Field3dModelAnimation_Unload(r4, r4);
    // add r0, #0xb0
    Field3dModelAnimation_Unload(r4, r4);
}



void ov02_0224B938(void) {
    // ldr r0, [r4, r0]
    MapObject_SetVisible((0x83 << 2), 1);
    // ldr r0, [r4, r0]
    sub_0205F484((0x83 << 2));
    ov02_0224B784(r4);
    // str r0, [r4]
}



void ov02_0224B964(void) {
    // ldr r0, [r4, r0]
    sub_02068D74((0x1f << 4));
    // ldr r0, [r4, r0]
    sub_02068B48((0x1f << 4));
    ov02_0224B90C(r4);
    // str r0, [r4]
}



void ov02_BattleExit_HandleRoamerAction(void) {
    // str r1, [sp]
    Party_GetMonByIndex(*((u32*)(r1 + 8)), 0);
    Save_Roamers_Get(*((u32*)(r5 + 0xc)));
    GetMonData(r7, 5, 0);
    ov02_0224BAA8(r6, r0);
    // str r0, [sp, #8]
    SpeciesToRoamerIdx(((r4 << 0x10) >> 0x10));
    // str r0, [sp, #4]
    GetMonData(r7, 0xa3, 0);
    GetMonData(r7, 0xa0, 0);
    // ldr r0, [sp]
    // add r0, sp, #8
    RoamerMon_Init(*((u32*)((r0 << 0x18) + 0x14)));
    Save_VarsFlags_Get(*((u32*)(r5 + 0xc)));
    // ldr r1, [sp, #4]
    sub_02066BE8(2);
    // add r0, sp, #8
    RoamerMon_Init();
    Save_VarsFlags_Get(*((u32*)(r5 + 0xc)));
    // ldr r1, [sp, #4]
    sub_02066BE8(1);
    // ldr r0, [sp, #8]
    SetRoamerData(5, r4);
    // ldr r0, [sp, #8]
    SetRoamerData(7, r7);
    ov02_RepelActiveRoamersFromMapNo(r6, *((u32*)*((u32*)(r5 + 0x20))));
    LCRandom();
    _s32_div_f(0x64);
    ov02_RepelActiveRoamersFromMapNo(r6, *((u32*)*((u32*)(r5 + 0x20))));
}



void ov02_RepelActiveRoamersFromMapNo(void) {
    GetRoamerIsActiveByIndex(r0, 0);
    Roamer_GetLocation(r5, r4);
    GetRoamMapByLocationIdx();
    RoamerLocationUpdateRand(r5, r4);
}



void ov02_0224BAA8(void) {
    GetRoamerIsActiveByIndex(r0, 0);
    Roamers_GetRoamMonStats(r5, r4);
    GetRoamerData(4);
}



void PlayerStepEvent_RepelCounterDecrement(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl Save_Roamers_Get
    // bl RoamerSave_GetRepelAddr
    // ldrb r1, [r0]
    // cmp r1, #0
    // beq _0224BB0E
    // sub r1, r1, #1
    // strb r1, [r0]
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0224BB0E
    // ldr r1, _0224BB14 ; =std_repel_wore_off
    // add r0, r4, #0
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0224BB14: .word std_repel_wore_off
    // TODO: decompile
}



void PokecenterAnimCreate(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r6, r1, #0
    // mov r1, #0x24
    // add r2, sp, #4
    // add r3, sp, #0
    // add r5, r0, #0
    // bl sub_02054C20
    // cmp r0, #0
    // beq _0224BB84
    // mov r0, #4
    // mov r1, #0x18
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // strb r6, [r4, #0xc]
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // strb r0, [r4, #0xe]
    // strb r0, [r4, #0xf]
    // ldr r0, [r5, #0x30]
    // bl MapMatrix_GetWidth
    // add r1, r0, #0
    // ldr r0, [sp]
    // add r2, sp, #0x14
    // bl sub_02054DC8
    // ldr r1, [sp, #4]
    // add r0, sp, #8
    // bl ov01_021F3B0C
    // add r3, sp, #8
    // ldmia r3!, {r0, r1}
    // add r2, r4, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r1, [r4]
    // ldr r0, [sp, #0x14]
    // add r2, r4, #0
    // add r0, r1, r0
    // str r0, [r4]
    // ldr r1, [r4, #8]
    // ldr r0, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [r4, #8]
    // ldr r0, [r5, #0x10]
    // ldr r1, _0224BB8C ; =PokecenterAnimRun
    // bl TaskManager_Call
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // _0224BB8C: .word PokecenterAnimRun
    // TODO: decompile
}



void PokecenterAnimRun(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrb r1, [r4, #0xf]
    // cmp r1, #5
    // bls _0224BBAC
    // b _0224BDCC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224BBB8: ; jump table
    // ldr r1, [r6, #0x34]
    // mov r0, #0x6b
    // bl ov01_021FB90C
    // add r5, r0, #0
    // ldr r1, [r6, #0x34]
    // mov r0, #0x25
    // bl ov01_021FB90C
    // add r7, r0, #0
    // ldr r0, [r5]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _0224BC02
    // add r2, r0, #0
    // add r2, #8
    // beq _0224BBF6
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _0224BBF6
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _0224BBF8
    // mov r1, #0
    // cmp r1, #0
    // beq _0224BC02
    // ldr r1, [r1]
    // add r5, r0, r1
    // b _0224BC04
    // mov r5, #0
    // ldr r0, [r7]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _0224BC2E
    // add r2, r0, #0
    // add r2, #8
    // beq _0224BC22
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _0224BC22
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _0224BC24
    // mov r1, #0
    // cmp r1, #0
    // beq _0224BC2E
    // ldr r1, [r1]
    // add r7, r0, r1
    // b _0224BC30
    // mov r7, #0
    // ldr r0, [r6, #0x34]
    // bl ov01_021FB9E0
    // mov r1, #0
    // str r1, [sp]
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // mov r2, #0x10
    // mov r3, #0x6b
    // bl ov01_021E8DE8
    // add r0, r6, #0
    // mov r1, #0x25
    // add r2, sp, #0x18
    // mov r3, #0
    // bl sub_02054C20
    // cmp r0, #0
    // bne _0224BC66
    // bl GF_AssertFail
    // ldr r0, [sp, #0x18]
    // bl ov01_021F3B38
    // add r5, r0, #0
    // ldr r0, [r6, #0x34]
    // bl ov01_021FB9E0
    // str r5, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // mov r2, #0x20
    // mov r3, #0x25
    // bl ov01_021E8DE8
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224BDCC
    // add r1, sp, #0x1c
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldrb r2, [r4, #0xd]
    // mov r1, #0xc
    // ldr r0, [r4]
    // add r3, r2, #0
    // ldr r2, _0224BDD4 ; =ov02_02253D90
    // mul r3, r1
    // ldr r2, [r2, r3]
    // add r0, r0, r2
    // str r0, [sp, #0x28]
    // ldrb r2, [r4, #0xd]
    // ldr r0, [r4, #4]
    // add r3, r2, #0
    // ldr r2, _0224BDD8 ; =ov02_02253D94
    // mul r3, r1
    // ldr r2, [r2, r3]
    // add r0, r0, r2
    // str r0, [sp, #0x2c]
    // ldrb r2, [r4, #0xd]
    // ldr r0, [r4, #8]
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _0224BDDC ; =ov02_02253D98
    // ldr r1, [r1, r3]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, _0224BDE0 ; =SEQ_SE_DP_BOWA
    // bl PlaySE
    // ldr r0, [r6, #0x54]
    // add r6, #0x9c
    // str r0, [sp]
    // ldr r0, [r6]
    // mov r1, #0x6b
    // add r2, sp, #0x28
    // add r3, sp, #0x1c
    // bl ov01_021F3C0C
    // ldrb r1, [r4, #0xd]
    // add r1, r4, r1
    // strb r0, [r1, #0x10]
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224BDCC
    // ldrb r0, [r4, #0xe]
    // cmp r0, #0xc
    // bhs _0224BD06
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0224BDCC
    // mov r0, #0
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // ldrb r1, [r4, #0xd]
    // ldrb r0, [r4, #0xc]
    // cmp r1, r0
    // bhs _0224BD1E
    // mov r0, #1
    // strb r0, [r4, #0xf]
    // b _0224BDCC
    // add r0, r6, #0
    // add r0, #0x9c
    // ldrb r1, [r4, #0x10]
    // ldr r0, [r0]
    // bl ov01_021F3B60
    // bl ov01_021F3B38
    // add r3, r0, #0
    // ldr r0, [r6, #0x58]
    // mov r1, #0x10
    // mov r2, #0
    // bl ov01_021E8E40
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224BDCC
    // ldr r0, [r6, #0x58]
    // mov r1, #0x10
    // mov r2, #0
    // bl ov01_021E8E70
    // ldr r0, [r6, #0x58]
    // mov r1, #0x20
    // mov r2, #0
    // bl ov01_021E8E70
    // ldr r0, _0224BDE4 ; =SEQ_ME_ASA
    // bl PlayFanfare
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224BDCC
    // ldr r0, [r6, #0x58]
    // mov r1, #0x10
    // bl ov01_021E8F10
    // cmp r0, #0
    // beq _0224BDCC
    // ldr r0, [r6, #0x58]
    // mov r1, #0x20
    // bl ov01_021E8F10
    // cmp r0, #0
    // beq _0224BDCC
    // bl IsFanfarePlaying
    // cmp r0, #0
    // bne _0224BDCC
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // mov r2, #0x20
    // bl ov01_021E8ED0
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // mov r2, #0x10
    // bl ov01_021E8ED0
    // ldrb r0, [r4, #0xc]
    // mov r5, #0
    // cmp r0, #0
    // bls _0224BDBA
    // add r0, r4, r5
    // add r1, r6, #0
    // add r1, #0x9c
    // ldrb r0, [r0, #0x10]
    // ldr r1, [r1]
    // bl ov01_021F36DC
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldrb r0, [r4, #0xc]
    // cmp r5, r0
    // blo _0224BDA0
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224BDCC
    // bl Heap_Free
    // add sp, #0x34
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224BDD4: .word ov02_02253D90
    // _0224BDD8: .word ov02_02253D94
    // _0224BDDC: .word ov02_02253D98
    // _0224BDE0: .word SEQ_SE_DP_BOWA
    // _0224BDE4: .word SEQ_ME_ASA
    // TODO: decompile
}



void ov02_0224BDE8(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // mov r2, #0
    // add r4, r1, #0
    // mov r1, #0xd0
    // add r3, r2, #0
    // add r5, r0, #0
    // bl sub_02054C20
    // cmp r0, #0
    // beq _0224BE1A
    // mov r0, #4
    // add r1, r0, #0
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // strb r6, [r2]
    // strb r4, [r2, #1]
    // mov r0, #0
    // strb r0, [r2, #2]
    // ldr r0, [r5, #0x10]
    // ldr r1, _0224BE20 ; =ov02_0224BE24
    // bl TaskManager_Call
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // _0224BE20: .word ov02_0224BE24
    // TODO: decompile
}



void ov02_0224BE24(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrb r1, [r4, #2]
    // cmp r1, #4
    // bls _0224BE40
    // b _0224BF48
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224BE4C: ; jump table
    // ldr r1, [r6, #0x34]
    // mov r0, #0xd0
    // bl ov01_021FB90C
    // ldr r0, [r0]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _0224BE88
    // add r2, r0, #0
    // add r2, #8
    // beq _0224BE7C
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _0224BE7C
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _0224BE7E
    // mov r1, #0
    // cmp r1, #0
    // beq _0224BE88
    // ldr r1, [r1]
    // add r7, r0, r1
    // b _0224BE8A
    // mov r7, #0
    // add r0, r6, #0
    // mov r1, #0xd0
    // add r2, sp, #0x18
    // mov r3, #0
    // bl sub_02054C20
    // cmp r0, #0
    // bne _0224BE9E
    // bl GF_AssertFail
    // ldr r0, [sp, #0x18]
    // bl ov01_021F3B38
    // add r5, r0, #0
    // ldr r0, [r6, #0x34]
    // bl ov01_021FB9E0
    // str r5, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldrb r0, [r4]
    // mov r2, #1
    // mov r3, #0xd0
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // bl ov01_021E8DE8
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // b _0224BF48
    // ldrb r0, [r4, #1]
    // mov r1, #1
    // cmp r0, #0
    // beq _0224BEE0
    // cmp r0, #1
    // beq _0224BEE0
    // mov r1, #0
    // cmp r1, #0
    // bne _0224BEE8
    // bl GF_AssertFail
    // ldrb r2, [r4, #1]
    // ldr r0, [r6, #0x58]
    // mov r1, #1
    // bl ov01_021E8E70
    // ldr r0, _0224BF50 ; =SEQ_SE_DP_ELEBETA2
    // bl PlaySE
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // b _0224BF48
    // ldr r0, [r6, #0x58]
    // mov r1, #1
    // bl ov01_021E8F10
    // cmp r0, #0
    // beq _0224BF48
    // ldr r0, _0224BF50 ; =SEQ_SE_DP_ELEBETA2
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0224BF54 ; =SEQ_SE_DP_PINPON
    // bl PlaySE
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // mov r2, #1
    // bl ov01_021E8ED0
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // b _0224BF48
    // ldr r0, _0224BF54 ; =SEQ_SE_DP_PINPON
    // bl IsSEPlaying
    // cmp r0, #0
    // bne _0224BF48
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // b _0224BF48
    // bl Heap_Free
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224BF50: .word SEQ_SE_DP_ELEBETA2
    // _0224BF54: .word SEQ_SE_DP_PINPON
    // TODO: decompile
}



void ov02_0224BF58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // ldr r2, _0224BFBC ; =ov02_022536E8
    // add r7, r1, #0
    // ldr r3, [r2]
    // ldr r2, [r2, #4]
    // str r3, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // add r2, sp, #0x20
    // str r2, [sp]
    // add r1, sp, #0x18
    // mov r2, #2
    // add r3, sp, #0x24
    // add r5, r0, #0
    // bl sub_02054C90
    // cmp r0, #0
    // beq _0224BFB4
    // ldr r0, [r5, #0x34]
    // bl ov01_021FB9E0
    // add r6, r0, #0
    // ldr r0, [sp, #0x24]
    // bl ov01_021F3B38
    // add r4, r0, #0
    // ldr r0, [sp, #0x24]
    // bl ov01_021F3B3C
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x54]
    // ldr r1, [r5, #0x58]
    // ldr r3, [sp, #0x20]
    // add r2, r7, #0
    // bl ov01_021E8DE8
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224BFBC: .word ov02_022536E8
    // TODO: decompile
}



void ov02_0224BFC0(void) {
}



void ov02_0224BFCC(void) {
}



void CreateFieldEscapeRopeTaskEnv(void) {
    ov02_0224C660(r1, 0x30);
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x24)) = r5;
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 0x20)) = r0;
    PlayerAvatar_GetState(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 8)) = 0;
    FollowMon_IsActive(r5);
    *((u32*)(r4 + 8)) = 1;
    *((u32*)(r4 + 8)) = 0;
}



void Task_FieldEscapeRope(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r7, r0, #0
    // add r0, r6, #0
    // bl TaskManager_GetEnvironment
    // add r5, r0, #0
    // ldr r3, [r5]
    // add r0, r6, #0
    // lsl r4, r3, #2
    // ldr r3, _0224C058 ; =ov02_02253700
    // add r1, r7, #0
    // ldr r3, [r3, r4]
    // add r2, r5, #0
    // blx r3
    // add r4, r0, #0
    // cmp r4, #2
    // bne _0224C04E
    // add r0, r5, #0
    // bl Heap_Free
    // cmp r4, #1
    // beq _0224C032
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224C058: .word ov02_02253700
    // TODO: decompile
}



void ov02_0224C05C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #4
    // add r4, r2, #0
    // bl ov01_021FCD2C
    // ldr r2, _0224C0A4 ; =0xFFF6A000
    // str r0, [r4, #0x1c]
    // mov r1, #1
    // mov r3, #0xf
    // bl ov01_021FCD8C
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C0A8 ; =ov02_02253820
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C092
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C0A8 ; =ov02_02253820
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, _0224C0AC ; =SEQ_SE_DP_KAIDAN2
    // bl PlaySE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0224C0A4: .word 0xFFF6A000
    // _0224C0A8: .word ov02_02253820
    // _0224C0AC: .word SEQ_SE_DP_KAIDAN2
    // TODO: decompile
}



void ov02_0224C0B0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // bne _0224C0C8
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C144 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C0F0
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C144 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #8
    // bge _0224C100
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0xc]
    // cmp r0, #2
    // bne _0224C120
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // b _0224C138
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // ldr r3, _0224C148 ; =0x00007FFF
    // add r1, r0, #0
    // add r2, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0224C144: .word ov02_02253794
    // _0224C148: .word 0x00007FFF
    // TODO: decompile
}



void ov02_0224C14C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #1
    // bne _0224C184
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C1B4 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C184
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C1B4 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _0224C190
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C1A2
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x1c]
    // bl ov01_021FCD78
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0224C1B4: .word ov02_02253794
    // TODO: decompile
}



u32 ov02_0224C1B8(void) {
}



void ov02_0224C1D8(void) {
}



void ov02_0224C1F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r5, #0
    // bl TaskManager_GetEnvironment
    // ldr r7, _0224C230 ; =ov02_022536F0
    // add r4, r0, #0
    // ldr r3, [r4]
    // add r0, r5, #0
    // lsl r3, r3, #2
    // ldr r3, [r7, r3]
    // add r1, r6, #0
    // add r2, r4, #0
    // blx r3
    // cmp r0, #2
    // bne _0224C228
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #1
    // beq _0224C20C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224C230: .word ov02_022536F0
    // TODO: decompile
}



void ov02_0224C234(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // ldr r0, [r4, #0xc]
    // add r5, r1, #0
    // cmp r0, #2
    // bne _0224C25A
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // b _0224C270
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r3, _0224C29C ; =0x00007FFF
    // mov r0, #0
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // add r0, r5, #0
    // mov r1, #4
    // bl ov01_021FCD2C
    // mov r1, #1
    // ldr r2, _0224C2A0 ; =0xFFF6A000
    // str r0, [r4, #0x1c]
    // add r3, r1, #0
    // bl ov01_021FCD8C
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C2A4 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0224C29C: .word 0x00007FFF
    // _0224C2A0: .word 0xFFF6A000
    // _0224C2A4: .word ov02_02253794
    // TODO: decompile
}



void ov02_0224C2A8(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #1
    // bne _0224C2C6
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C2E8 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _0224C2D2
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x1c]
    // mov r1, #2
    // mov r2, #0
    // mov r3, #0x3c
    // bl ov01_021FCD8C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // _0224C2E8: .word ov02_02253794
    // TODO: decompile
}



void ov02_0224C2EC(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // bne _0224C2FE
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #4
    // ldr r0, [r4, #0x20]
    // bge _0224C31C
    // ldr r1, _0224C330 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // mov r0, #0
    // pop {r4, pc}
    // ldr r1, _0224C334 ; =ov02_02253884
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0224C330: .word ov02_02253794
    // _0224C334: .word ov02_02253884
    // TODO: decompile
}



void ov02_0224C338(void) {
    EventObjectMovementMan_IsFinish(*((u32*)(r2 + 0x10)));
    ov01_021FCD6C(*((u32*)(r4 + 0x1c)));
    ov01_021FCD78(*((u32*)(r4 + 0x1c)));
    EventObjectMovementMan_Delete(*((u32*)(r4 + 0x10)));
}



void FieldMoveTask_CreateDigEnvironment(void) {
    ov02_0224C660(r3, 0x30);
    *((u32*)(r0 + 0xc)) = 1;
    *((u32*)(r0 + 0x24)) = r5;
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 0x20)) = r0;
    *((u32*)(r4 + 0x28)) = r6;
    ov01_02206268(r5);
    ov01_022062CC(r5);
    *((u32*)(r4 + 8)) = 1;
    *((u32*)(r4 + 8)) = 0;
}



void Task_FieldDig(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r7, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // add r0, r7, #0
    // bl TaskManager_GetStatePtr
    // add r5, r0, #0
    // ldr r0, [r5]
    // cmp r0, #3
    // bhi _0224C4A2
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224C3D8: ; jump table
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C3F0
    // ldr r1, _0224C4A8 ; =ov01_02205A60
    // add r0, r7, #0
    // mov r2, #0
    // bl TaskManager_Call
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224C4A2
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C42A
    // add r0, r6, #0
    // mov r1, #4
    // bl ov02_02250780
    // cmp r0, #0
    // beq _0224C41E
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #1
    // mov r4, #2
    // bl FieldSystem_UnkSub108_AddMonMood
    // b _0224C420
    // mov r4, #1
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov02_022507B4
    // b _0224C4A2
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C456
    // ldr r0, [r4, #0x28]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // ldr r0, [sp]
    // lsl r1, r1, #0x18
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x18
    // bl PlayCry
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C482
    // bl IsCryFinished
    // cmp r0, #0
    // beq _0224C46E
    // mov r5, #0
    // b _0224C494
    // ldr r3, [r4]
    // add r0, r7, #0
    // lsl r5, r3, #2
    // ldr r3, _0224C4AC ; =ov02_02253710
    // add r1, r6, #0
    // ldr r3, [r3, r5]
    // add r2, r4, #0
    // blx r3
    // add r5, r0, #0
    // b _0224C494
    // ldr r3, [r4]
    // add r0, r7, #0
    // lsl r5, r3, #2
    // ldr r3, _0224C4B0 ; =ov02_02253754
    // add r1, r6, #0
    // ldr r3, [r3, r5]
    // add r2, r4, #0
    // blx r3
    // add r5, r0, #0
    // cmp r5, #2
    // bne _0224C49E
    // add r0, r4, #0
    // bl Heap_Free
    // cmp r5, #1
    // beq _0224C45C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224C4A8: .word ov01_02205A60
    // _0224C4AC: .word ov02_02253710
    // _0224C4B0: .word ov02_02253754
    // TODO: decompile
}



u32 ov02_0224C4B4(void) {
}



void ov02_0224C4D8(void) {
    ov02_0224953C(*((u32*)(r2 + 0x18)));
    ov02_02249548(*((u32*)(r4 + 0x18)));
    ov01_02205D68(*((u32*)(r4 + 0x24)));
    // str r0, [r4]
}



void FieldMoveTask_CreateTeleportEnvironment(void) {
    ov02_0224C660(r3, 0x30);
    *((u32*)(r0 + 0xc)) = 2;
    *((u32*)(r0 + 0x24)) = r5;
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 0x20)) = r0;
    *((u32*)(r4 + 0x28)) = r6;
    PlayerAvatar_GetState(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 8)) = 0;
    ov01_02206268(r5);
    ov01_022062CC(r5);
    *((u32*)(r4 + 8)) = 1;
    *((u32*)(r4 + 8)) = 0;
}



void Task_FieldTeleport(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r7, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // add r0, r7, #0
    // bl TaskManager_GetStatePtr
    // add r5, r0, #0
    // ldr r0, [r5]
    // cmp r0, #3
    // bhi _0224C64E
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224C584: ; jump table
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C59C
    // ldr r1, _0224C654 ; =ov01_02205A60
    // add r0, r7, #0
    // mov r2, #0
    // bl TaskManager_Call
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224C64E
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C5D6
    // add r0, r6, #0
    // mov r1, #0xe
    // bl ov02_02250780
    // cmp r0, #0
    // beq _0224C5CA
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #1
    // mov r4, #2
    // bl FieldSystem_UnkSub108_AddMonMood
    // b _0224C5CC
    // mov r4, #1
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov02_022507B4
    // b _0224C64E
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C602
    // ldr r0, [r4, #0x28]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp]
    // ldr r0, [r4, #0x28]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // ldr r0, [sp]
    // lsl r1, r1, #0x18
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x18
    // bl PlayCry
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C62E
    // bl IsCryFinished
    // cmp r0, #0
    // beq _0224C61A
    // mov r5, #0
    // b _0224C640
    // ldr r3, [r4]
    // add r0, r7, #0
    // lsl r5, r3, #2
    // ldr r3, _0224C658 ; =ov02_0225373C
    // add r1, r6, #0
    // ldr r3, [r3, r5]
    // add r2, r4, #0
    // blx r3
    // add r5, r0, #0
    // b _0224C640
    // ldr r3, [r4]
    // add r0, r7, #0
    // lsl r5, r3, #2
    // ldr r3, _0224C65C ; =ov02_02253724
    // add r1, r6, #0
    // ldr r3, [r3, r5]
    // add r2, r4, #0
    // blx r3
    // add r5, r0, #0
    // cmp r5, #2
    // bne _0224C64A
    // add r0, r4, #0
    // bl Heap_Free
    // cmp r5, #1
    // beq _0224C608
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224C654: .word ov01_02205A60
    // _0224C658: .word ov02_0225373C
    // _0224C65C: .word ov02_02253724
    // TODO: decompile
}



void ov02_0224C660(void) {
    Heap_AllocAtEnd();
    GF_AssertFail();
    memset(r4, 0, r5);
}



void ov02_0224C680(void) {
}



void ov02_0224C698(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #4
    // add r4, r2, #0
    // bl ov01_021FCD2C
    // ldr r2, _0224C6D0 ; =0xFFF6A000
    // mov r1, #1
    // mov r3, #0xf
    // str r0, [r4, #0x1c]
    // bl ov01_021FCD8C
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C6D4 ; =ov02_02253770
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, _0224C6D8 ; =SEQ_SE_DP_TELE
    // bl PlaySE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0224C6D0: .word 0xFFF6A000
    // _0224C6D4: .word ov02_02253770
    // _0224C6D8: .word SEQ_SE_DP_TELE
    // TODO: decompile
}



void ov02_0224C6DC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x14]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // bne _0224C6F0
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C718 ; =ov02_02253820
    // bl EventObjectMovementMan_Create
    // add r5, #0xe4
    // str r0, [r4, #0x10]
    // ldr r0, [r5]
    // ldr r1, _0224C718 ; =ov02_02253820
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0224C718: .word ov02_02253820
    // TODO: decompile
}



void ov02_0224C71C(void) {
    // push {r4, lr}
    // add r0, r1, #0
    // mov r1, #4
    // add r4, r2, #0
    // bl ov01_021FCD2C
    // ldr r2, _0224C750 ; =0xFFF6A000
    // str r0, [r4, #0x1c]
    // mov r1, #1
    // mov r3, #0xf
    // bl ov01_021FCD8C
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C754 ; =ov02_02253820
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, _0224C758 ; =SEQ_SE_DP_TELE
    // bl PlaySE
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0224C750: .word 0xFFF6A000
    // _0224C754: .word ov02_02253820
    // _0224C758: .word SEQ_SE_DP_TELE
    // TODO: decompile
}



void ov02_0224C75C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // bne _0224C774
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C7D0 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C79C
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C7D0 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #8
    // bge _0224C7AC
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0224C7D0: .word ov02_02253794
    // TODO: decompile
}



void ov02_0224C7D4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #1
    // bne _0224C80C
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C83C ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C80C
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C83C ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _0224C818
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C82A
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x1c]
    // bl ov01_021FCD78
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0224C83C: .word ov02_02253794
    // TODO: decompile
}



u32 ov02_0224C840(void) {
}



void ov02_0224C87C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #4
    // add r4, r2, #0
    // bl ov01_021FCD2C
    // ldr r2, _0224C8C4 ; =0xFFF6A000
    // str r0, [r4, #0x1c]
    // mov r1, #1
    // mov r3, #0xf
    // bl ov01_021FCD8C
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C8C8 ; =ov02_022537DC
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C8B2
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C8C8 ; =ov02_022537DC
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, _0224C8CC ; =SEQ_SE_DP_KAIDAN2
    // bl PlaySE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0224C8C4: .word 0xFFF6A000
    // _0224C8C8: .word ov02_022537DC
    // _0224C8CC: .word SEQ_SE_DP_KAIDAN2
    // TODO: decompile
}



void ov02_0224C8D0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // bne _0224C8E4
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C938 ; =ov02_022537B8
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C90E
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // ldr r1, _0224C938 ; =ov02_022537B8
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // beq _0224C92E
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // ldr r0, [r4, #0x24]
    // beq _0224C928
    // bl ov02_0224DDF4
    // str r0, [r4, #0x2c]
    // b _0224C92E
    // bl ov02_0224DDE0
    // str r0, [r4, #0x2c]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0224C938: .word ov02_022537B8
    // TODO: decompile
}



void ov02_0224C93C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // bne _0224C954
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224C9B0 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C97C
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // add r5, #0xe4
    // ldr r0, [r5]
    // ldr r1, _0224C9B0 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #8
    // bge _0224C98C
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // ldr r3, _0224C9B4 ; =0x00007FFF
    // add r1, r0, #0
    // add r2, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0224C9B0: .word ov02_02253794
    // _0224C9B4: .word 0x00007FFF
    // TODO: decompile
}



void ov02_0224C9B8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #1
    // bne _0224C9F2
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x20]
    // ldr r1, _0224CA34 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224C9F2
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // ldr r1, _0224CA34 ; =ov02_02253794
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x14]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _0224C9FE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // beq _0224CA18
    // ldr r0, [r4, #0x2c]
    // bl ov02_0224DE08
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224CA24
    // ldr r0, [r4, #0x14]
    // bl EventObjectMovementMan_Delete
    // ldr r0, [r4, #0x1c]
    // bl ov01_021FCD78
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0224CA34: .word ov02_02253794
    // TODO: decompile
}



u32 ov02_0224CA38(void) {
}



void ov02_0224CA58(void) {
    // add r6, r3, r1
    // ldrb r2, [r1]
    // and r1, r2
    // ldrb r1, [r3, r5]
    // add r2, r3, r5
    // asr r1, r1, #1
    // strb r1, [r3, r5]
    // ldrb r2, [r2]
    // ldrb r1, [r3, r5]
    // orr r1, r2
    // strb r1, [r3, r5]
    // ldrb r1, [r3, r5]
    // asr r1, r1, #1
    // strb r1, [r3, r5]
    // ldrb r2, [r3, r5]
    // orr r1, r2
    // strb r1, [r3, r5]
}



void ov02_0224CAB8(void) {
    // str r1, [sp]
    WallpaperPasswordBank_GetCount();
    WallpaperPasswordBank_GetIndexOfWord(r5, r6);
    // add r1, sp, #4
    *((u16*)(r1 + 4)) = r0;
    WallpaperPasswordBank_GetIndexOfWord(r5, r7);
    // add r1, sp, #4
    *((u16*)(r1 + 6)) = r0;
    // add r1, sp, #0x18
    WallpaperPasswordBank_GetIndexOfWord(r5, *((u16*)(r1 + 0x10)));
    // add r1, sp, #4
    *((u16*)(r1 + 8)) = r0;
    // add r1, sp, #0x18
    WallpaperPasswordBank_GetIndexOfWord(r5, *((u16*)(r1 + 0x14)));
    // add r1, sp, #4
    *((u16*)(r1 + 0xa)) = r0;
    // add r3, sp, #8
    // add r5, sp, #4
    // ldrsh r0, [r3, r7]
    // mvn r0, r0
    // mvn r6, r6
    // ldrsh r6, [r3, r6]
    // sub r0, r0, r6
    // mvn r0, r0
    // strb r0, [r5]
    // sub r0, r6, r0
    // sub r0, r4, r0
    // mvn r0, r0
    // strb r0, [r5]
    // ldrsh r0, [r1, r0]
    // mvn r0, r0
    // strb r0, [r1]
    // add r0, sp, #4
    ov02_0224CA58(0, 4, 5, (r3 + 2));
    // add r1, sp, #4
    // add r4, sp, #4
    // ldrb r0, [r1]
    // asr r6, r5, #4
    // and r5, r3
    // orr r5, r6
    // eor r0, r5
    // strb r0, [r1]
    // add r2, sp, #4
    // add r0, sp, #4
    // and r2, r3
    ov02_0224CA58(3, ((0xf << 0x18) >> 0x18), *((u8*)((0 + 1) + 3)));
    // add r1, sp, #4
    // ldrb r5, [r1]
    // and r4, r0
    // sub r0, #0x10
    // eor r0, r5
    *((u8*)(r1 + 1)) = *((u8*)(r1 + 1));
    // eor r0, r5
    *((u8*)(r1 + 2)) = *((u8*)(r1 + 2));
    // ldr r0, [sp]
    // orr r6, r3
    // and r0, r5
    // asr r0, r0, #4
    // add r1, r5, r2
    // mul r1, r3
    // mvn r0, r0
}



void ov02_0224CBF8(void) {
    // str r1, [sp]
    WallpaperPasswordBank_GetCount();
    WallpaperPasswordBank_GetIndexOfWord(r5, r6);
    // add r1, sp, #4
    *((u16*)(r1 + 4)) = r0;
    WallpaperPasswordBank_GetIndexOfWord(r5, r7);
    // add r1, sp, #4
    *((u16*)(r1 + 6)) = r0;
    // add r1, sp, #0x18
    WallpaperPasswordBank_GetIndexOfWord(r5, *((u16*)(r1 + 0x10)));
    // add r1, sp, #4
    *((u16*)(r1 + 8)) = r0;
    // add r1, sp, #0x18
    WallpaperPasswordBank_GetIndexOfWord(r5, *((u16*)(r1 + 0x14)));
    // add r1, sp, #4
    *((u16*)(r1 + 0xa)) = r0;
    // add r3, sp, #8
    // add r5, sp, #4
    // ldrsh r0, [r3, r7]
    // mvn r0, r0
    // mvn r6, r6
    // ldrsh r6, [r3, r6]
    // sub r0, r0, r6
    // mvn r0, r0
    // strb r0, [r5]
    // sub r0, r6, r0
    // sub r0, r4, r0
    // mvn r0, r0
    // strb r0, [r5]
    // ldrsh r0, [r1, r0]
    // mvn r0, r0
    // strb r0, [r1]
    // add r0, sp, #4
    ov02_0224CA58(0, 4, 5, (r3 + 2));
    // add r1, sp, #4
    // add r4, sp, #4
    // ldrb r0, [r1]
    // asr r6, r5, #4
    // and r5, r3
    // orr r5, r6
    // eor r0, r5
    // strb r0, [r1]
    // add r2, sp, #4
    // add r0, sp, #4
    // and r2, r3
    ov02_0224CA58(3, ((0xf << 0x18) >> 0x18), *((u8*)((0 + 1) + 3)));
    // add r1, sp, #4
    // ldrb r4, [r1]
    // and r0, r4
    // mvn r0, r0
    // eor r2, r4
    *((u8*)(r1 + 1)) = *((u8*)(r1 + 1));
    // eor r2, r4
    *((u8*)(r1 + 2)) = *((u8*)(r1 + 2));
    // ldr r5, [sp]
    // orr r6, r3
    // and r5, r4
    // asr r5, r5, #4
    // add r2, r4, r2
    // mul r2, r3
    // mvn r0, r0
}



void ov02_0224CD38(void) {
    // ldr r0, [sp, #0x24]
    // str r2, [sp, #8]
    WallpaperPasswordBank_Create();
    PlayerProfile_GetTrainerID_VisibleHalf(r6);
    // str r5, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    ov02_0224CAB8(r4, r0, r7);
    WallpaperPasswordBank_Delete(r4);
}



void ov02_0224CD74(void) {
    // ldr r0, [sp, #0x24]
    // str r2, [sp, #8]
    WallpaperPasswordBank_Create();
    PlayerProfile_GetTrainerID_VisibleHalf(r6);
    // str r5, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    ov02_0224CBF8(r4, r0, r7);
    WallpaperPasswordBank_Delete(r4);
}



void ov02_0224CDB0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r6, r1, #0
    // mov r1, #0x26
    // add r2, sp, #4
    // add r3, sp, #0
    // add r5, r0, #0
    // bl sub_02054C20
    // cmp r0, #0
    // beq _0224CE1C
    // mov r0, #4
    // mov r1, #0x18
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // strb r6, [r4, #0xc]
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // strb r0, [r4, #0xe]
    // strb r0, [r4, #0xf]
    // ldr r0, [r5, #0x30]
    // bl MapMatrix_GetWidth
    // add r1, r0, #0
    // ldr r0, [sp]
    // add r2, sp, #0x14
    // bl sub_02054DC8
    // ldr r1, [sp, #4]
    // add r0, sp, #8
    // bl ov01_021F3B0C
    // add r3, sp, #8
    // ldmia r3!, {r0, r1}
    // add r2, r4, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r1, [r4]
    // ldr r0, [sp, #0x14]
    // add r2, r4, #0
    // add r0, r1, r0
    // str r0, [r4]
    // ldr r1, [r4, #8]
    // ldr r0, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [r4, #8]
    // ldr r0, [r5, #0x10]
    // ldr r1, _0224CE24 ; =ov02_0224CE28
    // bl TaskManager_Call
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // _0224CE24: .word ov02_0224CE28
    // TODO: decompile
}



void ov02_0224CE28(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrb r1, [r4, #0xf]
    // cmp r1, #5
    // bls _0224CE44
    // b _0224CFC0
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224CE50: ; jump table
    // ldr r1, [r6, #0x34]
    // mov r0, #0x6b
    // bl ov01_021FB90C
    // ldr r0, [r0]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _0224CE8E
    // add r2, r0, #0
    // add r2, #8
    // beq _0224CE82
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _0224CE82
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _0224CE84
    // mov r1, #0
    // cmp r1, #0
    // beq _0224CE8E
    // ldr r1, [r1]
    // add r5, r0, r1
    // b _0224CE90
    // mov r5, #0
    // ldr r0, [r6, #0x34]
    // bl ov01_021FB9E0
    // mov r1, #0
    // str r1, [sp]
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // mov r2, #0x10
    // mov r3, #0x6b
    // bl ov01_021E8DE8
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224CFC0
    // add r1, sp, #0x18
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldrb r2, [r4, #0xd]
    // mov r1, #0xc
    // ldr r0, [r4]
    // add r3, r2, #0
    // ldr r2, _0224CFC8 ; =ov02_02253DD8
    // mul r3, r1
    // ldr r2, [r2, r3]
    // add r0, r0, r2
    // str r0, [sp, #0x24]
    // ldrb r2, [r4, #0xd]
    // ldr r0, [r4, #4]
    // add r3, r2, #0
    // ldr r2, _0224CFCC ; =ov02_02253DDC
    // mul r3, r1
    // ldr r2, [r2, r3]
    // add r0, r0, r2
    // str r0, [sp, #0x28]
    // ldrb r2, [r4, #0xd]
    // ldr r0, [r4, #8]
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _0224CFD0 ; =ov02_02253DE0
    // ldr r1, [r1, r3]
    // add r0, r0, r1
    // str r0, [sp, #0x2c]
    // ldr r0, _0224CFD4 ; =SEQ_SE_DP_BOWA
    // bl PlaySE
    // ldr r0, [r6, #0x54]
    // add r6, #0x9c
    // str r0, [sp]
    // ldr r0, [r6]
    // mov r1, #0x6b
    // add r2, sp, #0x24
    // add r3, sp, #0x18
    // bl ov01_021F3C0C
    // ldrb r1, [r4, #0xd]
    // add r1, r4, r1
    // strb r0, [r1, #0x10]
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224CFC0
    // ldrb r0, [r4, #0xe]
    // cmp r0, #0xf
    // bhs _0224CF28
    // add r0, r0, #1
    // strb r0, [r4, #0xe]
    // b _0224CFC0
    // mov r0, #0
    // strb r0, [r4, #0xe]
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // ldrb r1, [r4, #0xd]
    // ldrb r0, [r4, #0xc]
    // cmp r1, r0
    // bhs _0224CF40
    // mov r0, #1
    // strb r0, [r4, #0xf]
    // b _0224CFC0
    // add r0, r6, #0
    // add r0, #0x9c
    // ldrb r1, [r4, #0x10]
    // ldr r0, [r0]
    // bl ov01_021F3B60
    // bl ov01_021F3B38
    // add r3, r0, #0
    // ldr r0, [r6, #0x58]
    // mov r1, #0x10
    // mov r2, #0
    // bl ov01_021E8E40
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224CFC0
    // ldr r0, [r6, #0x58]
    // mov r1, #0x10
    // mov r2, #0
    // bl ov01_021E8E70
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224CFC0
    // ldr r0, [r6, #0x58]
    // mov r1, #0x10
    // bl ov01_021E8F10
    // cmp r0, #0
    // beq _0224CFC0
    // ldr r0, [r6, #0x54]
    // ldr r1, [r6, #0x58]
    // mov r2, #0x10
    // bl ov01_021E8ED0
    // ldrb r0, [r4, #0xc]
    // mov r5, #0
    // cmp r0, #0
    // bls _0224CFAE
    // add r0, r4, r5
    // add r1, r6, #0
    // add r1, #0x9c
    // ldrb r0, [r0, #0x10]
    // ldr r1, [r1]
    // bl ov01_021F36DC
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldrb r0, [r4, #0xc]
    // cmp r5, r0
    // blo _0224CF94
    // ldrb r0, [r4, #0xf]
    // add r0, r0, #1
    // strb r0, [r4, #0xf]
    // b _0224CFC0
    // bl Heap_Free
    // add sp, #0x30
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // nop
    // _0224CFC8: .word ov02_02253DD8
    // _0224CFCC: .word ov02_02253DDC
    // _0224CFD0: .word ov02_02253DE0
    // _0224CFD4: .word SEQ_SE_DP_BOWA
    // TODO: decompile
}



void ov02_0224CFD8(void) {
    MapObjectManager_GetFirstActiveObjectByID();
    // add r1, sp, #0
    MapObject_CopyPositionVector();
    MapObject_GetXCoord(r6);
    MapObject_GetZCoord(r6);
    MapObject_GetFacingDirection(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224D010: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // ldr r2, [sp, #4]
    // add r1, r1, r3
    // add r3, r4, r3
    Field3dObject_SetPosEx(r7, (r5 << 0x10), (2 << 0xe));
}



void ov02_0224D044(void) {
    // add r1, sp, #0
    PlayerAvatar_CopyPositionVector();
    PlayerAvatar_GetXCoord(r6);
    PlayerAvatar_GetZCoord(r6);
    PlayerAvatar_GetFacingDirection(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224D078: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    // ldr r2, [sp, #4]
    // add r1, r1, r3
    // add r3, r4, r3
    Field3dObject_SetPosEx(r7, (r5 << 0x10), (2 << 0xe));
}



void ov02_0224D0AC(void) {
    // add r1, sp, #0
    PlayerAvatar_CopyPositionVector();
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    Field3dObject_SetPosEx(r4);
}



void ov02_0224D0C8(void) {
    // str r2, [sp, #8]
    // ldr r7, [sp, #0x28]
    memset(0, 0xdc);
    // add r0, #0x78
    Field3dModel_LoadFromFilesystem(r6, 0x86, r5, 4);
    // add r1, #0x78
    Field3dObject_InitFromModel(r6, r6);
    // add r0, #0xd8
    // str r4, [r0]
    // add r0, #0xd8
    // str r0, [sp, #0xc]
    // add r0, #0x78
    // add r5, #0x88
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    // add r3, r3, r4
    // str r7, [sp, #4]
    Field3dModelAnimation_LoadFromFilesystem(r6, 0x86);
    Field3dObject_AddAnimation(r6, r5);
    // add r0, #0xd8
    // add r5, #0x14
}



void ov02_0224D144(void) {
    // add r0, #0x78
    Field3dModel_Unload();
    // add r0, #0xd8
    // add r5, #0x88
    Field3dModelAnimation_Unload(r6, r7);
    // add r0, #0xd8
    // add r5, #0x14
}



void ov02_0224D178(void) {
    // add r0, #0xd8
    // add r5, #0x88
    Field3dModelAnimation_FrameAdvanceAndCheck(r0, (1 << 0xc));
    // and r6, r0
    // add r0, #0xd8
    // add r5, #0x14
}



void ov02_0224D1AC(void) {
    // add r0, #0xd8
    // add r5, #0x88
    Field3dModelAnimation_FrameAdvanceAndLoop(r0, (1 << 0xc));
    // add r0, #0xd8
    // add r5, #0x14
}



void ov02_0224D1DC(void) {
}



void ov02_0224D1E4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xf0
    // bl memset
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #3
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0
    // add r3, r1, #0
    // bl ov02_0224D0C8
    // ldr r0, [r5, #0x40]
    // add r1, r4, #0
    // bl ov02_0224D044
    // ldr r0, _0224D228 ; =SEQ_SE_DP_FW015
    // bl PlaySE
    // mov r0, #0
    // add r4, #0xec
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // _0224D228: .word SEQ_SE_DP_FW015
    // TODO: decompile
}



void ov02_0224D22C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xf0
    // bl memset
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #3
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0
    // add r3, r1, #0
    // bl ov02_0224D0C8
    // ldr r0, [r5, #0x3c]
    // mov r1, #0xfd
    // add r2, r4, #0
    // bl ov02_0224CFD8
    // ldr r0, _0224D274 ; =SEQ_SE_DP_FW015
    // bl PlaySE
    // mov r0, #0
    // add r4, #0xec
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224D274: .word SEQ_SE_DP_FW015
    // TODO: decompile
}



void ov02_0224D278(void) {
    // ldr r3, _0224D284 ; =ov02_0224D144
    // add r0, r2, #0
    // add r2, #0xdc
    // add r1, r2, #0
    // bx r3
    // nop
    // _0224D284: .word ov02_0224D144
    // TODO: decompile
}



void ov02_0224D288(void) {
    // add r0, #0xec
    ov02_0224D178(r2);
    Field3dObject_SetActiveFlag(r4, 0);
    // add r0, #0xec
    // add r4, #0xec
    // str r0, [r4]
}



void ov02_0224D2BC(void) {
}



void ov02_0224D2C8(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224D2D4 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224D2D8 ; =ov02_02253974
    // bx r3
    // nop
    // _0224D2D4: .word Field3dObjectTaskManager_CreateTask
    // _0224D2D8: .word ov02_02253974
    // TODO: decompile
}



void ov02_0224D2DC(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224D2E8 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224D2EC ; =ov02_022539BC
    // bx r3
    // nop
    // _0224D2E8: .word Field3dObjectTaskManager_CreateTask
    // _0224D2EC: .word ov02_022539BC
    // TODO: decompile
}



void ov02_0224D2F0(void) {
}



void ov02_0224D2F8(void) {
}



void ov02_0224D310(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xf0
    // bl memset
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r2, #4
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #8
    // add r3, r2, #0
    // bl ov02_0224D0C8
    // ldr r0, [r5, #0x40]
    // add r1, r4, #0
    // bl ov02_0224D044
    // ldr r0, _0224D354 ; =SEQ_SE_DP_FW088
    // bl PlaySE
    // mov r0, #0
    // add r4, #0xec
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // _0224D354: .word SEQ_SE_DP_FW088
    // TODO: decompile
}



void ov02_0224D358(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0xf0
    // bl memset
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r2, #4
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #8
    // add r3, r2, #0
    // bl ov02_0224D0C8
    // ldr r0, [r5, #0x3c]
    // mov r1, #0xfd
    // add r2, r4, #0
    // bl ov02_0224CFD8
    // ldr r0, _0224D3A0 ; =SEQ_SE_DP_FW088
    // bl PlaySE
    // mov r0, #0
    // add r4, #0xec
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224D3A0: .word SEQ_SE_DP_FW088
    // TODO: decompile
}



void ov02_0224D3A4(void) {
    // ldr r3, _0224D3B0 ; =ov02_0224D144
    // add r0, r2, #0
    // add r2, #0xdc
    // add r1, r2, #0
    // bx r3
    // nop
    // _0224D3B0: .word ov02_0224D144
    // TODO: decompile
}



void ov02_0224D3B4(void) {
    // add r0, #0xec
    ov02_0224D178(r2);
    Field3dObject_SetActiveFlag(r4, 0);
    // add r0, #0xec
    // add r4, #0xec
    // str r0, [r4]
}



void ov02_0224D3E8(void) {
}



void ov02_0224D3F4(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224D400 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224D404 ; =ov02_022538FC
    // bx r3
    // nop
    // _0224D400: .word Field3dObjectTaskManager_CreateTask
    // _0224D404: .word ov02_022538FC
    // TODO: decompile
}



void ov02_0224D408(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224D414 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224D418 ; =ov02_0225398C
    // bx r3
    // nop
    // _0224D414: .word Field3dObjectTaskManager_CreateTask
    // _0224D418: .word ov02_0225398C
    // TODO: decompile
}



void ov02_0224D41C(void) {
}



void ov02_0224D424(void) {
}



void ov02_0224D43C(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // mov r2, #0x73
    // add r0, r4, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // mov r0, #0x6e
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // ldr r0, _0224D464 ; =0x000001CA
    // mov r1, #0
    // strh r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0224D464: .word 0x000001CA
    // TODO: decompile
}



void ov02_0224D468(void) {
}



void ov02_0224D488(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // ldr r7, _0224D574 ; =0x000001CA
    // add r4, r2, #0
    // ldrh r0, [r4, r7]
    // add r5, r1, #0
    // cmp r0, #3
    // bhi _0224D570
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224D4A4: ; jump table
    // ldr r2, _0224D578 ; =ov02_022538EC
    // add r1, sp, #4
    // ldrb r3, [r2, #2]
    // add r0, sp, #4
    // add r1, #2
    // strb r3, [r0, #2]
    // ldrb r3, [r2, #3]
    // strb r3, [r0, #3]
    // ldrb r6, [r2, #4]
    // add r3, sp, #4
    // strb r6, [r0]
    // ldrb r2, [r2, #5]
    // strb r2, [r0, #1]
    // sub r0, r7, #2
    // ldrh r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xdc
    // add r6, r2, #0
    // mul r6, r0
    // add r0, #0xdc
    // add r0, r4, r0
    // str r0, [sp]
    // ldrb r1, [r1, r2]
    // ldrb r2, [r3, r2]
    // add r0, r4, r6
    // mov r3, #2
    // bl ov02_0224D0C8
    // ldr r0, [r5, #0x40]
    // add r1, r4, r6
    // bl ov02_0224D0AC
    // sub r1, r7, #2
    // ldrh r0, [r4, r1]
    // add r0, r0, #1
    // strh r0, [r4, r1]
    // ldrh r0, [r4, r1]
    // cmp r0, #2
    // blo _0224D570
    // add r0, r1, #2
    // ldrh r0, [r4, r0]
    // add sp, #8
    // add r2, r0, #1
    // add r0, r1, #2
    // strh r2, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // ldr r0, _0224D57C ; =SEQ_SE_DP_FW463
    // bl PlaySE
    // add r0, r7, #0
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // add r0, r4, #0
    // bl ov02_0224D178
    // add r6, r0, #0
    // ldr r0, [r5, #0x40]
    // add r1, r4, #0
    // bl ov02_0224D0AC
    // cmp r6, #1
    // bne _0224D570
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // add r1, r4, #0
    // ldr r0, [r5, #0x40]
    // add r1, #0xdc
    // bl ov02_0224D0AC
    // ldr r0, _0224D574 ; =0x000001CA
    // add sp, #8
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0xdc
    // bl ov02_0224D1AC
    // add r4, #0xdc
    // ldr r0, [r5, #0x40]
    // add r1, r4, #0
    // bl ov02_0224D0AC
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224D574: .word 0x000001CA
    // _0224D578: .word ov02_022538EC
    // _0224D57C: .word SEQ_SE_DP_FW463
    // TODO: decompile
}



void ov02_0224D580(void) {
}



void ov02_0224D598(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224D5A4 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224D5A8 ; =ov02_02253944
    // bx r3
    // nop
    // _0224D5A4: .word Field3dObjectTaskManager_CreateTask
    // _0224D5A8: .word ov02_02253944
    // TODO: decompile
}



void ov02_0224D5AC(void) {
}



void ov02_0224D5B4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // ldr r1, _0224D640 ; =ov02_022538EC
    // add r4, r2, #0
    // ldrb r2, [r1]
    // add r0, sp, #4
    // strb r2, [r0, #1]
    // ldrb r2, [r1, #1]
    // strb r2, [r0]
    // ldrh r2, [r1, #6]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #8]
    // strh r2, [r0, #4]
    // ldrh r2, [r1, #0xa]
    // strh r2, [r0, #6]
    // ldrh r1, [r1, #0xc]
    // mov r2, #0xf0
    // strh r1, [r0, #8]
    // add r0, r4, #0
    // mov r1, #0
    // bl memset
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0xdc
    // str r0, [sp]
    // add r2, sp, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // add r0, r4, #0
    // mov r3, #1
    // bl ov02_0224D0C8
    // add r0, r4, #0
    // bl ov02_0224D1AC
    // ldr r0, [r5, #0x40]
    // add r1, r4, #0
    // bl ov02_0224D0AC
    // add r0, sp, #4
    // lsl r1, r6, #1
    // add r0, #2
    // ldrh r0, [r0, r1]
    // bl GF_DegreeToSinCosIdxNoWrap
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #1
    // bl Field3dObject_SetXRotation
    // ldr r0, _0224D644 ; =SEQ_SE_DP_FW463
    // bl PlaySE
    // mov r0, #0
    // add r4, #0xec
    // strh r0, [r4]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0224D640: .word ov02_022538EC
    // _0224D644: .word SEQ_SE_DP_FW463
    // TODO: decompile
}



void ov02_0224D648(void) {
    // ldr r3, _0224D654 ; =ov02_0224D144
    // add r0, r2, #0
    // add r2, #0xdc
    // add r1, r2, #0
    // bx r3
    // nop
    // _0224D654: .word ov02_0224D144
    // TODO: decompile
}



void ov02_0224D658(void) {
}



void ov02_0224D670(void) {
}



void ov02_0224D67C(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224D688 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224D68C ; =ov02_02253914
    // bx r3
    // nop
    // _0224D688: .word Field3dObjectTaskManager_CreateTask
    // _0224D68C: .word ov02_02253914
    // TODO: decompile
}



void ov02_0224D690(void) {
}



void ov02_0224D698(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // add r6, r1, #0
    // add r4, r2, #0
    // add r5, r3, #0
    // cmp r0, #0
    // beq _0224D6B0
    // bl GF_AssertFail
    // add r0, r6, #0
    // add r1, sp, #0
    // bl PlayerAvatar_CopyPositionVector
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // ldr r1, [sp]
    // add r0, r7, #0
    // add r2, r2, r4
    // add r3, r3, r5
    // bl Field3dObject_SetPosEx
    // add r0, r7, #0
    // mov r4, #0
    // add r5, r7, #0
    // mov r1, #1
    // add r0, #0xc8
    // str r1, [r0]
    // add r5, #0x78
    // add r6, r4, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl Field3dModelAnimation_FrameSet
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, #4
    // blt _0224D6D8
    // add r0, r7, #0
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // ldr r0, _0224D6FC ; =SEQ_SE_DP_UG_023
    // bl PlaySE
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224D6FC: .word SEQ_SE_DP_UG_023
    // TODO: decompile
}



void ov02_0224D700(void) {
    // str r0, [sp]
    // add r0, #0xc8
    // ldr r5, [sp]
    // add r5, #0x78
    Field3dModelAnimation_FrameAdvanceAndCheck(r5, (1 << 0xc));
    // and r4, r0
    // add r5, #0x14
    // ldr r0, [sp]
    // add r0, #0xc8
    // str r1, [r0]
    // ldr r0, [sp]
    Field3dObject_SetActiveFlag(0);
}



void ov02_0224D73C(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    memset(0, 0xcc);
    // ldr r1, [sp]
    Field3dObject_InitFromModel(r7);
    // add r4, #0x78
    // ldr r1, [sp]
    // ldr r3, [sp, #4]
    ov01_021FBE70(r7, *((u32*)r5));
    Field3dObject_AddAnimation(r7, r4);
    // add r4, #0x14
    Field3dObject_SetActiveFlag(r7, 0);
}



void ov02_0224D788(void) {
    // add r5, #0x78
    Field3dModelAnimation_Unload(r0, r1);
    // add r5, #0x14
    memset(r7, 0, 0xcc);
}



void ov02_0224D7B0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0xce
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // add r1, sp, #0
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_CopyPositionVector
    // mov r1, #0xcf
    // lsl r1, r1, #4
    // ldr r2, [sp]
    // ldr r0, [r4, r1]
    // sub r0, r2, r0
    // bne _0224D7F8
    // add r0, r1, #4
    // ldr r2, [sp, #4]
    // ldr r0, [r4, r0]
    // cmp r2, r0
    // bge _0224D7F8
    // add r0, r1, #0
    // add r0, #8
    // ldr r2, [sp, #8]
    // ldr r0, [r4, r0]
    // cmp r2, r0
    // ble _0224D7F8
    // add r0, r1, #0
    // mov r2, #0
    // sub r0, #8
    // str r2, [r4, r0]
    // mov r2, #2
    // lsl r2, r2, #0x10
    // sub r0, r1, #4
    // str r2, [r4, r0]
    // b _0224D806
    // mov r1, #2
    // ldr r0, _0224D81C ; =0x00000CE8
    // lsl r1, r1, #0x10
    // str r1, [r4, r0]
    // lsr r1, r1, #1
    // add r0, r0, #4
    // str r1, [r4, r0]
    // mov r0, #0xcf
    // lsl r0, r0, #4
    // add r3, sp, #0
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0224D81C: .word 0x00000CE8
    // TODO: decompile
}



void ov02_0224D820(void) {
    ov02_0224D7B0();
    // add r0, #0xd8
    // add r1, #0x10
    // mul r0, r2
    // add r0, r1, r0
    // ldr r1, [r4, r3]
    // add r2, #8
    // add r3, #0xc
    // ldr r2, [r4, r2]
    // ldr r3, [r4, r3]
    ov02_0224D698(0xcc, *((u32*)(r4 + 0x40)), (0xce << 4), (0xce << 4));
    // add r1, #0xcc
    GF_AssertFail((r2 + 1));
}



void ov02_0224D868(void) {
}



void ov02_0224D880(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r2, #0
    // mov r2, #0xd1
    // str r1, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0
    // lsl r2, r2, #4
    // bl memset
    // ldr r0, _0224D90C ; =0x00000CFC
    // mov r1, #4
    // add r0, r5, r0
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r5, #0
    // mov r1, #0x86
    // mov r2, #8
    // mov r3, #4
    // bl Field3dModel_LoadFromFilesystem
    // mov r7, #0xcd
    // mov r4, #0
    // add r6, r5, #0
    // lsl r7, r7, #4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x86
    // add r1, r4, #4
    // mov r2, #0
    // mov r3, #4
    // bl GfGfxLoader_LoadFromNarc
    // str r0, [r6, r7]
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #4
    // blt _0224D8B4
    // add r4, r5, #0
    // mov r7, #0xcd
    // mov r6, #0
    // add r4, #0x10
    // lsl r7, r7, #4
    // ldr r2, _0224D90C ; =0x00000CFC
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r5, r2
    // add r3, r5, r7
    // bl ov02_0224D73C
    // add r6, r6, #1
    // add r4, #0xcc
    // cmp r6, #0x10
    // blt _0224D8D8
    // mov r1, #0xce
    // ldr r0, [sp, #4]
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // add r1, #0x10
    // ldr r0, [r0, #0x40]
    // add r1, r5, r1
    // bl PlayerAvatar_CopyPositionVector
    // ldr r0, _0224D910 ; =0x00000D0C
    // mov r1, #0
    // str r1, [r5, r0]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224D90C: .word 0x00000CFC
    // _0224D910: .word 0x00000D0C
    // TODO: decompile
}



void ov02_0224D914(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r2, #0
    // add r4, r5, #0
    // ldr r7, _0224D94C ; =0x00000CFC
    // mov r6, #0
    // add r4, #0x10
    // add r0, r4, #0
    // add r1, r5, r7
    // bl ov02_0224D788
    // add r6, r6, #1
    // add r4, #0xcc
    // cmp r6, #0x10
    // blt _0224D920
    // add r0, r5, #0
    // bl Field3dModel_Unload
    // mov r6, #0xcd
    // mov r4, #0
    // lsl r6, r6, #4
    // ldr r0, [r5, r6]
    // bl Heap_Free
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0224D93C
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224D94C: .word 0x00000CFC
    // TODO: decompile
}



void ov02_0224D950(void) {
    // push {r4, lr}
    // ldr r1, _0224D988 ; =0x00000D0C
    // add r4, r2, #0
    // ldr r0, [r4, r1]
    // cmp r0, #0
    // bne _0224D986
    // add r0, r1, #0
    // sub r0, #0x28
    // ldr r0, [r4, r0]
    // sub r2, r0, #1
    // add r0, r1, #0
    // sub r0, #0x28
    // str r2, [r4, r0]
    // add r0, r1, #0
    // sub r0, #0x28
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bge _0224D980
    // mov r0, #4
    // sub r1, #0x28
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov02_0224D820
    // add r0, r4, #0
    // bl ov02_0224D868
    // pop {r4, pc}
    // _0224D988: .word 0x00000D0C
    // TODO: decompile
}



void ov02_0224D98C(void) {
}



void ov02_0224D9A4(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224D9B0 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224D9B4 ; =ov02_0225395C
    // bx r3
    // nop
    // _0224D9B0: .word Field3dObjectTaskManager_CreateTask
    // _0224D9B4: .word ov02_0225395C
    // TODO: decompile
}



void ov02_0224D9B8(void) {
}



void ov02_0224D9C0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r2, #0
    // mov r2, #0x45
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r4, #0
    // add r0, #0xdc
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #0x11
    // mov r3, #2
    // bl ov02_0224D0C8
    // ldr r0, [r5, #0x40]
    // add r1, r4, #0
    // bl ov02_0224D044
    // ldr r1, [r5, #0x24]
    // add r0, sp, #0x10
    // bl Camera_GetLookAtCamTarget
    // add r3, sp, #0x10
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xf8
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r1, [r5, #0x24]
    // add r0, sp, #4
    // bl Camera_GetLookAtCamPos
    // add r3, sp, #4
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xec
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, sp, #0x1c
    // str r0, [r2]
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // cmp r0, #3
    // bhi _0224DA7C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224DA46: ; jump table
    // mov r0, #2
    // ldr r1, [sp, #0x24]
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [sp, #0x24]
    // b _0224DA7C
    // mov r0, #2
    // ldr r1, [sp, #0x24]
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // b _0224DA7C
    // mov r0, #2
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // b _0224DA7C
    // mov r0, #2
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // mov r0, #0x41
    // lsl r0, r0, #2
    // add r3, sp, #0x1c
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, _0224DA9C ; =SEQ_SE_GS_ZUTUKI
    // bl PlaySE
    // ldr r0, _0224DAA0 ; =0x00000113
    // mov r1, #0
    // strb r1, [r4, r0]
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // _0224DA9C: .word SEQ_SE_GS_ZUTUKI
    // _0224DAA0: .word 0x00000113
    // TODO: decompile
}



void ov02_0224DAA4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r2, #0
    // mov r2, #0x45
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // add r0, r4, #0
    // add r0, #0xdc
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r4, #0
    // add r0, #0xdc
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #0x11
    // mov r3, #2
    // bl ov02_0224D0C8
    // ldr r0, [r5, #0x3c]
    // mov r1, #0xfd
    // add r2, r4, #0
    // bl ov02_0224CFD8
    // ldr r1, [r5, #0x24]
    // add r0, sp, #0x10
    // bl Camera_GetLookAtCamTarget
    // add r3, sp, #0x10
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xf8
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r1, [r5, #0x24]
    // add r0, sp, #4
    // bl Camera_GetLookAtCamPos
    // add r3, sp, #4
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xec
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, sp, #0x1c
    // str r0, [r2]
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // cmp r0, #3
    // bhi _0224DB62
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224DB2C: ; jump table
    // mov r0, #2
    // ldr r1, [sp, #0x24]
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [sp, #0x24]
    // b _0224DB62
    // mov r0, #2
    // ldr r1, [sp, #0x24]
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // b _0224DB62
    // mov r0, #2
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // b _0224DB62
    // mov r0, #2
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // mov r0, #0x41
    // lsl r0, r0, #2
    // add r3, sp, #0x1c
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, _0224DB84 ; =SEQ_SE_GS_ZUTUKI
    // bl PlaySE
    // ldr r0, _0224DB88 ; =0x00000113
    // mov r1, #0
    // strb r1, [r4, r0]
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // nop
    // _0224DB84: .word SEQ_SE_GS_ZUTUKI
    // _0224DB88: .word 0x00000113
    // TODO: decompile
}



void ov02_0224DB8C(void) {
    // ldr r3, _0224DB98 ; =ov02_0224D144
    // add r0, r2, #0
    // add r2, #0xdc
    // add r1, r2, #0
    // bx r3
    // nop
    // _0224DB98: .word ov02_0224D144
    // TODO: decompile
}



void ov02_0224DB9C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r1, _0224DC50 ; =0x00000113
    // add r4, r2, #0
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // beq _0224DBB0
    // cmp r0, #1
    // beq _0224DC38
    // pop {r3, r4, r5, pc}
    // sub r0, r1, #1
    // ldrb r0, [r4, r0]
    // cmp r0, #2
    // bhs _0224DC1C
    // sub r0, r1, #3
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bgt _0224DC12
    // mov r2, #1
    // sub r0, r1, #3
    // strb r2, [r4, r0]
    // sub r0, r1, #2
    // ldrb r0, [r4, r0]
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r2, r2, r1
    // add r1, r0, #0
    // add r1, #0xf2
    // strb r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xf2
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _0224DBF4
    // add r0, #0xe5
    // ldr r1, [r5, #0x24]
    // add r0, r4, r0
    // bl Camera_OffsetLookAtPosAndTarget
    // b _0224DC1C
    // add r0, r4, #0
    // ldr r1, [r5, #0x24]
    // add r0, #0xf8
    // bl Camera_SetLookAtCamTarget
    // add r0, r4, #0
    // ldr r1, [r5, #0x24]
    // add r0, #0xec
    // bl Camera_SetLookAtCamPos
    // ldr r0, _0224DC54 ; =0x00000112
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0224DC1C
    // sub r0, r1, #3
    // ldrsb r0, [r4, r0]
    // sub r2, r0, #1
    // sub r0, r1, #3
    // strb r2, [r4, r0]
    // add r0, r4, #0
    // bl ov02_0224D178
    // cmp r0, #1
    // bne _0224DC4C
    // add r0, r4, #0
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // ldr r0, _0224DC50 ; =0x00000113
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // ldr r1, [r5, #0x24]
    // add r0, #0xf8
    // bl Camera_SetLookAtCamTarget
    // add r4, #0xec
    // ldr r1, [r5, #0x24]
    // add r0, r4, #0
    // bl Camera_SetLookAtCamPos
    // pop {r3, r4, r5, pc}
    // nop
    // _0224DC50: .word 0x00000113
    // _0224DC54: .word 0x00000112
    // TODO: decompile
}



void ov02_0224DC58(void) {
}



void ov02_0224DC64(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224DC70 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224DC74 ; =ov02_022539A4
    // bx r3
    // nop
    // _0224DC70: .word Field3dObjectTaskManager_CreateTask
    // _0224DC74: .word ov02_022539A4
    // TODO: decompile
}



void ov02_0224DC78(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224DC84 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224DC88 ; =ov02_0225392C
    // bx r3
    // nop
    // _0224DC84: .word Field3dObjectTaskManager_CreateTask
    // _0224DC88: .word ov02_0225392C
    // TODO: decompile
}



void ov02_0224DC8C(void) {
}



void ov02_0224DC94(void) {
}



void ov02_0224DCB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r2, #0
    // str r1, [sp, #4]
    // ldr r2, _0224DD28 ; =0x00000E9C
    // add r0, r6, #0
    // mov r1, #0
    // bl memset
    // ldr r0, _0224DD2C ; =0x00000E88
    // mov r1, #4
    // add r0, r6, r0
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // add r0, r6, #0
    // mov r1, #0x86
    // mov r2, #8
    // mov r3, #4
    // bl Field3dModel_LoadFromFilesystem
    // ldr r7, _0224DD30 ; =0x00000E68
    // mov r4, #0
    // add r5, r6, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x86
    // add r1, r4, #4
    // mov r2, #0
    // mov r3, #4
    // bl GfGfxLoader_LoadFromNarc
    // str r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0224DCE0
    // add r4, r6, #0
    // ldr r7, _0224DD30 ; =0x00000E68
    // mov r5, #0
    // add r4, #0x10
    // ldr r2, _0224DD2C ; =0x00000E88
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r6, r2
    // add r3, r6, r7
    // bl ov02_0224DEA8
    // add r5, r5, #1
    // add r4, #0xcc
    // cmp r5, #0x12
    // blt _0224DD02
    // ldr r1, _0224DD34 ; =0x00000E78
    // ldr r0, [sp, #4]
    // str r0, [r6, r1]
    // mov r0, #0
    // add r1, #0x20
    // strh r0, [r6, r1]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224DD28: .word 0x00000E9C
    // _0224DD2C: .word 0x00000E88
    // _0224DD30: .word 0x00000E68
    // _0224DD34: .word 0x00000E78
    // TODO: decompile
}



void ov02_0224DD38(void) {
}



void ov02_0224DD4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r2, #0
    // add r4, r5, #0
    // ldr r7, _0224DD84 ; =0x00000E88
    // mov r6, #0
    // add r4, #0x10
    // add r0, r4, #0
    // add r1, r5, r7
    // bl ov02_0224DEF4
    // add r6, r6, #1
    // add r4, #0xcc
    // cmp r6, #0x12
    // blt _0224DD58
    // add r0, r5, #0
    // bl Field3dModel_Unload
    // ldr r6, _0224DD88 ; =0x00000E68
    // mov r4, #0
    // ldr r0, [r5, r6]
    // bl Heap_Free
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0224DD72
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224DD84: .word 0x00000E88
    // _0224DD88: .word 0x00000E68
    // TODO: decompile
}



void ov02_0224DD8C(void) {
    // push {r4, lr}
    // ldr r1, _0224DDC4 ; =0x00000E98
    // add r4, r2, #0
    // ldrh r0, [r4, r1]
    // cmp r0, #0
    // bne _0224DDC2
    // add r0, r1, #0
    // sub r0, #0x1c
    // ldr r0, [r4, r0]
    // sub r2, r0, #1
    // add r0, r1, #0
    // sub r0, #0x1c
    // str r2, [r4, r0]
    // add r0, r1, #0
    // sub r0, #0x1c
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bge _0224DDBC
    // mov r0, #4
    // sub r1, #0x1c
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov02_0224DF1C
    // add r0, r4, #0
    // bl ov02_0224E008
    // pop {r4, pc}
    // _0224DDC4: .word 0x00000E98
    // TODO: decompile
}



void ov02_0224DDC8(void) {
}



void ov02_0224DDE0(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224DDEC ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224DDF0 ; =ov02_022539D4
    // bx r3
    // nop
    // _0224DDEC: .word Field3dObjectTaskManager_CreateTask
    // _0224DDF0: .word ov02_022539D4
    // TODO: decompile
}



void ov02_0224DDF4(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _0224DE00 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _0224DE04 ; =ov02_022539EC
    // bx r3
    // nop
    // _0224DE00: .word Field3dObjectTaskManager_CreateTask
    // _0224DE04: .word ov02_022539EC
    // TODO: decompile
}



void ov02_0224DE08(void) {
}



void ov02_0224DE10(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // add r4, r1, #0
    // add r5, r2, #0
    // add r6, r3, #0
    // cmp r0, #0
    // beq _0224DE26
    // bl GF_AssertFail
    // ldr r2, [r4, #4]
    // ldr r3, [r4, #8]
    // ldr r1, [r4]
    // add r0, r7, #0
    // add r2, r2, r5
    // add r3, r3, r6
    // bl Field3dObject_SetPosEx
    // add r0, r7, #0
    // mov r4, #0
    // add r5, r7, #0
    // mov r1, #1
    // add r0, #0xc8
    // str r1, [r0]
    // add r5, #0x78
    // add r6, r4, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl Field3dModelAnimation_FrameSet
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, #4
    // blt _0224DE46
    // add r0, r7, #0
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // ldr r0, _0224DE68 ; =SEQ_SE_DP_UG_023
    // bl PlaySE
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224DE68: .word SEQ_SE_DP_UG_023
    // TODO: decompile
}



void ov02_0224DE6C(void) {
    // str r0, [sp]
    // add r0, #0xc8
    // ldr r5, [sp]
    // add r5, #0x78
    Field3dModelAnimation_FrameAdvanceAndCheck(r5, (1 << 0xc));
    // and r4, r0
    // add r5, #0x14
    // ldr r0, [sp]
    // add r0, #0xc8
    // str r1, [r0]
    // ldr r0, [sp]
    Field3dObject_SetActiveFlag(0);
}



void ov02_0224DEA8(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    memset(0, 0xcc);
    // ldr r1, [sp]
    Field3dObject_InitFromModel(r7);
    // add r4, #0x78
    // ldr r1, [sp]
    // ldr r3, [sp, #4]
    ov01_021FBE70(r7, *((u32*)r5));
    Field3dObject_AddAnimation(r7, r4);
    // add r4, #0x14
    Field3dObject_SetActiveFlag(r7, 0);
}



void ov02_0224DEF4(void) {
    // add r5, #0x78
    Field3dModelAnimation_Unload(r0, r1);
    // add r5, #0x14
    memset(r7, 0, 0xcc);
}



void ov02_0224DF1C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #1
    // mov r1, #0x3a
    // mov r2, #3
    // lsl r0, r0, #0xc
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // add r0, r1, #4
    // lsl r2, r2, #0xc
    // sub r1, #8
    // str r2, [r4, r0]
    // ldr r0, [r4, r1]
    // add r1, sp, #0xc
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_CopyPositionVector
    // ldr r0, _0224E004 ; =0x00000E9A
    // ldrh r1, [r4, r0]
    // cmp r1, #0
    // beq _0224DFC6
    // sub r0, #0x22
    // ldr r0, [r4, r0]
    // bl FollowMon_GetMapObject
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // mov r5, #0
    // add r1, r4, #0
    // add r0, r1, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0224DF80
    // mov r3, #0x3a
    // lsl r3, r3, #6
    // add r1, r4, #0
    // mov r0, #0xcc
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // add r1, #0x10
    // mul r0, r5
    // add r0, r1, r0
    // ldr r3, [r4, r3]
    // add r1, sp, #0xc
    // bl ov02_0224DE10
    // b _0224DF88
    // add r5, r5, #1
    // add r1, #0xcc
    // cmp r5, #0x12
    // blt _0224DF5A
    // cmp r5, #0x12
    // bne _0224DF90
    // bl GF_AssertFail
    // mov r0, #0
    // add r2, r4, #0
    // add r1, r2, #0
    // add r1, #0xd8
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _0224DFBC
    // add r2, r4, #0
    // mov r1, #0xcc
    // mov r3, #0x3a
    // add r2, #0x10
    // mul r1, r0
    // add r0, r2, r1
    // lsl r3, r3, #6
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r3, [r4, r3]
    // add r1, sp, #0
    // bl ov02_0224DE10
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r0, #1
    // add r2, #0xcc
    // cmp r0, #0x12
    // blt _0224DF94
    // b _0224DFFA
    // mov r0, #0
    // add r2, r4, #0
    // add r1, r2, #0
    // add r1, #0xd8
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _0224DFF2
    // add r2, r4, #0
    // mov r1, #0xcc
    // mov r3, #0x3a
    // add r2, #0x10
    // mul r1, r0
    // add r0, r2, r1
    // lsl r3, r3, #6
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r3, [r4, r3]
    // add r1, sp, #0xc
    // bl ov02_0224DE10
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r0, #1
    // add r2, #0xcc
    // cmp r0, #0x12
    // blt _0224DFCA
    // bl GF_AssertFail
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _0224E004: .word 0x00000E9A
    // TODO: decompile
}



void ov02_0224E008(void) {
}



void ov02_0224E020(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0224E032
    // cmp r0, #1
    // beq _0224E04A
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4]
    // lsl r2, r1, #2
    // ldr r1, _0224E06C ; =ov02_02253A34
    // ldr r1, [r1, r2]
    // blx r1
    // cmp r0, #1
    // bne _0224E068
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4]
    // lsl r2, r1, #2
    // ldr r1, _0224E070 ; =ov02_02253A04
    // ldr r1, [r1, r2]
    // blx r1
    // ldr r0, [r4, #4]
    // mov r1, #1
    // strh r1, [r0]
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _0224E06C: .word ov02_02253A34
    // _0224E070: .word ov02_02253A04
    // TODO: decompile
}



void ov02_0224E074(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r0, r3, #0
    // mov r1, #0x10
    // add r4, r2, #0
    // bl Heap_Alloc
    // add r6, r0, #0
    // add r2, r6, #0
    // mov r1, #0x10
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0224E08C
    // ldr r1, _0224E0B4 ; =ov02_02253A1C
    // lsl r2, r4, #2
    // ldr r1, [r1, r2]
    // add r0, r7, #0
    // blx r1
    // str r0, [r6]
    // str r5, [r6, #4]
    // ldr r0, _0224E0B8 ; =ov02_0224E020
    // str r4, [r6, #0xc]
    // mov r2, #0
    // add r1, r6, #0
    // strh r2, [r5]
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224E0B4: .word ov02_02253A1C
    // _0224E0B8: .word ov02_0224E020
    // TODO: decompile
}



void ov02_0224E0BC(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // bl ov02_0224E0D4
    // add r2, r0, #0
    // ldr r1, _0224E0D0 ; =ov02_0224E0EC
    // add r0, r4, #0
    // bl TaskManager_Call
    // pop {r4, pc}
    // _0224E0D0: .word ov02_0224E0EC
    // TODO: decompile
}



void ov02_0224E0D4(void) {
}



void ov02_0224E0EC(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E114: ; jump table
    FollowMon_GetMapObject(r6);
    MapObject_UnpauseMovement();
    // str r0, [r4]
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 4)));
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 8)));
    FollowMon_GetMapObject(r6);
    MapObject_PauseMovement();
    // str r0, [r4]
    MapObject_GetXCoord(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0xc)) = r0;
    MapObject_GetZCoord(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x10)) = r0;
    MapObject_GetFacingDirection(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x14)) = r0;
    MapObject_GetXCoord(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x18)) = r0;
    MapObject_GetZCoord(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x1c)) = r0;
    // add r0, #0xc
    // add r1, #0x18
    ov02_0224E224(r4, r4);
    MapObject_SetHeldMovement(*((u32*)(r4 + 4)), r0);
    ov02_0224E2D4(r6);
    MapObject_SetHeldMovement(*((u32*)(r4 + 8)), r0);
    // str r0, [r4]
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 4)));
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 8)));
    // str r0, [r4]
    MapObject_GetFacingDirection(*((u32*)(r4 + 4)));
    ov02_0224E2A0(((r0 << 0x18) >> 0x18));
    MapObject_SetHeldMovement(*((u32*)(r4 + 4)), r0);
    ov02_0224E26C(((*((u32*)(r4 + 0x14)) << 0x18) >> 0x18));
    MapObject_SetHeldMovement(*((u32*)(r4 + 8)), r0);
    // str r0, [r4]
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 4)));
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 8)));
    MapObject_ClearHeldMovementIfActive(*((u32*)(r4 + 4)));
    MapObject_ClearHeldMovementIfActive(*((u32*)(r4 + 8)));
    Heap_Free(r4);
}



void ov02_0224E224(void) {
    GF_AssertFail(*((u32*)(r0 + 4)), *((u32*)(r1 + 4)), *((u32*)r0));
    GF_AssertFail(*((u32*)(r1 + 4)), *((u32*)(r0 + 4)));
    GF_AssertFail();
}



void ov02_0224E26C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E27E: ; jump table
    GF_AssertFail(3);
}



void ov02_0224E2A0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E2B2: ; jump table
    GF_AssertFail(2);
}



void ov02_0224E2D4(void) {
    // sub r0, #0xc
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E2E8: ; jump table
    GF_AssertFail(0xe);
}



void ov02_0224E308(void) {
    // ldr r1, _0224E318 ; =0x00000165
    // cmp r0, r1
    // bne _0224E312
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0224E318: .word 0x00000165
    // TODO: decompile
}



void ov02_0224E31C(void) {
    // sub r0, #0x20
    // asr r2, r0, #4
    // add r2, r0, r2
    // sub r1, #0x20
    // asr r0, r1, #4
    // add r0, r1, r0
    // asr r1, r0, #5
    // asr r2, r2, #5
    // add r0, r1, r0
    // add r0, r2, r0
    // bmi _0224E33C
}



void ov02_0224E340(void) {
}



void ov02_0224E35C(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    Save_LocalFieldData_Get(*((u32*)(r5 + 0xc)));
    LocalFieldData_GetCurrentPosition();
    Save_SafariZone_Get(*((u32*)(r5 + 0xc)));
    ov02_0224E308(*((u32*)*((u32*)(r5 + 0x20))));
    Save_VarsFlags_CheckSafariSysFlag(r6);
    sub_0202F620(r4);
    SafariZone_GetObjectUnlockLevel(r4);
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetXCoord(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    // str r0, [sp, #8]
    GetDeltaXByFacingDirection(r7);
    // add r6, r4, r0
    GetDeltaYByFacingDirection(r7);
    // ldr r1, [sp, #8]
    // add r4, r1, r0
    // add r1, sp, #0x10
    PlayerAvatar_CopyPositionVector(*((u32*)(r5 + 0x40)));
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x18]
    sub_02054774(r5);
    // add r0, sp, #0xc
    // ldrb r0, [r0]
    // add r0, #8
    _fflt(((r4 << 4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    // str r0, [sp, #4]
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    // str r0, [sp, #4]
    // add r0, #8
    _fflt(((r6 << 4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r0, [sp, #4]
    _ffix();
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r1, [sp, #0x14]
    sub_02054774(r5, r4, r0);
    // add r1, sp, #0xc
    // ldrb r1, [r1]
}



void ov02_0224E4CC(void) {
}



void ov02_0224E4DC(void) {
}



void SafariDecoration_CreateArgs(void) {
    Heap_AllocAtEnd(r1, 0x24);
    MI_CpuFill8(0, 0x24);
    FieldSystem_GetSaveData(r5);
    // str r0, [r4]
    // add r1, r5, r0
    *((u32*)(r4 + 4)) = r1;
    // add r0, r5, r0
    *((u32*)(r4 + 0x20)) = ((0x43 << 2) + 5);
    PlayerAvatar_GetState(*((u32*)(r5 + 0x40)));
    *((u8*)(r4 + 0x18)) = ((0 << 0x18) >> 0x18);
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    // str r0, [sp, #0x10]
    PlayerAvatar_GetXCoord(*((u32*)(r5 + 0x40)));
    // asr r0, r0, #0x10
    // str r0, [sp, #0x14]
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    // asr r7, r0, #0x10
    // add r1, sp, #0x20
    PlayerAvatar_CopyPositionVector(*((u32*)(r5 + 0x40)));
    // ldr r0, [sp, #0x14]
    ov02_0224E31C(r7);
    *((u8*)(r4 + 0x19)) = r0;
    // add r0, sp, #0x18
    // str r0, [sp]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x28]
    sub_02054774(r5);
    // str r0, [sp, #0x24]
    // add r1, sp, #0x18
    // ldrb r1, [r1]
    // asr r0, r0, #0xc
    *((u8*)(r4 + 0x1a)) = r4;
    // ldr r0, [sp, #0x10]
    GetDeltaXByFacingDirection(r4);
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    *((u8*)(r4 + 9)) = r0;
    // ldr r0, [sp, #0x10]
    GetDeltaYByFacingDirection();
    // add r0, r7, r0
    *((u8*)(r4 + 0xb)) = r0;
    *((u8*)(r4 + 8)) = 1;
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // add r0, #2
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    ov02_0224E828(r5, r7);
    // add r1, sp, #0x18
    // ldrsh r0, [r1, r0]
    *((u8*)(r4 + 0xd)) = 4;
    // ldrsh r0, [r1, r0]
    *((u8*)(r4 + 0xf)) = 2;
    *((u8*)(r4 + 0xc)) = 1;
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // add r0, #2
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    ov02_0224EB48(r5, r7);
    // add r1, sp, #0x18
    // ldrsh r0, [r1, r0]
    *((u8*)(r4 + 0x11)) = 4;
    // ldrsh r0, [r1, r0]
    *((u8*)(r4 + 0x13)) = 2;
    *((u8*)(r4 + 0x10)) = 1;
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // add r0, #2
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    ov02_0224EE4C(r5, r7);
    // add r1, sp, #0x18
    // ldrsh r0, [r1, r0]
    *((u8*)(r4 + 0x15)) = 4;
    // ldrsh r0, [r1, r0]
    *((u8*)(r4 + 0x17)) = 2;
    *((u8*)(r4 + 0x14)) = 1;
}



void ov02_0224E640(void) {
    Save_PlayerData_GetProfile();
    PlayerProfile_GetTrainerID();
    Save_SafariZone_Get(r4);
    SafariZone_GetObjectUnlockLevel();
    _u32_div_f(r5, 0xa);
    _s32_div_f(((r1 << 0x18) >> 0x18), 3);
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r0, r0, r1
}



void ov02_0224E698(void) {
    PlayerAvatar_GetFacingDirection(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetXCoord(*((u32*)(r5 + 0x40)));
    // asr r6, r0, #0x10
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    // asr r4, r0, #0x10
    // add r1, sp, #0x14
    PlayerAvatar_CopyPositionVector(*((u32*)(r5 + 0x40)));
    Save_SafariZone_Get(*((u32*)(r5 + 0xc)));
    SafariZone_GetAreaSet(0);
    // sub r0, #0x20
    // asr r1, r0, #4
    // add r1, r0, r1
    // sub r0, #0x20
    // asr r3, r0, #4
    // add r3, r0, r3
    // asr r3, r3, #5
    // asr r1, r1, #5
    // add r0, r3, r0
    // add r0, r1, r0
    // mul r0, r1
    // add r0, r2, r0
    PlayerAvatar_GetState(*((u32*)(r5 + 0x40)), ((((r3 >> 0x1b) << 1) << 0x18) >> 0x18), r0, (r3 >> 0x1b));
    ov02_0224E640(*((u32*)(r5 + 0xc)));
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // add r0, sp, #0x10
    // add r0, #2
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov02_0224EE4C(r5, r6, r4, r7);
}



void ov02_0224E754(void) {
    // str r1, [sp]
    PlayerAvatar_GetFacingDirection(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetXCoord(*((u32*)(r4 + 0x40)));
    GetDeltaXByFacingDirection(r6);
    // add r7, r5, r0
    PlayerAvatar_GetZCoord(*((u32*)(r4 + 0x40)));
    GetDeltaYByFacingDirection(r6);
    // add r6, r5, r0
    Save_PlayerData_GetProfile(*((u32*)(r4 + 0xc)));
    PlayerProfile_GetTrainerGender();
    // str r0, [sp, #4]
    ov02_0224E31C(r7, r6);
    // sub r0, r0, r1
    // ror r0, r2
    // add r7, r1, r0
    // sub r0, r0, r1
    // ror r0, r2
    // add r6, r1, r0
    Save_SafariZone_Get(*((u32*)(r4 + 0xc)), (r6 >> 0x1f), 0x1b);
    SafariZone_GetAreaSet(0);
    // mul r1, r5
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldrb r1, [r5]
    // ldr r2, [sp, #4]
    // add r0, sp, #0xc
    GetSafariObjectConfig(*((u8*)(r0 + 1)), 0x7a);
    // add r2, sp, #0xc
    // add r1, r1, r3
    // sub r0, r0, r1
    // ldr r0, [sp]
    // strh r4, [r0]
    // ldrb r0, [r5]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // strh r1, [r0]
}



void ov02_0224E828(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // add r4, r0, #0
    // add r5, r1, #0
    // ldr r0, [sp, #0x84]
    // str r2, [sp, #4]
    // ldr r1, _0224EB44 ; =ov02_02253A4C
    // str r0, [sp, #0x84]
    // ldr r0, [sp, #0x88]
    // ldrb r2, [r1, #2]
    // str r0, [sp, #0x88]
    // ldrb r1, [r1, #3]
    // str r3, [sp, #8]
    // add r0, sp, #0x68
    // strb r2, [r0, #1]
    // strb r1, [r0, #2]
    // ldr r1, [sp, #0x84]
    // ldr r6, [sp, #0x80]
    // strh r5, [r1]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #0x88]
    // strh r2, [r1]
    // ldr r1, [sp, #8]
    // cmp r1, #3
    // bls _0224E85C
    // b _0224EB3E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224E868: ; jump table
    // mov r0, #0
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _0224E87E
    // mov r0, #1
    // b _0224E880
    // ldr r0, [sp, #0x50]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #0
    // str r0, [sp, #0x54]
    // add r0, sp, #0x68
    // add r0, #1
    // ldrsb r0, [r0, r1]
    // ldr r7, [sp, #0x54]
    // str r0, [sp, #0x38]
    // add r0, sp, #0x70
    // ldrb r0, [r0, #0x1c]
    // str r0, [sp, #0x48]
    // lsl r0, r5, #4
    // str r0, [sp, #0x44]
    // add r0, #8
    // str r0, [sp, #0x44]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    // add r1, r7, r0
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x3c]
    // ldr r2, [sp, #0x3c]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl GetMetatileBehavior
    // str r0, [sp, #0x58]
    // ldr r2, [sp, #0x3c]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_020548C0
    // add r1, r0, #0
    // ldr r0, [sp, #0x58]
    // ldr r2, [sp, #0x48]
    // bl ov02_0224EF6C
    // cmp r0, #0
    // beq _0224E95C
    // ldr r0, [sp, #0x3c]
    // lsl r0, r0, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224E8F4
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // str r0, [sp, #0x14]
    // b _0224E904
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // cmp r0, #0
    // ble _0224E91C
    // ldr r0, [sp, #0x40]
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224E92A
    // ldr r0, [sp, #0x40]
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x14]
    // bl _ffix
    // add r3, r0, #0
    // add r0, sp, #0x68
    // str r0, [sp]
    // ldr r2, [sp, #0x5c]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_02054774
    // add r1, sp, #0x68
    // ldrb r1, [r1]
    // cmp r1, #1
    // bne _0224E95C
    // cmp r0, r6
    // bne _0224E95C
    // ldr r0, [sp, #0x50]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x38]
    // add r7, r7, r0
    // ldr r0, [sp, #0x54]
    // add r0, r0, #1
    // str r0, [sp, #0x54]
    // cmp r0, #2
    // blt _0224E8A4
    // ldr r0, [sp, #0x50]
    // cmp r0, #2
    // beq _0224E972
    // b _0224EB3E
    // ldr r0, [sp, #0x84]
    // strh r5, [r0]
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // bne _0224E984
    // ldr r0, [sp, #4]
    // sub r1, r0, #1
    // ldr r0, [sp, #0x88]
    // b _0224E98A
    // ldr r0, [sp, #4]
    // add r1, r0, #2
    // ldr r0, [sp, #0x88]
    // strh r1, [r0]
    // add sp, #0x6c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r1, [sp, #8]
    // cmp r1, #2
    // bne _0224E99C
    // mov r1, #1
    // b _0224E99E
    // mov r1, #2
    // ldrsb r0, [r0, r1]
    // ldr r2, [sp, #4]
    // add r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // add r0, r4, #0
    // add r1, r5, #0
    // bl GetMetatileBehavior
    // str r0, [sp, #0x20]
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_020548C0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // lsl r0, r0, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224E9DC
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // str r0, [sp, #0x10]
    // b _0224E9EC
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // str r0, [sp, #0x10]
    // lsl r0, r5, #4
    // str r0, [sp, #0x2c]
    // add r0, #8
    // str r0, [sp, #0x2c]
    // cmp r0, #0
    // ble _0224EA0A
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224EA18
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r7, r0, #0
    // ldr r0, [sp, #0x10]
    // bl _ffix
    // add r3, r0, #0
    // add r0, sp, #0x68
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl sub_02054774
    // add r7, r0, #0
    // add r0, sp, #0x70
    // ldrb r0, [r0, #0x1c]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x34]
    // bl ov02_0224EF6C
    // cmp r0, #0
    // beq _0224EA56
    // add r0, sp, #0x68
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224EA56
    // cmp r7, r6
    // beq _0224EA5C
    // add sp, #0x6c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // add r7, sp, #0x68
    // lsl r0, r0, #0xc
    // add r7, #1
    // str r0, [sp, #0x4c]
    // mov r0, #0
    // ldrsb r1, [r7, r0]
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x30]
    // ldr r2, [sp, #0x30]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl GetMetatileBehavior
    // str r0, [sp, #0x24]
    // ldr r2, [sp, #0x30]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_020548C0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x30]
    // lsl r0, r0, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224EAAE
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // str r0, [sp, #0xc]
    // b _0224EABE
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // cmp r0, #0
    // ble _0224EAD6
    // ldr r0, [sp, #0x4c]
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224EAE4
    // ldr r0, [sp, #0x4c]
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0xc]
    // bl _ffix
    // add r3, r0, #0
    // add r0, sp, #0x68
    // str r0, [sp]
    // ldr r2, [sp, #0x60]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_02054774
    // str r0, [sp, #0x64]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x34]
    // bl ov02_0224EF6C
    // cmp r0, #0
    // beq _0224EB32
    // add r0, sp, #0x68
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224EB32
    // ldr r0, [sp, #0x64]
    // cmp r0, r6
    // bne _0224EB32
    // ldr r0, [sp, #0x84]
    // strh r5, [r0]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x28]
    // add r1, r1, r0
    // ldr r0, [sp, #0x88]
    // add sp, #0x6c
    // strh r1, [r0]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x28]
    // add r7, r7, #1
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #2
    // blt _0224EA6A
    // mov r0, #0
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // _0224EB44: .word ov02_02253A4C
    // TODO: decompile
}



void ov02_0224EB48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x68
    // add r4, r0, #0
    // ldr r0, [sp, #0x84]
    // str r1, [sp, #4]
    // str r0, [sp, #0x84]
    // ldr r0, [sp, #0x88]
    // ldr r1, _0224EE48 ; =ov02_02253A4C
    // str r0, [sp, #0x88]
    // add r5, r2, #0
    // add r2, r3, #0
    // ldrb r0, [r1]
    // add r3, sp, #0x64
    // ldr r6, [sp, #0x80]
    // strb r0, [r3, #1]
    // ldrb r0, [r1, #1]
    // cmp r2, #3
    // strb r0, [r3, #2]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x84]
    // strh r1, [r0]
    // ldr r0, [sp, #0x88]
    // strh r5, [r0]
    // bls _0224EB7A
    // b _0224EE42
    // add r0, r2, r2
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224EB86: ; jump table
    // cmp r2, #0
    // bne _0224EB96
    // mov r0, #1
    // b _0224EB98
    // mov r0, #2
    // ldrsb r0, [r3, r0]
    // ldr r1, [sp, #4]
    // add r0, r5, r0
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // add r0, r4, #0
    // add r2, r5, #0
    // bl GetMetatileBehavior
    // str r0, [sp, #0x50]
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // add r2, r5, #0
    // bl sub_020548C0
    // str r0, [sp, #0x4c]
    // lsl r0, r5, #4
    // str r0, [sp, #0x24]
    // add r0, #8
    // str r0, [sp, #0x24]
    // cmp r0, #0
    // ble _0224EBD8
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // str r0, [sp, #0x14]
    // b _0224EBE8
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // lsl r0, r0, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224EC04
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224EC12
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r7, r0, #0
    // ldr r0, [sp, #0x14]
    // bl _ffix
    // add r3, r0, #0
    // add r0, sp, #0x64
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl sub_02054774
    // add r7, r0, #0
    // add r0, sp, #0x70
    // ldrb r0, [r0, #0x1c]
    // ldr r1, [sp, #0x4c]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x50]
    // ldr r2, [sp, #0x30]
    // bl ov02_0224EF6C
    // cmp r0, #0
    // beq _0224EC50
    // add r0, sp, #0x64
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224EC50
    // cmp r7, r6
    // beq _0224EC56
    // add sp, #0x68
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x24]
    // add r7, sp, #0x64
    // lsl r0, r0, #0xc
    // add r7, #1
    // str r0, [sp, #0x34]
    // mov r0, #0
    // ldrsb r1, [r7, r0]
    // ldr r0, [sp, #4]
    // add r2, r5, #0
    // sub r0, r0, r1
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    // add r0, r4, #0
    // bl GetMetatileBehavior
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x2c]
    // add r0, r4, #0
    // add r2, r5, #0
    // bl sub_020548C0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // ble _0224ECA4
    // ldr r0, [sp, #0x34]
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // str r0, [sp, #0x10]
    // b _0224ECB4
    // ldr r0, [sp, #0x34]
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // lsl r0, r0, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224ECD0
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224ECDE
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x10]
    // bl _ffix
    // add r3, r0, #0
    // add r0, sp, #0x64
    // str r0, [sp]
    // ldr r2, [sp, #0x54]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_02054774
    // str r0, [sp, #0x58]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x30]
    // bl ov02_0224EF6C
    // cmp r0, #0
    // beq _0224ED2C
    // add r0, sp, #0x64
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224ED2C
    // ldr r0, [sp, #0x58]
    // cmp r0, r6
    // bne _0224ED2C
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x48]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x84]
    // strh r1, [r0]
    // ldr r0, [sp, #0x88]
    // add sp, #0x68
    // strh r5, [r0]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x48]
    // add r7, r7, #1
    // add r0, r0, #1
    // str r0, [sp, #0x48]
    // cmp r0, #2
    // blt _0224EC64
    // b _0224EE42
    // mov r0, #0
    // str r0, [sp, #0x44]
    // cmp r2, #2
    // bne _0224ED4E
    // ldr r0, [sp, #4]
    // sub r0, r0, #2
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // b _0224ED58
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // add r0, sp, #0x70
    // ldrb r0, [r0, #0x1c]
    // ldr r7, [sp, #0xc]
    // str r0, [sp, #0x40]
    // lsl r0, r5, #4
    // str r0, [sp, #0x3c]
    // add r0, #8
    // str r0, [sp, #0x3c]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x38]
    // lsl r0, r7, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x28]
    // add r0, r4, #0
    // add r2, r5, #0
    // bl GetMetatileBehavior
    // str r0, [sp, #0x5c]
    // ldr r1, [sp, #0x28]
    // add r0, r4, #0
    // add r2, r5, #0
    // bl sub_020548C0
    // add r1, r0, #0
    // ldr r0, [sp, #0x5c]
    // ldr r2, [sp, #0x40]
    // bl ov02_0224EF6C
    // cmp r0, #0
    // beq _0224EE20
    // ldr r0, [sp, #0x3c]
    // cmp r0, #0
    // ble _0224EDB4
    // ldr r0, [sp, #0x38]
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // str r0, [sp, #8]
    // b _0224EDC4
    // ldr r0, [sp, #0x38]
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // lsl r0, r0, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224EDE0
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224EDEE
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #8]
    // bl _ffix
    // add r3, r0, #0
    // add r0, sp, #0x64
    // str r0, [sp]
    // ldr r2, [sp, #0x60]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_02054774
    // add r1, sp, #0x64
    // ldrb r1, [r1]
    // cmp r1, #1
    // bne _0224EE20
    // cmp r0, r6
    // bne _0224EE20
    // ldr r0, [sp, #0x44]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x18]
    // add r7, r7, #1
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #2
    // blt _0224ED70
    // ldr r0, [sp, #0x44]
    // cmp r0, #2
    // bne _0224EE42
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x84]
    // strh r1, [r0]
    // ldr r0, [sp, #0x88]
    // add sp, #0x68
    // strh r5, [r0]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x68
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224EE48: .word ov02_02253A4C
    // TODO: decompile
}



void ov02_0224EE4C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r4, [sp, #0x38]
    // str r3, [sp, #0x1c]
    // str r4, [sp, #0x38]
    // ldr r4, [sp, #0x44]
    // ldr r6, [sp, #0x3c]
    // str r4, [sp, #0x44]
    // ldr r4, _0224EF68 ; =ov02_02253A4C
    // ldr r7, [sp, #0x40]
    // ldrb r5, [r4, #4]
    // add r4, sp, #0x20
    // str r0, [sp, #0x10]
    // strb r5, [r4]
    // ldr r4, _0224EF68 ; =ov02_02253A4C
    // ldrb r5, [r4, #5]
    // add r4, sp, #0x20
    // strb r5, [r4, #1]
    // ldr r4, [sp, #0x14]
    // strh r4, [r6]
    // ldr r4, [sp, #0x18]
    // strh r4, [r7]
    // ldr r4, [sp, #0x1c]
    // cmp r4, #3
    // bhi _0224EF60
    // add r4, r4, r4
    // add r4, pc
    // ldrh r4, [r4, #6]
    // lsl r4, r4, #0x10
    // asr r4, r4, #0x10
    // add pc, r4
    // _0224EE8E: ; jump table
    // ldr r4, [sp, #0x38]
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    // ldr r4, [sp, #0x44]
    // str r4, [sp, #0xc]
    // bl ov02_0224E828
    // cmp r0, #0
    // beq _0224EF60
    // mov r4, #0
    // add r5, sp, #0x20
    // ldr r0, [sp, #0x38]
    // mov r1, #0
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0xc]
    // ldrsb r2, [r5, r1]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r1, r1, r2
    // lsl r1, r1, #0x10
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // asr r1, r1, #0x10
    // bl ov02_0224E828
    // cmp r0, #0
    // beq _0224EEF2
    // ldr r0, [sp, #0x14]
    // sub r0, r0, r4
    // strh r0, [r6]
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // bne _0224EEE6
    // ldr r0, [sp, #0x18]
    // sub r0, r0, #1
    // b _0224EEEA
    // ldr r0, [sp, #0x18]
    // add r0, r0, #2
    // add sp, #0x24
    // strh r0, [r7]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #2
    // blt _0224EEAE
    // b _0224EF60
    // ldr r4, [sp, #0x38]
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    // ldr r4, [sp, #0x44]
    // str r4, [sp, #0xc]
    // bl ov02_0224EB48
    // cmp r0, #0
    // beq _0224EF60
    // mov r5, #0
    // add r4, sp, #0x20
    // ldr r0, [sp, #0x38]
    // mov r2, #0
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0xc]
    // ldrsb r3, [r4, r2]
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // sub r2, r2, r3
    // lsl r2, r2, #0x10
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
    // asr r2, r2, #0x10
    // bl ov02_0224EB48
    // cmp r0, #0
    // beq _0224EF58
    // ldr r0, [sp, #0x1c]
    // cmp r0, #2
    // bne _0224EF46
    // ldr r0, [sp, #0x14]
    // sub r0, r0, #2
    // b _0224EF4A
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // strh r0, [r6]
    // ldr r0, [sp, #0x18]
    // add sp, #0x24
    // add r0, r0, r5
    // strh r0, [r7]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r5, r5, #1
    // add r4, r4, #1
    // cmp r5, #2
    // blt _0224EF14
    // mov r0, #0
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224EF68: .word ov02_02253A4C
    // TODO: decompile
}



void ov02_0224EF6C(void) {
    ov02_0224E4CC();
    ov02_0224E4DC();
}



void FieldSystem_FollowMonInteract(void) {
    // ldr r3, _0224EF8C ; =TaskManager_Call
    // ldr r0, [r0, #0x10]
    // ldr r1, _0224EF90 ; =Task_FollowMonInteract
    // mov r2, #0
    // bx r3
    // nop
    // _0224EF8C: .word TaskManager_Call
    // _0224EF90: .word Task_FollowMonInteract
    // TODO: decompile
}



void ov02_0224EF94(void) {
    MapHeader_GetMapSec(*((u32*)*((u32*)(r0 + 0x20))));
    // ldr r0, [r7, r0]
    // add r0, #0x14
    ReadWholeNarcMemberByIdPair((0x12 << 4), 0xde, (r0 + 1));
    // ldr r1, [r7, r0]
    // add r0, r1, r0
    ReadWholeNarcMemberByIdPair((0x9b << 2), 0xde, 0);
    // add r1, sp, #4
    ov02_0224F058(r7);
    // ldr r0, [r7, r0]
    // add r3, sp, #0x20
    // str r0, [sp]
    // add r0, #0x14
    // str r0, [sp]
    // add r1, #0x1e
    // stmia r3!, {r1}
    // add r2, sp, #0x20
    // add r1, r2, r1
    // stmia r1!, {r3}
    // add r2, sp, #0x20
    // add r1, r2, r1
    // stmia r1!, {r3}
    // add r4, sp, #0x20
    // mul r2, r0
    // ldr r0, [sp]
    // add r6, r0, r2
    // add r2, sp, #4
    ov02_0224F108(r7, r6, *((u32*)r4), (0x2a + 1));
    GF_AssertFail(((*((u16*)(r6 + 0xa)) << 0x10) >> 0x16));
}



void ov02_0224F058(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // add r4, r1, #0
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldr r2, [r5, r1]
    // ldr r1, _0224F100 ; =0x0000087E
    // strh r0, [r2, r1]
    // add r0, r6, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldr r2, [r5, r1]
    // ldr r1, _0224F104 ; =0x0000087D
    // strb r0, [r2, r1]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov02_0224F324
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F4BC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F580
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F5D0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F5FC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F644
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F64C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F698
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r3, [r5, r0]
    // ldr r2, _0224F100 ; =0x0000087E
    // add r0, r5, #0
    // ldrh r1, [r3, r2]
    // sub r2, r2, #1
    // ldrb r2, [r3, r2]
    // add r3, r4, #0
    // bl ov02_0224F6AC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov02_0224F728
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // ldr r0, _0224F100 ; =0x0000087E
    // ldrh r0, [r1, r0]
    // add r1, r4, #0
    // bl ov02_0224F76C
    // pop {r4, r5, r6, pc}
    // _0224F100: .word 0x0000087E
    // _0224F104: .word 0x0000087D
    // TODO: decompile
}



void ov02_0224F108(void) {
    LCRandom();
    _s32_div_f(0x64);
    Save_VarsFlags_Get(*((u32*)(r6 + 0xc)));
    Save_VarsFlags_CheckFlagInArray(r7);
    // ldrb r0, [r4]
    // ldrb r1, [r5]
    // ldrsb r1, [r4, r1]
    ov02_02250628(((*((u8*)(r5 + 1)) << 0x1c) >> 0x1c), 0x15);
    ov02_02250594(((*((u8*)(r5 + 1)) << 0x18) >> 0x1c), *((u8*)(r4 + 7)));
    ov02_022506D4(*((u8*)(r5 + 6)), *((u8*)(r4 + 0xa)));
    ov02_02250738(*((u8*)(r5 + 7)), *((u8*)(r4 + 0xb)));
}



void ov02_0224F324(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r1, #0
    // mov r1, #6
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0224F34E
    // mov r1, #1
    // lsl r0, r0, #0x10
    // strb r1, [r5]
    // lsr r0, r0, #0x10
    // mov r1, #5
    // mov r2, #0xb
    // bl GetItemAttr
    // bl ov02_0224F820
    // b _0224F354
    // mov r0, #0
    // strb r0, [r5]
    // mov r0, #8
    // strb r0, [r5, #1]
    // add r0, r7, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // add r0, r7, #0
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // mov r0, #0x64
    // mul r0, r4
    // bl _s32_div_f
    // cmp r0, #0x64
    // bne _0224F380
    // mov r0, #1
    // strb r0, [r5, #2]
    // b _0224F3A2
    // cmp r0, #0x4b
    // blt _0224F38A
    // mov r0, #2
    // strb r0, [r5, #2]
    // b _0224F3A2
    // cmp r0, #0x32
    // blt _0224F394
    // mov r0, #3
    // strb r0, [r5, #2]
    // b _0224F3A2
    // cmp r0, #0x19
    // blt _0224F39E
    // mov r0, #4
    // strb r0, [r5, #2]
    // b _0224F3A2
    // mov r0, #5
    // strb r0, [r5, #2]
    // add r0, r7, #0
    // mov r1, #0xa0
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x88
    // tst r1, r0
    // beq _0224F3B8
    // mov r0, #5
    // strb r0, [r5, #3]
    // b _0224F3FA
    // mov r1, #7
    // tst r1, r0
    // beq _0224F3C4
    // mov r0, #8
    // strb r0, [r5, #3]
    // b _0224F3FA
    // mov r1, #0x10
    // tst r1, r0
    // beq _0224F3D0
    // mov r0, #2
    // strb r0, [r5, #3]
    // b _0224F3FA
    // mov r1, #0x20
    // tst r1, r0
    // beq _0224F3DC
    // mov r0, #3
    // strb r0, [r5, #3]
    // b _0224F3FA
    // mov r1, #0x40
    // tst r1, r0
    // beq _0224F3E8
    // mov r0, #4
    // strb r0, [r5, #3]
    // b _0224F3FA
    // cmp r0, #0
    // bne _0224F3F2
    // mov r0, #1
    // strb r0, [r5, #3]
    // b _0224F3FA
    // bl GF_AssertFail
    // mov r0, #1
    // strb r0, [r5, #3]
    // add r0, r7, #0
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #2
    // cmp r1, #0x32
    // blt _0224F410
    // mov r0, #4
    // strb r0, [r5, #4]
    // b _0224F420
    // sub r0, r0, #2
    // cmp r0, #0x32
    // bgt _0224F41C
    // mov r0, #6
    // strb r0, [r5, #4]
    // b _0224F420
    // mov r0, #5
    // strb r0, [r5, #4]
    // add r0, r7, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // add r0, r7, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // add r6, r0, #0
    // add r0, r4, #0
    // bl ov02_0224F79C
    // strb r0, [r5, #5]
    // add r0, r6, #0
    // bl ov02_0224F79C
    // strb r0, [r5, #6]
    // add r0, r7, #0
    // mov r1, #9
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r5, #7]
    // add r0, r7, #0
    // bl GetMonNature
    // lsl r1, r0, #2
    // ldr r0, _0224F4B4 ; =ov02_02253AC0
    // mov r2, #0
    // ldr r0, [r0, r1]
    // mov r1, #0x6f
    // strb r0, [r5, #8]
    // add r0, r7, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0224F474
    // mov r0, #1
    // b _0224F476
    // mov r0, #2
    // ldr r3, _0224F4B8 ; =ov02_02253A5C
    // strb r0, [r5, #9]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // add r6, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r4, #0
    // str r0, [r2]
    // strb r4, [r5, #0xb]
    // add r5, #0xb
    // ldr r1, [r6]
    // add r0, r7, #0
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r4
    // ldrb r1, [r5]
    // add r4, r4, #1
    // add r6, r6, #4
    // orr r0, r1
    // strb r0, [r5]
    // cmp r4, #5
    // blt _0224F490
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224F4B4: .word ov02_02253AC0
    // _0224F4B8: .word ov02_02253A5C
    // TODO: decompile
}



void ov02_0224F4BC(void) {
    *((u8*)(r1 + 0xc)) = 0;
    *((u8*)(r1 + 0xe)) = 0;
    *((u8*)(r1 + 0xf)) = 0;
    *((u8*)(r1 + 0x10)) = 0;
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 0x40)));
    // str r0, [sp, #4]
    PlayerAvatar_GetZCoord(*((u32*)(r4 + 0x40)));
    // str r0, [sp]
    MapObjectManager_GetObjectCount(*((u32*)(r4 + 0x3c)));
    // str r0, [sp, #8]
    MapObjectManager_GetObjects(*((u32*)(r4 + 0x3c)));
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r7, #0xc
    // ldr r0, [sp, #0x10]
    MapObject_CheckActive(0);
    // ldr r0, [sp, #0x10]
    MapObject_GetXCoord();
    // ldr r0, [sp, #0x10]
    MapObject_GetZCoord();
    // ldr r1, [sp, #4]
    // sub r6, r1, r4
    // ldr r1, [sp]
    // sub r4, r1, r0
    // ldr r0, [sp, #0x10]
    MapObject_GetSpriteID();
    *((u8*)(r5 + 0xf)) = 1;
    *((u8*)(r5 + 0xe)) = 1;
    *((u8*)(r5 + 0x10)) = 1;
    // mvn r0, r0
    // ldr r0, [sp, #0x10]
    MapObject_GetID(0);
    // ldrb r0, [r7]
    // strb r0, [r7]
    // add r0, sp, #0x10
    MapObjectArray_NextObject2((r0 + 1));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0xc]
}



void ov02_0224F580(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    Field_GetBgEvents();
    // ldr r0, [sp]
    Field_GetNumBgEvents();
    // ldrh r0, [r5]
    HiddenItemScriptNoToFlagId(*((u16*)(r5 + 2)));
    // ldr r0, [sp]
    FieldSystem_FlagCheck(r0);
    // add r5, #0x14
    // ldr r0, [sp, #4]
    *((u8*)(r0 + 0xd)) = (r4 + 1);
}



void ov02_0224F5D0(void) {
    Save_LocalFieldData_Get(*((u32*)(r0 + 0xc)));
    LocalFieldData_GetWeatherType();
    *((u8*)(r4 + 0x11)) = 1;
    *((u8*)(r4 + 0x11)) = 3;
    *((u8*)(r4 + 0x11)) = 0;
}



void ov02_0224F5FC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_GetXCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_GetZCoord
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetMetatileBehavior
    // mov r1, #0x12
    // strb r0, [r4, #0x12]
    // lsl r1, r1, #4
    // ldr r2, [r5, r1]
    // ldr r1, _0224F640 ; =0x00000882
    // strh r0, [r2, r1]
    // bl MetatileBehavior_CanGenerateWalkingEncounters
    // cmp r0, #0
    // beq _0224F63A
    // mov r0, #1
    // strb r0, [r4, #0x13]
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // strb r0, [r4, #0x13]
    // pop {r4, r5, r6, pc}
    // _0224F640: .word 0x00000882
    // TODO: decompile
}



void ov02_0224F644(void) {
    *((u16*)(r1 + 0x1a)) = *((u32*)*((u32*)(r0 + 0x20)));
}



void ov02_0224F64C(void) {
    Field_GetTimeOfDay();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F664: ; jump table
    *((u8*)(r4 + 0x14)) = 1;
    *((u8*)(r4 + 0x14)) = 2;
    *((u8*)(r4 + 0x14)) = 3;
    *((u8*)(r4 + 0x14)) = 4;
    *((u8*)(r4 + 0x14)) = 5;
    GF_AssertFail(5);
    *((u8*)(r4 + 0x14)) = 0;
}



void ov02_0224F698(void) {
}



void ov02_0224F6AC(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    GetIdxOfFirstAliveMonInParty_CrashIfNone();
    // add r1, sp, #8
    Party_GetMonAprijuiceModifiers(r4, r0);
    Party_GetMonByIndex(r4, r6);
    // add r0, sp, #0
    // add r2, sp, #8
    CalcMonPokeathlonStars(r0, 0xb);
    // add r0, sp, #0
    // ldrh r2, [r0]
    // add r2, sp, #0
    // ldrh r2, [r2]
    // add r2, sp, #0
    // ldrh r2, [r2]
    // add r2, sp, #0
    // ldrh r2, [r2]
    *((u8*)(r5 + 0x16)) = 5;
}



void ov02_0224F728(void) {
    // add r0, #0xe4
    MapObject_GetFacingDirection(*((u32*)r0));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F744: ; jump table
    *((u8*)(r4 + 0x17)) = 3;
    *((u8*)(r4 + 0x17)) = 4;
    *((u8*)(r4 + 0x17)) = 2;
    *((u8*)(r4 + 0x17)) = 1;
    *((u8*)(r4 + 0x17)) = 0;
}



void ov02_0224F76C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0
    // ble _0224F77C
    // ldr r0, _0224F798 ; =0x000001ED
    // cmp r5, r0
    // ble _0224F782
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // mov r0, #0xe9
    // mov r1, #0
    // mov r2, #0xb
    // bl AllocAtEndAndReadWholeNarcMemberByIdPair
    // sub r1, r5, #1
    // ldrb r1, [r0, r1]
    // strb r1, [r4, #0xa]
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // _0224F798: .word 0x000001ED
    // TODO: decompile
}



void ov02_0224F79C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F7AE: ; jump table
    GF_AssertFail(0x10);
}



void ov02_0224F820(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F832: ; jump table
    GF_AssertFail(3);
}



void ov02_0224F864(void) {
    // push {r4, lr}
    // ldr r1, _0224F87C ; =0x00000884
    // bl Heap_Alloc
    // ldr r2, _0224F87C ; =0x00000884
    // mov r1, #0
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _0224F87C: .word 0x00000884
    // TODO: decompile
}



void ov02_0224F880(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r2, r1, #0
    // ldr r0, _0224F8E4 ; =0x000007E4
    // mov r1, #0xdf
    // add r0, r4, r0
    // sub r2, r2, #1
    // bl ReadWholeNarcMemberByIdPair
    // ldr r0, _0224F8E8 ; =0x00000868
    // mov r1, #0
    // strb r1, [r4, r0]
    // add r2, r0, #1
    // strb r1, [r4, r2]
    // add r2, r0, #3
    // strb r1, [r4, r2]
    // add r2, r0, #4
    // ldrb r3, [r4, r2]
    // mov r2, #0xf
    // add r5, r4, #0
    // bic r3, r2
    // add r2, r0, #4
    // strb r3, [r4, r2]
    // add r2, r0, #2
    // strb r1, [r4, r2]
    // add r2, r0, #5
    // strb r1, [r4, r2]
    // add r0, r0, #6
    // strh r1, [r4, r0]
    // ldr r0, _0224F8E4 ; =0x000007E4
    // ldr r2, _0224F8EC ; =0x0000FFFF
    // ldrh r3, [r5, r0]
    // cmp r3, r2
    // beq _0224F8CC
    // add r1, r1, #1
    // add r5, #8
    // cmp r1, #5
    // blt _0224F8BE
    // ldr r3, _0224F8F0 ; =0x0000086C
    // lsl r1, r1, #0x18
    // ldrb r0, [r4, r3]
    // lsr r1, r1, #0x18
    // mov r2, #0xf0
    // lsl r1, r1, #0x1c
    // bic r0, r2
    // lsr r1, r1, #0x18
    // orr r0, r1
    // strb r0, [r4, r3]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224F8E4: .word 0x000007E4
    // _0224F8E8: .word 0x00000868
    // _0224F8EC: .word 0x0000FFFF
    // _0224F8F0: .word 0x0000086C
    // TODO: decompile
}



void ov02_0224F8F4(void) {
}



void ov02_0224F8FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r2, _0224FB2C ; =0x0000086C
    // add r4, r1, #0
    // ldrb r3, [r4, r2]
    // add r5, r0, #0
    // lsl r2, r3, #0x1c
    // lsr r2, r2, #0x1c
    // mov ip, r2
    // cmp r2, #5
    // blo _0224F93E
    // bl ov02_02250504
    // ldr r1, _0224FB30 ; =0x0000080C
    // ldr r0, [r4, r1]
    // cmp r0, #0
    // beq _0224F920
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r1, #0
    // add r0, #0xa
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0224F92E
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, #0xb
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // beq _0224F93A
    // mov r0, #4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _0224FB2C ; =0x0000086C
    // sub r2, #0x88
    // add r7, r4, r2
    // mov r2, ip
    // lsl r2, r2, #3
    // add r6, r7, r2
    // ldrh r7, [r7, r2]
    // ldr r2, _0224FB34 ; =0x0000FFFF
    // cmp r7, r2
    // bne _0224F980
    // bl ov02_02250504
    // ldr r1, _0224FB30 ; =0x0000080C
    // ldr r0, [r4, r1]
    // cmp r0, #0
    // beq _0224F962
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r1, #0
    // add r0, #0xa
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0224F970
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, #0xb
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // beq _0224F97C
    // mov r0, #4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _0224FB2C ; =0x0000086C
    // sub r2, r2, #3
    // ldrb r2, [r4, r2]
    // cmp r2, #7
    // bls _0224F98C
    // b _0224FB28
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0224F998: ; jump table
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov02_0224FB44
    // cmp r0, #0
    // beq _0224F9CA
    // add r5, #0xe4
    // ldr r0, [r5]
    // bl MapObject_UnpauseMovement
    // ldr r0, _0224FB38 ; =0x00000868
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #5
    // add r0, r0, #1
    // strb r1, [r4, r0]
    // b _0224FB28
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov02_0224FB54
    // cmp r0, #0
    // beq _0224F9E8
    // add r5, #0xe4
    // ldr r0, [r5]
    // bl MapObject_UnpauseMovement
    // ldr r0, _0224FB3C ; =0x00000869
    // mov r1, #2
    // strb r1, [r4, r0]
    // b _0224FB28
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl FollowMon_TryPrintInteractionMessage
    // cmp r0, #0
    // beq _0224FA06
    // add r5, #0xe4
    // ldr r0, [r5]
    // bl MapObject_PauseMovement
    // ldr r0, _0224FB3C ; =0x00000869
    // mov r1, #6
    // strb r1, [r4, r0]
    // b _0224FB28
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov02_0224FC74
    // cmp r0, #0
    // beq _0224FA1A
    // ldr r0, _0224FB3C ; =0x00000869
    // mov r1, #7
    // strb r1, [r4, r0]
    // b _0224FB28
    // ldr r2, _0224FB2C ; =0x0000086C
    // mov r1, #0xf
    // ldrb r3, [r4, r2]
    // add r0, r3, #0
    // bic r0, r1
    // lsl r1, r3, #0x1c
    // lsr r1, r1, #0x1c
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // mov r1, #0xf
    // and r1, r3
    // orr r0, r1
    // strb r0, [r4, r2]
    // mov r1, #0
    // sub r0, r2, #3
    // strb r1, [r4, r0]
    // b _0224FB28
    // add r2, r7, #0
    // bl ov02_02250004
    // cmp r0, #0
    // beq _0224FB28
    // ldr r0, _0224FB3C ; =0x00000869
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0224FB28
    // ldr r0, _0224FB2C ; =0x0000086C
    // add r0, r0, #2
    // ldrh r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl IsPrintFinished
    // cmp r0, #1
    // bne _0224FB28
    // ldr r1, _0224FB2C ; =0x0000086C
    // ldrb r2, [r4, r1]
    // lsl r0, r2, #0x18
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x1c
    // lsr r0, r0, #0x1c
    // add r2, r2, #1
    // cmp r0, r2
    // ble _0224FAA8
    // ldr r0, _0224FB40 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0224FB28
    // add r0, r4, #0
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // bl RemoveWindow
    // ldr r0, [r4, #0x10]
    // bl String_Delete
    // add r0, r5, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x40
    // add r5, #0xd2
    // bic r1, r0
    // strb r1, [r5]
    // ldr r0, _0224FB3C ; =0x00000869
    // mov r1, #3
    // strb r1, [r4, r0]
    // b _0224FB28
    // add r0, r1, #0
    // sub r0, #0x60
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0224FABA
    // mov r2, #3
    // sub r0, r1, #3
    // strb r2, [r4, r0]
    // b _0224FB28
    // ldr r0, _0224FB40 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0224FB28
    // add r0, r4, #0
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // bl RemoveWindow
    // ldr r0, [r4, #0x10]
    // bl String_Delete
    // add r0, r5, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x40
    // add r5, #0xd2
    // bic r1, r0
    // strb r1, [r5]
    // ldr r0, _0224FB3C ; =0x00000869
    // mov r1, #3
    // strb r1, [r4, r0]
    // b _0224FB28
    // ldr r0, _0224FB2C ; =0x0000086C
    // add r0, r0, #1
    // ldrb r1, [r4, r0]
    // ldrb r0, [r6, #7]
    // cmp r1, r0
    // blo _0224FB1A
    // mov r0, #0xf
    // bic r3, r0
    // mov r0, ip
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #0xf
    // and r0, r1
    // add r1, r3, #0
    // orr r1, r0
    // ldr r0, _0224FB2C ; =0x0000086C
    // strb r1, [r4, r0]
    // mov r1, #0
    // sub r0, r0, #3
    // strb r1, [r4, r0]
    // b _0224FB28
    // ldr r0, _0224FB2C ; =0x0000086C
    // add r0, r0, #1
    // ldrb r0, [r4, r0]
    // add r1, r0, #1
    // ldr r0, _0224FB2C ; =0x0000086C
    // add r0, r0, #1
    // strb r1, [r4, r0]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224FB2C: .word 0x0000086C
    // _0224FB30: .word 0x0000080C
    // _0224FB34: .word 0x0000FFFF
    // _0224FB38: .word 0x00000868
    // _0224FB3C: .word 0x00000869
    // _0224FB40: .word gSystem
    // TODO: decompile
}



void ov02_0224FB44(void) {
    // ldrh r0, [r1]
}



void ov02_0224FB54(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // ldr r0, _0224FB98 ; =0x00000882
    // add r4, r2, #0
    // ldrh r0, [r1, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205BB04
    // cmp r0, #0
    // beq _0224FB74
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r2, [r4, #6]
    // cmp r2, #0
    // beq _0224FB92
    // cmp r2, #0xe
    // bls _0224FB82
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r5, #0xe4
    // ldr r1, [r5]
    // sub r2, r2, #1
    // bl ov01_02203AB4
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0224FB98: .word 0x00000882
    // TODO: decompile
}



void FollowMon_TryPrintInteractionMessage(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // add r5, r0, #0
    // ldrh r0, [r6, #2]
    // add r4, r1, #0
    // cmp r0, #0
    // beq _0224FC00
    // mov r0, #1
    // lsl r0, r0, #0xa
    // mov r1, #0xb
    // bl String_New
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // mov r2, #3
    // bl sub_0205B514
    // ldrh r3, [r6, #2]
    // ldr r1, [r4, #0x10]
    // add r0, r5, #0
    // mov r2, #0xb
    // sub r3, r3, #1
    // bl FollowMon_ExpandInteractionMessage
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_0205B564
    // ldr r1, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #1
    // bl sub_0205B5B4
    // ldr r1, _0224FC04 ; =0x0000086E
    // strh r0, [r4, r1]
    // add r0, r5, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x40
    // add r5, #0xd2
    // orr r0, r1
    // strb r0, [r5]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0224FC04: .word 0x0000086E
    // TODO: decompile
}



void ov02_0224FC08(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #1
    // add r4, r1, #0
    // lsl r0, r0, #0xa
    // mov r1, #0xb
    // add r6, r2, #0
    // bl String_New
    // str r0, [r4, #0x10]
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // mov r2, #3
    // bl sub_0205B514
    // ldr r0, _0224FC6C ; =0x00000816
    // mov r2, #0xb
    // ldrb r0, [r4, r0]
    // add r3, r6, #0
    // str r0, [sp]
    // ldr r1, [r4, #0x10]
    // add r0, r5, #0
    // bl ov02_0224FCE0
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_0205B564
    // ldr r1, [r4, #0x10]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #1
    // bl sub_0205B5B4
    // ldr r1, _0224FC70 ; =0x0000086E
    // strh r0, [r4, r1]
    // add r0, r5, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x40
    // add r5, #0xd2
    // orr r0, r1
    // strb r0, [r5]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0224FC6C: .word 0x00000816
    // _0224FC70: .word 0x0000086E
    // TODO: decompile
}



void ov02_0224FC74(void) {
    // ldr r2, _0224FC88 ; =0x0000086D
    // mov r3, #0
    // strb r3, [r0, r2]
    // ldrb r0, [r1, #7]
    // cmp r0, #0
    // beq _0224FC82
    // mov r3, #1
    // add r0, r3, #0
    // bx lr
    // nop
    // _0224FC88: .word 0x0000086D
    // TODO: decompile
}



void FollowMon_ExpandInteractionMessage(void) {
    // str r1, [sp]
    // add r2, #0xee
    NewMsgDataFromNarc(0, 0x1b, 0x1b, r2);
    MessageFormat_New(r4);
    FollowMon_PlaceholdersSet(r6, r0);
    NewString_ReadMsgData(r5, r7);
    // ldr r1, [sp]
    StringExpandPlaceholders(r4, r0);
    String_Delete(r6);
    MessageFormat_Delete(r4);
    DestroyMsgData(r5);
}



void ov02_0224FCE0(void) {
    // str r1, [sp]
    NewMsgDataFromNarc(0, 0x1b, 0x28, r2);
    MessageFormat_New(r4);
    // tst r0, r6
    Save_PlayerData_GetProfile(*((u32*)(r5 + 0xc)));
    BufferPlayersName(r4, 0, r0);
    // tst r0, r1
    // add r2, sp, #0x10
    BufferFashionName(r4, 1, (*((u8*)(r2 + 0x10)) - 1));
    BufferFashionNameWithArticle(r4, 0x20, (*((u8*)(r2 + 0x10)) - 1));
    SaveArray_Party_Get(0x5f);
    GetFirstAliveMonInParty_CrashIfNone();
    Mon_GetBoxMon();
    // str r0, [sp, #4]
    Save_PlayerData_GetProfile(*((u32*)(r5 + 0xc)));
    BufferPlayersName(r4, 0, r0);
    // ldr r2, [sp, #4]
    BufferBoxMonNickname(r4, 1);
    // tst r0, r6
    NewString_ReadMsgData(r7, 0x62);
    // ldr r1, [sp]
    StringExpandPlaceholders(r4, r0);
    String_Delete(r5);
    MessageFormat_Delete(r4);
    DestroyMsgData(r7);
}



void ov02_0224FD9C(void) {
    // add r1, sp, #0
    MapObject_CopyPositionVector(r1);
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldrsb r0, [r5, r0]
    FollowMon_GetSpecies(r4);
    // ldrsb r1, [r5, r1]
    ov01_021F8F74(r4, 3);
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    MapObject_SetPositionVector(r4);
}



void ov02_0224FDF8(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldrb r0, [r0, #5]
    // cmp r0, #0
    // beq _0224FE32
    // cmp r1, #0
    // beq _0224FE32
    // ldr r0, _0224FE38 ; =SEQ_SE_END
    // cmp r1, r0
    // bls _0224FE2C
    // add r0, r0, #1
    // cmp r1, r0
    // bne _0224FE16
    // mov r0, #0
    // b _0224FE18
    // mov r0, #0xb
    // ldr r4, _0224FE3C ; =0x000001FF
    // add r1, r2, #0
    // str r4, [sp]
    // str r3, [sp, #4]
    // add r2, r4, #0
    // add r3, r4, #0
    // bl PlayCryEx
    // add sp, #8
    // pop {r4, pc}
    // add r0, r1, #0
    // bl PlaySE
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0224FE38: .word SEQ_SE_END
    // _0224FE3C: .word 0x000001FF
    // TODO: decompile
}



void ov02_0224FE40(void) {
    // ldrb r0, [r5]
    MapObject_GetFacingDirection(r2);
    // ldrb r1, [r5]
    MapObject_SetFacingDirectionDirect(r4, (r1 - 1));
    ov02_0224FE70(r7, r4, r6);
}



void ov02_0224FE70(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r6, r2, #0
    // bl ov01_022055DC
    // cmp r0, #0
    // beq _0224FEFC
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r6, r0
    // beq _0224FEFC
    // ldr r0, _0224FF00 ; =0x0000087C
    // ldrb r0, [r5, r0]
    // cmp r0, #2
    // beq _0224FE9E
    // cmp r0, #3
    // bne _0224FEFC
    // add r0, r4, #0
    // bl MapObject_GetFieldSystem
    // ldr r1, _0224FF00 ; =0x0000087C
    // add r6, r0, #0
    // ldrb r1, [r5, r1]
    // add r0, r4, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // bl ov02_0224FF04
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl GetMetatileBehavior
    // add r5, r0, #0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _0224FEE0
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov01_021FF0E4
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B6F4
    // cmp r0, #1
    // bne _0224FEFC
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov01_021FF964
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0224FF00: .word 0x0000087C
    // TODO: decompile
}



void ov02_0224FF04(void) {
    MapObject_GetXCoord();
    // str r0, [r4]
    MapObject_GetZCoord(r7);
    // str r0, [r5]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224FF2C: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r4]
    GF_AssertFail((*((u32*)r4) - 1));
}



void ov02_0224FF5C(void) {
    // push {r4, r5, r6, lr}
    // ldr r3, _0224FFCC ; =0x00000818
    // add r5, r0, #0
    // add r2, r3, #0
    // add r2, #0x53
    // ldrb r2, [r5, r2]
    // add r0, r5, r3
    // add r3, #0x52
    // lsl r2, r2, #3
    // add r4, r0, r2
    // ldrb r0, [r5, r3]
    // add r6, r1, #0
    // cmp r0, #0
    // bne _0224FFA8
    // add r0, r4, #0
    // bl ov02_0224FD9C
    // ldr r3, _0224FFD0 ; =0x0000086C
    // add r0, r4, #0
    // ldrb r1, [r5, r3]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x19
    // add r2, r5, r1
    // add r1, r3, #0
    // sub r1, #0x84
    // ldrh r1, [r2, r1]
    // add r2, r3, #0
    // add r2, #0x12
    // add r3, #0x11
    // ldrh r2, [r5, r2]
    // ldrb r3, [r5, r3]
    // bl ov02_0224FDF8
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov02_0224FE40
    // ldr r1, _0224FFD4 ; =0x0000086A
    // ldrb r0, [r5, r1]
    // add r0, r0, #1
    // strb r0, [r5, r1]
    // ldrb r2, [r5, r1]
    // ldrb r0, [r4, #1]
    // cmp r2, r0
    // blo _0224FFC6
    // add r0, r1, #1
    // ldrb r0, [r5, r0]
    // add r2, r0, #1
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _0224FFCC: .word 0x00000818
    // _0224FFD0: .word 0x0000086C
    // _0224FFD4: .word 0x0000086A
    // TODO: decompile
}



void ov02_0224FFD8(void) {
    // ldr r2, _02250000 ; =0x0000086B
    // ldrb r1, [r0, r2]
    // cmp r1, #0xa
    // blo _0224FFE4
    // mov r0, #0
    // bx lr
    // lsl r1, r1, #3
    // add r3, r0, r1
    // add r1, r2, #0
    // sub r1, #0x53
    // ldrb r1, [r3, r1]
    // cmp r1, #0xff
    // bne _0224FFF6
    // mov r0, #0
    // bx lr
    // mov r3, #0
    // sub r1, r2, #1
    // strb r3, [r0, r1]
    // mov r0, #1
    // bx lr
    // _02250000: .word 0x0000086B
    // TODO: decompile
}



void ov02_02250004(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r2, #0
    // bne _02250016
    // bl GF_AssertFail
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _02250108 ; =0x00000868
    // ldrb r1, [r4, r0]
    // cmp r1, #4
    // bhi _02250102
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225002A: ; jump table
    // sub r0, #0x50
    // add r0, r4, r0
    // mov r1, #0xe0
    // sub r2, r2, #1
    // bl ReadWholeNarcMemberByIdPair
    // add r0, r5, #0
    // add r0, #0xe4
    // mov r1, #0x87
    // lsl r1, r1, #4
    // ldr r0, [r0]
    // add r1, r4, r1
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // bl MapObject_GetFacingDirection
    // ldr r1, _0225010C ; =0x0000087C
    // strb r0, [r4, r1]
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov01_021F8F68
    // add r5, #0xe4
    // ldr r0, [r5]
    // mov r1, #1
    // bl ov01_021F8F08
    // ldr r0, _02250108 ; =0x00000868
    // mov r1, #2
    // strb r1, [r4, r0]
    // mov r1, #0
    // add r0, r0, #3
    // strb r1, [r4, r0]
    // b _02250102
    // add r0, r4, #0
    // bl ov02_0224FFD8
    // cmp r0, #0
    // ldr r0, _02250108 ; =0x00000868
    // bne _02250094
    // mov r1, #4
    // strb r1, [r4, r0]
    // b _02250102
    // mov r1, #3
    // strb r1, [r4, r0]
    // add r5, #0xe4
    // ldr r1, [r5]
    // add r0, r4, #0
    // bl ov02_0224FF5C
    // cmp r0, #0
    // beq _02250102
    // ldr r0, _02250108 ; =0x00000868
    // mov r1, #2
    // strb r1, [r4, r0]
    // b _02250102
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // bl MapObject_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov01_021F8F68
    // add r0, r5, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // mov r1, #0
    // bl ov01_021F8F08
    // add r0, r5, #0
    // add r0, #0xe4
    // mov r1, #0x87
    // lsl r1, r1, #4
    // ldr r0, [r0]
    // add r1, r4, r1
    // bl MapObject_SetPositionVector
    // ldr r1, _0225010C ; =0x0000087C
    // add r0, r5, #0
    // add r0, #0xe4
    // ldrb r1, [r4, r1]
    // ldr r0, [r0]
    // bl MapObject_SetFacingDirectionDirect
    // add r5, #0xe4
    // ldr r1, [r5]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl ov02_0224FE70
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02250108: .word 0x00000868
    // _0225010C: .word 0x0000087C
    // TODO: decompile
}



void Task_FollowMonInteract(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r4, r0, #0
    // add r0, r5, #0
    // bl TaskManager_GetStatePtr
    // add r6, r0, #0
    // ldr r0, [r6]
    // cmp r0, #5
    // bls _0225012A
    // b _0225047E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02250136: ; jump table
    // add r0, r4, #0
    // bl ov02_0224EF94
    // add r1, r0, #0
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov02_0224F880
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // b _0225047E
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov02_0224F8FC
    // cmp r0, #1
    // bne _02250178
    // add r4, #0xe4
    // ldr r0, [r4]
    // bl MapObject_PauseMovement
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #2
    // bne _0225018E
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _02250484 ; =0x00000869
    // mov r2, #0xa
    // strb r2, [r1, r0]
    // mov r0, #2
    // str r0, [r6]
    // b _0225047E
    // cmp r0, #3
    // bne _02250198
    // mov r0, #3
    // str r0, [r6]
    // b _0225047E
    // cmp r0, #4
    // bne _02250270
    // mov r0, #4
    // str r0, [r6]
    // b _0225047E
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _02250484 ; =0x00000869
    // ldrb r0, [r1, r0]
    // sub r0, #0xa
    // cmp r0, #3
    // bhi _02250270
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022501BE: ; jump table
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0
    // bl ov01_021F6A9C
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _02250484 ; =0x00000869
    // mov r2, #0xb
    // strb r2, [r1, r0]
    // b _0225047E
    // add r0, r4, #0
    // bl ov01_021F6B00
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov01_021F6B10
    // cmp r5, #3
    // bne _02250270
    // cmp r0, #1
    // bne _02250270
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r5, [r4, r3]
    // mov r3, #0x22
    // mov r1, #3
    // lsl r3, r3, #6
    // add r0, r4, #0
    // add r2, r1, #0
    // add r3, r5, r3
    // bl ov01_021F6ABC
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _02250484 ; =0x00000869
    // mov r2, #0xc
    // strb r2, [r1, r0]
    // b _0225047E
    // add r0, r4, #0
    // bl ov01_021F6B00
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov01_021F6AEC
    // cmp r5, #3
    // bne _02250270
    // cmp r0, #6
    // bne _02250270
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov01_021F6A9C
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _02250484 ; =0x00000869
    // mov r2, #0xd
    // strb r2, [r1, r0]
    // b _0225047E
    // add r0, r4, #0
    // bl ov01_021F6B00
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov01_021F6B10
    // cmp r5, #0
    // bne _02250270
    // cmp r0, #1
    // bne _02250270
    // mov r0, #0x12
    // lsl r0, r0, #4
    // mov r1, #0x22
    // ldr r0, [r4, r0]
    // lsl r1, r1, #6
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _02250272
    // cmp r1, #1
    // beq _022502C4
    // b _0225047E
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl RemoveWindow
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r0, [r0, #0x10]
    // bl String_Delete
    // add r0, r4, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x40
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xd2
    // strb r1, [r0]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // mov r1, #0x81
    // ldr r0, [r4, r0]
    // lsl r1, r1, #4
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // bne _022502BA
    // add r4, #0xe4
    // ldr r0, [r4]
    // bl MapObject_PauseMovement
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov02_0224F880
    // mov r0, #1
    // str r0, [r6]
    // b _0225047E
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl RemoveWindow
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r0, [r0, #0x10]
    // bl String_Delete
    // add r0, r4, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x40
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xd2
    // strb r1, [r0]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r1, _02250488 ; =0x00000812
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // bne _0225030A
    // add r4, #0xe4
    // ldr r0, [r4]
    // bl MapObject_PauseMovement
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov02_0224F880
    // mov r0, #1
    // str r0, [r6]
    // b _0225047E
    // ldr r0, [r4, #0xc]
    // bl Save_FashionData_Get
    // bl Save_FashionData_GetFashionCase
    // add r7, r0, #0
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _0225048C ; =0x00000816
    // ldrb r0, [r1, r0]
    // sub r5, r0, #1
    // bmi _02250332
    // cmp r5, #0x64
    // blt _02250336
    // bl GF_AssertFail
    // add r0, r7, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl sub_0202BA2C
    // cmp r0, #0
    // beq _02250364
    // add r0, r7, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl FashionCase_GiveFashionItem
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #3
    // bl ov02_0224FC08
    // ldr r0, _02250490 ; =SEQ_ME_ACCE
    // bl PlayFanfare
    // b _02250372
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov02_0224FC08
    // mov r0, #5
    // str r0, [r6]
    // b _0225047E
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _02250494 ; =0x00000817
    // ldrb r0, [r1, r0]
    // cmp r0, #5
    // bhi _022503B2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02250392: ; jump table
    // mov r5, #MON_DATA_SHINY_LEAF_A
    // b _022503BA
    // mov r5, #MON_DATA_SHINY_LEAF_B
    // b _022503BA
    // mov r5, #MON_DATA_SHINY_LEAF_C
    // b _022503BA
    // mov r5, #MON_DATA_SHINY_LEAF_D
    // b _022503BA
    // mov r5, #MON_DATA_SHINY_LEAF_E
    // b _022503BA
    // bl GF_AssertFail
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0xc]
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // add r1, r5, #0
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bne _02250404
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // bl SetFlag99C
    // mov r1, #1
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, sp, #0
    // bl SetMonData
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov02_0224FC08
    // ldr r0, _02250490 ; =SEQ_ME_ACCE
    // bl PlayFanfare
    // b _02250412
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov02_0224FC08
    // mov r0, #5
    // str r0, [r6]
    // b _0225047E
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // ldr r0, _02250498 ; =0x0000086E
    // ldrh r0, [r1, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl IsPrintFinished
    // cmp r0, #1
    // bne _0225047E
    // bl IsFanfarePlaying
    // cmp r0, #0
    // bne _0225047E
    // ldr r0, _0225049C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0225047E
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl RemoveWindow
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // ldr r0, [r0, #0x10]
    // bl String_Delete
    // add r0, r4, #0
    // add r0, #0xd2
    // ldrb r1, [r0]
    // mov r0, #0x40
    // bic r1, r0
    // add r0, r4, #0
    // add r0, #0xd2
    // add r4, #0xe4
    // strb r1, [r0]
    // ldr r0, [r4]
    // bl MapObject_PauseMovement
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02250484: .word 0x00000869
    // _02250488: .word 0x00000812
    // _0225048C: .word 0x00000816
    // _02250490: .word SEQ_ME_ACCE
    // _02250494: .word 0x00000817
    // _02250498: .word 0x0000086E
    // _0225049C: .word gSystem
    // TODO: decompile
}



void FollowMon_PlaceholdersSet(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    GetFirstAliveMonInParty_CrashIfNone();
    Mon_GetBoxMon();
    BufferBoxMonNickname(r4, 0, r0);
    BufferBoxMonSpeciesName(r4, 1, r7);
    Save_PlayerData_GetProfile(*((u32*)(r5 + 0xc)));
    BufferPlayersName(r4, 2, r0);
    MapHeader_GetMapSec(*((u32*)*((u32*)(r5 + 0x20))));
    BufferLocationName(r4, 3, r0);
    GetMonData(r6, 6, 0);
    BufferItemName(r4, 4, r0);
}



void ov02_02250504(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // add r4, r0, #0
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl FieldSystem_UnkSub108_GetMonMood
    // mov r1, #0x12
    // str r0, [sp]
    // lsl r1, r1, #4
    // ldr r2, [r5, r1]
    // ldr r1, _0225058C ; =0x00000815
    // ldrsb r1, [r2, r1]
    // add r1, r0, r1
    // str r1, [sp]
    // cmp r1, #0x7f
    // ble _02250538
    // mov r0, #0x7f
    // str r0, [sp]
    // b _02250542
    // mov r0, #0x7e
    // mvn r0, r0
    // cmp r1, r0
    // bge _02250542
    // str r0, [sp]
    // mov r0, #0x42
    // ldr r1, [sp]
    // lsl r0, r0, #2
    // lsl r1, r1, #0x18
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x18
    // bl FieldSystem_UnkSub108_SetMonMood
    // add r0, r4, #0
    // mov r1, #9
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x12
    // str r0, [sp]
    // lsl r1, r1, #4
    // ldr r2, [r5, r1]
    // ldr r1, _02250590 ; =0x00000814
    // ldrsb r1, [r2, r1]
    // add r0, r0, r1
    // str r0, [sp]
    // cmp r0, #0xff
    // ble _02250576
    // mov r0, #0xff
    // str r0, [sp]
    // b _0225057E
    // cmp r0, #0
    // bge _0225057E
    // mov r0, #0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #9
    // add r2, sp, #0
    // bl SetMonData
    // pop {r3, r4, r5, pc}
    // nop
    // _0225058C: .word 0x00000815
    // _02250590: .word 0x00000814
    // TODO: decompile
}



void ov02_02250594(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022505A4: ; jump table
}



void ov02_02250628(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02250638: ; jump table
    // mvn r0, r0
    // mvn r0, r0
    // add r0, #0x14
    // mvn r0, r0
    // add r0, #0x4d
    // mvn r0, r0
    // mvn r0, r0
}



void ov02_022506D4(void) {
    // sub r0, #0xfa
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022506F4: ; jump table
    GF_AssertFail(1);
}



void ov02_02250738(void) {
    // push {r4, r5}
    // sub sp, #8
    // ldr r4, _0225077C ; =ov02_02253A54
    // add r2, sp, #0
    // ldrb r5, [r4]
    // add r3, sp, #0
    // add r0, r2, r0
    // strb r5, [r3]
    // ldrb r5, [r4, #1]
    // sub r0, r0, #1
    // strb r5, [r3, #1]
    // ldrb r5, [r4, #2]
    // strb r5, [r3, #2]
    // ldrb r5, [r4, #3]
    // ldrb r4, [r4, #4]
    // strb r5, [r3, #3]
    // strb r4, [r3, #4]
    // ldrb r0, [r0]
    // mov r3, #0
    // and r0, r1
    // cmp r0, #0
    // bne _0225076C
    // add sp, #8
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // add r3, r3, #1
    // cmp r3, #5
    // blt _02250760
    // mov r0, #0
    // add sp, #8
    // pop {r4, r5}
    // bx lr
    // nop
    // _0225077C: .word ov02_02253A54
    // TODO: decompile
}



void ov02_02250780(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    GetFirstAliveMonInParty_CrashIfNone();
    GetMonData(0xb1, 0);
    GetMonData(r6, 0xb2, 0);
}



void ov02_022507B4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // add r4, r1, #0
    // bl FollowMon_GetSpecies
    // sub r0, #0x32
    // cmp r0, #1
    // bls _022507E0
    // mov r0, #0xb
    // mov r1, #8
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // strh r4, [r2]
    // mov r0, #0
    // strh r0, [r2, #2]
    // ldr r0, [r5, #0x10]
    // ldr r1, _022507E4 ; =ov02_022507E8
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // nop
    // _022507E4: .word ov02_022507E8
    // TODO: decompile
}



void ov02_022507E8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetStatePtr
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #4
    // bhi _022508AA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02250814: ; jump table
    // add r0, r6, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // bl MapObject_UnpauseMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r6, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _022508AA
    // add r6, #0xe4
    // ldr r0, [r6]
    // bl MapObject_PauseMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _022508AA
    // add r0, r6, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // bl MapObject_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // add r6, #0xe4
    // mov r2, #0x14
    // ldr r3, _022508B0 ; =ov02_02253A70
    // mul r2, r1
    // ldr r0, [r6]
    // add r1, r3, r2
    // bl EventObjectMovementMan_Create
    // str r0, [r5, #4]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _022508AA
    // ldr r0, [r5, #4]
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #1
    // bne _022508AA
    // ldr r0, [r5, #4]
    // bl EventObjectMovementMan_Delete
    // ldrh r0, [r5, #2]
    // add r0, r0, #1
    // strh r0, [r5, #2]
    // ldrh r1, [r5, #2]
    // ldrh r0, [r5]
    // cmp r1, r0
    // blo _0225089A
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _022508AA
    // mov r0, #0
    // str r0, [r4]
    // b _022508AA
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _022508B0: .word ov02_02253A70
    // TODO: decompile
}



void ov02_022508B4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb
    // mov r1, #4
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // mov r0, #0
    // strh r0, [r2]
    // strh r0, [r2, #2]
    // ldr r0, [r4, #0x10]
    // ldr r1, _022508D4 ; =ov02_022508D8
    // bl TaskManager_Call
    // mov r0, #1
    // pop {r4, pc}
    // _022508D4: .word ov02_022508D8
    // TODO: decompile
}



void ov02_022508D8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetStatePtr
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #3
    // bls _022508FC
    // b _02250A44
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02250908: ; jump table
    // ldr r3, _02250A4C ; =ov02_02253B24
    // add r2, sp, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldrh r0, [r4, #2]
    // add r0, r0, #1
    // strh r0, [r4, #2]
    // ldrh r0, [r4, #2]
    // bl _dfltu
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A50 ; =0x40A00000
    // mov r0, #0
    // bl _dmul
    // ldr r3, _02250A54 ; =0x40240000
    // mov r2, #0
    // bl _ddiv
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A58 ; =0x40B00000
    // mov r0, #0
    // bl _dadd
    // bl _dfix
    // str r0, [sp, #0xc]
    // ldrh r0, [r4, #2]
    // bl _dfltu
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A50 ; =0x40A00000
    // mov r0, #0
    // bl _dmul
    // ldr r3, _02250A54 ; =0x40240000
    // mov r2, #0
    // bl _ddiv
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A58 ; =0x40B00000
    // mov r0, #0
    // bl _dadd
    // bl _dfix
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #0x3c]
    // bl ov01_021F771C
    // add r1, sp, #0xc
    // bl sub_02023E78
    // ldrh r0, [r4, #2]
    // cmp r0, #0xa
    // blo _02250A44
    // mov r0, #0
    // strh r0, [r4, #2]
    // strh r0, [r4]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02250A44
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // ldrh r0, [r4]
    // cmp r0, #0xa
    // blo _02250A44
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02250A44
    // ldr r3, _02250A5C ; =ov02_02253B30
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldrh r0, [r4, #2]
    // add r0, r0, #1
    // strh r0, [r4, #2]
    // ldrh r1, [r4, #2]
    // cmp r1, #0xa
    // blo _022509CE
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02250A2C
    // mov r0, #0xa
    // sub r0, r0, r1
    // bl _dflt
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A50 ; =0x40A00000
    // mov r0, #0
    // bl _dmul
    // ldr r3, _02250A54 ; =0x40240000
    // mov r2, #0
    // bl _ddiv
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A58 ; =0x40B00000
    // mov r0, #0
    // bl _dadd
    // bl _dfix
    // str r0, [sp]
    // ldrh r1, [r4, #2]
    // mov r0, #0xa
    // sub r0, r0, r1
    // bl _dflt
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A50 ; =0x40A00000
    // mov r0, #0
    // bl _dmul
    // ldr r3, _02250A54 ; =0x40240000
    // mov r2, #0
    // bl _ddiv
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _02250A58 ; =0x40B00000
    // mov r0, #0
    // bl _dadd
    // bl _dfix
    // str r0, [sp, #4]
    // ldr r0, [r6, #0x3c]
    // bl ov01_021F771C
    // add r1, sp, #0
    // bl sub_02023E78
    // b _02250A44
    // bl Heap_Free
    // add sp, #0x18
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _02250A4C: .word ov02_02253B24
    // _02250A50: .word 0x40A00000
    // _02250A54: .word 0x40240000
    // _02250A58: .word 0x40B00000
    // _02250A5C: .word ov02_02253B30
    // TODO: decompile
}


