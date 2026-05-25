/* Decompiled from asm/overlay_01_021E7FDC.s */
#include "global.h"

void UnkFieldSpriteRenderer_ov01_021E7FDC_Init(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // str r1, [sp, #0x10]
    // add r4, r3, #0
    // add r0, r2, #0
    // add r1, r5, #4
    // add r2, r4, #0
    // bl G2dRenderer_Init
    // str r0, [r5]
    // ldr r1, _021E818C ; =0x00000162
    // ldr r0, [sp, #0x10]
    // strh r4, [r5, r1]
    // ldrh r2, [r0, #8]
    // ldr r0, _021E8190 ; =0x0000FFFF
    // cmp r2, r0
    // bne _021E8004
    // mov r2, #4
    // b _021E8006
    // mov r2, #6
    // sub r0, r1, #2
    // strh r2, [r5, r0]
    // bl GF2DGfxResHeader_sizeof
    // mov r1, #0x16
    // lsl r1, r1, #4
    // ldrh r2, [r5, r1]
    // add r3, r0, #0
    // add r0, r4, #0
    // add r1, r2, #0
    // mul r1, r3
    // bl Heap_Alloc
    // add r7, r0, #0
    // mov r0, #0xaf
    // add r1, r4, #0
    // bl NARC_New
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // bls _021E807A
    // ldr r6, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    // add r0, r7, #0
    // bl GF2DGfxResHeader_GetByIndex
    // str r0, [sp, #0x24]
    // mov r0, #1
    // str r0, [sp]
    // ldrh r1, [r6]
    // ldr r0, [sp, #0x20]
    // mov r2, #0
    // add r3, r4, #0
    // bl GfGfxLoader_LoadFromOpenNarc
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r2, r4, #0
    // bl GF2DGfxResHeader_Init
    // ldr r0, [sp, #0x28]
    // bl Heap_Free
    // ldr r0, [sp, #0x1c]
    // add r6, r6, #2
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldrh r0, [r5, r0]
    // ldr r1, [sp, #0x1c]
    // cmp r1, r0
    // blo _021E803C
    // mov r6, #0
    // cmp r0, #0
    // bls _021E80B0
    // str r5, [sp, #0x18]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl GF2DGfxResHeader_GetByIndex
    // bl GF2dGfxResHeader_GetNumObjects
    // add r1, r6, #0
    // add r2, r4, #0
    // bl Create2DGfxResObjMan
    // mov r1, #0x13
    // ldr r2, [sp, #0x18]
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // add r0, r2, #0
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // add r0, r1, #0
    // add r0, #0x30
    // ldrh r0, [r5, r0]
    // add r6, r6, #1
    // cmp r6, r0
    // blo _021E8082
    // mov r1, #0
    // str r1, [sp, #0x14]
    // cmp r0, #0
    // bls _021E80FC
    // add r6, r5, #0
    // ldr r1, [sp, #0x14]
    // add r0, r7, #0
    // bl GF2DGfxResHeader_GetByIndex
    // str r0, [sp, #0x2c]
    // bl GF2dGfxResHeader_GetNumObjects
    // add r1, r4, #0
    // bl Create2DGfxResObjList
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r0, r1, #0
    // mov r2, #0x52
    // sub r0, #0x18
    // lsl r2, r2, #2
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [r6, r2]
    // add r3, r4, #0
    // bl LoadAll2DGfxResObjsFromHeader
    // ldr r0, [sp, #0x14]
    // add r6, r6, #4
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldrh r0, [r5, r0]
    // ldr r1, [sp, #0x14]
    // cmp r1, r0
    // blo _021E80BA
    // mov r6, #0
    // cmp r0, #0
    // bls _021E811A
    // add r0, r7, #0
    // add r1, r6, #0
    // bl GF2DGfxResHeader_GetByIndex
    // bl GF2DGfxResHeader_Reset
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldrh r0, [r5, r0]
    // add r6, r6, #1
    // cmp r6, r0
    // blo _021E8102
    // add r0, r7, #0
    // bl Heap_Free
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl sub_0200ADE4
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl sub_0200B050
    // mov r0, #1
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // ldrh r1, [r1, #0xc]
    // mov r2, #0
    // add r3, r4, #0
    // bl GfGfxLoader_LoadFromOpenNarc
    // mov r3, #0x4e
    // lsl r3, r3, #2
    // ldr r1, [r5, r3]
    // add r2, r3, #0
    // str r1, [sp]
    // add r1, r3, #4
    // ldr r1, [r5, r1]
    // sub r2, #8
    // str r1, [sp, #4]
    // add r1, r3, #0
    // add r1, #8
    // ldr r1, [r5, r1]
    // add r6, r0, #0
    // str r1, [sp, #8]
    // add r1, r3, #0
    // add r1, #0xc
    // ldr r1, [r5, r1]
    // sub r3, r3, #4
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // ldr r3, [r5, r3]
    // add r1, r4, #0
    // bl SpriteResourceHeaderList_Create
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [sp, #0x20]
    // bl NARC_Delete
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E818C: .word 0x00000162
    // _021E8190: .word 0x0000FFFF
    // TODO: decompile
}



void UnkFieldSpriteRenderer_ov01_021E7FDC_Release(void) {
    SpriteList_Delete(*((u32*)r0));
    // ldr r0, [r5, r0]
    SpriteResourceHeaderList_Destroy((0x4b << 2));
    // ldr r0, [r5, r0]
    sub_0200AED4((0x52 << 2));
    // ldr r0, [r5, r0]
    sub_0200B0CC((0x53 << 2));
    // ldrh r0, [r5, r0]
    // ldr r0, [r4, r0]
    Delete2DGfxResObjList((0x52 << 2));
    // ldr r0, [r4, r0]
    Destroy2DGfxResObjMan((0x13 << 4));
    // ldrh r0, [r5, r7]
}



void ov01_021E81F0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x48
    // ldr r5, _021E8294 ; =ov01_022063FC
    // add r2, r0, #0
    // add r4, r1, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0xc
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #6
    // str r0, [r3]
    // mov r0, #4
    // ldrsh r0, [r4, r0]
    // mov r3, #8
    // ldrsh r3, [r4, r3]
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // ldrsh r0, [r4, r1]
    // lsl r3, r3, #0xc
    // str r3, [sp, #8]
    // lsl r0, r0, #0xc
    // ldr r3, [r4, #0x14]
    // str r0, [sp, #4]
    // cmp r3, #2
    // bne _021E8228
    // lsl r1, r1, #0x11
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r0, [r2]
    // mov r3, #0x4b
    // str r0, [sp, #0x18]
    // lsl r3, r3, #2
    // ldr r0, [r2, r3]
    // ldr r1, [r4]
    // ldr r5, [r0]
    // mov r0, #0x24
    // mul r0, r1
    // add r0, r5, r0
    // add r6, sp, #0
    // str r0, [sp, #0x1c]
    // ldmia r6!, {r0, r1}
    // add r5, sp, #0x20
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // add r6, sp, #0xc
    // str r0, [r5]
    // ldmia r6!, {r0, r1}
    // add r5, sp, #0x2c
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #0
    // str r0, [r5]
    // add r0, sp, #0
    // strh r1, [r0, #0x38]
    // ldr r0, [r4, #0xc]
    // add r3, #0x36
    // str r0, [sp, #0x3c]
    // ldr r0, [r4, #0x14]
    // str r0, [sp, #0x40]
    // ldrh r0, [r2, r3]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x18
    // bl Sprite_CreateAffine
    // add r5, r0, #0
    // bne _021E8278
    // bl GF_AssertFail
    // ldrh r1, [r4, #0xa]
    // add r0, r5, #0
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x18]
    // cmp r0, #1
    // beq _021E828E
    // ldr r1, [r4, #0x10]
    // add r0, r5, #0
    // bl Sprite_SetPalIndexRespectVramOffset
    // add r0, r5, #0
    // add sp, #0x48
    // pop {r4, r5, r6, pc}
    // _021E8294: .word ov01_022063FC
    // TODO: decompile
}



void ov01_021E8298(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // str r1, [sp]
    // add r0, r2, #0
    // str r3, [sp, #4]
    // add r1, r7, #4
    // add r2, r3, #0
    // bl G2dRenderer_Init
    // str r0, [r7]
    // ldr r1, _021E8374 ; =0x00000162
    // ldr r0, [sp, #4]
    // strh r0, [r7, r1]
    // ldr r0, [sp]
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // beq _021E82C4
    // ldr r0, [sp]
    // ldr r0, [r0, #0x14]
    // cmp r0, #0
    // bne _021E82DA
    // mov r1, #0x16
    // mov r0, #4
    // lsl r1, r1, #4
    // strh r0, [r7, r1]
    // add r0, r1, #0
    // mov r2, #0
    // sub r0, #0x20
    // str r2, [r7, r0]
    // sub r1, #0x1c
    // str r2, [r7, r1]
    // b _021E82E0
    // mov r2, #6
    // sub r0, r1, #2
    // strh r2, [r7, r0]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldrh r1, [r7, r0]
    // mov r4, #0
    // cmp r1, #0
    // bls _021E8310
    // ldr r5, [sp]
    // add r6, r7, #0
    // ldr r0, [r5]
    // ldr r2, [sp, #4]
    // add r1, r4, #0
    // bl Create2DGfxResObjMan
    // mov r1, #0x13
    // lsl r1, r1, #4
    // str r0, [r6, r1]
    // add r0, r1, #0
    // add r0, #0x30
    // ldrh r1, [r7, r0]
    // add r4, r4, #1
    // add r5, r5, #4
    // add r6, r6, #4
    // cmp r4, r1
    // blo _021E82F0
    // mov r0, #0
    // str r0, [sp, #8]
    // cmp r1, #0
    // bls _021E836E
    // mov r6, #0x52
    // add r5, r7, #0
    // add r4, r0, #0
    // lsl r6, r6, #2
    // ldr r0, [sp]
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _021E8354
    // ldr r1, [sp, #4]
    // bl Create2DGfxResObjList
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // mov r1, #0
    // ldr r0, [r3, #4]
    // cmp r0, #0
    // bls _021E8354
    // add r2, r1, #0
    // ldr r0, [r3]
    // add r1, r1, #1
    // str r4, [r0, r2]
    // ldr r3, [r5, r6]
    // add r2, r2, #4
    // ldr r0, [r3, #4]
    // cmp r1, r0
    // blo _021E8344
    // ldr r0, [sp]
    // add r5, r5, #4
    // add r0, r0, #4
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x16
    // lsl r0, r0, #4
    // ldrh r1, [r7, r0]
    // ldr r0, [sp, #8]
    // cmp r0, r1
    // blo _021E8320
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E8374: .word 0x00000162
    // TODO: decompile
}



void ov01_021E8378(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x30]
    // add r6, r2, #0
    // add r7, r3, #0
    // bl GF2DGfxResObjExistsById
    // cmp r0, #0
    // bne _021E839C
    // bl GF_AssertFail
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x30]
    // add r2, r6, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r3, r7, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r0, _021E83EC ; =0x00000162
    // ldrh r1, [r5, r0]
    // sub r0, #0x2e
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl AddPlttResObjFromNarc
    // add r4, r0, #0
    // beq _021E83E4
    // bl sub_0200B00C
    // cmp r0, #1
    // beq _021E83CC
    // bl GF_AssertFail
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl ov01_021E847C
    // ldr r1, [sp, #0x2c]
    // add r0, r4, #0
    // bl SpriteTransfer_GetPlttOffset
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E83EC: .word 0x00000162
    // TODO: decompile
}



void ov01_021E83F0(void) {
}



void ov01_021E8404(void) {
}



void ov01_021E8418(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x24]
    // add r6, r2, #0
    // add r7, r3, #0
    // bl GF2DGfxResObjExistsById
    // cmp r0, #0
    // bne _021E843C
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x24]
    // add r2, r6, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // add r3, r7, #0
    // str r0, [sp, #4]
    // ldr r0, _021E8478 ; =0x00000162
    // ldrh r1, [r5, r0]
    // sub r0, #0x32
    // str r1, [sp, #8]
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl AddCharResObjFromNarc
    // add r4, r0, #0
    // beq _021E8470
    // bl sub_0200ADA4
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl ov01_021E847C
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021E8478: .word 0x00000162
    // TODO: decompile
}



void ov01_021E847C(void) {
    // str r1, [r5, r2]
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
}



void ov01_021E84B0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [sp, #0x28]
    // add r7, r1, #0
    // lsl r4, r0, #2
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r6, r5, r0
    // ldr r0, [r6, r4]
    // ldr r1, [sp, #0x2c]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // bl GF2DGfxResObjExistsById
    // cmp r0, #0
    // bne _021E84DA
    // bl GF_AssertFail
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, _021E8518 ; =0x00000162
    // add r1, r7, #0
    // ldrh r0, [r5, r0]
    // str r0, [sp, #8]
    // ldr r0, [r6, r4]
    // bl AddCellOrAnimResObjFromNarc
    // add r1, r0, #0
    // beq _021E8510
    // mov r0, #0x52
    // add r2, r5, r4
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // bl ov01_021E847C
    // cmp r0, #1
    // beq _021E8514
    // bl GF_AssertFail
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _021E8518: .word 0x00000162
    // TODO: decompile
}



void ov01_021E851C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x74
    // add r5, r0, #0
    // ldr r0, _021E86F0 ; =0x00000162
    // add r4, r1, #0
    // ldrh r0, [r5, r0]
    // mov r1, #0x10
    // bl Heap_Alloc
    // add r6, r0, #0
    // ldr r0, _021E86F0 ; =0x00000162
    // mov r1, #8
    // ldrh r0, [r5, r0]
    // bl Heap_Alloc
    // str r0, [r6, #8]
    // ldr r0, _021E86F0 ; =0x00000162
    // mov r1, #0x24
    // ldrh r0, [r5, r0]
    // bl Heap_Alloc
    // ldr r1, [r6, #8]
    // add r2, r4, #0
    // str r0, [r1]
    // ldr r0, [r6, #8]
    // mov r1, #0
    // ldr r0, [r0]
    // add r3, sp, #0x2c
    // str r0, [r6, #4]
    // ldr r0, [r2, #0x14]
    // add r1, r1, #1
    // add r2, r2, #4
    // stmia r3!, {r0}
    // cmp r1, #6
    // blt _021E8556
    // mov r1, #5
    // lsl r1, r1, #6
    // ldr r0, [r5, r1]
    // cmp r0, #0
    // beq _021E8574
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // cmp r1, #0
    // bne _021E857E
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // b _021E85B4
    // mov r2, #0
    // ldr r1, [sp, #0x3c]
    // mvn r2, r2
    // cmp r1, r2
    // beq _021E8596
    // bl GF2DGfxResObjExistsById
    // cmp r0, #0
    // bne _021E8596
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // ldr r1, [sp, #0x40]
    // mvn r0, r0
    // cmp r1, r0
    // beq _021E85B4
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl GF2DGfxResObjExistsById
    // cmp r0, #0
    // bne _021E85B4
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x2c]
    // str r0, [sp, #0x10]
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // str r1, [sp, #0x14]
    // add r1, r0, #4
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x18]
    // add r1, r0, #0
    // add r1, #8
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x1c]
    // add r1, r0, #0
    // add r1, #0xc
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x20]
    // add r1, r0, #0
    // add r1, #0x10
    // ldr r1, [r5, r1]
    // add r0, #0x14
    // str r1, [sp, #0x24]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x28]
    // ldr r0, [r6, #4]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x34]
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r5]
    // str r0, [sp, #0x44]
    // ldr r0, [r6, #4]
    // str r0, [sp, #0x48]
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _021E8622
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021E8630
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x4c]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _021E8650
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021E865E
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x50]
    // mov r0, #4
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _021E867E
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021E868C
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // str r0, [sp, #0x54]
    // ldr r0, [r4, #0x10]
    // cmp r0, #2
    // bne _021E86A2
    // mov r0, #3
    // ldr r1, [sp, #0x50]
    // lsl r0, r0, #0x12
    // add r0, r1, r0
    // str r0, [sp, #0x50]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x60]
    // mov r1, #0
    // add r0, sp, #0x2c
    // strh r1, [r0, #0x38]
    // ldr r0, [r4, #8]
    // str r0, [sp, #0x68]
    // ldr r0, [r4, #0x10]
    // str r0, [sp, #0x6c]
    // ldr r0, _021E86F0 ; =0x00000162
    // ldrh r0, [r5, r0]
    // str r0, [sp, #0x70]
    // add r0, sp, #0x44
    // bl Sprite_CreateAffine
    // str r0, [r6]
    // cmp r0, #0
    // beq _021E86E6
    // bl Sprite_GetPalIndex
    // add r5, r0, #0
    // ldrh r1, [r4, #6]
    // ldr r0, [r6]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r1, [r4, #0xc]
    // ldr r0, [r6]
    // add r1, r5, r1
    // bl Sprite_SetPaletteOverride
    // b _021E86EA
    // bl GF_AssertFail
    // add r0, r6, #0
    // add sp, #0x74
    // pop {r3, r4, r5, r6, pc}
    // _021E86F0: .word 0x00000162
    // TODO: decompile
}



void ov01_021E86F4(void) {
    SpriteList_Delete(*((u32*)r0));
    // ldr r0, [r6, r0]
    sub_0200AED4((0x52 << 2));
    // ldr r0, [r6, r0]
    sub_0200B0CC((0x53 << 2));
    // ldrh r0, [r6, r0]
    // ldr r0, [r5, r0]
    Delete2DGfxResObjList((0x52 << 2));
    // ldr r0, [r5, r0]
    Destroy2DGfxResObjMan((0x13 << 4));
    // ldrh r0, [r6, r7]
}


